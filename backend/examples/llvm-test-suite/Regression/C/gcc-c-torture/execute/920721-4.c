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

/* { dg-require-effective-target label_values } */

int try (int num) {
  __label__ lab1, lab2, lab3, lab4, lab5, lab6, default_lab;

  void *do_switch (int num) {
    switch(num) {
    case 1:
      return &&lab1;
    case 2:
      return &&lab2;
    case 3:
      return &&lab3;
    case 4:
      return &&lab4;
    case 5:
      return &&lab5;
    case 6:
      return &&lab6;
    default:
      return &&default_lab;
    }
  }

  goto *do_switch (num);

 lab1:
  return 1;

 lab2:
  return 2;

 lab3:
  return 3;

 lab4:
  return 4;

 lab5:
  return 5;

 lab6:
  return 6;

 default_lab:
  return -1;
}

main()
{
  int i;
  for (i = 1; i <= 6; i++)
    {
      if (try (i) != i)
	abort();
    }
  exit(0);
}
