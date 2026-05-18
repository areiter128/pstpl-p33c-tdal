# RTOS 6G2 {#rtos6g2}

<p><center> <img src="_dox/images/psmod.png" width="100"></p> </center> </p>

## Real-Time Operating System for Real-Time Control Applications

### Class

- PowerSmart&trade; Firmware Framework Component

### Summary

This PowerSmart&trade; Firmware Framework template project serves as template for starting new project based on the PowerSmart&trade; 6G2 RTOS task scheduler.

### Dependencies

This firmware framework component supports devices of product families dsPIC33CK and dsPIC33CH. It requires the following PowerSmart&trade; components:

- dsPIC33C Peripheral Register Abstraction Layer Library (PRAL)

RTOS 6G2 depends on the presence of a generic Device Interface Layer (DIL) Library, allowing dynamic access to all Special Function Registers of the selected target device. This Device Interface Abstraction Layer is provided by the **PowerSmart&trade; dsPIC33C Peripheral Register Abstraction Layer Library**. This interface is used to seamlessly map all resources required by RTOS 6G2 across all dsPIC33 device families without further configuration by the end-user.

If chip resources are configured elsewhere (e.g. using other code generating tools, such as MPLAB&reg; Code Configurator) the provided rtos_Boot() routine can be skipped.

### Required Resources

- RTOS 6G2 requires exclusive ownership over the **Timer1** peripheral as common time base for task scheduling. This peripheral is not available for other software functions.

### Important Notes

- The Device Interface Layer (DIL) provided by the **PRAL Library** is always required to access registers of the **Timer1** peripheral and must be included in the project.

## Quick Start Guide

### Introduction

The RTOS 6G2 is a slim task scheduler with generic task interfaces and built-in task execution diagnostic features as well as trap- and default interrupt handlers allowing the inclusion of proprietary tasks.

It provides two preemptive layers, where two cooperative task queues can be executed in a pseudo-simultaneous fashion. Tasks are classified as either high- or low-priority tasks and put in each respective queue by the scheduler. High-priority tasks can interrupt low-priority tasks but not the other way around.

The main purpose of having two preemptive layers is to ensure tasks on the high-priority layer are executed with minimum execution period jitter, enforcing a stable, deterministic execution period, even if background tasks. such as communication stacks, HMI, self-diagnostics, load monitoring, etc. may include tasks with execution periods spanning across multiple high priority task execution cycles. To keep the task scheduling slim and overall queue execution timing consistent and predictable, multi-threading is explicitly not supported.

### Anatomy of a 6G2 RTOS Project

A RTOS 6G2 application will start up and execute just like a non-RTOS application until rtos_Run() is called. rtos_Run() is normally called from the application's main() function. The RTOS only controls the execution sequencing of tasks after rtos_Run() has been called.

The RTOS also supports the configuration of the fundamental chip resources, such as the main oscillator (OSC), scheduler timer (TMR1), general purpose I/O (GPIO) configuration and the Peripheral Disable Module (PDM) of the target device during system startup. If these chip resources are not initialized by any other startup routine, function rtos_Boot(); must be called to ensure the target device is executing the RTOS correctly. The boot routine of RTOS 6G2 always configures of the system oscillator for maximum performance of the selected target device:

- 100 MIPS for dsPIC33CK and dsPIC33CH Secondary Core
- 90 MIPS for dsPIC33CH Primary Core

The following code examples show a typical main() routine of an application, using RTOS 6G2 to execute proprietary user tasks:

#### Example

```c

    int main(void) 
    {

        volatile uint32_t retval = 1; // return value capturing success/failure of function call
    
        // Initialize basic system configuration
        retval &= rtos_Boot();
    
        // Initialize special, application-specific peripherals
        retval &= sysUserPeripherals_Initialize();

        // Main program execution
        retval &= rtos_Run();
    
        // if the firmware ever ends up here, reset the CPU
        CPU_RESET();

        return (0);

    }
```

### Directory Structure

