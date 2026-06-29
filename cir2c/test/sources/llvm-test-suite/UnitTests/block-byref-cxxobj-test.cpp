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

// rdar://8594790
#if defined(__BLOCKS__) && defined(__clang__)
#include <Block.h>
extern "C" void abort();
static int count=0;
class A {
public:
        int x;
        A(const A &o) { ++count; x = o.x; 
	  if (this == &o)
            abort();
        }
        A &operator =(const A &o) { x = o.x; return *this; }
        A() : x(100) { ++count; }
        ~A();
        void hello() const { 
          if (x != 100) 
            abort();
        }
};

A::~A() { 
  --count; 
  if (x != 100)
    abort();
  x = 0; 
}
#endif

int
main()
{
#if defined(__BLOCKS__) && defined(__clang__)
  if (!count) {
        __block A a;
        A ca;
        void (^b)(void) = Block_copy(^{ a.hello(); ca.hello(); });
        b();
        Block_release(b);
  }
  if (count)
    abort();
#endif
  return 0;
}

