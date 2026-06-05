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

static int Sub(int a, int b) {
  return  b -a;
}

static unsigned Select(unsigned a, unsigned b, unsigned c) {
  const int pa_minus_pb =
      Sub((a >>  8) & 0xff, (b >>  8) & 0xff) +
      Sub((a >>  0) & 0xff, (b >>  0) & 0xff);
  return (pa_minus_pb <= 0) ? a : b;
}

__attribute__((noinline)) unsigned Predictor(unsigned left, const unsigned* const top) {
  const unsigned pred = Select(top[1], left, top[0]);
  return pred;
}

int main(void) {
  const unsigned top[2] = {0xff7a7a7a, 0xff7a7a7a};
  const unsigned left = 0xff7b7b7b;
  const unsigned pred = Predictor(left, top /*+ 1*/);
  if (pred == left)
    return 0;
  return 1;
}
