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

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct S { _Bool X, Y; char str[100]; };

struct S G = { 1, 1, "fooo" };

int main() {
	int X = strlen(G.str);
	if (X == 10) {
	  scanf("%d, %d\n", &G.X, &G.Y);
        }
	printf("%d %d %d\n", G.X, G.Y, X);
	return X-4;
}

