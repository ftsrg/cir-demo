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

/* ifcvt accidentally deletes a referenced label while generating
   conditional traps on machines having such patterns */

struct foo { int a; };

void gcc_crash(struct foo *p)
{
	if (__builtin_expect(p->a < 52, 0))
		__builtin_trap();
 top:
	p->a++;
	if (p->a >= 62)
		goto top;
}

int main(void)
{
	struct foo x;

	x.a = 53;
	gcc_crash(&x);

	exit (0);
}
