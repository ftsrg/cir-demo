/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

//#include <stdio.h>
//#include <unistd.h>
#include <cassert>
#include <cstdio>
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
