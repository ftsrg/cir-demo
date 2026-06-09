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

char __const_main_postString[1024];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[1];
char _str_1[15] = "CONTENT_LENGTH";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_2[9] = "namebox=";
char _str_3[2] = "&";
char _str_4[13] = "passwordbox=";
char _str_5[8] = "&button";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[26] = "Content-type: text/html\n\n";
char _str_7[24] = "<?xml version = \"1.0\"?>";
char _str_8[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_9[47] = "Transitional//EN\" \"http://www.w3.org/TR/xhtml1";
char _str_10[31] = "/DTD/xhtml1-transitional.dtd\">";
char _str_11[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_12[43] = "<head><title>Bug2Bug Travel</title></head>";
char _str_13[7] = "<body>";
char _str_14[13] = "<h1>Welcome ";
char _str_15[7] = "!</h1>";
char _str_16[37] = "<p>Here are our weekly specials:</p>";
char _str_17[37] = "<ul><li>Boston to Taiwan ($875)</li>";
char _str_18[39] = "<li>San Diego to Hong Kong ($750)</li>";
char _str_19[44] = "<li>Chicago to Mexico City ($568)</li></ul>";
char _str_20[12] = "coast2coast";
char _str_21[34] = "<hr /><p>Current member special: ";
char _str_22[28] = "Seattle to Tokyo ($400)</p>";
char _str_23[41] = "<p>Sorry. You have entered an incorrect ";
char _str_24[13] = "password</p>";
char _str_25[15] = "</body></html>";
char _str_26[50] = "basic_string: construction from null is not valid";
char _str_27[24] = "basic_string::_M_create";
char _str_28[25] = "basic_string::_M_replace";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_29[21] = "basic_string::substr";
char _str_30[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_31[27] = "basic_string::basic_string";
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
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
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
        char* cast20 = (char*)&(_str_26);
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
  char* cast393 = (char*)&(_str_28);
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
      char* cast749 = (char*)&(_str_30);
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
    char* cast773 = (char*)&(_str_31);
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
  char* cast794 = (char*)&(_str_29);
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

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1016, char* v1017) {
bb1018:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs1019;
  char* __rhs1020;
  _Bool __retval1021;
  __lhs1019 = v1016;
  __rhs1020 = v1017;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1022 = __lhs1019;
  unsigned long r1023 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1022);
  char* t1024 = __rhs1020;
  unsigned long r1025 = std__char_traits_char___length(t1024);
  _Bool c1026 = ((r1023 == r1025)) ? 1 : 0;
  _Bool ternary1027;
  if (c1026) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1028 = __lhs1019;
    char* r1029 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1028);
    char* t1030 = __rhs1020;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1031 = __lhs1019;
    unsigned long r1032 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1031);
    int r1033 = std__char_traits_char___compare(r1029, t1030, r1032);
    _Bool cast1034 = (_Bool)r1033;
    _Bool u1035 = !cast1034;
    ternary1027 = (_Bool)u1035;
  } else {
    _Bool c1036 = 0;
    ternary1027 = (_Bool)c1036;
  }
  __retval1021 = ternary1027;
  _Bool t1037 = __retval1021;
  return t1037;
}

