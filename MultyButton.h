//=====================================================================
// MultyButton.h - Arduino class for centralized buttons management
// Aleksey Shestopalov ash******ov(dog)yandex.ru
//=====================================================================
#ifndef __MultyButton_h 
#define __MultyButton_h 

#include "Arduino.h"

typedef struct {
	byte type;
	byte pin;
	byte value;
} MultyButtonButton;

#define MBB_TYPE_NONE		0	// no real button
#define MBB_TYPE_DIGITAL	1	// digital Arduino pin
#define MBB_TYPE_ANALOG		2	// analog Arduino pin

// Buttons manager
class MultyButton {
 public:
	MultyButton(int ButtonsCount);  	// constructor
	void Poll(void);			// poll all registred buttons
	int AddDigitalPinButton(byte pin);
	int AddAnalogPinButton(byte pin, int minADCValue, int maxADCValue);
	char GetValue(int index);
 private:
	int _ButtonsCount;
	MultyButtonButton *bs;
};	// MultyButton class

#endif	// __MultyButton_h