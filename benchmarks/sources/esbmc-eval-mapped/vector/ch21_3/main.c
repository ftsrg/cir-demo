extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;
// Per-RTTI address tags: each thrown/caught type symbol gets a
// distinct storage location so catch dispatch is a pointer compare.
static const char __cir_eh_type__ZTISt12out_of_range[] = "_ZTISt12out_of_range";

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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char* __field0; char __field1[8]; };
struct anon_struct_0 { unsigned char* __field0[5]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____cow_string { union anon_0 __field0; };
struct std____detail____move_iter_cat_int___;
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__exception { void* __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_;
struct std__logic_error { struct std__exception __field0; struct std____cow_string __field1; };
struct std__move_iterator_int___ { int* _M_current; };
struct std__ostream_iterator_int__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__out_of_range { struct std__logic_error __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std__ranges____imove___IterMove { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

extern void *_ZTVSt12out_of_range[];
int __const_main_array[6] = {1, 2, 3, 4, 5, 6};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[27] = "Vector integers contains: ";
char _str_2[29] = "\nFirst element of integers: ";
char _str_3[28] = "\nLast element of integers: ";
char _str_4[46] = "\n\nContents of vector integers after changes: ";
static const char _ZTISt12out_of_range__n_[] = "_ZTISt12out_of_range";
static void* _ZTISt12out_of_range[2] = {(void*)0, (void*)_ZTISt12out_of_range__n_};
char _str_5[14] = "\n\nException: ";
char _str_6[48] = "\n\nVector integers after erasing first element: ";
char _str_7[46] = "\nAfter erasing all elements, vector integers ";
char _str_8[3] = "is";
char _str_9[7] = "is not";
char _str_10[7] = " empty";
char _str_11[45] = "\n\nContents of vector integers before clear: ";
char _str_12[31] = "\nAfter clear, vector integers ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_13[49] = "cannot create std::vector larger than max_size()";
char _str_14[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE5frontEv[78] = "reference std::vector<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_15[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_16[19] = "__n < this->size()";
char _str_17[74] = "vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)";
char _str_18[26] = "vector::_M_realloc_insert";
extern void *_ZTVSt12out_of_range[];
char _str_19[24] = "vector::_M_range_insert";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
extern int __gxx_personality_v0();
int main();
void __clang_cir_catch_copy__ZTSSt12out_of_range(struct std__out_of_range* p0, struct std__out_of_range* p1);

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int SIZE2;
  int array3[6];
  struct std__vector_int__std__allocator_int__ integers4;
  struct std__allocator_int_ ref_tmp05;
  struct std__ostream_iterator_int__char__std__char_traits_char__ output6;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp07;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp18;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp29;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp310;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp411;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp112;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp213;
  int ref_tmp314;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp515;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp616;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp717;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp818;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp919;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp1020;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp421;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1122;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1223;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1324;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1425;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1526;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp1627;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp528;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp1729;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp630;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1831;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp1932;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp733;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2034;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2135;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2236;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2337;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2438;
  int c39 = 0;
  __retval1 = c39;
  int c40 = 6;
  SIZE2 = c40;
  // array copy
  __builtin_memcpy(array3, __const_main_array, (unsigned long)6 * sizeof(__const_main_array[0]));
  int* cast41 = (int*)&(array3);
  int* cast42 = (int*)&(array3);
  int t43 = SIZE2;
  int* ptr44 = &(cast42)[t43];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&integers4, sizeof(integers4));
    __VERIFIER_nondet_memory(cast41, sizeof(*cast41));
    __VERIFIER_nondet_memory(ptr44, sizeof(*ptr44));
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
  }
    char* cast45 = (char*)&(_str);
    // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream&, char const*)
    __VERIFIER_nondet_memory(&output6, sizeof(output6));
    __VERIFIER_nondet_memory(&_ZSt4cout, sizeof(*&_ZSt4cout));
    __VERIFIER_nondet_memory(cast45, sizeof(*cast45));
    char* cast46 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    agg_tmp07 = std48;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    agg_tmp18 = std49;
    // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
    __VERIFIER_nondet_memory(&agg_tmp29, sizeof(agg_tmp29));
    __VERIFIER_nondet_memory(&output6, sizeof(output6));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t50 = agg_tmp07;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t51 = agg_tmp18;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t52 = agg_tmp29;
    struct std__ostream_iterator_int__char__std__char_traits_char__ std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    agg_tmp310 = std53;
    char* cast54 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    int* std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
    int t57 = *std56;
    struct std__basic_ostream_char__std__char_traits_char__* std58;
    __VERIFIER_nondet_memory(&std58, sizeof(std58));
    char* cast59 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    int* std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    int t62 = *std61;
    struct std__basic_ostream_char__std__char_traits_char__* std63;
    __VERIFIER_nondet_memory(&std63, sizeof(std63));
    int c64 = 7;
    unsigned long c65 = 0;
    int* std66;
    __VERIFIER_nondet_memory(&std66, sizeof(std66));
    *std66 = c64;
    int c67 = 10;
    unsigned long c68 = 2;
    int* std69;
    __VERIFIER_nondet_memory(&std69, sizeof(std69));
    *std69 = c67;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std70;
    __VERIFIER_nondet_memory(&std70, sizeof(std70));
    ref_tmp213 = std70;
    long c71 = 1;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std72;
    __VERIFIER_nondet_memory(&std72, sizeof(std72));
    ref_tmp112 = std72;
    // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
    __VERIFIER_nondet_memory(&agg_tmp411, sizeof(agg_tmp411));
    __VERIFIER_nondet_memory(&ref_tmp112, sizeof(ref_tmp112));
    int c73 = 22;
    ref_tmp314 = c73;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t74 = agg_tmp411;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std75;
    __VERIFIER_nondet_memory(&std75, sizeof(std75));
    agg_tmp515 = std75;
    char* cast76 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std77;
    __VERIFIER_nondet_memory(&std77, sizeof(std77));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std78;
    __VERIFIER_nondet_memory(&std78, sizeof(std78));
    agg_tmp616 = std78;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std79;
    __VERIFIER_nondet_memory(&std79, sizeof(std79));
    agg_tmp717 = std79;
    // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
    __VERIFIER_nondet_memory(&agg_tmp818, sizeof(agg_tmp818));
    __VERIFIER_nondet_memory(&output6, sizeof(output6));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t80 = agg_tmp616;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t81 = agg_tmp717;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t82 = agg_tmp818;
    struct std__ostream_iterator_int__char__std__char_traits_char__ std83;
    __VERIFIER_nondet_memory(&std83, sizeof(std83));
    agg_tmp919 = std83;
      struct std__out_of_range outOfRange84;
        int c86 = 777;
        unsigned long c87 = 100;
        int* std88;
        __VERIFIER_nondet_memory(&std88, sizeof(std88));
        *std88 = c86;
      cir_try_dispatch85: ;
      if (__cir_exc_active) {
      if (__cir_exc_type == (const void*)__cir_eh_type__ZTISt12out_of_range) {
        __clang_cir_catch_copy__ZTSSt12out_of_range(&outOfRange84, (struct std__out_of_range*)__cir_exc_ptr);
        int ca_tok89 = 0;
        void* ca_exn90 = (void*)__cir_exc_ptr;
        __cir_exc_active = 0;
            char* cast91 = (char*)&(_str_5);
            struct std__basic_ostream_char__std__char_traits_char__* std92;
            __VERIFIER_nondet_memory(&std92, sizeof(std92));
            struct std__logic_error* base93 = (struct std__logic_error*)((char *)&(outOfRange84) + 0);
            char* std94;
            __VERIFIER_nondet_memory(&std94, sizeof(std94));
            struct std__basic_ostream_char__std__char_traits_char__* std95;
            __VERIFIER_nondet_memory(&std95, sizeof(std95));
          {
            // externalized std:: op: std::out_of_range::~out_of_range()
            __VERIFIER_nondet_memory(&outOfRange84, sizeof(outOfRange84));
          }
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
      }
      else {
        __cir_exc_active = 1;
        { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
      { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
      }
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std96;
    __VERIFIER_nondet_memory(&std96, sizeof(std96));
    ref_tmp421 = std96;
    // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
    __VERIFIER_nondet_memory(&agg_tmp1020, sizeof(agg_tmp1020));
    __VERIFIER_nondet_memory(&ref_tmp421, sizeof(ref_tmp421));
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t97 = agg_tmp1020;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std98;
    __VERIFIER_nondet_memory(&std98, sizeof(std98));
    agg_tmp1122 = std98;
    char* cast99 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std100;
    __VERIFIER_nondet_memory(&std100, sizeof(std100));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std101;
    __VERIFIER_nondet_memory(&std101, sizeof(std101));
    agg_tmp1223 = std101;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std102;
    __VERIFIER_nondet_memory(&std102, sizeof(std102));
    agg_tmp1324 = std102;
    // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
    __VERIFIER_nondet_memory(&agg_tmp1425, sizeof(agg_tmp1425));
    __VERIFIER_nondet_memory(&output6, sizeof(output6));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t103 = agg_tmp1223;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t104 = agg_tmp1324;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t105 = agg_tmp1425;
    struct std__ostream_iterator_int__char__std__char_traits_char__ std106;
    __VERIFIER_nondet_memory(&std106, sizeof(std106));
    agg_tmp1526 = std106;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std107;
    __VERIFIER_nondet_memory(&std107, sizeof(std107));
    ref_tmp528 = std107;
    // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
    __VERIFIER_nondet_memory(&agg_tmp1627, sizeof(agg_tmp1627));
    __VERIFIER_nondet_memory(&ref_tmp528, sizeof(ref_tmp528));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std108;
    __VERIFIER_nondet_memory(&std108, sizeof(std108));
    ref_tmp630 = std108;
    // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
    __VERIFIER_nondet_memory(&agg_tmp1729, sizeof(agg_tmp1729));
    __VERIFIER_nondet_memory(&ref_tmp630, sizeof(ref_tmp630));
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t109 = agg_tmp1627;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t110 = agg_tmp1729;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std111;
    __VERIFIER_nondet_memory(&std111, sizeof(std111));
    agg_tmp1831 = std111;
    char* cast112 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* std113;
    __VERIFIER_nondet_memory(&std113, sizeof(std113));
    _Bool std114;
    __VERIFIER_nondet_memory(&std114, sizeof(std114));
    char* cast115 = (char*)&(_str_8);
    char* cast116 = (char*)&(_str_9);
    char* sel117 = std114 ? cast115 : cast116;
    struct std__basic_ostream_char__std__char_traits_char__* std118;
    __VERIFIER_nondet_memory(&std118, sizeof(std118));
    char* cast119 = (char*)&(_str_10);
    struct std__basic_ostream_char__std__char_traits_char__* std120;
    __VERIFIER_nondet_memory(&std120, sizeof(std120));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std121;
    __VERIFIER_nondet_memory(&std121, sizeof(std121));
    ref_tmp733 = std121;
    // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
    __VERIFIER_nondet_memory(&agg_tmp1932, sizeof(agg_tmp1932));
    __VERIFIER_nondet_memory(&ref_tmp733, sizeof(ref_tmp733));
    int* cast122 = (int*)&(array3);
    int* cast123 = (int*)&(array3);
    int t124 = SIZE2;
    int* ptr125 = &(cast123)[t124];
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t126 = agg_tmp1932;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std127;
    __VERIFIER_nondet_memory(&std127, sizeof(std127));
    agg_tmp2034 = std127;
    char* cast128 = (char*)&(_str_11);
    struct std__basic_ostream_char__std__char_traits_char__* std129;
    __VERIFIER_nondet_memory(&std129, sizeof(std129));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std130;
    __VERIFIER_nondet_memory(&std130, sizeof(std130));
    agg_tmp2135 = std130;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std131;
    __VERIFIER_nondet_memory(&std131, sizeof(std131));
    agg_tmp2236 = std131;
    // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
    __VERIFIER_nondet_memory(&agg_tmp2337, sizeof(agg_tmp2337));
    __VERIFIER_nondet_memory(&output6, sizeof(output6));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t132 = agg_tmp2135;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t133 = agg_tmp2236;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t134 = agg_tmp2337;
    struct std__ostream_iterator_int__char__std__char_traits_char__ std135;
    __VERIFIER_nondet_memory(&std135, sizeof(std135));
    agg_tmp2438 = std135;
    // externalized std:: op: std::vector<int, std::allocator<int> >::clear()
    __VERIFIER_nondet_memory(&integers4, sizeof(integers4));
    char* cast136 = (char*)&(_str_12);
    struct std__basic_ostream_char__std__char_traits_char__* std137;
    __VERIFIER_nondet_memory(&std137, sizeof(std137));
    _Bool std138;
    __VERIFIER_nondet_memory(&std138, sizeof(std138));
    char* cast139 = (char*)&(_str_8);
    char* cast140 = (char*)&(_str_9);
    char* sel141 = std138 ? cast139 : cast140;
    struct std__basic_ostream_char__std__char_traits_char__* std142;
    __VERIFIER_nondet_memory(&std142, sizeof(std142));
    char* cast143 = (char*)&(_str_10);
    struct std__basic_ostream_char__std__char_traits_char__* std144;
    __VERIFIER_nondet_memory(&std144, sizeof(std144));
    struct std__basic_ostream_char__std__char_traits_char__* std145;
    __VERIFIER_nondet_memory(&std145, sizeof(std145));
    int c146 = 0;
    __retval1 = c146;
    int t147 = __retval1;
    int ret_val148 = t147;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&integers4, sizeof(integers4));
    }
    return ret_val148;
  int t149 = __retval1;
  return t149;
}

// function: __clang_cir_catch_copy__ZTSSt12out_of_range
void __clang_cir_catch_copy__ZTSSt12out_of_range(struct std__out_of_range* v150, struct std__out_of_range* v151) {
bb152:
  // externalized std:: op: std::out_of_range::out_of_range(std::out_of_range const&)
  __VERIFIER_nondet_memory(v150, sizeof(*v150));
  __VERIFIER_nondet_memory(v151, sizeof(*v151));
  return;
}

