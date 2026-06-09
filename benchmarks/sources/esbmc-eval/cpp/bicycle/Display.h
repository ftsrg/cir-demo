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
 * Display.h
 *
 *  Created on: Jan 17, 2012
 *      Author: mikhail
 */

#ifndef DISPLAY_H_
#define DISPLAY_H_

#include <fstream>
#include <string>

#include "Thread.h"

class Display: public Thread {
public:
	Display(std::string msg);
	void setRefreshRate(int refreshRate);
	void setMessage(std::string msg);

private:
	void run();

private:
	std::ofstream _display;
	std::string _msg;
	int _refreshRate;
};

#endif /* DISPLAY_H_ */
