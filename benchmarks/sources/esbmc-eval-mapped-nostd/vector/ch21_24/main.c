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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__ostream_iterator_int__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_a[10] = {3, 100, 52, 77, 22, 31, 1, 98, 13, 40};
struct __gnu_cxx____ops___Iter_less_val __const__ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2____cmp;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[28] = "Vector v before make_heap:\n";
char _str_2[28] = "\nVector v after make_heap:\n";
char _str_3[28] = "\nVector v after sort_heap:\n";
char _str_4[21] = "\n\nArray a contains: ";
char _str_5[23] = "\nv2 after push_heap(a[";
char _str_6[5] = "]): ";
char _str_7[11] = "\nv2 after ";
char _str_8[19] = " popped from heap\n";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_9[49] = "cannot create std::vector larger than max_size()";
char _str_10[26] = "vector::_M_realloc_append";
char _str_11[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_12[19] = "__n < this->size()";
char _str_13[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_heap.h";
char __PRETTY_FUNCTION____ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_[145] = "void std::pop_heap(_RandomAccessIterator, _RandomAccessIterator) [_RandomAccessIterator = __gnu_cxx::__normal_iterator<int *, std::vector<int>>]";
char _str_14[18] = "__first != __last";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, struct std__basic_ostream_char__std__char_traits_char__* p1, char* p2);
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
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, struct std__ostream_iterator_int__char__std__char_traits_char__ p1);
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__2(struct std__ostream_iterator_int__char__std__char_traits_char__* p0);
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator_(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, int* p1);
void void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____int__(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, int** p1);
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__(struct std__ostream_iterator_int__char__std__char_traits_char__* p0);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__int___int___std__ostream_iterator_int__char__std__char_traits_char_____(int* p0, int* p1, struct std__ostream_iterator_int__char__std__char_traits_char__ p2);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(int* p0, int* p1, struct std__ostream_iterator_int__char__std__char_traits_char__ p2);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__ p0);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct std__ostream_iterator_int__char__std__char_traits_char__ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct std__ostream_iterator_int__char__std__char_traits_char__ p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, struct std__ostream_iterator_int__char__std__char_traits_char__* p1);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_less_iter* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
_Bool bool___gnu_cxx____ops___Iter_less_val__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(struct __gnu_cxx____ops___Iter_less_val* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_val_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_less_val* p4);
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_less_iter p4);
void void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_less_iter* p2);
void void_std__make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_less_iter* p3);
void void_std____sort_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_less_iter* p2);
void void_std__sort_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(int* p0, int* p1, struct std__ostream_iterator_int__char__std__char_traits_char__ p2);
int* int__std____miter_base_int__(int* p0);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std__copy_int___std__ostream_iterator_int__char__std__char_traits_char_____(int* p0, int* p1, struct std__ostream_iterator_int__char__std__char_traits_char__ p2);
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
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* p0, int* p1, int* p2);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, char* p2);
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0, int* p1, unsigned long p2, struct std___Vector_base_int__std__allocator_int__* p3);
int* int__std__to_address_int_(int* p0);
int* auto_std____to_address_int__(int** p0);
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* p0, int* p1);
void void_std____relocate_object_a_int__int__std__allocator_int___(int* p0, int* p1, struct std__allocator_int_* p2);
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* p0);
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* p0);
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____void_ p2, struct std__allocator_int_* p3);
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* p0, struct __gnu_cxx____normal_iterator_int____void_* p1);
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* p0);
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* int__std____relocate_a_int___int___std__allocator_int___(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* std__vector_int__std__allocator_int______S_relocate(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* p0, int* p1);
void void_std__push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
void void_std__pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
int main();
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0, struct std__allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0, struct std__allocator_int_* p1);
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* p0, int** p1, int* p2);
_Bool std____is_constant_evaluated();
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* p0, unsigned long p1, void* p2);
int* std__allocator_int___allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
extern void std____throw_length_error(char* p0);
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long p0, struct std__allocator_int_* p1);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std___Construct_int__int__(int* p0, int* p1);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____do_uninit_copy_int___int___int__(int* p0, int* p1, int* p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* int__std____niter_base_int__(int* p0);
int* int__std__uninitialized_copy_int___int__(int* p0, int* p1, int* p2);
int* int__std____uninitialized_copy_a_int___int___int___int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, unsigned long p3);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0, struct std____new_allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* p0);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v0) {
bb1:
  struct std__allocator_int_* this2;
  this2 = v0;
  struct std__allocator_int_* t3 = this2;
  struct std____new_allocator_int_* base4 = (struct std____new_allocator_int_*)((char *)t3 + 0);
  std____new_allocator_int_____new_allocator_2(base4);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2IPivEET_S4_RKS0_
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* v5, int* v6, int* v7, struct std__allocator_int_* v8) {
bb9:
  struct std__vector_int__std__allocator_int__* this10;
  int* __first11;
  int* __last12;
  struct std__allocator_int_* __a13;
  this10 = v5;
  __first11 = v6;
  __last12 = v7;
  __a13 = v8;
  struct std__vector_int__std__allocator_int__* t14 = this10;
  struct std___Vector_base_int__std__allocator_int__* base15 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t14 + 0);
  struct std__allocator_int_* t16 = __a13;
  std___Vector_base_int__std__allocator_int______Vector_base(base15, t16);
      unsigned long __n17;
      int* t18 = __last12;
      long r19 = _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(&_ZNSt6ranges8distanceE, &__first11, t18);
      unsigned long cast20 = (unsigned long)r19;
      __n17 = cast20;
      int* t21 = __first11;
      int* t22 = __last12;
      unsigned long t23 = __n17;
      void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(t14, t21, t22, t23);
      {
        struct std___Vector_base_int__std__allocator_int__* base24 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t14 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base24);
      }
      return;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v25) {
bb26:
  struct std__allocator_int_* this27;
  this27 = v25;
  struct std__allocator_int_* t28 = this27;
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v29) {
bb30:
  struct std__vector_int__std__allocator_int__* this31;
  this31 = v29;
  struct std__vector_int__std__allocator_int__* t32 = this31;
  struct std___Vector_base_int__std__allocator_int__* base33 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t32 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base_2(base33);
  return;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEC2ERSoPKc
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(struct std__ostream_iterator_int__char__std__char_traits_char__* v34, struct std__basic_ostream_char__std__char_traits_char__* v35, char* v36) {
bb37:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this38;
  struct std__basic_ostream_char__std__char_traits_char__* __s39;
  char* __c40;
  this38 = v34;
  __s39 = v35;
  __c40 = v36;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t41 = this38;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base42 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t41 + 0);
  struct std__basic_ostream_char__std__char_traits_char__* t43 = __s39;
  t41->_M_stream = t43;
  char* t44 = __c40;
  t41->_M_string = t44;
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v45, int v46) {
bb47:
  int __a48;
  int __b49;
  int __retval50;
  __a48 = v45;
  __b49 = v46;
  int t51 = __a48;
  int t52 = __b49;
  int b53 = t51 | t52;
  __retval50 = b53;
  int t54 = __retval50;
  return t54;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v55) {
bb56:
  struct std__basic_ios_char__std__char_traits_char__* this57;
  int __retval58;
  this57 = v55;
  struct std__basic_ios_char__std__char_traits_char__* t59 = this57;
  struct std__ios_base* base60 = (struct std__ios_base*)((char *)t59 + 0);
  int t61 = base60->_M_streambuf_state;
  __retval58 = t61;
  int t62 = __retval58;
  return t62;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v63, int v64) {
bb65:
  struct std__basic_ios_char__std__char_traits_char__* this66;
  int __state67;
  this66 = v63;
  __state67 = v64;
  struct std__basic_ios_char__std__char_traits_char__* t68 = this66;
  int r69 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t68);
  int t70 = __state67;
  int r71 = std__operator_(r69, t70);
  std__basic_ios_char__std__char_traits_char_____clear(t68, r71);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v72, char* v73) {
bb74:
  char* __c175;
  char* __c276;
  _Bool __retval77;
  __c175 = v72;
  __c276 = v73;
  char* t78 = __c175;
  char t79 = *t78;
  int cast80 = (int)t79;
  char* t81 = __c276;
  char t82 = *t81;
  int cast83 = (int)t82;
  _Bool c84 = ((cast80 == cast83)) ? 1 : 0;
  __retval77 = c84;
  _Bool t85 = __retval77;
  return t85;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v86) {
bb87:
  char* __p88;
  unsigned long __retval89;
  unsigned long __i90;
  __p88 = v86;
  unsigned long c91 = 0;
  __i90 = c91;
    char ref_tmp092;
    while (1) {
      unsigned long t93 = __i90;
      char* t94 = __p88;
      char* ptr95 = &(t94)[t93];
      char c96 = 0;
      ref_tmp092 = c96;
      _Bool r97 = __gnu_cxx__char_traits_char___eq(ptr95, &ref_tmp092);
      _Bool u98 = !r97;
      if (!u98) break;
      unsigned long t99 = __i90;
      unsigned long u100 = t99 + 1;
      __i90 = u100;
    }
  unsigned long t101 = __i90;
  __retval89 = t101;
  unsigned long t102 = __retval89;
  return t102;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v103) {
bb104:
  char* __s105;
  unsigned long __retval106;
  __s105 = v103;
    _Bool r107 = std____is_constant_evaluated();
    if (r107) {
      char* t108 = __s105;
      unsigned long r109 = __gnu_cxx__char_traits_char___length(t108);
      __retval106 = r109;
      unsigned long t110 = __retval106;
      return t110;
    }
  char* t111 = __s105;
  unsigned long r112 = strlen(t111);
  __retval106 = r112;
  unsigned long t113 = __retval106;
  return t113;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v114, char* v115) {
bb116:
  struct std__basic_ostream_char__std__char_traits_char__* __out117;
  char* __s118;
  struct std__basic_ostream_char__std__char_traits_char__* __retval119;
  __out117 = v114;
  __s118 = v115;
    char* t120 = __s118;
    _Bool cast121 = (_Bool)t120;
    _Bool u122 = !cast121;
    if (u122) {
      struct std__basic_ostream_char__std__char_traits_char__* t123 = __out117;
      void** v124 = (void**)t123;
      void* v125 = *((void**)v124);
      unsigned char* cast126 = (unsigned char*)v125;
      long c127 = -24;
      unsigned char* ptr128 = &(cast126)[c127];
      long* cast129 = (long*)ptr128;
      long t130 = *cast129;
      unsigned char* cast131 = (unsigned char*)t123;
      unsigned char* ptr132 = &(cast131)[t130];
      struct std__basic_ostream_char__std__char_traits_char__* cast133 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr132;
      struct std__basic_ios_char__std__char_traits_char__* cast134 = (struct std__basic_ios_char__std__char_traits_char__*)cast133;
      int t135 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast134, t135);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t136 = __out117;
      char* t137 = __s118;
      char* t138 = __s118;
      unsigned long r139 = std__char_traits_char___length(t138);
      long cast140 = (long)r139;
      struct std__basic_ostream_char__std__char_traits_char__* r141 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t136, t137, cast140);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t142 = __out117;
  __retval119 = t142;
  struct std__basic_ostream_char__std__char_traits_char__* t143 = __retval119;
  return t143;
}

