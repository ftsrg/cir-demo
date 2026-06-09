extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
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
char _str_2[17] = "myvector[0] == 9";
char _str_3[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector39/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[49] = "cannot create std::vector larger than max_size()";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ myvector2;
  struct std__allocator_int_ ref_tmp03;
  unsigned int i4;
  unsigned long sz5;
  int c6 = 0;
  __retval1 = c6;
  unsigned long c7 = 10;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    unsigned long std8 = __VERIFIER_nondet_unsigned_long();
    sz5 = std8;
      unsigned int c9 = 0;
      i4 = c9;
      while (1) {
        unsigned int t11 = i4;
        unsigned long cast12 = (unsigned long)t11;
        unsigned long t13 = sz5;
        _Bool c14 = ((cast12 < t13)) ? 1 : 0;
        if (!c14) break;
        unsigned int t15 = i4;
        int cast16 = (int)t15;
        unsigned int t17 = i4;
        unsigned long cast18 = (unsigned long)t17;
        int* std19;
        __VERIFIER_nondet_memory(&std19, sizeof(std19));
        *std19 = cast16;
      for_step10: ;
        unsigned int t20 = i4;
        unsigned int u21 = t20 + 1;
        i4 = u21;
      }
      unsigned int c22 = 0;
      i4 = c22;
      while (1) {
        unsigned int t24 = i4;
        unsigned long cast25 = (unsigned long)t24;
        unsigned long t26 = sz5;
        unsigned long c27 = 2;
        unsigned long b28 = t26 / c27;
        _Bool c29 = ((cast25 < b28)) ? 1 : 0;
        if (!c29) break;
          int temp30;
          unsigned long t31 = sz5;
          unsigned long c32 = 1;
          unsigned long b33 = t31 - c32;
          unsigned int t34 = i4;
          unsigned long cast35 = (unsigned long)t34;
          unsigned long b36 = b33 - cast35;
          int* std37;
          __VERIFIER_nondet_memory(&std37, sizeof(std37));
          int t38 = *std37;
          temp30 = t38;
          unsigned int t39 = i4;
          unsigned long cast40 = (unsigned long)t39;
          int* std41;
          __VERIFIER_nondet_memory(&std41, sizeof(std41));
          int t42 = *std41;
          unsigned long t43 = sz5;
          unsigned long c44 = 1;
          unsigned long b45 = t43 - c44;
          unsigned int t46 = i4;
          unsigned long cast47 = (unsigned long)t46;
          unsigned long b48 = b45 - cast47;
          int* std49;
          __VERIFIER_nondet_memory(&std49, sizeof(std49));
          *std49 = t42;
          int t50 = temp30;
          unsigned int t51 = i4;
          unsigned long cast52 = (unsigned long)t51;
          int* std53;
          __VERIFIER_nondet_memory(&std53, sizeof(std53));
          *std53 = t50;
      for_step23: ;
        unsigned int t54 = i4;
        unsigned int u55 = t54 + 1;
        i4 = u55;
      }
    char* cast56 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std57;
    __VERIFIER_nondet_memory(&std57, sizeof(std57));
      unsigned int c58 = 0;
      i4 = c58;
      while (1) {
        unsigned int t60 = i4;
        unsigned long cast61 = (unsigned long)t60;
        unsigned long t62 = sz5;
        _Bool c63 = ((cast61 < t62)) ? 1 : 0;
        if (!c63) break;
        char* cast64 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std65;
        __VERIFIER_nondet_memory(&std65, sizeof(std65));
        unsigned int t66 = i4;
        unsigned long cast67 = (unsigned long)t66;
        int* std68;
        __VERIFIER_nondet_memory(&std68, sizeof(std68));
        int t69 = *std68;
        struct std__basic_ostream_char__std__char_traits_char__* std70;
        __VERIFIER_nondet_memory(&std70, sizeof(std70));
      for_step59: ;
        unsigned int t71 = i4;
        unsigned int u72 = t71 + 1;
        i4 = u72;
      }
    unsigned long c73 = 0;
    int* std74;
    __VERIFIER_nondet_memory(&std74, sizeof(std74));
    int t75 = *std74;
    int c76 = 9;
    _Bool c77 = ((t75 == c76)) ? 1 : 0;
    if (c77) {
    } else {
      char* cast78 = (char*)&(_str_2);
      char* c79 = _str_3;
      unsigned int c80 = 37;
      char* cast81 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast78, c79, c80, cast81);
    }
    struct std__basic_ostream_char__std__char_traits_char__* std82;
    __VERIFIER_nondet_memory(&std82, sizeof(std82));
    int c83 = 0;
    __retval1 = c83;
    int t84 = __retval1;
    int ret_val85 = t84;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    }
    return ret_val85;
  int t86 = __retval1;
  return t86;
}

