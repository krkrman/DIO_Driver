/*
 * Drivers.c
 *
 * Created: 9/1/2021 9:00:12 PM
 * Author : Karim Essam
 */ 
#include "HAL/BUTTON/BUTTON_interface.h"
#include "HAL/LED/LED_interface.h"

int main(void)
{ 
	BUTTON_voidInit();
	LED_voidInit();
    while (1) 
    {
		if (BUTTON_u8isPressed())
		{
			LED_voidToggle();
			while(BUTTON_u8isPressed());
		}
    }
}

