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
struct __gnu_cxx____ops___Iter_equals_val_const_int_ { int* _M_value; };
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_pred_bool_____int__ { void* _M_pred; };
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
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_a2[10] = {100, 2, 8, 1, 50, 3, 8, 8, 9, 10};
int __const_main_a1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[33] = "Vector v before random_shuffle: ";
char _str_2[33] = "\nVector v after random_shuffle: ";
char _str_3[23] = "\n\nVector v2 contains: ";
char _str_4[33] = "\nNumber of elements matching 8: ";
char _str_5[37] = "\nNumber of elements greater than 9: ";
char _str_6[36] = "\n\nMinimum element in Vector v2 is: ";
char _str_7[35] = "\nMaximum element in Vector v2 is: ";
char _str_8[45] = "\n\nThe total of the elements in Vector v is: ";
char _str_9[47] = "\n\nThe square of every integer in Vector v is:\n";
char _str_10[45] = "\n\nThe cube of every integer in Vector v is:\n";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_11[49] = "cannot create std::vector larger than max_size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
extern int rand();
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* p0, int* p1);
void void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
void void_std__random_shuffle___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
_Bool bool___gnu_cxx____ops___Iter_equals_val_int_const___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_equals_val_const_int_* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____count_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_equals_val_const_int_ p2);
void __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(struct __gnu_cxx____ops___Iter_equals_val_const_int_* p0, int* p1);
struct __gnu_cxx____ops___Iter_equals_val_const_int_ __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(int* p0);
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__count___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
_Bool bool___gnu_cxx____ops___Iter_pred_bool_____int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_pred_bool_____int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____count_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool_____int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_pred_bool_____int__ p2);
void __gnu_cxx____ops___Iter_pred_bool_____int_____Iter_pred_bool____(struct __gnu_cxx____ops___Iter_pred_bool_____int__* p0, void* p1);
struct __gnu_cxx____ops___Iter_pred_bool_____int__ __gnu_cxx____ops___Iter_pred_bool_____int_____gnu_cxx____ops____pred_iter_bool_____int___bool____(void* p0);
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__count_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, void* p2);
_Bool greater9(int p0);
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_less_iter* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____min_element___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_less_iter p2);
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter();
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__min_element___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____max_element___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_less_iter p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__max_element___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
int int_std__accumulate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int p2);
void* void___std__for_each___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_____int___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, void* p2);
long std__ios_base__width___const(struct std__ios_base* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
void outputSquare(int p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__transform___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, void* p3);
int calculateCube(int p0);
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
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0);
void void_std___Construct_int_(int* p0);
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* p0, unsigned long p1);
void void_std____fill_a1_int___int_(int* p0, int* p1, int* p2);
void void_std____fill_a_int___int_(int* p0, int* p1, int* p2);
int* int__std____fill_n_a_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2, struct std__random_access_iterator_tag p3);
unsigned long std____size_to_integer(unsigned long p0);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
int* int__std__fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* p0, unsigned long p1);
int* int__std____uninitialized_default_n_int___unsigned_long_(int* p0, unsigned long p1);
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
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

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEC2ERSoPKc
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(struct std__ostream_iterator_int__char__std__char_traits_char__* v29, struct std__basic_ostream_char__std__char_traits_char__* v30, char* v31) {
bb32:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this33;
  struct std__basic_ostream_char__std__char_traits_char__* __s34;
  char* __c35;
  this33 = v29;
  __s34 = v30;
  __c35 = v31;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t36 = this33;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base37 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t36 + 0);
  struct std__basic_ostream_char__std__char_traits_char__* t38 = __s34;
  t36->_M_stream = t38;
  char* t39 = __c35;
  t36->_M_string = t39;
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v40, int v41) {
bb42:
  int __a43;
  int __b44;
  int __retval45;
  __a43 = v40;
  __b44 = v41;
  int t46 = __a43;
  int t47 = __b44;
  int b48 = t46 | t47;
  __retval45 = b48;
  int t49 = __retval45;
  return t49;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v50) {
bb51:
  struct std__basic_ios_char__std__char_traits_char__* this52;
  int __retval53;
  this52 = v50;
  struct std__basic_ios_char__std__char_traits_char__* t54 = this52;
  struct std__ios_base* base55 = (struct std__ios_base*)((char *)t54 + 0);
  int t56 = base55->_M_streambuf_state;
  __retval53 = t56;
  int t57 = __retval53;
  return t57;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v58, int v59) {
bb60:
  struct std__basic_ios_char__std__char_traits_char__* this61;
  int __state62;
  this61 = v58;
  __state62 = v59;
  struct std__basic_ios_char__std__char_traits_char__* t63 = this61;
  int r64 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t63);
  int t65 = __state62;
  int r66 = std__operator_(r64, t65);
  std__basic_ios_char__std__char_traits_char_____clear(t63, r66);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v67, char* v68) {
bb69:
  char* __c170;
  char* __c271;
  _Bool __retval72;
  __c170 = v67;
  __c271 = v68;
  char* t73 = __c170;
  char t74 = *t73;
  int cast75 = (int)t74;
  char* t76 = __c271;
  char t77 = *t76;
  int cast78 = (int)t77;
  _Bool c79 = ((cast75 == cast78)) ? 1 : 0;
  __retval72 = c79;
  _Bool t80 = __retval72;
  return t80;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v81) {
bb82:
  char* __p83;
  unsigned long __retval84;
  unsigned long __i85;
  __p83 = v81;
  unsigned long c86 = 0;
  __i85 = c86;
    char ref_tmp087;
    while (1) {
      unsigned long t88 = __i85;
      char* t89 = __p83;
      char* ptr90 = &(t89)[t88];
      char c91 = 0;
      ref_tmp087 = c91;
      _Bool r92 = __gnu_cxx__char_traits_char___eq(ptr90, &ref_tmp087);
      _Bool u93 = !r92;
      if (!u93) break;
      unsigned long t94 = __i85;
      unsigned long u95 = t94 + 1;
      __i85 = u95;
    }
  unsigned long t96 = __i85;
  __retval84 = t96;
  unsigned long t97 = __retval84;
  return t97;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v98) {
bb99:
  char* __s100;
  unsigned long __retval101;
  __s100 = v98;
    _Bool r102 = std____is_constant_evaluated();
    if (r102) {
      char* t103 = __s100;
      unsigned long r104 = __gnu_cxx__char_traits_char___length(t103);
      __retval101 = r104;
      unsigned long t105 = __retval101;
      return t105;
    }
  char* t106 = __s100;
  unsigned long r107 = strlen(t106);
  __retval101 = r107;
  unsigned long t108 = __retval101;
  return t108;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v109, char* v110) {
bb111:
  struct std__basic_ostream_char__std__char_traits_char__* __out112;
  char* __s113;
  struct std__basic_ostream_char__std__char_traits_char__* __retval114;
  __out112 = v109;
  __s113 = v110;
    char* t115 = __s113;
    _Bool cast116 = (_Bool)t115;
    _Bool u117 = !cast116;
    if (u117) {
      struct std__basic_ostream_char__std__char_traits_char__* t118 = __out112;
      void** v119 = (void**)t118;
      void* v120 = *((void**)v119);
      unsigned char* cast121 = (unsigned char*)v120;
      long c122 = -24;
      unsigned char* ptr123 = &(cast121)[c122];
      long* cast124 = (long*)ptr123;
      long t125 = *cast124;
      unsigned char* cast126 = (unsigned char*)t118;
      unsigned char* ptr127 = &(cast126)[t125];
      struct std__basic_ostream_char__std__char_traits_char__* cast128 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr127;
      struct std__basic_ios_char__std__char_traits_char__* cast129 = (struct std__basic_ios_char__std__char_traits_char__*)cast128;
      int t130 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast129, t130);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t131 = __out112;
      char* t132 = __s113;
      char* t133 = __s113;
      unsigned long r134 = std__char_traits_char___length(t133);
      long cast135 = (long)r134;
      struct std__basic_ostream_char__std__char_traits_char__* r136 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t131, t132, cast135);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t137 = __out112;
  __retval114 = t137;
  struct std__basic_ostream_char__std__char_traits_char__* t138 = __retval114;
  return t138;
}

// function: _ZSt12__niter_wrapISt16ostream_iteratorIicSt11char_traitsIcEEET_RKS4_S4_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__* v139, struct std__ostream_iterator_int__char__std__char_traits_char__ v140) {
bb141:
  struct std__ostream_iterator_int__char__std__char_traits_char__* unnamed142;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __res143;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval144;
  unnamed142 = v139;
  __res143 = v140;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval144, &__res143);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t145 = __retval144;
  return t145;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEdeEv
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__2(struct std__ostream_iterator_int__char__std__char_traits_char__* v146) {
bb147:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this148;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval149;
  this148 = v146;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t150 = this148;
  __retval149 = t150;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t151 = __retval149;
  return t151;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEaSERKi
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator_(struct std__ostream_iterator_int__char__std__char_traits_char__* v152, int* v153) {
bb154:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this155;
  int* __value156;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval157;
  this155 = v152;
  __value156 = v153;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t158 = this155;
  struct std__basic_ostream_char__std__char_traits_char__* t159 = t158->_M_stream;
  int* t160 = __value156;
  int t161 = *t160;
  struct std__basic_ostream_char__std__char_traits_char__* r162 = std__ostream__operator__(t159, t161);
    char* t163 = t158->_M_string;
    _Bool cast164 = (_Bool)t163;
    if (cast164) {
      struct std__basic_ostream_char__std__char_traits_char__* t165 = t158->_M_stream;
      char* t166 = t158->_M_string;
      struct std__basic_ostream_char__std__char_traits_char__* r167 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(t165, t166);
    }
  __retval157 = t158;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t168 = __retval157;
  return t168;
}

// function: _ZSt12__assign_oneILb0ESt16ostream_iteratorIicSt11char_traitsIcEEPiEvRT0_RT1_
void void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____int__(struct std__ostream_iterator_int__char__std__char_traits_char__* v169, int** v170) {
bb171:
  struct std__ostream_iterator_int__char__std__char_traits_char__* __out172;
  int** __in173;
  __out172 = v169;
  __in173 = v170;
    int** t174 = __in173;
    int* t175 = *t174;
    struct std__ostream_iterator_int__char__std__char_traits_char__* t176 = __out172;
    struct std__ostream_iterator_int__char__std__char_traits_char__* r177 = std__ostream_iterator_int__char__std__char_traits_char_____operator__2(t176);
    struct std__ostream_iterator_int__char__std__char_traits_char__* r178 = std__ostream_iterator_int__char__std__char_traits_char_____operator_(r177, t175);
  return;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEppEv
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__(struct std__ostream_iterator_int__char__std__char_traits_char__* v179) {
bb180:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this181;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval182;
  this181 = v179;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t183 = this181;
  __retval182 = t183;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t184 = __retval182;
  return t184;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_St16ostream_iteratorIicSt11char_traitsIcEEET2_T0_T1_S5_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__int___int___std__ostream_iterator_int__char__std__char_traits_char_____(int* v185, int* v186, struct std__ostream_iterator_int__char__std__char_traits_char__ v187) {
bb188:
  int* __first189;
  int* __last190;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result191;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval192;
  __first189 = v185;
  __last190 = v186;
  __result191 = v187;
    while (1) {
      int* t194 = __first189;
      int* t195 = __last190;
      _Bool c196 = ((t194 != t195)) ? 1 : 0;
      if (!c196) break;
      void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____int__(&__result191, &__first189);
    for_step193: ;
      struct std__ostream_iterator_int__char__std__char_traits_char__* r197 = std__ostream_iterator_int__char__std__char_traits_char_____operator__(&__result191);
      int* t198 = __first189;
      int c199 = 1;
      int* ptr200 = &(t198)[c199];
      __first189 = ptr200;
    }
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval192, &__result191);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t201 = __retval192;
  return t201;
}

// function: _ZSt14__copy_move_a1ILb0EPiSt16ostream_iteratorIicSt11char_traitsIcEEET1_T0_S6_S5_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(int* v202, int* v203, struct std__ostream_iterator_int__char__std__char_traits_char__ v204) {
bb205:
  int* __first206;
  int* __last207;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result208;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval209;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0210;
  __first206 = v202;
  __last207 = v203;
  __result208 = v204;
  int* t211 = __first206;
  int* t212 = __last207;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp0210, &__result208);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t213 = agg_tmp0210;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r214 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__int___int___std__ostream_iterator_int__char__std__char_traits_char_____(t211, t212, t213);
  __retval209 = r214;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t215 = __retval209;
  return t215;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v216) {
bb217:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this218;
  int** __retval219;
  this218 = v216;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t220 = this218;
  __retval219 = &t220->_M_current;
  int** t221 = __retval219;
  return t221;
}