RTOS 6G2 only partially enforces a specific directory structure to ensure all file dependencies are resolved without modifications of locations of generic files. However, it is recommended to stick to the proposed, relative file system to allow conflict-free inclusion, replacement and mix-and-match of available PowerSmart&trade; firmware framework components with proprietary code modules and inclusion of third-party libraries.

The directories are expected to be found on the same directory hierarchy level:

- **sources** project subdirectory holding all source files of the project
  - **apps** root directory of all application task source files
  - **common** common project files shared across firmware components
  - **config** project-specific firmware configuration
  - **os** exclusive location of the RTOS 6G2 operating system source files

To prevent conflicts with include file paths, it is recommended to add the following relative paths to the Common Include Dirs list in the MPLAB&reg; XC16 project configuration:

- **sources:** common source files directory
- **sources/common:** common project files shared across firmware components
- **sources/common/p33c_pral:** device abstraction layer libraries
- **sources/config:** project-specific firmware configuration

The following image shows the common include directory list of the X IDE project:

<p>
  <center>
    \image html includes.png width=700
    <p><center><i>MPLAB X IDE Project Include Paths</i></center></p>
  </center>
</p>

### Task Scheduling

The two preemptive layers further allow low priority tasks to incorporate their own, private interrupt service routines, which are executed below the real-time middleware layer (high-priority task queue) and the low-priority task layer.

Each task must be registered in the scheduler configuration to be added to a task queue to being managed and executed by the scheduler.

#### Registering and Configuring a User Task

User tasks are registered by adding a task configuration to the file **config/apps.c**. The configuration of a task includes several functions call pointers to task functions dedicated to:

- Task Execution Functions API
  - Initialization
  - Start of the task execution
  - Periodic Execution
  - Stop of the task execution
  - Disposing a task

Optionally, a task may include its own, proprietary exception handler, which is called by the RTOS when a task exception has been detected.

<p style="color:red">
**Important:**
</p>

<p style="color:red">
The RTOS does capture misguided interrupts, traps (hardware exceptions) and task execution timing violations (task exceptions). If a function pointer to a proprietary exception handler is defined, this function will be called after the exception has been captured.
</p>

- Task Event Functions API
  - Exception

Each of the function calls above is optional. If there is no function assigned to a specific startup step or exception, the respective function pointer is initialized with NULL, causing it to be skipped by the scheduler.

The following example configures a task periodically blinking an on-board LED. 

##### Step 1: Adding the main task header file to config/apps.h

Include the main header file of a task in the **config/apps.h** header file to expose its public API to the scheduler. The following example shows the inclusion of four user-tasks:

```c
// APPLICATION LAYER HEADER FILES (PUBLIC USER-TASK FILES)

#include "apps/fault_handler/app_diagnostics.h"
#include "apps/power_control/app_power_control.h"
#include "apps/led/app_led.h"
#include "apps/push_button/app_push_button.h"

```

##### Step 2: Configuring a User Task

The LED task provides the following functions, which are supposed to be called by the scheduler at the appropriate time in the appropriate sequence:

- **appLED_Initialize:** initializes the port output pin, which is used to turn the LED on/off.
- **appLED_Start:** a Start function, initializing the periodic execution of this task
- **appLED_Execute:** the task's main state machine function, which is periodically called by the scheduler
- **Stop function:** (This task does not provide a Stop function, funciton pointer is initialized with NULL)
- **appLED_Dispose:** Resetting the configuration of the port pin to become a high-impedance input, clears all internal task data, stops the periodic execution

- **Events.Exception     = NULL,               ///< Pointer to proprietary task exception event handler function

- **Priority:** APP_PRIORITY_LOW puts this task into the low-priority task queue, being executed on CPU priority 0.

- **Setting.Period:** This task should be executed every 1000 scheduler ticks. At a default execution clock of 10 kHz, this task is called every 100 ms.
- **SettingsOffset:** The periodic execution starts with the very first scheduler tick (no initial execution delay is invoked)

- **Status.Enabled:** Allows to temporarily suspend the execution of the task. The periodic execute function of the task will only be called if Status.Enabled = true. Function calls of Initialize, Start, Stop, Dispose functions are executed, ignoring the Enabled status of the task.

