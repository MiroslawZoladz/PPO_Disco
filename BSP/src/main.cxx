//1c. Zmienić diodę na inną dostepną na płytce
// Nazwe diody znaeźć w sposób analogiczny ja nazwe funkcji w poprzednim zadaniu

#include <stm32f4xx_hal.h>
#include <stm32f429i_discovery.h>

int main(void)
{
	BSP_LED_Init(LED4);
	while (true) {
		BSP_LED_On(LED4);
		HAL_Delay(100);
		BSP_LED_Off(LED4);
		HAL_Delay(900);
	}
}
