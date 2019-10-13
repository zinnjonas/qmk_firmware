#include "hotdox.h"
#include "backlight.h"
#include "quantum.h"

extern inline void ergodox_board_led_on(void);
extern inline void ergodox_right_led_1_on(void);
extern inline void ergodox_right_led_2_on(void);
extern inline void ergodox_right_led_3_on(void);

extern inline void ergodox_board_led_off(void);
extern inline void ergodox_right_led_1_off(void);
extern inline void ergodox_right_led_2_off(void);
extern inline void ergodox_right_led_3_off(void);

extern inline void ergodox_led_all_on(void);
extern inline void ergodox_led_all_off(void);

void ergodox_led_init(void);
void ergodox_blink_all_leds(void);

void matrix_init_kb(void) {
  ergodox_blink_all_leds();
  matrix_init_user();
  ergodox_right_led_1_on();
}

void ergodox_blink_all_leds(void)
{
    ergodox_led_all_off();
    ergodox_led_all_set(LED_BRIGHTNESS_HI);
    ergodox_right_led_1_on();
    _delay_ms(50);
     hotdox_left_led_1_on();
     hotdox_leds_update();
     _delay_ms(50);
     hotdox_left_led_2_on();
     hotdox_leds_update();
     _delay_ms(50);
    ergodox_right_led_2_on();
    _delay_ms(50);
    ergodox_right_led_3_on();
    _delay_ms(50);
    ergodox_right_led_1_off();
    _delay_ms(50);
    ergodox_right_led_2_off();
    _delay_ms(50);
    ergodox_right_led_3_off();
     _delay_ms(50);
    hotdox_left_led_1_off();
    hotdox_leds_update();
    _delay_ms(50);
    hotdox_left_led_2_off();
    hotdox_leds_update();
    ergodox_led_all_on();
    _delay_ms(333);
    ergodox_led_all_off();
}

// Runs whenever there is a layer state change.
layer_state_t layer_state_set_user(layer_state_t state) {
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();

  uint8_t layer = biton32(state);
  switch (layer) {
      case 0:
        ergodox_right_led_1_on();
        break;
      case 1:
        ergodox_right_led_2_on();
        break;
      case 2:
        ergodox_right_led_3_on();
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
      case 7:
        break;
      default:
        break;
    }

  return state;
};

void led_set_user(uint8_t usb_led) {
    if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {
      hotdox_left_led_2_on();
    } else {
        hotdox_left_led_2_off();
    }
    if (IS_LED_ON(usb_led, USB_LED_SCROLL_LOCK)) {
        hotdox_left_led_1_on();
    } else {
        hotdox_left_led_1_off();
    }
    if (IS_LED_ON(usb_led, USB_LED_COMPOSE)) {
    } else {
    }
    if (IS_LED_ON(usb_led, USB_LED_KANA)) {
    } else {
    }
    hotdox_leds_update(); 
}