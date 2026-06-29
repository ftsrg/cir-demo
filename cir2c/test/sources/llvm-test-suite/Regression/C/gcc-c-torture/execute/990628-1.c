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

#include <stdlib.h>

struct {
    long sqlcode;
} sqlca;


struct data_record {
    int dummy;
    int a[100];
} *data_ptr, data_tmp;


int
num_records()
{
    return 1;
}


void
fetch()
{
    static int fetch_count;

    memset(&data_tmp, 0x55, sizeof(data_tmp));
    sqlca.sqlcode = (++fetch_count > 1 ? 100 : 0);
}


void
load_data() {
    struct data_record *p;
    int num = num_records();

    data_ptr = malloc(num * sizeof(struct data_record));
    memset(data_ptr, 0xaa, num * sizeof(struct data_record));

    fetch();
    p = data_ptr;
    while (sqlca.sqlcode == 0) {
        *p++ = data_tmp;
        fetch();
    }
}


main()
{
    load_data();
    if (sizeof (int) == 2 && data_ptr[0].dummy != 0x5555)
      abort ();
    else if (sizeof (int) > 2 && data_ptr[0].dummy != 0x55555555)
      abort ();
    exit (0);
}
