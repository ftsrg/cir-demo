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

// multimap::max_size
#include <iostream>
#include <map>

int main ()
{
  std::multimap<int,int> mymultimap;

  if (mymultimap.max_size() >= 1000u)
  {
    for (int i=0; i<1000; i++)
      mymultimap.insert(std::make_pair(i,0));
    std::cout << "The multimap contains 1000 elements.\n";
  }
  else std::cout << "The multimap could not hold 1000 elements.\n";

  return 0;
}
