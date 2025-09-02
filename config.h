#pragma once

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 9  // must match max columns we declared in info.json


/* Split configuration */
#define SPLIT_USB_DETECT
#define EE_HANDS

/* Serial (split) driver configuration - Full duplex on RP2040 using USART-style defines.
   We use the full-duplex defines and set the TX/RX pins to GP0/G P1 as you asked.
   The RP2040 PIO implementation supports full-duplex and arbitrary GP pins.
*/
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

/* Optional space-saving */
#define NO_ACTION_ONESHOT