// function: _ZSt12__niter_wrapISt16ostream_iteratorIicSt11char_traitsIcEEET_RKS4_S4_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__* v144, struct std__ostream_iterator_int__char__std__char_traits_char__ v145) {
bb146:
  struct std__ostream_iterator_int__char__std__char_traits_char__* unnamed147;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __res148;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval149;
  unnamed147 = v144;
  __res148 = v145;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval149, &__res148);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t150 = __retval149;
  return t150;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEdeEv
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__2(struct std__ostream_iterator_int__char__std__char_traits_char__* v151) {
bb152:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this153;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval154;
  this153 = v151;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t155 = this153;
  __retval154 = t155;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t156 = __retval154;
  return t156;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEaSERKi
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator_(struct std__ostream_iterator_int__char__std__char_traits_char__* v157, int* v158) {
bb159:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this160;
  int* __value161;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval162;
  this160 = v157;
  __value161 = v158;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t163 = this160;
  struct std__basic_ostream_char__std__char_traits_char__* t164 = t163->_M_stream;
  int* t165 = __value161;
  int t166 = *t165;
  struct std__basic_ostream_char__std__char_traits_char__* r167 = std__ostream__operator__(t164, t166);
    char* t168 = t163->_M_string;
    _Bool cast169 = (_Bool)t168;
    if (cast169) {
      struct std__basic_ostream_char__std__char_traits_char__* t170 = t163->_M_stream;
      char* t171 = t163->_M_string;
      struct std__basic_ostream_char__std__char_traits_char__* r172 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(t170, t171);
    }
  __retval162 = t163;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t173 = __retval162;
  return t173;
}

// function: _ZSt12__assign_oneILb0ESt16ostream_iteratorIicSt11char_traitsIcEEPiEvRT0_RT1_
void void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____int__(struct std__ostream_iterator_int__char__std__char_traits_char__* v174, int** v175) {
bb176:
  struct std__ostream_iterator_int__char__std__char_traits_char__* __out177;
  int** __in178;
  __out177 = v174;
  __in178 = v175;
    int** t179 = __in178;
    int* t180 = *t179;
    struct std__ostream_iterator_int__char__std__char_traits_char__* t181 = __out177;
    struct std__ostream_iterator_int__char__std__char_traits_char__* r182 = std__ostream_iterator_int__char__std__char_traits_char_____operator__2(t181);
    struct std__ostream_iterator_int__char__std__char_traits_char__* r183 = std__ostream_iterator_int__char__std__char_traits_char_____operator_(r182, t180);
  return;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEppEv
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__(struct std__ostream_iterator_int__char__std__char_traits_char__* v184) {
bb185:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this186;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval187;
  this186 = v184;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t188 = this186;
  __retval187 = t188;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t189 = __retval187;
  return t189;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_St16ostream_iteratorIicSt11char_traitsIcEEET2_T0_T1_S5_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__int___int___std__ostream_iterator_int__char__std__char_traits_char_____(int* v190, int* v191, struct std__ostream_iterator_int__char__std__char_traits_char__ v192) {
bb193:
  int* __first194;
  int* __last195;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result196;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval197;
  __first194 = v190;
  __last195 = v191;
  __result196 = v192;
    while (1) {
      int* t199 = __first194;
      int* t200 = __last195;
      _Bool c201 = ((t199 != t200)) ? 1 : 0;
      if (!c201) break;
      void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____int__(&__result196, &__first194);
    for_step198: ;
      struct std__ostream_iterator_int__char__std__char_traits_char__* r202 = std__ostream_iterator_int__char__std__char_traits_char_____operator__(&__result196);
      int* t203 = __first194;
      int c204 = 1;
      int* ptr205 = &(t203)[c204];
      __first194 = ptr205;
    }
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval197, &__result196);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t206 = __retval197;
  return t206;
}

// function: _ZSt14__copy_move_a1ILb0EPiSt16ostream_iteratorIicSt11char_traitsIcEEET1_T0_S6_S5_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(int* v207, int* v208, struct std__ostream_iterator_int__char__std__char_traits_char__ v209) {
bb210:
  int* __first211;
  int* __last212;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result213;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval214;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0215;
  __first211 = v207;
  __last212 = v208;
  __result213 = v209;
  int* t216 = __first211;
  int* t217 = __last212;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp0215, &__result213);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t218 = agg_tmp0215;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r219 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__int___int___std__ostream_iterator_int__char__std__char_traits_char_____(t216, t217, t218);
  __retval214 = r219;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t220 = __retval214;
  return t220;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v221) {
bb222:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this223;
  int** __retval224;
  this223 = v221;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t225 = this223;
  __retval224 = &t225->_M_current;
  int** t226 = __retval224;
  return t226;
}

// function: _ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v227) {
bb228:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it229;
  int* __retval230;
  __it229 = v227;
  int** r231 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__it229);
  int* t232 = *r231;
  __retval230 = t232;
  int* t233 = __retval230;
  return t233;
}

// function: _ZSt12__niter_baseISt16ostream_iteratorIicSt11char_traitsIcEEET_S4_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__ v234) {
bb235:
  struct std__ostream_iterator_int__char__std__char_traits_char__ __it236;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval237;
  __it236 = v234;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval237, &__it236);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t238 = __retval237;
  return t238;
}

// function: _ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt16ostream_iteratorIicSt11char_traitsIcEEET1_T0_SC_SB_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v239, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v240, struct std__ostream_iterator_int__char__std__char_traits_char__ v241) {
bb242:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first243;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last244;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result245;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval246;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0247;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1248;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2249;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3250;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp4251;
  __first243 = v239;
  __last244 = v240;
  __result245 = v241;
  agg_tmp1248 = __first243; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t252 = agg_tmp1248;
  int* r253 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t252);
  agg_tmp2249 = __last244; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t254 = agg_tmp2249;
  int* r255 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t254);
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp4251, &__result245);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t256 = agg_tmp4251;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r257 = std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(t256);
  agg_tmp3250 = r257;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t258 = agg_tmp3250;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r259 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(r253, r255, t258);
  agg_tmp0247 = r259;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t260 = agg_tmp0247;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r261 = std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(&__result245, t260);
  __retval246 = r261;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t262 = __retval246;
  return t262;
}

// function: _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v263) {
bb264:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it265;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval266;
  __it265 = v263;
  __retval266 = __it265; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t267 = __retval266;
  return t267;
}

// function: _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt16ostream_iteratorIicSt11char_traitsIcEEET0_T_SC_SB_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v268, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v269, struct std__ostream_iterator_int__char__std__char_traits_char__ v270) {
bb271:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first272;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last273;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result274;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval275;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0276;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1277;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2278;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3279;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp4280;
  __first272 = v268;
  __last273 = v269;
  __result274 = v270;
  agg_tmp1277 = __first272; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t281 = agg_tmp1277;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r282 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t281);
  agg_tmp0276 = r282;
  agg_tmp3279 = __last273; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t283 = agg_tmp3279;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r284 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t283);
  agg_tmp2278 = r284;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp4280, &__result274);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t285 = agg_tmp0276;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t286 = agg_tmp2278;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t287 = agg_tmp4280;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r288 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t285, t286, t287);
  __retval275 = r288;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t289 = __retval275;
  return t289;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v290, int** v291) {
bb292:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this293;
  int** __i294;
  this293 = v290;
  __i294 = v291;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t295 = this293;
  int** t296 = __i294;
  int* t297 = *t296;
  t295->_M_current = t297;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v298) {
bb299:
  struct std__vector_int__std__allocator_int__* this300;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval301;
  this300 = v298;
  struct std__vector_int__std__allocator_int__* t302 = this300;
  struct std___Vector_base_int__std__allocator_int__* base303 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t302 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base304 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base303->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval301, &base304->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t305 = __retval301;
  return t305;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v306) {
bb307:
  struct std__vector_int__std__allocator_int__* this308;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval309;
  this308 = v306;
  struct std__vector_int__std__allocator_int__* t310 = this308;
  struct std___Vector_base_int__std__allocator_int__* base311 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t310 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base312 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base311->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval309, &base312->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t313 = __retval309;
  return t313;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEC2ERKS2_
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(struct std__ostream_iterator_int__char__std__char_traits_char__* v314, struct std__ostream_iterator_int__char__std__char_traits_char__* v315) {
bb316:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this317;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __obj318;
  this317 = v314;
  __obj318 = v315;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t319 = this317;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base320 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t319 + 0);
  struct std__ostream_iterator_int__char__std__char_traits_char__* t321 = __obj318;
  struct std__basic_ostream_char__std__char_traits_char__* t322 = t321->_M_stream;
  t319->_M_stream = t322;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t323 = __obj318;
  char* t324 = t323->_M_string;
  t319->_M_string = t324;
  return;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v325, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v326) {
bb327:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs328;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs329;
  long __retval330;
  __lhs328 = v325;
  __rhs329 = v326;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t331 = __lhs328;
  int** r332 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t331);
  int* t333 = *r332;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t334 = __rhs329;
  int** r335 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t334);
  int* t336 = *r335;
  long diff337 = t333 - t336;
  __retval330 = diff337;
  long t338 = __retval330;
  return t338;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v339, long v340) {
bb341:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this342;
  long __n343;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval344;
  int* ref_tmp0345;
  this342 = v339;
  __n343 = v340;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t346 = this342;
  int* t347 = t346->_M_current;
  long t348 = __n343;
  int* ptr349 = &(t347)[t348];
  ref_tmp0345 = ptr349;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval344, &ref_tmp0345);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t350 = __retval344;
  return t350;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v351) {
bb352:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this353;
  int* __retval354;
  this353 = v351;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t355 = this353;
  int* t356 = t355->_M_current;
  __retval354 = t356;
  int* t357 = __retval354;
  return t357;
}

// function: _ZNK9__gnu_cxx5__ops15_Iter_less_iterclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEES8_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_less_iter* v358, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v359, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v360) {
bb361:
  struct __gnu_cxx____ops___Iter_less_iter* this362;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1363;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it2364;
  _Bool __retval365;
  this362 = v358;
  __it1363 = v359;
  __it2364 = v360;
  struct __gnu_cxx____ops___Iter_less_iter* t366 = this362;
  int* r367 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it1363);
  int t368 = *r367;
  int* r369 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it2364);
  int t370 = *r369;
  _Bool c371 = ((t368 < t370)) ? 1 : 0;
  __retval365 = c371;
  _Bool t372 = __retval365;
  return t372;
}

// function: _ZNK9__gnu_cxx5__ops14_Iter_less_valclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEEbT_RT0_
_Bool bool___gnu_cxx____ops___Iter_less_val__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(struct __gnu_cxx____ops___Iter_less_val* v373, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v374, int* v375) {
bb376:
  struct __gnu_cxx____ops___Iter_less_val* this377;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it378;
  int* __val379;
  _Bool __retval380;
  this377 = v373;
  __it378 = v374;
  __val379 = v375;
  struct __gnu_cxx____ops___Iter_less_val* t381 = this377;
  int* r382 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it378);
  int t383 = *r382;
  int* t384 = __val379;
  int t385 = *t384;
  _Bool c386 = ((t383 < t385)) ? 1 : 0;
  __retval380 = c386;
  _Bool t387 = __retval380;
  return t387;
}

// function: _ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops14_Iter_less_valEEvT_T0_SA_T1_RT2_
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_val_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v388, long v389, long v390, int v391, struct __gnu_cxx____ops___Iter_less_val* v392) {
bb393:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first394;
  long __holeIndex395;
  long __topIndex396;
  int __value397;
  struct __gnu_cxx____ops___Iter_less_val* __comp398;
  long __parent399;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2400;
  __first394 = v388;
  __holeIndex395 = v389;
  __topIndex396 = v390;
  __value397 = v391;
  __comp398 = v392;
  long t401 = __holeIndex395;
  long c402 = 1;
  long b403 = t401 - c402;
  long c404 = 2;
  long b405 = b403 / c404;
  __parent399 = b405;
    while (1) {
      long t406 = __holeIndex395;
      long t407 = __topIndex396;
      _Bool c408 = ((t406 > t407)) ? 1 : 0;
      _Bool ternary409;
      if (c408) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0410;
        struct __gnu_cxx____ops___Iter_less_val* t411 = __comp398;
        long t412 = __parent399;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r413 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first394, t412);
        agg_tmp0410 = r413;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t414 = agg_tmp0410;
        _Bool r415 = bool___gnu_cxx____ops___Iter_less_val__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(t411, t414, &__value397);
        ternary409 = (_Bool)r415;
      } else {
        _Bool c416 = 0;
        ternary409 = (_Bool)c416;
      }
      if (!ternary409) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0417;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1418;
        long t419 = __parent399;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r420 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first394, t419);
        ref_tmp0417 = r420;
        int* r421 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0417);
        int t422 = *r421;
        long t423 = __holeIndex395;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r424 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first394, t423);
        ref_tmp1418 = r424;
        int* r425 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1418);
        *r425 = t422;
        long t426 = __parent399;
        __holeIndex395 = t426;
        long t427 = __holeIndex395;
        long c428 = 1;
        long b429 = t427 - c428;
        long c430 = 2;
        long b431 = b429 / c430;
        __parent399 = b431;
    }
  int t432 = __value397;
  long t433 = __holeIndex395;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r434 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first394, t433);
  ref_tmp2400 = r434;
  int* r435 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp2400);
  *r435 = t432;
  return;
}

