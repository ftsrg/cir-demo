/*
 * Copyright 2025 Budapest University of Technology and Economics
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

extern void abort(void);
// Struct definitions (auto-parsed)
struct std___Vector_base_clause__std__allocator_clause_____Vector_impl_data { struct clause* _M_start; struct clause* _M_finish; struct clause* _M_end_of_storage; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data;
struct std____new_allocator_clause_;
struct std____new_allocator_int_;
struct std__allocator_clause_;
struct std__allocator_int_;
struct std___Vector_base_clause__std__allocator_clause_____Vector_impl { struct std___Vector_base_clause__std__allocator_clause_____Vector_impl_data __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl;
struct std___Vector_base_clause__std__allocator_clause__ { struct std___Vector_base_clause__std__allocator_clause_____Vector_impl _M_impl; };
struct std___Vector_base_int__std__allocator_int__;
struct std__vector_clause__std__allocator_clause__ { struct std___Vector_base_clause__std__allocator_clause__ __field0; };
struct std__vector_int__std__allocator_int__;
struct clause { struct std__vector_int__std__allocator_int__ variables; };

int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_clause__std__allocator_clause__ clauses2;
  int c3 = 0;
  __retval1 = c3;
  // externalized std:: op: std::vector<clause, std::allocator<clause> >::vector()
  __VERIFIER_nondet_memory(&clauses2, sizeof(clauses2));
    int c4 = 0;
    __retval1 = c4;
    int t5 = __retval1;
    int ret_val6 = t5;
    {
      // externalized std:: op: std::vector<clause, std::allocator<clause> >::~vector()
      __VERIFIER_nondet_memory(&clauses2, sizeof(clauses2));
    }
    return ret_val6;
  int t7 = __retval1;
  return t7;
}

