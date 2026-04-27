// Struct definitions (auto-parsed)
struct ClientData { unsigned char __placeholder; };
struct _Guard { struct std::__cxx11::basic_string<char>* _M_guarded; };
struct __mbstate_t { unsigned char __placeholder; };
union anon_1 { char _M_local_buf[16]; unsigned long long _M_allocated_capacity; };
struct std::_Setprecision { int _M_n; };
struct std::_Setw { int _M_n; };
struct std::__cxx11::basic_string<char>::_Alloc_hider { char* _M_p; };
struct std::__new_allocator<char> { unsigned char __placeholder; };
struct std::allocator<char> { unsigned char __placeholder; };
struct std::basic_fstream<char> { unsigned char __placeholder; };
struct std::basic_ios<char> { unsigned char __placeholder; };
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ofstream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::forward_iterator_tag { unsigned char __placeholder; };
struct std::fpos<__mbstate_t> { long long _M_off; struct __mbstate_t _M_state; };
struct std::ios_base { int _M_flags; };
struct std::random_access_iterator_tag { unsigned char __placeholder; };
struct std::__cxx11::basic_string<char> { struct std::__cxx11::basic_string<char>::_Alloc_hider _M_dataplus; union anon_1 field1; unsigned long long _M_string_length; union anon_1 field3; union anon_1 field4; union anon_1 field5; };

char _str[11] = "credit.dat";
struct std::basic_ostream<char> _ZSt4cerr;
char _str_1[26] = "File could not be opened.";
struct std::basic_ostream<char> _ZSt4cout;
char _str_3[19] = "\\0AEnter your choice";
char _str_4[44] = "1 - store a formatted text file of accounts";
char _str_5[36] = "    called \\22print.txt\\22 for printing";
char _str_6[22] = "2 - update an account";
char _str_7[22] = "3 - add a new account";
char _str_8[22] = "4 - delete an account";
char _str_9[19] = "5 - end program\\0A? ";
struct std::basic_istream<char> _ZSt3cin;
char _str_10[10] = "print.txt";
char _str_11[27] = "File could not be created.";
char _str_12[8] = "Account";
char _str_13[10] = "Last Name";
char _str_14[11] = "First Name";
char _str_15[8] = "Balance";
char _str_16[1];
char _str_27[13];
char _str_17[24] = "Enter account to update";
char _str_18[35];
char _str_19[10] = "Account #";
char _str_20[21] = " has no information.";
char _str_21[25] = "Enter new account number";
char _str_22[38] = "Enter lastname, firstname, balance\\0A? ";
char _str_23[31] = " already contains information.";
char _str_24[24] = "Enter account to delete";
char _str_25[11] = " deleted.\\0A";
char _str_26[12] = " is empty.\\0A";
char _str_2[17] = "Incorrect choice";
char _str_28[50];
char _str_29[24];
// function: _ZStorSt13_Ios_OpenmodeS_
int _ZStorSt13_Ios_OpenmodeS_(int v0, int v1) {
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

// function: _ZNSt13basic_fstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
void std__basic_fstream_char__std__char_traits_char_____basic_fstream(struct std::basic_fstream<char>*, char*, int);

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEntEv
_Bool std__basic_ios_char__std__char_traits_char_____operator____const(struct std::basic_ios<char>*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: exit
void exit(int);

// function: _ZNSirsERi
struct std::basic_istream<char>* _ZNSirsERi(struct std::basic_istream<char>*, int*);

// function: _Z11enterChoicev
int enterChoice() {
bb10:
  int __retval11;
  int menuChoice12;
  struct std::basic_ostream<char>* g13 = &_ZSt4cout;
  char* cast14 = (char*)_str_3;
  struct std::basic_ostream<char>* r15 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g13, cast14);
  void* g16 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r17 = std__ostream__operator___std__ostream_____(r15, g16);
  char* cast18 = (char*)_str_4;
  struct std::basic_ostream<char>* r19 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r17, cast18);
  void* g20 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r21 = std__ostream__operator___std__ostream_____(r19, g20);
  char* cast22 = (char*)_str_5;
  struct std::basic_ostream<char>* r23 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r21, cast22);
  void* g24 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r25 = std__ostream__operator___std__ostream_____(r23, g24);
  char* cast26 = (char*)_str_6;
  struct std::basic_ostream<char>* r27 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r25, cast26);
  void* g28 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r29 = std__ostream__operator___std__ostream_____(r27, g28);
  char* cast30 = (char*)_str_7;
  struct std::basic_ostream<char>* r31 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r29, cast30);
  void* g32 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r33 = std__ostream__operator___std__ostream_____(r31, g32);
  char* cast34 = (char*)_str_8;
  struct std::basic_ostream<char>* r35 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r33, cast34);
  void* g36 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r37 = std__ostream__operator___std__ostream_____(r35, g36);
  char* cast38 = (char*)_str_9;
  struct std::basic_ostream<char>* r39 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r37, cast38);
  struct std::basic_istream<char>* g40 = &_ZSt3cin;
  struct std::basic_istream<char>* r41 = _ZNSirsERi(g40, &menuChoice12);
  int t42 = menuChoice12;
  __retval11 = t42;
  int t43 = __retval11;
  return t43;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
