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
struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_comp_val_std__less_int__ { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_int_ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };
struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__ { struct std__vector_int__std__allocator_int__ c; unsigned char __field1[8]; } __attribute__((packed));

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[14] = "!mypq.empty()";
char _str_1[127] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/priority_queue/priority_queue_empty_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[8] = "total: ";
char _str_3[26] = "vector::_M_realloc_append";
char _str_4[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_queue.h";
char __PRETTY_FUNCTION____ZNKSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEE3topEv[123] = "const_reference std::priority_queue<int>::top() const [_Tp = int, _Sequence = std::vector<int>, _Compare = std::less<int>]";
char _str_5[15] = "!this->empty()";
char _str_6[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNKSt6vectorIiSaIiEE5frontEv[90] = "const_reference std::vector<int>::front() const [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEE3popEv[106] = "void std::priority_queue<int>::pop() [_Tp = int, _Sequence = std::vector<int>, _Compare = std::less<int>]";
char _str_7[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_heap.h";
char __PRETTY_FUNCTION____ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt4lessIiEEvT_S9_T0_[182] = "void std::pop_heap(_RandomAccessIterator, _RandomAccessIterator, _Compare) [_RandomAccessIterator = __gnu_cxx::__normal_iterator<int *, std::vector<int>>, _Compare = std::less<int>]";
char _str_8[18] = "__first != __last";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE8pop_backEv[76] = "void std::vector<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____priority_queue_std__vector_int__std__allocator_int_____void_(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* p0);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* p0, int* p1, int* p2);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____throw_length_error(char* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, char* p2);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
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
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0, int* p1, unsigned long p2, struct std___Vector_base_int__std__allocator_int__* p3);
int* int__std__to_address_int_(int* p0);
int* auto_std____to_address_int__(int** p0);
_Bool std__is_constant_evaluated();
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
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* int__std____niter_base_int__(int* p0);
int* int__std____relocate_a_int___int___std__allocator_int___(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* std__vector_int__std__allocator_int______S_relocate(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* p0, int* p1);
void __gnu_cxx____ops___Iter_comp_val_std__less_int______Iter_comp_val_2(struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* p0, struct std__less_int_ p1);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* p0, int* p1, int* p2);
_Bool bool___gnu_cxx____ops___Iter_comp_val_std__less_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_std__less_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* p4);
void void_std__push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__less_int___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct std__less_int_ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____push(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* p0, int* p1);
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* p0);
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* p0);
_Bool std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____empty___const(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
int* std__vector_int__std__allocator_int_____front___const(struct std__vector_int__std__allocator_int__* p0);
int* std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____top___const(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____ops___Iter_comp_iter_std__less_int______Iter_comp_iter(struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* p0, struct std__less_int_ p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool bool___gnu_cxx____ops___Iter_comp_iter_std__less_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void __gnu_cxx____ops___Iter_comp_val_std__less_int______Iter_comp_val(struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* p0, struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* p1);
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_std__less_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ p4);
void void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_std__less_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* p3);
void void_std__pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__less_int___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct std__less_int_ p2);
void std__vector_int__std__allocator_int_____pop_back(struct std__vector_int__std__allocator_int__* p0);
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____pop(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int______priority_queue(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* p0);
int main();
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);

