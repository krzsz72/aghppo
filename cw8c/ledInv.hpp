#ifndef LEDINV_H
#define LEDINV_H

#include "led.hpp"

class LedInv : private Led{

	public:
		void On(unsigned char);

};
#endif
