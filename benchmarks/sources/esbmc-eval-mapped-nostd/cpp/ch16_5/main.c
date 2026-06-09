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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[26] = "Content-type: text/html\n\n";
char _str_3[24] = "<?xml version = \"1.0\"?>";
char _str_4[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_5[47] = "Transitional//EN\" \"http://www.w3.org/TR/xhtml1";
char _str_6[31] = "/DTD/xhtml1-transitional.dtd\">";
char _str_7[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_8[50] = "<head><title>Using POST with Forms</title></head>";
char _str_9[7] = "<body>";
char _str_10[46] = "<p>Enter one of your favorite words here:</p>";
char _str_11[43] = "<form method = \"post\" action = \"post.cgi\">";
char _str_12[38] = "<input type = \"text\" name = \"word\" />";
char _str_13[48] = "<input type = \"submit\" value = \"Submit Word\" />";
char _str_14[8] = "</form>";
char _str_15[6] = "word=";
char _str_16[2] = "&";
char _str_17[28] = "<p>Please enter a word.</p>";
char _str_18[18] = "<p>Your word is: ";
char _str_19[5] = "</p>";
char _str_20[15] = "</body></html>";
char _str_21[50] = "basic_string: construction from null is not valid";
char _str_22[24] = "basic_string::_M_create";
char _str_23[25] = "basic_string::_M_replace";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_24[21] = "basic_string::substr";
char _str_25[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_26[27] = "basic_string::basic_string";
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
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
char* __gnu_cxx__char_traits_char___find(char* p0, unsigned long p1, char* p2);
char* std__char_traits_char___find(char* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
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
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v509, int v510) {
bb511:
  int __a512;
  int __b513;
  int __retval514;
  __a512 = v509;
  __b513 = v510;
  int t515 = __a512;
  int t516 = __b513;
  int b517 = t515 | t516;
  __retval514 = b517;
  int t518 = __retval514;
  return t518;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v519) {
bb520:
  struct std__basic_ios_char__std__char_traits_char__* this521;
  int __retval522;
  this521 = v519;
  struct std__basic_ios_char__std__char_traits_char__* t523 = this521;
  struct std__ios_base* base524 = (struct std__ios_base*)((char *)t523 + 0);
  int t525 = base524->_M_streambuf_state;
  __retval522 = t525;
  int t526 = __retval522;
  return t526;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v527, int v528) {
bb529:
  struct std__basic_ios_char__std__char_traits_char__* this530;
  int __state531;
  this530 = v527;
  __state531 = v528;
  struct std__basic_ios_char__std__char_traits_char__* t532 = this530;
  int r533 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t532);
  int t534 = __state531;
  int r535 = std__operator_(r533, t534);
  std__basic_ios_char__std__char_traits_char_____clear(t532, r535);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v536, char* v537) {
bb538:
  struct std__basic_ostream_char__std__char_traits_char__* __out539;
  char* __s540;
  struct std__basic_ostream_char__std__char_traits_char__* __retval541;
  __out539 = v536;
  __s540 = v537;
    char* t542 = __s540;
    _Bool cast543 = (_Bool)t542;
    _Bool u544 = !cast543;
    if (u544) {
      struct std__basic_ostream_char__std__char_traits_char__* t545 = __out539;
      void** v546 = (void**)t545;
      void* v547 = *((void**)v546);
      unsigned char* cast548 = (unsigned char*)v547;
      long c549 = -24;
      unsigned char* ptr550 = &(cast548)[c549];
      long* cast551 = (long*)ptr550;
      long t552 = *cast551;
      unsigned char* cast553 = (unsigned char*)t545;
      unsigned char* ptr554 = &(cast553)[t552];
      struct std__basic_ostream_char__std__char_traits_char__* cast555 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr554;
      struct std__basic_ios_char__std__char_traits_char__* cast556 = (struct std__basic_ios_char__std__char_traits_char__*)cast555;
      int t557 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast556, t557);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t558 = __out539;
      char* t559 = __s540;
      char* t560 = __s540;
      unsigned long r561 = std__char_traits_char___length(t560);
      long cast562 = (long)r561;
      struct std__basic_ostream_char__std__char_traits_char__* r563 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t558, t559, cast562);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t564 = __out539;
  __retval541 = t564;
  struct std__basic_ostream_char__std__char_traits_char__* t565 = __retval541;
  return t565;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4findEPKcmRS2_
char* __gnu_cxx__char_traits_char___find(char* v566, unsigned long v567, char* v568) {
bb569:
  char* __s570;
  unsigned long __n571;
  char* __a572;
  char* __retval573;
  __s570 = v566;
  __n571 = v567;
  __a572 = v568;
    unsigned long __i574;
    unsigned long c575 = 0;
    __i574 = c575;
    while (1) {
      unsigned long t577 = __i574;
      unsigned long t578 = __n571;
      _Bool c579 = ((t577 < t578)) ? 1 : 0;
      if (!c579) break;
        unsigned long t580 = __i574;
        char* t581 = __s570;
        char* ptr582 = &(t581)[t580];
        char* t583 = __a572;
        _Bool r584 = __gnu_cxx__char_traits_char___eq(ptr582, t583);
        if (r584) {
          char* t585 = __s570;
          unsigned long t586 = __i574;
          char* ptr587 = &(t585)[t586];
          __retval573 = ptr587;
          char* t588 = __retval573;
          char* ret_val589 = t588;
          return ret_val589;
        }
    for_step576: ;
      unsigned long t590 = __i574;
      unsigned long u591 = t590 + 1;
      __i574 = u591;
    }
  char* c592 = ((void*)0);
  __retval573 = c592;
  char* t593 = __retval573;
  return t593;
}

// function: _ZNSt11char_traitsIcE4findEPKcmRS1_
char* std__char_traits_char___find(char* v594, unsigned long v595, char* v596) {
bb597:
  char* __s598;
  unsigned long __n599;
  char* __a600;
  char* __retval601;
  __s598 = v594;
  __n599 = v595;
  __a600 = v596;
    unsigned long t602 = __n599;
    unsigned long c603 = 0;
    _Bool c604 = ((t602 == c603)) ? 1 : 0;
    if (c604) {
      char* c605 = ((void*)0);
      __retval601 = c605;
      char* t606 = __retval601;
      return t606;
    }
    _Bool r607 = std____is_constant_evaluated();
    if (r607) {
      char* t608 = __s598;
      unsigned long t609 = __n599;
      char* t610 = __a600;
      char* r611 = __gnu_cxx__char_traits_char___find(t608, t609, t610);
      __retval601 = r611;
      char* t612 = __retval601;
      return t612;
    }
  char* t613 = __s598;
  void* cast614 = (void*)t613;
  char* t615 = __a600;
  char t616 = *t615;
  int cast617 = (int)t616;
  unsigned long t618 = __n599;
  void* memchr619 = (void*)__builtin_memchr(cast614, cast617, t618);
  char* cast620 = (char*)memchr619;
  __retval601 = cast620;
  char* t621 = __retval601;
  return t621;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13find_first_ofEPKcmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v622, char* v623, unsigned long v624, unsigned long v625) {
bb626:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this627;
  char* __s628;
  unsigned long __pos629;
  unsigned long __n630;
  unsigned long __retval631;
  this627 = v622;
  __s628 = v623;
  __pos629 = v624;
  __n630 = v625;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t632 = this627;
    while (1) {
      unsigned long t634 = __n630;
      _Bool cast635 = (_Bool)t634;
      _Bool ternary636;
      if (cast635) {
        unsigned long t637 = __pos629;
        unsigned long r638 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t632);
        _Bool c639 = ((t637 < r638)) ? 1 : 0;
        ternary636 = (_Bool)c639;
      } else {
        _Bool c640 = 0;
        ternary636 = (_Bool)c640;
      }
      if (!ternary636) break;
        char* __p641;
        char* t642 = __s628;
        unsigned long t643 = __n630;
        unsigned long t644 = __pos629;
        char* r645 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t632);
        char* ptr646 = &(r645)[t644];
        char* r647 = std__char_traits_char___find(t642, t643, ptr646);
        __p641 = r647;
          char* t648 = __p641;
          _Bool cast649 = (_Bool)t648;
          if (cast649) {
            unsigned long t650 = __pos629;
            __retval631 = t650;
            unsigned long t651 = __retval631;
            unsigned long ret_val652 = t651;
            return ret_val652;
          }
    for_step633: ;
      unsigned long t653 = __pos629;
      unsigned long u654 = t653 + 1;
      __pos629 = u654;
    }
  unsigned long t655 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
  __retval631 = t655;
  unsigned long t656 = __retval631;
  return t656;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13find_first_ofEPKcm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v657, char* v658, unsigned long v659) {
bb660:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this661;
  char* __s662;
  unsigned long __pos663;
  unsigned long __retval664;
  this661 = v657;
  __s662 = v658;
  __pos663 = v659;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t665 = this661;
  char* t666 = __s662;
  unsigned long t667 = __pos663;
  char* t668 = __s662;
  unsigned long r669 = std__char_traits_char___length(t668);
  unsigned long r670 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__unsigned_long__const(t665, t666, t667, r669);
  __retval664 = r670;
  unsigned long t671 = __retval664;
  return t671;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v672, unsigned long v673, char* v674) {
bb675:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this676;
  unsigned long __pos677;
  char* __s678;
  unsigned long __retval679;
  this676 = v672;
  __pos677 = v673;
  __s678 = v674;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t680 = this676;
    unsigned long t681 = __pos677;
    unsigned long r682 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t680);
    _Bool c683 = ((t681 > r682)) ? 1 : 0;
    if (c683) {
      char* cast684 = (char*)&(_str_25);
      char* t685 = __s678;
      unsigned long t686 = __pos677;
      unsigned long r687 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t680);
      std____throw_out_of_range_fmt(cast684, t685, t686, r687);
    }
  unsigned long t688 = __pos677;
  __retval679 = t688;
  unsigned long t689 = __retval679;
  return t689;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_mm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v690, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v691, unsigned long v692, unsigned long v693) {
bb694:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this695;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str696;
  unsigned long __pos697;
  unsigned long __n698;
  struct std__allocator_char_ ref_tmp0699;
  char* __start700;
  struct std__forward_iterator_tag agg_tmp0701;
  this695 = v690;
  __str696 = v691;
  __pos697 = v692;
  __n698 = v693;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t702 = this695;
  char* r703 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t702);
  std__allocator_char___allocator_2(&ref_tmp0699);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t702->_M_dataplus, r703, &ref_tmp0699);
  {
    std__allocator_char____allocator(&ref_tmp0699);
  }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t704 = __str696;
    char* r705 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t704);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t706 = __str696;
    unsigned long t707 = __pos697;
    char* cast708 = (char*)&(_str_26);
    unsigned long r709 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t706, t707, cast708);
    char* ptr710 = &(r705)[r709];
    __start700 = ptr710;
    char* t711 = __start700;
    char* t712 = __start700;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t713 = __str696;
    unsigned long t714 = __pos697;
    unsigned long t715 = __n698;
    unsigned long r716 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t713, t714, t715);
    char* ptr717 = &(t712)[r716];
    struct std__forward_iterator_tag t718 = agg_tmp0701;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t702, t711, ptr717, t718);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6substrEmm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v719, unsigned long v720, unsigned long v721) {
bb722:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this723;
  unsigned long __pos724;
  unsigned long __n725;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval726;
  this723 = v719;
  __pos724 = v720;
  __n725 = v721;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t727 = this723;
  unsigned long t728 = __pos724;
  char* cast729 = (char*)&(_str_24);
  unsigned long r730 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t727, t728, cast729);
  unsigned long t731 = __n725;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval726, t727, r730, t731);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t732 = __retval726;
  return t732;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb733:
  _Bool __retval734;
  _Bool t735 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval734 = t735;
  _Bool t736 = __retval734;
  return t736;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v737, struct std____new_allocator_char_* v738) {
bb739:
  struct std____new_allocator_char_* this740;
  struct std____new_allocator_char_* unnamed741;
  struct std____new_allocator_char_* __retval742;
  this740 = v737;
  unnamed741 = v738;
  struct std____new_allocator_char_* t743 = this740;
  __retval742 = t743;
  struct std____new_allocator_char_* t744 = __retval742;
  return t744;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v745, struct std__allocator_char_* v746) {
bb747:
  struct std__allocator_char_* this748;
  struct std__allocator_char_* unnamed749;
  struct std__allocator_char_* __retval750;
  this748 = v745;
  unnamed749 = v746;
  struct std__allocator_char_* t751 = this748;
  struct std____new_allocator_char_* base752 = (struct std____new_allocator_char_*)((char *)t751 + 0);
  struct std__allocator_char_* t753 = unnamed749;
  struct std____new_allocator_char_* base754 = (struct std____new_allocator_char_*)((char *)t753 + 0);
  struct std____new_allocator_char_* r755 = std____new_allocator_char___operator_(base752, base754);
  __retval750 = t751;
  struct std__allocator_char_* t756 = __retval750;
  return t756;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v757, struct std__allocator_char_* v758) {
bb759:
  struct std__allocator_char_* __one760;
  struct std__allocator_char_* __two761;
  __one760 = v757;
  __two761 = v758;
    struct std__allocator_char_* t762 = __two761;
    struct std__allocator_char_* t763 = __one760;
    struct std__allocator_char_* r764 = std__allocator_char___operator_(t763, t762);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v765) {
bb766:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this767;
  char* __retval768;
  this767 = v765;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t769 = this767;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t769);
  char* r770 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t769);
  __retval768 = r770;
  char* t771 = __retval768;
  return t771;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v772, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v773) {
bb774:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this775;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str776;
  this775 = v772;
  __str776 = v773;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t777 = this775;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t778 = __str776;
    _Bool c779 = ((t777 != t778)) ? 1 : 0;
    if (c779) {
      unsigned long __rsize780;
      unsigned long __capacity781;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t782 = __str776;
      unsigned long r783 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t782);
      __rsize780 = r783;
      unsigned long r784 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t777);
      __capacity781 = r784;
        unsigned long t785 = __rsize780;
        unsigned long t786 = __capacity781;
        _Bool c787 = ((t785 > t786)) ? 1 : 0;
        if (c787) {
          unsigned long __new_capacity788;
          char* __tmp789;
          unsigned long t790 = __rsize780;
          __new_capacity788 = t790;
          unsigned long t791 = __capacity781;
          char* r792 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t777, &__new_capacity788, t791);
          __tmp789 = r792;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t777);
          char* t793 = __tmp789;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t777, t793);
          unsigned long t794 = __new_capacity788;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t777, t794);
        }
        unsigned long t795 = __rsize780;
        _Bool cast796 = (_Bool)t795;
        if (cast796) {
          char* r797 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t777);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t798 = __str776;
          char* r799 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t798);
          unsigned long t800 = __rsize780;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r797, r799, t800);
        }
      unsigned long t801 = __rsize780;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t777, t801);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v802) {
bb803:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this804;
  this804 = v802;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t805 = this804;
  unsigned long c806 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t805, c806);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v807, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v808) {
bb809:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this810;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str811;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval812;
  _Bool __equal_allocs813;
  this810 = v807;
  __str811 = v808;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t814 = this810;
  _Bool c815 = 1;
  __equal_allocs813 = c815;
    _Bool r816 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t814);
    _Bool u817 = !r816;
    _Bool ternary818;
    if (u817) {
      _Bool r819 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      ternary818 = (_Bool)r819;
    } else {
      _Bool c820 = 0;
      ternary818 = (_Bool)c820;
    }
    _Bool ternary821;
    if (ternary818) {
      _Bool t822 = __equal_allocs813;
      _Bool u823 = !t822;
      ternary821 = (_Bool)u823;
    } else {
      _Bool c824 = 0;
      ternary821 = (_Bool)c824;
    }
    if (ternary821) {
      unsigned long t825 = t814->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t814, t825);
      char* r826 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t814);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t814, r826);
      unsigned long c827 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t814, c827);
    }
  struct std__allocator_char_* r828 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t814);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t829 = __str811;
  struct std__allocator_char_* r830 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t829);
  void_std____alloc_on_move_std__allocator_char___(r828, r830);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t831 = __str811;
    _Bool r832 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t831);
    if (r832) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t833 = __str811;
        _Bool c834 = ((t833 != t814)) ? 1 : 0;
        if (c834) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t835 = __str811;
            unsigned long r836 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t835);
            _Bool cast837 = (_Bool)r836;
            if (cast837) {
              char* r838 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t814);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t839 = __str811;
              char* r840 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t839);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t841 = __str811;
              unsigned long r842 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t841);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r838, r840, r842);
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t843 = __str811;
          unsigned long r844 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t843);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t814, r844);
        }
    } else {
        _Bool r845 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        _Bool ternary846;
        if (r845) {
          _Bool c847 = 1;
          ternary846 = (_Bool)c847;
        } else {
          _Bool t848 = __equal_allocs813;
          ternary846 = (_Bool)t848;
        }
        if (ternary846) {
          char* __data849;
          unsigned long __capacity850;
          char* c851 = ((void*)0);
          __data849 = c851;
            _Bool r852 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t814);
            _Bool u853 = !r852;
            if (u853) {
                _Bool t854 = __equal_allocs813;
                if (t854) {
                  char* r855 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t814);
                  __data849 = r855;
                  unsigned long t856 = t814->field2._M_allocated_capacity;
                  __capacity850 = t856;
                } else {
                  unsigned long t857 = t814->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t814, t857);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t858 = __str811;
          char* r859 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t858);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t814, r859);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t860 = __str811;
          unsigned long r861 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t860);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t814, r861);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t862 = __str811;
          unsigned long t863 = t862->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t814, t863);
            char* t864 = __data849;
            _Bool cast865 = (_Bool)t864;
            if (cast865) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t866 = __str811;
              char* t867 = __data849;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t866, t867);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t868 = __str811;
              unsigned long t869 = __capacity850;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t868, t869);
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t870 = __str811;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t871 = __str811;
              char* r872 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t871);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t870, r872);
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t873 = __str811;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t814, t873);
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t874 = __str811;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t874);
  __retval812 = t814;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t875 = __retval812;
  return t875;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v876) {
bb877:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this878;
  this878 = v876;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t879 = this878;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t879);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t879->_M_dataplus);
  }
  return;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v880, char* v881) {
bb882:
  char* __c1883;
  char* __c2884;
  _Bool __retval885;
  __c1883 = v880;
  __c2884 = v881;
  char* t886 = __c1883;
  char t887 = *t886;
  unsigned char cast888 = (unsigned char)t887;
  int cast889 = (int)cast888;
  char* t890 = __c2884;
  char t891 = *t890;
  unsigned char cast892 = (unsigned char)t891;
  int cast893 = (int)cast892;
  _Bool c894 = ((cast889 < cast893)) ? 1 : 0;
  __retval885 = c894;
  _Bool t895 = __retval885;
  return t895;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v896, char* v897, unsigned long v898) {
bb899:
  char* __s1900;
  char* __s2901;
  unsigned long __n902;
  int __retval903;
  __s1900 = v896;
  __s2901 = v897;
  __n902 = v898;
    unsigned long t904 = __n902;
    unsigned long c905 = 0;
    _Bool c906 = ((t904 == c905)) ? 1 : 0;
    if (c906) {
      int c907 = 0;
      __retval903 = c907;
      int t908 = __retval903;
      return t908;
    }
    _Bool r909 = std____is_constant_evaluated();
    if (r909) {
        unsigned long __i910;
        unsigned long c911 = 0;
        __i910 = c911;
        while (1) {
          unsigned long t913 = __i910;
          unsigned long t914 = __n902;
          _Bool c915 = ((t913 < t914)) ? 1 : 0;
          if (!c915) break;
            unsigned long t916 = __i910;
            char* t917 = __s1900;
            char* ptr918 = &(t917)[t916];
            unsigned long t919 = __i910;
            char* t920 = __s2901;
            char* ptr921 = &(t920)[t919];
            _Bool r922 = std__char_traits_char___lt(ptr918, ptr921);
            if (r922) {
              int c923 = -1;
              __retval903 = c923;
              int t924 = __retval903;
              int ret_val925 = t924;
              return ret_val925;
            } else {
                unsigned long t926 = __i910;
                char* t927 = __s2901;
                char* ptr928 = &(t927)[t926];
                unsigned long t929 = __i910;
                char* t930 = __s1900;
                char* ptr931 = &(t930)[t929];
                _Bool r932 = std__char_traits_char___lt(ptr928, ptr931);
                if (r932) {
                  int c933 = 1;
                  __retval903 = c933;
                  int t934 = __retval903;
                  int ret_val935 = t934;
                  return ret_val935;
                }
            }
        for_step912: ;
          unsigned long t936 = __i910;
          unsigned long u937 = t936 + 1;
          __i910 = u937;
        }
      int c938 = 0;
      __retval903 = c938;
      int t939 = __retval903;
      return t939;
    }
  char* t940 = __s1900;
  void* cast941 = (void*)t940;
  char* t942 = __s2901;
  void* cast943 = (void*)t942;
  unsigned long t944 = __n902;
  int r945 = memcmp(cast941, cast943, t944);
  __retval903 = r945;
  int t946 = __retval903;
  return t946;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v947) {
bb948:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this949;
  char* __retval950;
  this949 = v947;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t951 = this949;
  char* r952 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t951);
  __retval950 = r952;
  char* t953 = __retval950;
  return t953;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v954, char* v955) {
bb956:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs957;
  char* __rhs958;
  _Bool __retval959;
  __lhs957 = v954;
  __rhs958 = v955;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t960 = __lhs957;
  unsigned long r961 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t960);
  char* t962 = __rhs958;
  unsigned long r963 = std__char_traits_char___length(t962);
  _Bool c964 = ((r961 == r963)) ? 1 : 0;
  _Bool ternary965;
  if (c964) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t966 = __lhs957;
    char* r967 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t966);
    char* t968 = __rhs958;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t969 = __lhs957;
    unsigned long r970 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t969);
    int r971 = std__char_traits_char___compare(r967, t968, r970);
    _Bool cast972 = (_Bool)r971;
    _Bool u973 = !cast972;
    ternary965 = (_Bool)u973;
  } else {
    _Bool c974 = 0;
    ternary965 = (_Bool)c974;
  }
  __retval959 = ternary965;
  _Bool t975 = __retval959;
  return t975;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v976, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v977) {
bb978:
  struct std__basic_ostream_char__std__char_traits_char__* __os979;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str980;
  struct std__basic_ostream_char__std__char_traits_char__* __retval981;
  __os979 = v976;
  __str980 = v977;
  struct std__basic_ostream_char__std__char_traits_char__* t982 = __os979;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t983 = __str980;
  char* r984 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t983);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t985 = __str980;
  unsigned long r986 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t985);
  long cast987 = (long)r986;
  struct std__basic_ostream_char__std__char_traits_char__* r988 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t982, r984, cast987);
  __retval981 = r988;
  struct std__basic_ostream_char__std__char_traits_char__* t989 = __retval981;
  return t989;
}