// function: _ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v222) {
bb223:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it224;
  int* __retval225;
  __it224 = v222;
  int** r226 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__it224);
  int* t227 = *r226;
  __retval225 = t227;
  int* t228 = __retval225;
  return t228;
}

// function: _ZSt12__niter_baseISt16ostream_iteratorIicSt11char_traitsIcEEET_S4_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__ v229) {
bb230:
  struct std__ostream_iterator_int__char__std__char_traits_char__ __it231;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval232;
  __it231 = v229;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval232, &__it231);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t233 = __retval232;
  return t233;
}

// function: _ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt16ostream_iteratorIicSt11char_traitsIcEEET1_T0_SC_SB_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v234, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v235, struct std__ostream_iterator_int__char__std__char_traits_char__ v236) {
bb237:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first238;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last239;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result240;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval241;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0242;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1243;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2244;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3245;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp4246;
  __first238 = v234;
  __last239 = v235;
  __result240 = v236;
  agg_tmp1243 = __first238; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t247 = agg_tmp1243;
  int* r248 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t247);
  agg_tmp2244 = __last239; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t249 = agg_tmp2244;
  int* r250 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t249);
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp4246, &__result240);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t251 = agg_tmp4246;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r252 = std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(t251);
  agg_tmp3245 = r252;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t253 = agg_tmp3245;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r254 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(r248, r250, t253);
  agg_tmp0242 = r254;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t255 = agg_tmp0242;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r256 = std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(&__result240, t255);
  __retval241 = r256;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t257 = __retval241;
  return t257;
}

// function: _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v258) {
bb259:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it260;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval261;
  __it260 = v258;
  __retval261 = __it260; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t262 = __retval261;
  return t262;
}

// function: _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt16ostream_iteratorIicSt11char_traitsIcEEET0_T_SC_SB_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v263, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v264, struct std__ostream_iterator_int__char__std__char_traits_char__ v265) {
bb266:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first267;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last268;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result269;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval270;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0271;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1272;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2273;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3274;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp4275;
  __first267 = v263;
  __last268 = v264;
  __result269 = v265;
  agg_tmp1272 = __first267; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t276 = agg_tmp1272;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r277 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t276);
  agg_tmp0271 = r277;
  agg_tmp3274 = __last268; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t278 = agg_tmp3274;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r279 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t278);
  agg_tmp2273 = r279;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp4275, &__result269);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t280 = agg_tmp0271;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t281 = agg_tmp2273;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t282 = agg_tmp4275;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r283 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t280, t281, t282);
  __retval270 = r283;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t284 = __retval270;
  return t284;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v285, int** v286) {
bb287:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this288;
  int** __i289;
  this288 = v285;
  __i289 = v286;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t290 = this288;
  int** t291 = __i289;
  int* t292 = *t291;
  t290->_M_current = t292;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v293) {
bb294:
  struct std__vector_int__std__allocator_int__* this295;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval296;
  this295 = v293;
  struct std__vector_int__std__allocator_int__* t297 = this295;
  struct std___Vector_base_int__std__allocator_int__* base298 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t297 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base299 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base298->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval296, &base299->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t300 = __retval296;
  return t300;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v301) {
bb302:
  struct std__vector_int__std__allocator_int__* this303;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval304;
  this303 = v301;
  struct std__vector_int__std__allocator_int__* t305 = this303;
  struct std___Vector_base_int__std__allocator_int__* base306 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t305 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base307 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base306->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval304, &base307->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t308 = __retval304;
  return t308;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEC2ERKS2_
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(struct std__ostream_iterator_int__char__std__char_traits_char__* v309, struct std__ostream_iterator_int__char__std__char_traits_char__* v310) {
bb311:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this312;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __obj313;
  this312 = v309;
  __obj313 = v310;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t314 = this312;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base315 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t314 + 0);
  struct std__ostream_iterator_int__char__std__char_traits_char__* t316 = __obj313;
  struct std__basic_ostream_char__std__char_traits_char__* t317 = t316->_M_stream;
  t314->_M_stream = t317;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t318 = __obj313;
  char* t319 = t318->_M_string;
  t314->_M_string = t319;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v320, long v321) {
bb322:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this323;
  long __n324;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval325;
  int* ref_tmp0326;
  this323 = v320;
  __n324 = v321;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t327 = this323;
  int* t328 = t327->_M_current;
  long t329 = __n324;
  int* ptr330 = &(t328)[t329];
  ref_tmp0326 = ptr330;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval325, &ref_tmp0326);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t331 = __retval325;
  return t331;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v332, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v333) {
bb334:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs335;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs336;
  long __retval337;
  __lhs335 = v332;
  __rhs336 = v333;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t338 = __lhs335;
  int** r339 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t338);
  int* t340 = *r339;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t341 = __rhs336;
  int** r342 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t341);
  int* t343 = *r342;
  long diff344 = t340 - t343;
  __retval337 = diff344;
  long t345 = __retval337;
  return t345;
}

// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v346, int* v347) {
bb348:
  int* __a349;
  int* __b350;
  int __tmp351;
  __a349 = v346;
  __b350 = v347;
  int* t352 = __a349;
  int t353 = *t352;
  __tmp351 = t353;
  int* t354 = __b350;
  int t355 = *t354;
  int* t356 = __a349;
  *t356 = t355;
  int t357 = __tmp351;
  int* t358 = __b350;
  *t358 = t357;
  return;
}

// function: _ZSt9iter_swapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EvT_T0_
void void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v359, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v360) {
bb361:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __a362;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __b363;
  __a362 = v359;
  __b363 = v360;
  int* r364 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__a362);
  int* r365 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__b363);
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(r364, r365);
  return;
}

// function: _ZSt14random_shuffleIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_
void void_std__random_shuffle___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v366, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v367) {
bb368:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first369;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last370;
  __first369 = v366;
  __last370 = v367;
    _Bool r371 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first369, &__last370);
    if (r371) {
      return;
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __i372;
    long c373 = 1;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r374 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first369, c373);
    __i372 = r374;
    while (1) {
      _Bool r376 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__i372, &__last370);
      _Bool u377 = !r376;
      if (!u377) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __j378;
        int r379 = rand();
        long cast380 = (long)r379;
        long r381 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__i372, &__first369);
        long c382 = 1;
        long b383 = r381 + c382;
        long b384 = cast380 % b383;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r385 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first369, b384);
        __j378 = r385;
          _Bool r386 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__i372, &__j378);
          _Bool u387 = !r386;
          if (u387) {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0388;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1389;
            agg_tmp0388 = __i372; // copy
            agg_tmp1389 = __j378; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t390 = agg_tmp0388;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t391 = agg_tmp1389;
            void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t390, t391);
          }
    for_step375: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r392 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__i372);
    }
  return;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v393, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v394) {
bb395:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs396;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs397;
  _Bool __retval398;
  __lhs396 = v393;
  __rhs397 = v394;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t399 = __lhs396;
  int** r400 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t399);
  int* t401 = *r400;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t402 = __rhs397;
  int** r403 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t402);
  int* t404 = *r403;
  _Bool c405 = ((t401 == t404)) ? 1 : 0;
  __retval398 = c405;
  _Bool t406 = __retval398;
  return t406;
}

// function: _ZN9__gnu_cxx5__ops16_Iter_equals_valIKiEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEEEbT_
_Bool bool___gnu_cxx____ops___Iter_equals_val_int_const___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_equals_val_const_int_* v407, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v408) {
bb409:
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* this410;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it411;
  _Bool __retval412;
  this410 = v407;
  __it411 = v408;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* t413 = this410;
  int* r414 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it411);
  int t415 = *r414;
  int* t416 = t413->_M_value;
  int t417 = *t416;
  _Bool c418 = ((t415 == t417)) ? 1 : 0;
  __retval412 = c418;
  _Bool t419 = __retval412;
  return t419;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v420) {
bb421:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this422;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval423;
  this422 = v420;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t424 = this422;
  int* t425 = t424->_M_current;
  int c426 = 1;
  int* ptr427 = &(t425)[c426];
  t424->_M_current = ptr427;
  __retval423 = t424;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t428 = __retval423;
  return t428;
}

// function: _ZSt10__count_ifIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops16_Iter_equals_valIKiEEENSt15iterator_traitsIT_E15difference_typeESC_SC_T0_
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____count_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v429, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v430, struct __gnu_cxx____ops___Iter_equals_val_const_int_ v431) {
bb432:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first433;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last434;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ __pred435;
  long __retval436;
  long __n437;
  __first433 = v429;
  __last434 = v430;
  __pred435 = v431;
  long c438 = 0;
  __n437 = c438;
    while (1) {
      _Bool r440 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first433, &__last434);
      _Bool u441 = !r440;
      if (!u441) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0442;
        agg_tmp0442 = __first433; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t443 = agg_tmp0442;
        _Bool r444 = bool___gnu_cxx____ops___Iter_equals_val_int_const___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__pred435, t443);
        if (r444) {
          long t445 = __n437;
          long u446 = t445 + 1;
          __n437 = u446;
        }
    for_step439: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r447 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first433);
    }
  long t448 = __n437;
  __retval436 = t448;
  long t449 = __retval436;
  return t449;
}

