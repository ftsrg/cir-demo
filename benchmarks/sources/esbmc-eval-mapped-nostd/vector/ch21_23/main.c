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
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct __gnu_cxx____ops___Val_less_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____pair_base___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ { unsigned char __field0; };
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
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ { struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first; struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ second; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_a1[10] = {2, 2, 4, 4, 4, 6, 6, 6, 6, 8};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[20] = "Vector v contains:\n";
char _str_2[31] = "\n\nLower bound of 6 is element ";
char _str_3[13] = " of vector v";
char _str_4[30] = "\nUpper bound of 6 is element ";
char _str_5[21] = "\nUsing equal_range:\n";
char _str_6[32] = "   Lower bound of 6 is element ";
char _str_7[33] = "\n   Upper bound of 6 is element ";
char _str_8[45] = "\n\nUse lower_bound to locate the first point\n";
char _str_9[36] = "at which 5 can be inserted in order";
char _str_10[33] = "\n   Lower bound of 5 is element ";
char _str_11[44] = "\n\nUse upper_bound to locate the last point\n";
char _str_12[36] = "at which 7 can be inserted in order";
char _str_13[33] = "\n   Upper bound of 7 is element ";
char _str_14[43] = "\n\nUse equal_range to locate the first and\n";
char _str_15[47] = "last point at which 5 can be inserted in order";
char _str_16[33] = "\n   Upper bound of 5 is element ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_17[49] = "cannot create std::vector larger than max_size()";
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
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
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
void void_std____advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool bool___gnu_cxx____ops___Iter_less_val__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_const____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_const___const(struct __gnu_cxx____ops___Iter_less_val* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____lower_bound___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____ops___Iter_less_val_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2, struct __gnu_cxx____ops___Iter_less_val p3);
struct __gnu_cxx____ops___Iter_less_val __gnu_cxx____ops____iter_less_val();
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__lower_bound___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, long p1);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
_Bool bool___gnu_cxx____ops___Val_less_iter__operator___int_const____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int________int_const_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Val_less_iter* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____upper_bound___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____ops___Val_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2, struct __gnu_cxx____ops___Val_less_iter p3);
struct __gnu_cxx____ops___Val_less_iter __gnu_cxx____ops____val_less_iter();
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__upper_bound___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
void _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E(struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* p0);
void _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EC2IRS6_S9_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesISA_SB_EEEEOT_OT0_(struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p2);
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int________std____equal_range___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____ops___Iter_less_val____gnu_cxx____ops___Val_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2, struct __gnu_cxx____ops___Iter_less_val p3, struct __gnu_cxx____ops___Val_less_iter p4);
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int________std__equal_range___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EaSEOS7_Qcl13_S_assignableIT_T0_EE(struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* p0, struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* p1);
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

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v320) {
bb321:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this322;
  this322 = v320;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t323 = this322;
  int* c324 = ((void*)0);
  t323->_M_current = c324;
  return;
}

// function: _ZSt10__distanceIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E15difference_typeES8_S8_St26random_access_iterator_tag
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v325, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v326, struct std__random_access_iterator_tag v327) {
bb328:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first329;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last330;
  struct std__random_access_iterator_tag unnamed331;
  long __retval332;
  __first329 = v325;
  __last330 = v326;
  unnamed331 = v327;
  long r333 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last330, &__first329);
  __retval332 = r333;
  long t334 = __retval332;
  return t334;
}

// function: _ZSt19__iterator_categoryIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v335) {
bb336:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed337;
  struct std__random_access_iterator_tag __retval338;
  unnamed337 = v335;
  struct std__random_access_iterator_tag t339 = __retval338;
  return t339;
}

// function: _ZSt8distanceIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E15difference_typeES8_S8_
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v340, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v341) {
bb342:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first343;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last344;
  long __retval345;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0346;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1347;
  struct std__random_access_iterator_tag agg_tmp2348;
  __first343 = v340;
  __last344 = v341;
  agg_tmp0346 = __first343; // copy
  agg_tmp1347 = __last344; // copy
  struct std__random_access_iterator_tag r349 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__first343);
  agg_tmp2348 = r349;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t350 = agg_tmp0346;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t351 = agg_tmp1347;
  struct std__random_access_iterator_tag t352 = agg_tmp2348;
  long r353 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t350, t351, t352);
  __retval345 = r353;
  long t354 = __retval345;
  return t354;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmmEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v355) {
bb356:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this357;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval358;
  this357 = v355;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t359 = this357;
  int* t360 = t359->_M_current;
  int c361 = -1;
  int* ptr362 = &(t360)[c361];
  t359->_M_current = ptr362;
  __retval358 = t359;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t363 = __retval358;
  return t363;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEpLEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v364, long v365) {
bb366:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this367;
  long __n368;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval369;
  this367 = v364;
  __n368 = v365;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t370 = this367;
  long t371 = __n368;
  int* t372 = t370->_M_current;
  int* ptr373 = &(t372)[t371];
  t370->_M_current = ptr373;
  __retval369 = t370;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t374 = __retval369;
  return t374;
}

// function: _ZSt9__advanceIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEElEvRT_T0_St26random_access_iterator_tag
void void_std____advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v375, long v376, struct std__random_access_iterator_tag v377) {
bb378:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __i379;
  long __n380;
  struct std__random_access_iterator_tag unnamed381;
  __i379 = v375;
  __n380 = v376;
  unnamed381 = v377;
    long t382 = __n380;
    _Bool isconst383 = 0;
    _Bool ternary384;
    if (isconst383) {
      long t385 = __n380;
      long c386 = 1;
      _Bool c387 = ((t385 == c386)) ? 1 : 0;
      ternary384 = (_Bool)c387;
    } else {
      _Bool c388 = 0;
      ternary384 = (_Bool)c388;
    }
    if (ternary384) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t389 = __i379;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r390 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(t389);
    } else {
        long t391 = __n380;
        _Bool isconst392 = 0;
        _Bool ternary393;
        if (isconst392) {
          long t394 = __n380;
          long c395 = -1;
          _Bool c396 = ((t394 == c395)) ? 1 : 0;
          ternary393 = (_Bool)c396;
        } else {
          _Bool c397 = 0;
          ternary393 = (_Bool)c397;
        }
        if (ternary393) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t398 = __i379;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r399 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(t398);
        } else {
          long t400 = __n380;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t401 = __i379;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r402 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(t401, t400);
        }
    }
  return;
}

// function: _ZSt7advanceIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEElEvRT_T0_
void void_std__advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v403, long v404) {
bb405:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __i406;
  long __n407;
  long __d408;
  struct std__random_access_iterator_tag agg_tmp0409;
  __i406 = v403;
  __n407 = v404;
  long t410 = __n407;
  __d408 = t410;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t411 = __i406;
  long t412 = __d408;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t413 = __i406;
  struct std__random_access_iterator_tag r414 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t413);
  agg_tmp0409 = r414;
  struct std__random_access_iterator_tag t415 = agg_tmp0409;
  void_std____advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_(t411, t412, t415);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v416) {
bb417:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this418;
  int* __retval419;
  this418 = v416;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t420 = this418;
  int* t421 = t420->_M_current;
  __retval419 = t421;
  int* t422 = __retval419;
  return t422;
}

