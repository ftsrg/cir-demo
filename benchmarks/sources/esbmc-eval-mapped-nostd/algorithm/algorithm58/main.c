extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
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
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
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

int __const_main_myints[5] = {10, 20, 30, 5, 15};
struct __gnu_cxx____ops___Iter_less_val __const__ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2____cmp;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[22] = "initial max heap   : ";
char _str_1[22] = "max heap after pop : ";
char _str_2[22] = "max heap after push: ";
char _str_3[11] = "v[0] == 99";
char _str_4[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm58/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_5[11] = "v[1] == 20";
char _str_6[11] = "v[2] == 10";
char _str_7[10] = "v[3] == 5";
char _str_8[11] = "v[4] == 15";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_9[49] = "cannot create std::vector larger than max_size()";
char _str_10[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE5frontEv[78] = "reference std::vector<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_11[15] = "!this->empty()";
char _str_12[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_heap.h";
char __PRETTY_FUNCTION____ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_[145] = "void std::pop_heap(_RandomAccessIterator, _RandomAccessIterator) [_RandomAccessIterator = __gnu_cxx::__normal_iterator<int *, std::vector<int>>]";
char _str_13[18] = "__first != __last";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE8pop_backEv[76] = "void std::vector<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_14[26] = "vector::_M_realloc_append";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_15[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_less_iter* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
_Bool bool___gnu_cxx____ops___Iter_less_val__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(struct __gnu_cxx____ops___Iter_less_val* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_val_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_less_val* p4);
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_less_iter p4);
void void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_less_iter* p2);
void void_std__make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* p0);
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____front(struct std__vector_int__std__allocator_int__* p0);
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
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_less_iter* p3);
void void_std__pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* p0, int* p1);
void std__vector_int__std__allocator_int_____pop_back(struct std__vector_int__std__allocator_int__* p0);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, char* p2);
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0, int* p1, unsigned long p2, struct std___Vector_base_int__std__allocator_int__* p3);
int* int__std__to_address_int_(int* p0);
int* auto_std____to_address_int__(int** p0);
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* p0, int** p1);
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
void void_std__vector_int__std__allocator_int______M_realloc_append_int_(struct std__vector_int__std__allocator_int__* p0, int* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* p0);
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* p0, int* p1);
void void_std__push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v29) {
bb30:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this31;
  int** __retval32;
  this31 = v29;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t33 = this31;
  __retval32 = &t33->_M_current;
  int** t34 = __retval32;
  return t34;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v35, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v36) {
bb37:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs38;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs39;
  long __retval40;
  __lhs38 = v35;
  __rhs39 = v36;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t41 = __lhs38;
  int** r42 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t41);
  int* t43 = *r42;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t44 = __rhs39;
  int** r45 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t44);
  int* t46 = *r45;
  long diff47 = t43 - t46;
  __retval40 = diff47;
  long t48 = __retval40;
  return t48;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v49, int** v50) {
bb51:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this52;
  int** __i53;
  this52 = v49;
  __i53 = v50;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t54 = this52;
  int** t55 = __i53;
  int* t56 = *t55;
  t54->_M_current = t56;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v57, long v58) {
bb59:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this60;
  long __n61;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval62;
  int* ref_tmp063;
  this60 = v57;
  __n61 = v58;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t64 = this60;
  int* t65 = t64->_M_current;
  long t66 = __n61;
  int* ptr67 = &(t65)[t66];
  ref_tmp063 = ptr67;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval62, &ref_tmp063);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t68 = __retval62;
  return t68;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v69) {
bb70:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this71;
  int* __retval72;
  this71 = v69;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t73 = this71;
  int* t74 = t73->_M_current;
  __retval72 = t74;
  int* t75 = __retval72;
  return t75;
}

// function: _ZNK9__gnu_cxx5__ops15_Iter_less_iterclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEES8_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_less_iter* v76, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v77, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v78) {
bb79:
  struct __gnu_cxx____ops___Iter_less_iter* this80;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it181;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it282;
  _Bool __retval83;
  this80 = v76;
  __it181 = v77;
  __it282 = v78;
  struct __gnu_cxx____ops___Iter_less_iter* t84 = this80;
  int* r85 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it181);
  int t86 = *r85;
  int* r87 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it282);
  int t88 = *r87;
  _Bool c89 = ((t86 < t88)) ? 1 : 0;
  __retval83 = c89;
  _Bool t90 = __retval83;
  return t90;
}

// function: _ZNK9__gnu_cxx5__ops14_Iter_less_valclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEEbT_RT0_
_Bool bool___gnu_cxx____ops___Iter_less_val__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(struct __gnu_cxx____ops___Iter_less_val* v91, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v92, int* v93) {
bb94:
  struct __gnu_cxx____ops___Iter_less_val* this95;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it96;
  int* __val97;
  _Bool __retval98;
  this95 = v91;
  __it96 = v92;
  __val97 = v93;
  struct __gnu_cxx____ops___Iter_less_val* t99 = this95;
  int* r100 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it96);
  int t101 = *r100;
  int* t102 = __val97;
  int t103 = *t102;
  _Bool c104 = ((t101 < t103)) ? 1 : 0;
  __retval98 = c104;
  _Bool t105 = __retval98;
  return t105;
}

// function: _ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops14_Iter_less_valEEvT_T0_SA_T1_RT2_
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_val_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v106, long v107, long v108, int v109, struct __gnu_cxx____ops___Iter_less_val* v110) {
bb111:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first112;
  long __holeIndex113;
  long __topIndex114;
  int __value115;
  struct __gnu_cxx____ops___Iter_less_val* __comp116;
  long __parent117;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2118;
  __first112 = v106;
  __holeIndex113 = v107;
  __topIndex114 = v108;
  __value115 = v109;
  __comp116 = v110;
  long t119 = __holeIndex113;
  long c120 = 1;
  long b121 = t119 - c120;
  long c122 = 2;
  long b123 = b121 / c122;
  __parent117 = b123;
    while (1) {
      long t124 = __holeIndex113;
      long t125 = __topIndex114;
      _Bool c126 = ((t124 > t125)) ? 1 : 0;
      _Bool ternary127;
      if (c126) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0128;
        struct __gnu_cxx____ops___Iter_less_val* t129 = __comp116;
        long t130 = __parent117;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r131 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first112, t130);
        agg_tmp0128 = r131;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t132 = agg_tmp0128;
        _Bool r133 = bool___gnu_cxx____ops___Iter_less_val__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(t129, t132, &__value115);
        ternary127 = (_Bool)r133;
      } else {
        _Bool c134 = 0;
        ternary127 = (_Bool)c134;
      }
      if (!ternary127) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0135;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1136;
        long t137 = __parent117;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r138 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first112, t137);
        ref_tmp0135 = r138;
        int* r139 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0135);
        int t140 = *r139;
        long t141 = __holeIndex113;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r142 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first112, t141);
        ref_tmp1136 = r142;
        int* r143 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1136);
        *r143 = t140;
        long t144 = __parent117;
        __holeIndex113 = t144;
        long t145 = __holeIndex113;
        long c146 = 1;
        long b147 = t145 - c146;
        long c148 = 2;
        long b149 = b147 / c148;
        __parent117 = b149;
    }
  int t150 = __value115;
  long t151 = __holeIndex113;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r152 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first112, t151);
  ref_tmp2118 = r152;
  int* r153 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp2118);
  *r153 = t150;
  return;
}

// function: _ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2_
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v154, long v155, long v156, int v157, struct __gnu_cxx____ops___Iter_less_iter v158) {
bb159:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first160;
  long __holeIndex161;
  long __len162;
  int __value163;
  struct __gnu_cxx____ops___Iter_less_iter __comp164;
  long __topIndex165;
  long __secondChild166;
  struct __gnu_cxx____ops___Iter_less_val __cmp167;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2168;
  __first160 = v154;
  __holeIndex161 = v155;
  __len162 = v156;
  __value163 = v157;
  __comp164 = v158;
  long t169 = __holeIndex161;
  __topIndex165 = t169;
  long t170 = __holeIndex161;
  __secondChild166 = t170;
    while (1) {
      long t171 = __secondChild166;
      long t172 = __len162;
      long c173 = 1;
      long b174 = t172 - c173;
      long c175 = 2;
      long b176 = b174 / c175;
      _Bool c177 = ((t171 < b176)) ? 1 : 0;
      if (!c177) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0178;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1179;
        long c180 = 2;
        long t181 = __secondChild166;
        long c182 = 1;
        long b183 = t181 + c182;
        long b184 = c180 * b183;
        __secondChild166 = b184;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0185;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1186;
          long t187 = __secondChild166;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r188 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first160, t187);
          agg_tmp0185 = r188;
          long t189 = __secondChild166;
          long c190 = 1;
          long b191 = t189 - c190;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r192 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first160, b191);
          agg_tmp1186 = r192;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t193 = agg_tmp0185;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t194 = agg_tmp1186;
          _Bool r195 = bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp164, t193, t194);
          if (r195) {
            long t196 = __secondChild166;
            long u197 = t196 - 1;
            __secondChild166 = u197;
          }
        long t198 = __secondChild166;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r199 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first160, t198);
        ref_tmp0178 = r199;
        int* r200 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0178);
        int t201 = *r200;
        long t202 = __holeIndex161;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r203 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first160, t202);
        ref_tmp1179 = r203;
        int* r204 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1179);
        *r204 = t201;
        long t205 = __secondChild166;
        __holeIndex161 = t205;
    }
    long t206 = __len162;
    long c207 = 1;
    long b208 = t206 & c207;
    long c209 = 0;
    _Bool c210 = ((b208 == c209)) ? 1 : 0;
    _Bool ternary211;
    if (c210) {
      long t212 = __secondChild166;
      long t213 = __len162;
      long c214 = 2;
      long b215 = t213 - c214;
      long c216 = 2;
      long b217 = b215 / c216;
      _Bool c218 = ((t212 == b217)) ? 1 : 0;
      ternary211 = (_Bool)c218;
    } else {
      _Bool c219 = 0;
      ternary211 = (_Bool)c219;
    }
    if (ternary211) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2220;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3221;
      long c222 = 2;
      long t223 = __secondChild166;
      long c224 = 1;
      long b225 = t223 + c224;
      long b226 = c222 * b225;
      __secondChild166 = b226;
      long t227 = __secondChild166;
      long c228 = 1;
      long b229 = t227 - c228;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r230 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first160, b229);
      ref_tmp2220 = r230;
      int* r231 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp2220);
      int t232 = *r231;
      long t233 = __holeIndex161;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r234 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first160, t233);
      ref_tmp3221 = r234;
      int* r235 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp3221);
      *r235 = t232;
      long t236 = __secondChild166;
      long c237 = 1;
      long b238 = t236 - c237;
      __holeIndex161 = b238;
    }
  __cmp167 = *&__const__ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2____cmp; // copy
  agg_tmp2168 = __first160; // copy
  long t239 = __holeIndex161;
  long t240 = __topIndex165;
  int t241 = __value163;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t242 = agg_tmp2168;
  void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_val_(t242, t239, t240, t241, &__cmp167);
  return;
}

