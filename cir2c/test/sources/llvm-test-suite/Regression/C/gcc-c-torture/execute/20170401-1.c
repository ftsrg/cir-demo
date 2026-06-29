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

/* PR45070 */
extern void abort(void);

struct packed_ushort {
    unsigned short ucs;
} __attribute__((packed));

struct source {
    int pos, length;
};

static int flag;

static void __attribute__((noinline)) fetch(struct source *p)
{
    p->length = 128;
}

static struct packed_ushort __attribute__((noinline)) next(struct source *p)
{
    struct packed_ushort rv;

    if (p->pos >= p->length) {
	if (flag) {
	    flag = 0;
	    fetch(p);
	    return next(p);
	}
	flag = 1;
	rv.ucs = 0xffff;
	return rv;
    }
    rv.ucs = 0;
    return rv;
}

int main(void)
{
    struct source s;
    int i;

    s.pos = 0;
    s.length = 0;
    flag = 0;

    for (i = 0; i < 16; i++) {
	struct packed_ushort rv = next(&s);
	if ((i == 0 && rv.ucs != 0xffff)
	    || (i > 0 && rv.ucs != 0))
	    abort();
    }
    return 0;
}