##### Step 3: Adding the task to the Common Scheduler Task List

The following code example shows the configuration of the LED task by using a pre-initialized data structure of type ```IApplicationTask_t```:

```c

volatile IApplicationTask_t appLed = 
{
    .Functions.Initialize = &appLED_Initialize, ///< Pointer to user task INITIALIZATION function
    .Functions.Start      = &appLED_Start,      ///< Pointer to user task INITIALIZATION function
    .Functions.Execute    = &appLED_Execute,    ///< Pointer to user task INITIALIZATION function
    .Functions.Stop       = NULL,               ///< (no function available)
    .Functions.Dispose    = &appLED_Dispose,    ///< Pointer to user task INITIALIZATION function
    
    .Events.Exception     = NULL,               ///< Pointer to proprietary task exception event handler function

    .PropertiesPriority   = APP_PRIORITY_LOW,   ///< Application task lass (high- or low-priority)

    .Properties.Timebase.Period      = 1000,    ///< Task execution period in OS task manager call ticks
    .Properties.Timebase.Offset      = 0,       ///< Task execution offset in OS task manager call ticks
    
    .Status.Enabled       = true                ///< Enable this task right after startup

};
```

All registered tasks are added to the common scheduler task list in **config/apps.c**, which can be found at the end of the file. The following example shows a common task list of multiple registered tasks. The LED task example from above is listed at the top of the list:

```c

volatile IApplicationTask_t* AppTaskQueue[] =
{
    &appLed,          ///< Application Task #0: LED Task
    &appPushButton,   ///< Application Task #3: Push-Button Task
    &appPowerSupply,  ///< Application Task #4: Power Supply Control Task
    &appFaultMonitor  ///< Application Task #5: Fault Monitor Task
};
volatile uint16_t AppTaskQueue_Size = (sizeof(AppTaskQueue)/sizeof(AppTaskQueue[0])); 

```

When the firmware is programmed and run, RTOS 6G2 will first execute the RTOS Boot routine, initializing all essential chip resources. Then, it will call all registered Initialize functions of all tasks listed in the common scheduler task list, followed by all registered Start functions. Then the scheduler will drop into default operation, splitting up low- and high priority tasks queues. The high-priority task queue will be executed in the timer interrupt service routine, enforcing the execution of all tasks configured as APP_CLASS_HIGH_PRIORITY above all tasks configured as APP_CLASS_LOW_PRIORITY.

### Global Exception Handlers

RTOS 6G2 has basic detection of severe execution errors, such as unmaskable interrupts (CPU Exceptions, commonly called Traps), unresolved interrupt vector calls (Default Interrupt Handler) and tasks queue execution on cooperative layers. Each of these detection mechanisms are covered by default handler functions inside the RTOS 6G2 source files. However, they are only set up to detect and resolve an issue to allow the CPU to continue the execution of the application. It does not log or resolve issues caused by individual tasks.

It is therefore recommended to Override these default error handler functions in user code with application specific, meaningful handlers.

The three main functions provided are:

#### ``` void CpuExceptionHandler(CPU_EXCEPTION_t ex) ```

This function captures all unmaskable interrupts, such Hard- and Soft Traps, Oscillator Failures, Address Errors, Math Errors and DMA Errors. The function parameter **ex** of type ```CPU_EXCEPTION_t``` contains the information captured about the task invoking the exception:

- **TrapId:** Identifier indicating the type of unmaskable interrupt source
- **TaskInfo**: Task ID and task queue ID of the task which was executed by the scheduler when the trap occurred
- **ResetCount:** (read only) Number of CPU resets invoked by the RTOS 6G2 exception handler
- **TrapCount:** (read only) Counter tracking the number of trap occurrences
- **CpuStatus:** (real only) Captured list  of all CPU interrupt registers at the time when the trap occurred

The function declared in the source files of the RTOS 6G2 sources files is declared as ```weak``` and can be overridden by any other function with the same name. The following example shows how a user function can be created in proprietary user code space to override the default exception handler routine:

