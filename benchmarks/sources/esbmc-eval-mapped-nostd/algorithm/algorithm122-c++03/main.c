extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct __gnu_cxx____ops___Val_less_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int __const_main_myints[3] = {1, 2, 3};
struct __gnu_cxx____ops___Iter_less_val __const__ZSt13__adjust_heapIPiliN9__gnu_cxx5__ops15_Iter_less_iterEEvT_T0_S5_T1_T2____cmp;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[47] = "The 3! possible permutations with 3 elements:\n";
char _str_1[15] = "myints[2] == 3";
char _str_2[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm122-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
_Bool bool___gnu_cxx____ops___Iter_less_val__operator___int___int__int___int___const(struct __gnu_cxx____ops___Iter_less_val* p0, int* p1, int* p2);
void void_std____push_heap_int___long__int____gnu_cxx____ops___Iter_less_val_(int* p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_less_val* p4);
void void_std____adjust_heap_int___long__int____gnu_cxx____ops___Iter_less_iter_(int* p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_less_iter p4);
void void_std____make_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter* p2);
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(struct __gnu_cxx____ops___Iter_less_iter* p0, int* p1, int* p2);
void void_std____pop_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, struct __gnu_cxx____ops___Iter_less_iter* p3);
void void_std____heap_select_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, struct __gnu_cxx____ops___Iter_less_iter p3);
void void_std____sort_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter* p2);
void void_std____partial_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, struct __gnu_cxx____ops___Iter_less_iter p3);
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* p0, int* p1);
void void_std__iter_swap_int___int__(int* p0, int* p1);
void void_std____move_median_to_first_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, int* p3, struct __gnu_cxx____ops___Iter_less_iter p4);
int* int__std____unguarded_partition_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, struct __gnu_cxx____ops___Iter_less_iter p3);
int* int__std____unguarded_partition_pivot_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
void void_std____introsort_loop_int___long____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, long p2, struct __gnu_cxx____ops___Iter_less_iter p3);
int int_std____countl_zero_unsigned_long_(unsigned long p0);
int int_std____bit_width_unsigned_long_(unsigned long p0);
long long_std____lg_long_(long p0);
int* int__std____niter_wrap_int__(int** p0, int* p1);
_Bool std__is_constant_evaluated();
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
void void_std____advance_int___long_(int** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int___long_(int** p0, long p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_true__int___int__(int** p0, int** p1);
int* int__std____copy_move_backward_a2_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_backward_a1_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____niter_base_int__(int* p0);
int* int__std____copy_move_backward_a_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____miter_base_int__(int* p0);
int* int__std__move_backward_int___int__(int* p0, int* p1, int* p2);
_Bool bool___gnu_cxx____ops___Val_less_iter__operator___int__int___int___int___const(struct __gnu_cxx____ops___Val_less_iter* p0, int* p1, int* p2);
void void_std____unguarded_linear_insert_int_____gnu_cxx____ops___Val_less_iter_(int* p0, struct __gnu_cxx____ops___Val_less_iter p1);
struct __gnu_cxx____ops___Val_less_iter __gnu_cxx____ops____val_comp_iter(struct __gnu_cxx____ops___Iter_less_iter p0);
void void_std____insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
void void_std____unguarded_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
void void_std____final_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
void void_std____sort_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter();
void void_std__sort_int__(int* p0, int* p1);
void void_std____reverse_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
_Bool bool_std____next_permutation_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
_Bool bool_std__next_permutation_int__(int* p0, int* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v0, int v1) {
bb2:
  int __a3;
  int __b4;
  int __retval5;
  __a3 = v0;
  __b4 = v1;
  int t6 = __a3;
  int t7 = __b4;
  int b8 = t6 | t7;
  __retval5 = b8;
  int t9 = __retval5;
  return t9;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v10) {
bb11:
  struct std__basic_ios_char__std__char_traits_char__* this12;
  int __retval13;
  this12 = v10;
  struct std__basic_ios_char__std__char_traits_char__* t14 = this12;
  struct std__ios_base* base15 = (struct std__ios_base*)((char *)t14 + 0);
  int t16 = base15->_M_streambuf_state;
  __retval13 = t16;
  int t17 = __retval13;
  return t17;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v18, int v19) {
bb20:
  struct std__basic_ios_char__std__char_traits_char__* this21;
  int __state22;
  this21 = v18;
  __state22 = v19;
  struct std__basic_ios_char__std__char_traits_char__* t23 = this21;
  int r24 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t23);
  int t25 = __state22;
  int r26 = std__operator_(r24, t25);
  std__basic_ios_char__std__char_traits_char_____clear(t23, r26);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb27:
  _Bool __retval28;
    _Bool c29 = 0;
    __retval28 = c29;
    _Bool t30 = __retval28;
    return t30;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v31, char* v32) {
bb33:
  char* __c134;
  char* __c235;
  _Bool __retval36;
  __c134 = v31;
  __c235 = v32;
  char* t37 = __c134;
  char t38 = *t37;
  int cast39 = (int)t38;
  char* t40 = __c235;
  char t41 = *t40;
  int cast42 = (int)t41;
  _Bool c43 = ((cast39 == cast42)) ? 1 : 0;
  __retval36 = c43;
  _Bool t44 = __retval36;
  return t44;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v45) {
bb46:
  char* __p47;
  unsigned long __retval48;
  unsigned long __i49;
  __p47 = v45;
  unsigned long c50 = 0;
  __i49 = c50;
    char ref_tmp051;
    while (1) {
      unsigned long t52 = __i49;
      char* t53 = __p47;
      char* ptr54 = &(t53)[t52];
      char c55 = 0;
      ref_tmp051 = c55;
      _Bool r56 = __gnu_cxx__char_traits_char___eq(ptr54, &ref_tmp051);
      _Bool u57 = !r56;
      if (!u57) break;
      unsigned long t58 = __i49;
      unsigned long u59 = t58 + 1;
      __i49 = u59;
    }
  unsigned long t60 = __i49;
  __retval48 = t60;
  unsigned long t61 = __retval48;
  return t61;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v62) {
bb63:
  char* __s64;
  unsigned long __retval65;
  __s64 = v62;
    _Bool r66 = std____is_constant_evaluated();
    if (r66) {
      char* t67 = __s64;
      unsigned long r68 = __gnu_cxx__char_traits_char___length(t67);
      __retval65 = r68;
      unsigned long t69 = __retval65;
      return t69;
    }
  char* t70 = __s64;
  unsigned long r71 = strlen(t70);
  __retval65 = r71;
  unsigned long t72 = __retval65;
  return t72;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v73, char* v74) {
bb75:
  struct std__basic_ostream_char__std__char_traits_char__* __out76;
  char* __s77;
  struct std__basic_ostream_char__std__char_traits_char__* __retval78;
  __out76 = v73;
  __s77 = v74;
    char* t79 = __s77;
    _Bool cast80 = (_Bool)t79;
    _Bool u81 = !cast80;
    if (u81) {
      struct std__basic_ostream_char__std__char_traits_char__* t82 = __out76;
      void** v83 = (void**)t82;
      void* v84 = *((void**)v83);
      unsigned char* cast85 = (unsigned char*)v84;
      long c86 = -24;
      unsigned char* ptr87 = &(cast85)[c86];
      long* cast88 = (long*)ptr87;
      long t89 = *cast88;
      unsigned char* cast90 = (unsigned char*)t82;
      unsigned char* ptr91 = &(cast90)[t89];
      struct std__basic_ostream_char__std__char_traits_char__* cast92 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr91;
      struct std__basic_ios_char__std__char_traits_char__* cast93 = (struct std__basic_ios_char__std__char_traits_char__*)cast92;
      int t94 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast93, t94);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t95 = __out76;
      char* t96 = __s77;
      char* t97 = __s77;
      unsigned long r98 = std__char_traits_char___length(t97);
      long cast99 = (long)r98;
      struct std__basic_ostream_char__std__char_traits_char__* r100 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t95, t96, cast99);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t101 = __out76;
  __retval78 = t101;
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __retval78;
  return t102;
}

