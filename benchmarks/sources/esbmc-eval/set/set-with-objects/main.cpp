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

#include <iostream>
#include <cassert>
#include <set>
#include <cstdlib>
using namespace std;

class Ball {
public:
	int radius;
	int weight;
	int circunference;
	
	Ball(){
	  radius = 0;
	  weight = 0;
	  circunference = 0;
	}
	
	Ball(int r, int w){
	  radius = r;
	  weight = w;
	  circunference = 2*3.14*r;
	}
	
	bool operator<(Ball b){
		return (circunference < b.circunference);
	}
	bool operator==(Ball b){
		return (circunference == b.circunference);
	}
	Ball operator=(Ball b){
	  radius = b.radius;
	  weight = b.weight;
	  circunference = b.circunference;
	  return *this;
	}
};

int main(){
  set<Ball> myset;
  set<Ball>::iterator it;

  Ball soccer(10,10);
  Ball basket(15,20);
  myset.insert(soccer);
  myset.insert(basket);
  
  myset.insert(Ball(1,10));
  it = myset.find(soccer);
  assert(*it == soccer); 
  cout << endl;
  return 0;
}
