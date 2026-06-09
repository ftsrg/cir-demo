extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___List_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_int___ { struct std__allocator_std___List_node_int__* _M_alloc; struct std___List_node_int_* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____new_allocator_std___List_node_int__;
struct std__allocator_std___List_node_int__;
struct std___List_node_int_;
struct std____allocated_obj_std__allocator_std___List_node_int___ { struct std____allocated_ptr_std__allocator_std___List_node_int___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std__ios_base;
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[46] = "Please enter some integers (enter 0 to end):\n";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[15] = "mylist stores ";
char _str_2[11] = " numbers.\n";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__list_int__std__allocator_int__ mylist2;
  int myint3;
  int c4 = 0;
  __retval1 = c4;
  // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list()
  __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    char* cast5 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std6;
    __VERIFIER_nondet_memory(&std6, sizeof(std6));
      do {
          struct std__basic_istream_char__std__char_traits_char__* std7;
          __VERIFIER_nondet_memory(&std7, sizeof(std7));
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int const&)
          __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
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
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
      __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    }
    return ret_val19;
  int t20 = __retval1;
  return t20;
}

