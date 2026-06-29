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


#if(__SIZEOF_DOUBLE__==8)
double d = 1024.0 - 1.0 / 32768.0;
#else
double d = 1024.0 - 1.0 / 16384.0;
#endif

extern double floor(double);
extern float floorf(float);
extern void abort();

int main() {

    double df = floor(d);
    float f1 = (float)floor(d);

    if ((int)df != 1023 || (int)f1 != 1023)
      abort ();

    return 0;
}