// function: _ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_RT0_
void void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v243, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v244, struct __gnu_cxx____ops___Iter_less_iter* v245) {
bb246:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first247;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last248;
  struct __gnu_cxx____ops___Iter_less_iter* __comp249;
  long __len250;
  long __parent251;
  __first247 = v243;
  __last248 = v244;
  __comp249 = v245;
    long r252 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last248, &__first247);
    long c253 = 2;
    _Bool c254 = ((r252 < c253)) ? 1 : 0;
    if (c254) {
      return;
    }
  long r255 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last248, &__first247);
  __len250 = r255;
  long t256 = __len250;
  long c257 = 2;
  long b258 = t256 - c257;
  long c259 = 2;
  long b260 = b258 / c259;
  __parent251 = b260;
    while (1) {
      _Bool c261 = 1;
      if (!c261) break;
        int __value262;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0263;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0264;
        struct __gnu_cxx____ops___Iter_less_iter agg_tmp1265;
        long t266 = __parent251;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r267 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first247, t266);
        ref_tmp0263 = r267;
        int* r268 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0263);
        int t269 = *r268;
        __value262 = t269;
        agg_tmp0264 = __first247; // copy
        long t270 = __parent251;
        long t271 = __len250;
        int t272 = __value262;
        struct __gnu_cxx____ops___Iter_less_iter* t273 = __comp249;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t274 = agg_tmp0264;
        struct __gnu_cxx____ops___Iter_less_iter t275 = agg_tmp1265;
        void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(t274, t270, t271, t272, t275);
          long t276 = __parent251;
          long c277 = 0;
          _Bool c278 = ((t276 == c277)) ? 1 : 0;
          if (c278) {
            return;
          }
        long t279 = __parent251;
        long u280 = t279 - 1;
        __parent251 = u280;
    }
  return;
}

// function: _ZSt9make_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_
void void_std__make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v281, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v282) {
bb283:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first284;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last285;
  struct __gnu_cxx____ops___Iter_less_iter __comp286;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0287;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1288;
  __first284 = v281;
  __last285 = v282;
  agg_tmp0287 = __first284; // copy
  agg_tmp1288 = __last285; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t289 = agg_tmp0287;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t290 = agg_tmp1288;
  void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t289, t290, &__comp286);
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v291) {
bb292:
  struct std__vector_int__std__allocator_int__* this293;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval294;
  this293 = v291;
  struct std__vector_int__std__allocator_int__* t295 = this293;
  struct std___Vector_base_int__std__allocator_int__* base296 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t295 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base297 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base296->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval294, &base297->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t298 = __retval294;
  return t298;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v299) {
bb300:
  struct std__vector_int__std__allocator_int__* this301;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval302;
  this301 = v299;
  struct std__vector_int__std__allocator_int__* t303 = this301;
  struct std___Vector_base_int__std__allocator_int__* base304 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t303 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base305 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base304->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval302, &base305->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t306 = __retval302;
  return t306;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v307, int v308) {
bb309:
  int __a310;
  int __b311;
  int __retval312;
  __a310 = v307;
  __b311 = v308;
  int t313 = __a310;
  int t314 = __b311;
  int b315 = t313 | t314;
  __retval312 = b315;
  int t316 = __retval312;
  return t316;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v317) {
bb318:
  struct std__basic_ios_char__std__char_traits_char__* this319;
  int __retval320;
  this319 = v317;
  struct std__basic_ios_char__std__char_traits_char__* t321 = this319;
  struct std__ios_base* base322 = (struct std__ios_base*)((char *)t321 + 0);
  int t323 = base322->_M_streambuf_state;
  __retval320 = t323;
  int t324 = __retval320;
  return t324;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v325, int v326) {
bb327:
  struct std__basic_ios_char__std__char_traits_char__* this328;
  int __state329;
  this328 = v325;
  __state329 = v326;
  struct std__basic_ios_char__std__char_traits_char__* t330 = this328;
  int r331 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t330);
  int t332 = __state329;
  int r333 = std__operator_(r331, t332);
  std__basic_ios_char__std__char_traits_char_____clear(t330, r333);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v334, char* v335) {
bb336:
  char* __c1337;
  char* __c2338;
  _Bool __retval339;
  __c1337 = v334;
  __c2338 = v335;
  char* t340 = __c1337;
  char t341 = *t340;
  int cast342 = (int)t341;
  char* t343 = __c2338;
  char t344 = *t343;
  int cast345 = (int)t344;
  _Bool c346 = ((cast342 == cast345)) ? 1 : 0;
  __retval339 = c346;
  _Bool t347 = __retval339;
  return t347;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v348) {
bb349:
  char* __p350;
  unsigned long __retval351;
  unsigned long __i352;
  __p350 = v348;
  unsigned long c353 = 0;
  __i352 = c353;
    char ref_tmp0354;
    while (1) {
      unsigned long t355 = __i352;
      char* t356 = __p350;
      char* ptr357 = &(t356)[t355];
      char c358 = 0;
      ref_tmp0354 = c358;
      _Bool r359 = __gnu_cxx__char_traits_char___eq(ptr357, &ref_tmp0354);
      _Bool u360 = !r359;
      if (!u360) break;
      unsigned long t361 = __i352;
      unsigned long u362 = t361 + 1;
      __i352 = u362;
    }
  unsigned long t363 = __i352;
  __retval351 = t363;
  unsigned long t364 = __retval351;
  return t364;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v365) {
bb366:
  char* __s367;
  unsigned long __retval368;
  __s367 = v365;
    _Bool r369 = std____is_constant_evaluated();
    if (r369) {
      char* t370 = __s367;
      unsigned long r371 = __gnu_cxx__char_traits_char___length(t370);
      __retval368 = r371;
      unsigned long t372 = __retval368;
      return t372;
    }
  char* t373 = __s367;
  unsigned long r374 = strlen(t373);
  __retval368 = r374;
  unsigned long t375 = __retval368;
  return t375;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v376, char* v377) {
bb378:
  struct std__basic_ostream_char__std__char_traits_char__* __out379;
  char* __s380;
  struct std__basic_ostream_char__std__char_traits_char__* __retval381;
  __out379 = v376;
  __s380 = v377;
    char* t382 = __s380;
    _Bool cast383 = (_Bool)t382;
    _Bool u384 = !cast383;
    if (u384) {
      struct std__basic_ostream_char__std__char_traits_char__* t385 = __out379;
      void** v386 = (void**)t385;
      void* v387 = *((void**)v386);
      unsigned char* cast388 = (unsigned char*)v387;
      long c389 = -24;
      unsigned char* ptr390 = &(cast388)[c389];
      long* cast391 = (long*)ptr390;
      long t392 = *cast391;
      unsigned char* cast393 = (unsigned char*)t385;
      unsigned char* ptr394 = &(cast393)[t392];
      struct std__basic_ostream_char__std__char_traits_char__* cast395 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr394;
      struct std__basic_ios_char__std__char_traits_char__* cast396 = (struct std__basic_ios_char__std__char_traits_char__*)cast395;
      int t397 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast396, t397);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t398 = __out379;
      char* t399 = __s380;
      char* t400 = __s380;
      unsigned long r401 = std__char_traits_char___length(t400);
      long cast402 = (long)r401;
      struct std__basic_ostream_char__std__char_traits_char__* r403 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t398, t399, cast402);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t404 = __out379;
  __retval381 = t404;
  struct std__basic_ostream_char__std__char_traits_char__* t405 = __retval381;
  return t405;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v406) {
bb407:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this408;
  int** __retval409;
  this408 = v406;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t410 = this408;
  __retval409 = &t410->_M_current;
  int** t411 = __retval409;
  return t411;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v412, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v413) {
bb414:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs415;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs416;
  _Bool __retval417;
  __lhs415 = v412;
  __rhs416 = v413;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t418 = __lhs415;
  int** r419 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t418);
  int* t420 = *r419;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t421 = __rhs416;
  int** r422 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t421);
  int* t423 = *r422;
  _Bool c424 = ((t420 == t423)) ? 1 : 0;
  __retval417 = c424;
  _Bool t425 = __retval417;
  return t425;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v426, int** v427) {
bb428:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this429;
  int** __i430;
  this429 = v426;
  __i430 = v427;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t431 = this429;
  int** t432 = __i430;
  int* t433 = *t432;
  t431->_M_current = t433;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v434) {
bb435:
  struct std__vector_int__std__allocator_int__* this436;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval437;
  this436 = v434;
  struct std__vector_int__std__allocator_int__* t438 = this436;
  struct std___Vector_base_int__std__allocator_int__* base439 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t438 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base440 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base439->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval437, &base440->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t441 = __retval437;
  return t441;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v442) {
bb443:
  struct std__vector_int__std__allocator_int__* this444;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval445;
  this444 = v442;
  struct std__vector_int__std__allocator_int__* t446 = this444;
  struct std___Vector_base_int__std__allocator_int__* base447 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t446 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base448 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base447->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval445, &base448->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t449 = __retval445;
  return t449;
}

// function: _ZNKSt6vectorIiSaIiEE5emptyEv
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* v450) {
bb451:
  struct std__vector_int__std__allocator_int__* this452;
  _Bool __retval453;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0454;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp1455;
  this452 = v450;
  struct std__vector_int__std__allocator_int__* t456 = this452;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r457 = std__vector_int__std__allocator_int_____begin___const(t456);
  ref_tmp0454 = r457;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r458 = std__vector_int__std__allocator_int_____end___const(t456);
  ref_tmp1455 = r458;
  _Bool r459 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp0454, &ref_tmp1455);
  __retval453 = r459;
  _Bool t460 = __retval453;
  return t460;
}