// function: _ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2_
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v436, long v437, long v438, int v439, struct __gnu_cxx____ops___Iter_less_iter v440) {
bb441:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first442;
  long __holeIndex443;
  long __len444;
  int __value445;
  struct __gnu_cxx____ops___Iter_less_iter __comp446;
  long __topIndex447;
  long __secondChild448;
  struct __gnu_cxx____ops___Iter_less_val __cmp449;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2450;
  __first442 = v436;
  __holeIndex443 = v437;
  __len444 = v438;
  __value445 = v439;
  __comp446 = v440;
  long t451 = __holeIndex443;
  __topIndex447 = t451;
  long t452 = __holeIndex443;
  __secondChild448 = t452;
    while (1) {
      long t453 = __secondChild448;
      long t454 = __len444;
      long c455 = 1;
      long b456 = t454 - c455;
      long c457 = 2;
      long b458 = b456 / c457;
      _Bool c459 = ((t453 < b458)) ? 1 : 0;
      if (!c459) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0460;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1461;
        long c462 = 2;
        long t463 = __secondChild448;
        long c464 = 1;
        long b465 = t463 + c464;
        long b466 = c462 * b465;
        __secondChild448 = b466;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0467;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1468;
          long t469 = __secondChild448;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r470 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first442, t469);
          agg_tmp0467 = r470;
          long t471 = __secondChild448;
          long c472 = 1;
          long b473 = t471 - c472;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r474 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first442, b473);
          agg_tmp1468 = r474;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t475 = agg_tmp0467;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t476 = agg_tmp1468;
          _Bool r477 = bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp446, t475, t476);
          if (r477) {
            long t478 = __secondChild448;
            long u479 = t478 - 1;
            __secondChild448 = u479;
          }
        long t480 = __secondChild448;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r481 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first442, t480);
        ref_tmp0460 = r481;
        int* r482 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0460);
        int t483 = *r482;
        long t484 = __holeIndex443;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r485 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first442, t484);
        ref_tmp1461 = r485;
        int* r486 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1461);
        *r486 = t483;
        long t487 = __secondChild448;
        __holeIndex443 = t487;
    }
    long t488 = __len444;
    long c489 = 1;
    long b490 = t488 & c489;
    long c491 = 0;
    _Bool c492 = ((b490 == c491)) ? 1 : 0;
    _Bool ternary493;
    if (c492) {
      long t494 = __secondChild448;
      long t495 = __len444;
      long c496 = 2;
      long b497 = t495 - c496;
      long c498 = 2;
      long b499 = b497 / c498;
      _Bool c500 = ((t494 == b499)) ? 1 : 0;
      ternary493 = (_Bool)c500;
    } else {
      _Bool c501 = 0;
      ternary493 = (_Bool)c501;
    }
    if (ternary493) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2502;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3503;
      long c504 = 2;
      long t505 = __secondChild448;
      long c506 = 1;
      long b507 = t505 + c506;
      long b508 = c504 * b507;
      __secondChild448 = b508;
      long t509 = __secondChild448;
      long c510 = 1;
      long b511 = t509 - c510;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r512 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first442, b511);
      ref_tmp2502 = r512;
      int* r513 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp2502);
      int t514 = *r513;
      long t515 = __holeIndex443;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r516 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first442, t515);
      ref_tmp3503 = r516;
      int* r517 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp3503);
      *r517 = t514;
      long t518 = __secondChild448;
      long c519 = 1;
      long b520 = t518 - c519;
      __holeIndex443 = b520;
    }
  __cmp449 = *&__const__ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2____cmp; // copy
  agg_tmp2450 = __first442; // copy
  long t521 = __holeIndex443;
  long t522 = __topIndex447;
  int t523 = __value445;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t524 = agg_tmp2450;
  void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_val_(t524, t521, t522, t523, &__cmp449);
  return;
}

// function: _ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_RT0_
void void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v525, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v526, struct __gnu_cxx____ops___Iter_less_iter* v527) {
bb528:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first529;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last530;
  struct __gnu_cxx____ops___Iter_less_iter* __comp531;
  long __len532;
  long __parent533;
  __first529 = v525;
  __last530 = v526;
  __comp531 = v527;
    long r534 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last530, &__first529);
    long c535 = 2;
    _Bool c536 = ((r534 < c535)) ? 1 : 0;
    if (c536) {
      return;
    }
  long r537 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last530, &__first529);
  __len532 = r537;
  long t538 = __len532;
  long c539 = 2;
  long b540 = t538 - c539;
  long c541 = 2;
  long b542 = b540 / c541;
  __parent533 = b542;
    while (1) {
      _Bool c543 = 1;
      if (!c543) break;
        int __value544;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0545;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0546;
        struct __gnu_cxx____ops___Iter_less_iter agg_tmp1547;
        long t548 = __parent533;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r549 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first529, t548);
        ref_tmp0545 = r549;
        int* r550 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0545);
        int t551 = *r550;
        __value544 = t551;
        agg_tmp0546 = __first529; // copy
        long t552 = __parent533;
        long t553 = __len532;
        int t554 = __value544;
        struct __gnu_cxx____ops___Iter_less_iter* t555 = __comp531;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t556 = agg_tmp0546;
        struct __gnu_cxx____ops___Iter_less_iter t557 = agg_tmp1547;
        void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(t556, t552, t553, t554, t557);
          long t558 = __parent533;
          long c559 = 0;
          _Bool c560 = ((t558 == c559)) ? 1 : 0;
          if (c560) {
            return;
          }
        long t561 = __parent533;
        long u562 = t561 - 1;
        __parent533 = u562;
    }
  return;
}

// function: _ZSt9make_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_
void void_std__make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v563, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v564) {
bb565:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first566;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last567;
  struct __gnu_cxx____ops___Iter_less_iter __comp568;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0569;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1570;
  __first566 = v563;
  __last567 = v564;
  agg_tmp0569 = __first566; // copy
  agg_tmp1570 = __last567; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t571 = agg_tmp0569;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t572 = agg_tmp1570;
  void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t571, t572, &__comp568);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmmEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v573) {
bb574:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this575;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval576;
  this575 = v573;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t577 = this575;
  int* t578 = t577->_M_current;
  int c579 = -1;
  int* ptr580 = &(t578)[c579];
  t577->_M_current = ptr580;
  __retval576 = t577;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t581 = __retval576;
  return t581;
}

// function: _ZSt10__pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_S9_RT0_
void void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v582, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v583, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v584, struct __gnu_cxx____ops___Iter_less_iter* v585) {
bb586:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first587;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last588;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result589;
  struct __gnu_cxx____ops___Iter_less_iter* __comp590;
  int __value591;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0592;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp1593;
  __first587 = v582;
  __last588 = v583;
  __result589 = v584;
  __comp590 = v585;
  int* r594 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result589);
  int t595 = *r594;
  __value591 = t595;
  int* r596 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first587);
  int t597 = *r596;
  int* r598 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result589);
  *r598 = t597;
  agg_tmp0592 = __first587; // copy
  long c599 = 0;
  long r600 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last588, &__first587);
  int t601 = __value591;
  struct __gnu_cxx____ops___Iter_less_iter* t602 = __comp590;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t603 = agg_tmp0592;
  struct __gnu_cxx____ops___Iter_less_iter t604 = agg_tmp1593;
  void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(t603, c599, r600, t601, t604);
  return;
}

// function: _ZSt11__sort_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_RT0_
void void_std____sort_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v605, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v606, struct __gnu_cxx____ops___Iter_less_iter* v607) {
bb608:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first609;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last610;
  struct __gnu_cxx____ops___Iter_less_iter* __comp611;
  __first609 = v605;
  __last610 = v606;
  __comp611 = v607;
    while (1) {
      long r612 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last610, &__first609);
      long c613 = 1;
      _Bool c614 = ((r612 > c613)) ? 1 : 0;
      if (!c614) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0615;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1616;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2617;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r618 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__last610);
        agg_tmp0615 = __first609; // copy
        agg_tmp1616 = __last610; // copy
        agg_tmp2617 = __last610; // copy
        struct __gnu_cxx____ops___Iter_less_iter* t619 = __comp611;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t620 = agg_tmp0615;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t621 = agg_tmp1616;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t622 = agg_tmp2617;
        void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t620, t621, t622, t619);
    }
  return;
}

// function: _ZSt9sort_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_
void void_std__sort_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v623, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v624) {
bb625:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first626;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last627;
  struct __gnu_cxx____ops___Iter_less_iter __comp628;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0629;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1630;
  __first626 = v623;
  __last627 = v624;
  agg_tmp0629 = __first626; // copy
  agg_tmp1630 = __last627; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t631 = agg_tmp0629;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t632 = agg_tmp1630;
  void_std____sort_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t631, t632, &__comp628);
  return;
}

// function: _ZSt13__copy_move_aILb0EPiSt16ostream_iteratorIicSt11char_traitsIcEEET1_T0_S6_S5_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(int* v633, int* v634, struct std__ostream_iterator_int__char__std__char_traits_char__ v635) {
bb636:
  int* __first637;
  int* __last638;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result639;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval640;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0641;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1642;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2643;
  __first637 = v633;
  __last638 = v634;
  __result639 = v635;
  int* t644 = __first637;
  int* r645 = int__std____niter_base_int__(t644);
  int* t646 = __last638;
  int* r647 = int__std____niter_base_int__(t646);
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp2643, &__result639);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t648 = agg_tmp2643;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r649 = std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(t648);
  agg_tmp1642 = r649;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t650 = agg_tmp1642;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r651 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(r645, r647, t650);
  agg_tmp0641 = r651;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t652 = agg_tmp0641;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r653 = std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(&__result639, t652);
  __retval640 = r653;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t654 = __retval640;
  return t654;
}

// function: _ZSt12__miter_baseIPiET_S1_
int* int__std____miter_base_int__(int* v655) {
bb656:
  int* __it657;
  int* __retval658;
  __it657 = v655;
  int* t659 = __it657;
  __retval658 = t659;
  int* t660 = __retval658;
  return t660;
}

