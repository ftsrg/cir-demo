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
struct __gnu_cxx____ops___Iter_equals_val_const_int_ { int* _M_value; };
struct __gnu_cxx____ops___Iter_pred_bool_____int__ { void* _M_pred; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_;
struct std__ostream_iterator_int__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_a[10] = {10, 2, 10, 4, 16, 6, 14, 8, 12, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[40] = "Vector v1 before replacing all 10s:\n   ";
char _str_2[46] = "\nVector v1 after replacing 10s with 100s:\n   ";
char _str_3[38] = "\n\nVector v2 before replacing all 10s ";
char _str_4[17] = "and copying:\n   ";
char _str_5[46] = "\nVector c1 after replacing all 10s in v2:\n   ";
char _str_6[44] = "\n\nVector v3 before replacing values greater";
char _str_7[13] = " than 9:\n   ";
char _str_8[46] = "\nVector v3 after replacing all values greater";
char _str_9[23] = "\nthan 9 with 100s:\n   ";
char _str_10[49] = "\n\nVector v4 before replacing all values greater ";
char _str_11[24] = "than 9 and copying:\n   ";
char _str_12[47] = "\nVector c2 after replacing all values greater ";
char _str_13[18] = "than 9 in v4:\n   ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_14[49] = "cannot create std::vector larger than max_size()";
_Bool greater9(int p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z8greater9i
_Bool greater9(int v0) {
bb1:
  int x2;
  _Bool __retval3;
  x2 = v0;
  int t4 = x2;
  int c5 = 9;
  _Bool c6 = ((t4 > c5)) ? 1 : 0;
  __retval3 = c6;
  _Bool t7 = __retval3;
  return t7;
}

// function: main
int main() {
bb8:
  int __retval9;
  int SIZE10;
  int a11[10];
  struct std__ostream_iterator_int__char__std__char_traits_char__ output12;
  struct std__vector_int__std__allocator_int__ v113;
  struct std__allocator_int_ ref_tmp014;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp015;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp116;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp217;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp318;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp419;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp520;
  int ref_tmp121;
  int ref_tmp222;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp623;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp724;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp825;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp926;
  struct std__vector_int__std__allocator_int__ v227;
  struct std__allocator_int_ ref_tmp328;
  struct std__vector_int__std__allocator_int__ c129;
  struct std__allocator_int_ ref_tmp430;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1031;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1132;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1233;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1334;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1435;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1536;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1637;
  int ref_tmp538;
  int ref_tmp639;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1740;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1841;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1942;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2043;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2144;
  struct std__vector_int__std__allocator_int__ v345;
  struct std__allocator_int_ ref_tmp746;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2247;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2348;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2449;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2550;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2651;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2752;
  int ref_tmp853;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2854;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2955;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3056;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3157;
  struct std__vector_int__std__allocator_int__ v458;
  struct std__allocator_int_ ref_tmp959;
  struct std__vector_int__std__allocator_int__ c260;
  struct std__allocator_int_ ref_tmp1061;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3262;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3363;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3464;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3565;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3666;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3767;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3868;
  int ref_tmp1169;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3970;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4071;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4172;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp4273;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp4374;
  int c75 = 0;
  __retval9 = c75;
  int c76 = 10;
  SIZE10 = c76;
  // array copy
  __builtin_memcpy(a11, __const_main_a, (unsigned long)10 * sizeof(__const_main_a[0]));
  char* cast77 = (char*)&(_str);
  // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream&, char const*)
  __VERIFIER_nondet_memory(&output12, sizeof(output12));
  __VERIFIER_nondet_memory(&_ZSt4cout, sizeof(*&_ZSt4cout));
  __VERIFIER_nondet_memory(cast77, sizeof(*cast77));
  int* cast78 = (int*)&(a11);
  int* cast79 = (int*)&(a11);
  int t80 = SIZE10;
  int* ptr81 = &(cast79)[t80];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp014, sizeof(ref_tmp014));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&v113, sizeof(v113));
    __VERIFIER_nondet_memory(cast78, sizeof(*cast78));
    __VERIFIER_nondet_memory(ptr81, sizeof(*ptr81));
    __VERIFIER_nondet_memory(&ref_tmp014, sizeof(ref_tmp014));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp014, sizeof(ref_tmp014));
  }
    char* cast82 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std83;
    __VERIFIER_nondet_memory(&std83, sizeof(std83));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std84;
    __VERIFIER_nondet_memory(&std84, sizeof(std84));
    agg_tmp015 = std84;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std85;
    __VERIFIER_nondet_memory(&std85, sizeof(std85));
    agg_tmp116 = std85;
    // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
    __VERIFIER_nondet_memory(&agg_tmp217, sizeof(agg_tmp217));
    __VERIFIER_nondet_memory(&output12, sizeof(output12));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t86 = agg_tmp015;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t87 = agg_tmp116;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t88 = agg_tmp217;
    struct std__ostream_iterator_int__char__std__char_traits_char__ std89;
    __VERIFIER_nondet_memory(&std89, sizeof(std89));
    agg_tmp318 = std89;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std90;
    __VERIFIER_nondet_memory(&std90, sizeof(std90));
    agg_tmp419 = std90;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std91;
    __VERIFIER_nondet_memory(&std91, sizeof(std91));
    agg_tmp520 = std91;
    int c92 = 10;
    ref_tmp121 = c92;
    int c93 = 100;
    ref_tmp222 = c93;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t94 = agg_tmp419;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t95 = agg_tmp520;
    // externalized std:: op: void std::replace<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int const&, int const&)
    __VERIFIER_nondet_memory(&ref_tmp121, sizeof(ref_tmp121));
    __VERIFIER_nondet_memory(&ref_tmp222, sizeof(ref_tmp222));
    char* cast96 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std97;
    __VERIFIER_nondet_memory(&std97, sizeof(std97));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std98;
    __VERIFIER_nondet_memory(&std98, sizeof(std98));
    agg_tmp623 = std98;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std99;
    __VERIFIER_nondet_memory(&std99, sizeof(std99));
    agg_tmp724 = std99;
    // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
    __VERIFIER_nondet_memory(&agg_tmp825, sizeof(agg_tmp825));
    __VERIFIER_nondet_memory(&output12, sizeof(output12));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t100 = agg_tmp623;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t101 = agg_tmp724;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t102 = agg_tmp825;
    struct std__ostream_iterator_int__char__std__char_traits_char__ std103;
    __VERIFIER_nondet_memory(&std103, sizeof(std103));
    agg_tmp926 = std103;
    int* cast104 = (int*)&(a11);
    int* cast105 = (int*)&(a11);
    int t106 = SIZE10;
    int* ptr107 = &(cast105)[t106];
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp328, sizeof(ref_tmp328));
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&v227, sizeof(v227));
      __VERIFIER_nondet_memory(cast104, sizeof(*cast104));
      __VERIFIER_nondet_memory(ptr107, sizeof(*ptr107));
      __VERIFIER_nondet_memory(&ref_tmp328, sizeof(ref_tmp328));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp328, sizeof(ref_tmp328));
    }
      int t108 = SIZE10;
      unsigned long cast109 = (unsigned long)t108;
      // externalized std:: op: std::allocator<int>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp430, sizeof(ref_tmp430));
        // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&)
        __VERIFIER_nondet_memory(&c129, sizeof(c129));
        __VERIFIER_nondet_memory(&ref_tmp430, sizeof(ref_tmp430));
      {
        // externalized std:: op: std::allocator<int>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp430, sizeof(ref_tmp430));
      }
        char* cast110 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std111;
        __VERIFIER_nondet_memory(&std111, sizeof(std111));
        char* cast112 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* std113;
        __VERIFIER_nondet_memory(&std113, sizeof(std113));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std114;
        __VERIFIER_nondet_memory(&std114, sizeof(std114));
        agg_tmp1031 = std114;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std115;
        __VERIFIER_nondet_memory(&std115, sizeof(std115));
        agg_tmp1132 = std115;
        // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
        __VERIFIER_nondet_memory(&agg_tmp1233, sizeof(agg_tmp1233));
        __VERIFIER_nondet_memory(&output12, sizeof(output12));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t116 = agg_tmp1031;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t117 = agg_tmp1132;
        struct std__ostream_iterator_int__char__std__char_traits_char__ t118 = agg_tmp1233;
        struct std__ostream_iterator_int__char__std__char_traits_char__ std119;
        __VERIFIER_nondet_memory(&std119, sizeof(std119));
        agg_tmp1334 = std119;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std120;
        __VERIFIER_nondet_memory(&std120, sizeof(std120));
        agg_tmp1435 = std120;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std121;
        __VERIFIER_nondet_memory(&std121, sizeof(std121));
        agg_tmp1536 = std121;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std122;
        __VERIFIER_nondet_memory(&std122, sizeof(std122));
        agg_tmp1637 = std122;
        int c123 = 10;
        ref_tmp538 = c123;
        int c124 = 100;
        ref_tmp639 = c124;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t125 = agg_tmp1435;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t126 = agg_tmp1536;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t127 = agg_tmp1637;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std128;
        __VERIFIER_nondet_memory(&std128, sizeof(std128));
        agg_tmp1740 = std128;
        char* cast129 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std130;
        __VERIFIER_nondet_memory(&std130, sizeof(std130));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std131;
        __VERIFIER_nondet_memory(&std131, sizeof(std131));
        agg_tmp1841 = std131;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std132;
        __VERIFIER_nondet_memory(&std132, sizeof(std132));
        agg_tmp1942 = std132;
        // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
        __VERIFIER_nondet_memory(&agg_tmp2043, sizeof(agg_tmp2043));
        __VERIFIER_nondet_memory(&output12, sizeof(output12));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t133 = agg_tmp1841;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t134 = agg_tmp1942;
        struct std__ostream_iterator_int__char__std__char_traits_char__ t135 = agg_tmp2043;
        struct std__ostream_iterator_int__char__std__char_traits_char__ std136;
        __VERIFIER_nondet_memory(&std136, sizeof(std136));
        agg_tmp2144 = std136;
        int* cast137 = (int*)&(a11);
        int* cast138 = (int*)&(a11);
        int t139 = SIZE10;
        int* ptr140 = &(cast138)[t139];
        // externalized std:: op: std::allocator<int>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp746, sizeof(ref_tmp746));
          // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
          __VERIFIER_nondet_memory(&v345, sizeof(v345));
          __VERIFIER_nondet_memory(cast137, sizeof(*cast137));
          __VERIFIER_nondet_memory(ptr140, sizeof(*ptr140));
          __VERIFIER_nondet_memory(&ref_tmp746, sizeof(ref_tmp746));
        {
          // externalized std:: op: std::allocator<int>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp746, sizeof(ref_tmp746));
        }
          char* cast141 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* std142;
          __VERIFIER_nondet_memory(&std142, sizeof(std142));
          char* cast143 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* std144;
          __VERIFIER_nondet_memory(&std144, sizeof(std144));
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std145;
          __VERIFIER_nondet_memory(&std145, sizeof(std145));
          agg_tmp2247 = std145;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std146;
          __VERIFIER_nondet_memory(&std146, sizeof(std146));
          agg_tmp2348 = std146;
          // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
          __VERIFIER_nondet_memory(&agg_tmp2449, sizeof(agg_tmp2449));
          __VERIFIER_nondet_memory(&output12, sizeof(output12));
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t147 = agg_tmp2247;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t148 = agg_tmp2348;
          struct std__ostream_iterator_int__char__std__char_traits_char__ t149 = agg_tmp2449;
          struct std__ostream_iterator_int__char__std__char_traits_char__ std150;
          __VERIFIER_nondet_memory(&std150, sizeof(std150));
          agg_tmp2550 = std150;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std151;
          __VERIFIER_nondet_memory(&std151, sizeof(std151));
          agg_tmp2651 = std151;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std152;
          __VERIFIER_nondet_memory(&std152, sizeof(std152));
          agg_tmp2752 = std152;
          int c153 = 100;
          ref_tmp853 = c153;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t154 = agg_tmp2651;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t155 = agg_tmp2752;
          // externalized std:: op: void std::replace_if<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, bool (*)(int), int>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, bool (*)(int), int const&)
          __VERIFIER_nondet_memory(&ref_tmp853, sizeof(ref_tmp853));
          char* cast156 = (char*)&(_str_8);
          struct std__basic_ostream_char__std__char_traits_char__* std157;
          __VERIFIER_nondet_memory(&std157, sizeof(std157));
          char* cast158 = (char*)&(_str_9);
          struct std__basic_ostream_char__std__char_traits_char__* std159;
          __VERIFIER_nondet_memory(&std159, sizeof(std159));
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std160;
          __VERIFIER_nondet_memory(&std160, sizeof(std160));
          agg_tmp2854 = std160;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std161;
          __VERIFIER_nondet_memory(&std161, sizeof(std161));
          agg_tmp2955 = std161;
          // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
          __VERIFIER_nondet_memory(&agg_tmp3056, sizeof(agg_tmp3056));
          __VERIFIER_nondet_memory(&output12, sizeof(output12));
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t162 = agg_tmp2854;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t163 = agg_tmp2955;
          struct std__ostream_iterator_int__char__std__char_traits_char__ t164 = agg_tmp3056;
          struct std__ostream_iterator_int__char__std__char_traits_char__ std165;
          __VERIFIER_nondet_memory(&std165, sizeof(std165));
          agg_tmp3157 = std165;
          int* cast166 = (int*)&(a11);
          int* cast167 = (int*)&(a11);
          int t168 = SIZE10;
          int* ptr169 = &(cast167)[t168];
          // externalized std:: op: std::allocator<int>::allocator()
          __VERIFIER_nondet_memory(&ref_tmp959, sizeof(ref_tmp959));
            // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
            __VERIFIER_nondet_memory(&v458, sizeof(v458));
            __VERIFIER_nondet_memory(cast166, sizeof(*cast166));
            __VERIFIER_nondet_memory(ptr169, sizeof(*ptr169));
            __VERIFIER_nondet_memory(&ref_tmp959, sizeof(ref_tmp959));
          {
            // externalized std:: op: std::allocator<int>::~allocator()
            __VERIFIER_nondet_memory(&ref_tmp959, sizeof(ref_tmp959));
          }
            int t170 = SIZE10;
            unsigned long cast171 = (unsigned long)t170;
            // externalized std:: op: std::allocator<int>::allocator()
            __VERIFIER_nondet_memory(&ref_tmp1061, sizeof(ref_tmp1061));
              // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&)
              __VERIFIER_nondet_memory(&c260, sizeof(c260));
              __VERIFIER_nondet_memory(&ref_tmp1061, sizeof(ref_tmp1061));
            {
              // externalized std:: op: std::allocator<int>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp1061, sizeof(ref_tmp1061));
            }
              char* cast172 = (char*)&(_str_10);
              struct std__basic_ostream_char__std__char_traits_char__* std173;
              __VERIFIER_nondet_memory(&std173, sizeof(std173));
              char* cast174 = (char*)&(_str_11);
              struct std__basic_ostream_char__std__char_traits_char__* std175;
              __VERIFIER_nondet_memory(&std175, sizeof(std175));
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std176;
              __VERIFIER_nondet_memory(&std176, sizeof(std176));
              agg_tmp3262 = std176;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std177;
              __VERIFIER_nondet_memory(&std177, sizeof(std177));
              agg_tmp3363 = std177;
              // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
              __VERIFIER_nondet_memory(&agg_tmp3464, sizeof(agg_tmp3464));
              __VERIFIER_nondet_memory(&output12, sizeof(output12));
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t178 = agg_tmp3262;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t179 = agg_tmp3363;
              struct std__ostream_iterator_int__char__std__char_traits_char__ t180 = agg_tmp3464;
              struct std__ostream_iterator_int__char__std__char_traits_char__ std181;
              __VERIFIER_nondet_memory(&std181, sizeof(std181));
              agg_tmp3565 = std181;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std182;
              __VERIFIER_nondet_memory(&std182, sizeof(std182));
              agg_tmp3666 = std182;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std183;
              __VERIFIER_nondet_memory(&std183, sizeof(std183));
              agg_tmp3767 = std183;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std184;
              __VERIFIER_nondet_memory(&std184, sizeof(std184));
              agg_tmp3868 = std184;
              int c185 = 100;
              ref_tmp1169 = c185;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t186 = agg_tmp3666;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t187 = agg_tmp3767;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t188 = agg_tmp3868;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std189;
              __VERIFIER_nondet_memory(&std189, sizeof(std189));
              agg_tmp3970 = std189;
              char* cast190 = (char*)&(_str_12);
              struct std__basic_ostream_char__std__char_traits_char__* std191;
              __VERIFIER_nondet_memory(&std191, sizeof(std191));
              char* cast192 = (char*)&(_str_13);
              struct std__basic_ostream_char__std__char_traits_char__* std193;
              __VERIFIER_nondet_memory(&std193, sizeof(std193));
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std194;
              __VERIFIER_nondet_memory(&std194, sizeof(std194));
              agg_tmp4071 = std194;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std195;
              __VERIFIER_nondet_memory(&std195, sizeof(std195));
              agg_tmp4172 = std195;
              // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
              __VERIFIER_nondet_memory(&agg_tmp4273, sizeof(agg_tmp4273));
              __VERIFIER_nondet_memory(&output12, sizeof(output12));
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t196 = agg_tmp4071;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t197 = agg_tmp4172;
              struct std__ostream_iterator_int__char__std__char_traits_char__ t198 = agg_tmp4273;
              struct std__ostream_iterator_int__char__std__char_traits_char__ std199;
              __VERIFIER_nondet_memory(&std199, sizeof(std199));
              agg_tmp4374 = std199;
              struct std__basic_ostream_char__std__char_traits_char__* std200;
              __VERIFIER_nondet_memory(&std200, sizeof(std200));
              int c201 = 0;
              __retval9 = c201;
              int t202 = __retval9;
              int ret_val203 = t202;
              {
                // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
                __VERIFIER_nondet_memory(&c260, sizeof(c260));
              }
              {
                // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
                __VERIFIER_nondet_memory(&v458, sizeof(v458));
              }
              {
                // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
                __VERIFIER_nondet_memory(&v345, sizeof(v345));
              }
              {
                // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
                __VERIFIER_nondet_memory(&c129, sizeof(c129));
              }
              {
                // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
                __VERIFIER_nondet_memory(&v227, sizeof(v227));
              }
              {
                // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
                __VERIFIER_nondet_memory(&v113, sizeof(v113));
              }
              return ret_val203;
  int t204 = __retval9;
  return t204;
}