// function: main
int main() {
bb990:
  int __retval991;
  char postString992[1024];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ dataString993;
  struct std__allocator_char_ ref_tmp0994;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ nameString995;
  struct std__allocator_char_ ref_tmp1996;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ wordString997;
  struct std__allocator_char_ ref_tmp2998;
  int contentLength999;
  int c1000 = 0;
  __retval991 = c1000;
  // array copy
  __builtin_memcpy(postString992, __const_main_postString, (unsigned long)1024 * sizeof(__const_main_postString[0]));
  char* cast1001 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0994);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&dataString993, cast1001, &ref_tmp0994);
  {
    std__allocator_char____allocator(&ref_tmp0994);
  }
    char* cast1002 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp1996);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&nameString995, cast1002, &ref_tmp1996);
    {
      std__allocator_char____allocator(&ref_tmp1996);
    }
      char* cast1003 = (char*)&(_str);
      std__allocator_char___allocator_2(&ref_tmp2998);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&wordString997, cast1003, &ref_tmp2998);
      {
        std__allocator_char____allocator(&ref_tmp2998);
      }
        int c1004 = 0;
        contentLength999 = c1004;
          char* cast1005 = (char*)&(_str_1);
          char* r1006 = getenv(cast1005);
          _Bool cast1007 = (_Bool)r1006;
          if (cast1007) {
            char* cast1008 = (char*)&(_str_1);
            char* r1009 = getenv(cast1008);
            int r1010 = atoi(r1009);
            contentLength999 = r1010;
          }
        char* cast1011 = (char*)&(postString992);
        int t1012 = contentLength999;
        long cast1013 = (long)t1012;
        struct std__basic_istream_char__std__char_traits_char__* r1014 = std__istream__read(&_ZSt3cin, cast1011, cast1013);
        char* cast1015 = (char*)&(postString992);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1016 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(&dataString993, cast1015);
        char* cast1017 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* r1018 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1017);
        char* cast1019 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r1020 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1019);
        char* cast1021 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* r1022 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1020, cast1021);
        char* cast1023 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r1024 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1022, cast1023);
        char* cast1025 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* r1026 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1024, cast1025);
        char* cast1027 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* r1028 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1027);
        char* cast1029 = (char*)&(_str_8);
        struct std__basic_ostream_char__std__char_traits_char__* r1030 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1028, cast1029);
        char* cast1031 = (char*)&(_str_9);
        struct std__basic_ostream_char__std__char_traits_char__* r1032 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1030, cast1031);
        char* cast1033 = (char*)&(_str_10);
        struct std__basic_ostream_char__std__char_traits_char__* r1034 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1033);
        char* cast1035 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* r1036 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1034, cast1035);
        char* cast1037 = (char*)&(_str_12);
        struct std__basic_ostream_char__std__char_traits_char__* r1038 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1036, cast1037);
        char* cast1039 = (char*)&(_str_13);
        struct std__basic_ostream_char__std__char_traits_char__* r1040 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1038, cast1039);
        char* cast1041 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* r1042 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1040, cast1041);
          int t1043 = contentLength999;
          int c1044 = 0;
          _Bool c1045 = ((t1043 > c1044)) ? 1 : 0;
          if (c1045) {
            int nameLocation1046;
            int endLocation1047;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp31048;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1049;
            char* cast1050 = (char*)&(_str_15);
            unsigned long c1051 = 0;
            unsigned long r1052 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__const(&dataString993, cast1050, c1051);
            unsigned long c1053 = 5;
            unsigned long b1054 = r1052 + c1053;
            int cast1055 = (int)b1054;
            nameLocation1046 = cast1055;
            char* cast1056 = (char*)&(_str_16);
            unsigned long c1057 = 0;
            unsigned long r1058 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__const(&dataString993, cast1056, c1057);
            unsigned long c1059 = 1;
            unsigned long b1060 = r1058 - c1059;
            int cast1061 = (int)b1060;
            endLocation1047 = cast1061;
            int t1062 = nameLocation1046;
            unsigned long cast1063 = (unsigned long)t1062;
            int t1064 = endLocation1047;
            int t1065 = nameLocation1046;
            int b1066 = t1064 - t1065;
            unsigned long cast1067 = (unsigned long)b1066;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1068 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&dataString993, cast1063, cast1067);
            ref_tmp31048 = r1068;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1069 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&wordString997, &ref_tmp31048);
              tmp_exprcleanup1049 = r1069;
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp31048);
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1070 = tmp_exprcleanup1049;
              char* cast1071 = (char*)&(_str);
              _Bool r1072 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&wordString997, cast1071);
              if (r1072) {
                char* cast1073 = (char*)&(_str_17);
                struct std__basic_ostream_char__std__char_traits_char__* r1074 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1073);
              } else {
                char* cast1075 = (char*)&(_str_18);
                struct std__basic_ostream_char__std__char_traits_char__* r1076 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1075);
                struct std__basic_ostream_char__std__char_traits_char__* r1077 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1076, &wordString997);
                char* cast1078 = (char*)&(_str_19);
                struct std__basic_ostream_char__std__char_traits_char__* r1079 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1077, cast1078);
              }
          } else {
            char* cast1080 = (char*)&(_str_17);
            struct std__basic_ostream_char__std__char_traits_char__* r1081 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1080);
          }
        char* cast1082 = (char*)&(_str_20);
        struct std__basic_ostream_char__std__char_traits_char__* r1083 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1082);
        int c1084 = 0;
        __retval991 = c1084;
        int t1085 = __retval991;
        int ret_val1086 = t1085;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&wordString997);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&nameString995);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString993);
        }
        return ret_val1086;
  int t1087 = __retval991;
  return t1087;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1088) {
bb1089:
  struct std____new_allocator_char_* this1090;
  this1090 = v1088;
  struct std____new_allocator_char_* t1091 = this1090;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1092) {
bb1093:
  char* __r1094;
  char* __retval1095;
  __r1094 = v1092;
  char* t1096 = __r1094;
  __retval1095 = t1096;
  char* t1097 = __retval1095;
  return t1097;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1098) {
bb1099:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1100;
  char* __retval1101;
  this1100 = v1098;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1102 = this1100;
  char* cast1103 = (char*)&(t1102->field2._M_local_buf);
  char* r1104 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1103);
  __retval1101 = r1104;
  char* t1105 = __retval1101;
  return t1105;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1106, char* v1107, struct std__allocator_char_* v1108) {
bb1109:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1110;
  char* __dat1111;
  struct std__allocator_char_* __a1112;
  this1110 = v1106;
  __dat1111 = v1107;
  __a1112 = v1108;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1113 = this1110;
  struct std__allocator_char_* base1114 = (struct std__allocator_char_*)((char *)t1113 + 0);
  struct std__allocator_char_* t1115 = __a1112;
  std__allocator_char___allocator(base1114, t1115);
    char* t1116 = __dat1111;
    t1113->_M_p = t1116;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1117:
  _Bool __retval1118;
    _Bool c1119 = 0;
    __retval1118 = c1119;
    _Bool t1120 = __retval1118;
    return t1120;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1121, char* v1122) {
bb1123:
  char* __c11124;
  char* __c21125;
  _Bool __retval1126;
  __c11124 = v1121;
  __c21125 = v1122;
  char* t1127 = __c11124;
  char t1128 = *t1127;
  int cast1129 = (int)t1128;
  char* t1130 = __c21125;
  char t1131 = *t1130;
  int cast1132 = (int)t1131;
  _Bool c1133 = ((cast1129 == cast1132)) ? 1 : 0;
  __retval1126 = c1133;
  _Bool t1134 = __retval1126;
  return t1134;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1135) {
bb1136:
  char* __p1137;
  unsigned long __retval1138;
  unsigned long __i1139;
  __p1137 = v1135;
  unsigned long c1140 = 0;
  __i1139 = c1140;
    char ref_tmp01141;
    while (1) {
      unsigned long t1142 = __i1139;
      char* t1143 = __p1137;
      char* ptr1144 = &(t1143)[t1142];
      char c1145 = 0;
      ref_tmp01141 = c1145;
      _Bool r1146 = __gnu_cxx__char_traits_char___eq(ptr1144, &ref_tmp01141);
      _Bool u1147 = !r1146;
      if (!u1147) break;
      unsigned long t1148 = __i1139;
      unsigned long u1149 = t1148 + 1;
      __i1139 = u1149;
    }
  unsigned long t1150 = __i1139;
  __retval1138 = t1150;
  unsigned long t1151 = __retval1138;
  return t1151;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1152) {
bb1153:
  char* __s1154;
  unsigned long __retval1155;
  __s1154 = v1152;
    _Bool r1156 = std____is_constant_evaluated();
    if (r1156) {
      char* t1157 = __s1154;
      unsigned long r1158 = __gnu_cxx__char_traits_char___length(t1157);
      __retval1155 = r1158;
      unsigned long t1159 = __retval1155;
      return t1159;
    }
  char* t1160 = __s1154;
  unsigned long r1161 = strlen(t1160);
  __retval1155 = r1161;
  unsigned long t1162 = __retval1155;
  return t1162;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1163, char* v1164, struct std__random_access_iterator_tag v1165) {
bb1166:
  char* __first1167;
  char* __last1168;
  struct std__random_access_iterator_tag unnamed1169;
  long __retval1170;
  __first1167 = v1163;
  __last1168 = v1164;
  unnamed1169 = v1165;
  char* t1171 = __last1168;
  char* t1172 = __first1167;
  long diff1173 = t1171 - t1172;
  __retval1170 = diff1173;
  long t1174 = __retval1170;
  return t1174;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1175) {
bb1176:
  char** unnamed1177;
  struct std__random_access_iterator_tag __retval1178;
  unnamed1177 = v1175;
  struct std__random_access_iterator_tag t1179 = __retval1178;
  return t1179;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1180, char* v1181) {
bb1182:
  char* __first1183;
  char* __last1184;
  long __retval1185;
  struct std__random_access_iterator_tag agg_tmp01186;
  __first1183 = v1180;
  __last1184 = v1181;
  char* t1187 = __first1183;
  char* t1188 = __last1184;
  struct std__random_access_iterator_tag r1189 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1183);
  agg_tmp01186 = r1189;
  struct std__random_access_iterator_tag t1190 = agg_tmp01186;
  long r1191 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1187, t1188, t1190);
  __retval1185 = r1191;
  long t1192 = __retval1185;
  return t1192;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1193, char* v1194) {
bb1195:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1196;
  char* __p1197;
  this1196 = v1193;
  __p1197 = v1194;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1198 = this1196;
  char* t1199 = __p1197;
  t1198->_M_dataplus._M_p = t1199;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1200) {
bb1201:
  struct std__allocator_char_* __a1202;
  unsigned long __retval1203;
  __a1202 = v1200;
  unsigned long c1204 = -1;
  unsigned long c1205 = 1;
  unsigned long b1206 = c1204 / c1205;
  __retval1203 = b1206;
  unsigned long t1207 = __retval1203;
  return t1207;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1208) {
bb1209:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1210;
  struct std__allocator_char_* __retval1211;
  this1210 = v1208;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1212 = this1210;
  struct std__allocator_char_* base1213 = (struct std__allocator_char_*)((char *)&(t1212->_M_dataplus) + 0);
  __retval1211 = base1213;
  struct std__allocator_char_* t1214 = __retval1211;
  return t1214;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1215, unsigned long* v1216) {
bb1217:
  unsigned long* __a1218;
  unsigned long* __b1219;
  unsigned long* __retval1220;
  __a1218 = v1215;
  __b1219 = v1216;
    unsigned long* t1221 = __b1219;
    unsigned long t1222 = *t1221;
    unsigned long* t1223 = __a1218;
    unsigned long t1224 = *t1223;
    _Bool c1225 = ((t1222 < t1224)) ? 1 : 0;
    if (c1225) {
      unsigned long* t1226 = __b1219;
      __retval1220 = t1226;
      unsigned long* t1227 = __retval1220;
      return t1227;
    }
  unsigned long* t1228 = __a1218;
  __retval1220 = t1228;
  unsigned long* t1229 = __retval1220;
  return t1229;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1230) {
bb1231:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1232;
  unsigned long __retval1233;
  unsigned long __diffmax1234;
  unsigned long __allocmax1235;
  this1232 = v1230;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1236 = this1232;
  unsigned long c1237 = 9223372036854775807;
  __diffmax1234 = c1237;
  struct std__allocator_char_* r1238 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1236);
  unsigned long r1239 = std__allocator_traits_std__allocator_char_____max_size(r1238);
  __allocmax1235 = r1239;
  unsigned long* r1240 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1234, &__allocmax1235);
  unsigned long t1241 = *r1240;
  unsigned long c1242 = 1;
  unsigned long b1243 = t1241 - c1242;
  __retval1233 = b1243;
  unsigned long t1244 = __retval1233;
  return t1244;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1245) {
bb1246:
  struct std____new_allocator_char_* this1247;
  unsigned long __retval1248;
  this1247 = v1245;
  struct std____new_allocator_char_* t1249 = this1247;
  unsigned long c1250 = 9223372036854775807;
  unsigned long c1251 = 1;
  unsigned long b1252 = c1250 / c1251;
  __retval1248 = b1252;
  unsigned long t1253 = __retval1248;
  return t1253;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1254, unsigned long v1255, void* v1256) {
bb1257:
  struct std____new_allocator_char_* this1258;
  unsigned long __n1259;
  void* unnamed1260;
  char* __retval1261;
  this1258 = v1254;
  __n1259 = v1255;
  unnamed1260 = v1256;
  struct std____new_allocator_char_* t1262 = this1258;
    unsigned long t1263 = __n1259;
    unsigned long r1264 = std____new_allocator_char____M_max_size___const(t1262);
    _Bool c1265 = ((t1263 > r1264)) ? 1 : 0;
    if (c1265) {
        unsigned long t1266 = __n1259;
        unsigned long c1267 = -1;
        unsigned long c1268 = 1;
        unsigned long b1269 = c1267 / c1268;
        _Bool c1270 = ((t1266 > b1269)) ? 1 : 0;
        if (c1270) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1271 = 1;
    unsigned long c1272 = 16;
    _Bool c1273 = ((c1271 > c1272)) ? 1 : 0;
    if (c1273) {
      unsigned long __al1274;
      unsigned long c1275 = 1;
      __al1274 = c1275;
      unsigned long t1276 = __n1259;
      unsigned long c1277 = 1;
      unsigned long b1278 = t1276 * c1277;
      unsigned long t1279 = __al1274;
      void* r1280 = operator_new_2(b1278, t1279);
      char* cast1281 = (char*)r1280;
      __retval1261 = cast1281;
      char* t1282 = __retval1261;
      return t1282;
    }
  unsigned long t1283 = __n1259;
  unsigned long c1284 = 1;
  unsigned long b1285 = t1283 * c1284;
  void* r1286 = operator_new(b1285);
  char* cast1287 = (char*)r1286;
  __retval1261 = cast1287;
  char* t1288 = __retval1261;
  return t1288;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1289, unsigned long v1290) {
bb1291:
  struct std__allocator_char_* this1292;
  unsigned long __n1293;
  char* __retval1294;
  this1292 = v1289;
  __n1293 = v1290;
  struct std__allocator_char_* t1295 = this1292;
    _Bool r1296 = std____is_constant_evaluated();
    if (r1296) {
        unsigned long t1297 = __n1293;
        unsigned long c1298 = 1;
        unsigned long ovr1299;
        _Bool ovf1300 = __builtin_mul_overflow(t1297, c1298, &ovr1299);
        __n1293 = ovr1299;
        if (ovf1300) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1301 = __n1293;
      void* r1302 = operator_new(t1301);
      char* cast1303 = (char*)r1302;
      __retval1294 = cast1303;
      char* t1304 = __retval1294;
      return t1304;
    }
  struct std____new_allocator_char_* base1305 = (struct std____new_allocator_char_*)((char *)t1295 + 0);
  unsigned long t1306 = __n1293;
  void* c1307 = ((void*)0);
  char* r1308 = std____new_allocator_char___allocate(base1305, t1306, c1307);
  __retval1294 = r1308;
  char* t1309 = __retval1294;
  return t1309;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1310, unsigned long v1311) {
bb1312:
  struct std__allocator_char_* __a1313;
  unsigned long __n1314;
  char* __retval1315;
  __a1313 = v1310;
  __n1314 = v1311;
  struct std__allocator_char_* t1316 = __a1313;
  unsigned long t1317 = __n1314;
  char* r1318 = std__allocator_char___allocate(t1316, t1317);
  __retval1315 = r1318;
  char* t1319 = __retval1315;
  return t1319;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1320, unsigned long v1321) {
bb1322:
  struct std__allocator_char_* __a1323;
  unsigned long __n1324;
  char* __retval1325;
  char* __p1326;
  __a1323 = v1320;
  __n1324 = v1321;
  struct std__allocator_char_* t1327 = __a1323;
  unsigned long t1328 = __n1324;
  char* r1329 = std__allocator_traits_std__allocator_char_____allocate(t1327, t1328);
  __p1326 = r1329;
  char* t1330 = __p1326;
  __retval1325 = t1330;
  char* t1331 = __retval1325;
  return t1331;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1332) {
bb1333:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1334;
  struct std__allocator_char_* __retval1335;
  this1334 = v1332;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1336 = this1334;
  struct std__allocator_char_* base1337 = (struct std__allocator_char_*)((char *)&(t1336->_M_dataplus) + 0);
  __retval1335 = base1337;
  struct std__allocator_char_* t1338 = __retval1335;
  return t1338;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1339, unsigned long* v1340, unsigned long v1341) {
bb1342:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1343;
  unsigned long* __capacity1344;
  unsigned long __old_capacity1345;
  char* __retval1346;
  this1343 = v1339;
  __capacity1344 = v1340;
  __old_capacity1345 = v1341;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1347 = this1343;
    unsigned long* t1348 = __capacity1344;
    unsigned long t1349 = *t1348;
    unsigned long r1350 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1347);
    _Bool c1351 = ((t1349 > r1350)) ? 1 : 0;
    if (c1351) {
      char* cast1352 = (char*)&(_str_22);
      std____throw_length_error(cast1352);
    }
    unsigned long* t1353 = __capacity1344;
    unsigned long t1354 = *t1353;
    unsigned long t1355 = __old_capacity1345;
    _Bool c1356 = ((t1354 > t1355)) ? 1 : 0;
    _Bool ternary1357;
    if (c1356) {
      unsigned long* t1358 = __capacity1344;
      unsigned long t1359 = *t1358;
      unsigned long c1360 = 2;
      unsigned long t1361 = __old_capacity1345;
      unsigned long b1362 = c1360 * t1361;
      _Bool c1363 = ((t1359 < b1362)) ? 1 : 0;
      ternary1357 = (_Bool)c1363;
    } else {
      _Bool c1364 = 0;
      ternary1357 = (_Bool)c1364;
    }
    if (ternary1357) {
      unsigned long c1365 = 2;
      unsigned long t1366 = __old_capacity1345;
      unsigned long b1367 = c1365 * t1366;
      unsigned long* t1368 = __capacity1344;
      *t1368 = b1367;
        unsigned long* t1369 = __capacity1344;
        unsigned long t1370 = *t1369;
        unsigned long r1371 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1347);
        _Bool c1372 = ((t1370 > r1371)) ? 1 : 0;
        if (c1372) {
          unsigned long r1373 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1347);
          unsigned long* t1374 = __capacity1344;
          *t1374 = r1373;
        }
    }
  struct std__allocator_char_* r1375 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1347);
  unsigned long* t1376 = __capacity1344;
  unsigned long t1377 = *t1376;
  unsigned long c1378 = 1;
  unsigned long b1379 = t1377 + c1378;
  char* r1380 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1375, b1379);
  __retval1346 = r1380;
  char* t1381 = __retval1346;
  return t1381;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1382, unsigned long v1383) {
bb1384:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1385;
  unsigned long __capacity1386;
  this1385 = v1382;
  __capacity1386 = v1383;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1387 = this1385;
  unsigned long t1388 = __capacity1386;
  t1387->field2._M_allocated_capacity = t1388;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1389:
  _Bool __retval1390;
    _Bool c1391 = 0;
    __retval1390 = c1391;
    _Bool t1392 = __retval1390;
    return t1392;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1393) {
bb1394:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1395;
  this1395 = v1393;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1396 = this1395;
    _Bool r1397 = std__is_constant_evaluated();
    if (r1397) {
        unsigned long __i1398;
        unsigned long c1399 = 0;
        __i1398 = c1399;
        while (1) {
          unsigned long t1401 = __i1398;
          unsigned long c1402 = 15;
          _Bool c1403 = ((t1401 <= c1402)) ? 1 : 0;
          if (!c1403) break;
          char c1404 = 0;
          unsigned long t1405 = __i1398;
          t1396->field2._M_local_buf[t1405] = c1404;
        for_step1400: ;
          unsigned long t1406 = __i1398;
          unsigned long u1407 = t1406 + 1;
          __i1398 = u1407;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1408, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1409) {
bb1410:
  struct _Guard* this1411;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1412;
  this1411 = v1408;
  __s1412 = v1409;
  struct _Guard* t1413 = this1411;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1414 = __s1412;
  t1413->_M_guarded = t1414;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1415, char* v1416) {
bb1417:
  char* __location1418;
  char* __args1419;
  char* __retval1420;
  void* __loc1421;
  __location1418 = v1415;
  __args1419 = v1416;
  char* t1422 = __location1418;
  void* cast1423 = (void*)t1422;
  __loc1421 = cast1423;
    void* t1424 = __loc1421;
    char* cast1425 = (char*)t1424;
    char* t1426 = __args1419;
    char t1427 = *t1426;
    *cast1425 = t1427;
    __retval1420 = cast1425;
    char* t1428 = __retval1420;
    return t1428;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1429, char* v1430) {
bb1431:
  char* __c11432;
  char* __c21433;
  __c11432 = v1429;
  __c21433 = v1430;
    _Bool r1434 = std____is_constant_evaluated();
    if (r1434) {
      char* t1435 = __c11432;
      char* t1436 = __c21433;
      char* r1437 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1435, t1436);
    } else {
      char* t1438 = __c21433;
      char t1439 = *t1438;
      char* t1440 = __c11432;
      *t1440 = t1439;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1441, char* v1442, unsigned long v1443) {
bb1444:
  char* __s11445;
  char* __s21446;
  unsigned long __n1447;
  char* __retval1448;
  __s11445 = v1441;
  __s21446 = v1442;
  __n1447 = v1443;
    unsigned long t1449 = __n1447;
    unsigned long c1450 = 0;
    _Bool c1451 = ((t1449 == c1450)) ? 1 : 0;
    if (c1451) {
      char* t1452 = __s11445;
      __retval1448 = t1452;
      char* t1453 = __retval1448;
      return t1453;
    }
    _Bool r1454 = std____is_constant_evaluated();
    if (r1454) {
        unsigned long __i1455;
        unsigned long c1456 = 0;
        __i1455 = c1456;
        while (1) {
          unsigned long t1458 = __i1455;
          unsigned long t1459 = __n1447;
          _Bool c1460 = ((t1458 < t1459)) ? 1 : 0;
          if (!c1460) break;
          char* t1461 = __s11445;
          unsigned long t1462 = __i1455;
          char* ptr1463 = &(t1461)[t1462];
          unsigned long t1464 = __i1455;
          char* t1465 = __s21446;
          char* ptr1466 = &(t1465)[t1464];
          char* r1467 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1463, ptr1466);
        for_step1457: ;
          unsigned long t1468 = __i1455;
          unsigned long u1469 = t1468 + 1;
          __i1455 = u1469;
        }
      char* t1470 = __s11445;
      __retval1448 = t1470;
      char* t1471 = __retval1448;
      return t1471;
    }
  char* t1472 = __s11445;
  void* cast1473 = (void*)t1472;
  char* t1474 = __s21446;
  void* cast1475 = (void*)t1474;
  unsigned long t1476 = __n1447;
  unsigned long c1477 = 1;
  unsigned long b1478 = t1476 * c1477;
  void* r1479 = memcpy(cast1473, cast1475, b1478);
  char* t1480 = __s11445;
  __retval1448 = t1480;
  char* t1481 = __retval1448;
  return t1481;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1482, char* v1483, unsigned long v1484) {
bb1485:
  char* __s11486;
  char* __s21487;
  unsigned long __n1488;
  char* __retval1489;
  __s11486 = v1482;
  __s21487 = v1483;
  __n1488 = v1484;
    unsigned long t1490 = __n1488;
    unsigned long c1491 = 0;
    _Bool c1492 = ((t1490 == c1491)) ? 1 : 0;
    if (c1492) {
      char* t1493 = __s11486;
      __retval1489 = t1493;
      char* t1494 = __retval1489;
      return t1494;
    }
    _Bool r1495 = std____is_constant_evaluated();
    if (r1495) {
      char* t1496 = __s11486;
      char* t1497 = __s21487;
      unsigned long t1498 = __n1488;
      char* r1499 = __gnu_cxx__char_traits_char___copy(t1496, t1497, t1498);
      __retval1489 = r1499;
      char* t1500 = __retval1489;
      return t1500;
    }
  char* t1501 = __s11486;
  void* cast1502 = (void*)t1501;
  char* t1503 = __s21487;
  void* cast1504 = (void*)t1503;
  unsigned long t1505 = __n1488;
  void* r1506 = memcpy(cast1502, cast1504, t1505);
  char* cast1507 = (char*)r1506;
  __retval1489 = cast1507;
  char* t1508 = __retval1489;
  return t1508;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1509, char* v1510, unsigned long v1511) {
bb1512:
  char* __d1513;
  char* __s1514;
  unsigned long __n1515;
  __d1513 = v1509;
  __s1514 = v1510;
  __n1515 = v1511;
    unsigned long t1516 = __n1515;
    unsigned long c1517 = 1;
    _Bool c1518 = ((t1516 == c1517)) ? 1 : 0;
    if (c1518) {
      char* t1519 = __d1513;
      char* t1520 = __s1514;
      std__char_traits_char___assign(t1519, t1520);
    } else {
      char* t1521 = __d1513;
      char* t1522 = __s1514;
      unsigned long t1523 = __n1515;
      char* r1524 = std__char_traits_char___copy(t1521, t1522, t1523);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1525) {
bb1526:
  char* __it1527;
  char* __retval1528;
  __it1527 = v1525;
  char* t1529 = __it1527;
  __retval1528 = t1529;
  char* t1530 = __retval1528;
  return t1530;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1531, char* v1532, char* v1533) {
bb1534:
  char* __p1535;
  char* __k11536;
  char* __k21537;
  __p1535 = v1531;
  __k11536 = v1532;
  __k21537 = v1533;
    char* t1538 = __p1535;
    char* t1539 = __k11536;
    char* r1540 = char_const__std____niter_base_char_const__(t1539);
    char* t1541 = __k21537;
    char* t1542 = __k11536;
    long diff1543 = t1541 - t1542;
    unsigned long cast1544 = (unsigned long)diff1543;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1538, r1540, cast1544);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1545) {
bb1546:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1547;
  char* __retval1548;
  this1547 = v1545;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1549 = this1547;
  char* t1550 = t1549->_M_dataplus._M_p;
  __retval1548 = t1550;
  char* t1551 = __retval1548;
  return t1551;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1552, unsigned long v1553) {
bb1554:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1555;
  unsigned long __length1556;
  this1555 = v1552;
  __length1556 = v1553;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1557 = this1555;
  unsigned long t1558 = __length1556;
  t1557->_M_string_length = t1558;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1559, unsigned long v1560) {
bb1561:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1562;
  unsigned long __n1563;
  char ref_tmp01564;
  this1562 = v1559;
  __n1563 = v1560;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1565 = this1562;
  unsigned long t1566 = __n1563;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1565, t1566);
  unsigned long t1567 = __n1563;
  char* r1568 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1565);
  char* ptr1569 = &(r1568)[t1567];
  char c1570 = 0;
  ref_tmp01564 = c1570;
  std__char_traits_char___assign(ptr1569, &ref_tmp01564);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1571) {
bb1572:
  struct _Guard* this1573;
  this1573 = v1571;
  struct _Guard* t1574 = this1573;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1575 = t1574->_M_guarded;
    _Bool cast1576 = (_Bool)t1575;
    if (cast1576) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1577 = t1574->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1577);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1578, char* v1579, char* v1580, struct std__forward_iterator_tag v1581) {
bb1582:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1583;
  char* __beg1584;
  char* __end1585;
  struct std__forward_iterator_tag unnamed1586;
  unsigned long __dnew1587;
  struct _Guard __guard1588;
  this1583 = v1578;
  __beg1584 = v1579;
  __end1585 = v1580;
  unnamed1586 = v1581;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1589 = this1583;
  char* t1590 = __beg1584;
  char* t1591 = __end1585;
  long r1592 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1590, t1591);
  unsigned long cast1593 = (unsigned long)r1592;
  __dnew1587 = cast1593;
    unsigned long t1594 = __dnew1587;
    unsigned long c1595 = 15;
    _Bool c1596 = ((t1594 > c1595)) ? 1 : 0;
    if (c1596) {
      unsigned long c1597 = 0;
      char* r1598 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1589, &__dnew1587, c1597);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1589, r1598);
      unsigned long t1599 = __dnew1587;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1589, t1599);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1589);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1588, t1589);
    char* r1600 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1589);
    char* t1601 = __beg1584;
    char* t1602 = __end1585;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1600, t1601, t1602);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1603 = ((void*)0);
    __guard1588._M_guarded = c1603;
    unsigned long t1604 = __dnew1587;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1589, t1604);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1588);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1605) {
bb1606:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1607;
  this1607 = v1605;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1608 = this1607;
  {
    struct std__allocator_char_* base1609 = (struct std__allocator_char_*)((char *)t1608 + 0);
    std__allocator_char____allocator(base1609);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1610, struct std____new_allocator_char_* v1611) {
bb1612:
  struct std____new_allocator_char_* this1613;
  struct std____new_allocator_char_* unnamed1614;
  this1613 = v1610;
  unnamed1614 = v1611;
  struct std____new_allocator_char_* t1615 = this1613;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1616, struct std__allocator_char_* v1617) {
bb1618:
  struct std__allocator_char_* this1619;
  struct std__allocator_char_* __a1620;
  this1619 = v1616;
  __a1620 = v1617;
  struct std__allocator_char_* t1621 = this1619;
  struct std____new_allocator_char_* base1622 = (struct std____new_allocator_char_*)((char *)t1621 + 0);
  struct std__allocator_char_* t1623 = __a1620;
  struct std____new_allocator_char_* base1624 = (struct std____new_allocator_char_*)((char *)t1623 + 0);
  std____new_allocator_char_____new_allocator(base1622, base1624);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1625) {
bb1626:
  char* __r1627;
  char* __retval1628;
  __r1627 = v1625;
  char* t1629 = __r1627;
  __retval1628 = t1629;
  char* t1630 = __retval1628;
  return t1630;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1631) {
bb1632:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1633;
  char* __retval1634;
  this1633 = v1631;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1635 = this1633;
  char* cast1636 = (char*)&(t1635->field2._M_local_buf);
  char* r1637 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1636);
  __retval1634 = r1637;
  char* t1638 = __retval1634;
  return t1638;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1639) {
bb1640:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1641;
  _Bool __retval1642;
  this1641 = v1639;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1643 = this1641;
    char* r1644 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1643);
    char* r1645 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1643);
    _Bool c1646 = ((r1644 == r1645)) ? 1 : 0;
    if (c1646) {
        unsigned long t1647 = t1643->_M_string_length;
        unsigned long c1648 = 15;
        _Bool c1649 = ((t1647 > c1648)) ? 1 : 0;
        if (c1649) {
          __builtin_unreachable();
        }
      _Bool c1650 = 1;
      __retval1642 = c1650;
      _Bool t1651 = __retval1642;
      return t1651;
    }
  _Bool c1652 = 0;
  __retval1642 = c1652;
  _Bool t1653 = __retval1642;
  return t1653;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1654, char* v1655, unsigned long v1656) {
bb1657:
  struct std____new_allocator_char_* this1658;
  char* __p1659;
  unsigned long __n1660;
  this1658 = v1654;
  __p1659 = v1655;
  __n1660 = v1656;
  struct std____new_allocator_char_* t1661 = this1658;
    unsigned long c1662 = 1;
    unsigned long c1663 = 16;
    _Bool c1664 = ((c1662 > c1663)) ? 1 : 0;
    if (c1664) {
      char* t1665 = __p1659;
      void* cast1666 = (void*)t1665;
      unsigned long t1667 = __n1660;
      unsigned long c1668 = 1;
      unsigned long b1669 = t1667 * c1668;
      unsigned long c1670 = 1;
      operator_delete_3(cast1666, b1669, c1670);
      return;
    }
  char* t1671 = __p1659;
  void* cast1672 = (void*)t1671;
  unsigned long t1673 = __n1660;
  unsigned long c1674 = 1;
  unsigned long b1675 = t1673 * c1674;
  operator_delete_2(cast1672, b1675);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1676, char* v1677, unsigned long v1678) {
bb1679:
  struct std__allocator_char_* this1680;
  char* __p1681;
  unsigned long __n1682;
  this1680 = v1676;
  __p1681 = v1677;
  __n1682 = v1678;
  struct std__allocator_char_* t1683 = this1680;
    _Bool r1684 = std____is_constant_evaluated();
    if (r1684) {
      char* t1685 = __p1681;
      void* cast1686 = (void*)t1685;
      operator_delete(cast1686);
      return;
    }
  struct std____new_allocator_char_* base1687 = (struct std____new_allocator_char_*)((char *)t1683 + 0);
  char* t1688 = __p1681;
  unsigned long t1689 = __n1682;
  std____new_allocator_char___deallocate(base1687, t1688, t1689);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1690, char* v1691, unsigned long v1692) {
bb1693:
  struct std__allocator_char_* __a1694;
  char* __p1695;
  unsigned long __n1696;
  __a1694 = v1690;
  __p1695 = v1691;
  __n1696 = v1692;
  struct std__allocator_char_* t1697 = __a1694;
  char* t1698 = __p1695;
  unsigned long t1699 = __n1696;
  std__allocator_char___deallocate(t1697, t1698, t1699);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1700, unsigned long v1701) {
bb1702:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1703;
  unsigned long __size1704;
  this1703 = v1700;
  __size1704 = v1701;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1705 = this1703;
  struct std__allocator_char_* r1706 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1705);
  char* r1707 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1705);
  unsigned long t1708 = __size1704;
  unsigned long c1709 = 1;
  unsigned long b1710 = t1708 + c1709;
  std__allocator_traits_std__allocator_char_____deallocate(r1706, r1707, b1710);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1711) {
bb1712:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1713;
  this1713 = v1711;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1714 = this1713;
    _Bool r1715 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1714);
    _Bool u1716 = !r1715;
    if (u1716) {
      unsigned long t1717 = t1714->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1714, t1717);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1718, char* v1719, struct std__allocator_char_* v1720) {
bb1721:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1722;
  char* __dat1723;
  struct std__allocator_char_* __a1724;
  this1722 = v1718;
  __dat1723 = v1719;
  __a1724 = v1720;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1725 = this1722;
  struct std__allocator_char_* base1726 = (struct std__allocator_char_*)((char *)t1725 + 0);
  struct std__allocator_char_* t1727 = __a1724;
  std__allocator_char___allocator(base1726, t1727);
    char* t1728 = __dat1723;
    t1725->_M_p = t1728;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1729, unsigned long v1730, unsigned long v1731) {
bb1732:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1733;
  unsigned long __pos1734;
  unsigned long __off1735;
  unsigned long __retval1736;
  _Bool __testoff1737;
  this1733 = v1729;
  __pos1734 = v1730;
  __off1735 = v1731;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1738 = this1733;
  unsigned long t1739 = __off1735;
  unsigned long r1740 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1738);
  unsigned long t1741 = __pos1734;
  unsigned long b1742 = r1740 - t1741;
  _Bool c1743 = ((t1739 < b1742)) ? 1 : 0;
  __testoff1737 = c1743;
  _Bool t1744 = __testoff1737;
  unsigned long ternary1745;
  if (t1744) {
    unsigned long t1746 = __off1735;
    ternary1745 = (unsigned long)t1746;
  } else {
    unsigned long r1747 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1738);
    unsigned long t1748 = __pos1734;
    unsigned long b1749 = r1747 - t1748;
    ternary1745 = (unsigned long)b1749;
  }
  __retval1736 = ternary1745;
  unsigned long t1750 = __retval1736;
  return t1750;
}