// function: _ZSt4copyIPiSt16ostream_iteratorIicSt11char_traitsIcEEET0_T_S6_S5_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std__copy_int___std__ostream_iterator_int__char__std__char_traits_char_____(int* v661, int* v662, struct std__ostream_iterator_int__char__std__char_traits_char__ v663) {
bb664:
  int* __first665;
  int* __last666;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result667;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval668;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0669;
  __first665 = v661;
  __last666 = v662;
  __result667 = v663;
  int* t670 = __first665;
  int* r671 = int__std____miter_base_int__(t670);
  int* t672 = __last666;
  int* r673 = int__std____miter_base_int__(t672);
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp0669, &__result667);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t674 = agg_tmp0669;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r675 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(r671, r673, t674);
  __retval668 = r675;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t676 = __retval668;
  return t676;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v677, void* v678) {
bb679:
  struct std__basic_ostream_char__std__char_traits_char__* this680;
  void* __pf681;
  struct std__basic_ostream_char__std__char_traits_char__* __retval682;
  this680 = v677;
  __pf681 = v678;
  struct std__basic_ostream_char__std__char_traits_char__* t683 = this680;
  void* t684 = __pf681;
  struct std__basic_ostream_char__std__char_traits_char__* r685 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t684)(t683);
  __retval682 = r685;
  struct std__basic_ostream_char__std__char_traits_char__* t686 = __retval682;
  return t686;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v687) {
bb688:
  struct std__basic_ostream_char__std__char_traits_char__* __os689;
  struct std__basic_ostream_char__std__char_traits_char__* __retval690;
  __os689 = v687;
  struct std__basic_ostream_char__std__char_traits_char__* t691 = __os689;
  struct std__basic_ostream_char__std__char_traits_char__* r692 = std__ostream__flush(t691);
  __retval690 = r692;
  struct std__basic_ostream_char__std__char_traits_char__* t693 = __retval690;
  return t693;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v694) {
bb695:
  struct std__ctype_char_* __f696;
  struct std__ctype_char_* __retval697;
  __f696 = v694;
    struct std__ctype_char_* t698 = __f696;
    _Bool cast699 = (_Bool)t698;
    _Bool u700 = !cast699;
    if (u700) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t701 = __f696;
  __retval697 = t701;
  struct std__ctype_char_* t702 = __retval697;
  return t702;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v703, char v704) {
bb705:
  struct std__ctype_char_* this706;
  char __c707;
  char __retval708;
  this706 = v703;
  __c707 = v704;
  struct std__ctype_char_* t709 = this706;
    char t710 = t709->_M_widen_ok;
    _Bool cast711 = (_Bool)t710;
    if (cast711) {
      char t712 = __c707;
      unsigned char cast713 = (unsigned char)t712;
      unsigned long cast714 = (unsigned long)cast713;
      char t715 = t709->_M_widen[cast714];
      __retval708 = t715;
      char t716 = __retval708;
      return t716;
    }
  std__ctype_char____M_widen_init___const(t709);
  char t717 = __c707;
  void** v718 = (void**)t709;
  void* v719 = *((void**)v718);
  char vcall722 = (char)__VERIFIER_virtual_call_char_char(t709, 6, t717);
  __retval708 = vcall722;
  char t723 = __retval708;
  return t723;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v724, char v725) {
bb726:
  struct std__basic_ios_char__std__char_traits_char__* this727;
  char __c728;
  char __retval729;
  this727 = v724;
  __c728 = v725;
  struct std__basic_ios_char__std__char_traits_char__* t730 = this727;
  struct std__ctype_char_* t731 = t730->_M_ctype;
  struct std__ctype_char_* r732 = std__ctype_char__const__std____check_facet_std__ctype_char___(t731);
  char t733 = __c728;
  char r734 = std__ctype_char___widen_char__const(r732, t733);
  __retval729 = r734;
  char t735 = __retval729;
  return t735;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v736) {
bb737:
  struct std__basic_ostream_char__std__char_traits_char__* __os738;
  struct std__basic_ostream_char__std__char_traits_char__* __retval739;
  __os738 = v736;
  struct std__basic_ostream_char__std__char_traits_char__* t740 = __os738;
  struct std__basic_ostream_char__std__char_traits_char__* t741 = __os738;
  void** v742 = (void**)t741;
  void* v743 = *((void**)v742);
  unsigned char* cast744 = (unsigned char*)v743;
  long c745 = -24;
  unsigned char* ptr746 = &(cast744)[c745];
  long* cast747 = (long*)ptr746;
  long t748 = *cast747;
  unsigned char* cast749 = (unsigned char*)t741;
  unsigned char* ptr750 = &(cast749)[t748];
  struct std__basic_ostream_char__std__char_traits_char__* cast751 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr750;
  struct std__basic_ios_char__std__char_traits_char__* cast752 = (struct std__basic_ios_char__std__char_traits_char__*)cast751;
  char c753 = 10;
  char r754 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast752, c753);
  struct std__basic_ostream_char__std__char_traits_char__* r755 = std__ostream__put(t740, r754);
  struct std__basic_ostream_char__std__char_traits_char__* r756 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r755);
  __retval739 = r756;
  struct std__basic_ostream_char__std__char_traits_char__* t757 = __retval739;
  return t757;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v758, int* v759) {
bb760:
  int* __location761;
  int* __args762;
  int* __retval763;
  void* __loc764;
  __location761 = v758;
  __args762 = v759;
  int* t765 = __location761;
  void* cast766 = (void*)t765;
  __loc764 = cast766;
    void* t767 = __loc764;
    int* cast768 = (int*)t767;
    int* t769 = __args762;
    int t770 = *t769;
    *cast768 = t770;
    __retval763 = cast768;
    int* t771 = __retval763;
    return t771;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v772, int* v773, int* v774) {
bb775:
  struct std__allocator_int_* __a776;
  int* __p777;
  int* __args778;
  __a776 = v772;
  __p777 = v773;
  __args778 = v774;
  int* t779 = __p777;
  int* t780 = __args778;
  int* r781 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t779, t780);
  return;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v782) {
bb783:
  struct std___Vector_base_int__std__allocator_int__* this784;
  struct std__allocator_int_* __retval785;
  this784 = v782;
  struct std___Vector_base_int__std__allocator_int__* t786 = this784;
  struct std__allocator_int_* base787 = (struct std__allocator_int_*)((char *)&(t786->_M_impl) + 0);
  __retval785 = base787;
  struct std__allocator_int_* t788 = __retval785;
  return t788;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v789) {
bb790:
  struct std__vector_int__std__allocator_int__* this791;
  unsigned long __retval792;
  this791 = v789;
  struct std__vector_int__std__allocator_int__* t793 = this791;
  struct std___Vector_base_int__std__allocator_int__* base794 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t793 + 0);
  struct std__allocator_int_* r795 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base794);
  unsigned long r796 = std__vector_int__std__allocator_int______S_max_size(r795);
  __retval792 = r796;
  unsigned long t797 = __retval792;
  return t797;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v798, unsigned long* v799) {
bb800:
  unsigned long* __a801;
  unsigned long* __b802;
  unsigned long* __retval803;
  __a801 = v798;
  __b802 = v799;
    unsigned long* t804 = __a801;
    unsigned long t805 = *t804;
    unsigned long* t806 = __b802;
    unsigned long t807 = *t806;
    _Bool c808 = ((t805 < t807)) ? 1 : 0;
    if (c808) {
      unsigned long* t809 = __b802;
      __retval803 = t809;
      unsigned long* t810 = __retval803;
      return t810;
    }
  unsigned long* t811 = __a801;
  __retval803 = t811;
  unsigned long* t812 = __retval803;
  return t812;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v813, unsigned long v814, char* v815) {
bb816:
  struct std__vector_int__std__allocator_int__* this817;
  unsigned long __n818;
  char* __s819;
  unsigned long __retval820;
  unsigned long __len821;
  unsigned long ref_tmp0822;
  this817 = v813;
  __n818 = v814;
  __s819 = v815;
  struct std__vector_int__std__allocator_int__* t823 = this817;
    unsigned long r824 = std__vector_int__std__allocator_int_____max_size___const(t823);
    unsigned long r825 = std__vector_int__std__allocator_int_____size___const(t823);
    unsigned long b826 = r824 - r825;
    unsigned long t827 = __n818;
    _Bool c828 = ((b826 < t827)) ? 1 : 0;
    if (c828) {
      char* t829 = __s819;
      std____throw_length_error(t829);
    }
  unsigned long r830 = std__vector_int__std__allocator_int_____size___const(t823);
  unsigned long r831 = std__vector_int__std__allocator_int_____size___const(t823);
  ref_tmp0822 = r831;
  unsigned long* r832 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0822, &__n818);
  unsigned long t833 = *r832;
  unsigned long b834 = r830 + t833;
  __len821 = b834;
  unsigned long t835 = __len821;
  unsigned long r836 = std__vector_int__std__allocator_int_____size___const(t823);
  _Bool c837 = ((t835 < r836)) ? 1 : 0;
  _Bool ternary838;
  if (c837) {
    _Bool c839 = 1;
    ternary838 = (_Bool)c839;
  } else {
    unsigned long t840 = __len821;
    unsigned long r841 = std__vector_int__std__allocator_int_____max_size___const(t823);
    _Bool c842 = ((t840 > r841)) ? 1 : 0;
    ternary838 = (_Bool)c842;
  }
  unsigned long ternary843;
  if (ternary838) {
    unsigned long r844 = std__vector_int__std__allocator_int_____max_size___const(t823);
    ternary843 = (unsigned long)r844;
  } else {
    unsigned long t845 = __len821;
    ternary843 = (unsigned long)t845;
  }
  __retval820 = ternary843;
  unsigned long t846 = __retval820;
  return t846;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v847, int* v848, unsigned long v849, struct std___Vector_base_int__std__allocator_int__* v850) {
bb851:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this852;
  int* __s853;
  unsigned long __l854;
  struct std___Vector_base_int__std__allocator_int__* __vect855;
  this852 = v847;
  __s853 = v848;
  __l854 = v849;
  __vect855 = v850;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t856 = this852;
  int* t857 = __s853;
  t856->_M_storage = t857;
  unsigned long t858 = __l854;
  t856->_M_len = t858;
  struct std___Vector_base_int__std__allocator_int__* t859 = __vect855;
  t856->_M_vect = t859;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v860) {
bb861:
  int* __ptr862;
  int* __retval863;
  __ptr862 = v860;
  int* t864 = __ptr862;
  __retval863 = t864;
  int* t865 = __retval863;
  return t865;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v866) {
bb867:
  int** __ptr868;
  int* __retval869;
  __ptr868 = v866;
  int** t870 = __ptr868;
  int* t871 = *t870;
  int* r872 = int__std__to_address_int_(t871);
  __retval869 = r872;
  int* t873 = __retval869;
  return t873;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v874, int** v875) {
bb876:
  struct __gnu_cxx____normal_iterator_int____void_* this877;
  int** __i878;
  this877 = v874;
  __i878 = v875;
  struct __gnu_cxx____normal_iterator_int____void_* t879 = this877;
  int** t880 = __i878;
  int* t881 = *t880;
  t879->_M_current = t881;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v882, int* v883) {
bb884:
  int* __location885;
  int* __args886;
  int* __retval887;
  void* __loc888;
  __location885 = v882;
  __args886 = v883;
  int* t889 = __location885;
  void* cast890 = (void*)t889;
  __loc888 = cast890;
    void* t891 = __loc888;
    int* cast892 = (int*)t891;
    int* t893 = __args886;
    int t894 = *t893;
    *cast892 = t894;
    __retval887 = cast892;
    int* t895 = __retval887;
    return t895;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v896, int* v897, int* v898) {
bb899:
  struct std__allocator_int_* __a900;
  int* __p901;
  int* __args902;
  __a900 = v896;
  __p901 = v897;
  __args902 = v898;
  int* t903 = __p901;
  int* t904 = __args902;
  int* r905 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t903, t904);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v906, int* v907) {
bb908:
  struct std__allocator_int_* __a909;
  int* __p910;
  __a909 = v906;
  __p910 = v907;
  int* t911 = __p910;
  void_std__destroy_at_int_(t911);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v912, int* v913, struct std__allocator_int_* v914) {
bb915:
  int* __dest916;
  int* __orig917;
  struct std__allocator_int_* __alloc918;
  __dest916 = v912;
  __orig917 = v913;
  __alloc918 = v914;
  struct std__allocator_int_* t919 = __alloc918;
  int* t920 = __dest916;
  int* t921 = __orig917;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t919, t920, t921);
  struct std__allocator_int_* t922 = __alloc918;
  int* t923 = __orig917;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t922, t923);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v924) {
bb925:
  struct __gnu_cxx____normal_iterator_int____void_* this926;
  int* __retval927;
  this926 = v924;
  struct __gnu_cxx____normal_iterator_int____void_* t928 = this926;
  int* t929 = t928->_M_current;
  __retval927 = t929;
  int* t930 = __retval927;
  return t930;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v931) {
bb932:
  struct __gnu_cxx____normal_iterator_int____void_* this933;
  struct __gnu_cxx____normal_iterator_int____void_* __retval934;
  this933 = v931;
  struct __gnu_cxx____normal_iterator_int____void_* t935 = this933;
  int* t936 = t935->_M_current;
  int c937 = 1;
  int* ptr938 = &(t936)[c937];
  t935->_M_current = ptr938;
  __retval934 = t935;
  struct __gnu_cxx____normal_iterator_int____void_* t939 = __retval934;
  return t939;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v940, int* v941, struct __gnu_cxx____normal_iterator_int____void_ v942, struct std__allocator_int_* v943) {
bb944:
  int* __first945;
  int* __last946;
  struct __gnu_cxx____normal_iterator_int____void_ __result947;
  struct std__allocator_int_* __alloc948;
  struct __gnu_cxx____normal_iterator_int____void_ __retval949;
  __first945 = v940;
  __last946 = v941;
  __result947 = v942;
  __alloc948 = v943;
  __retval949 = __result947; // copy
    while (1) {
      int* t951 = __first945;
      int* t952 = __last946;
      _Bool c953 = ((t951 != t952)) ? 1 : 0;
      if (!c953) break;
      int* r954 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval949);
      int* t955 = __first945;
      struct std__allocator_int_* t956 = __alloc948;
      void_std____relocate_object_a_int__int__std__allocator_int___(r954, t955, t956);
    for_step950: ;
      int* t957 = __first945;
      int c958 = 1;
      int* ptr959 = &(t957)[c958];
      __first945 = ptr959;
      struct __gnu_cxx____normal_iterator_int____void_* r960 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval949);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t961 = __retval949;
  return t961;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v962, struct __gnu_cxx____normal_iterator_int____void_* v963) {
bb964:
  struct __gnu_cxx____normal_iterator_int____void_* this965;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed966;
  struct __gnu_cxx____normal_iterator_int____void_* __retval967;
  this965 = v962;
  unnamed966 = v963;
  struct __gnu_cxx____normal_iterator_int____void_* t968 = this965;
  struct __gnu_cxx____normal_iterator_int____void_* t969 = unnamed966;
  int* t970 = t969->_M_current;
  t968->_M_current = t970;
  __retval967 = t968;
  struct __gnu_cxx____normal_iterator_int____void_* t971 = __retval967;
  return t971;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v972) {
bb973:
  struct __gnu_cxx____normal_iterator_int____void_* this974;
  int** __retval975;
  this974 = v972;
  struct __gnu_cxx____normal_iterator_int____void_* t976 = this974;
  __retval975 = &t976->_M_current;
  int** t977 = __retval975;
  return t977;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v978, int* v979, int* v980, struct std__allocator_int_* v981) {
bb982:
  int* __first983;
  int* __last984;
  int* __result985;
  struct std__allocator_int_* __alloc986;
  int* __retval987;
  long __count988;
  __first983 = v978;
  __last984 = v979;
  __result985 = v980;
  __alloc986 = v981;
  int* t989 = __last984;
  int* t990 = __first983;
  long diff991 = t989 - t990;
  __count988 = diff991;
    long t992 = __count988;
    long c993 = 0;
    _Bool c994 = ((t992 > c993)) ? 1 : 0;
    if (c994) {
        _Bool r995 = std__is_constant_evaluated();
        if (r995) {
          struct __gnu_cxx____normal_iterator_int____void_ __out996;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0997;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0998;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out996, &__result985);
          int* t999 = __first983;
          int* t1000 = __last984;
          agg_tmp0998 = __out996; // copy
          struct std__allocator_int_* t1001 = __alloc986;
          struct __gnu_cxx____normal_iterator_int____void_ t1002 = agg_tmp0998;
          struct __gnu_cxx____normal_iterator_int____void_ r1003 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t999, t1000, t1002, t1001);
          ref_tmp0997 = r1003;
          struct __gnu_cxx____normal_iterator_int____void_* r1004 = __gnu_cxx____normal_iterator_int___void___operator_(&__out996, &ref_tmp0997);
          int** r1005 = __gnu_cxx____normal_iterator_int___void___base___const(&__out996);
          int* t1006 = *r1005;
          __retval987 = t1006;
          int* t1007 = __retval987;
          return t1007;
        }
      int* t1008 = __result985;
      void* cast1009 = (void*)t1008;
      int* t1010 = __first983;
      void* cast1011 = (void*)t1010;
      long t1012 = __count988;
      unsigned long cast1013 = (unsigned long)t1012;
      unsigned long c1014 = 4;
      unsigned long b1015 = cast1013 * c1014;
      void* r1016 = memcpy(cast1009, cast1011, b1015);
    }
  int* t1017 = __result985;
  long t1018 = __count988;
  int* ptr1019 = &(t1017)[t1018];
  __retval987 = ptr1019;
  int* t1020 = __retval987;
  return t1020;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v1021, int* v1022, int* v1023, struct std__allocator_int_* v1024) {
bb1025:
  int* __first1026;
  int* __last1027;
  int* __result1028;
  struct std__allocator_int_* __alloc1029;
  int* __retval1030;
  __first1026 = v1021;
  __last1027 = v1022;
  __result1028 = v1023;
  __alloc1029 = v1024;
  int* t1031 = __first1026;
  int* r1032 = int__std____niter_base_int__(t1031);
  int* t1033 = __last1027;
  int* r1034 = int__std____niter_base_int__(t1033);
  int* t1035 = __result1028;
  int* r1036 = int__std____niter_base_int__(t1035);
  struct std__allocator_int_* t1037 = __alloc1029;
  int* r1038 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r1032, r1034, r1036, t1037);
  __retval1030 = r1038;
  int* t1039 = __retval1030;
  return t1039;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v1040, int* v1041, int* v1042, struct std__allocator_int_* v1043) {
bb1044:
  int* __first1045;
  int* __last1046;
  int* __result1047;
  struct std__allocator_int_* __alloc1048;
  int* __retval1049;
  __first1045 = v1040;
  __last1046 = v1041;
  __result1047 = v1042;
  __alloc1048 = v1043;
  int* t1050 = __first1045;
  int* t1051 = __last1046;
  int* t1052 = __result1047;
  struct std__allocator_int_* t1053 = __alloc1048;
  int* r1054 = int__std____relocate_a_int___int___std__allocator_int___(t1050, t1051, t1052, t1053);
  __retval1049 = r1054;
  int* t1055 = __retval1049;
  return t1055;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v1056) {
bb1057:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this1058;
  this1058 = v1056;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t1059 = this1058;
    int* t1060 = t1059->_M_storage;
    _Bool cast1061 = (_Bool)t1060;
    if (cast1061) {
      struct std___Vector_base_int__std__allocator_int__* t1062 = t1059->_M_vect;
      int* t1063 = t1059->_M_storage;
      unsigned long t1064 = t1059->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t1062, t1063, t1064);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJRKiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* v1065, int* v1066) {
bb1067:
  struct std__vector_int__std__allocator_int__* this1068;
  int* __args1069;
  unsigned long __len1070;
  int* __old_start1071;
  int* __old_finish1072;
  unsigned long __elems1073;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01074;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11075;
  int* __new_start1076;
  int* __new_finish1077;
  this1068 = v1065;
  __args1069 = v1066;
  struct std__vector_int__std__allocator_int__* t1078 = this1068;
  unsigned long c1079 = 1;
  char* cast1080 = (char*)&(_str_10);
  unsigned long r1081 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t1078, c1079, cast1080);
  __len1070 = r1081;
    unsigned long t1082 = __len1070;
    unsigned long c1083 = 0;
    _Bool c1084 = ((t1082 <= c1083)) ? 1 : 0;
    if (c1084) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base1085 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1078 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1086 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1085->_M_impl) + 0);
  int* t1087 = base1086->_M_start;
  __old_start1071 = t1087;
  struct std___Vector_base_int__std__allocator_int__* base1088 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1078 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1089 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1088->_M_impl) + 0);
  int* t1090 = base1089->_M_finish;
  __old_finish1072 = t1090;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1091 = std__vector_int__std__allocator_int_____end(t1078);
  ref_tmp01074 = r1091;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1092 = std__vector_int__std__allocator_int_____begin(t1078);
  ref_tmp11075 = r1092;
  long r1093 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp01074, &ref_tmp11075);
  unsigned long cast1094 = (unsigned long)r1093;
  __elems1073 = cast1094;
  struct std___Vector_base_int__std__allocator_int__* base1095 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1078 + 0);
  unsigned long t1096 = __len1070;
  int* r1097 = std___Vector_base_int__std__allocator_int______M_allocate(base1095, t1096);
  __new_start1076 = r1097;
  int* t1098 = __new_start1076;
  __new_finish1077 = t1098;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard1099;
    int* ref_tmp21100;
    int* t1101 = __new_start1076;
    unsigned long t1102 = __len1070;
    struct std___Vector_base_int__std__allocator_int__* base1103 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1078 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard1099, t1101, t1102, base1103);
      struct std___Vector_base_int__std__allocator_int__* base1104 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1078 + 0);
      struct std__allocator_int_* base1105 = (struct std__allocator_int_*)((char *)&(base1104->_M_impl) + 0);
      int* t1106 = __new_start1076;
      unsigned long t1107 = __elems1073;
      int* ptr1108 = &(t1106)[t1107];
      ref_tmp21100 = ptr1108;
      int* r1109 = auto_std____to_address_int__(&ref_tmp21100);
      int* t1110 = __args1069;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base1105, r1109, t1110);
        int* t1111 = __old_start1071;
        int* t1112 = __old_finish1072;
        int* t1113 = __new_start1076;
        struct std___Vector_base_int__std__allocator_int__* base1114 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1078 + 0);
        struct std__allocator_int_* r1115 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1114);
        int* r1116 = std__vector_int__std__allocator_int______S_relocate(t1111, t1112, t1113, r1115);
        __new_finish1077 = r1116;
        int* t1117 = __new_finish1077;
        int c1118 = 1;
        int* ptr1119 = &(t1117)[c1118];
        __new_finish1077 = ptr1119;
      int* t1120 = __old_start1071;
      __guard1099._M_storage = t1120;
      struct std___Vector_base_int__std__allocator_int__* base1121 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1078 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1122 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1121->_M_impl) + 0);
      int* t1123 = base1122->_M_end_of_storage;
      int* t1124 = __old_start1071;
      long diff1125 = t1123 - t1124;
      unsigned long cast1126 = (unsigned long)diff1125;
      __guard1099._M_len = cast1126;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard1099);
    }
  int* t1127 = __new_start1076;
  struct std___Vector_base_int__std__allocator_int__* base1128 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1078 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1129 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1128->_M_impl) + 0);
  base1129->_M_start = t1127;
  int* t1130 = __new_finish1077;
  struct std___Vector_base_int__std__allocator_int__* base1131 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1078 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1132 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1131->_M_impl) + 0);
  base1132->_M_finish = t1130;
  int* t1133 = __new_start1076;
  unsigned long t1134 = __len1070;
  int* ptr1135 = &(t1133)[t1134];
  struct std___Vector_base_int__std__allocator_int__* base1136 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1078 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1137 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1136->_M_impl) + 0);
  base1137->_M_end_of_storage = ptr1135;
  return;
}