// function: _ZNSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEEC2IS2_vEEv
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____priority_queue_std__vector_int__std__allocator_int_____void_(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* v0) {
bb1:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* this2;
  this2 = v0;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* t3 = this2;
  struct std__vector_int__std__allocator_int__ c4 = {0};
  t3->c = c4;
  std__vector_int__std__allocator_int_____vector(&t3->c);
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v5, int* v6) {
bb7:
  int* __location8;
  int* __args9;
  int* __retval10;
  void* __loc11;
  __location8 = v5;
  __args9 = v6;
  int* t12 = __location8;
  void* cast13 = (void*)t12;
  __loc11 = cast13;
    void* t14 = __loc11;
    int* cast15 = (int*)t14;
    int* t16 = __args9;
    int t17 = *t16;
    *cast15 = t17;
    __retval10 = cast15;
    int* t18 = __retval10;
    return t18;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v19, int* v20, int* v21) {
bb22:
  struct std__allocator_int_* __a23;
  int* __p24;
  int* __args25;
  __a23 = v19;
  __p24 = v20;
  __args25 = v21;
  int* t26 = __p24;
  int* t27 = __args25;
  int* r28 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t26, t27);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v29, unsigned long* v30) {
bb31:
  unsigned long* __a32;
  unsigned long* __b33;
  unsigned long* __retval34;
  __a32 = v29;
  __b33 = v30;
    unsigned long* t35 = __b33;
    unsigned long t36 = *t35;
    unsigned long* t37 = __a32;
    unsigned long t38 = *t37;
    _Bool c39 = ((t36 < t38)) ? 1 : 0;
    if (c39) {
      unsigned long* t40 = __b33;
      __retval34 = t40;
      unsigned long* t41 = __retval34;
      return t41;
    }
  unsigned long* t42 = __a32;
  __retval34 = t42;
  unsigned long* t43 = __retval34;
  return t43;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v44) {
bb45:
  struct std__allocator_int_* __a46;
  unsigned long __retval47;
  unsigned long __diffmax48;
  unsigned long __allocmax49;
  __a46 = v44;
  unsigned long c50 = 2305843009213693951;
  __diffmax48 = c50;
  unsigned long c51 = 4611686018427387903;
  __allocmax49 = c51;
  unsigned long* r52 = unsigned_long_const__std__min_unsigned_long_(&__diffmax48, &__allocmax49);
  unsigned long t53 = *r52;
  __retval47 = t53;
  unsigned long t54 = __retval47;
  return t54;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v55) {
bb56:
  struct std___Vector_base_int__std__allocator_int__* this57;
  struct std__allocator_int_* __retval58;
  this57 = v55;
  struct std___Vector_base_int__std__allocator_int__* t59 = this57;
  struct std__allocator_int_* base60 = (struct std__allocator_int_*)((char *)&(t59->_M_impl) + 0);
  __retval58 = base60;
  struct std__allocator_int_* t61 = __retval58;
  return t61;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v62) {
bb63:
  struct std__vector_int__std__allocator_int__* this64;
  unsigned long __retval65;
  this64 = v62;
  struct std__vector_int__std__allocator_int__* t66 = this64;
  struct std___Vector_base_int__std__allocator_int__* base67 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t66 + 0);
  struct std__allocator_int_* r68 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base67);
  unsigned long r69 = std__vector_int__std__allocator_int______S_max_size(r68);
  __retval65 = r69;
  unsigned long t70 = __retval65;
  return t70;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v71) {
bb72:
  struct std__vector_int__std__allocator_int__* this73;
  unsigned long __retval74;
  long __dif75;
  this73 = v71;
  struct std__vector_int__std__allocator_int__* t76 = this73;
  struct std___Vector_base_int__std__allocator_int__* base77 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t76 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base78 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base77->_M_impl) + 0);
  int* t79 = base78->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base80 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t76 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base81 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base80->_M_impl) + 0);
  int* t82 = base81->_M_start;
  long diff83 = t79 - t82;
  __dif75 = diff83;
    long t84 = __dif75;
    long c85 = 0;
    _Bool c86 = ((t84 < c85)) ? 1 : 0;
    if (c86) {
      __builtin_unreachable();
    }
  long t87 = __dif75;
  unsigned long cast88 = (unsigned long)t87;
  __retval74 = cast88;
  unsigned long t89 = __retval74;
  return t89;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v90, unsigned long* v91) {
bb92:
  unsigned long* __a93;
  unsigned long* __b94;
  unsigned long* __retval95;
  __a93 = v90;
  __b94 = v91;
    unsigned long* t96 = __a93;
    unsigned long t97 = *t96;
    unsigned long* t98 = __b94;
    unsigned long t99 = *t98;
    _Bool c100 = ((t97 < t99)) ? 1 : 0;
    if (c100) {
      unsigned long* t101 = __b94;
      __retval95 = t101;
      unsigned long* t102 = __retval95;
      return t102;
    }
  unsigned long* t103 = __a93;
  __retval95 = t103;
  unsigned long* t104 = __retval95;
  return t104;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v105, unsigned long v106, char* v107) {
bb108:
  struct std__vector_int__std__allocator_int__* this109;
  unsigned long __n110;
  char* __s111;
  unsigned long __retval112;
  unsigned long __len113;
  unsigned long ref_tmp0114;
  this109 = v105;
  __n110 = v106;
  __s111 = v107;
  struct std__vector_int__std__allocator_int__* t115 = this109;
    unsigned long r116 = std__vector_int__std__allocator_int_____max_size___const(t115);
    unsigned long r117 = std__vector_int__std__allocator_int_____size___const(t115);
    unsigned long b118 = r116 - r117;
    unsigned long t119 = __n110;
    _Bool c120 = ((b118 < t119)) ? 1 : 0;
    if (c120) {
      char* t121 = __s111;
      std____throw_length_error(t121);
    }
  unsigned long r122 = std__vector_int__std__allocator_int_____size___const(t115);
  unsigned long r123 = std__vector_int__std__allocator_int_____size___const(t115);
  ref_tmp0114 = r123;
  unsigned long* r124 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0114, &__n110);
  unsigned long t125 = *r124;
  unsigned long b126 = r122 + t125;
  __len113 = b126;
  unsigned long t127 = __len113;
  unsigned long r128 = std__vector_int__std__allocator_int_____size___const(t115);
  _Bool c129 = ((t127 < r128)) ? 1 : 0;
  _Bool ternary130;
  if (c129) {
    _Bool c131 = 1;
    ternary130 = (_Bool)c131;
  } else {
    unsigned long t132 = __len113;
    unsigned long r133 = std__vector_int__std__allocator_int_____max_size___const(t115);
    _Bool c134 = ((t132 > r133)) ? 1 : 0;
    ternary130 = (_Bool)c134;
  }
  unsigned long ternary135;
  if (ternary130) {
    unsigned long r136 = std__vector_int__std__allocator_int_____max_size___const(t115);
    ternary135 = (unsigned long)r136;
  } else {
    unsigned long t137 = __len113;
    ternary135 = (unsigned long)t137;
  }
  __retval112 = ternary135;
  unsigned long t138 = __retval112;
  return t138;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v139) {
bb140:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this141;
  int** __retval142;
  this141 = v139;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t143 = this141;
  __retval142 = &t143->_M_current;
  int** t144 = __retval142;
  return t144;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v145, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v146) {
bb147:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs148;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs149;
  long __retval150;
  __lhs148 = v145;
  __rhs149 = v146;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t151 = __lhs148;
  int** r152 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t151);
  int* t153 = *r152;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t154 = __rhs149;
  int** r155 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t154);
  int* t156 = *r155;
  long diff157 = t153 - t156;
  __retval150 = diff157;
  long t158 = __retval150;
  return t158;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v159) {
bb160:
  struct std____new_allocator_int_* this161;
  unsigned long __retval162;
  this161 = v159;
  struct std____new_allocator_int_* t163 = this161;
  unsigned long c164 = 9223372036854775807;
  unsigned long c165 = 4;
  unsigned long b166 = c164 / c165;
  __retval162 = b166;
  unsigned long t167 = __retval162;
  return t167;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v168, unsigned long v169, void* v170) {
bb171:
  struct std____new_allocator_int_* this172;
  unsigned long __n173;
  void* unnamed174;
  int* __retval175;
  this172 = v168;
  __n173 = v169;
  unnamed174 = v170;
  struct std____new_allocator_int_* t176 = this172;
    unsigned long t177 = __n173;
    unsigned long r178 = std____new_allocator_int____M_max_size___const(t176);
    _Bool c179 = ((t177 > r178)) ? 1 : 0;
    if (c179) {
        unsigned long t180 = __n173;
        unsigned long c181 = -1;
        unsigned long c182 = 4;
        unsigned long b183 = c181 / c182;
        _Bool c184 = ((t180 > b183)) ? 1 : 0;
        if (c184) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c185 = 4;
    unsigned long c186 = 16;
    _Bool c187 = ((c185 > c186)) ? 1 : 0;
    if (c187) {
      unsigned long __al188;
      unsigned long c189 = 4;
      __al188 = c189;
      unsigned long t190 = __n173;
      unsigned long c191 = 4;
      unsigned long b192 = t190 * c191;
      unsigned long t193 = __al188;
      void* r194 = operator_new_2(b192, t193);
      int* cast195 = (int*)r194;
      __retval175 = cast195;
      int* t196 = __retval175;
      return t196;
    }
  unsigned long t197 = __n173;
  unsigned long c198 = 4;
  unsigned long b199 = t197 * c198;
  void* r200 = operator_new(b199);
  int* cast201 = (int*)r200;
  __retval175 = cast201;
  int* t202 = __retval175;
  return t202;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v203, unsigned long v204) {
bb205:
  struct std__allocator_int_* this206;
  unsigned long __n207;
  int* __retval208;
  this206 = v203;
  __n207 = v204;
  struct std__allocator_int_* t209 = this206;
    _Bool r210 = std____is_constant_evaluated();
    if (r210) {
        unsigned long t211 = __n207;
        unsigned long c212 = 4;
        unsigned long ovr213;
        _Bool ovf214 = __builtin_mul_overflow(t211, c212, &ovr213);
        __n207 = ovr213;
        if (ovf214) {
          std____throw_bad_array_new_length();
        }
      unsigned long t215 = __n207;
      void* r216 = operator_new(t215);
      int* cast217 = (int*)r216;
      __retval208 = cast217;
      int* t218 = __retval208;
      return t218;
    }
  struct std____new_allocator_int_* base219 = (struct std____new_allocator_int_*)((char *)t209 + 0);
  unsigned long t220 = __n207;
  void* c221 = ((void*)0);
  int* r222 = std____new_allocator_int___allocate(base219, t220, c221);
  __retval208 = r222;
  int* t223 = __retval208;
  return t223;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v224, unsigned long v225) {
bb226:
  struct std__allocator_int_* __a227;
  unsigned long __n228;
  int* __retval229;
  __a227 = v224;
  __n228 = v225;
  struct std__allocator_int_* t230 = __a227;
  unsigned long t231 = __n228;
  int* r232 = std__allocator_int___allocate(t230, t231);
  __retval229 = r232;
  int* t233 = __retval229;
  return t233;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v234, unsigned long v235) {
bb236:
  struct std___Vector_base_int__std__allocator_int__* this237;
  unsigned long __n238;
  int* __retval239;
  this237 = v234;
  __n238 = v235;
  struct std___Vector_base_int__std__allocator_int__* t240 = this237;
  unsigned long t241 = __n238;
  unsigned long c242 = 0;
  _Bool c243 = ((t241 != c242)) ? 1 : 0;
  int* ternary244;
  if (c243) {
    struct std__allocator_int_* base245 = (struct std__allocator_int_*)((char *)&(t240->_M_impl) + 0);
    unsigned long t246 = __n238;
    int* r247 = std__allocator_traits_std__allocator_int_____allocate(base245, t246);
    ternary244 = (int*)r247;
  } else {
    int* c248 = ((void*)0);
    ternary244 = (int*)c248;
  }
  __retval239 = ternary244;
  int* t249 = __retval239;
  return t249;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v250, int* v251, unsigned long v252, struct std___Vector_base_int__std__allocator_int__* v253) {
bb254:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this255;
  int* __s256;
  unsigned long __l257;
  struct std___Vector_base_int__std__allocator_int__* __vect258;
  this255 = v250;
  __s256 = v251;
  __l257 = v252;
  __vect258 = v253;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t259 = this255;
  int* t260 = __s256;
  t259->_M_storage = t260;
  unsigned long t261 = __l257;
  t259->_M_len = t261;
  struct std___Vector_base_int__std__allocator_int__* t262 = __vect258;
  t259->_M_vect = t262;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v263) {
bb264:
  int* __ptr265;
  int* __retval266;
  __ptr265 = v263;
  int* t267 = __ptr265;
  __retval266 = t267;
  int* t268 = __retval266;
  return t268;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v269) {
bb270:
  int** __ptr271;
  int* __retval272;
  __ptr271 = v269;
  int** t273 = __ptr271;
  int* t274 = *t273;
  int* r275 = int__std__to_address_int_(t274);
  __retval272 = r275;
  int* t276 = __retval272;
  return t276;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb277:
  _Bool __retval278;
    _Bool c279 = 0;
    __retval278 = c279;
    _Bool t280 = __retval278;
    return t280;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v281, int** v282) {
bb283:
  struct __gnu_cxx____normal_iterator_int____void_* this284;
  int** __i285;
  this284 = v281;
  __i285 = v282;
  struct __gnu_cxx____normal_iterator_int____void_* t286 = this284;
  int** t287 = __i285;
  int* t288 = *t287;
  t286->_M_current = t288;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v289, int* v290) {
bb291:
  int* __location292;
  int* __args293;
  int* __retval294;
  void* __loc295;
  __location292 = v289;
  __args293 = v290;
  int* t296 = __location292;
  void* cast297 = (void*)t296;
  __loc295 = cast297;
    void* t298 = __loc295;
    int* cast299 = (int*)t298;
    int* t300 = __args293;
    int t301 = *t300;
    *cast299 = t301;
    __retval294 = cast299;
    int* t302 = __retval294;
    return t302;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v303, int* v304, int* v305) {
bb306:
  struct std__allocator_int_* __a307;
  int* __p308;
  int* __args309;
  __a307 = v303;
  __p308 = v304;
  __args309 = v305;
  int* t310 = __p308;
  int* t311 = __args309;
  int* r312 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t310, t311);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v313, int* v314) {
bb315:
  struct std__allocator_int_* __a316;
  int* __p317;
  __a316 = v313;
  __p317 = v314;
  int* t318 = __p317;
  void_std__destroy_at_int_(t318);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v319, int* v320, struct std__allocator_int_* v321) {
bb322:
  int* __dest323;
  int* __orig324;
  struct std__allocator_int_* __alloc325;
  __dest323 = v319;
  __orig324 = v320;
  __alloc325 = v321;
  struct std__allocator_int_* t326 = __alloc325;
  int* t327 = __dest323;
  int* t328 = __orig324;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t326, t327, t328);
  struct std__allocator_int_* t329 = __alloc325;
  int* t330 = __orig324;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t329, t330);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v331) {
bb332:
  struct __gnu_cxx____normal_iterator_int____void_* this333;
  int* __retval334;
  this333 = v331;
  struct __gnu_cxx____normal_iterator_int____void_* t335 = this333;
  int* t336 = t335->_M_current;
  __retval334 = t336;
  int* t337 = __retval334;
  return t337;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v338) {
bb339:
  struct __gnu_cxx____normal_iterator_int____void_* this340;
  struct __gnu_cxx____normal_iterator_int____void_* __retval341;
  this340 = v338;
  struct __gnu_cxx____normal_iterator_int____void_* t342 = this340;
  int* t343 = t342->_M_current;
  int c344 = 1;
  int* ptr345 = &(t343)[c344];
  t342->_M_current = ptr345;
  __retval341 = t342;
  struct __gnu_cxx____normal_iterator_int____void_* t346 = __retval341;
  return t346;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v347, int* v348, struct __gnu_cxx____normal_iterator_int____void_ v349, struct std__allocator_int_* v350) {
bb351:
  int* __first352;
  int* __last353;
  struct __gnu_cxx____normal_iterator_int____void_ __result354;
  struct std__allocator_int_* __alloc355;
  struct __gnu_cxx____normal_iterator_int____void_ __retval356;
  __first352 = v347;
  __last353 = v348;
  __result354 = v349;
  __alloc355 = v350;
  __retval356 = __result354; // copy
    while (1) {
      int* t358 = __first352;
      int* t359 = __last353;
      _Bool c360 = ((t358 != t359)) ? 1 : 0;
      if (!c360) break;
      int* r361 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval356);
      int* t362 = __first352;
      struct std__allocator_int_* t363 = __alloc355;
      void_std____relocate_object_a_int__int__std__allocator_int___(r361, t362, t363);
    for_step357: ;
      int* t364 = __first352;
      int c365 = 1;
      int* ptr366 = &(t364)[c365];
      __first352 = ptr366;
      struct __gnu_cxx____normal_iterator_int____void_* r367 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval356);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t368 = __retval356;
  return t368;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v369, struct __gnu_cxx____normal_iterator_int____void_* v370) {
bb371:
  struct __gnu_cxx____normal_iterator_int____void_* this372;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed373;
  struct __gnu_cxx____normal_iterator_int____void_* __retval374;
  this372 = v369;
  unnamed373 = v370;
  struct __gnu_cxx____normal_iterator_int____void_* t375 = this372;
  struct __gnu_cxx____normal_iterator_int____void_* t376 = unnamed373;
  int* t377 = t376->_M_current;
  t375->_M_current = t377;
  __retval374 = t375;
  struct __gnu_cxx____normal_iterator_int____void_* t378 = __retval374;
  return t378;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v379) {
bb380:
  struct __gnu_cxx____normal_iterator_int____void_* this381;
  int** __retval382;
  this381 = v379;
  struct __gnu_cxx____normal_iterator_int____void_* t383 = this381;
  __retval382 = &t383->_M_current;
  int** t384 = __retval382;
  return t384;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v385, int* v386, int* v387, struct std__allocator_int_* v388) {
bb389:
  int* __first390;
  int* __last391;
  int* __result392;
  struct std__allocator_int_* __alloc393;
  int* __retval394;
  long __count395;
  __first390 = v385;
  __last391 = v386;
  __result392 = v387;
  __alloc393 = v388;
  int* t396 = __last391;
  int* t397 = __first390;
  long diff398 = t396 - t397;
  __count395 = diff398;
    long t399 = __count395;
    long c400 = 0;
    _Bool c401 = ((t399 > c400)) ? 1 : 0;
    if (c401) {
        _Bool r402 = std__is_constant_evaluated();
        if (r402) {
          struct __gnu_cxx____normal_iterator_int____void_ __out403;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0404;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0405;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out403, &__result392);
          int* t406 = __first390;
          int* t407 = __last391;
          agg_tmp0405 = __out403; // copy
          struct std__allocator_int_* t408 = __alloc393;
          struct __gnu_cxx____normal_iterator_int____void_ t409 = agg_tmp0405;
          struct __gnu_cxx____normal_iterator_int____void_ r410 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t406, t407, t409, t408);
          ref_tmp0404 = r410;
          struct __gnu_cxx____normal_iterator_int____void_* r411 = __gnu_cxx____normal_iterator_int___void___operator_(&__out403, &ref_tmp0404);
          int** r412 = __gnu_cxx____normal_iterator_int___void___base___const(&__out403);
          int* t413 = *r412;
          __retval394 = t413;
          int* t414 = __retval394;
          return t414;
        }
      int* t415 = __result392;
      void* cast416 = (void*)t415;
      int* t417 = __first390;
      void* cast418 = (void*)t417;
      long t419 = __count395;
      unsigned long cast420 = (unsigned long)t419;
      unsigned long c421 = 4;
      unsigned long b422 = cast420 * c421;
      void* r423 = memcpy(cast416, cast418, b422);
    }
  int* t424 = __result392;
  long t425 = __count395;
  int* ptr426 = &(t424)[t425];
  __retval394 = ptr426;
  int* t427 = __retval394;
  return t427;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v428) {
bb429:
  int* __it430;
  int* __retval431;
  __it430 = v428;
  int* t432 = __it430;
  __retval431 = t432;
  int* t433 = __retval431;
  return t433;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v434, int* v435, int* v436, struct std__allocator_int_* v437) {
bb438:
  int* __first439;
  int* __last440;
  int* __result441;
  struct std__allocator_int_* __alloc442;
  int* __retval443;
  __first439 = v434;
  __last440 = v435;
  __result441 = v436;
  __alloc442 = v437;
  int* t444 = __first439;
  int* r445 = int__std____niter_base_int__(t444);
  int* t446 = __last440;
  int* r447 = int__std____niter_base_int__(t446);
  int* t448 = __result441;
  int* r449 = int__std____niter_base_int__(t448);
  struct std__allocator_int_* t450 = __alloc442;
  int* r451 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r445, r447, r449, t450);
  __retval443 = r451;
  int* t452 = __retval443;
  return t452;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v453, int* v454, int* v455, struct std__allocator_int_* v456) {
bb457:
  int* __first458;
  int* __last459;
  int* __result460;
  struct std__allocator_int_* __alloc461;
  int* __retval462;
  __first458 = v453;
  __last459 = v454;
  __result460 = v455;
  __alloc461 = v456;
  int* t463 = __first458;
  int* t464 = __last459;
  int* t465 = __result460;
  struct std__allocator_int_* t466 = __alloc461;
  int* r467 = int__std____relocate_a_int___int___std__allocator_int___(t463, t464, t465, t466);
  __retval462 = r467;
  int* t468 = __retval462;
  return t468;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v469) {
bb470:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this471;
  this471 = v469;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t472 = this471;
    int* t473 = t472->_M_storage;
    _Bool cast474 = (_Bool)t473;
    if (cast474) {
      struct std___Vector_base_int__std__allocator_int__* t475 = t472->_M_vect;
      int* t476 = t472->_M_storage;
      unsigned long t477 = t472->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t475, t476, t477);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJRKiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* v478, int* v479) {
bb480:
  struct std__vector_int__std__allocator_int__* this481;
  int* __args482;
  unsigned long __len483;
  int* __old_start484;
  int* __old_finish485;
  unsigned long __elems486;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0487;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1488;
  int* __new_start489;
  int* __new_finish490;
  this481 = v478;
  __args482 = v479;
  struct std__vector_int__std__allocator_int__* t491 = this481;
  unsigned long c492 = 1;
  char* cast493 = (char*)&(_str_3);
  unsigned long r494 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t491, c492, cast493);
  __len483 = r494;
    unsigned long t495 = __len483;
    unsigned long c496 = 0;
    _Bool c497 = ((t495 <= c496)) ? 1 : 0;
    if (c497) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base498 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t491 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base499 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base498->_M_impl) + 0);
  int* t500 = base499->_M_start;
  __old_start484 = t500;
  struct std___Vector_base_int__std__allocator_int__* base501 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t491 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base502 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base501->_M_impl) + 0);
  int* t503 = base502->_M_finish;
  __old_finish485 = t503;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r504 = std__vector_int__std__allocator_int_____end(t491);
  ref_tmp0487 = r504;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r505 = std__vector_int__std__allocator_int_____begin(t491);
  ref_tmp1488 = r505;
  long r506 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0487, &ref_tmp1488);
  unsigned long cast507 = (unsigned long)r506;
  __elems486 = cast507;
  struct std___Vector_base_int__std__allocator_int__* base508 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t491 + 0);
  unsigned long t509 = __len483;
  int* r510 = std___Vector_base_int__std__allocator_int______M_allocate(base508, t509);
  __new_start489 = r510;
  int* t511 = __new_start489;
  __new_finish490 = t511;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard512;
    int* ref_tmp2513;
    int* t514 = __new_start489;
    unsigned long t515 = __len483;
    struct std___Vector_base_int__std__allocator_int__* base516 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t491 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard512, t514, t515, base516);
      struct std___Vector_base_int__std__allocator_int__* base517 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t491 + 0);
      struct std__allocator_int_* base518 = (struct std__allocator_int_*)((char *)&(base517->_M_impl) + 0);
      int* t519 = __new_start489;
      unsigned long t520 = __elems486;
      int* ptr521 = &(t519)[t520];
      ref_tmp2513 = ptr521;
      int* r522 = auto_std____to_address_int__(&ref_tmp2513);
      int* t523 = __args482;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base518, r522, t523);
        int* t524 = __old_start484;
        int* t525 = __old_finish485;
        int* t526 = __new_start489;
        struct std___Vector_base_int__std__allocator_int__* base527 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t491 + 0);
        struct std__allocator_int_* r528 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base527);
        int* r529 = std__vector_int__std__allocator_int______S_relocate(t524, t525, t526, r528);
        __new_finish490 = r529;
        int* t530 = __new_finish490;
        int c531 = 1;
        int* ptr532 = &(t530)[c531];
        __new_finish490 = ptr532;
      int* t533 = __old_start484;
      __guard512._M_storage = t533;
      struct std___Vector_base_int__std__allocator_int__* base534 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t491 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base535 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base534->_M_impl) + 0);
      int* t536 = base535->_M_end_of_storage;
      int* t537 = __old_start484;
      long diff538 = t536 - t537;
      unsigned long cast539 = (unsigned long)diff538;
      __guard512._M_len = cast539;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard512);
    }
  int* t540 = __new_start489;
  struct std___Vector_base_int__std__allocator_int__* base541 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t491 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base542 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base541->_M_impl) + 0);
  base542->_M_start = t540;
  int* t543 = __new_finish490;
  struct std___Vector_base_int__std__allocator_int__* base544 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t491 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base545 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base544->_M_impl) + 0);
  base545->_M_finish = t543;
  int* t546 = __new_start489;
  unsigned long t547 = __len483;
  int* ptr548 = &(t546)[t547];
  struct std___Vector_base_int__std__allocator_int__* base549 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t491 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base550 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base549->_M_impl) + 0);
  base550->_M_end_of_storage = ptr548;
  return;
}

