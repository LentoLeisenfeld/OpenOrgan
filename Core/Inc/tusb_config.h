#ifndef TUSB_CONFIG_H_
#define TUSB_CONFIG_H_

#ifdef __cplusplus
 extern "C" {
#endif

//--------------------------------------------------------------------+
// Board Specific Configuration
//--------------------------------------------------------------------+

#define BOARD_TUD_RHPORT      0                 // Full-speed OTG FS
#define BOARD_TUD_MAX_SPEED   OPT_MODE_FULL_SPEED

//--------------------------------------------------------------------+
// Common Configuration
//--------------------------------------------------------------------+

#define CFG_TUSB_MCU          OPT_MCU_STM32F7
#define CFG_TUSB_OS           OPT_OS_NONE
#define CFG_TUSB_DEBUG        0

// Enable Device stack
#define CFG_TUD_ENABLED       1
#define CFG_TUD_MAX_SPEED     BOARD_TUD_MAX_SPEED

// USB DMA alignment for STM32
#define CFG_TUSB_MEM_SECTION
#define CFG_TUSB_MEM_ALIGN    __attribute__ ((aligned(4)))

//--------------------------------------------------------------------+
// Device Configuration
//--------------------------------------------------------------------+

#define CFG_TUD_ENDPOINT0_SIZE    64

//------------- Class -------------//
#define CFG_TUD_CDC               0
#define CFG_TUD_MSC               0
#define CFG_TUD_HID               0
#define CFG_TUD_MIDI              1
#define CFG_TUD_VENDOR            0

#define CFG_TUD_MIDI_RX_BUFSIZE   64
#define CFG_TUD_MIDI_TX_BUFSIZE   64

//--------------------------------------------------------------------+
// RHPort0 Mode
//--------------------------------------------------------------------+

#define CFG_TUSB_RHPORT0_MODE     OPT_MODE_DEVICE
#define CFG_TUSB_RHPORT0_SPEED    OPT_MODE_FULL_SPEED

#ifdef __cplusplus
 }
#endif

#endif /* TUSB_CONFIG_H_ */
