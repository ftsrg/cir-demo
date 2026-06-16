extern void abort(void);
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
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std___List_node_int_ { struct std____detail___List_node_base __field0; struct __gnu_cxx____aligned_membuf_int_ _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std____allocated_obj_std__allocator_std___List_node_int___ { struct std____allocated_ptr_std__allocator_std___List_node_int___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
struct std____cxx11__list_int__std__allocator_int__ __const_main_ref_tmp2;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[16] = "second == first";
char _str_1[113] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_operator_assign/main.cpp";
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
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0: ;
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
      if (std12) {
      } else {
        char* cast13 = (char*)&(_str);
        char* c14 = (char*)_str_1;
        unsigned int c15 = 20;
        char* cast16 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast13, c14, c15, cast16);
      }
      unsigned long std17 = __VERIFIER_nondet_unsigned_long();
      unsigned long c18 = 3;
      _Bool c19 = ((std17 == c18)) ? 1 : 0;
      if (c19) {
      } else {
        char* cast20 = (char*)&(_str_2);
        char* c21 = (char*)_str_1;
        unsigned int c22 = 21;
        char* cast23 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast20, c21, c22, cast23);
      }
      ref_tmp26 = *&__const_main_ref_tmp2; // copy
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list()
      __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
        struct std____cxx11__list_int__std__allocator_int__* std24;
        __VERIFIER_nondet_memory(&std24, sizeof(std24));
        tmp_exprcleanup7 = std24;
      {
        // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
        __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
      }
      struct std____cxx11__list_int__std__allocator_int__* t25 = tmp_exprcleanup7;
      char* cast26 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std27;
      __VERIFIER_nondet_memory(&std27, sizeof(std27));
      unsigned long std28 = __VERIFIER_nondet_unsigned_long();
      int cast29 = (int)std28;
      struct std__basic_ostream_char__std__char_traits_char__* std30;
      __VERIFIER_nondet_memory(&std30, sizeof(std30));
      struct std__basic_ostream_char__std__char_traits_char__* std31;
      __VERIFIER_nondet_memory(&std31, sizeof(std31));
      char* cast32 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std33;
      __VERIFIER_nondet_memory(&std33, sizeof(std33));
      unsigned long std34 = __VERIFIER_nondet_unsigned_long();
      int cast35 = (int)std34;
      struct std__basic_ostream_char__std__char_traits_char__* std36;
      __VERIFIER_nondet_memory(&std36, sizeof(std36));
      struct std__basic_ostream_char__std__char_traits_char__* std37;
      __VERIFIER_nondet_memory(&std37, sizeof(std37));
      int c38 = 0;
      __retval1 = c38;
      int t39 = __retval1;
      int ret_val40 = t39;
      {
        // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
        __VERIFIER_nondet_memory(&second4, sizeof(second4));
      }
      {
        // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
        __VERIFIER_nondet_memory(&first2, sizeof(first2));
      }
      return ret_val40;
  int t41 = __retval1;
  return t41;
}

