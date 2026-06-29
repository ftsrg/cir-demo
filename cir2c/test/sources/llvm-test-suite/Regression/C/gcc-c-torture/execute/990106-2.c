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

unsigned calc_mp(unsigned mod)
{
      unsigned a,b,c;
      c=-1;
      a=c/mod;
      b=0-a*mod;
      if (b > mod) { a += 1; b-=mod; }
      return b;
}

int main(int argc, char *argv[])
{
      unsigned x = 1234;
      unsigned y = calc_mp(x);

      if ((sizeof (y) == 4 && y != 680)
	  || (sizeof (y) == 2 && y != 134))
	abort ();
      exit (0);
}
