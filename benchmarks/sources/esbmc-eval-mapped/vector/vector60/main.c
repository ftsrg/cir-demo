extern void abort(void);
// Struct definitions (auto-parsed)
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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[19] = "myvector contains:";
char _str_1[2] = " ";
char _str_2[17] = "myvector[1] != 1";
char _str_3[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector60/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[49] = "cannot create std::vector larger than max_size()";
char _str_5[74] = "vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)";
char _str_6[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[19] = "__n < this->size()";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std__vector_int__std__allocator_int__ myvector2;
  struct std__allocator_int_ ref_tmp03;
  unsigned int i4;
  int c5 = 0;
  __retval1 = c5;
  unsigned long c6 = 10;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
      unsigned int c7 = 0;
      i4 = c7;
      while (1) {
        unsigned int t9 = i4;
        unsigned long cast10 = (unsigned long)t9;
        unsigned long std11 = __VERIFIER_nondet_unsigned_long();
        _Bool c12 = ((cast10 < std11)) ? 1 : 0;
        if (!c12) break;
        unsigned int t13 = i4;
        int cast14 = (int)t13;
        unsigned int t15 = i4;
        unsigned long cast16 = (unsigned long)t15;
        int* std17;
        __VERIFIER_nondet_memory(&std17, sizeof(std17));
        *std17 = cast14;
      for_step8: ;
        unsigned int t18 = i4;
        unsigned int u19 = t18 + 1;
        i4 = u19;
      }
    char* cast20 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
      unsigned int c22 = 0;
      i4 = c22;
      while (1) {
        unsigned int t24 = i4;
        unsigned long cast25 = (unsigned long)t24;
        unsigned long std26 = __VERIFIER_nondet_unsigned_long();
        _Bool c27 = ((cast25 < std26)) ? 1 : 0;
        if (!c27) break;
        char* cast28 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std29;
        __VERIFIER_nondet_memory(&std29, sizeof(std29));
        unsigned int t30 = i4;
        unsigned long cast31 = (unsigned long)t30;
        int* std32;
        __VERIFIER_nondet_memory(&std32, sizeof(std32));
        int t33 = *std32;
        struct std__basic_ostream_char__std__char_traits_char__* std34;
        __VERIFIER_nondet_memory(&std34, sizeof(std34));
      for_step23: ;
        unsigned int t35 = i4;
        unsigned int u36 = t35 + 1;
        i4 = u36;
      }
    unsigned long c37 = 1;
    int* std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    int t39 = *std38;
    int c40 = 1;
    _Bool c41 = ((t39 != c40)) ? 1 : 0;
    if (c41) {
    } else {
      char* cast42 = (char*)&(_str_2);
      char* c43 = (char*)_str_3;
      unsigned int c44 = 27;
      char* cast45 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast42, c43, c44, cast45);
    }
    struct std__basic_ostream_char__std__char_traits_char__* std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    int c47 = 0;
    __retval1 = c47;
    int t48 = __retval1;
    int ret_val49 = t48;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    }
    return ret_val49;
  int t50 = __retval1;
  return t50;
}

