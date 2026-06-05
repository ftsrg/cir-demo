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

struct assembly_operand
{
  int type, value, symtype, symflags, marker;
};

struct assembly_operand to_input, from_input;

void __attribute__ ((__noinline__, __noclone__))
assemblez_1 (int internal_number, struct assembly_operand o1)
{
  if (o1.type != from_input.type)
    __builtin_abort ();
}

void __attribute__ ((__noinline__, __noclone__))
t0 (struct assembly_operand to, struct assembly_operand from)
{
  if (to.value == 0)
    assemblez_1 (32, from);
  else
    __builtin_abort ();
}

int
main (void)
{
  to_input.value = 0;
  to_input.type = 1;
  to_input.symtype = 2;
  to_input.symflags = 3;
  to_input.marker = 4;

  from_input.value = 5;
  from_input.type = 6;
  from_input.symtype = 7;
  from_input.symflags = 8;
  from_input.marker = 9;

  t0 (to_input, from_input);

  return 0;
}