// function: _ZNSt6vectorIiSaIiEE5frontEv
int* std__vector_int__std__allocator_int_____front(struct std__vector_int__std__allocator_int__* v461) {
bb462:
  struct std__vector_int__std__allocator_int__* this463;
  int* __retval464;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0465;
  this463 = v461;
  struct std__vector_int__std__allocator_int__* t466 = this463;
    do {
          _Bool r467 = std__vector_int__std__allocator_int_____empty___const(t466);
          if (r467) {
            char* cast468 = (char*)&(_str_10);
            int c469 = 1346;
            char* cast470 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE5frontEv);
            char* cast471 = (char*)&(_str_11);
            std____glibcxx_assert_fail(cast468, c469, cast470, cast471);
          }
      _Bool c472 = 0;
      if (!c472) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r473 = std__vector_int__std__allocator_int_____begin(t466);
  ref_tmp0465 = r473;
  int* r474 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0465);
  __retval464 = r474;
  int* t475 = __retval464;
  return t475;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v476, void* v477) {
bb478:
  struct std__basic_ostream_char__std__char_traits_char__* this479;
  void* __pf480;
  struct std__basic_ostream_char__std__char_traits_char__* __retval481;
  this479 = v476;
  __pf480 = v477;
  struct std__basic_ostream_char__std__char_traits_char__* t482 = this479;
  void* t483 = __pf480;
  struct std__basic_ostream_char__std__char_traits_char__* r484 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t483)(t482);
  __retval481 = r484;
  struct std__basic_ostream_char__std__char_traits_char__* t485 = __retval481;
  return t485;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v486) {
bb487:
  struct std__basic_ostream_char__std__char_traits_char__* __os488;
  struct std__basic_ostream_char__std__char_traits_char__* __retval489;
  __os488 = v486;
  struct std__basic_ostream_char__std__char_traits_char__* t490 = __os488;
  struct std__basic_ostream_char__std__char_traits_char__* r491 = std__ostream__flush(t490);
  __retval489 = r491;
  struct std__basic_ostream_char__std__char_traits_char__* t492 = __retval489;
  return t492;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v493) {
bb494:
  struct std__ctype_char_* __f495;
  struct std__ctype_char_* __retval496;
  __f495 = v493;
    struct std__ctype_char_* t497 = __f495;
    _Bool cast498 = (_Bool)t497;
    _Bool u499 = !cast498;
    if (u499) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t500 = __f495;
  __retval496 = t500;
  struct std__ctype_char_* t501 = __retval496;
  return t501;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v502, char v503) {
bb504:
  struct std__ctype_char_* this505;
  char __c506;
  char __retval507;
  this505 = v502;
  __c506 = v503;
  struct std__ctype_char_* t508 = this505;
    char t509 = t508->_M_widen_ok;
    _Bool cast510 = (_Bool)t509;
    if (cast510) {
      char t511 = __c506;
      unsigned char cast512 = (unsigned char)t511;
      unsigned long cast513 = (unsigned long)cast512;
      char t514 = t508->_M_widen[cast513];
      __retval507 = t514;
      char t515 = __retval507;
      return t515;
    }
  std__ctype_char____M_widen_init___const(t508);
  char t516 = __c506;
  void** v517 = (void**)t508;
  void* v518 = *((void**)v517);
  char vcall521 = (char)__VERIFIER_virtual_call_char_char(t508, 6, t516);
  __retval507 = vcall521;
  char t522 = __retval507;
  return t522;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v523, char v524) {
bb525:
  struct std__basic_ios_char__std__char_traits_char__* this526;
  char __c527;
  char __retval528;
  this526 = v523;
  __c527 = v524;
  struct std__basic_ios_char__std__char_traits_char__* t529 = this526;
  struct std__ctype_char_* t530 = t529->_M_ctype;
  struct std__ctype_char_* r531 = std__ctype_char__const__std____check_facet_std__ctype_char___(t530);
  char t532 = __c527;
  char r533 = std__ctype_char___widen_char__const(r531, t532);
  __retval528 = r533;
  char t534 = __retval528;
  return t534;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v535) {
bb536:
  struct std__basic_ostream_char__std__char_traits_char__* __os537;
  struct std__basic_ostream_char__std__char_traits_char__* __retval538;
  __os537 = v535;
  struct std__basic_ostream_char__std__char_traits_char__* t539 = __os537;
  struct std__basic_ostream_char__std__char_traits_char__* t540 = __os537;
  void** v541 = (void**)t540;
  void* v542 = *((void**)v541);
  unsigned char* cast543 = (unsigned char*)v542;
  long c544 = -24;
  unsigned char* ptr545 = &(cast543)[c544];
  long* cast546 = (long*)ptr545;
  long t547 = *cast546;
  unsigned char* cast548 = (unsigned char*)t540;
  unsigned char* ptr549 = &(cast548)[t547];
  struct std__basic_ostream_char__std__char_traits_char__* cast550 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr549;
  struct std__basic_ios_char__std__char_traits_char__* cast551 = (struct std__basic_ios_char__std__char_traits_char__*)cast550;
  char c552 = 10;
  char r553 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast551, c552);
  struct std__basic_ostream_char__std__char_traits_char__* r554 = std__ostream__put(t539, r553);
  struct std__basic_ostream_char__std__char_traits_char__* r555 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r554);
  __retval538 = r555;
  struct std__basic_ostream_char__std__char_traits_char__* t556 = __retval538;
  return t556;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v557, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v558) {
bb559:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs560;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs561;
  _Bool __retval562;
  __lhs560 = v557;
  __rhs561 = v558;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t563 = __lhs560;
  int** r564 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t563);
  int* t565 = *r564;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t566 = __rhs561;
  int** r567 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t566);
  int* t568 = *r567;
  _Bool c569 = ((t565 == t568)) ? 1 : 0;
  __retval562 = c569;
  _Bool t570 = __retval562;
  return t570;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmmEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v571) {
bb572:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this573;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval574;
  this573 = v571;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t575 = this573;
  int* t576 = t575->_M_current;
  int c577 = -1;
  int* ptr578 = &(t576)[c577];
  t575->_M_current = ptr578;
  __retval574 = t575;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t579 = __retval574;
  return t579;
}

// function: _ZSt10__pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_S9_RT0_
void void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v580, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v581, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v582, struct __gnu_cxx____ops___Iter_less_iter* v583) {
bb584:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first585;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last586;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result587;
  struct __gnu_cxx____ops___Iter_less_iter* __comp588;
  int __value589;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0590;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp1591;
  __first585 = v580;
  __last586 = v581;
  __result587 = v582;
  __comp588 = v583;
  int* r592 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result587);
  int t593 = *r592;
  __value589 = t593;
  int* r594 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first585);
  int t595 = *r594;
  int* r596 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result587);
  *r596 = t595;
  agg_tmp0590 = __first585; // copy
  long c597 = 0;
  long r598 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last586, &__first585);
  int t599 = __value589;
  struct __gnu_cxx____ops___Iter_less_iter* t600 = __comp588;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t601 = agg_tmp0590;
  struct __gnu_cxx____ops___Iter_less_iter t602 = agg_tmp1591;
  void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(t601, c597, r598, t599, t602);
  return;
}

// function: _ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_
void void_std__pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v603, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v604) {
bb605:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first606;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last607;
  __first606 = v603;
  __last607 = v604;
    do {
          _Bool r608 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first606, &__last607);
          if (r608) {
            char* cast609 = (char*)&(_str_12);
            int c610 = 290;
            char* cast611 = (char*)&(__PRETTY_FUNCTION____ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_);
            char* cast612 = (char*)&(_str_13);
            std____glibcxx_assert_fail(cast609, c610, cast611, cast612);
          }
      _Bool c613 = 0;
      if (!c613) break;
    } while (1);
    long r614 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last607, &__first606);
    long c615 = 1;
    _Bool c616 = ((r614 > c615)) ? 1 : 0;
    if (c616) {
      struct __gnu_cxx____ops___Iter_less_iter __comp617;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0618;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1619;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2620;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r621 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__last607);
      agg_tmp0618 = __first606; // copy
      agg_tmp1619 = __last607; // copy
      agg_tmp2620 = __last607; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t622 = agg_tmp0618;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t623 = agg_tmp1619;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t624 = agg_tmp2620;
      void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t622, t623, t624, &__comp617);
    }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v625, int* v626) {
bb627:
  struct std__allocator_int_* __a628;
  int* __p629;
  __a628 = v625;
  __p629 = v626;
  int* t630 = __p629;
  void_std__destroy_at_int_(t630);
  return;
}

