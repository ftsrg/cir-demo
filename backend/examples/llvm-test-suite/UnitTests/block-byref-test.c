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

#if defined(__BLOCKS__)
extern void abort();

int main() {
    __block unsigned char b1bool = 0;
    unsigned char *b1boolref = &b1bool;
    void(^b1)(void) = ^ {
        if (b1bool != 1)
          abort();
    };
    *b1boolref = 1;
    b1();
    
    __block unsigned char b2bool = 0;
    void(^b2)(void) = ^ {
        if (b2bool != 1)
          abort();
    };
    unsigned char *b2boolref = &b2bool;
    *b2boolref = 1;
    b2();
    return 0;
}
#else
int main() {
  return 0;
}
#endif
