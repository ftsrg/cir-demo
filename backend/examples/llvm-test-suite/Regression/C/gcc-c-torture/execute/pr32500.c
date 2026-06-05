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

extern void abort(void);
extern void exit(int);
void foo(int) __attribute__((noinline));
void bar(void) __attribute__((noinline));

/* Make sure foo is not inlined or considered pure/const.  */
int x;
void foo(int i) { x = i; }
void bar(void) { exit(0); }

int
main(int argc, char *argv[])
{
	int i;
	int numbers[4] = { 0xdead, 0xbeef, 0x1337, 0x4242 };

	for (i = 1; i <= 12; i++) {
		if (i <= 4)
			foo(numbers[i-1]);
		else if (i >= 7 && i <= 9)
			bar();
	}

	abort();
}