// function: _ZNSt6vectorIiSaIiEE8pop_backEv
void std__vector_int__std__allocator_int_____pop_back(struct std__vector_int__std__allocator_int__* v631) {
bb632:
  struct std__vector_int__std__allocator_int__* this633;
  this633 = v631;
  struct std__vector_int__std__allocator_int__* t634 = this633;
    do {
          _Bool r635 = std__vector_int__std__allocator_int_____empty___const(t634);
          if (r635) {
            char* cast636 = (char*)&(_str_10);
            int c637 = 1459;
            char* cast638 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE8pop_backEv);
            char* cast639 = (char*)&(_str_11);
            std____glibcxx_assert_fail(cast636, c637, cast638, cast639);
          }
      _Bool c640 = 0;
      if (!c640) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base641 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t634 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base642 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base641->_M_impl) + 0);
  int* t643 = base642->_M_finish;
  int c644 = -1;
  int* ptr645 = &(t643)[c644];
  base642->_M_finish = ptr645;
  struct std___Vector_base_int__std__allocator_int__* base646 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t634 + 0);
  struct std__allocator_int_* base647 = (struct std__allocator_int_*)((char *)&(base646->_M_impl) + 0);
  struct std___Vector_base_int__std__allocator_int__* base648 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t634 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base649 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base648->_M_impl) + 0);
  int* t650 = base649->_M_finish;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(base647, t650);
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v651, int* v652) {
bb653:
  int* __location654;
  int* __args655;
  int* __retval656;
  void* __loc657;
  __location654 = v651;
  __args655 = v652;
  int* t658 = __location654;
  void* cast659 = (void*)t658;
  __loc657 = cast659;
    void* t660 = __loc657;
    int* cast661 = (int*)t660;
    int* t662 = __args655;
    int t663 = *t662;
    *cast661 = t663;
    __retval656 = cast661;
    int* t664 = __retval656;
    return t664;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v665, int* v666, int* v667) {
bb668:
  struct std__allocator_int_* __a669;
  int* __p670;
  int* __args671;
  __a669 = v665;
  __p670 = v666;
  __args671 = v667;
  int* t672 = __p670;
  int* t673 = __args671;
  int* r674 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t672, t673);
  return;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v675) {
bb676:
  struct std___Vector_base_int__std__allocator_int__* this677;
  struct std__allocator_int_* __retval678;
  this677 = v675;
  struct std___Vector_base_int__std__allocator_int__* t679 = this677;
  struct std__allocator_int_* base680 = (struct std__allocator_int_*)((char *)&(t679->_M_impl) + 0);
  __retval678 = base680;
  struct std__allocator_int_* t681 = __retval678;
  return t681;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v682) {
bb683:
  struct std__vector_int__std__allocator_int__* this684;
  unsigned long __retval685;
  this684 = v682;
  struct std__vector_int__std__allocator_int__* t686 = this684;
  struct std___Vector_base_int__std__allocator_int__* base687 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t686 + 0);
  struct std__allocator_int_* r688 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base687);
  unsigned long r689 = std__vector_int__std__allocator_int______S_max_size(r688);
  __retval685 = r689;
  unsigned long t690 = __retval685;
  return t690;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v691) {
bb692:
  struct std__vector_int__std__allocator_int__* this693;
  unsigned long __retval694;
  long __dif695;
  this693 = v691;
  struct std__vector_int__std__allocator_int__* t696 = this693;
  struct std___Vector_base_int__std__allocator_int__* base697 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t696 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base698 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base697->_M_impl) + 0);
  int* t699 = base698->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base700 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t696 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base701 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base700->_M_impl) + 0);
  int* t702 = base701->_M_start;
  long diff703 = t699 - t702;
  __dif695 = diff703;
    long t704 = __dif695;
    long c705 = 0;
    _Bool c706 = ((t704 < c705)) ? 1 : 0;
    if (c706) {
      __builtin_unreachable();
    }
  long t707 = __dif695;
  unsigned long cast708 = (unsigned long)t707;
  __retval694 = cast708;
  unsigned long t709 = __retval694;
  return t709;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v710, unsigned long* v711) {
bb712:
  unsigned long* __a713;
  unsigned long* __b714;
  unsigned long* __retval715;
  __a713 = v710;
  __b714 = v711;
    unsigned long* t716 = __a713;
    unsigned long t717 = *t716;
    unsigned long* t718 = __b714;
    unsigned long t719 = *t718;
    _Bool c720 = ((t717 < t719)) ? 1 : 0;
    if (c720) {
      unsigned long* t721 = __b714;
      __retval715 = t721;
      unsigned long* t722 = __retval715;
      return t722;
    }
  unsigned long* t723 = __a713;
  __retval715 = t723;
  unsigned long* t724 = __retval715;
  return t724;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v725, unsigned long v726, char* v727) {
bb728:
  struct std__vector_int__std__allocator_int__* this729;
  unsigned long __n730;
  char* __s731;
  unsigned long __retval732;
  unsigned long __len733;
  unsigned long ref_tmp0734;
  this729 = v725;
  __n730 = v726;
  __s731 = v727;
  struct std__vector_int__std__allocator_int__* t735 = this729;
    unsigned long r736 = std__vector_int__std__allocator_int_____max_size___const(t735);
    unsigned long r737 = std__vector_int__std__allocator_int_____size___const(t735);
    unsigned long b738 = r736 - r737;
    unsigned long t739 = __n730;
    _Bool c740 = ((b738 < t739)) ? 1 : 0;
    if (c740) {
      char* t741 = __s731;
      std____throw_length_error(t741);
    }
  unsigned long r742 = std__vector_int__std__allocator_int_____size___const(t735);
  unsigned long r743 = std__vector_int__std__allocator_int_____size___const(t735);
  ref_tmp0734 = r743;
  unsigned long* r744 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0734, &__n730);
  unsigned long t745 = *r744;
  unsigned long b746 = r742 + t745;
  __len733 = b746;
  unsigned long t747 = __len733;
  unsigned long r748 = std__vector_int__std__allocator_int_____size___const(t735);
  _Bool c749 = ((t747 < r748)) ? 1 : 0;
  _Bool ternary750;
  if (c749) {
    _Bool c751 = 1;
    ternary750 = (_Bool)c751;
  } else {
    unsigned long t752 = __len733;
    unsigned long r753 = std__vector_int__std__allocator_int_____max_size___const(t735);
    _Bool c754 = ((t752 > r753)) ? 1 : 0;
    ternary750 = (_Bool)c754;
  }
  unsigned long ternary755;
  if (ternary750) {
    unsigned long r756 = std__vector_int__std__allocator_int_____max_size___const(t735);
    ternary755 = (unsigned long)r756;
  } else {
    unsigned long t757 = __len733;
    ternary755 = (unsigned long)t757;
  }
  __retval732 = ternary755;
  unsigned long t758 = __retval732;
  return t758;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v759, int* v760, unsigned long v761, struct std___Vector_base_int__std__allocator_int__* v762) {
bb763:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this764;
  int* __s765;
  unsigned long __l766;
  struct std___Vector_base_int__std__allocator_int__* __vect767;
  this764 = v759;
  __s765 = v760;
  __l766 = v761;
  __vect767 = v762;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t768 = this764;
  int* t769 = __s765;
  t768->_M_storage = t769;
  unsigned long t770 = __l766;
  t768->_M_len = t770;
  struct std___Vector_base_int__std__allocator_int__* t771 = __vect767;
  t768->_M_vect = t771;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v772) {
bb773:
  int* __ptr774;
  int* __retval775;
  __ptr774 = v772;
  int* t776 = __ptr774;
  __retval775 = t776;
  int* t777 = __retval775;
  return t777;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v778) {
bb779:
  int** __ptr780;
  int* __retval781;
  __ptr780 = v778;
  int** t782 = __ptr780;
  int* t783 = *t782;
  int* r784 = int__std__to_address_int_(t783);
  __retval781 = r784;
  int* t785 = __retval781;
  return t785;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v786, int** v787) {
bb788:
  struct __gnu_cxx____normal_iterator_int____void_* this789;
  int** __i790;
  this789 = v786;
  __i790 = v787;
  struct __gnu_cxx____normal_iterator_int____void_* t791 = this789;
  int** t792 = __i790;
  int* t793 = *t792;
  t791->_M_current = t793;
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v794, int* v795, struct std__allocator_int_* v796) {
bb797:
  int* __dest798;
  int* __orig799;
  struct std__allocator_int_* __alloc800;
  __dest798 = v794;
  __orig799 = v795;
  __alloc800 = v796;
  struct std__allocator_int_* t801 = __alloc800;
  int* t802 = __dest798;
  int* t803 = __orig799;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t801, t802, t803);
  struct std__allocator_int_* t804 = __alloc800;
  int* t805 = __orig799;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t804, t805);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v806) {
bb807:
  struct __gnu_cxx____normal_iterator_int____void_* this808;
  int* __retval809;
  this808 = v806;
  struct __gnu_cxx____normal_iterator_int____void_* t810 = this808;
  int* t811 = t810->_M_current;
  __retval809 = t811;
  int* t812 = __retval809;
  return t812;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v813) {
bb814:
  struct __gnu_cxx____normal_iterator_int____void_* this815;
  struct __gnu_cxx____normal_iterator_int____void_* __retval816;
  this815 = v813;
  struct __gnu_cxx____normal_iterator_int____void_* t817 = this815;
  int* t818 = t817->_M_current;
  int c819 = 1;
  int* ptr820 = &(t818)[c819];
  t817->_M_current = ptr820;
  __retval816 = t817;
  struct __gnu_cxx____normal_iterator_int____void_* t821 = __retval816;
  return t821;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v822, int* v823, struct __gnu_cxx____normal_iterator_int____void_ v824, struct std__allocator_int_* v825) {
bb826:
  int* __first827;
  int* __last828;
  struct __gnu_cxx____normal_iterator_int____void_ __result829;
  struct std__allocator_int_* __alloc830;
  struct __gnu_cxx____normal_iterator_int____void_ __retval831;
  __first827 = v822;
  __last828 = v823;
  __result829 = v824;
  __alloc830 = v825;
  __retval831 = __result829; // copy
    while (1) {
      int* t833 = __first827;
      int* t834 = __last828;
      _Bool c835 = ((t833 != t834)) ? 1 : 0;
      if (!c835) break;
      int* r836 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval831);
      int* t837 = __first827;
      struct std__allocator_int_* t838 = __alloc830;
      void_std____relocate_object_a_int__int__std__allocator_int___(r836, t837, t838);
    for_step832: ;
      int* t839 = __first827;
      int c840 = 1;
      int* ptr841 = &(t839)[c840];
      __first827 = ptr841;
      struct __gnu_cxx____normal_iterator_int____void_* r842 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval831);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t843 = __retval831;
  return t843;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v844, struct __gnu_cxx____normal_iterator_int____void_* v845) {
bb846:
  struct __gnu_cxx____normal_iterator_int____void_* this847;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed848;
  struct __gnu_cxx____normal_iterator_int____void_* __retval849;
  this847 = v844;
  unnamed848 = v845;
  struct __gnu_cxx____normal_iterator_int____void_* t850 = this847;
  struct __gnu_cxx____normal_iterator_int____void_* t851 = unnamed848;
  int* t852 = t851->_M_current;
  t850->_M_current = t852;
  __retval849 = t850;
  struct __gnu_cxx____normal_iterator_int____void_* t853 = __retval849;
  return t853;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v854) {
bb855:
  struct __gnu_cxx____normal_iterator_int____void_* this856;
  int** __retval857;
  this856 = v854;
  struct __gnu_cxx____normal_iterator_int____void_* t858 = this856;
  __retval857 = &t858->_M_current;
  int** t859 = __retval857;
  return t859;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v860, int* v861, int* v862, struct std__allocator_int_* v863) {
bb864:
  int* __first865;
  int* __last866;
  int* __result867;
  struct std__allocator_int_* __alloc868;
  int* __retval869;
  long __count870;
  __first865 = v860;
  __last866 = v861;
  __result867 = v862;
  __alloc868 = v863;
  int* t871 = __last866;
  int* t872 = __first865;
  long diff873 = t871 - t872;
  __count870 = diff873;
    long t874 = __count870;
    long c875 = 0;
    _Bool c876 = ((t874 > c875)) ? 1 : 0;
    if (c876) {
        _Bool r877 = std__is_constant_evaluated();
        if (r877) {
          struct __gnu_cxx____normal_iterator_int____void_ __out878;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0879;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0880;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out878, &__result867);
          int* t881 = __first865;
          int* t882 = __last866;
          agg_tmp0880 = __out878; // copy
          struct std__allocator_int_* t883 = __alloc868;
          struct __gnu_cxx____normal_iterator_int____void_ t884 = agg_tmp0880;
          struct __gnu_cxx____normal_iterator_int____void_ r885 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t881, t882, t884, t883);
          ref_tmp0879 = r885;
          struct __gnu_cxx____normal_iterator_int____void_* r886 = __gnu_cxx____normal_iterator_int___void___operator_(&__out878, &ref_tmp0879);
          int** r887 = __gnu_cxx____normal_iterator_int___void___base___const(&__out878);
          int* t888 = *r887;
          __retval869 = t888;
          int* t889 = __retval869;
          return t889;
        }
      int* t890 = __result867;
      void* cast891 = (void*)t890;
      int* t892 = __first865;
      void* cast893 = (void*)t892;
      long t894 = __count870;
      unsigned long cast895 = (unsigned long)t894;
      unsigned long c896 = 4;
      unsigned long b897 = cast895 * c896;
      void* r898 = memcpy(cast891, cast893, b897);
    }
  int* t899 = __result867;
  long t900 = __count870;
  int* ptr901 = &(t899)[t900];
  __retval869 = ptr901;
  int* t902 = __retval869;
  return t902;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v903, int* v904, int* v905, struct std__allocator_int_* v906) {
bb907:
  int* __first908;
  int* __last909;
  int* __result910;
  struct std__allocator_int_* __alloc911;
  int* __retval912;
  __first908 = v903;
  __last909 = v904;
  __result910 = v905;
  __alloc911 = v906;
  int* t913 = __first908;
  int* r914 = int__std____niter_base_int__(t913);
  int* t915 = __last909;
  int* r916 = int__std____niter_base_int__(t915);
  int* t917 = __result910;
  int* r918 = int__std____niter_base_int__(t917);
  struct std__allocator_int_* t919 = __alloc911;
  int* r920 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r914, r916, r918, t919);
  __retval912 = r920;
  int* t921 = __retval912;
  return t921;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v922, int* v923, int* v924, struct std__allocator_int_* v925) {
bb926:
  int* __first927;
  int* __last928;
  int* __result929;
  struct std__allocator_int_* __alloc930;
  int* __retval931;
  __first927 = v922;
  __last928 = v923;
  __result929 = v924;
  __alloc930 = v925;
  int* t932 = __first927;
  int* t933 = __last928;
  int* t934 = __result929;
  struct std__allocator_int_* t935 = __alloc930;
  int* r936 = int__std____relocate_a_int___int___std__allocator_int___(t932, t933, t934, t935);
  __retval931 = r936;
  int* t937 = __retval931;
  return t937;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v938) {
bb939:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this940;
  this940 = v938;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t941 = this940;
    int* t942 = t941->_M_storage;
    _Bool cast943 = (_Bool)t942;
    if (cast943) {
      struct std___Vector_base_int__std__allocator_int__* t944 = t941->_M_vect;
      int* t945 = t941->_M_storage;
      unsigned long t946 = t941->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t944, t945, t946);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_(struct std__vector_int__std__allocator_int__* v947, int* v948) {
bb949:
  struct std__vector_int__std__allocator_int__* this950;
  int* __args951;
  unsigned long __len952;
  int* __old_start953;
  int* __old_finish954;
  unsigned long __elems955;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0956;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1957;
  int* __new_start958;
  int* __new_finish959;
  this950 = v947;
  __args951 = v948;
  struct std__vector_int__std__allocator_int__* t960 = this950;
  unsigned long c961 = 1;
  char* cast962 = (char*)&(_str_14);
  unsigned long r963 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t960, c961, cast962);
  __len952 = r963;
    unsigned long t964 = __len952;
    unsigned long c965 = 0;
    _Bool c966 = ((t964 <= c965)) ? 1 : 0;
    if (c966) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base967 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t960 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base968 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base967->_M_impl) + 0);
  int* t969 = base968->_M_start;
  __old_start953 = t969;
  struct std___Vector_base_int__std__allocator_int__* base970 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t960 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base971 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base970->_M_impl) + 0);
  int* t972 = base971->_M_finish;
  __old_finish954 = t972;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r973 = std__vector_int__std__allocator_int_____end(t960);
  ref_tmp0956 = r973;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r974 = std__vector_int__std__allocator_int_____begin(t960);
  ref_tmp1957 = r974;
  long r975 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0956, &ref_tmp1957);
  unsigned long cast976 = (unsigned long)r975;
  __elems955 = cast976;
  struct std___Vector_base_int__std__allocator_int__* base977 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t960 + 0);
  unsigned long t978 = __len952;
  int* r979 = std___Vector_base_int__std__allocator_int______M_allocate(base977, t978);
  __new_start958 = r979;
  int* t980 = __new_start958;
  __new_finish959 = t980;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard981;
    int* ref_tmp2982;
    int* t983 = __new_start958;
    unsigned long t984 = __len952;
    struct std___Vector_base_int__std__allocator_int__* base985 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t960 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard981, t983, t984, base985);
      struct std___Vector_base_int__std__allocator_int__* base986 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t960 + 0);
      struct std__allocator_int_* base987 = (struct std__allocator_int_*)((char *)&(base986->_M_impl) + 0);
      int* t988 = __new_start958;
      unsigned long t989 = __elems955;
      int* ptr990 = &(t988)[t989];
      ref_tmp2982 = ptr990;
      int* r991 = auto_std____to_address_int__(&ref_tmp2982);
      int* t992 = __args951;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base987, r991, t992);
        int* t993 = __old_start953;
        int* t994 = __old_finish954;
        int* t995 = __new_start958;
        struct std___Vector_base_int__std__allocator_int__* base996 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t960 + 0);
        struct std__allocator_int_* r997 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base996);
        int* r998 = std__vector_int__std__allocator_int______S_relocate(t993, t994, t995, r997);
        __new_finish959 = r998;
        int* t999 = __new_finish959;
        int c1000 = 1;
        int* ptr1001 = &(t999)[c1000];
        __new_finish959 = ptr1001;
      int* t1002 = __old_start953;
      __guard981._M_storage = t1002;
      struct std___Vector_base_int__std__allocator_int__* base1003 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t960 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1004 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1003->_M_impl) + 0);
      int* t1005 = base1004->_M_end_of_storage;
      int* t1006 = __old_start953;
      long diff1007 = t1005 - t1006;
      unsigned long cast1008 = (unsigned long)diff1007;
      __guard981._M_len = cast1008;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard981);
    }
  int* t1009 = __new_start958;
  struct std___Vector_base_int__std__allocator_int__* base1010 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t960 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1011 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1010->_M_impl) + 0);
  base1011->_M_start = t1009;
  int* t1012 = __new_finish959;
  struct std___Vector_base_int__std__allocator_int__* base1013 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t960 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1014 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1013->_M_impl) + 0);
  base1014->_M_finish = t1012;
  int* t1015 = __new_start958;
  unsigned long t1016 = __len952;
  int* ptr1017 = &(t1015)[t1016];
  struct std___Vector_base_int__std__allocator_int__* base1018 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t960 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1019 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1018->_M_impl) + 0);
  base1019->_M_end_of_storage = ptr1017;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1020, long v1021) {
bb1022:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1023;
  long __n1024;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1025;
  int* ref_tmp01026;
  this1023 = v1020;
  __n1024 = v1021;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1027 = this1023;
  int* t1028 = t1027->_M_current;
  long t1029 = __n1024;
  long u1030 = -t1029;
  int* ptr1031 = &(t1028)[u1030];
  ref_tmp01026 = ptr1031;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1025, &ref_tmp01026);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1032 = __retval1025;
  return t1032;
}

