#include <stdbool.h>
#include <stdint.h>
#include "nrf_delay.h"
#include "nrf_log.h"
#include "nrf_log_ctrl.h"

/**
 * @brief Function for application main entry.
 */
int main(void)
{
    NRF_LOG_INIT(NULL);
    while (true)
    {
        NRF_LOG_INFO("HELLO WORLD\n");
        NRF_LOG_PROCESS();
        nrf_delay_ms(500);
    }
}
