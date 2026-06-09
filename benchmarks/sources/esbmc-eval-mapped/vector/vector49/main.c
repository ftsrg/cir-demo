extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____detail____move_iter_cat_int___;
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__move_iterator_int___ { int* _M_current; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____imove___IterMove { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[21] = "myvector.size() == 5";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector49/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[21] = "myvector.size() != 8";
char _str_3[22] = "myvector.size() != 12";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[19] = "myvector contains:";
char _str_5[2] = " ";
char _str_6[26] = "vector::_M_realloc_append";
char _str_7[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_8[15] = "!this->empty()";
char _str_9[26] = "vector::_M_default_append";
char _str_10[23] = "vector::_M_fill_append";
char _str_11[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_12[9] = "__n >= 0";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_13[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ myvector2;
  unsigned int i3;
  int ref_tmp14;
  int c5 = 0;
  __retval1 = c5;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
      int ref_tmp06;
      unsigned int c7 = 1;
      i3 = c7;
      while (1) {
        unsigned int t9 = i3;
        unsigned int c10 = 10;
        _Bool c11 = ((t9 < c10)) ? 1 : 0;
        if (!c11) break;
        unsigned int t12 = i3;
        int cast13 = (int)t12;
        ref_tmp06 = cast13;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
        __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
        __VERIFIER_nondet_memory(&ref_tmp06, sizeof(ref_tmp06));
      for_step8: ;
        unsigned int t14 = i3;
        unsigned int u15 = t14 + 1;
        i3 = u15;
      }
    unsigned long c16 = 5;
    // externalized std:: op: std::vector<int, std::allocator<int> >::resize(unsigned long)
    __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    unsigned long std17 = __VERIFIER_nondet_unsigned_long();
    unsigned long c18 = 5;
    _Bool c19 = ((std17 == c18)) ? 1 : 0;
    if (c19) {
    } else {
      char* cast20 = (char*)&(_str);
      char* c21 = _str_1;
      unsigned int c22 = 24;
      char* cast23 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast20, c21, c22, cast23);
    }
    unsigned long c24 = 8;
    int c25 = 100;
    ref_tmp14 = c25;
    // externalized std:: op: std::vector<int, std::allocator<int> >::resize(unsigned long, int const&)
    __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    unsigned long std26 = __VERIFIER_nondet_unsigned_long();
    unsigned long c27 = 8;
    _Bool c28 = ((std26 != c27)) ? 1 : 0;
    if (c28) {
    } else {
      char* cast29 = (char*)&(_str_2);
      char* c30 = _str_1;
      unsigned int c31 = 26;
      char* cast32 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast29, c30, c31, cast32);
    }
    unsigned long c33 = 12;
    // externalized std:: op: std::vector<int, std::allocator<int> >::resize(unsigned long)
    __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    unsigned long std34 = __VERIFIER_nondet_unsigned_long();
    unsigned long c35 = 12;
    _Bool c36 = ((std34 != c35)) ? 1 : 0;
    if (c36) {
    } else {
      char* cast37 = (char*)&(_str_3);
      char* c38 = _str_1;
      unsigned int c39 = 28;
      char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast37, c38, c39, cast40);
    }
    char* cast41 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
      unsigned int c43 = 0;
      i3 = c43;
      while (1) {
        unsigned int t45 = i3;
        unsigned long cast46 = (unsigned long)t45;
        unsigned long std47 = __VERIFIER_nondet_unsigned_long();
        _Bool c48 = ((cast46 < std47)) ? 1 : 0;
        if (!c48) break;
        char* cast49 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std50;
        __VERIFIER_nondet_memory(&std50, sizeof(std50));
        unsigned int t51 = i3;
        unsigned long cast52 = (unsigned long)t51;
        int* std53;
        __VERIFIER_nondet_memory(&std53, sizeof(std53));
        int t54 = *std53;
        struct std__basic_ostream_char__std__char_traits_char__* std55;
        __VERIFIER_nondet_memory(&std55, sizeof(std55));
      for_step44: ;
        unsigned int t56 = i3;
        unsigned int u57 = t56 + 1;
        i3 = u57;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std58;
    __VERIFIER_nondet_memory(&std58, sizeof(std58));
    int c59 = 0;
    __retval1 = c59;
    int t60 = __retval1;
    int ret_val61 = t60;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    }
    return ret_val61;
  int t62 = __retval1;
  return t62;
}

