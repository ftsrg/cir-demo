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

/* { dg-require-effective-target int32plus } */

/* Failed on sparc with -mv8plus because sparc.c:set_extends() thought
   erroneously that SImode ASHIFT chops the upper bits, it does not.  */

typedef unsigned long long uint64;

void g(uint64 x, int y, int z, uint64 *p)
{
	unsigned w = ((x >> y) & 0xffffffffULL) << (z & 0x1f);
	*p |= (w & 0xffffffffULL) << z;
}

int main(void)
{
	uint64 a = 0;
	g(0xdeadbeef01234567ULL, 0, 0, &a);
	return (a == 0x01234567) ? 0 : 1;
}
