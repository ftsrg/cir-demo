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
struct std___List_const_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std___List_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_int___ { struct std__allocator_std___List_node_int__* _M_alloc; struct std___List_node_int_* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____false_type { unsigned char __field0; };
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
struct std____cxx11__list_int__std__allocator_int__ __const_main_ref_tmp2;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[16] = "second != first";
char _str_1[117] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_operator_assign_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "second.size() == 3";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[16] = "Size of first: ";
char _str_4[17] = "Size of second: ";
char _str_5[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[15] = "!this->empty()";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__list_int__std__allocator_int__ first2;
  struct std__allocator_int_ ref_tmp03;
  struct std____cxx11__list_int__std__allocator_int__ second4;
  struct std__allocator_int_ ref_tmp15;
  struct std____cxx11__list_int__std__allocator_int__ ref_tmp26;
  struct std____cxx11__list_int__std__allocator_int__* tmp_exprcleanup7;
  int c8 = 0;
  __retval1 = c8;
  unsigned long c9 = 3;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list(unsigned long, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&first2, sizeof(first2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    unsigned long c10 = 5;
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list(unsigned long, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&second4, sizeof(second4));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      struct std____cxx11__list_int__std__allocator_int__* std11;
      __VERIFIER_nondet_memory(&std11, sizeof(std11));
      _Bool std12;
      __VERIFIER_nondet_memory(&std12, sizeof(std12));
      _Bool u13 = !std12;
      if (u13) {
      } else {
        char* cast14 = (char*)&(_str);
        char* c15 = _str_1;
        unsigned int c16 = 20;
        char* cast17 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast14, c15, c16, cast17);
      }
      unsigned long std18 = __VERIFIER_nondet_unsigned_long();
      unsigned long c19 = 3;
      _Bool c20 = ((std18 == c19)) ? 1 : 0;
      if (c20) {
      } else {
        char* cast21 = (char*)&(_str_2);
        char* c22 = _str_1;
        unsigned int c23 = 21;
        char* cast24 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast21, c22, c23, cast24);
      }
      ref_tmp26 = *&__const_main_ref_tmp2; // copy
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list()
      __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
        struct std____cxx11__list_int__std__allocator_int__* std25;
        __VERIFIER_nondet_memory(&std25, sizeof(std25));
        tmp_exprcleanup7 = std25;
      {
        // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
        __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
      }
      struct std____cxx11__list_int__std__allocator_int__* t26 = tmp_exprcleanup7;
      char* cast27 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std28;
      __VERIFIER_nondet_memory(&std28, sizeof(std28));
      unsigned long std29 = __VERIFIER_nondet_unsigned_long();
      int cast30 = (int)std29;
      struct std__basic_ostream_char__std__char_traits_char__* std31;
      __VERIFIER_nondet_memory(&std31, sizeof(std31));
      struct std__basic_ostream_char__std__char_traits_char__* std32;
      __VERIFIER_nondet_memory(&std32, sizeof(std32));
      char* cast33 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std34;
      __VERIFIER_nondet_memory(&std34, sizeof(std34));
      unsigned long std35 = __VERIFIER_nondet_unsigned_long();
      int cast36 = (int)std35;
      struct std__basic_ostream_char__std__char_traits_char__* std37;
      __VERIFIER_nondet_memory(&std37, sizeof(std37));
      struct std__basic_ostream_char__std__char_traits_char__* std38;
      __VERIFIER_nondet_memory(&std38, sizeof(std38));
      int c39 = 0;
      __retval1 = c39;
      int t40 = __retval1;
      int ret_val41 = t40;
      {
        // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
        __VERIFIER_nondet_memory(&second4, sizeof(second4));
      }
      {
        // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
        __VERIFIER_nondet_memory(&first2, sizeof(first2));
      }
      return ret_val41;
  int t42 = __retval1;
  return t42;
}