// function: _ZNSt6vectorIiSaIiEE9push_backERKi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v1138, int* v1139) {
bb1140:
  struct std__vector_int__std__allocator_int__* this1141;
  int* __x1142;
  this1141 = v1138;
  __x1142 = v1139;
  struct std__vector_int__std__allocator_int__* t1143 = this1141;
    struct std___Vector_base_int__std__allocator_int__* base1144 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1143 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1145 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1144->_M_impl) + 0);
    int* t1146 = base1145->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1147 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1143 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1148 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1147->_M_impl) + 0);
    int* t1149 = base1148->_M_end_of_storage;
    _Bool c1150 = ((t1146 != t1149)) ? 1 : 0;
    if (c1150) {
      struct std___Vector_base_int__std__allocator_int__* base1151 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1143 + 0);
      struct std__allocator_int_* base1152 = (struct std__allocator_int_*)((char *)&(base1151->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base1153 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1143 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1154 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1153->_M_impl) + 0);
      int* t1155 = base1154->_M_finish;
      int* t1156 = __x1142;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base1152, t1155, t1156);
      struct std___Vector_base_int__std__allocator_int__* base1157 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1143 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1158 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1157->_M_impl) + 0);
      int* t1159 = base1158->_M_finish;
      int c1160 = 1;
      int* ptr1161 = &(t1159)[c1160];
      base1158->_M_finish = ptr1161;
    } else {
      int* t1162 = __x1142;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(t1143, t1162);
    }
  return;
}

// function: _ZSt9push_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_
void void_std__push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1163, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1164) {
bb1165:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1166;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1167;
  struct __gnu_cxx____ops___Iter_less_val __comp1168;
  int __value1169;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01170;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01171;
  __first1166 = v1163;
  __last1167 = v1164;
  long c1172 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1173 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__last1167, c1172);
  ref_tmp01170 = r1173;
  int* r1174 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp01170);
  int t1175 = *r1174;
  __value1169 = t1175;
  agg_tmp01171 = __first1166; // copy
  long r1176 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last1167, &__first1166);
  long c1177 = 1;
  long b1178 = r1176 - c1177;
  long c1179 = 0;
  int t1180 = __value1169;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1181 = agg_tmp01171;
  void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_val_(t1181, b1178, c1179, t1180, &__comp1168);
  return;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v1182) {
bb1183:
  struct std__vector_int__std__allocator_int__* this1184;
  unsigned long __retval1185;
  long __dif1186;
  this1184 = v1182;
  struct std__vector_int__std__allocator_int__* t1187 = this1184;
  struct std___Vector_base_int__std__allocator_int__* base1188 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1187 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1189 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1188->_M_impl) + 0);
  int* t1190 = base1189->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base1191 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1187 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1192 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1191->_M_impl) + 0);
  int* t1193 = base1192->_M_start;
  long diff1194 = t1190 - t1193;
  __dif1186 = diff1194;
    long t1195 = __dif1186;
    long c1196 = 0;
    _Bool c1197 = ((t1195 < c1196)) ? 1 : 0;
    if (c1197) {
      __builtin_unreachable();
    }
  long t1198 = __dif1186;
  unsigned long cast1199 = (unsigned long)t1198;
  __retval1185 = cast1199;
  unsigned long t1200 = __retval1185;
  return t1200;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v1201, unsigned long v1202) {
bb1203:
  struct std__vector_int__std__allocator_int__* this1204;
  unsigned long __n1205;
  int* __retval1206;
  this1204 = v1201;
  __n1205 = v1202;
  struct std__vector_int__std__allocator_int__* t1207 = this1204;
    do {
          unsigned long t1208 = __n1205;
          unsigned long r1209 = std__vector_int__std__allocator_int_____size___const(t1207);
          _Bool c1210 = ((t1208 < r1209)) ? 1 : 0;
          _Bool u1211 = !c1210;
          if (u1211) {
            char* cast1212 = (char*)&(_str_11);
            int c1213 = 1263;
            char* cast1214 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast1215 = (char*)&(_str_12);
            std____glibcxx_assert_fail(cast1212, c1213, cast1214, cast1215);
          }
      _Bool c1216 = 0;
      if (!c1216) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base1217 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1207 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1218 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1217->_M_impl) + 0);
  int* t1219 = base1218->_M_start;
  unsigned long t1220 = __n1205;
  int* ptr1221 = &(t1219)[t1220];
  __retval1206 = ptr1221;
  int* t1222 = __retval1206;
  return t1222;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1223, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1224) {
bb1225:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs1226;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs1227;
  _Bool __retval1228;
  __lhs1226 = v1223;
  __rhs1227 = v1224;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1229 = __lhs1226;
  int** r1230 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1229);
  int* t1231 = *r1230;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1232 = __rhs1227;
  int** r1233 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1232);
  int* t1234 = *r1233;
  _Bool c1235 = ((t1231 == t1234)) ? 1 : 0;
  __retval1228 = c1235;
  _Bool t1236 = __retval1228;
  return t1236;
}

