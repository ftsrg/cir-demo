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

void abort (void);
int ii;
typedef struct {} raw_spinlock_t;
typedef struct {
  raw_spinlock_t raw_lock;
} spinlock_t;
raw_spinlock_t one_raw_spinlock (void)
{
  raw_spinlock_t raw_lock;
  ii++;
  return raw_lock;
}
int main(void)
{
  spinlock_t lock = (spinlock_t) { .raw_lock = one_raw_spinlock() };
  if (ii != 1)
    abort ();
  return 0;
}