// function: _ZNK9__gnu_cxx5__ops14_Iter_less_valclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEKiEEbT_RT0_
_Bool bool___gnu_cxx____ops___Iter_less_val__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_const____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_const___const(struct __gnu_cxx____ops___Iter_less_val* v423, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v424, int* v425) {
bb426:
  struct __gnu_cxx____ops___Iter_less_val* this427;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it428;
  int* __val429;
  _Bool __retval430;
  this427 = v423;
  __it428 = v424;
  __val429 = v425;
  struct __gnu_cxx____ops___Iter_less_val* t431 = this427;
  int* r432 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it428);
  int t433 = *r432;
  int* t434 = __val429;
  int t435 = *t434;
  _Bool c436 = ((t433 < t435)) ? 1 : 0;
  __retval430 = c436;
  _Bool t437 = __retval430;
  return t437;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSERKS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v438, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v439) {
bb440:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this441;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed442;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval443;
  this441 = v438;
  unnamed442 = v439;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t444 = this441;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t445 = unnamed442;
  int* t446 = t445->_M_current;
  t444->_M_current = t446;
  __retval443 = t444;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t447 = __retval443;
  return t447;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v448) {
bb449:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this450;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval451;
  this450 = v448;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t452 = this450;
  int* t453 = t452->_M_current;
  int c454 = 1;
  int* ptr455 = &(t453)[c454];
  t452->_M_current = ptr455;
  __retval451 = t452;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t456 = __retval451;
  return t456;
}

// function: _ZSt13__lower_boundIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiNS0_5__ops14_Iter_less_valEET_S9_S9_RKT0_T1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____lower_bound___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____ops___Iter_less_val_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v457, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v458, int* v459, struct __gnu_cxx____ops___Iter_less_val v460) {
bb461:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first462;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last463;
  int* __val464;
  struct __gnu_cxx____ops___Iter_less_val __comp465;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval466;
  long __len467;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0468;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1469;
  __first462 = v457;
  __last463 = v458;
  __val464 = v459;
  __comp465 = v460;
  agg_tmp0468 = __first462; // copy
  agg_tmp1469 = __last463; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t470 = agg_tmp0468;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t471 = agg_tmp1469;
  long r472 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t470, t471);
  __len467 = r472;
    while (1) {
      long t473 = __len467;
      long c474 = 0;
      _Bool c475 = ((t473 > c474)) ? 1 : 0;
      if (!c475) break;
        long __half476;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __middle477;
        long t478 = __len467;
        int c479 = 1;
        long s480 = t478 >> c479;
        __half476 = s480;
        __middle477 = __first462; // copy
        long t481 = __half476;
        void_std__advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_(&__middle477, t481);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2482;
          agg_tmp2482 = __middle477; // copy
          int* t483 = __val464;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t484 = agg_tmp2482;
          _Bool r485 = bool___gnu_cxx____ops___Iter_less_val__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_const____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_const___const(&__comp465, t484, t483);
          if (r485) {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r486 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(&__first462, &__middle477);
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r487 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(&__first462);
            long t488 = __len467;
            long t489 = __half476;
            long b490 = t488 - t489;
            long c491 = 1;
            long b492 = b490 - c491;
            __len467 = b492;
          } else {
            long t493 = __half476;
            __len467 = t493;
          }
    }
  __retval466 = __first462; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t494 = __retval466;
  return t494;
}

// function: _ZN9__gnu_cxx5__ops15__iter_less_valEv
struct __gnu_cxx____ops___Iter_less_val __gnu_cxx____ops____iter_less_val() {
bb495:
  struct __gnu_cxx____ops___Iter_less_val __retval496;
  struct __gnu_cxx____ops___Iter_less_val t497 = __retval496;
  return t497;
}

// function: _ZSt11lower_boundIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiET_S7_S7_RKT0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__lower_bound___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v498, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v499, int* v500) {
bb501:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first502;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last503;
  int* __val504;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval505;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0506;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1507;
  struct __gnu_cxx____ops___Iter_less_val agg_tmp2508;
  __first502 = v498;
  __last503 = v499;
  __val504 = v500;
  agg_tmp0506 = __first502; // copy
  agg_tmp1507 = __last503; // copy
  int* t509 = __val504;
  struct __gnu_cxx____ops___Iter_less_val r510 = __gnu_cxx____ops____iter_less_val();
  agg_tmp2508 = r510;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t511 = agg_tmp0506;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t512 = agg_tmp1507;
  struct __gnu_cxx____ops___Iter_less_val t513 = agg_tmp2508;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r514 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____lower_bound___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____ops___Iter_less_val_(t511, t512, t509, t513);
  __retval505 = r514;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t515 = __retval505;
  return t515;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v516, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v517) {
bb518:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this519;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed520;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval521;
  this519 = v516;
  unnamed520 = v517;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t522 = this519;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t523 = unnamed520;
  int* t524 = t523->_M_current;
  t522->_M_current = t524;
  __retval521 = t522;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t525 = __retval521;
  return t525;
}

// function: _ZNSolsEl
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* v526, long v527) {
bb528:
  struct std__basic_ostream_char__std__char_traits_char__* this529;
  long __n530;
  struct std__basic_ostream_char__std__char_traits_char__* __retval531;
  this529 = v526;
  __n530 = v527;
  struct std__basic_ostream_char__std__char_traits_char__* t532 = this529;
  long t533 = __n530;
  struct std__basic_ostream_char__std__char_traits_char__* r534 = std__ostream__std__ostream___M_insert_long_(t532, t533);
  __retval531 = r534;
  struct std__basic_ostream_char__std__char_traits_char__* t535 = __retval531;
  return t535;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v536, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v537) {
bb538:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs539;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs540;
  long __retval541;
  __lhs539 = v536;
  __rhs540 = v537;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t542 = __lhs539;
  int** r543 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t542);
  int* t544 = *r543;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t545 = __rhs540;
  int** r546 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t545);
  int* t547 = *r546;
  long diff548 = t544 - t547;
  __retval541 = diff548;
  long t549 = __retval541;
  return t549;
}

// function: _ZNK9__gnu_cxx5__ops14_Val_less_iterclIKiNS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEEEbRT_T0_
_Bool bool___gnu_cxx____ops___Val_less_iter__operator___int_const____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int________int_const_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Val_less_iter* v550, int* v551, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v552) {
bb553:
  struct __gnu_cxx____ops___Val_less_iter* this554;
  int* __val555;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it556;
  _Bool __retval557;
  this554 = v550;
  __val555 = v551;
  __it556 = v552;
  struct __gnu_cxx____ops___Val_less_iter* t558 = this554;
  int* t559 = __val555;
  int t560 = *t559;
  int* r561 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it556);
  int t562 = *r561;
  _Bool c563 = ((t560 < t562)) ? 1 : 0;
  __retval557 = c563;
  _Bool t564 = __retval557;
  return t564;
}

// function: _ZSt13__upper_boundIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiNS0_5__ops14_Val_less_iterEET_S9_S9_RKT0_T1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____upper_bound___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____ops___Val_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v565, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v566, int* v567, struct __gnu_cxx____ops___Val_less_iter v568) {
bb569:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first570;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last571;
  int* __val572;
  struct __gnu_cxx____ops___Val_less_iter __comp573;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval574;
  long __len575;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0576;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1577;
  __first570 = v565;
  __last571 = v566;
  __val572 = v567;
  __comp573 = v568;
  agg_tmp0576 = __first570; // copy
  agg_tmp1577 = __last571; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t578 = agg_tmp0576;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t579 = agg_tmp1577;
  long r580 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t578, t579);
  __len575 = r580;
    while (1) {
      long t581 = __len575;
      long c582 = 0;
      _Bool c583 = ((t581 > c582)) ? 1 : 0;
      if (!c583) break;
        long __half584;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __middle585;
        long t586 = __len575;
        int c587 = 1;
        long s588 = t586 >> c587;
        __half584 = s588;
        __middle585 = __first570; // copy
        long t589 = __half584;
        void_std__advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_(&__middle585, t589);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2590;
          int* t591 = __val572;
          agg_tmp2590 = __middle585; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t592 = agg_tmp2590;
          _Bool r593 = bool___gnu_cxx____ops___Val_less_iter__operator___int_const____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int________int_const_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp573, t591, t592);
          if (r593) {
            long t594 = __half584;
            __len575 = t594;
          } else {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r595 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(&__first570, &__middle585);
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r596 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(&__first570);
            long t597 = __len575;
            long t598 = __half584;
            long b599 = t597 - t598;
            long c600 = 1;
            long b601 = b599 - c600;
            __len575 = b601;
          }
    }
  __retval574 = __first570; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t602 = __retval574;
  return t602;
}

