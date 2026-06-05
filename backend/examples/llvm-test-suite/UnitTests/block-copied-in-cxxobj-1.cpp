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
// rdar://8768050
#include <stdio.h>
#include <stdlib.h>
#include <Block.h>

static int expected_dtors;

class A {
private:
	void *p;
public:
	A() throw() {
	}
	A(const A &a) throw() : p(a.p) {
	}
	A &operator =(const A &a) throw() {
		return *this;
	}
	~A() throw() {
		expected_dtors--;
		if (expected_dtors < 0) {
			abort();
		}
	}
	void m() const throw() {
	}
};

#endif

int
main(void)
{
#if defined(__BLOCKS__) && defined(__clang__)
	A a;

	void (^b)(void) = Block_copy(^{
		a.m();
	});

	b();

        expected_dtors = 3;
	Block_release(b);
#endif
	return 0;
}
