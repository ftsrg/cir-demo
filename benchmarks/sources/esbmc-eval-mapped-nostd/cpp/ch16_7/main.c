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
struct std__less_const_char___ { unsigned char __field0; };
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
char _str[1];
char _str_1[12] = "HTTP_COOKIE";
char _str_2[6] = "Name=";
char _str_3[5] = "age:";
char _str_4[7] = "color:";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[26] = "Content-Type: text/html\n\n";
char _str_6[24] = "<?xml version = \"1.0\"?>";
char _str_7[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_8[47] = "Transitional//EN\" \"http://www.w3.org/TR/xhtml1";
char _str_9[31] = "/DTD/xhtml1-transitional.dtd\">";
char _str_10[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_11[41] = "<head><title>Read Cookies</title></head>";
char _str_12[7] = "<body>";
char _str_13[47] = "<h3>The following data is saved in a cookie on";
char _str_14[20] = " your computer</h3>";
char _str_15[10] = "<p>Name: ";
char _str_16[10] = "<br/></p>";
char _str_17[9] = "<p>Age: ";
char _str_18[11] = "<p>Color: ";
char _str_19[23] = "<p>No cookie data.</p>";
char _str_20[15] = "</body></html>";
char _str_21[50] = "basic_string: construction from null is not valid";
char _str_22[24] = "basic_string::_M_create";
char _str_23[25] = "basic_string::_M_replace";
char _str_24[21] = "basic_string::substr";
char _str_25[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_26[27] = "basic_string::basic_string";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
extern char* getenv(char* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* p0, char* p1, char* p2);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void __gnu_cxx__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, char* p3, unsigned long p4, unsigned long p5);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* __gnu_cxx__char_traits_char___find(char* p0, unsigned long p1, char* p2);
char* std__char_traits_char___find(char* p0, unsigned long p1, char* p2);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, unsigned long p2, unsigned long p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
int main();
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);

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
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t14->_M_dataplus, r15, t16);
      char* t17 = __s10;
      char* c18 = ((void*)0);
      _Bool c19 = ((t17 == c18)) ? 1 : 0;
      if (c19) {
        char* cast20 = (char*)&(_str_21);
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v32, unsigned long v33, unsigned long v34, char* v35) {
bb36:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this37;
  unsigned long __n138;
  unsigned long __n239;
  char* __s40;
  this37 = v32;
  __n138 = v33;
  __n239 = v34;
  __s40 = v35;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t41 = this37;
    unsigned long r42 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t41);
    unsigned long r43 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t41);
    unsigned long t44 = __n138;
    unsigned long b45 = r43 - t44;
    unsigned long b46 = r42 - b45;
    unsigned long t47 = __n239;
    _Bool c48 = ((b46 < t47)) ? 1 : 0;
    if (c48) {
      char* t49 = __s40;
      std____throw_length_error(t49);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v50) {
bb51:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this52;
  unsigned long __retval53;
  unsigned long __sz54;
  this52 = v50;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t55 = this52;
  _Bool r56 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t55);
  unsigned long ternary57;
  if (r56) {
    unsigned long c58 = 15;
    ternary57 = (unsigned long)c58;
  } else {
    unsigned long t59 = t55->field2._M_allocated_capacity;
    ternary57 = (unsigned long)t59;
  }
  __sz54 = ternary57;
    unsigned long t60 = __sz54;
    unsigned long c61 = 15;
    _Bool c62 = ((t60 < c61)) ? 1 : 0;
    _Bool ternary63;
    if (c62) {
      _Bool c64 = 1;
      ternary63 = (_Bool)c64;
    } else {
      unsigned long t65 = __sz54;
      unsigned long r66 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t55);
      _Bool c67 = ((t65 > r66)) ? 1 : 0;
      ternary63 = (_Bool)c67;
    }
    if (ternary63) {
      __builtin_unreachable();
    }
  unsigned long t68 = __sz54;
  __retval53 = t68;
  unsigned long t69 = __retval53;
  return t69;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v70, char* v71, char* v72) {
bb73:
  struct std__less_const_char___* this74;
  char* __x75;
  char* __y76;
  _Bool __retval77;
  this74 = v70;
  __x75 = v71;
  __y76 = v72;
  struct std__less_const_char___* t78 = this74;
    _Bool r79 = std____is_constant_evaluated();
    if (r79) {
      char* t80 = __x75;
      char* t81 = __y76;
      _Bool c82 = ((t80 < t81)) ? 1 : 0;
      __retval77 = c82;
      _Bool t83 = __retval77;
      return t83;
    }
  char* t84 = __x75;
  unsigned long cast85 = (unsigned long)t84;
  char* t86 = __y76;
  unsigned long cast87 = (unsigned long)t86;
  _Bool c88 = ((cast85 < cast87)) ? 1 : 0;
  __retval77 = c88;
  _Bool t89 = __retval77;
  return t89;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v90, char* v91) {
bb92:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this93;
  char* __s94;
  _Bool __retval95;
  struct std__less_const_char___ ref_tmp096;
  this93 = v90;
  __s94 = v91;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t97 = this93;
  char* t98 = __s94;
  char* r99 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t97);
  _Bool r100 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp096, t98, r99);
  _Bool ternary101;
  if (r100) {
    _Bool c102 = 1;
    ternary101 = (_Bool)c102;
  } else {
    struct std__less_const_char___ ref_tmp1103;
    char* r104 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t97);
    unsigned long r105 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t97);
    char* ptr106 = &(r104)[r105];
    char* t107 = __s94;
    _Bool r108 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1103, ptr106, t107);
    ternary101 = (_Bool)r108;
  }
  __retval95 = ternary101;
  _Bool t109 = __retval95;
  return t109;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v110, char* v111) {
bb112:
  char* __c1113;
  char* __c2114;
  __c1113 = v110;
  __c2114 = v111;
    _Bool r115 = std____is_constant_evaluated();
    if (r115) {
      char* t116 = __c1113;
      char* t117 = __c2114;
      char* r118 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t116, t117);
    } else {
      char* t119 = __c2114;
      char t120 = *t119;
      char* t121 = __c1113;
      *t121 = t120;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v122, char* v123, unsigned long v124) {
bb125:
  char* __s1126;
  char* __s2127;
  unsigned long __n128;
  char* __retval129;
  __s1126 = v122;
  __s2127 = v123;
  __n128 = v124;
    unsigned long t130 = __n128;
    unsigned long c131 = 0;
    _Bool c132 = ((t130 == c131)) ? 1 : 0;
    if (c132) {
      char* t133 = __s1126;
      __retval129 = t133;
      char* t134 = __retval129;
      return t134;
    }
    _Bool r135 = std____is_constant_evaluated();
    if (r135) {
        char* t136 = __s2127;
        char* t137 = __s1126;
        _Bool c138 = ((t136 < t137)) ? 1 : 0;
        _Bool isconst139 = 0;
        _Bool ternary140;
        if (isconst139) {
          char* t141 = __s1126;
          char* t142 = __s2127;
          _Bool c143 = ((t141 > t142)) ? 1 : 0;
          ternary140 = (_Bool)c143;
        } else {
          _Bool c144 = 0;
          ternary140 = (_Bool)c144;
        }
        _Bool ternary145;
        if (ternary140) {
          char* t146 = __s1126;
          char* t147 = __s2127;
          unsigned long t148 = __n128;
          char* ptr149 = &(t147)[t148];
          _Bool c150 = ((t146 < ptr149)) ? 1 : 0;
          ternary145 = (_Bool)c150;
        } else {
          _Bool c151 = 0;
          ternary145 = (_Bool)c151;
        }
        if (ternary145) {
            do {
                unsigned long t152 = __n128;
                unsigned long u153 = t152 - 1;
                __n128 = u153;
                unsigned long t154 = __n128;
                char* t155 = __s1126;
                char* ptr156 = &(t155)[t154];
                unsigned long t157 = __n128;
                char* t158 = __s2127;
                char* ptr159 = &(t158)[t157];
                __gnu_cxx__char_traits_char___assign(ptr156, ptr159);
              unsigned long t160 = __n128;
              unsigned long c161 = 0;
              _Bool c162 = ((t160 > c161)) ? 1 : 0;
              if (!c162) break;
            } while (1);
        } else {
          char* t163 = __s1126;
          char* t164 = __s2127;
          unsigned long t165 = __n128;
          char* r166 = __gnu_cxx__char_traits_char___copy(t163, t164, t165);
        }
      char* t167 = __s1126;
      __retval129 = t167;
      char* t168 = __retval129;
      return t168;
    }
  char* t169 = __s1126;
  void* cast170 = (void*)t169;
  char* t171 = __s2127;
  void* cast172 = (void*)t171;
  unsigned long t173 = __n128;
  unsigned long c174 = 1;
  unsigned long b175 = t173 * c174;
  void* r176 = memmove(cast170, cast172, b175);
  char* t177 = __s1126;
  __retval129 = t177;
  char* t178 = __retval129;
  return t178;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v179, char* v180, unsigned long v181) {
bb182:
  char* __s1183;
  char* __s2184;
  unsigned long __n185;
  char* __retval186;
  __s1183 = v179;
  __s2184 = v180;
  __n185 = v181;
    unsigned long t187 = __n185;
    unsigned long c188 = 0;
    _Bool c189 = ((t187 == c188)) ? 1 : 0;
    if (c189) {
      char* t190 = __s1183;
      __retval186 = t190;
      char* t191 = __retval186;
      return t191;
    }
    _Bool r192 = std____is_constant_evaluated();
    if (r192) {
      char* t193 = __s1183;
      char* t194 = __s2184;
      unsigned long t195 = __n185;
      char* r196 = __gnu_cxx__char_traits_char___move(t193, t194, t195);
      __retval186 = r196;
      char* t197 = __retval186;
      return t197;
    }
  char* t198 = __s1183;
  void* cast199 = (void*)t198;
  char* t200 = __s2184;
  void* cast201 = (void*)t200;
  unsigned long t202 = __n185;
  void* r203 = memmove(cast199, cast201, t202);
  char* cast204 = (char*)r203;
  __retval186 = cast204;
  char* t205 = __retval186;
  return t205;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v206, char* v207, unsigned long v208) {
bb209:
  char* __d210;
  char* __s211;
  unsigned long __n212;
  __d210 = v206;
  __s211 = v207;
  __n212 = v208;
    unsigned long t213 = __n212;
    unsigned long c214 = 1;
    _Bool c215 = ((t213 == c214)) ? 1 : 0;
    if (c215) {
      char* t216 = __d210;
      char* t217 = __s211;
      std__char_traits_char___assign(t216, t217);
    } else {
      char* t218 = __d210;
      char* t219 = __s211;
      unsigned long t220 = __n212;
      char* r221 = std__char_traits_char___move(t218, t219, t220);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v222, char* v223, unsigned long v224, char* v225, unsigned long v226, unsigned long v227) {
bb228:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this229;
  char* __p230;
  unsigned long __len1231;
  char* __s232;
  unsigned long __len2233;
  unsigned long __how_much234;
  this229 = v222;
  __p230 = v223;
  __len1231 = v224;
  __s232 = v225;
  __len2233 = v226;
  __how_much234 = v227;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t235 = this229;
    unsigned long t236 = __len2233;
    _Bool cast237 = (_Bool)t236;
    _Bool ternary238;
    if (cast237) {
      unsigned long t239 = __len2233;
      unsigned long t240 = __len1231;
      _Bool c241 = ((t239 <= t240)) ? 1 : 0;
      ternary238 = (_Bool)c241;
    } else {
      _Bool c242 = 0;
      ternary238 = (_Bool)c242;
    }
    if (ternary238) {
      char* t243 = __p230;
      char* t244 = __s232;
      unsigned long t245 = __len2233;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t243, t244, t245);
    }
    unsigned long t246 = __how_much234;
    _Bool cast247 = (_Bool)t246;
    _Bool ternary248;
    if (cast247) {
      unsigned long t249 = __len1231;
      unsigned long t250 = __len2233;
      _Bool c251 = ((t249 != t250)) ? 1 : 0;
      ternary248 = (_Bool)c251;
    } else {
      _Bool c252 = 0;
      ternary248 = (_Bool)c252;
    }
    if (ternary248) {
      char* t253 = __p230;
      unsigned long t254 = __len2233;
      char* ptr255 = &(t253)[t254];
      char* t256 = __p230;
      unsigned long t257 = __len1231;
      char* ptr258 = &(t256)[t257];
      unsigned long t259 = __how_much234;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr255, ptr258, t259);
    }
    unsigned long t260 = __len2233;
    unsigned long t261 = __len1231;
    _Bool c262 = ((t260 > t261)) ? 1 : 0;
    if (c262) {
        char* t263 = __s232;
        unsigned long t264 = __len2233;
        char* ptr265 = &(t263)[t264];
        char* t266 = __p230;
        unsigned long t267 = __len1231;
        char* ptr268 = &(t266)[t267];
        _Bool c269 = ((ptr265 <= ptr268)) ? 1 : 0;
        if (c269) {
          char* t270 = __p230;
          char* t271 = __s232;
          unsigned long t272 = __len2233;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t270, t271, t272);
        } else {
            char* t273 = __s232;
            char* t274 = __p230;
            unsigned long t275 = __len1231;
            char* ptr276 = &(t274)[t275];
            _Bool c277 = ((t273 >= ptr276)) ? 1 : 0;
            if (c277) {
              unsigned long __poff278;
              char* t279 = __s232;
              char* t280 = __p230;
              long diff281 = t279 - t280;
              unsigned long cast282 = (unsigned long)diff281;
              unsigned long t283 = __len2233;
              unsigned long t284 = __len1231;
              unsigned long b285 = t283 - t284;
              unsigned long b286 = cast282 + b285;
              __poff278 = b286;
              char* t287 = __p230;
              char* t288 = __p230;
              unsigned long t289 = __poff278;
              char* ptr290 = &(t288)[t289];
              unsigned long t291 = __len2233;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t287, ptr290, t291);
            } else {
              unsigned long __nleft292;
              char* t293 = __p230;
              unsigned long t294 = __len1231;
              char* ptr295 = &(t293)[t294];
              char* t296 = __s232;
              long diff297 = ptr295 - t296;
              unsigned long cast298 = (unsigned long)diff297;
              __nleft292 = cast298;
              char* t299 = __p230;
              char* t300 = __s232;
              unsigned long t301 = __nleft292;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t299, t300, t301);
              char* t302 = __p230;
              unsigned long t303 = __nleft292;
              char* ptr304 = &(t302)[t303];
              char* t305 = __p230;
              unsigned long t306 = __len2233;
              char* ptr307 = &(t305)[t306];
              unsigned long t308 = __len2233;
              unsigned long t309 = __nleft292;
              unsigned long b310 = t308 - t309;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr304, ptr307, b310);
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v311) {
bb312:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this313;
  unsigned long __retval314;
  this313 = v311;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t315 = this313;
  unsigned long r316 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t315);
  __retval314 = r316;
  unsigned long t317 = __retval314;
  return t317;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v318, unsigned long v319, unsigned long v320, char* v321, unsigned long v322) {
bb323:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this324;
  unsigned long __pos325;
  unsigned long __len1326;
  char* __s327;
  unsigned long __len2328;
  unsigned long __how_much329;
  unsigned long __new_capacity330;
  char* __r331;
  this324 = v318;
  __pos325 = v319;
  __len1326 = v320;
  __s327 = v321;
  __len2328 = v322;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t332 = this324;
  unsigned long r333 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t332);
  unsigned long t334 = __pos325;
  unsigned long b335 = r333 - t334;
  unsigned long t336 = __len1326;
  unsigned long b337 = b335 - t336;
  __how_much329 = b337;
  unsigned long r338 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t332);
  unsigned long t339 = __len2328;
  unsigned long b340 = r338 + t339;
  unsigned long t341 = __len1326;
  unsigned long b342 = b340 - t341;
  __new_capacity330 = b342;
  unsigned long r343 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t332);
  char* r344 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t332, &__new_capacity330, r343);
  __r331 = r344;
    unsigned long t345 = __pos325;
    _Bool cast346 = (_Bool)t345;
    if (cast346) {
      char* t347 = __r331;
      char* r348 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t332);
      unsigned long t349 = __pos325;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t347, r348, t349);
    }
    char* t350 = __s327;
    _Bool cast351 = (_Bool)t350;
    _Bool ternary352;
    if (cast351) {
      unsigned long t353 = __len2328;
      _Bool cast354 = (_Bool)t353;
      ternary352 = (_Bool)cast354;
    } else {
      _Bool c355 = 0;
      ternary352 = (_Bool)c355;
    }
    if (ternary352) {
      char* t356 = __r331;
      unsigned long t357 = __pos325;
      char* ptr358 = &(t356)[t357];
      char* t359 = __s327;
      unsigned long t360 = __len2328;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr358, t359, t360);
    }
    unsigned long t361 = __how_much329;
    _Bool cast362 = (_Bool)t361;
    if (cast362) {
      char* t363 = __r331;
      unsigned long t364 = __pos325;
      char* ptr365 = &(t363)[t364];
      unsigned long t366 = __len2328;
      char* ptr367 = &(ptr365)[t366];
      char* r368 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t332);
      unsigned long t369 = __pos325;
      char* ptr370 = &(r368)[t369];
      unsigned long t371 = __len1326;
      char* ptr372 = &(ptr370)[t371];
      unsigned long t373 = __how_much329;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr367, ptr372, t373);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t332);
  char* t374 = __r331;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t332, t374);
  unsigned long t375 = __new_capacity330;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t332, t375);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v376, unsigned long v377, unsigned long v378, char* v379, unsigned long v380) {
bb381:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this382;
  unsigned long __pos383;
  unsigned long __len1384;
  char* __s385;
  unsigned long __len2386;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval387;
  unsigned long __old_size388;
  unsigned long __new_size389;
  this382 = v376;
  __pos383 = v377;
  __len1384 = v378;
  __s385 = v379;
  __len2386 = v380;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t390 = this382;
  unsigned long t391 = __len1384;
  unsigned long t392 = __len2386;
  char* cast393 = (char*)&(_str_23);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t390, t391, t392, cast393);
  unsigned long r394 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t390);
  __old_size388 = r394;
  unsigned long t395 = __old_size388;
  unsigned long t396 = __len2386;
  unsigned long b397 = t395 + t396;
  unsigned long t398 = __len1384;
  unsigned long b399 = b397 - t398;
  __new_size389 = b399;
    unsigned long t400 = __new_size389;
    unsigned long r401 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t390);
    _Bool c402 = ((t400 <= r401)) ? 1 : 0;
    if (c402) {
      char* __p403;
      unsigned long __how_much404;
      char* r405 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t390);
      unsigned long t406 = __pos383;
      char* ptr407 = &(r405)[t406];
      __p403 = ptr407;
      unsigned long t408 = __old_size388;
      unsigned long t409 = __pos383;
      unsigned long b410 = t408 - t409;
      unsigned long t411 = __len1384;
      unsigned long b412 = b410 - t411;
      __how_much404 = b412;
        _Bool r413 = std__is_constant_evaluated();
        if (r413) {
          char* __newp414;
          struct std__allocator_char_* r415 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t390);
          unsigned long t416 = __new_size389;
          char* r417 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r415, t416);
          __newp414 = r417;
          char* t418 = __newp414;
          char* r419 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t390);
          unsigned long t420 = __pos383;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t418, r419, t420);
          char* t421 = __newp414;
          unsigned long t422 = __pos383;
          char* ptr423 = &(t421)[t422];
          char* t424 = __s385;
          unsigned long t425 = __len2386;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr423, t424, t425);
          char* t426 = __newp414;
          unsigned long t427 = __pos383;
          char* ptr428 = &(t426)[t427];
          unsigned long t429 = __len2386;
          char* ptr430 = &(ptr428)[t429];
          char* t431 = __p403;
          unsigned long t432 = __len1384;
          char* ptr433 = &(t431)[t432];
          unsigned long t434 = __how_much404;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr430, ptr433, t434);
          char* r435 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t390);
          char* t436 = __newp414;
          unsigned long t437 = __new_size389;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r435, t436, t437);
          struct std__allocator_char_* r438 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t390);
          char* t439 = __newp414;
          unsigned long t440 = __new_size389;
          std__allocator_char___deallocate(r438, t439, t440);
        } else {
            char* t441 = __s385;
            _Bool r442 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t390, t441);
            if (r442) {
                unsigned long t443 = __how_much404;
                _Bool cast444 = (_Bool)t443;
                _Bool ternary445;
                if (cast444) {
                  unsigned long t446 = __len1384;
                  unsigned long t447 = __len2386;
                  _Bool c448 = ((t446 != t447)) ? 1 : 0;
                  ternary445 = (_Bool)c448;
                } else {
                  _Bool c449 = 0;
                  ternary445 = (_Bool)c449;
                }
                if (ternary445) {
                  char* t450 = __p403;
                  unsigned long t451 = __len2386;
                  char* ptr452 = &(t450)[t451];
                  char* t453 = __p403;
                  unsigned long t454 = __len1384;
                  char* ptr455 = &(t453)[t454];
                  unsigned long t456 = __how_much404;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr452, ptr455, t456);
                }
                unsigned long t457 = __len2386;
                _Bool cast458 = (_Bool)t457;
                if (cast458) {
                  char* t459 = __p403;
                  char* t460 = __s385;
                  unsigned long t461 = __len2386;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t459, t460, t461);
                }
            } else {
              char* t462 = __p403;
              unsigned long t463 = __len1384;
              char* t464 = __s385;
              unsigned long t465 = __len2386;
              unsigned long t466 = __how_much404;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t390, t462, t463, t464, t465, t466);
            }
        }
    } else {
      unsigned long t467 = __pos383;
      unsigned long t468 = __len1384;
      char* t469 = __s385;
      unsigned long t470 = __len2386;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t390, t467, t468, t469, t470);
    }
  unsigned long t471 = __new_size389;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t390, t471);
  __retval387 = t390;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t472 = __retval387;
  return t472;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v473) {
bb474:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this475;
  unsigned long __retval476;
  unsigned long __sz477;
  this475 = v473;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t478 = this475;
  unsigned long t479 = t478->_M_string_length;
  __sz477 = t479;
    unsigned long t480 = __sz477;
    unsigned long r481 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t478);
    _Bool c482 = ((t480 > r481)) ? 1 : 0;
    if (c482) {
      __builtin_unreachable();
    }
  unsigned long t483 = __sz477;
  __retval476 = t483;
  unsigned long t484 = __retval476;
  return t484;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v485, char* v486) {
bb487:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this488;
  char* __s489;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval490;
  this488 = v485;
  __s489 = v486;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t491 = this488;
  unsigned long c492 = 0;
  unsigned long r493 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t491);
  char* t494 = __s489;
  char* t495 = __s489;
  unsigned long r496 = std__char_traits_char___length(t495);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r497 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t491, c492, r493, t494, r496);
  __retval490 = r497;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t498 = __retval490;
  return t498;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v499, char* v500) {
bb501:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this502;
  char* __s503;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval504;
  this502 = v499;
  __s503 = v500;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t505 = this502;
  char* t506 = __s503;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r507 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(t505, t506);
  __retval504 = r507;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t508 = __retval504;
  return t508;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v509) {
bb510:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this511;
  char* __retval512;
  this511 = v509;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t513 = this511;
  char* r514 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t513);
  __retval512 = r514;
  char* t515 = __retval512;
  return t515;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4findEPKcmRS2_