// function: _ZNSt6vectorIiSaIiEE9push_backERKi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v551, int* v552) {
bb553:
  struct std__vector_int__std__allocator_int__* this554;
  int* __x555;
  this554 = v551;
  __x555 = v552;
  struct std__vector_int__std__allocator_int__* t556 = this554;
    struct std___Vector_base_int__std__allocator_int__* base557 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t556 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base558 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base557->_M_impl) + 0);
    int* t559 = base558->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base560 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t556 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base561 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base560->_M_impl) + 0);
    int* t562 = base561->_M_end_of_storage;
    _Bool c563 = ((t559 != t562)) ? 1 : 0;
    if (c563) {
      struct std___Vector_base_int__std__allocator_int__* base564 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t556 + 0);
      struct std__allocator_int_* base565 = (struct std__allocator_int_*)((char *)&(base564->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base566 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t556 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base567 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base566->_M_impl) + 0);
      int* t568 = base567->_M_finish;
      int* t569 = __x555;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base565, t568, t569);
      struct std___Vector_base_int__std__allocator_int__* base570 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t556 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base571 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base570->_M_impl) + 0);
      int* t572 = base571->_M_finish;
      int c573 = 1;
      int* ptr574 = &(t572)[c573];
      base571->_M_finish = ptr574;
    } else {
      int* t575 = __x555;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(t556, t575);
    }
  return;
}

