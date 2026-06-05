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

static inline fu (unsigned short data)
{
  return data;
}
ru(i)
{
   if(fu(i++)!=5)abort();
   if(fu(++i)!=7)abort();
}
static inline fs (signed short data)
{
  return data;
}
rs(i)
{
   if(fs(i++)!=5)abort();
   if(fs(++i)!=7)abort();
}


main()
{
  ru(5);
  rs(5);
  exit(0);
}
