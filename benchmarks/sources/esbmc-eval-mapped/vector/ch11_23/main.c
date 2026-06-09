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
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[46] = "Please enter some integers (enter 0 to end):\n";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[17] = "myvector stores ";
char _str_2[11] = " numbers.\n";
char _str_3[26] = "vector::_M_realloc_append";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ myvector2;
  int myint3;
  int c4 = 0;
  __retval1 = c4;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    char* cast5 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std6;
    __VERIFIER_nondet_memory(&std6, sizeof(std6));
      do {
          struct std__basic_istream_char__std__char_traits_char__* std7;
          __VERIFIER_nondet_memory(&std7, sizeof(std7));
          // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int const&)
          __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
          __VERIFIER_nondet_memory(&myint3, sizeof(myint3));
        int t8 = myint3;
        _Bool cast9 = (_Bool)t8;
        if (!cast9) break;
      } while (1);
    char* cast10 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std11;
    __VERIFIER_nondet_memory(&std11, sizeof(std11));
    unsigned long std12 = __VERIFIER_nondet_unsigned_long();
    int cast13 = (int)std12;
    struct std__basic_ostream_char__std__char_traits_char__* std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    char* cast15 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    int c17 = 0;
    __retval1 = c17;
    int t18 = __retval1;
    int ret_val19 = t18;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    }
    return ret_val19;
  int t20 = __retval1;
  return t20;
}