// function: _ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_
void void_std__pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1237, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1238) {
bb1239:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1240;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1241;
  __first1240 = v1237;
  __last1241 = v1238;
    do {
          _Bool r1242 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1240, &__last1241);
          if (r1242) {
            char* cast1243 = (char*)&(_str_13);
            int c1244 = 290;
            char* cast1245 = (char*)&(__PRETTY_FUNCTION____ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_);
            char* cast1246 = (char*)&(_str_14);
            std____glibcxx_assert_fail(cast1243, c1244, cast1245, cast1246);
          }
      _Bool c1247 = 0;
      if (!c1247) break;
    } while (1);
    long r1248 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last1241, &__first1240);
    long c1249 = 1;
    _Bool c1250 = ((r1248 > c1249)) ? 1 : 0;
    if (c1250) {
      struct __gnu_cxx____ops___Iter_less_iter __comp1251;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01252;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11253;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21254;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1255 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__last1241);
      agg_tmp01252 = __first1240; // copy
      agg_tmp11253 = __last1241; // copy
      agg_tmp21254 = __last1241; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1256 = agg_tmp01252;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1257 = agg_tmp11253;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1258 = agg_tmp21254;
      void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t1256, t1257, t1258, &__comp1251);
    }
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1259, long v1260) {
bb1261:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1262;
  long __n1263;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1264;
  int* ref_tmp01265;
  this1262 = v1259;
  __n1263 = v1260;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1266 = this1262;
  int* t1267 = t1266->_M_current;
  long t1268 = __n1263;
  long u1269 = -t1268;
  int* ptr1270 = &(t1267)[u1269];
  ref_tmp01265 = ptr1270;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1264, &ref_tmp01265);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1271 = __retval1264;
  return t1271;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1272) {
bb1273:
  struct std__vector_int__std__allocator_int__* this1274;
  this1274 = v1272;
  struct std__vector_int__std__allocator_int__* t1275 = this1274;
    struct std___Vector_base_int__std__allocator_int__* base1276 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1275 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1277 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1276->_M_impl) + 0);
    int* t1278 = base1277->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1279 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1275 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1280 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1279->_M_impl) + 0);
    int* t1281 = base1280->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1282 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1275 + 0);
    struct std__allocator_int_* r1283 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1282);
    void_std___Destroy_int___int_(t1278, t1281, r1283);
  {
    struct std___Vector_base_int__std__allocator_int__* base1284 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1275 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1284);
  }
  return;
}

