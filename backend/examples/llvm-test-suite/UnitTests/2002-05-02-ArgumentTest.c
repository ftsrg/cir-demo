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

extern int printf(const char *str, ...);

void testfunc(short s, float X, char C, long long LL, int I, double D) {
	printf("%d, %f, %d, %lld, %d, %f\n", s, X, C, LL, I, D);
}

int main() {
	testfunc(12, 1.245f, 'x', 123456677890LL, -10, 45e14);
        return 0;
}

