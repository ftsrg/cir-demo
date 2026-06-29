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

struct delay_block {
  struct delay_block *succ;
};

static struct delay_block Timer_Queue;

struct delay_block* time_enqueue (struct delay_block *d)
{
  struct delay_block *q = Timer_Queue.succ;
  d->succ =  (void *)0;
  return Timer_Queue.succ;
}

int main(void)
{
  Timer_Queue.succ = &Timer_Queue;
  if (time_enqueue (&Timer_Queue) != (void*)0)
    abort ();
  return 0;
}
