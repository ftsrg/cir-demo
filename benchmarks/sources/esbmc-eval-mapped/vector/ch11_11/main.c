extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

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
struct std__iterator_std__random_access_iterator_tag__int__long__int____int___;
struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ { struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ current; };
struct std__strong_ordering { char _M_value; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

struct std____cmp_cat____unspec __const_main_agg_tmp1;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[19] = "myvector contains:";
char _str_1[2] = " ";
char _str_2[26] = "vector::_M_realloc_append";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ myvector2;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ rit3;
  int c4 = 0;
  __retval1 = c4;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
      int i5;
      int c6 = 1;
      i5 = c6;
      while (1) {
        int t8 = i5;
        int c9 = 5;
        _Bool c10 = ((t8 <= c9)) ? 1 : 0;
        if (!c10) break;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int const&)
        __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
        __VERIFIER_nondet_memory(&i5, sizeof(i5));
      for_step7: ;
        int t11 = i5;
        int u12 = t11 + 1;
        i5 = u12;
      }
    char* cast13 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    // externalized std:: op: std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >::reverse_iterator()
    __VERIFIER_nondet_memory(&rit3, sizeof(rit3));
      struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ ref_tmp015;
      struct std__strong_ordering agg_tmp016;
      struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ ref_tmp117;
      struct std____cmp_cat____unspec agg_tmp118;
      struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std19;
      __VERIFIER_nondet_memory(&std19, sizeof(std19));
      ref_tmp015 = std19;
      struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* std20;
      __VERIFIER_nondet_memory(&std20, sizeof(std20));
      while (1) {
        struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std22;
        __VERIFIER_nondet_memory(&std22, sizeof(std22));
        ref_tmp117 = std22;
        struct std__strong_ordering std23;
        __VERIFIER_nondet_memory(&std23, sizeof(std23));
        agg_tmp016 = std23;
        agg_tmp118 = *&__const_main_agg_tmp1; // copy
        struct std__strong_ordering t24 = agg_tmp016;
        struct std____cmp_cat____unspec t25 = agg_tmp118;
        _Bool std26;
        __VERIFIER_nondet_memory(&std26, sizeof(std26));
        if (!std26) break;
        char* cast27 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std28;
        __VERIFIER_nondet_memory(&std28, sizeof(std28));
        int* std29;
        __VERIFIER_nondet_memory(&std29, sizeof(std29));
        int t30 = *std29;
        struct std__basic_ostream_char__std__char_traits_char__* std31;
        __VERIFIER_nondet_memory(&std31, sizeof(std31));
      for_step21: ;
        struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* std32;
        __VERIFIER_nondet_memory(&std32, sizeof(std32));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    int c34 = 0;
    __retval1 = c34;
    int t35 = __retval1;
    int ret_val36 = t35;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    }
    return ret_val36;
  int t37 = __retval1;
  return t37;
}

