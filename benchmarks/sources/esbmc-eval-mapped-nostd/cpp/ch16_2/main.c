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
char _str[8] = "COMSPEC";
char _str_1[14] = "DOCUMENT_ROOT";
char _str_2[18] = "GATEWAY_INTERFACE";
char _str_3[12] = "HTTP_ACCEPT";
char _str_4[21] = "HTTP_ACCEPT_ENCODING";
char _str_5[21] = "HTTP_ACCEPT_LANGUAGE";
char _str_6[16] = "HTTP_CONNECTION";
char _str_7[10] = "HTTP_HOST";
char _str_8[16] = "HTTP_USER_AGENT";
char _str_9[5] = "PATH";
char _str_10[13] = "QUERY_STRING";
char _str_11[12] = "REMOTE_ADDR";
char _str_12[12] = "REMOTE_PORT";
char _str_13[15] = "REQUEST_METHOD";
char _str_14[12] = "REQUEST_URI";
char _str_15[16] = "SCRIPT_FILENAME";
char _str_16[12] = "SCRIPT_NAME";
char _str_17[12] = "SERVER_ADDR";
char _str_18[13] = "SERVER_ADMIN";
char _str_19[12] = "SERVER_NAME";
char _str_20[12] = "SERVER_PORT";
char _str_21[16] = "SERVER_PROTOCOL";
char _str_22[17] = "SERVER_SIGNATURE";
char _str_23[16] = "SERVER_SOFTWARE";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_24[26] = "Content-type: text/html\n\n";
char _str_25[24] = "<?xml version = \"1.0\"?>";
char _str_26[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_27[47] = "Transitional//EN\" \"http://www.w3.org/TR/xhtml1";
char _str_28[31] = "/DTD/xhtml1-transitional.dtd\">";
char _str_29[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_30[50] = "<head><title>Environment Variables</title></head>";
char _str_31[7] = "<body>";
char _str_32[39] = "<table border = \"0\" cellspacing = \"2\">";
char _str_33[9] = "<tr><td>";
char _str_34[10] = "</td><td>";
char _str_35[11] = "</td></tr>";
char _str_36[23] = "</table></body></html>";
char _str_37[50] = "basic_string: construction from null is not valid";
char _str_38[24] = "basic_string::_M_create";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
extern char* getenv(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
        char* cast20 = (char*)&(_str_37);
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

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v32) {
bb33:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this34;
  this34 = v32;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t35 = this34;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t35);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t35->_M_dataplus);
  }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v36, int v37) {
bb38:
  int __a39;
  int __b40;
  int __retval41;
  __a39 = v36;
  __b40 = v37;
  int t42 = __a39;
  int t43 = __b40;
  int b44 = t42 | t43;
  __retval41 = b44;
  int t45 = __retval41;
  return t45;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v46) {
bb47:
  struct std__basic_ios_char__std__char_traits_char__* this48;
  int __retval49;
  this48 = v46;
  struct std__basic_ios_char__std__char_traits_char__* t50 = this48;
  struct std__ios_base* base51 = (struct std__ios_base*)((char *)t50 + 0);
  int t52 = base51->_M_streambuf_state;
  __retval49 = t52;
  int t53 = __retval49;
  return t53;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v54, int v55) {
bb56:
  struct std__basic_ios_char__std__char_traits_char__* this57;
  int __state58;
  this57 = v54;
  __state58 = v55;
  struct std__basic_ios_char__std__char_traits_char__* t59 = this57;
  int r60 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t59);
  int t61 = __state58;
  int r62 = std__operator_(r60, t61);
  std__basic_ios_char__std__char_traits_char_____clear(t59, r62);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v63, char* v64) {
bb65:
  struct std__basic_ostream_char__std__char_traits_char__* __out66;
  char* __s67;
  struct std__basic_ostream_char__std__char_traits_char__* __retval68;
  __out66 = v63;
  __s67 = v64;
    char* t69 = __s67;
    _Bool cast70 = (_Bool)t69;
    _Bool u71 = !cast70;
    if (u71) {
      struct std__basic_ostream_char__std__char_traits_char__* t72 = __out66;
      void** v73 = (void**)t72;
      void* v74 = *((void**)v73);
      unsigned char* cast75 = (unsigned char*)v74;
      long c76 = -24;
      unsigned char* ptr77 = &(cast75)[c76];
      long* cast78 = (long*)ptr77;
      long t79 = *cast78;
      unsigned char* cast80 = (unsigned char*)t72;
      unsigned char* ptr81 = &(cast80)[t79];
      struct std__basic_ostream_char__std__char_traits_char__* cast82 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr81;
      struct std__basic_ios_char__std__char_traits_char__* cast83 = (struct std__basic_ios_char__std__char_traits_char__*)cast82;
      int t84 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast83, t84);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t85 = __out66;
      char* t86 = __s67;
      char* t87 = __s67;
      unsigned long r88 = std__char_traits_char___length(t87);
      long cast89 = (long)r88;
      struct std__basic_ostream_char__std__char_traits_char__* r90 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t85, t86, cast89);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t91 = __out66;
  __retval68 = t91;
  struct std__basic_ostream_char__std__char_traits_char__* t92 = __retval68;
  return t92;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v93) {
bb94:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this95;
  char* __retval96;
  this95 = v93;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t97 = this95;
  char* r98 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t97);
  __retval96 = r98;
  char* t99 = __retval96;
  return t99;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v100) {
bb101:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this102;
  unsigned long __retval103;
  unsigned long __sz104;
  this102 = v100;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t105 = this102;
  unsigned long t106 = t105->_M_string_length;
  __sz104 = t106;
    unsigned long t107 = __sz104;
    unsigned long r108 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t105);
    _Bool c109 = ((t107 > r108)) ? 1 : 0;
    if (c109) {
      __builtin_unreachable();
    }
  unsigned long t110 = __sz104;
  __retval103 = t110;
  unsigned long t111 = __retval103;
  return t111;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v112, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v113) {
bb114:
  struct std__basic_ostream_char__std__char_traits_char__* __os115;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str116;
  struct std__basic_ostream_char__std__char_traits_char__* __retval117;
  __os115 = v112;
  __str116 = v113;
  struct std__basic_ostream_char__std__char_traits_char__* t118 = __os115;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t119 = __str116;
  char* r120 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t119);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t121 = __str116;
  unsigned long r122 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t121);
  long cast123 = (long)r122;
  struct std__basic_ostream_char__std__char_traits_char__* r124 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t118, r120, cast123);
  __retval117 = r124;
  struct std__basic_ostream_char__std__char_traits_char__* t125 = __retval117;
  return t125;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v126) {
bb127:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this128;
  char* __retval129;
  this128 = v126;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t130 = this128;
  char* r131 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t130);
  __retval129 = r131;
  char* t132 = __retval129;
  return t132;
}

