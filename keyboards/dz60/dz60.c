#include "dz60.h"

void matrix_init_kb(void) {
    matrix_init_user();
    led_init_ports();
};

void led_init_ports(void) {
    setPinOutput(B2);
    writePinHigh(B2);
}

void led_set_kb(uint8_t usb_led) {
    if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
<<<<<<< HEAD
        DDRB |= (1 << 2);
        PORTB &= ~(1 << 2);
    } else {
        DDRB &= ~(1 << 2);
        PORTB &= ~(1 << 2);
=======
        writePinLow(B2);
    } else {
        writePinHigh(B2);
>>>>>>> 11c308d436180974b7719ce78cdffdd83a1302c0
    }

    led_set_user(usb_led);
}
