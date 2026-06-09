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
// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[17] = "Enter something:";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[23] = "(int)cin.gcount() >= 0";
char _str_2[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/istream_operator_void/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__std__istream___M_extract_void__(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
long std__istream__gcount___const(struct std__basic_istream_char__std__char_traits_char__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
int main();
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std____is_constant_evaluated();
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign(char* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v0) {
bb1:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2;
  struct std__allocator_char_ ref_tmp03;
  this2 = v0;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t4 = this2;
  char* r5 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t4);
  std__allocator_char___allocator_2(&ref_tmp03);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t4->_M_dataplus, r5, &ref_tmp03);
  {
    std__allocator_char____allocator(&ref_tmp03);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t4);
    unsigned long c6 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t4, c6);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v7, int v8) {
bb9:
  int __a10;
  int __b11;
  int __retval12;
  __a10 = v7;
  __b11 = v8;
  int t13 = __a10;
  int t14 = __b11;
  int b15 = t13 | t14;
  __retval12 = b15;
  int t16 = __retval12;
  return t16;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v17) {
bb18:
  struct std__basic_ios_char__std__char_traits_char__* this19;
  int __retval20;
  this19 = v17;
  struct std__basic_ios_char__std__char_traits_char__* t21 = this19;
  struct std__ios_base* base22 = (struct std__ios_base*)((char *)t21 + 0);
  int t23 = base22->_M_streambuf_state;
  __retval20 = t23;
  int t24 = __retval20;
  return t24;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v25, int v26) {
bb27:
  struct std__basic_ios_char__std__char_traits_char__* this28;
  int __state29;
  this28 = v25;
  __state29 = v26;
  struct std__basic_ios_char__std__char_traits_char__* t30 = this28;
  int r31 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t30);
  int t32 = __state29;
  int r33 = std__operator_(r31, t32);
  std__basic_ios_char__std__char_traits_char_____clear(t30, r33);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v34, char* v35) {
bb36:
  char* __c137;
  char* __c238;
  _Bool __retval39;
  __c137 = v34;
  __c238 = v35;
  char* t40 = __c137;
  char t41 = *t40;
  int cast42 = (int)t41;
  char* t43 = __c238;
  char t44 = *t43;
  int cast45 = (int)t44;
  _Bool c46 = ((cast42 == cast45)) ? 1 : 0;
  __retval39 = c46;
  _Bool t47 = __retval39;
  return t47;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v48) {
bb49:
  char* __p50;
  unsigned long __retval51;
  unsigned long __i52;
  __p50 = v48;
  unsigned long c53 = 0;
  __i52 = c53;
    char ref_tmp054;
    while (1) {
      unsigned long t55 = __i52;
      char* t56 = __p50;
      char* ptr57 = &(t56)[t55];
      char c58 = 0;
      ref_tmp054 = c58;
      _Bool r59 = __gnu_cxx__char_traits_char___eq(ptr57, &ref_tmp054);
      _Bool u60 = !r59;
      if (!u60) break;
      unsigned long t61 = __i52;
      unsigned long u62 = t61 + 1;
      __i52 = u62;
    }
  unsigned long t63 = __i52;
  __retval51 = t63;
  unsigned long t64 = __retval51;
  return t64;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v65) {
bb66:
  char* __s67;
  unsigned long __retval68;
  __s67 = v65;
    _Bool r69 = std____is_constant_evaluated();
    if (r69) {
      char* t70 = __s67;
      unsigned long r71 = __gnu_cxx__char_traits_char___length(t70);
      __retval68 = r71;
      unsigned long t72 = __retval68;
      return t72;
    }
  char* t73 = __s67;
  unsigned long r74 = strlen(t73);
  __retval68 = r74;
  unsigned long t75 = __retval68;
  return t75;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v76, char* v77) {
bb78:
  struct std__basic_ostream_char__std__char_traits_char__* __out79;
  char* __s80;
  struct std__basic_ostream_char__std__char_traits_char__* __retval81;
  __out79 = v76;
  __s80 = v77;
    char* t82 = __s80;
    _Bool cast83 = (_Bool)t82;
    _Bool u84 = !cast83;
    if (u84) {
      struct std__basic_ostream_char__std__char_traits_char__* t85 = __out79;
      void** v86 = (void**)t85;
      void* v87 = *((void**)v86);
      unsigned char* cast88 = (unsigned char*)v87;
      long c89 = -24;
      unsigned char* ptr90 = &(cast88)[c89];
      long* cast91 = (long*)ptr90;
      long t92 = *cast91;
      unsigned char* cast93 = (unsigned char*)t85;
      unsigned char* ptr94 = &(cast93)[t92];
      struct std__basic_ostream_char__std__char_traits_char__* cast95 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr94;
      struct std__basic_ios_char__std__char_traits_char__* cast96 = (struct std__basic_ios_char__std__char_traits_char__*)cast95;
      int t97 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast96, t97);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t98 = __out79;
      char* t99 = __s80;
      char* t100 = __s80;
      unsigned long r101 = std__char_traits_char___length(t100);
      long cast102 = (long)r101;
      struct std__basic_ostream_char__std__char_traits_char__* r103 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t98, t99, cast102);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t104 = __out79;
  __retval81 = t104;
  struct std__basic_ostream_char__std__char_traits_char__* t105 = __retval81;
  return t105;
}

