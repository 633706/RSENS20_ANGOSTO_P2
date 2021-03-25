#include "main.h"

static void LED_task (void *arg)
{
 	LED_init();  
    while (1) {
		LED_ON();
        vTaskDelay(pdMS_TO_TICKS(100));
		LED_OFF();
        vTaskDelay(pdMS_TO_TICKS(100));
    }
}

static void pcCOM_task(void *arg)
{
	UART_init();
    while (1) {
		UART_send(msgTx_PC);
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

void app_main(void)
{
	xTaskCreatePinnedToCore(LED_task, "LED", 1024, NULL, 2, NULL, tskNO_AFFINITY);
    xTaskCreatePinnedToCore(pcCOM_task, "pcCOM", 1024, NULL, 3, NULL, tskNO_AFFINITY);
}
