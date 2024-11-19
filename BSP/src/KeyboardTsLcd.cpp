#include "KeyboardTsLcd.h"

KeyboardTsLcd::KeyboardTsLcd(int column) {
	this->kbd = new Keyboard(column);
	this->led = new LedLcd(column);
}


PressedButton KeyboardTsLcd::eRead(void)
{
	PressedButton press;

	press = this->kbd->eRead();

	switch(press) {
	case BUTTON_0:
		this->led->On(0);
		break;
	case BUTTON_1:
		this->led->On(1);
		break;
	case BUTTON_2:
		this->led->On(2);
		break;
	case BUTTON_3:
		this->led->On(3);
		break;
	default:
		this->led->On(LED_NONE);
		break;
	}

	return press;
}
