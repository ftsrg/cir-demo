/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/*
 * Bicycle.h
 *
 *  Created on: Jan 17, 2012
 *      Author: mikhail
 */

#ifndef BICYCLE_H_
#define BICYCLE_H_

#include "Thread.h"
#include "EmbeddedPC.h"

class Bicycle : public Thread
{
public:
	Bicycle(EmbeddedPC *pc);
	Bicycle(EmbeddedPC *pc, int vel);

	void turnOffPc();

private:
	void run();

private:
	EmbeddedPC *_pc;
};

#endif /* BICYCLE_H_ */