void std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(struct std::basic_ofstream<char>*, char*, int);

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std::basic_ostream<char>* _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(struct std::basic_ostream<char>*, struct std::_Setw);

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std::basic_ostream<char>* std__ostream__operator___std__ios_base_____(struct std::basic_ostream<char>*, void*);

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* _ZStaNRSt13_Ios_FmtflagsS_(int* v44, int v45) {
bb46:
  int* __a47;
  int __b48;
  int* __retval49;
  __a47 = v44;
  __b48 = v45;
  int* t50 = __a47;
  int t51 = *t50;
  int t52 = __b48;
  int r53 = _ZStanSt13_Ios_FmtflagsS_(t51, t52);
  int* t54 = __a47;
  *t54 = r53;
  __retval49 = t54;
  int* t55 = __retval49;
  return t55;
}

// function: _ZStcoSt13_Ios_Fmtflags
int _ZStcoSt13_Ios_Fmtflags(int v56) {
bb57:
  int __a58;
  int __retval59;
  __a58 = v56;
  int t60 = __a58;
  int u61 = ~t60;
  __retval59 = u61;
  int t62 = __retval59;
  return t62;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int _ZStorSt13_Ios_FmtflagsS_(int v63, int v64) {
bb65:
  int __a66;
  int __b67;
  int __retval68;
  __a66 = v63;
  __b67 = v64;
  int t69 = __a66;
  int t70 = __b67;
  int b71 = t69 | t70;
  __retval68 = b71;
  int t72 = __retval68;
  return t72;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* _ZStoRRSt13_Ios_FmtflagsS_(int* v73, int v74) {
bb75:
  int* __a76;
  int __b77;
  int* __retval78;
  __a76 = v73;
  __b77 = v74;
  int* t79 = __a76;
  int t80 = *t79;
  int t81 = __b77;
  int r82 = _ZStorSt13_Ios_FmtflagsS_(t80, t81);
  int* t83 = __a76;
  *t83 = r82;
  __retval78 = t83;
  int* t84 = __retval78;
  return t84;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int _ZStanSt13_Ios_FmtflagsS_(int v85, int v86) {
bb87:
  int __a88;
  int __b89;
  int __retval90;
  __a88 = v85;
  __b89 = v86;
  int t91 = __a88;
  int t92 = __b89;
  int b93 = t91 & t92;
  __retval90 = b93;
  int t94 = __retval90;
  return t94;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(struct std::ios_base* v95, int v96, int v97) {
bb98:
  int this99[8];
  int __fmtfl100;
  int __mask101;
  int __retval102;
  int __old103;
  this99 = v95;
  __fmtfl100 = v96;
  __mask101 = v97;
  struct std::ios_base* t104 = this99;
  int t105 = *t104->_M_flags;
  __old103 = t105;
  int t106 = __mask101;
  int r107 = _ZStcoSt13_Ios_Fmtflags(t106);
  int* r108 = _ZStaNRSt13_Ios_FmtflagsS_(t104->_M_flags, r107);
  int t109 = __fmtfl100;
  int t110 = __mask101;
  int r111 = _ZStanSt13_Ios_FmtflagsS_(t109, t110);
  int* r112 = _ZStoRRSt13_Ios_FmtflagsS_(t104->_M_flags, r111);
  int t113 = __old103;
  __retval102 = t113;
  int t114 = __retval102;
  return t114;
}

// function: _ZSt4leftRSt8ios_base
struct std::ios_base* std__left(struct std::ios_base* v115) {
bb116:
  int __base117[8];
  int __retval118[8];
  __base117 = v115;
  struct std::ios_base* t119 = __base117;
  int c120 = 32;
  int c121 = 176;
  int r122 = _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(t119, c120, c121);
  struct std::ios_base* t123 = __base117;
  __retval118 = t123;
  struct std::ios_base* t124 = __retval118;
  return t124;
}

// function: _ZSt4setwi
struct std::_Setw std__setw(int v125) {
bb126:
  int __n127;
  struct std::_Setw __retval128;
  __n127 = v125;
  int t129 = __n127;
  __retval128._M_n = t129;
  struct std::_Setw t130 = __retval128;
  return t130;
}

// function: _ZSt5rightRSt8ios_base
struct std::ios_base* std__right(struct std::ios_base* v131) {
bb132:
  int __base133[8];
  int __retval134[8];
  __base133 = v131;
  struct std::ios_base* t135 = __base133;
  int c136 = 128;
  int c137 = 176;
  int r138 = _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(t135, c136, c137);
  struct std::ios_base* t139 = __base133;
  __retval134 = t139;
  struct std::ios_base* t140 = __retval134;
  return t140;
}

// function: _ZNSi5seekgESt4fposI11__mbstate_tE
struct std::basic_istream<char>* std__istream__seekg(struct std::basic_istream<char>*, struct std::fpos<__mbstate_t>);

// function: _ZNSt4fposI11__mbstate_tEC2El
void std__fpos___mbstate_t___fpos(struct std::fpos<__mbstate_t>* v141, long long v142) {
bb143:
  int this144[4];
  long long __off145;
  this144 = v141;
  __off145 = v142;
  struct std::fpos<__mbstate_t>* t146 = this144;
  long long t147 = __off145;
  *t146->_M_off = t147;
  struct __mbstate_t c148 = {0};
  *t146->_M_state = c148;
  return;
}

// function: _ZNSaIcEC2Ev
void _ZNSaIcEC2Ev(struct std::allocator<char>* v149) {
bb150:
  struct std::allocator<char>* this151;
  this151 = v149;
  struct std::allocator<char>* t152 = this151;
