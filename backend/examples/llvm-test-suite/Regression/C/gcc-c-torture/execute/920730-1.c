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

/* 920730-1.c */
#include <limits.h>
f1()
{
	int b=INT_MIN;
	return b>=INT_MIN;
}

f2()
{
	int b=INT_MIN+1;
	return b>= (unsigned)(INT_MAX+2);
}

f3()
{
	int b=INT_MAX;
	return b>=INT_MAX;
}

f4()
{
	int b=-1;
	return b>=UINT_MAX;
}

main ()
{
	if((f1()&f2()&f3()&f4())!=1)
		abort();
		exit(0);
}
