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

struct vc_data {
	unsigned long	space;
	unsigned char   vc_palette[16*3];
};

struct vc {
	struct vc_data *d;
};

struct vc_data a_con;
struct vc vc_cons[63] = { &a_con };
int default_red[16];
int default_grn[16];
int default_blu[16];

extern void bar(int);

void reset_palette(int currcons)
{
	int j, k;
	for (j=k=0; j<16; j++) {
		(vc_cons[currcons].d->vc_palette) [k++] = default_red[j];
		(vc_cons[currcons].d->vc_palette) [k++] = default_grn[j];
		(vc_cons[currcons].d->vc_palette) [k++] = default_blu[j];
	}
	bar(k);
}

void bar(int k)
{
	if (k != 16*3)
		abort();
}

int main()
{
	reset_palette(0);
	exit(0);
}
