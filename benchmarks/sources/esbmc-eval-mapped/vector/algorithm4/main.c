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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_match2[3] = {4, 5, 1};
int __const_main_match1[3] = {1, 2, 3};
int __const_main_myints[10] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[12] = "first *it: ";
char _str_1[7] = "*it==1";
char _str_2[105] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm4/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[13] = "second *it: ";
char _str_4[7] = "*it!=4";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_5[49] = "cannot create std::vector larger than max_size()";
_Bool myfunction(int p0, int p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______find_end___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2, int* p3);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______find_end___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int___bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2, int* p3, void* p4);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10myfunctionii
_Bool myfunction(int v0, int v1) {
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

// function: _Z8find_endIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiET_S7_S7_PT0_S9_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______find_end___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v10, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v11, int* v12, int* v13) {
bb14:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first115;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ last116;
  int* first217;
  int* last218;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval19;
  first115 = v10;
  last116 = v11;
  first217 = v12;
  last218 = v13;
    int* t20 = first217;
    int* t21 = last218;
    _Bool c22 = ((t20 == t21)) ? 1 : 0;
    if (c22) {
      __retval19 = last116; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t23 = __retval19;
      return t23;
    }
  __retval19 = last116; // copy
    while (1) {
      _Bool std24;
      __VERIFIER_nondet_memory(&std24, sizeof(std24));
      _Bool u25 = !std24;
      if (!u25) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it126;
        int* it227;
        it126 = first115; // copy
        int* t28 = first217;
        it227 = t28;
          while (1) {
            int* std29;
            __VERIFIER_nondet_memory(&std29, sizeof(std29));
            int t30 = *std29;
            int* t31 = it227;
            int t32 = *t31;
            _Bool c33 = ((t30 == t32)) ? 1 : 0;
            if (!c33) break;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std34;
              __VERIFIER_nondet_memory(&std34, sizeof(std34));
              int* t35 = it227;
              int c36 = 1;
              int* ptr37 = &(t35)[c36];
              it227 = ptr37;
                int* t38 = it227;
                int* t39 = last218;
                _Bool c40 = ((t38 == t39)) ? 1 : 0;
                if (c40) {
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std41;
                  __VERIFIER_nondet_memory(&std41, sizeof(std41));
                  break;
                }
                _Bool std42;
                __VERIFIER_nondet_memory(&std42, sizeof(std42));
                if (std42) {
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t43 = __retval19;
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val44 = t43;
                  return ret_val44;
                }
          }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std45;
        __VERIFIER_nondet_memory(&std45, sizeof(std45));
    }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t46 = __retval19;
  return t46;
}

// function: _Z8find_endIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiPFbiiEET_S9_S9_PT0_SB_T1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______find_end___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int___bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v47, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v48, int* v49, int* v50, void* v51) {
bb52:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first153;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ last154;
  int* first255;
  int* last256;
  void* pred57;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval58;
  first153 = v47;
  last154 = v48;
  first255 = v49;
  last256 = v50;
  pred57 = v51;
    int* t59 = first255;
    int* t60 = last256;
    _Bool c61 = ((t59 == t60)) ? 1 : 0;
    if (c61) {
      __retval58 = last154; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t62 = __retval58;
      return t62;
    }
  __retval58 = last154; // copy
    while (1) {
      _Bool std63;
      __VERIFIER_nondet_memory(&std63, sizeof(std63));
      _Bool u64 = !std63;
      if (!u64) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it165;
        int* it266;
        it165 = first153; // copy
        int* t67 = first255;
        it266 = t67;
          while (1) {
            void* t68 = pred57;
            int* std69;
            __VERIFIER_nondet_memory(&std69, sizeof(std69));
            int t70 = *std69;
            int* t71 = it266;
            int t72 = *t71;
            _Bool r73 = ((_Bool (*)(int, int))t68)(t70, t72);
            if (!r73) break;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std74;
              __VERIFIER_nondet_memory(&std74, sizeof(std74));
              int* t75 = it266;
              int c76 = 1;
              int* ptr77 = &(t75)[c76];
              it266 = ptr77;
                int* t78 = it266;
                int* t79 = last256;
                _Bool c80 = ((t78 == t79)) ? 1 : 0;
                if (c80) {
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std81;
                  __VERIFIER_nondet_memory(&std81, sizeof(std81));
                  break;
                }
                _Bool std82;
                __VERIFIER_nondet_memory(&std82, sizeof(std82));
                if (std82) {
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t83 = __retval58;
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val84 = t83;
                  return ret_val84;
                }
          }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std85;
        __VERIFIER_nondet_memory(&std85, sizeof(std85));
    }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t86 = __retval58;
  return t86;
}

