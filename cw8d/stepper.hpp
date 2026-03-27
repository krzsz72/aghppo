#ifndef STEPPER_H
#define STEPPER_H

#include "ledInv.hpp"

class Stepper
{
	public:
		void StepRight(void);
		void StepLeft(void);
		void StepMode(unsigned char);

	private:
		unsigned char ucLedCtr;
		void Step(enum Step);
		Led MyLed;
		LedInv MyLedInv;
		unsigned char ucInversion;

};
#endif
