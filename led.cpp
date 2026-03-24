#include <LPC21xx.H>
#include "led.hpp"

#define LED0_bm (1<<16)
#define LED1_bm (1<<17)
#define LED2_bm (1<<18)
#define LED3_bm (1<<19)

extern unsigned char ucInversion;

Led::Led(){
	IO1DIR = IO1DIR | LED0_bm | LED1_bm | LED2_bm | LED3_bm;
	IO1SET = LED0_bm;
}	

void Led::On(unsigned char ucLedIndex)
{
	IO1CLR = (LED0_bm | LED1_bm | LED2_bm | LED3_bm);
	
	unsigned int LedBitMask;
	
	switch(ucLedIndex){
		case 0:
			LedBitMask = LED0_bm;
			break;
		case 1:
			LedBitMask = LED1_bm; 
			break;
		case 2:
			LedBitMask = LED2_bm; 
			break;
		case 3:
			LedBitMask = LED3_bm; 
			break;
		default:
			break;		
	}
	if(ucInversion){
		LedBitMask = LedBitMask ^ (0xF<<16);
		}else{};
	
	IO1SET = LedBitMask;
	//IO1SET = (ucInversion) ? ~IO1SET : IO1SET;

}	