// function: _ZNK9__gnu_cxx5__ops14_Iter_less_valclIPiiEEbT_RT0_
_Bool bool___gnu_cxx____ops___Iter_less_val__operator___int___int__int___int___const(struct __gnu_cxx____ops___Iter_less_val* v103, int* v104, int* v105) {
bb106:
  struct __gnu_cxx____ops___Iter_less_val* this107;
  int* __it108;
  int* __val109;
  _Bool __retval110;
  this107 = v103;
  __it108 = v104;
  __val109 = v105;
  struct __gnu_cxx____ops___Iter_less_val* t111 = this107;
  int* t112 = __it108;
  int t113 = *t112;
  int* t114 = __val109;
  int t115 = *t114;
  _Bool c116 = ((t113 < t115)) ? 1 : 0;
  __retval110 = c116;
  _Bool t117 = __retval110;
  return t117;
}

// function: _ZSt11__push_heapIPiliN9__gnu_cxx5__ops14_Iter_less_valEEvT_T0_S5_T1_RT2_
void void_std____push_heap_int___long__int____gnu_cxx____ops___Iter_less_val_(int* v118, long v119, long v120, int v121, struct __gnu_cxx____ops___Iter_less_val* v122) {
bb123:
  int* __first124;
  long __holeIndex125;
  long __topIndex126;
  int __value127;
  struct __gnu_cxx____ops___Iter_less_val* __comp128;
  long __parent129;
  __first124 = v118;
  __holeIndex125 = v119;
  __topIndex126 = v120;
  __value127 = v121;
  __comp128 = v122;
  long t130 = __holeIndex125;
  long c131 = 1;
  long b132 = t130 - c131;
  long c133 = 2;
  long b134 = b132 / c133;
  __parent129 = b134;
    while (1) {
      long t135 = __holeIndex125;
      long t136 = __topIndex126;
      _Bool c137 = ((t135 > t136)) ? 1 : 0;
      _Bool ternary138;
      if (c137) {
        struct __gnu_cxx____ops___Iter_less_val* t139 = __comp128;
        int* t140 = __first124;
        long t141 = __parent129;
        int* ptr142 = &(t140)[t141];
        _Bool r143 = bool___gnu_cxx____ops___Iter_less_val__operator___int___int__int___int___const(t139, ptr142, &__value127);
        ternary138 = (_Bool)r143;
      } else {
        _Bool c144 = 0;
        ternary138 = (_Bool)c144;
      }
      if (!ternary138) break;
        int* t145 = __first124;
        long t146 = __parent129;
        int* ptr147 = &(t145)[t146];
        int t148 = *ptr147;
        int* t149 = __first124;
        long t150 = __holeIndex125;
        int* ptr151 = &(t149)[t150];
        *ptr151 = t148;
        long t152 = __parent129;
        __holeIndex125 = t152;
        long t153 = __holeIndex125;
        long c154 = 1;
        long b155 = t153 - c154;
        long c156 = 2;
        long b157 = b155 / c156;
        __parent129 = b157;
    }
  int t158 = __value127;
  int* t159 = __first124;
  long t160 = __holeIndex125;
  int* ptr161 = &(t159)[t160];
  *ptr161 = t158;
  return;
}

// function: _ZSt13__adjust_heapIPiliN9__gnu_cxx5__ops15_Iter_less_iterEEvT_T0_S5_T1_T2_
void void_std____adjust_heap_int___long__int____gnu_cxx____ops___Iter_less_iter_(int* v162, long v163, long v164, int v165, struct __gnu_cxx____ops___Iter_less_iter v166) {
bb167:
  int* __first168;
  long __holeIndex169;
  long __len170;
  int __value171;
  struct __gnu_cxx____ops___Iter_less_iter __comp172;
  long __topIndex173;
  long __secondChild174;
  struct __gnu_cxx____ops___Iter_less_val __cmp175;
  __first168 = v162;
  __holeIndex169 = v163;
  __len170 = v164;
  __value171 = v165;
  __comp172 = v166;
  long t176 = __holeIndex169;
  __topIndex173 = t176;
  long t177 = __holeIndex169;
  __secondChild174 = t177;
    while (1) {
      long t178 = __secondChild174;
      long t179 = __len170;
      long c180 = 1;
      long b181 = t179 - c180;
      long c182 = 2;
      long b183 = b181 / c182;
      _Bool c184 = ((t178 < b183)) ? 1 : 0;
      if (!c184) break;
        long c185 = 2;
        long t186 = __secondChild174;
        long c187 = 1;
        long b188 = t186 + c187;
        long b189 = c185 * b188;
        __secondChild174 = b189;
          int* t190 = __first168;
          long t191 = __secondChild174;
          int* ptr192 = &(t190)[t191];
          int* t193 = __first168;
          long t194 = __secondChild174;
          long c195 = 1;
          long b196 = t194 - c195;
          int* ptr197 = &(t193)[b196];
          _Bool r198 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp172, ptr192, ptr197);
          if (r198) {
            long t199 = __secondChild174;
            long u200 = t199 - 1;
            __secondChild174 = u200;
          }
        int* t201 = __first168;
        long t202 = __secondChild174;
        int* ptr203 = &(t201)[t202];
        int t204 = *ptr203;
        int* t205 = __first168;
        long t206 = __holeIndex169;
        int* ptr207 = &(t205)[t206];
        *ptr207 = t204;
        long t208 = __secondChild174;
        __holeIndex169 = t208;
    }
    long t209 = __len170;
    long c210 = 1;
    long b211 = t209 & c210;
    long c212 = 0;
    _Bool c213 = ((b211 == c212)) ? 1 : 0;
    _Bool ternary214;
    if (c213) {
      long t215 = __secondChild174;
      long t216 = __len170;
      long c217 = 2;
      long b218 = t216 - c217;
      long c219 = 2;
      long b220 = b218 / c219;
      _Bool c221 = ((t215 == b220)) ? 1 : 0;
      ternary214 = (_Bool)c221;
    } else {
      _Bool c222 = 0;
      ternary214 = (_Bool)c222;
    }
    if (ternary214) {
      long c223 = 2;
      long t224 = __secondChild174;
      long c225 = 1;
      long b226 = t224 + c225;
      long b227 = c223 * b226;
      __secondChild174 = b227;
      int* t228 = __first168;
      long t229 = __secondChild174;
      long c230 = 1;
      long b231 = t229 - c230;
      int* ptr232 = &(t228)[b231];
      int t233 = *ptr232;
      int* t234 = __first168;
      long t235 = __holeIndex169;
      int* ptr236 = &(t234)[t235];
      *ptr236 = t233;
      long t237 = __secondChild174;
      long c238 = 1;
      long b239 = t237 - c238;
      __holeIndex169 = b239;
    }
  __cmp175 = *&__const__ZSt13__adjust_heapIPiliN9__gnu_cxx5__ops15_Iter_less_iterEEvT_T0_S5_T1_T2____cmp; // copy
  int* t240 = __first168;
  long t241 = __holeIndex169;
  long t242 = __topIndex173;
  int t243 = __value171;
  void_std____push_heap_int___long__int____gnu_cxx____ops___Iter_less_val_(t240, t241, t242, t243, &__cmp175);
  return;
}