// function: _ZNSt6vectorIiSaIiEE4backEv
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* v1033) {
bb1034:
  struct std__vector_int__std__allocator_int__* this1035;
  int* __retval1036;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01037;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11038;
  this1035 = v1033;
  struct std__vector_int__std__allocator_int__* t1039 = this1035;
    do {
          _Bool r1040 = std__vector_int__std__allocator_int_____empty___const(t1039);
          if (r1040) {
            char* cast1041 = (char*)&(_str_10);
            int c1042 = 1370;
            char* cast1043 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv);
            char* cast1044 = (char*)&(_str_11);
            std____glibcxx_assert_fail(cast1041, c1042, cast1043, cast1044);
          }
      _Bool c1045 = 0;
      if (!c1045) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1046 = std__vector_int__std__allocator_int_____end(t1039);
  ref_tmp11038 = r1046;
  long c1047 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1048 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp11038, c1047);
  ref_tmp01037 = r1048;
  int* r1049 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp01037);
  __retval1036 = r1049;
  int* t1050 = __retval1036;
  return t1050;
}

// function: _ZNSt6vectorIiSaIiEE12emplace_backIJiEEERiDpOT_
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* v1051, int* v1052) {
bb1053:
  struct std__vector_int__std__allocator_int__* this1054;
  int* __args1055;
  int* __retval1056;
  this1054 = v1051;
  __args1055 = v1052;
  struct std__vector_int__std__allocator_int__* t1057 = this1054;
    struct std___Vector_base_int__std__allocator_int__* base1058 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1057 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1059 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1058->_M_impl) + 0);
    int* t1060 = base1059->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1061 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1057 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1062 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1061->_M_impl) + 0);
    int* t1063 = base1062->_M_end_of_storage;
    _Bool c1064 = ((t1060 != t1063)) ? 1 : 0;
    if (c1064) {
      struct std___Vector_base_int__std__allocator_int__* base1065 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1057 + 0);
      struct std__allocator_int_* base1066 = (struct std__allocator_int_*)((char *)&(base1065->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base1067 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1057 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1068 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1067->_M_impl) + 0);
      int* t1069 = base1068->_M_finish;
      int* t1070 = __args1055;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base1066, t1069, t1070);
      struct std___Vector_base_int__std__allocator_int__* base1071 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1057 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1072 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1071->_M_impl) + 0);
      int* t1073 = base1072->_M_finish;
      int c1074 = 1;
      int* ptr1075 = &(t1073)[c1074];
      base1072->_M_finish = ptr1075;
    } else {
      int* t1076 = __args1055;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_(t1057, t1076);
    }
  int* r1077 = std__vector_int__std__allocator_int_____back(t1057);
  __retval1056 = r1077;
  int* t1078 = __retval1056;
  return t1078;
}

// function: _ZNSt6vectorIiSaIiEE9push_backEOi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v1079, int* v1080) {
bb1081:
  struct std__vector_int__std__allocator_int__* this1082;
  int* __x1083;
  this1082 = v1079;
  __x1083 = v1080;
  struct std__vector_int__std__allocator_int__* t1084 = this1082;
  int* t1085 = __x1083;
  int* r1086 = int__std__vector_int__std__allocator_int_____emplace_back_int_(t1084, t1085);
  return;
}

