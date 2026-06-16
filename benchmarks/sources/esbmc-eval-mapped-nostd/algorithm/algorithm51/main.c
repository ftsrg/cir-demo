// Struct definitions (auto-parsed)
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ { void* _M_comp; };
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };

int __const_main_continent[4] = {10, 20, 30, 40};
int __const_main_container[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
char _str[55] = "includes(container,container+10,continent,continent+4)";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm51/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[67] = "includes(container,container+10,continent,continent+4, myfunction)";
_Bool myfunction(int p0, int p1);
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(struct __gnu_cxx____ops___Iter_less_iter* p0, int* p1, int* p2);
_Bool bool_std____includes_int___int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, int* p3, struct __gnu_cxx____ops___Iter_less_iter p4);
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter();
_Bool bool_std__includes_int___int__(int* p0, int* p1, int* p2, int* p3);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
_Bool bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator___int___int__(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* p0, int* p1, int* p2);
_Bool bool_std____includes_int___int_____gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____int___int___int___int_____gnu_cxx____ops___Iter_comp_iter_bool____(int* p0, int* p1, int* p2, int* p3, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ p4);
void __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* p0, void* p1);
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(void* p0);
_Bool bool_std__includes_int___int___bool_____int__int___int___int___int___int___bool____(int* p0, int* p1, int* p2, int* p3, void* p4);
int main();

