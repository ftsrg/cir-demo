extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____ops___Iter_equals_val_const_int_ { int* _M_value; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[8] = {10, 20, 30, 30, 20, 10, 10, 20};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[12] = "10 appears ";
char _str_1[9] = " times.\n";
char _str_2[12] = "20 appears ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_3[49] = "cannot create std::vector larger than max_size()";
int main();

extern long __VERIFIER_nondet_long(void);
extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int mycount2;
  int myints3[8];
  int ref_tmp04;
  struct std__vector_int__std__allocator_int__ myvector5;
  struct std__allocator_int_ ref_tmp16;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp07;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp18;
  int ref_tmp29;
  int c10 = 0;
  __retval1 = c10;
  // array copy
  __builtin_memcpy(myints3, __const_main_myints, (unsigned long)8 * sizeof(__const_main_myints[0]));
  int* cast11 = (int*)&(myints3);
  int* cast12 = (int*)&(myints3);
  int c13 = 8;
  int* ptr14 = &(cast12)[c13];
  int c15 = 10;
  ref_tmp04 = c15;
  long std16 = __VERIFIER_nondet_long();
  int cast17 = (int)std16;
  mycount2 = cast17;
  char* cast18 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  int t20 = mycount2;
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  char* cast22 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  int* cast24 = (int*)&(myints3);
  int* cast25 = (int*)&(myints3);
  int c26 = 8;
  int* ptr27 = &(cast25)[c26];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector5, sizeof(myvector5));
    __VERIFIER_nondet_memory(cast24, sizeof(*cast24));
    __VERIFIER_nondet_memory(ptr27, sizeof(*ptr27));
    __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
  }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    agg_tmp07 = std28;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    agg_tmp18 = std29;
    int c30 = 20;
    ref_tmp29 = c30;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t31 = agg_tmp07;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t32 = agg_tmp18;
    long std33 = __VERIFIER_nondet_long();
    int cast34 = (int)std33;
    mycount2 = cast34;
    char* cast35 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    int t37 = mycount2;
    struct std__basic_ostream_char__std__char_traits_char__* std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    char* cast39 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    int c41 = 0;
    __retval1 = c41;
    int t42 = __retval1;
    int ret_val43 = t42;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector5, sizeof(myvector5));
    }
    return ret_val43;
  int t44 = __retval1;
  return t44;
}

