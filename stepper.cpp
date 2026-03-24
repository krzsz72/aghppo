#include "stepper.hpp"


enum Step{LEFT,RIGHT};

Stepper::Stepper(unsigned char ucLedSet){}
	
	
void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		ucLedCtr--;
	}
	else if(eStep == RIGHT){
		ucLedCtr++;
	}else{
	}
		ucLedCtr = ucLedCtr % 4;
		MyLed.On(ucLedCtr);
}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}