// function: _ZNSirsERPv
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* v106, void** v107) {
bb108:
  struct std__basic_istream_char__std__char_traits_char__* this109;
  void** __p110;
  struct std__basic_istream_char__std__char_traits_char__* __retval111;
  this109 = v106;
  __p110 = v107;
  struct std__basic_istream_char__std__char_traits_char__* t112 = this109;
  void** t113 = __p110;
  struct std__basic_istream_char__std__char_traits_char__* r114 = std__istream__std__istream___M_extract_void__(t112, t113);
  __retval111 = r114;
  struct std__basic_istream_char__std__char_traits_char__* t115 = __retval111;
  return t115;
}

// function: _ZNKSi6gcountEv
long std__istream__gcount___const(struct std__basic_istream_char__std__char_traits_char__* v116) {
bb117:
  struct std__basic_istream_char__std__char_traits_char__* this118;
  long __retval119;
  this118 = v116;
  struct std__basic_istream_char__std__char_traits_char__* t120 = this118;
  long t121 = t120->_M_gcount;
  __retval119 = t121;
  long t122 = __retval119;
  return t122;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v123) {
bb124:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this125;
  this125 = v123;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t126 = this125;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t126);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t126->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb127:
  int __retval128;
  void* n129;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str130;
  int c131 = 0;
  __retval128 = c131;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str130);
    char* cast132 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r133 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast132);
    struct std__basic_istream_char__std__char_traits_char__* r134 = std__istream__operator__(&_ZSt3cin, &n129);
    long r135 = std__istream__gcount___const(&_ZSt3cin);
    int cast136 = (int)r135;
    int c137 = 0;
    _Bool c138 = ((cast136 >= c137)) ? 1 : 0;
    if (c138) {
    } else {
      char* cast139 = (char*)&(_str_1);
      char* c140 = _str_2;
      unsigned int c141 = 19;
      char* cast142 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast139, c140, c141, cast142);
    }
    long r143 = std__istream__gcount___const(&_ZSt3cin);
    int cast144 = (int)r143;
    int c145 = 0;
    _Bool c146 = ((cast144 >= c145)) ? 1 : 0;
    if (c146) {
    } else {
      char* cast147 = (char*)&(_str_1);
      char* c148 = _str_2;
      unsigned int c149 = 23;
      char* cast150 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast147, c148, c149, cast150);
    }
    int c151 = 0;
    __retval128 = c151;
    int t152 = __retval128;
    int ret_val153 = t152;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str130);
    }
    return ret_val153;
  int t154 = __retval128;
  return t154;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v155) {
bb156:
  char* __r157;
  char* __retval158;
  __r157 = v155;
  char* t159 = __r157;
  __retval158 = t159;
  char* t160 = __retval158;
  return t160;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v161) {
bb162:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this163;
  char* __retval164;
  this163 = v161;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t165 = this163;
  char* cast166 = (char*)&(t165->field2._M_local_buf);
  char* r167 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast166);
  __retval164 = r167;
  char* t168 = __retval164;
  return t168;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v169) {
bb170:
  struct std__allocator_char_* this171;
  this171 = v169;
  struct std__allocator_char_* t172 = this171;
  struct std____new_allocator_char_* base173 = (struct std____new_allocator_char_*)((char *)t172 + 0);
  std____new_allocator_char_____new_allocator_2(base173);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v174, char* v175, struct std__allocator_char_* v176) {
bb177:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this178;
  char* __dat179;
  struct std__allocator_char_* __a180;
  this178 = v174;
  __dat179 = v175;
  __a180 = v176;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t181 = this178;
  struct std__allocator_char_* base182 = (struct std__allocator_char_*)((char *)t181 + 0);
  struct std__allocator_char_* t183 = __a180;
  std__allocator_char___allocator(base182, t183);
    char* t184 = __dat179;
    t181->_M_p = t184;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v185) {
bb186:
  struct std__allocator_char_* this187;
  this187 = v185;
  struct std__allocator_char_* t188 = this187;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb189:
  _Bool __retval190;
    _Bool c191 = 0;
    __retval190 = c191;
    _Bool t192 = __retval190;
    return t192;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v193) {
bb194:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this195;
  this195 = v193;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t196 = this195;
    _Bool r197 = std__is_constant_evaluated();
    if (r197) {
        unsigned long __i198;
        unsigned long c199 = 0;
        __i198 = c199;
        while (1) {
          unsigned long t201 = __i198;
          unsigned long c202 = 15;
          _Bool c203 = ((t201 <= c202)) ? 1 : 0;
          if (!c203) break;
          char c204 = 0;
          unsigned long t205 = __i198;
          t196->field2._M_local_buf[t205] = c204;
        for_step200: ;
          unsigned long t206 = __i198;
          unsigned long u207 = t206 + 1;
          __i198 = u207;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v208, unsigned long v209) {
bb210:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this211;
  unsigned long __length212;
  this211 = v208;
  __length212 = v209;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t213 = this211;
  unsigned long t214 = __length212;
  t213->_M_string_length = t214;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb215:
  _Bool __retval216;
    _Bool c217 = 0;
    __retval216 = c217;
    _Bool t218 = __retval216;
    return t218;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v219, char* v220) {
bb221:
  char* __location222;
  char* __args223;
  char* __retval224;
  void* __loc225;
  __location222 = v219;
  __args223 = v220;
  char* t226 = __location222;
  void* cast227 = (void*)t226;
  __loc225 = cast227;
    void* t228 = __loc225;
    char* cast229 = (char*)t228;
    char* t230 = __args223;
    char t231 = *t230;
    *cast229 = t231;
    __retval224 = cast229;
    char* t232 = __retval224;
    return t232;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v233, char* v234) {
bb235:
  char* __c1236;
  char* __c2237;
  __c1236 = v233;
  __c2237 = v234;
    _Bool r238 = std____is_constant_evaluated();
    if (r238) {
      char* t239 = __c1236;
      char* t240 = __c2237;
      char* r241 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t239, t240);
    } else {
      char* t242 = __c2237;
      char t243 = *t242;
      char* t244 = __c1236;
      *t244 = t243;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v245) {
bb246:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this247;
  char* __retval248;
  this247 = v245;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t249 = this247;
  char* t250 = t249->_M_dataplus._M_p;
  __retval248 = t250;
  char* t251 = __retval248;
  return t251;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v252, unsigned long v253) {
bb254:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this255;
  unsigned long __n256;
  char ref_tmp0257;
  this255 = v252;
  __n256 = v253;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t258 = this255;
  unsigned long t259 = __n256;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t258, t259);
  unsigned long t260 = __n256;
  char* r261 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t258);
  char* ptr262 = &(r261)[t260];
  char c263 = 0;
  ref_tmp0257 = c263;
  std__char_traits_char___assign(ptr262, &ref_tmp0257);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v264) {
bb265:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this266;
  this266 = v264;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t267 = this266;
  {
    struct std__allocator_char_* base268 = (struct std__allocator_char_*)((char *)t267 + 0);
    std__allocator_char____allocator(base268);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v269) {
bb270:
  struct std____new_allocator_char_* this271;
  this271 = v269;
  struct std____new_allocator_char_* t272 = this271;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v273, struct std____new_allocator_char_* v274) {
bb275:
  struct std____new_allocator_char_* this276;
  struct std____new_allocator_char_* unnamed277;
  this276 = v273;
  unnamed277 = v274;
  struct std____new_allocator_char_* t278 = this276;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v279, struct std__allocator_char_* v280) {
bb281:
  struct std__allocator_char_* this282;
  struct std__allocator_char_* __a283;
  this282 = v279;
  __a283 = v280;
  struct std__allocator_char_* t284 = this282;
  struct std____new_allocator_char_* base285 = (struct std____new_allocator_char_*)((char *)t284 + 0);
  struct std__allocator_char_* t286 = __a283;
  struct std____new_allocator_char_* base287 = (struct std____new_allocator_char_*)((char *)t286 + 0);
  std____new_allocator_char_____new_allocator(base285, base287);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v288) {
bb289:
  char* __r290;
  char* __retval291;
  __r290 = v288;
  char* t292 = __r290;
  __retval291 = t292;
  char* t293 = __retval291;
  return t293;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v294) {
bb295:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this296;
  char* __retval297;
  this296 = v294;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t298 = this296;
  char* cast299 = (char*)&(t298->field2._M_local_buf);
  char* r300 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast299);
  __retval297 = r300;
  char* t301 = __retval297;
  return t301;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v302) {
bb303:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this304;
  _Bool __retval305;
  this304 = v302;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t306 = this304;
    char* r307 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t306);
    char* r308 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t306);
    _Bool c309 = ((r307 == r308)) ? 1 : 0;
    if (c309) {
        unsigned long t310 = t306->_M_string_length;
        unsigned long c311 = 15;
        _Bool c312 = ((t310 > c311)) ? 1 : 0;
        if (c312) {
          __builtin_unreachable();
        }
      _Bool c313 = 1;
      __retval305 = c313;
      _Bool t314 = __retval305;
      return t314;
    }
  _Bool c315 = 0;
  __retval305 = c315;
  _Bool t316 = __retval305;
  return t316;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v317, char* v318, unsigned long v319) {
bb320:
  struct std____new_allocator_char_* this321;
  char* __p322;
  unsigned long __n323;
  this321 = v317;
  __p322 = v318;
  __n323 = v319;
  struct std____new_allocator_char_* t324 = this321;
    unsigned long c325 = 1;
    unsigned long c326 = 16;
    _Bool c327 = ((c325 > c326)) ? 1 : 0;
    if (c327) {
      char* t328 = __p322;
      void* cast329 = (void*)t328;
      unsigned long t330 = __n323;
      unsigned long c331 = 1;
      unsigned long b332 = t330 * c331;
      unsigned long c333 = 1;
      operator_delete_3(cast329, b332, c333);
      return;
    }
  char* t334 = __p322;
  void* cast335 = (void*)t334;
  unsigned long t336 = __n323;
  unsigned long c337 = 1;
  unsigned long b338 = t336 * c337;
  operator_delete_2(cast335, b338);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v339, char* v340, unsigned long v341) {
bb342:
  struct std__allocator_char_* this343;
  char* __p344;
  unsigned long __n345;
  this343 = v339;
  __p344 = v340;
  __n345 = v341;
  struct std__allocator_char_* t346 = this343;
    _Bool r347 = std____is_constant_evaluated();
    if (r347) {
      char* t348 = __p344;
      void* cast349 = (void*)t348;
      operator_delete(cast349);
      return;
    }
  struct std____new_allocator_char_* base350 = (struct std____new_allocator_char_*)((char *)t346 + 0);
  char* t351 = __p344;
  unsigned long t352 = __n345;
  std____new_allocator_char___deallocate(base350, t351, t352);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v353, char* v354, unsigned long v355) {
bb356:
  struct std__allocator_char_* __a357;
  char* __p358;
  unsigned long __n359;
  __a357 = v353;
  __p358 = v354;
  __n359 = v355;
  struct std__allocator_char_* t360 = __a357;
  char* t361 = __p358;
  unsigned long t362 = __n359;
  std__allocator_char___deallocate(t360, t361, t362);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v363) {
bb364:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this365;
  struct std__allocator_char_* __retval366;
  this365 = v363;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t367 = this365;
  struct std__allocator_char_* base368 = (struct std__allocator_char_*)((char *)&(t367->_M_dataplus) + 0);
  __retval366 = base368;
  struct std__allocator_char_* t369 = __retval366;
  return t369;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v370, unsigned long v371) {
bb372:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this373;
  unsigned long __size374;
  this373 = v370;
  __size374 = v371;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t375 = this373;
  struct std__allocator_char_* r376 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t375);
  char* r377 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t375);
  unsigned long t378 = __size374;
  unsigned long c379 = 1;
  unsigned long b380 = t378 + c379;
  std__allocator_traits_std__allocator_char_____deallocate(r376, r377, b380);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v381) {
bb382:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this383;
  this383 = v381;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t384 = this383;
    _Bool r385 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t384);
    _Bool u386 = !r385;
    if (u386) {
      unsigned long t387 = t384->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t384, t387);
    }
  return;
}

