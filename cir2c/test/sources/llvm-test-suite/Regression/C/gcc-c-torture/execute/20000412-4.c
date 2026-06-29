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

  void f(int i, int j, int radius, int width, int N)
  {
    const int diff   = i-radius;
    const int lowk   = (diff>0 ? diff : 0 );
    int k;

    for(k=lowk; k<= 2; k++){
      int idx = ((k-i+radius)*width-j+radius);
      if (idx < 0)
	abort ();
    }

    for(k=lowk; k<= 2; k++);
  }


  int main(int argc, char **argv)
  {
    int exc_rad=2;
    int N=8;
    int i;
    for(i=1; i<4; i++)
      f(i,1,exc_rad,2*exc_rad + 1, N);
    exit (0);
  }
