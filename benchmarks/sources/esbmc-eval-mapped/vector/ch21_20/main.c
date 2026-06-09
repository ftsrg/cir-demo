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
struct __gnu_cxx____ops___Iter_equal_to_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____detail___Synth3way { unsigned char __field0; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_;
struct std__ostream_iterator_int__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_a2[5] = {2, 4, 5, 7, 9};
int __const_main_a1[5] = {1, 3, 5, 7, 9};
struct std____cmp_cat____unspec __const__ZSt9__reverseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_St26random_access_iterator_tag_agg_tmp1;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[21] = "Vector v1 contains: ";
char _str_2[22] = "\nVector v2 contains: ";
char _str_3[42] = "\n\nAfter copy_backward, results contains: ";
char _str_4[47] = "\n\nAfter merge of v1 and v2 results2 contains:\n";
char _str_5[35] = "\n\nAfter unique results2 contains:\n";
char _str_6[28] = "\n\nVector v1 after reverse: ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_7[49] = "cannot create std::vector larger than max_size()";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  int SIZE2;
  int a13[5];
  int a24[5];
  struct std__vector_int__std__allocator_int__ v15;
  struct std__allocator_int_ ref_tmp06;
  struct std__vector_int__std__allocator_int__ v27;
  struct std__allocator_int_ ref_tmp18;
  struct std__ostream_iterator_int__char__std__char_traits_char__ output9;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp010;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp111;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp212;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp313;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp414;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp515;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp616;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp717;
  struct std__vector_int__std__allocator_int__ results18;
  struct std__allocator_int_ ref_tmp219;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp820;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp921;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1022;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1123;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1224;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1325;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1426;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1527;
  struct std__vector_int__std__allocator_int__ results228;
  struct std__allocator_int_ ref_tmp329;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1630;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1731;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1832;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1933;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2034;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2135;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2236;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2337;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2438;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2539;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ endLocation40;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp441;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2642;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2743;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2844;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2945;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3046;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3147;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3248;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3349;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3450;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3551;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3652;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3753;
  int c54 = 0;
  __retval1 = c54;
  int c55 = 5;
  SIZE2 = c55;
  // array copy
  __builtin_memcpy(a13, __const_main_a1, (unsigned long)5 * sizeof(__const_main_a1[0]));
  // array copy
  __builtin_memcpy(a24, __const_main_a2, (unsigned long)5 * sizeof(__const_main_a2[0]));
  int* cast56 = (int*)&(a13);
  int* cast57 = (int*)&(a13);
  int t58 = SIZE2;
  int* ptr59 = &(cast57)[t58];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp06, sizeof(ref_tmp06));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&v15, sizeof(v15));
    __VERIFIER_nondet_memory(cast56, sizeof(*cast56));
    __VERIFIER_nondet_memory(ptr59, sizeof(*ptr59));
    __VERIFIER_nondet_memory(&ref_tmp06, sizeof(ref_tmp06));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp06, sizeof(ref_tmp06));
  }
    int* cast60 = (int*)&(a24);
    int* cast61 = (int*)&(a24);
    int t62 = SIZE2;
    int* ptr63 = &(cast61)[t62];
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp18, sizeof(ref_tmp18));
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&v27, sizeof(v27));
      __VERIFIER_nondet_memory(cast60, sizeof(*cast60));
      __VERIFIER_nondet_memory(ptr63, sizeof(*ptr63));
      __VERIFIER_nondet_memory(&ref_tmp18, sizeof(ref_tmp18));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp18, sizeof(ref_tmp18));
    }
      char* cast64 = (char*)&(_str);
      // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream&, char const*)
      __VERIFIER_nondet_memory(&output9, sizeof(output9));
      __VERIFIER_nondet_memory(&_ZSt4cout, sizeof(*&_ZSt4cout));
      __VERIFIER_nondet_memory(cast64, sizeof(*cast64));
      char* cast65 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* std66;
      __VERIFIER_nondet_memory(&std66, sizeof(std66));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std67;
      __VERIFIER_nondet_memory(&std67, sizeof(std67));
      agg_tmp010 = std67;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std68;
      __VERIFIER_nondet_memory(&std68, sizeof(std68));
      agg_tmp111 = std68;
      // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
      __VERIFIER_nondet_memory(&agg_tmp212, sizeof(agg_tmp212));
      __VERIFIER_nondet_memory(&output9, sizeof(output9));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t69 = agg_tmp010;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t70 = agg_tmp111;
      struct std__ostream_iterator_int__char__std__char_traits_char__ t71 = agg_tmp212;
      struct std__ostream_iterator_int__char__std__char_traits_char__ std72;
      __VERIFIER_nondet_memory(&std72, sizeof(std72));
      agg_tmp313 = std72;
      char* cast73 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std74;
      __VERIFIER_nondet_memory(&std74, sizeof(std74));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std75;
      __VERIFIER_nondet_memory(&std75, sizeof(std75));
      agg_tmp414 = std75;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std76;
      __VERIFIER_nondet_memory(&std76, sizeof(std76));
      agg_tmp515 = std76;
      // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
      __VERIFIER_nondet_memory(&agg_tmp616, sizeof(agg_tmp616));
      __VERIFIER_nondet_memory(&output9, sizeof(output9));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t77 = agg_tmp414;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t78 = agg_tmp515;
      struct std__ostream_iterator_int__char__std__char_traits_char__ t79 = agg_tmp616;
      struct std__ostream_iterator_int__char__std__char_traits_char__ std80;
      __VERIFIER_nondet_memory(&std80, sizeof(std80));
      agg_tmp717 = std80;
      unsigned long std81 = __VERIFIER_nondet_unsigned_long();
      // externalized std:: op: std::allocator<int>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp219, sizeof(ref_tmp219));
        // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&)
        __VERIFIER_nondet_memory(&results18, sizeof(results18));
        __VERIFIER_nondet_memory(&ref_tmp219, sizeof(ref_tmp219));
      {
        // externalized std:: op: std::allocator<int>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp219, sizeof(ref_tmp219));
      }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std82;
        __VERIFIER_nondet_memory(&std82, sizeof(std82));
        agg_tmp820 = std82;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std83;
        __VERIFIER_nondet_memory(&std83, sizeof(std83));
        agg_tmp921 = std83;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std84;
        __VERIFIER_nondet_memory(&std84, sizeof(std84));
        agg_tmp1022 = std84;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t85 = agg_tmp820;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t86 = agg_tmp921;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t87 = agg_tmp1022;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std88;
        __VERIFIER_nondet_memory(&std88, sizeof(std88));
        agg_tmp1123 = std88;
        char* cast89 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std90;
        __VERIFIER_nondet_memory(&std90, sizeof(std90));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std91;
        __VERIFIER_nondet_memory(&std91, sizeof(std91));
        agg_tmp1224 = std91;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std92;
        __VERIFIER_nondet_memory(&std92, sizeof(std92));
        agg_tmp1325 = std92;
        // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
        __VERIFIER_nondet_memory(&agg_tmp1426, sizeof(agg_tmp1426));
        __VERIFIER_nondet_memory(&output9, sizeof(output9));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t93 = agg_tmp1224;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t94 = agg_tmp1325;
        struct std__ostream_iterator_int__char__std__char_traits_char__ t95 = agg_tmp1426;
        struct std__ostream_iterator_int__char__std__char_traits_char__ std96;
        __VERIFIER_nondet_memory(&std96, sizeof(std96));
        agg_tmp1527 = std96;
        unsigned long std97 = __VERIFIER_nondet_unsigned_long();
        unsigned long std98 = __VERIFIER_nondet_unsigned_long();
        unsigned long b99 = std97 + std98;
        // externalized std:: op: std::allocator<int>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp329, sizeof(ref_tmp329));
          // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&)
          __VERIFIER_nondet_memory(&results228, sizeof(results228));
          __VERIFIER_nondet_memory(&ref_tmp329, sizeof(ref_tmp329));
        {
          // externalized std:: op: std::allocator<int>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp329, sizeof(ref_tmp329));
        }
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std100;
          __VERIFIER_nondet_memory(&std100, sizeof(std100));
          agg_tmp1630 = std100;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std101;
          __VERIFIER_nondet_memory(&std101, sizeof(std101));
          agg_tmp1731 = std101;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std102;
          __VERIFIER_nondet_memory(&std102, sizeof(std102));
          agg_tmp1832 = std102;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std103;
          __VERIFIER_nondet_memory(&std103, sizeof(std103));
          agg_tmp1933 = std103;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std104;
          __VERIFIER_nondet_memory(&std104, sizeof(std104));
          agg_tmp2034 = std104;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t105 = agg_tmp1630;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t106 = agg_tmp1731;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t107 = agg_tmp1832;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t108 = agg_tmp1933;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t109 = agg_tmp2034;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std110;
          __VERIFIER_nondet_memory(&std110, sizeof(std110));
          agg_tmp2135 = std110;
          char* cast111 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* std112;
          __VERIFIER_nondet_memory(&std112, sizeof(std112));
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std113;
          __VERIFIER_nondet_memory(&std113, sizeof(std113));
          agg_tmp2236 = std113;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std114;
          __VERIFIER_nondet_memory(&std114, sizeof(std114));
          agg_tmp2337 = std114;
          // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
          __VERIFIER_nondet_memory(&agg_tmp2438, sizeof(agg_tmp2438));
          __VERIFIER_nondet_memory(&output9, sizeof(output9));
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t115 = agg_tmp2236;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t116 = agg_tmp2337;
          struct std__ostream_iterator_int__char__std__char_traits_char__ t117 = agg_tmp2438;
          struct std__ostream_iterator_int__char__std__char_traits_char__ std118;
          __VERIFIER_nondet_memory(&std118, sizeof(std118));
          agg_tmp2539 = std118;
          // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
          __VERIFIER_nondet_memory(&endLocation40, sizeof(endLocation40));
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std119;
          __VERIFIER_nondet_memory(&std119, sizeof(std119));
          agg_tmp2642 = std119;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std120;
          __VERIFIER_nondet_memory(&std120, sizeof(std120));
          agg_tmp2743 = std120;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t121 = agg_tmp2642;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t122 = agg_tmp2743;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std123;
          __VERIFIER_nondet_memory(&std123, sizeof(std123));
          ref_tmp441 = std123;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std124;
          __VERIFIER_nondet_memory(&std124, sizeof(std124));
          char* cast125 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* std126;
          __VERIFIER_nondet_memory(&std126, sizeof(std126));
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std127;
          __VERIFIER_nondet_memory(&std127, sizeof(std127));
          agg_tmp2844 = std127;
          agg_tmp2945 = endLocation40; // copy
          // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
          __VERIFIER_nondet_memory(&agg_tmp3046, sizeof(agg_tmp3046));
          __VERIFIER_nondet_memory(&output9, sizeof(output9));
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t128 = agg_tmp2844;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t129 = agg_tmp2945;
          struct std__ostream_iterator_int__char__std__char_traits_char__ t130 = agg_tmp3046;
          struct std__ostream_iterator_int__char__std__char_traits_char__ std131;
          __VERIFIER_nondet_memory(&std131, sizeof(std131));
          agg_tmp3147 = std131;
          char* cast132 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* std133;
          __VERIFIER_nondet_memory(&std133, sizeof(std133));
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std134;
          __VERIFIER_nondet_memory(&std134, sizeof(std134));
          agg_tmp3248 = std134;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std135;
          __VERIFIER_nondet_memory(&std135, sizeof(std135));
          agg_tmp3349 = std135;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t136 = agg_tmp3248;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t137 = agg_tmp3349;
          // externalized std:: op: void std::reverse<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std138;
          __VERIFIER_nondet_memory(&std138, sizeof(std138));
          agg_tmp3450 = std138;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std139;
          __VERIFIER_nondet_memory(&std139, sizeof(std139));
          agg_tmp3551 = std139;
          // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
          __VERIFIER_nondet_memory(&agg_tmp3652, sizeof(agg_tmp3652));
          __VERIFIER_nondet_memory(&output9, sizeof(output9));
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t140 = agg_tmp3450;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t141 = agg_tmp3551;
          struct std__ostream_iterator_int__char__std__char_traits_char__ t142 = agg_tmp3652;
          struct std__ostream_iterator_int__char__std__char_traits_char__ std143;
          __VERIFIER_nondet_memory(&std143, sizeof(std143));
          agg_tmp3753 = std143;
          struct std__basic_ostream_char__std__char_traits_char__* std144;
          __VERIFIER_nondet_memory(&std144, sizeof(std144));
          int c145 = 0;
          __retval1 = c145;
          int t146 = __retval1;
          int ret_val147 = t146;
          {
            // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
            __VERIFIER_nondet_memory(&results228, sizeof(results228));
          }
          {
            // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
            __VERIFIER_nondet_memory(&results18, sizeof(results18));
          }
          {
            // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
            __VERIFIER_nondet_memory(&v27, sizeof(v27));
          }
          {
            // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
            __VERIFIER_nondet_memory(&v15, sizeof(v15));
          }
          return ret_val147;
  int t148 = __retval1;
  return t148;
}

