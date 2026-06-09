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
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

char __const_main_query[1024];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[1];
char _str_1[31] = "Friday, 14-MAY-04 16:00:00 GMT";
char _str_2[15] = "CONTENT_LENGTH";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_3[6] = "name=";
char _str_4[2] = "&";
char _str_5[5] = "age=";
char _str_6[7] = "&color";
char _str_7[7] = "color=";
char _str_8[8] = "&button";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_9[18] = "Set-cookie: Name=";
char _str_10[5] = "age:";
char _str_11[7] = "color:";
char _str_12[11] = "; expires=";
char _str_13[9] = "; path=\n";
char _str_14[26] = "Content-type: text/html\n\n";
char _str_15[24] = "<?xml version = \"1.0\"?>";
char _str_16[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_17[47] = "Transitional//EN\" \"http://www.w3.org/TR/xhtml1";
char _str_18[31] = "/DTD/xhtml1-transitional.dtd\">";
char _str_19[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_20[41] = "<head><title>Cookie Saved</title></head>";
char _str_21[7] = "<body>";
char _str_22[48] = "<p>The cookies have been set with the following";
char _str_23[11] = " data:</p>";
char _str_24[10] = "<p>Name: ";
char _str_25[10] = "<br/></p>";
char _str_26[8] = "<p>Age:";
char _str_27[10] = "<p>Color:";
char _str_28[44] = "<p>Click <a href=\"/cgi-bin/readcookie.cgi\">";
char _str_29[40] = "here</a> to read saved cookie data:</p>";
char _str_30[15] = "</body></html>";
char _str_31[50] = "basic_string: construction from null is not valid";
char _str_32[24] = "basic_string::_M_create";
char _str_33[25] = "basic_string::_M_replace";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_34[21] = "basic_string::substr";
char _str_35[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_36[27] = "basic_string::basic_string";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
extern char* getenv(char* p0);
extern int atoi(char* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__read(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
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
        char* cast20 = (char*)&(_str_31);
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
  char* cast393 = (char*)&(_str_33);
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
      char* cast749 = (char*)&(_str_35);
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
    char* cast773 = (char*)&(_str_36);
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
  char* cast794 = (char*)&(_str_34);
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

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v1002, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1003) {
bb1004:
  struct std__basic_ostream_char__std__char_traits_char__* __os1005;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1006;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1007;
  __os1005 = v1002;
  __str1006 = v1003;
  struct std__basic_ostream_char__std__char_traits_char__* t1008 = __os1005;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1009 = __str1006;
  char* r1010 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1009);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1011 = __str1006;
  unsigned long r1012 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1011);
  long cast1013 = (long)r1012;
  struct std__basic_ostream_char__std__char_traits_char__* r1014 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1008, r1010, cast1013);
  __retval1007 = r1014;
  struct std__basic_ostream_char__std__char_traits_char__* t1015 = __retval1007;
  return t1015;
}

// function: main
int main() {
bb1016:
  int __retval1017;
  char query1018[1024];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ dataString1019;
  struct std__allocator_char_ ref_tmp01020;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ nameString1021;
  struct std__allocator_char_ ref_tmp11022;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ageString1023;
  struct std__allocator_char_ ref_tmp21024;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ colorString1025;
  struct std__allocator_char_ ref_tmp31026;
  int contentLength1027;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ expires1028;
  struct std__allocator_char_ ref_tmp41029;
  int c1030 = 0;
  __retval1017 = c1030;
  // array copy
  __builtin_memcpy(query1018, __const_main_query, (unsigned long)1024 * sizeof(__const_main_query[0]));
  char* cast1031 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp01020);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&dataString1019, cast1031, &ref_tmp01020);
  {
    std__allocator_char____allocator(&ref_tmp01020);
  }
    char* cast1032 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp11022);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&nameString1021, cast1032, &ref_tmp11022);
    {
      std__allocator_char____allocator(&ref_tmp11022);
    }
      char* cast1033 = (char*)&(_str);
      std__allocator_char___allocator_2(&ref_tmp21024);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ageString1023, cast1033, &ref_tmp21024);
      {
        std__allocator_char____allocator(&ref_tmp21024);
      }
        char* cast1034 = (char*)&(_str);
        std__allocator_char___allocator_2(&ref_tmp31026);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&colorString1025, cast1034, &ref_tmp31026);
        {
          std__allocator_char____allocator(&ref_tmp31026);
        }
          int c1035 = 0;
          contentLength1027 = c1035;
          char* cast1036 = (char*)&(_str_1);
          std__allocator_char___allocator_2(&ref_tmp41029);
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&expires1028, cast1036, &ref_tmp41029);
          {
            std__allocator_char____allocator(&ref_tmp41029);
          }
              char* cast1037 = (char*)&(_str_2);
              char* r1038 = getenv(cast1037);
              _Bool cast1039 = (_Bool)r1038;
              if (cast1039) {
                int nameLocation1040;
                int endName1041;
                int ageLocation1042;
                int endAge1043;
                int colorLocation1044;
                int endColor1045;
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp51046;
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1047;
                char* cast1048 = (char*)&(_str_2);
                char* r1049 = getenv(cast1048);
                int r1050 = atoi(r1049);
                contentLength1027 = r1050;
                char* cast1051 = (char*)&(query1018);
                int t1052 = contentLength1027;
                long cast1053 = (long)t1052;
                struct std__basic_istream_char__std__char_traits_char__* r1054 = std__istream__read(&_ZSt3cin, cast1051, cast1053);
                char* cast1055 = (char*)&(query1018);
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1056 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(&dataString1019, cast1055);
                char* cast1057 = (char*)&(_str_3);
                unsigned long c1058 = 0;
                unsigned long r1059 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1019, cast1057, c1058);
                unsigned long c1060 = 5;
                unsigned long b1061 = r1059 + c1060;
                int cast1062 = (int)b1061;
                nameLocation1040 = cast1062;
                char* cast1063 = (char*)&(_str_4);
                unsigned long c1064 = 0;
                unsigned long r1065 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1019, cast1063, c1064);
                int cast1066 = (int)r1065;
                endName1041 = cast1066;
                char* cast1067 = (char*)&(_str_5);
                unsigned long c1068 = 0;
                unsigned long r1069 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1019, cast1067, c1068);
                unsigned long c1070 = 4;
                unsigned long b1071 = r1069 + c1070;
                int cast1072 = (int)b1071;
                ageLocation1042 = cast1072;
                char* cast1073 = (char*)&(_str_6);
                unsigned long c1074 = 0;
                unsigned long r1075 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1019, cast1073, c1074);
                int cast1076 = (int)r1075;
                endAge1043 = cast1076;
                char* cast1077 = (char*)&(_str_7);
                unsigned long c1078 = 0;
                unsigned long r1079 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1019, cast1077, c1078);
                unsigned long c1080 = 6;
                unsigned long b1081 = r1079 + c1080;
                int cast1082 = (int)b1081;
                colorLocation1044 = cast1082;
                char* cast1083 = (char*)&(_str_8);
                unsigned long c1084 = 0;
                unsigned long r1085 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1019, cast1083, c1084);
                int cast1086 = (int)r1085;
                endColor1045 = cast1086;
                int t1087 = nameLocation1040;
                unsigned long cast1088 = (unsigned long)t1087;
                int t1089 = endName1041;
                int t1090 = nameLocation1040;
                int b1091 = t1089 - t1090;
                unsigned long cast1092 = (unsigned long)b1091;
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1093 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&dataString1019, cast1088, cast1092);
                ref_tmp51046 = r1093;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1094 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&nameString1021, &ref_tmp51046);
                  tmp_exprcleanup1047 = r1094;
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp51046);
                }
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1095 = tmp_exprcleanup1047;
                  int t1096 = ageLocation1042;
                  int c1097 = 0;
                  _Bool c1098 = ((t1096 > c1097)) ? 1 : 0;
                  if (c1098) {
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp61099;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1100;
                    int t1101 = ageLocation1042;
                    unsigned long cast1102 = (unsigned long)t1101;
                    int t1103 = endAge1043;
                    int t1104 = ageLocation1042;
                    int b1105 = t1103 - t1104;
                    unsigned long cast1106 = (unsigned long)b1105;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1107 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&dataString1019, cast1102, cast1106);
                    ref_tmp61099 = r1107;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1108 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&ageString1023, &ref_tmp61099);
                      tmp_exprcleanup1100 = r1108;
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp61099);
                    }
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1109 = tmp_exprcleanup1100;
                  }
                  int t1110 = colorLocation1044;
                  int c1111 = 0;
                  _Bool c1112 = ((t1110 > c1111)) ? 1 : 0;
                  if (c1112) {
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp71113;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1114;
                    int t1115 = colorLocation1044;
                    unsigned long cast1116 = (unsigned long)t1115;
                    int t1117 = endColor1045;
                    int t1118 = colorLocation1044;
                    int b1119 = t1117 - t1118;
                    unsigned long cast1120 = (unsigned long)b1119;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1121 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&dataString1019, cast1116, cast1120);
                    ref_tmp71113 = r1121;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1122 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&colorString1025, &ref_tmp71113);
                      tmp_exprcleanup1114 = r1122;
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp71113);
                    }
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1123 = tmp_exprcleanup1114;
                  }
                char* cast1124 = (char*)&(_str_9);
                struct std__basic_ostream_char__std__char_traits_char__* r1125 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1124);
                struct std__basic_ostream_char__std__char_traits_char__* r1126 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1125, &nameString1021);
                char* cast1127 = (char*)&(_str_10);
                struct std__basic_ostream_char__std__char_traits_char__* r1128 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1126, cast1127);
                struct std__basic_ostream_char__std__char_traits_char__* r1129 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1128, &ageString1023);
                char* cast1130 = (char*)&(_str_11);
                struct std__basic_ostream_char__std__char_traits_char__* r1131 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1129, cast1130);
                struct std__basic_ostream_char__std__char_traits_char__* r1132 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1131, &colorString1025);
                char* cast1133 = (char*)&(_str_12);
                struct std__basic_ostream_char__std__char_traits_char__* r1134 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1132, cast1133);
                struct std__basic_ostream_char__std__char_traits_char__* r1135 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1134, &expires1028);
                char* cast1136 = (char*)&(_str_13);
                struct std__basic_ostream_char__std__char_traits_char__* r1137 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1135, cast1136);
              }
            char* cast1138 = (char*)&(_str_14);
            struct std__basic_ostream_char__std__char_traits_char__* r1139 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1138);
            char* cast1140 = (char*)&(_str_15);
            struct std__basic_ostream_char__std__char_traits_char__* r1141 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1140);
            char* cast1142 = (char*)&(_str_16);
            struct std__basic_ostream_char__std__char_traits_char__* r1143 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1141, cast1142);
            char* cast1144 = (char*)&(_str_17);
            struct std__basic_ostream_char__std__char_traits_char__* r1145 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1143, cast1144);
            char* cast1146 = (char*)&(_str_18);
            struct std__basic_ostream_char__std__char_traits_char__* r1147 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1145, cast1146);
            char* cast1148 = (char*)&(_str_19);
            struct std__basic_ostream_char__std__char_traits_char__* r1149 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1148);
            char* cast1150 = (char*)&(_str_20);
            struct std__basic_ostream_char__std__char_traits_char__* r1151 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1149, cast1150);
            char* cast1152 = (char*)&(_str_21);
            struct std__basic_ostream_char__std__char_traits_char__* r1153 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1151, cast1152);
            char* cast1154 = (char*)&(_str_22);
            struct std__basic_ostream_char__std__char_traits_char__* r1155 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1154);
            char* cast1156 = (char*)&(_str_23);
            struct std__basic_ostream_char__std__char_traits_char__* r1157 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1155, cast1156);
            char* cast1158 = (char*)&(_str_24);
            struct std__basic_ostream_char__std__char_traits_char__* r1159 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1157, cast1158);
            struct std__basic_ostream_char__std__char_traits_char__* r1160 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1159, &nameString1021);
            char* cast1161 = (char*)&(_str_25);
            struct std__basic_ostream_char__std__char_traits_char__* r1162 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1160, cast1161);
            char* cast1163 = (char*)&(_str_26);
            struct std__basic_ostream_char__std__char_traits_char__* r1164 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1162, cast1163);
            struct std__basic_ostream_char__std__char_traits_char__* r1165 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1164, &ageString1023);
            char* cast1166 = (char*)&(_str_25);
            struct std__basic_ostream_char__std__char_traits_char__* r1167 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1165, cast1166);
            char* cast1168 = (char*)&(_str_27);
            struct std__basic_ostream_char__std__char_traits_char__* r1169 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1167, cast1168);
            struct std__basic_ostream_char__std__char_traits_char__* r1170 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1169, &colorString1025);
            char* cast1171 = (char*)&(_str_25);
            struct std__basic_ostream_char__std__char_traits_char__* r1172 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1170, cast1171);
            char* cast1173 = (char*)&(_str_28);
            struct std__basic_ostream_char__std__char_traits_char__* r1174 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1172, cast1173);
            char* cast1175 = (char*)&(_str_29);
            struct std__basic_ostream_char__std__char_traits_char__* r1176 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1174, cast1175);
            char* cast1177 = (char*)&(_str_30);
            struct std__basic_ostream_char__std__char_traits_char__* r1178 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1176, cast1177);
            int c1179 = 0;
            __retval1017 = c1179;
            int t1180 = __retval1017;
            int ret_val1181 = t1180;
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&expires1028);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&colorString1025);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ageString1023);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&nameString1021);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1019);
            }
            return ret_val1181;
  int t1182 = __retval1017;
  return t1182;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1183) {
bb1184:
  struct std____new_allocator_char_* this1185;
  this1185 = v1183;
  struct std____new_allocator_char_* t1186 = this1185;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1187) {
bb1188:
  char* __r1189;
  char* __retval1190;
  __r1189 = v1187;
  char* t1191 = __r1189;
  __retval1190 = t1191;
  char* t1192 = __retval1190;
  return t1192;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1193) {
bb1194:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1195;
  char* __retval1196;
  this1195 = v1193;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1197 = this1195;
  char* cast1198 = (char*)&(t1197->field2._M_local_buf);
  char* r1199 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1198);
  __retval1196 = r1199;
  char* t1200 = __retval1196;
  return t1200;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1201, char* v1202, struct std__allocator_char_* v1203) {
bb1204:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1205;
  char* __dat1206;
  struct std__allocator_char_* __a1207;
  this1205 = v1201;
  __dat1206 = v1202;
  __a1207 = v1203;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1208 = this1205;
  struct std__allocator_char_* base1209 = (struct std__allocator_char_*)((char *)t1208 + 0);
  struct std__allocator_char_* t1210 = __a1207;
  std__allocator_char___allocator(base1209, t1210);
    char* t1211 = __dat1206;
    t1208->_M_p = t1211;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1212:
  _Bool __retval1213;
    _Bool c1214 = 0;
    __retval1213 = c1214;
    _Bool t1215 = __retval1213;
    return t1215;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1216, char* v1217) {
bb1218:
  char* __c11219;
  char* __c21220;
  _Bool __retval1221;
  __c11219 = v1216;
  __c21220 = v1217;
  char* t1222 = __c11219;
  char t1223 = *t1222;
  int cast1224 = (int)t1223;
  char* t1225 = __c21220;
  char t1226 = *t1225;
  int cast1227 = (int)t1226;
  _Bool c1228 = ((cast1224 == cast1227)) ? 1 : 0;
  __retval1221 = c1228;
  _Bool t1229 = __retval1221;
  return t1229;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1230) {
bb1231:
  char* __p1232;
  unsigned long __retval1233;
  unsigned long __i1234;
  __p1232 = v1230;
  unsigned long c1235 = 0;
  __i1234 = c1235;
    char ref_tmp01236;
    while (1) {
      unsigned long t1237 = __i1234;
      char* t1238 = __p1232;
      char* ptr1239 = &(t1238)[t1237];
      char c1240 = 0;
      ref_tmp01236 = c1240;
      _Bool r1241 = __gnu_cxx__char_traits_char___eq(ptr1239, &ref_tmp01236);
      _Bool u1242 = !r1241;
      if (!u1242) break;
      unsigned long t1243 = __i1234;
      unsigned long u1244 = t1243 + 1;
      __i1234 = u1244;
    }
  unsigned long t1245 = __i1234;
  __retval1233 = t1245;
  unsigned long t1246 = __retval1233;
  return t1246;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1247) {
bb1248:
  char* __s1249;
  unsigned long __retval1250;
  __s1249 = v1247;
    _Bool r1251 = std____is_constant_evaluated();
    if (r1251) {
      char* t1252 = __s1249;
      unsigned long r1253 = __gnu_cxx__char_traits_char___length(t1252);
      __retval1250 = r1253;
      unsigned long t1254 = __retval1250;
      return t1254;
    }
  char* t1255 = __s1249;
  unsigned long r1256 = strlen(t1255);
  __retval1250 = r1256;
  unsigned long t1257 = __retval1250;
  return t1257;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1258, char* v1259, struct std__random_access_iterator_tag v1260) {
bb1261:
  char* __first1262;
  char* __last1263;
  struct std__random_access_iterator_tag unnamed1264;
  long __retval1265;
  __first1262 = v1258;
  __last1263 = v1259;
  unnamed1264 = v1260;
  char* t1266 = __last1263;
  char* t1267 = __first1262;
  long diff1268 = t1266 - t1267;
  __retval1265 = diff1268;
  long t1269 = __retval1265;
  return t1269;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1270) {
bb1271:
  char** unnamed1272;
  struct std__random_access_iterator_tag __retval1273;
  unnamed1272 = v1270;
  struct std__random_access_iterator_tag t1274 = __retval1273;
  return t1274;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1275, char* v1276) {
bb1277:
  char* __first1278;
  char* __last1279;
  long __retval1280;
  struct std__random_access_iterator_tag agg_tmp01281;
  __first1278 = v1275;
  __last1279 = v1276;
  char* t1282 = __first1278;
  char* t1283 = __last1279;
  struct std__random_access_iterator_tag r1284 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1278);
  agg_tmp01281 = r1284;
  struct std__random_access_iterator_tag t1285 = agg_tmp01281;
  long r1286 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1282, t1283, t1285);
  __retval1280 = r1286;
  long t1287 = __retval1280;
  return t1287;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1288, char* v1289) {
bb1290:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1291;
  char* __p1292;
  this1291 = v1288;
  __p1292 = v1289;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1293 = this1291;
  char* t1294 = __p1292;
  t1293->_M_dataplus._M_p = t1294;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1295) {
bb1296:
  struct std__allocator_char_* __a1297;
  unsigned long __retval1298;
  __a1297 = v1295;
  unsigned long c1299 = -1;
  unsigned long c1300 = 1;
  unsigned long b1301 = c1299 / c1300;
  __retval1298 = b1301;
  unsigned long t1302 = __retval1298;
  return t1302;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1303) {
bb1304:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1305;
  struct std__allocator_char_* __retval1306;
  this1305 = v1303;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1307 = this1305;
  struct std__allocator_char_* base1308 = (struct std__allocator_char_*)((char *)&(t1307->_M_dataplus) + 0);
  __retval1306 = base1308;
  struct std__allocator_char_* t1309 = __retval1306;
  return t1309;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1310, unsigned long* v1311) {
bb1312:
  unsigned long* __a1313;
  unsigned long* __b1314;
  unsigned long* __retval1315;
  __a1313 = v1310;
  __b1314 = v1311;
    unsigned long* t1316 = __b1314;
    unsigned long t1317 = *t1316;
    unsigned long* t1318 = __a1313;
    unsigned long t1319 = *t1318;
    _Bool c1320 = ((t1317 < t1319)) ? 1 : 0;
    if (c1320) {
      unsigned long* t1321 = __b1314;
      __retval1315 = t1321;
      unsigned long* t1322 = __retval1315;
      return t1322;
    }
  unsigned long* t1323 = __a1313;
  __retval1315 = t1323;
  unsigned long* t1324 = __retval1315;
  return t1324;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1325) {
bb1326:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1327;
  unsigned long __retval1328;
  unsigned long __diffmax1329;
  unsigned long __allocmax1330;
  this1327 = v1325;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1331 = this1327;
  unsigned long c1332 = 9223372036854775807;
  __diffmax1329 = c1332;
  struct std__allocator_char_* r1333 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1331);
  unsigned long r1334 = std__allocator_traits_std__allocator_char_____max_size(r1333);
  __allocmax1330 = r1334;
  unsigned long* r1335 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1329, &__allocmax1330);
  unsigned long t1336 = *r1335;
  unsigned long c1337 = 1;
  unsigned long b1338 = t1336 - c1337;
  __retval1328 = b1338;
  unsigned long t1339 = __retval1328;
  return t1339;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1340) {
bb1341:
  struct std____new_allocator_char_* this1342;
  unsigned long __retval1343;
  this1342 = v1340;
  struct std____new_allocator_char_* t1344 = this1342;
  unsigned long c1345 = 9223372036854775807;
  unsigned long c1346 = 1;
  unsigned long b1347 = c1345 / c1346;
  __retval1343 = b1347;
  unsigned long t1348 = __retval1343;
  return t1348;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1349, unsigned long v1350, void* v1351) {
bb1352:
  struct std____new_allocator_char_* this1353;
  unsigned long __n1354;
  void* unnamed1355;
  char* __retval1356;
  this1353 = v1349;
  __n1354 = v1350;
  unnamed1355 = v1351;
  struct std____new_allocator_char_* t1357 = this1353;
    unsigned long t1358 = __n1354;
    unsigned long r1359 = std____new_allocator_char____M_max_size___const(t1357);
    _Bool c1360 = ((t1358 > r1359)) ? 1 : 0;
    if (c1360) {
        unsigned long t1361 = __n1354;
        unsigned long c1362 = -1;
        unsigned long c1363 = 1;
        unsigned long b1364 = c1362 / c1363;
        _Bool c1365 = ((t1361 > b1364)) ? 1 : 0;
        if (c1365) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1366 = 1;
    unsigned long c1367 = 16;
    _Bool c1368 = ((c1366 > c1367)) ? 1 : 0;
    if (c1368) {
      unsigned long __al1369;
      unsigned long c1370 = 1;
      __al1369 = c1370;
      unsigned long t1371 = __n1354;
      unsigned long c1372 = 1;
      unsigned long b1373 = t1371 * c1372;
      unsigned long t1374 = __al1369;
      void* r1375 = operator_new_2(b1373, t1374);
      char* cast1376 = (char*)r1375;
      __retval1356 = cast1376;
      char* t1377 = __retval1356;
      return t1377;
    }
  unsigned long t1378 = __n1354;
  unsigned long c1379 = 1;
  unsigned long b1380 = t1378 * c1379;
  void* r1381 = operator_new(b1380);
  char* cast1382 = (char*)r1381;
  __retval1356 = cast1382;
  char* t1383 = __retval1356;
  return t1383;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1384, unsigned long v1385) {
bb1386:
  struct std__allocator_char_* this1387;
  unsigned long __n1388;
  char* __retval1389;
  this1387 = v1384;
  __n1388 = v1385;
  struct std__allocator_char_* t1390 = this1387;
    _Bool r1391 = std____is_constant_evaluated();
    if (r1391) {
        unsigned long t1392 = __n1388;
        unsigned long c1393 = 1;
        unsigned long ovr1394;
        _Bool ovf1395 = __builtin_mul_overflow(t1392, c1393, &ovr1394);
        __n1388 = ovr1394;
        if (ovf1395) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1396 = __n1388;
      void* r1397 = operator_new(t1396);
      char* cast1398 = (char*)r1397;
      __retval1389 = cast1398;
      char* t1399 = __retval1389;
      return t1399;
    }
  struct std____new_allocator_char_* base1400 = (struct std____new_allocator_char_*)((char *)t1390 + 0);
  unsigned long t1401 = __n1388;
  void* c1402 = ((void*)0);
  char* r1403 = std____new_allocator_char___allocate(base1400, t1401, c1402);
  __retval1389 = r1403;
  char* t1404 = __retval1389;
  return t1404;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1405, unsigned long v1406) {
bb1407:
  struct std__allocator_char_* __a1408;
  unsigned long __n1409;
  char* __retval1410;
  __a1408 = v1405;
  __n1409 = v1406;
  struct std__allocator_char_* t1411 = __a1408;
  unsigned long t1412 = __n1409;
  char* r1413 = std__allocator_char___allocate(t1411, t1412);
  __retval1410 = r1413;
  char* t1414 = __retval1410;
  return t1414;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1415, unsigned long v1416) {
bb1417:
  struct std__allocator_char_* __a1418;
  unsigned long __n1419;
  char* __retval1420;
  char* __p1421;
  __a1418 = v1415;
  __n1419 = v1416;
  struct std__allocator_char_* t1422 = __a1418;
  unsigned long t1423 = __n1419;
  char* r1424 = std__allocator_traits_std__allocator_char_____allocate(t1422, t1423);
  __p1421 = r1424;
  char* t1425 = __p1421;
  __retval1420 = t1425;
  char* t1426 = __retval1420;
  return t1426;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1427) {
bb1428:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1429;
  struct std__allocator_char_* __retval1430;
  this1429 = v1427;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1431 = this1429;
  struct std__allocator_char_* base1432 = (struct std__allocator_char_*)((char *)&(t1431->_M_dataplus) + 0);
  __retval1430 = base1432;
  struct std__allocator_char_* t1433 = __retval1430;
  return t1433;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1434, unsigned long* v1435, unsigned long v1436) {
bb1437:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1438;
  unsigned long* __capacity1439;
  unsigned long __old_capacity1440;
  char* __retval1441;
  this1438 = v1434;
  __capacity1439 = v1435;
  __old_capacity1440 = v1436;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1442 = this1438;
    unsigned long* t1443 = __capacity1439;
    unsigned long t1444 = *t1443;
    unsigned long r1445 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1442);
    _Bool c1446 = ((t1444 > r1445)) ? 1 : 0;
    if (c1446) {
      char* cast1447 = (char*)&(_str_32);
      std____throw_length_error(cast1447);
    }
    unsigned long* t1448 = __capacity1439;
    unsigned long t1449 = *t1448;
    unsigned long t1450 = __old_capacity1440;
    _Bool c1451 = ((t1449 > t1450)) ? 1 : 0;
    _Bool ternary1452;
    if (c1451) {
      unsigned long* t1453 = __capacity1439;
      unsigned long t1454 = *t1453;
      unsigned long c1455 = 2;
      unsigned long t1456 = __old_capacity1440;
      unsigned long b1457 = c1455 * t1456;
      _Bool c1458 = ((t1454 < b1457)) ? 1 : 0;
      ternary1452 = (_Bool)c1458;
    } else {
      _Bool c1459 = 0;
      ternary1452 = (_Bool)c1459;
    }
    if (ternary1452) {
      unsigned long c1460 = 2;
      unsigned long t1461 = __old_capacity1440;
      unsigned long b1462 = c1460 * t1461;
      unsigned long* t1463 = __capacity1439;
      *t1463 = b1462;
        unsigned long* t1464 = __capacity1439;
        unsigned long t1465 = *t1464;
        unsigned long r1466 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1442);
        _Bool c1467 = ((t1465 > r1466)) ? 1 : 0;
        if (c1467) {
          unsigned long r1468 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1442);
          unsigned long* t1469 = __capacity1439;
          *t1469 = r1468;
        }
    }
  struct std__allocator_char_* r1470 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1442);
  unsigned long* t1471 = __capacity1439;
  unsigned long t1472 = *t1471;
  unsigned long c1473 = 1;
  unsigned long b1474 = t1472 + c1473;
  char* r1475 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1470, b1474);
  __retval1441 = r1475;
  char* t1476 = __retval1441;
  return t1476;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1477, unsigned long v1478) {
bb1479:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1480;
  unsigned long __capacity1481;
  this1480 = v1477;
  __capacity1481 = v1478;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1482 = this1480;
  unsigned long t1483 = __capacity1481;
  t1482->field2._M_allocated_capacity = t1483;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1484:
  _Bool __retval1485;
    _Bool c1486 = 0;
    __retval1485 = c1486;
    _Bool t1487 = __retval1485;
    return t1487;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1488) {
bb1489:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1490;
  this1490 = v1488;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1491 = this1490;
    _Bool r1492 = std__is_constant_evaluated();
    if (r1492) {
        unsigned long __i1493;
        unsigned long c1494 = 0;
        __i1493 = c1494;
        while (1) {
          unsigned long t1496 = __i1493;
          unsigned long c1497 = 15;
          _Bool c1498 = ((t1496 <= c1497)) ? 1 : 0;
          if (!c1498) break;
          char c1499 = 0;
          unsigned long t1500 = __i1493;
          t1491->field2._M_local_buf[t1500] = c1499;
        for_step1495: ;
          unsigned long t1501 = __i1493;
          unsigned long u1502 = t1501 + 1;
          __i1493 = u1502;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1503, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1504) {
bb1505:
  struct _Guard* this1506;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1507;
  this1506 = v1503;
  __s1507 = v1504;
  struct _Guard* t1508 = this1506;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1509 = __s1507;
  t1508->_M_guarded = t1509;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1510, char* v1511) {
bb1512:
  char* __location1513;
  char* __args1514;
  char* __retval1515;
  void* __loc1516;
  __location1513 = v1510;
  __args1514 = v1511;
  char* t1517 = __location1513;
  void* cast1518 = (void*)t1517;
  __loc1516 = cast1518;
    void* t1519 = __loc1516;
    char* cast1520 = (char*)t1519;
    char* t1521 = __args1514;
    char t1522 = *t1521;
    *cast1520 = t1522;
    __retval1515 = cast1520;
    char* t1523 = __retval1515;
    return t1523;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1524, char* v1525) {
bb1526:
  char* __c11527;
  char* __c21528;
  __c11527 = v1524;
  __c21528 = v1525;
    _Bool r1529 = std____is_constant_evaluated();
    if (r1529) {
      char* t1530 = __c11527;
      char* t1531 = __c21528;
      char* r1532 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1530, t1531);
    } else {
      char* t1533 = __c21528;
      char t1534 = *t1533;
      char* t1535 = __c11527;
      *t1535 = t1534;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1536, char* v1537, unsigned long v1538) {
bb1539:
  char* __s11540;
  char* __s21541;
  unsigned long __n1542;
  char* __retval1543;
  __s11540 = v1536;
  __s21541 = v1537;
  __n1542 = v1538;
    unsigned long t1544 = __n1542;
    unsigned long c1545 = 0;
    _Bool c1546 = ((t1544 == c1545)) ? 1 : 0;
    if (c1546) {
      char* t1547 = __s11540;
      __retval1543 = t1547;
      char* t1548 = __retval1543;
      return t1548;
    }
    _Bool r1549 = std____is_constant_evaluated();
    if (r1549) {
        unsigned long __i1550;
        unsigned long c1551 = 0;
        __i1550 = c1551;
        while (1) {
          unsigned long t1553 = __i1550;
          unsigned long t1554 = __n1542;
          _Bool c1555 = ((t1553 < t1554)) ? 1 : 0;
          if (!c1555) break;
          char* t1556 = __s11540;
          unsigned long t1557 = __i1550;
          char* ptr1558 = &(t1556)[t1557];
          unsigned long t1559 = __i1550;
          char* t1560 = __s21541;
          char* ptr1561 = &(t1560)[t1559];
          char* r1562 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1558, ptr1561);
        for_step1552: ;
          unsigned long t1563 = __i1550;
          unsigned long u1564 = t1563 + 1;
          __i1550 = u1564;
        }
      char* t1565 = __s11540;
      __retval1543 = t1565;
      char* t1566 = __retval1543;
      return t1566;
    }
  char* t1567 = __s11540;
  void* cast1568 = (void*)t1567;
  char* t1569 = __s21541;
  void* cast1570 = (void*)t1569;
  unsigned long t1571 = __n1542;
  unsigned long c1572 = 1;
  unsigned long b1573 = t1571 * c1572;
  void* r1574 = memcpy(cast1568, cast1570, b1573);
  char* t1575 = __s11540;
  __retval1543 = t1575;
  char* t1576 = __retval1543;
  return t1576;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1577, char* v1578, unsigned long v1579) {
bb1580:
  char* __s11581;
  char* __s21582;
  unsigned long __n1583;
  char* __retval1584;
  __s11581 = v1577;
  __s21582 = v1578;
  __n1583 = v1579;
    unsigned long t1585 = __n1583;
    unsigned long c1586 = 0;
    _Bool c1587 = ((t1585 == c1586)) ? 1 : 0;
    if (c1587) {
      char* t1588 = __s11581;
      __retval1584 = t1588;
      char* t1589 = __retval1584;
      return t1589;
    }
    _Bool r1590 = std____is_constant_evaluated();
    if (r1590) {
      char* t1591 = __s11581;
      char* t1592 = __s21582;
      unsigned long t1593 = __n1583;
      char* r1594 = __gnu_cxx__char_traits_char___copy(t1591, t1592, t1593);
      __retval1584 = r1594;
      char* t1595 = __retval1584;
      return t1595;
    }
  char* t1596 = __s11581;
  void* cast1597 = (void*)t1596;
  char* t1598 = __s21582;
  void* cast1599 = (void*)t1598;
  unsigned long t1600 = __n1583;
  void* r1601 = memcpy(cast1597, cast1599, t1600);
  char* cast1602 = (char*)r1601;
  __retval1584 = cast1602;
  char* t1603 = __retval1584;
  return t1603;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1604, char* v1605, unsigned long v1606) {
bb1607:
  char* __d1608;
  char* __s1609;
  unsigned long __n1610;
  __d1608 = v1604;
  __s1609 = v1605;
  __n1610 = v1606;
    unsigned long t1611 = __n1610;
    unsigned long c1612 = 1;
    _Bool c1613 = ((t1611 == c1612)) ? 1 : 0;
    if (c1613) {
      char* t1614 = __d1608;
      char* t1615 = __s1609;
      std__char_traits_char___assign(t1614, t1615);
    } else {
      char* t1616 = __d1608;
      char* t1617 = __s1609;
      unsigned long t1618 = __n1610;
      char* r1619 = std__char_traits_char___copy(t1616, t1617, t1618);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1620) {
bb1621:
  char* __it1622;
  char* __retval1623;
  __it1622 = v1620;
  char* t1624 = __it1622;
  __retval1623 = t1624;
  char* t1625 = __retval1623;
  return t1625;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1626, char* v1627, char* v1628) {
bb1629:
  char* __p1630;
  char* __k11631;
  char* __k21632;
  __p1630 = v1626;
  __k11631 = v1627;
  __k21632 = v1628;
    char* t1633 = __p1630;
    char* t1634 = __k11631;
    char* r1635 = char_const__std____niter_base_char_const__(t1634);
    char* t1636 = __k21632;
    char* t1637 = __k11631;
    long diff1638 = t1636 - t1637;
    unsigned long cast1639 = (unsigned long)diff1638;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1633, r1635, cast1639);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1640) {
bb1641:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1642;
  char* __retval1643;
  this1642 = v1640;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1644 = this1642;
  char* t1645 = t1644->_M_dataplus._M_p;
  __retval1643 = t1645;
  char* t1646 = __retval1643;
  return t1646;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1647, unsigned long v1648) {
bb1649:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1650;
  unsigned long __length1651;
  this1650 = v1647;
  __length1651 = v1648;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1652 = this1650;
  unsigned long t1653 = __length1651;
  t1652->_M_string_length = t1653;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1654, unsigned long v1655) {
bb1656:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1657;
  unsigned long __n1658;
  char ref_tmp01659;
  this1657 = v1654;
  __n1658 = v1655;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1660 = this1657;
  unsigned long t1661 = __n1658;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1660, t1661);
  unsigned long t1662 = __n1658;
  char* r1663 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1660);
  char* ptr1664 = &(r1663)[t1662];
  char c1665 = 0;
  ref_tmp01659 = c1665;
  std__char_traits_char___assign(ptr1664, &ref_tmp01659);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1666) {
bb1667:
  struct _Guard* this1668;
  this1668 = v1666;
  struct _Guard* t1669 = this1668;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1670 = t1669->_M_guarded;
    _Bool cast1671 = (_Bool)t1670;
    if (cast1671) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1672 = t1669->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1672);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1673, char* v1674, char* v1675, struct std__forward_iterator_tag v1676) {
bb1677:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1678;
  char* __beg1679;
  char* __end1680;
  struct std__forward_iterator_tag unnamed1681;
  unsigned long __dnew1682;
  struct _Guard __guard1683;
  this1678 = v1673;
  __beg1679 = v1674;
  __end1680 = v1675;
  unnamed1681 = v1676;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1684 = this1678;
  char* t1685 = __beg1679;
  char* t1686 = __end1680;
  long r1687 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1685, t1686);
  unsigned long cast1688 = (unsigned long)r1687;
  __dnew1682 = cast1688;
    unsigned long t1689 = __dnew1682;
    unsigned long c1690 = 15;
    _Bool c1691 = ((t1689 > c1690)) ? 1 : 0;
    if (c1691) {
      unsigned long c1692 = 0;
      char* r1693 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1684, &__dnew1682, c1692);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1684, r1693);
      unsigned long t1694 = __dnew1682;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1684, t1694);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1684);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1683, t1684);
    char* r1695 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1684);
    char* t1696 = __beg1679;
    char* t1697 = __end1680;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1695, t1696, t1697);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1698 = ((void*)0);
    __guard1683._M_guarded = c1698;
    unsigned long t1699 = __dnew1682;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1684, t1699);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1683);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1700) {
bb1701:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1702;
  this1702 = v1700;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1703 = this1702;
  {
    struct std__allocator_char_* base1704 = (struct std__allocator_char_*)((char *)t1703 + 0);
    std__allocator_char____allocator(base1704);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1705, struct std____new_allocator_char_* v1706) {
bb1707:
  struct std____new_allocator_char_* this1708;
  struct std____new_allocator_char_* unnamed1709;
  this1708 = v1705;
  unnamed1709 = v1706;
  struct std____new_allocator_char_* t1710 = this1708;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1711, struct std__allocator_char_* v1712) {
bb1713:
  struct std__allocator_char_* this1714;
  struct std__allocator_char_* __a1715;
  this1714 = v1711;
  __a1715 = v1712;
  struct std__allocator_char_* t1716 = this1714;
  struct std____new_allocator_char_* base1717 = (struct std____new_allocator_char_*)((char *)t1716 + 0);
  struct std__allocator_char_* t1718 = __a1715;
  struct std____new_allocator_char_* base1719 = (struct std____new_allocator_char_*)((char *)t1718 + 0);
  std____new_allocator_char_____new_allocator(base1717, base1719);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1720) {
bb1721:
  char* __r1722;
  char* __retval1723;
  __r1722 = v1720;
  char* t1724 = __r1722;
  __retval1723 = t1724;
  char* t1725 = __retval1723;
  return t1725;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1726) {
bb1727:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1728;
  char* __retval1729;
  this1728 = v1726;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1730 = this1728;
  char* cast1731 = (char*)&(t1730->field2._M_local_buf);
  char* r1732 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1731);
  __retval1729 = r1732;
  char* t1733 = __retval1729;
  return t1733;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1734) {
bb1735:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1736;
  _Bool __retval1737;
  this1736 = v1734;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1738 = this1736;
    char* r1739 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1738);
    char* r1740 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1738);
    _Bool c1741 = ((r1739 == r1740)) ? 1 : 0;
    if (c1741) {
        unsigned long t1742 = t1738->_M_string_length;
        unsigned long c1743 = 15;
        _Bool c1744 = ((t1742 > c1743)) ? 1 : 0;
        if (c1744) {
          __builtin_unreachable();
        }
      _Bool c1745 = 1;
      __retval1737 = c1745;
      _Bool t1746 = __retval1737;
      return t1746;
    }
  _Bool c1747 = 0;
  __retval1737 = c1747;
  _Bool t1748 = __retval1737;
  return t1748;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1749, char* v1750, unsigned long v1751) {
bb1752:
  struct std____new_allocator_char_* this1753;
  char* __p1754;
  unsigned long __n1755;
  this1753 = v1749;
  __p1754 = v1750;
  __n1755 = v1751;
  struct std____new_allocator_char_* t1756 = this1753;
    unsigned long c1757 = 1;
    unsigned long c1758 = 16;
    _Bool c1759 = ((c1757 > c1758)) ? 1 : 0;
    if (c1759) {
      char* t1760 = __p1754;
      void* cast1761 = (void*)t1760;
      unsigned long t1762 = __n1755;
      unsigned long c1763 = 1;
      unsigned long b1764 = t1762 * c1763;
      unsigned long c1765 = 1;
      operator_delete_3(cast1761, b1764, c1765);
      return;
    }
  char* t1766 = __p1754;
  void* cast1767 = (void*)t1766;
  unsigned long t1768 = __n1755;
  unsigned long c1769 = 1;
  unsigned long b1770 = t1768 * c1769;
  operator_delete_2(cast1767, b1770);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1771, char* v1772, unsigned long v1773) {
bb1774:
  struct std__allocator_char_* this1775;
  char* __p1776;
  unsigned long __n1777;
  this1775 = v1771;
  __p1776 = v1772;
  __n1777 = v1773;
  struct std__allocator_char_* t1778 = this1775;
    _Bool r1779 = std____is_constant_evaluated();
    if (r1779) {
      char* t1780 = __p1776;
      void* cast1781 = (void*)t1780;
      operator_delete(cast1781);
      return;
    }
  struct std____new_allocator_char_* base1782 = (struct std____new_allocator_char_*)((char *)t1778 + 0);
  char* t1783 = __p1776;
  unsigned long t1784 = __n1777;
  std____new_allocator_char___deallocate(base1782, t1783, t1784);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1785, char* v1786, unsigned long v1787) {
bb1788:
  struct std__allocator_char_* __a1789;
  char* __p1790;
  unsigned long __n1791;
  __a1789 = v1785;
  __p1790 = v1786;
  __n1791 = v1787;
  struct std__allocator_char_* t1792 = __a1789;
  char* t1793 = __p1790;
  unsigned long t1794 = __n1791;
  std__allocator_char___deallocate(t1792, t1793, t1794);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1795, unsigned long v1796) {
bb1797:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1798;
  unsigned long __size1799;
  this1798 = v1795;
  __size1799 = v1796;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1800 = this1798;
  struct std__allocator_char_* r1801 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1800);
  char* r1802 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1800);
  unsigned long t1803 = __size1799;
  unsigned long c1804 = 1;
  unsigned long b1805 = t1803 + c1804;
  std__allocator_traits_std__allocator_char_____deallocate(r1801, r1802, b1805);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1806) {
bb1807:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1808;
  this1808 = v1806;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1809 = this1808;
    _Bool r1810 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1809);
    _Bool u1811 = !r1810;
    if (u1811) {
      unsigned long t1812 = t1809->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1809, t1812);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1813, char* v1814, struct std__allocator_char_* v1815) {
bb1816:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1817;
  char* __dat1818;
  struct std__allocator_char_* __a1819;
  this1817 = v1813;
  __dat1818 = v1814;
  __a1819 = v1815;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1820 = this1817;
  struct std__allocator_char_* base1821 = (struct std__allocator_char_*)((char *)t1820 + 0);
  struct std__allocator_char_* t1822 = __a1819;
  std__allocator_char___allocator(base1821, t1822);
    char* t1823 = __dat1818;
    t1820->_M_p = t1823;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1824, unsigned long v1825, unsigned long v1826) {
bb1827:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1828;
  unsigned long __pos1829;
  unsigned long __off1830;
  unsigned long __retval1831;
  _Bool __testoff1832;
  this1828 = v1824;
  __pos1829 = v1825;
  __off1830 = v1826;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1833 = this1828;
  unsigned long t1834 = __off1830;
  unsigned long r1835 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1833);
  unsigned long t1836 = __pos1829;
  unsigned long b1837 = r1835 - t1836;
  _Bool c1838 = ((t1834 < b1837)) ? 1 : 0;
  __testoff1832 = c1838;
  _Bool t1839 = __testoff1832;
  unsigned long ternary1840;
  if (t1839) {
    unsigned long t1841 = __off1830;
    ternary1840 = (unsigned long)t1841;
  } else {
    unsigned long r1842 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1833);
    unsigned long t1843 = __pos1829;
    unsigned long b1844 = r1842 - t1843;
    ternary1840 = (unsigned long)b1844;
  }
  __retval1831 = ternary1840;
  unsigned long t1845 = __retval1831;
  return t1845;
}