// function: main
int main() {
bb133:
  int __retval134;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ environmentVariables135[24];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* arrayinit_endOfInit136;
  struct std__allocator_char_ ref_tmp0137;
  struct std__allocator_char_ ref_tmp1138;
  struct std__allocator_char_ ref_tmp2139;
  struct std__allocator_char_ ref_tmp3140;
  struct std__allocator_char_ ref_tmp4141;
  struct std__allocator_char_ ref_tmp5142;
  struct std__allocator_char_ ref_tmp6143;
  struct std__allocator_char_ ref_tmp7144;
  struct std__allocator_char_ ref_tmp8145;
  struct std__allocator_char_ ref_tmp9146;
  struct std__allocator_char_ ref_tmp10147;
  struct std__allocator_char_ ref_tmp11148;
  struct std__allocator_char_ ref_tmp12149;
  struct std__allocator_char_ ref_tmp13150;
  struct std__allocator_char_ ref_tmp14151;
  struct std__allocator_char_ ref_tmp15152;
  struct std__allocator_char_ ref_tmp16153;
  struct std__allocator_char_ ref_tmp17154;
  struct std__allocator_char_ ref_tmp18155;
  struct std__allocator_char_ ref_tmp19156;
  struct std__allocator_char_ ref_tmp20157;
  struct std__allocator_char_ ref_tmp21158;
  struct std__allocator_char_ ref_tmp22159;
  struct std__allocator_char_ ref_tmp23160;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __array_idx161;
  int c162 = 0;
  __retval134 = c162;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* cast163 = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)&(environmentVariables135);
  arrayinit_endOfInit136 = cast163;
    char* cast164 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp0137);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(cast163, cast164, &ref_tmp0137);
      long c165 = 1;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr166 = &(cast163)[c165];
      arrayinit_endOfInit136 = ptr166;
      char* cast167 = (char*)&(_str_1);
      std__allocator_char___allocator_2(&ref_tmp1138);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr166, cast167, &ref_tmp1138);
        long c168 = 2;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr169 = &(cast163)[c168];
        arrayinit_endOfInit136 = ptr169;
        char* cast170 = (char*)&(_str_2);
        std__allocator_char___allocator_2(&ref_tmp2139);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr169, cast170, &ref_tmp2139);
          long c171 = 3;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr172 = &(cast163)[c171];
          arrayinit_endOfInit136 = ptr172;
          char* cast173 = (char*)&(_str_3);
          std__allocator_char___allocator_2(&ref_tmp3140);
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr172, cast173, &ref_tmp3140);
            long c174 = 4;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr175 = &(cast163)[c174];
            arrayinit_endOfInit136 = ptr175;
            char* cast176 = (char*)&(_str_4);
            std__allocator_char___allocator_2(&ref_tmp4141);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr175, cast176, &ref_tmp4141);
              long c177 = 5;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr178 = &(cast163)[c177];
              arrayinit_endOfInit136 = ptr178;
              char* cast179 = (char*)&(_str_5);
              std__allocator_char___allocator_2(&ref_tmp5142);
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr178, cast179, &ref_tmp5142);
                long c180 = 6;
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr181 = &(cast163)[c180];
                arrayinit_endOfInit136 = ptr181;
                char* cast182 = (char*)&(_str_6);
                std__allocator_char___allocator_2(&ref_tmp6143);
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr181, cast182, &ref_tmp6143);
                  long c183 = 7;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr184 = &(cast163)[c183];
                  arrayinit_endOfInit136 = ptr184;
                  char* cast185 = (char*)&(_str_7);
                  std__allocator_char___allocator_2(&ref_tmp7144);
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr184, cast185, &ref_tmp7144);
                    long c186 = 8;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr187 = &(cast163)[c186];
                    arrayinit_endOfInit136 = ptr187;
                    char* cast188 = (char*)&(_str_8);
                    std__allocator_char___allocator_2(&ref_tmp8145);
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr187, cast188, &ref_tmp8145);
                      long c189 = 9;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr190 = &(cast163)[c189];
                      arrayinit_endOfInit136 = ptr190;
                      char* cast191 = (char*)&(_str_9);
                      std__allocator_char___allocator_2(&ref_tmp9146);
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr190, cast191, &ref_tmp9146);
                        long c192 = 10;
                        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr193 = &(cast163)[c192];
                        arrayinit_endOfInit136 = ptr193;
                        char* cast194 = (char*)&(_str_10);
                        std__allocator_char___allocator_2(&ref_tmp10147);
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr193, cast194, &ref_tmp10147);
                          long c195 = 11;
                          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr196 = &(cast163)[c195];
                          arrayinit_endOfInit136 = ptr196;
                          char* cast197 = (char*)&(_str_11);
                          std__allocator_char___allocator_2(&ref_tmp11148);
                            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr196, cast197, &ref_tmp11148);
                            long c198 = 12;
                            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr199 = &(cast163)[c198];
                            arrayinit_endOfInit136 = ptr199;
                            char* cast200 = (char*)&(_str_12);
                            std__allocator_char___allocator_2(&ref_tmp12149);
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr199, cast200, &ref_tmp12149);
                              long c201 = 13;
                              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr202 = &(cast163)[c201];
                              arrayinit_endOfInit136 = ptr202;
                              char* cast203 = (char*)&(_str_13);
                              std__allocator_char___allocator_2(&ref_tmp13150);
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr202, cast203, &ref_tmp13150);
                                long c204 = 14;
                                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr205 = &(cast163)[c204];
                                arrayinit_endOfInit136 = ptr205;
                                char* cast206 = (char*)&(_str_14);
                                std__allocator_char___allocator_2(&ref_tmp14151);
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr205, cast206, &ref_tmp14151);
                                  long c207 = 15;
                                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr208 = &(cast163)[c207];
                                  arrayinit_endOfInit136 = ptr208;
                                  char* cast209 = (char*)&(_str_15);
                                  std__allocator_char___allocator_2(&ref_tmp15152);
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr208, cast209, &ref_tmp15152);
                                    long c210 = 16;
                                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr211 = &(cast163)[c210];
                                    arrayinit_endOfInit136 = ptr211;
                                    char* cast212 = (char*)&(_str_16);
                                    std__allocator_char___allocator_2(&ref_tmp16153);
                                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr211, cast212, &ref_tmp16153);
                                      long c213 = 17;
                                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr214 = &(cast163)[c213];
                                      arrayinit_endOfInit136 = ptr214;
                                      char* cast215 = (char*)&(_str_17);
                                      std__allocator_char___allocator_2(&ref_tmp17154);
                                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr214, cast215, &ref_tmp17154);
                                        long c216 = 18;
                                        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr217 = &(cast163)[c216];
                                        arrayinit_endOfInit136 = ptr217;
                                        char* cast218 = (char*)&(_str_18);
                                        std__allocator_char___allocator_2(&ref_tmp18155);
                                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr217, cast218, &ref_tmp18155);
                                          long c219 = 19;
                                          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr220 = &(cast163)[c219];
                                          arrayinit_endOfInit136 = ptr220;
                                          char* cast221 = (char*)&(_str_19);
                                          std__allocator_char___allocator_2(&ref_tmp19156);
                                            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr220, cast221, &ref_tmp19156);
                                            long c222 = 20;
                                            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr223 = &(cast163)[c222];
                                            arrayinit_endOfInit136 = ptr223;
                                            char* cast224 = (char*)&(_str_20);
                                            std__allocator_char___allocator_2(&ref_tmp20157);
                                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr223, cast224, &ref_tmp20157);
                                              long c225 = 21;
                                              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr226 = &(cast163)[c225];
                                              arrayinit_endOfInit136 = ptr226;
                                              char* cast227 = (char*)&(_str_21);
                                              std__allocator_char___allocator_2(&ref_tmp21158);
                                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr226, cast227, &ref_tmp21158);
                                                long c228 = 22;
                                                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr229 = &(cast163)[c228];
                                                arrayinit_endOfInit136 = ptr229;
                                                char* cast230 = (char*)&(_str_22);
                                                std__allocator_char___allocator_2(&ref_tmp22159);
                                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr229, cast230, &ref_tmp22159);
                                                  long c231 = 23;
                                                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr232 = &(cast163)[c231];
                                                  arrayinit_endOfInit136 = ptr232;
                                                  char* cast233 = (char*)&(_str_23);
                                                  std__allocator_char___allocator_2(&ref_tmp23160);
                                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(ptr232, cast233, &ref_tmp23160);
                                                  {
                                                    std__allocator_char____allocator(&ref_tmp23160);
                                                  }
                                                {
                                                  std__allocator_char____allocator(&ref_tmp22159);
                                                }
                                              {
                                                std__allocator_char____allocator(&ref_tmp21158);
                                              }
                                            {
                                              std__allocator_char____allocator(&ref_tmp20157);
                                            }
                                          {
                                            std__allocator_char____allocator(&ref_tmp19156);
                                          }
                                        {
                                          std__allocator_char____allocator(&ref_tmp18155);
                                        }
                                      {
                                        std__allocator_char____allocator(&ref_tmp17154);
                                      }
                                    {
                                      std__allocator_char____allocator(&ref_tmp16153);
                                    }
                                  {
                                    std__allocator_char____allocator(&ref_tmp15152);
                                  }
                                {
                                  std__allocator_char____allocator(&ref_tmp14151);
                                }
                              {
                                std__allocator_char____allocator(&ref_tmp13150);
                              }
                            {
                              std__allocator_char____allocator(&ref_tmp12149);
                            }
                          {
                            std__allocator_char____allocator(&ref_tmp11148);
                          }
                        {
                          std__allocator_char____allocator(&ref_tmp10147);
                        }
                      {
                        std__allocator_char____allocator(&ref_tmp9146);
                      }
                    {
                      std__allocator_char____allocator(&ref_tmp8145);
                    }
                  {
                    std__allocator_char____allocator(&ref_tmp7144);
                  }
                {
                  std__allocator_char____allocator(&ref_tmp6143);
                }
              {
                std__allocator_char____allocator(&ref_tmp5142);
              }
            {
              std__allocator_char____allocator(&ref_tmp4141);
            }
          {
            std__allocator_char____allocator(&ref_tmp3140);
          }
        {
          std__allocator_char____allocator(&ref_tmp2139);
        }
      {
        std__allocator_char____allocator(&ref_tmp1138);
      }
    {
      std__allocator_char____allocator(&ref_tmp0137);
    }
    char* cast234 = (char*)&(_str_24);
    struct std__basic_ostream_char__std__char_traits_char__* r235 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast234);
    char* cast236 = (char*)&(_str_25);
    struct std__basic_ostream_char__std__char_traits_char__* r237 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast236);
    char* cast238 = (char*)&(_str_26);
    struct std__basic_ostream_char__std__char_traits_char__* r239 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r237, cast238);
    char* cast240 = (char*)&(_str_27);
    struct std__basic_ostream_char__std__char_traits_char__* r241 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r239, cast240);
    char* cast242 = (char*)&(_str_28);
    struct std__basic_ostream_char__std__char_traits_char__* r243 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r241, cast242);
    char* cast244 = (char*)&(_str_29);
    struct std__basic_ostream_char__std__char_traits_char__* r245 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast244);
    char* cast246 = (char*)&(_str_30);
    struct std__basic_ostream_char__std__char_traits_char__* r247 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r245, cast246);
    char* cast248 = (char*)&(_str_31);
    struct std__basic_ostream_char__std__char_traits_char__* r249 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r247, cast248);
    char* cast250 = (char*)&(_str_32);
    struct std__basic_ostream_char__std__char_traits_char__* r251 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast250);
      int i252;
      int c253 = 0;
      i252 = c253;
      while (1) {
        int t255 = i252;
        int c256 = 24;
        _Bool c257 = ((t255 < c256)) ? 1 : 0;
        if (!c257) break;
        char* cast258 = (char*)&(_str_33);
        struct std__basic_ostream_char__std__char_traits_char__* r259 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast258);
        int t260 = i252;
        long cast261 = (long)t260;
        struct std__basic_ostream_char__std__char_traits_char__* r262 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r259, &environmentVariables135[cast261]);
        char* cast263 = (char*)&(_str_34);
        struct std__basic_ostream_char__std__char_traits_char__* r264 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r262, cast263);
        int t265 = i252;
        long cast266 = (long)t265;
        char* r267 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data(&environmentVariables135[cast266]);
        char* r268 = getenv(r267);
        struct std__basic_ostream_char__std__char_traits_char__* r269 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r264, r268);
        char* cast270 = (char*)&(_str_35);
        struct std__basic_ostream_char__std__char_traits_char__* r271 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r269, cast270);
      for_step254: ;
        int t272 = i252;
        int u273 = t272 + 1;
        i252 = u273;
      }
    char* cast274 = (char*)&(_str_36);
    struct std__basic_ostream_char__std__char_traits_char__* r275 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast274);
    int c276 = 0;
    __retval134 = c276;
    int t277 = __retval134;
    int ret_val278 = t277;
    {
      unsigned long c279 = 24;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* cast280 = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)&(environmentVariables135);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr281 = &(cast280)[c279];
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __array_idx282;
      __array_idx282 = ptr281;
      do {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t283 = __array_idx282;
        long c284 = -1;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr285 = &(t283)[c284];
        __array_idx282 = ptr285;
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(ptr285);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t286 = __array_idx282;
        _Bool c287 = ((t286 != cast280)) ? 1 : 0;
        if (!c287) break;
      } while (1);
    }
    return ret_val278;
  int t288 = __retval134;
  return t288;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v289) {
bb290:
  struct std____new_allocator_char_* this291;
  this291 = v289;
  struct std____new_allocator_char_* t292 = this291;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v293) {
bb294:
  char* __r295;
  char* __retval296;
  __r295 = v293;
  char* t297 = __r295;
  __retval296 = t297;
  char* t298 = __retval296;
  return t298;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v299) {
bb300:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this301;
  char* __retval302;
  this301 = v299;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t303 = this301;
  char* cast304 = (char*)&(t303->field2._M_local_buf);
  char* r305 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast304);
  __retval302 = r305;
  char* t306 = __retval302;
  return t306;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v307, char* v308, struct std__allocator_char_* v309) {
bb310:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this311;
  char* __dat312;
  struct std__allocator_char_* __a313;
  this311 = v307;
  __dat312 = v308;
  __a313 = v309;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t314 = this311;
  struct std__allocator_char_* base315 = (struct std__allocator_char_*)((char *)t314 + 0);
  struct std__allocator_char_* t316 = __a313;
  std__allocator_char___allocator(base315, t316);
    char* t317 = __dat312;
    t314->_M_p = t317;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb318:
  _Bool __retval319;
    _Bool c320 = 0;
    __retval319 = c320;
    _Bool t321 = __retval319;
    return t321;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v322, char* v323) {
bb324:
  char* __c1325;
  char* __c2326;
  _Bool __retval327;
  __c1325 = v322;
  __c2326 = v323;
  char* t328 = __c1325;
  char t329 = *t328;
  int cast330 = (int)t329;
  char* t331 = __c2326;
  char t332 = *t331;
  int cast333 = (int)t332;
  _Bool c334 = ((cast330 == cast333)) ? 1 : 0;
  __retval327 = c334;
  _Bool t335 = __retval327;
  return t335;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v336) {
bb337:
  char* __p338;
  unsigned long __retval339;
  unsigned long __i340;
  __p338 = v336;
  unsigned long c341 = 0;
  __i340 = c341;
    char ref_tmp0342;
    while (1) {
      unsigned long t343 = __i340;
      char* t344 = __p338;
      char* ptr345 = &(t344)[t343];
      char c346 = 0;
      ref_tmp0342 = c346;
      _Bool r347 = __gnu_cxx__char_traits_char___eq(ptr345, &ref_tmp0342);
      _Bool u348 = !r347;
      if (!u348) break;
      unsigned long t349 = __i340;
      unsigned long u350 = t349 + 1;
      __i340 = u350;
    }
  unsigned long t351 = __i340;
  __retval339 = t351;
  unsigned long t352 = __retval339;
  return t352;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v353) {
bb354:
  char* __s355;
  unsigned long __retval356;
  __s355 = v353;
    _Bool r357 = std____is_constant_evaluated();
    if (r357) {
      char* t358 = __s355;
      unsigned long r359 = __gnu_cxx__char_traits_char___length(t358);
      __retval356 = r359;
      unsigned long t360 = __retval356;
      return t360;
    }
  char* t361 = __s355;
  unsigned long r362 = strlen(t361);
  __retval356 = r362;
  unsigned long t363 = __retval356;
  return t363;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v364, char* v365, struct std__random_access_iterator_tag v366) {
bb367:
  char* __first368;
  char* __last369;
  struct std__random_access_iterator_tag unnamed370;
  long __retval371;
  __first368 = v364;
  __last369 = v365;
  unnamed370 = v366;
  char* t372 = __last369;
  char* t373 = __first368;
  long diff374 = t372 - t373;
  __retval371 = diff374;
  long t375 = __retval371;
  return t375;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v376) {
bb377:
  char** unnamed378;
  struct std__random_access_iterator_tag __retval379;
  unnamed378 = v376;
  struct std__random_access_iterator_tag t380 = __retval379;
  return t380;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v381, char* v382) {
bb383:
  char* __first384;
  char* __last385;
  long __retval386;
  struct std__random_access_iterator_tag agg_tmp0387;
  __first384 = v381;
  __last385 = v382;
  char* t388 = __first384;
  char* t389 = __last385;
  struct std__random_access_iterator_tag r390 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first384);
  agg_tmp0387 = r390;
  struct std__random_access_iterator_tag t391 = agg_tmp0387;
  long r392 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t388, t389, t391);
  __retval386 = r392;
  long t393 = __retval386;
  return t393;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v394, char* v395) {
bb396:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this397;
  char* __p398;
  this397 = v394;
  __p398 = v395;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t399 = this397;
  char* t400 = __p398;
  t399->_M_dataplus._M_p = t400;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v401) {
bb402:
  struct std__allocator_char_* __a403;
  unsigned long __retval404;
  __a403 = v401;
  unsigned long c405 = -1;
  unsigned long c406 = 1;
  unsigned long b407 = c405 / c406;
  __retval404 = b407;
  unsigned long t408 = __retval404;
  return t408;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v409) {
bb410:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this411;
  struct std__allocator_char_* __retval412;
  this411 = v409;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t413 = this411;
  struct std__allocator_char_* base414 = (struct std__allocator_char_*)((char *)&(t413->_M_dataplus) + 0);
  __retval412 = base414;
  struct std__allocator_char_* t415 = __retval412;
  return t415;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v416, unsigned long* v417) {
bb418:
  unsigned long* __a419;
  unsigned long* __b420;
  unsigned long* __retval421;
  __a419 = v416;
  __b420 = v417;
    unsigned long* t422 = __b420;
    unsigned long t423 = *t422;
    unsigned long* t424 = __a419;
    unsigned long t425 = *t424;
    _Bool c426 = ((t423 < t425)) ? 1 : 0;
    if (c426) {
      unsigned long* t427 = __b420;
      __retval421 = t427;
      unsigned long* t428 = __retval421;
      return t428;
    }
  unsigned long* t429 = __a419;
  __retval421 = t429;
  unsigned long* t430 = __retval421;
  return t430;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v431) {
bb432:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this433;
  unsigned long __retval434;
  unsigned long __diffmax435;
  unsigned long __allocmax436;
  this433 = v431;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t437 = this433;
  unsigned long c438 = 9223372036854775807;
  __diffmax435 = c438;
  struct std__allocator_char_* r439 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t437);
  unsigned long r440 = std__allocator_traits_std__allocator_char_____max_size(r439);
  __allocmax436 = r440;
  unsigned long* r441 = unsigned_long_const__std__min_unsigned_long_(&__diffmax435, &__allocmax436);
  unsigned long t442 = *r441;
  unsigned long c443 = 1;
  unsigned long b444 = t442 - c443;
  __retval434 = b444;
  unsigned long t445 = __retval434;
  return t445;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v446) {
bb447:
  struct std____new_allocator_char_* this448;
  unsigned long __retval449;
  this448 = v446;
  struct std____new_allocator_char_* t450 = this448;
  unsigned long c451 = 9223372036854775807;
  unsigned long c452 = 1;
  unsigned long b453 = c451 / c452;
  __retval449 = b453;
  unsigned long t454 = __retval449;
  return t454;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v455, unsigned long v456, void* v457) {
bb458:
  struct std____new_allocator_char_* this459;
  unsigned long __n460;
  void* unnamed461;
  char* __retval462;
  this459 = v455;
  __n460 = v456;
  unnamed461 = v457;
  struct std____new_allocator_char_* t463 = this459;
    unsigned long t464 = __n460;
    unsigned long r465 = std____new_allocator_char____M_max_size___const(t463);
    _Bool c466 = ((t464 > r465)) ? 1 : 0;
    if (c466) {
        unsigned long t467 = __n460;
        unsigned long c468 = -1;
        unsigned long c469 = 1;
        unsigned long b470 = c468 / c469;
        _Bool c471 = ((t467 > b470)) ? 1 : 0;
        if (c471) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c472 = 1;
    unsigned long c473 = 16;
    _Bool c474 = ((c472 > c473)) ? 1 : 0;
    if (c474) {
      unsigned long __al475;
      unsigned long c476 = 1;
      __al475 = c476;
      unsigned long t477 = __n460;
      unsigned long c478 = 1;
      unsigned long b479 = t477 * c478;
      unsigned long t480 = __al475;
      void* r481 = operator_new_2(b479, t480);
      char* cast482 = (char*)r481;
      __retval462 = cast482;
      char* t483 = __retval462;
      return t483;
    }
  unsigned long t484 = __n460;
  unsigned long c485 = 1;
  unsigned long b486 = t484 * c485;
  void* r487 = operator_new(b486);
  char* cast488 = (char*)r487;
  __retval462 = cast488;
  char* t489 = __retval462;
  return t489;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v490, unsigned long v491) {
bb492:
  struct std__allocator_char_* this493;
  unsigned long __n494;
  char* __retval495;
  this493 = v490;
  __n494 = v491;
  struct std__allocator_char_* t496 = this493;
    _Bool r497 = std____is_constant_evaluated();
    if (r497) {
        unsigned long t498 = __n494;
        unsigned long c499 = 1;
        unsigned long ovr500;
        _Bool ovf501 = __builtin_mul_overflow(t498, c499, &ovr500);
        __n494 = ovr500;
        if (ovf501) {
          std____throw_bad_array_new_length();
        }
      unsigned long t502 = __n494;
      void* r503 = operator_new(t502);
      char* cast504 = (char*)r503;
      __retval495 = cast504;
      char* t505 = __retval495;
      return t505;
    }
  struct std____new_allocator_char_* base506 = (struct std____new_allocator_char_*)((char *)t496 + 0);
  unsigned long t507 = __n494;
  void* c508 = ((void*)0);
  char* r509 = std____new_allocator_char___allocate(base506, t507, c508);
  __retval495 = r509;
  char* t510 = __retval495;
  return t510;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v511, unsigned long v512) {
bb513:
  struct std__allocator_char_* __a514;
  unsigned long __n515;
  char* __retval516;
  __a514 = v511;
  __n515 = v512;
  struct std__allocator_char_* t517 = __a514;
  unsigned long t518 = __n515;
  char* r519 = std__allocator_char___allocate(t517, t518);
  __retval516 = r519;
  char* t520 = __retval516;
  return t520;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v521, unsigned long v522) {
bb523:
  struct std__allocator_char_* __a524;
  unsigned long __n525;
  char* __retval526;
  char* __p527;
  __a524 = v521;
  __n525 = v522;
  struct std__allocator_char_* t528 = __a524;
  unsigned long t529 = __n525;
  char* r530 = std__allocator_traits_std__allocator_char_____allocate(t528, t529);
  __p527 = r530;
  char* t531 = __p527;
  __retval526 = t531;
  char* t532 = __retval526;
  return t532;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v533) {
bb534:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this535;
  struct std__allocator_char_* __retval536;
  this535 = v533;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t537 = this535;
  struct std__allocator_char_* base538 = (struct std__allocator_char_*)((char *)&(t537->_M_dataplus) + 0);
  __retval536 = base538;
  struct std__allocator_char_* t539 = __retval536;
  return t539;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v540, unsigned long* v541, unsigned long v542) {
bb543:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this544;
  unsigned long* __capacity545;
  unsigned long __old_capacity546;
  char* __retval547;
  this544 = v540;
  __capacity545 = v541;
  __old_capacity546 = v542;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t548 = this544;
    unsigned long* t549 = __capacity545;
    unsigned long t550 = *t549;
    unsigned long r551 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t548);
    _Bool c552 = ((t550 > r551)) ? 1 : 0;
    if (c552) {
      char* cast553 = (char*)&(_str_38);
      std____throw_length_error(cast553);
    }
    unsigned long* t554 = __capacity545;
    unsigned long t555 = *t554;
    unsigned long t556 = __old_capacity546;
    _Bool c557 = ((t555 > t556)) ? 1 : 0;
    _Bool ternary558;
    if (c557) {
      unsigned long* t559 = __capacity545;
      unsigned long t560 = *t559;
      unsigned long c561 = 2;
      unsigned long t562 = __old_capacity546;
      unsigned long b563 = c561 * t562;
      _Bool c564 = ((t560 < b563)) ? 1 : 0;
      ternary558 = (_Bool)c564;
    } else {
      _Bool c565 = 0;
      ternary558 = (_Bool)c565;
    }
    if (ternary558) {
      unsigned long c566 = 2;
      unsigned long t567 = __old_capacity546;
      unsigned long b568 = c566 * t567;
      unsigned long* t569 = __capacity545;
      *t569 = b568;
        unsigned long* t570 = __capacity545;
        unsigned long t571 = *t570;
        unsigned long r572 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t548);
        _Bool c573 = ((t571 > r572)) ? 1 : 0;
        if (c573) {
          unsigned long r574 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t548);
          unsigned long* t575 = __capacity545;
          *t575 = r574;
        }
    }
  struct std__allocator_char_* r576 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t548);
  unsigned long* t577 = __capacity545;
  unsigned long t578 = *t577;
  unsigned long c579 = 1;
  unsigned long b580 = t578 + c579;
  char* r581 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r576, b580);
  __retval547 = r581;
  char* t582 = __retval547;
  return t582;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v583, unsigned long v584) {
bb585:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this586;
  unsigned long __capacity587;
  this586 = v583;
  __capacity587 = v584;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t588 = this586;
  unsigned long t589 = __capacity587;
  t588->field2._M_allocated_capacity = t589;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb590:
  _Bool __retval591;
    _Bool c592 = 0;
    __retval591 = c592;
    _Bool t593 = __retval591;
    return t593;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v594) {
bb595:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this596;
  this596 = v594;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t597 = this596;
    _Bool r598 = std__is_constant_evaluated();
    if (r598) {
        unsigned long __i599;
        unsigned long c600 = 0;
        __i599 = c600;
        while (1) {
          unsigned long t602 = __i599;
          unsigned long c603 = 15;
          _Bool c604 = ((t602 <= c603)) ? 1 : 0;
          if (!c604) break;
          char c605 = 0;
          unsigned long t606 = __i599;
          t597->field2._M_local_buf[t606] = c605;
        for_step601: ;
          unsigned long t607 = __i599;
          unsigned long u608 = t607 + 1;
          __i599 = u608;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v609, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v610) {
bb611:
  struct _Guard* this612;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s613;
  this612 = v609;
  __s613 = v610;
  struct _Guard* t614 = this612;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t615 = __s613;
  t614->_M_guarded = t615;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v616, char* v617) {
bb618:
  char* __location619;
  char* __args620;
  char* __retval621;
  void* __loc622;
  __location619 = v616;
  __args620 = v617;
  char* t623 = __location619;
  void* cast624 = (void*)t623;
  __loc622 = cast624;
    void* t625 = __loc622;
    char* cast626 = (char*)t625;
    char* t627 = __args620;
    char t628 = *t627;
    *cast626 = t628;
    __retval621 = cast626;
    char* t629 = __retval621;
    return t629;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v630, char* v631) {
bb632:
  char* __c1633;
  char* __c2634;
  __c1633 = v630;
  __c2634 = v631;
    _Bool r635 = std____is_constant_evaluated();
    if (r635) {
      char* t636 = __c1633;
      char* t637 = __c2634;
      char* r638 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t636, t637);
    } else {
      char* t639 = __c2634;
      char t640 = *t639;
      char* t641 = __c1633;
      *t641 = t640;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v642, char* v643, unsigned long v644) {
bb645:
  char* __s1646;
  char* __s2647;
  unsigned long __n648;
  char* __retval649;
  __s1646 = v642;
  __s2647 = v643;
  __n648 = v644;
    unsigned long t650 = __n648;
    unsigned long c651 = 0;
    _Bool c652 = ((t650 == c651)) ? 1 : 0;
    if (c652) {
      char* t653 = __s1646;
      __retval649 = t653;
      char* t654 = __retval649;
      return t654;
    }
    _Bool r655 = std____is_constant_evaluated();
    if (r655) {
        unsigned long __i656;
        unsigned long c657 = 0;
        __i656 = c657;
        while (1) {
          unsigned long t659 = __i656;
          unsigned long t660 = __n648;
          _Bool c661 = ((t659 < t660)) ? 1 : 0;
          if (!c661) break;
          char* t662 = __s1646;
          unsigned long t663 = __i656;
          char* ptr664 = &(t662)[t663];
          unsigned long t665 = __i656;
          char* t666 = __s2647;
          char* ptr667 = &(t666)[t665];
          char* r668 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr664, ptr667);
        for_step658: ;
          unsigned long t669 = __i656;
          unsigned long u670 = t669 + 1;
          __i656 = u670;
        }
      char* t671 = __s1646;
      __retval649 = t671;
      char* t672 = __retval649;
      return t672;
    }
  char* t673 = __s1646;
  void* cast674 = (void*)t673;
  char* t675 = __s2647;
  void* cast676 = (void*)t675;
  unsigned long t677 = __n648;
  unsigned long c678 = 1;
  unsigned long b679 = t677 * c678;
  void* r680 = memcpy(cast674, cast676, b679);
  char* t681 = __s1646;
  __retval649 = t681;
  char* t682 = __retval649;
  return t682;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v683, char* v684, unsigned long v685) {
bb686:
  char* __s1687;
  char* __s2688;
  unsigned long __n689;
  char* __retval690;
  __s1687 = v683;
  __s2688 = v684;
  __n689 = v685;
    unsigned long t691 = __n689;
    unsigned long c692 = 0;
    _Bool c693 = ((t691 == c692)) ? 1 : 0;
    if (c693) {
      char* t694 = __s1687;
      __retval690 = t694;
      char* t695 = __retval690;
      return t695;
    }
    _Bool r696 = std____is_constant_evaluated();
    if (r696) {
      char* t697 = __s1687;
      char* t698 = __s2688;
      unsigned long t699 = __n689;
      char* r700 = __gnu_cxx__char_traits_char___copy(t697, t698, t699);
      __retval690 = r700;
      char* t701 = __retval690;
      return t701;
    }
  char* t702 = __s1687;
  void* cast703 = (void*)t702;
  char* t704 = __s2688;
  void* cast705 = (void*)t704;
  unsigned long t706 = __n689;
  void* r707 = memcpy(cast703, cast705, t706);
  char* cast708 = (char*)r707;
  __retval690 = cast708;
  char* t709 = __retval690;
  return t709;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v710, char* v711, unsigned long v712) {
bb713:
  char* __d714;
  char* __s715;
  unsigned long __n716;
  __d714 = v710;
  __s715 = v711;
  __n716 = v712;
    unsigned long t717 = __n716;
    unsigned long c718 = 1;
    _Bool c719 = ((t717 == c718)) ? 1 : 0;
    if (c719) {
      char* t720 = __d714;
      char* t721 = __s715;
      std__char_traits_char___assign(t720, t721);
    } else {
      char* t722 = __d714;
      char* t723 = __s715;
      unsigned long t724 = __n716;
      char* r725 = std__char_traits_char___copy(t722, t723, t724);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v726) {
bb727:
  char* __it728;
  char* __retval729;
  __it728 = v726;
  char* t730 = __it728;
  __retval729 = t730;
  char* t731 = __retval729;
  return t731;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v732, char* v733, char* v734) {
bb735:
  char* __p736;
  char* __k1737;
  char* __k2738;
  __p736 = v732;
  __k1737 = v733;
  __k2738 = v734;
    char* t739 = __p736;
    char* t740 = __k1737;
    char* r741 = char_const__std____niter_base_char_const__(t740);
    char* t742 = __k2738;
    char* t743 = __k1737;
    long diff744 = t742 - t743;
    unsigned long cast745 = (unsigned long)diff744;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t739, r741, cast745);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v746) {
bb747:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this748;
  char* __retval749;
  this748 = v746;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t750 = this748;
  char* t751 = t750->_M_dataplus._M_p;
  __retval749 = t751;
  char* t752 = __retval749;
  return t752;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v753, unsigned long v754) {
bb755:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this756;
  unsigned long __length757;
  this756 = v753;
  __length757 = v754;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t758 = this756;
  unsigned long t759 = __length757;
  t758->_M_string_length = t759;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v760, unsigned long v761) {
bb762:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this763;
  unsigned long __n764;
  char ref_tmp0765;
  this763 = v760;
  __n764 = v761;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t766 = this763;
  unsigned long t767 = __n764;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t766, t767);
  unsigned long t768 = __n764;
  char* r769 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t766);
  char* ptr770 = &(r769)[t768];
  char c771 = 0;
  ref_tmp0765 = c771;
  std__char_traits_char___assign(ptr770, &ref_tmp0765);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v772) {
bb773:
  struct _Guard* this774;
  this774 = v772;
  struct _Guard* t775 = this774;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t776 = t775->_M_guarded;
    _Bool cast777 = (_Bool)t776;
    if (cast777) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t778 = t775->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t778);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v779, char* v780, char* v781, struct std__forward_iterator_tag v782) {
bb783:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this784;
  char* __beg785;
  char* __end786;
  struct std__forward_iterator_tag unnamed787;
  unsigned long __dnew788;
  struct _Guard __guard789;
  this784 = v779;
  __beg785 = v780;
  __end786 = v781;
  unnamed787 = v782;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t790 = this784;
  char* t791 = __beg785;
  char* t792 = __end786;
  long r793 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t791, t792);
  unsigned long cast794 = (unsigned long)r793;
  __dnew788 = cast794;
    unsigned long t795 = __dnew788;
    unsigned long c796 = 15;
    _Bool c797 = ((t795 > c796)) ? 1 : 0;
    if (c797) {
      unsigned long c798 = 0;
      char* r799 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t790, &__dnew788, c798);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t790, r799);
      unsigned long t800 = __dnew788;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t790, t800);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t790);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard789, t790);
    char* r801 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t790);
    char* t802 = __beg785;
    char* t803 = __end786;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r801, t802, t803);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c804 = ((void*)0);
    __guard789._M_guarded = c804;
    unsigned long t805 = __dnew788;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t790, t805);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard789);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v806) {
bb807:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this808;
  this808 = v806;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t809 = this808;
  {
    struct std__allocator_char_* base810 = (struct std__allocator_char_*)((char *)t809 + 0);
    std__allocator_char____allocator(base810);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v811, struct std____new_allocator_char_* v812) {
bb813:
  struct std____new_allocator_char_* this814;
  struct std____new_allocator_char_* unnamed815;
  this814 = v811;
  unnamed815 = v812;
  struct std____new_allocator_char_* t816 = this814;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v817, struct std__allocator_char_* v818) {
bb819:
  struct std__allocator_char_* this820;
  struct std__allocator_char_* __a821;
  this820 = v817;
  __a821 = v818;
  struct std__allocator_char_* t822 = this820;
  struct std____new_allocator_char_* base823 = (struct std____new_allocator_char_*)((char *)t822 + 0);
  struct std__allocator_char_* t824 = __a821;
  struct std____new_allocator_char_* base825 = (struct std____new_allocator_char_*)((char *)t824 + 0);
  std____new_allocator_char_____new_allocator(base823, base825);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v826) {
bb827:
  char* __r828;
  char* __retval829;
  __r828 = v826;
  char* t830 = __r828;
  __retval829 = t830;
  char* t831 = __retval829;
  return t831;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v832) {
bb833:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this834;
  char* __retval835;
  this834 = v832;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t836 = this834;
  char* cast837 = (char*)&(t836->field2._M_local_buf);
  char* r838 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast837);
  __retval835 = r838;
  char* t839 = __retval835;
  return t839;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v840) {
bb841:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this842;
  _Bool __retval843;
  this842 = v840;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t844 = this842;
    char* r845 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t844);
    char* r846 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t844);
    _Bool c847 = ((r845 == r846)) ? 1 : 0;
    if (c847) {
        unsigned long t848 = t844->_M_string_length;
        unsigned long c849 = 15;
        _Bool c850 = ((t848 > c849)) ? 1 : 0;
        if (c850) {
          __builtin_unreachable();
        }
      _Bool c851 = 1;
      __retval843 = c851;
      _Bool t852 = __retval843;
      return t852;
    }
  _Bool c853 = 0;
  __retval843 = c853;
  _Bool t854 = __retval843;
  return t854;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v855, char* v856, unsigned long v857) {
bb858:
  struct std____new_allocator_char_* this859;
  char* __p860;
  unsigned long __n861;
  this859 = v855;
  __p860 = v856;
  __n861 = v857;
  struct std____new_allocator_char_* t862 = this859;
    unsigned long c863 = 1;
    unsigned long c864 = 16;
    _Bool c865 = ((c863 > c864)) ? 1 : 0;
    if (c865) {
      char* t866 = __p860;
      void* cast867 = (void*)t866;
      unsigned long t868 = __n861;
      unsigned long c869 = 1;
      unsigned long b870 = t868 * c869;
      unsigned long c871 = 1;
      operator_delete_3(cast867, b870, c871);
      return;
    }
  char* t872 = __p860;
  void* cast873 = (void*)t872;
  unsigned long t874 = __n861;
  unsigned long c875 = 1;
  unsigned long b876 = t874 * c875;
  operator_delete_2(cast873, b876);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v877, char* v878, unsigned long v879) {
bb880:
  struct std__allocator_char_* this881;
  char* __p882;
  unsigned long __n883;
  this881 = v877;
  __p882 = v878;
  __n883 = v879;
  struct std__allocator_char_* t884 = this881;
    _Bool r885 = std____is_constant_evaluated();
    if (r885) {
      char* t886 = __p882;
      void* cast887 = (void*)t886;
      operator_delete(cast887);
      return;
    }
  struct std____new_allocator_char_* base888 = (struct std____new_allocator_char_*)((char *)t884 + 0);
  char* t889 = __p882;
  unsigned long t890 = __n883;
  std____new_allocator_char___deallocate(base888, t889, t890);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v891, char* v892, unsigned long v893) {
bb894:
  struct std__allocator_char_* __a895;
  char* __p896;
  unsigned long __n897;
  __a895 = v891;
  __p896 = v892;
  __n897 = v893;
  struct std__allocator_char_* t898 = __a895;
  char* t899 = __p896;
  unsigned long t900 = __n897;
  std__allocator_char___deallocate(t898, t899, t900);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v901, unsigned long v902) {
bb903:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this904;
  unsigned long __size905;
  this904 = v901;
  __size905 = v902;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t906 = this904;
  struct std__allocator_char_* r907 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t906);
  char* r908 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t906);
  unsigned long t909 = __size905;
  unsigned long c910 = 1;
  unsigned long b911 = t909 + c910;
  std__allocator_traits_std__allocator_char_____deallocate(r907, r908, b911);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v912) {
bb913:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this914;
  this914 = v912;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t915 = this914;
    _Bool r916 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t915);
    _Bool u917 = !r916;
    if (u917) {
      unsigned long t918 = t915->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t915, t918);
    }
  return;
}

