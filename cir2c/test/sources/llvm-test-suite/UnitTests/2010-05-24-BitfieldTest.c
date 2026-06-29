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

/* From Radar 7980096.  Test case by Shantonu Sen! */
#include <assert.h>

typedef union {
	struct {
		unsigned long long        count                   :8;
		unsigned long long        mcg_ctl_p               :1;
	}          bits;
	unsigned long long   u64;
} ia32_mcg_cap_t;

int main(int argc, char *argv[]) {
	unsigned long long ctl_p;
	ia32_mcg_cap_t   ia32_mcg_cap;

	ia32_mcg_cap.u64 = 0x806;

	ctl_p = ia32_mcg_cap.bits.mcg_ctl_p;
	assert(ctl_p == 0);

	return 0;
}
