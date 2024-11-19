#include <stm32f429i_discovery_ts.h>

#include "Keyboard.h"

#define  TILE_SIZE 80

static bool inColumn(int x, int column)
{
	return (x >= (column * TILE_SIZE))
			&& (x < (column+1) * TILE_SIZE);
}

Keyboard::Keyboard(int column) {
	this->column = column;
}


PressedButton Keyboard::eRead(void) {
	TS_StateTypeDef ts;
	short buttonIndex;

	BSP_TS_GetState(&ts);

	if (!ts.TouchDetected || !inColumn(ts.X, this->column))
			return BUTTON_NONE;

	buttonIndex = ts.Y / TILE_SIZE;

	switch(buttonIndex) {
	case 0: return BUTTON_0;
	case 1: return BUTTON_1;
	case 2: return BUTTON_2;
	case 3: return BUTTON_3;
	default: return BUTTON_NONE;
	}
}