// function: _ZSt11__make_heapIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_RT0_
void void_std____make_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* v244, int* v245, struct __gnu_cxx____ops___Iter_less_iter* v246) {
bb247:
  int* __first248;
  int* __last249;
  struct __gnu_cxx____ops___Iter_less_iter* __comp250;
  long __len251;
  long __parent252;
  __first248 = v244;
  __last249 = v245;
  __comp250 = v246;
    int* t253 = __last249;
    int* t254 = __first248;
    long diff255 = t253 - t254;
    long c256 = 2;
    _Bool c257 = ((diff255 < c256)) ? 1 : 0;
    if (c257) {
      return;
    }
  int* t258 = __last249;
  int* t259 = __first248;
  long diff260 = t258 - t259;
  __len251 = diff260;
  long t261 = __len251;
  long c262 = 2;
  long b263 = t261 - c262;
  long c264 = 2;
  long b265 = b263 / c264;
  __parent252 = b265;
    while (1) {
      _Bool c266 = 1;
      if (!c266) break;
        int __value267;
        struct __gnu_cxx____ops___Iter_less_iter agg_tmp0268;
        int* t269 = __first248;
        long t270 = __parent252;
        int* ptr271 = &(t269)[t270];
        int t272 = *ptr271;
        __value267 = t272;
        int* t273 = __first248;
        long t274 = __parent252;
        long t275 = __len251;
        int t276 = __value267;
        struct __gnu_cxx____ops___Iter_less_iter* t277 = __comp250;
        struct __gnu_cxx____ops___Iter_less_iter t278 = agg_tmp0268;
        void_std____adjust_heap_int___long__int____gnu_cxx____ops___Iter_less_iter_(t273, t274, t275, t276, t278);
          long t279 = __parent252;
          long c280 = 0;
          _Bool c281 = ((t279 == c280)) ? 1 : 0;
          if (c281) {
            return;
          }
        long t282 = __parent252;
        long u283 = t282 - 1;
        __parent252 = u283;
    }
  return;
}

// function: _ZNK9__gnu_cxx5__ops15_Iter_less_iterclIPiS3_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(struct __gnu_cxx____ops___Iter_less_iter* v284, int* v285, int* v286) {
bb287:
  struct __gnu_cxx____ops___Iter_less_iter* this288;
  int* __it1289;
  int* __it2290;
  _Bool __retval291;
  this288 = v284;
  __it1289 = v285;
  __it2290 = v286;
  struct __gnu_cxx____ops___Iter_less_iter* t292 = this288;
  int* t293 = __it1289;
  int t294 = *t293;
  int* t295 = __it2290;
  int t296 = *t295;
  _Bool c297 = ((t294 < t296)) ? 1 : 0;
  __retval291 = c297;
  _Bool t298 = __retval291;
  return t298;
}

// function: _ZSt10__pop_heapIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_S4_RT0_
void void_std____pop_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* v299, int* v300, int* v301, struct __gnu_cxx____ops___Iter_less_iter* v302) {
bb303:
  int* __first304;
  int* __last305;
  int* __result306;
  struct __gnu_cxx____ops___Iter_less_iter* __comp307;
  int __value308;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0309;
  __first304 = v299;
  __last305 = v300;
  __result306 = v301;
  __comp307 = v302;
  int* t310 = __result306;
  int t311 = *t310;
  __value308 = t311;
  int* t312 = __first304;
  int t313 = *t312;
  int* t314 = __result306;
  *t314 = t313;
  int* t315 = __first304;
  long c316 = 0;
  int* t317 = __last305;
  int* t318 = __first304;
  long diff319 = t317 - t318;
  int t320 = __value308;
  struct __gnu_cxx____ops___Iter_less_iter* t321 = __comp307;
  struct __gnu_cxx____ops___Iter_less_iter t322 = agg_tmp0309;
  void_std____adjust_heap_int___long__int____gnu_cxx____ops___Iter_less_iter_(t315, c316, diff319, t320, t322);
  return;
}

// function: _ZSt13__heap_selectIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_S4_T0_
void void_std____heap_select_int_____gnu_cxx____ops___Iter_less_iter_(int* v323, int* v324, int* v325, struct __gnu_cxx____ops___Iter_less_iter v326) {
bb327:
  int* __first328;
  int* __middle329;
  int* __last330;
  struct __gnu_cxx____ops___Iter_less_iter __comp331;
  __first328 = v323;
  __middle329 = v324;
  __last330 = v325;
  __comp331 = v326;
  int* t332 = __first328;
  int* t333 = __middle329;
  void_std____make_heap_int_____gnu_cxx____ops___Iter_less_iter_(t332, t333, &__comp331);
    int* __i334;
    int* t335 = __middle329;
    __i334 = t335;
    while (1) {
      int* t337 = __i334;
      int* t338 = __last330;
      _Bool c339 = ((t337 < t338)) ? 1 : 0;
      if (!c339) break;
        int* t340 = __i334;
        int* t341 = __first328;
        _Bool r342 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp331, t340, t341);
        if (r342) {
          int* t343 = __first328;
          int* t344 = __middle329;
          int* t345 = __i334;
          void_std____pop_heap_int_____gnu_cxx____ops___Iter_less_iter_(t343, t344, t345, &__comp331);
        }
    for_step336: ;
      int* t346 = __i334;
      int c347 = 1;
      int* ptr348 = &(t346)[c347];
      __i334 = ptr348;
    }
  return;
}

// function: _ZSt11__sort_heapIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_RT0_
void void_std____sort_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* v349, int* v350, struct __gnu_cxx____ops___Iter_less_iter* v351) {
bb352:
  int* __first353;
  int* __last354;
  struct __gnu_cxx____ops___Iter_less_iter* __comp355;
  __first353 = v349;
  __last354 = v350;
  __comp355 = v351;
    while (1) {
      int* t356 = __last354;
      int* t357 = __first353;
      long diff358 = t356 - t357;
      long c359 = 1;
      _Bool c360 = ((diff358 > c359)) ? 1 : 0;
      if (!c360) break;
        int* t361 = __last354;
        int c362 = -1;
        int* ptr363 = &(t361)[c362];
        __last354 = ptr363;
        int* t364 = __first353;
        int* t365 = __last354;
        int* t366 = __last354;
        struct __gnu_cxx____ops___Iter_less_iter* t367 = __comp355;
        void_std____pop_heap_int_____gnu_cxx____ops___Iter_less_iter_(t364, t365, t366, t367);
    }
  return;
}

// function: _ZSt14__partial_sortIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_S4_T0_
void void_std____partial_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* v368, int* v369, int* v370, struct __gnu_cxx____ops___Iter_less_iter v371) {
bb372:
  int* __first373;
  int* __middle374;
  int* __last375;
  struct __gnu_cxx____ops___Iter_less_iter __comp376;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0377;
  __first373 = v368;
  __middle374 = v369;
  __last375 = v370;
  __comp376 = v371;
  int* t378 = __first373;
  int* t379 = __middle374;
  int* t380 = __last375;
  struct __gnu_cxx____ops___Iter_less_iter t381 = agg_tmp0377;
  void_std____heap_select_int_____gnu_cxx____ops___Iter_less_iter_(t378, t379, t380, t381);
  int* t382 = __first373;
  int* t383 = __middle374;
  void_std____sort_heap_int_____gnu_cxx____ops___Iter_less_iter_(t382, t383, &__comp376);
  return;
}

// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v384, int* v385) {
bb386:
  int* __a387;
  int* __b388;
  int __tmp389;
  __a387 = v384;
  __b388 = v385;
  int* t390 = __a387;
  int t391 = *t390;
  __tmp389 = t391;
  int* t392 = __b388;
  int t393 = *t392;
  int* t394 = __a387;
  *t394 = t393;
  int t395 = __tmp389;
  int* t396 = __b388;
  *t396 = t395;
  return;
}

// function: _ZSt9iter_swapIPiS0_EvT_T0_
void void_std__iter_swap_int___int__(int* v397, int* v398) {
bb399:
  int* __a400;
  int* __b401;
  __a400 = v397;
  __b401 = v398;
  int* t402 = __a400;
  int* t403 = __b401;
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(t402, t403);
  return;
}

// function: _ZSt22__move_median_to_firstIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_S4_S4_T0_
void void_std____move_median_to_first_int_____gnu_cxx____ops___Iter_less_iter_(int* v404, int* v405, int* v406, int* v407, struct __gnu_cxx____ops___Iter_less_iter v408) {
bb409:
  int* __result410;
  int* __a411;
  int* __b412;
  int* __c413;
  struct __gnu_cxx____ops___Iter_less_iter __comp414;
  __result410 = v404;
  __a411 = v405;
  __b412 = v406;
  __c413 = v407;
  __comp414 = v408;
    int* t415 = __a411;
    int* t416 = __b412;
    _Bool r417 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp414, t415, t416);
    if (r417) {
        int* t418 = __b412;
        int* t419 = __c413;
        _Bool r420 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp414, t418, t419);
        if (r420) {
          int* t421 = __result410;
          int* t422 = __b412;
          void_std__iter_swap_int___int__(t421, t422);
        } else {
            int* t423 = __a411;
            int* t424 = __c413;
            _Bool r425 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp414, t423, t424);
            if (r425) {
              int* t426 = __result410;
              int* t427 = __c413;
              void_std__iter_swap_int___int__(t426, t427);
            } else {
              int* t428 = __result410;
              int* t429 = __a411;
              void_std__iter_swap_int___int__(t428, t429);
            }
        }
    } else {
        int* t430 = __a411;
        int* t431 = __c413;
        _Bool r432 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp414, t430, t431);
        if (r432) {
          int* t433 = __result410;
          int* t434 = __a411;
          void_std__iter_swap_int___int__(t433, t434);
        } else {
            int* t435 = __b412;
            int* t436 = __c413;
            _Bool r437 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp414, t435, t436);
            if (r437) {
              int* t438 = __result410;
              int* t439 = __c413;
              void_std__iter_swap_int___int__(t438, t439);
            } else {
              int* t440 = __result410;
              int* t441 = __b412;
              void_std__iter_swap_int___int__(t440, t441);
            }
        }
    }
  return;
}

// function: _ZSt21__unguarded_partitionIPiN9__gnu_cxx5__ops15_Iter_less_iterEET_S4_S4_S4_T0_
int* int__std____unguarded_partition_int_____gnu_cxx____ops___Iter_less_iter_(int* v442, int* v443, int* v444, struct __gnu_cxx____ops___Iter_less_iter v445) {
bb446:
  int* __first447;
  int* __last448;
  int* __pivot449;
  struct __gnu_cxx____ops___Iter_less_iter __comp450;
  int* __retval451;
  __first447 = v442;
  __last448 = v443;
  __pivot449 = v444;
  __comp450 = v445;
    while (1) {
      _Bool c452 = 1;
      if (!c452) break;
          while (1) {
            int* t453 = __first447;
            int* t454 = __pivot449;
            _Bool r455 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp450, t453, t454);
            if (!r455) break;
            int* t456 = __first447;
            int c457 = 1;
            int* ptr458 = &(t456)[c457];
            __first447 = ptr458;
          }
        int* t459 = __last448;
        int c460 = -1;
        int* ptr461 = &(t459)[c460];
        __last448 = ptr461;
          while (1) {
            int* t462 = __pivot449;
            int* t463 = __last448;
            _Bool r464 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp450, t462, t463);
            if (!r464) break;
            int* t465 = __last448;
            int c466 = -1;
            int* ptr467 = &(t465)[c466];
            __last448 = ptr467;
          }
          int* t468 = __first447;
          int* t469 = __last448;
          _Bool c470 = ((t468 < t469)) ? 1 : 0;
          _Bool u471 = !c470;
          if (u471) {
            int* t472 = __first447;
            __retval451 = t472;
            int* t473 = __retval451;
            int* ret_val474 = t473;
            return ret_val474;
          }
        int* t475 = __first447;
        int* t476 = __last448;
        void_std__iter_swap_int___int__(t475, t476);
        int* t477 = __first447;
        int c478 = 1;
        int* ptr479 = &(t477)[c478];
        __first447 = ptr479;
    }
  abort();
}

// function: _ZSt27__unguarded_partition_pivotIPiN9__gnu_cxx5__ops15_Iter_less_iterEET_S4_S4_T0_
int* int__std____unguarded_partition_pivot_int_____gnu_cxx____ops___Iter_less_iter_(int* v480, int* v481, struct __gnu_cxx____ops___Iter_less_iter v482) {
bb483:
  int* __first484;
  int* __last485;
  struct __gnu_cxx____ops___Iter_less_iter __comp486;
  int* __retval487;
  int* __mid488;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0489;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp1490;
  __first484 = v480;
  __last485 = v481;
  __comp486 = v482;
  int* t491 = __first484;
  int* t492 = __last485;
  int* t493 = __first484;
  long diff494 = t492 - t493;
  long c495 = 2;
  long b496 = diff494 / c495;
  int* ptr497 = &(t491)[b496];
  __mid488 = ptr497;
  int* t498 = __first484;
  int* t499 = __first484;
  int c500 = 1;
  int* ptr501 = &(t499)[c500];
  int* t502 = __mid488;
  int* t503 = __last485;
  int c504 = -1;
  int* ptr505 = &(t503)[c504];
  struct __gnu_cxx____ops___Iter_less_iter t506 = agg_tmp0489;
  void_std____move_median_to_first_int_____gnu_cxx____ops___Iter_less_iter_(t498, ptr501, t502, ptr505, t506);
  int* t507 = __first484;
  int c508 = 1;
  int* ptr509 = &(t507)[c508];
  int* t510 = __last485;
  int* t511 = __first484;
  struct __gnu_cxx____ops___Iter_less_iter t512 = agg_tmp1490;
  int* r513 = int__std____unguarded_partition_int_____gnu_cxx____ops___Iter_less_iter_(ptr509, t510, t511, t512);
  __retval487 = r513;
  int* t514 = __retval487;
  return t514;
}