// function: _ZSt9push_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_
void void_std__push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1087, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1088) {
bb1089:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1090;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1091;
  struct __gnu_cxx____ops___Iter_less_val __comp1092;
  int __value1093;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01094;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01095;
  __first1090 = v1087;
  __last1091 = v1088;
  long c1096 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1097 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__last1091, c1096);
  ref_tmp01094 = r1097;
  int* r1098 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp01094);
  int t1099 = *r1098;
  __value1093 = t1099;
  agg_tmp01095 = __first1090; // copy
  long r1100 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last1091, &__first1090);
  long c1101 = 1;
  long b1102 = r1100 - c1101;
  long c1103 = 0;
  int t1104 = __value1093;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1105 = agg_tmp01095;
  void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_val_(t1105, b1102, c1103, t1104, &__comp1092);
  return;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v1106, unsigned long v1107) {
bb1108:
  struct std__vector_int__std__allocator_int__* this1109;
  unsigned long __n1110;
  int* __retval1111;
  this1109 = v1106;
  __n1110 = v1107;
  struct std__vector_int__std__allocator_int__* t1112 = this1109;
    do {
          unsigned long t1113 = __n1110;
          unsigned long r1114 = std__vector_int__std__allocator_int_____size___const(t1112);
          _Bool c1115 = ((t1113 < r1114)) ? 1 : 0;
          _Bool u1116 = !c1115;
          if (u1116) {
            char* cast1117 = (char*)&(_str_10);
            int c1118 = 1263;
            char* cast1119 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast1120 = (char*)&(_str_15);
            std____glibcxx_assert_fail(cast1117, c1118, cast1119, cast1120);
          }
      _Bool c1121 = 0;
      if (!c1121) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base1122 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1112 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1123 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1122->_M_impl) + 0);
  int* t1124 = base1123->_M_start;
  unsigned long t1125 = __n1110;
  int* ptr1126 = &(t1124)[t1125];
  __retval1111 = ptr1126;
  int* t1127 = __retval1111;
  return t1127;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1128) {
bb1129:
  struct std__vector_int__std__allocator_int__* this1130;
  this1130 = v1128;
  struct std__vector_int__std__allocator_int__* t1131 = this1130;
    struct std___Vector_base_int__std__allocator_int__* base1132 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1131 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1133 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1132->_M_impl) + 0);
    int* t1134 = base1133->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1135 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1131 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1136 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1135->_M_impl) + 0);
    int* t1137 = base1136->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1138 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1131 + 0);
    struct std__allocator_int_* r1139 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1138);
    void_std___Destroy_int___int_(t1134, t1137, r1139);
  {
    struct std___Vector_base_int__std__allocator_int__* base1140 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1131 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1140);
  }
  return;
}

