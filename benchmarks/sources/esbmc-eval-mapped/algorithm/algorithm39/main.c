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
struct __gnu_cxx____ops___Iter_negate_bool_____int__ { void* _M_pred; };
struct __gnu_cxx____ops___Iter_pred_bool_____int__ { void* _M_pred; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Temporary_buffer___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int____Impl { long _M_len; int* _M_buffer; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std____pair_base_int____long_;
struct std__allocator_int_;
struct std__nothrow_t { unsigned char __field0; };
struct std__pair_int____long_ { int* first; long second; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Temporary_buffer___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int_ { long _M_original_len; struct std___Temporary_buffer___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int____Impl _M_impl; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[19] = "IsOdd(myvector[0])";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm39/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "IsOdd(myvector[1])";
char _str_3[19] = "IsOdd(myvector[2])";
char _str_4[19] = "IsOdd(myvector[3])";
char _str_5[19] = "IsOdd(myvector[4])";
char _str_6[20] = "!IsOdd(myvector[5])";
char _str_7[20] = "!IsOdd(myvector[6])";
char _str_8[20] = "!IsOdd(myvector[7])";
char _str_9[20] = "!IsOdd(myvector[8])";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_10[13] = "odd members:";
char _str_11[2] = " ";
char _str_12[15] = "\neven members:";
char _str_13[26] = "vector::_M_realloc_append";
char _str_14[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_15[19] = "__n < this->size()";
_Bool IsOdd(int p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z5IsOddi
_Bool IsOdd(int v0) {
bb1:
  int i2;
  _Bool __retval3;
  i2 = v0;
  int t4 = i2;
  int c5 = 2;
  int b6 = t4 % c5;
  int c7 = 1;
  _Bool c8 = ((b6 == c7)) ? 1 : 0;
  __retval3 = c8;
  _Bool t9 = __retval3;
  return t9;
}

// function: main
int main() {
bb10:
  int __retval11;
  struct std__vector_int__std__allocator_int__ myvector12;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it13;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ bound14;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp015;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp016;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp117;
  int c18 = 0;
  __retval11 = c18;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it13, sizeof(it13));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&bound14, sizeof(bound14));
      int i19;
      int c20 = 1;
      i19 = c20;
      while (1) {
        int t22 = i19;
        int c23 = 10;
        _Bool c24 = ((t22 < c23)) ? 1 : 0;
        if (!c24) break;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int const&)
        __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
        __VERIFIER_nondet_memory(&i19, sizeof(i19));
      for_step21: ;
        int t25 = i19;
        int u26 = t25 + 1;
        i19 = u26;
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    agg_tmp016 = std27;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    agg_tmp117 = std28;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t29 = agg_tmp016;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t30 = agg_tmp117;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    ref_tmp015 = std31;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    unsigned long c33 = 0;
    int* std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    int t35 = *std34;
    _Bool r36 = IsOdd(t35);
    if (r36) {
    } else {
      char* cast37 = (char*)&(_str);
      char* c38 = _str_1;
      unsigned int c39 = 30;
      char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast37, c38, c39, cast40);
    }
    unsigned long c41 = 1;
    int* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    int t43 = *std42;
    _Bool r44 = IsOdd(t43);
    if (r44) {
    } else {
      char* cast45 = (char*)&(_str_2);
      char* c46 = _str_1;
      unsigned int c47 = 31;
      char* cast48 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast45, c46, c47, cast48);
    }
    unsigned long c49 = 2;
    int* std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    int t51 = *std50;
    _Bool r52 = IsOdd(t51);
    if (r52) {
    } else {
      char* cast53 = (char*)&(_str_3);
      char* c54 = _str_1;
      unsigned int c55 = 32;
      char* cast56 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast53, c54, c55, cast56);
    }
    unsigned long c57 = 3;
    int* std58;
    __VERIFIER_nondet_memory(&std58, sizeof(std58));
    int t59 = *std58;
    _Bool r60 = IsOdd(t59);
    if (r60) {
    } else {
      char* cast61 = (char*)&(_str_4);
      char* c62 = _str_1;
      unsigned int c63 = 33;
      char* cast64 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast61, c62, c63, cast64);
    }
    unsigned long c65 = 4;
    int* std66;
    __VERIFIER_nondet_memory(&std66, sizeof(std66));
    int t67 = *std66;
    _Bool r68 = IsOdd(t67);
    if (r68) {
    } else {
      char* cast69 = (char*)&(_str_5);
      char* c70 = _str_1;
      unsigned int c71 = 34;
      char* cast72 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast69, c70, c71, cast72);
    }
    unsigned long c73 = 5;
    int* std74;
    __VERIFIER_nondet_memory(&std74, sizeof(std74));
    int t75 = *std74;
    _Bool r76 = IsOdd(t75);
    _Bool u77 = !r76;
    if (u77) {
    } else {
      char* cast78 = (char*)&(_str_6);
      char* c79 = _str_1;
      unsigned int c80 = 35;
      char* cast81 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast78, c79, c80, cast81);
    }
    unsigned long c82 = 6;
    int* std83;
    __VERIFIER_nondet_memory(&std83, sizeof(std83));
    int t84 = *std83;
    _Bool r85 = IsOdd(t84);
    _Bool u86 = !r85;
    if (u86) {
    } else {
      char* cast87 = (char*)&(_str_7);
      char* c88 = _str_1;
      unsigned int c89 = 36;
      char* cast90 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast87, c88, c89, cast90);
    }
    unsigned long c91 = 7;
    int* std92;
    __VERIFIER_nondet_memory(&std92, sizeof(std92));
    int t93 = *std92;
    _Bool r94 = IsOdd(t93);
    _Bool u95 = !r94;
    if (u95) {
    } else {
      char* cast96 = (char*)&(_str_8);
      char* c97 = _str_1;
      unsigned int c98 = 37;
      char* cast99 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast96, c97, c98, cast99);
    }
    unsigned long c100 = 8;
    int* std101;
    __VERIFIER_nondet_memory(&std101, sizeof(std101));
    int t102 = *std101;
    _Bool r103 = IsOdd(t102);
    _Bool u104 = !r103;
    if (u104) {
    } else {
      char* cast105 = (char*)&(_str_9);
      char* c106 = _str_1;
      unsigned int c107 = 38;
      char* cast108 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast105, c106, c107, cast108);
    }
    char* cast109 = (char*)&(_str_10);
    struct std__basic_ostream_char__std__char_traits_char__* std110;
    __VERIFIER_nondet_memory(&std110, sizeof(std110));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1111;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std112;
      __VERIFIER_nondet_memory(&std112, sizeof(std112));
      ref_tmp1111 = std112;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std113;
      __VERIFIER_nondet_memory(&std113, sizeof(std113));
      while (1) {
        _Bool std115;
        __VERIFIER_nondet_memory(&std115, sizeof(std115));
        _Bool u116 = !std115;
        if (!u116) break;
        char* cast117 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* std118;
        __VERIFIER_nondet_memory(&std118, sizeof(std118));
        int* std119;
        __VERIFIER_nondet_memory(&std119, sizeof(std119));
        int t120 = *std119;
        struct std__basic_ostream_char__std__char_traits_char__* std121;
        __VERIFIER_nondet_memory(&std121, sizeof(std121));
      for_step114: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std122;
        __VERIFIER_nondet_memory(&std122, sizeof(std122));
      }
    char* cast123 = (char*)&(_str_12);
    struct std__basic_ostream_char__std__char_traits_char__* std124;
    __VERIFIER_nondet_memory(&std124, sizeof(std124));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2125;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std126;
      __VERIFIER_nondet_memory(&std126, sizeof(std126));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std128;
        __VERIFIER_nondet_memory(&std128, sizeof(std128));
        ref_tmp2125 = std128;
        _Bool std129;
        __VERIFIER_nondet_memory(&std129, sizeof(std129));
        _Bool u130 = !std129;
        if (!u130) break;
        char* cast131 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* std132;
        __VERIFIER_nondet_memory(&std132, sizeof(std132));
        int* std133;
        __VERIFIER_nondet_memory(&std133, sizeof(std133));
        int t134 = *std133;
        struct std__basic_ostream_char__std__char_traits_char__* std135;
        __VERIFIER_nondet_memory(&std135, sizeof(std135));
      for_step127: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std136;
        __VERIFIER_nondet_memory(&std136, sizeof(std136));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std137;
    __VERIFIER_nondet_memory(&std137, sizeof(std137));
    int c138 = 0;
    __retval11 = c138;
    int t139 = __retval11;
    int ret_val140 = t139;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
    }
    return ret_val140;
  int t141 = __retval11;
  return t141;
}

