extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_comp_val_std__greater_int__ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_comp_val_std__less_int__ { unsigned char __field0; };
struct mycomparison { _Bool reverse; };
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
struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_ { struct std__vector_int__std__allocator_int__ c; struct mycomparison comp; unsigned char __field2[7]; } __attribute__((packed));
struct std__priority_queue_int__std__vector_int__std__allocator_int____std__greater_int__ { struct std__vector_int__std__allocator_int__ c; unsigned char __field1[8]; } __attribute__((packed));
struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__ { struct std__vector_int__std__allocator_int__ c; unsigned char __field1[8]; } __attribute__((packed));

int __const_main_myints[4] = {10, 60, 50, 20};
char _str[18] = "first.size() == 0";
char _str_1[129] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/priority_queue/priority_queue_constructor/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "second.size() == 4";
char _str_3[18] = "third.size() == 4";
char _str_4[19] = "fourth.size() == 0";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_5[49] = "cannot create std::vector larger than max_size()";
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
  struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_ fourth8;
  int c9 = 0;
  __retval1 = c9;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)4 * sizeof(__const_main_myints[0]));
  // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::priority_queue<std::vector<int, std::allocator<int> >, void>()
  __VERIFIER_nondet_memory(&first3, sizeof(first3));
    unsigned long std10 = __VERIFIER_nondet_unsigned_long();
    unsigned long c11 = 0;
    _Bool c12 = ((std10 == c11)) ? 1 : 0;
    if (c12) {
    } else {
      char* cast13 = (char*)&(_str);
      char* c14 = (char*)_str_1;
      unsigned int c15 = 32;
      char* cast16 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast13, c14, c15, cast16);
    }
    int* cast17 = (int*)&(myints2);
    int* cast18 = (int*)&(myints2);
    int c19 = 4;
    int* ptr20 = &(cast18)[c19];
    // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::priority_queue<int*, void>(int*, int*, std::less<int> const&)
    __VERIFIER_nondet_memory(&second4, sizeof(second4));
    __VERIFIER_nondet_memory(cast17, sizeof(*cast17));
    __VERIFIER_nondet_memory(ptr20, sizeof(*ptr20));
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
      unsigned long std21 = __VERIFIER_nondet_unsigned_long();
      unsigned long c22 = 4;
      _Bool c23 = ((std21 == c22)) ? 1 : 0;
      if (c23) {
      } else {
        char* cast24 = (char*)&(_str_2);
        char* c25 = (char*)_str_1;
        unsigned int c26 = 34;
        char* cast27 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast24, c25, c26, cast27);
      }
      int* cast28 = (int*)&(myints2);
      int* cast29 = (int*)&(myints2);
      int c30 = 4;
      int* ptr31 = &(cast29)[c30];
      // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::greater<int> >::priority_queue<int*, void>(int*, int*, std::greater<int> const&)
      __VERIFIER_nondet_memory(&third6, sizeof(third6));
      __VERIFIER_nondet_memory(cast28, sizeof(*cast28));
      __VERIFIER_nondet_memory(ptr31, sizeof(*ptr31));
      __VERIFIER_nondet_memory(&ref_tmp17, sizeof(ref_tmp17));
        unsigned long std32 = __VERIFIER_nondet_unsigned_long();
        unsigned long c33 = 4;
        _Bool c34 = ((std32 == c33)) ? 1 : 0;
        if (c34) {
        } else {
          char* cast35 = (char*)&(_str_3);
          char* c36 = (char*)_str_1;
          unsigned int c37 = 36;
          char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast35, c36, c37, cast38);
        }
        // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, mycomparison>::priority_queue<std::vector<int, std::allocator<int> >, void>()
        __VERIFIER_nondet_memory(&fourth8, sizeof(fourth8));
          unsigned long std39 = __VERIFIER_nondet_unsigned_long();
          unsigned long c40 = 0;
          _Bool c41 = ((std39 == c40)) ? 1 : 0;
          if (c41) {
          } else {
            char* cast42 = (char*)&(_str_4);
            char* c43 = (char*)_str_1;
            unsigned int c44 = 40;
            char* cast45 = (char*)&(__PRETTY_FUNCTION___main);
            reach_error();
            __assert_fail(cast42, c43, c44, cast45);
          }
          int c46 = 0;
          __retval1 = c46;
          int t47 = __retval1;
          int ret_val48 = t47;
          {
            // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, mycomparison>::~priority_queue()
            __VERIFIER_nondet_memory(&fourth8, sizeof(fourth8));
          }
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
          return ret_val48;
  int t49 = __retval1;
  return t49;
}