// function: _ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessIiEEC2ES3_
void __gnu_cxx____ops___Iter_comp_val_std__less_int______Iter_comp_val_2(struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* v576, struct std__less_int_ v577) {
bb578:
  struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* this579;
  struct std__less_int_ __comp580;
  this579 = v576;
  __comp580 = v577;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v581, int** v582) {
bb583:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this584;
  int** __i585;
  this584 = v581;
  __i585 = v582;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t586 = this584;
  int** t587 = __i585;
  int* t588 = *t587;
  t586->_M_current = t588;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v589, long v590) {
bb591:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this592;
  long __n593;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval594;
  int* ref_tmp0595;
  this592 = v589;
  __n593 = v590;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t596 = this592;
  int* t597 = t596->_M_current;
  long t598 = __n593;
  long u599 = -t598;
  int* ptr600 = &(t597)[u599];
  ref_tmp0595 = ptr600;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval594, &ref_tmp0595);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t601 = __retval594;
  return t601;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v602) {
bb603:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this604;
  int* __retval605;
  this604 = v602;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t606 = this604;
  int* t607 = t606->_M_current;
  __retval605 = t607;
  int* t608 = __retval605;
  return t608;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v609, int* v610, int* v611) {
bb612:
  struct std__less_int_* this613;
  int* __x614;
  int* __y615;
  _Bool __retval616;
  this613 = v609;
  __x614 = v610;
  __y615 = v611;
  struct std__less_int_* t617 = this613;
  int* t618 = __x614;
  int t619 = *t618;
  int* t620 = __y615;
  int t621 = *t620;
  _Bool c622 = ((t619 < t621)) ? 1 : 0;
  __retval616 = c622;
  _Bool t623 = __retval616;
  return t623;
}

// function: _ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessIiEEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEEbT_RT0_
_Bool bool___gnu_cxx____ops___Iter_comp_val_std__less_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* v624, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v625, int* v626) {
bb627:
  struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* this628;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it629;
  int* __val630;
  _Bool __retval631;
  this628 = v624;
  __it629 = v625;
  __val630 = v626;
  struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* t632 = this628;
  struct std__less_int_* cast633 = (struct std__less_int_*)t632;
  int* r634 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it629);
  int* t635 = __val630;
  _Bool r636 = std__less_int___operator___int_const___int_const___const(cast633, r634, t635);
  __retval631 = r636;
  _Bool t637 = __retval631;
  return t637;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v638, long v639) {
bb640:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this641;
  long __n642;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval643;
  int* ref_tmp0644;
  this641 = v638;
  __n642 = v639;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t645 = this641;
  int* t646 = t645->_M_current;
  long t647 = __n642;
  int* ptr648 = &(t646)[t647];
  ref_tmp0644 = ptr648;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval643, &ref_tmp0644);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t649 = __retval643;
  return t649;
}

// function: _ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops14_Iter_comp_valISt4lessIiEEEEvT_T0_SD_T1_RT2_
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_std__less_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v650, long v651, long v652, int v653, struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* v654) {
bb655:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first656;
  long __holeIndex657;
  long __topIndex658;
  int __value659;
  struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* __comp660;
  long __parent661;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2662;
  __first656 = v650;
  __holeIndex657 = v651;
  __topIndex658 = v652;
  __value659 = v653;
  __comp660 = v654;
  long t663 = __holeIndex657;
  long c664 = 1;
  long b665 = t663 - c664;
  long c666 = 2;
  long b667 = b665 / c666;
  __parent661 = b667;
    while (1) {
      long t668 = __holeIndex657;
      long t669 = __topIndex658;
      _Bool c670 = ((t668 > t669)) ? 1 : 0;
      _Bool ternary671;
      if (c670) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0672;
        struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* t673 = __comp660;
        long t674 = __parent661;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r675 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first656, t674);
        agg_tmp0672 = r675;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t676 = agg_tmp0672;
        _Bool r677 = bool___gnu_cxx____ops___Iter_comp_val_std__less_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t673, t676, &__value659);
        ternary671 = (_Bool)r677;
      } else {
        _Bool c678 = 0;
        ternary671 = (_Bool)c678;
      }
      if (!ternary671) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0679;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1680;
        long t681 = __parent661;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r682 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first656, t681);
        ref_tmp0679 = r682;
        int* r683 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0679);
        int t684 = *r683;
        long t685 = __holeIndex657;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r686 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first656, t685);
        ref_tmp1680 = r686;
        int* r687 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1680);
        *r687 = t684;
        long t688 = __parent661;
        __holeIndex657 = t688;
        long t689 = __holeIndex657;
        long c690 = 1;
        long b691 = t689 - c690;
        long c692 = 2;
        long b693 = b691 / c692;
        __parent661 = b693;
    }
  int t694 = __value659;
  long t695 = __holeIndex657;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r696 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first656, t695);
  ref_tmp2662 = r696;
  int* r697 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp2662);
  *r697 = t694;
  return;
}

// function: _ZSt9push_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt4lessIiEEvT_S9_T0_
void void_std__push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__less_int___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v698, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v699, struct std__less_int_ v700) {
bb701:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first702;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last703;
  struct std__less_int_ __comp704;
  struct __gnu_cxx____ops___Iter_comp_val_std__less_int__ __cmp705;
  struct std__less_int_ agg_tmp0706;
  int __value707;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0708;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1709;
  __first702 = v698;
  __last703 = v699;
  __comp704 = v700;
  struct std__less_int_ t710 = agg_tmp0706;
  __gnu_cxx____ops___Iter_comp_val_std__less_int______Iter_comp_val_2(&__cmp705, t710);
  long c711 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r712 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__last703, c711);
  ref_tmp0708 = r712;
  int* r713 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0708);
  int t714 = *r713;
  __value707 = t714;
  agg_tmp1709 = __first702; // copy
  long r715 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last703, &__first702);
  long c716 = 1;
  long b717 = r715 - c716;
  long c718 = 0;
  int t719 = __value707;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t720 = agg_tmp1709;
  void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_std__less_int_____(t720, b717, c718, t719, &__cmp705);
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v721) {
bb722:
  struct std__vector_int__std__allocator_int__* this723;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval724;
  this723 = v721;
  struct std__vector_int__std__allocator_int__* t725 = this723;
  struct std___Vector_base_int__std__allocator_int__* base726 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t725 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base727 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base726->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval724, &base727->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t728 = __retval724;
  return t728;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v729) {
bb730:
  struct std__vector_int__std__allocator_int__* this731;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval732;
  this731 = v729;
  struct std__vector_int__std__allocator_int__* t733 = this731;
  struct std___Vector_base_int__std__allocator_int__* base734 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t733 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base735 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base734->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval732, &base735->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t736 = __retval732;
  return t736;
}

