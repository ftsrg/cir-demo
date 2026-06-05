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

#include <cassert>
#include <cstdio>
#include <cstring>
#include <exception>

class Base : public std::exception {
protected:
  unsigned n;
  char * desc;
  void init(unsigned N, const char* name) {
    n = N;
    desc = new char[10+strlen(name)];
    sprintf(desc, "n: %s class", name);
  }
  Base () {}
public:
  Base (unsigned N) {
    assert(N < 10);
    init(N, "base");
  }
  const char * what() {
    desc[0] = (n+'0');
    return desc;
  }
};

class Derived : public Base {
public:
  Derived (unsigned n) {
    assert(n < 20);
    init(n-10, "derived");
  }
};

class Unused : public Base {
public:
  Unused() : Base(0) {}
};

class Unused2 : public std::exception {
};

class Unused3 {
};

void func (unsigned n) {
  if (n < 10)
    throw(Base(n));
  else if (n < 20)
    throw(Derived(n));
  else if (n < 21)
    throw (Unused());
  else if (n < 22)
    throw (Unused2());
  else if (n < 23)
    throw (std::exception());
  else
    throw "what?";
}

int main() {
  for (unsigned i=0; i<25; i++) {
    try {
      func(i);
    } catch (Derived &e) {
      printf("Caught exception: %s\n", e.what());
    } catch (Base &e) {
      printf("Caught exception: %s\n", e.what());
    } catch (std::exception &e) {
      printf("Caught exception: %s\n", e.what());
    } catch (...) {
      printf("Caught unknown exception\n");
    }
  }
  return 0;
}
