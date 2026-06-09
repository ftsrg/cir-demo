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
struct __gnu_cxx____ops___Iter_equal_to_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct __gnu_cxx____ops___Val_less_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Temporary_buffer___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int____Impl { long _M_len; int* _M_buffer; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std____pair_base_int____long_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__back_insert_iterator_std__vector_int__std__allocator_int___ { struct std__vector_int__std__allocator_int__* container; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_;
struct std__nothrow_t { unsigned char __field0; };
struct std__ostream_iterator_int__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__output_iterator_tag { unsigned char __field0; };
struct std__pair_int____long_ { int* first; long second; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Temporary_buffer___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int_ { long _M_original_len; struct std___Temporary_buffer___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int____Impl _M_impl; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_a1[10] = {1, 3, 5, 7, 9, 1, 3, 5, 7, 9};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[21] = "Vector v1 contains: ";
char _str_2[36] = "\nAfter inplace_merge, v1 contains: ";
char _str_3[39] = "\nAfter unique_copy results1 contains: ";
char _str_4[41] = "\nAfter reverse_copy, results2 contains: ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_5[49] = "cannot create std::vector larger than max_size()";
char _str_6[26] = "vector::_M_realloc_append";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int SIZE2;
  int a13[10];
  struct std__vector_int__std__allocator_int__ v14;
  struct std__allocator_int_ ref_tmp05;
  struct std__ostream_iterator_int__char__std__char_traits_char__ output6;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp07;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp18;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp29;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp310;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp411;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp512;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp113;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp614;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp715;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp816;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp917;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1018;
  struct std__vector_int__std__allocator_int__ results119;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1120;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1221;
  struct std__back_insert_iterator_std__vector_int__std__allocator_int___ agg_tmp1322;
  struct std__back_insert_iterator_std__vector_int__std__allocator_int___ agg_tmp1423;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1524;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1625;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1726;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1827;
  struct std__vector_int__std__allocator_int__ results228;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1929;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2030;
  struct std__back_insert_iterator_std__vector_int__std__allocator_int___ agg_tmp2131;
  struct std__back_insert_iterator_std__vector_int__std__allocator_int___ agg_tmp2232;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2333;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2434;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2535;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2636;
  int c37 = 0;
  __retval1 = c37;
  int c38 = 10;
  SIZE2 = c38;
  // array copy
  __builtin_memcpy(a13, __const_main_a1, (unsigned long)10 * sizeof(__const_main_a1[0]));
  int* cast39 = (int*)&(a13);
  int* cast40 = (int*)&(a13);
  int t41 = SIZE2;
  int* ptr42 = &(cast40)[t41];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&v14, sizeof(v14));
    __VERIFIER_nondet_memory(cast39, sizeof(*cast39));
    __VERIFIER_nondet_memory(ptr42, sizeof(*ptr42));
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
  }
    char* cast43 = (char*)&(_str);
    // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream&, char const*)
    __VERIFIER_nondet_memory(&output6, sizeof(output6));
    __VERIFIER_nondet_memory(&_ZSt4cout, sizeof(*&_ZSt4cout));
    __VERIFIER_nondet_memory(cast43, sizeof(*cast43));
    char* cast44 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    agg_tmp07 = std46;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    agg_tmp18 = std47;
    // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
    __VERIFIER_nondet_memory(&agg_tmp29, sizeof(agg_tmp29));
    __VERIFIER_nondet_memory(&output6, sizeof(output6));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t48 = agg_tmp07;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t49 = agg_tmp18;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t50 = agg_tmp29;
    struct std__ostream_iterator_int__char__std__char_traits_char__ std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    agg_tmp310 = std51;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    agg_tmp411 = std52;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    ref_tmp113 = std53;
    long c54 = 5;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    agg_tmp512 = std55;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
    agg_tmp614 = std56;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t57 = agg_tmp411;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t58 = agg_tmp512;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t59 = agg_tmp614;
    // externalized std:: op: void std::inplace_merge<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
    char* cast60 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std62;
    __VERIFIER_nondet_memory(&std62, sizeof(std62));
    agg_tmp715 = std62;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std63;
    __VERIFIER_nondet_memory(&std63, sizeof(std63));
    agg_tmp816 = std63;
    // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
    __VERIFIER_nondet_memory(&agg_tmp917, sizeof(agg_tmp917));
    __VERIFIER_nondet_memory(&output6, sizeof(output6));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t64 = agg_tmp715;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t65 = agg_tmp816;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t66 = agg_tmp917;
    struct std__ostream_iterator_int__char__std__char_traits_char__ std67;
    __VERIFIER_nondet_memory(&std67, sizeof(std67));
    agg_tmp1018 = std67;
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
    __VERIFIER_nondet_memory(&results119, sizeof(results119));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std68;
      __VERIFIER_nondet_memory(&std68, sizeof(std68));
      agg_tmp1120 = std68;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std69;
      __VERIFIER_nondet_memory(&std69, sizeof(std69));
      agg_tmp1221 = std69;
      struct std__back_insert_iterator_std__vector_int__std__allocator_int___ std70;
      __VERIFIER_nondet_memory(&std70, sizeof(std70));
      agg_tmp1322 = std70;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t71 = agg_tmp1120;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t72 = agg_tmp1221;
      struct std__back_insert_iterator_std__vector_int__std__allocator_int___ t73 = agg_tmp1322;
      struct std__back_insert_iterator_std__vector_int__std__allocator_int___ std74;
      __VERIFIER_nondet_memory(&std74, sizeof(std74));
      agg_tmp1423 = std74;
      char* cast75 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std76;
      __VERIFIER_nondet_memory(&std76, sizeof(std76));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std77;
      __VERIFIER_nondet_memory(&std77, sizeof(std77));
      agg_tmp1524 = std77;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std78;
      __VERIFIER_nondet_memory(&std78, sizeof(std78));
      agg_tmp1625 = std78;
      // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
      __VERIFIER_nondet_memory(&agg_tmp1726, sizeof(agg_tmp1726));
      __VERIFIER_nondet_memory(&output6, sizeof(output6));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t79 = agg_tmp1524;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t80 = agg_tmp1625;
      struct std__ostream_iterator_int__char__std__char_traits_char__ t81 = agg_tmp1726;
      struct std__ostream_iterator_int__char__std__char_traits_char__ std82;
      __VERIFIER_nondet_memory(&std82, sizeof(std82));
      agg_tmp1827 = std82;
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
      __VERIFIER_nondet_memory(&results228, sizeof(results228));
        char* cast83 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* std84;
        __VERIFIER_nondet_memory(&std84, sizeof(std84));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std85;
        __VERIFIER_nondet_memory(&std85, sizeof(std85));
        agg_tmp1929 = std85;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std86;
        __VERIFIER_nondet_memory(&std86, sizeof(std86));
        agg_tmp2030 = std86;
        struct std__back_insert_iterator_std__vector_int__std__allocator_int___ std87;
        __VERIFIER_nondet_memory(&std87, sizeof(std87));
        agg_tmp2131 = std87;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t88 = agg_tmp1929;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t89 = agg_tmp2030;
        struct std__back_insert_iterator_std__vector_int__std__allocator_int___ t90 = agg_tmp2131;
        struct std__back_insert_iterator_std__vector_int__std__allocator_int___ std91;
        __VERIFIER_nondet_memory(&std91, sizeof(std91));
        agg_tmp2232 = std91;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std92;
        __VERIFIER_nondet_memory(&std92, sizeof(std92));
        agg_tmp2333 = std92;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std93;
        __VERIFIER_nondet_memory(&std93, sizeof(std93));
        agg_tmp2434 = std93;
        // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
        __VERIFIER_nondet_memory(&agg_tmp2535, sizeof(agg_tmp2535));
        __VERIFIER_nondet_memory(&output6, sizeof(output6));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t94 = agg_tmp2333;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t95 = agg_tmp2434;
        struct std__ostream_iterator_int__char__std__char_traits_char__ t96 = agg_tmp2535;
        struct std__ostream_iterator_int__char__std__char_traits_char__ std97;
        __VERIFIER_nondet_memory(&std97, sizeof(std97));
        agg_tmp2636 = std97;
        struct std__basic_ostream_char__std__char_traits_char__* std98;
        __VERIFIER_nondet_memory(&std98, sizeof(std98));
        int c99 = 0;
        __retval1 = c99;
        int t100 = __retval1;
        int ret_val101 = t100;
        {
          // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
          __VERIFIER_nondet_memory(&results228, sizeof(results228));
        }
        {
          // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
          __VERIFIER_nondet_memory(&results119, sizeof(results119));
        }
        {
          // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
          __VERIFIER_nondet_memory(&v14, sizeof(v14));
        }
        return ret_val101;
  int t102 = __retval1;
  return t102;
}

