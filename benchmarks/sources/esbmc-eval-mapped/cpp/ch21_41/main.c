extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

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
struct std__ctype_char_;
struct std__ios_base;
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[23] = "mylist.front() is now ";
char _str_1[22] = "mylist.back() is now ";
char _str_2[19] = "mylist.front()==77";
char _str_3[99] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch21_41/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[18] = "mylist.back()==22";
char _str_5[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE5frontEv[76] = "reference std::list<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__list_int__std__allocator_int__ mylist2;
  int ref_tmp03;
  int ref_tmp14;
  int c5 = 0;
  __retval1 = c5;
  // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list()
  __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    int c6 = 77;
    ref_tmp03 = c6;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    int c7 = 22;
    ref_tmp14 = c7;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    char* cast8 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std9;
    __VERIFIER_nondet_memory(&std9, sizeof(std9));
    int* std10;
    __VERIFIER_nondet_memory(&std10, sizeof(std10));
    int t11 = *std10;
    struct std__basic_ostream_char__std__char_traits_char__* std12;
    __VERIFIER_nondet_memory(&std12, sizeof(std12));
    struct std__basic_ostream_char__std__char_traits_char__* std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    char* cast14 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
    int* std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    int t17 = *std16;
    struct std__basic_ostream_char__std__char_traits_char__* std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    struct std__basic_ostream_char__std__char_traits_char__* std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    int* std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    int t21 = *std20;
    int c22 = 77;
    _Bool c23 = ((t21 == c22)) ? 1 : 0;
    if (c23) {
    } else {
      char* cast24 = (char*)&(_str_2);
      char* c25 = _str_3;
      unsigned int c26 = 28;
      char* cast27 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast24, c25, c26, cast27);
    }
    int* std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    int t29 = *std28;
    int c30 = 22;
    _Bool c31 = ((t29 == c30)) ? 1 : 0;
    if (c31) {
    } else {
      char* cast32 = (char*)&(_str_4);
      char* c33 = _str_3;
      unsigned int c34 = 29;
      char* cast35 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast32, c33, c34, cast35);
    }
    int c36 = 0;
    __retval1 = c36;
    int t37 = __retval1;
    int ret_val38 = t37;
    {
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
      __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    }
    return ret_val38;
  int t39 = __retval1;
  return t39;
}

