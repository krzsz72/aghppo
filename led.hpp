#ifndef LED_H
#define LED_H

class Led
{
	public:
		void StepRight(void);
		void StepLeft(void);
		void Init(void);

	private:
		unsigned char ucLedCtr;
		void On(unsigned char);
		void Step(enum Step);

};
#endif
