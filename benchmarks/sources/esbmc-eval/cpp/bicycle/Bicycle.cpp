/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/*
 * Bicycle.cpp
 *
 *  Created on: Jan 17, 2012
 *      Author: mikhail
 */

#include "Bicycle.h"

#include <iostream>
#include <cstdlib>

Bicycle::Bicycle(EmbeddedPC *pc) :
	Thread(),
	_pc(pc)
{
}

Bicycle::Bicycle(EmbeddedPC *pc, int vel) :
	Thread(),
	_pc(pc)
{
}

void Bicycle::turnOffPc()
{
	_pc = NULL;
}

void Bicycle::run()
{
	int r;

	while(1) {
		msleep(100);

		r = rand() % 100 + 1;

		if(r <= 30) {
			// Dangerous!
			_pc->wheelTurn();
		}
	}
}
