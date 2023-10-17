#include "../HAL/LCD/lcd.h"
#include "../HAL/ULTRA_SONIC_SENSOR/ultra_sonic_interface.h"
#include "../MCAL/GLOBAL_INTERRUPT/global.h"
int main(void)
{
	uint16 Dis = 0;
	/*** Setup the Setting of LCD ***/
	LCD_init();
	Ultrasonic_init();
	GLOBAL_interruptEnable();
	/*** Display the distance keyword on LCD ***/
	LCD_displayStringRowColumn(0,0,"Distance=    cm");

	while(1)
	{
		/*** Get the distance ***/
		Dis = Ultrasonic_readDistance();
		if(Dis >= 100)
		{
			/*** Set the cursor of LCD to first row in column 9 ***/
			LCD_moveCursor(0,9);
			/*** Display the distance value on LCD in from column 10 ***/
			LCD_displayIntgerNumber(Dis);
		}
		else
		{
			/*** Set the cursor of LCD to first row in column 9 ***/
			LCD_moveCursor(0,9);
			/*** Display the distance value on LCD in from column 10 ***/
			LCD_displayIntgerNumber(Dis);
			LCD_displayCharacter(' ');

		}


	}

	return 0;
}