// function: _ZSt16__introsort_loopIPilN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_T0_T1_
void void_std____introsort_loop_int___long____gnu_cxx____ops___Iter_less_iter_(int* v515, int* v516, long v517, struct __gnu_cxx____ops___Iter_less_iter v518) {
bb519:
  int* __first520;
  int* __last521;
  long __depth_limit522;
  struct __gnu_cxx____ops___Iter_less_iter __comp523;
  __first520 = v515;
  __last521 = v516;
  __depth_limit522 = v517;
  __comp523 = v518;
    while (1) {
      int* t524 = __last521;
      int* t525 = __first520;
      long diff526 = t524 - t525;
      long c527 = 16;
      _Bool c528 = ((diff526 > c527)) ? 1 : 0;
      if (!c528) break;
        int* __cut529;
        struct __gnu_cxx____ops___Iter_less_iter agg_tmp1530;
        struct __gnu_cxx____ops___Iter_less_iter agg_tmp2531;
          long t532 = __depth_limit522;
          long c533 = 0;
          _Bool c534 = ((t532 == c533)) ? 1 : 0;
          if (c534) {
            struct __gnu_cxx____ops___Iter_less_iter agg_tmp0535;
            int* t536 = __first520;
            int* t537 = __last521;
            int* t538 = __last521;
            struct __gnu_cxx____ops___Iter_less_iter t539 = agg_tmp0535;
            void_std____partial_sort_int_____gnu_cxx____ops___Iter_less_iter_(t536, t537, t538, t539);
            return;
          }
        long t540 = __depth_limit522;
        long u541 = t540 - 1;
        __depth_limit522 = u541;
        int* t542 = __first520;
        int* t543 = __last521;
        struct __gnu_cxx____ops___Iter_less_iter t544 = agg_tmp1530;
        int* r545 = int__std____unguarded_partition_pivot_int_____gnu_cxx____ops___Iter_less_iter_(t542, t543, t544);
        __cut529 = r545;
        int* t546 = __cut529;
        int* t547 = __last521;
        long t548 = __depth_limit522;
        struct __gnu_cxx____ops___Iter_less_iter t549 = agg_tmp2531;
        void_std____introsort_loop_int___long____gnu_cxx____ops___Iter_less_iter_(t546, t547, t548, t549);
        int* t550 = __cut529;
        __last521 = t550;
    }
  return;
}

// function: _ZSt13__countl_zeroImEiT_
int int_std____countl_zero_unsigned_long_(unsigned long v551) {
bb552:
  unsigned long __x553;
  int __retval554;
  int _Nd555;
  __x553 = v551;
  int c556 = 64;
  _Nd555 = c556;
  unsigned long t557 = __x553;
  unsigned long clz558 = (unsigned long)__builtin_clzll((unsigned long)t557);
  int cast559 = (int)clz558;
  unsigned long c560 = 0;
  _Bool c561 = ((t557 == c560)) ? 1 : 0;
  int t562 = _Nd555;
  int sel563 = c561 ? t562 : cast559;
  __retval554 = sel563;
  int t564 = __retval554;
  return t564;
}

// function: _ZSt11__bit_widthImEiT_
int int_std____bit_width_unsigned_long_(unsigned long v565) {
bb566:
  unsigned long __x567;
  int __retval568;
  int _Nd569;
  __x567 = v565;
  int c570 = 64;
  _Nd569 = c570;
  int t571 = _Nd569;
  unsigned long t572 = __x567;
  int r573 = int_std____countl_zero_unsigned_long_(t572);
  int b574 = t571 - r573;
  __retval568 = b574;
  int t575 = __retval568;
  return t575;
}

// function: _ZSt4__lgIlET_S0_
long long_std____lg_long_(long v576) {
bb577:
  long __n578;
  long __retval579;
  __n578 = v576;
  long t580 = __n578;
  unsigned long cast581 = (unsigned long)t580;
  int r582 = int_std____bit_width_unsigned_long_(cast581);
  int c583 = 1;
  int b584 = r582 - c583;
  long cast585 = (long)b584;
  __retval579 = cast585;
  long t586 = __retval579;
  return t586;
}

// function: _ZSt12__niter_wrapIPiET_RKS1_S1_
int* int__std____niter_wrap_int__(int** v587, int* v588) {
bb589:
  int** unnamed590;
  int* __res591;
  int* __retval592;
  unnamed590 = v587;
  __res591 = v588;
  int* t593 = __res591;
  __retval592 = t593;
  int* t594 = __retval592;
  return t594;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb595:
  _Bool __retval596;
    _Bool c597 = 0;
    __retval596 = c597;
    _Bool t598 = __retval596;
    return t598;
  abort();
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v599, int* v600, struct std__random_access_iterator_tag v601) {
bb602:
  int* __first603;
  int* __last604;
  struct std__random_access_iterator_tag unnamed605;
  long __retval606;
  __first603 = v599;
  __last604 = v600;
  unnamed605 = v601;
  int* t607 = __last604;
  int* t608 = __first603;
  long diff609 = t607 - t608;
  __retval606 = diff609;
  long t610 = __retval606;
  return t610;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v611) {
bb612:
  int** unnamed613;
  struct std__random_access_iterator_tag __retval614;
  unnamed613 = v611;
  struct std__random_access_iterator_tag t615 = __retval614;
  return t615;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v616, int* v617) {
bb618:
  int* __first619;
  int* __last620;
  long __retval621;
  struct std__random_access_iterator_tag agg_tmp0622;
  __first619 = v616;
  __last620 = v617;
  int* t623 = __first619;
  int* t624 = __last620;
  struct std__random_access_iterator_tag r625 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first619);
  agg_tmp0622 = r625;
  struct std__random_access_iterator_tag t626 = agg_tmp0622;
  long r627 = std__iterator_traits_int____difference_type_std____distance_int__(t623, t624, t626);
  __retval621 = r627;
  long t628 = __retval621;
  return t628;
}

// function: _ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int___long_(int** v629, long v630, struct std__random_access_iterator_tag v631) {
bb632:
  int** __i633;
  long __n634;
  struct std__random_access_iterator_tag unnamed635;
  __i633 = v629;
  __n634 = v630;
  unnamed635 = v631;
    long t636 = __n634;
    _Bool isconst637 = 0;
    _Bool ternary638;
    if (isconst637) {
      long t639 = __n634;
      long c640 = 1;
      _Bool c641 = ((t639 == c640)) ? 1 : 0;
      ternary638 = (_Bool)c641;
    } else {
      _Bool c642 = 0;
      ternary638 = (_Bool)c642;
    }
    if (ternary638) {
      int** t643 = __i633;
      int* t644 = *t643;
      int c645 = 1;
      int* ptr646 = &(t644)[c645];
      *t643 = ptr646;
    } else {
        long t647 = __n634;
        _Bool isconst648 = 0;
        _Bool ternary649;
        if (isconst648) {
          long t650 = __n634;
          long c651 = -1;
          _Bool c652 = ((t650 == c651)) ? 1 : 0;
          ternary649 = (_Bool)c652;
        } else {
          _Bool c653 = 0;
          ternary649 = (_Bool)c653;
        }
        if (ternary649) {
          int** t654 = __i633;
          int* t655 = *t654;
          int c656 = -1;
          int* ptr657 = &(t655)[c656];
          *t654 = ptr657;
        } else {
          long t658 = __n634;
          int** t659 = __i633;
          int* t660 = *t659;
          int* ptr661 = &(t660)[t658];
          *t659 = ptr661;
        }
    }
  return;
}

// function: _ZSt7advanceIPilEvRT_T0_
void void_std__advance_int___long_(int** v662, long v663) {
bb664:
  int** __i665;
  long __n666;
  long __d667;
  struct std__random_access_iterator_tag agg_tmp0668;
  __i665 = v662;
  __n666 = v663;
  long t669 = __n666;
  __d667 = t669;
  int** t670 = __i665;
  long t671 = __d667;
  int** t672 = __i665;
  struct std__random_access_iterator_tag r673 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t672);
  agg_tmp0668 = r673;
  struct std__random_access_iterator_tag t674 = agg_tmp0668;
  void_std____advance_int___long_(t670, t671, t674);
  return;
}

