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

/* PR tree-optimization/50569 */
/* Reported by Paul Koning <pkoning@gcc.gnu.org> */
/* Reduced testcase by Mikael Pettersson <mikpe@it.uu.se> */

struct event {
    struct {
	unsigned int sec;
    } sent __attribute__((packed));
};

void __attribute__((noinline,noclone)) frob_entry(char *buf)
{
    struct event event;

    __builtin_memcpy(&event, buf, sizeof(event));
    if (event.sent.sec < 64) {
	event.sent.sec = -1U;
	__builtin_memcpy(buf, &event, sizeof(event));
    }
}

int main(void)
{
    union {
	char buf[1 + sizeof(struct event)];
	int align;
    } u;

    __builtin_memset(&u, 0, sizeof u);

    frob_entry(&u.buf[1]);

    return 0;
}