char* __gnu_cxx__char_traits_char___find(char* v516, unsigned long v517, char* v518) {
bb519:
  char* __s520;
  unsigned long __n521;
  char* __a522;
  char* __retval523;
  __s520 = v516;
  __n521 = v517;
  __a522 = v518;
    unsigned long __i524;
    unsigned long c525 = 0;
    __i524 = c525;
    while (1) {
      unsigned long t527 = __i524;
      unsigned long t528 = __n521;
      _Bool c529 = ((t527 < t528)) ? 1 : 0;
      if (!c529) break;
        unsigned long t530 = __i524;
        char* t531 = __s520;
        char* ptr532 = &(t531)[t530];
        char* t533 = __a522;
        _Bool r534 = __gnu_cxx__char_traits_char___eq(ptr532, t533);
        if (r534) {
          char* t535 = __s520;
          unsigned long t536 = __i524;
          char* ptr537 = &(t535)[t536];
          __retval523 = ptr537;
          char* t538 = __retval523;
          char* ret_val539 = t538;
          return ret_val539;
        }
    for_step526: ;
      unsigned long t540 = __i524;
      unsigned long u541 = t540 + 1;
      __i524 = u541;
    }
  char* c542 = ((void*)0);
  __retval523 = c542;
  char* t543 = __retval523;
  return t543;
}

