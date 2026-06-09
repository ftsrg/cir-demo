extern void abort(void);
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
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[21] = "myvector.back() == 0";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector42/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[19] = "myvector contains:";
char _str_3[2] = " ";
char _str_4[26] = "vector::_M_realloc_append";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ myvector2;
  int ref_tmp03;
  int c4 = 0;
  __retval1 = c4;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    int c5 = 10;
    ref_tmp03 = c5;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
      while (1) {
        int* std6;
        __VERIFIER_nondet_memory(&std6, sizeof(std6));
        int t7 = *std6;
        int c8 = 0;
        _Bool c9 = ((t7 != c8)) ? 1 : 0;
        if (!c9) break;
          int ref_tmp110;
          int* std11;
          __VERIFIER_nondet_memory(&std11, sizeof(std11));
          int t12 = *std11;
          int c13 = 1;
          int b14 = t12 - c13;
          ref_tmp110 = b14;
          // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
          __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
          __VERIFIER_nondet_memory(&ref_tmp110, sizeof(ref_tmp110));
      }
    int* std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
    int t16 = *std15;
    int c17 = 0;
    _Bool c18 = ((t16 == c17)) ? 1 : 0;
    if (c18) {
    } else {
      char* cast19 = (char*)&(_str);
      char* c20 = _str_1;
      unsigned int c21 = 24;
      char* cast22 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast19, c20, c21, cast22);
    }
    char* cast23 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
      unsigned int i25;
      unsigned int c26 = 0;
      i25 = c26;
      while (1) {
        unsigned int t28 = i25;
        unsigned long cast29 = (unsigned long)t28;
        unsigned long std30 = __VERIFIER_nondet_unsigned_long();
        _Bool c31 = ((cast29 < std30)) ? 1 : 0;
        if (!c31) break;
        char* cast32 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std33;
        __VERIFIER_nondet_memory(&std33, sizeof(std33));
        unsigned int t34 = i25;
        unsigned long cast35 = (unsigned long)t34;
        int* std36;
        __VERIFIER_nondet_memory(&std36, sizeof(std36));
        int t37 = *std36;
        struct std__basic_ostream_char__std__char_traits_char__* std38;
        __VERIFIER_nondet_memory(&std38, sizeof(std38));
      for_step27: ;
        unsigned int t39 = i25;
        unsigned int u40 = t39 + 1;
        i25 = u40;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    int c42 = 0;
    __retval1 = c42;
    int t43 = __retval1;
    int ret_val44 = t43;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    }
    return ret_val44;
  int t45 = __retval1;
  return t45;
}

