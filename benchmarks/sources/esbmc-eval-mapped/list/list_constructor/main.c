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
int __const_main_myints[4] = {16, 2, 77, 29};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "first.size() == 0";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_constructor/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "second.size() == 4";
char _str_3[21] = "second.back() == 100";
char _str_4[30] = "third.size() == second.size()";
char _str_5[30] = "third.back() == second.back()";
char _str_6[19] = "fourth.size() == 4";
char _str_7[21] = "fourth.back() == 100";
char _str_8[18] = "fifth.size() == 4";
char _str_9[10] = "*it == 16";
char _str_10[13] = "*(++it) == 2";
char _str_11[14] = "*(++it) == 77";
char _str_12[14] = "*(++it) == 29";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_13[28] = "The contents of fifth are: ";
char _str_14[2] = " ";
char _str_15[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_16[15] = "!this->empty()";
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
  struct std____cxx11__list_int__std__allocator_int__ second3;
  int ref_tmp04;
  struct std__allocator_int_ ref_tmp15;
  struct std____cxx11__list_int__std__allocator_int__ third6;
  struct std___List_iterator_int_ agg_tmp07;
  struct std___List_iterator_int_ agg_tmp18;
  struct std__allocator_int_ ref_tmp29;
  struct std____cxx11__list_int__std__allocator_int__ fourth10;
  int myints11[4];
  struct std____cxx11__list_int__std__allocator_int__ fifth12;
  struct std__allocator_int_ ref_tmp313;
  struct std___List_iterator_int_ it14;
  int c15 = 0;
  __retval1 = c15;
  // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list()
  __VERIFIER_nondet_memory(&first2, sizeof(first2));
    unsigned long std16 = __VERIFIER_nondet_unsigned_long();
    unsigned long c17 = 0;
    _Bool c18 = ((std16 == c17)) ? 1 : 0;
    if (c18) {
    } else {
      char* cast19 = (char*)&(_str);
      char* c20 = (char*)_str_1;
      unsigned int c21 = 18;
      char* cast22 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast19, c20, c21, cast22);
    }
    unsigned long c23 = 4;
    int c24 = 100;
    ref_tmp04 = c24;
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list(unsigned long, int const&, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&second3, sizeof(second3));
      __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      unsigned long std25 = __VERIFIER_nondet_unsigned_long();
      unsigned long c26 = 4;
      _Bool c27 = ((std25 == c26)) ? 1 : 0;
      if (c27) {
      } else {
        char* cast28 = (char*)&(_str_2);
        char* c29 = (char*)_str_1;
        unsigned int c30 = 20;
        char* cast31 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast28, c29, c30, cast31);
      }
      int* std32;
      __VERIFIER_nondet_memory(&std32, sizeof(std32));
      int t33 = *std32;
      int c34 = 100;
      _Bool c35 = ((t33 == c34)) ? 1 : 0;
      if (c35) {
      } else {
        char* cast36 = (char*)&(_str_3);
        char* c37 = (char*)_str_1;
        unsigned int c38 = 21;
        char* cast39 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast36, c37, c38, cast39);
      }
      struct std___List_iterator_int_ std40;
      __VERIFIER_nondet_memory(&std40, sizeof(std40));
      agg_tmp07 = std40;
      struct std___List_iterator_int_ std41;
      __VERIFIER_nondet_memory(&std41, sizeof(std41));
      agg_tmp18 = std41;
      // externalized std:: op: std::allocator<int>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp29, sizeof(ref_tmp29));
        struct std___List_iterator_int_ t42 = agg_tmp07;
        struct std___List_iterator_int_ t43 = agg_tmp18;
        // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list<std::_List_iterator<int>, void>(std::_List_iterator<int>, std::_List_iterator<int>, std::allocator<int> const&)
        __VERIFIER_nondet_memory(&third6, sizeof(third6));
        __VERIFIER_nondet_memory(&ref_tmp29, sizeof(ref_tmp29));
      {
        // externalized std:: op: std::allocator<int>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp29, sizeof(ref_tmp29));
      }
        unsigned long std44 = __VERIFIER_nondet_unsigned_long();
        unsigned long std45 = __VERIFIER_nondet_unsigned_long();
        _Bool c46 = ((std44 == std45)) ? 1 : 0;
        if (c46) {
        } else {
          char* cast47 = (char*)&(_str_4);
          char* c48 = (char*)_str_1;
          unsigned int c49 = 23;
          char* cast50 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast47, c48, c49, cast50);
        }
        int* std51;
        __VERIFIER_nondet_memory(&std51, sizeof(std51));
        int t52 = *std51;
        int* std53;
        __VERIFIER_nondet_memory(&std53, sizeof(std53));
        int t54 = *std53;
        _Bool c55 = ((t52 == t54)) ? 1 : 0;
        if (c55) {
        } else {
          char* cast56 = (char*)&(_str_5);
          char* c57 = (char*)_str_1;
          unsigned int c58 = 24;
          char* cast59 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast56, c57, c58, cast59);
        }
        // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list(std::__cxx11::list<int, std::allocator<int> > const&)
        __VERIFIER_nondet_memory(&fourth10, sizeof(fourth10));
        __VERIFIER_nondet_memory(&third6, sizeof(third6));
          unsigned long std60 = __VERIFIER_nondet_unsigned_long();
          unsigned long c61 = 4;
          _Bool c62 = ((std60 == c61)) ? 1 : 0;
          if (c62) {
          } else {
            char* cast63 = (char*)&(_str_6);
            char* c64 = (char*)_str_1;
            unsigned int c65 = 26;
            char* cast66 = (char*)&(__PRETTY_FUNCTION___main);
            reach_error();
            __assert_fail(cast63, c64, c65, cast66);
          }
          int* std67;
          __VERIFIER_nondet_memory(&std67, sizeof(std67));
          int t68 = *std67;
          int c69 = 100;
          _Bool c70 = ((t68 == c69)) ? 1 : 0;
          if (c70) {
          } else {
            char* cast71 = (char*)&(_str_7);
            char* c72 = (char*)_str_1;
            unsigned int c73 = 27;
            char* cast74 = (char*)&(__PRETTY_FUNCTION___main);
            reach_error();
            __assert_fail(cast71, c72, c73, cast74);
          }
          // array copy
          __builtin_memcpy(myints11, __const_main_myints, (unsigned long)4 * sizeof(__const_main_myints[0]));
          int* cast75 = (int*)&(myints11);
          int* cast76 = (int*)&(myints11);
          unsigned long c77 = 16;
          unsigned long c78 = 4;
          unsigned long b79 = c77 / c78;
          int* ptr80 = &(cast76)[b79];
          // externalized std:: op: std::allocator<int>::allocator()
          __VERIFIER_nondet_memory(&ref_tmp313, sizeof(ref_tmp313));
            // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list<int*, void>(int*, int*, std::allocator<int> const&)
            __VERIFIER_nondet_memory(&fifth12, sizeof(fifth12));
            __VERIFIER_nondet_memory(cast75, sizeof(*cast75));
            __VERIFIER_nondet_memory(ptr80, sizeof(*ptr80));
            __VERIFIER_nondet_memory(&ref_tmp313, sizeof(ref_tmp313));
          {
            // externalized std:: op: std::allocator<int>::~allocator()
            __VERIFIER_nondet_memory(&ref_tmp313, sizeof(ref_tmp313));
          }
            unsigned long std81 = __VERIFIER_nondet_unsigned_long();
            unsigned long c82 = 4;
            _Bool c83 = ((std81 == c82)) ? 1 : 0;
            if (c83) {
            } else {
              char* cast84 = (char*)&(_str_8);
              char* c85 = (char*)_str_1;
              unsigned int c86 = 32;
              char* cast87 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast84, c85, c86, cast87);
            }
            struct std___List_iterator_int_ std88;
            __VERIFIER_nondet_memory(&std88, sizeof(std88));
            it14 = std88;
            int* std89;
            __VERIFIER_nondet_memory(&std89, sizeof(std89));
            int t90 = *std89;
            int c91 = 16;
            _Bool c92 = ((t90 == c91)) ? 1 : 0;
            if (c92) {
            } else {
              char* cast93 = (char*)&(_str_9);
              char* c94 = (char*)_str_1;
              unsigned int c95 = 35;
              char* cast96 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast93, c94, c95, cast96);
            }
            struct std___List_iterator_int_* std97;
            __VERIFIER_nondet_memory(&std97, sizeof(std97));
            int* std98;
            __VERIFIER_nondet_memory(&std98, sizeof(std98));
            int t99 = *std98;
            int c100 = 2;
            _Bool c101 = ((t99 == c100)) ? 1 : 0;
            if (c101) {
            } else {
              char* cast102 = (char*)&(_str_10);
              char* c103 = (char*)_str_1;
              unsigned int c104 = 36;
              char* cast105 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast102, c103, c104, cast105);
            }
            struct std___List_iterator_int_* std106;
            __VERIFIER_nondet_memory(&std106, sizeof(std106));
            int* std107;
            __VERIFIER_nondet_memory(&std107, sizeof(std107));
            int t108 = *std107;
            int c109 = 77;
            _Bool c110 = ((t108 == c109)) ? 1 : 0;
            if (c110) {
            } else {
              char* cast111 = (char*)&(_str_11);
              char* c112 = (char*)_str_1;
              unsigned int c113 = 37;
              char* cast114 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast111, c112, c113, cast114);
            }
            struct std___List_iterator_int_* std115;
            __VERIFIER_nondet_memory(&std115, sizeof(std115));
            int* std116;
            __VERIFIER_nondet_memory(&std116, sizeof(std116));
            int t117 = *std116;
            int c118 = 29;
            _Bool c119 = ((t117 == c118)) ? 1 : 0;
            if (c119) {
            } else {
              char* cast120 = (char*)&(_str_12);
              char* c121 = (char*)_str_1;
              unsigned int c122 = 38;
              char* cast123 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast120, c121, c122, cast123);
            }
            char* cast124 = (char*)&(_str_13);
            struct std__basic_ostream_char__std__char_traits_char__* std125;
            __VERIFIER_nondet_memory(&std125, sizeof(std125));
              struct std___List_iterator_int_ it126;
              struct std___List_iterator_int_ ref_tmp4127;
              struct std___List_iterator_int_ agg_tmp2128;
              struct std___List_iterator_int_ std129;
              __VERIFIER_nondet_memory(&std129, sizeof(std129));
              it126 = std129;
              while (1) {
                struct std___List_iterator_int_ std131;
                __VERIFIER_nondet_memory(&std131, sizeof(std131));
                ref_tmp4127 = std131;
                _Bool std132;
                __VERIFIER_nondet_memory(&std132, sizeof(std132));
                _Bool u133 = !std132;
                if (!u133) break;
                int* std134;
                __VERIFIER_nondet_memory(&std134, sizeof(std134));
                int t135 = *std134;
                struct std__basic_ostream_char__std__char_traits_char__* std136;
                __VERIFIER_nondet_memory(&std136, sizeof(std136));
                char* cast137 = (char*)&(_str_14);
                struct std__basic_ostream_char__std__char_traits_char__* std138;
                __VERIFIER_nondet_memory(&std138, sizeof(std138));
              for_step130: ;
                int c139 = 0;
                struct std___List_iterator_int_ std140;
                __VERIFIER_nondet_memory(&std140, sizeof(std140));
                agg_tmp2128 = std140;
              }
            struct std__basic_ostream_char__std__char_traits_char__* std141;
            __VERIFIER_nondet_memory(&std141, sizeof(std141));
            int c142 = 0;
            __retval1 = c142;
            int t143 = __retval1;
            int ret_val144 = t143;
            {
              // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
              __VERIFIER_nondet_memory(&fifth12, sizeof(fifth12));
            }
            {
              // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
              __VERIFIER_nondet_memory(&fourth10, sizeof(fourth10));
            }
            {
              // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
              __VERIFIER_nondet_memory(&third6, sizeof(third6));
            }
            {
              // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
              __VERIFIER_nondet_memory(&second3, sizeof(second3));
            }
            {
              // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
              __VERIFIER_nondet_memory(&first2, sizeof(first2));
            }
            return ret_val144;
  int t145 = __retval1;
  return t145;
}