// function: _ZN9__gnu_cxx5__ops16_Iter_equals_valIKiEC2ERS2_
void __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(struct __gnu_cxx____ops___Iter_equals_val_const_int_* v450, int* v451) {
bb452:
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* this453;
  int* __value454;
  this453 = v450;
  __value454 = v451;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* t455 = this453;
  int* t456 = __value454;
  t455->_M_value = t456;
  return;
}

// function: _ZN9__gnu_cxx5__ops17__iter_equals_valIKiEENS0_16_Iter_equals_valIT_EERS4_
struct __gnu_cxx____ops___Iter_equals_val_const_int_ __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(int* v457) {
bb458:
  int* __val459;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ __retval460;
  __val459 = v457;
  int* t461 = __val459;
  __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(&__retval460, t461);
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ t462 = __retval460;
  return t462;
}

// function: _ZSt5countIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiENSt15iterator_traitsIT_E15difference_typeES8_S8_RKT0_
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__count___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v463, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v464, int* v465) {
bb466:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first467;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last468;
  int* __value469;
  long __retval470;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0471;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1472;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ agg_tmp2473;
  __first467 = v463;
  __last468 = v464;
  __value469 = v465;
  agg_tmp0471 = __first467; // copy
  agg_tmp1472 = __last468; // copy
  int* t474 = __value469;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ r475 = __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(t474);
  agg_tmp2473 = r475;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t476 = agg_tmp0471;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t477 = agg_tmp1472;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ t478 = agg_tmp2473;
  long r479 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____count_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___(t476, t477, t478);
  __retval470 = r479;
  long t480 = __retval470;
  return t480;
}

// function: _ZN9__gnu_cxx5__ops10_Iter_predIPFbiEEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEEEbT_
_Bool bool___gnu_cxx____ops___Iter_pred_bool_____int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_pred_bool_____int__* v481, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v482) {
bb483:
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* this484;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it485;
  _Bool __retval486;
  this484 = v481;
  __it485 = v482;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* t487 = this484;
  void* t488 = t487->_M_pred;
  int* r489 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it485);
  int t490 = *r489;
  _Bool r491 = ((_Bool (*)(int))t488)(t490);
  __retval486 = r491;
  _Bool t492 = __retval486;
  return t492;
}

// function: _ZSt10__count_ifIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops10_Iter_predIPFbiEEEENSt15iterator_traitsIT_E15difference_typeESD_SD_T0_
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____count_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool_____int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v493, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v494, struct __gnu_cxx____ops___Iter_pred_bool_____int__ v495) {
bb496:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first497;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last498;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ __pred499;
  long __retval500;
  long __n501;
  __first497 = v493;
  __last498 = v494;
  __pred499 = v495;
  long c502 = 0;
  __n501 = c502;
    while (1) {
      _Bool r504 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first497, &__last498);
      _Bool u505 = !r504;
      if (!u505) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0506;
        agg_tmp0506 = __first497; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t507 = agg_tmp0506;
        _Bool r508 = bool___gnu_cxx____ops___Iter_pred_bool_____int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__pred499, t507);
        if (r508) {
          long t509 = __n501;
          long u510 = t509 + 1;
          __n501 = u510;
        }
    for_step503: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r511 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first497);
    }
  long t512 = __n501;
  __retval500 = t512;
  long t513 = __retval500;
  return t513;
}

// function: _ZN9__gnu_cxx5__ops10_Iter_predIPFbiEEC2ES3_
void __gnu_cxx____ops___Iter_pred_bool_____int_____Iter_pred_bool____(struct __gnu_cxx____ops___Iter_pred_bool_____int__* v514, void* v515) {
bb516:
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* this517;
  void* __pred518;
  this517 = v514;
  __pred518 = v515;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* t519 = this517;
  void* t520 = __pred518;
  t519->_M_pred = t520;
  return;
}

// function: _ZN9__gnu_cxx5__ops11__pred_iterIPFbiEEENS0_10_Iter_predIT_EES5_
struct __gnu_cxx____ops___Iter_pred_bool_____int__ __gnu_cxx____ops___Iter_pred_bool_____int_____gnu_cxx____ops____pred_iter_bool_____int___bool____(void* v521) {
bb522:
  void* __pred523;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ __retval524;
  __pred523 = v521;
  void* t525 = __pred523;
  __gnu_cxx____ops___Iter_pred_bool_____int_____Iter_pred_bool____(&__retval524, t525);
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ t526 = __retval524;
  return t526;
}

// function: _ZSt8count_ifIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEPFbiEENSt15iterator_traitsIT_E15difference_typeESA_SA_T0_
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__count_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v527, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v528, void* v529) {
bb530:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first531;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last532;
  void* __pred533;
  long __retval534;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0535;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1536;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ agg_tmp2537;
  __first531 = v527;
  __last532 = v528;
  __pred533 = v529;
  agg_tmp0535 = __first531; // copy
  agg_tmp1536 = __last532; // copy
  void* t538 = __pred533;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ r539 = __gnu_cxx____ops___Iter_pred_bool_____int_____gnu_cxx____ops____pred_iter_bool_____int___bool____(t538);
  agg_tmp2537 = r539;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t540 = agg_tmp0535;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t541 = agg_tmp1536;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ t542 = agg_tmp2537;
  long r543 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____count_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool_____int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool____(t540, t541, t542);
  __retval534 = r543;
  long t544 = __retval534;
  return t544;
}

// function: _Z8greater9i
_Bool greater9(int v545) {
bb546:
  int value547;
  _Bool __retval548;
  value547 = v545;
  int t549 = value547;
  int c550 = 9;
  _Bool c551 = ((t549 > c550)) ? 1 : 0;
  __retval548 = c551;
  _Bool t552 = __retval548;
  return t552;
}

// function: _ZNK9__gnu_cxx5__ops15_Iter_less_iterclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEES8_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_less_iter* v553, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v554, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v555) {
bb556:
  struct __gnu_cxx____ops___Iter_less_iter* this557;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1558;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it2559;
  _Bool __retval560;
  this557 = v553;
  __it1558 = v554;
  __it2559 = v555;
  struct __gnu_cxx____ops___Iter_less_iter* t561 = this557;
  int* r562 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it1558);
  int t563 = *r562;
  int* r564 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it2559);
  int t565 = *r564;
  _Bool c566 = ((t563 < t565)) ? 1 : 0;
  __retval560 = c566;
  _Bool t567 = __retval560;
  return t567;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSERKS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v568, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v569) {
bb570:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this571;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed572;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval573;
  this571 = v568;
  unnamed572 = v569;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t574 = this571;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t575 = unnamed572;
  int* t576 = t575->_M_current;
  t574->_M_current = t576;
  __retval573 = t574;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t577 = __retval573;
  return t577;
}

// function: _ZSt13__min_elementIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEET_S9_S9_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____min_element___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v578, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v579, struct __gnu_cxx____ops___Iter_less_iter v580) {
bb581:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first582;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last583;
  struct __gnu_cxx____ops___Iter_less_iter __comp584;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval585;
  __first582 = v578;
  __last583 = v579;
  __comp584 = v580;
    _Bool r586 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first582, &__last583);
    if (r586) {
      __retval585 = __first582; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t587 = __retval585;
      return t587;
    }
  __retval585 = __first582; // copy
    while (1) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r588 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first582);
      _Bool r589 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(r588, &__last583);
      _Bool u590 = !r589;
      if (!u590) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0591;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1592;
        agg_tmp0591 = __first582; // copy
        agg_tmp1592 = __retval585; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t593 = agg_tmp0591;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t594 = agg_tmp1592;
        _Bool r595 = bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp584, t593, t594);
        if (r595) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r596 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&__retval585, &__first582);
        }
    }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t597 = __retval585;
  return t597;
}

// function: _ZN9__gnu_cxx5__ops16__iter_less_iterEv
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter() {
bb598:
  struct __gnu_cxx____ops___Iter_less_iter __retval599;
  struct __gnu_cxx____ops___Iter_less_iter t600 = __retval599;
  return t600;
}

// function: _ZSt11min_elementIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET_S7_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__min_element___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v601, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v602) {
bb603:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first604;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last605;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval606;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0607;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1608;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp2609;
  __first604 = v601;
  __last605 = v602;
  agg_tmp0607 = __first604; // copy
  agg_tmp1608 = __last605; // copy
  struct __gnu_cxx____ops___Iter_less_iter r610 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp2609 = r610;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t611 = agg_tmp0607;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t612 = agg_tmp1608;
  struct __gnu_cxx____ops___Iter_less_iter t613 = agg_tmp2609;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r614 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____min_element___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t611, t612, t613);
  __retval606 = r614;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t615 = __retval606;
  return t615;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v616) {
bb617:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this618;
  int* __retval619;
  this618 = v616;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t620 = this618;
  int* t621 = t620->_M_current;
  __retval619 = t621;
  int* t622 = __retval619;
  return t622;
}

// function: _ZSt13__max_elementIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEET_S9_S9_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____max_element___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v623, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v624, struct __gnu_cxx____ops___Iter_less_iter v625) {
bb626:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first627;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last628;
  struct __gnu_cxx____ops___Iter_less_iter __comp629;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval630;
  __first627 = v623;
  __last628 = v624;
  __comp629 = v625;
    _Bool r631 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first627, &__last628);
    if (r631) {
      __retval630 = __first627; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t632 = __retval630;
      return t632;
    }
  __retval630 = __first627; // copy
    while (1) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r633 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first627);
      _Bool r634 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(r633, &__last628);
      _Bool u635 = !r634;
      if (!u635) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0636;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1637;
        agg_tmp0636 = __retval630; // copy
        agg_tmp1637 = __first627; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t638 = agg_tmp0636;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t639 = agg_tmp1637;
        _Bool r640 = bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp629, t638, t639);
        if (r640) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r641 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&__retval630, &__first627);
        }
    }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t642 = __retval630;
  return t642;
}

// function: _ZSt11max_elementIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET_S7_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__max_element___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v643, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v644) {
bb645:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first646;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last647;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval648;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0649;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1650;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp2651;
  __first646 = v643;
  __last647 = v644;
  agg_tmp0649 = __first646; // copy
  agg_tmp1650 = __last647; // copy
  struct __gnu_cxx____ops___Iter_less_iter r652 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp2651 = r652;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t653 = agg_tmp0649;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t654 = agg_tmp1650;
  struct __gnu_cxx____ops___Iter_less_iter t655 = agg_tmp2651;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r656 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____max_element___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t653, t654, t655);
  __retval648 = r656;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t657 = __retval648;
  return t657;
}

// function: _ZSt10accumulateIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiET0_T_S8_S7_
int int_std__accumulate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v658, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v659, int v660) {
bb661:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first662;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last663;
  int __init664;
  int __retval665;
  __first662 = v658;
  __last663 = v659;
  __init664 = v660;
    while (1) {
      _Bool r667 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first662, &__last663);
      _Bool u668 = !r667;
      if (!u668) break;
      int t669 = __init664;
      int* r670 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first662);
      int t671 = *r670;
      int b672 = t669 + t671;
      __init664 = b672;
    for_step666: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r673 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first662);
    }
  int t674 = __init664;
  __retval665 = t674;
  int t675 = __retval665;
  return t675;
}