// function: main
int main() {
bb1038:
  int __retval1039;
  char postString1040[1024];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ dataString1041;
  struct std__allocator_char_ ref_tmp01042;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ nameString1043;
  struct std__allocator_char_ ref_tmp11044;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ passwordString1045;
  struct std__allocator_char_ ref_tmp21046;
  int contentLength1047;
  int namelocation1048;
  int endNamelocation1049;
  int password1050;
  int endPassword1051;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp31052;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1053;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp41054;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1055;
  int c1056 = 0;
  __retval1039 = c1056;
  // array copy
  __builtin_memcpy(postString1040, __const_main_postString, (unsigned long)1024 * sizeof(__const_main_postString[0]));
  char* cast1057 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp01042);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&dataString1041, cast1057, &ref_tmp01042);
  {
    std__allocator_char____allocator(&ref_tmp01042);
  }
    char* cast1058 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp11044);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&nameString1043, cast1058, &ref_tmp11044);
    {
      std__allocator_char____allocator(&ref_tmp11044);
    }
      char* cast1059 = (char*)&(_str);
      std__allocator_char___allocator_2(&ref_tmp21046);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&passwordString1045, cast1059, &ref_tmp21046);
      {
        std__allocator_char____allocator(&ref_tmp21046);
      }
        int c1060 = 0;
        contentLength1047 = c1060;
          char* cast1061 = (char*)&(_str_1);
          char* r1062 = getenv(cast1061);
          _Bool cast1063 = (_Bool)r1062;
          if (cast1063) {
            char* cast1064 = (char*)&(_str_1);
            char* r1065 = getenv(cast1064);
            int r1066 = atoi(r1065);
            contentLength1047 = r1066;
          }
        char* cast1067 = (char*)&(postString1040);
        int t1068 = contentLength1047;
        long cast1069 = (long)t1068;
        struct std__basic_istream_char__std__char_traits_char__* r1070 = std__istream__read(&_ZSt3cin, cast1067, cast1069);
        char* cast1071 = (char*)&(postString1040);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1072 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(&dataString1041, cast1071);
        char* cast1073 = (char*)&(_str_2);
        unsigned long c1074 = 0;
        unsigned long r1075 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1041, cast1073, c1074);
        unsigned long c1076 = 8;
        unsigned long b1077 = r1075 + c1076;
        int cast1078 = (int)b1077;
        namelocation1048 = cast1078;
        char* cast1079 = (char*)&(_str_3);
        unsigned long c1080 = 0;
        unsigned long r1081 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1041, cast1079, c1080);
        int cast1082 = (int)r1081;
        endNamelocation1049 = cast1082;
        char* cast1083 = (char*)&(_str_4);
        unsigned long c1084 = 0;
        unsigned long r1085 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1041, cast1083, c1084);
        unsigned long c1086 = 12;
        unsigned long b1087 = r1085 + c1086;
        int cast1088 = (int)b1087;
        password1050 = cast1088;
        char* cast1089 = (char*)&(_str_5);
        unsigned long c1090 = 0;
        unsigned long r1091 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1041, cast1089, c1090);
        int cast1092 = (int)r1091;
        endPassword1051 = cast1092;
        int t1093 = namelocation1048;
        unsigned long cast1094 = (unsigned long)t1093;
        int t1095 = endNamelocation1049;
        int t1096 = namelocation1048;
        int b1097 = t1095 - t1096;
        unsigned long cast1098 = (unsigned long)b1097;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1099 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&dataString1041, cast1094, cast1098);
        ref_tmp31052 = r1099;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1100 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&nameString1043, &ref_tmp31052);
          tmp_exprcleanup1053 = r1100;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp31052);
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1101 = tmp_exprcleanup1053;
        int t1102 = password1050;
        unsigned long cast1103 = (unsigned long)t1102;
        int t1104 = endPassword1051;
        int t1105 = password1050;
        int b1106 = t1104 - t1105;
        unsigned long cast1107 = (unsigned long)b1106;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1108 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&dataString1041, cast1103, cast1107);
        ref_tmp41054 = r1108;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1109 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&passwordString1045, &ref_tmp41054);
          tmp_exprcleanup1055 = r1109;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp41054);
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1110 = tmp_exprcleanup1055;
        char* cast1111 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* r1112 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1111);
        char* cast1113 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* r1114 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1113);
        char* cast1115 = (char*)&(_str_8);
        struct std__basic_ostream_char__std__char_traits_char__* r1116 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1114, cast1115);
        char* cast1117 = (char*)&(_str_9);
        struct std__basic_ostream_char__std__char_traits_char__* r1118 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1116, cast1117);
        char* cast1119 = (char*)&(_str_10);
        struct std__basic_ostream_char__std__char_traits_char__* r1120 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1118, cast1119);
        char* cast1121 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* r1122 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1121);
        char* cast1123 = (char*)&(_str_12);
        struct std__basic_ostream_char__std__char_traits_char__* r1124 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1122, cast1123);
        char* cast1125 = (char*)&(_str_13);
        struct std__basic_ostream_char__std__char_traits_char__* r1126 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1124, cast1125);
        char* cast1127 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* r1128 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1127);
        struct std__basic_ostream_char__std__char_traits_char__* r1129 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1128, &nameString1043);
        char* cast1130 = (char*)&(_str_15);
        struct std__basic_ostream_char__std__char_traits_char__* r1131 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1129, cast1130);
        char* cast1132 = (char*)&(_str_16);
        struct std__basic_ostream_char__std__char_traits_char__* r1133 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1131, cast1132);
        char* cast1134 = (char*)&(_str_17);
        struct std__basic_ostream_char__std__char_traits_char__* r1135 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1133, cast1134);
        char* cast1136 = (char*)&(_str_18);
        struct std__basic_ostream_char__std__char_traits_char__* r1137 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1135, cast1136);
        char* cast1138 = (char*)&(_str_19);
        struct std__basic_ostream_char__std__char_traits_char__* r1139 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1137, cast1138);
          char* cast1140 = (char*)&(_str_20);
          _Bool r1141 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&passwordString1045, cast1140);
          if (r1141) {
            char* cast1142 = (char*)&(_str_21);
            struct std__basic_ostream_char__std__char_traits_char__* r1143 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1142);
            char* cast1144 = (char*)&(_str_22);
            struct std__basic_ostream_char__std__char_traits_char__* r1145 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1143, cast1144);
          } else {
            char* cast1146 = (char*)&(_str_23);
            struct std__basic_ostream_char__std__char_traits_char__* r1147 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1146);
            char* cast1148 = (char*)&(_str_24);
            struct std__basic_ostream_char__std__char_traits_char__* r1149 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1147, cast1148);
          }
        char* cast1150 = (char*)&(_str_25);
        struct std__basic_ostream_char__std__char_traits_char__* r1151 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1150);
        int c1152 = 0;
        __retval1039 = c1152;
        int t1153 = __retval1039;
        int ret_val1154 = t1153;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passwordString1045);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&nameString1043);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1041);
        }
        return ret_val1154;
  int t1155 = __retval1039;
  return t1155;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1156) {
bb1157:
  struct std____new_allocator_char_* this1158;
  this1158 = v1156;
  struct std____new_allocator_char_* t1159 = this1158;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1160) {
bb1161:
  char* __r1162;
  char* __retval1163;
  __r1162 = v1160;
  char* t1164 = __r1162;
  __retval1163 = t1164;
  char* t1165 = __retval1163;
  return t1165;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1166) {
bb1167:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1168;
  char* __retval1169;
  this1168 = v1166;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1170 = this1168;
  char* cast1171 = (char*)&(t1170->field2._M_local_buf);
  char* r1172 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1171);
  __retval1169 = r1172;
  char* t1173 = __retval1169;
  return t1173;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1174, char* v1175, struct std__allocator_char_* v1176) {
bb1177:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1178;
  char* __dat1179;
  struct std__allocator_char_* __a1180;
  this1178 = v1174;
  __dat1179 = v1175;
  __a1180 = v1176;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1181 = this1178;
  struct std__allocator_char_* base1182 = (struct std__allocator_char_*)((char *)t1181 + 0);
  struct std__allocator_char_* t1183 = __a1180;
  std__allocator_char___allocator(base1182, t1183);
    char* t1184 = __dat1179;
    t1181->_M_p = t1184;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1185:
  _Bool __retval1186;
    _Bool c1187 = 0;
    __retval1186 = c1187;
    _Bool t1188 = __retval1186;
    return t1188;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1189, char* v1190) {
bb1191:
  char* __c11192;
  char* __c21193;
  _Bool __retval1194;
  __c11192 = v1189;
  __c21193 = v1190;
  char* t1195 = __c11192;
  char t1196 = *t1195;
  int cast1197 = (int)t1196;
  char* t1198 = __c21193;
  char t1199 = *t1198;
  int cast1200 = (int)t1199;
  _Bool c1201 = ((cast1197 == cast1200)) ? 1 : 0;
  __retval1194 = c1201;
  _Bool t1202 = __retval1194;
  return t1202;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1203) {
bb1204:
  char* __p1205;
  unsigned long __retval1206;
  unsigned long __i1207;
  __p1205 = v1203;
  unsigned long c1208 = 0;
  __i1207 = c1208;
    char ref_tmp01209;
    while (1) {
      unsigned long t1210 = __i1207;
      char* t1211 = __p1205;
      char* ptr1212 = &(t1211)[t1210];
      char c1213 = 0;
      ref_tmp01209 = c1213;
      _Bool r1214 = __gnu_cxx__char_traits_char___eq(ptr1212, &ref_tmp01209);
      _Bool u1215 = !r1214;
      if (!u1215) break;
      unsigned long t1216 = __i1207;
      unsigned long u1217 = t1216 + 1;
      __i1207 = u1217;
    }
  unsigned long t1218 = __i1207;
  __retval1206 = t1218;
  unsigned long t1219 = __retval1206;
  return t1219;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1220) {
bb1221:
  char* __s1222;
  unsigned long __retval1223;
  __s1222 = v1220;
    _Bool r1224 = std____is_constant_evaluated();
    if (r1224) {
      char* t1225 = __s1222;
      unsigned long r1226 = __gnu_cxx__char_traits_char___length(t1225);
      __retval1223 = r1226;
      unsigned long t1227 = __retval1223;
      return t1227;
    }
  char* t1228 = __s1222;
  unsigned long r1229 = strlen(t1228);
  __retval1223 = r1229;
  unsigned long t1230 = __retval1223;
  return t1230;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1231, char* v1232, struct std__random_access_iterator_tag v1233) {
bb1234:
  char* __first1235;
  char* __last1236;
  struct std__random_access_iterator_tag unnamed1237;
  long __retval1238;
  __first1235 = v1231;
  __last1236 = v1232;
  unnamed1237 = v1233;
  char* t1239 = __last1236;
  char* t1240 = __first1235;
  long diff1241 = t1239 - t1240;
  __retval1238 = diff1241;
  long t1242 = __retval1238;
  return t1242;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1243) {
bb1244:
  char** unnamed1245;
  struct std__random_access_iterator_tag __retval1246;
  unnamed1245 = v1243;
  struct std__random_access_iterator_tag t1247 = __retval1246;
  return t1247;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1248, char* v1249) {
bb1250:
  char* __first1251;
  char* __last1252;
  long __retval1253;
  struct std__random_access_iterator_tag agg_tmp01254;
  __first1251 = v1248;
  __last1252 = v1249;
  char* t1255 = __first1251;
  char* t1256 = __last1252;
  struct std__random_access_iterator_tag r1257 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1251);
  agg_tmp01254 = r1257;
  struct std__random_access_iterator_tag t1258 = agg_tmp01254;
  long r1259 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1255, t1256, t1258);
  __retval1253 = r1259;
  long t1260 = __retval1253;
  return t1260;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1261, char* v1262) {
bb1263:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1264;
  char* __p1265;
  this1264 = v1261;
  __p1265 = v1262;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1266 = this1264;
  char* t1267 = __p1265;
  t1266->_M_dataplus._M_p = t1267;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1268) {
bb1269:
  struct std__allocator_char_* __a1270;
  unsigned long __retval1271;
  __a1270 = v1268;
  unsigned long c1272 = -1;
  unsigned long c1273 = 1;
  unsigned long b1274 = c1272 / c1273;
  __retval1271 = b1274;
  unsigned long t1275 = __retval1271;
  return t1275;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1276) {
bb1277:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1278;
  struct std__allocator_char_* __retval1279;
  this1278 = v1276;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1280 = this1278;
  struct std__allocator_char_* base1281 = (struct std__allocator_char_*)((char *)&(t1280->_M_dataplus) + 0);
  __retval1279 = base1281;
  struct std__allocator_char_* t1282 = __retval1279;
  return t1282;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1283, unsigned long* v1284) {
bb1285:
  unsigned long* __a1286;
  unsigned long* __b1287;
  unsigned long* __retval1288;
  __a1286 = v1283;
  __b1287 = v1284;
    unsigned long* t1289 = __b1287;
    unsigned long t1290 = *t1289;
    unsigned long* t1291 = __a1286;
    unsigned long t1292 = *t1291;
    _Bool c1293 = ((t1290 < t1292)) ? 1 : 0;
    if (c1293) {
      unsigned long* t1294 = __b1287;
      __retval1288 = t1294;
      unsigned long* t1295 = __retval1288;
      return t1295;
    }
  unsigned long* t1296 = __a1286;
  __retval1288 = t1296;
  unsigned long* t1297 = __retval1288;
  return t1297;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1298) {
bb1299:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1300;
  unsigned long __retval1301;
  unsigned long __diffmax1302;
  unsigned long __allocmax1303;
  this1300 = v1298;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1304 = this1300;
  unsigned long c1305 = 9223372036854775807;
  __diffmax1302 = c1305;
  struct std__allocator_char_* r1306 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1304);
  unsigned long r1307 = std__allocator_traits_std__allocator_char_____max_size(r1306);
  __allocmax1303 = r1307;
  unsigned long* r1308 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1302, &__allocmax1303);
  unsigned long t1309 = *r1308;
  unsigned long c1310 = 1;
  unsigned long b1311 = t1309 - c1310;
  __retval1301 = b1311;
  unsigned long t1312 = __retval1301;
  return t1312;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1313) {
bb1314:
  struct std____new_allocator_char_* this1315;
  unsigned long __retval1316;
  this1315 = v1313;
  struct std____new_allocator_char_* t1317 = this1315;
  unsigned long c1318 = 9223372036854775807;
  unsigned long c1319 = 1;
  unsigned long b1320 = c1318 / c1319;
  __retval1316 = b1320;
  unsigned long t1321 = __retval1316;
  return t1321;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1322, unsigned long v1323, void* v1324) {
bb1325:
  struct std____new_allocator_char_* this1326;
  unsigned long __n1327;
  void* unnamed1328;
  char* __retval1329;
  this1326 = v1322;
  __n1327 = v1323;
  unnamed1328 = v1324;
  struct std____new_allocator_char_* t1330 = this1326;
    unsigned long t1331 = __n1327;
    unsigned long r1332 = std____new_allocator_char____M_max_size___const(t1330);
    _Bool c1333 = ((t1331 > r1332)) ? 1 : 0;
    if (c1333) {
        unsigned long t1334 = __n1327;
        unsigned long c1335 = -1;
        unsigned long c1336 = 1;
        unsigned long b1337 = c1335 / c1336;
        _Bool c1338 = ((t1334 > b1337)) ? 1 : 0;
        if (c1338) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1339 = 1;
    unsigned long c1340 = 16;
    _Bool c1341 = ((c1339 > c1340)) ? 1 : 0;
    if (c1341) {
      unsigned long __al1342;
      unsigned long c1343 = 1;
      __al1342 = c1343;
      unsigned long t1344 = __n1327;
      unsigned long c1345 = 1;
      unsigned long b1346 = t1344 * c1345;
      unsigned long t1347 = __al1342;
      void* r1348 = operator_new_2(b1346, t1347);
      char* cast1349 = (char*)r1348;
      __retval1329 = cast1349;
      char* t1350 = __retval1329;
      return t1350;
    }
  unsigned long t1351 = __n1327;
  unsigned long c1352 = 1;
  unsigned long b1353 = t1351 * c1352;
  void* r1354 = operator_new(b1353);
  char* cast1355 = (char*)r1354;
  __retval1329 = cast1355;
  char* t1356 = __retval1329;
  return t1356;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1357, unsigned long v1358) {
bb1359:
  struct std__allocator_char_* this1360;
  unsigned long __n1361;
  char* __retval1362;
  this1360 = v1357;
  __n1361 = v1358;
  struct std__allocator_char_* t1363 = this1360;
    _Bool r1364 = std____is_constant_evaluated();
    if (r1364) {
        unsigned long t1365 = __n1361;
        unsigned long c1366 = 1;
        unsigned long ovr1367;
        _Bool ovf1368 = __builtin_mul_overflow(t1365, c1366, &ovr1367);
        __n1361 = ovr1367;
        if (ovf1368) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1369 = __n1361;
      void* r1370 = operator_new(t1369);
      char* cast1371 = (char*)r1370;
      __retval1362 = cast1371;
      char* t1372 = __retval1362;
      return t1372;
    }
  struct std____new_allocator_char_* base1373 = (struct std____new_allocator_char_*)((char *)t1363 + 0);
  unsigned long t1374 = __n1361;
  void* c1375 = ((void*)0);
  char* r1376 = std____new_allocator_char___allocate(base1373, t1374, c1375);
  __retval1362 = r1376;
  char* t1377 = __retval1362;
  return t1377;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1378, unsigned long v1379) {
bb1380:
  struct std__allocator_char_* __a1381;
  unsigned long __n1382;
  char* __retval1383;
  __a1381 = v1378;
  __n1382 = v1379;
  struct std__allocator_char_* t1384 = __a1381;
  unsigned long t1385 = __n1382;
  char* r1386 = std__allocator_char___allocate(t1384, t1385);
  __retval1383 = r1386;
  char* t1387 = __retval1383;
  return t1387;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1388, unsigned long v1389) {
bb1390:
  struct std__allocator_char_* __a1391;
  unsigned long __n1392;
  char* __retval1393;
  char* __p1394;
  __a1391 = v1388;
  __n1392 = v1389;
  struct std__allocator_char_* t1395 = __a1391;
  unsigned long t1396 = __n1392;
  char* r1397 = std__allocator_traits_std__allocator_char_____allocate(t1395, t1396);
  __p1394 = r1397;
  char* t1398 = __p1394;
  __retval1393 = t1398;
  char* t1399 = __retval1393;
  return t1399;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1400) {
bb1401:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1402;
  struct std__allocator_char_* __retval1403;
  this1402 = v1400;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1404 = this1402;
  struct std__allocator_char_* base1405 = (struct std__allocator_char_*)((char *)&(t1404->_M_dataplus) + 0);
  __retval1403 = base1405;
  struct std__allocator_char_* t1406 = __retval1403;
  return t1406;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1407, unsigned long* v1408, unsigned long v1409) {
bb1410:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1411;
  unsigned long* __capacity1412;
  unsigned long __old_capacity1413;
  char* __retval1414;
  this1411 = v1407;
  __capacity1412 = v1408;
  __old_capacity1413 = v1409;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1415 = this1411;
    unsigned long* t1416 = __capacity1412;
    unsigned long t1417 = *t1416;
    unsigned long r1418 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1415);
    _Bool c1419 = ((t1417 > r1418)) ? 1 : 0;
    if (c1419) {
      char* cast1420 = (char*)&(_str_27);
      std____throw_length_error(cast1420);
    }
    unsigned long* t1421 = __capacity1412;
    unsigned long t1422 = *t1421;
    unsigned long t1423 = __old_capacity1413;
    _Bool c1424 = ((t1422 > t1423)) ? 1 : 0;
    _Bool ternary1425;
    if (c1424) {
      unsigned long* t1426 = __capacity1412;
      unsigned long t1427 = *t1426;
      unsigned long c1428 = 2;
      unsigned long t1429 = __old_capacity1413;
      unsigned long b1430 = c1428 * t1429;
      _Bool c1431 = ((t1427 < b1430)) ? 1 : 0;
      ternary1425 = (_Bool)c1431;
    } else {
      _Bool c1432 = 0;
      ternary1425 = (_Bool)c1432;
    }
    if (ternary1425) {
      unsigned long c1433 = 2;
      unsigned long t1434 = __old_capacity1413;
      unsigned long b1435 = c1433 * t1434;
      unsigned long* t1436 = __capacity1412;
      *t1436 = b1435;
        unsigned long* t1437 = __capacity1412;
        unsigned long t1438 = *t1437;
        unsigned long r1439 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1415);
        _Bool c1440 = ((t1438 > r1439)) ? 1 : 0;
        if (c1440) {
          unsigned long r1441 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1415);
          unsigned long* t1442 = __capacity1412;
          *t1442 = r1441;
        }
    }
  struct std__allocator_char_* r1443 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1415);
  unsigned long* t1444 = __capacity1412;
  unsigned long t1445 = *t1444;
  unsigned long c1446 = 1;
  unsigned long b1447 = t1445 + c1446;
  char* r1448 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1443, b1447);
  __retval1414 = r1448;
  char* t1449 = __retval1414;
  return t1449;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1450, unsigned long v1451) {
bb1452:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1453;
  unsigned long __capacity1454;
  this1453 = v1450;
  __capacity1454 = v1451;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1455 = this1453;
  unsigned long t1456 = __capacity1454;
  t1455->field2._M_allocated_capacity = t1456;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1457:
  _Bool __retval1458;
    _Bool c1459 = 0;
    __retval1458 = c1459;
    _Bool t1460 = __retval1458;
    return t1460;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1461) {
bb1462:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1463;
  this1463 = v1461;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1464 = this1463;
    _Bool r1465 = std__is_constant_evaluated();
    if (r1465) {
        unsigned long __i1466;
        unsigned long c1467 = 0;
        __i1466 = c1467;
        while (1) {
          unsigned long t1469 = __i1466;
          unsigned long c1470 = 15;
          _Bool c1471 = ((t1469 <= c1470)) ? 1 : 0;
          if (!c1471) break;
          char c1472 = 0;
          unsigned long t1473 = __i1466;
          t1464->field2._M_local_buf[t1473] = c1472;
        for_step1468: ;
          unsigned long t1474 = __i1466;
          unsigned long u1475 = t1474 + 1;
          __i1466 = u1475;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1476, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1477) {
bb1478:
  struct _Guard* this1479;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1480;
  this1479 = v1476;
  __s1480 = v1477;
  struct _Guard* t1481 = this1479;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1482 = __s1480;
  t1481->_M_guarded = t1482;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1483, char* v1484) {
bb1485:
  char* __location1486;
  char* __args1487;
  char* __retval1488;
  void* __loc1489;
  __location1486 = v1483;
  __args1487 = v1484;
  char* t1490 = __location1486;
  void* cast1491 = (void*)t1490;
  __loc1489 = cast1491;
    void* t1492 = __loc1489;
    char* cast1493 = (char*)t1492;
    char* t1494 = __args1487;
    char t1495 = *t1494;
    *cast1493 = t1495;
    __retval1488 = cast1493;
    char* t1496 = __retval1488;
    return t1496;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1497, char* v1498) {
bb1499:
  char* __c11500;
  char* __c21501;
  __c11500 = v1497;
  __c21501 = v1498;
    _Bool r1502 = std____is_constant_evaluated();
    if (r1502) {
      char* t1503 = __c11500;
      char* t1504 = __c21501;
      char* r1505 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1503, t1504);
    } else {
      char* t1506 = __c21501;
      char t1507 = *t1506;
      char* t1508 = __c11500;
      *t1508 = t1507;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1509, char* v1510, unsigned long v1511) {
bb1512:
  char* __s11513;
  char* __s21514;
  unsigned long __n1515;
  char* __retval1516;
  __s11513 = v1509;
  __s21514 = v1510;
  __n1515 = v1511;
    unsigned long t1517 = __n1515;
    unsigned long c1518 = 0;
    _Bool c1519 = ((t1517 == c1518)) ? 1 : 0;
    if (c1519) {
      char* t1520 = __s11513;
      __retval1516 = t1520;
      char* t1521 = __retval1516;
      return t1521;
    }
    _Bool r1522 = std____is_constant_evaluated();
    if (r1522) {
        unsigned long __i1523;
        unsigned long c1524 = 0;
        __i1523 = c1524;
        while (1) {
          unsigned long t1526 = __i1523;
          unsigned long t1527 = __n1515;
          _Bool c1528 = ((t1526 < t1527)) ? 1 : 0;
          if (!c1528) break;
          char* t1529 = __s11513;
          unsigned long t1530 = __i1523;
          char* ptr1531 = &(t1529)[t1530];
          unsigned long t1532 = __i1523;
          char* t1533 = __s21514;
          char* ptr1534 = &(t1533)[t1532];
          char* r1535 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1531, ptr1534);
        for_step1525: ;
          unsigned long t1536 = __i1523;
          unsigned long u1537 = t1536 + 1;
          __i1523 = u1537;
        }
      char* t1538 = __s11513;
      __retval1516 = t1538;
      char* t1539 = __retval1516;
      return t1539;
    }
  char* t1540 = __s11513;
  void* cast1541 = (void*)t1540;
  char* t1542 = __s21514;
  void* cast1543 = (void*)t1542;
  unsigned long t1544 = __n1515;
  unsigned long c1545 = 1;
  unsigned long b1546 = t1544 * c1545;
  void* r1547 = memcpy(cast1541, cast1543, b1546);
  char* t1548 = __s11513;
  __retval1516 = t1548;
  char* t1549 = __retval1516;
  return t1549;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1550, char* v1551, unsigned long v1552) {
bb1553:
  char* __s11554;
  char* __s21555;
  unsigned long __n1556;
  char* __retval1557;
  __s11554 = v1550;
  __s21555 = v1551;
  __n1556 = v1552;
    unsigned long t1558 = __n1556;
    unsigned long c1559 = 0;
    _Bool c1560 = ((t1558 == c1559)) ? 1 : 0;
    if (c1560) {
      char* t1561 = __s11554;
      __retval1557 = t1561;
      char* t1562 = __retval1557;
      return t1562;
    }
    _Bool r1563 = std____is_constant_evaluated();
    if (r1563) {
      char* t1564 = __s11554;
      char* t1565 = __s21555;
      unsigned long t1566 = __n1556;
      char* r1567 = __gnu_cxx__char_traits_char___copy(t1564, t1565, t1566);
      __retval1557 = r1567;
      char* t1568 = __retval1557;
      return t1568;
    }
  char* t1569 = __s11554;
  void* cast1570 = (void*)t1569;
  char* t1571 = __s21555;
  void* cast1572 = (void*)t1571;
  unsigned long t1573 = __n1556;
  void* r1574 = memcpy(cast1570, cast1572, t1573);
  char* cast1575 = (char*)r1574;
  __retval1557 = cast1575;
  char* t1576 = __retval1557;
  return t1576;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1577, char* v1578, unsigned long v1579) {
bb1580:
  char* __d1581;
  char* __s1582;
  unsigned long __n1583;
  __d1581 = v1577;
  __s1582 = v1578;
  __n1583 = v1579;
    unsigned long t1584 = __n1583;
    unsigned long c1585 = 1;
    _Bool c1586 = ((t1584 == c1585)) ? 1 : 0;
    if (c1586) {
      char* t1587 = __d1581;
      char* t1588 = __s1582;
      std__char_traits_char___assign(t1587, t1588);
    } else {
      char* t1589 = __d1581;
      char* t1590 = __s1582;
      unsigned long t1591 = __n1583;
      char* r1592 = std__char_traits_char___copy(t1589, t1590, t1591);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1593) {
bb1594:
  char* __it1595;
  char* __retval1596;
  __it1595 = v1593;
  char* t1597 = __it1595;
  __retval1596 = t1597;
  char* t1598 = __retval1596;
  return t1598;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1599, char* v1600, char* v1601) {
bb1602:
  char* __p1603;
  char* __k11604;
  char* __k21605;
  __p1603 = v1599;
  __k11604 = v1600;
  __k21605 = v1601;
    char* t1606 = __p1603;
    char* t1607 = __k11604;
    char* r1608 = char_const__std____niter_base_char_const__(t1607);
    char* t1609 = __k21605;
    char* t1610 = __k11604;
    long diff1611 = t1609 - t1610;
    unsigned long cast1612 = (unsigned long)diff1611;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1606, r1608, cast1612);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1613) {
bb1614:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1615;
  char* __retval1616;
  this1615 = v1613;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1617 = this1615;
  char* t1618 = t1617->_M_dataplus._M_p;
  __retval1616 = t1618;
  char* t1619 = __retval1616;
  return t1619;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1620, unsigned long v1621) {
bb1622:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1623;
  unsigned long __length1624;
  this1623 = v1620;
  __length1624 = v1621;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1625 = this1623;
  unsigned long t1626 = __length1624;
  t1625->_M_string_length = t1626;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1627, unsigned long v1628) {
bb1629:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1630;
  unsigned long __n1631;
  char ref_tmp01632;
  this1630 = v1627;
  __n1631 = v1628;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1633 = this1630;
  unsigned long t1634 = __n1631;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1633, t1634);
  unsigned long t1635 = __n1631;
  char* r1636 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1633);
  char* ptr1637 = &(r1636)[t1635];
  char c1638 = 0;
  ref_tmp01632 = c1638;
  std__char_traits_char___assign(ptr1637, &ref_tmp01632);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1639) {
bb1640:
  struct _Guard* this1641;
  this1641 = v1639;
  struct _Guard* t1642 = this1641;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1643 = t1642->_M_guarded;
    _Bool cast1644 = (_Bool)t1643;
    if (cast1644) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1645 = t1642->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1645);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1646, char* v1647, char* v1648, struct std__forward_iterator_tag v1649) {
bb1650:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1651;
  char* __beg1652;
  char* __end1653;
  struct std__forward_iterator_tag unnamed1654;
  unsigned long __dnew1655;
  struct _Guard __guard1656;
  this1651 = v1646;
  __beg1652 = v1647;
  __end1653 = v1648;
  unnamed1654 = v1649;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1657 = this1651;
  char* t1658 = __beg1652;
  char* t1659 = __end1653;
  long r1660 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1658, t1659);
  unsigned long cast1661 = (unsigned long)r1660;
  __dnew1655 = cast1661;
    unsigned long t1662 = __dnew1655;
    unsigned long c1663 = 15;
    _Bool c1664 = ((t1662 > c1663)) ? 1 : 0;
    if (c1664) {
      unsigned long c1665 = 0;
      char* r1666 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1657, &__dnew1655, c1665);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1657, r1666);
      unsigned long t1667 = __dnew1655;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1657, t1667);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1657);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1656, t1657);
    char* r1668 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1657);
    char* t1669 = __beg1652;
    char* t1670 = __end1653;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1668, t1669, t1670);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1671 = ((void*)0);
    __guard1656._M_guarded = c1671;
    unsigned long t1672 = __dnew1655;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1657, t1672);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1656);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1673) {
bb1674:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1675;
  this1675 = v1673;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1676 = this1675;
  {
    struct std__allocator_char_* base1677 = (struct std__allocator_char_*)((char *)t1676 + 0);
    std__allocator_char____allocator(base1677);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1678, struct std____new_allocator_char_* v1679) {
bb1680:
  struct std____new_allocator_char_* this1681;
  struct std____new_allocator_char_* unnamed1682;
  this1681 = v1678;
  unnamed1682 = v1679;
  struct std____new_allocator_char_* t1683 = this1681;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1684, struct std__allocator_char_* v1685) {
bb1686:
  struct std__allocator_char_* this1687;
  struct std__allocator_char_* __a1688;
  this1687 = v1684;
  __a1688 = v1685;
  struct std__allocator_char_* t1689 = this1687;
  struct std____new_allocator_char_* base1690 = (struct std____new_allocator_char_*)((char *)t1689 + 0);
  struct std__allocator_char_* t1691 = __a1688;
  struct std____new_allocator_char_* base1692 = (struct std____new_allocator_char_*)((char *)t1691 + 0);
  std____new_allocator_char_____new_allocator(base1690, base1692);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1693) {
bb1694:
  char* __r1695;
  char* __retval1696;
  __r1695 = v1693;
  char* t1697 = __r1695;
  __retval1696 = t1697;
  char* t1698 = __retval1696;
  return t1698;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1699) {
bb1700:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1701;
  char* __retval1702;
  this1701 = v1699;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1703 = this1701;
  char* cast1704 = (char*)&(t1703->field2._M_local_buf);
  char* r1705 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1704);
  __retval1702 = r1705;
  char* t1706 = __retval1702;
  return t1706;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1707) {
bb1708:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1709;
  _Bool __retval1710;
  this1709 = v1707;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1711 = this1709;
    char* r1712 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1711);
    char* r1713 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1711);
    _Bool c1714 = ((r1712 == r1713)) ? 1 : 0;
    if (c1714) {
        unsigned long t1715 = t1711->_M_string_length;
        unsigned long c1716 = 15;
        _Bool c1717 = ((t1715 > c1716)) ? 1 : 0;
        if (c1717) {
          __builtin_unreachable();
        }
      _Bool c1718 = 1;
      __retval1710 = c1718;
      _Bool t1719 = __retval1710;
      return t1719;
    }
  _Bool c1720 = 0;
  __retval1710 = c1720;
  _Bool t1721 = __retval1710;
  return t1721;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1722, char* v1723, unsigned long v1724) {
bb1725:
  struct std____new_allocator_char_* this1726;
  char* __p1727;
  unsigned long __n1728;
  this1726 = v1722;
  __p1727 = v1723;
  __n1728 = v1724;
  struct std____new_allocator_char_* t1729 = this1726;
    unsigned long c1730 = 1;
    unsigned long c1731 = 16;
    _Bool c1732 = ((c1730 > c1731)) ? 1 : 0;
    if (c1732) {
      char* t1733 = __p1727;
      void* cast1734 = (void*)t1733;
      unsigned long t1735 = __n1728;
      unsigned long c1736 = 1;
      unsigned long b1737 = t1735 * c1736;
      unsigned long c1738 = 1;
      operator_delete_3(cast1734, b1737, c1738);
      return;
    }
  char* t1739 = __p1727;
  void* cast1740 = (void*)t1739;
  unsigned long t1741 = __n1728;
  unsigned long c1742 = 1;
  unsigned long b1743 = t1741 * c1742;
  operator_delete_2(cast1740, b1743);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1744, char* v1745, unsigned long v1746) {
bb1747:
  struct std__allocator_char_* this1748;
  char* __p1749;
  unsigned long __n1750;
  this1748 = v1744;
  __p1749 = v1745;
  __n1750 = v1746;
  struct std__allocator_char_* t1751 = this1748;
    _Bool r1752 = std____is_constant_evaluated();
    if (r1752) {
      char* t1753 = __p1749;
      void* cast1754 = (void*)t1753;
      operator_delete(cast1754);
      return;
    }
  struct std____new_allocator_char_* base1755 = (struct std____new_allocator_char_*)((char *)t1751 + 0);
  char* t1756 = __p1749;
  unsigned long t1757 = __n1750;
  std____new_allocator_char___deallocate(base1755, t1756, t1757);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1758, char* v1759, unsigned long v1760) {
bb1761:
  struct std__allocator_char_* __a1762;
  char* __p1763;
  unsigned long __n1764;
  __a1762 = v1758;
  __p1763 = v1759;
  __n1764 = v1760;
  struct std__allocator_char_* t1765 = __a1762;
  char* t1766 = __p1763;
  unsigned long t1767 = __n1764;
  std__allocator_char___deallocate(t1765, t1766, t1767);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1768, unsigned long v1769) {
bb1770:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1771;
  unsigned long __size1772;
  this1771 = v1768;
  __size1772 = v1769;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1773 = this1771;
  struct std__allocator_char_* r1774 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1773);
  char* r1775 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1773);
  unsigned long t1776 = __size1772;
  unsigned long c1777 = 1;
  unsigned long b1778 = t1776 + c1777;
  std__allocator_traits_std__allocator_char_____deallocate(r1774, r1775, b1778);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1779) {
bb1780:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1781;
  this1781 = v1779;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1782 = this1781;
    _Bool r1783 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1782);
    _Bool u1784 = !r1783;
    if (u1784) {
      unsigned long t1785 = t1782->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1782, t1785);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1786, char* v1787, struct std__allocator_char_* v1788) {
bb1789:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1790;
  char* __dat1791;
  struct std__allocator_char_* __a1792;
  this1790 = v1786;
  __dat1791 = v1787;
  __a1792 = v1788;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1793 = this1790;
  struct std__allocator_char_* base1794 = (struct std__allocator_char_*)((char *)t1793 + 0);
  struct std__allocator_char_* t1795 = __a1792;
  std__allocator_char___allocator(base1794, t1795);
    char* t1796 = __dat1791;
    t1793->_M_p = t1796;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1797, unsigned long v1798, unsigned long v1799) {
bb1800:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1801;
  unsigned long __pos1802;
  unsigned long __off1803;
  unsigned long __retval1804;
  _Bool __testoff1805;
  this1801 = v1797;
  __pos1802 = v1798;
  __off1803 = v1799;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1806 = this1801;
  unsigned long t1807 = __off1803;
  unsigned long r1808 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1806);
  unsigned long t1809 = __pos1802;
  unsigned long b1810 = r1808 - t1809;
  _Bool c1811 = ((t1807 < b1810)) ? 1 : 0;
  __testoff1805 = c1811;
  _Bool t1812 = __testoff1805;
  unsigned long ternary1813;
  if (t1812) {
    unsigned long t1814 = __off1803;
    ternary1813 = (unsigned long)t1814;
  } else {
    unsigned long r1815 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1806);
    unsigned long t1816 = __pos1802;
    unsigned long b1817 = r1815 - t1816;
    ternary1813 = (unsigned long)b1817;
  }
  __retval1804 = ternary1813;
  unsigned long t1818 = __retval1804;
  return t1818;
}

