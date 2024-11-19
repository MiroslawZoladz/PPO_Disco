#include <stdio.h>

#include <stm32f429i_discovery_lcd.h>

#include "LedLcd.h"

#define TILE_SIZE 80

LedLcd::LedLcd(int column) {
	BSP_LCD_SetFont(&Font24);
	this->column = column;
}

void
LedLcd::drawLed(int row, bool on)
{
	short x, y;
	uint8_t text[2];

	x = this->column * TILE_SIZE;
	y = row * TILE_SIZE;

	BSP_LCD_SetTextColor(on? LCD_COLOR_MAGENTA : LCD_COLOR_LIGHTGRAY);

	BSP_LCD_FillRect(x, y, TILE_SIZE, TILE_SIZE);

	BSP_LCD_SetTextColor(LCD_COLOR_GREEN);
	BSP_LCD_DrawRect(x, y, TILE_SIZE, TILE_SIZE);

	BSP_LCD_SetBackColor(LCD_COLOR_RED);
	BSP_LCD_SetTextColor(LCD_COLOR_WHITE);

	snprintf((char *) text, sizeof(text), "%d", row);
	BSP_LCD_DisplayStringAt(x, y, text, LEFT_MODE);

}

void LedLcd::On(int ledIndex)
{
	int ledCounter;

	for (ledCounter = 0; ledCounter < 4; ledCounter++)
		this->drawLed(ledCounter, ledCounter == ledIndex);
}