// function: _ZN9__gnu_cxx5__ops15__val_less_iterEv
struct __gnu_cxx____ops___Val_less_iter __gnu_cxx____ops____val_less_iter() {
bb603:
  struct __gnu_cxx____ops___Val_less_iter __retval604;
  struct __gnu_cxx____ops___Val_less_iter t605 = __retval604;
  return t605;
}

// function: _ZSt11upper_boundIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiET_S7_S7_RKT0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__upper_bound___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v606, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v607, int* v608) {
bb609:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first610;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last611;
  int* __val612;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval613;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0614;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1615;
  struct __gnu_cxx____ops___Val_less_iter agg_tmp2616;
  __first610 = v606;
  __last611 = v607;
  __val612 = v608;
  agg_tmp0614 = __first610; // copy
  agg_tmp1615 = __last611; // copy
  int* t617 = __val612;
  struct __gnu_cxx____ops___Val_less_iter r618 = __gnu_cxx____ops____val_less_iter();
  agg_tmp2616 = r618;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t619 = agg_tmp0614;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t620 = agg_tmp1615;
  struct __gnu_cxx____ops___Val_less_iter t621 = agg_tmp2616;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r622 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____upper_bound___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____ops___Val_less_iter_(t619, t620, t617, t621);
  __retval613 = r622;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t623 = __retval613;
  return t623;
}

// function: _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E
void _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E(struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* v624) {
bb625:
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* this626;
  this626 = v624;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t627 = this626;
  struct std____pair_base___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* base628 = (struct std____pair_base___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____*)((char *)t627 + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&t627->first);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&t627->second);
  return;
}

// function: _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EC2IRS6_S9_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesISA_SB_EEEEOT_OT0_
void _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EC2IRS6_S9_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesISA_SB_EEEEOT_OT0_(struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* v629, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v630, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v631) {
bb632:
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* this633;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __x634;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __y635;
  this633 = v629;
  __x634 = v630;
  __y635 = v631;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t636 = this633;
  struct std____pair_base___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* base637 = (struct std____pair_base___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____*)((char *)t636 + 0);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t638 = __x634;
  t636->first = *t638; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t639 = __y635;
  t636->second = *t639; // copy
  return;
}

// function: _ZSt13__equal_rangeIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiNS0_5__ops14_Iter_less_valENS7_14_Val_less_iterEESt4pairIT_SB_ESB_SB_RKT0_T1_T2_
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int________std____equal_range___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____ops___Iter_less_val____gnu_cxx____ops___Val_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v640, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v641, int* v642, struct __gnu_cxx____ops___Iter_less_val v643, struct __gnu_cxx____ops___Val_less_iter v644) {
bb645:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first646;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last647;
  int* __val648;
  struct __gnu_cxx____ops___Iter_less_val __comp_it_val649;
  struct __gnu_cxx____ops___Val_less_iter __comp_val_it650;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ __retval651;
  long __len652;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0653;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1654;
  __first646 = v640;
  __last647 = v641;
  __val648 = v642;
  __comp_it_val649 = v643;
  __comp_val_it650 = v644;
  agg_tmp0653 = __first646; // copy
  agg_tmp1654 = __last647; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t655 = agg_tmp0653;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t656 = agg_tmp1654;
  long r657 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t655, t656);
  __len652 = r657;
    while (1) {
      long t658 = __len652;
      long c659 = 0;
      _Bool c660 = ((t658 > c659)) ? 1 : 0;
      if (!c660) break;
        long __half661;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __middle662;
        long t663 = __len652;
        int c664 = 1;
        long s665 = t663 >> c664;
        __half661 = s665;
        __middle662 = __first646; // copy
        long t666 = __half661;
        void_std__advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_(&__middle662, t666);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2667;
          agg_tmp2667 = __middle662; // copy
          int* t668 = __val648;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t669 = agg_tmp2667;
          _Bool r670 = bool___gnu_cxx____ops___Iter_less_val__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_const____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_const___const(&__comp_it_val649, t669, t668);
          if (r670) {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r671 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(&__first646, &__middle662);
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r672 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(&__first646);
            long t673 = __len652;
            long t674 = __half661;
            long b675 = t673 - t674;
            long c676 = 1;
            long b677 = b675 - c676;
            __len652 = b677;
          } else {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3678;
              int* t679 = __val648;
              agg_tmp3678 = __middle662; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t680 = agg_tmp3678;
              _Bool r681 = bool___gnu_cxx____ops___Val_less_iter__operator___int_const____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int________int_const_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp_val_it650, t679, t680);
              if (r681) {
                long t682 = __half661;
                __len652 = t682;
              } else {
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __left683;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4684;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5685;
                struct __gnu_cxx____ops___Iter_less_val agg_tmp6686;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __right687;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7688;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp8689;
                struct __gnu_cxx____ops___Val_less_iter agg_tmp9690;
                agg_tmp4684 = __first646; // copy
                agg_tmp5685 = __middle662; // copy
                int* t691 = __val648;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t692 = agg_tmp4684;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t693 = agg_tmp5685;
                struct __gnu_cxx____ops___Iter_less_val t694 = agg_tmp6686;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r695 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____lower_bound___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____ops___Iter_less_val_(t692, t693, t691, t694);
                __left683 = r695;
                long t696 = __len652;
                void_std__advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_(&__first646, t696);
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r697 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(&__middle662);
                agg_tmp7688 = *r697; // copy
                agg_tmp8689 = __first646; // copy
                int* t698 = __val648;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t699 = agg_tmp7688;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t700 = agg_tmp8689;
                struct __gnu_cxx____ops___Val_less_iter t701 = agg_tmp9690;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r702 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____upper_bound___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____ops___Val_less_iter_(t699, t700, t698, t701);
                __right687 = r702;
                _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EC2IRS6_S9_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesISA_SB_EEEEOT_OT0_(&__retval651, &__left683, &__right687);
                struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ t703 = __retval651;
                struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ ret_val704 = t703;
                return ret_val704;
              }
          }
    }
  _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EC2IRS6_S9_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesISA_SB_EEEEOT_OT0_(&__retval651, &__first646, &__first646);
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ t705 = __retval651;
  return t705;
}

// function: _ZSt11equal_rangeIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiESt4pairIT_S8_ES8_S8_RKT0_
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int________std__equal_range___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v706, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v707, int* v708) {
bb709:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first710;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last711;
  int* __val712;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ __retval713;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0714;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1715;
  struct __gnu_cxx____ops___Iter_less_val agg_tmp2716;
  struct __gnu_cxx____ops___Val_less_iter agg_tmp3717;
  __first710 = v706;
  __last711 = v707;
  __val712 = v708;
  agg_tmp0714 = __first710; // copy
  agg_tmp1715 = __last711; // copy
  int* t718 = __val712;
  struct __gnu_cxx____ops___Iter_less_val r719 = __gnu_cxx____ops____iter_less_val();
  agg_tmp2716 = r719;
  struct __gnu_cxx____ops___Val_less_iter r720 = __gnu_cxx____ops____val_less_iter();
  agg_tmp3717 = r720;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t721 = agg_tmp0714;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t722 = agg_tmp1715;
  struct __gnu_cxx____ops___Iter_less_val t723 = agg_tmp2716;
  struct __gnu_cxx____ops___Val_less_iter t724 = agg_tmp3717;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ r725 = std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int________std____equal_range___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____ops___Iter_less_val____gnu_cxx____ops___Val_less_iter_(t721, t722, t718, t723, t724);
  __retval713 = r725;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ t726 = __retval713;
  return t726;
}

