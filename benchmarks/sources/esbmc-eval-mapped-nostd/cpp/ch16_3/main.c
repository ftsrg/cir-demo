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
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[13] = "QUERY_STRING";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[26] = "Content-type: text/html\n\n";
char _str_2[24] = "<?xml version = \"1.0\"?>";
char _str_3[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_4[47] = "Transitional//EN\" \"http://www.w3.org/TR/xhtml1";
char _str_5[31] = "/DTD/xhtml1-transitional.dtd\">";
char _str_6[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_7[45] = "<head><title>Name/Value Pairs</title></head>";
char _str_8[7] = "<body>";
char _str_9[26] = "<h2>Name/Value Pairs</h2>";
char _str_10[1];
char _str_11[45] = "Please add some name-value pairs to the URL ";
char _str_12[19] = "above.<br/>Or try ";
char _str_13[43] = "<a href=\"querystring.cgi?name=Joe&age=29\">";
char _str_14[10] = "this</a>.";
char _str_15[25] = "<p>The query string is: ";
char _str_16[5] = "</p>";
char _str_17[15] = "</body></html>";
char _str_18[50] = "basic_string: construction from null is not valid";
char _str_19[24] = "basic_string::_M_create";
extern char* getenv(char* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
int main();
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
extern void std____throw_logic_error(char* p0);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* p0, char* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** p0);
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_length_error(char* p0);
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* p0, unsigned long p1, void* p2);
char* std__allocator_char___allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* p0, unsigned long p1);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
char* char_const__std____niter_base_char_const__(char* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* p0, char* p1, char* p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, char* p2, struct std__forward_iterator_tag p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v0) {
bb1:
  struct std__allocator_char_* this2;
  this2 = v0;
  struct std__allocator_char_* t3 = this2;
  struct std____new_allocator_char_* base4 = (struct std____new_allocator_char_*)((char *)t3 + 0);
  std____new_allocator_char_____new_allocator_2(base4);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v5, char* v6, struct std__allocator_char_* v7) {
bb8:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this9;
  char* __s10;
  struct std__allocator_char_* __a11;
  char* __end12;
  struct std__forward_iterator_tag agg_tmp013;
  this9 = v5;
  __s10 = v6;
  __a11 = v7;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t14 = this9;
  char* r15 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t14);
  struct std__allocator_char_* t16 = __a11;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t14->_M_dataplus, r15, t16);
      char* t17 = __s10;
      char* c18 = ((void*)0);
      _Bool c19 = ((t17 == c18)) ? 1 : 0;
      if (c19) {
        char* cast20 = (char*)&(_str_18);
        std____throw_logic_error(cast20);
      }
    char* t21 = __s10;
    char* t22 = __s10;
    unsigned long r23 = std__char_traits_char___length(t22);
    char* ptr24 = &(t21)[r23];
    __end12 = ptr24;
    char* t25 = __s10;
    char* t26 = __end12;
    struct std__forward_iterator_tag t27 = agg_tmp013;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t14, t25, t26, t27);
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v28) {
bb29:
  struct std__allocator_char_* this30;
  this30 = v28;
  struct std__allocator_char_* t31 = this30;
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v32, int v33) {
bb34:
  int __a35;
  int __b36;
  int __retval37;
  __a35 = v32;
  __b36 = v33;
  int t38 = __a35;
  int t39 = __b36;
  int b40 = t38 | t39;
  __retval37 = b40;
  int t41 = __retval37;
  return t41;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v42) {
bb43:
  struct std__basic_ios_char__std__char_traits_char__* this44;
  int __retval45;
  this44 = v42;
  struct std__basic_ios_char__std__char_traits_char__* t46 = this44;
  struct std__ios_base* base47 = (struct std__ios_base*)((char *)t46 + 0);
  int t48 = base47->_M_streambuf_state;
  __retval45 = t48;
  int t49 = __retval45;
  return t49;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v50, int v51) {
bb52:
  struct std__basic_ios_char__std__char_traits_char__* this53;
  int __state54;
  this53 = v50;
  __state54 = v51;
  struct std__basic_ios_char__std__char_traits_char__* t55 = this53;
  int r56 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t55);
  int t57 = __state54;
  int r58 = std__operator_(r56, t57);
  std__basic_ios_char__std__char_traits_char_____clear(t55, r58);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v59, char* v60) {
bb61:
  struct std__basic_ostream_char__std__char_traits_char__* __out62;
  char* __s63;
  struct std__basic_ostream_char__std__char_traits_char__* __retval64;
  __out62 = v59;
  __s63 = v60;
    char* t65 = __s63;
    _Bool cast66 = (_Bool)t65;
    _Bool u67 = !cast66;
    if (u67) {
      struct std__basic_ostream_char__std__char_traits_char__* t68 = __out62;
      void** v69 = (void**)t68;
      void* v70 = *((void**)v69);
      unsigned char* cast71 = (unsigned char*)v70;
      long c72 = -24;
      unsigned char* ptr73 = &(cast71)[c72];
      long* cast74 = (long*)ptr73;
      long t75 = *cast74;
      unsigned char* cast76 = (unsigned char*)t68;
      unsigned char* ptr77 = &(cast76)[t75];
      struct std__basic_ostream_char__std__char_traits_char__* cast78 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr77;
      struct std__basic_ios_char__std__char_traits_char__* cast79 = (struct std__basic_ios_char__std__char_traits_char__*)cast78;
      int t80 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast79, t80);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t81 = __out62;
      char* t82 = __s63;
      char* t83 = __s63;
      unsigned long r84 = std__char_traits_char___length(t83);
      long cast85 = (long)r84;
      struct std__basic_ostream_char__std__char_traits_char__* r86 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t81, t82, cast85);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t87 = __out62;
  __retval64 = t87;
  struct std__basic_ostream_char__std__char_traits_char__* t88 = __retval64;
  return t88;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v89) {
bb90:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this91;
  unsigned long __retval92;
  unsigned long __sz93;
  this91 = v89;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t94 = this91;
  unsigned long t95 = t94->_M_string_length;
  __sz93 = t95;
    unsigned long t96 = __sz93;
    unsigned long r97 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t94);
    _Bool c98 = ((t96 > r97)) ? 1 : 0;
    if (c98) {
      __builtin_unreachable();
    }
  unsigned long t99 = __sz93;
  __retval92 = t99;
  unsigned long t100 = __retval92;
  return t100;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v101, char* v102) {
bb103:
  char* __c1104;
  char* __c2105;
  _Bool __retval106;
  __c1104 = v101;
  __c2105 = v102;
  char* t107 = __c1104;
  char t108 = *t107;
  unsigned char cast109 = (unsigned char)t108;
  int cast110 = (int)cast109;
  char* t111 = __c2105;
  char t112 = *t111;
  unsigned char cast113 = (unsigned char)t112;
  int cast114 = (int)cast113;
  _Bool c115 = ((cast110 < cast114)) ? 1 : 0;
  __retval106 = c115;
  _Bool t116 = __retval106;
  return t116;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v117, char* v118, unsigned long v119) {
bb120:
  char* __s1121;
  char* __s2122;
  unsigned long __n123;
  int __retval124;
  __s1121 = v117;
  __s2122 = v118;
  __n123 = v119;
    unsigned long t125 = __n123;
    unsigned long c126 = 0;
    _Bool c127 = ((t125 == c126)) ? 1 : 0;
    if (c127) {
      int c128 = 0;
      __retval124 = c128;
      int t129 = __retval124;
      return t129;
    }
    _Bool r130 = std____is_constant_evaluated();
    if (r130) {
        unsigned long __i131;
        unsigned long c132 = 0;
        __i131 = c132;
        while (1) {
          unsigned long t134 = __i131;
          unsigned long t135 = __n123;
          _Bool c136 = ((t134 < t135)) ? 1 : 0;
          if (!c136) break;
            unsigned long t137 = __i131;
            char* t138 = __s1121;
            char* ptr139 = &(t138)[t137];
            unsigned long t140 = __i131;
            char* t141 = __s2122;
            char* ptr142 = &(t141)[t140];
            _Bool r143 = std__char_traits_char___lt(ptr139, ptr142);
            if (r143) {
              int c144 = -1;
              __retval124 = c144;
              int t145 = __retval124;
              int ret_val146 = t145;
              return ret_val146;
            } else {
                unsigned long t147 = __i131;
                char* t148 = __s2122;
                char* ptr149 = &(t148)[t147];
                unsigned long t150 = __i131;
                char* t151 = __s1121;
                char* ptr152 = &(t151)[t150];
                _Bool r153 = std__char_traits_char___lt(ptr149, ptr152);
                if (r153) {
                  int c154 = 1;
                  __retval124 = c154;
                  int t155 = __retval124;
                  int ret_val156 = t155;
                  return ret_val156;
                }
            }
        for_step133: ;
          unsigned long t157 = __i131;
          unsigned long u158 = t157 + 1;
          __i131 = u158;
        }
      int c159 = 0;
      __retval124 = c159;
      int t160 = __retval124;
      return t160;
    }
  char* t161 = __s1121;
  void* cast162 = (void*)t161;
  char* t163 = __s2122;
  void* cast164 = (void*)t163;
  unsigned long t165 = __n123;
  int r166 = memcmp(cast162, cast164, t165);
  __retval124 = r166;
  int t167 = __retval124;
  return t167;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v168) {
bb169:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this170;
  char* __retval171;
  this170 = v168;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t172 = this170;
  char* r173 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t172);
  __retval171 = r173;
  char* t174 = __retval171;
  return t174;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v175, char* v176) {
bb177:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs178;
  char* __rhs179;
  _Bool __retval180;
  __lhs178 = v175;
  __rhs179 = v176;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t181 = __lhs178;
  unsigned long r182 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t181);
  char* t183 = __rhs179;
  unsigned long r184 = std__char_traits_char___length(t183);
  _Bool c185 = ((r182 == r184)) ? 1 : 0;
  _Bool ternary186;
  if (c185) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t187 = __lhs178;
    char* r188 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t187);
    char* t189 = __rhs179;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t190 = __lhs178;
    unsigned long r191 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t190);
    int r192 = std__char_traits_char___compare(r188, t189, r191);
    _Bool cast193 = (_Bool)r192;
    _Bool u194 = !cast193;
    ternary186 = (_Bool)u194;
  } else {
    _Bool c195 = 0;
    ternary186 = (_Bool)c195;
  }
  __retval180 = ternary186;
  _Bool t196 = __retval180;
  return t196;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v197, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v198) {
bb199:
  struct std__basic_ostream_char__std__char_traits_char__* __os200;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str201;
  struct std__basic_ostream_char__std__char_traits_char__* __retval202;
  __os200 = v197;
  __str201 = v198;
  struct std__basic_ostream_char__std__char_traits_char__* t203 = __os200;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t204 = __str201;
  char* r205 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t204);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t206 = __str201;
  unsigned long r207 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t206);
  long cast208 = (long)r207;
  struct std__basic_ostream_char__std__char_traits_char__* r209 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t203, r205, cast208);
  __retval202 = r209;
  struct std__basic_ostream_char__std__char_traits_char__* t210 = __retval202;
  return t210;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v211) {
bb212:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this213;
  this213 = v211;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t214 = this213;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t214);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t214->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb215:
  int __retval216;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ query217;
  struct std__allocator_char_ ref_tmp0218;
  int c219 = 0;
  __retval216 = c219;
  char* cast220 = (char*)&(_str);
  char* r221 = getenv(cast220);
  std__allocator_char___allocator_2(&ref_tmp0218);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&query217, r221, &ref_tmp0218);
  {
    std__allocator_char____allocator(&ref_tmp0218);
  }
    char* cast222 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r223 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast222);
    char* cast224 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r225 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast224);
    char* cast226 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r227 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r225, cast226);
    char* cast228 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r229 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r227, cast228);
    char* cast230 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r231 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r229, cast230);
    char* cast232 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* r233 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast232);
    char* cast234 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* r235 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r233, cast234);
    char* cast236 = (char*)&(_str_8);
    struct std__basic_ostream_char__std__char_traits_char__* r237 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r235, cast236);
    char* cast238 = (char*)&(_str_9);
    struct std__basic_ostream_char__std__char_traits_char__* r239 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast238);
      char* cast240 = (char*)&(_str_10);
      _Bool r241 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&query217, cast240);
      if (r241) {
        char* cast242 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* r243 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast242);
        char* cast244 = (char*)&(_str_12);
        struct std__basic_ostream_char__std__char_traits_char__* r245 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r243, cast244);
        char* cast246 = (char*)&(_str_13);
        struct std__basic_ostream_char__std__char_traits_char__* r247 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r245, cast246);
        char* cast248 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* r249 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r247, cast248);
      } else {
        char* cast250 = (char*)&(_str_15);
        struct std__basic_ostream_char__std__char_traits_char__* r251 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast250);
        struct std__basic_ostream_char__std__char_traits_char__* r252 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r251, &query217);
        char* cast253 = (char*)&(_str_16);
        struct std__basic_ostream_char__std__char_traits_char__* r254 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r252, cast253);
      }
    char* cast255 = (char*)&(_str_17);
    struct std__basic_ostream_char__std__char_traits_char__* r256 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast255);
    int c257 = 0;
    __retval216 = c257;
    int t258 = __retval216;
    int ret_val259 = t258;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&query217);
    }
    return ret_val259;
  int t260 = __retval216;
  return t260;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v261) {
bb262:
  struct std____new_allocator_char_* this263;
  this263 = v261;
  struct std____new_allocator_char_* t264 = this263;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v265) {
bb266:
  char* __r267;
  char* __retval268;
  __r267 = v265;
  char* t269 = __r267;
  __retval268 = t269;
  char* t270 = __retval268;
  return t270;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v271) {
bb272:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this273;
  char* __retval274;
  this273 = v271;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t275 = this273;
  char* cast276 = (char*)&(t275->field2._M_local_buf);
  char* r277 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast276);
  __retval274 = r277;
  char* t278 = __retval274;
  return t278;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v279, char* v280, struct std__allocator_char_* v281) {
bb282:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this283;
  char* __dat284;
  struct std__allocator_char_* __a285;
  this283 = v279;
  __dat284 = v280;
  __a285 = v281;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t286 = this283;
  struct std__allocator_char_* base287 = (struct std__allocator_char_*)((char *)t286 + 0);
  struct std__allocator_char_* t288 = __a285;
  std__allocator_char___allocator(base287, t288);
    char* t289 = __dat284;
    t286->_M_p = t289;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb290:
  _Bool __retval291;
    _Bool c292 = 0;
    __retval291 = c292;
    _Bool t293 = __retval291;
    return t293;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v294, char* v295) {
bb296:
  char* __c1297;
  char* __c2298;
  _Bool __retval299;
  __c1297 = v294;
  __c2298 = v295;
  char* t300 = __c1297;
  char t301 = *t300;
  int cast302 = (int)t301;
  char* t303 = __c2298;
  char t304 = *t303;
  int cast305 = (int)t304;
  _Bool c306 = ((cast302 == cast305)) ? 1 : 0;
  __retval299 = c306;
  _Bool t307 = __retval299;
  return t307;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v308) {
bb309:
  char* __p310;
  unsigned long __retval311;
  unsigned long __i312;
  __p310 = v308;
  unsigned long c313 = 0;
  __i312 = c313;
    char ref_tmp0314;
    while (1) {
      unsigned long t315 = __i312;
      char* t316 = __p310;
      char* ptr317 = &(t316)[t315];
      char c318 = 0;
      ref_tmp0314 = c318;
      _Bool r319 = __gnu_cxx__char_traits_char___eq(ptr317, &ref_tmp0314);
      _Bool u320 = !r319;
      if (!u320) break;
      unsigned long t321 = __i312;
      unsigned long u322 = t321 + 1;
      __i312 = u322;
    }
  unsigned long t323 = __i312;
  __retval311 = t323;
  unsigned long t324 = __retval311;
  return t324;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v325) {
bb326:
  char* __s327;
  unsigned long __retval328;
  __s327 = v325;
    _Bool r329 = std____is_constant_evaluated();
    if (r329) {
      char* t330 = __s327;
      unsigned long r331 = __gnu_cxx__char_traits_char___length(t330);
      __retval328 = r331;
      unsigned long t332 = __retval328;
      return t332;
    }
  char* t333 = __s327;
  unsigned long r334 = strlen(t333);
  __retval328 = r334;
  unsigned long t335 = __retval328;
  return t335;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v336, char* v337, struct std__random_access_iterator_tag v338) {
bb339:
  char* __first340;
  char* __last341;
  struct std__random_access_iterator_tag unnamed342;
  long __retval343;
  __first340 = v336;
  __last341 = v337;
  unnamed342 = v338;
  char* t344 = __last341;
  char* t345 = __first340;
  long diff346 = t344 - t345;
  __retval343 = diff346;
  long t347 = __retval343;
  return t347;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v348) {
bb349:
  char** unnamed350;
  struct std__random_access_iterator_tag __retval351;
  unnamed350 = v348;
  struct std__random_access_iterator_tag t352 = __retval351;
  return t352;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v353, char* v354) {
bb355:
  char* __first356;
  char* __last357;
  long __retval358;
  struct std__random_access_iterator_tag agg_tmp0359;
  __first356 = v353;
  __last357 = v354;
  char* t360 = __first356;
  char* t361 = __last357;
  struct std__random_access_iterator_tag r362 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first356);
  agg_tmp0359 = r362;
  struct std__random_access_iterator_tag t363 = agg_tmp0359;
  long r364 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t360, t361, t363);
  __retval358 = r364;
  long t365 = __retval358;
  return t365;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v366, char* v367) {
bb368:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this369;
  char* __p370;
  this369 = v366;
  __p370 = v367;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t371 = this369;
  char* t372 = __p370;
  t371->_M_dataplus._M_p = t372;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v373) {
bb374:
  struct std__allocator_char_* __a375;
  unsigned long __retval376;
  __a375 = v373;
  unsigned long c377 = -1;
  unsigned long c378 = 1;
  unsigned long b379 = c377 / c378;
  __retval376 = b379;
  unsigned long t380 = __retval376;
  return t380;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v381) {
bb382:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this383;
  struct std__allocator_char_* __retval384;
  this383 = v381;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t385 = this383;
  struct std__allocator_char_* base386 = (struct std__allocator_char_*)((char *)&(t385->_M_dataplus) + 0);
  __retval384 = base386;
  struct std__allocator_char_* t387 = __retval384;
  return t387;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v388, unsigned long* v389) {
bb390:
  unsigned long* __a391;
  unsigned long* __b392;
  unsigned long* __retval393;
  __a391 = v388;
  __b392 = v389;
    unsigned long* t394 = __b392;
    unsigned long t395 = *t394;
    unsigned long* t396 = __a391;
    unsigned long t397 = *t396;
    _Bool c398 = ((t395 < t397)) ? 1 : 0;
    if (c398) {
      unsigned long* t399 = __b392;
      __retval393 = t399;
      unsigned long* t400 = __retval393;
      return t400;
    }
  unsigned long* t401 = __a391;
  __retval393 = t401;
  unsigned long* t402 = __retval393;
  return t402;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v403) {
bb404:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this405;
  unsigned long __retval406;
  unsigned long __diffmax407;
  unsigned long __allocmax408;
  this405 = v403;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t409 = this405;
  unsigned long c410 = 9223372036854775807;
  __diffmax407 = c410;
  struct std__allocator_char_* r411 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t409);
  unsigned long r412 = std__allocator_traits_std__allocator_char_____max_size(r411);
  __allocmax408 = r412;
  unsigned long* r413 = unsigned_long_const__std__min_unsigned_long_(&__diffmax407, &__allocmax408);
  unsigned long t414 = *r413;
  unsigned long c415 = 1;
  unsigned long b416 = t414 - c415;
  __retval406 = b416;
  unsigned long t417 = __retval406;
  return t417;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v418) {
bb419:
  struct std____new_allocator_char_* this420;
  unsigned long __retval421;
  this420 = v418;
  struct std____new_allocator_char_* t422 = this420;
  unsigned long c423 = 9223372036854775807;
  unsigned long c424 = 1;
  unsigned long b425 = c423 / c424;
  __retval421 = b425;
  unsigned long t426 = __retval421;
  return t426;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v427, unsigned long v428, void* v429) {
bb430:
  struct std____new_allocator_char_* this431;
  unsigned long __n432;
  void* unnamed433;
  char* __retval434;
  this431 = v427;
  __n432 = v428;
  unnamed433 = v429;
  struct std____new_allocator_char_* t435 = this431;
    unsigned long t436 = __n432;
    unsigned long r437 = std____new_allocator_char____M_max_size___const(t435);
    _Bool c438 = ((t436 > r437)) ? 1 : 0;
    if (c438) {
        unsigned long t439 = __n432;
        unsigned long c440 = -1;
        unsigned long c441 = 1;
        unsigned long b442 = c440 / c441;
        _Bool c443 = ((t439 > b442)) ? 1 : 0;
        if (c443) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c444 = 1;
    unsigned long c445 = 16;
    _Bool c446 = ((c444 > c445)) ? 1 : 0;
    if (c446) {
      unsigned long __al447;
      unsigned long c448 = 1;
      __al447 = c448;
      unsigned long t449 = __n432;
      unsigned long c450 = 1;
      unsigned long b451 = t449 * c450;
      unsigned long t452 = __al447;
      void* r453 = operator_new_2(b451, t452);
      char* cast454 = (char*)r453;
      __retval434 = cast454;
      char* t455 = __retval434;
      return t455;
    }
  unsigned long t456 = __n432;
  unsigned long c457 = 1;
  unsigned long b458 = t456 * c457;
  void* r459 = operator_new(b458);
  char* cast460 = (char*)r459;
  __retval434 = cast460;
  char* t461 = __retval434;
  return t461;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v462, unsigned long v463) {
bb464:
  struct std__allocator_char_* this465;
  unsigned long __n466;
  char* __retval467;
  this465 = v462;
  __n466 = v463;
  struct std__allocator_char_* t468 = this465;
    _Bool r469 = std____is_constant_evaluated();
    if (r469) {
        unsigned long t470 = __n466;
        unsigned long c471 = 1;
        unsigned long ovr472;
        _Bool ovf473 = __builtin_mul_overflow(t470, c471, &ovr472);
        __n466 = ovr472;
        if (ovf473) {
          std____throw_bad_array_new_length();
        }
      unsigned long t474 = __n466;
      void* r475 = operator_new(t474);
      char* cast476 = (char*)r475;
      __retval467 = cast476;
      char* t477 = __retval467;
      return t477;
    }
  struct std____new_allocator_char_* base478 = (struct std____new_allocator_char_*)((char *)t468 + 0);
  unsigned long t479 = __n466;
  void* c480 = ((void*)0);
  char* r481 = std____new_allocator_char___allocate(base478, t479, c480);
  __retval467 = r481;
  char* t482 = __retval467;
  return t482;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v483, unsigned long v484) {
bb485:
  struct std__allocator_char_* __a486;
  unsigned long __n487;
  char* __retval488;
  __a486 = v483;
  __n487 = v484;
  struct std__allocator_char_* t489 = __a486;
  unsigned long t490 = __n487;
  char* r491 = std__allocator_char___allocate(t489, t490);
  __retval488 = r491;
  char* t492 = __retval488;
  return t492;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v493, unsigned long v494) {
bb495:
  struct std__allocator_char_* __a496;
  unsigned long __n497;
  char* __retval498;
  char* __p499;
  __a496 = v493;
  __n497 = v494;
  struct std__allocator_char_* t500 = __a496;
  unsigned long t501 = __n497;
  char* r502 = std__allocator_traits_std__allocator_char_____allocate(t500, t501);
  __p499 = r502;
  char* t503 = __p499;
  __retval498 = t503;
  char* t504 = __retval498;
  return t504;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v505) {
bb506:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this507;
  struct std__allocator_char_* __retval508;
  this507 = v505;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t509 = this507;
  struct std__allocator_char_* base510 = (struct std__allocator_char_*)((char *)&(t509->_M_dataplus) + 0);
  __retval508 = base510;
  struct std__allocator_char_* t511 = __retval508;
  return t511;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v512, unsigned long* v513, unsigned long v514) {
bb515:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this516;
  unsigned long* __capacity517;
  unsigned long __old_capacity518;
  char* __retval519;
  this516 = v512;
  __capacity517 = v513;
  __old_capacity518 = v514;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t520 = this516;
    unsigned long* t521 = __capacity517;
    unsigned long t522 = *t521;
    unsigned long r523 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t520);
    _Bool c524 = ((t522 > r523)) ? 1 : 0;
    if (c524) {
      char* cast525 = (char*)&(_str_19);
      std____throw_length_error(cast525);
    }
    unsigned long* t526 = __capacity517;
    unsigned long t527 = *t526;
    unsigned long t528 = __old_capacity518;
    _Bool c529 = ((t527 > t528)) ? 1 : 0;
    _Bool ternary530;
    if (c529) {
      unsigned long* t531 = __capacity517;
      unsigned long t532 = *t531;
      unsigned long c533 = 2;
      unsigned long t534 = __old_capacity518;
      unsigned long b535 = c533 * t534;
      _Bool c536 = ((t532 < b535)) ? 1 : 0;
      ternary530 = (_Bool)c536;
    } else {
      _Bool c537 = 0;
      ternary530 = (_Bool)c537;
    }
    if (ternary530) {
      unsigned long c538 = 2;
      unsigned long t539 = __old_capacity518;
      unsigned long b540 = c538 * t539;
      unsigned long* t541 = __capacity517;
      *t541 = b540;
        unsigned long* t542 = __capacity517;
        unsigned long t543 = *t542;
        unsigned long r544 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t520);
        _Bool c545 = ((t543 > r544)) ? 1 : 0;
        if (c545) {
          unsigned long r546 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t520);
          unsigned long* t547 = __capacity517;
          *t547 = r546;
        }
    }
  struct std__allocator_char_* r548 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t520);
  unsigned long* t549 = __capacity517;
  unsigned long t550 = *t549;
  unsigned long c551 = 1;
  unsigned long b552 = t550 + c551;
  char* r553 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r548, b552);
  __retval519 = r553;
  char* t554 = __retval519;
  return t554;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v555, unsigned long v556) {
bb557:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this558;
  unsigned long __capacity559;
  this558 = v555;
  __capacity559 = v556;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t560 = this558;
  unsigned long t561 = __capacity559;
  t560->field2._M_allocated_capacity = t561;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb562:
  _Bool __retval563;
    _Bool c564 = 0;
    __retval563 = c564;
    _Bool t565 = __retval563;
    return t565;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v566) {
bb567:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this568;
  this568 = v566;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t569 = this568;
    _Bool r570 = std__is_constant_evaluated();
    if (r570) {
        unsigned long __i571;
        unsigned long c572 = 0;
        __i571 = c572;
        while (1) {
          unsigned long t574 = __i571;
          unsigned long c575 = 15;
          _Bool c576 = ((t574 <= c575)) ? 1 : 0;
          if (!c576) break;
          char c577 = 0;
          unsigned long t578 = __i571;
          t569->field2._M_local_buf[t578] = c577;
        for_step573: ;
          unsigned long t579 = __i571;
          unsigned long u580 = t579 + 1;
          __i571 = u580;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v581, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v582) {
bb583:
  struct _Guard* this584;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s585;
  this584 = v581;
  __s585 = v582;
  struct _Guard* t586 = this584;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t587 = __s585;
  t586->_M_guarded = t587;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v588, char* v589) {
bb590:
  char* __location591;
  char* __args592;
  char* __retval593;
  void* __loc594;
  __location591 = v588;
  __args592 = v589;
  char* t595 = __location591;
  void* cast596 = (void*)t595;
  __loc594 = cast596;
    void* t597 = __loc594;
    char* cast598 = (char*)t597;
    char* t599 = __args592;
    char t600 = *t599;
    *cast598 = t600;
    __retval593 = cast598;
    char* t601 = __retval593;
    return t601;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v602, char* v603) {
bb604:
  char* __c1605;
  char* __c2606;
  __c1605 = v602;
  __c2606 = v603;
    _Bool r607 = std____is_constant_evaluated();
    if (r607) {
      char* t608 = __c1605;
      char* t609 = __c2606;
      char* r610 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t608, t609);
    } else {
      char* t611 = __c2606;
      char t612 = *t611;
      char* t613 = __c1605;
      *t613 = t612;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v614, char* v615, unsigned long v616) {
bb617:
  char* __s1618;
  char* __s2619;
  unsigned long __n620;
  char* __retval621;
  __s1618 = v614;
  __s2619 = v615;
  __n620 = v616;
    unsigned long t622 = __n620;
    unsigned long c623 = 0;
    _Bool c624 = ((t622 == c623)) ? 1 : 0;
    if (c624) {
      char* t625 = __s1618;
      __retval621 = t625;
      char* t626 = __retval621;
      return t626;
    }
    _Bool r627 = std____is_constant_evaluated();
    if (r627) {
        unsigned long __i628;
        unsigned long c629 = 0;
        __i628 = c629;
        while (1) {
          unsigned long t631 = __i628;
          unsigned long t632 = __n620;
          _Bool c633 = ((t631 < t632)) ? 1 : 0;
          if (!c633) break;
          char* t634 = __s1618;
          unsigned long t635 = __i628;
          char* ptr636 = &(t634)[t635];
          unsigned long t637 = __i628;
          char* t638 = __s2619;
          char* ptr639 = &(t638)[t637];
          char* r640 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr636, ptr639);
        for_step630: ;
          unsigned long t641 = __i628;
          unsigned long u642 = t641 + 1;
          __i628 = u642;
        }
      char* t643 = __s1618;
      __retval621 = t643;
      char* t644 = __retval621;
      return t644;
    }
  char* t645 = __s1618;
  void* cast646 = (void*)t645;
  char* t647 = __s2619;
  void* cast648 = (void*)t647;
  unsigned long t649 = __n620;
  unsigned long c650 = 1;
  unsigned long b651 = t649 * c650;
  void* r652 = memcpy(cast646, cast648, b651);
  char* t653 = __s1618;
  __retval621 = t653;
  char* t654 = __retval621;
  return t654;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v655, char* v656, unsigned long v657) {
bb658:
  char* __s1659;
  char* __s2660;
  unsigned long __n661;
  char* __retval662;
  __s1659 = v655;
  __s2660 = v656;
  __n661 = v657;
    unsigned long t663 = __n661;
    unsigned long c664 = 0;
    _Bool c665 = ((t663 == c664)) ? 1 : 0;
    if (c665) {
      char* t666 = __s1659;
      __retval662 = t666;
      char* t667 = __retval662;
      return t667;
    }
    _Bool r668 = std____is_constant_evaluated();
    if (r668) {
      char* t669 = __s1659;
      char* t670 = __s2660;
      unsigned long t671 = __n661;
      char* r672 = __gnu_cxx__char_traits_char___copy(t669, t670, t671);
      __retval662 = r672;
      char* t673 = __retval662;
      return t673;
    }
  char* t674 = __s1659;
  void* cast675 = (void*)t674;
  char* t676 = __s2660;
  void* cast677 = (void*)t676;
  unsigned long t678 = __n661;
  void* r679 = memcpy(cast675, cast677, t678);
  char* cast680 = (char*)r679;
  __retval662 = cast680;
  char* t681 = __retval662;
  return t681;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v682, char* v683, unsigned long v684) {
bb685:
  char* __d686;
  char* __s687;
  unsigned long __n688;
  __d686 = v682;
  __s687 = v683;
  __n688 = v684;
    unsigned long t689 = __n688;
    unsigned long c690 = 1;
    _Bool c691 = ((t689 == c690)) ? 1 : 0;
    if (c691) {
      char* t692 = __d686;
      char* t693 = __s687;
      std__char_traits_char___assign(t692, t693);
    } else {
      char* t694 = __d686;
      char* t695 = __s687;
      unsigned long t696 = __n688;
      char* r697 = std__char_traits_char___copy(t694, t695, t696);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v698) {
bb699:
  char* __it700;
  char* __retval701;
  __it700 = v698;
  char* t702 = __it700;
  __retval701 = t702;
  char* t703 = __retval701;
  return t703;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v704, char* v705, char* v706) {
bb707:
  char* __p708;
  char* __k1709;
  char* __k2710;
  __p708 = v704;
  __k1709 = v705;
  __k2710 = v706;
    char* t711 = __p708;
    char* t712 = __k1709;
    char* r713 = char_const__std____niter_base_char_const__(t712);
    char* t714 = __k2710;
    char* t715 = __k1709;
    long diff716 = t714 - t715;
    unsigned long cast717 = (unsigned long)diff716;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t711, r713, cast717);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v718) {
bb719:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this720;
  char* __retval721;
  this720 = v718;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t722 = this720;
  char* t723 = t722->_M_dataplus._M_p;
  __retval721 = t723;
  char* t724 = __retval721;
  return t724;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v725, unsigned long v726) {
bb727:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this728;
  unsigned long __length729;
  this728 = v725;
  __length729 = v726;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t730 = this728;
  unsigned long t731 = __length729;
  t730->_M_string_length = t731;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v732, unsigned long v733) {
bb734:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this735;
  unsigned long __n736;
  char ref_tmp0737;
  this735 = v732;
  __n736 = v733;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t738 = this735;
  unsigned long t739 = __n736;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t738, t739);
  unsigned long t740 = __n736;
  char* r741 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t738);
  char* ptr742 = &(r741)[t740];
  char c743 = 0;
  ref_tmp0737 = c743;
  std__char_traits_char___assign(ptr742, &ref_tmp0737);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v744) {
bb745:
  struct _Guard* this746;
  this746 = v744;
  struct _Guard* t747 = this746;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t748 = t747->_M_guarded;
    _Bool cast749 = (_Bool)t748;
    if (cast749) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t750 = t747->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t750);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v751, char* v752, char* v753, struct std__forward_iterator_tag v754) {
bb755:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this756;
  char* __beg757;
  char* __end758;
  struct std__forward_iterator_tag unnamed759;
  unsigned long __dnew760;
  struct _Guard __guard761;
  this756 = v751;
  __beg757 = v752;
  __end758 = v753;
  unnamed759 = v754;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t762 = this756;
  char* t763 = __beg757;
  char* t764 = __end758;
  long r765 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t763, t764);
  unsigned long cast766 = (unsigned long)r765;
  __dnew760 = cast766;
    unsigned long t767 = __dnew760;
    unsigned long c768 = 15;
    _Bool c769 = ((t767 > c768)) ? 1 : 0;
    if (c769) {
      unsigned long c770 = 0;
      char* r771 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t762, &__dnew760, c770);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t762, r771);
      unsigned long t772 = __dnew760;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t762, t772);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t762);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard761, t762);
    char* r773 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t762);
    char* t774 = __beg757;
    char* t775 = __end758;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r773, t774, t775);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c776 = ((void*)0);
    __guard761._M_guarded = c776;
    unsigned long t777 = __dnew760;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t762, t777);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard761);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v778) {
bb779:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this780;
  this780 = v778;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t781 = this780;
  {
    struct std__allocator_char_* base782 = (struct std__allocator_char_*)((char *)t781 + 0);
    std__allocator_char____allocator(base782);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v783, struct std____new_allocator_char_* v784) {
bb785:
  struct std____new_allocator_char_* this786;
  struct std____new_allocator_char_* unnamed787;
  this786 = v783;
  unnamed787 = v784;
  struct std____new_allocator_char_* t788 = this786;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v789, struct std__allocator_char_* v790) {
bb791:
  struct std__allocator_char_* this792;
  struct std__allocator_char_* __a793;
  this792 = v789;
  __a793 = v790;
  struct std__allocator_char_* t794 = this792;
  struct std____new_allocator_char_* base795 = (struct std____new_allocator_char_*)((char *)t794 + 0);
  struct std__allocator_char_* t796 = __a793;
  struct std____new_allocator_char_* base797 = (struct std____new_allocator_char_*)((char *)t796 + 0);
  std____new_allocator_char_____new_allocator(base795, base797);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v798) {
bb799:
  char* __r800;
  char* __retval801;
  __r800 = v798;
  char* t802 = __r800;
  __retval801 = t802;
  char* t803 = __retval801;
  return t803;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v804) {
bb805:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this806;
  char* __retval807;
  this806 = v804;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t808 = this806;
  char* cast809 = (char*)&(t808->field2._M_local_buf);
  char* r810 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast809);
  __retval807 = r810;
  char* t811 = __retval807;
  return t811;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v812) {
bb813:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this814;
  _Bool __retval815;
  this814 = v812;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t816 = this814;
    char* r817 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t816);
    char* r818 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t816);
    _Bool c819 = ((r817 == r818)) ? 1 : 0;
    if (c819) {
        unsigned long t820 = t816->_M_string_length;
        unsigned long c821 = 15;
        _Bool c822 = ((t820 > c821)) ? 1 : 0;
        if (c822) {
          __builtin_unreachable();
        }
      _Bool c823 = 1;
      __retval815 = c823;
      _Bool t824 = __retval815;
      return t824;
    }
  _Bool c825 = 0;
  __retval815 = c825;
  _Bool t826 = __retval815;
  return t826;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v827, char* v828, unsigned long v829) {
bb830:
  struct std____new_allocator_char_* this831;
  char* __p832;
  unsigned long __n833;
  this831 = v827;
  __p832 = v828;
  __n833 = v829;
  struct std____new_allocator_char_* t834 = this831;
    unsigned long c835 = 1;
    unsigned long c836 = 16;
    _Bool c837 = ((c835 > c836)) ? 1 : 0;
    if (c837) {
      char* t838 = __p832;
      void* cast839 = (void*)t838;
      unsigned long t840 = __n833;
      unsigned long c841 = 1;
      unsigned long b842 = t840 * c841;
      unsigned long c843 = 1;
      operator_delete_3(cast839, b842, c843);
      return;
    }
  char* t844 = __p832;
  void* cast845 = (void*)t844;
  unsigned long t846 = __n833;
  unsigned long c847 = 1;
  unsigned long b848 = t846 * c847;
  operator_delete_2(cast845, b848);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v849, char* v850, unsigned long v851) {
bb852:
  struct std__allocator_char_* this853;
  char* __p854;
  unsigned long __n855;
  this853 = v849;
  __p854 = v850;
  __n855 = v851;
  struct std__allocator_char_* t856 = this853;
    _Bool r857 = std____is_constant_evaluated();
    if (r857) {
      char* t858 = __p854;
      void* cast859 = (void*)t858;
      operator_delete(cast859);
      return;
    }
  struct std____new_allocator_char_* base860 = (struct std____new_allocator_char_*)((char *)t856 + 0);
  char* t861 = __p854;
  unsigned long t862 = __n855;
  std____new_allocator_char___deallocate(base860, t861, t862);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v863, char* v864, unsigned long v865) {
bb866:
  struct std__allocator_char_* __a867;
  char* __p868;
  unsigned long __n869;
  __a867 = v863;
  __p868 = v864;
  __n869 = v865;
  struct std__allocator_char_* t870 = __a867;
  char* t871 = __p868;
  unsigned long t872 = __n869;
  std__allocator_char___deallocate(t870, t871, t872);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v873, unsigned long v874) {
bb875:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this876;
  unsigned long __size877;
  this876 = v873;
  __size877 = v874;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t878 = this876;
  struct std__allocator_char_* r879 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t878);
  char* r880 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t878);
  unsigned long t881 = __size877;
  unsigned long c882 = 1;
  unsigned long b883 = t881 + c882;
  std__allocator_traits_std__allocator_char_____deallocate(r879, r880, b883);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v884) {
bb885:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this886;
  this886 = v884;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t887 = this886;
    _Bool r888 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t887);
    _Bool u889 = !r888;
    if (u889) {
      unsigned long t890 = t887->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t887, t890);
    }
  return;
}

