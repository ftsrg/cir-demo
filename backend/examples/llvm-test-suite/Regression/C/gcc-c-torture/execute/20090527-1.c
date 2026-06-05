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

typedef enum { POSITION_ASIS, POSITION_UNSPECIFIED } unit_position;

typedef enum { STATUS_UNKNOWN, STATUS_UNSPECIFIED } unit_status;

typedef struct
{
  unit_position position;
  unit_status status;
} unit_flags;

extern void abort (void);

void
new_unit (unit_flags * flags)
{
  if (flags->status == STATUS_UNSPECIFIED)
    flags->status = STATUS_UNKNOWN;

  if (flags->position == POSITION_UNSPECIFIED)
    flags->position = POSITION_ASIS;

  switch (flags->status)
    {
    case STATUS_UNKNOWN:
      break;

    default:
      abort ();
    }
}

int main()
{
  unit_flags f;
  f.status = STATUS_UNSPECIFIED;
  new_unit (&f);
  return 0;
}