// function: _ZNSt11char_traitsIcE4findEPKcmRS1_
char* std__char_traits_char___find(char* v544, unsigned long v545, char* v546) {
bb547:
  char* __s548;
  unsigned long __n549;
  char* __a550;
  char* __retval551;
  __s548 = v544;
  __n549 = v545;
  __a550 = v546;
    unsigned long t552 = __n549;
    unsigned long c553 = 0;
    _Bool c554 = ((t552 == c553)) ? 1 : 0;
    if (c554) {
      char* c555 = ((void*)0);
      __retval551 = c555;
      char* t556 = __retval551;
      return t556;
    }
    _Bool r557 = std____is_constant_evaluated();
    if (r557) {
      char* t558 = __s548;
      unsigned long t559 = __n549;
      char* t560 = __a550;
      char* r561 = __gnu_cxx__char_traits_char___find(t558, t559, t560);
      __retval551 = r561;
      char* t562 = __retval551;
      return t562;
    }
  char* t563 = __s548;
  void* cast564 = (void*)t563;
  char* t565 = __a550;
  char t566 = *t565;
  int cast567 = (int)t566;
  unsigned long t568 = __n549;
  void* memchr569 = (void*)__builtin_memchr(cast564, cast567, t568);
  char* cast570 = (char*)memchr569;
  __retval551 = cast570;
  char* t571 = __retval551;
  return t571;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v572, char* v573) {
bb574:
  char* __c1575;
  char* __c2576;
  _Bool __retval577;
  __c1575 = v572;
  __c2576 = v573;
  char* t578 = __c1575;
  char t579 = *t578;
  unsigned char cast580 = (unsigned char)t579;
  int cast581 = (int)cast580;
  char* t582 = __c2576;
  char t583 = *t582;
  unsigned char cast584 = (unsigned char)t583;
  int cast585 = (int)cast584;
  _Bool c586 = ((cast581 < cast585)) ? 1 : 0;
  __retval577 = c586;
  _Bool t587 = __retval577;
  return t587;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v588, char* v589, unsigned long v590) {
bb591:
  char* __s1592;
  char* __s2593;
  unsigned long __n594;
  int __retval595;
  __s1592 = v588;
  __s2593 = v589;
  __n594 = v590;
    unsigned long t596 = __n594;
    unsigned long c597 = 0;
    _Bool c598 = ((t596 == c597)) ? 1 : 0;
    if (c598) {
      int c599 = 0;
      __retval595 = c599;
      int t600 = __retval595;
      return t600;
    }
    _Bool r601 = std____is_constant_evaluated();
    if (r601) {
        unsigned long __i602;
        unsigned long c603 = 0;
        __i602 = c603;
        while (1) {
          unsigned long t605 = __i602;
          unsigned long t606 = __n594;
          _Bool c607 = ((t605 < t606)) ? 1 : 0;
          if (!c607) break;
            unsigned long t608 = __i602;
            char* t609 = __s1592;
            char* ptr610 = &(t609)[t608];
            unsigned long t611 = __i602;
            char* t612 = __s2593;
            char* ptr613 = &(t612)[t611];
            _Bool r614 = std__char_traits_char___lt(ptr610, ptr613);
            if (r614) {
              int c615 = -1;
              __retval595 = c615;
              int t616 = __retval595;
              int ret_val617 = t616;
              return ret_val617;
            } else {
                unsigned long t618 = __i602;
                char* t619 = __s2593;
                char* ptr620 = &(t619)[t618];
                unsigned long t621 = __i602;
                char* t622 = __s1592;
                char* ptr623 = &(t622)[t621];
                _Bool r624 = std__char_traits_char___lt(ptr620, ptr623);
                if (r624) {
                  int c625 = 1;
                  __retval595 = c625;
                  int t626 = __retval595;
                  int ret_val627 = t626;
                  return ret_val627;
                }
            }
        for_step604: ;
          unsigned long t628 = __i602;
          unsigned long u629 = t628 + 1;
          __i602 = u629;
        }
      int c630 = 0;
      __retval595 = c630;
      int t631 = __retval595;
      return t631;
    }
  char* t632 = __s1592;
  void* cast633 = (void*)t632;
  char* t634 = __s2593;
  void* cast635 = (void*)t634;
  unsigned long t636 = __n594;
  int r637 = memcmp(cast633, cast635, t636);
  __retval595 = r637;
  int t638 = __retval595;
  return t638;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEPKcmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v639, char* v640, unsigned long v641, unsigned long v642) {
bb643:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this644;
  char* __s645;
  unsigned long __pos646;
  unsigned long __n647;
  unsigned long __retval648;
  unsigned long __size649;
  char __elem0650;
  char* __data651;
  char* __first652;
  char* __last653;
  unsigned long __len654;
  this644 = v639;
  __s645 = v640;
  __pos646 = v641;
  __n647 = v642;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t655 = this644;
  unsigned long r656 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t655);
  __size649 = r656;
    unsigned long t657 = __n647;
    unsigned long c658 = 0;
    _Bool c659 = ((t657 == c658)) ? 1 : 0;
    if (c659) {
      unsigned long t660 = __pos646;
      unsigned long t661 = __size649;
      _Bool c662 = ((t660 <= t661)) ? 1 : 0;
      unsigned long ternary663;
      if (c662) {
        unsigned long t664 = __pos646;
        ternary663 = (unsigned long)t664;
      } else {
        unsigned long t665 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        ternary663 = (unsigned long)t665;
      }
      __retval648 = ternary663;
      unsigned long t666 = __retval648;
      return t666;
    }
    unsigned long t667 = __pos646;
    unsigned long t668 = __size649;
    _Bool c669 = ((t667 >= t668)) ? 1 : 0;
    if (c669) {
      unsigned long t670 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      __retval648 = t670;
      unsigned long t671 = __retval648;
      return t671;
    }
  long c672 = 0;
  char* t673 = __s645;
  char* ptr674 = &(t673)[c672];
  char t675 = *ptr674;
  __elem0650 = t675;
  char* r676 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t655);
  __data651 = r676;
  char* t677 = __data651;
  unsigned long t678 = __pos646;
  char* ptr679 = &(t677)[t678];
  __first652 = ptr679;
  char* t680 = __data651;
  unsigned long t681 = __size649;
  char* ptr682 = &(t680)[t681];
  __last653 = ptr682;
  unsigned long t683 = __size649;
  unsigned long t684 = __pos646;
  unsigned long b685 = t683 - t684;
  __len654 = b685;
    while (1) {
      unsigned long t686 = __len654;
      unsigned long t687 = __n647;
      _Bool c688 = ((t686 >= t687)) ? 1 : 0;
      if (!c688) break;
        char* t689 = __first652;
        unsigned long t690 = __len654;
        unsigned long t691 = __n647;
        unsigned long b692 = t690 - t691;
        unsigned long c693 = 1;
        unsigned long b694 = b692 + c693;
        char* r695 = std__char_traits_char___find(t689, b694, &__elem0650);
        __first652 = r695;
          char* t696 = __first652;
          _Bool cast697 = (_Bool)t696;
          _Bool u698 = !cast697;
          if (u698) {
            unsigned long t699 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
            __retval648 = t699;
            unsigned long t700 = __retval648;
            unsigned long ret_val701 = t700;
            return ret_val701;
          }
          char* t702 = __first652;
          char* t703 = __s645;
          unsigned long t704 = __n647;
          int r705 = std__char_traits_char___compare(t702, t703, t704);
          int c706 = 0;
          _Bool c707 = ((r705 == c706)) ? 1 : 0;
          if (c707) {
            char* t708 = __first652;
            char* t709 = __data651;
            long diff710 = t708 - t709;
            unsigned long cast711 = (unsigned long)diff710;
            __retval648 = cast711;
            unsigned long t712 = __retval648;
            unsigned long ret_val713 = t712;
            return ret_val713;
          }
        char* t714 = __last653;
        char* t715 = __first652;
        int c716 = 1;
        char* ptr717 = &(t715)[c716];
        __first652 = ptr717;
        long diff718 = t714 - ptr717;
        unsigned long cast719 = (unsigned long)diff718;
        __len654 = cast719;
    }
  unsigned long t720 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
  __retval648 = t720;
  unsigned long t721 = __retval648;
  return t721;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEPKcm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v722, char* v723, unsigned long v724) {
bb725:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this726;
  char* __s727;
  unsigned long __pos728;
  unsigned long __retval729;
  this726 = v722;
  __s727 = v723;
  __pos728 = v724;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t730 = this726;
  char* t731 = __s727;
  unsigned long t732 = __pos728;
  char* t733 = __s727;
  unsigned long r734 = std__char_traits_char___length(t733);
  unsigned long r735 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(t730, t731, t732, r734);
  __retval729 = r735;
  unsigned long t736 = __retval729;
  return t736;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v737, unsigned long v738, char* v739) {
bb740:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this741;
  unsigned long __pos742;
  char* __s743;
  unsigned long __retval744;
  this741 = v737;
  __pos742 = v738;
  __s743 = v739;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t745 = this741;
    unsigned long t746 = __pos742;
    unsigned long r747 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t745);
    _Bool c748 = ((t746 > r747)) ? 1 : 0;
    if (c748) {
      char* cast749 = (char*)&(_str_25);
      char* t750 = __s743;
      unsigned long t751 = __pos742;
      unsigned long r752 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t745);
      std____throw_out_of_range_fmt(cast749, t750, t751, r752);
    }
  unsigned long t753 = __pos742;
  __retval744 = t753;
  unsigned long t754 = __retval744;
  return t754;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_mm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v755, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v756, unsigned long v757, unsigned long v758) {
bb759:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this760;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str761;
  unsigned long __pos762;
  unsigned long __n763;
  struct std__allocator_char_ ref_tmp0764;
  char* __start765;
  struct std__forward_iterator_tag agg_tmp0766;
  this760 = v755;
  __str761 = v756;
  __pos762 = v757;
  __n763 = v758;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t767 = this760;
  char* r768 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t767);
  std__allocator_char___allocator_2(&ref_tmp0764);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t767->_M_dataplus, r768, &ref_tmp0764);
  {
    std__allocator_char____allocator(&ref_tmp0764);
  }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t769 = __str761;
    char* r770 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t769);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t771 = __str761;
    unsigned long t772 = __pos762;
    char* cast773 = (char*)&(_str_26);
    unsigned long r774 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t771, t772, cast773);
    char* ptr775 = &(r770)[r774];
    __start765 = ptr775;
    char* t776 = __start765;
    char* t777 = __start765;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t778 = __str761;
    unsigned long t779 = __pos762;
    unsigned long t780 = __n763;
    unsigned long r781 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t778, t779, t780);
    char* ptr782 = &(t777)[r781];
    struct std__forward_iterator_tag t783 = agg_tmp0766;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t767, t776, ptr782, t783);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6substrEmm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v784, unsigned long v785, unsigned long v786) {
bb787:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this788;
  unsigned long __pos789;
  unsigned long __n790;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval791;
  this788 = v784;
  __pos789 = v785;
  __n790 = v786;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t792 = this788;
  unsigned long t793 = __pos789;
  char* cast794 = (char*)&(_str_24);
  unsigned long r795 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t792, t793, cast794);
  unsigned long t796 = __n790;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval791, t792, r795, t796);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t797 = __retval791;
  return t797;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb798:
  _Bool __retval799;
  _Bool t800 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval799 = t800;
  _Bool t801 = __retval799;
  return t801;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v802, struct std____new_allocator_char_* v803) {
bb804:
  struct std____new_allocator_char_* this805;
  struct std____new_allocator_char_* unnamed806;
  struct std____new_allocator_char_* __retval807;
  this805 = v802;
  unnamed806 = v803;
  struct std____new_allocator_char_* t808 = this805;
  __retval807 = t808;
  struct std____new_allocator_char_* t809 = __retval807;
  return t809;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v810, struct std__allocator_char_* v811) {
bb812:
  struct std__allocator_char_* this813;
  struct std__allocator_char_* unnamed814;
  struct std__allocator_char_* __retval815;
  this813 = v810;
  unnamed814 = v811;
  struct std__allocator_char_* t816 = this813;
  struct std____new_allocator_char_* base817 = (struct std____new_allocator_char_*)((char *)t816 + 0);
  struct std__allocator_char_* t818 = unnamed814;
  struct std____new_allocator_char_* base819 = (struct std____new_allocator_char_*)((char *)t818 + 0);
  struct std____new_allocator_char_* r820 = std____new_allocator_char___operator_(base817, base819);
  __retval815 = t816;
  struct std__allocator_char_* t821 = __retval815;
  return t821;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v822, struct std__allocator_char_* v823) {
bb824:
  struct std__allocator_char_* __one825;
  struct std__allocator_char_* __two826;
  __one825 = v822;
  __two826 = v823;
    struct std__allocator_char_* t827 = __two826;
    struct std__allocator_char_* t828 = __one825;
    struct std__allocator_char_* r829 = std__allocator_char___operator_(t828, t827);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v830) {
bb831:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this832;
  char* __retval833;
  this832 = v830;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t834 = this832;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t834);
  char* r835 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t834);
  __retval833 = r835;
  char* t836 = __retval833;
  return t836;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v837, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v838) {
bb839:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this840;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str841;
  this840 = v837;
  __str841 = v838;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t842 = this840;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t843 = __str841;
    _Bool c844 = ((t842 != t843)) ? 1 : 0;
    if (c844) {
      unsigned long __rsize845;
      unsigned long __capacity846;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t847 = __str841;
      unsigned long r848 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t847);
      __rsize845 = r848;
      unsigned long r849 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t842);
      __capacity846 = r849;
        unsigned long t850 = __rsize845;
        unsigned long t851 = __capacity846;
        _Bool c852 = ((t850 > t851)) ? 1 : 0;
        if (c852) {
          unsigned long __new_capacity853;
          char* __tmp854;
          unsigned long t855 = __rsize845;
          __new_capacity853 = t855;
          unsigned long t856 = __capacity846;
          char* r857 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t842, &__new_capacity853, t856);
          __tmp854 = r857;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t842);
          char* t858 = __tmp854;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t842, t858);
          unsigned long t859 = __new_capacity853;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t842, t859);
        }
        unsigned long t860 = __rsize845;
        _Bool cast861 = (_Bool)t860;
        if (cast861) {
          char* r862 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t842);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t863 = __str841;
          char* r864 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t863);
          unsigned long t865 = __rsize845;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r862, r864, t865);
        }
      unsigned long t866 = __rsize845;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t842, t866);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v867) {
bb868:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this869;
  this869 = v867;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t870 = this869;
  unsigned long c871 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t870, c871);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v872, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v873) {
bb874:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this875;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str876;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval877;
  _Bool __equal_allocs878;
  this875 = v872;
  __str876 = v873;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t879 = this875;
  _Bool c880 = 1;
  __equal_allocs878 = c880;
    _Bool r881 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t879);
    _Bool u882 = !r881;
    _Bool ternary883;
    if (u882) {
      _Bool r884 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      ternary883 = (_Bool)r884;
    } else {
      _Bool c885 = 0;
      ternary883 = (_Bool)c885;
    }
    _Bool ternary886;
    if (ternary883) {
      _Bool t887 = __equal_allocs878;
      _Bool u888 = !t887;
      ternary886 = (_Bool)u888;
    } else {
      _Bool c889 = 0;
      ternary886 = (_Bool)c889;
    }
    if (ternary886) {
      unsigned long t890 = t879->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t879, t890);
      char* r891 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t879);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t879, r891);
      unsigned long c892 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t879, c892);
    }
  struct std__allocator_char_* r893 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t879);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t894 = __str876;
  struct std__allocator_char_* r895 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t894);
  void_std____alloc_on_move_std__allocator_char___(r893, r895);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t896 = __str876;
    _Bool r897 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t896);
    if (r897) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t898 = __str876;
        _Bool c899 = ((t898 != t879)) ? 1 : 0;
        if (c899) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t900 = __str876;
            unsigned long r901 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t900);
            _Bool cast902 = (_Bool)r901;
            if (cast902) {
              char* r903 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t879);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t904 = __str876;
              char* r905 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t904);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t906 = __str876;
              unsigned long r907 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t906);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r903, r905, r907);
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t908 = __str876;
          unsigned long r909 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t908);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t879, r909);
        }
    } else {
        _Bool r910 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        _Bool ternary911;
        if (r910) {
          _Bool c912 = 1;
          ternary911 = (_Bool)c912;
        } else {
          _Bool t913 = __equal_allocs878;
          ternary911 = (_Bool)t913;
        }
        if (ternary911) {
          char* __data914;
          unsigned long __capacity915;
          char* c916 = ((void*)0);
          __data914 = c916;
            _Bool r917 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t879);
            _Bool u918 = !r917;
            if (u918) {
                _Bool t919 = __equal_allocs878;
                if (t919) {
                  char* r920 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t879);
                  __data914 = r920;
                  unsigned long t921 = t879->field2._M_allocated_capacity;
                  __capacity915 = t921;
                } else {
                  unsigned long t922 = t879->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t879, t922);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t923 = __str876;
          char* r924 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t923);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t879, r924);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t925 = __str876;
          unsigned long r926 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t925);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t879, r926);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t927 = __str876;
          unsigned long t928 = t927->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t879, t928);
            char* t929 = __data914;
            _Bool cast930 = (_Bool)t929;
            if (cast930) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t931 = __str876;
              char* t932 = __data914;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t931, t932);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t933 = __str876;
              unsigned long t934 = __capacity915;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t933, t934);
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t935 = __str876;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t936 = __str876;
              char* r937 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t936);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t935, r937);
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t938 = __str876;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t879, t938);
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t939 = __str876;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t939);
  __retval877 = t879;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t940 = __retval877;
  return t940;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v941) {
bb942:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this943;
  this943 = v941;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t944 = this943;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t944);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t944->_M_dataplus);
  }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v945, int v946) {
bb947:
  int __a948;
  int __b949;
  int __retval950;
  __a948 = v945;
  __b949 = v946;
  int t951 = __a948;
  int t952 = __b949;
  int b953 = t951 | t952;
  __retval950 = b953;
  int t954 = __retval950;
  return t954;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v955) {
bb956:
  struct std__basic_ios_char__std__char_traits_char__* this957;
  int __retval958;
  this957 = v955;
  struct std__basic_ios_char__std__char_traits_char__* t959 = this957;
  struct std__ios_base* base960 = (struct std__ios_base*)((char *)t959 + 0);
  int t961 = base960->_M_streambuf_state;
  __retval958 = t961;
  int t962 = __retval958;
  return t962;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v963, int v964) {
bb965:
  struct std__basic_ios_char__std__char_traits_char__* this966;
  int __state967;
  this966 = v963;
  __state967 = v964;
  struct std__basic_ios_char__std__char_traits_char__* t968 = this966;
  int r969 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t968);
  int t970 = __state967;
  int r971 = std__operator_(r969, t970);
  std__basic_ios_char__std__char_traits_char_____clear(t968, r971);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v972, char* v973) {
bb974:
  struct std__basic_ostream_char__std__char_traits_char__* __out975;
  char* __s976;
  struct std__basic_ostream_char__std__char_traits_char__* __retval977;
  __out975 = v972;
  __s976 = v973;
    char* t978 = __s976;
    _Bool cast979 = (_Bool)t978;
    _Bool u980 = !cast979;
    if (u980) {
      struct std__basic_ostream_char__std__char_traits_char__* t981 = __out975;
      void** v982 = (void**)t981;
      void* v983 = *((void**)v982);
      unsigned char* cast984 = (unsigned char*)v983;
      long c985 = -24;
      unsigned char* ptr986 = &(cast984)[c985];
      long* cast987 = (long*)ptr986;
      long t988 = *cast987;
      unsigned char* cast989 = (unsigned char*)t981;
      unsigned char* ptr990 = &(cast989)[t988];
      struct std__basic_ostream_char__std__char_traits_char__* cast991 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr990;
      struct std__basic_ios_char__std__char_traits_char__* cast992 = (struct std__basic_ios_char__std__char_traits_char__*)cast991;
      int t993 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast992, t993);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t994 = __out975;
      char* t995 = __s976;
      char* t996 = __s976;
      unsigned long r997 = std__char_traits_char___length(t996);
      long cast998 = (long)r997;
      struct std__basic_ostream_char__std__char_traits_char__* r999 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t994, t995, cast998);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t1000 = __out975;
  __retval977 = t1000;
  struct std__basic_ostream_char__std__char_traits_char__* t1001 = __retval977;
  return t1001;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1002, char* v1003) {
bb1004:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs1005;
  char* __rhs1006;
  _Bool __retval1007;
  __lhs1005 = v1002;
  __rhs1006 = v1003;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1008 = __lhs1005;
  unsigned long r1009 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1008);
  char* t1010 = __rhs1006;
  unsigned long r1011 = std__char_traits_char___length(t1010);
  _Bool c1012 = ((r1009 == r1011)) ? 1 : 0;
  _Bool ternary1013;
  if (c1012) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1014 = __lhs1005;
    char* r1015 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1014);
    char* t1016 = __rhs1006;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1017 = __lhs1005;
    unsigned long r1018 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1017);
    int r1019 = std__char_traits_char___compare(r1015, t1016, r1018);
    _Bool cast1020 = (_Bool)r1019;
    _Bool u1021 = !cast1020;
    ternary1013 = (_Bool)u1021;
  } else {
    _Bool c1022 = 0;
    ternary1013 = (_Bool)c1022;
  }
  __retval1007 = ternary1013;
  _Bool t1023 = __retval1007;
  return t1023;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v1024, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1025) {
bb1026:
  struct std__basic_ostream_char__std__char_traits_char__* __os1027;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1028;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1029;
  __os1027 = v1024;
  __str1028 = v1025;
  struct std__basic_ostream_char__std__char_traits_char__* t1030 = __os1027;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1031 = __str1028;
  char* r1032 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1031);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1033 = __str1028;
  unsigned long r1034 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1033);
  long cast1035 = (long)r1034;
  struct std__basic_ostream_char__std__char_traits_char__* r1036 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1030, r1032, cast1035);
  __retval1029 = r1036;
  struct std__basic_ostream_char__std__char_traits_char__* t1037 = __retval1029;
  return t1037;
}

