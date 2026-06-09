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
char _str[21] = "mylist.back() == 300";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_pop_back/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[23] = "mylist.back() == n*100";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[31] = "The elements of mylist summed ";
char _str_4[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE8pop_backEv[74] = "void std::list<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__list_int__std__allocator_int__ mylist2;
  int sum3;
  int ref_tmp04;
  int ref_tmp15;
  int ref_tmp26;
  int n7;
  int c8 = 0;
  __retval1 = c8;
  // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list()
  __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    int c9 = 0;
    sum3 = c9;
    int c10 = 100;
    ref_tmp04 = c10;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    int c11 = 200;
    ref_tmp15 = c11;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    int c12 = 300;
    ref_tmp26 = c12;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
    int* std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    int t14 = *std13;
    int c15 = 300;
    _Bool c16 = ((t14 == c15)) ? 1 : 0;
    if (c16) {
    } else {
      char* cast17 = (char*)&(_str);
      char* c18 = _str_1;
      unsigned int c19 = 21;
      char* cast20 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast17, c18, c19, cast20);
    }
    int c21 = 3;
    n7 = c21;
      while (1) {
        _Bool std22;
        __VERIFIER_nondet_memory(&std22, sizeof(std22));
        _Bool u23 = !std22;
        if (!u23) break;
          int* std24;
          __VERIFIER_nondet_memory(&std24, sizeof(std24));
          int t25 = *std24;
          int t26 = n7;
          int c27 = 100;
          int b28 = t26 * c27;
          _Bool c29 = ((t25 == b28)) ? 1 : 0;
          if (c29) {
          } else {
            char* cast30 = (char*)&(_str_2);
            char* c31 = _str_1;
            unsigned int c32 = 25;
            char* cast33 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast30, c31, c32, cast33);
          }
          int* std34;
          __VERIFIER_nondet_memory(&std34, sizeof(std34));
          int t35 = *std34;
          int t36 = sum3;
          int b37 = t36 + t35;
          sum3 = b37;
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::pop_back()
          __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
          int t38 = n7;
          int u39 = t38 - 1;
          n7 = u39;
      }
    char* cast40 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    int t42 = sum3;
    struct std__basic_ostream_char__std__char_traits_char__* std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    struct std__basic_ostream_char__std__char_traits_char__* std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    int c45 = 0;
    __retval1 = c45;
    int t46 = __retval1;
    int ret_val47 = t46;
    {
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
      __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    }
    return ret_val47;
  int t48 = __retval1;
  return t48;
}

