/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/*
 * EmbeddedPC.h
 *
 *  Created on: Jan 17, 2012
 *      Author: mikhail
 */

#ifndef EMBEDDEDPC_H_
#define EMBEDDEDPC_H_

#include <sys/time.h>

#include "Display.h"

class EmbeddedPC {
public:
	enum Mode {VIAGEM = 0, VELOCIDADE, TOTAL, TEMPO};

	EmbeddedPC();

	void resetPressed();
	void modePressed();

	void wheelTurn();

	std::string currentMode();

private:
	void setMode(Mode m);
	void updateDisplay();

private:
	pthread_mutex_t mutex;

	Mode _m;
	bool _battery;
	struct timeval _lastWheelTurn;
	struct timeval _begin;

	float _dist;
	float _totalDist;
	float _speed;

	Display *_d;
};

#endif /* EMBEDDEDPC_H_ */
