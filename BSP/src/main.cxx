//1b. Zmodyfikowac program tak aby dioda zapalala sie na 0.1s co 1s
//
// Użyc funkcji do ustawiania stanu wysoiego i niskiego na ledach
// W tym celu znaleźc deklarację BSP_LED_Toggle:
// - (menu kontekstowe na nazwie funkcji: "Open Declaration")
// - poszukac w pliku który się otworzy
// - jka sie nazywa ten plik i co ma wspólnego z plikiem main.cxx?

#include <stm32f4xx_hal.h>
#include <stm32f429i_discovery.h>

int main(void)
{
	BSP_LED_Init(LED3);
	while (true) {
		BSP_LED_On(LED3);
		HAL_Delay(100);
		BSP_LED_Off(LED3);
		HAL_Delay(900);
	}
}
