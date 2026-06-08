/*
 * Copyright 2025 Budapest University of Technology and Economics
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

// Integration test: Floating point operations (float, double, fp)
float test_float_ops() {
    float a = 3.14f;
    float b = 2.71f;
    float c = a + b;
    float d = c * 2.0f;
    return d;
}

double test_double_ops() {
    double x = 1.5;
    double y = 2.5;
    double z = x * y;
    return z;
}

int test_float_comparison() {
    float a = 1.5f;
    float b = 2.5f;
    if (a < b) {
        return 1;
    }
    return 0;
}
