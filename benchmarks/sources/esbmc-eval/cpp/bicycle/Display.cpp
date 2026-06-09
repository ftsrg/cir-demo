/*
 * Copyright 2025 Budapest University of Technology and Economics
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/*
 * Display.cpp
 *
 *  Created on: Jan 17, 2012
 *      Author: mikhail
 */

#include "Display.h"

Display::Display(std::string msg)
	: Thread(),
	  _msg(msg),
	  _refreshRate(0)
{
}

void Display::setRefreshRate(int r)
{
	if(r == 200 || r == 500 || r == 100 || r == 1000)
	{
		_refreshRate = r;
	}
}

void Display::setMessage(std::string msg)
{
	_msg = msg;
}

void Display::run()
{
	while(1)
	{
		msleep(_refreshRate);

		_display.open("Display", std::ios::out | std::ios::app );
		_display << _msg << ".\n";
		_display.close();
	}
}
