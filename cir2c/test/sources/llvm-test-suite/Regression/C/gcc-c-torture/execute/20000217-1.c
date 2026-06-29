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

unsigned short int showbug(unsigned short int *a, unsigned short int *b)
{
        *a += *b -8;
        return (*a >= 8);
}

int main()
{
        unsigned short int x = 0;
        unsigned short int y = 10;

        if (showbug(&x, &y) != 0)
	  abort ();

	exit (0);
}