// function: _ZNSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEE4pushERKi
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____push(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* v737, int* v738) {
bb739:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* this740;
  int* __x741;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0742;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1743;
  struct std__less_int_ agg_tmp2744;
  this740 = v737;
  __x741 = v738;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* t745 = this740;
  int* t746 = __x741;
  std__vector_int__std__allocator_int_____push_back(&t745->c, t746);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r747 = std__vector_int__std__allocator_int_____begin(&t745->c);
  agg_tmp0742 = r747;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r748 = std__vector_int__std__allocator_int_____end(&t745->c);
  agg_tmp1743 = r748;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t749 = agg_tmp0742;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t750 = agg_tmp1743;
  struct std__less_int_ t751 = agg_tmp2744;
  void_std__push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__less_int___(t749, t750, t751);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v752) {
bb753:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this754;
  int** __retval755;
  this754 = v752;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t756 = this754;
  __retval755 = &t756->_M_current;
  int** t757 = __retval755;
  return t757;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v758, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v759) {
bb760:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs761;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs762;
  _Bool __retval763;
  __lhs761 = v758;
  __rhs762 = v759;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t764 = __lhs761;
  int** r765 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t764);
  int* t766 = *r765;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t767 = __rhs762;
  int** r768 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t767);
  int* t769 = *r768;
  _Bool c770 = ((t766 == t769)) ? 1 : 0;
  __retval763 = c770;
  _Bool t771 = __retval763;
  return t771;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v772, int** v773) {
bb774:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this775;
  int** __i776;
  this775 = v772;
  __i776 = v773;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t777 = this775;
  int** t778 = __i776;
  int* t779 = *t778;
  t777->_M_current = t779;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v780) {
bb781:
  struct std__vector_int__std__allocator_int__* this782;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval783;
  this782 = v780;
  struct std__vector_int__std__allocator_int__* t784 = this782;
  struct std___Vector_base_int__std__allocator_int__* base785 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t784 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base786 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base785->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval783, &base786->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t787 = __retval783;
  return t787;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v788) {
bb789:
  struct std__vector_int__std__allocator_int__* this790;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval791;
  this790 = v788;
  struct std__vector_int__std__allocator_int__* t792 = this790;
  struct std___Vector_base_int__std__allocator_int__* base793 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t792 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base794 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base793->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval791, &base794->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t795 = __retval791;
  return t795;
}

// function: _ZNKSt6vectorIiSaIiEE5emptyEv
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* v796) {
bb797:
  struct std__vector_int__std__allocator_int__* this798;
  _Bool __retval799;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0800;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp1801;
  this798 = v796;
  struct std__vector_int__std__allocator_int__* t802 = this798;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r803 = std__vector_int__std__allocator_int_____begin___const(t802);
  ref_tmp0800 = r803;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r804 = std__vector_int__std__allocator_int_____end___const(t802);
  ref_tmp1801 = r804;
  _Bool r805 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp0800, &ref_tmp1801);
  __retval799 = r805;
  _Bool t806 = __retval799;
  return t806;
}

// function: _ZNKSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEE5emptyEv
_Bool std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____empty___const(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* v807) {
bb808:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* this809;
  _Bool __retval810;
  this809 = v807;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* t811 = this809;
  _Bool r812 = std__vector_int__std__allocator_int_____empty___const(&t811->c);
  __retval810 = r812;
  _Bool t813 = __retval810;
  return t813;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v814) {
bb815:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this816;
  int* __retval817;
  this816 = v814;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t818 = this816;
  int* t819 = t818->_M_current;
  __retval817 = t819;
  int* t820 = __retval817;
  return t820;
}

// function: _ZNKSt6vectorIiSaIiEE5frontEv
int* std__vector_int__std__allocator_int_____front___const(struct std__vector_int__std__allocator_int__* v821) {
bb822:
  struct std__vector_int__std__allocator_int__* this823;
  int* __retval824;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0825;
  this823 = v821;
  struct std__vector_int__std__allocator_int__* t826 = this823;
    do {
          _Bool r827 = std__vector_int__std__allocator_int_____empty___const(t826);
          if (r827) {
            char* cast828 = (char*)&(_str_6);
            int c829 = 1358;
            char* cast830 = (char*)&(__PRETTY_FUNCTION____ZNKSt6vectorIiSaIiEE5frontEv);
            char* cast831 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast828, c829, cast830, cast831);
          }
      _Bool c832 = 0;
      if (!c832) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r833 = std__vector_int__std__allocator_int_____begin___const(t826);
  ref_tmp0825 = r833;
  int* r834 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0825);
  __retval824 = r834;
  int* t835 = __retval824;
  return t835;
}

// function: _ZNKSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEE3topEv
int* std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____top___const(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* v836) {
bb837:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* this838;
  int* __retval839;
  this838 = v836;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* t840 = this838;
    do {
          _Bool r841 = std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____empty___const(t840);
          if (r841) {
            char* cast842 = (char*)&(_str_4);
            int c843 = 825;
            char* cast844 = (char*)&(__PRETTY_FUNCTION____ZNKSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEE3topEv);
            char* cast845 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast842, c843, cast844, cast845);
          }
      _Bool c846 = 0;
      if (!c846) break;
    } while (1);
  int* r847 = std__vector_int__std__allocator_int_____front___const(&t840->c);
  __retval839 = r847;
  int* t848 = __retval839;
  return t848;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v849, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v850) {
bb851:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs852;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs853;
  _Bool __retval854;
  __lhs852 = v849;
  __rhs853 = v850;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t855 = __lhs852;
  int** r856 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t855);
  int* t857 = *r856;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t858 = __rhs853;
  int** r859 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t858);
  int* t860 = *r859;
  _Bool c861 = ((t857 == t860)) ? 1 : 0;
  __retval854 = c861;
  _Bool t862 = __retval854;
  return t862;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessIiEEC2ES3_
void __gnu_cxx____ops___Iter_comp_iter_std__less_int______Iter_comp_iter(struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* v863, struct std__less_int_ v864) {
bb865:
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* this866;
  struct std__less_int_ __comp867;
  this866 = v863;
  __comp867 = v864;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmmEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v868) {
bb869:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this870;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval871;
  this870 = v868;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t872 = this870;
  int* t873 = t872->_M_current;
  int c874 = -1;
  int* ptr875 = &(t873)[c874];
  t872->_M_current = ptr875;
  __retval871 = t872;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t876 = __retval871;
  return t876;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessIiEEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEESB_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_comp_iter_std__less_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* v877, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v878, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v879) {
bb880:
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* this881;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1882;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it2883;
  _Bool __retval884;
  this881 = v877;
  __it1882 = v878;
  __it2883 = v879;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* t885 = this881;
  struct std__less_int_* cast886 = (struct std__less_int_*)t885;
  int* r887 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it1882);
  int* r888 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it2883);
  _Bool r889 = std__less_int___operator___int_const___int_const___const(cast886, r887, r888);
  __retval884 = r889;
  _Bool t890 = __retval884;
  return t890;
}

// function: _ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessIiEEC2EONS0_15_Iter_comp_iterIS3_EE
void __gnu_cxx____ops___Iter_comp_val_std__less_int______Iter_comp_val(struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* v891, struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* v892) {
bb893:
  struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* this894;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* __comp895;
  this894 = v891;
  __comp895 = v892;
  return;
}

