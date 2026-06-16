extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_comp_val_std__greater_int__ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_comp_val_std__less_int__ { unsigned char __field0; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__greater_int_ { unsigned char __field0; };
struct std__less_int_ { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };
struct std__priority_queue_int__std__vector_int__std__allocator_int____std__greater_int__ { struct std__vector_int__std__allocator_int__ c; unsigned char __field1[8]; } __attribute__((packed));
struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__ { struct std__vector_int__std__allocator_int__ c; unsigned char __field1[8]; } __attribute__((packed));

int __const_main_myints[4] = {10, 60, 50, 20};
char _str[18] = "first.size() != 0";
char _str_1[133] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/priority_queue/priority_queue_constructor_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "second.size() != 4";
char _str_3[18] = "third.size() != 4";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_4[49] = "cannot create std::vector larger than max_size()";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0: ;
  int __retval1;
  int myints2[4];
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__ first3;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__ second4;
  struct std__less_int_ ref_tmp05;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__greater_int__ third6;
  struct std__greater_int_ ref_tmp17;
  int c8 = 0;
  __retval1 = c8;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)4 * sizeof(__const_main_myints[0]));
  // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::priority_queue<std::vector<int, std::allocator<int> >, void>()
  __VERIFIER_nondet_memory(&first3, sizeof(first3));
    unsigned long std9 = __VERIFIER_nondet_unsigned_long();
    unsigned long c10 = 0;
    _Bool c11 = ((std9 != c10)) ? 1 : 0;
    if (c11) {
    } else {
      char* cast12 = (char*)&(_str);
      char* c13 = (char*)_str_1;
      unsigned int c14 = 32;
      char* cast15 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast12, c13, c14, cast15);
    }
    int* cast16 = (int*)&(myints2);
    int* cast17 = (int*)&(myints2);
    int c18 = 4;
    int* ptr19 = &(cast17)[c18];
    // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::priority_queue<int*, void>(int*, int*, std::less<int> const&)
    __VERIFIER_nondet_memory(&second4, sizeof(second4));
    __VERIFIER_nondet_memory(cast16, sizeof(*cast16));
    __VERIFIER_nondet_memory(ptr19, sizeof(*ptr19));
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
      unsigned long std20 = __VERIFIER_nondet_unsigned_long();
      unsigned long c21 = 4;
      _Bool c22 = ((std20 != c21)) ? 1 : 0;
      if (c22) {
      } else {
        char* cast23 = (char*)&(_str_2);
        char* c24 = (char*)_str_1;
        unsigned int c25 = 34;
        char* cast26 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast23, c24, c25, cast26);
      }
      int* cast27 = (int*)&(myints2);
      int* cast28 = (int*)&(myints2);
      int c29 = 4;
      int* ptr30 = &(cast28)[c29];
      // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::greater<int> >::priority_queue<int*, void>(int*, int*, std::greater<int> const&)
      __VERIFIER_nondet_memory(&third6, sizeof(third6));
      __VERIFIER_nondet_memory(cast27, sizeof(*cast27));
      __VERIFIER_nondet_memory(ptr30, sizeof(*ptr30));
      __VERIFIER_nondet_memory(&ref_tmp17, sizeof(ref_tmp17));
        unsigned long std31 = __VERIFIER_nondet_unsigned_long();
        unsigned long c32 = 4;
        _Bool c33 = ((std31 != c32)) ? 1 : 0;
        if (c33) {
        } else {
          char* cast34 = (char*)&(_str_3);
          char* c35 = (char*)_str_1;
          unsigned int c36 = 36;
          char* cast37 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast34, c35, c36, cast37);
        }
        int c38 = 0;
        __retval1 = c38;
        int t39 = __retval1;
        int ret_val40 = t39;
        {
          // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::greater<int> >::~priority_queue()
          __VERIFIER_nondet_memory(&third6, sizeof(third6));
        }
        {
          // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::~priority_queue()
          __VERIFIER_nondet_memory(&second4, sizeof(second4));
        }
        {
          // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::~priority_queue()
          __VERIFIER_nondet_memory(&first3, sizeof(first3));
        }
        return ret_val40;
  int t41 = __retval1;
  return t41;
}

