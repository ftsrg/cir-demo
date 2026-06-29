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


#include <stdio.h>

void printfn(int a, short b, double C, float D, signed char E, char F, void *G, double *H, int I, long long J) {
	printf("%d, %d, %f, %f, %d\n", a, b, C, D, E);
	printf("%d, %ld, %ld, %d, %lld\n", F, (long) G, (long) H, I, J);
}

int main() {
	printfn(12, 2, 123.234, 1231.12312f, -12, 23, (void*)123456, 0, 1234567, 123124124124LL);
	return 0;
}