// function: _ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_comp_iterISt4lessIiEEEEvT_T0_SD_T1_T2_
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_std__less_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v896, long v897, long v898, int v899, struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ v900) {
bb901:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first902;
  long __holeIndex903;
  long __len904;
  int __value905;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ __comp906;
  long __topIndex907;
  long __secondChild908;
  struct __gnu_cxx____ops___Iter_comp_val_std__less_int__ __cmp909;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2910;
  __first902 = v896;
  __holeIndex903 = v897;
  __len904 = v898;
  __value905 = v899;
  __comp906 = v900;
  long t911 = __holeIndex903;
  __topIndex907 = t911;
  long t912 = __holeIndex903;
  __secondChild908 = t912;
    while (1) {
      long t913 = __secondChild908;
      long t914 = __len904;
      long c915 = 1;
      long b916 = t914 - c915;
      long c917 = 2;
      long b918 = b916 / c917;
      _Bool c919 = ((t913 < b918)) ? 1 : 0;
      if (!c919) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0920;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1921;
        long c922 = 2;
        long t923 = __secondChild908;
        long c924 = 1;
        long b925 = t923 + c924;
        long b926 = c922 * b925;
        __secondChild908 = b926;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0927;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1928;
          long t929 = __secondChild908;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r930 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first902, t929);
          agg_tmp0927 = r930;
          long t931 = __secondChild908;
          long c932 = 1;
          long b933 = t931 - c932;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r934 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first902, b933);
          agg_tmp1928 = r934;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t935 = agg_tmp0927;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t936 = agg_tmp1928;
          _Bool r937 = bool___gnu_cxx____ops___Iter_comp_iter_std__less_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp906, t935, t936);
          if (r937) {
            long t938 = __secondChild908;
            long u939 = t938 - 1;
            __secondChild908 = u939;
          }
        long t940 = __secondChild908;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r941 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first902, t940);
        ref_tmp0920 = r941;
        int* r942 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0920);
        int t943 = *r942;
        long t944 = __holeIndex903;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r945 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first902, t944);
        ref_tmp1921 = r945;
        int* r946 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1921);
        *r946 = t943;
        long t947 = __secondChild908;
        __holeIndex903 = t947;
    }
    long t948 = __len904;
    long c949 = 1;
    long b950 = t948 & c949;
    long c951 = 0;
    _Bool c952 = ((b950 == c951)) ? 1 : 0;
    _Bool ternary953;
    if (c952) {
      long t954 = __secondChild908;
      long t955 = __len904;
      long c956 = 2;
      long b957 = t955 - c956;
      long c958 = 2;
      long b959 = b957 / c958;
      _Bool c960 = ((t954 == b959)) ? 1 : 0;
      ternary953 = (_Bool)c960;
    } else {
      _Bool c961 = 0;
      ternary953 = (_Bool)c961;
    }
    if (ternary953) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2962;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3963;
      long c964 = 2;
      long t965 = __secondChild908;
      long c966 = 1;
      long b967 = t965 + c966;
      long b968 = c964 * b967;
      __secondChild908 = b968;
      long t969 = __secondChild908;
      long c970 = 1;
      long b971 = t969 - c970;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r972 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first902, b971);
      ref_tmp2962 = r972;
      int* r973 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp2962);
      int t974 = *r973;
      long t975 = __holeIndex903;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r976 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first902, t975);
      ref_tmp3963 = r976;
      int* r977 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp3963);
      *r977 = t974;
      long t978 = __secondChild908;
      long c979 = 1;
      long b980 = t978 - c979;
      __holeIndex903 = b980;
    }
  __gnu_cxx____ops___Iter_comp_val_std__less_int______Iter_comp_val(&__cmp909, &__comp906);
  agg_tmp2910 = __first902; // copy
  long t981 = __holeIndex903;
  long t982 = __topIndex907;
  int t983 = __value905;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t984 = agg_tmp2910;
  void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_std__less_int_____(t984, t981, t982, t983, &__cmp909);
  return;
}

// function: _ZSt10__pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterISt4lessIiEEEEvT_SC_SC_RT0_
void void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_std__less_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v985, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v986, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v987, struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* v988) {
bb989:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first990;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last991;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result992;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* __comp993;
  int __value994;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0995;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ agg_tmp1996;
  __first990 = v985;
  __last991 = v986;
  __result992 = v987;
  __comp993 = v988;
  int* r997 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result992);
  int t998 = *r997;
  __value994 = t998;
  int* r999 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first990);
  int t1000 = *r999;
  int* r1001 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result992);
  *r1001 = t1000;
  agg_tmp0995 = __first990; // copy
  long c1002 = 0;
  long r1003 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last991, &__first990);
  int t1004 = __value994;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* t1005 = __comp993;
  agg_tmp1996 = *t1005; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1006 = agg_tmp0995;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ t1007 = agg_tmp1996;
  void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_std__less_int_____(t1006, c1002, r1003, t1004, t1007);
  return;
}

// function: _ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt4lessIiEEvT_S9_T0_
void void_std__pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__less_int___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1008, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1009, struct std__less_int_ v1010) {
bb1011:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1012;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1013;
  struct std__less_int_ __comp1014;
  __first1012 = v1008;
  __last1013 = v1009;
  __comp1014 = v1010;
    do {
          _Bool r1015 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1012, &__last1013);
          if (r1015) {
            char* cast1016 = (char*)&(_str_7);
            int c1017 = 325;
            char* cast1018 = (char*)&(__PRETTY_FUNCTION____ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt4lessIiEEvT_S9_T0_);
            char* cast1019 = (char*)&(_str_8);
            std____glibcxx_assert_fail(cast1016, c1017, cast1018, cast1019);
          }
      _Bool c1020 = 0;
      if (!c1020) break;
    } while (1);
    long r1021 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last1013, &__first1012);
    long c1022 = 1;
    _Bool c1023 = ((r1021 > c1022)) ? 1 : 0;
    if (c1023) {
      struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ __cmp1024;
      struct std__less_int_ agg_tmp01025;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11026;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21027;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31028;
      struct std__less_int_ t1029 = agg_tmp01025;
      __gnu_cxx____ops___Iter_comp_iter_std__less_int______Iter_comp_iter(&__cmp1024, t1029);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1030 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__last1013);
      agg_tmp11026 = __first1012; // copy
      agg_tmp21027 = __last1013; // copy
      agg_tmp31028 = __last1013; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1031 = agg_tmp11026;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1032 = agg_tmp21027;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1033 = agg_tmp31028;
      void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_std__less_int_____(t1031, t1032, t1033, &__cmp1024);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE8pop_backEv
void std__vector_int__std__allocator_int_____pop_back(struct std__vector_int__std__allocator_int__* v1034) {
bb1035:
  struct std__vector_int__std__allocator_int__* this1036;
  this1036 = v1034;
  struct std__vector_int__std__allocator_int__* t1037 = this1036;
    do {
          _Bool r1038 = std__vector_int__std__allocator_int_____empty___const(t1037);
          if (r1038) {
            char* cast1039 = (char*)&(_str_6);
            int c1040 = 1459;
            char* cast1041 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE8pop_backEv);
            char* cast1042 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast1039, c1040, cast1041, cast1042);
          }
      _Bool c1043 = 0;
      if (!c1043) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base1044 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1037 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1045 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1044->_M_impl) + 0);
  int* t1046 = base1045->_M_finish;
  int c1047 = -1;
  int* ptr1048 = &(t1046)[c1047];
  base1045->_M_finish = ptr1048;
  struct std___Vector_base_int__std__allocator_int__* base1049 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1037 + 0);
  struct std__allocator_int_* base1050 = (struct std__allocator_int_*)((char *)&(base1049->_M_impl) + 0);
  struct std___Vector_base_int__std__allocator_int__* base1051 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1037 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1052 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1051->_M_impl) + 0);
  int* t1053 = base1052->_M_finish;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(base1050, t1053);
  return;
}

