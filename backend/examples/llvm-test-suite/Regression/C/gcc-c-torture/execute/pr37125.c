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

extern void abort (void);

static inline unsigned int
mod_rhs(int rhs)
{
  if (rhs == 0) return 1;
  return rhs;
}

void func_44 (unsigned int p_45);
void func_44 (unsigned int p_45)
{
  if (!((p_45 * -9) % mod_rhs (-9))) {
      abort();
  }
}

int main (void)
{
  func_44 (2);
  return 0;
}
