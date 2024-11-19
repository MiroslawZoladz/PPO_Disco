#ifndef KEYBOARD_H_
#define KEYBOARD_H_

typedef enum {
	BUTTON_0,
	BUTTON_1,
	BUTTON_2,
	BUTTON_3,
	BUTTON_NONE = -1
} PressedButton;

class Keyboard {
private:
	int column;
public:
	Keyboard(int column = 0);
	PressedButton eRead(void);
};

#endif /* KEYBOARD_H_ */
