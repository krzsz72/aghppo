#include "stepper.hpp"
#include "led.hpp"

enum Step{LEFT,RIGHT};

extern unsigned char ucInversion;
	
void Stepper::SetLed(Led* pLedToSet){
		pLed = pLedToSet;
};

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		ucLedCtr--;
	}else if(eStep == RIGHT){
		ucLedCtr++;
	}else{}
	
		
	ucLedCtr = ucLedCtr % 4;
		
	pLed->On(ucLedCtr);

	
}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}

