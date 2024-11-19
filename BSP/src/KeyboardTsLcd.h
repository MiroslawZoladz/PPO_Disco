#ifndef KEYBOARDTSLCD_H_
#define KEYBOARDTSLCD_H_

#include "Keyboard.h"
#include "LedLcd.h"

class KeyboardTsLcd {
private:
	LedLcd *led;
	Keyboard *kbd;
public:
	KeyboardTsLcd(int column = 0);
	PressedButton eRead(void);
};

#endif
