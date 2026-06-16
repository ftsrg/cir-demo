extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Identity_int_ { unsigned char __field0; };
struct std___Rb_tree_const_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* _M_t; };
struct std___Rb_tree_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_int__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_int_ { struct std___Rb_tree_node_base __field0; struct __gnu_cxx____aligned_membuf_int_ _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std____new_allocator_std___Rb_tree_node_int__;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_int__;
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_int_;
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int __const_main_mySecondInts[5] = {13, 23, 42, 65, 75};
int __const_main_myints[5] = {75, 23, 65, 42, 13};
char _str[18] = "myset.size() == 5";
char _str_1[105] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-begin-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[23] = "*it != mySecondInts[i]";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0: ;
  int __retval1;
  int myints2[5];
  int mySecondInts3[5];
  int i4;
  struct std__set_int__std__less_int___std__allocator_int__ myset5;
  struct std___Rb_tree_const_iterator_int_ it6;
  int c7 = 0;
  __retval1 = c7;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  // array copy
  __builtin_memcpy(mySecondInts3, __const_main_mySecondInts, (unsigned long)5 * sizeof(__const_main_mySecondInts[0]));
  int* cast8 = (int*)&(myints2);
  int* cast9 = (int*)&(myints2);
  int c10 = 5;
  int* ptr11 = &(cast9)[c10];
  // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set<int*>(int*, int*)
  __VERIFIER_nondet_memory(&myset5, sizeof(myset5));
  __VERIFIER_nondet_memory(cast8, sizeof(*cast8));
  __VERIFIER_nondet_memory(ptr11, sizeof(*ptr11));
    unsigned long std12 = __VERIFIER_nondet_unsigned_long();
    unsigned long c13 = 5;
    _Bool c14 = ((std12 == c13)) ? 1 : 0;
    if (c14) {
    } else {
      char* cast15 = (char*)&(_str);
      char* c16 = (char*)_str_1;
      unsigned int c17 = 19;
      char* cast18 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast15, c16, c17, cast18);
    }
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&it6, sizeof(it6));
      struct std___Rb_tree_const_iterator_int_ ref_tmp019;
      struct std___Rb_tree_const_iterator_int_ ref_tmp120;
      struct std___Rb_tree_const_iterator_int_ agg_tmp021;
      struct std___Rb_tree_const_iterator_int_ std22;
      __VERIFIER_nondet_memory(&std22, sizeof(std22));
      ref_tmp019 = std22;
      struct std___Rb_tree_const_iterator_int_* std23;
      __VERIFIER_nondet_memory(&std23, sizeof(std23));
      int c24 = 0;
      i4 = c24;
      while (1) {
        struct std___Rb_tree_const_iterator_int_ std26;
        __VERIFIER_nondet_memory(&std26, sizeof(std26));
        ref_tmp120 = std26;
        _Bool std27;
        __VERIFIER_nondet_memory(&std27, sizeof(std27));
        _Bool u28 = !std27;
        if (!u28) break;
          int* std29;
          __VERIFIER_nondet_memory(&std29, sizeof(std29));
          int t30 = *std29;
          int t31 = i4;
          long cast32 = (long)t31;
          int t33 = mySecondInts3[cast32];
          _Bool c34 = ((t30 != t33)) ? 1 : 0;
          if (c34) {
          } else {
            char* cast35 = (char*)&(_str_2);
            char* c36 = (char*)_str_1;
            unsigned int c37 = 25;
            char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
            reach_error();
            __assert_fail(cast35, c36, c37, cast38);
          }
      for_step25: ;
        int c39 = 0;
        struct std___Rb_tree_const_iterator_int_ std40;
        __VERIFIER_nondet_memory(&std40, sizeof(std40));
        agg_tmp021 = std40;
        int t41 = i4;
        int u42 = t41 + 1;
        i4 = u42;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    int c44 = 0;
    __retval1 = c44;
    int t45 = __retval1;
    int ret_val46 = t45;
    {
      // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
      __VERIFIER_nondet_memory(&myset5, sizeof(myset5));
    }
    return ret_val46;
  int t47 = __retval1;
  return t47;
}