// function: _ZNSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEE3popEv
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____pop(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* v1054) {
bb1055:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* this1056;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01057;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11058;
  struct std__less_int_ agg_tmp21059;
  this1056 = v1054;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* t1060 = this1056;
    do {
          _Bool r1061 = std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____empty___const(t1060);
          if (r1061) {
            char* cast1062 = (char*)&(_str_4);
            int c1063 = 888;
            char* cast1064 = (char*)&(__PRETTY_FUNCTION____ZNSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEE3popEv);
            char* cast1065 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast1062, c1063, cast1064, cast1065);
          }
      _Bool c1066 = 0;
      if (!c1066) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1067 = std__vector_int__std__allocator_int_____begin(&t1060->c);
  agg_tmp01057 = r1067;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1068 = std__vector_int__std__allocator_int_____end(&t1060->c);
  agg_tmp11058 = r1068;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1069 = agg_tmp01057;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1070 = agg_tmp11058;
  struct std__less_int_ t1071 = agg_tmp21059;
  void_std__pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__less_int___(t1069, t1070, t1071);
  std__vector_int__std__allocator_int_____pop_back(&t1060->c);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v1072, int v1073) {
bb1074:
  int __a1075;
  int __b1076;
  int __retval1077;
  __a1075 = v1072;
  __b1076 = v1073;
  int t1078 = __a1075;
  int t1079 = __b1076;
  int b1080 = t1078 | t1079;
  __retval1077 = b1080;
  int t1081 = __retval1077;
  return t1081;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v1082) {
bb1083:
  struct std__basic_ios_char__std__char_traits_char__* this1084;
  int __retval1085;
  this1084 = v1082;
  struct std__basic_ios_char__std__char_traits_char__* t1086 = this1084;
  struct std__ios_base* base1087 = (struct std__ios_base*)((char *)t1086 + 0);
  int t1088 = base1087->_M_streambuf_state;
  __retval1085 = t1088;
  int t1089 = __retval1085;
  return t1089;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v1090, int v1091) {
bb1092:
  struct std__basic_ios_char__std__char_traits_char__* this1093;
  int __state1094;
  this1093 = v1090;
  __state1094 = v1091;
  struct std__basic_ios_char__std__char_traits_char__* t1095 = this1093;
  int r1096 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t1095);
  int t1097 = __state1094;
  int r1098 = std__operator_(r1096, t1097);
  std__basic_ios_char__std__char_traits_char_____clear(t1095, r1098);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1099, char* v1100) {
bb1101:
  char* __c11102;
  char* __c21103;
  _Bool __retval1104;
  __c11102 = v1099;
  __c21103 = v1100;
  char* t1105 = __c11102;
  char t1106 = *t1105;
  int cast1107 = (int)t1106;
  char* t1108 = __c21103;
  char t1109 = *t1108;
  int cast1110 = (int)t1109;
  _Bool c1111 = ((cast1107 == cast1110)) ? 1 : 0;
  __retval1104 = c1111;
  _Bool t1112 = __retval1104;
  return t1112;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1113) {
bb1114:
  char* __p1115;
  unsigned long __retval1116;
  unsigned long __i1117;
  __p1115 = v1113;
  unsigned long c1118 = 0;
  __i1117 = c1118;
    char ref_tmp01119;
    while (1) {
      unsigned long t1120 = __i1117;
      char* t1121 = __p1115;
      char* ptr1122 = &(t1121)[t1120];
      char c1123 = 0;
      ref_tmp01119 = c1123;
      _Bool r1124 = __gnu_cxx__char_traits_char___eq(ptr1122, &ref_tmp01119);
      _Bool u1125 = !r1124;
      if (!u1125) break;
      unsigned long t1126 = __i1117;
      unsigned long u1127 = t1126 + 1;
      __i1117 = u1127;
    }
  unsigned long t1128 = __i1117;
  __retval1116 = t1128;
  unsigned long t1129 = __retval1116;
  return t1129;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1130) {
bb1131:
  char* __s1132;
  unsigned long __retval1133;
  __s1132 = v1130;
    _Bool r1134 = std____is_constant_evaluated();
    if (r1134) {
      char* t1135 = __s1132;
      unsigned long r1136 = __gnu_cxx__char_traits_char___length(t1135);
      __retval1133 = r1136;
      unsigned long t1137 = __retval1133;
      return t1137;
    }
  char* t1138 = __s1132;
  unsigned long r1139 = strlen(t1138);
  __retval1133 = r1139;
  unsigned long t1140 = __retval1133;
  return t1140;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1141, char* v1142) {
bb1143:
  struct std__basic_ostream_char__std__char_traits_char__* __out1144;
  char* __s1145;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1146;
  __out1144 = v1141;
  __s1145 = v1142;
    char* t1147 = __s1145;
    _Bool cast1148 = (_Bool)t1147;
    _Bool u1149 = !cast1148;
    if (u1149) {
      struct std__basic_ostream_char__std__char_traits_char__* t1150 = __out1144;
      void** v1151 = (void**)t1150;
      void* v1152 = *((void**)v1151);
      unsigned char* cast1153 = (unsigned char*)v1152;
      long c1154 = -24;
      unsigned char* ptr1155 = &(cast1153)[c1154];
      long* cast1156 = (long*)ptr1155;
      long t1157 = *cast1156;
      unsigned char* cast1158 = (unsigned char*)t1150;
      unsigned char* ptr1159 = &(cast1158)[t1157];
      struct std__basic_ostream_char__std__char_traits_char__* cast1160 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1159;
      struct std__basic_ios_char__std__char_traits_char__* cast1161 = (struct std__basic_ios_char__std__char_traits_char__*)cast1160;
      int t1162 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast1161, t1162);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t1163 = __out1144;
      char* t1164 = __s1145;
      char* t1165 = __s1145;
      unsigned long r1166 = std__char_traits_char___length(t1165);
      long cast1167 = (long)r1166;
      struct std__basic_ostream_char__std__char_traits_char__* r1168 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1163, t1164, cast1167);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t1169 = __out1144;
  __retval1146 = t1169;
  struct std__basic_ostream_char__std__char_traits_char__* t1170 = __retval1146;
  return t1170;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1171, void* v1172) {
bb1173:
  struct std__basic_ostream_char__std__char_traits_char__* this1174;
  void* __pf1175;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1176;
  this1174 = v1171;
  __pf1175 = v1172;
  struct std__basic_ostream_char__std__char_traits_char__* t1177 = this1174;
  void* t1178 = __pf1175;
  struct std__basic_ostream_char__std__char_traits_char__* r1179 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1178)(t1177);
  __retval1176 = r1179;
  struct std__basic_ostream_char__std__char_traits_char__* t1180 = __retval1176;
  return t1180;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1181) {
bb1182:
  struct std__basic_ostream_char__std__char_traits_char__* __os1183;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1184;
  __os1183 = v1181;
  struct std__basic_ostream_char__std__char_traits_char__* t1185 = __os1183;
  struct std__basic_ostream_char__std__char_traits_char__* r1186 = std__ostream__flush(t1185);
  __retval1184 = r1186;
  struct std__basic_ostream_char__std__char_traits_char__* t1187 = __retval1184;
  return t1187;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1188) {
bb1189:
  struct std__ctype_char_* __f1190;
  struct std__ctype_char_* __retval1191;
  __f1190 = v1188;
    struct std__ctype_char_* t1192 = __f1190;
    _Bool cast1193 = (_Bool)t1192;
    _Bool u1194 = !cast1193;
    if (u1194) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1195 = __f1190;
  __retval1191 = t1195;
  struct std__ctype_char_* t1196 = __retval1191;
  return t1196;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1197, char v1198) {
bb1199:
  struct std__ctype_char_* this1200;
  char __c1201;
  char __retval1202;
  this1200 = v1197;
  __c1201 = v1198;
  struct std__ctype_char_* t1203 = this1200;
    char t1204 = t1203->_M_widen_ok;
    _Bool cast1205 = (_Bool)t1204;
    if (cast1205) {
      char t1206 = __c1201;
      unsigned char cast1207 = (unsigned char)t1206;
      unsigned long cast1208 = (unsigned long)cast1207;
      char t1209 = t1203->_M_widen[cast1208];
      __retval1202 = t1209;
      char t1210 = __retval1202;
      return t1210;
    }
  std__ctype_char____M_widen_init___const(t1203);
  char t1211 = __c1201;
  void** v1212 = (void**)t1203;
  void* v1213 = *((void**)v1212);
  char vcall1216 = (char)__VERIFIER_virtual_call_char_char(t1203, 6, t1211);
  __retval1202 = vcall1216;
  char t1217 = __retval1202;
  return t1217;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1218, char v1219) {
bb1220:
  struct std__basic_ios_char__std__char_traits_char__* this1221;
  char __c1222;
  char __retval1223;
  this1221 = v1218;
  __c1222 = v1219;
  struct std__basic_ios_char__std__char_traits_char__* t1224 = this1221;
  struct std__ctype_char_* t1225 = t1224->_M_ctype;
  struct std__ctype_char_* r1226 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1225);
  char t1227 = __c1222;
  char r1228 = std__ctype_char___widen_char__const(r1226, t1227);
  __retval1223 = r1228;
  char t1229 = __retval1223;
  return t1229;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1230) {
bb1231:
  struct std__basic_ostream_char__std__char_traits_char__* __os1232;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1233;
  __os1232 = v1230;
  struct std__basic_ostream_char__std__char_traits_char__* t1234 = __os1232;
  struct std__basic_ostream_char__std__char_traits_char__* t1235 = __os1232;
  void** v1236 = (void**)t1235;
  void* v1237 = *((void**)v1236);
  unsigned char* cast1238 = (unsigned char*)v1237;
  long c1239 = -24;
  unsigned char* ptr1240 = &(cast1238)[c1239];
  long* cast1241 = (long*)ptr1240;
  long t1242 = *cast1241;
  unsigned char* cast1243 = (unsigned char*)t1235;
  unsigned char* ptr1244 = &(cast1243)[t1242];
  struct std__basic_ostream_char__std__char_traits_char__* cast1245 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1244;
  struct std__basic_ios_char__std__char_traits_char__* cast1246 = (struct std__basic_ios_char__std__char_traits_char__*)cast1245;
  char c1247 = 10;
  char r1248 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1246, c1247);
  struct std__basic_ostream_char__std__char_traits_char__* r1249 = std__ostream__put(t1234, r1248);
  struct std__basic_ostream_char__std__char_traits_char__* r1250 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1249);
  __retval1233 = r1250;
  struct std__basic_ostream_char__std__char_traits_char__* t1251 = __retval1233;
  return t1251;
}

// function: _ZNSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEED2Ev
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int______priority_queue(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* v1252) {
bb1253:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* this1254;
  this1254 = v1252;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* t1255 = this1254;
  {
    std__vector_int__std__allocator_int______vector(&t1255->c);
  }
  return;
}

