#ifndef LEDLCD_H_
#define LEDLCD_H_

#define LED_NONE (-1)

class LedLcd {
private:
	int column;
	void drawLed(int row, bool on);
public:
	LedLcd(int column = 0);
	void On(int ledIndex);
};

#endif /* LEDLCD_H_ */
