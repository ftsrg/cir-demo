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
__attribute__((weak)) void __VERIFIER_virtual_call_void(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  ((void(*)(void*))__fn)(__obj);
}

// Struct definitions (auto-parsed)
struct _IO_FILE { int __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; char* __field7; char* __field8; char* __field9; char* __field10; char* __field11; struct _IO_marker* __field12; struct _IO_FILE* __field13; int __field14; unsigned char __field15[3]; char __field16[1]; long __field17; unsigned short __field18; char __field19; char __field20[1]; void* __field21; long __field22; struct _IO_codecvt* __field23; struct _IO_wide_data* __field24; struct _IO_FILE* __field25; void* __field26; struct _IO_FILE** __field27; int __field28; int __field29; unsigned long __field30; char __field31[8]; };
struct _IO_codecvt { unsigned char __placeholder; };
struct _IO_marker { unsigned char __placeholder; };
struct _IO_wide_data { unsigned char __placeholder; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct __pthread_internal_list { struct __pthread_internal_list* __field0; struct __pthread_internal_list* __field1; };
struct __pthread_mutex_s { int __field0; unsigned int __field1; int __field2; unsigned int __field3; int __field4; short __field5; short __field6; struct __pthread_internal_list __field7; };
struct anon_0 { unsigned int __field0; unsigned int __field1; };
union anon_1 { unsigned int __field0; char __field1[4]; };
union anon_2 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
union pthread_attr_t { char __field0[56]; long __field1; };
union pthread_mutex_t { struct __pthread_mutex_s __field0; char __field1[40]; long __field2; };
struct std____basic_file_char_ { struct _IO_FILE* __field0; _Bool __field1; unsigned char __field2[7]; } __attribute__((packed));
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
struct timeval { long __field0; long __field1; };
struct EmbeddedPC { union pthread_mutex_t __field0; unsigned int __field1; _Bool __field2; struct timeval __field3; struct timeval __field4; float __field5; float __field6; float __field7; struct Display* __field8; };
union __atomic_wide_counter { unsigned long __field0; struct anon_0 __field1; };
struct __mbstate_t { int __field0; union anon_1 __field1; };
struct __pthread_cond_s { union __atomic_wide_counter __field0; union __atomic_wide_counter __field1; unsigned int __field2[2]; unsigned int __field3; unsigned int __field4; unsigned int __field5[2]; unsigned int __field6; unsigned int __field7; };
union pthread_cond_t { struct __pthread_cond_s __field0; char __field1[48]; long __field2; };
struct std____codecvt_abstract_base_char__char____mbstate_t_ { struct std__locale__facet __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_2 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__codecvt_char__char____mbstate_t_ { struct std____codecvt_abstract_base_char__char____mbstate_t_ __field0; struct __locale_struct* __field1; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct Thread { void* __field0; union pthread_mutex_t __field1; union pthread_mutex_t __field2; union pthread_cond_t __field3; _Bool __field4; union pthread_attr_t __field5; unsigned long __field6; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ __field2; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct Bicycle { struct Thread __field0; struct EmbeddedPC* __field1; };
struct std__basic_ofstream_char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct Display { struct Thread __field0; struct std__basic_ofstream_char__std__char_traits_char__ __field1; struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __field2; int __field3; unsigned char __field4[4]; } __attribute__((packed));

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[12] = "Booting ...";
char _str_1[7] = " Done!";
char _str_2[53] = "----------------------------------------------------";
char _str_3[19] = "You are now biking";
char _str_4[21] = "Choose your option: ";
char _str_5[22] = "1 - Press Mode Button";
char _str_6[23] = "2 - Press Reset Button";
char _str_7[26] = "3 - Remove PC's Batteries";
char _str_8[16] = " Enter number: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_9[17] = "Press 1, 2 or 3.";
char _str_10[5] = "Bye!";
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
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
extern void EmbeddedPC__EmbeddedPC(struct EmbeddedPC* p0);
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
extern void Bicycle__Bicycle(struct Bicycle* p0, struct EmbeddedPC* p1);
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
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
extern struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ EmbeddedPC__currentMode_abi_cxx11_(struct EmbeddedPC* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1);
extern int isdigit(int p0);
extern int atoi(char* p0);
extern void EmbeddedPC__modePressed(struct EmbeddedPC* p0);
extern void EmbeddedPC__resetPressed(struct EmbeddedPC* p0);
extern void exit(int p0);
int main();
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____is_constant_evaluated();
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std__allocator_char____allocator(struct std__allocator_char_* p0);

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

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v27, char* v28) {
bb29:
  char* __c130;
  char* __c231;
  _Bool __retval32;
  __c130 = v27;
  __c231 = v28;
  char* t33 = __c130;
  char t34 = *t33;
  int cast35 = (int)t34;
  char* t36 = __c231;
  char t37 = *t36;
  int cast38 = (int)t37;
  _Bool c39 = ((cast35 == cast38)) ? 1 : 0;
  __retval32 = c39;
  _Bool t40 = __retval32;
  return t40;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v41) {
bb42:
  char* __p43;
  unsigned long __retval44;
  unsigned long __i45;
  __p43 = v41;
  unsigned long c46 = 0;
  __i45 = c46;
    char ref_tmp047;
    while (1) {
      unsigned long t48 = __i45;
      char* t49 = __p43;
      char* ptr50 = &(t49)[t48];
      char c51 = 0;
      ref_tmp047 = c51;
      _Bool r52 = __gnu_cxx__char_traits_char___eq(ptr50, &ref_tmp047);
      _Bool u53 = !r52;
      if (!u53) break;
      unsigned long t54 = __i45;
      unsigned long u55 = t54 + 1;
      __i45 = u55;
    }
  unsigned long t56 = __i45;
  __retval44 = t56;
  unsigned long t57 = __retval44;
  return t57;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v58) {
bb59:
  char* __s60;
  unsigned long __retval61;
  __s60 = v58;
    _Bool r62 = std____is_constant_evaluated();
    if (r62) {
      char* t63 = __s60;
      unsigned long r64 = __gnu_cxx__char_traits_char___length(t63);
      __retval61 = r64;
      unsigned long t65 = __retval61;
      return t65;
    }
  char* t66 = __s60;
  unsigned long r67 = strlen(t66);
  __retval61 = r67;
  unsigned long t68 = __retval61;
  return t68;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v69, char* v70) {
bb71:
  struct std__basic_ostream_char__std__char_traits_char__* __out72;
  char* __s73;
  struct std__basic_ostream_char__std__char_traits_char__* __retval74;
  __out72 = v69;
  __s73 = v70;
    char* t75 = __s73;
    _Bool cast76 = (_Bool)t75;
    _Bool u77 = !cast76;
    if (u77) {
      struct std__basic_ostream_char__std__char_traits_char__* t78 = __out72;
      void** v79 = (void**)t78;
      void* v80 = *((void**)v79);
      unsigned char* cast81 = (unsigned char*)v80;
      long c82 = -24;
      unsigned char* ptr83 = &(cast81)[c82];
      long* cast84 = (long*)ptr83;
      long t85 = *cast84;
      unsigned char* cast86 = (unsigned char*)t78;
      unsigned char* ptr87 = &(cast86)[t85];
      struct std__basic_ostream_char__std__char_traits_char__* cast88 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr87;
      struct std__basic_ios_char__std__char_traits_char__* cast89 = (struct std__basic_ios_char__std__char_traits_char__*)cast88;
      int t90 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast89, t90);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t91 = __out72;
      char* t92 = __s73;
      char* t93 = __s73;
      unsigned long r94 = std__char_traits_char___length(t93);
      long cast95 = (long)r94;
      struct std__basic_ostream_char__std__char_traits_char__* r96 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t91, t92, cast95);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t97 = __out72;
  __retval74 = t97;
  struct std__basic_ostream_char__std__char_traits_char__* t98 = __retval74;
  return t98;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v99, void* v100) {
bb101:
  struct std__basic_ostream_char__std__char_traits_char__* this102;
  void* __pf103;
  struct std__basic_ostream_char__std__char_traits_char__* __retval104;
  this102 = v99;
  __pf103 = v100;
  struct std__basic_ostream_char__std__char_traits_char__* t105 = this102;
  void* t106 = __pf103;
  struct std__basic_ostream_char__std__char_traits_char__* r107 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t106)(t105);
  __retval104 = r107;
  struct std__basic_ostream_char__std__char_traits_char__* t108 = __retval104;
  return t108;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v109) {
bb110:
  struct std__basic_ostream_char__std__char_traits_char__* __os111;
  struct std__basic_ostream_char__std__char_traits_char__* __retval112;
  __os111 = v109;
  struct std__basic_ostream_char__std__char_traits_char__* t113 = __os111;
  struct std__basic_ostream_char__std__char_traits_char__* r114 = std__ostream__flush(t113);
  __retval112 = r114;
  struct std__basic_ostream_char__std__char_traits_char__* t115 = __retval112;
  return t115;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v116) {
bb117:
  struct std__ctype_char_* __f118;
  struct std__ctype_char_* __retval119;
  __f118 = v116;
    struct std__ctype_char_* t120 = __f118;
    _Bool cast121 = (_Bool)t120;
    _Bool u122 = !cast121;
    if (u122) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t123 = __f118;
  __retval119 = t123;
  struct std__ctype_char_* t124 = __retval119;
  return t124;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v125, char v126) {
bb127:
  struct std__ctype_char_* this128;
  char __c129;
  char __retval130;
  this128 = v125;
  __c129 = v126;
  struct std__ctype_char_* t131 = this128;
    char t132 = t131->_M_widen_ok;
    _Bool cast133 = (_Bool)t132;
    if (cast133) {
      char t134 = __c129;
      unsigned char cast135 = (unsigned char)t134;
      unsigned long cast136 = (unsigned long)cast135;
      char t137 = t131->_M_widen[cast136];
      __retval130 = t137;
      char t138 = __retval130;
      return t138;
    }
  std__ctype_char____M_widen_init___const(t131);
  char t139 = __c129;
  void** v140 = (void**)t131;
  void* v141 = *((void**)v140);
  char vcall144 = (char)__VERIFIER_virtual_call_char_char(t131, 6, t139);
  __retval130 = vcall144;
  char t145 = __retval130;
  return t145;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v146, char v147) {
bb148:
  struct std__basic_ios_char__std__char_traits_char__* this149;
  char __c150;
  char __retval151;
  this149 = v146;
  __c150 = v147;
  struct std__basic_ios_char__std__char_traits_char__* t152 = this149;
  struct std__ctype_char_* t153 = t152->_M_ctype;
  struct std__ctype_char_* r154 = std__ctype_char__const__std____check_facet_std__ctype_char___(t153);
  char t155 = __c150;
  char r156 = std__ctype_char___widen_char__const(r154, t155);
  __retval151 = r156;
  char t157 = __retval151;
  return t157;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v158) {
bb159:
  struct std__basic_ostream_char__std__char_traits_char__* __os160;
  struct std__basic_ostream_char__std__char_traits_char__* __retval161;
  __os160 = v158;
  struct std__basic_ostream_char__std__char_traits_char__* t162 = __os160;
  struct std__basic_ostream_char__std__char_traits_char__* t163 = __os160;
  void** v164 = (void**)t163;
  void* v165 = *((void**)v164);
  unsigned char* cast166 = (unsigned char*)v165;
  long c167 = -24;
  unsigned char* ptr168 = &(cast166)[c167];
  long* cast169 = (long*)ptr168;
  long t170 = *cast169;
  unsigned char* cast171 = (unsigned char*)t163;
  unsigned char* ptr172 = &(cast171)[t170];
  struct std__basic_ostream_char__std__char_traits_char__* cast173 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr172;
  struct std__basic_ios_char__std__char_traits_char__* cast174 = (struct std__basic_ios_char__std__char_traits_char__*)cast173;
  char c175 = 10;
  char r176 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast174, c175);
  struct std__basic_ostream_char__std__char_traits_char__* r177 = std__ostream__put(t162, r176);
  struct std__basic_ostream_char__std__char_traits_char__* r178 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r177);
  __retval161 = r178;
  struct std__basic_ostream_char__std__char_traits_char__* t179 = __retval161;
  return t179;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v180) {
bb181:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this182;
  char* __retval183;
  this182 = v180;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t184 = this182;
  char* r185 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t184);
  __retval183 = r185;
  char* t186 = __retval183;
  return t186;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v187) {
bb188:
  struct std__allocator_char_* __a189;
  unsigned long __retval190;
  __a189 = v187;
  unsigned long c191 = -1;
  unsigned long c192 = 1;
  unsigned long b193 = c191 / c192;
  __retval190 = b193;
  unsigned long t194 = __retval190;
  return t194;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v195) {
bb196:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this197;
  struct std__allocator_char_* __retval198;
  this197 = v195;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t199 = this197;
  struct std__allocator_char_* base200 = (struct std__allocator_char_*)((char *)&(t199->_M_dataplus) + 0);
  __retval198 = base200;
  struct std__allocator_char_* t201 = __retval198;
  return t201;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v202, unsigned long* v203) {
bb204:
  unsigned long* __a205;
  unsigned long* __b206;
  unsigned long* __retval207;
  __a205 = v202;
  __b206 = v203;
    unsigned long* t208 = __b206;
    unsigned long t209 = *t208;
    unsigned long* t210 = __a205;
    unsigned long t211 = *t210;
    _Bool c212 = ((t209 < t211)) ? 1 : 0;
    if (c212) {
      unsigned long* t213 = __b206;
      __retval207 = t213;
      unsigned long* t214 = __retval207;
      return t214;
    }
  unsigned long* t215 = __a205;
  __retval207 = t215;
  unsigned long* t216 = __retval207;
  return t216;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v217) {
bb218:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this219;
  unsigned long __retval220;
  unsigned long __diffmax221;
  unsigned long __allocmax222;
  this219 = v217;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t223 = this219;
  unsigned long c224 = 9223372036854775807;
  __diffmax221 = c224;
  struct std__allocator_char_* r225 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t223);
  unsigned long r226 = std__allocator_traits_std__allocator_char_____max_size(r225);
  __allocmax222 = r226;
  unsigned long* r227 = unsigned_long_const__std__min_unsigned_long_(&__diffmax221, &__allocmax222);
  unsigned long t228 = *r227;
  unsigned long c229 = 1;
  unsigned long b230 = t228 - c229;
  __retval220 = b230;
  unsigned long t231 = __retval220;
  return t231;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v232) {
bb233:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this234;
  unsigned long __retval235;
  unsigned long __sz236;
  this234 = v232;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t237 = this234;
  unsigned long t238 = t237->_M_string_length;
  __sz236 = t238;
    unsigned long t239 = __sz236;
    unsigned long r240 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t237);
    _Bool c241 = ((t239 > r240)) ? 1 : 0;
    if (c241) {
      __builtin_unreachable();
    }
  unsigned long t242 = __sz236;
  __retval235 = t242;
  unsigned long t243 = __retval235;
  return t243;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v244, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v245) {
bb246:
  struct std__basic_ostream_char__std__char_traits_char__* __os247;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str248;
  struct std__basic_ostream_char__std__char_traits_char__* __retval249;
  __os247 = v244;
  __str248 = v245;
  struct std__basic_ostream_char__std__char_traits_char__* t250 = __os247;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t251 = __str248;
  char* r252 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t251);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t253 = __str248;
  unsigned long r254 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t253);
  long cast255 = (long)r254;
  struct std__basic_ostream_char__std__char_traits_char__* r256 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t250, r252, cast255);
  __retval249 = r256;
  struct std__basic_ostream_char__std__char_traits_char__* t257 = __retval249;
  return t257;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v258) {
bb259:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this260;
  this260 = v258;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t261 = this260;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t261);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t261->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb262:
  int __retval263;
  struct EmbeddedPC* pc264;
  struct EmbeddedPC* __new_result265;
  struct Bicycle* b266;
  struct Bicycle* __new_result267;
  char op268;
  int c269 = 0;
  __retval263 = c269;
  char* cast270 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r271 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast270);
  unsigned long c272 = 104;
  void* r273 = operator_new(c272);
    struct EmbeddedPC* cast274 = (struct EmbeddedPC*)r273;
    __new_result265 = cast274;
    EmbeddedPC__EmbeddedPC(cast274);
  struct EmbeddedPC* t275 = __new_result265;
  pc264 = t275;
  unsigned long c276 = 216;
  void* r277 = operator_new(c276);
    struct Bicycle* cast278 = (struct Bicycle*)r277;
    __new_result267 = cast278;
    struct EmbeddedPC* t279 = pc264;
    Bicycle__Bicycle(cast278, t279);
  struct Bicycle* t280 = __new_result267;
  b266 = t280;
  struct Bicycle* t281 = b266;
  struct Thread* base282 = (struct Thread*)((char *)t281 + 0);
  void** v283 = (void**)base282;
  void* v284 = *((void**)v283);
  __VERIFIER_virtual_call_void(base282, 3);
  char* cast287 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r288 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast287);
  struct std__basic_ostream_char__std__char_traits_char__* r289 = std__ostream__operator___std__ostream_____(r288, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast290 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r291 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast290);
  struct std__basic_ostream_char__std__char_traits_char__* r292 = std__ostream__operator___std__ostream_____(r291, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast293 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r294 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast293);
  struct std__basic_ostream_char__std__char_traits_char__* r295 = std__ostream__operator___std__ostream_____(r294, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast296 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r297 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast296);
  struct std__basic_ostream_char__std__char_traits_char__* r298 = std__ostream__operator___std__ostream_____(r297, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast299 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r300 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast299);
  struct std__basic_ostream_char__std__char_traits_char__* r301 = std__ostream__operator___std__ostream_____(r300, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast302 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r303 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast302);
  struct std__basic_ostream_char__std__char_traits_char__* r304 = std__ostream__operator___std__ostream_____(r303, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast305 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r306 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast305);
  struct std__basic_ostream_char__std__char_traits_char__* r307 = std__ostream__operator___std__ostream_____(r306, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast308 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r309 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast308);
  struct std__basic_ostream_char__std__char_traits_char__* r310 = std__ostream__operator___std__ostream_____(r309, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    while (1) {
      int c311 = 1;
      _Bool cast312 = (_Bool)c311;
      if (!cast312) break;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp0313;
        struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup314;
        struct EmbeddedPC* t315 = pc264;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r316 = EmbeddedPC__currentMode_abi_cxx11_(t315);
        ref_tmp0313 = r316;
          struct std__basic_ostream_char__std__char_traits_char__* r317 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &ref_tmp0313);
          tmp_exprcleanup314 = r317;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0313);
        }
        struct std__basic_ostream_char__std__char_traits_char__* t318 = tmp_exprcleanup314;
        char* cast319 = (char*)&(_str_8);
        struct std__basic_ostream_char__std__char_traits_char__* r320 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast319);
        struct std__basic_istream_char__std__char_traits_char__* r321 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(&_ZSt3cin, &op268);
          char t322 = op268;
          int cast323 = (int)t322;
          int r324 = isdigit(cast323);
          _Bool cast325 = (_Bool)r324;
          _Bool u326 = !cast325;
          if (u326) {
            char* cast327 = (char*)&(_str_9);
            struct std__basic_ostream_char__std__char_traits_char__* r328 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast327);
            struct std__basic_ostream_char__std__char_traits_char__* r329 = std__ostream__operator___std__ostream_____(r328, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            continue;
          }
          int r330 = atoi(&op268);
          switch (r330) {
          case 1:
            struct EmbeddedPC* t331 = pc264;
            EmbeddedPC__modePressed(t331);
            break;
          case 2:
            struct EmbeddedPC* t332 = pc264;
            EmbeddedPC__resetPressed(t332);
            break;
          case 3:
            char* cast333 = (char*)&(_str_10);
            struct std__basic_ostream_char__std__char_traits_char__* r334 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast333);
            struct std__basic_ostream_char__std__char_traits_char__* r335 = std__ostream__operator___std__ostream_____(r334, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            int c336 = 1;
            exit(c336);
            break;
          default:
            char* cast337 = (char*)&(_str_9);
            struct std__basic_ostream_char__std__char_traits_char__* r338 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast337);
            struct std__basic_ostream_char__std__char_traits_char__* r339 = std__ostream__operator___std__ostream_____(r338, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            break;
          }
    }
  int c340 = 0;
  __retval263 = c340;
  int t341 = __retval263;
  return t341;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v342) {
bb343:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this344;
  char* __retval345;
  this344 = v342;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t346 = this344;
  char* t347 = t346->_M_dataplus._M_p;
  __retval345 = t347;
  char* t348 = __retval345;
  return t348;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v349) {
bb350:
  char* __r351;
  char* __retval352;
  __r351 = v349;
  char* t353 = __r351;
  __retval352 = t353;
  char* t354 = __retval352;
  return t354;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v355) {
bb356:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this357;
  char* __retval358;
  this357 = v355;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t359 = this357;
  char* cast360 = (char*)&(t359->field2._M_local_buf);
  char* r361 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast360);
  __retval358 = r361;
  char* t362 = __retval358;
  return t362;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v363) {
bb364:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this365;
  _Bool __retval366;
  this365 = v363;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t367 = this365;
    char* r368 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t367);
    char* r369 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t367);
    _Bool c370 = ((r368 == r369)) ? 1 : 0;
    if (c370) {
        unsigned long t371 = t367->_M_string_length;
        unsigned long c372 = 15;
        _Bool c373 = ((t371 > c372)) ? 1 : 0;
        if (c373) {
          __builtin_unreachable();
        }
      _Bool c374 = 1;
      __retval366 = c374;
      _Bool t375 = __retval366;
      return t375;
    }
  _Bool c376 = 0;
  __retval366 = c376;
  _Bool t377 = __retval366;
  return t377;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb378:
  _Bool __retval379;
    _Bool c380 = 0;
    __retval379 = c380;
    _Bool t381 = __retval379;
    return t381;
  abort();
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v382, char* v383, unsigned long v384) {
bb385:
  struct std____new_allocator_char_* this386;
  char* __p387;
  unsigned long __n388;
  this386 = v382;
  __p387 = v383;
  __n388 = v384;
  struct std____new_allocator_char_* t389 = this386;
    unsigned long c390 = 1;
    unsigned long c391 = 16;
    _Bool c392 = ((c390 > c391)) ? 1 : 0;
    if (c392) {
      char* t393 = __p387;
      void* cast394 = (void*)t393;
      unsigned long t395 = __n388;
      unsigned long c396 = 1;
      unsigned long b397 = t395 * c396;
      unsigned long c398 = 1;
      operator_delete_3(cast394, b397, c398);
      return;
    }
  char* t399 = __p387;
  void* cast400 = (void*)t399;
  unsigned long t401 = __n388;
  unsigned long c402 = 1;
  unsigned long b403 = t401 * c402;
  operator_delete_2(cast400, b403);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v404, char* v405, unsigned long v406) {
bb407:
  struct std__allocator_char_* this408;
  char* __p409;
  unsigned long __n410;
  this408 = v404;
  __p409 = v405;
  __n410 = v406;
  struct std__allocator_char_* t411 = this408;
    _Bool r412 = std____is_constant_evaluated();
    if (r412) {
      char* t413 = __p409;
      void* cast414 = (void*)t413;
      operator_delete(cast414);
      return;
    }
  struct std____new_allocator_char_* base415 = (struct std____new_allocator_char_*)((char *)t411 + 0);
  char* t416 = __p409;
  unsigned long t417 = __n410;
  std____new_allocator_char___deallocate(base415, t416, t417);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v418, char* v419, unsigned long v420) {
bb421:
  struct std__allocator_char_* __a422;
  char* __p423;
  unsigned long __n424;
  __a422 = v418;
  __p423 = v419;
  __n424 = v420;
  struct std__allocator_char_* t425 = __a422;
  char* t426 = __p423;
  unsigned long t427 = __n424;
  std__allocator_char___deallocate(t425, t426, t427);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v428) {
bb429:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this430;
  struct std__allocator_char_* __retval431;
  this430 = v428;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t432 = this430;
  struct std__allocator_char_* base433 = (struct std__allocator_char_*)((char *)&(t432->_M_dataplus) + 0);
  __retval431 = base433;
  struct std__allocator_char_* t434 = __retval431;
  return t434;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v435, unsigned long v436) {
bb437:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this438;
  unsigned long __size439;
  this438 = v435;
  __size439 = v436;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t440 = this438;
  struct std__allocator_char_* r441 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t440);
  char* r442 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t440);
  unsigned long t443 = __size439;
  unsigned long c444 = 1;
  unsigned long b445 = t443 + c444;
  std__allocator_traits_std__allocator_char_____deallocate(r441, r442, b445);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v446) {
bb447:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this448;
  this448 = v446;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t449 = this448;
    _Bool r450 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t449);
    _Bool u451 = !r450;
    if (u451) {
      unsigned long t452 = t449->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t449, t452);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v453) {
bb454:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this455;
  this455 = v453;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t456 = this455;
  {
    struct std__allocator_char_* base457 = (struct std__allocator_char_*)((char *)t456 + 0);
    std__allocator_char____allocator(base457);
  }
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v458) {
bb459:
  struct std__allocator_char_* this460;
  this460 = v458;
  struct std__allocator_char_* t461 = this460;
  return;
}

