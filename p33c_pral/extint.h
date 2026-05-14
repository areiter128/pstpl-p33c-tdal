
#ifndef EXTINT_H
#define EXTINT_H

#include <stdint.h>
#include <core_p33c.h>

#ifndef UInt
  #if (WORD_SIZE == 64U)
    typedef uint64_t UInt;  // auxiliary data type for CPU independent unsigned integer data type
  #elif (WORD_SIZE == 32U)
    typedef uint32_t UInt;  // auxiliary data type for CPU independent unsigned integer data type
  #elif (WORD_SIZE == 16U)
    typedef uint16_t UInt;  // auxiliary data type for CPU independent unsigned integer data type
  #elif (WORD_SIZE == 8U)
    typedef uint8_t UInt;   // auxiliary data type for CPU independent unsigned integer data type
  #endif
#endif
#ifndef uint_t
  #if (WORD_SIZE == 64U)
    typedef uint64_t uint_t; // auxiliary data type for CPU independent unsigned integer data type
  #elif (WORD_SIZE == 32U)
    typedef uint32_t uint_t; // auxiliary data type for CPU independent unsigned integer data type
  #elif (WORD_SIZE == 16U)
    typedef uint16_t uint_t; // auxiliary data type for CPU independent unsigned integer data type
  #elif (WORD_SIZE == 8U)
    typedef uint8_t uint_t;  // auxiliary data type for CPU independent unsigned integer data type
  #endif
#endif
#ifndef Int
  #if (WORD_SIZE == 64U)
    typedef int64_t Int;    // auxiliary data type for CPU independent unsigned integer data type
  #elif (WORD_SIZE == 32U)
    typedef int32_t Int;    // auxiliary data type for CPU independent unsigned integer data type
  #elif (WORD_SIZE == 16U)
    typedef int16_t Int;    // auxiliary data type for CPU independent unsigned integer data type
  #elif (WORD_SIZE == 8U)
    typedef int8_t Int;     // auxiliary data type for CPU independent unsigned integer data type
  #endif
#endif
#ifndef int_t
  #if (WORD_SIZE == 64U)
    typedef int64_t int_t;  // auxiliary data type for CPU independent unsigned integer data type
  #elif (WORD_SIZE == 32U)
    typedef int32_t int_t;  // auxiliary data type for CPU independent unsigned integer data type
  #elif (WORD_SIZE == 16U)
    typedef int16_t int_t;  // auxiliary data type for CPU independent unsigned integer data type
  #elif (WORD_SIZE == 8U)
    typedef int8_t int_t;   // auxiliary data type for CPU independent unsigned integer data type
  #endif
#endif
#ifndef UINTMAX
  #if (WORD_SIZE == 64U)
    #define UINTMAX UINT64_MAX  // auxiliary data type for CPU independent unsigned integer data type
  #elif (WORD_SIZE == 32U)
    #define UINTMAX UINT32_MAX  // auxiliary data type for CPU independent unsigned integer data type
  #elif (WORD_SIZE == 16U)
    #define UINTMAX UINT16_MAX  // auxiliary data type for CPU independent unsigned integer data type
  #elif (WORD_SIZE == 8U)
    #define UINTMAX UINT8_MAX  // auxiliary data type for CPU independent unsigned integer data type
  #endif
#endif
#ifndef INTMAX
  #if (WORD_SIZE == 64U)
    #define INTMAX INT64_MAX  // auxiliary data type for CPU independent unsigned integer data type
  #elif (WORD_SIZE == 32U)
    #define INTMAX INT32_MAX  // auxiliary data type for CPU independent unsigned integer data type
  #elif (WORD_SIZE == 16U)
    #define INTMAX INT16_MAX  // auxiliary data type for CPU independent unsigned integer data type
  #elif (WORD_SIZE == 8U)
    #define INTMAX INT8_MAX  // auxiliary data type for CPU independent unsigned integer data type
  #endif
#endif
#ifndef INTMIN
  #if (WORD_SIZE == 64U)
    #define INTMIN INT64_MIN  // auxiliary data type for CPU independent unsigned integer data type
  #elif (WORD_SIZE == 32U)
    #define INTMIN INT32_MIN  // auxiliary data type for CPU independent unsigned integer data type
  #elif (WORD_SIZE == 16U)
    #define INTMIN INT16_MIN  // auxiliary data type for CPU independent unsigned integer data type
  #elif (WORD_SIZE == 8U)
    #define INTMIN INT8_MIN  // auxiliary data type for CPU independent unsigned integer data type
  #endif
#endif

    
#endif // EXTINT_H

// _____________________________________
// end of file
    