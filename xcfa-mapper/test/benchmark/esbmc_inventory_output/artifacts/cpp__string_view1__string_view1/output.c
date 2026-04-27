// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::basic_string_view<char> { unsigned long long _M_len; char* _M_str; };

char _str[14] = "Hello, World!";
struct std::basic_ostream<char> _ZSt4cout;
char _str_1[18];
char _str_7[85] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/string_view";
char _str_8[124];
char _str_9[21] = "__pos < this->_M_len";
char _str_2[18];
char _str_3[20];
char _str_4[21] = "Is emptyView empty? ";
char _str_5[4] = "Yes";
char _str_6[3] = "No";
// function: _ZNSt17basic_string_viewIcSt11char_traitsIcEEC2EPKc
void _ZNSt17basic_string_viewIcSt11char_traitsIcEEC2EPKc(struct std::basic_string_view<char>* v0, char* v1) {
bb2:
  struct std::basic_string_view<char>* this3;
  char* __str4;
  this3 = v0;
  __str4 = v1;
  struct std::basic_string_view<char>* t5 = this3;
  char* t6 = __str4;
  unsigned long long r7 = std__char_traits_char___length(t6);
  *t5->_M_len = r7;
  char* t8 = __str4;
  *t5->_M_str = t8;
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZSt21__glibcxx_assert_failPKciS0_S0_
void std____glibcxx_assert_fail(char*, int, char*, char*);

// function: _ZNKSt17basic_string_viewIcSt11char_traitsIcEEixEm
char* std__basic_string_view_char__std__char_traits_char_____operator___unsigned_long__const(struct std::basic_string_view<char>* v9, unsigned long long v10) {
bb11:
  struct std::basic_string_view<char>* this23;
  unsigned long long __pos24;
  char* __retval25;
  this23 = v9;
  __pos24 = v10;
  struct std::basic_string_view<char>* t26 = this23;
  goto bb12;
bb12:
  goto bb14;
bb13:
  _Bool c27 = 0;
  if (c27) goto bb14; else goto bb21;
bb14:
  goto bb15;
bb15:
  goto bb16;
bb16:
  unsigned long long t28 = __pos24;
  unsigned long long t29 = *t26->_M_len;
  _Bool c30 = (t28 < t29) ? 1 : 0;
  _Bool u31 = !c30;
  if (u31) goto bb17; else goto bb18;
bb17:
  char* cast32 = (char*)_str_7;
  int c33 = 260;
  char* cast34 = (char*)_str_8;
  char* cast35 = (char*)_str_9;
  std____glibcxx_assert_fail(cast32, c33, cast34, cast35);
  goto bb18;
bb18:
  goto bb19;
bb19:
  goto bb20;
bb20:
  goto bb13;
bb21:
  goto bb22;
bb22:
  char* t36 = *t26->_M_str;
  unsigned long long t37 = __pos24;
  char* ptr38 = t36 + t37;
  __retval25 = ptr38;
  char* t39 = __retval25;
  return t39;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZNSolsEm
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, unsigned long long);

// function: _ZNKSt17basic_string_viewIcSt11char_traitsIcEE6lengthEv
unsigned long long std__basic_string_view_char__std__char_traits_char_____length___const(struct std::basic_string_view<char>* v40) {
bb41:
  struct std::basic_string_view<char>* this42;
  unsigned long long __retval43;
  this42 = v40;
  struct std::basic_string_view<char>* t44 = this42;
  unsigned long long t45 = *t44->_M_len;
  __retval43 = t45;
  unsigned long long t46 = __retval43;
  return t46;
}

// function: _ZNSt17basic_string_viewIcSt11char_traitsIcEEC2Ev
void _ZNSt17basic_string_viewIcSt11char_traitsIcEEC2Ev(struct std::basic_string_view<char>* v47) {
bb48:
  struct std::basic_string_view<char>* this49;
  this49 = v47;
  struct std::basic_string_view<char>* t50 = this49;
  int c51 = 0;
  unsigned long long cast52 = (unsigned long long)c51;
  *t50->_M_len = cast52;
  char* c53 = NULL;
  *t50->_M_str = c53;
  return;
}

// function: _ZNKSt17basic_string_viewIcSt11char_traitsIcEE5emptyEv
_Bool std__basic_string_view_char__std__char_traits_char_____empty___const(struct std::basic_string_view<char>* v54) {
bb55:
  struct std::basic_string_view<char>* this56;
  _Bool __retval57;
  this56 = v54;
  struct std::basic_string_view<char>* t58 = this56;
  unsigned long long t59 = *t58->_M_len;
  int c60 = 0;
  unsigned long long cast61 = (unsigned long long)c60;
  _Bool c62 = (t59 == cast61) ? 1 : 0;
  __retval57 = c62;
  _Bool t63 = __retval57;
  return t63;
}

// function: main
int main() {
bb64:
  int __retval65;
  struct std::basic_string_view<char> message66;
  struct std::basic_string_view<char> emptyView67;
  struct std::basic_string_view<char> otherMessage68;
  char* cast69 = (char*)_str;
  _ZNSt17basic_string_viewIcSt11char_traitsIcEEC2EPKc(&message66, cast69);
  struct std::basic_ostream<char>* g70 = &_ZSt4cout;
  char* cast71 = (char*)_str_1;
  struct std::basic_ostream<char>* r72 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g70, cast71);
  int c73 = 0;
  unsigned long long cast74 = (unsigned long long)c73;
  char* r75 = std__basic_string_view_char__std__char_traits_char_____operator___unsigned_long__const(&message66, cast74);
  char t76 = *r75;
  struct std::basic_ostream<char>* r77 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r72, t76);
  void* g78 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r79 = std__ostream__operator___std__ostream_____(r77, g78);
  struct std::basic_ostream<char>* g80 = &_ZSt4cout;
  char* cast81 = (char*)_str_2;
  struct std::basic_ostream<char>* r82 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g80, cast81);
  int c83 = 2;
  unsigned long long cast84 = (unsigned long long)c83;
  char* r85 = std__basic_string_view_char__std__char_traits_char_____operator___unsigned_long__const(&message66, cast84);
  char t86 = *r85;
  struct std::basic_ostream<char>* r87 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r82, t86);
  void* g88 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r89 = std__ostream__operator___std__ostream_____(r87, g88);
  struct std::basic_ostream<char>* g90 = &_ZSt4cout;
  char* cast91 = (char*)_str_3;
  struct std::basic_ostream<char>* r92 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g90, cast91);
  unsigned long long r93 = std__basic_string_view_char__std__char_traits_char_____length___const(&message66);
  struct std::basic_ostream<char>* r94 = std__ostream__operator__(r92, r93);
  void* g95 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r96 = std__ostream__operator___std__ostream_____(r94, g95);
  _ZNSt17basic_string_viewIcSt11char_traitsIcEEC2Ev(&emptyView67);
  struct std::basic_ostream<char>* g97 = &_ZSt4cout;
  char* cast98 = (char*)_str_4;
  struct std::basic_ostream<char>* r99 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g97, cast98);
  _Bool r100 = std__basic_string_view_char__std__char_traits_char_____empty___const(&emptyView67);
  char* cast101 = (char*)_str_5;
  char* cast102 = (char*)_str_6;
  char* sel103 = r100 ? cast101 : cast102;
  struct std::basic_ostream<char>* r104 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r99, sel103);
  void* g105 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r106 = std__ostream__operator___std__ostream_____(r104, g105);
  char* cast107 = (char*)_str;
  _ZNSt17basic_string_viewIcSt11char_traitsIcEEC2EPKc(&otherMessage68, cast107);
  int c108 = 0;
  __retval65 = c108;
  int t109 = __retval65;
  return t109;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb110:
  _Bool __retval111;
  int c112 = 0;
  int* cast113 = (int*)__retval111;
  *cast113 = c112;
  _Bool t114 = __retval111;
  return t114;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v115, char* v116) {
bb117:
  char* __c1118;
  char* __c2119;
  _Bool __retval120;
  __c1118 = v115;
  __c2119 = v116;
  char* t121 = __c1118;
  char t122 = *t121;
  int cast123 = (int)t122;
  char* t124 = __c2119;
  char t125 = *t124;
  int cast126 = (int)t125;
  _Bool c127 = (cast123 == cast126) ? 1 : 0;
  __retval120 = c127;
  _Bool t128 = __retval120;
  return t128;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long long __gnu_cxx__char_traits_char___length(char* v129) {
  _Bool v130;
bb131:
  char ref.tmp0139;
  char* __p140;
  unsigned long long __retval141;
  unsigned long long __i142;
  __p140 = v129;
  int c143 = 0;
  unsigned long long cast144 = (unsigned long long)c143;
  __i142 = cast144;
  goto bb132;
bb132:
  goto bb133;
bb133:
  goto bb134;
bb134:
  char* t145 = __p140;
  unsigned long long t146 = __i142;
  char* ptr147 = t145 + t146;
  char c148 = 0;
  ref.tmp0139 = c148;
  _Bool r149 = __gnu_cxx__char_traits_char___eq(ptr147, &ref.tmp0139);
  _Bool u150 = !r149;
  v130 = u150;
  goto bb135;
bb135:
  if (v130) goto bb136; else goto bb137;
bb136:
  unsigned long long t151 = __i142;
  unsigned long long u152 = ++t151;
  __i142 = u152;
  goto bb133;
bb137:
  goto bb138;
bb138:
  unsigned long long t153 = __i142;
  __retval141 = t153;
  unsigned long long t154 = __retval141;
  return t154;
}

// function: strlen
unsigned long long strlen(char*);

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long long std__char_traits_char___length(char* v155) {
bb156:
  char* __s161;
  unsigned long long __retval162;
  __s161 = v155;
  goto bb157;
bb157:
  _Bool r163 = std____is_constant_evaluated();
  if (r163) goto bb158; else goto bb159;
bb158:
  char* t164 = __s161;
  unsigned long long r165 = __gnu_cxx__char_traits_char___length(t164);
  __retval162 = r165;
  unsigned long long t166 = __retval162;
  return t166;
bb159:
  goto bb160;
bb160:
  char* t167 = __s161;
  unsigned long long r168 = strlen(t167);
  __retval162 = r168;
  unsigned long long t169 = __retval162;
  return t169;
}

