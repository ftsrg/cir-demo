extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____detail___Synth3way { unsigned char __field0; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__iterator_std__random_access_iterator_tag__int__long__int____int___;
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ { struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ current; };
struct std__strong_ordering { char _M_value; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

struct std____cmp_cat____unspec __const_main_agg_tmp1;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[19] = "myvector contains:";
char _str_1[10] = "*rit == 5";
char _str_2[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector25/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[2] = " ";
char _str_4[26] = "vector::_M_realloc_append";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std__vector_int__std__allocator_int__ myvector2;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ rit3;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ ref_tmp04;
  int c5 = 0;
  __retval1 = c5;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
      int i6;
      int c7 = 1;
      i6 = c7;
      while (1) {
        int t9 = i6;
        int c10 = 5;
        _Bool c11 = ((t9 <= c10)) ? 1 : 0;
        if (!c11) break;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int const&)
        __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
        __VERIFIER_nondet_memory(&i6, sizeof(i6));
      for_step8: ;
        int t12 = i6;
        int u13 = t12 + 1;
        i6 = u13;
      }
    char* cast14 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
    // externalized std:: op: std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >::reverse_iterator()
    __VERIFIER_nondet_memory(&rit3, sizeof(rit3));
    struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    ref_tmp04 = std16;
    struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* std17;
    __VERIFIER_nondet_memory(&std17, sizeof(std17));
    int* std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    int t19 = *std18;
    int c20 = 5;
    _Bool c21 = ((t19 == c20)) ? 1 : 0;
    if (c21) {
    } else {
      char* cast22 = (char*)&(_str_1);
      char* c23 = (char*)_str_2;
      unsigned int c24 = 22;
      char* cast25 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast22, c23, c24, cast25);
    }
      struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ ref_tmp126;
      struct std__strong_ordering agg_tmp027;
      struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ ref_tmp228;
      struct std____cmp_cat____unspec agg_tmp129;
      struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std30;
      __VERIFIER_nondet_memory(&std30, sizeof(std30));
      ref_tmp126 = std30;
      struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* std31;
      __VERIFIER_nondet_memory(&std31, sizeof(std31));
      while (1) {
        struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std33;
        __VERIFIER_nondet_memory(&std33, sizeof(std33));
        ref_tmp228 = std33;
        struct std__strong_ordering std34;
        __VERIFIER_nondet_memory(&std34, sizeof(std34));
        agg_tmp027 = std34;
        agg_tmp129 = *&__const_main_agg_tmp1; // copy
        struct std__strong_ordering t35 = agg_tmp027;
        struct std____cmp_cat____unspec t36 = agg_tmp129;
        _Bool std37;
        __VERIFIER_nondet_memory(&std37, sizeof(std37));
        if (!std37) break;
        char* cast38 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std39;
        __VERIFIER_nondet_memory(&std39, sizeof(std39));
        int* std40;
        __VERIFIER_nondet_memory(&std40, sizeof(std40));
        int t41 = *std40;
        struct std__basic_ostream_char__std__char_traits_char__* std42;
        __VERIFIER_nondet_memory(&std42, sizeof(std42));
      for_step32: ;
        struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* std43;
        __VERIFIER_nondet_memory(&std43, sizeof(std43));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    int c45 = 0;
    __retval1 = c45;
    int t46 = __retval1;
    int ret_val47 = t46;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    }
    return ret_val47;
  int t48 = __retval1;
  return t48;
}