// function: main
int main() {
bb87:
  int __retval88;
  int myints89[10];
  struct std__vector_int__std__allocator_int__ myvector90;
  struct std__allocator_int_ ref_tmp091;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it92;
  int match193[3];
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp194;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp095;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp196;
  int match297[3];
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp298;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp299;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3100;
  int c101 = 0;
  __retval88 = c101;
  // array copy
  __builtin_memcpy(myints89, __const_main_myints, (unsigned long)10 * sizeof(__const_main_myints[0]));
  int* cast102 = (int*)&(myints89);
  int* cast103 = (int*)&(myints89);
  int c104 = 10;
  int* ptr105 = &(cast103)[c104];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp091, sizeof(ref_tmp091));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector90, sizeof(myvector90));
    __VERIFIER_nondet_memory(cast102, sizeof(*cast102));
    __VERIFIER_nondet_memory(ptr105, sizeof(*ptr105));
    __VERIFIER_nondet_memory(&ref_tmp091, sizeof(ref_tmp091));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp091, sizeof(ref_tmp091));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it92, sizeof(it92));
    // array copy
    __builtin_memcpy(match193, __const_main_match1, (unsigned long)3 * sizeof(__const_main_match1[0]));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std106;
    __VERIFIER_nondet_memory(&std106, sizeof(std106));
    agg_tmp095 = std106;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std107;
    __VERIFIER_nondet_memory(&std107, sizeof(std107));
    agg_tmp196 = std107;
    int* cast108 = (int*)&(match193);
    int* cast109 = (int*)&(match193);
    int c110 = 3;
    int* ptr111 = &(cast109)[c110];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t112 = agg_tmp095;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t113 = agg_tmp196;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r114 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______find_end___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t112, t113, cast108, ptr111);
    ref_tmp194 = r114;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std115;
    __VERIFIER_nondet_memory(&std115, sizeof(std115));
    char* cast116 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std117;
    __VERIFIER_nondet_memory(&std117, sizeof(std117));
    int* std118;
    __VERIFIER_nondet_memory(&std118, sizeof(std118));
    int t119 = *std118;
    struct std__basic_ostream_char__std__char_traits_char__* std120;
    __VERIFIER_nondet_memory(&std120, sizeof(std120));
    struct std__basic_ostream_char__std__char_traits_char__* std121;
    __VERIFIER_nondet_memory(&std121, sizeof(std121));
    int* std122;
    __VERIFIER_nondet_memory(&std122, sizeof(std122));
    int t123 = *std122;
    int c124 = 1;
    _Bool c125 = ((t123 == c124)) ? 1 : 0;
    if (c125) {
    } else {
      char* cast126 = (char*)&(_str_1);
      char* c127 = _str_2;
      unsigned int c128 = 132;
      char* cast129 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast126, c127, c128, cast129);
    }
    // array copy
    __builtin_memcpy(match297, __const_main_match2, (unsigned long)3 * sizeof(__const_main_match2[0]));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std130;
    __VERIFIER_nondet_memory(&std130, sizeof(std130));
    agg_tmp299 = std130;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std131;
    __VERIFIER_nondet_memory(&std131, sizeof(std131));
    agg_tmp3100 = std131;
    int* cast132 = (int*)&(match297);
    int* cast133 = (int*)&(match297);
    int c134 = 3;
    int* ptr135 = &(cast133)[c134];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t136 = agg_tmp299;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t137 = agg_tmp3100;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r138 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______find_end___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int___bool____(t136, t137, cast132, ptr135, &myfunction);
    ref_tmp298 = r138;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std139;
    __VERIFIER_nondet_memory(&std139, sizeof(std139));
    char* cast140 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std141;
    __VERIFIER_nondet_memory(&std141, sizeof(std141));
    int* std142;
    __VERIFIER_nondet_memory(&std142, sizeof(std142));
    int t143 = *std142;
    struct std__basic_ostream_char__std__char_traits_char__* std144;
    __VERIFIER_nondet_memory(&std144, sizeof(std144));
    struct std__basic_ostream_char__std__char_traits_char__* std145;
    __VERIFIER_nondet_memory(&std145, sizeof(std145));
    int* std146;
    __VERIFIER_nondet_memory(&std146, sizeof(std146));
    int t147 = *std146;
    int c148 = 4;
    _Bool c149 = ((t147 != c148)) ? 1 : 0;
    if (c149) {
    } else {
      char* cast150 = (char*)&(_str_4);
      char* c151 = _str_2;
      unsigned int c152 = 138;
      char* cast153 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast150, c151, c152, cast153);
    }
    int c154 = 0;
    __retval88 = c154;
    int t155 = __retval88;
    int ret_val156 = t155;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector90, sizeof(myvector90));
    }
    return ret_val156;
  int t157 = __retval88;
  return t157;
}