// function: main
int main() {
bb1038:
  int __retval1039;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ dataString1040;
  struct std__allocator_char_ ref_tmp01041;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ nameString1042;
  struct std__allocator_char_ ref_tmp11043;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ageString1044;
  struct std__allocator_char_ ref_tmp21045;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ colorString1046;
  struct std__allocator_char_ ref_tmp31047;
  int nameLocation1048;
  int endName1049;
  int ageLocation1050;
  int endAge1051;
  int colorLocation1052;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp41053;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1054;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp51055;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1056;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp61057;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1058;
  int c1059 = 0;
  __retval1039 = c1059;
  char* cast1060 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp01041);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&dataString1040, cast1060, &ref_tmp01041);
  {
    std__allocator_char____allocator(&ref_tmp01041);
  }
    char* cast1061 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp11043);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&nameString1042, cast1061, &ref_tmp11043);
    {
      std__allocator_char____allocator(&ref_tmp11043);
    }
      char* cast1062 = (char*)&(_str);
      std__allocator_char___allocator_2(&ref_tmp21045);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ageString1044, cast1062, &ref_tmp21045);
      {
        std__allocator_char____allocator(&ref_tmp21045);
      }
        char* cast1063 = (char*)&(_str);
        std__allocator_char___allocator_2(&ref_tmp31047);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&colorString1046, cast1063, &ref_tmp31047);
        {
          std__allocator_char____allocator(&ref_tmp31047);
        }
          char* cast1064 = (char*)&(_str_1);
          char* r1065 = getenv(cast1064);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1066 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(&dataString1040, r1065);
          char* cast1067 = (char*)&(_str_2);
          unsigned long c1068 = 0;
          unsigned long r1069 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1040, cast1067, c1068);
          unsigned long c1070 = 5;
          unsigned long b1071 = r1069 + c1070;
          int cast1072 = (int)b1071;
          nameLocation1048 = cast1072;
          char* cast1073 = (char*)&(_str_3);
          unsigned long c1074 = 0;
          unsigned long r1075 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1040, cast1073, c1074);
          int cast1076 = (int)r1075;
          endName1049 = cast1076;
          char* cast1077 = (char*)&(_str_3);
          unsigned long c1078 = 0;
          unsigned long r1079 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1040, cast1077, c1078);
          unsigned long c1080 = 4;
          unsigned long b1081 = r1079 + c1080;
          int cast1082 = (int)b1081;
          ageLocation1050 = cast1082;
          char* cast1083 = (char*)&(_str_4);
          unsigned long c1084 = 0;
          unsigned long r1085 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1040, cast1083, c1084);
          int cast1086 = (int)r1085;
          endAge1051 = cast1086;
          char* cast1087 = (char*)&(_str_4);
          unsigned long c1088 = 0;
          unsigned long r1089 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1040, cast1087, c1088);
          unsigned long c1090 = 6;
          unsigned long b1091 = r1089 + c1090;
          int cast1092 = (int)b1091;
          colorLocation1052 = cast1092;
          int t1093 = nameLocation1048;
          unsigned long cast1094 = (unsigned long)t1093;
          int t1095 = endName1049;
          int t1096 = nameLocation1048;
          int b1097 = t1095 - t1096;
          unsigned long cast1098 = (unsigned long)b1097;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1099 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&dataString1040, cast1094, cast1098);
          ref_tmp41053 = r1099;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1100 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&nameString1042, &ref_tmp41053);
            tmp_exprcleanup1054 = r1100;
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp41053);
          }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1101 = tmp_exprcleanup1054;
          int t1102 = ageLocation1050;
          unsigned long cast1103 = (unsigned long)t1102;
          int t1104 = endAge1051;
          int t1105 = ageLocation1050;
          int b1106 = t1104 - t1105;
          unsigned long cast1107 = (unsigned long)b1106;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1108 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&dataString1040, cast1103, cast1107);
          ref_tmp51055 = r1108;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1109 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&ageString1044, &ref_tmp51055);
            tmp_exprcleanup1056 = r1109;
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp51055);
          }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1110 = tmp_exprcleanup1056;
          int t1111 = colorLocation1052;
          unsigned long cast1112 = (unsigned long)t1111;
          unsigned long t1113 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1114 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&dataString1040, cast1112, t1113);
          ref_tmp61057 = r1114;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1115 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&colorString1046, &ref_tmp61057);
            tmp_exprcleanup1058 = r1115;
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp61057);
          }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1116 = tmp_exprcleanup1058;
          char* cast1117 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* r1118 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1117);
          char* cast1119 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* r1120 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1119);
          char* cast1121 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* r1122 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1120, cast1121);
          char* cast1123 = (char*)&(_str_8);
          struct std__basic_ostream_char__std__char_traits_char__* r1124 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1122, cast1123);
          char* cast1125 = (char*)&(_str_9);
          struct std__basic_ostream_char__std__char_traits_char__* r1126 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1124, cast1125);
          char* cast1127 = (char*)&(_str_10);
          struct std__basic_ostream_char__std__char_traits_char__* r1128 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1127);
          char* cast1129 = (char*)&(_str_11);
          struct std__basic_ostream_char__std__char_traits_char__* r1130 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1128, cast1129);
          char* cast1131 = (char*)&(_str_12);
          struct std__basic_ostream_char__std__char_traits_char__* r1132 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1130, cast1131);
            char* cast1133 = (char*)&(_str);
            _Bool r1134 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&dataString1040, cast1133);
            _Bool u1135 = !r1134;
            if (u1135) {
              char* cast1136 = (char*)&(_str_13);
              struct std__basic_ostream_char__std__char_traits_char__* r1137 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1136);
              char* cast1138 = (char*)&(_str_14);
              struct std__basic_ostream_char__std__char_traits_char__* r1139 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1137, cast1138);
              char* cast1140 = (char*)&(_str_15);
              struct std__basic_ostream_char__std__char_traits_char__* r1141 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1139, cast1140);
              struct std__basic_ostream_char__std__char_traits_char__* r1142 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1141, &nameString1042);
              char* cast1143 = (char*)&(_str_16);
              struct std__basic_ostream_char__std__char_traits_char__* r1144 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1142, cast1143);
              char* cast1145 = (char*)&(_str_17);
              struct std__basic_ostream_char__std__char_traits_char__* r1146 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1144, cast1145);
              struct std__basic_ostream_char__std__char_traits_char__* r1147 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1146, &ageString1044);
              char* cast1148 = (char*)&(_str_16);
              struct std__basic_ostream_char__std__char_traits_char__* r1149 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1147, cast1148);
              char* cast1150 = (char*)&(_str_18);
              struct std__basic_ostream_char__std__char_traits_char__* r1151 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1149, cast1150);
              struct std__basic_ostream_char__std__char_traits_char__* r1152 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1151, &colorString1046);
              char* cast1153 = (char*)&(_str_16);
              struct std__basic_ostream_char__std__char_traits_char__* r1154 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1152, cast1153);
            } else {
              char* cast1155 = (char*)&(_str_19);
              struct std__basic_ostream_char__std__char_traits_char__* r1156 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1155);
            }
          char* cast1157 = (char*)&(_str_20);
          struct std__basic_ostream_char__std__char_traits_char__* r1158 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1157);
          int c1159 = 0;
          __retval1039 = c1159;
          int t1160 = __retval1039;
          int ret_val1161 = t1160;
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&colorString1046);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ageString1044);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&nameString1042);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1040);
          }
          return ret_val1161;
  int t1162 = __retval1039;
  return t1162;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1163) {
bb1164:
  struct std____new_allocator_char_* this1165;
  this1165 = v1163;
  struct std____new_allocator_char_* t1166 = this1165;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1167) {
bb1168:
  char* __r1169;
  char* __retval1170;
  __r1169 = v1167;
  char* t1171 = __r1169;
  __retval1170 = t1171;
  char* t1172 = __retval1170;
  return t1172;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1173) {
bb1174:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1175;
  char* __retval1176;
  this1175 = v1173;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1177 = this1175;
  char* cast1178 = (char*)&(t1177->field2._M_local_buf);
  char* r1179 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1178);
  __retval1176 = r1179;
  char* t1180 = __retval1176;
  return t1180;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1181, char* v1182, struct std__allocator_char_* v1183) {
bb1184:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1185;
  char* __dat1186;
  struct std__allocator_char_* __a1187;
  this1185 = v1181;
  __dat1186 = v1182;
  __a1187 = v1183;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1188 = this1185;
  struct std__allocator_char_* base1189 = (struct std__allocator_char_*)((char *)t1188 + 0);
  struct std__allocator_char_* t1190 = __a1187;
  std__allocator_char___allocator(base1189, t1190);
    char* t1191 = __dat1186;
    t1188->_M_p = t1191;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1192:
  _Bool __retval1193;
    _Bool c1194 = 0;
    __retval1193 = c1194;
    _Bool t1195 = __retval1193;
    return t1195;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1196, char* v1197) {
bb1198:
  char* __c11199;
  char* __c21200;
  _Bool __retval1201;
  __c11199 = v1196;
  __c21200 = v1197;
  char* t1202 = __c11199;
  char t1203 = *t1202;
  int cast1204 = (int)t1203;
  char* t1205 = __c21200;
  char t1206 = *t1205;
  int cast1207 = (int)t1206;
  _Bool c1208 = ((cast1204 == cast1207)) ? 1 : 0;
  __retval1201 = c1208;
  _Bool t1209 = __retval1201;
  return t1209;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1210) {
bb1211:
  char* __p1212;
  unsigned long __retval1213;
  unsigned long __i1214;
  __p1212 = v1210;
  unsigned long c1215 = 0;
  __i1214 = c1215;
    char ref_tmp01216;
    while (1) {
      unsigned long t1217 = __i1214;
      char* t1218 = __p1212;
      char* ptr1219 = &(t1218)[t1217];
      char c1220 = 0;
      ref_tmp01216 = c1220;
      _Bool r1221 = __gnu_cxx__char_traits_char___eq(ptr1219, &ref_tmp01216);
      _Bool u1222 = !r1221;
      if (!u1222) break;
      unsigned long t1223 = __i1214;
      unsigned long u1224 = t1223 + 1;
      __i1214 = u1224;
    }
  unsigned long t1225 = __i1214;
  __retval1213 = t1225;
  unsigned long t1226 = __retval1213;
  return t1226;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1227) {
bb1228:
  char* __s1229;
  unsigned long __retval1230;
  __s1229 = v1227;
    _Bool r1231 = std____is_constant_evaluated();
    if (r1231) {
      char* t1232 = __s1229;
      unsigned long r1233 = __gnu_cxx__char_traits_char___length(t1232);
      __retval1230 = r1233;
      unsigned long t1234 = __retval1230;
      return t1234;
    }
  char* t1235 = __s1229;
  unsigned long r1236 = strlen(t1235);
  __retval1230 = r1236;
  unsigned long t1237 = __retval1230;
  return t1237;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1238, char* v1239, struct std__random_access_iterator_tag v1240) {
bb1241:
  char* __first1242;
  char* __last1243;
  struct std__random_access_iterator_tag unnamed1244;
  long __retval1245;
  __first1242 = v1238;
  __last1243 = v1239;
  unnamed1244 = v1240;
  char* t1246 = __last1243;
  char* t1247 = __first1242;
  long diff1248 = t1246 - t1247;
  __retval1245 = diff1248;
  long t1249 = __retval1245;
  return t1249;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1250) {
bb1251:
  char** unnamed1252;
  struct std__random_access_iterator_tag __retval1253;
  unnamed1252 = v1250;
  struct std__random_access_iterator_tag t1254 = __retval1253;
  return t1254;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1255, char* v1256) {
bb1257:
  char* __first1258;
  char* __last1259;
  long __retval1260;
  struct std__random_access_iterator_tag agg_tmp01261;
  __first1258 = v1255;
  __last1259 = v1256;
  char* t1262 = __first1258;
  char* t1263 = __last1259;
  struct std__random_access_iterator_tag r1264 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1258);
  agg_tmp01261 = r1264;
  struct std__random_access_iterator_tag t1265 = agg_tmp01261;
  long r1266 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1262, t1263, t1265);
  __retval1260 = r1266;
  long t1267 = __retval1260;
  return t1267;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1268, char* v1269) {
bb1270:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1271;
  char* __p1272;
  this1271 = v1268;
  __p1272 = v1269;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1273 = this1271;
  char* t1274 = __p1272;
  t1273->_M_dataplus._M_p = t1274;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1275) {
bb1276:
  struct std__allocator_char_* __a1277;
  unsigned long __retval1278;
  __a1277 = v1275;
  unsigned long c1279 = -1;
  unsigned long c1280 = 1;
  unsigned long b1281 = c1279 / c1280;
  __retval1278 = b1281;
  unsigned long t1282 = __retval1278;
  return t1282;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1283) {
bb1284:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1285;
  struct std__allocator_char_* __retval1286;
  this1285 = v1283;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1287 = this1285;
  struct std__allocator_char_* base1288 = (struct std__allocator_char_*)((char *)&(t1287->_M_dataplus) + 0);
  __retval1286 = base1288;
  struct std__allocator_char_* t1289 = __retval1286;
  return t1289;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1290, unsigned long* v1291) {
bb1292:
  unsigned long* __a1293;
  unsigned long* __b1294;
  unsigned long* __retval1295;
  __a1293 = v1290;
  __b1294 = v1291;
    unsigned long* t1296 = __b1294;
    unsigned long t1297 = *t1296;
    unsigned long* t1298 = __a1293;
    unsigned long t1299 = *t1298;
    _Bool c1300 = ((t1297 < t1299)) ? 1 : 0;
    if (c1300) {
      unsigned long* t1301 = __b1294;
      __retval1295 = t1301;
      unsigned long* t1302 = __retval1295;
      return t1302;
    }
  unsigned long* t1303 = __a1293;
  __retval1295 = t1303;
  unsigned long* t1304 = __retval1295;
  return t1304;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1305) {
bb1306:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1307;
  unsigned long __retval1308;
  unsigned long __diffmax1309;
  unsigned long __allocmax1310;
  this1307 = v1305;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1311 = this1307;
  unsigned long c1312 = 9223372036854775807;
  __diffmax1309 = c1312;
  struct std__allocator_char_* r1313 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1311);
  unsigned long r1314 = std__allocator_traits_std__allocator_char_____max_size(r1313);
  __allocmax1310 = r1314;
  unsigned long* r1315 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1309, &__allocmax1310);
  unsigned long t1316 = *r1315;
  unsigned long c1317 = 1;
  unsigned long b1318 = t1316 - c1317;
  __retval1308 = b1318;
  unsigned long t1319 = __retval1308;
  return t1319;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1320) {
bb1321:
  struct std____new_allocator_char_* this1322;
  unsigned long __retval1323;
  this1322 = v1320;
  struct std____new_allocator_char_* t1324 = this1322;
  unsigned long c1325 = 9223372036854775807;
  unsigned long c1326 = 1;
  unsigned long b1327 = c1325 / c1326;
  __retval1323 = b1327;
  unsigned long t1328 = __retval1323;
  return t1328;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1329, unsigned long v1330, void* v1331) {
bb1332:
  struct std____new_allocator_char_* this1333;
  unsigned long __n1334;
  void* unnamed1335;
  char* __retval1336;
  this1333 = v1329;
  __n1334 = v1330;
  unnamed1335 = v1331;
  struct std____new_allocator_char_* t1337 = this1333;
    unsigned long t1338 = __n1334;
    unsigned long r1339 = std____new_allocator_char____M_max_size___const(t1337);
    _Bool c1340 = ((t1338 > r1339)) ? 1 : 0;
    if (c1340) {
        unsigned long t1341 = __n1334;
        unsigned long c1342 = -1;
        unsigned long c1343 = 1;
        unsigned long b1344 = c1342 / c1343;
        _Bool c1345 = ((t1341 > b1344)) ? 1 : 0;
        if (c1345) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1346 = 1;
    unsigned long c1347 = 16;
    _Bool c1348 = ((c1346 > c1347)) ? 1 : 0;
    if (c1348) {
      unsigned long __al1349;
      unsigned long c1350 = 1;
      __al1349 = c1350;
      unsigned long t1351 = __n1334;
      unsigned long c1352 = 1;
      unsigned long b1353 = t1351 * c1352;
      unsigned long t1354 = __al1349;
      void* r1355 = operator_new_2(b1353, t1354);
      char* cast1356 = (char*)r1355;
      __retval1336 = cast1356;
      char* t1357 = __retval1336;
      return t1357;
    }
  unsigned long t1358 = __n1334;
  unsigned long c1359 = 1;
  unsigned long b1360 = t1358 * c1359;
  void* r1361 = operator_new(b1360);
  char* cast1362 = (char*)r1361;
  __retval1336 = cast1362;
  char* t1363 = __retval1336;
  return t1363;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1364, unsigned long v1365) {
bb1366:
  struct std__allocator_char_* this1367;
  unsigned long __n1368;
  char* __retval1369;
  this1367 = v1364;
  __n1368 = v1365;
  struct std__allocator_char_* t1370 = this1367;
    _Bool r1371 = std____is_constant_evaluated();
    if (r1371) {
        unsigned long t1372 = __n1368;
        unsigned long c1373 = 1;
        unsigned long ovr1374;
        _Bool ovf1375 = __builtin_mul_overflow(t1372, c1373, &ovr1374);
        __n1368 = ovr1374;
        if (ovf1375) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1376 = __n1368;
      void* r1377 = operator_new(t1376);
      char* cast1378 = (char*)r1377;
      __retval1369 = cast1378;
      char* t1379 = __retval1369;
      return t1379;
    }
  struct std____new_allocator_char_* base1380 = (struct std____new_allocator_char_*)((char *)t1370 + 0);
  unsigned long t1381 = __n1368;
  void* c1382 = ((void*)0);
  char* r1383 = std____new_allocator_char___allocate(base1380, t1381, c1382);
  __retval1369 = r1383;
  char* t1384 = __retval1369;
  return t1384;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1385, unsigned long v1386) {
bb1387:
  struct std__allocator_char_* __a1388;
  unsigned long __n1389;
  char* __retval1390;
  __a1388 = v1385;
  __n1389 = v1386;
  struct std__allocator_char_* t1391 = __a1388;
  unsigned long t1392 = __n1389;
  char* r1393 = std__allocator_char___allocate(t1391, t1392);
  __retval1390 = r1393;
  char* t1394 = __retval1390;
  return t1394;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1395, unsigned long v1396) {
bb1397:
  struct std__allocator_char_* __a1398;
  unsigned long __n1399;
  char* __retval1400;
  char* __p1401;
  __a1398 = v1395;
  __n1399 = v1396;
  struct std__allocator_char_* t1402 = __a1398;
  unsigned long t1403 = __n1399;
  char* r1404 = std__allocator_traits_std__allocator_char_____allocate(t1402, t1403);
  __p1401 = r1404;
  char* t1405 = __p1401;
  __retval1400 = t1405;
  char* t1406 = __retval1400;
  return t1406;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1407) {
bb1408:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1409;
  struct std__allocator_char_* __retval1410;
  this1409 = v1407;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1411 = this1409;
  struct std__allocator_char_* base1412 = (struct std__allocator_char_*)((char *)&(t1411->_M_dataplus) + 0);
  __retval1410 = base1412;
  struct std__allocator_char_* t1413 = __retval1410;
  return t1413;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1414, unsigned long* v1415, unsigned long v1416) {
bb1417:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1418;
  unsigned long* __capacity1419;
  unsigned long __old_capacity1420;
  char* __retval1421;
  this1418 = v1414;
  __capacity1419 = v1415;
  __old_capacity1420 = v1416;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1422 = this1418;
    unsigned long* t1423 = __capacity1419;
    unsigned long t1424 = *t1423;
    unsigned long r1425 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1422);
    _Bool c1426 = ((t1424 > r1425)) ? 1 : 0;
    if (c1426) {
      char* cast1427 = (char*)&(_str_22);
      std____throw_length_error(cast1427);
    }
    unsigned long* t1428 = __capacity1419;
    unsigned long t1429 = *t1428;
    unsigned long t1430 = __old_capacity1420;
    _Bool c1431 = ((t1429 > t1430)) ? 1 : 0;
    _Bool ternary1432;
    if (c1431) {
      unsigned long* t1433 = __capacity1419;
      unsigned long t1434 = *t1433;
      unsigned long c1435 = 2;
      unsigned long t1436 = __old_capacity1420;
      unsigned long b1437 = c1435 * t1436;
      _Bool c1438 = ((t1434 < b1437)) ? 1 : 0;
      ternary1432 = (_Bool)c1438;
    } else {
      _Bool c1439 = 0;
      ternary1432 = (_Bool)c1439;
    }
    if (ternary1432) {
      unsigned long c1440 = 2;
      unsigned long t1441 = __old_capacity1420;
      unsigned long b1442 = c1440 * t1441;
      unsigned long* t1443 = __capacity1419;
      *t1443 = b1442;
        unsigned long* t1444 = __capacity1419;
        unsigned long t1445 = *t1444;
        unsigned long r1446 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1422);
        _Bool c1447 = ((t1445 > r1446)) ? 1 : 0;
        if (c1447) {
          unsigned long r1448 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1422);
          unsigned long* t1449 = __capacity1419;
          *t1449 = r1448;
        }
    }
  struct std__allocator_char_* r1450 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1422);
  unsigned long* t1451 = __capacity1419;
  unsigned long t1452 = *t1451;
  unsigned long c1453 = 1;
  unsigned long b1454 = t1452 + c1453;
  char* r1455 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1450, b1454);
  __retval1421 = r1455;
  char* t1456 = __retval1421;
  return t1456;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1457, unsigned long v1458) {
bb1459:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1460;
  unsigned long __capacity1461;
  this1460 = v1457;
  __capacity1461 = v1458;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1462 = this1460;
  unsigned long t1463 = __capacity1461;
  t1462->field2._M_allocated_capacity = t1463;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1464:
  _Bool __retval1465;
    _Bool c1466 = 0;
    __retval1465 = c1466;
    _Bool t1467 = __retval1465;
    return t1467;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1468) {
bb1469:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1470;
  this1470 = v1468;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1471 = this1470;
    _Bool r1472 = std__is_constant_evaluated();
    if (r1472) {
        unsigned long __i1473;
        unsigned long c1474 = 0;
        __i1473 = c1474;
        while (1) {
          unsigned long t1476 = __i1473;
          unsigned long c1477 = 15;
          _Bool c1478 = ((t1476 <= c1477)) ? 1 : 0;
          if (!c1478) break;
          char c1479 = 0;
          unsigned long t1480 = __i1473;
          t1471->field2._M_local_buf[t1480] = c1479;
        for_step1475: ;
          unsigned long t1481 = __i1473;
          unsigned long u1482 = t1481 + 1;
          __i1473 = u1482;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1483, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1484) {
bb1485:
  struct _Guard* this1486;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1487;
  this1486 = v1483;
  __s1487 = v1484;
  struct _Guard* t1488 = this1486;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1489 = __s1487;
  t1488->_M_guarded = t1489;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1490, char* v1491) {
bb1492:
  char* __location1493;
  char* __args1494;
  char* __retval1495;
  void* __loc1496;
  __location1493 = v1490;
  __args1494 = v1491;
  char* t1497 = __location1493;
  void* cast1498 = (void*)t1497;
  __loc1496 = cast1498;
    void* t1499 = __loc1496;
    char* cast1500 = (char*)t1499;
    char* t1501 = __args1494;
    char t1502 = *t1501;
    *cast1500 = t1502;
    __retval1495 = cast1500;
    char* t1503 = __retval1495;
    return t1503;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1504, char* v1505) {
bb1506:
  char* __c11507;
  char* __c21508;
  __c11507 = v1504;
  __c21508 = v1505;
    _Bool r1509 = std____is_constant_evaluated();
    if (r1509) {
      char* t1510 = __c11507;
      char* t1511 = __c21508;
      char* r1512 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1510, t1511);
    } else {
      char* t1513 = __c21508;
      char t1514 = *t1513;
      char* t1515 = __c11507;
      *t1515 = t1514;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1516, char* v1517, unsigned long v1518) {
bb1519:
  char* __s11520;
  char* __s21521;
  unsigned long __n1522;
  char* __retval1523;
  __s11520 = v1516;
  __s21521 = v1517;
  __n1522 = v1518;
    unsigned long t1524 = __n1522;
    unsigned long c1525 = 0;
    _Bool c1526 = ((t1524 == c1525)) ? 1 : 0;
    if (c1526) {
      char* t1527 = __s11520;
      __retval1523 = t1527;
      char* t1528 = __retval1523;
      return t1528;
    }
    _Bool r1529 = std____is_constant_evaluated();
    if (r1529) {
        unsigned long __i1530;
        unsigned long c1531 = 0;
        __i1530 = c1531;
        while (1) {
          unsigned long t1533 = __i1530;
          unsigned long t1534 = __n1522;
          _Bool c1535 = ((t1533 < t1534)) ? 1 : 0;
          if (!c1535) break;
          char* t1536 = __s11520;
          unsigned long t1537 = __i1530;
          char* ptr1538 = &(t1536)[t1537];
          unsigned long t1539 = __i1530;
          char* t1540 = __s21521;
          char* ptr1541 = &(t1540)[t1539];
          char* r1542 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1538, ptr1541);
        for_step1532: ;
          unsigned long t1543 = __i1530;
          unsigned long u1544 = t1543 + 1;
          __i1530 = u1544;
        }
      char* t1545 = __s11520;
      __retval1523 = t1545;
      char* t1546 = __retval1523;
      return t1546;
    }
  char* t1547 = __s11520;
  void* cast1548 = (void*)t1547;
  char* t1549 = __s21521;
  void* cast1550 = (void*)t1549;
  unsigned long t1551 = __n1522;
  unsigned long c1552 = 1;
  unsigned long b1553 = t1551 * c1552;
  void* r1554 = memcpy(cast1548, cast1550, b1553);
  char* t1555 = __s11520;
  __retval1523 = t1555;
  char* t1556 = __retval1523;
  return t1556;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1557, char* v1558, unsigned long v1559) {
bb1560:
  char* __s11561;
  char* __s21562;
  unsigned long __n1563;
  char* __retval1564;
  __s11561 = v1557;
  __s21562 = v1558;
  __n1563 = v1559;
    unsigned long t1565 = __n1563;
    unsigned long c1566 = 0;
    _Bool c1567 = ((t1565 == c1566)) ? 1 : 0;
    if (c1567) {
      char* t1568 = __s11561;
      __retval1564 = t1568;
      char* t1569 = __retval1564;
      return t1569;
    }
    _Bool r1570 = std____is_constant_evaluated();
    if (r1570) {
      char* t1571 = __s11561;
      char* t1572 = __s21562;
      unsigned long t1573 = __n1563;
      char* r1574 = __gnu_cxx__char_traits_char___copy(t1571, t1572, t1573);
      __retval1564 = r1574;
      char* t1575 = __retval1564;
      return t1575;
    }
  char* t1576 = __s11561;
  void* cast1577 = (void*)t1576;
  char* t1578 = __s21562;
  void* cast1579 = (void*)t1578;
  unsigned long t1580 = __n1563;
  void* r1581 = memcpy(cast1577, cast1579, t1580);
  char* cast1582 = (char*)r1581;
  __retval1564 = cast1582;
  char* t1583 = __retval1564;
  return t1583;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1584, char* v1585, unsigned long v1586) {
bb1587:
  char* __d1588;
  char* __s1589;
  unsigned long __n1590;
  __d1588 = v1584;
  __s1589 = v1585;
  __n1590 = v1586;
    unsigned long t1591 = __n1590;
    unsigned long c1592 = 1;
    _Bool c1593 = ((t1591 == c1592)) ? 1 : 0;
    if (c1593) {
      char* t1594 = __d1588;
      char* t1595 = __s1589;
      std__char_traits_char___assign(t1594, t1595);
    } else {
      char* t1596 = __d1588;
      char* t1597 = __s1589;
      unsigned long t1598 = __n1590;
      char* r1599 = std__char_traits_char___copy(t1596, t1597, t1598);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1600) {
bb1601:
  char* __it1602;
  char* __retval1603;
  __it1602 = v1600;
  char* t1604 = __it1602;
  __retval1603 = t1604;
  char* t1605 = __retval1603;
  return t1605;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1606, char* v1607, char* v1608) {
bb1609:
  char* __p1610;
  char* __k11611;
  char* __k21612;
  __p1610 = v1606;
  __k11611 = v1607;
  __k21612 = v1608;
    char* t1613 = __p1610;
    char* t1614 = __k11611;
    char* r1615 = char_const__std____niter_base_char_const__(t1614);
    char* t1616 = __k21612;
    char* t1617 = __k11611;
    long diff1618 = t1616 - t1617;
    unsigned long cast1619 = (unsigned long)diff1618;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1613, r1615, cast1619);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1620) {
bb1621:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1622;
  char* __retval1623;
  this1622 = v1620;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1624 = this1622;
  char* t1625 = t1624->_M_dataplus._M_p;
  __retval1623 = t1625;
  char* t1626 = __retval1623;
  return t1626;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1627, unsigned long v1628) {
bb1629:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1630;
  unsigned long __length1631;
  this1630 = v1627;
  __length1631 = v1628;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1632 = this1630;
  unsigned long t1633 = __length1631;
  t1632->_M_string_length = t1633;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1634, unsigned long v1635) {
bb1636:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1637;
  unsigned long __n1638;
  char ref_tmp01639;
  this1637 = v1634;
  __n1638 = v1635;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1640 = this1637;
  unsigned long t1641 = __n1638;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1640, t1641);
  unsigned long t1642 = __n1638;
  char* r1643 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1640);
  char* ptr1644 = &(r1643)[t1642];
  char c1645 = 0;
  ref_tmp01639 = c1645;
  std__char_traits_char___assign(ptr1644, &ref_tmp01639);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1646) {
bb1647:
  struct _Guard* this1648;
  this1648 = v1646;
  struct _Guard* t1649 = this1648;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1650 = t1649->_M_guarded;
    _Bool cast1651 = (_Bool)t1650;
    if (cast1651) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1652 = t1649->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1652);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1653, char* v1654, char* v1655, struct std__forward_iterator_tag v1656) {
bb1657:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1658;
  char* __beg1659;
  char* __end1660;
  struct std__forward_iterator_tag unnamed1661;
  unsigned long __dnew1662;
  struct _Guard __guard1663;
  this1658 = v1653;
  __beg1659 = v1654;
  __end1660 = v1655;
  unnamed1661 = v1656;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1664 = this1658;
  char* t1665 = __beg1659;
  char* t1666 = __end1660;
  long r1667 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1665, t1666);
  unsigned long cast1668 = (unsigned long)r1667;
  __dnew1662 = cast1668;
    unsigned long t1669 = __dnew1662;
    unsigned long c1670 = 15;
    _Bool c1671 = ((t1669 > c1670)) ? 1 : 0;
    if (c1671) {
      unsigned long c1672 = 0;
      char* r1673 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1664, &__dnew1662, c1672);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1664, r1673);
      unsigned long t1674 = __dnew1662;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1664, t1674);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1664);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1663, t1664);
    char* r1675 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1664);
    char* t1676 = __beg1659;
    char* t1677 = __end1660;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1675, t1676, t1677);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1678 = ((void*)0);
    __guard1663._M_guarded = c1678;
    unsigned long t1679 = __dnew1662;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1664, t1679);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1663);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1680) {
bb1681:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1682;
  this1682 = v1680;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1683 = this1682;
  {
    struct std__allocator_char_* base1684 = (struct std__allocator_char_*)((char *)t1683 + 0);
    std__allocator_char____allocator(base1684);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1685, struct std____new_allocator_char_* v1686) {
bb1687:
  struct std____new_allocator_char_* this1688;
  struct std____new_allocator_char_* unnamed1689;
  this1688 = v1685;
  unnamed1689 = v1686;
  struct std____new_allocator_char_* t1690 = this1688;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1691, struct std__allocator_char_* v1692) {
bb1693:
  struct std__allocator_char_* this1694;
  struct std__allocator_char_* __a1695;
  this1694 = v1691;
  __a1695 = v1692;
  struct std__allocator_char_* t1696 = this1694;
  struct std____new_allocator_char_* base1697 = (struct std____new_allocator_char_*)((char *)t1696 + 0);
  struct std__allocator_char_* t1698 = __a1695;
  struct std____new_allocator_char_* base1699 = (struct std____new_allocator_char_*)((char *)t1698 + 0);
  std____new_allocator_char_____new_allocator(base1697, base1699);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1700) {
bb1701:
  char* __r1702;
  char* __retval1703;
  __r1702 = v1700;
  char* t1704 = __r1702;
  __retval1703 = t1704;
  char* t1705 = __retval1703;
  return t1705;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1706) {
bb1707:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1708;
  char* __retval1709;
  this1708 = v1706;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1710 = this1708;
  char* cast1711 = (char*)&(t1710->field2._M_local_buf);
  char* r1712 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1711);
  __retval1709 = r1712;
  char* t1713 = __retval1709;
  return t1713;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1714) {
bb1715:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1716;
  _Bool __retval1717;
  this1716 = v1714;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1718 = this1716;
    char* r1719 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1718);
    char* r1720 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1718);
    _Bool c1721 = ((r1719 == r1720)) ? 1 : 0;
    if (c1721) {
        unsigned long t1722 = t1718->_M_string_length;
        unsigned long c1723 = 15;
        _Bool c1724 = ((t1722 > c1723)) ? 1 : 0;
        if (c1724) {
          __builtin_unreachable();
        }
      _Bool c1725 = 1;
      __retval1717 = c1725;
      _Bool t1726 = __retval1717;
      return t1726;
    }
  _Bool c1727 = 0;
  __retval1717 = c1727;
  _Bool t1728 = __retval1717;
  return t1728;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1729, char* v1730, unsigned long v1731) {
bb1732:
  struct std____new_allocator_char_* this1733;
  char* __p1734;
  unsigned long __n1735;
  this1733 = v1729;
  __p1734 = v1730;
  __n1735 = v1731;
  struct std____new_allocator_char_* t1736 = this1733;
    unsigned long c1737 = 1;
    unsigned long c1738 = 16;
    _Bool c1739 = ((c1737 > c1738)) ? 1 : 0;
    if (c1739) {
      char* t1740 = __p1734;
      void* cast1741 = (void*)t1740;
      unsigned long t1742 = __n1735;
      unsigned long c1743 = 1;
      unsigned long b1744 = t1742 * c1743;
      unsigned long c1745 = 1;
      operator_delete_3(cast1741, b1744, c1745);
      return;
    }
  char* t1746 = __p1734;
  void* cast1747 = (void*)t1746;
  unsigned long t1748 = __n1735;
  unsigned long c1749 = 1;
  unsigned long b1750 = t1748 * c1749;
  operator_delete_2(cast1747, b1750);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1751, char* v1752, unsigned long v1753) {
bb1754:
  struct std__allocator_char_* this1755;
  char* __p1756;
  unsigned long __n1757;
  this1755 = v1751;
  __p1756 = v1752;
  __n1757 = v1753;
  struct std__allocator_char_* t1758 = this1755;
    _Bool r1759 = std____is_constant_evaluated();
    if (r1759) {
      char* t1760 = __p1756;
      void* cast1761 = (void*)t1760;
      operator_delete(cast1761);
      return;
    }
  struct std____new_allocator_char_* base1762 = (struct std____new_allocator_char_*)((char *)t1758 + 0);
  char* t1763 = __p1756;
  unsigned long t1764 = __n1757;
  std____new_allocator_char___deallocate(base1762, t1763, t1764);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1765, char* v1766, unsigned long v1767) {
bb1768:
  struct std__allocator_char_* __a1769;
  char* __p1770;
  unsigned long __n1771;
  __a1769 = v1765;
  __p1770 = v1766;
  __n1771 = v1767;
  struct std__allocator_char_* t1772 = __a1769;
  char* t1773 = __p1770;
  unsigned long t1774 = __n1771;
  std__allocator_char___deallocate(t1772, t1773, t1774);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1775, unsigned long v1776) {
bb1777:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1778;
  unsigned long __size1779;
  this1778 = v1775;
  __size1779 = v1776;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1780 = this1778;
  struct std__allocator_char_* r1781 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1780);
  char* r1782 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1780);
  unsigned long t1783 = __size1779;
  unsigned long c1784 = 1;
  unsigned long b1785 = t1783 + c1784;
  std__allocator_traits_std__allocator_char_____deallocate(r1781, r1782, b1785);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1786) {
bb1787:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1788;
  this1788 = v1786;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1789 = this1788;
    _Bool r1790 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1789);
    _Bool u1791 = !r1790;
    if (u1791) {
      unsigned long t1792 = t1789->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1789, t1792);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1793, char* v1794, struct std__allocator_char_* v1795) {
bb1796:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1797;
  char* __dat1798;
  struct std__allocator_char_* __a1799;
  this1797 = v1793;
  __dat1798 = v1794;
  __a1799 = v1795;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1800 = this1797;
  struct std__allocator_char_* base1801 = (struct std__allocator_char_*)((char *)t1800 + 0);
  struct std__allocator_char_* t1802 = __a1799;
  std__allocator_char___allocator(base1801, t1802);
    char* t1803 = __dat1798;
    t1800->_M_p = t1803;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1804, unsigned long v1805, unsigned long v1806) {
bb1807:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1808;
  unsigned long __pos1809;
  unsigned long __off1810;
  unsigned long __retval1811;
  _Bool __testoff1812;
  this1808 = v1804;
  __pos1809 = v1805;
  __off1810 = v1806;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1813 = this1808;
  unsigned long t1814 = __off1810;
  unsigned long r1815 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1813);
  unsigned long t1816 = __pos1809;
  unsigned long b1817 = r1815 - t1816;
  _Bool c1818 = ((t1814 < b1817)) ? 1 : 0;
  __testoff1812 = c1818;
  _Bool t1819 = __testoff1812;
  unsigned long ternary1820;
  if (t1819) {
    unsigned long t1821 = __off1810;
    ternary1820 = (unsigned long)t1821;
  } else {
    unsigned long r1822 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1813);
    unsigned long t1823 = __pos1809;
    unsigned long b1824 = r1822 - t1823;
    ternary1820 = (unsigned long)b1824;
  }
  __retval1811 = ternary1820;
  unsigned long t1825 = __retval1811;
  return t1825;
}

