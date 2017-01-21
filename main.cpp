#include <stdbool.h>
#include <stdint.h>
#include "nrf_gpio.h"
#include "nrf_delay.h"
#include "nrf_log.h"
#include "nrf_log_ctrl.h"

#define LED_PIN 7
/**
 * @brief Function for application main entry.
 */
int main(void)
{
    nrf_gpio_pin_dir_set(LED_PIN, NRF_GPIO_PIN_DIR_OUTPUT);

    NRF_LOG_INIT(NULL);

    while (true)
    {
        NRF_LOG_INFO("HELLO WORLD\n");
        NRF_LOG_PROCESS();

        nrf_gpio_pin_toggle(LED_PIN);
        nrf_delay_ms(1000);
    }
}