// function: _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EaSEOS7_Qcl13_S_assignableIT_T0_EE
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EaSEOS7_Qcl13_S_assignableIT_T0_EE(struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* v727, struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* v728) {
bb729:
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* this730;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* __p731;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* __retval732;
  this730 = v727;
  __p731 = v728;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t733 = this730;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t734 = __p731;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r735 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&t733->first, &t734->first);
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t736 = __p731;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r737 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&t733->second, &t736->second);
  __retval732 = t733;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t738 = __retval732;
  return t738;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v739, void* v740) {
bb741:
  struct std__basic_ostream_char__std__char_traits_char__* this742;
  void* __pf743;
  struct std__basic_ostream_char__std__char_traits_char__* __retval744;
  this742 = v739;
  __pf743 = v740;
  struct std__basic_ostream_char__std__char_traits_char__* t745 = this742;
  void* t746 = __pf743;
  struct std__basic_ostream_char__std__char_traits_char__* r747 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t746)(t745);
  __retval744 = r747;
  struct std__basic_ostream_char__std__char_traits_char__* t748 = __retval744;
  return t748;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v749) {
bb750:
  struct std__basic_ostream_char__std__char_traits_char__* __os751;
  struct std__basic_ostream_char__std__char_traits_char__* __retval752;
  __os751 = v749;
  struct std__basic_ostream_char__std__char_traits_char__* t753 = __os751;
  struct std__basic_ostream_char__std__char_traits_char__* r754 = std__ostream__flush(t753);
  __retval752 = r754;
  struct std__basic_ostream_char__std__char_traits_char__* t755 = __retval752;
  return t755;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v756) {
bb757:
  struct std__ctype_char_* __f758;
  struct std__ctype_char_* __retval759;
  __f758 = v756;
    struct std__ctype_char_* t760 = __f758;
    _Bool cast761 = (_Bool)t760;
    _Bool u762 = !cast761;
    if (u762) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t763 = __f758;
  __retval759 = t763;
  struct std__ctype_char_* t764 = __retval759;
  return t764;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v765, char v766) {
bb767:
  struct std__ctype_char_* this768;
  char __c769;
  char __retval770;
  this768 = v765;
  __c769 = v766;
  struct std__ctype_char_* t771 = this768;
    char t772 = t771->_M_widen_ok;
    _Bool cast773 = (_Bool)t772;
    if (cast773) {
      char t774 = __c769;
      unsigned char cast775 = (unsigned char)t774;
      unsigned long cast776 = (unsigned long)cast775;
      char t777 = t771->_M_widen[cast776];
      __retval770 = t777;
      char t778 = __retval770;
      return t778;
    }
  std__ctype_char____M_widen_init___const(t771);
  char t779 = __c769;
  void** v780 = (void**)t771;
  void* v781 = *((void**)v780);
  char vcall784 = (char)__VERIFIER_virtual_call_char_char(t771, 6, t779);
  __retval770 = vcall784;
  char t785 = __retval770;
  return t785;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v786, char v787) {
bb788:
  struct std__basic_ios_char__std__char_traits_char__* this789;
  char __c790;
  char __retval791;
  this789 = v786;
  __c790 = v787;
  struct std__basic_ios_char__std__char_traits_char__* t792 = this789;
  struct std__ctype_char_* t793 = t792->_M_ctype;
  struct std__ctype_char_* r794 = std__ctype_char__const__std____check_facet_std__ctype_char___(t793);
  char t795 = __c790;
  char r796 = std__ctype_char___widen_char__const(r794, t795);
  __retval791 = r796;
  char t797 = __retval791;
  return t797;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v798) {
bb799:
  struct std__basic_ostream_char__std__char_traits_char__* __os800;
  struct std__basic_ostream_char__std__char_traits_char__* __retval801;
  __os800 = v798;
  struct std__basic_ostream_char__std__char_traits_char__* t802 = __os800;
  struct std__basic_ostream_char__std__char_traits_char__* t803 = __os800;
  void** v804 = (void**)t803;
  void* v805 = *((void**)v804);
  unsigned char* cast806 = (unsigned char*)v805;
  long c807 = -24;
  unsigned char* ptr808 = &(cast806)[c807];
  long* cast809 = (long*)ptr808;
  long t810 = *cast809;
  unsigned char* cast811 = (unsigned char*)t803;
  unsigned char* ptr812 = &(cast811)[t810];
  struct std__basic_ostream_char__std__char_traits_char__* cast813 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr812;
  struct std__basic_ios_char__std__char_traits_char__* cast814 = (struct std__basic_ios_char__std__char_traits_char__*)cast813;
  char c815 = 10;
  char r816 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast814, c815);
  struct std__basic_ostream_char__std__char_traits_char__* r817 = std__ostream__put(t802, r816);
  struct std__basic_ostream_char__std__char_traits_char__* r818 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r817);
  __retval801 = r818;
  struct std__basic_ostream_char__std__char_traits_char__* t819 = __retval801;
  return t819;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v820) {
bb821:
  struct std__vector_int__std__allocator_int__* this822;
  this822 = v820;
  struct std__vector_int__std__allocator_int__* t823 = this822;
    struct std___Vector_base_int__std__allocator_int__* base824 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t823 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base825 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base824->_M_impl) + 0);
    int* t826 = base825->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base827 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t823 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base828 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base827->_M_impl) + 0);
    int* t829 = base828->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base830 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t823 + 0);
    struct std__allocator_int_* r831 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base830);
    void_std___Destroy_int___int_(t826, t829, r831);
  {
    struct std___Vector_base_int__std__allocator_int__* base832 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t823 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base832);
  }
  return;
}

