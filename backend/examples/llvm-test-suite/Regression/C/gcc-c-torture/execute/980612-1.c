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

struct fd
{
	unsigned char a;
	unsigned char b;
} f = { 5 };

struct fd *g() { return &f; }
int h() { return -1; }

int main()
{
	struct fd *f = g();
	f->b = h();
	if (((f->a & 0x7f) & ~0x10) <= 2)
		abort ();
	exit (0);
}
