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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[19] = "myvector contains:";
char _str_1[2] = " ";
char _str_2[26] = "vector::_M_realloc_append";
char _str_3[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_4[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[19] = "__n < this->size()";
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
    char* cast15 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
      unsigned int i17;
      unsigned int c18 = 0;
      i17 = c18;
      while (1) {
        unsigned int t20 = i17;
        unsigned long cast21 = (unsigned long)t20;
        unsigned long std22 = __VERIFIER_nondet_unsigned_long();
        _Bool c23 = ((cast21 < std22)) ? 1 : 0;
        if (!c23) break;
        char* cast24 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std25;
        __VERIFIER_nondet_memory(&std25, sizeof(std25));
        unsigned int t26 = i17;
        unsigned long cast27 = (unsigned long)t26;
        int* std28;
        __VERIFIER_nondet_memory(&std28, sizeof(std28));
        int t29 = *std28;
        struct std__basic_ostream_char__std__char_traits_char__* std30;
        __VERIFIER_nondet_memory(&std30, sizeof(std30));
      for_step19: ;
        unsigned int t31 = i17;
        unsigned int u32 = t31 + 1;
        i17 = u32;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    int c34 = 0;
    __retval1 = c34;
    int t35 = __retval1;
    int ret_val36 = t35;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    }
    return ret_val36;
  int t37 = __retval1;
  return t37;
}

