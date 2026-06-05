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

/* PR c/5354 */
/* Verify that GCC preserves relevant stack slots.  */

extern void abort(void);
extern void exit(int);

struct large { int x, y[9]; };

int main()
{
  int fixed;

  fixed = ({ int temp1 = 2; temp1; }) - ({ int temp2 = 1; temp2; });
  if (fixed != 1)
    abort();

  fixed = ({ struct large temp3; temp3.x = 2; temp3; }).x
	  - ({ struct large temp4; temp4.x = 1; temp4; }).x;
  if (fixed != 1)
    abort();

  exit(0);
}
