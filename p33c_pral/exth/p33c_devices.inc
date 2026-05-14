.ifndef __33C_DEVICE_IDENTIFIER_MACROS_INC
.equiv	__33C_DEVICE_IDENTIFIER_MACROS_INC, 1
;-------------------------------------------

.equ __33C, 3
.equ __33C_MP, 3

;--------------------------------------------
; Dual Core Devices
;--------------------------------------------
; Device Family Gemini - Main Core 

; -- Devices without CAN FD

.ifdef __33CH64MP202
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH202           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIM         , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH128MP202
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH202           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIM         , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH64MP203
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH203           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIM         , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH128MP203
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH203           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIM         , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH64MP205
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH205           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIM         , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH128MP205
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH205           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIM         , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH64MP206
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH206           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIM         , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH128MP206
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH206           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIM         , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH64MP208
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH208           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIM         , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH128MP208
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH208           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIM         , 1 ; Device family name with MAIN core extension 
.endif

; -- Devices with CAN FD

.ifdef __33CH64MP502
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH502           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIM         , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH128MP502
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH502           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIM         , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH64MP503
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH503           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIM         , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH128MP503
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH503           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIM         , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH64MP505
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH505           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIM         , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH128MP505
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH505           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIM         , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH64MP506
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH506           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIM         , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH128MP506
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH506           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIM         , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH64MP508
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH508           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIM         , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH128MP508
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH508           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIM         , 1 ; Device family name with MAIN core extension 
.endif

;-------------------------------------------
; Device Family Gemini - Secondary Core 

; -- Devices without CAN FD

.ifdef __33CH64MP202S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID secondary core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH202           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIS         , 1 ; Device family name with SECONDARY core extension 
.endif

.ifdef __33CH128MP202S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID secondary core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH202           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIS         , 1 ; Device family name with SECONDARY core extension 
.endif

.ifdef __33CH64MP203S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID secondary core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH203           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIS         , 1 ; Device family name with SECONDARY core extension 
.endif

.ifdef __33CH128MP203S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID secondary core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH203           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIS         , 1 ; Device family name with SECONDARY core extension 
.endif

.ifdef __33CH64MP205S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID secondary core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH205           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIS         , 1 ; Device family name with SECONDARY core extension 
.endif

.ifdef __33CH128MP205S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID secondary core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH205           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIS         , 1 ; Device family name with SECONDARY core extension 
.endif

.ifdef __33CH64MP206S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID secondary core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH206           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIS         , 1 ; Device family name with SECONDARY core extension 
.endif

.ifdef __33CH128MP206S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID secondary core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH206           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIS         , 1 ; Device family name with SECONDARY core extension 
.endif

.ifdef __33CH64MP208S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID secondary core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH208           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIS         , 1 ; Device family name with SECONDARY core extension 
.endif

.ifdef __33CH128MP208S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID secondary core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH208           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIS         , 1 ; Device family name with SECONDARY core extension 
.endif

; -- Devices with CAN FD

.ifdef __33CH64MP502S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID secondary core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH502           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIS         , 1 ; Device family name with SECONDARY core extension 
.endif

.ifdef __33CH128MP502S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID secondary core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH502           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIS         , 1 ; Device family name with SECONDARY core extension 
.endif

.ifdef __33CH64MP503S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID secondary core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH503           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIS         , 1 ; Device family name with SECONDARY core extension 
.endif

.ifdef __33CH128MP503S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID secondary core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH503           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIS         , 1 ; Device family name with SECONDARY core extension 
.endif

.ifdef __33CH64MP505S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID secondary core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH505           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIS         , 1 ; Device family name with SECONDARY core extension 
.endif

.ifdef __33CH128MP505S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID secondary core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH505           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIS         , 1 ; Device family name with SECONDARY core extension 
.endif

.ifdef __33CH64MP506S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID secondary core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH506           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIS         , 1 ; Device family name with SECONDARY core extension 
.endif

.ifdef __33CH128MP506S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID secondary core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH506           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIS         , 1 ; Device family name with SECONDARY core extension 
.endif

.ifdef __33CH64MP508S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID secondary core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH508           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIS         , 1 ; Device family name with SECONDARY core extension 
.endif