// function: main
int main() {
bb1285:
  int __retval1286;
  int SIZE1287;
  int a1288[10];
  struct std__vector_int__std__allocator_int__ v1289;
  struct std__allocator_int_ ref_tmp01290;
  struct std__vector_int__std__allocator_int__ v21291;
  struct std__ostream_iterator_int__char__std__char_traits_char__ output1292;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01293;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11294;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp21295;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp31296;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41297;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp51298;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp61299;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp71300;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp81301;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp91302;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp101303;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp111304;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp121305;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp131306;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp141307;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp151308;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp161309;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp171310;
  int c1311 = 0;
  __retval1286 = c1311;
  int c1312 = 10;
  SIZE1287 = c1312;
  // array copy
  __builtin_memcpy(a1288, __const_main_a, (unsigned long)10 * sizeof(__const_main_a[0]));
  int* cast1313 = (int*)&(a1288);
  int* cast1314 = (int*)&(a1288);
  int t1315 = SIZE1287;
  int* ptr1316 = &(cast1314)[t1315];
  std__allocator_int___allocator_2(&ref_tmp01290);
    std__vector_int__std__allocator_int_____vector_int___void_(&v1289, cast1313, ptr1316, &ref_tmp01290);
  {
    std__allocator_int____allocator(&ref_tmp01290);
  }
    std__vector_int__std__allocator_int_____vector(&v21291);
      char* cast1317 = (char*)&(_str);
      std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(&output1292, &_ZSt4cout, cast1317);
      char* cast1318 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* r1319 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1318);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1320 = std__vector_int__std__allocator_int_____begin(&v1289);
      agg_tmp01293 = r1320;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1321 = std__vector_int__std__allocator_int_____end(&v1289);
      agg_tmp11294 = r1321;
      std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp21295, &output1292);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1322 = agg_tmp01293;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1323 = agg_tmp11294;
      struct std__ostream_iterator_int__char__std__char_traits_char__ t1324 = agg_tmp21295;
      struct std__ostream_iterator_int__char__std__char_traits_char__ r1325 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t1322, t1323, t1324);
      agg_tmp31296 = r1325;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1326 = std__vector_int__std__allocator_int_____begin(&v1289);
      agg_tmp41297 = r1326;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1327 = std__vector_int__std__allocator_int_____end(&v1289);
      agg_tmp51298 = r1327;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1328 = agg_tmp41297;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1329 = agg_tmp51298;
      void_std__make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1328, t1329);
      char* cast1330 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* r1331 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1330);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1332 = std__vector_int__std__allocator_int_____begin(&v1289);
      agg_tmp61299 = r1332;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1333 = std__vector_int__std__allocator_int_____end(&v1289);
      agg_tmp71300 = r1333;
      std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp81301, &output1292);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1334 = agg_tmp61299;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1335 = agg_tmp71300;
      struct std__ostream_iterator_int__char__std__char_traits_char__ t1336 = agg_tmp81301;
      struct std__ostream_iterator_int__char__std__char_traits_char__ r1337 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t1334, t1335, t1336);
      agg_tmp91302 = r1337;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1338 = std__vector_int__std__allocator_int_____begin(&v1289);
      agg_tmp101303 = r1338;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1339 = std__vector_int__std__allocator_int_____end(&v1289);
      agg_tmp111304 = r1339;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1340 = agg_tmp101303;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1341 = agg_tmp111304;
      void_std__sort_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1340, t1341);
      char* cast1342 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* r1343 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1342);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1344 = std__vector_int__std__allocator_int_____begin(&v1289);
      agg_tmp121305 = r1344;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1345 = std__vector_int__std__allocator_int_____end(&v1289);
      agg_tmp131306 = r1345;
      std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp141307, &output1292);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1346 = agg_tmp121305;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1347 = agg_tmp131306;
      struct std__ostream_iterator_int__char__std__char_traits_char__ t1348 = agg_tmp141307;
      struct std__ostream_iterator_int__char__std__char_traits_char__ r1349 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t1346, t1347, t1348);
      agg_tmp151308 = r1349;
      char* cast1350 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* r1351 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1350);
      int* cast1352 = (int*)&(a1288);
      int* cast1353 = (int*)&(a1288);
      int t1354 = SIZE1287;
      int* ptr1355 = &(cast1353)[t1354];
      std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp161309, &output1292);
      struct std__ostream_iterator_int__char__std__char_traits_char__ t1356 = agg_tmp161309;
      struct std__ostream_iterator_int__char__std__char_traits_char__ r1357 = std__ostream_iterator_int__char__std__char_traits_char____std__copy_int___std__ostream_iterator_int__char__std__char_traits_char_____(cast1352, ptr1355, t1356);
      agg_tmp171310 = r1357;
      struct std__basic_ostream_char__std__char_traits_char__* r1358 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int i1359;
        int c1360 = 0;
        i1359 = c1360;
        while (1) {
          int t1362 = i1359;
          int t1363 = SIZE1287;
          _Bool c1364 = ((t1362 < t1363)) ? 1 : 0;
          if (!c1364) break;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp181365;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp191366;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp201367;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp211368;
            struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp221369;
            struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp231370;
            int t1371 = i1359;
            long cast1372 = (long)t1371;
            std__vector_int__std__allocator_int_____push_back(&v21291, &a1288[cast1372]);
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1373 = std__vector_int__std__allocator_int_____begin(&v21291);
            agg_tmp181365 = r1373;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1374 = std__vector_int__std__allocator_int_____end(&v21291);
            agg_tmp191366 = r1374;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1375 = agg_tmp181365;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1376 = agg_tmp191366;
            void_std__push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1375, t1376);
            char* cast1377 = (char*)&(_str_5);
            struct std__basic_ostream_char__std__char_traits_char__* r1378 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1377);
            int t1379 = i1359;
            struct std__basic_ostream_char__std__char_traits_char__* r1380 = std__ostream__operator__(r1378, t1379);
            char* cast1381 = (char*)&(_str_6);
            struct std__basic_ostream_char__std__char_traits_char__* r1382 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1380, cast1381);
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1383 = std__vector_int__std__allocator_int_____begin(&v21291);
            agg_tmp201367 = r1383;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1384 = std__vector_int__std__allocator_int_____end(&v21291);
            agg_tmp211368 = r1384;
            std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp221369, &output1292);
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1385 = agg_tmp201367;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1386 = agg_tmp211368;
            struct std__ostream_iterator_int__char__std__char_traits_char__ t1387 = agg_tmp221369;
            struct std__ostream_iterator_int__char__std__char_traits_char__ r1388 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t1385, t1386, t1387);
            agg_tmp231370 = r1388;
        for_step1361: ;
          int t1389 = i1359;
          int u1390 = t1389 + 1;
          i1359 = u1390;
        }
      struct std__basic_ostream_char__std__char_traits_char__* r1391 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int j1392;
        int c1393 = 0;
        j1392 = c1393;
        while (1) {
          int t1395 = j1392;
          unsigned long cast1396 = (unsigned long)t1395;
          unsigned long r1397 = std__vector_int__std__allocator_int_____size___const(&v21291);
          _Bool c1398 = ((cast1396 < r1397)) ? 1 : 0;
          if (!c1398) break;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp241399;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp251400;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11401;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp261402;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp271403;
            struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp281404;
            struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp291405;
            char* cast1406 = (char*)&(_str_7);
            struct std__basic_ostream_char__std__char_traits_char__* r1407 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1406);
            unsigned long c1408 = 0;
            int* r1409 = std__vector_int__std__allocator_int_____operator__(&v21291, c1408);
            int t1410 = *r1409;
            struct std__basic_ostream_char__std__char_traits_char__* r1411 = std__ostream__operator__(r1407, t1410);
            char* cast1412 = (char*)&(_str_8);
            struct std__basic_ostream_char__std__char_traits_char__* r1413 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1411, cast1412);
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1414 = std__vector_int__std__allocator_int_____begin(&v21291);
            agg_tmp241399 = r1414;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1415 = std__vector_int__std__allocator_int_____end(&v21291);
            ref_tmp11401 = r1415;
            int t1416 = j1392;
            long cast1417 = (long)t1416;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1418 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp11401, cast1417);
            agg_tmp251400 = r1418;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1419 = agg_tmp241399;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1420 = agg_tmp251400;
            void_std__pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1419, t1420);
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1421 = std__vector_int__std__allocator_int_____begin(&v21291);
            agg_tmp261402 = r1421;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1422 = std__vector_int__std__allocator_int_____end(&v21291);
            agg_tmp271403 = r1422;
            std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp281404, &output1292);
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1423 = agg_tmp261402;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1424 = agg_tmp271403;
            struct std__ostream_iterator_int__char__std__char_traits_char__ t1425 = agg_tmp281404;
            struct std__ostream_iterator_int__char__std__char_traits_char__ r1426 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t1423, t1424, t1425);
            agg_tmp291405 = r1426;
        for_step1394: ;
          int t1427 = j1392;
          int u1428 = t1427 + 1;
          j1392 = u1428;
        }
      struct std__basic_ostream_char__std__char_traits_char__* r1429 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int c1430 = 0;
      __retval1286 = c1430;
      int t1431 = __retval1286;
      int ret_val1432 = t1431;
      {
        std__vector_int__std__allocator_int______vector(&v21291);
      }
      {
        std__vector_int__std__allocator_int______vector(&v1289);
      }
      return ret_val1432;
  int t1433 = __retval1286;
  return t1433;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v1434) {
bb1435:
  struct std____new_allocator_int_* this1436;
  this1436 = v1434;
  struct std____new_allocator_int_* t1437 = this1436;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1438, struct std__allocator_int_* v1439) {
bb1440:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1441;
  struct std__allocator_int_* __a1442;
  this1441 = v1438;
  __a1442 = v1439;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1443 = this1441;
  struct std__allocator_int_* base1444 = (struct std__allocator_int_*)((char *)t1443 + 0);
  struct std__allocator_int_* t1445 = __a1442;
  std__allocator_int___allocator(base1444, t1445);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1446 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1443 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1446);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1447) {
bb1448:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1449;
  this1449 = v1447;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1450 = this1449;
  {
    struct std__allocator_int_* base1451 = (struct std__allocator_int_*)((char *)t1450 + 0);
    std__allocator_int____allocator(base1451);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1452, struct std__allocator_int_* v1453) {
bb1454:
  struct std___Vector_base_int__std__allocator_int__* this1455;
  struct std__allocator_int_* __a1456;
  this1455 = v1452;
  __a1456 = v1453;
  struct std___Vector_base_int__std__allocator_int__* t1457 = this1455;
  struct std__allocator_int_* t1458 = __a1456;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1457->_M_impl, t1458);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v1459, int** v1460, int* v1461) {
bb1462:
  struct std__ranges____distance_fn* this1463;
  int** __first1464;
  int* __last1465;
  long __retval1466;
  this1463 = v1459;
  __first1464 = v1460;
  __last1465 = v1461;
  struct std__ranges____distance_fn* t1467 = this1463;
  int* t1468 = __last1465;
  int** t1469 = __first1464;
  int* t1470 = *t1469;
  long diff1471 = t1468 - t1470;
  __retval1466 = diff1471;
  long t1472 = __retval1466;
  return t1472;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1473:
  _Bool __retval1474;
    _Bool c1475 = 0;
    __retval1474 = c1475;
    _Bool t1476 = __retval1474;
    return t1476;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1477) {
bb1478:
  struct std____new_allocator_int_* this1479;
  unsigned long __retval1480;
  this1479 = v1477;
  struct std____new_allocator_int_* t1481 = this1479;
  unsigned long c1482 = 9223372036854775807;
  unsigned long c1483 = 4;
  unsigned long b1484 = c1482 / c1483;
  __retval1480 = b1484;
  unsigned long t1485 = __retval1480;
  return t1485;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1486, unsigned long v1487, void* v1488) {
bb1489:
  struct std____new_allocator_int_* this1490;
  unsigned long __n1491;
  void* unnamed1492;
  int* __retval1493;
  this1490 = v1486;
  __n1491 = v1487;
  unnamed1492 = v1488;
  struct std____new_allocator_int_* t1494 = this1490;
    unsigned long t1495 = __n1491;
    unsigned long r1496 = std____new_allocator_int____M_max_size___const(t1494);
    _Bool c1497 = ((t1495 > r1496)) ? 1 : 0;
    if (c1497) {
        unsigned long t1498 = __n1491;
        unsigned long c1499 = -1;
        unsigned long c1500 = 4;
        unsigned long b1501 = c1499 / c1500;
        _Bool c1502 = ((t1498 > b1501)) ? 1 : 0;
        if (c1502) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1503 = 4;
    unsigned long c1504 = 16;
    _Bool c1505 = ((c1503 > c1504)) ? 1 : 0;
    if (c1505) {
      unsigned long __al1506;
      unsigned long c1507 = 4;
      __al1506 = c1507;
      unsigned long t1508 = __n1491;
      unsigned long c1509 = 4;
      unsigned long b1510 = t1508 * c1509;
      unsigned long t1511 = __al1506;
      void* r1512 = operator_new_2(b1510, t1511);
      int* cast1513 = (int*)r1512;
      __retval1493 = cast1513;
      int* t1514 = __retval1493;
      return t1514;
    }
  unsigned long t1515 = __n1491;
  unsigned long c1516 = 4;
  unsigned long b1517 = t1515 * c1516;
  void* r1518 = operator_new(b1517);
  int* cast1519 = (int*)r1518;
  __retval1493 = cast1519;
  int* t1520 = __retval1493;
  return t1520;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1521, unsigned long v1522) {
bb1523:
  struct std__allocator_int_* this1524;
  unsigned long __n1525;
  int* __retval1526;
  this1524 = v1521;
  __n1525 = v1522;
  struct std__allocator_int_* t1527 = this1524;
    _Bool r1528 = std____is_constant_evaluated();
    if (r1528) {
        unsigned long t1529 = __n1525;
        unsigned long c1530 = 4;
        unsigned long ovr1531;
        _Bool ovf1532 = __builtin_mul_overflow(t1529, c1530, &ovr1531);
        __n1525 = ovr1531;
        if (ovf1532) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1533 = __n1525;
      void* r1534 = operator_new(t1533);
      int* cast1535 = (int*)r1534;
      __retval1526 = cast1535;
      int* t1536 = __retval1526;
      return t1536;
    }
  struct std____new_allocator_int_* base1537 = (struct std____new_allocator_int_*)((char *)t1527 + 0);
  unsigned long t1538 = __n1525;
  void* c1539 = ((void*)0);
  int* r1540 = std____new_allocator_int___allocate(base1537, t1538, c1539);
  __retval1526 = r1540;
  int* t1541 = __retval1526;
  return t1541;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1542, unsigned long v1543) {
bb1544:
  struct std__allocator_int_* __a1545;
  unsigned long __n1546;
  int* __retval1547;
  __a1545 = v1542;
  __n1546 = v1543;
  struct std__allocator_int_* t1548 = __a1545;
  unsigned long t1549 = __n1546;
  int* r1550 = std__allocator_int___allocate(t1548, t1549);
  __retval1547 = r1550;
  int* t1551 = __retval1547;
  return t1551;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1552, unsigned long v1553) {
bb1554:
  struct std___Vector_base_int__std__allocator_int__* this1555;
  unsigned long __n1556;
  int* __retval1557;
  this1555 = v1552;
  __n1556 = v1553;
  struct std___Vector_base_int__std__allocator_int__* t1558 = this1555;
  unsigned long t1559 = __n1556;
  unsigned long c1560 = 0;
  _Bool c1561 = ((t1559 != c1560)) ? 1 : 0;
  int* ternary1562;
  if (c1561) {
    struct std__allocator_int_* base1563 = (struct std__allocator_int_*)((char *)&(t1558->_M_impl) + 0);
    unsigned long t1564 = __n1556;
    int* r1565 = std__allocator_traits_std__allocator_int_____allocate(base1563, t1564);
    ternary1562 = (int*)r1565;
  } else {
    int* c1566 = ((void*)0);
    ternary1562 = (int*)c1566;
  }
  __retval1557 = ternary1562;
  int* t1567 = __retval1557;
  return t1567;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1568, unsigned long* v1569) {
bb1570:
  unsigned long* __a1571;
  unsigned long* __b1572;
  unsigned long* __retval1573;
  __a1571 = v1568;
  __b1572 = v1569;
    unsigned long* t1574 = __b1572;
    unsigned long t1575 = *t1574;
    unsigned long* t1576 = __a1571;
    unsigned long t1577 = *t1576;
    _Bool c1578 = ((t1575 < t1577)) ? 1 : 0;
    if (c1578) {
      unsigned long* t1579 = __b1572;
      __retval1573 = t1579;
      unsigned long* t1580 = __retval1573;
      return t1580;
    }
  unsigned long* t1581 = __a1571;
  __retval1573 = t1581;
  unsigned long* t1582 = __retval1573;
  return t1582;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1583) {
bb1584:
  struct std__allocator_int_* __a1585;
  unsigned long __retval1586;
  unsigned long __diffmax1587;
  unsigned long __allocmax1588;
  __a1585 = v1583;
  unsigned long c1589 = 2305843009213693951;
  __diffmax1587 = c1589;
  unsigned long c1590 = 4611686018427387903;
  __allocmax1588 = c1590;
  unsigned long* r1591 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1587, &__allocmax1588);
  unsigned long t1592 = *r1591;
  __retval1586 = t1592;
  unsigned long t1593 = __retval1586;
  return t1593;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1594, struct std__allocator_int_* v1595) {
bb1596:
  struct std__allocator_int_* this1597;
  struct std__allocator_int_* __a1598;
  this1597 = v1594;
  __a1598 = v1595;
  struct std__allocator_int_* t1599 = this1597;
  struct std____new_allocator_int_* base1600 = (struct std____new_allocator_int_*)((char *)t1599 + 0);
  struct std__allocator_int_* t1601 = __a1598;
  struct std____new_allocator_int_* base1602 = (struct std____new_allocator_int_*)((char *)t1601 + 0);
  std____new_allocator_int_____new_allocator(base1600, base1602);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1603, struct std__allocator_int_* v1604) {
bb1605:
  unsigned long __n1606;
  struct std__allocator_int_* __a1607;
  unsigned long __retval1608;
  __n1606 = v1603;
  __a1607 = v1604;
    struct std__allocator_int_ ref_tmp01609;
    _Bool tmp_exprcleanup1610;
    unsigned long t1611 = __n1606;
    struct std__allocator_int_* t1612 = __a1607;
    std__allocator_int___allocator(&ref_tmp01609, t1612);
      unsigned long r1613 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01609);
      _Bool c1614 = ((t1611 > r1613)) ? 1 : 0;
      tmp_exprcleanup1610 = c1614;
    {
      std__allocator_int____allocator(&ref_tmp01609);
    }
    _Bool t1615 = tmp_exprcleanup1610;
    if (t1615) {
      char* cast1616 = (char*)&(_str_9);
      std____throw_length_error(cast1616);
    }
  unsigned long t1617 = __n1606;
  __retval1608 = t1617;
  unsigned long t1618 = __retval1608;
  return t1618;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1619) {
bb1620:
  struct std___Vector_base_int__std__allocator_int__* this1621;
  struct std__allocator_int_* __retval1622;
  this1621 = v1619;
  struct std___Vector_base_int__std__allocator_int__* t1623 = this1621;
  struct std__allocator_int_* base1624 = (struct std__allocator_int_*)((char *)&(t1623->_M_impl) + 0);
  __retval1622 = base1624;
  struct std__allocator_int_* t1625 = __retval1622;
  return t1625;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1626:
  _Bool __retval1627;
    _Bool c1628 = 0;
    __retval1627 = c1628;
    _Bool t1629 = __retval1627;
    return t1629;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1630, int** v1631) {
bb1632:
  struct std___UninitDestroyGuard_int____void_* this1633;
  int** __first1634;
  this1633 = v1630;
  __first1634 = v1631;
  struct std___UninitDestroyGuard_int____void_* t1635 = this1633;
  int** t1636 = __first1634;
  int* t1637 = *t1636;
  t1635->_M_first = t1637;
  int** t1638 = __first1634;
  t1635->_M_cur = t1638;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1639, int* v1640) {
bb1641:
  int* __location1642;
  int* __args1643;
  int* __retval1644;
  void* __loc1645;
  __location1642 = v1639;
  __args1643 = v1640;
  int* t1646 = __location1642;
  void* cast1647 = (void*)t1646;
  __loc1645 = cast1647;
    void* t1648 = __loc1645;
    int* cast1649 = (int*)t1648;
    int* t1650 = __args1643;
    int t1651 = *t1650;
    *cast1649 = t1651;
    __retval1644 = cast1649;
    int* t1652 = __retval1644;
    return t1652;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v1653, int* v1654) {
bb1655:
  int* __p1656;
  int* __args1657;
  __p1656 = v1653;
  __args1657 = v1654;
    _Bool r1658 = std____is_constant_evaluated();
    if (r1658) {
      int* t1659 = __p1656;
      int* t1660 = __args1657;
      int* r1661 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1659, t1660);
      return;
    }
  int* t1662 = __p1656;
  void* cast1663 = (void*)t1662;
  int* cast1664 = (int*)cast1663;
  int* t1665 = __args1657;
  int t1666 = *t1665;
  *cast1664 = t1666;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1667) {
bb1668:
  struct std___UninitDestroyGuard_int____void_* this1669;
  this1669 = v1667;
  struct std___UninitDestroyGuard_int____void_* t1670 = this1669;
  int** c1671 = ((void*)0);
  t1670->_M_cur = c1671;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1672) {
bb1673:
  struct std___UninitDestroyGuard_int____void_* this1674;
  this1674 = v1672;
  struct std___UninitDestroyGuard_int____void_* t1675 = this1674;
    int** t1676 = t1675->_M_cur;
    int** c1677 = ((void*)0);
    _Bool c1678 = ((t1676 != c1677)) ? 1 : 0;
    if (c1678) {
      int* t1679 = t1675->_M_first;
      int** t1680 = t1675->_M_cur;
      int* t1681 = *t1680;
      void_std___Destroy_int__(t1679, t1681);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v1682, int* v1683, int* v1684) {
bb1685:
  int* __first1686;
  int* __last1687;
  int* __result1688;
  int* __retval1689;
  struct std___UninitDestroyGuard_int____void_ __guard1690;
  __first1686 = v1682;
  __last1687 = v1683;
  __result1688 = v1684;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1690, &__result1688);
      while (1) {
        int* t1692 = __first1686;
        int* t1693 = __last1687;
        _Bool c1694 = ((t1692 != t1693)) ? 1 : 0;
        if (!c1694) break;
        int* t1695 = __result1688;
        int* t1696 = __first1686;
        void_std___Construct_int__int__(t1695, t1696);
      for_step1691: ;
        int* t1697 = __first1686;
        int c1698 = 1;
        int* ptr1699 = &(t1697)[c1698];
        __first1686 = ptr1699;
        int* t1700 = __result1688;
        int c1701 = 1;
        int* ptr1702 = &(t1700)[c1701];
        __result1688 = ptr1702;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1690);
    int* t1703 = __result1688;
    __retval1689 = t1703;
    int* t1704 = __retval1689;
    int* ret_val1705 = t1704;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1690);
    }
    return ret_val1705;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v1706) {
bb1707:
  int* __it1708;
  int* __retval1709;
  __it1708 = v1706;
  int* t1710 = __it1708;
  __retval1709 = t1710;
  int* t1711 = __retval1709;
  return t1711;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v1712, int* v1713, int* v1714) {
bb1715:
  int* __first1716;
  int* __last1717;
  int* __result1718;
  int* __retval1719;
  __first1716 = v1712;
  __last1717 = v1713;
  __result1718 = v1714;
      long __n1720;
      int* t1721 = __last1717;
      int* t1722 = __first1716;
      long diff1723 = t1721 - t1722;
      __n1720 = diff1723;
        long t1724 = __n1720;
        long c1725 = 0;
        _Bool c1726 = ((t1724 > c1725)) ? 1 : 0;
        if (c1726) {
          int* t1727 = __result1718;
          int* r1728 = int__std____niter_base_int__(t1727);
          void* cast1729 = (void*)r1728;
          int* t1730 = __first1716;
          int* r1731 = int__std____niter_base_int__(t1730);
          void* cast1732 = (void*)r1731;
          long t1733 = __n1720;
          unsigned long cast1734 = (unsigned long)t1733;
          unsigned long c1735 = 4;
          unsigned long b1736 = cast1734 * c1735;
          void* r1737 = memcpy(cast1729, cast1732, b1736);
          long t1738 = __n1720;
          int* t1739 = __result1718;
          int* ptr1740 = &(t1739)[t1738];
          __result1718 = ptr1740;
        }
      int* t1741 = __result1718;
      __retval1719 = t1741;
      int* t1742 = __retval1719;
      return t1742;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v1743, int* v1744, int* v1745, struct std__allocator_int_* v1746) {
bb1747:
  int* __first1748;
  int* __last1749;
  int* __result1750;
  struct std__allocator_int_* unnamed1751;
  int* __retval1752;
  __first1748 = v1743;
  __last1749 = v1744;
  __result1750 = v1745;
  unnamed1751 = v1746;
    _Bool r1753 = std__is_constant_evaluated();
    if (r1753) {
      int* t1754 = __first1748;
      int* t1755 = __last1749;
      int* t1756 = __result1750;
      int* r1757 = int__std____do_uninit_copy_int___int___int__(t1754, t1755, t1756);
      __retval1752 = r1757;
      int* t1758 = __retval1752;
      return t1758;
    }
    int* t1759 = __first1748;
    int* t1760 = __last1749;
    int* t1761 = __result1750;
    int* r1762 = int__std__uninitialized_copy_int___int__(t1759, t1760, t1761);
    __retval1752 = r1762;
    int* t1763 = __retval1752;
    return t1763;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v1764, int* v1765, int* v1766, unsigned long v1767) {
bb1768:
  struct std__vector_int__std__allocator_int__* this1769;
  int* __first1770;
  int* __last1771;
  unsigned long __n1772;
  int* __start1773;
  this1769 = v1764;
  __first1770 = v1765;
  __last1771 = v1766;
  __n1772 = v1767;
  struct std__vector_int__std__allocator_int__* t1774 = this1769;
  struct std___Vector_base_int__std__allocator_int__* base1775 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1774 + 0);
  unsigned long t1776 = __n1772;
  struct std___Vector_base_int__std__allocator_int__* base1777 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1774 + 0);
  struct std__allocator_int_* r1778 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1777);
  unsigned long r1779 = std__vector_int__std__allocator_int______S_check_init_len(t1776, r1778);
  int* r1780 = std___Vector_base_int__std__allocator_int______M_allocate(base1775, r1779);
  __start1773 = r1780;
  int* t1781 = __start1773;
  struct std___Vector_base_int__std__allocator_int__* base1782 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1774 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1783 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1782->_M_impl) + 0);
  base1783->_M_finish = t1781;
  struct std___Vector_base_int__std__allocator_int__* base1784 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1774 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1785 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1784->_M_impl) + 0);
  base1785->_M_start = t1781;
  int* t1786 = __start1773;
  unsigned long t1787 = __n1772;
  int* ptr1788 = &(t1786)[t1787];
  struct std___Vector_base_int__std__allocator_int__* base1789 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1774 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1790 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1789->_M_impl) + 0);
  base1790->_M_end_of_storage = ptr1788;
  int* t1791 = __first1770;
  int* t1792 = __last1771;
  int* t1793 = __start1773;
  struct std___Vector_base_int__std__allocator_int__* base1794 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1774 + 0);
  struct std__allocator_int_* r1795 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1794);
  int* r1796 = int__std____uninitialized_copy_a_int___int___int___int_(t1791, t1792, t1793, r1795);
  struct std___Vector_base_int__std__allocator_int__* base1797 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1774 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1798 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1797->_M_impl) + 0);
  base1798->_M_finish = r1796;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1799, int* v1800, unsigned long v1801) {
bb1802:
  struct std____new_allocator_int_* this1803;
  int* __p1804;
  unsigned long __n1805;
  this1803 = v1799;
  __p1804 = v1800;
  __n1805 = v1801;
  struct std____new_allocator_int_* t1806 = this1803;
    unsigned long c1807 = 4;
    unsigned long c1808 = 16;
    _Bool c1809 = ((c1807 > c1808)) ? 1 : 0;
    if (c1809) {
      int* t1810 = __p1804;
      void* cast1811 = (void*)t1810;
      unsigned long t1812 = __n1805;
      unsigned long c1813 = 4;
      unsigned long b1814 = t1812 * c1813;
      unsigned long c1815 = 4;
      operator_delete_3(cast1811, b1814, c1815);
      return;
    }
  int* t1816 = __p1804;
  void* cast1817 = (void*)t1816;
  unsigned long t1818 = __n1805;
  unsigned long c1819 = 4;
  unsigned long b1820 = t1818 * c1819;
  operator_delete_2(cast1817, b1820);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1821, int* v1822, unsigned long v1823) {
bb1824:
  struct std__allocator_int_* this1825;
  int* __p1826;
  unsigned long __n1827;
  this1825 = v1821;
  __p1826 = v1822;
  __n1827 = v1823;
  struct std__allocator_int_* t1828 = this1825;
    _Bool r1829 = std____is_constant_evaluated();
    if (r1829) {
      int* t1830 = __p1826;
      void* cast1831 = (void*)t1830;
      operator_delete(cast1831);
      return;
    }
  struct std____new_allocator_int_* base1832 = (struct std____new_allocator_int_*)((char *)t1828 + 0);
  int* t1833 = __p1826;
  unsigned long t1834 = __n1827;
  std____new_allocator_int___deallocate(base1832, t1833, t1834);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1835, int* v1836, unsigned long v1837) {
bb1838:
  struct std__allocator_int_* __a1839;
  int* __p1840;
  unsigned long __n1841;
  __a1839 = v1835;
  __p1840 = v1836;
  __n1841 = v1837;
  struct std__allocator_int_* t1842 = __a1839;
  int* t1843 = __p1840;
  unsigned long t1844 = __n1841;
  std__allocator_int___deallocate(t1842, t1843, t1844);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1845, int* v1846, unsigned long v1847) {
bb1848:
  struct std___Vector_base_int__std__allocator_int__* this1849;
  int* __p1850;
  unsigned long __n1851;
  this1849 = v1845;
  __p1850 = v1846;
  __n1851 = v1847;
  struct std___Vector_base_int__std__allocator_int__* t1852 = this1849;
    int* t1853 = __p1850;
    _Bool cast1854 = (_Bool)t1853;
    if (cast1854) {
      struct std__allocator_int_* base1855 = (struct std__allocator_int_*)((char *)&(t1852->_M_impl) + 0);
      int* t1856 = __p1850;
      unsigned long t1857 = __n1851;
      std__allocator_traits_std__allocator_int_____deallocate(base1855, t1856, t1857);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1858) {
bb1859:
  struct std___Vector_base_int__std__allocator_int__* this1860;
  this1860 = v1858;
  struct std___Vector_base_int__std__allocator_int__* t1861 = this1860;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1862 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1861->_M_impl) + 0);
    int* t1863 = base1862->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1864 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1861->_M_impl) + 0);
    int* t1865 = base1864->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1866 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1861->_M_impl) + 0);
    int* t1867 = base1866->_M_start;
    long diff1868 = t1865 - t1867;
    unsigned long cast1869 = (unsigned long)diff1868;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1861, t1863, cast1869);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1861->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1870, struct std____new_allocator_int_* v1871) {
bb1872:
  struct std____new_allocator_int_* this1873;
  struct std____new_allocator_int_* unnamed1874;
  this1873 = v1870;
  unnamed1874 = v1871;
  struct std____new_allocator_int_* t1875 = this1873;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1876) {
bb1877:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1878;
  this1878 = v1876;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1879 = this1878;
  int* c1880 = ((void*)0);
  t1879->_M_start = c1880;
  int* c1881 = ((void*)0);
  t1879->_M_finish = c1881;
  int* c1882 = ((void*)0);
  t1879->_M_end_of_storage = c1882;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1883) {
bb1884:
  int* __location1885;
  __location1885 = v1883;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1886, int* v1887) {
bb1888:
  int* __first1889;
  int* __last1890;
  __first1889 = v1886;
  __last1890 = v1887;
      _Bool r1891 = std____is_constant_evaluated();
      if (r1891) {
          while (1) {
            int* t1893 = __first1889;
            int* t1894 = __last1890;
            _Bool c1895 = ((t1893 != t1894)) ? 1 : 0;
            if (!c1895) break;
            int* t1896 = __first1889;
            void_std__destroy_at_int_(t1896);
          for_step1892: ;
            int* t1897 = __first1889;
            int c1898 = 1;
            int* ptr1899 = &(t1897)[c1898];
            __first1889 = ptr1899;
          }
      }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1900) {
bb1901:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1902;
  this1902 = v1900;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1903 = this1902;
  struct std__allocator_int_* base1904 = (struct std__allocator_int_*)((char *)t1903 + 0);
  std__allocator_int___allocator_2(base1904);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1905 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1903 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1905);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* v1906) {
bb1907:
  struct std___Vector_base_int__std__allocator_int__* this1908;
  this1908 = v1906;
  struct std___Vector_base_int__std__allocator_int__* t1909 = this1908;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1909->_M_impl);
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1910, int* v1911, struct std__allocator_int_* v1912) {
bb1913:
  int* __first1914;
  int* __last1915;
  struct std__allocator_int_* unnamed1916;
  __first1914 = v1910;
  __last1915 = v1911;
  unnamed1916 = v1912;
  int* t1917 = __first1914;
  int* t1918 = __last1915;
  void_std___Destroy_int__(t1917, t1918);
  return;
}