// function: _ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEPFviEET0_T_SA_S9_
void* void___std__for_each___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_____int___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v676, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v677, void* v678) {
bb679:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first680;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last681;
  void* __f682;
  void* __retval683;
  __first680 = v676;
  __last681 = v677;
  __f682 = v678;
    while (1) {
      _Bool r685 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first680, &__last681);
      _Bool u686 = !r685;
      if (!u686) break;
      void* t687 = __f682;
      int* r688 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first680);
      int t689 = *r688;
      ((void (*)(int))t687)(t689);
    for_step684: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r690 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first680);
    }
  void* t691 = __f682;
  __retval683 = t691;
  void* t692 = __retval683;
  return t692;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v693) {
bb694:
  struct std__ios_base* this695;
  long __retval696;
  this695 = v693;
  struct std__ios_base* t697 = this695;
  long t698 = t697->_M_width;
  __retval696 = t698;
  long t699 = __retval696;
  return t699;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v700, char v701) {
bb702:
  struct std__basic_ostream_char__std__char_traits_char__* __out703;
  char __c704;
  struct std__basic_ostream_char__std__char_traits_char__* __retval705;
  __out703 = v700;
  __c704 = v701;
    struct std__basic_ostream_char__std__char_traits_char__* t706 = __out703;
    void** v707 = (void**)t706;
    void* v708 = *((void**)v707);
    unsigned char* cast709 = (unsigned char*)v708;
    long c710 = -24;
    unsigned char* ptr711 = &(cast709)[c710];
    long* cast712 = (long*)ptr711;
    long t713 = *cast712;
    unsigned char* cast714 = (unsigned char*)t706;
    unsigned char* ptr715 = &(cast714)[t713];
    struct std__basic_ostream_char__std__char_traits_char__* cast716 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr715;
    struct std__ios_base* cast717 = (struct std__ios_base*)cast716;
    long r718 = std__ios_base__width___const(cast717);
    long c719 = 0;
    _Bool c720 = ((r718 != c719)) ? 1 : 0;
    if (c720) {
      struct std__basic_ostream_char__std__char_traits_char__* t721 = __out703;
      long c722 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r723 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t721, &__c704, c722);
      __retval705 = r723;
      struct std__basic_ostream_char__std__char_traits_char__* t724 = __retval705;
      return t724;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t725 = __out703;
  char t726 = __c704;
  struct std__basic_ostream_char__std__char_traits_char__* r727 = std__ostream__put(t725, t726);
  struct std__basic_ostream_char__std__char_traits_char__* t728 = __out703;
  __retval705 = t728;
  struct std__basic_ostream_char__std__char_traits_char__* t729 = __retval705;
  return t729;
}

// function: _Z12outputSquarei
void outputSquare(int v730) {
bb731:
  int value732;
  value732 = v730;
  int t733 = value732;
  int t734 = value732;
  int b735 = t733 * t734;
  struct std__basic_ostream_char__std__char_traits_char__* r736 = std__ostream__operator__(&_ZSt4cout, b735);
  char c737 = 32;
  struct std__basic_ostream_char__std__char_traits_char__* r738 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r736, c737);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v739, unsigned long v740, struct std__allocator_int_* v741) {
bb742:
  struct std__vector_int__std__allocator_int__* this743;
  unsigned long __n744;
  struct std__allocator_int_* __a745;
  this743 = v739;
  __n744 = v740;
  __a745 = v741;
  struct std__vector_int__std__allocator_int__* t746 = this743;
  struct std___Vector_base_int__std__allocator_int__* base747 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t746 + 0);
  unsigned long t748 = __n744;
  struct std__allocator_int_* t749 = __a745;
  unsigned long r750 = std__vector_int__std__allocator_int______S_check_init_len(t748, t749);
  struct std__allocator_int_* t751 = __a745;
  std___Vector_base_int__std__allocator_int______Vector_base_2(base747, r750, t751);
    unsigned long t752 = __n744;
    std__vector_int__std__allocator_int______M_default_initialize(t746, t752);
  return;
}

// function: _ZSt9transformIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_PFiiEET0_T_SA_S9_T1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__transform___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v753, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v754, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v755, void* v756) {
bb757:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first758;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last759;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result760;
  void* __unary_op761;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval762;
  __first758 = v753;
  __last759 = v754;
  __result760 = v755;
  __unary_op761 = v756;
    while (1) {
      _Bool r764 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first758, &__last759);
      _Bool u765 = !r764;
      if (!u765) break;
      void* t766 = __unary_op761;
      int* r767 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first758);
      int t768 = *r767;
      int r769 = ((int (*)(int))t766)(t768);
      int* r770 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result760);
      *r770 = r769;
    for_step763: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r771 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first758);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r772 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__result760);
    }
  __retval762 = __result760; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t773 = __retval762;
  return t773;
}

// function: _Z13calculateCubei
int calculateCube(int v774) {
bb775:
  int value776;
  int __retval777;
  value776 = v774;
  int t778 = value776;
  int t779 = value776;
  int b780 = t778 * t779;
  int t781 = value776;
  int b782 = b780 * t781;
  __retval777 = b782;
  int t783 = __retval777;
  return t783;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v784, void* v785) {
bb786:
  struct std__basic_ostream_char__std__char_traits_char__* this787;
  void* __pf788;
  struct std__basic_ostream_char__std__char_traits_char__* __retval789;
  this787 = v784;
  __pf788 = v785;
  struct std__basic_ostream_char__std__char_traits_char__* t790 = this787;
  void* t791 = __pf788;
  struct std__basic_ostream_char__std__char_traits_char__* r792 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t791)(t790);
  __retval789 = r792;
  struct std__basic_ostream_char__std__char_traits_char__* t793 = __retval789;
  return t793;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v794) {
bb795:
  struct std__basic_ostream_char__std__char_traits_char__* __os796;
  struct std__basic_ostream_char__std__char_traits_char__* __retval797;
  __os796 = v794;
  struct std__basic_ostream_char__std__char_traits_char__* t798 = __os796;
  struct std__basic_ostream_char__std__char_traits_char__* r799 = std__ostream__flush(t798);
  __retval797 = r799;
  struct std__basic_ostream_char__std__char_traits_char__* t800 = __retval797;
  return t800;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v801) {
bb802:
  struct std__ctype_char_* __f803;
  struct std__ctype_char_* __retval804;
  __f803 = v801;
    struct std__ctype_char_* t805 = __f803;
    _Bool cast806 = (_Bool)t805;
    _Bool u807 = !cast806;
    if (u807) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t808 = __f803;
  __retval804 = t808;
  struct std__ctype_char_* t809 = __retval804;
  return t809;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v810, char v811) {
bb812:
  struct std__ctype_char_* this813;
  char __c814;
  char __retval815;
  this813 = v810;
  __c814 = v811;
  struct std__ctype_char_* t816 = this813;
    char t817 = t816->_M_widen_ok;
    _Bool cast818 = (_Bool)t817;
    if (cast818) {
      char t819 = __c814;
      unsigned char cast820 = (unsigned char)t819;
      unsigned long cast821 = (unsigned long)cast820;
      char t822 = t816->_M_widen[cast821];
      __retval815 = t822;
      char t823 = __retval815;
      return t823;
    }
  std__ctype_char____M_widen_init___const(t816);
  char t824 = __c814;
  void** v825 = (void**)t816;
  void* v826 = *((void**)v825);
  char vcall829 = (char)__VERIFIER_virtual_call_char_char(t816, 6, t824);
  __retval815 = vcall829;
  char t830 = __retval815;
  return t830;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v831, char v832) {
bb833:
  struct std__basic_ios_char__std__char_traits_char__* this834;
  char __c835;
  char __retval836;
  this834 = v831;
  __c835 = v832;
  struct std__basic_ios_char__std__char_traits_char__* t837 = this834;
  struct std__ctype_char_* t838 = t837->_M_ctype;
  struct std__ctype_char_* r839 = std__ctype_char__const__std____check_facet_std__ctype_char___(t838);
  char t840 = __c835;
  char r841 = std__ctype_char___widen_char__const(r839, t840);
  __retval836 = r841;
  char t842 = __retval836;
  return t842;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v843) {
bb844:
  struct std__basic_ostream_char__std__char_traits_char__* __os845;
  struct std__basic_ostream_char__std__char_traits_char__* __retval846;
  __os845 = v843;
  struct std__basic_ostream_char__std__char_traits_char__* t847 = __os845;
  struct std__basic_ostream_char__std__char_traits_char__* t848 = __os845;
  void** v849 = (void**)t848;
  void* v850 = *((void**)v849);
  unsigned char* cast851 = (unsigned char*)v850;
  long c852 = -24;
  unsigned char* ptr853 = &(cast851)[c852];
  long* cast854 = (long*)ptr853;
  long t855 = *cast854;
  unsigned char* cast856 = (unsigned char*)t848;
  unsigned char* ptr857 = &(cast856)[t855];
  struct std__basic_ostream_char__std__char_traits_char__* cast858 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr857;
  struct std__basic_ios_char__std__char_traits_char__* cast859 = (struct std__basic_ios_char__std__char_traits_char__*)cast858;
  char c860 = 10;
  char r861 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast859, c860);
  struct std__basic_ostream_char__std__char_traits_char__* r862 = std__ostream__put(t847, r861);
  struct std__basic_ostream_char__std__char_traits_char__* r863 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r862);
  __retval846 = r863;
  struct std__basic_ostream_char__std__char_traits_char__* t864 = __retval846;
  return t864;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v865) {
bb866:
  struct std__vector_int__std__allocator_int__* this867;
  this867 = v865;
  struct std__vector_int__std__allocator_int__* t868 = this867;
    struct std___Vector_base_int__std__allocator_int__* base869 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t868 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base870 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base869->_M_impl) + 0);
    int* t871 = base870->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base872 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t868 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base873 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base872->_M_impl) + 0);
    int* t874 = base873->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base875 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t868 + 0);
    struct std__allocator_int_* r876 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base875);
    void_std___Destroy_int___int_(t871, t874, r876);
  {
    struct std___Vector_base_int__std__allocator_int__* base877 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t868 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base877);
  }
  return;
}

