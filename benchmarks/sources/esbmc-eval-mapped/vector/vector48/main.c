extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[7] = "size: ";
char _str_1[2] = "\n";
char _str_2[11] = "capacity: ";
char _str_3[26] = "myvector.capacity() != 16";
char _str_4[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector48/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_5[11] = "max_size: ";
char _str_6[26] = "vector::_M_realloc_append";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ myvector2;
  int c3 = 0;
  __retval1 = c3;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
      int i4;
      int c5 = 0;
      i4 = c5;
      while (1) {
        int t7 = i4;
        int c8 = 10;
        _Bool c9 = ((t7 < c8)) ? 1 : 0;
        if (!c9) break;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int const&)
        __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
        __VERIFIER_nondet_memory(&i4, sizeof(i4));
      for_step6: ;
        int t10 = i4;
        int u11 = t10 + 1;
        i4 = u11;
      }
    char* cast12 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    unsigned long std14 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
    char* cast16 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std17;
    __VERIFIER_nondet_memory(&std17, sizeof(std17));
    char* cast18 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    unsigned long std20 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    char* cast22 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    unsigned long std24 = __VERIFIER_nondet_unsigned_long();
    unsigned long c25 = 16;
    _Bool c26 = ((std24 != c25)) ? 1 : 0;
    if (c26) {
    } else {
      char* cast27 = (char*)&(_str_3);
      char* c28 = _str_4;
      unsigned int c29 = 23;
      char* cast30 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast27, c28, c29, cast30);
    }
    char* cast31 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    unsigned long std33 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    char* cast35 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    int c37 = 0;
    __retval1 = c37;
    int t38 = __retval1;
    int ret_val39 = t38;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    }
    return ret_val39;
  int t40 = __retval1;
  return t40;
}