.ifdef __33CH128MP508S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID secondary core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH508           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_GEMINI          , 1 ; Device family name
    .equiv __33SMPS_GEMINIS         , 1 ; Device family name with SECONDARY core extension 
.endif

;-------------------------------------------
; Device Family Sagittarius - Main Core 

; -- Devices without CAN FD

.ifdef __33CH256MP205
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH205           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHEM            , 1 ; Device family ID main core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSM    , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH512MP205
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH205           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHEM            , 1 ; Device family ID main core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSM    , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH256MP206
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH206           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHEM            , 1 ; Device family ID main core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSM    , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH512MP206
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH206           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHEM            , 1 ; Device family ID main core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSM    , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH256MP208
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH208           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHEM            , 1 ; Device family ID main core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSM    , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH512MP208
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH208           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHEM            , 1 ; Device family ID main core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSM    , 1 ; Device family name with MAIN core extension 
.endif

; -- Devices with CAN FD

.ifdef __33CH256MP505
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH505           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHEM            , 1 ; Device family ID secondary core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSM    , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH512MP505
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH505           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHEM            , 1 ; Device family ID secondary core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSM    , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH256MP506
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH506           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHEM            , 1 ; Device family ID secondary core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSM    , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH512MP506
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH506           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHEM            , 1 ; Device family ID secondary core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSM    , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH256MP508
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH508           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHEM            , 1 ; Device family ID secondary core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSM    , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH512MP508
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH508           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHEM            , 1 ; Device family ID secondary core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSM    , 1 ; Device family name with MAIN core extension 
.endif

;-------------------------------------------
; Device Family Sagittarius - Secondary Core 

; -- Devices without CAN FD

.ifdef __33CH256MP205S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH205           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHEM            , 1 ; Device family ID main core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSM    , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH512MP205S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID main core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH205           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHES            , 1 ; Device family ID secondary core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSS    , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH256MP206S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID main core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH206           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHES            , 1 ; Device family ID secondary core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSS    , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH512MP206S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID main core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH206           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHES            , 1 ; Device family ID secondary core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSS    , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH256MP208S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID main core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH208           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHES            , 1 ; Device family ID secondary core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSS    , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH512MP208S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID main core
    .equiv __33SMPS_CH2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH208           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHES            , 1 ; Device family ID secondary core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSS    , 1 ; Device family name with MAIN core extension 
.endif

; -- Devices with CAN FD

.ifdef __33CH256MP505S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHM             , 1 ; Device family ID main core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH505           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHEM            , 1 ; Device family ID main core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSM    , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH512MP505S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID main core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH505           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHES            , 1 ; Device family ID secondary core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSS    , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH256MP506S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID main core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH506           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHES            , 1 ; Device family ID secondary core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSS    , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH512MP506S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID main core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH506           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHES            , 1 ; Device family ID secondary core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSS    , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH256MP508S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID main core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH508           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHES            , 1 ; Device family ID secondary core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSS    , 1 ; Device family name with MAIN core extension 
.endif

.ifdef __33CH512MP508S1
    .equiv __33SMPS_CH              , 1 ; Device family ID
    .equiv __33SMPS_CHS             , 1 ; Device family ID main core
    .equiv __33SMPS_CH5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH508           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_CHE             , 1 ; Device family ID with "Extended" flag
    .equiv __33SMPS_CHES            , 1 ; Device family ID secondary core with "Extended" flag
    .equiv __33SMPS_SAGITTARIUS     , 1 ; Device family name
    .equiv __33SMPS_SAGITTARIUSS    , 1 ; Device family name with MAIN core extension 
.endif

;--------------------------------------------
; Single Core Devices
;--------------------------------------------
; Device Family Ara

.ifdef __33CK32MP102
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK1             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK102           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_ARA             , 1 ; Device family name
.endif

.ifdef __33CK64MP102
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK1             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK102           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_ARA             , 1 ; Device family name
.endif

.ifdef __33CK32MP103
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK1             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK103           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_ARA             , 1 ; Device family name
.endif

.ifdef __33CK64MP103
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK1             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK103           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_ARA             , 1 ; Device family name
.endif

.ifdef __33CK32MP105
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK1             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK105           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_ARA             , 1 ; Device family name
.endif

