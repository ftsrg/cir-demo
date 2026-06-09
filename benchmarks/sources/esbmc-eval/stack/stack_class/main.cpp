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

#include <stack>
#include <string>
#include <cassert>
using namespace std;

template<class T>
	class A
{
public:
	A(){
		this->a = true;
	}
	bool get(){
		return this->a;
	}
	void set( bool x ){
		this->a = x;
	}
private:
	bool a;
};

bool operator!=(A<bool> x, A<bool> y){
	if(x.get() != y.get())
		return true;
	return false;
}

bool operator==(A<bool> x, A<bool> y){
	if(x.get() == y.get())
		return true;
	return false;
}

bool operator<(A<bool> x, A<bool> y){
	return false;
}

int main ()
{
  stack< A<bool> > first;
  A< bool > x;
  A< bool > y;
  A< bool > z;
  first.push(x);
  first.push(y);
  first.push(z);
  first.pop();
  assert(!(first.empty()));
  assert((first.top()).get());
  assert(first.size() == 2);
  return 0;
}
