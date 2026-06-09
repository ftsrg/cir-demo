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
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_bool_(struct std__basic_ostream_char__std__char_traits_char__* p0, _Bool p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, _Bool p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
int main();

// function: _ZNSolsEb
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v0, _Bool v1) {
bb2:
  struct std__basic_ostream_char__std__char_traits_char__* this3;
  _Bool __n4;
  struct std__basic_ostream_char__std__char_traits_char__* __retval5;
  this3 = v0;
  __n4 = v1;
  struct std__basic_ostream_char__std__char_traits_char__* t6 = this3;
  _Bool t7 = __n4;
  struct std__basic_ostream_char__std__char_traits_char__* r8 = std__ostream__std__ostream___M_insert_bool_(t6, t7);
  __retval5 = r8;
  struct std__basic_ostream_char__std__char_traits_char__* t9 = __retval5;
  return t9;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v10, void* v11) {
bb12:
  struct std__basic_ostream_char__std__char_traits_char__* this13;
  void* __pf14;
  struct std__basic_ostream_char__std__char_traits_char__* __retval15;
  this13 = v10;
  __pf14 = v11;
  struct std__basic_ostream_char__std__char_traits_char__* t16 = this13;
  void* t17 = __pf14;
  struct std__basic_ostream_char__std__char_traits_char__* r18 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t17)(t16);
  __retval15 = r18;
  struct std__basic_ostream_char__std__char_traits_char__* t19 = __retval15;
  return t19;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v20) {
bb21:
  struct std__basic_ostream_char__std__char_traits_char__* __os22;
  struct std__basic_ostream_char__std__char_traits_char__* __retval23;
  __os22 = v20;
  struct std__basic_ostream_char__std__char_traits_char__* t24 = __os22;
  struct std__basic_ostream_char__std__char_traits_char__* r25 = std__ostream__flush(t24);
  __retval23 = r25;
  struct std__basic_ostream_char__std__char_traits_char__* t26 = __retval23;
  return t26;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v27) {
bb28:
  struct std__ctype_char_* __f29;
  struct std__ctype_char_* __retval30;
  __f29 = v27;
    struct std__ctype_char_* t31 = __f29;
    _Bool cast32 = (_Bool)t31;
    _Bool u33 = !cast32;
    if (u33) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t34 = __f29;
  __retval30 = t34;
  struct std__ctype_char_* t35 = __retval30;
  return t35;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v36, char v37) {
bb38:
  struct std__ctype_char_* this39;
  char __c40;
  char __retval41;
  this39 = v36;
  __c40 = v37;
  struct std__ctype_char_* t42 = this39;
    char t43 = t42->_M_widen_ok;
    _Bool cast44 = (_Bool)t43;
    if (cast44) {
      char t45 = __c40;
      unsigned char cast46 = (unsigned char)t45;
      unsigned long cast47 = (unsigned long)cast46;
      char t48 = t42->_M_widen[cast47];
      __retval41 = t48;
      char t49 = __retval41;
      return t49;
    }
  std__ctype_char____M_widen_init___const(t42);
  char t50 = __c40;
  void** v51 = (void**)t42;
  void* v52 = *((void**)v51);
  char vcall55 = (char)__VERIFIER_virtual_call_char_char(t42, 6, t50);
  __retval41 = vcall55;
  char t56 = __retval41;
  return t56;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v57, char v58) {
bb59:
  struct std__basic_ios_char__std__char_traits_char__* this60;
  char __c61;
  char __retval62;
  this60 = v57;
  __c61 = v58;
  struct std__basic_ios_char__std__char_traits_char__* t63 = this60;
  struct std__ctype_char_* t64 = t63->_M_ctype;
  struct std__ctype_char_* r65 = std__ctype_char__const__std____check_facet_std__ctype_char___(t64);
  char t66 = __c61;
  char r67 = std__ctype_char___widen_char__const(r65, t66);
  __retval62 = r67;
  char t68 = __retval62;
  return t68;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v69) {
bb70:
  struct std__basic_ostream_char__std__char_traits_char__* __os71;
  struct std__basic_ostream_char__std__char_traits_char__* __retval72;
  __os71 = v69;
  struct std__basic_ostream_char__std__char_traits_char__* t73 = __os71;
  struct std__basic_ostream_char__std__char_traits_char__* t74 = __os71;
  void** v75 = (void**)t74;
  void* v76 = *((void**)v75);
  unsigned char* cast77 = (unsigned char*)v76;
  long c78 = -24;
  unsigned char* ptr79 = &(cast77)[c78];
  long* cast80 = (long*)ptr79;
  long t81 = *cast80;
  unsigned char* cast82 = (unsigned char*)t74;
  unsigned char* ptr83 = &(cast82)[t81];
  struct std__basic_ostream_char__std__char_traits_char__* cast84 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr83;
  struct std__basic_ios_char__std__char_traits_char__* cast85 = (struct std__basic_ios_char__std__char_traits_char__*)cast84;
  char c86 = 10;
  char r87 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast85, c86);
  struct std__basic_ostream_char__std__char_traits_char__* r88 = std__ostream__put(t73, r87);
  struct std__basic_ostream_char__std__char_traits_char__* r89 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r88);
  __retval72 = r89;
  struct std__basic_ostream_char__std__char_traits_char__* t90 = __retval72;
  return t90;
}

// function: main
int main() {
bb91:
  int __retval92;
  _Bool val93;
  int c94 = 0;
  __retval92 = c94;
  _Bool c95 = 1;
  val93 = c95;
  _Bool t96 = val93;
  struct std__basic_ostream_char__std__char_traits_char__* r97 = std__ostream__operator__(&_ZSt4cout, t96);
  struct std__basic_ostream_char__std__char_traits_char__* r98 = std__ostream__operator___std__ostream_____(r97, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c99 = 0;
  __retval92 = c99;
  int t100 = __retval92;
  return t100;
}