// function: _ZSt12__assign_oneILb1EPiS0_EvRT0_RT1_
void void_std____assign_one_true__int___int__(int** v675, int** v676) {
bb677:
  int** __out678;
  int** __in679;
  __out678 = v675;
  __in679 = v676;
    int** t680 = __in679;
    int* t681 = *t680;
    int t682 = *t681;
    int** t683 = __out678;
    int* t684 = *t683;
    *t684 = t682;
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a2_true__int___int__(int* v685, int* v686, int* v687) {
bb688:
  int* __first689;
  int* __last690;
  int* __result691;
  int* __retval692;
  __first689 = v685;
  __last690 = v686;
  __result691 = v687;
      _Bool r693 = std__is_constant_evaluated();
      if (r693) {
      } else {
          long __n694;
          int* t695 = __first689;
          int* t696 = __last690;
          long r697 = std__iterator_traits_int____difference_type_std__distance_int__(t695, t696);
          __n694 = r697;
          long t698 = __n694;
          long u699 = -t698;
          void_std__advance_int___long_(&__result691, u699);
            long t700 = __n694;
            long c701 = 1;
            _Bool c702 = ((t700 > c701)) ? 1 : 0;
            if (c702) {
              int* t703 = __result691;
              void* cast704 = (void*)t703;
              int* t705 = __first689;
              void* cast706 = (void*)t705;
              long t707 = __n694;
              unsigned long cast708 = (unsigned long)t707;
              unsigned long c709 = 4;
              unsigned long b710 = cast708 * c709;
              void* r711 = memmove(cast704, cast706, b710);
            } else {
                long t712 = __n694;
                long c713 = 1;
                _Bool c714 = ((t712 == c713)) ? 1 : 0;
                if (c714) {
                  void_std____assign_one_true__int___int__(&__result691, &__first689);
                }
            }
          int* t715 = __result691;
          __retval692 = t715;
          int* t716 = __retval692;
          return t716;
      }
    while (1) {
      int* t717 = __first689;
      int* t718 = __last690;
      _Bool c719 = ((t717 != t718)) ? 1 : 0;
      if (!c719) break;
        int* t720 = __last690;
        int c721 = -1;
        int* ptr722 = &(t720)[c721];
        __last690 = ptr722;
        int* t723 = __result691;
        int c724 = -1;
        int* ptr725 = &(t723)[c724];
        __result691 = ptr725;
        void_std____assign_one_true__int___int__(&__result691, &__last690);
    }
  int* t726 = __result691;
  __retval692 = t726;
  int* t727 = __retval692;
  return t727;
}

// function: _ZSt23__copy_move_backward_a1ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a1_true__int___int__(int* v728, int* v729, int* v730) {
bb731:
  int* __first732;
  int* __last733;
  int* __result734;
  int* __retval735;
  __first732 = v728;
  __last733 = v729;
  __result734 = v730;
  int* t736 = __first732;
  int* t737 = __last733;
  int* t738 = __result734;
  int* r739 = int__std____copy_move_backward_a2_true__int___int__(t736, t737, t738);
  __retval735 = r739;
  int* t740 = __retval735;
  return t740;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v741) {
bb742:
  int* __it743;
  int* __retval744;
  __it743 = v741;
  int* t745 = __it743;
  __retval744 = t745;
  int* t746 = __retval744;
  return t746;
}

// function: _ZSt22__copy_move_backward_aILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a_true__int___int__(int* v747, int* v748, int* v749) {
bb750:
  int* __first751;
  int* __last752;
  int* __result753;
  int* __retval754;
  __first751 = v747;
  __last752 = v748;
  __result753 = v749;
  int* t755 = __first751;
  int* r756 = int__std____niter_base_int__(t755);
  int* t757 = __last752;
  int* r758 = int__std____niter_base_int__(t757);
  int* t759 = __result753;
  int* r760 = int__std____niter_base_int__(t759);
  int* r761 = int__std____copy_move_backward_a1_true__int___int__(r756, r758, r760);
  int* r762 = int__std____niter_wrap_int__(&__result753, r761);
  __retval754 = r762;
  int* t763 = __retval754;
  return t763;
}

// function: _ZSt12__miter_baseIPiET_S1_
int* int__std____miter_base_int__(int* v764) {
bb765:
  int* __it766;
  int* __retval767;
  __it766 = v764;
  int* t768 = __it766;
  __retval767 = t768;
  int* t769 = __retval767;
  return t769;
}

// function: _ZSt13move_backwardIPiS0_ET0_T_S2_S1_
int* int__std__move_backward_int___int__(int* v770, int* v771, int* v772) {
bb773:
  int* __first774;
  int* __last775;
  int* __result776;
  int* __retval777;
  __first774 = v770;
  __last775 = v771;
  __result776 = v772;
  int* t778 = __first774;
  int* r779 = int__std____miter_base_int__(t778);
  int* t780 = __last775;
  int* r781 = int__std____miter_base_int__(t780);
  int* t782 = __result776;
  int* r783 = int__std____copy_move_backward_a_true__int___int__(r779, r781, t782);
  __retval777 = r783;
  int* t784 = __retval777;
  return t784;
}

// function: _ZNK9__gnu_cxx5__ops14_Val_less_iterclIiPiEEbRT_T0_
_Bool bool___gnu_cxx____ops___Val_less_iter__operator___int__int___int___int___const(struct __gnu_cxx____ops___Val_less_iter* v785, int* v786, int* v787) {
bb788:
  struct __gnu_cxx____ops___Val_less_iter* this789;
  int* __val790;
  int* __it791;
  _Bool __retval792;
  this789 = v785;
  __val790 = v786;
  __it791 = v787;
  struct __gnu_cxx____ops___Val_less_iter* t793 = this789;
  int* t794 = __val790;
  int t795 = *t794;
  int* t796 = __it791;
  int t797 = *t796;
  _Bool c798 = ((t795 < t797)) ? 1 : 0;
  __retval792 = c798;
  _Bool t799 = __retval792;
  return t799;
}

// function: _ZSt25__unguarded_linear_insertIPiN9__gnu_cxx5__ops14_Val_less_iterEEvT_T0_
void void_std____unguarded_linear_insert_int_____gnu_cxx____ops___Val_less_iter_(int* v800, struct __gnu_cxx____ops___Val_less_iter v801) {
bb802:
  int* __last803;
  struct __gnu_cxx____ops___Val_less_iter __comp804;
  int __val805;
  int* __next806;
  __last803 = v800;
  __comp804 = v801;
  int* t807 = __last803;
  int t808 = *t807;
  __val805 = t808;
  int* t809 = __last803;
  __next806 = t809;
  int* t810 = __next806;
  int c811 = -1;
  int* ptr812 = &(t810)[c811];
  __next806 = ptr812;
    while (1) {
      int* t813 = __next806;
      _Bool r814 = bool___gnu_cxx____ops___Val_less_iter__operator___int__int___int___int___const(&__comp804, &__val805, t813);
      if (!r814) break;
        int* t815 = __next806;
        int t816 = *t815;
        int* t817 = __last803;
        *t817 = t816;
        int* t818 = __next806;
        __last803 = t818;
        int* t819 = __next806;
        int c820 = -1;
        int* ptr821 = &(t819)[c820];
        __next806 = ptr821;
    }
  int t822 = __val805;
  int* t823 = __last803;
  *t823 = t822;
  return;
}

