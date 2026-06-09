extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ { void* _M_comp; };
struct __gnu_cxx____ops___Iter_equal_to_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std____pair_base___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___;
struct std__allocator_int_;
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ { struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first; int* second; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[29] = "First mismatching elements: ";
char _str_1[6] = " and ";
char _str_2[20] = "*mypair.first == 40";
char _str_3[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm72/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[22] = "*mypair.second != 320";
char _str_5[30] = "Second mismatching elements: ";
char _str_6[26] = "vector::_M_realloc_append";
char _str_7[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_8[15] = "!this->empty()";
_Bool mypredicate(int p0, int p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z11mypredicateii
_Bool mypredicate(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = ((t6 == t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: main
int main() {
bb10:
  int __retval11;
  struct std__vector_int__std__allocator_int__ myvector12;
  int myints13[5];
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ mypair14;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ ref_tmp115;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp016;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp117;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp218;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ ref_tmp219;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp320;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp421;
  int c22 = 0;
  __retval11 = c22;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
      int i23;
      int ref_tmp024;
      int c25 = 1;
      i23 = c25;
      while (1) {
        int t27 = i23;
        int c28 = 6;
        _Bool c29 = ((t27 < c28)) ? 1 : 0;
        if (!c29) break;
        int t30 = i23;
        int c31 = 10;
        int b32 = t30 * c31;
        ref_tmp024 = b32;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
        __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
        __VERIFIER_nondet_memory(&ref_tmp024, sizeof(ref_tmp024));
      for_step26: ;
        int t33 = i23;
        int u34 = t33 + 1;
        i23 = u34;
      }
    int c35 = 10;
    long c36 = 0;
    myints13[c36] = c35;
    int c37 = 20;
    long c38 = 1;
    myints13[c38] = c37;
    int c39 = 80;
    long c40 = 2;
    myints13[c40] = c39;
    int c41 = 320;
    long c42 = 3;
    myints13[c42] = c41;
    int c43 = 1024;
    long c44 = 4;
    myints13[c44] = c43;
    // externalized std:: op: _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E
    __VERIFIER_nondet_memory(&mypair14, sizeof(mypair14));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    agg_tmp016 = std45;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    agg_tmp117 = std46;
    int* cast47 = (int*)&(myints13);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t48 = agg_tmp016;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t49 = agg_tmp117;
    struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    ref_tmp115 = std50;
    struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    char* cast52 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    int* std54;
    __VERIFIER_nondet_memory(&std54, sizeof(std54));
    int t55 = *std54;
    struct std__basic_ostream_char__std__char_traits_char__* std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
    char* cast57 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std58;
    __VERIFIER_nondet_memory(&std58, sizeof(std58));
    int* t59 = mypair14.second;
    int t60 = *t59;
    struct std__basic_ostream_char__std__char_traits_char__* std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    struct std__basic_ostream_char__std__char_traits_char__* std62;
    __VERIFIER_nondet_memory(&std62, sizeof(std62));
    int c63 = 0;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std64;
    __VERIFIER_nondet_memory(&std64, sizeof(std64));
    agg_tmp218 = std64;
    int* t65 = mypair14.second;
    int c66 = 1;
    int* ptr67 = &(t65)[c66];
    mypair14.second = ptr67;
    agg_tmp320 = mypair14.first; // copy
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std68;
    __VERIFIER_nondet_memory(&std68, sizeof(std68));
    agg_tmp421 = std68;
    int* t69 = mypair14.second;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t70 = agg_tmp320;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t71 = agg_tmp421;
    struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ std72;
    __VERIFIER_nondet_memory(&std72, sizeof(std72));
    ref_tmp219 = std72;
    struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* std73;
    __VERIFIER_nondet_memory(&std73, sizeof(std73));
    int* std74;
    __VERIFIER_nondet_memory(&std74, sizeof(std74));
    int t75 = *std74;
    int c76 = 40;
    _Bool c77 = ((t75 == c76)) ? 1 : 0;
    if (c77) {
    } else {
      char* cast78 = (char*)&(_str_2);
      char* c79 = _str_3;
      unsigned int c80 = 44;
      char* cast81 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast78, c79, c80, cast81);
    }
    int* t82 = mypair14.second;
    int t83 = *t82;
    int c84 = 320;
    _Bool c85 = ((t83 != c84)) ? 1 : 0;
    if (c85) {
    } else {
      char* cast86 = (char*)&(_str_4);
      char* c87 = _str_3;
      unsigned int c88 = 45;
      char* cast89 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast86, c87, c88, cast89);
    }
    char* cast90 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std91;
    __VERIFIER_nondet_memory(&std91, sizeof(std91));
    int* std92;
    __VERIFIER_nondet_memory(&std92, sizeof(std92));
    int t93 = *std92;
    struct std__basic_ostream_char__std__char_traits_char__* std94;
    __VERIFIER_nondet_memory(&std94, sizeof(std94));
    char* cast95 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std96;
    __VERIFIER_nondet_memory(&std96, sizeof(std96));
    int* t97 = mypair14.second;
    int t98 = *t97;
    struct std__basic_ostream_char__std__char_traits_char__* std99;
    __VERIFIER_nondet_memory(&std99, sizeof(std99));
    struct std__basic_ostream_char__std__char_traits_char__* std100;
    __VERIFIER_nondet_memory(&std100, sizeof(std100));
    int c101 = 0;
    __retval11 = c101;
    int t102 = __retval11;
    int ret_val103 = t102;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
    }
    return ret_val103;
  int t104 = __retval11;
  return t104;
}

