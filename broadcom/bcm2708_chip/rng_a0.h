#ifndef __BCM2708A0__

// This file was generated by the create_regs script
#define RNG_BASE                                                 0x7e104000
#define RNG_APB_ID                                               0x20726e67
#define RNG_CTRL                                                 HW_REGISTER_RW( 0x7e104000 ) 
   #define RNG_CTRL_MASK                                         0xffffffff
   #define RNG_CTRL_WIDTH                                        32
#define RNG_STATUS                                               HW_REGISTER_RW( 0x7e104004 ) 
   #define RNG_STATUS_MASK                                       0xffffffff
   #define RNG_STATUS_WIDTH                                      32
#define RNG_DATA                                                 HW_REGISTER_RW( 0x7e104008 ) 
   #define RNG_DATA_MASK                                         0xffffffff
   #define RNG_DATA_WIDTH                                        32
#define RNG_FF_THRESHOLD                                         HW_REGISTER_RW( 0x7e10400c ) 
   #define RNG_FF_THRESHOLD_MASK                                 0xffffffff
   #define RNG_FF_THRESHOLD_WIDTH                                32
#define RNG_INT_MASK                                             HW_REGISTER_RW( 0x7e104010 ) 
   #define RNG_INT_MASK_MASK                                     0xffffffff
   #define RNG_INT_MASK_WIDTH                                    32

#else

// This file was generated by the create_regs script
#define RNG_BASE                                                 0x7ee03000
#define RNG_APB_ID                                               0x20726e67
#define RNG_CTRL                                                 HW_REGISTER_RW( 0x7ee03000 ) 
   #define RNG_CTRL_MASK                                         0xffffffff
   #define RNG_CTRL_WIDTH                                        32
#define RNG_STATUS                                               HW_REGISTER_RW( 0x7ee03004 ) 
   #define RNG_STATUS_MASK                                       0xffffffff
   #define RNG_STATUS_WIDTH                                      32
#define RNG_DATA                                                 HW_REGISTER_RW( 0x7ee03008 ) 
   #define RNG_DATA_MASK                                         0xffffffff
   #define RNG_DATA_WIDTH                                        32
#define RNG_FF_THRESHOLD                                         HW_REGISTER_RW( 0x7ee0300c ) 
   #define RNG_FF_THRESHOLD_MASK                                 0xffffffff
   #define RNG_FF_THRESHOLD_WIDTH                                32
#define RNG_INT_MASK                                             HW_REGISTER_RW( 0x7ee03010 ) 
   #define RNG_INT_MASK_MASK                                     0xffffffff
   #define RNG_INT_MASK_WIDTH                                    32

#endif