// function: main
int main() {
bb1141:
  int __retval1142;
  int myints1143[5];
  struct std__vector_int__std__allocator_int__ v1144;
  struct std__allocator_int_ ref_tmp01145;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01146;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11147;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21148;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31149;
  int ref_tmp11150;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41151;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp51152;
  int c1153 = 0;
  __retval1142 = c1153;
  // array copy
  __builtin_memcpy(myints1143, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast1154 = (int*)&(myints1143);
  int* cast1155 = (int*)&(myints1143);
  int c1156 = 5;
  int* ptr1157 = &(cast1155)[c1156];
  std__allocator_int___allocator_2(&ref_tmp01145);
    std__vector_int__std__allocator_int_____vector_int___void_(&v1144, cast1154, ptr1157, &ref_tmp01145);
  {
    std__allocator_int____allocator(&ref_tmp01145);
  }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1158 = std__vector_int__std__allocator_int_____begin(&v1144);
    agg_tmp01146 = r1158;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1159 = std__vector_int__std__allocator_int_____end(&v1144);
    agg_tmp11147 = r1159;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1160 = agg_tmp01146;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1161 = agg_tmp11147;
    void_std__make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1160, t1161);
    char* cast1162 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r1163 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1162);
    int* r1164 = std__vector_int__std__allocator_int_____front(&v1144);
    int t1165 = *r1164;
    struct std__basic_ostream_char__std__char_traits_char__* r1166 = std__ostream__operator__(r1163, t1165);
    struct std__basic_ostream_char__std__char_traits_char__* r1167 = std__ostream__operator___std__ostream_____(r1166, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1168 = std__vector_int__std__allocator_int_____begin(&v1144);
    agg_tmp21148 = r1168;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1169 = std__vector_int__std__allocator_int_____end(&v1144);
    agg_tmp31149 = r1169;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1170 = agg_tmp21148;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1171 = agg_tmp31149;
    void_std__pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1170, t1171);
    std__vector_int__std__allocator_int_____pop_back(&v1144);
    char* cast1172 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r1173 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1172);
    int* r1174 = std__vector_int__std__allocator_int_____front(&v1144);
    int t1175 = *r1174;
    struct std__basic_ostream_char__std__char_traits_char__* r1176 = std__ostream__operator__(r1173, t1175);
    struct std__basic_ostream_char__std__char_traits_char__* r1177 = std__ostream__operator___std__ostream_____(r1176, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1178 = 99;
    ref_tmp11150 = c1178;
    std__vector_int__std__allocator_int_____push_back(&v1144, &ref_tmp11150);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1179 = std__vector_int__std__allocator_int_____begin(&v1144);
    agg_tmp41151 = r1179;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1180 = std__vector_int__std__allocator_int_____end(&v1144);
    agg_tmp51152 = r1180;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1181 = agg_tmp41151;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1182 = agg_tmp51152;
    void_std__push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1181, t1182);
    char* cast1183 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r1184 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1183);
    int* r1185 = std__vector_int__std__allocator_int_____front(&v1144);
    int t1186 = *r1185;
    struct std__basic_ostream_char__std__char_traits_char__* r1187 = std__ostream__operator__(r1184, t1186);
    struct std__basic_ostream_char__std__char_traits_char__* r1188 = std__ostream__operator___std__ostream_____(r1187, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    unsigned long c1189 = 0;
    int* r1190 = std__vector_int__std__allocator_int_____operator__(&v1144, c1189);
    int t1191 = *r1190;
    int c1192 = 99;
    _Bool c1193 = ((t1191 == c1192)) ? 1 : 0;
    if (c1193) {
    } else {
      char* cast1194 = (char*)&(_str_3);
      char* c1195 = _str_4;
      unsigned int c1196 = 27;
      char* cast1197 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1194, c1195, c1196, cast1197);
    }
    unsigned long c1198 = 1;
    int* r1199 = std__vector_int__std__allocator_int_____operator__(&v1144, c1198);
    int t1200 = *r1199;
    int c1201 = 20;
    _Bool c1202 = ((t1200 == c1201)) ? 1 : 0;
    if (c1202) {
    } else {
      char* cast1203 = (char*)&(_str_5);
      char* c1204 = _str_4;
      unsigned int c1205 = 28;
      char* cast1206 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1203, c1204, c1205, cast1206);
    }
    unsigned long c1207 = 2;
    int* r1208 = std__vector_int__std__allocator_int_____operator__(&v1144, c1207);
    int t1209 = *r1208;
    int c1210 = 10;
    _Bool c1211 = ((t1209 == c1210)) ? 1 : 0;
    if (c1211) {
    } else {
      char* cast1212 = (char*)&(_str_6);
      char* c1213 = _str_4;
      unsigned int c1214 = 29;
      char* cast1215 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1212, c1213, c1214, cast1215);
    }
    unsigned long c1216 = 3;
    int* r1217 = std__vector_int__std__allocator_int_____operator__(&v1144, c1216);
    int t1218 = *r1217;
    int c1219 = 5;
    _Bool c1220 = ((t1218 == c1219)) ? 1 : 0;
    if (c1220) {
    } else {
      char* cast1221 = (char*)&(_str_7);
      char* c1222 = _str_4;
      unsigned int c1223 = 30;
      char* cast1224 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1221, c1222, c1223, cast1224);
    }
    unsigned long c1225 = 4;
    int* r1226 = std__vector_int__std__allocator_int_____operator__(&v1144, c1225);
    int t1227 = *r1226;
    int c1228 = 15;
    _Bool c1229 = ((t1227 == c1228)) ? 1 : 0;
    if (c1229) {
    } else {
      char* cast1230 = (char*)&(_str_8);
      char* c1231 = _str_4;
      unsigned int c1232 = 31;
      char* cast1233 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1230, c1231, c1232, cast1233);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1234 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1235 = 0;
    __retval1142 = c1235;
    int t1236 = __retval1142;
    int ret_val1237 = t1236;
    {
      std__vector_int__std__allocator_int______vector(&v1144);
    }
    return ret_val1237;
  int t1238 = __retval1142;
  return t1238;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v1239) {
bb1240:
  struct std____new_allocator_int_* this1241;
  this1241 = v1239;
  struct std____new_allocator_int_* t1242 = this1241;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1243, struct std__allocator_int_* v1244) {
bb1245:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1246;
  struct std__allocator_int_* __a1247;
  this1246 = v1243;
  __a1247 = v1244;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1248 = this1246;
  struct std__allocator_int_* base1249 = (struct std__allocator_int_*)((char *)t1248 + 0);
  struct std__allocator_int_* t1250 = __a1247;
  std__allocator_int___allocator(base1249, t1250);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1251 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1248 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1251);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1252) {
bb1253:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1254;
  this1254 = v1252;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1255 = this1254;
  {
    struct std__allocator_int_* base1256 = (struct std__allocator_int_*)((char *)t1255 + 0);
    std__allocator_int____allocator(base1256);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1257, struct std__allocator_int_* v1258) {
bb1259:
  struct std___Vector_base_int__std__allocator_int__* this1260;
  struct std__allocator_int_* __a1261;
  this1260 = v1257;
  __a1261 = v1258;
  struct std___Vector_base_int__std__allocator_int__* t1262 = this1260;
  struct std__allocator_int_* t1263 = __a1261;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1262->_M_impl, t1263);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v1264, int** v1265, int* v1266) {
bb1267:
  struct std__ranges____distance_fn* this1268;
  int** __first1269;
  int* __last1270;
  long __retval1271;
  this1268 = v1264;
  __first1269 = v1265;
  __last1270 = v1266;
  struct std__ranges____distance_fn* t1272 = this1268;
  int* t1273 = __last1270;
  int** t1274 = __first1269;
  int* t1275 = *t1274;
  long diff1276 = t1273 - t1275;
  __retval1271 = diff1276;
  long t1277 = __retval1271;
  return t1277;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1278:
  _Bool __retval1279;
    _Bool c1280 = 0;
    __retval1279 = c1280;
    _Bool t1281 = __retval1279;
    return t1281;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1282) {
bb1283:
  struct std____new_allocator_int_* this1284;
  unsigned long __retval1285;
  this1284 = v1282;
  struct std____new_allocator_int_* t1286 = this1284;
  unsigned long c1287 = 9223372036854775807;
  unsigned long c1288 = 4;
  unsigned long b1289 = c1287 / c1288;
  __retval1285 = b1289;
  unsigned long t1290 = __retval1285;
  return t1290;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1291, unsigned long v1292, void* v1293) {
bb1294:
  struct std____new_allocator_int_* this1295;
  unsigned long __n1296;
  void* unnamed1297;
  int* __retval1298;
  this1295 = v1291;
  __n1296 = v1292;
  unnamed1297 = v1293;
  struct std____new_allocator_int_* t1299 = this1295;
    unsigned long t1300 = __n1296;
    unsigned long r1301 = std____new_allocator_int____M_max_size___const(t1299);
    _Bool c1302 = ((t1300 > r1301)) ? 1 : 0;
    if (c1302) {
        unsigned long t1303 = __n1296;
        unsigned long c1304 = -1;
        unsigned long c1305 = 4;
        unsigned long b1306 = c1304 / c1305;
        _Bool c1307 = ((t1303 > b1306)) ? 1 : 0;
        if (c1307) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1308 = 4;
    unsigned long c1309 = 16;
    _Bool c1310 = ((c1308 > c1309)) ? 1 : 0;
    if (c1310) {
      unsigned long __al1311;
      unsigned long c1312 = 4;
      __al1311 = c1312;
      unsigned long t1313 = __n1296;
      unsigned long c1314 = 4;
      unsigned long b1315 = t1313 * c1314;
      unsigned long t1316 = __al1311;
      void* r1317 = operator_new_2(b1315, t1316);
      int* cast1318 = (int*)r1317;
      __retval1298 = cast1318;
      int* t1319 = __retval1298;
      return t1319;
    }
  unsigned long t1320 = __n1296;
  unsigned long c1321 = 4;
  unsigned long b1322 = t1320 * c1321;
  void* r1323 = operator_new(b1322);
  int* cast1324 = (int*)r1323;
  __retval1298 = cast1324;
  int* t1325 = __retval1298;
  return t1325;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1326, unsigned long v1327) {
bb1328:
  struct std__allocator_int_* this1329;
  unsigned long __n1330;
  int* __retval1331;
  this1329 = v1326;
  __n1330 = v1327;
  struct std__allocator_int_* t1332 = this1329;
    _Bool r1333 = std____is_constant_evaluated();
    if (r1333) {
        unsigned long t1334 = __n1330;
        unsigned long c1335 = 4;
        unsigned long ovr1336;
        _Bool ovf1337 = __builtin_mul_overflow(t1334, c1335, &ovr1336);
        __n1330 = ovr1336;
        if (ovf1337) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1338 = __n1330;
      void* r1339 = operator_new(t1338);
      int* cast1340 = (int*)r1339;
      __retval1331 = cast1340;
      int* t1341 = __retval1331;
      return t1341;
    }
  struct std____new_allocator_int_* base1342 = (struct std____new_allocator_int_*)((char *)t1332 + 0);
  unsigned long t1343 = __n1330;
  void* c1344 = ((void*)0);
  int* r1345 = std____new_allocator_int___allocate(base1342, t1343, c1344);
  __retval1331 = r1345;
  int* t1346 = __retval1331;
  return t1346;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1347, unsigned long v1348) {
bb1349:
  struct std__allocator_int_* __a1350;
  unsigned long __n1351;
  int* __retval1352;
  __a1350 = v1347;
  __n1351 = v1348;
  struct std__allocator_int_* t1353 = __a1350;
  unsigned long t1354 = __n1351;
  int* r1355 = std__allocator_int___allocate(t1353, t1354);
  __retval1352 = r1355;
  int* t1356 = __retval1352;
  return t1356;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1357, unsigned long v1358) {
bb1359:
  struct std___Vector_base_int__std__allocator_int__* this1360;
  unsigned long __n1361;
  int* __retval1362;
  this1360 = v1357;
  __n1361 = v1358;
  struct std___Vector_base_int__std__allocator_int__* t1363 = this1360;
  unsigned long t1364 = __n1361;
  unsigned long c1365 = 0;
  _Bool c1366 = ((t1364 != c1365)) ? 1 : 0;
  int* ternary1367;
  if (c1366) {
    struct std__allocator_int_* base1368 = (struct std__allocator_int_*)((char *)&(t1363->_M_impl) + 0);
    unsigned long t1369 = __n1361;
    int* r1370 = std__allocator_traits_std__allocator_int_____allocate(base1368, t1369);
    ternary1367 = (int*)r1370;
  } else {
    int* c1371 = ((void*)0);
    ternary1367 = (int*)c1371;
  }
  __retval1362 = ternary1367;
  int* t1372 = __retval1362;
  return t1372;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1373, unsigned long* v1374) {
bb1375:
  unsigned long* __a1376;
  unsigned long* __b1377;
  unsigned long* __retval1378;
  __a1376 = v1373;
  __b1377 = v1374;
    unsigned long* t1379 = __b1377;
    unsigned long t1380 = *t1379;
    unsigned long* t1381 = __a1376;
    unsigned long t1382 = *t1381;
    _Bool c1383 = ((t1380 < t1382)) ? 1 : 0;
    if (c1383) {
      unsigned long* t1384 = __b1377;
      __retval1378 = t1384;
      unsigned long* t1385 = __retval1378;
      return t1385;
    }
  unsigned long* t1386 = __a1376;
  __retval1378 = t1386;
  unsigned long* t1387 = __retval1378;
  return t1387;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1388) {
bb1389:
  struct std__allocator_int_* __a1390;
  unsigned long __retval1391;
  unsigned long __diffmax1392;
  unsigned long __allocmax1393;
  __a1390 = v1388;
  unsigned long c1394 = 2305843009213693951;
  __diffmax1392 = c1394;
  unsigned long c1395 = 4611686018427387903;
  __allocmax1393 = c1395;
  unsigned long* r1396 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1392, &__allocmax1393);
  unsigned long t1397 = *r1396;
  __retval1391 = t1397;
  unsigned long t1398 = __retval1391;
  return t1398;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1399, struct std__allocator_int_* v1400) {
bb1401:
  struct std__allocator_int_* this1402;
  struct std__allocator_int_* __a1403;
  this1402 = v1399;
  __a1403 = v1400;
  struct std__allocator_int_* t1404 = this1402;
  struct std____new_allocator_int_* base1405 = (struct std____new_allocator_int_*)((char *)t1404 + 0);
  struct std__allocator_int_* t1406 = __a1403;
  struct std____new_allocator_int_* base1407 = (struct std____new_allocator_int_*)((char *)t1406 + 0);
  std____new_allocator_int_____new_allocator(base1405, base1407);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1408, struct std__allocator_int_* v1409) {
bb1410:
  unsigned long __n1411;
  struct std__allocator_int_* __a1412;
  unsigned long __retval1413;
  __n1411 = v1408;
  __a1412 = v1409;
    struct std__allocator_int_ ref_tmp01414;
    _Bool tmp_exprcleanup1415;
    unsigned long t1416 = __n1411;
    struct std__allocator_int_* t1417 = __a1412;
    std__allocator_int___allocator(&ref_tmp01414, t1417);
      unsigned long r1418 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01414);
      _Bool c1419 = ((t1416 > r1418)) ? 1 : 0;
      tmp_exprcleanup1415 = c1419;
    {
      std__allocator_int____allocator(&ref_tmp01414);
    }
    _Bool t1420 = tmp_exprcleanup1415;
    if (t1420) {
      char* cast1421 = (char*)&(_str_9);
      std____throw_length_error(cast1421);
    }
  unsigned long t1422 = __n1411;
  __retval1413 = t1422;
  unsigned long t1423 = __retval1413;
  return t1423;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1424) {
bb1425:
  struct std___Vector_base_int__std__allocator_int__* this1426;
  struct std__allocator_int_* __retval1427;
  this1426 = v1424;
  struct std___Vector_base_int__std__allocator_int__* t1428 = this1426;
  struct std__allocator_int_* base1429 = (struct std__allocator_int_*)((char *)&(t1428->_M_impl) + 0);
  __retval1427 = base1429;
  struct std__allocator_int_* t1430 = __retval1427;
  return t1430;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1431:
  _Bool __retval1432;
    _Bool c1433 = 0;
    __retval1432 = c1433;
    _Bool t1434 = __retval1432;
    return t1434;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1435, int** v1436) {
bb1437:
  struct std___UninitDestroyGuard_int____void_* this1438;
  int** __first1439;
  this1438 = v1435;
  __first1439 = v1436;
  struct std___UninitDestroyGuard_int____void_* t1440 = this1438;
  int** t1441 = __first1439;
  int* t1442 = *t1441;
  t1440->_M_first = t1442;
  int** t1443 = __first1439;
  t1440->_M_cur = t1443;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1444, int* v1445) {
bb1446:
  int* __location1447;
  int* __args1448;
  int* __retval1449;
  void* __loc1450;
  __location1447 = v1444;
  __args1448 = v1445;
  int* t1451 = __location1447;
  void* cast1452 = (void*)t1451;
  __loc1450 = cast1452;
    void* t1453 = __loc1450;
    int* cast1454 = (int*)t1453;
    int* t1455 = __args1448;
    int t1456 = *t1455;
    *cast1454 = t1456;
    __retval1449 = cast1454;
    int* t1457 = __retval1449;
    return t1457;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v1458, int* v1459) {
bb1460:
  int* __p1461;
  int* __args1462;
  __p1461 = v1458;
  __args1462 = v1459;
    _Bool r1463 = std____is_constant_evaluated();
    if (r1463) {
      int* t1464 = __p1461;
      int* t1465 = __args1462;
      int* r1466 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1464, t1465);
      return;
    }
  int* t1467 = __p1461;
  void* cast1468 = (void*)t1467;
  int* cast1469 = (int*)cast1468;
  int* t1470 = __args1462;
  int t1471 = *t1470;
  *cast1469 = t1471;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1472) {
bb1473:
  struct std___UninitDestroyGuard_int____void_* this1474;
  this1474 = v1472;
  struct std___UninitDestroyGuard_int____void_* t1475 = this1474;
  int** c1476 = ((void*)0);
  t1475->_M_cur = c1476;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1477) {
bb1478:
  struct std___UninitDestroyGuard_int____void_* this1479;
  this1479 = v1477;
  struct std___UninitDestroyGuard_int____void_* t1480 = this1479;
    int** t1481 = t1480->_M_cur;
    int** c1482 = ((void*)0);
    _Bool c1483 = ((t1481 != c1482)) ? 1 : 0;
    if (c1483) {
      int* t1484 = t1480->_M_first;
      int** t1485 = t1480->_M_cur;
      int* t1486 = *t1485;
      void_std___Destroy_int__(t1484, t1486);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v1487, int* v1488, int* v1489) {
bb1490:
  int* __first1491;
  int* __last1492;
  int* __result1493;
  int* __retval1494;
  struct std___UninitDestroyGuard_int____void_ __guard1495;
  __first1491 = v1487;
  __last1492 = v1488;
  __result1493 = v1489;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1495, &__result1493);
      while (1) {
        int* t1497 = __first1491;
        int* t1498 = __last1492;
        _Bool c1499 = ((t1497 != t1498)) ? 1 : 0;
        if (!c1499) break;
        int* t1500 = __result1493;
        int* t1501 = __first1491;
        void_std___Construct_int__int__(t1500, t1501);
      for_step1496: ;
        int* t1502 = __first1491;
        int c1503 = 1;
        int* ptr1504 = &(t1502)[c1503];
        __first1491 = ptr1504;
        int* t1505 = __result1493;
        int c1506 = 1;
        int* ptr1507 = &(t1505)[c1506];
        __result1493 = ptr1507;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1495);
    int* t1508 = __result1493;
    __retval1494 = t1508;
    int* t1509 = __retval1494;
    int* ret_val1510 = t1509;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1495);
    }
    return ret_val1510;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v1511) {
bb1512:
  int* __it1513;
  int* __retval1514;
  __it1513 = v1511;
  int* t1515 = __it1513;
  __retval1514 = t1515;
  int* t1516 = __retval1514;
  return t1516;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v1517, int* v1518, int* v1519) {
bb1520:
  int* __first1521;
  int* __last1522;
  int* __result1523;
  int* __retval1524;
  __first1521 = v1517;
  __last1522 = v1518;
  __result1523 = v1519;
      long __n1525;
      int* t1526 = __last1522;
      int* t1527 = __first1521;
      long diff1528 = t1526 - t1527;
      __n1525 = diff1528;
        long t1529 = __n1525;
        long c1530 = 0;
        _Bool c1531 = ((t1529 > c1530)) ? 1 : 0;
        if (c1531) {
          int* t1532 = __result1523;
          int* r1533 = int__std____niter_base_int__(t1532);
          void* cast1534 = (void*)r1533;
          int* t1535 = __first1521;
          int* r1536 = int__std____niter_base_int__(t1535);
          void* cast1537 = (void*)r1536;
          long t1538 = __n1525;
          unsigned long cast1539 = (unsigned long)t1538;
          unsigned long c1540 = 4;
          unsigned long b1541 = cast1539 * c1540;
          void* r1542 = memcpy(cast1534, cast1537, b1541);
          long t1543 = __n1525;
          int* t1544 = __result1523;
          int* ptr1545 = &(t1544)[t1543];
          __result1523 = ptr1545;
        }
      int* t1546 = __result1523;
      __retval1524 = t1546;
      int* t1547 = __retval1524;
      return t1547;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v1548, int* v1549, int* v1550, struct std__allocator_int_* v1551) {
bb1552:
  int* __first1553;
  int* __last1554;
  int* __result1555;
  struct std__allocator_int_* unnamed1556;
  int* __retval1557;
  __first1553 = v1548;
  __last1554 = v1549;
  __result1555 = v1550;
  unnamed1556 = v1551;
    _Bool r1558 = std__is_constant_evaluated();
    if (r1558) {
      int* t1559 = __first1553;
      int* t1560 = __last1554;
      int* t1561 = __result1555;
      int* r1562 = int__std____do_uninit_copy_int___int___int__(t1559, t1560, t1561);
      __retval1557 = r1562;
      int* t1563 = __retval1557;
      return t1563;
    }
    int* t1564 = __first1553;
    int* t1565 = __last1554;
    int* t1566 = __result1555;
    int* r1567 = int__std__uninitialized_copy_int___int__(t1564, t1565, t1566);
    __retval1557 = r1567;
    int* t1568 = __retval1557;
    return t1568;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v1569, int* v1570, int* v1571, unsigned long v1572) {
bb1573:
  struct std__vector_int__std__allocator_int__* this1574;
  int* __first1575;
  int* __last1576;
  unsigned long __n1577;
  int* __start1578;
  this1574 = v1569;
  __first1575 = v1570;
  __last1576 = v1571;
  __n1577 = v1572;
  struct std__vector_int__std__allocator_int__* t1579 = this1574;
  struct std___Vector_base_int__std__allocator_int__* base1580 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1579 + 0);
  unsigned long t1581 = __n1577;
  struct std___Vector_base_int__std__allocator_int__* base1582 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1579 + 0);
  struct std__allocator_int_* r1583 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1582);
  unsigned long r1584 = std__vector_int__std__allocator_int______S_check_init_len(t1581, r1583);
  int* r1585 = std___Vector_base_int__std__allocator_int______M_allocate(base1580, r1584);
  __start1578 = r1585;
  int* t1586 = __start1578;
  struct std___Vector_base_int__std__allocator_int__* base1587 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1579 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1588 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1587->_M_impl) + 0);
  base1588->_M_finish = t1586;
  struct std___Vector_base_int__std__allocator_int__* base1589 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1579 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1590 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1589->_M_impl) + 0);
  base1590->_M_start = t1586;
  int* t1591 = __start1578;
  unsigned long t1592 = __n1577;
  int* ptr1593 = &(t1591)[t1592];
  struct std___Vector_base_int__std__allocator_int__* base1594 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1579 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1595 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1594->_M_impl) + 0);
  base1595->_M_end_of_storage = ptr1593;
  int* t1596 = __first1575;
  int* t1597 = __last1576;
  int* t1598 = __start1578;
  struct std___Vector_base_int__std__allocator_int__* base1599 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1579 + 0);
  struct std__allocator_int_* r1600 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1599);
  int* r1601 = int__std____uninitialized_copy_a_int___int___int___int_(t1596, t1597, t1598, r1600);
  struct std___Vector_base_int__std__allocator_int__* base1602 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1579 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1603 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1602->_M_impl) + 0);
  base1603->_M_finish = r1601;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1604, int* v1605, unsigned long v1606) {
bb1607:
  struct std____new_allocator_int_* this1608;
  int* __p1609;
  unsigned long __n1610;
  this1608 = v1604;
  __p1609 = v1605;
  __n1610 = v1606;
  struct std____new_allocator_int_* t1611 = this1608;
    unsigned long c1612 = 4;
    unsigned long c1613 = 16;
    _Bool c1614 = ((c1612 > c1613)) ? 1 : 0;
    if (c1614) {
      int* t1615 = __p1609;
      void* cast1616 = (void*)t1615;
      unsigned long t1617 = __n1610;
      unsigned long c1618 = 4;
      unsigned long b1619 = t1617 * c1618;
      unsigned long c1620 = 4;
      operator_delete_3(cast1616, b1619, c1620);
      return;
    }
  int* t1621 = __p1609;
  void* cast1622 = (void*)t1621;
  unsigned long t1623 = __n1610;
  unsigned long c1624 = 4;
  unsigned long b1625 = t1623 * c1624;
  operator_delete_2(cast1622, b1625);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1626, int* v1627, unsigned long v1628) {
bb1629:
  struct std__allocator_int_* this1630;
  int* __p1631;
  unsigned long __n1632;
  this1630 = v1626;
  __p1631 = v1627;
  __n1632 = v1628;
  struct std__allocator_int_* t1633 = this1630;
    _Bool r1634 = std____is_constant_evaluated();
    if (r1634) {
      int* t1635 = __p1631;
      void* cast1636 = (void*)t1635;
      operator_delete(cast1636);
      return;
    }
  struct std____new_allocator_int_* base1637 = (struct std____new_allocator_int_*)((char *)t1633 + 0);
  int* t1638 = __p1631;
  unsigned long t1639 = __n1632;
  std____new_allocator_int___deallocate(base1637, t1638, t1639);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1640, int* v1641, unsigned long v1642) {
bb1643:
  struct std__allocator_int_* __a1644;
  int* __p1645;
  unsigned long __n1646;
  __a1644 = v1640;
  __p1645 = v1641;
  __n1646 = v1642;
  struct std__allocator_int_* t1647 = __a1644;
  int* t1648 = __p1645;
  unsigned long t1649 = __n1646;
  std__allocator_int___deallocate(t1647, t1648, t1649);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1650, int* v1651, unsigned long v1652) {
bb1653:
  struct std___Vector_base_int__std__allocator_int__* this1654;
  int* __p1655;
  unsigned long __n1656;
  this1654 = v1650;
  __p1655 = v1651;
  __n1656 = v1652;
  struct std___Vector_base_int__std__allocator_int__* t1657 = this1654;
    int* t1658 = __p1655;
    _Bool cast1659 = (_Bool)t1658;
    if (cast1659) {
      struct std__allocator_int_* base1660 = (struct std__allocator_int_*)((char *)&(t1657->_M_impl) + 0);
      int* t1661 = __p1655;
      unsigned long t1662 = __n1656;
      std__allocator_traits_std__allocator_int_____deallocate(base1660, t1661, t1662);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1663) {
bb1664:
  struct std___Vector_base_int__std__allocator_int__* this1665;
  this1665 = v1663;
  struct std___Vector_base_int__std__allocator_int__* t1666 = this1665;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1667 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1666->_M_impl) + 0);
    int* t1668 = base1667->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1669 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1666->_M_impl) + 0);
    int* t1670 = base1669->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1671 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1666->_M_impl) + 0);
    int* t1672 = base1671->_M_start;
    long diff1673 = t1670 - t1672;
    unsigned long cast1674 = (unsigned long)diff1673;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1666, t1668, cast1674);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1666->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1675, struct std____new_allocator_int_* v1676) {
bb1677:
  struct std____new_allocator_int_* this1678;
  struct std____new_allocator_int_* unnamed1679;
  this1678 = v1675;
  unnamed1679 = v1676;
  struct std____new_allocator_int_* t1680 = this1678;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1681) {
bb1682:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1683;
  this1683 = v1681;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1684 = this1683;
  int* c1685 = ((void*)0);
  t1684->_M_start = c1685;
  int* c1686 = ((void*)0);
  t1684->_M_finish = c1686;
  int* c1687 = ((void*)0);
  t1684->_M_end_of_storage = c1687;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1688) {
bb1689:
  int* __location1690;
  __location1690 = v1688;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1691, int* v1692) {
bb1693:
  int* __first1694;
  int* __last1695;
  __first1694 = v1691;
  __last1695 = v1692;
      _Bool r1696 = std____is_constant_evaluated();
      if (r1696) {
          while (1) {
            int* t1698 = __first1694;
            int* t1699 = __last1695;
            _Bool c1700 = ((t1698 != t1699)) ? 1 : 0;
            if (!c1700) break;
            int* t1701 = __first1694;
            void_std__destroy_at_int_(t1701);
          for_step1697: ;
            int* t1702 = __first1694;
            int c1703 = 1;
            int* ptr1704 = &(t1702)[c1703];
            __first1694 = ptr1704;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1705, int* v1706, struct std__allocator_int_* v1707) {
bb1708:
  int* __first1709;
  int* __last1710;
  struct std__allocator_int_* unnamed1711;
  __first1709 = v1705;
  __last1710 = v1706;
  unnamed1711 = v1707;
  int* t1712 = __first1709;
  int* t1713 = __last1710;
  void_std___Destroy_int__(t1712, t1713);
  return;
}

