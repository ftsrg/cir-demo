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

#define vector(elcount, type)  \
__attribute__((vector_size((elcount)*sizeof(type)))) type

#define vidx(type, vec, idx) (*((type *) &(vec) + idx))

#define veccompare(type, count, v0, v1) \
do {\
    int __i; \
    for (__i = 0; __i < count; __i++) { \
        if (vidx (type, v0, __i) != vidx (type, v1, __i)) \
            __builtin_abort (); \
    } \
} while (0)


int main (int argc, char *argv[]) {
#define fvec_2 (vector(4, float)){2., 2., 2., 2.}
#define dvec_2 (vector(2, double)){2., 2.}

    vector(4, float) f0 = {1., 2., 3., 4.};
    vector(4, float) f1, f2;

    vector(2, double) d0 = {1., 2.};
    vector(2, double) d1, d2;


    f1 = 2 + f0;  f2 = fvec_2 + f0; veccompare (float, 4, f1, f2);
    f1 = 2 - f0;  f2 = fvec_2 - f0; veccompare (float, 4, f1, f2);
    f1 = 2 * f0;  f2 = fvec_2 * f0; veccompare (float, 4, f1, f2);
    f1 = 2 / f0;  f2 = fvec_2 / f0; veccompare (float, 4, f1, f2);

    f1 = f0 + 2;  f2 = f0 + fvec_2; veccompare (float, 4, f1, f2);
    f1 = f0 - 2;  f2 = f0 - fvec_2; veccompare (float, 4, f1, f2);
    f1 = f0 * 2;  f2 = f0 * fvec_2; veccompare (float, 4, f1, f2);
    f1 = f0 / 2;  f2 = f0 / fvec_2; veccompare (float, 4, f1, f2);

    d1 = 2 + d0;  d2 = dvec_2 + d0; veccompare (double, 2, d1, d2);
    d1 = 2 - d0;  d2 = dvec_2 - d0; veccompare (double, 2, d1, d2);
    d1 = 2 * d0;  d2 = dvec_2 * d0; veccompare (double, 2, d1, d2);
    d1 = 2 / d0;  d2 = dvec_2 / d0; veccompare (double, 2, d1, d2);

    d1 = d0 + 2;  d2 = d0 + dvec_2; veccompare (double, 2, d1, d2);
    d1 = d0 - 2;  d2 = d0 - dvec_2; veccompare (double, 2, d1, d2);
    d1 = d0 * 2;  d2 = d0 * dvec_2; veccompare (double, 2, d1, d2);
    d1 = d0 / 2;  d2 = d0 / dvec_2; veccompare (double, 2, d1, d2);

    return 0;
}