// function: main
int main() {
bb878:
  int __retval879;
  int SIZE880;
  int a1881[10];
  struct std__vector_int__std__allocator_int__ v882;
  struct std__allocator_int_ ref_tmp0883;
  struct std__ostream_iterator_int__char__std__char_traits_char__ output884;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0885;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1886;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2887;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3888;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4889;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5890;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6891;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7892;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp8893;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp9894;
  int a2895[10];
  struct std__vector_int__std__allocator_int__ v2896;
  struct std__allocator_int_ ref_tmp1897;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp10898;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11899;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp12900;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp13901;
  int result902;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp14903;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp15904;
  int ref_tmp2905;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp16906;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp17907;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3908;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp18909;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp19910;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp4911;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp20912;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21913;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp22914;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp23915;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp24916;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp25917;
  struct std__vector_int__std__allocator_int__ cubes918;
  struct std__allocator_int_ ref_tmp5919;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp26920;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp27921;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp28922;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp29923;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp30924;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31925;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp32926;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp33927;
  int c928 = 0;
  __retval879 = c928;
  int c929 = 10;
  SIZE880 = c929;
  // array copy
  __builtin_memcpy(a1881, __const_main_a1, (unsigned long)10 * sizeof(__const_main_a1[0]));
  int* cast930 = (int*)&(a1881);
  int* cast931 = (int*)&(a1881);
  int t932 = SIZE880;
  int* ptr933 = &(cast931)[t932];
  std__allocator_int___allocator_2(&ref_tmp0883);
    std__vector_int__std__allocator_int_____vector_int___void_(&v882, cast930, ptr933, &ref_tmp0883);
  {
    std__allocator_int____allocator(&ref_tmp0883);
  }
    char* cast934 = (char*)&(_str);
    std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(&output884, &_ZSt4cout, cast934);
    char* cast935 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r936 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast935);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r937 = std__vector_int__std__allocator_int_____begin(&v882);
    agg_tmp0885 = r937;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r938 = std__vector_int__std__allocator_int_____end(&v882);
    agg_tmp1886 = r938;
    std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp2887, &output884);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t939 = agg_tmp0885;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t940 = agg_tmp1886;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t941 = agg_tmp2887;
    struct std__ostream_iterator_int__char__std__char_traits_char__ r942 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t939, t940, t941);
    agg_tmp3888 = r942;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r943 = std__vector_int__std__allocator_int_____begin(&v882);
    agg_tmp4889 = r943;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r944 = std__vector_int__std__allocator_int_____end(&v882);
    agg_tmp5890 = r944;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t945 = agg_tmp4889;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t946 = agg_tmp5890;
    void_std__random_shuffle___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t945, t946);
    char* cast947 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r948 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast947);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r949 = std__vector_int__std__allocator_int_____begin(&v882);
    agg_tmp6891 = r949;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r950 = std__vector_int__std__allocator_int_____end(&v882);
    agg_tmp7892 = r950;
    std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp8893, &output884);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t951 = agg_tmp6891;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t952 = agg_tmp7892;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t953 = agg_tmp8893;
    struct std__ostream_iterator_int__char__std__char_traits_char__ r954 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t951, t952, t953);
    agg_tmp9894 = r954;
    // array copy
    __builtin_memcpy(a2895, __const_main_a2, (unsigned long)10 * sizeof(__const_main_a2[0]));
    int* cast955 = (int*)&(a2895);
    int* cast956 = (int*)&(a2895);
    int t957 = SIZE880;
    int* ptr958 = &(cast956)[t957];
    std__allocator_int___allocator_2(&ref_tmp1897);
      std__vector_int__std__allocator_int_____vector_int___void_(&v2896, cast955, ptr958, &ref_tmp1897);
    {
      std__allocator_int____allocator(&ref_tmp1897);
    }
      char* cast959 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* r960 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast959);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r961 = std__vector_int__std__allocator_int_____begin(&v2896);
      agg_tmp10898 = r961;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r962 = std__vector_int__std__allocator_int_____end(&v2896);
      agg_tmp11899 = r962;
      std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp12900, &output884);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t963 = agg_tmp10898;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t964 = agg_tmp11899;
      struct std__ostream_iterator_int__char__std__char_traits_char__ t965 = agg_tmp12900;
      struct std__ostream_iterator_int__char__std__char_traits_char__ r966 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t963, t964, t965);
      agg_tmp13901 = r966;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r967 = std__vector_int__std__allocator_int_____begin(&v2896);
      agg_tmp14903 = r967;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r968 = std__vector_int__std__allocator_int_____end(&v2896);
      agg_tmp15904 = r968;
      int c969 = 8;
      ref_tmp2905 = c969;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t970 = agg_tmp14903;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t971 = agg_tmp15904;
      long r972 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__count___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t970, t971, &ref_tmp2905);
      int cast973 = (int)r972;
      result902 = cast973;
      char* cast974 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* r975 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast974);
      int t976 = result902;
      struct std__basic_ostream_char__std__char_traits_char__* r977 = std__ostream__operator__(r975, t976);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r978 = std__vector_int__std__allocator_int_____begin(&v2896);
      agg_tmp16906 = r978;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r979 = std__vector_int__std__allocator_int_____end(&v2896);
      agg_tmp17907 = r979;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t980 = agg_tmp16906;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t981 = agg_tmp17907;
      long r982 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__count_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(t980, t981, &greater9);
      int cast983 = (int)r982;
      result902 = cast983;
      char* cast984 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* r985 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast984);
      int t986 = result902;
      struct std__basic_ostream_char__std__char_traits_char__* r987 = std__ostream__operator__(r985, t986);
      char* cast988 = (char*)&(_str_6);
      struct std__basic_ostream_char__std__char_traits_char__* r989 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast988);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r990 = std__vector_int__std__allocator_int_____begin(&v2896);
      agg_tmp18909 = r990;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r991 = std__vector_int__std__allocator_int_____end(&v2896);
      agg_tmp19910 = r991;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t992 = agg_tmp18909;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t993 = agg_tmp19910;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r994 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__min_element___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t992, t993);
      ref_tmp3908 = r994;
      int* r995 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp3908);
      int t996 = *r995;
      struct std__basic_ostream_char__std__char_traits_char__* r997 = std__ostream__operator__(r989, t996);
      char* cast998 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* r999 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast998);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1000 = std__vector_int__std__allocator_int_____begin(&v2896);
      agg_tmp20912 = r1000;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1001 = std__vector_int__std__allocator_int_____end(&v2896);
      agg_tmp21913 = r1001;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1002 = agg_tmp20912;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1003 = agg_tmp21913;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1004 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__max_element___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1002, t1003);
      ref_tmp4911 = r1004;
      int* r1005 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp4911);
      int t1006 = *r1005;
      struct std__basic_ostream_char__std__char_traits_char__* r1007 = std__ostream__operator__(r999, t1006);
      char* cast1008 = (char*)&(_str_8);
      struct std__basic_ostream_char__std__char_traits_char__* r1009 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1008);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1010 = std__vector_int__std__allocator_int_____begin(&v882);
      agg_tmp22914 = r1010;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1011 = std__vector_int__std__allocator_int_____end(&v882);
      agg_tmp23915 = r1011;
      int c1012 = 0;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1013 = agg_tmp22914;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1014 = agg_tmp23915;
      int r1015 = int_std__accumulate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t1013, t1014, c1012);
      struct std__basic_ostream_char__std__char_traits_char__* r1016 = std__ostream__operator__(r1009, r1015);
      char* cast1017 = (char*)&(_str_9);
      struct std__basic_ostream_char__std__char_traits_char__* r1018 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1017);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1019 = std__vector_int__std__allocator_int_____begin(&v882);
      agg_tmp24916 = r1019;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1020 = std__vector_int__std__allocator_int_____end(&v882);
      agg_tmp25917 = r1020;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1021 = agg_tmp24916;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1022 = agg_tmp25917;
      void* r1023 = void___std__for_each___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_____int___(t1021, t1022, &outputSquare);
      int t1024 = SIZE880;
      unsigned long cast1025 = (unsigned long)t1024;
      std__allocator_int___allocator_2(&ref_tmp5919);
        std__vector_int__std__allocator_int_____vector(&cubes918, cast1025, &ref_tmp5919);
      {
        std__allocator_int____allocator(&ref_tmp5919);
      }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1026 = std__vector_int__std__allocator_int_____begin(&v882);
        agg_tmp26920 = r1026;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1027 = std__vector_int__std__allocator_int_____end(&v882);
        agg_tmp27921 = r1027;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1028 = std__vector_int__std__allocator_int_____begin(&cubes918);
        agg_tmp28922 = r1028;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1029 = agg_tmp26920;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1030 = agg_tmp27921;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1031 = agg_tmp28922;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1032 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__transform___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____(t1029, t1030, t1031, &calculateCube);
        agg_tmp29923 = r1032;
        char* cast1033 = (char*)&(_str_10);
        struct std__basic_ostream_char__std__char_traits_char__* r1034 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1033);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1035 = std__vector_int__std__allocator_int_____begin(&cubes918);
        agg_tmp30924 = r1035;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1036 = std__vector_int__std__allocator_int_____end(&cubes918);
        agg_tmp31925 = r1036;
        std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp32926, &output884);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1037 = agg_tmp30924;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1038 = agg_tmp31925;
        struct std__ostream_iterator_int__char__std__char_traits_char__ t1039 = agg_tmp32926;
        struct std__ostream_iterator_int__char__std__char_traits_char__ r1040 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t1037, t1038, t1039);
        agg_tmp33927 = r1040;
        struct std__basic_ostream_char__std__char_traits_char__* r1041 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int c1042 = 0;
        __retval879 = c1042;
        int t1043 = __retval879;
        int ret_val1044 = t1043;
        {
          std__vector_int__std__allocator_int______vector(&cubes918);
        }
        {
          std__vector_int__std__allocator_int______vector(&v2896);
        }
        {
          std__vector_int__std__allocator_int______vector(&v882);
        }
        return ret_val1044;
  int t1045 = __retval879;
  return t1045;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v1046) {
bb1047:
  struct std____new_allocator_int_* this1048;
  this1048 = v1046;
  struct std____new_allocator_int_* t1049 = this1048;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1050, struct std__allocator_int_* v1051) {
bb1052:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1053;
  struct std__allocator_int_* __a1054;
  this1053 = v1050;
  __a1054 = v1051;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1055 = this1053;
  struct std__allocator_int_* base1056 = (struct std__allocator_int_*)((char *)t1055 + 0);
  struct std__allocator_int_* t1057 = __a1054;
  std__allocator_int___allocator(base1056, t1057);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1058 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1055 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1058);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1059) {
bb1060:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1061;
  this1061 = v1059;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1062 = this1061;
  {
    struct std__allocator_int_* base1063 = (struct std__allocator_int_*)((char *)t1062 + 0);
    std__allocator_int____allocator(base1063);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1064, struct std__allocator_int_* v1065) {
bb1066:
  struct std___Vector_base_int__std__allocator_int__* this1067;
  struct std__allocator_int_* __a1068;
  this1067 = v1064;
  __a1068 = v1065;
  struct std___Vector_base_int__std__allocator_int__* t1069 = this1067;
  struct std__allocator_int_* t1070 = __a1068;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1069->_M_impl, t1070);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v1071, int** v1072, int* v1073) {
bb1074:
  struct std__ranges____distance_fn* this1075;
  int** __first1076;
  int* __last1077;
  long __retval1078;
  this1075 = v1071;
  __first1076 = v1072;
  __last1077 = v1073;
  struct std__ranges____distance_fn* t1079 = this1075;
  int* t1080 = __last1077;
  int** t1081 = __first1076;
  int* t1082 = *t1081;
  long diff1083 = t1080 - t1082;
  __retval1078 = diff1083;
  long t1084 = __retval1078;
  return t1084;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1085:
  _Bool __retval1086;
    _Bool c1087 = 0;
    __retval1086 = c1087;
    _Bool t1088 = __retval1086;
    return t1088;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1089) {
bb1090:
  struct std____new_allocator_int_* this1091;
  unsigned long __retval1092;
  this1091 = v1089;
  struct std____new_allocator_int_* t1093 = this1091;
  unsigned long c1094 = 9223372036854775807;
  unsigned long c1095 = 4;
  unsigned long b1096 = c1094 / c1095;
  __retval1092 = b1096;
  unsigned long t1097 = __retval1092;
  return t1097;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1098, unsigned long v1099, void* v1100) {
bb1101:
  struct std____new_allocator_int_* this1102;
  unsigned long __n1103;
  void* unnamed1104;
  int* __retval1105;
  this1102 = v1098;
  __n1103 = v1099;
  unnamed1104 = v1100;
  struct std____new_allocator_int_* t1106 = this1102;
    unsigned long t1107 = __n1103;
    unsigned long r1108 = std____new_allocator_int____M_max_size___const(t1106);
    _Bool c1109 = ((t1107 > r1108)) ? 1 : 0;
    if (c1109) {
        unsigned long t1110 = __n1103;
        unsigned long c1111 = -1;
        unsigned long c1112 = 4;
        unsigned long b1113 = c1111 / c1112;
        _Bool c1114 = ((t1110 > b1113)) ? 1 : 0;
        if (c1114) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1115 = 4;
    unsigned long c1116 = 16;
    _Bool c1117 = ((c1115 > c1116)) ? 1 : 0;
    if (c1117) {
      unsigned long __al1118;
      unsigned long c1119 = 4;
      __al1118 = c1119;
      unsigned long t1120 = __n1103;
      unsigned long c1121 = 4;
      unsigned long b1122 = t1120 * c1121;
      unsigned long t1123 = __al1118;
      void* r1124 = operator_new_2(b1122, t1123);
      int* cast1125 = (int*)r1124;
      __retval1105 = cast1125;
      int* t1126 = __retval1105;
      return t1126;
    }
  unsigned long t1127 = __n1103;
  unsigned long c1128 = 4;
  unsigned long b1129 = t1127 * c1128;
  void* r1130 = operator_new(b1129);
  int* cast1131 = (int*)r1130;
  __retval1105 = cast1131;
  int* t1132 = __retval1105;
  return t1132;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1133, unsigned long v1134) {
bb1135:
  struct std__allocator_int_* this1136;
  unsigned long __n1137;
  int* __retval1138;
  this1136 = v1133;
  __n1137 = v1134;
  struct std__allocator_int_* t1139 = this1136;
    _Bool r1140 = std____is_constant_evaluated();
    if (r1140) {
        unsigned long t1141 = __n1137;
        unsigned long c1142 = 4;
        unsigned long ovr1143;
        _Bool ovf1144 = __builtin_mul_overflow(t1141, c1142, &ovr1143);
        __n1137 = ovr1143;
        if (ovf1144) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1145 = __n1137;
      void* r1146 = operator_new(t1145);
      int* cast1147 = (int*)r1146;
      __retval1138 = cast1147;
      int* t1148 = __retval1138;
      return t1148;
    }
  struct std____new_allocator_int_* base1149 = (struct std____new_allocator_int_*)((char *)t1139 + 0);
  unsigned long t1150 = __n1137;
  void* c1151 = ((void*)0);
  int* r1152 = std____new_allocator_int___allocate(base1149, t1150, c1151);
  __retval1138 = r1152;
  int* t1153 = __retval1138;
  return t1153;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1154, unsigned long v1155) {
bb1156:
  struct std__allocator_int_* __a1157;
  unsigned long __n1158;
  int* __retval1159;
  __a1157 = v1154;
  __n1158 = v1155;
  struct std__allocator_int_* t1160 = __a1157;
  unsigned long t1161 = __n1158;
  int* r1162 = std__allocator_int___allocate(t1160, t1161);
  __retval1159 = r1162;
  int* t1163 = __retval1159;
  return t1163;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1164, unsigned long v1165) {
bb1166:
  struct std___Vector_base_int__std__allocator_int__* this1167;
  unsigned long __n1168;
  int* __retval1169;
  this1167 = v1164;
  __n1168 = v1165;
  struct std___Vector_base_int__std__allocator_int__* t1170 = this1167;
  unsigned long t1171 = __n1168;
  unsigned long c1172 = 0;
  _Bool c1173 = ((t1171 != c1172)) ? 1 : 0;
  int* ternary1174;
  if (c1173) {
    struct std__allocator_int_* base1175 = (struct std__allocator_int_*)((char *)&(t1170->_M_impl) + 0);
    unsigned long t1176 = __n1168;
    int* r1177 = std__allocator_traits_std__allocator_int_____allocate(base1175, t1176);
    ternary1174 = (int*)r1177;
  } else {
    int* c1178 = ((void*)0);
    ternary1174 = (int*)c1178;
  }
  __retval1169 = ternary1174;
  int* t1179 = __retval1169;
  return t1179;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1180, unsigned long* v1181) {
bb1182:
  unsigned long* __a1183;
  unsigned long* __b1184;
  unsigned long* __retval1185;
  __a1183 = v1180;
  __b1184 = v1181;
    unsigned long* t1186 = __b1184;
    unsigned long t1187 = *t1186;
    unsigned long* t1188 = __a1183;
    unsigned long t1189 = *t1188;
    _Bool c1190 = ((t1187 < t1189)) ? 1 : 0;
    if (c1190) {
      unsigned long* t1191 = __b1184;
      __retval1185 = t1191;
      unsigned long* t1192 = __retval1185;
      return t1192;
    }
  unsigned long* t1193 = __a1183;
  __retval1185 = t1193;
  unsigned long* t1194 = __retval1185;
  return t1194;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1195) {
bb1196:
  struct std__allocator_int_* __a1197;
  unsigned long __retval1198;
  unsigned long __diffmax1199;
  unsigned long __allocmax1200;
  __a1197 = v1195;
  unsigned long c1201 = 2305843009213693951;
  __diffmax1199 = c1201;
  unsigned long c1202 = 4611686018427387903;
  __allocmax1200 = c1202;
  unsigned long* r1203 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1199, &__allocmax1200);
  unsigned long t1204 = *r1203;
  __retval1198 = t1204;
  unsigned long t1205 = __retval1198;
  return t1205;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1206, struct std__allocator_int_* v1207) {
bb1208:
  struct std__allocator_int_* this1209;
  struct std__allocator_int_* __a1210;
  this1209 = v1206;
  __a1210 = v1207;
  struct std__allocator_int_* t1211 = this1209;
  struct std____new_allocator_int_* base1212 = (struct std____new_allocator_int_*)((char *)t1211 + 0);
  struct std__allocator_int_* t1213 = __a1210;
  struct std____new_allocator_int_* base1214 = (struct std____new_allocator_int_*)((char *)t1213 + 0);
  std____new_allocator_int_____new_allocator(base1212, base1214);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1215, struct std__allocator_int_* v1216) {
bb1217:
  unsigned long __n1218;
  struct std__allocator_int_* __a1219;
  unsigned long __retval1220;
  __n1218 = v1215;
  __a1219 = v1216;
    struct std__allocator_int_ ref_tmp01221;
    _Bool tmp_exprcleanup1222;
    unsigned long t1223 = __n1218;
    struct std__allocator_int_* t1224 = __a1219;
    std__allocator_int___allocator(&ref_tmp01221, t1224);
      unsigned long r1225 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01221);
      _Bool c1226 = ((t1223 > r1225)) ? 1 : 0;
      tmp_exprcleanup1222 = c1226;
    {
      std__allocator_int____allocator(&ref_tmp01221);
    }
    _Bool t1227 = tmp_exprcleanup1222;
    if (t1227) {
      char* cast1228 = (char*)&(_str_11);
      std____throw_length_error(cast1228);
    }
  unsigned long t1229 = __n1218;
  __retval1220 = t1229;
  unsigned long t1230 = __retval1220;
  return t1230;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1231) {
bb1232:
  struct std___Vector_base_int__std__allocator_int__* this1233;
  struct std__allocator_int_* __retval1234;
  this1233 = v1231;
  struct std___Vector_base_int__std__allocator_int__* t1235 = this1233;
  struct std__allocator_int_* base1236 = (struct std__allocator_int_*)((char *)&(t1235->_M_impl) + 0);
  __retval1234 = base1236;
  struct std__allocator_int_* t1237 = __retval1234;
  return t1237;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1238:
  _Bool __retval1239;
    _Bool c1240 = 0;
    __retval1239 = c1240;
    _Bool t1241 = __retval1239;
    return t1241;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1242, int** v1243) {
bb1244:
  struct std___UninitDestroyGuard_int____void_* this1245;
  int** __first1246;
  this1245 = v1242;
  __first1246 = v1243;
  struct std___UninitDestroyGuard_int____void_* t1247 = this1245;
  int** t1248 = __first1246;
  int* t1249 = *t1248;
  t1247->_M_first = t1249;
  int** t1250 = __first1246;
  t1247->_M_cur = t1250;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1251, int* v1252) {
bb1253:
  int* __location1254;
  int* __args1255;
  int* __retval1256;
  void* __loc1257;
  __location1254 = v1251;
  __args1255 = v1252;
  int* t1258 = __location1254;
  void* cast1259 = (void*)t1258;
  __loc1257 = cast1259;
    void* t1260 = __loc1257;
    int* cast1261 = (int*)t1260;
    int* t1262 = __args1255;
    int t1263 = *t1262;
    *cast1261 = t1263;
    __retval1256 = cast1261;
    int* t1264 = __retval1256;
    return t1264;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v1265, int* v1266) {
bb1267:
  int* __p1268;
  int* __args1269;
  __p1268 = v1265;
  __args1269 = v1266;
    _Bool r1270 = std____is_constant_evaluated();
    if (r1270) {
      int* t1271 = __p1268;
      int* t1272 = __args1269;
      int* r1273 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1271, t1272);
      return;
    }
  int* t1274 = __p1268;
  void* cast1275 = (void*)t1274;
  int* cast1276 = (int*)cast1275;
  int* t1277 = __args1269;
  int t1278 = *t1277;
  *cast1276 = t1278;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1279) {
bb1280:
  struct std___UninitDestroyGuard_int____void_* this1281;
  this1281 = v1279;
  struct std___UninitDestroyGuard_int____void_* t1282 = this1281;
  int** c1283 = ((void*)0);
  t1282->_M_cur = c1283;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1284) {
bb1285:
  struct std___UninitDestroyGuard_int____void_* this1286;
  this1286 = v1284;
  struct std___UninitDestroyGuard_int____void_* t1287 = this1286;
    int** t1288 = t1287->_M_cur;
    int** c1289 = ((void*)0);
    _Bool c1290 = ((t1288 != c1289)) ? 1 : 0;
    if (c1290) {
      int* t1291 = t1287->_M_first;
      int** t1292 = t1287->_M_cur;
      int* t1293 = *t1292;
      void_std___Destroy_int__(t1291, t1293);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v1294, int* v1295, int* v1296) {
bb1297:
  int* __first1298;
  int* __last1299;
  int* __result1300;
  int* __retval1301;
  struct std___UninitDestroyGuard_int____void_ __guard1302;
  __first1298 = v1294;
  __last1299 = v1295;
  __result1300 = v1296;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1302, &__result1300);
      while (1) {
        int* t1304 = __first1298;
        int* t1305 = __last1299;
        _Bool c1306 = ((t1304 != t1305)) ? 1 : 0;
        if (!c1306) break;
        int* t1307 = __result1300;
        int* t1308 = __first1298;
        void_std___Construct_int__int__(t1307, t1308);
      for_step1303: ;
        int* t1309 = __first1298;
        int c1310 = 1;
        int* ptr1311 = &(t1309)[c1310];
        __first1298 = ptr1311;
        int* t1312 = __result1300;
        int c1313 = 1;
        int* ptr1314 = &(t1312)[c1313];
        __result1300 = ptr1314;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1302);
    int* t1315 = __result1300;
    __retval1301 = t1315;
    int* t1316 = __retval1301;
    int* ret_val1317 = t1316;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1302);
    }
    return ret_val1317;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v1318) {
bb1319:
  int* __it1320;
  int* __retval1321;
  __it1320 = v1318;
  int* t1322 = __it1320;
  __retval1321 = t1322;
  int* t1323 = __retval1321;
  return t1323;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v1324, int* v1325, int* v1326) {
bb1327:
  int* __first1328;
  int* __last1329;
  int* __result1330;
  int* __retval1331;
  __first1328 = v1324;
  __last1329 = v1325;
  __result1330 = v1326;
      long __n1332;
      int* t1333 = __last1329;
      int* t1334 = __first1328;
      long diff1335 = t1333 - t1334;
      __n1332 = diff1335;
        long t1336 = __n1332;
        long c1337 = 0;
        _Bool c1338 = ((t1336 > c1337)) ? 1 : 0;
        if (c1338) {
          int* t1339 = __result1330;
          int* r1340 = int__std____niter_base_int__(t1339);
          void* cast1341 = (void*)r1340;
          int* t1342 = __first1328;
          int* r1343 = int__std____niter_base_int__(t1342);
          void* cast1344 = (void*)r1343;
          long t1345 = __n1332;
          unsigned long cast1346 = (unsigned long)t1345;
          unsigned long c1347 = 4;
          unsigned long b1348 = cast1346 * c1347;
          void* r1349 = memcpy(cast1341, cast1344, b1348);
          long t1350 = __n1332;
          int* t1351 = __result1330;
          int* ptr1352 = &(t1351)[t1350];
          __result1330 = ptr1352;
        }
      int* t1353 = __result1330;
      __retval1331 = t1353;
      int* t1354 = __retval1331;
      return t1354;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v1355, int* v1356, int* v1357, struct std__allocator_int_* v1358) {
bb1359:
  int* __first1360;
  int* __last1361;
  int* __result1362;
  struct std__allocator_int_* unnamed1363;
  int* __retval1364;
  __first1360 = v1355;
  __last1361 = v1356;
  __result1362 = v1357;
  unnamed1363 = v1358;
    _Bool r1365 = std__is_constant_evaluated();
    if (r1365) {
      int* t1366 = __first1360;
      int* t1367 = __last1361;
      int* t1368 = __result1362;
      int* r1369 = int__std____do_uninit_copy_int___int___int__(t1366, t1367, t1368);
      __retval1364 = r1369;
      int* t1370 = __retval1364;
      return t1370;
    }
    int* t1371 = __first1360;
    int* t1372 = __last1361;
    int* t1373 = __result1362;
    int* r1374 = int__std__uninitialized_copy_int___int__(t1371, t1372, t1373);
    __retval1364 = r1374;
    int* t1375 = __retval1364;
    return t1375;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v1376, int* v1377, int* v1378, unsigned long v1379) {
bb1380:
  struct std__vector_int__std__allocator_int__* this1381;
  int* __first1382;
  int* __last1383;
  unsigned long __n1384;
  int* __start1385;
  this1381 = v1376;
  __first1382 = v1377;
  __last1383 = v1378;
  __n1384 = v1379;
  struct std__vector_int__std__allocator_int__* t1386 = this1381;
  struct std___Vector_base_int__std__allocator_int__* base1387 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1386 + 0);
  unsigned long t1388 = __n1384;
  struct std___Vector_base_int__std__allocator_int__* base1389 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1386 + 0);
  struct std__allocator_int_* r1390 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1389);
  unsigned long r1391 = std__vector_int__std__allocator_int______S_check_init_len(t1388, r1390);
  int* r1392 = std___Vector_base_int__std__allocator_int______M_allocate(base1387, r1391);
  __start1385 = r1392;
  int* t1393 = __start1385;
  struct std___Vector_base_int__std__allocator_int__* base1394 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1386 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1395 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1394->_M_impl) + 0);
  base1395->_M_finish = t1393;
  struct std___Vector_base_int__std__allocator_int__* base1396 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1386 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1397 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1396->_M_impl) + 0);
  base1397->_M_start = t1393;
  int* t1398 = __start1385;
  unsigned long t1399 = __n1384;
  int* ptr1400 = &(t1398)[t1399];
  struct std___Vector_base_int__std__allocator_int__* base1401 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1386 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1402 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1401->_M_impl) + 0);
  base1402->_M_end_of_storage = ptr1400;
  int* t1403 = __first1382;
  int* t1404 = __last1383;
  int* t1405 = __start1385;
  struct std___Vector_base_int__std__allocator_int__* base1406 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1386 + 0);
  struct std__allocator_int_* r1407 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1406);
  int* r1408 = int__std____uninitialized_copy_a_int___int___int___int_(t1403, t1404, t1405, r1407);
  struct std___Vector_base_int__std__allocator_int__* base1409 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1386 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1410 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1409->_M_impl) + 0);
  base1410->_M_finish = r1408;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1411, int* v1412, unsigned long v1413) {
bb1414:
  struct std____new_allocator_int_* this1415;
  int* __p1416;
  unsigned long __n1417;
  this1415 = v1411;
  __p1416 = v1412;
  __n1417 = v1413;
  struct std____new_allocator_int_* t1418 = this1415;
    unsigned long c1419 = 4;
    unsigned long c1420 = 16;
    _Bool c1421 = ((c1419 > c1420)) ? 1 : 0;
    if (c1421) {
      int* t1422 = __p1416;
      void* cast1423 = (void*)t1422;
      unsigned long t1424 = __n1417;
      unsigned long c1425 = 4;
      unsigned long b1426 = t1424 * c1425;
      unsigned long c1427 = 4;
      operator_delete_3(cast1423, b1426, c1427);
      return;
    }
  int* t1428 = __p1416;
  void* cast1429 = (void*)t1428;
  unsigned long t1430 = __n1417;
  unsigned long c1431 = 4;
  unsigned long b1432 = t1430 * c1431;
  operator_delete_2(cast1429, b1432);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1433, int* v1434, unsigned long v1435) {
bb1436:
  struct std__allocator_int_* this1437;
  int* __p1438;
  unsigned long __n1439;
  this1437 = v1433;
  __p1438 = v1434;
  __n1439 = v1435;
  struct std__allocator_int_* t1440 = this1437;
    _Bool r1441 = std____is_constant_evaluated();
    if (r1441) {
      int* t1442 = __p1438;
      void* cast1443 = (void*)t1442;
      operator_delete(cast1443);
      return;
    }
  struct std____new_allocator_int_* base1444 = (struct std____new_allocator_int_*)((char *)t1440 + 0);
  int* t1445 = __p1438;
  unsigned long t1446 = __n1439;
  std____new_allocator_int___deallocate(base1444, t1445, t1446);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1447, int* v1448, unsigned long v1449) {
bb1450:
  struct std__allocator_int_* __a1451;
  int* __p1452;
  unsigned long __n1453;
  __a1451 = v1447;
  __p1452 = v1448;
  __n1453 = v1449;
  struct std__allocator_int_* t1454 = __a1451;
  int* t1455 = __p1452;
  unsigned long t1456 = __n1453;
  std__allocator_int___deallocate(t1454, t1455, t1456);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1457, int* v1458, unsigned long v1459) {
bb1460:
  struct std___Vector_base_int__std__allocator_int__* this1461;
  int* __p1462;
  unsigned long __n1463;
  this1461 = v1457;
  __p1462 = v1458;
  __n1463 = v1459;
  struct std___Vector_base_int__std__allocator_int__* t1464 = this1461;
    int* t1465 = __p1462;
    _Bool cast1466 = (_Bool)t1465;
    if (cast1466) {
      struct std__allocator_int_* base1467 = (struct std__allocator_int_*)((char *)&(t1464->_M_impl) + 0);
      int* t1468 = __p1462;
      unsigned long t1469 = __n1463;
      std__allocator_traits_std__allocator_int_____deallocate(base1467, t1468, t1469);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1470) {
bb1471:
  struct std___Vector_base_int__std__allocator_int__* this1472;
  this1472 = v1470;
  struct std___Vector_base_int__std__allocator_int__* t1473 = this1472;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1474 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1473->_M_impl) + 0);
    int* t1475 = base1474->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1476 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1473->_M_impl) + 0);
    int* t1477 = base1476->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1478 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1473->_M_impl) + 0);
    int* t1479 = base1478->_M_start;
    long diff1480 = t1477 - t1479;
    unsigned long cast1481 = (unsigned long)diff1480;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1473, t1475, cast1481);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1473->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1482, struct std____new_allocator_int_* v1483) {
bb1484:
  struct std____new_allocator_int_* this1485;
  struct std____new_allocator_int_* unnamed1486;
  this1485 = v1482;
  unnamed1486 = v1483;
  struct std____new_allocator_int_* t1487 = this1485;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1488) {
bb1489:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1490;
  this1490 = v1488;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1491 = this1490;
  int* c1492 = ((void*)0);
  t1491->_M_start = c1492;
  int* c1493 = ((void*)0);
  t1491->_M_finish = c1493;
  int* c1494 = ((void*)0);
  t1491->_M_end_of_storage = c1494;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1495) {
bb1496:
  int* __location1497;
  __location1497 = v1495;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1498, int* v1499) {
bb1500:
  int* __first1501;
  int* __last1502;
  __first1501 = v1498;
  __last1502 = v1499;
      _Bool r1503 = std____is_constant_evaluated();
      if (r1503) {
          while (1) {
            int* t1505 = __first1501;
            int* t1506 = __last1502;
            _Bool c1507 = ((t1505 != t1506)) ? 1 : 0;
            if (!c1507) break;
            int* t1508 = __first1501;
            void_std__destroy_at_int_(t1508);
          for_step1504: ;
            int* t1509 = __first1501;
            int c1510 = 1;
            int* ptr1511 = &(t1509)[c1510];
            __first1501 = ptr1511;
          }
      }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v1512, unsigned long v1513) {
bb1514:
  struct std___Vector_base_int__std__allocator_int__* this1515;
  unsigned long __n1516;
  this1515 = v1512;
  __n1516 = v1513;
  struct std___Vector_base_int__std__allocator_int__* t1517 = this1515;
  unsigned long t1518 = __n1516;
  int* r1519 = std___Vector_base_int__std__allocator_int______M_allocate(t1517, t1518);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1520 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1517->_M_impl) + 0);
  base1520->_M_start = r1519;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1521 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1517->_M_impl) + 0);
  int* t1522 = base1521->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1523 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1517->_M_impl) + 0);
  base1523->_M_finish = t1522;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1524 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1517->_M_impl) + 0);
  int* t1525 = base1524->_M_start;
  unsigned long t1526 = __n1516;
  int* ptr1527 = &(t1525)[t1526];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1528 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1517->_M_impl) + 0);
  base1528->_M_end_of_storage = ptr1527;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* v1529, unsigned long v1530, struct std__allocator_int_* v1531) {
bb1532:
  struct std___Vector_base_int__std__allocator_int__* this1533;
  unsigned long __n1534;
  struct std__allocator_int_* __a1535;
  this1533 = v1529;
  __n1534 = v1530;
  __a1535 = v1531;
  struct std___Vector_base_int__std__allocator_int__* t1536 = this1533;
  struct std__allocator_int_* t1537 = __a1535;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1536->_M_impl, t1537);
    unsigned long t1538 = __n1534;
    std___Vector_base_int__std__allocator_int______M_create_storage(t1536, t1538);
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v1539) {
bb1540:
  int* __location1541;
  int* __retval1542;
  void* __loc1543;
  __location1541 = v1539;
  int* t1544 = __location1541;
  void* cast1545 = (void*)t1544;
  __loc1543 = cast1545;
    void* t1546 = __loc1543;
    int* cast1547 = (int*)t1546;
    int c1548 = 0;
    *cast1547 = c1548;
    __retval1542 = cast1547;
    int* t1549 = __retval1542;
    return t1549;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v1550) {
bb1551:
  int* __p1552;
  __p1552 = v1550;
    _Bool r1553 = std____is_constant_evaluated();
    if (r1553) {
      int* t1554 = __p1552;
      int* r1555 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t1554);
      return;
    }
  int* t1556 = __p1552;
  void* cast1557 = (void*)t1556;
  int* cast1558 = (int*)cast1557;
  int c1559 = 0;
  *cast1558 = c1559;
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v1560, unsigned long v1561) {
bb1562:
  int* __first1563;
  unsigned long __n1564;
  int* __retval1565;
  struct std___UninitDestroyGuard_int____void_ __guard1566;
  __first1563 = v1560;
  __n1564 = v1561;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1566, &__first1563);
      while (1) {
        unsigned long t1568 = __n1564;
        unsigned long c1569 = 0;
        _Bool c1570 = ((t1568 > c1569)) ? 1 : 0;
        if (!c1570) break;
        int* t1571 = __first1563;
        void_std___Construct_int_(t1571);
      for_step1567: ;
        unsigned long t1572 = __n1564;
        unsigned long u1573 = t1572 - 1;
        __n1564 = u1573;
        int* t1574 = __first1563;
        int c1575 = 1;
        int* ptr1576 = &(t1574)[c1575];
        __first1563 = ptr1576;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1566);
    int* t1577 = __first1563;
    __retval1565 = t1577;
    int* t1578 = __retval1565;
    int* ret_val1579 = t1578;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1566);
    }
    return ret_val1579;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v1580, int* v1581, int* v1582) {
bb1583:
  int* __first1584;
  int* __last1585;
  int* __value1586;
  _Bool __load_outside_loop1587;
  int __val1588;
  __first1584 = v1580;
  __last1585 = v1581;
  __value1586 = v1582;
  _Bool c1589 = 1;
  __load_outside_loop1587 = c1589;
  int* t1590 = __value1586;
  int t1591 = *t1590;
  __val1588 = t1591;
    while (1) {
      int* t1593 = __first1584;
      int* t1594 = __last1585;
      _Bool c1595 = ((t1593 != t1594)) ? 1 : 0;
      if (!c1595) break;
      int t1596 = __val1588;
      int* t1597 = __first1584;
      *t1597 = t1596;
    for_step1592: ;
      int* t1598 = __first1584;
      int c1599 = 1;
      int* ptr1600 = &(t1598)[c1599];
      __first1584 = ptr1600;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v1601, int* v1602, int* v1603) {
bb1604:
  int* __first1605;
  int* __last1606;
  int* __value1607;
  __first1605 = v1601;
  __last1606 = v1602;
  __value1607 = v1603;
  int* t1608 = __first1605;
  int* t1609 = __last1606;
  int* t1610 = __value1607;
  void_std____fill_a1_int___int_(t1608, t1609, t1610);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v1611, unsigned long v1612, int* v1613, struct std__random_access_iterator_tag v1614) {
bb1615:
  int* __first1616;
  unsigned long __n1617;
  int* __value1618;
  struct std__random_access_iterator_tag unnamed1619;
  int* __retval1620;
  __first1616 = v1611;
  __n1617 = v1612;
  __value1618 = v1613;
  unnamed1619 = v1614;
    unsigned long t1621 = __n1617;
    unsigned long c1622 = 0;
    _Bool c1623 = ((t1621 <= c1622)) ? 1 : 0;
    if (c1623) {
      int* t1624 = __first1616;
      __retval1620 = t1624;
      int* t1625 = __retval1620;
      return t1625;
    }
  int* t1626 = __first1616;
  int* t1627 = __first1616;
  unsigned long t1628 = __n1617;
  int* ptr1629 = &(t1627)[t1628];
  int* t1630 = __value1618;
  void_std____fill_a_int___int_(t1626, ptr1629, t1630);
  int* t1631 = __first1616;
  unsigned long t1632 = __n1617;
  int* ptr1633 = &(t1631)[t1632];
  __retval1620 = ptr1633;
  int* t1634 = __retval1620;
  return t1634;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v1635) {
bb1636:
  unsigned long __n1637;
  unsigned long __retval1638;
  __n1637 = v1635;
  unsigned long t1639 = __n1637;
  __retval1638 = t1639;
  unsigned long t1640 = __retval1638;
  return t1640;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v1641) {
bb1642:
  int** unnamed1643;
  struct std__random_access_iterator_tag __retval1644;
  unnamed1643 = v1641;
  struct std__random_access_iterator_tag t1645 = __retval1644;
  return t1645;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v1646, unsigned long v1647, int* v1648) {
bb1649:
  int* __first1650;
  unsigned long __n1651;
  int* __value1652;
  int* __retval1653;
  struct std__random_access_iterator_tag agg_tmp01654;
  __first1650 = v1646;
  __n1651 = v1647;
  __value1652 = v1648;
  int* t1655 = __first1650;
  unsigned long t1656 = __n1651;
  unsigned long r1657 = std____size_to_integer(t1656);
  int* t1658 = __value1652;
  struct std__random_access_iterator_tag r1659 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first1650);
  agg_tmp01654 = r1659;
  struct std__random_access_iterator_tag t1660 = agg_tmp01654;
  int* r1661 = int__std____fill_n_a_int___unsigned_long__int_(t1655, r1657, t1658, t1660);
  __retval1653 = r1661;
  int* t1662 = __retval1653;
  return t1662;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v1663, unsigned long v1664) {
bb1665:
  int* __first1666;
  unsigned long __n1667;
  int* __retval1668;
  __first1666 = v1663;
  __n1667 = v1664;
    unsigned long t1669 = __n1667;
    unsigned long c1670 = 0;
    _Bool c1671 = ((t1669 > c1670)) ? 1 : 0;
    if (c1671) {
      int* __val1672;
      int* t1673 = __first1666;
      __val1672 = t1673;
      int* t1674 = __val1672;
      void_std___Construct_int_(t1674);
      int* t1675 = __first1666;
      int c1676 = 1;
      int* ptr1677 = &(t1675)[c1676];
      __first1666 = ptr1677;
      int* t1678 = __first1666;
      unsigned long t1679 = __n1667;
      unsigned long c1680 = 1;
      unsigned long b1681 = t1679 - c1680;
      int* t1682 = __val1672;
      int* r1683 = int__std__fill_n_int___unsigned_long__int_(t1678, b1681, t1682);
      __first1666 = r1683;
    }
  int* t1684 = __first1666;
  __retval1668 = t1684;
  int* t1685 = __retval1668;
  return t1685;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v1686, unsigned long v1687) {
bb1688:
  int* __first1689;
  unsigned long __n1690;
  int* __retval1691;
  _Bool __can_fill1692;
  __first1689 = v1686;
  __n1690 = v1687;
    _Bool r1693 = std__is_constant_evaluated();
    if (r1693) {
      int* t1694 = __first1689;
      unsigned long t1695 = __n1690;
      int* r1696 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t1694, t1695);
      __retval1691 = r1696;
      int* t1697 = __retval1691;
      return t1697;
    }
  _Bool c1698 = 1;
  __can_fill1692 = c1698;
  int* t1699 = __first1689;
  unsigned long t1700 = __n1690;
  int* r1701 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t1699, t1700);
  __retval1691 = r1701;
  int* t1702 = __retval1691;
  return t1702;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v1703, unsigned long v1704, struct std__allocator_int_* v1705) {
bb1706:
  int* __first1707;
  unsigned long __n1708;
  struct std__allocator_int_* unnamed1709;
  int* __retval1710;
  __first1707 = v1703;
  __n1708 = v1704;
  unnamed1709 = v1705;
  int* t1711 = __first1707;
  unsigned long t1712 = __n1708;
  int* r1713 = int__std____uninitialized_default_n_int___unsigned_long_(t1711, t1712);
  __retval1710 = r1713;
  int* t1714 = __retval1710;
  return t1714;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v1715, unsigned long v1716) {
bb1717:
  struct std__vector_int__std__allocator_int__* this1718;
  unsigned long __n1719;
  this1718 = v1715;
  __n1719 = v1716;
  struct std__vector_int__std__allocator_int__* t1720 = this1718;
  struct std___Vector_base_int__std__allocator_int__* base1721 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1720 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1722 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1721->_M_impl) + 0);
  int* t1723 = base1722->_M_start;
  unsigned long t1724 = __n1719;
  struct std___Vector_base_int__std__allocator_int__* base1725 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1720 + 0);
  struct std__allocator_int_* r1726 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1725);
  int* r1727 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t1723, t1724, r1726);
  struct std___Vector_base_int__std__allocator_int__* base1728 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1720 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1729 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1728->_M_impl) + 0);
  base1729->_M_finish = r1727;
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1730, int* v1731, struct std__allocator_int_* v1732) {
bb1733:
  int* __first1734;
  int* __last1735;
  struct std__allocator_int_* unnamed1736;
  __first1734 = v1730;
  __last1735 = v1731;
  unnamed1736 = v1732;
  int* t1737 = __first1734;
  int* t1738 = __last1735;
  void_std___Destroy_int__(t1737, t1738);
  return;
}

