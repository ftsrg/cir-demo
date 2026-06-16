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
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int __const_main_myints[8] = {10, 20, 30, 30, 20, 10, 10, 20};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myvector[0] == 10";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm29/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myvector[1] == 30";
char _str_3[18] = "myvector[2] == 30";
char _str_4[18] = "myvector[3] == 10";
char _str_5[18] = "myvector[4] == 10";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[19] = "myvector contains:";
char _str_7[2] = " ";
char _str_8[49] = "cannot create std::vector larger than max_size()";
char _str_9[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  int myints2[8];
  struct std__vector_int__std__allocator_int__ myvector3;
  struct std__allocator_int_ ref_tmp04;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it5;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp06;
  int ref_tmp17;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp18;
  int c9 = 0;
  __retval1 = c9;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)8 * sizeof(__const_main_myints[0]));
  unsigned long c10 = 8;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it5, sizeof(it5));
    int* cast11 = (int*)&(myints2);
    int* cast12 = (int*)&(myints2);
    int c13 = 8;
    int* ptr14 = &(cast12)[c13];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
    agg_tmp06 = std15;
    int c16 = 20;
    ref_tmp17 = c16;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t17 = agg_tmp06;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    agg_tmp18 = std18;
    unsigned long c19 = 0;
    int* std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    int t21 = *std20;
    int c22 = 10;
    _Bool c23 = ((t21 == c22)) ? 1 : 0;
    if (c23) {
    } else {
      char* cast24 = (char*)&(_str);
      char* c25 = (char*)_str_1;
      unsigned int c26 = 22;
      char* cast27 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast24, c25, c26, cast27);
    }
    unsigned long c28 = 1;
    int* std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    int t30 = *std29;
    int c31 = 30;
    _Bool c32 = ((t30 == c31)) ? 1 : 0;
    if (c32) {
    } else {
      char* cast33 = (char*)&(_str_2);
      char* c34 = (char*)_str_1;
      unsigned int c35 = 23;
      char* cast36 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast33, c34, c35, cast36);
    }
    unsigned long c37 = 2;
    int* std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    int t39 = *std38;
    int c40 = 30;
    _Bool c41 = ((t39 == c40)) ? 1 : 0;
    if (c41) {
    } else {
      char* cast42 = (char*)&(_str_3);
      char* c43 = (char*)_str_1;
      unsigned int c44 = 24;
      char* cast45 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast42, c43, c44, cast45);
    }
    unsigned long c46 = 3;
    int* std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    int t48 = *std47;
    int c49 = 10;
    _Bool c50 = ((t48 == c49)) ? 1 : 0;
    if (c50) {
    } else {
      char* cast51 = (char*)&(_str_4);
      char* c52 = (char*)_str_1;
      unsigned int c53 = 25;
      char* cast54 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast51, c52, c53, cast54);
    }
    unsigned long c55 = 4;
    int* std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
    int t57 = *std56;
    int c58 = 10;
    _Bool c59 = ((t57 == c58)) ? 1 : 0;
    if (c59) {
    } else {
      char* cast60 = (char*)&(_str_5);
      char* c61 = (char*)_str_1;
      unsigned int c62 = 26;
      char* cast63 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast60, c61, c62, cast63);
    }
    char* cast64 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std65;
    __VERIFIER_nondet_memory(&std65, sizeof(std65));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp266;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp367;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std68;
      __VERIFIER_nondet_memory(&std68, sizeof(std68));
      ref_tmp266 = std68;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std69;
      __VERIFIER_nondet_memory(&std69, sizeof(std69));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std71;
        __VERIFIER_nondet_memory(&std71, sizeof(std71));
        ref_tmp367 = std71;
        _Bool std72;
        __VERIFIER_nondet_memory(&std72, sizeof(std72));
        _Bool u73 = !std72;
        if (!u73) break;
        char* cast74 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* std75;
        __VERIFIER_nondet_memory(&std75, sizeof(std75));
        int* std76;
        __VERIFIER_nondet_memory(&std76, sizeof(std76));
        int t77 = *std76;
        struct std__basic_ostream_char__std__char_traits_char__* std78;
        __VERIFIER_nondet_memory(&std78, sizeof(std78));
      for_step70: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std79;
        __VERIFIER_nondet_memory(&std79, sizeof(std79));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std80;
    __VERIFIER_nondet_memory(&std80, sizeof(std80));
    int c81 = 0;
    __retval1 = c81;
    int t82 = __retval1;
    int ret_val83 = t82;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    }
    return ret_val83;
  int t84 = __retval1;
  return t84;
}

