/*
 * Copyright 2025 Budapest University of Technology and Economics
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__basic_string_view_char__std__char_traits_char__ { unsigned long _M_len; char* _M_str; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[14] = "Hello, World!";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[18] = "First character: ";
char _str_2[18] = "Third character: ";
char _str_3[20] = "Length of message: ";
char _str_4[21] = "Is emptyView empty? ";
char _str_5[4] = "Yes";
char _str_6[3] = "No";
char _str_7[85] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/string_view";
char __PRETTY_FUNCTION____ZNKSt17basic_string_viewIcSt11char_traitsIcEEixEm[124] = "const_reference std::basic_string_view<char>::operator[](size_type) const [_CharT = char, _Traits = std::char_traits<char>]";
char _str_8[21] = "__pos < this->_M_len";
void std__basic_string_view_char__std__char_traits_char_____basic_string_view(struct std__basic_string_view_char__std__char_traits_char__* p0, char* p1);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
char* std__basic_string_view_char__std__char_traits_char_____operator___unsigned_long__const(struct std__basic_string_view_char__std__char_traits_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_unsigned_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
unsigned long std__basic_string_view_char__std__char_traits_char_____length___const(struct std__basic_string_view_char__std__char_traits_char__* p0);
void std__basic_string_view_char__std__char_traits_char_____basic_string_view_2(struct std__basic_string_view_char__std__char_traits_char__* p0);
_Bool std__basic_string_view_char__std__char_traits_char_____empty___const(struct std__basic_string_view_char__std__char_traits_char__* p0);
int main();
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);

// function: _ZNSt17basic_string_viewIcSt11char_traitsIcEEC2EPKc
void std__basic_string_view_char__std__char_traits_char_____basic_string_view(struct std__basic_string_view_char__std__char_traits_char__* v0, char* v1) {
bb2:
  struct std__basic_string_view_char__std__char_traits_char__* this3;
  char* __str4;
  this3 = v0;
  __str4 = v1;
  struct std__basic_string_view_char__std__char_traits_char__* t5 = this3;
  char* t6 = __str4;
  unsigned long r7 = std__char_traits_char___length(t6);
  t5->_M_len = r7;
  char* t8 = __str4;
  t5->_M_str = t8;
  return;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v9) {
bb10:
  struct std__ios_base* this11;
  long __retval12;
  this11 = v9;
  struct std__ios_base* t13 = this11;
  long t14 = t13->_M_width;
  __retval12 = t14;
  long t15 = __retval12;
  return t15;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v16, char v17) {
bb18:
  struct std__basic_ostream_char__std__char_traits_char__* __out19;
  char __c20;
  struct std__basic_ostream_char__std__char_traits_char__* __retval21;
  __out19 = v16;
  __c20 = v17;
    struct std__basic_ostream_char__std__char_traits_char__* t22 = __out19;
    void** v23 = (void**)t22;
    void* v24 = *((void**)v23);
    unsigned char* cast25 = (unsigned char*)v24;
    long c26 = -24;
    unsigned char* ptr27 = &(cast25)[c26];
    long* cast28 = (long*)ptr27;
    long t29 = *cast28;
    unsigned char* cast30 = (unsigned char*)t22;
    unsigned char* ptr31 = &(cast30)[t29];
    struct std__basic_ostream_char__std__char_traits_char__* cast32 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr31;
    struct std__ios_base* cast33 = (struct std__ios_base*)cast32;
    long r34 = std__ios_base__width___const(cast33);
    long c35 = 0;
    _Bool c36 = ((r34 != c35)) ? 1 : 0;
    if (c36) {
      struct std__basic_ostream_char__std__char_traits_char__* t37 = __out19;
      long c38 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r39 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t37, &__c20, c38);
      __retval21 = r39;
      struct std__basic_ostream_char__std__char_traits_char__* t40 = __retval21;
      return t40;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t41 = __out19;
  char t42 = __c20;
  struct std__basic_ostream_char__std__char_traits_char__* r43 = std__ostream__put(t41, t42);
  struct std__basic_ostream_char__std__char_traits_char__* t44 = __out19;
  __retval21 = t44;
  struct std__basic_ostream_char__std__char_traits_char__* t45 = __retval21;
  return t45;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v46, int v47) {
bb48:
  int __a49;
  int __b50;
  int __retval51;
  __a49 = v46;
  __b50 = v47;
  int t52 = __a49;
  int t53 = __b50;
  int b54 = t52 | t53;
  __retval51 = b54;
  int t55 = __retval51;
  return t55;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v56) {
bb57:
  struct std__basic_ios_char__std__char_traits_char__* this58;
  int __retval59;
  this58 = v56;
  struct std__basic_ios_char__std__char_traits_char__* t60 = this58;
  struct std__ios_base* base61 = (struct std__ios_base*)((char *)t60 + 0);
  int t62 = base61->_M_streambuf_state;
  __retval59 = t62;
  int t63 = __retval59;
  return t63;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v64, int v65) {
bb66:
  struct std__basic_ios_char__std__char_traits_char__* this67;
  int __state68;
  this67 = v64;
  __state68 = v65;
  struct std__basic_ios_char__std__char_traits_char__* t69 = this67;
  int r70 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t69);
  int t71 = __state68;
  int r72 = std__operator_(r70, t71);
  std__basic_ios_char__std__char_traits_char_____clear(t69, r72);
  return;
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

// function: _ZNKSt17basic_string_viewIcSt11char_traitsIcEEixEm
char* std__basic_string_view_char__std__char_traits_char_____operator___unsigned_long__const(struct std__basic_string_view_char__std__char_traits_char__* v103, unsigned long v104) {
bb105:
  struct std__basic_string_view_char__std__char_traits_char__* this106;
  unsigned long __pos107;
  char* __retval108;
  this106 = v103;
  __pos107 = v104;
  struct std__basic_string_view_char__std__char_traits_char__* t109 = this106;
    do {
          unsigned long t110 = __pos107;
          unsigned long t111 = t109->_M_len;
          _Bool c112 = ((t110 < t111)) ? 1 : 0;
          _Bool u113 = !c112;
          if (u113) {
            char* cast114 = (char*)&(_str_7);
            int c115 = 260;
            char* cast116 = (char*)&(__PRETTY_FUNCTION____ZNKSt17basic_string_viewIcSt11char_traitsIcEEixEm);
            char* cast117 = (char*)&(_str_8);
            std____glibcxx_assert_fail(cast114, c115, cast116, cast117);
          }
      _Bool c118 = 0;
      if (!c118) break;
    } while (1);
  char* t119 = t109->_M_str;
  unsigned long t120 = __pos107;
  char* ptr121 = &(t119)[t120];
  __retval108 = ptr121;
  char* t122 = __retval108;
  return t122;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v123, void* v124) {
bb125:
  struct std__basic_ostream_char__std__char_traits_char__* this126;
  void* __pf127;
  struct std__basic_ostream_char__std__char_traits_char__* __retval128;
  this126 = v123;
  __pf127 = v124;
  struct std__basic_ostream_char__std__char_traits_char__* t129 = this126;
  void* t130 = __pf127;
  struct std__basic_ostream_char__std__char_traits_char__* r131 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t130)(t129);
  __retval128 = r131;
  struct std__basic_ostream_char__std__char_traits_char__* t132 = __retval128;
  return t132;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v133) {
bb134:
  struct std__basic_ostream_char__std__char_traits_char__* __os135;
  struct std__basic_ostream_char__std__char_traits_char__* __retval136;
  __os135 = v133;
  struct std__basic_ostream_char__std__char_traits_char__* t137 = __os135;
  struct std__basic_ostream_char__std__char_traits_char__* r138 = std__ostream__flush(t137);
  __retval136 = r138;
  struct std__basic_ostream_char__std__char_traits_char__* t139 = __retval136;
  return t139;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v140) {
bb141:
  struct std__ctype_char_* __f142;
  struct std__ctype_char_* __retval143;
  __f142 = v140;
    struct std__ctype_char_* t144 = __f142;
    _Bool cast145 = (_Bool)t144;
    _Bool u146 = !cast145;
    if (u146) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t147 = __f142;
  __retval143 = t147;
  struct std__ctype_char_* t148 = __retval143;
  return t148;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v149, char v150) {
bb151:
  struct std__ctype_char_* this152;
  char __c153;
  char __retval154;
  this152 = v149;
  __c153 = v150;
  struct std__ctype_char_* t155 = this152;
    char t156 = t155->_M_widen_ok;
    _Bool cast157 = (_Bool)t156;
    if (cast157) {
      char t158 = __c153;
      unsigned char cast159 = (unsigned char)t158;
      unsigned long cast160 = (unsigned long)cast159;
      char t161 = t155->_M_widen[cast160];
      __retval154 = t161;
      char t162 = __retval154;
      return t162;
    }
  std__ctype_char____M_widen_init___const(t155);
  char t163 = __c153;
  void** v164 = (void**)t155;
  void* v165 = *((void**)v164);
  char vcall168 = (char)__VERIFIER_virtual_call_char_char(t155, 6, t163);
  __retval154 = vcall168;
  char t169 = __retval154;
  return t169;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v170, char v171) {
bb172:
  struct std__basic_ios_char__std__char_traits_char__* this173;
  char __c174;
  char __retval175;
  this173 = v170;
  __c174 = v171;
  struct std__basic_ios_char__std__char_traits_char__* t176 = this173;
  struct std__ctype_char_* t177 = t176->_M_ctype;
  struct std__ctype_char_* r178 = std__ctype_char__const__std____check_facet_std__ctype_char___(t177);
  char t179 = __c174;
  char r180 = std__ctype_char___widen_char__const(r178, t179);
  __retval175 = r180;
  char t181 = __retval175;
  return t181;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v182) {
bb183:
  struct std__basic_ostream_char__std__char_traits_char__* __os184;
  struct std__basic_ostream_char__std__char_traits_char__* __retval185;
  __os184 = v182;
  struct std__basic_ostream_char__std__char_traits_char__* t186 = __os184;
  struct std__basic_ostream_char__std__char_traits_char__* t187 = __os184;
  void** v188 = (void**)t187;
  void* v189 = *((void**)v188);
  unsigned char* cast190 = (unsigned char*)v189;
  long c191 = -24;
  unsigned char* ptr192 = &(cast190)[c191];
  long* cast193 = (long*)ptr192;
  long t194 = *cast193;
  unsigned char* cast195 = (unsigned char*)t187;
  unsigned char* ptr196 = &(cast195)[t194];
  struct std__basic_ostream_char__std__char_traits_char__* cast197 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr196;
  struct std__basic_ios_char__std__char_traits_char__* cast198 = (struct std__basic_ios_char__std__char_traits_char__*)cast197;
  char c199 = 10;
  char r200 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast198, c199);
  struct std__basic_ostream_char__std__char_traits_char__* r201 = std__ostream__put(t186, r200);
  struct std__basic_ostream_char__std__char_traits_char__* r202 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r201);
  __retval185 = r202;
  struct std__basic_ostream_char__std__char_traits_char__* t203 = __retval185;
  return t203;
}

// function: _ZNSolsEm
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v204, unsigned long v205) {
bb206:
  struct std__basic_ostream_char__std__char_traits_char__* this207;
  unsigned long __n208;
  struct std__basic_ostream_char__std__char_traits_char__* __retval209;
  this207 = v204;
  __n208 = v205;
  struct std__basic_ostream_char__std__char_traits_char__* t210 = this207;
  unsigned long t211 = __n208;
  struct std__basic_ostream_char__std__char_traits_char__* r212 = std__ostream__std__ostream___M_insert_unsigned_long_(t210, t211);
  __retval209 = r212;
  struct std__basic_ostream_char__std__char_traits_char__* t213 = __retval209;
  return t213;
}

// function: _ZNKSt17basic_string_viewIcSt11char_traitsIcEE6lengthEv
unsigned long std__basic_string_view_char__std__char_traits_char_____length___const(struct std__basic_string_view_char__std__char_traits_char__* v214) {
bb215:
  struct std__basic_string_view_char__std__char_traits_char__* this216;
  unsigned long __retval217;
  this216 = v214;
  struct std__basic_string_view_char__std__char_traits_char__* t218 = this216;
  unsigned long t219 = t218->_M_len;
  __retval217 = t219;
  unsigned long t220 = __retval217;
  return t220;
}

// function: _ZNSt17basic_string_viewIcSt11char_traitsIcEEC2Ev
void std__basic_string_view_char__std__char_traits_char_____basic_string_view_2(struct std__basic_string_view_char__std__char_traits_char__* v221) {
bb222:
  struct std__basic_string_view_char__std__char_traits_char__* this223;
  this223 = v221;
  struct std__basic_string_view_char__std__char_traits_char__* t224 = this223;
  unsigned long c225 = 0;
  t224->_M_len = c225;
  char* c226 = ((void*)0);
  t224->_M_str = c226;
  return;
}

// function: _ZNKSt17basic_string_viewIcSt11char_traitsIcEE5emptyEv
_Bool std__basic_string_view_char__std__char_traits_char_____empty___const(struct std__basic_string_view_char__std__char_traits_char__* v227) {
bb228:
  struct std__basic_string_view_char__std__char_traits_char__* this229;
  _Bool __retval230;
  this229 = v227;
  struct std__basic_string_view_char__std__char_traits_char__* t231 = this229;
  unsigned long t232 = t231->_M_len;
  unsigned long c233 = 0;
  _Bool c234 = ((t232 == c233)) ? 1 : 0;
  __retval230 = c234;
  _Bool t235 = __retval230;
  return t235;
}

// function: main
int main() {
bb236:
  int __retval237;
  struct std__basic_string_view_char__std__char_traits_char__ message238;
  struct std__basic_string_view_char__std__char_traits_char__ emptyView239;
  struct std__basic_string_view_char__std__char_traits_char__ otherMessage240;
  int c241 = 0;
  __retval237 = c241;
  char* cast242 = (char*)&(_str);
  std__basic_string_view_char__std__char_traits_char_____basic_string_view(&message238, cast242);
  char* cast243 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r244 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast243);
  unsigned long c245 = 0;
  char* r246 = std__basic_string_view_char__std__char_traits_char_____operator___unsigned_long__const(&message238, c245);
  char t247 = *r246;
  struct std__basic_ostream_char__std__char_traits_char__* r248 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r244, t247);
  struct std__basic_ostream_char__std__char_traits_char__* r249 = std__ostream__operator___std__ostream_____(r248, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast250 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r251 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast250);
  unsigned long c252 = 2;
  char* r253 = std__basic_string_view_char__std__char_traits_char_____operator___unsigned_long__const(&message238, c252);
  char t254 = *r253;
  struct std__basic_ostream_char__std__char_traits_char__* r255 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r251, t254);
  struct std__basic_ostream_char__std__char_traits_char__* r256 = std__ostream__operator___std__ostream_____(r255, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast257 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r258 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast257);
  unsigned long r259 = std__basic_string_view_char__std__char_traits_char_____length___const(&message238);
  struct std__basic_ostream_char__std__char_traits_char__* r260 = std__ostream__operator__(r258, r259);
  struct std__basic_ostream_char__std__char_traits_char__* r261 = std__ostream__operator___std__ostream_____(r260, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  std__basic_string_view_char__std__char_traits_char_____basic_string_view_2(&emptyView239);
  char* cast262 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r263 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast262);
  _Bool r264 = std__basic_string_view_char__std__char_traits_char_____empty___const(&emptyView239);
  char* cast265 = (char*)&(_str_5);
  char* cast266 = (char*)&(_str_6);
  char* sel267 = r264 ? cast265 : cast266;
  struct std__basic_ostream_char__std__char_traits_char__* r268 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r263, sel267);
  struct std__basic_ostream_char__std__char_traits_char__* r269 = std__ostream__operator___std__ostream_____(r268, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast270 = (char*)&(_str);
  std__basic_string_view_char__std__char_traits_char_____basic_string_view(&otherMessage240, cast270);
  int c271 = 0;
  __retval237 = c271;
  int t272 = __retval237;
  return t272;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb273:
  _Bool __retval274;
    _Bool c275 = 0;
    __retval274 = c275;
    _Bool t276 = __retval274;
    return t276;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v277, char* v278) {
bb279:
  char* __c1280;
  char* __c2281;
  _Bool __retval282;
  __c1280 = v277;
  __c2281 = v278;
  char* t283 = __c1280;
  char t284 = *t283;
  int cast285 = (int)t284;
  char* t286 = __c2281;
  char t287 = *t286;
  int cast288 = (int)t287;
  _Bool c289 = ((cast285 == cast288)) ? 1 : 0;
  __retval282 = c289;
  _Bool t290 = __retval282;
  return t290;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v291) {
bb292:
  char* __p293;
  unsigned long __retval294;
  unsigned long __i295;
  __p293 = v291;
  unsigned long c296 = 0;
  __i295 = c296;
    char ref_tmp0297;
    while (1) {
      unsigned long t298 = __i295;
      char* t299 = __p293;
      char* ptr300 = &(t299)[t298];
      char c301 = 0;
      ref_tmp0297 = c301;
      _Bool r302 = __gnu_cxx__char_traits_char___eq(ptr300, &ref_tmp0297);
      _Bool u303 = !r302;
      if (!u303) break;
      unsigned long t304 = __i295;
      unsigned long u305 = t304 + 1;
      __i295 = u305;
    }
  unsigned long t306 = __i295;
  __retval294 = t306;
  unsigned long t307 = __retval294;
  return t307;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v308) {
bb309:
  char* __s310;
  unsigned long __retval311;
  __s310 = v308;
    _Bool r312 = std____is_constant_evaluated();
    if (r312) {
      char* t313 = __s310;
      unsigned long r314 = __gnu_cxx__char_traits_char___length(t313);
      __retval311 = r314;
      unsigned long t315 = __retval311;
      return t315;
    }
  char* t316 = __s310;
  unsigned long r317 = strlen(t316);
  __retval311 = r317;
  unsigned long t318 = __retval311;
  return t318;
}

