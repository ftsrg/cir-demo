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

/* PR 41750 - IPA-SRA used to pass hash->sgot by value rather than by
   reference.  */

struct bfd_link_hash_table
{
  int hash;
};

struct foo_link_hash_table
{
  struct bfd_link_hash_table root;
  int *dynobj;
  int *sgot;
};

struct foo_link_info
{
  struct foo_link_hash_table *hash;
};

extern void abort (void);

int __attribute__((noinline))
foo_create_got_section (int *abfd, struct foo_link_info *info)
{
  info->hash->sgot = abfd;
  return 1;
}

static int *
get_got (int *abfd, struct foo_link_info *info,
	 struct foo_link_hash_table *hash)
{
  int *got;
  int *dynobj;

  got = hash->sgot;
  if (!got)
    {
      dynobj = hash->dynobj;
      if (!dynobj)
	hash->dynobj = dynobj = abfd;
      if (!foo_create_got_section (dynobj, info))
	return 0;
      got = hash->sgot;
    }
  return got;
}

int * __attribute__((noinline,noclone))
elf64_ia64_check_relocs (int *abfd, struct foo_link_info *info)
{
  return get_got (abfd, info, info->hash);
}

struct foo_link_info link_info;
struct foo_link_hash_table hash;
int abfd;

int
main ()
{
  link_info.hash = &hash;
  if (elf64_ia64_check_relocs (&abfd, &link_info) != &abfd)
    abort ();
  return 0;
}
