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
 * Single virtual inheritance: call base method in derived class
 */
#include <cassert>

class exforsys
{
public:
    exforsys(void) { x=0; }
    void f(int n1)
    {
      x= n1*5;
    }

    void add_one(void) { ++x; }
    int getX() { return x; }
private:
    int x;
};

class sample: virtual public exforsys
{
public:
    sample(void) { s1=0; }

    void f1(int n1)
    {
      s1=n1*10;
    }

    void add_one(void)
    {
      exforsys::add_one();
      ++s1;
    }
    int getS1() { return s1; }

private:
    int s1;
};

int main(void)
{
    sample s;
    s.f(10);
    assert(s.getX() == 50); // PASS
    s.f1(20);
    assert(s.getS1() == 200); // PASS
    s.add_one();
    assert(s.getX() == 51); // PASS
    assert(s.getS1() == 200); // FAIL, should be 201
}
