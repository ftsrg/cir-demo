/*
 * Copyright 2025 Budapest University of Technology and Economics
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

/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <stdio.h>
#include <unistd.h>

class IOException
{
public:
    IOException ()
    {
      goto ERROR;
      ERROR:
        ;
    }
};

class MyFile
{
public:
  MyFile (const char *str)
  {
    this->fileName = str;
  }
  void readLine ()
  {
    if (getpid () % 2)
      throw IOException ();
  }
private:
  const char *fileName;
};

int
main ()
{
  try
    {
      MyFile *file = new MyFile ("sample");
      file->readLine ();
      delete file;
    } catch (IOException & e)
    {
      printf ("Some IO failed.\n");
    }
  return 0;
}
