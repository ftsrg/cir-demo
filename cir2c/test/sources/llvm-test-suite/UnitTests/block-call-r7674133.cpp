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

#if defined(__BLOCKS__) && defined(__clang__)
extern "C" void abort(void);

class Test {
public:
    int i;
    Test() : i(0)
    {
    }
    
    ~Test()
    {
	i = -1;
    }
    
    Test(const Test&r)
    {
	i = r.i;
    }
    
    void speak() const
    {
	if (i != 0)
	  abort();
    }
};
#endif

int main (int , char * const []) 
{
#if defined(__BLOCKS__) && defined(__clang__)
    Test t;
    ^{  t.speak();  }();
#endif
    return 0;
}    