.ifdef __33CK64MP105
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK1             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK105           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_ARA             , 1 ; Device family name
.endif

;-------------------------------------------
; Device Family Sagitta

; -- Devices without CAN FD

.ifdef __33CK32MP202
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK202           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK64MP202
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK202           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK128MP202
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK202           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK256MP202
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK202           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK32MP203
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK203           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK64MP203
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK203           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK128MP203
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK203           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK256MP203
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK203           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK32MP205
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK205           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK64MP205
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK205           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK128MP205
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK205           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK256MP205
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK205           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK32MP206
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK206           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK64MP206
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK206           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK128MP206
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK206           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK256MP206
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK206           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK64MP208
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK208           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK128MP208
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK208           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK256MP208
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK2             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK208           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

; -- Devices with CAN FD

.ifdef __33CK32MP502
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK502           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK64MP502
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK502           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK128MP502
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK502           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK256MP502
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK502           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK32MP503
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK503           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK64MP503
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK503           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK128MP503
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK503           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK256MP503
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK503           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK32MP505
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK505           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK64MP505
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK505           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK128MP505
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK505           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK256MP505
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK505           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK32MP506
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK506           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK64MP506
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK506           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK128MP506
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK506           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK256MP506
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK506           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK64MP508
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK508           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK128MP508
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK508           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

.ifdef __33CK256MP508
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK5             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK508           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTA         , 1 ; Device family name
.endif

;-------------------------------------------
; Device Family Sagitta+

; -- Devices without CAN FD

.ifdef __33CK256MP305
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK3             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH305           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAP        , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK512MP305
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK3             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH305           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAP        , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK256MP306
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK3             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH306           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAP        , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK512MP306
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK3             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH306           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAP        , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK256MP308
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK3             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH308           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAP        , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK512MP308
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK3             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH308           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAP        , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

; -- Devices with CAN FD

.ifdef __33CK256MP605
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK6             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH605           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAP        , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK512MP605
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK6             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH605           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAP        , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK256MP606
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK6             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH606           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAP        , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK512MP606
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK6             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH606           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAP        , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif

.ifdef __33CK256MP608
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK6             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH608           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAP        , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK512MP608
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK6             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH608           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAP        , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

;-------------------------------------------
; Device Family Octans+

.ifdef __33CK256MPT608
    .equiv __33SMPS_CK          , 1 ; Device family ID
    .equiv __33SMPS_CK6         , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK608       , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_OCTANSP     , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif

.ifdef __33CK512MPT608
    .equiv __33SMPS_CK          , 1 ; Device family ID
    .equiv __33SMPS_CK6         , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CK608       , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_OCTANSP     , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif

;-------------------------------------------
; Device Family Sagitta++

; -- Devices without CAN FD

.ifdef __33CK256MP405
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK4             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH405           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK512MP405
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK4             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH405           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK1024MP405
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK4             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH405           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK256MP406
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK4             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH406           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif

.ifdef __33CK512MP406
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK4             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH406           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK1024MP406
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK4             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH406           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK256MP408
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK4             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH408           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK512MP408
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK4             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH408           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK1024MP408
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK4             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH408           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK256MP410
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK4             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH410           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK512MP410
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK4             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH410           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK1024MP410
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK4             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH410           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

; -- Devices with CAN FD

.ifdef __33CK256MP705
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK7             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH705           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK512MP705
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK7             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH705           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK1024MP705
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK7             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH705           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK256MP706
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK7             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH706           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK512MP706
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK7             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH706           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK1024MP706
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK7             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH706           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK256MP708
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK7             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH708           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK512MP708
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK7             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH708           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK1024MP708
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK7             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH708           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK256MP710
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK7             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH710           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK512MP710
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK7             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH710           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif 

.ifdef __33CK1024MP710
    .equiv __33SMPS_CK              , 1 ; Device family ID
    .equiv __33SMPS_CK7             , 1 ; Device family ID with peripheral set code
    .equiv __33SMPS_CH710           , 1 ; Device family ID with peripheral set and pin-count code
    .equiv __33SMPS_SAGITTAPP       , 1 ; Device family name
    .ifndef __33C_EDS 
        .equiv __33C_EDS, 1
    .endif
.endif

.endif  ; end of __33C_DEVICE_IDENTIFIER_MACROS_INC
    
    