// function: _Z10myfunctionii
_Bool myfunction(int v0, int v1) {
bb2: ;
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = ((t6 < t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: _ZNK9__gnu_cxx5__ops15_Iter_less_iterclIPiS3_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(struct __gnu_cxx____ops___Iter_less_iter* v10, int* v11, int* v12) {
bb13: ;
  struct __gnu_cxx____ops___Iter_less_iter* this14;
  int* __it115;
  int* __it216;
  _Bool __retval17;
  this14 = v10;
  __it115 = v11;
  __it216 = v12;
  struct __gnu_cxx____ops___Iter_less_iter* t18 = this14;
  int* t19 = __it115;
  int t20 = *t19;
  int* t21 = __it216;
  int t22 = *t21;
  _Bool c23 = ((t20 < t22)) ? 1 : 0;
  __retval17 = c23;
  _Bool t24 = __retval17;
  return t24;
}

// function: _ZSt10__includesIPiS0_N9__gnu_cxx5__ops15_Iter_less_iterEEbT_S4_T0_S5_T1_
_Bool bool_std____includes_int___int_____gnu_cxx____ops___Iter_less_iter_(int* v25, int* v26, int* v27, int* v28, struct __gnu_cxx____ops___Iter_less_iter v29) {
bb30: ;
  int* __first131;
  int* __last132;
  int* __first233;
  int* __last234;
  struct __gnu_cxx____ops___Iter_less_iter __comp35;
  _Bool __retval36;
  __first131 = v25;
  __last132 = v26;
  __first233 = v27;
  __last234 = v28;
  __comp35 = v29;
    while (1) {
      int* t37 = __first131;
      int* t38 = __last132;
      _Bool c39 = ((t37 != t38)) ? 1 : 0;
      _Bool ternary40;
      if (c39) {
        int* t41 = __first233;
        int* t42 = __last234;
        _Bool c43 = ((t41 != t42)) ? 1 : 0;
        ternary40 = (_Bool)c43;
      } else {
        _Bool c44 = 0;
        ternary40 = (_Bool)c44;
      }
      if (!ternary40) break;
          int* t45 = __first233;
          int* t46 = __first131;
          _Bool r47 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp35, t45, t46);
          if (r47) {
            _Bool c48 = 0;
            __retval36 = c48;
            _Bool t49 = __retval36;
            _Bool ret_val50 = t49;
            return ret_val50;
          }
          int* t51 = __first131;
          int* t52 = __first233;
          _Bool r53 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp35, t51, t52);
          _Bool u54 = !r53;
          if (u54) {
            int* t55 = __first233;
            int c56 = 1;
            int* ptr57 = &(t55)[c56];
            __first233 = ptr57;
          }
        int* t58 = __first131;
        int c59 = 1;
        int* ptr60 = &(t58)[c59];
        __first131 = ptr60;
    }
  int* t61 = __first233;
  int* t62 = __last234;
  _Bool c63 = ((t61 == t62)) ? 1 : 0;
  __retval36 = c63;
  _Bool t64 = __retval36;
  return t64;
}

// function: _ZN9__gnu_cxx5__ops16__iter_less_iterEv
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter() {
bb65: ;
  struct __gnu_cxx____ops___Iter_less_iter __retval66;
  struct __gnu_cxx____ops___Iter_less_iter t67 = __retval66;
  return t67;
}

// function: _ZSt8includesIPiS0_EbT_S1_T0_S2_
_Bool bool_std__includes_int___int__(int* v68, int* v69, int* v70, int* v71) {
bb72: ;
  int* __first173;
  int* __last174;
  int* __first275;
  int* __last276;
  _Bool __retval77;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp078;
  __first173 = v68;
  __last174 = v69;
  __first275 = v70;
  __last276 = v71;
  int* t79 = __first173;
  int* t80 = __last174;
  int* t81 = __first275;
  int* t82 = __last276;
  struct __gnu_cxx____ops___Iter_less_iter r83 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp078 = r83;
  struct __gnu_cxx____ops___Iter_less_iter t84 = agg_tmp078;
  _Bool r85 = bool_std____includes_int___int_____gnu_cxx____ops___Iter_less_iter_(t79, t80, t81, t82, t84);
  __retval77 = r85;
  _Bool t86 = __retval77;
  return t86;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEclIPiS6_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator___int___int__(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* v87, int* v88, int* v89) {
bb90: ;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* this91;
  int* __it192;
  int* __it293;
  _Bool __retval94;
  this91 = v87;
  __it192 = v88;
  __it293 = v89;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* t95 = this91;
  void* t96 = t95->_M_comp;
  int* t97 = __it192;
  int t98 = *t97;
  int* t99 = __it293;
  int t100 = *t99;
  _Bool r101 = ((_Bool (*)(int, int))t96)(t98, t100);
  __retval94 = r101;
  _Bool t102 = __retval94;
  return t102;
}

// function: _ZSt10__includesIPiS0_N9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEEEbT_S7_T0_S8_T1_
_Bool bool_std____includes_int___int_____gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____int___int___int___int_____gnu_cxx____ops___Iter_comp_iter_bool____(int* v103, int* v104, int* v105, int* v106, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ v107) {
bb108: ;
  int* __first1109;
  int* __last1110;
  int* __first2111;
  int* __last2112;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __comp113;
  _Bool __retval114;
  __first1109 = v103;
  __last1110 = v104;
  __first2111 = v105;
  __last2112 = v106;
  __comp113 = v107;
    while (1) {
      int* t115 = __first1109;
      int* t116 = __last1110;
      _Bool c117 = ((t115 != t116)) ? 1 : 0;
      _Bool ternary118;
      if (c117) {
        int* t119 = __first2111;
        int* t120 = __last2112;
        _Bool c121 = ((t119 != t120)) ? 1 : 0;
        ternary118 = (_Bool)c121;
      } else {
        _Bool c122 = 0;
        ternary118 = (_Bool)c122;
      }
      if (!ternary118) break;
          int* t123 = __first2111;
          int* t124 = __first1109;
          _Bool r125 = bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator___int___int__(&__comp113, t123, t124);
          if (r125) {
            _Bool c126 = 0;
            __retval114 = c126;
            _Bool t127 = __retval114;
            _Bool ret_val128 = t127;
            return ret_val128;
          }
          int* t129 = __first1109;
          int* t130 = __first2111;
          _Bool r131 = bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator___int___int__(&__comp113, t129, t130);
          _Bool u132 = !r131;
          if (u132) {
            int* t133 = __first2111;
            int c134 = 1;
            int* ptr135 = &(t133)[c134];
            __first2111 = ptr135;
          }
        int* t136 = __first1109;
        int c137 = 1;
        int* ptr138 = &(t136)[c137];
        __first1109 = ptr138;
    }
  int* t139 = __first2111;
  int* t140 = __last2112;
  _Bool c141 = ((t139 == t140)) ? 1 : 0;
  __retval114 = c141;
  _Bool t142 = __retval114;
  return t142;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEC2ES3_
void __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* v143, void* v144) {
bb145: ;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* this146;
  void* __comp147;
  this146 = v143;
  __comp147 = v144;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* t148 = this146;
  void* t149 = __comp147;
  t148->_M_comp = t149;
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_comp_iterIPFbiiEEENS0_15_Iter_comp_iterIT_EES5_
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(void* v150) {
bb151: ;
  void* __comp152;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __retval153;
  __comp152 = v150;
  void* t154 = __comp152;
  __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(&__retval153, t154);
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ t155 = __retval153;
  return t155;
}

// function: _ZSt8includesIPiS0_PFbiiEEbT_S3_T0_S4_T1_
_Bool bool_std__includes_int___int___bool_____int__int___int___int___int___int___bool____(int* v156, int* v157, int* v158, int* v159, void* v160) {
bb161: ;
  int* __first1162;
  int* __last1163;
  int* __first2164;
  int* __last2165;
  void* __comp166;
  _Bool __retval167;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ agg_tmp0168;
  __first1162 = v156;
  __last1163 = v157;
  __first2164 = v158;
  __last2165 = v159;
  __comp166 = v160;
  int* t169 = __first1162;
  int* t170 = __last1163;
  int* t171 = __first2164;
  int* t172 = __last2165;
  void* t173 = __comp166;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ r174 = __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(t173);
  agg_tmp0168 = r174;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ t175 = agg_tmp0168;
  _Bool r176 = bool_std____includes_int___int_____gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____int___int___int___int_____gnu_cxx____ops___Iter_comp_iter_bool____(t169, t170, t171, t172, t175);
  __retval167 = r176;
  _Bool t177 = __retval167;
  return t177;
}

// function: main
int main() {
bb178: ;
  int __retval179;
  int container180[10];
  int continent181[4];
  int c182 = 0;
  __retval179 = c182;
  // array copy
  __builtin_memcpy(container180, __const_main_container, (unsigned long)10 * sizeof(__const_main_container[0]));
  // array copy
  __builtin_memcpy(continent181, __const_main_continent, (unsigned long)4 * sizeof(__const_main_continent[0]));
  int* cast183 = (int*)&(container180);
  int* cast184 = (int*)&(container180);
  int c185 = 10;
  int* ptr186 = &(cast184)[c185];
  int* cast187 = (int*)&(continent181);
  int* cast188 = (int*)&(continent181);
  int c189 = 4;
  int* ptr190 = &(cast188)[c189];
  _Bool r191 = bool_std__includes_int___int__(cast183, ptr186, cast187, ptr190);
  if (r191) {
  } else {
    char* cast192 = (char*)&(_str);
    char* c193 = (char*)_str_1;
    unsigned int c194 = 23;
    char* cast195 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast192, c193, c194, cast195);
  }
  int* cast196 = (int*)&(container180);
  int* cast197 = (int*)&(container180);
  int c198 = 10;
  int* ptr199 = &(cast197)[c198];
  int* cast200 = (int*)&(continent181);
  int* cast201 = (int*)&(continent181);
  int c202 = 4;
  int* ptr203 = &(cast201)[c202];
  _Bool r204 = bool_std__includes_int___int___bool_____int__int___int___int___int___int___bool____(cast196, ptr199, cast200, ptr203, &myfunction);
  if (r204) {
  } else {
    char* cast205 = (char*)&(_str_2);
    char* c206 = (char*)_str_1;
    unsigned int c207 = 24;
    char* cast208 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast205, c206, c207, cast208);
  }
  int c209 = 0;
  __retval179 = c209;
  int t210 = __retval179;
  return t210;
}

