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
char _str[26] = "Current capacity of v1 = ";
char _str_1[19] = "v1.capacity() == 1";
char _str_2[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector21/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[26] = "vector::_M_realloc_append";
char _str_4[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[35] = "reference std::vector<int>::back()";
char _str_5[15] = "!this->empty()";
char _str_6[16] = "vector::reserve";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ v12;
  int ref_tmp03;
  int c4 = 0;
  __retval1 = c4;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&v12, sizeof(v12));
    int c5 = 1;
    ref_tmp03 = c5;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&v12, sizeof(v12));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    char* cast6 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std7;
    __VERIFIER_nondet_memory(&std7, sizeof(std7));
    unsigned long std8 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std9;
    __VERIFIER_nondet_memory(&std9, sizeof(std9));
    struct std__basic_ostream_char__std__char_traits_char__* std10;
    __VERIFIER_nondet_memory(&std10, sizeof(std10));
    unsigned long c11 = 20;
    // externalized std:: op: std::vector<int, std::allocator<int> >::reserve(unsigned long)
    __VERIFIER_nondet_memory(&v12, sizeof(v12));
    unsigned long std12 = __VERIFIER_nondet_unsigned_long();
    unsigned long c13 = 1;
    _Bool c14 = ((std12 == c13)) ? 1 : 0;
    if (c14) {
    } else {
      char* cast15 = (char*)&(_str_1);
      char* c16 = _str_2;
      unsigned int c17 = 21;
      char* cast18 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast15, c16, c17, cast18);
    }
    char* cast19 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    unsigned long std21 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    struct std__basic_ostream_char__std__char_traits_char__* std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    int c24 = 0;
    __retval1 = c24;
    int t25 = __retval1;
    int ret_val26 = t25;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&v12, sizeof(v12));
    }
    return ret_val26;
  int t27 = __retval1;
  return t27;
}

