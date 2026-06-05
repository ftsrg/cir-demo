/*
 * Copyright 2026 LLVM Project
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

// -*- mode: c++ -*-
// $Id$
// http://www.bagley.org/~doug/shootout/

#include <stdlib.h>
#include <iostream>

using namespace std;

class Toggle {
public:
    Toggle(bool start_state) : state(start_state) { }
    virtual ~Toggle() {  }
    bool value() {
	return(state);
    }
    virtual Toggle& activate() {
	state = !state;
	return(*this);
    }
    bool state;
};

class NthToggle : public Toggle {
public:
    NthToggle(bool start_state, int max_counter) :
	Toggle(start_state), count_max(max_counter), counter(0) {
    }
    Toggle& activate() {
	if (++this->counter >= this->count_max) {
	    state = !state;
	    counter = 0;
	}
	return(*this);
    }
private:
    int count_max;
    int counter;
};

int
main(int argc, char *argv[]) {
#ifdef SMALL_PROBLEM_SIZE
#define LENGTH 1000000
#else
#define LENGTH 70000000
#endif
    int n = ((argc == 2) ? atoi(argv[1]) : LENGTH);

    Toggle *toggle1 = new Toggle(true);
    for (int i=0; i<5; i++) {
	cout << ((toggle1->activate().value()) ? "true" : "false") << endl;
    }
    delete toggle1;
    for (int i=0; i<n; i++) {
	Toggle *toggle = new Toggle(true);
	delete toggle;
    }
    
    cout << endl;
    
    NthToggle *ntoggle1 = new NthToggle(true, 3);
    for (int i=0; i<8; i++) {
	cout << ((ntoggle1->activate().value()) ? "true" : "false") << endl;
    }
    delete ntoggle1;
    for (int i=0; i<n; i++) {
	NthToggle *ntoggle = new NthToggle(true, 3);
	delete ntoggle;
    }
    return 0;
}
