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

/* This silly testcase is here to check that "Duff's Device" works properly
 * in LLVM.  Guess what, it does.  :)
 *
 * For more info, see: http://www.lysator.liu.se/c/duffs-device.html
 */

#include <stdio.h>

	sum(to, from, count)
	register short *to, *from;
	register count;
	{
		register n=(count+7)/8;
		switch(count%8){
		case 0:	do{	*to += *from++;
		case 7:		*to += *from++;
		case 6:		*to += *from++;
		case 5:		*to += *from++;
		case 4:		*to += *from++;
		case 3:		*to += *from++;
		case 2:		*to += *from++;
		case 1:		*to += *from++;
			}while(--n>0);
		}
	}

int main() {
	short Array[100];
	short Sum = 0;
	int i;

	for (i = 0; i != 100; ++i)
		Array[i] = i;

	sum(&Sum, Array, 100);

	printf("Sum is %d\n", Sum);
        return 0;
}
