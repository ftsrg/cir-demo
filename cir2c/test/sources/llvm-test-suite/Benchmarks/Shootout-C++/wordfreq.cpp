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

// -*- mode: c++ -*-
// $Id$
// http://www.bagley.org/~doug/shootout/
// By Tams Benk

#include <cstdio>
#include <cctype>
#include <cstring>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int const bufsize = 4096;
int const wsize = 64;

class word_reader
{
    int ws;
    char buf[bufsize+1], *bptr, *word;
    FILE *input;

    bool fill();

public:
    word_reader(FILE *i): ws(wsize), bptr(buf), word(new char[ws+1]), input(i)
	{*bptr = *word = '\0';}
    int operator()(char const **);
};

inline bool word_reader::fill()
{
    int nread = fread(buf, sizeof(char), bufsize, input);
    buf[nread] = '\0';
    bptr = buf;
    return nread > 0;
}

int word_reader::operator()(char const **w)
{
    int len = 0;
    char c;
    while (*bptr || fill()) {
	if (isalpha(c = *bptr++)) {
	    word[len] = tolower(c);
	    if (++len == ws) {
		char *nword = new char[(ws *= 2)+1];
		memcpy(nword, word, len);
		delete[] word;
		word = nword;
	    }
	}
	else if (len > 0) break;
    }
    *w = word;
    word[len] = '\0';
    return len;
}

typedef map<char const *, int> counter;
typedef pair<char const *, int> hpair;

namespace std
{
    inline bool operator<(hpair const &lhs, hpair const &rhs)
    {
	return lhs.second != rhs.second ? lhs.second > rhs.second
	    : strcmp(lhs.first, rhs.first) > 0;
    }

    template<> struct equal_to<char const *>
    {
	bool operator()(char const *s1, char const *s2) const
	    {return strcmp(s1, s2) == 0;}
    };
}

int main()
{
    int len;
    const char *w;
    counter hist;
    word_reader wr(stdin);

    while ((len = wr(&w)) > 0) {
	counter::iterator i = hist.find(w);
	if (i == hist.end()) hist[strcpy(new char[len+1], w)] = 1;
	else ++i->second;
    }

    vector<hpair> v(hist.begin(), hist.end());
    sort(v.begin(), v.end());
    for (size_t i = 0; i < v.size(); ++i)
	printf("%7d\t%s\n", v[i].second, v[i].first);

    return 0;
}