// function: _ZN9__gnu_cxx5__ops15__val_comp_iterENS0_15_Iter_less_iterE
struct __gnu_cxx____ops___Val_less_iter __gnu_cxx____ops____val_comp_iter(struct __gnu_cxx____ops___Iter_less_iter v824) {
bb825:
  struct __gnu_cxx____ops___Iter_less_iter unnamed826;
  struct __gnu_cxx____ops___Val_less_iter __retval827;
  unnamed826 = v824;
  struct __gnu_cxx____ops___Val_less_iter t828 = __retval827;
  return t828;
}

// function: _ZSt16__insertion_sortIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_T0_
void void_std____insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* v829, int* v830, struct __gnu_cxx____ops___Iter_less_iter v831) {
bb832:
  int* __first833;
  int* __last834;
  struct __gnu_cxx____ops___Iter_less_iter __comp835;
  __first833 = v829;
  __last834 = v830;
  __comp835 = v831;
    int* t836 = __first833;
    int* t837 = __last834;
    _Bool c838 = ((t836 == t837)) ? 1 : 0;
    if (c838) {
      return;
    }
    int* __i839;
    int* t840 = __first833;
    int c841 = 1;
    int* ptr842 = &(t840)[c841];
    __i839 = ptr842;
    while (1) {
      int* t844 = __i839;
      int* t845 = __last834;
      _Bool c846 = ((t844 != t845)) ? 1 : 0;
      if (!c846) break;
          int* t847 = __i839;
          int* t848 = __first833;
          _Bool r849 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp835, t847, t848);
          if (r849) {
            int __val850;
            int* t851 = __i839;
            int t852 = *t851;
            __val850 = t852;
            int* t853 = __first833;
            int* t854 = __i839;
            int* t855 = __i839;
            int c856 = 1;
            int* ptr857 = &(t855)[c856];
            int* r858 = int__std__move_backward_int___int__(t853, t854, ptr857);
            int t859 = __val850;
            int* t860 = __first833;
            *t860 = t859;
          } else {
            struct __gnu_cxx____ops___Val_less_iter agg_tmp0861;
            struct __gnu_cxx____ops___Iter_less_iter agg_tmp1862;
            int* t863 = __i839;
            struct __gnu_cxx____ops___Iter_less_iter t864 = agg_tmp1862;
            struct __gnu_cxx____ops___Val_less_iter r865 = __gnu_cxx____ops____val_comp_iter(t864);
            agg_tmp0861 = r865;
            struct __gnu_cxx____ops___Val_less_iter t866 = agg_tmp0861;
            void_std____unguarded_linear_insert_int_____gnu_cxx____ops___Val_less_iter_(t863, t866);
          }
    for_step843: ;
      int* t867 = __i839;
      int c868 = 1;
      int* ptr869 = &(t867)[c868];
      __i839 = ptr869;
    }
  return;
}

// function: _ZSt26__unguarded_insertion_sortIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_T0_
void void_std____unguarded_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* v870, int* v871, struct __gnu_cxx____ops___Iter_less_iter v872) {
bb873:
  int* __first874;
  int* __last875;
  struct __gnu_cxx____ops___Iter_less_iter __comp876;
  __first874 = v870;
  __last875 = v871;
  __comp876 = v872;
    int* __i877;
    struct __gnu_cxx____ops___Val_less_iter agg_tmp0878;
    struct __gnu_cxx____ops___Iter_less_iter agg_tmp1879;
    int* t880 = __first874;
    __i877 = t880;
    while (1) {
      int* t882 = __i877;
      int* t883 = __last875;
      _Bool c884 = ((t882 != t883)) ? 1 : 0;
      if (!c884) break;
      int* t885 = __i877;
      struct __gnu_cxx____ops___Iter_less_iter t886 = agg_tmp1879;
      struct __gnu_cxx____ops___Val_less_iter r887 = __gnu_cxx____ops____val_comp_iter(t886);
      agg_tmp0878 = r887;
      struct __gnu_cxx____ops___Val_less_iter t888 = agg_tmp0878;
      void_std____unguarded_linear_insert_int_____gnu_cxx____ops___Val_less_iter_(t885, t888);
    for_step881: ;
      int* t889 = __i877;
      int c890 = 1;
      int* ptr891 = &(t889)[c890];
      __i877 = ptr891;
    }
  return;
}

// function: _ZSt22__final_insertion_sortIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_T0_
void void_std____final_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* v892, int* v893, struct __gnu_cxx____ops___Iter_less_iter v894) {
bb895:
  int* __first896;
  int* __last897;
  struct __gnu_cxx____ops___Iter_less_iter __comp898;
  __first896 = v892;
  __last897 = v893;
  __comp898 = v894;
    int* t899 = __last897;
    int* t900 = __first896;
    long diff901 = t899 - t900;
    long c902 = 16;
    _Bool c903 = ((diff901 > c902)) ? 1 : 0;
    if (c903) {
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp0904;
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp1905;
      int* t906 = __first896;
      int* t907 = __first896;
      int c908 = 16;
      int* ptr909 = &(t907)[c908];
      struct __gnu_cxx____ops___Iter_less_iter t910 = agg_tmp0904;
      void_std____insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(t906, ptr909, t910);
      int* t911 = __first896;
      int c912 = 16;
      int* ptr913 = &(t911)[c912];
      int* t914 = __last897;
      struct __gnu_cxx____ops___Iter_less_iter t915 = agg_tmp1905;
      void_std____unguarded_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(ptr913, t914, t915);
    } else {
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp2916;
      int* t917 = __first896;
      int* t918 = __last897;
      struct __gnu_cxx____ops___Iter_less_iter t919 = agg_tmp2916;
      void_std____insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(t917, t918, t919);
    }
  return;
}

