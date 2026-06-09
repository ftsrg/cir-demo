extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

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
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____detail____move_iter_cat_int___;
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__move_iterator_int___ { int* _M_current; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____imove___IterMove { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
union std__vector_int__std__allocator_int_____Temporary_value___Storage { unsigned char _M_byte; int _M_val; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std__vector_int__std__allocator_int_____Temporary_value { struct std__vector_int__std__allocator_int__* _M_this; union std__vector_int__std__allocator_int_____Temporary_value___Storage _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[5] = "v1 =";
char _str_1[2] = " ";
char _str_2[26] = "vector::_M_realloc_append";
char _str_3[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[35] = "reference std::vector<int>::back()";
char _str_4[15] = "!this->empty()";
char _str_5[26] = "vector::_M_realloc_insert";
char _str_6[23] = "vector::_M_fill_insert";
char _str_7[23] = "vector::_M_fill_append";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
char _str_8[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_9[9] = "__n >= 0";
char _str_10[24] = "vector::_M_range_insert";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ v12;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ Iter3;
  int ref_tmp04;
  int ref_tmp15;
  int ref_tmp26;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp17;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp58;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp69;
  int ref_tmp710;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp211;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp412;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1013;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1114;
  int ref_tmp1215;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp516;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp717;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1518;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1619;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp820;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1721;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp922;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1823;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1024;
  int c25 = 0;
  __retval1 = c25;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&v12, sizeof(v12));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&Iter3, sizeof(Iter3));
    int c26 = 10;
    ref_tmp04 = c26;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&v12, sizeof(v12));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    int c27 = 20;
    ref_tmp15 = c27;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&v12, sizeof(v12));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    int c28 = 30;
    ref_tmp26 = c28;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&v12, sizeof(v12));
    __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
    char* cast29 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp331;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp432;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp033;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std34;
      __VERIFIER_nondet_memory(&std34, sizeof(std34));
      ref_tmp331 = std34;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std35;
      __VERIFIER_nondet_memory(&std35, sizeof(std35));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std37;
        __VERIFIER_nondet_memory(&std37, sizeof(std37));
        ref_tmp432 = std37;
        _Bool std38;
        __VERIFIER_nondet_memory(&std38, sizeof(std38));
        _Bool u39 = !std38;
        if (!u39) break;
        char* cast40 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std41;
        __VERIFIER_nondet_memory(&std41, sizeof(std41));
        int* std42;
        __VERIFIER_nondet_memory(&std42, sizeof(std42));
        int t43 = *std42;
        struct std__basic_ostream_char__std__char_traits_char__* std44;
        __VERIFIER_nondet_memory(&std44, sizeof(std44));
      for_step36: ;
        int c45 = 0;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std46;
        __VERIFIER_nondet_memory(&std46, sizeof(std46));
        agg_tmp033 = std46;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    ref_tmp69 = std48;
    long c49 = 1;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    ref_tmp58 = std50;
    // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
    __VERIFIER_nondet_memory(&agg_tmp17, sizeof(agg_tmp17));
    __VERIFIER_nondet_memory(&ref_tmp58, sizeof(ref_tmp58));
    int c51 = 40;
    ref_tmp710 = c51;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t52 = agg_tmp17;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    agg_tmp211 = std53;
    char* cast54 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp856;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp957;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp358;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std59;
      __VERIFIER_nondet_memory(&std59, sizeof(std59));
      ref_tmp856 = std59;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std60;
      __VERIFIER_nondet_memory(&std60, sizeof(std60));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std62;
        __VERIFIER_nondet_memory(&std62, sizeof(std62));
        ref_tmp957 = std62;
        _Bool std63;
        __VERIFIER_nondet_memory(&std63, sizeof(std63));
        _Bool u64 = !std63;
        if (!u64) break;
        char* cast65 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std66;
        __VERIFIER_nondet_memory(&std66, sizeof(std66));
        int* std67;
        __VERIFIER_nondet_memory(&std67, sizeof(std67));
        int t68 = *std67;
        struct std__basic_ostream_char__std__char_traits_char__* std69;
        __VERIFIER_nondet_memory(&std69, sizeof(std69));
      for_step61: ;
        int c70 = 0;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std71;
        __VERIFIER_nondet_memory(&std71, sizeof(std71));
        agg_tmp358 = std71;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std72;
    __VERIFIER_nondet_memory(&std72, sizeof(std72));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std73;
    __VERIFIER_nondet_memory(&std73, sizeof(std73));
    ref_tmp1114 = std73;
    long c74 = 2;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std75;
    __VERIFIER_nondet_memory(&std75, sizeof(std75));
    ref_tmp1013 = std75;
    // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
    __VERIFIER_nondet_memory(&agg_tmp412, sizeof(agg_tmp412));
    __VERIFIER_nondet_memory(&ref_tmp1013, sizeof(ref_tmp1013));
    unsigned long c76 = 4;
    int c77 = 50;
    ref_tmp1215 = c77;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t78 = agg_tmp412;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std79;
    __VERIFIER_nondet_memory(&std79, sizeof(std79));
    agg_tmp516 = std79;
    char* cast80 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std81;
    __VERIFIER_nondet_memory(&std81, sizeof(std81));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1382;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1483;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp684;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std85;
      __VERIFIER_nondet_memory(&std85, sizeof(std85));
      ref_tmp1382 = std85;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std86;
      __VERIFIER_nondet_memory(&std86, sizeof(std86));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std88;
        __VERIFIER_nondet_memory(&std88, sizeof(std88));
        ref_tmp1483 = std88;
        _Bool std89;
        __VERIFIER_nondet_memory(&std89, sizeof(std89));
        _Bool u90 = !std89;
        if (!u90) break;
        char* cast91 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std92;
        __VERIFIER_nondet_memory(&std92, sizeof(std92));
        int* std93;
        __VERIFIER_nondet_memory(&std93, sizeof(std93));
        int t94 = *std93;
        struct std__basic_ostream_char__std__char_traits_char__* std95;
        __VERIFIER_nondet_memory(&std95, sizeof(std95));
      for_step87: ;
        int c96 = 0;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std97;
        __VERIFIER_nondet_memory(&std97, sizeof(std97));
        agg_tmp684 = std97;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std98;
    __VERIFIER_nondet_memory(&std98, sizeof(std98));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std99;
    __VERIFIER_nondet_memory(&std99, sizeof(std99));
    ref_tmp1619 = std99;
    long c100 = 1;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std101;
    __VERIFIER_nondet_memory(&std101, sizeof(std101));
    ref_tmp1518 = std101;
    // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
    __VERIFIER_nondet_memory(&agg_tmp717, sizeof(agg_tmp717));
    __VERIFIER_nondet_memory(&ref_tmp1518, sizeof(ref_tmp1518));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std102;
    __VERIFIER_nondet_memory(&std102, sizeof(std102));
    ref_tmp1721 = std102;
    long c103 = 2;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std104;
    __VERIFIER_nondet_memory(&std104, sizeof(std104));
    agg_tmp820 = std104;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std105;
    __VERIFIER_nondet_memory(&std105, sizeof(std105));
    ref_tmp1823 = std105;
    long c106 = 4;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std107;
    __VERIFIER_nondet_memory(&std107, sizeof(std107));
    agg_tmp922 = std107;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t108 = agg_tmp717;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t109 = agg_tmp820;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t110 = agg_tmp922;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std111;
    __VERIFIER_nondet_memory(&std111, sizeof(std111));
    agg_tmp1024 = std111;
    char* cast112 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std113;
    __VERIFIER_nondet_memory(&std113, sizeof(std113));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp19114;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp20115;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11116;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std117;
      __VERIFIER_nondet_memory(&std117, sizeof(std117));
      ref_tmp19114 = std117;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std118;
      __VERIFIER_nondet_memory(&std118, sizeof(std118));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std120;
        __VERIFIER_nondet_memory(&std120, sizeof(std120));
        ref_tmp20115 = std120;
        _Bool std121;
        __VERIFIER_nondet_memory(&std121, sizeof(std121));
        _Bool u122 = !std121;
        if (!u122) break;
        char* cast123 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std124;
        __VERIFIER_nondet_memory(&std124, sizeof(std124));
        int* std125;
        __VERIFIER_nondet_memory(&std125, sizeof(std125));
        int t126 = *std125;
        struct std__basic_ostream_char__std__char_traits_char__* std127;
        __VERIFIER_nondet_memory(&std127, sizeof(std127));
      for_step119: ;
        int c128 = 0;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std129;
        __VERIFIER_nondet_memory(&std129, sizeof(std129));
        agg_tmp11116 = std129;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std130;
    __VERIFIER_nondet_memory(&std130, sizeof(std130));
  {
    // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
    __VERIFIER_nondet_memory(&v12, sizeof(v12));
  }
  int t131 = __retval1;
  return t131;
}