// function: main
int main() {
bb1256:
  int __retval1257;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__ mypq1258;
  int sum1259;
  int c1260 = 0;
  __retval1257 = c1260;
  std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____priority_queue_std__vector_int__std__allocator_int_____void_(&mypq1258);
    int c1261 = 0;
    sum1259 = c1261;
      int i1262;
      int c1263 = 1;
      i1262 = c1263;
      while (1) {
        int t1265 = i1262;
        int c1266 = 10;
        _Bool c1267 = ((t1265 <= c1266)) ? 1 : 0;
        if (!c1267) break;
        std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____push(&mypq1258, &i1262);
      for_step1264: ;
        int t1268 = i1262;
        int u1269 = t1268 + 1;
        i1262 = u1269;
      }
      while (1) {
        _Bool r1270 = std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____empty___const(&mypq1258);
        _Bool u1271 = !r1270;
        if (!u1271) break;
          int* r1272 = std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____top___const(&mypq1258);
          int t1273 = *r1272;
          int t1274 = sum1259;
          int b1275 = t1274 + t1273;
          sum1259 = b1275;
          std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____pop(&mypq1258);
      }
    _Bool r1276 = std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____empty___const(&mypq1258);
    _Bool u1277 = !r1276;
    if (u1277) {
    } else {
      char* cast1278 = (char*)&(_str);
      char* c1279 = _str_1;
      unsigned int c1280 = 26;
      char* cast1281 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1278, c1279, c1280, cast1281);
    }
    char* cast1282 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r1283 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1282);
    int t1284 = sum1259;
    struct std__basic_ostream_char__std__char_traits_char__* r1285 = std__ostream__operator__(r1283, t1284);
    struct std__basic_ostream_char__std__char_traits_char__* r1286 = std__ostream__operator___std__ostream_____(r1285, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1287 = 0;
    __retval1257 = c1287;
    int t1288 = __retval1257;
    int ret_val1289 = t1288;
    {
      std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int______priority_queue(&mypq1258);
    }
    return ret_val1289;
  int t1290 = __retval1257;
  return t1290;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1291) {
bb1292:
  struct std__vector_int__std__allocator_int__* this1293;
  this1293 = v1291;
  struct std__vector_int__std__allocator_int__* t1294 = this1293;
    struct std___Vector_base_int__std__allocator_int__* base1295 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1294 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1296 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1295->_M_impl) + 0);
    int* t1297 = base1296->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1298 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1294 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1299 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1298->_M_impl) + 0);
    int* t1300 = base1299->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1301 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1294 + 0);
    struct std__allocator_int_* r1302 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1301);
    void_std___Destroy_int___int_(t1297, t1300, r1302);
  {
    struct std___Vector_base_int__std__allocator_int__* base1303 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1294 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1303);
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1304:
  _Bool __retval1305;
    _Bool c1306 = 0;
    __retval1305 = c1306;
    _Bool t1307 = __retval1305;
    return t1307;
  abort();
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1308) {
bb1309:
  int* __location1310;
  __location1310 = v1308;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1311, int* v1312) {
bb1313:
  int* __first1314;
  int* __last1315;
  __first1314 = v1311;
  __last1315 = v1312;
      _Bool r1316 = std____is_constant_evaluated();
      if (r1316) {
          while (1) {
            int* t1318 = __first1314;
            int* t1319 = __last1315;
            _Bool c1320 = ((t1318 != t1319)) ? 1 : 0;
            if (!c1320) break;
            int* t1321 = __first1314;
            void_std__destroy_at_int_(t1321);
          for_step1317: ;
            int* t1322 = __first1314;
            int c1323 = 1;
            int* ptr1324 = &(t1322)[c1323];
            __first1314 = ptr1324;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1325, int* v1326, struct std__allocator_int_* v1327) {
bb1328:
  int* __first1329;
  int* __last1330;
  struct std__allocator_int_* unnamed1331;
  __first1329 = v1325;
  __last1330 = v1326;
  unnamed1331 = v1327;
  int* t1332 = __first1329;
  int* t1333 = __last1330;
  void_std___Destroy_int__(t1332, t1333);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1334) {
bb1335:
  struct std___Vector_base_int__std__allocator_int__* this1336;
  struct std__allocator_int_* __retval1337;
  this1336 = v1334;
  struct std___Vector_base_int__std__allocator_int__* t1338 = this1336;
  struct std__allocator_int_* base1339 = (struct std__allocator_int_*)((char *)&(t1338->_M_impl) + 0);
  __retval1337 = base1339;
  struct std__allocator_int_* t1340 = __retval1337;
  return t1340;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1341, int* v1342, unsigned long v1343) {
bb1344:
  struct std____new_allocator_int_* this1345;
  int* __p1346;
  unsigned long __n1347;
  this1345 = v1341;
  __p1346 = v1342;
  __n1347 = v1343;
  struct std____new_allocator_int_* t1348 = this1345;
    unsigned long c1349 = 4;
    unsigned long c1350 = 16;
    _Bool c1351 = ((c1349 > c1350)) ? 1 : 0;
    if (c1351) {
      int* t1352 = __p1346;
      void* cast1353 = (void*)t1352;
      unsigned long t1354 = __n1347;
      unsigned long c1355 = 4;
      unsigned long b1356 = t1354 * c1355;
      unsigned long c1357 = 4;
      operator_delete_3(cast1353, b1356, c1357);
      return;
    }
  int* t1358 = __p1346;
  void* cast1359 = (void*)t1358;
  unsigned long t1360 = __n1347;
  unsigned long c1361 = 4;
  unsigned long b1362 = t1360 * c1361;
  operator_delete_2(cast1359, b1362);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1363, int* v1364, unsigned long v1365) {
bb1366:
  struct std__allocator_int_* this1367;
  int* __p1368;
  unsigned long __n1369;
  this1367 = v1363;
  __p1368 = v1364;
  __n1369 = v1365;
  struct std__allocator_int_* t1370 = this1367;
    _Bool r1371 = std____is_constant_evaluated();
    if (r1371) {
      int* t1372 = __p1368;
      void* cast1373 = (void*)t1372;
      operator_delete(cast1373);
      return;
    }
  struct std____new_allocator_int_* base1374 = (struct std____new_allocator_int_*)((char *)t1370 + 0);
  int* t1375 = __p1368;
  unsigned long t1376 = __n1369;
  std____new_allocator_int___deallocate(base1374, t1375, t1376);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1377, int* v1378, unsigned long v1379) {
bb1380:
  struct std__allocator_int_* __a1381;
  int* __p1382;
  unsigned long __n1383;
  __a1381 = v1377;
  __p1382 = v1378;
  __n1383 = v1379;
  struct std__allocator_int_* t1384 = __a1381;
  int* t1385 = __p1382;
  unsigned long t1386 = __n1383;
  std__allocator_int___deallocate(t1384, t1385, t1386);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1387, int* v1388, unsigned long v1389) {
bb1390:
  struct std___Vector_base_int__std__allocator_int__* this1391;
  int* __p1392;
  unsigned long __n1393;
  this1391 = v1387;
  __p1392 = v1388;
  __n1393 = v1389;
  struct std___Vector_base_int__std__allocator_int__* t1394 = this1391;
    int* t1395 = __p1392;
    _Bool cast1396 = (_Bool)t1395;
    if (cast1396) {
      struct std__allocator_int_* base1397 = (struct std__allocator_int_*)((char *)&(t1394->_M_impl) + 0);
      int* t1398 = __p1392;
      unsigned long t1399 = __n1393;
      std__allocator_traits_std__allocator_int_____deallocate(base1397, t1398, t1399);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1400) {
bb1401:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1402;
  this1402 = v1400;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1403 = this1402;
  {
    struct std__allocator_int_* base1404 = (struct std__allocator_int_*)((char *)t1403 + 0);
    std__allocator_int____allocator(base1404);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1405) {
bb1406:
  struct std___Vector_base_int__std__allocator_int__* this1407;
  this1407 = v1405;
  struct std___Vector_base_int__std__allocator_int__* t1408 = this1407;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1409 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1408->_M_impl) + 0);
    int* t1410 = base1409->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1411 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1408->_M_impl) + 0);
    int* t1412 = base1411->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1413 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1408->_M_impl) + 0);
    int* t1414 = base1413->_M_start;
    long diff1415 = t1412 - t1414;
    unsigned long cast1416 = (unsigned long)diff1415;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1408, t1410, cast1416);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1408->_M_impl);
  }
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1417) {
bb1418:
  struct std__allocator_int_* this1419;
  this1419 = v1417;
  struct std__allocator_int_* t1420 = this1419;
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v1421) {
bb1422:
  struct std__vector_int__std__allocator_int__* this1423;
  this1423 = v1421;
  struct std__vector_int__std__allocator_int__* t1424 = this1423;
  struct std___Vector_base_int__std__allocator_int__* base1425 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1424 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base1425);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1426) {
bb1427:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1428;
  this1428 = v1426;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1429 = this1428;
  struct std__allocator_int_* base1430 = (struct std__allocator_int_*)((char *)t1429 + 0);
  std__allocator_int___allocator(base1430);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1431 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1429 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1431);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1432) {
bb1433:
  struct std___Vector_base_int__std__allocator_int__* this1434;
  this1434 = v1432;
  struct std___Vector_base_int__std__allocator_int__* t1435 = this1434;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1435->_M_impl);
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1436) {
bb1437:
  struct std____new_allocator_int_* this1438;
  this1438 = v1436;
  struct std____new_allocator_int_* t1439 = this1438;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1440) {
bb1441:
  struct std__allocator_int_* this1442;
  this1442 = v1440;
  struct std__allocator_int_* t1443 = this1442;
  struct std____new_allocator_int_* base1444 = (struct std____new_allocator_int_*)((char *)t1443 + 0);
  std____new_allocator_int_____new_allocator(base1444);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1445) {
bb1446:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1447;
  this1447 = v1445;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1448 = this1447;
  int* c1449 = ((void*)0);
  t1448->_M_start = c1449;
  int* c1450 = ((void*)0);
  t1448->_M_finish = c1450;
  int* c1451 = ((void*)0);
  t1448->_M_end_of_storage = c1451;
  return;
}