// function: _ZSt6__sortIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_T0_
void void_std____sort_int_____gnu_cxx____ops___Iter_less_iter_(int* v920, int* v921, struct __gnu_cxx____ops___Iter_less_iter v922) {
bb923:
  int* __first924;
  int* __last925;
  struct __gnu_cxx____ops___Iter_less_iter __comp926;
  __first924 = v920;
  __last925 = v921;
  __comp926 = v922;
    int* t927 = __first924;
    int* t928 = __last925;
    _Bool c929 = ((t927 != t928)) ? 1 : 0;
    if (c929) {
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp0930;
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp1931;
      int* t932 = __first924;
      int* t933 = __last925;
      int* t934 = __last925;
      int* t935 = __first924;
      long diff936 = t934 - t935;
      long r937 = long_std____lg_long_(diff936);
      long c938 = 2;
      long b939 = r937 * c938;
      struct __gnu_cxx____ops___Iter_less_iter t940 = agg_tmp0930;
      void_std____introsort_loop_int___long____gnu_cxx____ops___Iter_less_iter_(t932, t933, b939, t940);
      int* t941 = __first924;
      int* t942 = __last925;
      struct __gnu_cxx____ops___Iter_less_iter t943 = agg_tmp1931;
      void_std____final_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(t941, t942, t943);
    }
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_less_iterEv
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter() {
bb944:
  struct __gnu_cxx____ops___Iter_less_iter __retval945;
  struct __gnu_cxx____ops___Iter_less_iter t946 = __retval945;
  return t946;
}

// function: _ZSt4sortIPiEvT_S1_
void void_std__sort_int__(int* v947, int* v948) {
bb949:
  int* __first950;
  int* __last951;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0952;
  __first950 = v947;
  __last951 = v948;
  int* t953 = __first950;
  int* t954 = __last951;
  struct __gnu_cxx____ops___Iter_less_iter r955 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp0952 = r955;
  struct __gnu_cxx____ops___Iter_less_iter t956 = agg_tmp0952;
  void_std____sort_int_____gnu_cxx____ops___Iter_less_iter_(t953, t954, t956);
  return;
}

// function: _ZSt9__reverseIPiEvT_S1_St26random_access_iterator_tag
void void_std____reverse_int__(int* v957, int* v958, struct std__random_access_iterator_tag v959) {
bb960:
  int* __first961;
  int* __last962;
  struct std__random_access_iterator_tag unnamed963;
  __first961 = v957;
  __last962 = v958;
  unnamed963 = v959;
    int* t964 = __first961;
    int* t965 = __last962;
    _Bool c966 = ((t964 == t965)) ? 1 : 0;
    if (c966) {
      return;
    }
  int* t967 = __last962;
  int c968 = -1;
  int* ptr969 = &(t967)[c968];
  __last962 = ptr969;
    while (1) {
      int* t970 = __first961;
      int* t971 = __last962;
      _Bool c972 = ((t970 < t971)) ? 1 : 0;
      if (!c972) break;
        int* t973 = __first961;
        int* t974 = __last962;
        void_std__iter_swap_int___int__(t973, t974);
        int* t975 = __first961;
        int c976 = 1;
        int* ptr977 = &(t975)[c976];
        __first961 = ptr977;
        int* t978 = __last962;
        int c979 = -1;
        int* ptr980 = &(t978)[c979];
        __last962 = ptr980;
    }
  return;
}

// function: _ZSt18__next_permutationIPiN9__gnu_cxx5__ops15_Iter_less_iterEEbT_S4_T0_
_Bool bool_std____next_permutation_int_____gnu_cxx____ops___Iter_less_iter_(int* v981, int* v982, struct __gnu_cxx____ops___Iter_less_iter v983) {
bb984:
  int* __first985;
  int* __last986;
  struct __gnu_cxx____ops___Iter_less_iter __comp987;
  _Bool __retval988;
  int* __i989;
  __first985 = v981;
  __last986 = v982;
  __comp987 = v983;
    int* t990 = __first985;
    int* t991 = __last986;
    _Bool c992 = ((t990 == t991)) ? 1 : 0;
    if (c992) {
      _Bool c993 = 0;
      __retval988 = c993;
      _Bool t994 = __retval988;
      return t994;
    }
  int* t995 = __first985;
  __i989 = t995;
  int* t996 = __i989;
  int c997 = 1;
  int* ptr998 = &(t996)[c997];
  __i989 = ptr998;
    int* t999 = __i989;
    int* t1000 = __last986;
    _Bool c1001 = ((t999 == t1000)) ? 1 : 0;
    if (c1001) {
      _Bool c1002 = 0;
      __retval988 = c1002;
      _Bool t1003 = __retval988;
      return t1003;
    }
  int* t1004 = __last986;
  __i989 = t1004;
  int* t1005 = __i989;
  int c1006 = -1;
  int* ptr1007 = &(t1005)[c1006];
  __i989 = ptr1007;
    while (1) {
      _Bool c1009 = 1;
      if (!c1009) break;
        int* __ii1010;
        int* t1011 = __i989;
        __ii1010 = t1011;
        int* t1012 = __i989;
        int c1013 = -1;
        int* ptr1014 = &(t1012)[c1013];
        __i989 = ptr1014;
          int* t1015 = __i989;
          int* t1016 = __ii1010;
          _Bool r1017 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp987, t1015, t1016);
          if (r1017) {
            int* __j1018;
            struct std__random_access_iterator_tag agg_tmp01019;
            int* t1020 = __last986;
            __j1018 = t1020;
              while (1) {
                int* t1021 = __i989;
                int* t1022 = __j1018;
                int c1023 = -1;
                int* ptr1024 = &(t1022)[c1023];
                __j1018 = ptr1024;
                _Bool r1025 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp987, t1021, ptr1024);
                _Bool u1026 = !r1025;
                if (!u1026) break;
              }
            int* t1027 = __i989;
            int* t1028 = __j1018;
            void_std__iter_swap_int___int__(t1027, t1028);
            int* t1029 = __ii1010;
            int* t1030 = __last986;
            struct std__random_access_iterator_tag r1031 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first985);
            agg_tmp01019 = r1031;
            struct std__random_access_iterator_tag t1032 = agg_tmp01019;
            void_std____reverse_int__(t1029, t1030, t1032);
            _Bool c1033 = 1;
            __retval988 = c1033;
            _Bool t1034 = __retval988;
            _Bool ret_val1035 = t1034;
            return ret_val1035;
          }
          int* t1036 = __i989;
          int* t1037 = __first985;
          _Bool c1038 = ((t1036 == t1037)) ? 1 : 0;
          if (c1038) {
            struct std__random_access_iterator_tag agg_tmp11039;
            int* t1040 = __first985;
            int* t1041 = __last986;
            struct std__random_access_iterator_tag r1042 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first985);
            agg_tmp11039 = r1042;
            struct std__random_access_iterator_tag t1043 = agg_tmp11039;
            void_std____reverse_int__(t1040, t1041, t1043);
            _Bool c1044 = 0;
            __retval988 = c1044;
            _Bool t1045 = __retval988;
            _Bool ret_val1046 = t1045;
            return ret_val1046;
          }
    for_step1008: ;
    }
  abort();
}

// function: _ZSt16next_permutationIPiEbT_S1_
_Bool bool_std__next_permutation_int__(int* v1047, int* v1048) {
bb1049:
  int* __first1050;
  int* __last1051;
  _Bool __retval1052;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp01053;
  __first1050 = v1047;
  __last1051 = v1048;
  int* t1054 = __first1050;
  int* t1055 = __last1051;
  struct __gnu_cxx____ops___Iter_less_iter r1056 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp01053 = r1056;
  struct __gnu_cxx____ops___Iter_less_iter t1057 = agg_tmp01053;
  _Bool r1058 = bool_std____next_permutation_int_____gnu_cxx____ops___Iter_less_iter_(t1054, t1055, t1057);
  __retval1052 = r1058;
  _Bool t1059 = __retval1052;
  return t1059;
}

// function: main
int main() {
bb1060:
  int __retval1061;
  int myints1062[3];
  int c1063 = 0;
  __retval1061 = c1063;
  // array copy
  __builtin_memcpy(myints1062, __const_main_myints, (unsigned long)3 * sizeof(__const_main_myints[0]));
  char* cast1064 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r1065 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1064);
  int* cast1066 = (int*)&(myints1062);
  int* cast1067 = (int*)&(myints1062);
  int c1068 = 3;
  int* ptr1069 = &(cast1067)[c1068];
  void_std__sort_int__(cast1066, ptr1069);
  int* cast1070 = (int*)&(myints1062);
  int* cast1071 = (int*)&(myints1062);
  int c1072 = 3;
  int* ptr1073 = &(cast1071)[c1072];
  _Bool r1074 = bool_std__next_permutation_int__(cast1070, ptr1073);
  long c1075 = 2;
  int t1076 = myints1062[c1075];
  int c1077 = 3;
  _Bool c1078 = ((t1076 == c1077)) ? 1 : 0;
  if (c1078) {
  } else {
    char* cast1079 = (char*)&(_str_1);
    char* c1080 = _str_2;
    unsigned int c1081 = 21;
    char* cast1082 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast1079, c1080, c1081, cast1082);
  }
  int c1083 = 0;
  __retval1061 = c1083;
  int t1084 = __retval1061;
  return t1084;
}