// function: main
int main() {
bb833:
  int __retval834;
  int SIZE835;
  int a1836[10];
  struct std__vector_int__std__allocator_int__ v837;
  struct std__allocator_int_ ref_tmp0838;
  struct std__ostream_iterator_int__char__std__char_traits_char__ output839;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0840;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1841;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2842;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3843;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ lower844;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1845;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4846;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5847;
  int ref_tmp2848;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3849;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ upper850;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp4851;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6852;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7853;
  int ref_tmp5854;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp6855;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ eq856;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ ref_tmp7857;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp8858;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp9859;
  int ref_tmp8860;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp9861;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp10862;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11863;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp10864;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11865;
  int ref_tmp12866;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp13867;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp14868;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp12869;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp13870;
  int ref_tmp15871;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp16872;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ ref_tmp17873;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp14874;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp15875;
  int ref_tmp18876;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp19877;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp20878;
  int c879 = 0;
  __retval834 = c879;
  int c880 = 10;
  SIZE835 = c880;
  // array copy
  __builtin_memcpy(a1836, __const_main_a1, (unsigned long)10 * sizeof(__const_main_a1[0]));
  int* cast881 = (int*)&(a1836);
  int* cast882 = (int*)&(a1836);
  int t883 = SIZE835;
  int* ptr884 = &(cast882)[t883];
  std__allocator_int___allocator_2(&ref_tmp0838);
    std__vector_int__std__allocator_int_____vector_int___void_(&v837, cast881, ptr884, &ref_tmp0838);
  {
    std__allocator_int____allocator(&ref_tmp0838);
  }
    char* cast885 = (char*)&(_str);
    std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(&output839, &_ZSt4cout, cast885);
    char* cast886 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r887 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast886);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r888 = std__vector_int__std__allocator_int_____begin(&v837);
    agg_tmp0840 = r888;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r889 = std__vector_int__std__allocator_int_____end(&v837);
    agg_tmp1841 = r889;
    std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp2842, &output839);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t890 = agg_tmp0840;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t891 = agg_tmp1841;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t892 = agg_tmp2842;
    struct std__ostream_iterator_int__char__std__char_traits_char__ r893 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t890, t891, t892);
    agg_tmp3843 = r893;
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&lower844);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r894 = std__vector_int__std__allocator_int_____begin(&v837);
    agg_tmp4846 = r894;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r895 = std__vector_int__std__allocator_int_____end(&v837);
    agg_tmp5847 = r895;
    int c896 = 6;
    ref_tmp2848 = c896;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t897 = agg_tmp4846;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t898 = agg_tmp5847;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r899 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__lower_bound___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t897, t898, &ref_tmp2848);
    ref_tmp1845 = r899;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r900 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&lower844, &ref_tmp1845);
    char* cast901 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r902 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast901);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r903 = std__vector_int__std__allocator_int_____begin(&v837);
    ref_tmp3849 = r903;
    long r904 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&lower844, &ref_tmp3849);
    struct std__basic_ostream_char__std__char_traits_char__* r905 = std__ostream__operator___2(r902, r904);
    char* cast906 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r907 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r905, cast906);
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&upper850);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r908 = std__vector_int__std__allocator_int_____begin(&v837);
    agg_tmp6852 = r908;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r909 = std__vector_int__std__allocator_int_____end(&v837);
    agg_tmp7853 = r909;
    int c910 = 6;
    ref_tmp5854 = c910;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t911 = agg_tmp6852;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t912 = agg_tmp7853;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r913 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__upper_bound___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t911, t912, &ref_tmp5854);
    ref_tmp4851 = r913;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r914 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&upper850, &ref_tmp4851);
    char* cast915 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r916 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast915);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r917 = std__vector_int__std__allocator_int_____begin(&v837);
    ref_tmp6855 = r917;
    long r918 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&upper850, &ref_tmp6855);
    struct std__basic_ostream_char__std__char_traits_char__* r919 = std__ostream__operator___2(r916, r918);
    char* cast920 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r921 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r919, cast920);
    _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E(&eq856);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r922 = std__vector_int__std__allocator_int_____begin(&v837);
    agg_tmp8858 = r922;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r923 = std__vector_int__std__allocator_int_____end(&v837);
    agg_tmp9859 = r923;
    int c924 = 6;
    ref_tmp8860 = c924;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t925 = agg_tmp8858;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t926 = agg_tmp9859;
    struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ r927 = std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int________std__equal_range___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t925, t926, &ref_tmp8860);
    ref_tmp7857 = r927;
    struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* r928 = _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EaSEOS7_Qcl13_S_assignableIT_T0_EE(&eq856, &ref_tmp7857);
    char* cast929 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r930 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast929);
    char* cast931 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* r932 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r930, cast931);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r933 = std__vector_int__std__allocator_int_____begin(&v837);
    ref_tmp9861 = r933;
    long r934 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&eq856.first, &ref_tmp9861);
    struct std__basic_ostream_char__std__char_traits_char__* r935 = std__ostream__operator___2(r932, r934);
    char* cast936 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r937 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r935, cast936);
    char* cast938 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* r939 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast938);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r940 = std__vector_int__std__allocator_int_____begin(&v837);
    ref_tmp10862 = r940;
    long r941 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&eq856.second, &ref_tmp10862);
    struct std__basic_ostream_char__std__char_traits_char__* r942 = std__ostream__operator___2(r939, r941);
    char* cast943 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r944 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r942, cast943);
    char* cast945 = (char*)&(_str_8);
    struct std__basic_ostream_char__std__char_traits_char__* r946 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast945);
    char* cast947 = (char*)&(_str_9);
    struct std__basic_ostream_char__std__char_traits_char__* r948 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r946, cast947);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r949 = std__vector_int__std__allocator_int_____begin(&v837);
    agg_tmp10864 = r949;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r950 = std__vector_int__std__allocator_int_____end(&v837);
    agg_tmp11865 = r950;
    int c951 = 5;
    ref_tmp12866 = c951;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t952 = agg_tmp10864;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t953 = agg_tmp11865;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r954 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__lower_bound___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t952, t953, &ref_tmp12866);
    ref_tmp11863 = r954;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r955 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&lower844, &ref_tmp11863);
    char* cast956 = (char*)&(_str_10);
    struct std__basic_ostream_char__std__char_traits_char__* r957 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast956);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r958 = std__vector_int__std__allocator_int_____begin(&v837);
    ref_tmp13867 = r958;
    long r959 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&lower844, &ref_tmp13867);
    struct std__basic_ostream_char__std__char_traits_char__* r960 = std__ostream__operator___2(r957, r959);
    char* cast961 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r962 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r960, cast961);
    char* cast963 = (char*)&(_str_11);
    struct std__basic_ostream_char__std__char_traits_char__* r964 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast963);
    char* cast965 = (char*)&(_str_12);
    struct std__basic_ostream_char__std__char_traits_char__* r966 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r964, cast965);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r967 = std__vector_int__std__allocator_int_____begin(&v837);
    agg_tmp12869 = r967;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r968 = std__vector_int__std__allocator_int_____end(&v837);
    agg_tmp13870 = r968;
    int c969 = 7;
    ref_tmp15871 = c969;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t970 = agg_tmp12869;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t971 = agg_tmp13870;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r972 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__upper_bound___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t970, t971, &ref_tmp15871);
    ref_tmp14868 = r972;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r973 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&upper850, &ref_tmp14868);
    char* cast974 = (char*)&(_str_13);
    struct std__basic_ostream_char__std__char_traits_char__* r975 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast974);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r976 = std__vector_int__std__allocator_int_____begin(&v837);
    ref_tmp16872 = r976;
    long r977 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&upper850, &ref_tmp16872);
    struct std__basic_ostream_char__std__char_traits_char__* r978 = std__ostream__operator___2(r975, r977);
    char* cast979 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r980 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r978, cast979);
    char* cast981 = (char*)&(_str_14);
    struct std__basic_ostream_char__std__char_traits_char__* r982 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast981);
    char* cast983 = (char*)&(_str_15);
    struct std__basic_ostream_char__std__char_traits_char__* r984 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r982, cast983);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r985 = std__vector_int__std__allocator_int_____begin(&v837);
    agg_tmp14874 = r985;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r986 = std__vector_int__std__allocator_int_____end(&v837);
    agg_tmp15875 = r986;
    int c987 = 5;
    ref_tmp18876 = c987;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t988 = agg_tmp14874;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t989 = agg_tmp15875;
    struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ r990 = std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int________std__equal_range___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t988, t989, &ref_tmp18876);
    ref_tmp17873 = r990;
    struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* r991 = _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EaSEOS7_Qcl13_S_assignableIT_T0_EE(&eq856, &ref_tmp17873);
    char* cast992 = (char*)&(_str_10);
    struct std__basic_ostream_char__std__char_traits_char__* r993 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast992);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r994 = std__vector_int__std__allocator_int_____begin(&v837);
    ref_tmp19877 = r994;
    long r995 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&eq856.first, &ref_tmp19877);
    struct std__basic_ostream_char__std__char_traits_char__* r996 = std__ostream__operator___2(r993, r995);
    char* cast997 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r998 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r996, cast997);
    char* cast999 = (char*)&(_str_16);
    struct std__basic_ostream_char__std__char_traits_char__* r1000 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast999);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1001 = std__vector_int__std__allocator_int_____begin(&v837);
    ref_tmp20878 = r1001;
    long r1002 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&eq856.second, &ref_tmp20878);
    struct std__basic_ostream_char__std__char_traits_char__* r1003 = std__ostream__operator___2(r1000, r1002);
    char* cast1004 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r1005 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1003, cast1004);
    struct std__basic_ostream_char__std__char_traits_char__* r1006 = std__ostream__operator___std__ostream_____(r1005, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1007 = 0;
    __retval834 = c1007;
    int t1008 = __retval834;
    int ret_val1009 = t1008;
    {
      std__vector_int__std__allocator_int______vector(&v837);
    }
    return ret_val1009;
  int t1010 = __retval834;
  return t1010;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v1011) {
bb1012:
  struct std____new_allocator_int_* this1013;
  this1013 = v1011;
  struct std____new_allocator_int_* t1014 = this1013;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1015, struct std__allocator_int_* v1016) {
bb1017:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1018;
  struct std__allocator_int_* __a1019;
  this1018 = v1015;
  __a1019 = v1016;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1020 = this1018;
  struct std__allocator_int_* base1021 = (struct std__allocator_int_*)((char *)t1020 + 0);
  struct std__allocator_int_* t1022 = __a1019;
  std__allocator_int___allocator(base1021, t1022);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1023 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1020 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1023);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1024) {
bb1025:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1026;
  this1026 = v1024;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1027 = this1026;
  {
    struct std__allocator_int_* base1028 = (struct std__allocator_int_*)((char *)t1027 + 0);
    std__allocator_int____allocator(base1028);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1029, struct std__allocator_int_* v1030) {
bb1031:
  struct std___Vector_base_int__std__allocator_int__* this1032;
  struct std__allocator_int_* __a1033;
  this1032 = v1029;
  __a1033 = v1030;
  struct std___Vector_base_int__std__allocator_int__* t1034 = this1032;
  struct std__allocator_int_* t1035 = __a1033;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1034->_M_impl, t1035);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v1036, int** v1037, int* v1038) {
bb1039:
  struct std__ranges____distance_fn* this1040;
  int** __first1041;
  int* __last1042;
  long __retval1043;
  this1040 = v1036;
  __first1041 = v1037;
  __last1042 = v1038;
  struct std__ranges____distance_fn* t1044 = this1040;
  int* t1045 = __last1042;
  int** t1046 = __first1041;
  int* t1047 = *t1046;
  long diff1048 = t1045 - t1047;
  __retval1043 = diff1048;
  long t1049 = __retval1043;
  return t1049;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1050:
  _Bool __retval1051;
    _Bool c1052 = 0;
    __retval1051 = c1052;
    _Bool t1053 = __retval1051;
    return t1053;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1054) {
bb1055:
  struct std____new_allocator_int_* this1056;
  unsigned long __retval1057;
  this1056 = v1054;
  struct std____new_allocator_int_* t1058 = this1056;
  unsigned long c1059 = 9223372036854775807;
  unsigned long c1060 = 4;
  unsigned long b1061 = c1059 / c1060;
  __retval1057 = b1061;
  unsigned long t1062 = __retval1057;
  return t1062;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1063, unsigned long v1064, void* v1065) {
bb1066:
  struct std____new_allocator_int_* this1067;
  unsigned long __n1068;
  void* unnamed1069;
  int* __retval1070;
  this1067 = v1063;
  __n1068 = v1064;
  unnamed1069 = v1065;
  struct std____new_allocator_int_* t1071 = this1067;
    unsigned long t1072 = __n1068;
    unsigned long r1073 = std____new_allocator_int____M_max_size___const(t1071);
    _Bool c1074 = ((t1072 > r1073)) ? 1 : 0;
    if (c1074) {
        unsigned long t1075 = __n1068;
        unsigned long c1076 = -1;
        unsigned long c1077 = 4;
        unsigned long b1078 = c1076 / c1077;
        _Bool c1079 = ((t1075 > b1078)) ? 1 : 0;
        if (c1079) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1080 = 4;
    unsigned long c1081 = 16;
    _Bool c1082 = ((c1080 > c1081)) ? 1 : 0;
    if (c1082) {
      unsigned long __al1083;
      unsigned long c1084 = 4;
      __al1083 = c1084;
      unsigned long t1085 = __n1068;
      unsigned long c1086 = 4;
      unsigned long b1087 = t1085 * c1086;
      unsigned long t1088 = __al1083;
      void* r1089 = operator_new_2(b1087, t1088);
      int* cast1090 = (int*)r1089;
      __retval1070 = cast1090;
      int* t1091 = __retval1070;
      return t1091;
    }
  unsigned long t1092 = __n1068;
  unsigned long c1093 = 4;
  unsigned long b1094 = t1092 * c1093;
  void* r1095 = operator_new(b1094);
  int* cast1096 = (int*)r1095;
  __retval1070 = cast1096;
  int* t1097 = __retval1070;
  return t1097;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1098, unsigned long v1099) {
bb1100:
  struct std__allocator_int_* this1101;
  unsigned long __n1102;
  int* __retval1103;
  this1101 = v1098;
  __n1102 = v1099;
  struct std__allocator_int_* t1104 = this1101;
    _Bool r1105 = std____is_constant_evaluated();
    if (r1105) {
        unsigned long t1106 = __n1102;
        unsigned long c1107 = 4;
        unsigned long ovr1108;
        _Bool ovf1109 = __builtin_mul_overflow(t1106, c1107, &ovr1108);
        __n1102 = ovr1108;
        if (ovf1109) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1110 = __n1102;
      void* r1111 = operator_new(t1110);
      int* cast1112 = (int*)r1111;
      __retval1103 = cast1112;
      int* t1113 = __retval1103;
      return t1113;
    }
  struct std____new_allocator_int_* base1114 = (struct std____new_allocator_int_*)((char *)t1104 + 0);
  unsigned long t1115 = __n1102;
  void* c1116 = ((void*)0);
  int* r1117 = std____new_allocator_int___allocate(base1114, t1115, c1116);
  __retval1103 = r1117;
  int* t1118 = __retval1103;
  return t1118;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1119, unsigned long v1120) {
bb1121:
  struct std__allocator_int_* __a1122;
  unsigned long __n1123;
  int* __retval1124;
  __a1122 = v1119;
  __n1123 = v1120;
  struct std__allocator_int_* t1125 = __a1122;
  unsigned long t1126 = __n1123;
  int* r1127 = std__allocator_int___allocate(t1125, t1126);
  __retval1124 = r1127;
  int* t1128 = __retval1124;
  return t1128;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1129, unsigned long v1130) {
bb1131:
  struct std___Vector_base_int__std__allocator_int__* this1132;
  unsigned long __n1133;
  int* __retval1134;
  this1132 = v1129;
  __n1133 = v1130;
  struct std___Vector_base_int__std__allocator_int__* t1135 = this1132;
  unsigned long t1136 = __n1133;
  unsigned long c1137 = 0;
  _Bool c1138 = ((t1136 != c1137)) ? 1 : 0;
  int* ternary1139;
  if (c1138) {
    struct std__allocator_int_* base1140 = (struct std__allocator_int_*)((char *)&(t1135->_M_impl) + 0);
    unsigned long t1141 = __n1133;
    int* r1142 = std__allocator_traits_std__allocator_int_____allocate(base1140, t1141);
    ternary1139 = (int*)r1142;
  } else {
    int* c1143 = ((void*)0);
    ternary1139 = (int*)c1143;
  }
  __retval1134 = ternary1139;
  int* t1144 = __retval1134;
  return t1144;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1145, unsigned long* v1146) {
bb1147:
  unsigned long* __a1148;
  unsigned long* __b1149;
  unsigned long* __retval1150;
  __a1148 = v1145;
  __b1149 = v1146;
    unsigned long* t1151 = __b1149;
    unsigned long t1152 = *t1151;
    unsigned long* t1153 = __a1148;
    unsigned long t1154 = *t1153;
    _Bool c1155 = ((t1152 < t1154)) ? 1 : 0;
    if (c1155) {
      unsigned long* t1156 = __b1149;
      __retval1150 = t1156;
      unsigned long* t1157 = __retval1150;
      return t1157;
    }
  unsigned long* t1158 = __a1148;
  __retval1150 = t1158;
  unsigned long* t1159 = __retval1150;
  return t1159;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1160) {
bb1161:
  struct std__allocator_int_* __a1162;
  unsigned long __retval1163;
  unsigned long __diffmax1164;
  unsigned long __allocmax1165;
  __a1162 = v1160;
  unsigned long c1166 = 2305843009213693951;
  __diffmax1164 = c1166;
  unsigned long c1167 = 4611686018427387903;
  __allocmax1165 = c1167;
  unsigned long* r1168 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1164, &__allocmax1165);
  unsigned long t1169 = *r1168;
  __retval1163 = t1169;
  unsigned long t1170 = __retval1163;
  return t1170;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1171, struct std__allocator_int_* v1172) {
bb1173:
  struct std__allocator_int_* this1174;
  struct std__allocator_int_* __a1175;
  this1174 = v1171;
  __a1175 = v1172;
  struct std__allocator_int_* t1176 = this1174;
  struct std____new_allocator_int_* base1177 = (struct std____new_allocator_int_*)((char *)t1176 + 0);
  struct std__allocator_int_* t1178 = __a1175;
  struct std____new_allocator_int_* base1179 = (struct std____new_allocator_int_*)((char *)t1178 + 0);
  std____new_allocator_int_____new_allocator(base1177, base1179);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1180, struct std__allocator_int_* v1181) {
bb1182:
  unsigned long __n1183;
  struct std__allocator_int_* __a1184;
  unsigned long __retval1185;
  __n1183 = v1180;
  __a1184 = v1181;
    struct std__allocator_int_ ref_tmp01186;
    _Bool tmp_exprcleanup1187;
    unsigned long t1188 = __n1183;
    struct std__allocator_int_* t1189 = __a1184;
    std__allocator_int___allocator(&ref_tmp01186, t1189);
      unsigned long r1190 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01186);
      _Bool c1191 = ((t1188 > r1190)) ? 1 : 0;
      tmp_exprcleanup1187 = c1191;
    {
      std__allocator_int____allocator(&ref_tmp01186);
    }
    _Bool t1192 = tmp_exprcleanup1187;
    if (t1192) {
      char* cast1193 = (char*)&(_str_17);
      std____throw_length_error(cast1193);
    }
  unsigned long t1194 = __n1183;
  __retval1185 = t1194;
  unsigned long t1195 = __retval1185;
  return t1195;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1196) {
bb1197:
  struct std___Vector_base_int__std__allocator_int__* this1198;
  struct std__allocator_int_* __retval1199;
  this1198 = v1196;
  struct std___Vector_base_int__std__allocator_int__* t1200 = this1198;
  struct std__allocator_int_* base1201 = (struct std__allocator_int_*)((char *)&(t1200->_M_impl) + 0);
  __retval1199 = base1201;
  struct std__allocator_int_* t1202 = __retval1199;
  return t1202;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1203:
  _Bool __retval1204;
    _Bool c1205 = 0;
    __retval1204 = c1205;
    _Bool t1206 = __retval1204;
    return t1206;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1207, int** v1208) {
bb1209:
  struct std___UninitDestroyGuard_int____void_* this1210;
  int** __first1211;
  this1210 = v1207;
  __first1211 = v1208;
  struct std___UninitDestroyGuard_int____void_* t1212 = this1210;
  int** t1213 = __first1211;
  int* t1214 = *t1213;
  t1212->_M_first = t1214;
  int** t1215 = __first1211;
  t1212->_M_cur = t1215;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1216, int* v1217) {
bb1218:
  int* __location1219;
  int* __args1220;
  int* __retval1221;
  void* __loc1222;
  __location1219 = v1216;
  __args1220 = v1217;
  int* t1223 = __location1219;
  void* cast1224 = (void*)t1223;
  __loc1222 = cast1224;
    void* t1225 = __loc1222;
    int* cast1226 = (int*)t1225;
    int* t1227 = __args1220;
    int t1228 = *t1227;
    *cast1226 = t1228;
    __retval1221 = cast1226;
    int* t1229 = __retval1221;
    return t1229;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v1230, int* v1231) {
bb1232:
  int* __p1233;
  int* __args1234;
  __p1233 = v1230;
  __args1234 = v1231;
    _Bool r1235 = std____is_constant_evaluated();
    if (r1235) {
      int* t1236 = __p1233;
      int* t1237 = __args1234;
      int* r1238 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1236, t1237);
      return;
    }
  int* t1239 = __p1233;
  void* cast1240 = (void*)t1239;
  int* cast1241 = (int*)cast1240;
  int* t1242 = __args1234;
  int t1243 = *t1242;
  *cast1241 = t1243;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1244) {
bb1245:
  struct std___UninitDestroyGuard_int____void_* this1246;
  this1246 = v1244;
  struct std___UninitDestroyGuard_int____void_* t1247 = this1246;
  int** c1248 = ((void*)0);
  t1247->_M_cur = c1248;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1249) {
bb1250:
  struct std___UninitDestroyGuard_int____void_* this1251;
  this1251 = v1249;
  struct std___UninitDestroyGuard_int____void_* t1252 = this1251;
    int** t1253 = t1252->_M_cur;
    int** c1254 = ((void*)0);
    _Bool c1255 = ((t1253 != c1254)) ? 1 : 0;
    if (c1255) {
      int* t1256 = t1252->_M_first;
      int** t1257 = t1252->_M_cur;
      int* t1258 = *t1257;
      void_std___Destroy_int__(t1256, t1258);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v1259, int* v1260, int* v1261) {
bb1262:
  int* __first1263;
  int* __last1264;
  int* __result1265;
  int* __retval1266;
  struct std___UninitDestroyGuard_int____void_ __guard1267;
  __first1263 = v1259;
  __last1264 = v1260;
  __result1265 = v1261;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1267, &__result1265);
      while (1) {
        int* t1269 = __first1263;
        int* t1270 = __last1264;
        _Bool c1271 = ((t1269 != t1270)) ? 1 : 0;
        if (!c1271) break;
        int* t1272 = __result1265;
        int* t1273 = __first1263;
        void_std___Construct_int__int__(t1272, t1273);
      for_step1268: ;
        int* t1274 = __first1263;
        int c1275 = 1;
        int* ptr1276 = &(t1274)[c1275];
        __first1263 = ptr1276;
        int* t1277 = __result1265;
        int c1278 = 1;
        int* ptr1279 = &(t1277)[c1278];
        __result1265 = ptr1279;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1267);
    int* t1280 = __result1265;
    __retval1266 = t1280;
    int* t1281 = __retval1266;
    int* ret_val1282 = t1281;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1267);
    }
    return ret_val1282;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v1283) {
bb1284:
  int* __it1285;
  int* __retval1286;
  __it1285 = v1283;
  int* t1287 = __it1285;
  __retval1286 = t1287;
  int* t1288 = __retval1286;
  return t1288;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v1289, int* v1290, int* v1291) {
bb1292:
  int* __first1293;
  int* __last1294;
  int* __result1295;
  int* __retval1296;
  __first1293 = v1289;
  __last1294 = v1290;
  __result1295 = v1291;
      long __n1297;
      int* t1298 = __last1294;
      int* t1299 = __first1293;
      long diff1300 = t1298 - t1299;
      __n1297 = diff1300;
        long t1301 = __n1297;
        long c1302 = 0;
        _Bool c1303 = ((t1301 > c1302)) ? 1 : 0;
        if (c1303) {
          int* t1304 = __result1295;
          int* r1305 = int__std____niter_base_int__(t1304);
          void* cast1306 = (void*)r1305;
          int* t1307 = __first1293;
          int* r1308 = int__std____niter_base_int__(t1307);
          void* cast1309 = (void*)r1308;
          long t1310 = __n1297;
          unsigned long cast1311 = (unsigned long)t1310;
          unsigned long c1312 = 4;
          unsigned long b1313 = cast1311 * c1312;
          void* r1314 = memcpy(cast1306, cast1309, b1313);
          long t1315 = __n1297;
          int* t1316 = __result1295;
          int* ptr1317 = &(t1316)[t1315];
          __result1295 = ptr1317;
        }
      int* t1318 = __result1295;
      __retval1296 = t1318;
      int* t1319 = __retval1296;
      return t1319;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v1320, int* v1321, int* v1322, struct std__allocator_int_* v1323) {
bb1324:
  int* __first1325;
  int* __last1326;
  int* __result1327;
  struct std__allocator_int_* unnamed1328;
  int* __retval1329;
  __first1325 = v1320;
  __last1326 = v1321;
  __result1327 = v1322;
  unnamed1328 = v1323;
    _Bool r1330 = std__is_constant_evaluated();
    if (r1330) {
      int* t1331 = __first1325;
      int* t1332 = __last1326;
      int* t1333 = __result1327;
      int* r1334 = int__std____do_uninit_copy_int___int___int__(t1331, t1332, t1333);
      __retval1329 = r1334;
      int* t1335 = __retval1329;
      return t1335;
    }
    int* t1336 = __first1325;
    int* t1337 = __last1326;
    int* t1338 = __result1327;
    int* r1339 = int__std__uninitialized_copy_int___int__(t1336, t1337, t1338);
    __retval1329 = r1339;
    int* t1340 = __retval1329;
    return t1340;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v1341, int* v1342, int* v1343, unsigned long v1344) {
bb1345:
  struct std__vector_int__std__allocator_int__* this1346;
  int* __first1347;
  int* __last1348;
  unsigned long __n1349;
  int* __start1350;
  this1346 = v1341;
  __first1347 = v1342;
  __last1348 = v1343;
  __n1349 = v1344;
  struct std__vector_int__std__allocator_int__* t1351 = this1346;
  struct std___Vector_base_int__std__allocator_int__* base1352 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1351 + 0);
  unsigned long t1353 = __n1349;
  struct std___Vector_base_int__std__allocator_int__* base1354 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1351 + 0);
  struct std__allocator_int_* r1355 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1354);
  unsigned long r1356 = std__vector_int__std__allocator_int______S_check_init_len(t1353, r1355);
  int* r1357 = std___Vector_base_int__std__allocator_int______M_allocate(base1352, r1356);
  __start1350 = r1357;
  int* t1358 = __start1350;
  struct std___Vector_base_int__std__allocator_int__* base1359 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1351 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1360 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1359->_M_impl) + 0);
  base1360->_M_finish = t1358;
  struct std___Vector_base_int__std__allocator_int__* base1361 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1351 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1362 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1361->_M_impl) + 0);
  base1362->_M_start = t1358;
  int* t1363 = __start1350;
  unsigned long t1364 = __n1349;
  int* ptr1365 = &(t1363)[t1364];
  struct std___Vector_base_int__std__allocator_int__* base1366 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1351 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1367 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1366->_M_impl) + 0);
  base1367->_M_end_of_storage = ptr1365;
  int* t1368 = __first1347;
  int* t1369 = __last1348;
  int* t1370 = __start1350;
  struct std___Vector_base_int__std__allocator_int__* base1371 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1351 + 0);
  struct std__allocator_int_* r1372 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1371);
  int* r1373 = int__std____uninitialized_copy_a_int___int___int___int_(t1368, t1369, t1370, r1372);
  struct std___Vector_base_int__std__allocator_int__* base1374 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1351 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1375 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1374->_M_impl) + 0);
  base1375->_M_finish = r1373;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1376, int* v1377, unsigned long v1378) {
bb1379:
  struct std____new_allocator_int_* this1380;
  int* __p1381;
  unsigned long __n1382;
  this1380 = v1376;
  __p1381 = v1377;
  __n1382 = v1378;
  struct std____new_allocator_int_* t1383 = this1380;
    unsigned long c1384 = 4;
    unsigned long c1385 = 16;
    _Bool c1386 = ((c1384 > c1385)) ? 1 : 0;
    if (c1386) {
      int* t1387 = __p1381;
      void* cast1388 = (void*)t1387;
      unsigned long t1389 = __n1382;
      unsigned long c1390 = 4;
      unsigned long b1391 = t1389 * c1390;
      unsigned long c1392 = 4;
      operator_delete_3(cast1388, b1391, c1392);
      return;
    }
  int* t1393 = __p1381;
  void* cast1394 = (void*)t1393;
  unsigned long t1395 = __n1382;
  unsigned long c1396 = 4;
  unsigned long b1397 = t1395 * c1396;
  operator_delete_2(cast1394, b1397);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1398, int* v1399, unsigned long v1400) {
bb1401:
  struct std__allocator_int_* this1402;
  int* __p1403;
  unsigned long __n1404;
  this1402 = v1398;
  __p1403 = v1399;
  __n1404 = v1400;
  struct std__allocator_int_* t1405 = this1402;
    _Bool r1406 = std____is_constant_evaluated();
    if (r1406) {
      int* t1407 = __p1403;
      void* cast1408 = (void*)t1407;
      operator_delete(cast1408);
      return;
    }
  struct std____new_allocator_int_* base1409 = (struct std____new_allocator_int_*)((char *)t1405 + 0);
  int* t1410 = __p1403;
  unsigned long t1411 = __n1404;
  std____new_allocator_int___deallocate(base1409, t1410, t1411);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1412, int* v1413, unsigned long v1414) {
bb1415:
  struct std__allocator_int_* __a1416;
  int* __p1417;
  unsigned long __n1418;
  __a1416 = v1412;
  __p1417 = v1413;
  __n1418 = v1414;
  struct std__allocator_int_* t1419 = __a1416;
  int* t1420 = __p1417;
  unsigned long t1421 = __n1418;
  std__allocator_int___deallocate(t1419, t1420, t1421);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1422, int* v1423, unsigned long v1424) {
bb1425:
  struct std___Vector_base_int__std__allocator_int__* this1426;
  int* __p1427;
  unsigned long __n1428;
  this1426 = v1422;
  __p1427 = v1423;
  __n1428 = v1424;
  struct std___Vector_base_int__std__allocator_int__* t1429 = this1426;
    int* t1430 = __p1427;
    _Bool cast1431 = (_Bool)t1430;
    if (cast1431) {
      struct std__allocator_int_* base1432 = (struct std__allocator_int_*)((char *)&(t1429->_M_impl) + 0);
      int* t1433 = __p1427;
      unsigned long t1434 = __n1428;
      std__allocator_traits_std__allocator_int_____deallocate(base1432, t1433, t1434);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1435) {
bb1436:
  struct std___Vector_base_int__std__allocator_int__* this1437;
  this1437 = v1435;
  struct std___Vector_base_int__std__allocator_int__* t1438 = this1437;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1439 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1438->_M_impl) + 0);
    int* t1440 = base1439->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1441 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1438->_M_impl) + 0);
    int* t1442 = base1441->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1443 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1438->_M_impl) + 0);
    int* t1444 = base1443->_M_start;
    long diff1445 = t1442 - t1444;
    unsigned long cast1446 = (unsigned long)diff1445;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1438, t1440, cast1446);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1438->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1447, struct std____new_allocator_int_* v1448) {
bb1449:
  struct std____new_allocator_int_* this1450;
  struct std____new_allocator_int_* unnamed1451;
  this1450 = v1447;
  unnamed1451 = v1448;
  struct std____new_allocator_int_* t1452 = this1450;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1453) {
bb1454:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1455;
  this1455 = v1453;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1456 = this1455;
  int* c1457 = ((void*)0);
  t1456->_M_start = c1457;
  int* c1458 = ((void*)0);
  t1456->_M_finish = c1458;
  int* c1459 = ((void*)0);
  t1456->_M_end_of_storage = c1459;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1460) {
bb1461:
  int* __location1462;
  __location1462 = v1460;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1463, int* v1464) {
bb1465:
  int* __first1466;
  int* __last1467;
  __first1466 = v1463;
  __last1467 = v1464;
      _Bool r1468 = std____is_constant_evaluated();
      if (r1468) {
          while (1) {
            int* t1470 = __first1466;
            int* t1471 = __last1467;
            _Bool c1472 = ((t1470 != t1471)) ? 1 : 0;
            if (!c1472) break;
            int* t1473 = __first1466;
            void_std__destroy_at_int_(t1473);
          for_step1469: ;
            int* t1474 = __first1466;
            int c1475 = 1;
            int* ptr1476 = &(t1474)[c1475];
            __first1466 = ptr1476;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1477, int* v1478, struct std__allocator_int_* v1479) {
bb1480:
  int* __first1481;
  int* __last1482;
  struct std__allocator_int_* unnamed1483;
  __first1481 = v1477;
  __last1482 = v1478;
  unnamed1483 = v1479;
  int* t1484 = __first1481;
  int* t1485 = __last1482;
  void_std___Destroy_int__(t1484, t1485);
  return;
}

