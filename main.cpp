/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "pico/binary_info.h"
#include "pico/stdlib.h"
const uint LED_PIN = PICO_DEFAULT_LED_PIN;

int main() {
#ifndef PICO_DEFAULT_LED_PIN
#warning blink example requires a board with a regular LED
#else
    //Edit this to contain a description and your application name! (This will show up in picotool)
    bi_decl(bi_program_description("This is a sample application made by using a C++ program template"));
    bi_decl(bi_program_name("PicoTemplate"));
    //You can add more information by adding add more 'bi_decl(bi_XXX)' lines here

    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    while (true) {
        gpio_put(LED_PIN, 1);
        sleep_ms(250);
        gpio_put(LED_PIN, 0);
        sleep_ms(250);
    }
#endif
}
