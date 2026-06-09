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
struct std____new_allocator_int_;
struct std____new_allocator_std___List_node_int__;
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_std___List_node_int__ { unsigned char __field0; };
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
char _str[22] = "mylist.front() == 100";
char _str_1[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_push_front_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[22] = "mylist.front() != 200";
char _str_3[22] = "mylist.front() != 300";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[17] = "mylist contains:";
char _str_5[2] = " ";
char _str_6[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE5frontEv[76] = "reference std::list<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[15] = "!this->empty()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__list_int__std__allocator_int__ mylist2;
  int ref_tmp03;
  struct std__allocator_int_ ref_tmp14;
  int ref_tmp25;
  int ref_tmp36;
  int c7 = 0;
  __retval1 = c7;
  unsigned long c8 = 2;
  int c9 = 100;
  ref_tmp03 = c9;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list(unsigned long, int const&, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
  }
    int* std10;
    __VERIFIER_nondet_memory(&std10, sizeof(std10));
    int t11 = *std10;
    int c12 = 100;
    _Bool c13 = ((t11 == c12)) ? 1 : 0;
    if (c13) {
    } else {
      char* cast14 = (char*)&(_str);
      char* c15 = _str_1;
      unsigned int c16 = 17;
      char* cast17 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast14, c15, c16, cast17);
    }
    int c18 = 200;
    ref_tmp25 = c18;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_front(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp25, sizeof(ref_tmp25));
    int* std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    int t20 = *std19;
    int c21 = 200;
    _Bool c22 = ((t20 != c21)) ? 1 : 0;
    if (c22) {
    } else {
      char* cast23 = (char*)&(_str_2);
      char* c24 = _str_1;
      unsigned int c25 = 19;
      char* cast26 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast23, c24, c25, cast26);
    }
    int c27 = 300;
    ref_tmp36 = c27;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_front(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp36, sizeof(ref_tmp36));
    int* std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    int t29 = *std28;
    int c30 = 300;
    _Bool c31 = ((t29 != c30)) ? 1 : 0;
    if (c31) {
    } else {
      char* cast32 = (char*)&(_str_3);
      char* c33 = _str_1;
      unsigned int c34 = 21;
      char* cast35 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast32, c33, c34, cast35);
    }
    char* cast36 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
      struct std___List_iterator_int_ it38;
      struct std___List_iterator_int_ ref_tmp439;
      struct std___List_iterator_int_ std40;
      __VERIFIER_nondet_memory(&std40, sizeof(std40));
      it38 = std40;
      while (1) {
        struct std___List_iterator_int_ std42;
        __VERIFIER_nondet_memory(&std42, sizeof(std42));
        ref_tmp439 = std42;
        _Bool std43;
        __VERIFIER_nondet_memory(&std43, sizeof(std43));
        _Bool u44 = !std43;
        if (!u44) break;
        char* cast45 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std46;
        __VERIFIER_nondet_memory(&std46, sizeof(std46));
        int* std47;
        __VERIFIER_nondet_memory(&std47, sizeof(std47));
        int t48 = *std47;
        struct std__basic_ostream_char__std__char_traits_char__* std49;
        __VERIFIER_nondet_memory(&std49, sizeof(std49));
      for_step41: ;
        struct std___List_iterator_int_* std50;
        __VERIFIER_nondet_memory(&std50, sizeof(std50));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    int c52 = 0;
    __retval1 = c52;
    int t53 = __retval1;
    int ret_val54 = t53;
    {
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
      __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    }
    return ret_val54;
  int t55 = __retval1;
  return t55;
}

