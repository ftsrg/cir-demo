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
char _str_2[19] = "myvector[1] == 200";
char _str_3[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector38/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[20] = "myvector[1] == 2202";
char _str_5[20] = "\nmyvector contains:";
char _str_6[26] = "vector::_M_realloc_append";
char _str_7[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_8[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_9[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  unsigned int i2;
  struct std__vector_int__std__allocator_int__ myvector3;
  int ref_tmp04;
  int ref_tmp15;
  int ref_tmp26;
  int ref_tmp37;
  int ref_tmp48;
  int c9 = 0;
  __retval1 = c9;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    int c10 = 100;
    ref_tmp04 = c10;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    int c11 = 200;
    ref_tmp15 = c11;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    int c12 = 300;
    ref_tmp26 = c12;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
    char* cast13 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
      unsigned int c15 = 0;
      i2 = c15;
      while (1) {
        unsigned int t17 = i2;
        unsigned long cast18 = (unsigned long)t17;
        unsigned long std19 = __VERIFIER_nondet_unsigned_long();
        _Bool c20 = ((cast18 < std19)) ? 1 : 0;
        if (!c20) break;
        char* cast21 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std22;
        __VERIFIER_nondet_memory(&std22, sizeof(std22));
        unsigned int t23 = i2;
        unsigned long cast24 = (unsigned long)t23;
        int* std25;
        __VERIFIER_nondet_memory(&std25, sizeof(std25));
        int t26 = *std25;
        struct std__basic_ostream_char__std__char_traits_char__* std27;
        __VERIFIER_nondet_memory(&std27, sizeof(std27));
      for_step16: ;
        unsigned int t28 = i2;
        unsigned int u29 = t28 + 1;
        i2 = u29;
      }
    unsigned long c30 = 1;
    int* std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    int t32 = *std31;
    int c33 = 200;
    _Bool c34 = ((t32 == c33)) ? 1 : 0;
    if (c34) {
    } else {
      char* cast35 = (char*)&(_str_2);
      char* c36 = _str_3;
      unsigned int c37 = 24;
      char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast35, c36, c37, cast38);
    }
    // externalized std:: op: std::vector<int, std::allocator<int> >::clear()
    __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    int c39 = 1101;
    ref_tmp37 = c39;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
    int c40 = 2202;
    ref_tmp48 = c40;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    __VERIFIER_nondet_memory(&ref_tmp48, sizeof(ref_tmp48));
    unsigned long c41 = 1;
    int* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    int t43 = *std42;
    int c44 = 2202;
    _Bool c45 = ((t43 == c44)) ? 1 : 0;
    if (c45) {
    } else {
      char* cast46 = (char*)&(_str_4);
      char* c47 = _str_3;
      unsigned int c48 = 28;
      char* cast49 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast46, c47, c48, cast49);
    }
    char* cast50 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
      unsigned int c52 = 0;
      i2 = c52;
      while (1) {
        unsigned int t54 = i2;
        unsigned long cast55 = (unsigned long)t54;
        unsigned long std56 = __VERIFIER_nondet_unsigned_long();
        _Bool c57 = ((cast55 < std56)) ? 1 : 0;
        if (!c57) break;
        char* cast58 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std59;
        __VERIFIER_nondet_memory(&std59, sizeof(std59));
        unsigned int t60 = i2;
        unsigned long cast61 = (unsigned long)t60;
        int* std62;
        __VERIFIER_nondet_memory(&std62, sizeof(std62));
        int t63 = *std62;
        struct std__basic_ostream_char__std__char_traits_char__* std64;
        __VERIFIER_nondet_memory(&std64, sizeof(std64));
      for_step53: ;
        unsigned int t65 = i2;
        unsigned int u66 = t65 + 1;
        i2 = u66;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std67;
    __VERIFIER_nondet_memory(&std67, sizeof(std67));
    int c68 = 0;
    __retval1 = c68;
    int t69 = __retval1;
    int ret_val70 = t69;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    }
    return ret_val70;
  int t71 = __retval1;
  return t71;
}

