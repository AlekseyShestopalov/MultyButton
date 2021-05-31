//=====================================================================
// MultyButton.h - Arduino class for centralized buttons management
// Aleksey Shestopalov ash******ov(dog)yandex.ru
//=====================================================================
#include "Arduino.h"
#include "MultyButton.h"

// constructor
MultyButton::MultyButton(int ButtonsCount)
{
	this->_ButtonsCount = ButtonsCount;
}  

// call me each loop atr least
void MultyButton::Poll(void)
{	
}

// return: new button index
int MultyButton::AddDigitalPinButton(byte pin)
{
	return 0;
}

// return: new button index
int MultyButton::AddAnalogPinButton(byte pin, int minADCValue, int maxADCValue)
{
	return 0;
}

// return: value of button with this button index
// -2 if no such button
// -1 if some error present
// 0, 1  -  possible values
char MultyButton::GetValue(int index)
{
	if( index >= this->_ButtonsCount ) return -1;	
	return 0;
}