```c
void CpuExceptionHandler(CPU_EXCEPTION_t ex)
{
    /* place user event handler code */
}

```

#### ``` void InterruptExceptionHandler(IRQ_EXCEPTION_t ex) ```

This function captures all interrupts, which are invoked by the interrupt controller but do not have an interrupt service routine assigned to the respective interrupt vector. If these uninitialized interrupts are not handled, a condition similar to an address error trap occurs, which will reset the CPU. This default interrupt handler routine prevents the CPU from resetting and allows capturing of the interrupt source going rogue.

The function parameter **ex** of type ```IRQ_EXCEPTION_t``` contains the information captured about the interrupt invoking the exception. The captured information mirrors the status of the Interrupt Enable as well as the Interrupt Flag bit registers. Users must refer to the respective device data sheet to resolve the interrupt group (IFS register) and value (respective register bit within the IFS register) to resolve the source of the misdirected interrupt call.

- **Group:** Identifies the interrupt group which triggered the default interrupt event
- **Value** Identifies the value of the interrupt group, allowing to trace back the specific interrupt vector which triggered the default interrupt event

The function declared in the source files of the RTOS 6G2 sources files is declared as ```weak``` and can be overridden by any other function with the same name. The following example shows how a user function can be created in proprietary user code space to override the default exception handler routine:

```c
void InterruptExceptionHandler(CPU_EXCEPTIONS_t ex)
{
    /* place user event handler code */
}

```

#### ``` void TaskExceptionHandler(TASK_EXCEPTION_t ex) ```

This function captures all task error events occurring while executing task queues on both, high- and low-priority level. A task error event is invoked, when a task function returns an error/fault (return value = 0), task queues become unresponsive. or the overall task scheduler time base counter gets corrupted.

The function parameter **ex** of type ```TASK_EXCEPTION_t``` contains  information captured about the event and/or task invoking the exception:

- **ExId**: Exception Identifier
  - OS_TASKEX_LOW_PRIORITY_TIMEOUT is invoked when the low-priority task queue becomes unresponsive. This event is invoked by the high-priority task level overlooking the low-priority task layer. <br><br>

  - OS_TASKEX_HIGH_PRIORITY_TIMEOUT is invoked when the high-priority task queue becomes unresponsive. This event is invoked by the low-priority task level being timed by the high-priority task layer. <br><br>

  - OS_TASKEX_HIGH_PRIORITY_QUOTA_VIOLATION is invoked when the high-priority task queue exceeds the schedule base clock period. This event corrupts the task timer counter update of all tasks indicating a corruption of the overall task execution timing. <br><br>

  - OS_TASKEX_TASK_RET_ERROR is invoked when a task function returns an error/failure (return value = 0). <br><br>

- **TaskInfo**: Pointer to the application task object which triggered the event. 

**Please note:**
TaskInfo will only be captured in events triggered by a specific task. Queue or scheduler timer corruption events do not capture specific tasks. Hence, in these events the pointer to the application task object TaskInfo will be NULL.

The functions declared in the source files of the RTOS 6G2 are declared as ```weak``` and can be overridden by any other function with the same name. The following example shows how a user function can be created in proprietary user code space to override the default exception handler routine:

```c
void TaskExceptionHandler(TASK_EXCEPTION_t ex)
{
    /* place user event handler code */
    switch (ex.ExId)
    {
        case OS_TASKEX_LOW_PRIORITY_TIMEOUT:
            /* do something */
            break;
        case OS_TASKEX_HIGH_PRIORITY_TIMEOUT:
            /* do something */
            break;
        case OS_TASKEX_HIGH_PRIORITY_QUOTA_VIOLATION:
            /* do something */
            break;
        case OS_TASKEX_TASK_RET_ERROR:
            /* do something */
            break;
        default:
            /* do something */
            break;
    }
}

```

### Required Tools

- (none)

### Additional Resources

- (none)

---

&copy; 2026, Microchip Technology Inc.
