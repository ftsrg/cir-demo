/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <iostream>
#include <map>
#include <cstring>
using namespace std;

class StringClass {
  char str[20];
public:
  StringClass() { 
     strcpy(str, ""); 
  }
  StringClass(char *s) { 
     strcpy(str, s); 
  }
  char *get() { 
     return str; 
  }
};

// must define less than relative to StringClass objects
bool operator<(StringClass a, StringClass b)
{
   return strcmp(a.get(), b.get()) < 0;
}
bool operator==(StringClass a, StringClass b)
{
   return (strcmp(a.get(), b.get()) == 0);
}
bool operator!=(StringClass a, StringClass b)
{
   return (strcmp(a.get(), b.get()) != 0);
}

class opposite {
  char str[20];
public:
  opposite() { 
     strcmp(str, ""); 
  }
  opposite(char *s) { 
     strcpy(str, s); 
  }
  char *get() { 
     return str; 
  }
};

bool operator<(opposite a, opposite b)
{
   return strcmp(a.get(), b.get()) < 0;
}
bool operator==(opposite a, opposite b)
{
   return (strcmp(a.get(), b.get()) == 0);
}
bool operator!=(opposite a, opposite b)
{
   return (strcmp(a.get(), b.get()) != 0);
}

int main()
{
  map<StringClass, opposite> mapObject;

  mapObject[StringClass("yes")] = opposite("no");

  return 0;
}

