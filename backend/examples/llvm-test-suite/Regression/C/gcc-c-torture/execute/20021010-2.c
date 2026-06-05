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

/* cse.c failure on x86 target.
   Contributed by Stuart Hastings 10 Oct 2002 <stuart@apple.com> */
#include <stdlib.h>

typedef signed short SInt16;

typedef struct {
    SInt16 minx;
    SInt16 maxx;
    SInt16 miny;
    SInt16 maxy;
} IOGBounds;

int expectedwidth = 50;

unsigned int *global_vramPtr = (unsigned int *)0xa000;

IOGBounds global_bounds = { 100, 150, 100, 150 };
IOGBounds global_saveRect = { 75, 175, 75, 175 };

main()
{
  unsigned int *vramPtr;
  int width;
  IOGBounds saveRect = global_saveRect;
  IOGBounds bounds = global_bounds;

  if (saveRect.minx < bounds.minx) saveRect.minx = bounds.minx;
  if (saveRect.maxx > bounds.maxx) saveRect.maxx = bounds.maxx;

  vramPtr = global_vramPtr + (saveRect.miny - bounds.miny) ;
  width = saveRect.maxx - saveRect.minx;

  if (width != expectedwidth)
    abort ();
  exit (0);
}
