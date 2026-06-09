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

