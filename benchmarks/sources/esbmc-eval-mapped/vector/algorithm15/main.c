extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
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
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[8] = "x == 20";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm15/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[8] = "y == 10";
char _str_3[15] = "first[3] == 10";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[16] = "first contains:";
char _str_5[2] = " ";
char _str_6[49] = "cannot create std::vector larger than max_size()";
char _str_7[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_8[9] = "__n >= 0";
char _str_9[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
void void_swap_esbmc_int_(int* p0, int* p1);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void void_swap_esbmc_std__vector_int__std__allocator_int_____(struct std__vector_int__std__allocator_int__* p0, struct std__vector_int__std__allocator_int__* p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10swap_esbmcIiEvRT_S1_
void void_swap_esbmc_int_(int* v0, int* v1) {
bb2: ;
  int* a3;
  int* b4;
  int c5;
  a3 = v0;
  b4 = v1;
  int* t6 = a3;
  int t7 = *t6;
  c5 = t7;
  int* t8 = b4;
  int t9 = *t8;
  int* t10 = a3;
  *t10 = t9;
  int t11 = c5;
  int* t12 = b4;
  *t12 = t11;
  return;
}

// function: _Z10swap_esbmcISt6vectorIiSaIiEEEvRT_S4_
void void_swap_esbmc_std__vector_int__std__allocator_int_____(struct std__vector_int__std__allocator_int__* v13, struct std__vector_int__std__allocator_int__* v14) {
bb15: ;
  struct std__vector_int__std__allocator_int__* a16;
  struct std__vector_int__std__allocator_int__* b17;
  struct std__vector_int__std__allocator_int__ c18;
  a16 = v13;
  b17 = v14;
  struct std__vector_int__std__allocator_int__* t19 = a16;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector(std::vector<int, std::allocator<int> > const&)
  __VERIFIER_nondet_memory(&c18, sizeof(c18));
  __VERIFIER_nondet_memory(t19, sizeof(*t19));
    struct std__vector_int__std__allocator_int__* t20 = b17;
    struct std__vector_int__std__allocator_int__* t21 = a16;
    struct std__vector_int__std__allocator_int__* std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    struct std__vector_int__std__allocator_int__* t23 = b17;
    struct std__vector_int__std__allocator_int__* std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
  {
    // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
    __VERIFIER_nondet_memory(&c18, sizeof(c18));
  }
  return;
}

// function: main
int main() {
bb25: ;
  int __retval26;
  int x27;
  int y28;
  struct std__vector_int__std__allocator_int__ first29;
  struct std__allocator_int_ ref_tmp030;
  struct std__vector_int__std__allocator_int__ second31;
  struct std__allocator_int_ ref_tmp132;
  int c33 = 0;
  __retval26 = c33;
  int c34 = 10;
  x27 = c34;
  int c35 = 20;
  y28 = c35;
  void_swap_esbmc_int_(&x27, &y28);
  int t36 = x27;
  int c37 = 20;
  _Bool c38 = ((t36 == c37)) ? 1 : 0;
  if (c38) {
  } else {
    char* cast39 = (char*)&(_str);
    char* c40 = (char*)_str_1;
    unsigned int c41 = 25;
    char* cast42 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast39, c40, c41, cast42);
  }
  int t43 = y28;
  int c44 = 10;
  _Bool c45 = ((t43 == c44)) ? 1 : 0;
  if (c45) {
  } else {
    char* cast46 = (char*)&(_str_2);
    char* c47 = (char*)_str_1;
    unsigned int c48 = 26;
    char* cast49 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast46, c47, c48, cast49);
  }
  unsigned long c50 = 4;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp030, sizeof(ref_tmp030));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&first29, sizeof(first29));
    __VERIFIER_nondet_memory(&x27, sizeof(x27));
    __VERIFIER_nondet_memory(&ref_tmp030, sizeof(ref_tmp030));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp030, sizeof(ref_tmp030));
  }
    unsigned long c51 = 6;
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp132, sizeof(ref_tmp132));
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&second31, sizeof(second31));
      __VERIFIER_nondet_memory(&y28, sizeof(y28));
      __VERIFIER_nondet_memory(&ref_tmp132, sizeof(ref_tmp132));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp132, sizeof(ref_tmp132));
    }
      void_swap_esbmc_std__vector_int__std__allocator_int_____(&first29, &second31);
      unsigned long c52 = 3;
      int* std53;
      __VERIFIER_nondet_memory(&std53, sizeof(std53));
      int t54 = *std53;
      int c55 = 10;
      _Bool c56 = ((t54 == c55)) ? 1 : 0;
      if (c56) {
      } else {
        char* cast57 = (char*)&(_str_3);
        char* c58 = (char*)_str_1;
        unsigned int c59 = 29;
        char* cast60 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast57, c58, c59, cast60);
      }
      char* cast61 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std62;
      __VERIFIER_nondet_memory(&std62, sizeof(std62));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it63;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp264;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std65;
        __VERIFIER_nondet_memory(&std65, sizeof(std65));
        it63 = std65;
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std67;
          __VERIFIER_nondet_memory(&std67, sizeof(std67));
          ref_tmp264 = std67;
          _Bool std68;
          __VERIFIER_nondet_memory(&std68, sizeof(std68));
          _Bool u69 = !std68;
          if (!u69) break;
          char* cast70 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* std71;
          __VERIFIER_nondet_memory(&std71, sizeof(std71));
          int* std72;
          __VERIFIER_nondet_memory(&std72, sizeof(std72));
          int t73 = *std72;
          struct std__basic_ostream_char__std__char_traits_char__* std74;
          __VERIFIER_nondet_memory(&std74, sizeof(std74));
        for_step66: ;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std75;
          __VERIFIER_nondet_memory(&std75, sizeof(std75));
        }
      struct std__basic_ostream_char__std__char_traits_char__* std76;
      __VERIFIER_nondet_memory(&std76, sizeof(std76));
      int c77 = 0;
      __retval26 = c77;
      int t78 = __retval26;
      int ret_val79 = t78;
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&second31, sizeof(second31));
      }
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&first29, sizeof(first29));
      }
      return ret_val79;
  int t80 = __retval26;
  return t80;
}

