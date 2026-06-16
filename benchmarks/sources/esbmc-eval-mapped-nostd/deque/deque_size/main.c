extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std___Deque_iterator_int_int___int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__ { struct std___Deque_iterator_int__int____int___ _M_first; struct std___Deque_iterator_int__int____int___* _M_cur; struct std__allocator_int_* _M_alloc; };
struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_ { struct std___Deque_iterator_int__int____int___ _M_first; struct std___Deque_iterator_int__int____int___* _M_cur; };
struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____ { unsigned char __field0; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____new_allocator_int___ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__move_iterator_std___Deque_iterator_int__int____int____ { struct std___Deque_iterator_int__int____int___ _M_current; };
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____imove___IterMove { unsigned char __field0; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[10] = "0. size: ";
char _str_1[19] = "myints.size() == 0";
char _str_2[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_size/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[10] = "1. size: ";
char _str_4[19] = "myints.size() == 5";
char _str_5[10] = "2. size: ";
char _str_6[20] = "myints.size() == 10";
char _str_7[10] = "3. size: ";
char _str_8[19] = "myints.size() == 9";
char _str_9[48] = "cannot create std::deque larger than max_size()";
char _str_10[32] = "deque::_M_new_elements_at_front";
char _str_11[31] = "deque::_M_new_elements_at_back";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
char _str_12[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE8pop_backEv[75] = "void std::deque<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_13[15] = "!this->empty()";
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__4(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
long std__operator__2(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* p0);
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* p0);
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
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* p0, int* p1, int* p2);
extern void std____throw_length_error(char* p0);
int** int___std____niter_wrap_int___(int*** p0, int** p1);
long std__iterator_traits_int_____difference_type_std____distance_int___(int** p0, int** p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_int_____iterator_category_std____iterator_category_int___(int*** p0);
long std__iterator_traits_int_____difference_type_std__distance_int___(int** p0, int** p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_false__int____int___(int*** p0, int*** p1);
int** int___std____copy_move_a2_false__int____int____int___(int** p0, int** p1, int** p2);
int** int___std____copy_move_a1_false__int____int___(int** p0, int** p1, int** p2);
int** int___std____niter_base_int___(int** p0);
int** int___std____copy_move_a_false__int____int___(int** p0, int** p1, int** p2);
int** int___std____miter_base_int___(int** p0);
int** int___std__copy_int____int___(int** p0, int** p1, int** p2);
_Bool std__is_constant_evaluated();
void void_std____advance_int____long_(int*** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int____long_(int*** p0, long p1);
int** int___std____copy_move_backward_a2_false__int____int___(int** p0, int** p1, int** p2);
int** int___std____copy_move_backward_a1_false__int____int___(int** p0, int** p1, int** p2);
int** int___std____copy_move_backward_a_false__int____int___(int** p0, int** p1, int** p2);
int** int___std__copy_backward_int____int___(int** p0, int** p1, int** p2);
void std__deque_int__std__allocator_int______M_reallocate_map(struct std__deque_int__std__allocator_int__* p0, unsigned long p1, _Bool p2);
void std__deque_int__std__allocator_int______M_reserve_map_at_back(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(struct std__deque_int__std__allocator_int__* p0, int* p1);
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* p0, int* p1);
unsigned long std___Deque_iterator_int__int_const___int_const_____S_buffer_size();
long std__operator_(struct std___Deque_iterator_int_int___int___* p0, struct std___Deque_iterator_int_int___int___* p1);
struct std___Deque_iterator_int_int___int___ std__deque_int__std__allocator_int_____cbegin___const(struct std__deque_int__std__allocator_int__* p0);
void std__deque_int__std__allocator_int______M_reserve_map_at_front(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
void std__deque_int__std__allocator_int______M_new_elements_at_front(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___2(struct std___Deque_iterator_int__int____int___* p0, long p1);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* p0, long p1);
struct std___Deque_iterator_int__int____int___ std__operator__3(struct std___Deque_iterator_int__int____int___* p0, long p1);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int______M_reserve_elements_at_front(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void____UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* p0, struct std___Deque_iterator_int__int____int___* p1);
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void void_std___Construct_int__int_const__(int* p0, int* p1);
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* p0);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___3(struct std___Deque_iterator_int__int____int___* p0);
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void___release(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* p0);
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* p0);
void void_std____do_uninit_fill_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, int* p2);
void void_std__uninitialized_fill_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, int* p2);
void void_std____uninitialized_fill_a_std___Deque_iterator_int__int___int____int__int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, int* p2, struct std__allocator_int_* p3);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void std__deque_int__std__allocator_int______M_new_elements_at_back(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int______M_reserve_elements_at_back(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
struct std___Deque_iterator_int__int____int___* std__move_iterator_std___Deque_iterator_int__int___int______base___const__(struct std__move_iterator_std___Deque_iterator_int__int____int____* p0);
_Bool bool_std__operator___std___Deque_iterator_int__int___int____(struct std__move_iterator_std___Deque_iterator_int__int____int____* p0, struct std__move_iterator_std___Deque_iterator_int__int____int____* p1);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std___Construct_int__int_(int* p0, int* p1);
int* _ZNKSt6ranges7__imove9_IterMoveclIRKSt15_Deque_iteratorIiRiPiEQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS9_EEEEEENS1_8__resultIS9_E4typeEOS9_(struct std__ranges____imove___IterMove* p0, struct std___Deque_iterator_int__int____int___* p1);
int* std__move_iterator_std___Deque_iterator_int__int___int______operator____const(struct std__move_iterator_std___Deque_iterator_int__int____int____* p0);
struct std__move_iterator_std___Deque_iterator_int__int____int____* std__move_iterator_std___Deque_iterator_int__int___int______operator__(struct std__move_iterator_std___Deque_iterator_int__int____int____* p0);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____do_uninit_copy_std__move_iterator_std___Deque_iterator_int__int___int______std__move_iterator_std___Deque_iterator_int__int___int______std___Deque_iterator_int__int___int____(struct std__move_iterator_std___Deque_iterator_int__int____int____ p0, struct std__move_iterator_std___Deque_iterator_int__int____int____ p1, struct std___Deque_iterator_int__int____int___ p2);
void std__move_iterator_std___Deque_iterator_int__int___int______move_iterator(struct std__move_iterator_std___Deque_iterator_int__int____int____* p0, struct std__move_iterator_std___Deque_iterator_int__int____int____* p1);
void std__move_iterator_std___Deque_iterator_int__int___int______move_iterator_2(struct std__move_iterator_std___Deque_iterator_int__int____int____* p0, struct std__move_iterator_std___Deque_iterator_int__int____int____* p1);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__uninitialized_copy_std__move_iterator_std___Deque_iterator_int__int___int______std___Deque_iterator_int__int___int____(struct std__move_iterator_std___Deque_iterator_int__int____int____ p0, struct std__move_iterator_std___Deque_iterator_int__int____int____ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____uninitialized_copy_a_std__move_iterator_std___Deque_iterator_int__int___int______std__move_iterator_std___Deque_iterator_int__int___int______std___Deque_iterator_int__int___int____int_(struct std__move_iterator_std___Deque_iterator_int__int____int____ p0, struct std__move_iterator_std___Deque_iterator_int__int____int____ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__allocator_int_* p3);
void std__move_iterator_std___Deque_iterator_int__int___int______move_iterator_3(struct std__move_iterator_std___Deque_iterator_int__int____int____* p0, struct std___Deque_iterator_int__int____int___ p1);
struct std__move_iterator_std___Deque_iterator_int__int____int____ std__move_iterator_std___Deque_iterator_int__int___int_____std__make_move_iterator_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____uninitialized_move_a_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____std__allocator_int___(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__allocator_int_* p3);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____niter_wrap_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___ p1);
long* long_const__std__min_long_(long* p0, long* p1);
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
void void_std____assign_one_true__int___int__(int** p0, int** p1);
int* int__std____copy_move_a2_true__int___int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a1_true__int___int__(int* p0, int* p1, int* p2);
struct std___Deque_iterator_int__int____int___ __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_a1_true__int___int_(int* p0, int* p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_dit_true__int__int___int___std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_a1_true__int__int___int___int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_a_true__std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____miter_base_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__move_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
void void_std____fill_a1_int___int_(int* p0, int* p1, int* p2);
void void_std____fill_a1_int__int_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1, int* p2);
void void_std____fill_a_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, int* p2);
void void_std__fill_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, int* p2);
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int______UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___* p1, struct std__allocator_int_* p2);
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_____release(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* p0);
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_______UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* p0);
void void_std____uninitialized_move_fill_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____int__std__allocator_int___(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std___Deque_iterator_int__int____int___ p3, int* p4, struct std__allocator_int_* p5);
void void_std____advance_int___long_(int** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int___long_(int** p0, long p1);
int* int__std____copy_move_backward_a2_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_backward_a1_true__int___int__(int* p0, int* p1, int* p2);
struct std___Deque_iterator_int__int____int___ __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(int* p0, int* p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_dit_true__int__int___int___std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_a1_true__int__int___int___int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_a_true__std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__move_backward_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____uninitialized_fill_move_std___Deque_iterator_int__int___int____int__std___Deque_iterator_int__int___int____std__allocator_int___(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, int* p2, struct std___Deque_iterator_int__int____int___ p3, struct std___Deque_iterator_int__int____int___ p4, struct std__allocator_int_* p5);
void std__deque_int__std__allocator_int______M_insert_aux(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, unsigned long p2, int* p3);
void std__deque_int__std__allocator_int______M_fill_insert(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, unsigned long p2, int* p3);
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* p0, int* p1, int** p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int_const___int_const_____M_const_cast___const(struct std___Deque_iterator_int_int___int___* p0);
struct std___Deque_iterator_int__int____int___ std__operator__5(struct std___Deque_iterator_int__int____int___* p0, long p1);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____insert(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int_int___int___ p1, unsigned long p2, int* p3);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* p0);
void std___Deque_iterator_int__int_const___int_const_____Deque_iterator_std___Deque_iterator_int__int___int____void_(struct std___Deque_iterator_int_int___int___* p0, struct std___Deque_iterator_int__int____int___* p1);
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* p0, int* p1);
void std__deque_int__std__allocator_int______M_pop_back_aux(struct std__deque_int__std__allocator_int__* p0);
void std__deque_int__std__allocator_int_____pop_back(struct std__deque_int__std__allocator_int__* p0);
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* p0);
int main();
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0);
unsigned long std____deque_buf_size(unsigned long p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* p0);
void std__allocator_int____allocator_int_(struct std__allocator_int___* p0, struct std__allocator_int_* p1);
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* p0, unsigned long p1, void* p2);
int** std__allocator_int____allocate(struct std__allocator_int___* p0, unsigned long p1);
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* p0, unsigned long p1);
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* p0, unsigned long p1);
extern int __gxx_personality_v0();
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* p0);
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* p0, unsigned long p1, void* p2);
int* std__allocator_int___allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* p0);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* p0, int* p1);
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, int** p2);
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, int** p2);
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* p0, int** p1, unsigned long p2);
void std__allocator_int____deallocate(struct std__allocator_int___* p0, int** p1, unsigned long p2);
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* p0, int** p1, unsigned long p2);
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, unsigned long p2);
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size();
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* p0, int** p1);
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0);
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0);
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0);
void std___Deque_iterator_int__int___int_____Deque_iterator_3(struct std___Deque_iterator_int__int____int___* p0);
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p0);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* p0);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
unsigned long std__deque_int__std__allocator_int______S_buffer_size();
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__allocator_int_* p3);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* p0);
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* p0);
void void_std___Destroy_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1);
void void_std___Destroy_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std__allocator_int_* p2);

// function: _ZNSt5dequeIiSaIiEEC2Ev
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* v0) {
bb1: ;
  struct std__deque_int__std__allocator_int__* this2;
  this2 = v0;
  struct std__deque_int__std__allocator_int__* t3 = this2;
  struct std___Deque_base_int__std__allocator_int__* base4 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t3 + 0);
  std___Deque_base_int__std__allocator_int______Deque_base(base4);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__4(int v5, int v6) {
bb7: ;
  int __a8;
  int __b9;
  int __retval10;
  __a8 = v5;
  __b9 = v6;
  int t11 = __a8;
  int t12 = __b9;
  int b13 = t11 | t12;
  __retval10 = b13;
  int t14 = __retval10;
  return t14;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v15) {
bb16: ;
  struct std__basic_ios_char__std__char_traits_char__* this17;
  int __retval18;
  this17 = v15;
  struct std__basic_ios_char__std__char_traits_char__* t19 = this17;
  struct std__ios_base* base20 = (struct std__ios_base*)((char *)t19 + 0);
  int t21 = base20->_M_streambuf_state;
  __retval18 = t21;
  int t22 = __retval18;
  return t22;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v23, int v24) {
bb25: ;
  struct std__basic_ios_char__std__char_traits_char__* this26;
  int __state27;
  this26 = v23;
  __state27 = v24;
  struct std__basic_ios_char__std__char_traits_char__* t28 = this26;
  int r29 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t28);
  if (__cir_exc_active) {
    return;
  }
  int t30 = __state27;
  int r31 = std__operator__4(r29, t30);
  std__basic_ios_char__std__char_traits_char_____clear(t28, r31);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v32, char* v33) {
bb34: ;
  char* __c135;
  char* __c236;
  _Bool __retval37;
  __c135 = v32;
  __c236 = v33;
  char* t38 = __c135;
  char t39 = *t38;
  int cast40 = (int)t39;
  char* t41 = __c236;
  char t42 = *t41;
  int cast43 = (int)t42;
  _Bool c44 = ((cast40 == cast43)) ? 1 : 0;
  __retval37 = c44;
  _Bool t45 = __retval37;
  return t45;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v46) {
bb47: ;
  char* __p48;
  unsigned long __retval49;
  unsigned long __i50;
  __p48 = v46;
  unsigned long c51 = 0;
  __i50 = c51;
    char ref_tmp052;
    while (1) {
      unsigned long t53 = __i50;
      char* t54 = __p48;
      char* ptr55 = &(t54)[t53];
      char c56 = 0;
      ref_tmp052 = c56;
      _Bool r57 = __gnu_cxx__char_traits_char___eq(ptr55, &ref_tmp052);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u58 = !r57;
      if (!u58) break;
      unsigned long t59 = __i50;
      unsigned long u60 = t59 + 1;
      __i50 = u60;
    }
  unsigned long t61 = __i50;
  __retval49 = t61;
  unsigned long t62 = __retval49;
  return t62;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v63) {
bb64: ;
  char* __s65;
  unsigned long __retval66;
  __s65 = v63;
    _Bool r67 = std____is_constant_evaluated();
    if (r67) {
      char* t68 = __s65;
      unsigned long r69 = __gnu_cxx__char_traits_char___length(t68);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval66 = r69;
      unsigned long t70 = __retval66;
      return t70;
    }
  char* t71 = __s65;
  unsigned long r72 = strlen(t71);
  __retval66 = r72;
  unsigned long t73 = __retval66;
  return t73;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v74, char* v75) {
bb76: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out77;
  char* __s78;
  struct std__basic_ostream_char__std__char_traits_char__* __retval79;
  __out77 = v74;
  __s78 = v75;
    char* t80 = __s78;
    _Bool cast81 = (_Bool)t80;
    _Bool u82 = !cast81;
    if (u82) {
      struct std__basic_ostream_char__std__char_traits_char__* t83 = __out77;
      void** v84 = (void**)t83;
      void* v85 = *((void**)v84);
      unsigned char* cast86 = (unsigned char*)v85;
      long c87 = -24;
      unsigned char* ptr88 = &(cast86)[c87];
      long* cast89 = (long*)ptr88;
      long t90 = *cast89;
      unsigned char* cast91 = (unsigned char*)t83;
      unsigned char* ptr92 = &(cast91)[t90];
      struct std__basic_ostream_char__std__char_traits_char__* cast93 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr92;
      struct std__basic_ios_char__std__char_traits_char__* cast94 = (struct std__basic_ios_char__std__char_traits_char__*)cast93;
      int t95 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast94, t95);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t96 = __out77;
      char* t97 = __s78;
      char* t98 = __s78;
      unsigned long r99 = std__char_traits_char___length(t98);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast100 = (long)r99;
      struct std__basic_ostream_char__std__char_traits_char__* r101 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t96, t97, cast100);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __out77;
  __retval79 = t102;
  struct std__basic_ostream_char__std__char_traits_char__* t103 = __retval79;
  return t103;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiES4_
long std__operator__2(struct std___Deque_iterator_int__int____int___* v104, struct std___Deque_iterator_int__int____int___* v105) {
bb106: ;
  struct std___Deque_iterator_int__int____int___* __x107;
  struct std___Deque_iterator_int__int____int___* __y108;
  long __retval109;
  __x107 = v104;
  __y108 = v105;
  unsigned long r110 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast111 = (long)r110;
  struct std___Deque_iterator_int__int____int___* t112 = __x107;
  int** t113 = t112->_M_node;
  struct std___Deque_iterator_int__int____int___* t114 = __y108;
  int** t115 = t114->_M_node;
  long diff116 = t113 - t115;
  struct std___Deque_iterator_int__int____int___* t117 = __x107;
  int** t118 = t117->_M_node;
  _Bool cast119 = (_Bool)t118;
  long cast120 = (long)cast119;
  long b121 = diff116 - cast120;
  long b122 = cast111 * b121;
  struct std___Deque_iterator_int__int____int___* t123 = __x107;
  int* t124 = t123->_M_cur;
  struct std___Deque_iterator_int__int____int___* t125 = __x107;
  int* t126 = t125->_M_first;
  long diff127 = t124 - t126;
  long b128 = b122 + diff127;
  struct std___Deque_iterator_int__int____int___* t129 = __y108;
  int* t130 = t129->_M_last;
  struct std___Deque_iterator_int__int____int___* t131 = __y108;
  int* t132 = t131->_M_cur;
  long diff133 = t130 - t132;
  long b134 = b128 + diff133;
  __retval109 = b134;
  long t135 = __retval109;
  return t135;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v136, unsigned long* v137) {
bb138: ;
  unsigned long* __a139;
  unsigned long* __b140;
  unsigned long* __retval141;
  __a139 = v136;
  __b140 = v137;
    unsigned long* t142 = __b140;
    unsigned long t143 = *t142;
    unsigned long* t144 = __a139;
    unsigned long t145 = *t144;
    _Bool c146 = ((t143 < t145)) ? 1 : 0;
    if (c146) {
      unsigned long* t147 = __b140;
      __retval141 = t147;
      unsigned long* t148 = __retval141;
      return t148;
    }
  unsigned long* t149 = __a139;
  __retval141 = t149;
  unsigned long* t150 = __retval141;
  return t150;
}

// function: _ZNSt5dequeIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* v151) {
bb152: ;
  struct std__allocator_int_* __a153;
  unsigned long __retval154;
  unsigned long __diffmax155;
  unsigned long __allocmax156;
  __a153 = v151;
  unsigned long c157 = 9223372036854775807;
  __diffmax155 = c157;
  unsigned long c158 = 4611686018427387903;
  __allocmax156 = c158;
  unsigned long* r159 = unsigned_long_const__std__min_unsigned_long_(&__diffmax155, &__allocmax156);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t160 = *r159;
  __retval154 = t160;
  unsigned long t161 = __retval154;
  return t161;
}

// function: _ZNKSt5dequeIiSaIiEE8max_sizeEv
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* v162) {
bb163: ;
  struct std__deque_int__std__allocator_int__* this164;
  unsigned long __retval165;
  this164 = v162;
  struct std__deque_int__std__allocator_int__* t166 = this164;
  struct std___Deque_base_int__std__allocator_int__* base167 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t166 + 0);
  struct std__allocator_int_* r168 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(base167);
  unsigned long r169 = std__deque_int__std__allocator_int______S_max_size(r168);
  __retval165 = r169;
  unsigned long t170 = __retval165;
  return t170;
}

// function: _ZNKSt5dequeIiSaIiEE4sizeEv
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* v171) {
bb172: ;
  struct std__deque_int__std__allocator_int__* this173;
  unsigned long __retval174;
  unsigned long __sz175;
  this173 = v171;
  struct std__deque_int__std__allocator_int__* t176 = this173;
  struct std___Deque_base_int__std__allocator_int__* base177 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t176 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base178 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base177->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base179 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t176 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base180 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base179->_M_impl) + 0);
  long r181 = std__operator__2(&base178->_M_finish, &base180->_M_start);
  unsigned long cast182 = (unsigned long)r181;
  __sz175 = cast182;
    unsigned long t183 = __sz175;
    unsigned long r184 = std__deque_int__std__allocator_int_____max_size___const(t176);
    _Bool c185 = ((t183 > r184)) ? 1 : 0;
    if (c185) {
      __builtin_unreachable();
    }
  unsigned long t186 = __sz175;
  __retval174 = t186;
  unsigned long t187 = __retval174;
  return t187;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v188, void* v189) {
bb190: ;
  struct std__basic_ostream_char__std__char_traits_char__* this191;
  void* __pf192;
  struct std__basic_ostream_char__std__char_traits_char__* __retval193;
  this191 = v188;
  __pf192 = v189;
  struct std__basic_ostream_char__std__char_traits_char__* t194 = this191;
  void* t195 = __pf192;
  struct std__basic_ostream_char__std__char_traits_char__* r196 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t195)(t194);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval193 = r196;
  struct std__basic_ostream_char__std__char_traits_char__* t197 = __retval193;
  return t197;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v198) {
bb199: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os200;
  struct std__basic_ostream_char__std__char_traits_char__* __retval201;
  __os200 = v198;
  struct std__basic_ostream_char__std__char_traits_char__* t202 = __os200;
  struct std__basic_ostream_char__std__char_traits_char__* r203 = std__ostream__flush(t202);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval201 = r203;
  struct std__basic_ostream_char__std__char_traits_char__* t204 = __retval201;
  return t204;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v205) {
bb206: ;
  struct std__ctype_char_* __f207;
  struct std__ctype_char_* __retval208;
  __f207 = v205;
    struct std__ctype_char_* t209 = __f207;
    _Bool cast210 = (_Bool)t209;
    _Bool u211 = !cast210;
    if (u211) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t212 = __f207;
  __retval208 = t212;
  struct std__ctype_char_* t213 = __retval208;
  return t213;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v214, char v215) {
bb216: ;
  struct std__ctype_char_* this217;
  char __c218;
  char __retval219;
  this217 = v214;
  __c218 = v215;
  struct std__ctype_char_* t220 = this217;
    char t221 = t220->_M_widen_ok;
    _Bool cast222 = (_Bool)t221;
    if (cast222) {
      char t223 = __c218;
      unsigned char cast224 = (unsigned char)t223;
      unsigned long cast225 = (unsigned long)cast224;
      char t226 = t220->_M_widen[cast225];
      __retval219 = t226;
      char t227 = __retval219;
      return t227;
    }
  std__ctype_char____M_widen_init___const(t220);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t228 = __c218;
  void** v229 = (void**)t220;
  void* v230 = *((void**)v229);
  char vcall233 = (char)__VERIFIER_virtual_call_char_char(t220, 6, t228);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval219 = vcall233;
  char t234 = __retval219;
  return t234;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v235, char v236) {
bb237: ;
  struct std__basic_ios_char__std__char_traits_char__* this238;
  char __c239;
  char __retval240;
  this238 = v235;
  __c239 = v236;
  struct std__basic_ios_char__std__char_traits_char__* t241 = this238;
  struct std__ctype_char_* t242 = t241->_M_ctype;
  struct std__ctype_char_* r243 = std__ctype_char__const__std____check_facet_std__ctype_char___(t242);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t244 = __c239;
  char r245 = std__ctype_char___widen_char__const(r243, t244);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval240 = r245;
  char t246 = __retval240;
  return t246;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v247) {
bb248: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os249;
  struct std__basic_ostream_char__std__char_traits_char__* __retval250;
  __os249 = v247;
  struct std__basic_ostream_char__std__char_traits_char__* t251 = __os249;
  struct std__basic_ostream_char__std__char_traits_char__* t252 = __os249;
  void** v253 = (void**)t252;
  void* v254 = *((void**)v253);
  unsigned char* cast255 = (unsigned char*)v254;
  long c256 = -24;
  unsigned char* ptr257 = &(cast255)[c256];
  long* cast258 = (long*)ptr257;
  long t259 = *cast258;
  unsigned char* cast260 = (unsigned char*)t252;
  unsigned char* ptr261 = &(cast260)[t259];
  struct std__basic_ostream_char__std__char_traits_char__* cast262 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr261;
  struct std__basic_ios_char__std__char_traits_char__* cast263 = (struct std__basic_ios_char__std__char_traits_char__*)cast262;
  char c264 = 10;
  char r265 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast263, c264);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r266 = std__ostream__put(t251, r265);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r267 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r266);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval250 = r267;
  struct std__basic_ostream_char__std__char_traits_char__* t268 = __retval250;
  return t268;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v269, int* v270) {
bb271: ;
  int* __location272;
  int* __args273;
  int* __retval274;
  void* __loc275;
  __location272 = v269;
  __args273 = v270;
  int* t276 = __location272;
  void* cast277 = (void*)t276;
  __loc275 = cast277;
    void* t278 = __loc275;
    int* cast279 = (int*)t278;
    int* t280 = __args273;
    int t281 = *t280;
    *cast279 = t281;
    __retval274 = cast279;
    int* t282 = __retval274;
    return t282;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v283, int* v284, int* v285) {
bb286: ;
  struct std__allocator_int_* __a287;
  int* __p288;
  int* __args289;
  __a287 = v283;
  __p288 = v284;
  __args289 = v285;
  int* t290 = __p288;
  int* t291 = __args289;
  int* r292 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t290, t291);
  return;
}

// function: _ZSt12__niter_wrapIPPiET_RKS2_S2_
int** int___std____niter_wrap_int___(int*** v293, int** v294) {
bb295: ;
  int*** unnamed296;
  int** __res297;
  int** __retval298;
  unnamed296 = v293;
  __res297 = v294;
  int** t299 = __res297;
  __retval298 = t299;
  int** t300 = __retval298;
  return t300;
}

// function: _ZSt10__distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_int_____difference_type_std____distance_int___(int** v301, int** v302, struct std__random_access_iterator_tag v303) {
bb304: ;
  int** __first305;
  int** __last306;
  struct std__random_access_iterator_tag unnamed307;
  long __retval308;
  __first305 = v301;
  __last306 = v302;
  unnamed307 = v303;
  int** t309 = __last306;
  int** t310 = __first305;
  long diff311 = t309 - t310;
  __retval308 = diff311;
  long t312 = __retval308;
  return t312;
}

// function: _ZSt19__iterator_categoryIPPiENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_int_____iterator_category_std____iterator_category_int___(int*** v313) {
bb314: ;
  int*** unnamed315;
  struct std__random_access_iterator_tag __retval316;
  unnamed315 = v313;
  struct std__random_access_iterator_tag t317 = __retval316;
  return t317;
}

// function: _ZSt8distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_int_____difference_type_std__distance_int___(int** v318, int** v319) {
bb320: ;
  int** __first321;
  int** __last322;
  long __retval323;
  struct std__random_access_iterator_tag agg_tmp0324;
  __first321 = v318;
  __last322 = v319;
  int** t325 = __first321;
  int** t326 = __last322;
  struct std__random_access_iterator_tag r327 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(&__first321);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp0324 = r327;
  struct std__random_access_iterator_tag t328 = agg_tmp0324;
  long r329 = std__iterator_traits_int_____difference_type_std____distance_int___(t325, t326, t328);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval323 = r329;
  long t330 = __retval323;
  return t330;
}

// function: _ZSt12__assign_oneILb0EPPiS1_EvRT0_RT1_
void void_std____assign_one_false__int____int___(int*** v331, int*** v332) {
bb333: ;
  int*** __out334;
  int*** __in335;
  __out334 = v331;
  __in335 = v332;
    int*** t336 = __in335;
    int** t337 = *t336;
    int* t338 = *t337;
    int*** t339 = __out334;
    int** t340 = *t339;
    *t340 = t338;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPPiS1_S1_ET2_T0_T1_S2_
int** int___std____copy_move_a2_false__int____int____int___(int** v341, int** v342, int** v343) {
bb344: ;
  int** __first345;
  int** __last346;
  int** __result347;
  int** __retval348;
  __first345 = v341;
  __last346 = v342;
  __result347 = v343;
      _Bool r349 = std____is_constant_evaluated();
      if (r349) {
      } else {
          long __n350;
          int** t351 = __first345;
          int** t352 = __last346;
          long r353 = std__iterator_traits_int_____difference_type_std__distance_int___(t351, t352);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n350 = r353;
            long t354 = __n350;
            long c355 = 1;
            _Bool c356 = ((t354 > c355)) ? 1 : 0;
            if (c356) {
              int** t357 = __result347;
              void* cast358 = (void*)t357;
              int** t359 = __first345;
              void* cast360 = (void*)t359;
              long t361 = __n350;
              unsigned long cast362 = (unsigned long)t361;
              unsigned long c363 = 8;
              unsigned long b364 = cast362 * c363;
              void* r365 = memmove(cast358, cast360, b364);
              long t366 = __n350;
              int** t367 = __result347;
              int** ptr368 = &(t367)[t366];
              __result347 = ptr368;
            } else {
                long t369 = __n350;
                long c370 = 1;
                _Bool c371 = ((t369 == c370)) ? 1 : 0;
                if (c371) {
                  void_std____assign_one_false__int____int___(&__result347, &__first345);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                  int** t372 = __result347;
                  int c373 = 1;
                  int** ptr374 = &(t372)[c373];
                  __result347 = ptr374;
                }
            }
          int** t375 = __result347;
          __retval348 = t375;
          int** t376 = __retval348;
          return t376;
      }
    while (1) {
      int** t378 = __first345;
      int** t379 = __last346;
      _Bool c380 = ((t378 != t379)) ? 1 : 0;
      if (!c380) break;
      void_std____assign_one_false__int____int___(&__result347, &__first345);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
    for_step377: ;
      int** t381 = __result347;
      int c382 = 1;
      int** ptr383 = &(t381)[c382];
      __result347 = ptr383;
      int** t384 = __first345;
      int c385 = 1;
      int** ptr386 = &(t384)[c385];
      __first345 = ptr386;
    }
  int** t387 = __result347;
  __retval348 = t387;
  int** t388 = __retval348;
  return t388;
}

// function: _ZSt14__copy_move_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a1_false__int____int___(int** v389, int** v390, int** v391) {
bb392: ;
  int** __first393;
  int** __last394;
  int** __result395;
  int** __retval396;
  __first393 = v389;
  __last394 = v390;
  __result395 = v391;
  int** t397 = __first393;
  int** t398 = __last394;
  int** t399 = __result395;
  int** r400 = int___std____copy_move_a2_false__int____int____int___(t397, t398, t399);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval396 = r400;
  int** t401 = __retval396;
  return t401;
}

// function: _ZSt12__niter_baseIPPiET_S2_
int** int___std____niter_base_int___(int** v402) {
bb403: ;
  int** __it404;
  int** __retval405;
  __it404 = v402;
  int** t406 = __it404;
  __retval405 = t406;
  int** t407 = __retval405;
  return t407;
}

// function: _ZSt13__copy_move_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a_false__int____int___(int** v408, int** v409, int** v410) {
bb411: ;
  int** __first412;
  int** __last413;
  int** __result414;
  int** __retval415;
  __first412 = v408;
  __last413 = v409;
  __result414 = v410;
  int** t416 = __first412;
  int** r417 = int___std____niter_base_int___(t416);
  int** t418 = __last413;
  int** r419 = int___std____niter_base_int___(t418);
  int** t420 = __result414;
  int** r421 = int___std____niter_base_int___(t420);
  int** r422 = int___std____copy_move_a1_false__int____int___(r417, r419, r421);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r423 = int___std____niter_wrap_int___(&__result414, r422);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval415 = r423;
  int** t424 = __retval415;
  return t424;
}

// function: _ZSt12__miter_baseIPPiET_S2_
int** int___std____miter_base_int___(int** v425) {
bb426: ;
  int** __it427;
  int** __retval428;
  __it427 = v425;
  int** t429 = __it427;
  __retval428 = t429;
  int** t430 = __retval428;
  return t430;
}

// function: _ZSt4copyIPPiS1_ET0_T_S3_S2_
int** int___std__copy_int____int___(int** v431, int** v432, int** v433) {
bb434: ;
  int** __first435;
  int** __last436;
  int** __result437;
  int** __retval438;
  __first435 = v431;
  __last436 = v432;
  __result437 = v433;
  int** t439 = __first435;
  int** r440 = int___std____miter_base_int___(t439);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t441 = __last436;
  int** r442 = int___std____miter_base_int___(t441);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t443 = __result437;
  int** r444 = int___std____copy_move_a_false__int____int___(r440, r442, t443);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval438 = r444;
  int** t445 = __retval438;
  return t445;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb446: ;
  _Bool __retval447;
    _Bool c448 = 0;
    __retval447 = c448;
    _Bool t449 = __retval447;
    return t449;
  abort();
}

// function: _ZSt9__advanceIPPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int____long_(int*** v450, long v451, struct std__random_access_iterator_tag v452) {
bb453: ;
  int*** __i454;
  long __n455;
  struct std__random_access_iterator_tag unnamed456;
  __i454 = v450;
  __n455 = v451;
  unnamed456 = v452;
    long t457 = __n455;
    _Bool isconst458 = 0;
    _Bool ternary459;
    if (isconst458) {
      long t460 = __n455;
      long c461 = 1;
      _Bool c462 = ((t460 == c461)) ? 1 : 0;
      ternary459 = (_Bool)c462;
    } else {
      _Bool c463 = 0;
      ternary459 = (_Bool)c463;
    }
    if (ternary459) {
      int*** t464 = __i454;
      int** t465 = *t464;
      int c466 = 1;
      int** ptr467 = &(t465)[c466];
      *t464 = ptr467;
    } else {
        long t468 = __n455;
        _Bool isconst469 = 0;
        _Bool ternary470;
        if (isconst469) {
          long t471 = __n455;
          long c472 = -1;
          _Bool c473 = ((t471 == c472)) ? 1 : 0;
          ternary470 = (_Bool)c473;
        } else {
          _Bool c474 = 0;
          ternary470 = (_Bool)c474;
        }
        if (ternary470) {
          int*** t475 = __i454;
          int** t476 = *t475;
          int c477 = -1;
          int** ptr478 = &(t476)[c477];
          *t475 = ptr478;
        } else {
          long t479 = __n455;
          int*** t480 = __i454;
          int** t481 = *t480;
          int** ptr482 = &(t481)[t479];
          *t480 = ptr482;
        }
    }
  return;
}

// function: _ZSt7advanceIPPilEvRT_T0_
void void_std__advance_int____long_(int*** v483, long v484) {
bb485: ;
  int*** __i486;
  long __n487;
  long __d488;
  struct std__random_access_iterator_tag agg_tmp0489;
  __i486 = v483;
  __n487 = v484;
  long t490 = __n487;
  __d488 = t490;
  int*** t491 = __i486;
  long t492 = __d488;
  int*** t493 = __i486;
  struct std__random_access_iterator_tag r494 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(t493);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0489 = r494;
  struct std__random_access_iterator_tag t495 = agg_tmp0489;
  void_std____advance_int____long_(t491, t492, t495);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a2_false__int____int___(int** v496, int** v497, int** v498) {
bb499: ;
  int** __first500;
  int** __last501;
  int** __result502;
  int** __retval503;
  __first500 = v496;
  __last501 = v497;
  __result502 = v498;
      _Bool r504 = std__is_constant_evaluated();
      if (r504) {
      } else {
          long __n505;
          int** t506 = __first500;
          int** t507 = __last501;
          long r508 = std__iterator_traits_int_____difference_type_std__distance_int___(t506, t507);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n505 = r508;
          long t509 = __n505;
          long u510 = -t509;
          void_std__advance_int____long_(&__result502, u510);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
            long t511 = __n505;
            long c512 = 1;
            _Bool c513 = ((t511 > c512)) ? 1 : 0;
            if (c513) {
              int** t514 = __result502;
              void* cast515 = (void*)t514;
              int** t516 = __first500;
              void* cast517 = (void*)t516;
              long t518 = __n505;
              unsigned long cast519 = (unsigned long)t518;
              unsigned long c520 = 8;
              unsigned long b521 = cast519 * c520;
              void* r522 = memmove(cast515, cast517, b521);
            } else {
                long t523 = __n505;
                long c524 = 1;
                _Bool c525 = ((t523 == c524)) ? 1 : 0;
                if (c525) {
                  void_std____assign_one_false__int____int___(&__result502, &__first500);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                }
            }
          int** t526 = __result502;
          __retval503 = t526;
          int** t527 = __retval503;
          return t527;
      }
    while (1) {
      int** t528 = __first500;
      int** t529 = __last501;
      _Bool c530 = ((t528 != t529)) ? 1 : 0;
      if (!c530) break;
        int** t531 = __last501;
        int c532 = -1;
        int** ptr533 = &(t531)[c532];
        __last501 = ptr533;
        int** t534 = __result502;
        int c535 = -1;
        int** ptr536 = &(t534)[c535];
        __result502 = ptr536;
        void_std____assign_one_false__int____int___(&__result502, &__last501);
        if (__cir_exc_active) {
          int** __cir_eh_ret = (int**)0;
          return __cir_eh_ret;
        }
    }
  int** t537 = __result502;
  __retval503 = t537;
  int** t538 = __retval503;
  return t538;
}

// function: _ZSt23__copy_move_backward_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a1_false__int____int___(int** v539, int** v540, int** v541) {
bb542: ;
  int** __first543;
  int** __last544;
  int** __result545;
  int** __retval546;
  __first543 = v539;
  __last544 = v540;
  __result545 = v541;
  int** t547 = __first543;
  int** t548 = __last544;
  int** t549 = __result545;
  int** r550 = int___std____copy_move_backward_a2_false__int____int___(t547, t548, t549);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval546 = r550;
  int** t551 = __retval546;
  return t551;
}

// function: _ZSt22__copy_move_backward_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a_false__int____int___(int** v552, int** v553, int** v554) {
bb555: ;
  int** __first556;
  int** __last557;
  int** __result558;
  int** __retval559;
  __first556 = v552;
  __last557 = v553;
  __result558 = v554;
  int** t560 = __first556;
  int** r561 = int___std____niter_base_int___(t560);
  int** t562 = __last557;
  int** r563 = int___std____niter_base_int___(t562);
  int** t564 = __result558;
  int** r565 = int___std____niter_base_int___(t564);
  int** r566 = int___std____copy_move_backward_a1_false__int____int___(r561, r563, r565);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r567 = int___std____niter_wrap_int___(&__result558, r566);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval559 = r567;
  int** t568 = __retval559;
  return t568;
}

// function: _ZSt13copy_backwardIPPiS1_ET0_T_S3_S2_
int** int___std__copy_backward_int____int___(int** v569, int** v570, int** v571) {
bb572: ;
  int** __first573;
  int** __last574;
  int** __result575;
  int** __retval576;
  __first573 = v569;
  __last574 = v570;
  __result575 = v571;
  int** t577 = __first573;
  int** r578 = int___std____miter_base_int___(t577);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t579 = __last574;
  int** r580 = int___std____miter_base_int___(t579);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t581 = __result575;
  int** r582 = int___std____copy_move_backward_a_false__int____int___(r578, r580, t581);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval576 = r582;
  int** t583 = __retval576;
  return t583;
}

// function: _ZNSt5dequeIiSaIiEE17_M_reallocate_mapEmb
void std__deque_int__std__allocator_int______M_reallocate_map(struct std__deque_int__std__allocator_int__* v584, unsigned long v585, _Bool v586) {
bb587: ;
  struct std__deque_int__std__allocator_int__* this588;
  unsigned long __nodes_to_add589;
  _Bool __add_at_front590;
  unsigned long __old_num_nodes591;
  unsigned long __new_num_nodes592;
  int** __new_nstart593;
  this588 = v584;
  __nodes_to_add589 = v585;
  __add_at_front590 = v586;
  struct std__deque_int__std__allocator_int__* t594 = this588;
  struct std___Deque_base_int__std__allocator_int__* base595 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t594 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base596 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base595->_M_impl) + 0);
  int** t597 = base596->_M_finish._M_node;
  struct std___Deque_base_int__std__allocator_int__* base598 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t594 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base599 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base598->_M_impl) + 0);
  int** t600 = base599->_M_start._M_node;
  long diff601 = t597 - t600;
  long c602 = 1;
  long b603 = diff601 + c602;
  unsigned long cast604 = (unsigned long)b603;
  __old_num_nodes591 = cast604;
  unsigned long t605 = __old_num_nodes591;
  unsigned long t606 = __nodes_to_add589;
  unsigned long b607 = t605 + t606;
  __new_num_nodes592 = b607;
    struct std___Deque_base_int__std__allocator_int__* base608 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t594 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base609 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base608->_M_impl) + 0);
    unsigned long t610 = base609->_M_map_size;
    unsigned long c611 = 2;
    unsigned long t612 = __new_num_nodes592;
    unsigned long b613 = c611 * t612;
    _Bool c614 = ((t610 > b613)) ? 1 : 0;
    if (c614) {
      struct std___Deque_base_int__std__allocator_int__* base615 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t594 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base616 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base615->_M_impl) + 0);
      int** t617 = base616->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base618 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t594 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base619 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base618->_M_impl) + 0);
      unsigned long t620 = base619->_M_map_size;
      unsigned long t621 = __new_num_nodes592;
      unsigned long b622 = t620 - t621;
      unsigned long c623 = 2;
      unsigned long b624 = b622 / c623;
      int** ptr625 = &(t617)[b624];
      _Bool t626 = __add_at_front590;
      unsigned long ternary627;
      if (t626) {
        unsigned long t628 = __nodes_to_add589;
        ternary627 = (unsigned long)t628;
      } else {
        unsigned long c629 = 0;
        ternary627 = (unsigned long)c629;
      }
      int** ptr630 = &(ptr625)[ternary627];
      __new_nstart593 = ptr630;
        int** t631 = __new_nstart593;
        struct std___Deque_base_int__std__allocator_int__* base632 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t594 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base633 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base632->_M_impl) + 0);
        int** t634 = base633->_M_start._M_node;
        _Bool c635 = ((t631 < t634)) ? 1 : 0;
        if (c635) {
          struct std___Deque_base_int__std__allocator_int__* base636 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t594 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base637 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base636->_M_impl) + 0);
          int** t638 = base637->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base639 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t594 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base640 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base639->_M_impl) + 0);
          int** t641 = base640->_M_finish._M_node;
          int c642 = 1;
          int** ptr643 = &(t641)[c642];
          int** t644 = __new_nstart593;
          int** r645 = int___std__copy_int____int___(t638, ptr643, t644);
          if (__cir_exc_active) {
            return;
          }
        } else {
          struct std___Deque_base_int__std__allocator_int__* base646 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t594 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base647 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base646->_M_impl) + 0);
          int** t648 = base647->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base649 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t594 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base650 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base649->_M_impl) + 0);
          int** t651 = base650->_M_finish._M_node;
          int c652 = 1;
          int** ptr653 = &(t651)[c652];
          int** t654 = __new_nstart593;
          unsigned long t655 = __old_num_nodes591;
          int** ptr656 = &(t654)[t655];
          int** r657 = int___std__copy_backward_int____int___(t648, ptr653, ptr656);
          if (__cir_exc_active) {
            return;
          }
        }
    } else {
      unsigned long __new_map_size658;
      unsigned long __bufsz659;
      int** __new_map660;
      struct std___Deque_base_int__std__allocator_int__* base661 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t594 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base662 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base661->_M_impl) + 0);
      unsigned long t663 = base662->_M_map_size;
      struct std___Deque_base_int__std__allocator_int__* base664 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t594 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base665 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base664->_M_impl) + 0);
      unsigned long* r666 = unsigned_long_const__std__max_unsigned_long_(&base665->_M_map_size, &__nodes_to_add589);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t667 = *r666;
      unsigned long b668 = t663 + t667;
      unsigned long c669 = 2;
      unsigned long b670 = b668 + c669;
      __new_map_size658 = b670;
      unsigned long c671 = 128;
      __bufsz659 = c671;
        unsigned long t672 = __new_map_size658;
        unsigned long r673 = std__deque_int__std__allocator_int_____max_size___const(t594);
        unsigned long t674 = __bufsz659;
        unsigned long b675 = r673 + t674;
        unsigned long c676 = 1;
        unsigned long b677 = b675 - c676;
        unsigned long t678 = __bufsz659;
        unsigned long b679 = b677 / t678;
        unsigned long c680 = 2;
        unsigned long b681 = b679 * c680;
        _Bool c682 = ((t672 > b681)) ? 1 : 0;
        if (c682) {
          __builtin_unreachable();
        }
      struct std___Deque_base_int__std__allocator_int__* base683 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t594 + 0);
      unsigned long t684 = __new_map_size658;
      int** r685 = std___Deque_base_int__std__allocator_int______M_allocate_map(base683, t684);
      if (__cir_exc_active) {
        return;
      }
      __new_map660 = r685;
      int** t686 = __new_map660;
      unsigned long t687 = __new_map_size658;
      unsigned long t688 = __new_num_nodes592;
      unsigned long b689 = t687 - t688;
      unsigned long c690 = 2;
      unsigned long b691 = b689 / c690;
      int** ptr692 = &(t686)[b691];
      _Bool t693 = __add_at_front590;
      unsigned long ternary694;
      if (t693) {
        unsigned long t695 = __nodes_to_add589;
        ternary694 = (unsigned long)t695;
      } else {
        unsigned long c696 = 0;
        ternary694 = (unsigned long)c696;
      }
      int** ptr697 = &(ptr692)[ternary694];
      __new_nstart593 = ptr697;
      struct std___Deque_base_int__std__allocator_int__* base698 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t594 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base699 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base698->_M_impl) + 0);
      int** t700 = base699->_M_start._M_node;
      struct std___Deque_base_int__std__allocator_int__* base701 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t594 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base702 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base701->_M_impl) + 0);
      int** t703 = base702->_M_finish._M_node;
      int c704 = 1;
      int** ptr705 = &(t703)[c704];
      int** t706 = __new_nstart593;
      int** r707 = int___std__copy_int____int___(t700, ptr705, t706);
      if (__cir_exc_active) {
        return;
      }
      struct std___Deque_base_int__std__allocator_int__* base708 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t594 + 0);
      struct std___Deque_base_int__std__allocator_int__* base709 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t594 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base710 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base709->_M_impl) + 0);
      int** t711 = base710->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base712 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t594 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base713 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base712->_M_impl) + 0);
      unsigned long t714 = base713->_M_map_size;
      std___Deque_base_int__std__allocator_int______M_deallocate_map(base708, t711, t714);
      int** t715 = __new_map660;
      struct std___Deque_base_int__std__allocator_int__* base716 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t594 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base717 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base716->_M_impl) + 0);
      base717->_M_map = t715;
      unsigned long t718 = __new_map_size658;
      struct std___Deque_base_int__std__allocator_int__* base719 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t594 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base720 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base719->_M_impl) + 0);
      base720->_M_map_size = t718;
    }
  struct std___Deque_base_int__std__allocator_int__* base721 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t594 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base722 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base721->_M_impl) + 0);
  int** t723 = __new_nstart593;
  std___Deque_iterator_int__int___int_____M_set_node(&base722->_M_start, t723);
  struct std___Deque_base_int__std__allocator_int__* base724 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t594 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base725 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base724->_M_impl) + 0);
  int** t726 = __new_nstart593;
  unsigned long t727 = __old_num_nodes591;
  int** ptr728 = &(t726)[t727];
  int c729 = -1;
  int** ptr730 = &(ptr728)[c729];
  std___Deque_iterator_int__int___int_____M_set_node(&base725->_M_finish, ptr730);
  return;
}

// function: _ZNSt5dequeIiSaIiEE22_M_reserve_map_at_backEm
void std__deque_int__std__allocator_int______M_reserve_map_at_back(struct std__deque_int__std__allocator_int__* v731, unsigned long v732) {
bb733: ;
  struct std__deque_int__std__allocator_int__* this734;
  unsigned long __nodes_to_add735;
  this734 = v731;
  __nodes_to_add735 = v732;
  struct std__deque_int__std__allocator_int__* t736 = this734;
    unsigned long t737 = __nodes_to_add735;
    unsigned long c738 = 1;
    unsigned long b739 = t737 + c738;
    struct std___Deque_base_int__std__allocator_int__* base740 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t736 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base741 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base740->_M_impl) + 0);
    unsigned long t742 = base741->_M_map_size;
    struct std___Deque_base_int__std__allocator_int__* base743 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t736 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base744 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base743->_M_impl) + 0);
    int** t745 = base744->_M_finish._M_node;
    struct std___Deque_base_int__std__allocator_int__* base746 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t736 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base747 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base746->_M_impl) + 0);
    int** t748 = base747->_M_map;
    long diff749 = t745 - t748;
    unsigned long cast750 = (unsigned long)diff749;
    unsigned long b751 = t742 - cast750;
    _Bool c752 = ((b739 > b751)) ? 1 : 0;
    if (c752) {
      unsigned long t753 = __nodes_to_add735;
      _Bool c754 = 0;
      std__deque_int__std__allocator_int______M_reallocate_map(t736, t753, c754);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE16_M_push_back_auxIJRKiEEEvDpOT_
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(struct std__deque_int__std__allocator_int__* v755, int* v756) {
bb757: ;
  struct std__deque_int__std__allocator_int__* this758;
  int* __args759;
  this758 = v755;
  __args759 = v756;
  struct std__deque_int__std__allocator_int__* t760 = this758;
    unsigned long r761 = std__deque_int__std__allocator_int_____size___const(t760);
    unsigned long r762 = std__deque_int__std__allocator_int_____max_size___const(t760);
    _Bool c763 = ((r761 == r762)) ? 1 : 0;
    if (c763) {
      char* cast764 = (char*)&(_str_9);
      std____throw_length_error(cast764);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long c765 = 1;
  std__deque_int__std__allocator_int______M_reserve_map_at_back(t760, c765);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base766 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t760 + 0);
  int* r767 = std___Deque_base_int__std__allocator_int______M_allocate_node(base766);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base768 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t760 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base769 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base768->_M_impl) + 0);
  int** t770 = base769->_M_finish._M_node;
  int c771 = 1;
  int** ptr772 = &(t770)[c771];
  *ptr772 = r767;
      struct std___Deque_base_int__std__allocator_int__* base774 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t760 + 0);
      struct std__allocator_int_* base775 = (struct std__allocator_int_*)((char *)&(base774->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base776 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t760 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base777 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base776->_M_impl) + 0);
      int* t778 = base777->_M_finish._M_cur;
      int* t779 = __args759;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base775, t778, t779);
      struct std___Deque_base_int__std__allocator_int__* base780 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t760 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base781 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base780->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base782 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t760 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base783 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base782->_M_impl) + 0);
      int** t784 = base783->_M_finish._M_node;
      int c785 = 1;
      int** ptr786 = &(t784)[c785];
      std___Deque_iterator_int__int___int_____M_set_node(&base781->_M_finish, ptr786);
      struct std___Deque_base_int__std__allocator_int__* base787 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t760 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base788 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base787->_M_impl) + 0);
      int* t789 = base788->_M_finish._M_first;
      struct std___Deque_base_int__std__allocator_int__* base790 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t760 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base791 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base790->_M_impl) + 0);
      base791->_M_finish._M_cur = t789;
    cir_try_dispatch773: ;
    if (__cir_exc_active) {
    {
      int ca_tok792 = 0;
      void* ca_exn793 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base794 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t760 + 0);
        struct std___Deque_base_int__std__allocator_int__* base795 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t760 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base796 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base795->_M_impl) + 0);
        int** t797 = base796->_M_finish._M_node;
        int c798 = 1;
        int** ptr799 = &(t797)[c798];
        int* t800 = *ptr799;
        std___Deque_base_int__std__allocator_int______M_deallocate_node(base794, t800);
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE9push_backERKi
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* v801, int* v802) {
bb803: ;
  struct std__deque_int__std__allocator_int__* this804;
  int* __x805;
  this804 = v801;
  __x805 = v802;
  struct std__deque_int__std__allocator_int__* t806 = this804;
    struct std___Deque_base_int__std__allocator_int__* base807 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t806 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base808 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base807->_M_impl) + 0);
    int* t809 = base808->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base810 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t806 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base811 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base810->_M_impl) + 0);
    int* t812 = base811->_M_finish._M_last;
    int c813 = -1;
    int* ptr814 = &(t812)[c813];
    _Bool c815 = ((t809 != ptr814)) ? 1 : 0;
    if (c815) {
      struct std___Deque_base_int__std__allocator_int__* base816 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t806 + 0);
      struct std__allocator_int_* base817 = (struct std__allocator_int_*)((char *)&(base816->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base818 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t806 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base819 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base818->_M_impl) + 0);
      int* t820 = base819->_M_finish._M_cur;
      int* t821 = __x805;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base817, t820, t821);
      struct std___Deque_base_int__std__allocator_int__* base822 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t806 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base823 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base822->_M_impl) + 0);
      int* t824 = base823->_M_finish._M_cur;
      int c825 = 1;
      int* ptr826 = &(t824)[c825];
      base823->_M_finish._M_cur = ptr826;
    } else {
      int* t827 = __x805;
      void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(t806, t827);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRKiPS0_E14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int_const___int_const_____S_buffer_size() {
bb828: ;
  unsigned long __retval829;
  unsigned long c830 = 4;
  unsigned long r831 = std____deque_buf_size(c830);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval829 = r831;
  unsigned long t832 = __retval829;
  return t832;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRKiPS0_ES5_
long std__operator_(struct std___Deque_iterator_int_int___int___* v833, struct std___Deque_iterator_int_int___int___* v834) {
bb835: ;
  struct std___Deque_iterator_int_int___int___* __x836;
  struct std___Deque_iterator_int_int___int___* __y837;
  long __retval838;
  __x836 = v833;
  __y837 = v834;
  unsigned long r839 = std___Deque_iterator_int__int_const___int_const_____S_buffer_size();
  long cast840 = (long)r839;
  struct std___Deque_iterator_int_int___int___* t841 = __x836;
  int** t842 = t841->_M_node;
  struct std___Deque_iterator_int_int___int___* t843 = __y837;
  int** t844 = t843->_M_node;
  long diff845 = t842 - t844;
  struct std___Deque_iterator_int_int___int___* t846 = __x836;
  int** t847 = t846->_M_node;
  _Bool cast848 = (_Bool)t847;
  long cast849 = (long)cast848;
  long b850 = diff845 - cast849;
  long b851 = cast840 * b850;
  struct std___Deque_iterator_int_int___int___* t852 = __x836;
  int* t853 = t852->_M_cur;
  struct std___Deque_iterator_int_int___int___* t854 = __x836;
  int* t855 = t854->_M_first;
  long diff856 = t853 - t855;
  long b857 = b851 + diff856;
  struct std___Deque_iterator_int_int___int___* t858 = __y837;
  int* t859 = t858->_M_last;
  struct std___Deque_iterator_int_int___int___* t860 = __y837;
  int* t861 = t860->_M_cur;
  long diff862 = t859 - t861;
  long b863 = b857 + diff862;
  __retval838 = b863;
  long t864 = __retval838;
  return t864;
}

// function: _ZNKSt5dequeIiSaIiEE6cbeginEv
struct std___Deque_iterator_int_int___int___ std__deque_int__std__allocator_int_____cbegin___const(struct std__deque_int__std__allocator_int__* v865) {
bb866: ;
  struct std__deque_int__std__allocator_int__* this867;
  struct std___Deque_iterator_int_int___int___ __retval868;
  this867 = v865;
  struct std__deque_int__std__allocator_int__* t869 = this867;
  struct std___Deque_base_int__std__allocator_int__* base870 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t869 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base871 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base870->_M_impl) + 0);
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator_std___Deque_iterator_int__int___int____void_(&__retval868, &base871->_M_start);
  struct std___Deque_iterator_int_int___int___ t872 = __retval868;
  return t872;
}

// function: _ZNSt5dequeIiSaIiEE23_M_reserve_map_at_frontEm
void std__deque_int__std__allocator_int______M_reserve_map_at_front(struct std__deque_int__std__allocator_int__* v873, unsigned long v874) {
bb875: ;
  struct std__deque_int__std__allocator_int__* this876;
  unsigned long __nodes_to_add877;
  this876 = v873;
  __nodes_to_add877 = v874;
  struct std__deque_int__std__allocator_int__* t878 = this876;
    unsigned long t879 = __nodes_to_add877;
    struct std___Deque_base_int__std__allocator_int__* base880 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t878 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base881 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base880->_M_impl) + 0);
    int** t882 = base881->_M_start._M_node;
    struct std___Deque_base_int__std__allocator_int__* base883 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t878 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base884 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base883->_M_impl) + 0);
    int** t885 = base884->_M_map;
    long diff886 = t882 - t885;
    unsigned long cast887 = (unsigned long)diff886;
    _Bool c888 = ((t879 > cast887)) ? 1 : 0;
    if (c888) {
      unsigned long t889 = __nodes_to_add877;
      _Bool c890 = 1;
      std__deque_int__std__allocator_int______M_reallocate_map(t878, t889, c890);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE24_M_new_elements_at_frontEm
void std__deque_int__std__allocator_int______M_new_elements_at_front(struct std__deque_int__std__allocator_int__* v891, unsigned long v892) {
bb893: ;
  struct std__deque_int__std__allocator_int__* this894;
  unsigned long __new_elems895;
  unsigned long __new_nodes896;
  unsigned long __i897;
  this894 = v891;
  __new_elems895 = v892;
  struct std__deque_int__std__allocator_int__* t898 = this894;
    unsigned long r899 = std__deque_int__std__allocator_int_____max_size___const(t898);
    unsigned long r900 = std__deque_int__std__allocator_int_____size___const(t898);
    unsigned long b901 = r899 - r900;
    unsigned long t902 = __new_elems895;
    _Bool c903 = ((b901 < t902)) ? 1 : 0;
    if (c903) {
      char* cast904 = (char*)&(_str_10);
      std____throw_length_error(cast904);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long t905 = __new_elems895;
  unsigned long r906 = std__deque_int__std__allocator_int______S_buffer_size();
  unsigned long b907 = t905 + r906;
  unsigned long c908 = 1;
  unsigned long b909 = b907 - c908;
  unsigned long r910 = std__deque_int__std__allocator_int______S_buffer_size();
  unsigned long b911 = b909 / r910;
  __new_nodes896 = b911;
  unsigned long t912 = __new_nodes896;
  std__deque_int__std__allocator_int______M_reserve_map_at_front(t898, t912);
  if (__cir_exc_active) {
    return;
  }
        unsigned long c914 = 1;
        __i897 = c914;
        while (1) {
          unsigned long t916 = __i897;
          unsigned long t917 = __new_nodes896;
          _Bool c918 = ((t916 <= t917)) ? 1 : 0;
          if (!c918) break;
          struct std___Deque_base_int__std__allocator_int__* base919 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t898 + 0);
          int* r920 = std___Deque_base_int__std__allocator_int______M_allocate_node(base919);
          if (__cir_exc_active) {
            goto cir_try_dispatch913;
          }
          struct std___Deque_base_int__std__allocator_int__* base921 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t898 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base922 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base921->_M_impl) + 0);
          int** t923 = base922->_M_start._M_node;
          unsigned long t924 = __i897;
          long cast925 = (long)t924;
          long u926 = -cast925;
          int** ptr927 = &(t923)[u926];
          *ptr927 = r920;
        for_step915: ;
          unsigned long t928 = __i897;
          unsigned long u929 = t928 + 1;
          __i897 = u929;
        }
    cir_try_dispatch913: ;
    if (__cir_exc_active) {
    {
      int ca_tok930 = 0;
      void* ca_exn931 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
          unsigned long __j932;
          unsigned long c933 = 1;
          __j932 = c933;
          while (1) {
            unsigned long t935 = __j932;
            unsigned long t936 = __i897;
            _Bool c937 = ((t935 < t936)) ? 1 : 0;
            if (!c937) break;
            struct std___Deque_base_int__std__allocator_int__* base938 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t898 + 0);
            struct std___Deque_base_int__std__allocator_int__* base939 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t898 + 0);
            struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base940 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base939->_M_impl) + 0);
            int** t941 = base940->_M_start._M_node;
            unsigned long t942 = __j932;
            long cast943 = (long)t942;
            long u944 = -cast943;
            int** ptr945 = &(t941)[u944];
            int* t946 = *ptr945;
            std___Deque_base_int__std__allocator_int______M_deallocate_node(base938, t946);
          for_step934: ;
            unsigned long t947 = __j932;
            unsigned long u948 = t947 + 1;
            __j932 = u948;
          }
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEpLEl
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___2(struct std___Deque_iterator_int__int____int___* v949, long v950) {
bb951: ;
  struct std___Deque_iterator_int__int____int___* this952;
  long __n953;
  struct std___Deque_iterator_int__int____int___* __retval954;
  long __offset955;
  this952 = v949;
  __n953 = v950;
  struct std___Deque_iterator_int__int____int___* t956 = this952;
  long t957 = __n953;
  int* t958 = t956->_M_cur;
  int* t959 = t956->_M_first;
  long diff960 = t958 - t959;
  long b961 = t957 + diff960;
  __offset955 = b961;
    long t962 = __offset955;
    long c963 = 0;
    _Bool c964 = ((t962 >= c963)) ? 1 : 0;
    _Bool ternary965;
    if (c964) {
      long t966 = __offset955;
      unsigned long r967 = std___Deque_iterator_int__int___int_____S_buffer_size();
      long cast968 = (long)r967;
      _Bool c969 = ((t966 < cast968)) ? 1 : 0;
      ternary965 = (_Bool)c969;
    } else {
      _Bool c970 = 0;
      ternary965 = (_Bool)c970;
    }
    if (ternary965) {
      long t971 = __n953;
      int* t972 = t956->_M_cur;
      int* ptr973 = &(t972)[t971];
      t956->_M_cur = ptr973;
    } else {
      long __node_offset974;
      long t975 = __offset955;
      long c976 = 0;
      _Bool c977 = ((t975 > c976)) ? 1 : 0;
      long ternary978;
      if (c977) {
        long t979 = __offset955;
        unsigned long r980 = std___Deque_iterator_int__int___int_____S_buffer_size();
        long cast981 = (long)r980;
        long b982 = t979 / cast981;
        ternary978 = (long)b982;
      } else {
        long t983 = __offset955;
        long u984 = -t983;
        long c985 = 1;
        long b986 = u984 - c985;
        unsigned long cast987 = (unsigned long)b986;
        unsigned long r988 = std___Deque_iterator_int__int___int_____S_buffer_size();
        unsigned long b989 = cast987 / r988;
        long cast990 = (long)b989;
        long u991 = -cast990;
        long c992 = 1;
        long b993 = u991 - c992;
        ternary978 = (long)b993;
      }
      __node_offset974 = ternary978;
      int** t994 = t956->_M_node;
      long t995 = __node_offset974;
      int** ptr996 = &(t994)[t995];
      std___Deque_iterator_int__int___int_____M_set_node(t956, ptr996);
      int* t997 = t956->_M_first;
      long t998 = __offset955;
      long t999 = __node_offset974;
      unsigned long r1000 = std___Deque_iterator_int__int___int_____S_buffer_size();
      long cast1001 = (long)r1000;
      long b1002 = t999 * cast1001;
      long b1003 = t998 - b1002;
      int* ptr1004 = &(t997)[b1003];
      t956->_M_cur = ptr1004;
    }
  __retval954 = t956;
  struct std___Deque_iterator_int__int____int___* t1005 = __retval954;
  return t1005;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEmIEl
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* v1006, long v1007) {
bb1008: ;
  struct std___Deque_iterator_int__int____int___* this1009;
  long __n1010;
  struct std___Deque_iterator_int__int____int___* __retval1011;
  this1009 = v1006;
  __n1010 = v1007;
  struct std___Deque_iterator_int__int____int___* t1012 = this1009;
  long t1013 = __n1010;
  long u1014 = -t1013;
  struct std___Deque_iterator_int__int____int___* r1015 = std___Deque_iterator_int__int___int____operator___2(t1012, u1014);
  __retval1011 = r1015;
  struct std___Deque_iterator_int__int____int___* t1016 = __retval1011;
  return t1016;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiEl
struct std___Deque_iterator_int__int____int___ std__operator__3(struct std___Deque_iterator_int__int____int___* v1017, long v1018) {
bb1019: ;
  struct std___Deque_iterator_int__int____int___* __x1020;
  long __n1021;
  struct std___Deque_iterator_int__int____int___ __retval1022;
  __x1020 = v1017;
  __n1021 = v1018;
  struct std___Deque_iterator_int__int____int___* t1023 = __x1020;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1022, t1023);
  long t1024 = __n1021;
  struct std___Deque_iterator_int__int____int___* r1025 = std___Deque_iterator_int__int___int____operator__(&__retval1022, t1024);
  struct std___Deque_iterator_int__int____int___ t1026 = __retval1022;
  return t1026;
}

// function: _ZNSt5dequeIiSaIiEE28_M_reserve_elements_at_frontEm
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int______M_reserve_elements_at_front(struct std__deque_int__std__allocator_int__* v1027, unsigned long v1028) {
bb1029: ;
  struct std__deque_int__std__allocator_int__* this1030;
  unsigned long __n1031;
  struct std___Deque_iterator_int__int____int___ __retval1032;
  unsigned long __vacancies1033;
  this1030 = v1027;
  __n1031 = v1028;
  struct std__deque_int__std__allocator_int__* t1034 = this1030;
  struct std___Deque_base_int__std__allocator_int__* base1035 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1034 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1036 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1035->_M_impl) + 0);
  int* t1037 = base1036->_M_start._M_cur;
  struct std___Deque_base_int__std__allocator_int__* base1038 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1034 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1039 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1038->_M_impl) + 0);
  int* t1040 = base1039->_M_start._M_first;
  long diff1041 = t1037 - t1040;
  unsigned long cast1042 = (unsigned long)diff1041;
  __vacancies1033 = cast1042;
    unsigned long t1043 = __n1031;
    unsigned long t1044 = __vacancies1033;
    _Bool c1045 = ((t1043 > t1044)) ? 1 : 0;
    if (c1045) {
      unsigned long t1046 = __n1031;
      unsigned long t1047 = __vacancies1033;
      unsigned long b1048 = t1046 - t1047;
      std__deque_int__std__allocator_int______M_new_elements_at_front(t1034, b1048);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
    }
  struct std___Deque_base_int__std__allocator_int__* base1049 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1034 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1050 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1049->_M_impl) + 0);
  unsigned long t1051 = __n1031;
  long cast1052 = (long)t1051;
  struct std___Deque_iterator_int__int____int___ r1053 = std__operator__3(&base1050->_M_start, cast1052);
  __retval1032 = r1053;
  struct std___Deque_iterator_int__int____int___ t1054 = __retval1032;
  return t1054;
}

// function: _ZNSt19_UninitDestroyGuardISt15_Deque_iteratorIiRiPiEvEC2ERS3_
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void____UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* v1055, struct std___Deque_iterator_int__int____int___* v1056) {
bb1057: ;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* this1058;
  struct std___Deque_iterator_int__int____int___* __first1059;
  this1058 = v1055;
  __first1059 = v1056;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* t1060 = this1058;
  struct std___Deque_iterator_int__int____int___* t1061 = __first1059;
  std___Deque_iterator_int__int___int_____Deque_iterator(&t1060->_M_first, t1061);
  struct std___Deque_iterator_int__int____int___* t1062 = __first1059;
  t1060->_M_cur = t1062;
  return;
}

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* v1063, struct std___Deque_iterator_int__int____int___* v1064) {
bb1065: ;
  struct std___Deque_iterator_int__int____int___* __x1066;
  struct std___Deque_iterator_int__int____int___* __y1067;
  _Bool __retval1068;
  __x1066 = v1063;
  __y1067 = v1064;
  struct std___Deque_iterator_int__int____int___* t1069 = __x1066;
  int* t1070 = t1069->_M_cur;
  struct std___Deque_iterator_int__int____int___* t1071 = __y1067;
  int* t1072 = t1071->_M_cur;
  _Bool c1073 = ((t1070 == t1072)) ? 1 : 0;
  __retval1068 = c1073;
  _Bool t1074 = __retval1068;
  return t1074;
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v1075, int* v1076) {
bb1077: ;
  int* __p1078;
  int* __args1079;
  __p1078 = v1075;
  __args1079 = v1076;
    _Bool r1080 = std____is_constant_evaluated();
    if (r1080) {
      int* t1081 = __p1078;
      int* t1082 = __args1079;
      int* r1083 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1081, t1082);
      return;
    }
  int* t1084 = __p1078;
  void* cast1085 = (void*)t1084;
  int* cast1086 = (int*)cast1085;
  int* t1087 = __args1079;
  int t1088 = *t1087;
  *cast1086 = t1088;
  return;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v1089) {
bb1090: ;
  struct std___Deque_iterator_int__int____int___* this1091;
  int* __retval1092;
  this1091 = v1089;
  struct std___Deque_iterator_int__int____int___* t1093 = this1091;
  int* t1094 = t1093->_M_cur;
  __retval1092 = t1094;
  int* t1095 = __retval1092;
  return t1095;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEppEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___3(struct std___Deque_iterator_int__int____int___* v1096) {
bb1097: ;
  struct std___Deque_iterator_int__int____int___* this1098;
  struct std___Deque_iterator_int__int____int___* __retval1099;
  this1098 = v1096;
  struct std___Deque_iterator_int__int____int___* t1100 = this1098;
  int* t1101 = t1100->_M_cur;
  int c1102 = 1;
  int* ptr1103 = &(t1101)[c1102];
  t1100->_M_cur = ptr1103;
    int* t1104 = t1100->_M_cur;
    int* t1105 = t1100->_M_last;
    _Bool c1106 = ((t1104 == t1105)) ? 1 : 0;
    if (c1106) {
      int** t1107 = t1100->_M_node;
      int c1108 = 1;
      int** ptr1109 = &(t1107)[c1108];
      std___Deque_iterator_int__int___int_____M_set_node(t1100, ptr1109);
      int* t1110 = t1100->_M_first;
      t1100->_M_cur = t1110;
    }
  __retval1099 = t1100;
  struct std___Deque_iterator_int__int____int___* t1111 = __retval1099;
  return t1111;
}

// function: _ZNSt19_UninitDestroyGuardISt15_Deque_iteratorIiRiPiEvE7releaseEv
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void___release(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* v1112) {
bb1113: ;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* this1114;
  this1114 = v1112;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* t1115 = this1114;
  struct std___Deque_iterator_int__int____int___* c1116 = ((void*)0);
  t1115->_M_cur = c1116;
  return;
}

// function: _ZNSt19_UninitDestroyGuardISt15_Deque_iteratorIiRiPiEvED2Ev
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* v1117) {
bb1118: ;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* this1119;
  this1119 = v1117;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* t1120 = this1119;
    struct std___Deque_iterator_int__int____int___* t1121 = t1120->_M_cur;
    struct std___Deque_iterator_int__int____int___* c1122 = ((void*)0);
    _Bool c1123 = ((t1121 != c1122)) ? 1 : 0;
    if (c1123) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01124;
      struct std___Deque_iterator_int__int____int___ agg_tmp11125;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01124, &t1120->_M_first);
      struct std___Deque_iterator_int__int____int___* t1126 = t1120->_M_cur;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11125, t1126);
      struct std___Deque_iterator_int__int____int___ t1127 = agg_tmp01124;
      struct std___Deque_iterator_int__int____int___ t1128 = agg_tmp11125;
      void_std___Destroy_std___Deque_iterator_int__int___int____(t1127, t1128);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt16__do_uninit_fillISt15_Deque_iteratorIiRiPiEiEvT_S4_RKT0_
void void_std____do_uninit_fill_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ v1129, struct std___Deque_iterator_int__int____int___ v1130, int* v1131) {
bb1132: ;
  struct std___Deque_iterator_int__int____int___ __first1133;
  struct std___Deque_iterator_int__int____int___ __last1134;
  int* __x1135;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_ __guard1136;
  __first1133 = v1129;
  __last1134 = v1130;
  __x1135 = v1131;
  std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void____UninitDestroyGuard(&__guard1136, &__first1133);
  if (__cir_exc_active) {
    return;
  }
      while (1) {
        _Bool r1138 = std__operator__(&__first1133, &__last1134);
        _Bool u1139 = !r1138;
        if (!u1139) break;
        int* r1140 = std___Deque_iterator_int__int___int____operator____const(&__first1133);
        int* t1141 = __x1135;
        void_std___Construct_int__int_const__(r1140, t1141);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard1136);
          }
          return;
        }
      for_step1137: ;
        struct std___Deque_iterator_int__int____int___* r1142 = std___Deque_iterator_int__int___int____operator___3(&__first1133);
      }
    std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void___release(&__guard1136);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard1136);
      }
      return;
    }
  {
    std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard1136);
  }
  return;
}

// function: _ZSt18uninitialized_fillISt15_Deque_iteratorIiRiPiEiEvT_S4_RKT0_
void void_std__uninitialized_fill_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ v1143, struct std___Deque_iterator_int__int____int___ v1144, int* v1145) {
bb1146: ;
  struct std___Deque_iterator_int__int____int___ __first1147;
  struct std___Deque_iterator_int__int____int___ __last1148;
  int* __x1149;
  struct std___Deque_iterator_int__int____int___ agg_tmp01150;
  struct std___Deque_iterator_int__int____int___ agg_tmp11151;
  __first1147 = v1143;
  __last1148 = v1144;
  __x1149 = v1145;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01150, &__first1147);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11151, &__last1148);
  int* t1152 = __x1149;
  struct std___Deque_iterator_int__int____int___ t1153 = agg_tmp01150;
  struct std___Deque_iterator_int__int____int___ t1154 = agg_tmp11151;
  void_std____do_uninit_fill_std___Deque_iterator_int__int___int____int_(t1153, t1154, t1152);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt22__uninitialized_fill_aISt15_Deque_iteratorIiRiPiEiiEvT_S4_RKT0_RSaIT1_E
void void_std____uninitialized_fill_a_std___Deque_iterator_int__int___int____int__int_(struct std___Deque_iterator_int__int____int___ v1155, struct std___Deque_iterator_int__int____int___ v1156, int* v1157, struct std__allocator_int_* v1158) {
bb1159: ;
  struct std___Deque_iterator_int__int____int___ __first1160;
  struct std___Deque_iterator_int__int____int___ __last1161;
  int* __x1162;
  struct std__allocator_int_* unnamed1163;
  struct std___Deque_iterator_int__int____int___ agg_tmp21164;
  struct std___Deque_iterator_int__int____int___ agg_tmp31165;
  __first1160 = v1155;
  __last1161 = v1156;
  __x1162 = v1157;
  unnamed1163 = v1158;
    _Bool r1166 = std__is_constant_evaluated();
    if (r1166) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01167;
      struct std___Deque_iterator_int__int____int___ agg_tmp11168;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01167, &__first1160);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11168, &__last1161);
      int* t1169 = __x1162;
      struct std___Deque_iterator_int__int____int___ t1170 = agg_tmp01167;
      struct std___Deque_iterator_int__int____int___ t1171 = agg_tmp11168;
      void_std____do_uninit_fill_std___Deque_iterator_int__int___int____int_(t1170, t1171, t1169);
      if (__cir_exc_active) {
        return;
      }
      return;
    }
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21164, &__first1160);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp31165, &__last1161);
  int* t1172 = __x1162;
  struct std___Deque_iterator_int__int____int___ t1173 = agg_tmp21164;
  struct std___Deque_iterator_int__int____int___ t1174 = agg_tmp31165;
  void_std__uninitialized_fill_std___Deque_iterator_int__int___int____int_(t1173, t1174, t1172);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEaSERKS2_
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator_(struct std___Deque_iterator_int__int____int___* v1175, struct std___Deque_iterator_int__int____int___* v1176) {
bb1177: ;
  struct std___Deque_iterator_int__int____int___* this1178;
  struct std___Deque_iterator_int__int____int___* unnamed1179;
  struct std___Deque_iterator_int__int____int___* __retval1180;
  this1178 = v1175;
  unnamed1179 = v1176;
  struct std___Deque_iterator_int__int____int___* t1181 = this1178;
  struct std___Deque_iterator_int__int____int___* t1182 = unnamed1179;
  int* t1183 = t1182->_M_cur;
  t1181->_M_cur = t1183;
  struct std___Deque_iterator_int__int____int___* t1184 = unnamed1179;
  int* t1185 = t1184->_M_first;
  t1181->_M_first = t1185;
  struct std___Deque_iterator_int__int____int___* t1186 = unnamed1179;
  int* t1187 = t1186->_M_last;
  t1181->_M_last = t1187;
  struct std___Deque_iterator_int__int____int___* t1188 = unnamed1179;
  int** t1189 = t1188->_M_node;
  t1181->_M_node = t1189;
  __retval1180 = t1181;
  struct std___Deque_iterator_int__int____int___* t1190 = __retval1180;
  return t1190;
}

// function: _ZNSt5dequeIiSaIiEE23_M_new_elements_at_backEm
void std__deque_int__std__allocator_int______M_new_elements_at_back(struct std__deque_int__std__allocator_int__* v1191, unsigned long v1192) {
bb1193: ;
  struct std__deque_int__std__allocator_int__* this1194;
  unsigned long __new_elems1195;
  unsigned long __new_nodes1196;
  unsigned long __i1197;
  this1194 = v1191;
  __new_elems1195 = v1192;
  struct std__deque_int__std__allocator_int__* t1198 = this1194;
    unsigned long r1199 = std__deque_int__std__allocator_int_____max_size___const(t1198);
    unsigned long r1200 = std__deque_int__std__allocator_int_____size___const(t1198);
    unsigned long b1201 = r1199 - r1200;
    unsigned long t1202 = __new_elems1195;
    _Bool c1203 = ((b1201 < t1202)) ? 1 : 0;
    if (c1203) {
      char* cast1204 = (char*)&(_str_11);
      std____throw_length_error(cast1204);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long t1205 = __new_elems1195;
  unsigned long r1206 = std__deque_int__std__allocator_int______S_buffer_size();
  unsigned long b1207 = t1205 + r1206;
  unsigned long c1208 = 1;
  unsigned long b1209 = b1207 - c1208;
  unsigned long r1210 = std__deque_int__std__allocator_int______S_buffer_size();
  unsigned long b1211 = b1209 / r1210;
  __new_nodes1196 = b1211;
  unsigned long t1212 = __new_nodes1196;
  std__deque_int__std__allocator_int______M_reserve_map_at_back(t1198, t1212);
  if (__cir_exc_active) {
    return;
  }
        unsigned long c1214 = 1;
        __i1197 = c1214;
        while (1) {
          unsigned long t1216 = __i1197;
          unsigned long t1217 = __new_nodes1196;
          _Bool c1218 = ((t1216 <= t1217)) ? 1 : 0;
          if (!c1218) break;
          struct std___Deque_base_int__std__allocator_int__* base1219 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1198 + 0);
          int* r1220 = std___Deque_base_int__std__allocator_int______M_allocate_node(base1219);
          if (__cir_exc_active) {
            goto cir_try_dispatch1213;
          }
          struct std___Deque_base_int__std__allocator_int__* base1221 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1198 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1222 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1221->_M_impl) + 0);
          int** t1223 = base1222->_M_finish._M_node;
          unsigned long t1224 = __i1197;
          int** ptr1225 = &(t1223)[t1224];
          *ptr1225 = r1220;
        for_step1215: ;
          unsigned long t1226 = __i1197;
          unsigned long u1227 = t1226 + 1;
          __i1197 = u1227;
        }
    cir_try_dispatch1213: ;
    if (__cir_exc_active) {
    {
      int ca_tok1228 = 0;
      void* ca_exn1229 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
          unsigned long __j1230;
          unsigned long c1231 = 1;
          __j1230 = c1231;
          while (1) {
            unsigned long t1233 = __j1230;
            unsigned long t1234 = __i1197;
            _Bool c1235 = ((t1233 < t1234)) ? 1 : 0;
            if (!c1235) break;
            struct std___Deque_base_int__std__allocator_int__* base1236 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1198 + 0);
            struct std___Deque_base_int__std__allocator_int__* base1237 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1198 + 0);
            struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1238 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1237->_M_impl) + 0);
            int** t1239 = base1238->_M_finish._M_node;
            unsigned long t1240 = __j1230;
            int** ptr1241 = &(t1239)[t1240];
            int* t1242 = *ptr1241;
            std___Deque_base_int__std__allocator_int______M_deallocate_node(base1236, t1242);
          for_step1232: ;
            unsigned long t1243 = __j1230;
            unsigned long u1244 = t1243 + 1;
            __j1230 = u1244;
          }
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE27_M_reserve_elements_at_backEm
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int______M_reserve_elements_at_back(struct std__deque_int__std__allocator_int__* v1245, unsigned long v1246) {
bb1247: ;
  struct std__deque_int__std__allocator_int__* this1248;
  unsigned long __n1249;
  struct std___Deque_iterator_int__int____int___ __retval1250;
  unsigned long __vacancies1251;
  this1248 = v1245;
  __n1249 = v1246;
  struct std__deque_int__std__allocator_int__* t1252 = this1248;
  struct std___Deque_base_int__std__allocator_int__* base1253 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1252 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1254 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1253->_M_impl) + 0);
  int* t1255 = base1254->_M_finish._M_last;
  struct std___Deque_base_int__std__allocator_int__* base1256 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1252 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1257 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1256->_M_impl) + 0);
  int* t1258 = base1257->_M_finish._M_cur;
  long diff1259 = t1255 - t1258;
  long c1260 = 1;
  long b1261 = diff1259 - c1260;
  unsigned long cast1262 = (unsigned long)b1261;
  __vacancies1251 = cast1262;
    unsigned long t1263 = __n1249;
    unsigned long t1264 = __vacancies1251;
    _Bool c1265 = ((t1263 > t1264)) ? 1 : 0;
    if (c1265) {
      unsigned long t1266 = __n1249;
      unsigned long t1267 = __vacancies1251;
      unsigned long b1268 = t1266 - t1267;
      std__deque_int__std__allocator_int______M_new_elements_at_back(t1252, b1268);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
    }
  struct std___Deque_base_int__std__allocator_int__* base1269 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1252 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1270 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1269->_M_impl) + 0);
  unsigned long t1271 = __n1249;
  long cast1272 = (long)t1271;
  struct std___Deque_iterator_int__int____int___ r1273 = std__operator__5(&base1270->_M_finish, cast1272);
  __retval1250 = r1273;
  struct std___Deque_iterator_int__int____int___ t1274 = __retval1250;
  return t1274;
}

// function: _ZNKRSt13move_iteratorISt15_Deque_iteratorIiRiPiEE4baseEv
struct std___Deque_iterator_int__int____int___* std__move_iterator_std___Deque_iterator_int__int___int______base___const__(struct std__move_iterator_std___Deque_iterator_int__int____int____* v1275) {
bb1276: ;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* this1277;
  struct std___Deque_iterator_int__int____int___* __retval1278;
  this1277 = v1275;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1279 = this1277;
  __retval1278 = &t1279->_M_current;
  struct std___Deque_iterator_int__int____int___* t1280 = __retval1278;
  return t1280;
}

// function: _ZSteqISt15_Deque_iteratorIiRiPiEEbRKSt13move_iteratorIT_ES8_
_Bool bool_std__operator___std___Deque_iterator_int__int___int____(struct std__move_iterator_std___Deque_iterator_int__int____int____* v1281, struct std__move_iterator_std___Deque_iterator_int__int____int____* v1282) {
bb1283: ;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* __x1284;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* __y1285;
  _Bool __retval1286;
  __x1284 = v1281;
  __y1285 = v1282;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1287 = __x1284;
  struct std___Deque_iterator_int__int____int___* r1288 = std__move_iterator_std___Deque_iterator_int__int___int______base___const__(t1287);
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1289 = __y1285;
  struct std___Deque_iterator_int__int____int___* r1290 = std__move_iterator_std___Deque_iterator_int__int___int______base___const__(t1289);
  _Bool r1291 = std__operator__(r1288, r1290);
  __retval1286 = r1291;
  _Bool t1292 = __retval1286;
  return t1292;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v1293, int* v1294) {
bb1295: ;
  int* __location1296;
  int* __args1297;
  int* __retval1298;
  void* __loc1299;
  __location1296 = v1293;
  __args1297 = v1294;
  int* t1300 = __location1296;
  void* cast1301 = (void*)t1300;
  __loc1299 = cast1301;
    void* t1302 = __loc1299;
    int* cast1303 = (int*)t1302;
    int* t1304 = __args1297;
    int t1305 = *t1304;
    *cast1303 = t1305;
    __retval1298 = cast1303;
    int* t1306 = __retval1298;
    return t1306;
  abort();
}

// function: _ZSt10_ConstructIiJiEEvPT_DpOT0_
void void_std___Construct_int__int_(int* v1307, int* v1308) {
bb1309: ;
  int* __p1310;
  int* __args1311;
  __p1310 = v1307;
  __args1311 = v1308;
    _Bool r1312 = std____is_constant_evaluated();
    if (r1312) {
      int* t1313 = __p1310;
      int* t1314 = __args1311;
      int* r1315 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t1313, t1314);
      return;
    }
  int* t1316 = __p1310;
  void* cast1317 = (void*)t1316;
  int* cast1318 = (int*)cast1317;
  int* t1319 = __args1311;
  int t1320 = *t1319;
  *cast1318 = t1320;
  return;
}

// function: _ZNKSt6ranges7__imove9_IterMoveclIRKSt15_Deque_iteratorIiRiPiEQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS9_EEEEEENS1_8__resultIS9_E4typeEOS9_
int* _ZNKSt6ranges7__imove9_IterMoveclIRKSt15_Deque_iteratorIiRiPiEQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS9_EEEEEENS1_8__resultIS9_E4typeEOS9_(struct std__ranges____imove___IterMove* v1321, struct std___Deque_iterator_int__int____int___* v1322) {
bb1323: ;
  struct std__ranges____imove___IterMove* this1324;
  struct std___Deque_iterator_int__int____int___* __e1325;
  int* __retval1326;
  this1324 = v1321;
  __e1325 = v1322;
  struct std__ranges____imove___IterMove* t1327 = this1324;
      struct std___Deque_iterator_int__int____int___* t1328 = __e1325;
      int* r1329 = std___Deque_iterator_int__int___int____operator____const(t1328);
      __retval1326 = r1329;
      int* t1330 = __retval1326;
      return t1330;
  abort();
}

// function: _ZNKSt13move_iteratorISt15_Deque_iteratorIiRiPiEEdeEv
int* std__move_iterator_std___Deque_iterator_int__int___int______operator____const(struct std__move_iterator_std___Deque_iterator_int__int____int____* v1331) {
bb1332: ;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* this1333;
  int* __retval1334;
  this1333 = v1331;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1335 = this1333;
  int* r1336 = _ZNKSt6ranges7__imove9_IterMoveclIRKSt15_Deque_iteratorIiRiPiEQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS9_EEEEEENS1_8__resultIS9_E4typeEOS9_(&_ZNSt6ranges4_Cpo9iter_moveE, &t1335->_M_current);
  __retval1334 = r1336;
  int* t1337 = __retval1334;
  return t1337;
}

// function: _ZNSt13move_iteratorISt15_Deque_iteratorIiRiPiEEppEv
struct std__move_iterator_std___Deque_iterator_int__int____int____* std__move_iterator_std___Deque_iterator_int__int___int______operator__(struct std__move_iterator_std___Deque_iterator_int__int____int____* v1338) {
bb1339: ;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* this1340;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* __retval1341;
  this1340 = v1338;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1342 = this1340;
  struct std___Deque_iterator_int__int____int___* r1343 = std___Deque_iterator_int__int___int____operator___3(&t1342->_M_current);
  __retval1341 = t1342;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1344 = __retval1341;
  return t1344;
}

// function: _ZSt16__do_uninit_copyISt13move_iteratorISt15_Deque_iteratorIiRiPiEES5_S4_ET1_T_T0_S6_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____do_uninit_copy_std__move_iterator_std___Deque_iterator_int__int___int______std__move_iterator_std___Deque_iterator_int__int___int______std___Deque_iterator_int__int___int____(struct std__move_iterator_std___Deque_iterator_int__int____int____ v1345, struct std__move_iterator_std___Deque_iterator_int__int____int____ v1346, struct std___Deque_iterator_int__int____int___ v1347) {
bb1348: ;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ __first1349;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ __last1350;
  struct std___Deque_iterator_int__int____int___ __result1351;
  struct std___Deque_iterator_int__int____int___ __retval1352;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_ __guard1353;
  __first1349 = v1345;
  __last1350 = v1346;
  __result1351 = v1347;
  std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void____UninitDestroyGuard(&__guard1353, &__result1351);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
      while (1) {
        _Bool r1355 = bool_std__operator___std___Deque_iterator_int__int___int____(&__first1349, &__last1350);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard1353);
          }
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u1356 = !r1355;
        if (!u1356) break;
        int* r1357 = std___Deque_iterator_int__int___int____operator____const(&__result1351);
        int* r1358 = std__move_iterator_std___Deque_iterator_int__int___int______operator____const(&__first1349);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard1353);
          }
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        void_std___Construct_int__int_(r1357, r1358);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard1353);
          }
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
      for_step1354: ;
        struct std__move_iterator_std___Deque_iterator_int__int____int____* r1359 = std__move_iterator_std___Deque_iterator_int__int___int______operator__(&__first1349);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard1353);
          }
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        struct std___Deque_iterator_int__int____int___* r1360 = std___Deque_iterator_int__int___int____operator___3(&__result1351);
      }
    std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void___release(&__guard1353);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard1353);
      }
      struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1352, &__result1351);
    struct std___Deque_iterator_int__int____int___ t1361 = __retval1352;
    struct std___Deque_iterator_int__int____int___ ret_val1362 = t1361;
    {
      std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard1353);
    }
    return ret_val1362;
  abort();
}

// function: _ZNSt13move_iteratorISt15_Deque_iteratorIiRiPiEEC2EOS4_
void std__move_iterator_std___Deque_iterator_int__int___int______move_iterator(struct std__move_iterator_std___Deque_iterator_int__int____int____* v1363, struct std__move_iterator_std___Deque_iterator_int__int____int____* v1364) {
bb1365: ;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* this1366;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* unnamed1367;
  this1366 = v1363;
  unnamed1367 = v1364;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1368 = this1366;
  struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____* base1369 = (struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____*)((char *)t1368 + 0);
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1370 = unnamed1367;
  struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____* base1371 = (struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____*)((char *)t1370 + 0);
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1372 = unnamed1367;
  std___Deque_iterator_int__int___int_____Deque_iterator(&t1368->_M_current, &t1372->_M_current);
  return;
}

// function: _ZNSt13move_iteratorISt15_Deque_iteratorIiRiPiEEC2ERKS4_
void std__move_iterator_std___Deque_iterator_int__int___int______move_iterator_2(struct std__move_iterator_std___Deque_iterator_int__int____int____* v1373, struct std__move_iterator_std___Deque_iterator_int__int____int____* v1374) {
bb1375: ;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* this1376;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* unnamed1377;
  this1376 = v1373;
  unnamed1377 = v1374;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1378 = this1376;
  struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____* base1379 = (struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____*)((char *)t1378 + 0);
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1380 = unnamed1377;
  struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____* base1381 = (struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____*)((char *)t1380 + 0);
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1382 = unnamed1377;
  std___Deque_iterator_int__int___int_____Deque_iterator(&t1378->_M_current, &t1382->_M_current);
  return;
}

// function: _ZSt18uninitialized_copyISt13move_iteratorISt15_Deque_iteratorIiRiPiEES4_ET0_T_S7_S6_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__uninitialized_copy_std__move_iterator_std___Deque_iterator_int__int___int______std___Deque_iterator_int__int___int____(struct std__move_iterator_std___Deque_iterator_int__int____int____ v1383, struct std__move_iterator_std___Deque_iterator_int__int____int____ v1384, struct std___Deque_iterator_int__int____int___ v1385) {
bb1386: ;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ __first1387;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ __last1388;
  struct std___Deque_iterator_int__int____int___ __result1389;
  struct std___Deque_iterator_int__int____int___ __retval1390;
  __first1387 = v1383;
  __last1388 = v1384;
  __result1389 = v1385;
        struct std__move_iterator_std___Deque_iterator_int__int____int____ agg_tmp01391;
        struct std__move_iterator_std___Deque_iterator_int__int____int____ agg_tmp11392;
        struct std___Deque_iterator_int__int____int___ agg_tmp21393;
        std__move_iterator_std___Deque_iterator_int__int___int______move_iterator_2(&agg_tmp01391, &__first1387);
        std__move_iterator_std___Deque_iterator_int__int___int______move_iterator_2(&agg_tmp11392, &__last1388);
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21393, &__result1389);
        struct std__move_iterator_std___Deque_iterator_int__int____int____ t1394 = agg_tmp01391;
        struct std__move_iterator_std___Deque_iterator_int__int____int____ t1395 = agg_tmp11392;
        struct std___Deque_iterator_int__int____int___ t1396 = agg_tmp21393;
        struct std___Deque_iterator_int__int____int___ r1397 = std___Deque_iterator_int__int___int___std____do_uninit_copy_std__move_iterator_std___Deque_iterator_int__int___int______std__move_iterator_std___Deque_iterator_int__int___int______std___Deque_iterator_int__int___int____(t1394, t1395, t1396);
        if (__cir_exc_active) {
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __retval1390 = r1397;
        struct std___Deque_iterator_int__int____int___ t1398 = __retval1390;
        return t1398;
  abort();
}

// function: _ZSt22__uninitialized_copy_aISt13move_iteratorISt15_Deque_iteratorIiRiPiEES5_S4_iET1_T_T0_S6_RSaIT2_E
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____uninitialized_copy_a_std__move_iterator_std___Deque_iterator_int__int___int______std__move_iterator_std___Deque_iterator_int__int___int______std___Deque_iterator_int__int___int____int_(struct std__move_iterator_std___Deque_iterator_int__int____int____ v1399, struct std__move_iterator_std___Deque_iterator_int__int____int____ v1400, struct std___Deque_iterator_int__int____int___ v1401, struct std__allocator_int_* v1402) {
bb1403: ;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ __first1404;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ __last1405;
  struct std___Deque_iterator_int__int____int___ __result1406;
  struct std__allocator_int_* unnamed1407;
  struct std___Deque_iterator_int__int____int___ __retval1408;
  __first1404 = v1399;
  __last1405 = v1400;
  __result1406 = v1401;
  unnamed1407 = v1402;
    _Bool r1409 = std__is_constant_evaluated();
    if (r1409) {
      struct std__move_iterator_std___Deque_iterator_int__int____int____ agg_tmp01410;
      struct std__move_iterator_std___Deque_iterator_int__int____int____ agg_tmp11411;
      struct std___Deque_iterator_int__int____int___ agg_tmp21412;
      std__move_iterator_std___Deque_iterator_int__int___int______move_iterator(&agg_tmp01410, &__first1404);
      std__move_iterator_std___Deque_iterator_int__int___int______move_iterator_2(&agg_tmp11411, &__last1405);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21412, &__result1406);
      struct std__move_iterator_std___Deque_iterator_int__int____int____ t1413 = agg_tmp01410;
      struct std__move_iterator_std___Deque_iterator_int__int____int____ t1414 = agg_tmp11411;
      struct std___Deque_iterator_int__int____int___ t1415 = agg_tmp21412;
      struct std___Deque_iterator_int__int____int___ r1416 = std___Deque_iterator_int__int___int___std____do_uninit_copy_std__move_iterator_std___Deque_iterator_int__int___int______std__move_iterator_std___Deque_iterator_int__int___int______std___Deque_iterator_int__int___int____(t1413, t1414, t1415);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1408 = r1416;
      struct std___Deque_iterator_int__int____int___ t1417 = __retval1408;
      return t1417;
    }
    struct std__move_iterator_std___Deque_iterator_int__int____int____ agg_tmp31418;
    struct std__move_iterator_std___Deque_iterator_int__int____int____ agg_tmp41419;
    struct std___Deque_iterator_int__int____int___ agg_tmp51420;
    std__move_iterator_std___Deque_iterator_int__int___int______move_iterator(&agg_tmp31418, &__first1404);
    std__move_iterator_std___Deque_iterator_int__int___int______move_iterator_2(&agg_tmp41419, &__last1405);
    std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp51420, &__result1406);
    struct std__move_iterator_std___Deque_iterator_int__int____int____ t1421 = agg_tmp31418;
    struct std__move_iterator_std___Deque_iterator_int__int____int____ t1422 = agg_tmp41419;
    struct std___Deque_iterator_int__int____int___ t1423 = agg_tmp51420;
    struct std___Deque_iterator_int__int____int___ r1424 = std___Deque_iterator_int__int___int___std__uninitialized_copy_std__move_iterator_std___Deque_iterator_int__int___int______std___Deque_iterator_int__int___int____(t1421, t1422, t1423);
    if (__cir_exc_active) {
      struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    __retval1408 = r1424;
    struct std___Deque_iterator_int__int____int___ t1425 = __retval1408;
    return t1425;
  abort();
}

// function: _ZNSt13move_iteratorISt15_Deque_iteratorIiRiPiEEC2ES3_
void std__move_iterator_std___Deque_iterator_int__int___int______move_iterator_3(struct std__move_iterator_std___Deque_iterator_int__int____int____* v1426, struct std___Deque_iterator_int__int____int___ v1427) {
bb1428: ;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* this1429;
  struct std___Deque_iterator_int__int____int___ __i1430;
  this1429 = v1426;
  __i1430 = v1427;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1431 = this1429;
  struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____* base1432 = (struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____*)((char *)t1431 + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&t1431->_M_current, &__i1430);
  return;
}

// function: _ZSt18make_move_iteratorISt15_Deque_iteratorIiRiPiEESt13move_iteratorIT_ES5_
struct std__move_iterator_std___Deque_iterator_int__int____int____ std__move_iterator_std___Deque_iterator_int__int___int_____std__make_move_iterator_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1433) {
bb1434: ;
  struct std___Deque_iterator_int__int____int___ __i1435;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ __retval1436;
  struct std___Deque_iterator_int__int____int___ agg_tmp01437;
  __i1435 = v1433;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01437, &__i1435);
  struct std___Deque_iterator_int__int____int___ t1438 = agg_tmp01437;
  std__move_iterator_std___Deque_iterator_int__int___int______move_iterator_3(&__retval1436, t1438);
  if (__cir_exc_active) {
    struct std__move_iterator_std___Deque_iterator_int__int____int____ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__move_iterator_std___Deque_iterator_int__int____int____ t1439 = __retval1436;
  return t1439;
}

// function: _ZSt22__uninitialized_move_aISt15_Deque_iteratorIiRiPiES3_SaIiEET0_T_S6_S5_RT1_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____uninitialized_move_a_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____std__allocator_int___(struct std___Deque_iterator_int__int____int___ v1440, struct std___Deque_iterator_int__int____int___ v1441, struct std___Deque_iterator_int__int____int___ v1442, struct std__allocator_int_* v1443) {
bb1444: ;
  struct std___Deque_iterator_int__int____int___ __first1445;
  struct std___Deque_iterator_int__int____int___ __last1446;
  struct std___Deque_iterator_int__int____int___ __result1447;
  struct std__allocator_int_* __alloc1448;
  struct std___Deque_iterator_int__int____int___ __retval1449;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ agg_tmp01450;
  struct std___Deque_iterator_int__int____int___ agg_tmp11451;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ agg_tmp21452;
  struct std___Deque_iterator_int__int____int___ agg_tmp31453;
  struct std___Deque_iterator_int__int____int___ agg_tmp41454;
  __first1445 = v1440;
  __last1446 = v1441;
  __result1447 = v1442;
  __alloc1448 = v1443;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11451, &__first1445);
  struct std___Deque_iterator_int__int____int___ t1455 = agg_tmp11451;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ r1456 = std__move_iterator_std___Deque_iterator_int__int___int_____std__make_move_iterator_std___Deque_iterator_int__int___int____(t1455);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp01450 = r1456;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp31453, &__last1446);
  struct std___Deque_iterator_int__int____int___ t1457 = agg_tmp31453;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ r1458 = std__move_iterator_std___Deque_iterator_int__int___int_____std__make_move_iterator_std___Deque_iterator_int__int___int____(t1457);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp21452 = r1458;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp41454, &__result1447);
  struct std__allocator_int_* t1459 = __alloc1448;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ t1460 = agg_tmp01450;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ t1461 = agg_tmp21452;
  struct std___Deque_iterator_int__int____int___ t1462 = agg_tmp41454;
  struct std___Deque_iterator_int__int____int___ r1463 = std___Deque_iterator_int__int___int___std____uninitialized_copy_a_std__move_iterator_std___Deque_iterator_int__int___int______std__move_iterator_std___Deque_iterator_int__int___int______std___Deque_iterator_int__int___int____int_(t1460, t1461, t1462, t1459);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1449 = r1463;
  struct std___Deque_iterator_int__int____int___ t1464 = __retval1449;
  return t1464;
}

// function: _ZSt12__niter_wrapISt15_Deque_iteratorIiRiPiEET_RKS4_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____niter_wrap_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___* v1465, struct std___Deque_iterator_int__int____int___ v1466) {
bb1467: ;
  struct std___Deque_iterator_int__int____int___* unnamed1468;
  struct std___Deque_iterator_int__int____int___ __res1469;
  struct std___Deque_iterator_int__int____int___ __retval1470;
  unnamed1468 = v1465;
  __res1469 = v1466;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1470, &__res1469);
  struct std___Deque_iterator_int__int____int___ t1471 = __retval1470;
  return t1471;
}

// function: _ZSt3minIlERKT_S2_S2_
long* long_const__std__min_long_(long* v1472, long* v1473) {
bb1474: ;
  long* __a1475;
  long* __b1476;
  long* __retval1477;
  __a1475 = v1472;
  __b1476 = v1473;
    long* t1478 = __b1476;
    long t1479 = *t1478;
    long* t1480 = __a1475;
    long t1481 = *t1480;
    _Bool c1482 = ((t1479 < t1481)) ? 1 : 0;
    if (c1482) {
      long* t1483 = __b1476;
      __retval1477 = t1483;
      long* t1484 = __retval1477;
      return t1484;
    }
  long* t1485 = __a1475;
  __retval1477 = t1485;
  long* t1486 = __retval1477;
  return t1486;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v1487, int* v1488, struct std__random_access_iterator_tag v1489) {
bb1490: ;
  int* __first1491;
  int* __last1492;
  struct std__random_access_iterator_tag unnamed1493;
  long __retval1494;
  __first1491 = v1487;
  __last1492 = v1488;
  unnamed1493 = v1489;
  int* t1495 = __last1492;
  int* t1496 = __first1491;
  long diff1497 = t1495 - t1496;
  __retval1494 = diff1497;
  long t1498 = __retval1494;
  return t1498;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v1499) {
bb1500: ;
  int** unnamed1501;
  struct std__random_access_iterator_tag __retval1502;
  unnamed1501 = v1499;
  struct std__random_access_iterator_tag t1503 = __retval1502;
  return t1503;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v1504, int* v1505) {
bb1506: ;
  int* __first1507;
  int* __last1508;
  long __retval1509;
  struct std__random_access_iterator_tag agg_tmp01510;
  __first1507 = v1504;
  __last1508 = v1505;
  int* t1511 = __first1507;
  int* t1512 = __last1508;
  struct std__random_access_iterator_tag r1513 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first1507);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp01510 = r1513;
  struct std__random_access_iterator_tag t1514 = agg_tmp01510;
  long r1515 = std__iterator_traits_int____difference_type_std____distance_int__(t1511, t1512, t1514);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval1509 = r1515;
  long t1516 = __retval1509;
  return t1516;
}

// function: _ZSt12__assign_oneILb1EPiS0_EvRT0_RT1_
void void_std____assign_one_true__int___int__(int** v1517, int** v1518) {
bb1519: ;
  int** __out1520;
  int** __in1521;
  __out1520 = v1517;
  __in1521 = v1518;
    int** t1522 = __in1521;
    int* t1523 = *t1522;
    int t1524 = *t1523;
    int** t1525 = __out1520;
    int* t1526 = *t1525;
    *t1526 = t1524;
  return;
}

// function: _ZSt14__copy_move_a2ILb1EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_true__int___int___int__(int* v1527, int* v1528, int* v1529) {
bb1530: ;
  int* __first1531;
  int* __last1532;
  int* __result1533;
  int* __retval1534;
  __first1531 = v1527;
  __last1532 = v1528;
  __result1533 = v1529;
      _Bool r1535 = std____is_constant_evaluated();
      if (r1535) {
      } else {
          long __n1536;
          int* t1537 = __first1531;
          int* t1538 = __last1532;
          long r1539 = std__iterator_traits_int____difference_type_std__distance_int__(t1537, t1538);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          __n1536 = r1539;
            long t1540 = __n1536;
            long c1541 = 1;
            _Bool c1542 = ((t1540 > c1541)) ? 1 : 0;
            if (c1542) {
              int* t1543 = __result1533;
              void* cast1544 = (void*)t1543;
              int* t1545 = __first1531;
              void* cast1546 = (void*)t1545;
              long t1547 = __n1536;
              unsigned long cast1548 = (unsigned long)t1547;
              unsigned long c1549 = 4;
              unsigned long b1550 = cast1548 * c1549;
              void* r1551 = memmove(cast1544, cast1546, b1550);
              long t1552 = __n1536;
              int* t1553 = __result1533;
              int* ptr1554 = &(t1553)[t1552];
              __result1533 = ptr1554;
            } else {
                long t1555 = __n1536;
                long c1556 = 1;
                _Bool c1557 = ((t1555 == c1556)) ? 1 : 0;
                if (c1557) {
                  void_std____assign_one_true__int___int__(&__result1533, &__first1531);
                  if (__cir_exc_active) {
                    int* __cir_eh_ret = (int*)0;
                    return __cir_eh_ret;
                  }
                  int* t1558 = __result1533;
                  int c1559 = 1;
                  int* ptr1560 = &(t1558)[c1559];
                  __result1533 = ptr1560;
                }
            }
          int* t1561 = __result1533;
          __retval1534 = t1561;
          int* t1562 = __retval1534;
          return t1562;
      }
    while (1) {
      int* t1564 = __first1531;
      int* t1565 = __last1532;
      _Bool c1566 = ((t1564 != t1565)) ? 1 : 0;
      if (!c1566) break;
      void_std____assign_one_true__int___int__(&__result1533, &__first1531);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    for_step1563: ;
      int* t1567 = __result1533;
      int c1568 = 1;
      int* ptr1569 = &(t1567)[c1568];
      __result1533 = ptr1569;
      int* t1570 = __first1531;
      int c1571 = 1;
      int* ptr1572 = &(t1570)[c1571];
      __first1531 = ptr1572;
    }
  int* t1573 = __result1533;
  __retval1534 = t1573;
  int* t1574 = __retval1534;
  return t1574;
}

// function: _ZSt14__copy_move_a1ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_true__int___int__(int* v1575, int* v1576, int* v1577) {
bb1578: ;
  int* __first1579;
  int* __last1580;
  int* __result1581;
  int* __retval1582;
  __first1579 = v1575;
  __last1580 = v1576;
  __result1581 = v1577;
  int* t1583 = __first1579;
  int* t1584 = __last1580;
  int* t1585 = __result1581;
  int* r1586 = int__std____copy_move_a2_true__int___int___int__(t1583, t1584, t1585);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1582 = r1586;
  int* t1587 = __retval1582;
  return t1587;
}

// function: _ZSt14__copy_move_a1ILb1EPiiEN9__gnu_cxx11__enable_ifIXsr23__is_random_access_iterIT0_EE7__valueESt15_Deque_iteratorIT1_RS5_PS5_EE6__typeES3_S3_S8_
struct std___Deque_iterator_int__int____int___ __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_a1_true__int___int_(int* v1588, int* v1589, struct std___Deque_iterator_int__int____int___ v1590) {
bb1591: ;
  int* __first1592;
  int* __last1593;
  struct std___Deque_iterator_int__int____int___ __result1594;
  struct std___Deque_iterator_int__int____int___ __retval1595;
  long __len1596;
  __first1592 = v1588;
  __last1593 = v1589;
  __result1594 = v1590;
  int* t1597 = __last1593;
  int* t1598 = __first1592;
  long diff1599 = t1597 - t1598;
  __len1596 = diff1599;
    while (1) {
      long t1600 = __len1596;
      long c1601 = 0;
      _Bool c1602 = ((t1600 > c1601)) ? 1 : 0;
      if (!c1602) break;
        long __clen1603;
        long ref_tmp01604;
        int* t1605 = __result1594._M_last;
        int* t1606 = __result1594._M_cur;
        long diff1607 = t1605 - t1606;
        ref_tmp01604 = diff1607;
        long* r1608 = long_const__std__min_long_(&__len1596, &ref_tmp01604);
        if (__cir_exc_active) {
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        long t1609 = *r1608;
        __clen1603 = t1609;
        int* t1610 = __first1592;
        int* t1611 = __first1592;
        long t1612 = __clen1603;
        int* ptr1613 = &(t1611)[t1612];
        int* t1614 = __result1594._M_cur;
        int* r1615 = int__std____copy_move_a1_true__int___int__(t1610, ptr1613, t1614);
        if (__cir_exc_active) {
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        long t1616 = __clen1603;
        int* t1617 = __first1592;
        int* ptr1618 = &(t1617)[t1616];
        __first1592 = ptr1618;
        long t1619 = __clen1603;
        struct std___Deque_iterator_int__int____int___* r1620 = std___Deque_iterator_int__int___int____operator___2(&__result1594, t1619);
        long t1621 = __clen1603;
        long t1622 = __len1596;
        long b1623 = t1622 - t1621;
        __len1596 = b1623;
    }
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1595, &__result1594);
  struct std___Deque_iterator_int__int____int___ t1624 = __retval1595;
  return t1624;
}

// function: _ZSt15__copy_move_ditILb1EiRiPiSt15_Deque_iteratorIiS0_S1_EET3_S2_IT0_T1_T2_ES8_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_dit_true__int__int___int___std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1625, struct std___Deque_iterator_int__int____int___ v1626, struct std___Deque_iterator_int__int____int___ v1627) {
bb1628: ;
  struct std___Deque_iterator_int__int____int___ __first1629;
  struct std___Deque_iterator_int__int____int___ __last1630;
  struct std___Deque_iterator_int__int____int___ __result1631;
  struct std___Deque_iterator_int__int____int___ __retval1632;
  struct std___Deque_iterator_int__int____int___ agg_tmp31633;
  __first1629 = v1625;
  __last1630 = v1626;
  __result1631 = v1627;
    int** t1634 = __first1629._M_node;
    int** t1635 = __last1630._M_node;
    _Bool c1636 = ((t1634 != t1635)) ? 1 : 0;
    if (c1636) {
      struct std___Deque_iterator_int__int____int___ ref_tmp01637;
      struct std___Deque_iterator_int__int____int___ agg_tmp01638;
      struct std___Deque_iterator_int__int____int___ agg_tmp21639;
      int* t1640 = __first1629._M_cur;
      int* t1641 = __first1629._M_last;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01638, &__result1631);
      struct std___Deque_iterator_int__int____int___ t1642 = agg_tmp01638;
      struct std___Deque_iterator_int__int____int___ r1643 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_a1_true__int___int_(t1640, t1641, t1642);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      ref_tmp01637 = r1643;
      struct std___Deque_iterator_int__int____int___* r1644 = std___Deque_iterator_int__int___int____operator_(&__result1631, &ref_tmp01637);
        int** __node1645;
        struct std___Deque_iterator_int__int____int___ ref_tmp11646;
        struct std___Deque_iterator_int__int____int___ agg_tmp11647;
        int** t1648 = __first1629._M_node;
        int c1649 = 1;
        int** ptr1650 = &(t1648)[c1649];
        __node1645 = ptr1650;
        while (1) {
          int** t1652 = __node1645;
          int** t1653 = __last1630._M_node;
          _Bool c1654 = ((t1652 != t1653)) ? 1 : 0;
          if (!c1654) break;
          int** t1655 = __node1645;
          int* t1656 = *t1655;
          int** t1657 = __node1645;
          int* t1658 = *t1657;
          unsigned long r1659 = std___Deque_iterator_int__int___int_____S_buffer_size();
          int* ptr1660 = &(t1658)[r1659];
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11647, &__result1631);
          struct std___Deque_iterator_int__int____int___ t1661 = agg_tmp11647;
          struct std___Deque_iterator_int__int____int___ r1662 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_a1_true__int___int_(t1656, ptr1660, t1661);
          if (__cir_exc_active) {
            struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ref_tmp11646 = r1662;
          struct std___Deque_iterator_int__int____int___* r1663 = std___Deque_iterator_int__int___int____operator_(&__result1631, &ref_tmp11646);
        for_step1651: ;
          int** t1664 = __node1645;
          int c1665 = 1;
          int** ptr1666 = &(t1664)[c1665];
          __node1645 = ptr1666;
        }
      int* t1667 = __last1630._M_first;
      int* t1668 = __last1630._M_cur;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21639, &__result1631);
      struct std___Deque_iterator_int__int____int___ t1669 = agg_tmp21639;
      struct std___Deque_iterator_int__int____int___ r1670 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_a1_true__int___int_(t1667, t1668, t1669);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1632 = r1670;
      struct std___Deque_iterator_int__int____int___ t1671 = __retval1632;
      return t1671;
    }
  int* t1672 = __first1629._M_cur;
  int* t1673 = __last1630._M_cur;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp31633, &__result1631);
  struct std___Deque_iterator_int__int____int___ t1674 = agg_tmp31633;
  struct std___Deque_iterator_int__int____int___ r1675 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_a1_true__int___int_(t1672, t1673, t1674);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1632 = r1675;
  struct std___Deque_iterator_int__int____int___ t1676 = __retval1632;
  return t1676;
}

// function: _ZSt14__copy_move_a1ILb1EiRiPiiESt15_Deque_iteratorIT3_RS3_PS3_ES2_IT0_T1_T2_ESA_S6_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_a1_true__int__int___int___int_(struct std___Deque_iterator_int__int____int___ v1677, struct std___Deque_iterator_int__int____int___ v1678, struct std___Deque_iterator_int__int____int___ v1679) {
bb1680: ;
  struct std___Deque_iterator_int__int____int___ __first1681;
  struct std___Deque_iterator_int__int____int___ __last1682;
  struct std___Deque_iterator_int__int____int___ __result1683;
  struct std___Deque_iterator_int__int____int___ __retval1684;
  struct std___Deque_iterator_int__int____int___ agg_tmp01685;
  struct std___Deque_iterator_int__int____int___ agg_tmp11686;
  struct std___Deque_iterator_int__int____int___ agg_tmp21687;
  __first1681 = v1677;
  __last1682 = v1678;
  __result1683 = v1679;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01685, &__first1681);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11686, &__last1682);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21687, &__result1683);
  struct std___Deque_iterator_int__int____int___ t1688 = agg_tmp01685;
  struct std___Deque_iterator_int__int____int___ t1689 = agg_tmp11686;
  struct std___Deque_iterator_int__int____int___ t1690 = agg_tmp21687;
  struct std___Deque_iterator_int__int____int___ r1691 = std___Deque_iterator_int__int___int___std____copy_move_dit_true__int__int___int___std___Deque_iterator_int__int___int____(t1688, t1689, t1690);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1684 = r1691;
  struct std___Deque_iterator_int__int____int___ t1692 = __retval1684;
  return t1692;
}

// function: _ZSt12__niter_baseISt15_Deque_iteratorIiRiPiEET_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1693) {
bb1694: ;
  struct std___Deque_iterator_int__int____int___ __it1695;
  struct std___Deque_iterator_int__int____int___ __retval1696;
  __it1695 = v1693;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1696, &__it1695);
  struct std___Deque_iterator_int__int____int___ t1697 = __retval1696;
  return t1697;
}

// function: _ZSt13__copy_move_aILb1ESt15_Deque_iteratorIiRiPiES3_ET1_T0_S5_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_a_true__std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1698, struct std___Deque_iterator_int__int____int___ v1699, struct std___Deque_iterator_int__int____int___ v1700) {
bb1701: ;
  struct std___Deque_iterator_int__int____int___ __first1702;
  struct std___Deque_iterator_int__int____int___ __last1703;
  struct std___Deque_iterator_int__int____int___ __result1704;
  struct std___Deque_iterator_int__int____int___ __retval1705;
  struct std___Deque_iterator_int__int____int___ agg_tmp01706;
  struct std___Deque_iterator_int__int____int___ agg_tmp11707;
  struct std___Deque_iterator_int__int____int___ agg_tmp21708;
  struct std___Deque_iterator_int__int____int___ agg_tmp31709;
  struct std___Deque_iterator_int__int____int___ agg_tmp41710;
  struct std___Deque_iterator_int__int____int___ agg_tmp51711;
  struct std___Deque_iterator_int__int____int___ agg_tmp61712;
  __first1702 = v1698;
  __last1703 = v1699;
  __result1704 = v1700;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21708, &__first1702);
  struct std___Deque_iterator_int__int____int___ t1713 = agg_tmp21708;
  struct std___Deque_iterator_int__int____int___ r1714 = std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(t1713);
  agg_tmp11707 = r1714;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp41710, &__last1703);
  struct std___Deque_iterator_int__int____int___ t1715 = agg_tmp41710;
  struct std___Deque_iterator_int__int____int___ r1716 = std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(t1715);
  agg_tmp31709 = r1716;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp61712, &__result1704);
  struct std___Deque_iterator_int__int____int___ t1717 = agg_tmp61712;
  struct std___Deque_iterator_int__int____int___ r1718 = std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(t1717);
  agg_tmp51711 = r1718;
  struct std___Deque_iterator_int__int____int___ t1719 = agg_tmp11707;
  struct std___Deque_iterator_int__int____int___ t1720 = agg_tmp31709;
  struct std___Deque_iterator_int__int____int___ t1721 = agg_tmp51711;
  struct std___Deque_iterator_int__int____int___ r1722 = std___Deque_iterator_int__int___int___std____copy_move_a1_true__int__int___int___int_(t1719, t1720, t1721);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp01706 = r1722;
  struct std___Deque_iterator_int__int____int___ t1723 = agg_tmp01706;
  struct std___Deque_iterator_int__int____int___ r1724 = std___Deque_iterator_int__int___int___std____niter_wrap_std___Deque_iterator_int__int___int____(&__result1704, t1723);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1705 = r1724;
  struct std___Deque_iterator_int__int____int___ t1725 = __retval1705;
  return t1725;
}

// function: _ZSt12__miter_baseISt15_Deque_iteratorIiRiPiEET_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____miter_base_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1726) {
bb1727: ;
  struct std___Deque_iterator_int__int____int___ __it1728;
  struct std___Deque_iterator_int__int____int___ __retval1729;
  __it1728 = v1726;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1729, &__it1728);
  struct std___Deque_iterator_int__int____int___ t1730 = __retval1729;
  return t1730;
}

// function: _ZSt4moveISt15_Deque_iteratorIiRiPiES3_ET0_T_S5_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__move_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1731, struct std___Deque_iterator_int__int____int___ v1732, struct std___Deque_iterator_int__int____int___ v1733) {
bb1734: ;
  struct std___Deque_iterator_int__int____int___ __first1735;
  struct std___Deque_iterator_int__int____int___ __last1736;
  struct std___Deque_iterator_int__int____int___ __result1737;
  struct std___Deque_iterator_int__int____int___ __retval1738;
  struct std___Deque_iterator_int__int____int___ agg_tmp01739;
  struct std___Deque_iterator_int__int____int___ agg_tmp11740;
  struct std___Deque_iterator_int__int____int___ agg_tmp21741;
  struct std___Deque_iterator_int__int____int___ agg_tmp31742;
  struct std___Deque_iterator_int__int____int___ agg_tmp41743;
  __first1735 = v1731;
  __last1736 = v1732;
  __result1737 = v1733;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11740, &__first1735);
  struct std___Deque_iterator_int__int____int___ t1744 = agg_tmp11740;
  struct std___Deque_iterator_int__int____int___ r1745 = std___Deque_iterator_int__int___int___std____miter_base_std___Deque_iterator_int__int___int____(t1744);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp01739 = r1745;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp31742, &__last1736);
  struct std___Deque_iterator_int__int____int___ t1746 = agg_tmp31742;
  struct std___Deque_iterator_int__int____int___ r1747 = std___Deque_iterator_int__int___int___std____miter_base_std___Deque_iterator_int__int___int____(t1746);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp21741 = r1747;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp41743, &__result1737);
  struct std___Deque_iterator_int__int____int___ t1748 = agg_tmp01739;
  struct std___Deque_iterator_int__int____int___ t1749 = agg_tmp21741;
  struct std___Deque_iterator_int__int____int___ t1750 = agg_tmp41743;
  struct std___Deque_iterator_int__int____int___ r1751 = std___Deque_iterator_int__int___int___std____copy_move_a_true__std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(t1748, t1749, t1750);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1738 = r1751;
  struct std___Deque_iterator_int__int____int___ t1752 = __retval1738;
  return t1752;
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v1753, int* v1754, int* v1755) {
bb1756: ;
  int* __first1757;
  int* __last1758;
  int* __value1759;
  _Bool __load_outside_loop1760;
  int __val1761;
  __first1757 = v1753;
  __last1758 = v1754;
  __value1759 = v1755;
  _Bool c1762 = 1;
  __load_outside_loop1760 = c1762;
  int* t1763 = __value1759;
  int t1764 = *t1763;
  __val1761 = t1764;
    while (1) {
      int* t1766 = __first1757;
      int* t1767 = __last1758;
      _Bool c1768 = ((t1766 != t1767)) ? 1 : 0;
      if (!c1768) break;
      int t1769 = __val1761;
      int* t1770 = __first1757;
      *t1770 = t1769;
    for_step1765: ;
      int* t1771 = __first1757;
      int c1772 = 1;
      int* ptr1773 = &(t1771)[c1772];
      __first1757 = ptr1773;
    }
  return;
}

// function: _ZSt9__fill_a1IiiEvRKSt15_Deque_iteratorIT_RS1_PS1_ES6_RKT0_
void void_std____fill_a1_int__int_(struct std___Deque_iterator_int__int____int___* v1774, struct std___Deque_iterator_int__int____int___* v1775, int* v1776) {
bb1777: ;
  struct std___Deque_iterator_int__int____int___* __first1778;
  struct std___Deque_iterator_int__int____int___* __last1779;
  int* __value1780;
  __first1778 = v1774;
  __last1779 = v1775;
  __value1780 = v1776;
    struct std___Deque_iterator_int__int____int___* t1781 = __first1778;
    int** t1782 = t1781->_M_node;
    struct std___Deque_iterator_int__int____int___* t1783 = __last1779;
    int** t1784 = t1783->_M_node;
    _Bool c1785 = ((t1782 != t1784)) ? 1 : 0;
    if (c1785) {
      struct std___Deque_iterator_int__int____int___* t1786 = __first1778;
      int* t1787 = t1786->_M_cur;
      struct std___Deque_iterator_int__int____int___* t1788 = __first1778;
      int* t1789 = t1788->_M_last;
      int* t1790 = __value1780;
      void_std____fill_a1_int___int_(t1787, t1789, t1790);
      if (__cir_exc_active) {
        return;
      }
        int** __node1791;
        struct std___Deque_iterator_int__int____int___* t1792 = __first1778;
        int** t1793 = t1792->_M_node;
        int c1794 = 1;
        int** ptr1795 = &(t1793)[c1794];
        __node1791 = ptr1795;
        while (1) {
          int** t1797 = __node1791;
          struct std___Deque_iterator_int__int____int___* t1798 = __last1779;
          int** t1799 = t1798->_M_node;
          _Bool c1800 = ((t1797 < t1799)) ? 1 : 0;
          if (!c1800) break;
          int** t1801 = __node1791;
          int* t1802 = *t1801;
          int** t1803 = __node1791;
          int* t1804 = *t1803;
          unsigned long r1805 = std___Deque_iterator_int__int___int_____S_buffer_size();
          int* ptr1806 = &(t1804)[r1805];
          int* t1807 = __value1780;
          void_std____fill_a1_int___int_(t1802, ptr1806, t1807);
          if (__cir_exc_active) {
            return;
          }
        for_step1796: ;
          int** t1808 = __node1791;
          int c1809 = 1;
          int** ptr1810 = &(t1808)[c1809];
          __node1791 = ptr1810;
        }
      struct std___Deque_iterator_int__int____int___* t1811 = __last1779;
      int* t1812 = t1811->_M_first;
      struct std___Deque_iterator_int__int____int___* t1813 = __last1779;
      int* t1814 = t1813->_M_cur;
      int* t1815 = __value1780;
      void_std____fill_a1_int___int_(t1812, t1814, t1815);
      if (__cir_exc_active) {
        return;
      }
    } else {
      struct std___Deque_iterator_int__int____int___* t1816 = __first1778;
      int* t1817 = t1816->_M_cur;
      struct std___Deque_iterator_int__int____int___* t1818 = __last1779;
      int* t1819 = t1818->_M_cur;
      int* t1820 = __value1780;
      void_std____fill_a1_int___int_(t1817, t1819, t1820);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt8__fill_aISt15_Deque_iteratorIiRiPiEiEvT_S4_RKT0_
void void_std____fill_a_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ v1821, struct std___Deque_iterator_int__int____int___ v1822, int* v1823) {
bb1824: ;
  struct std___Deque_iterator_int__int____int___ __first1825;
  struct std___Deque_iterator_int__int____int___ __last1826;
  int* __value1827;
  __first1825 = v1821;
  __last1826 = v1822;
  __value1827 = v1823;
  int* t1828 = __value1827;
  void_std____fill_a1_int__int_(&__first1825, &__last1826, t1828);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt4fillISt15_Deque_iteratorIiRiPiEiEvT_S4_RKT0_
void void_std__fill_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ v1829, struct std___Deque_iterator_int__int____int___ v1830, int* v1831) {
bb1832: ;
  struct std___Deque_iterator_int__int____int___ __first1833;
  struct std___Deque_iterator_int__int____int___ __last1834;
  int* __value1835;
  struct std___Deque_iterator_int__int____int___ agg_tmp01836;
  struct std___Deque_iterator_int__int____int___ agg_tmp11837;
  __first1833 = v1829;
  __last1834 = v1830;
  __value1835 = v1831;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01836, &__first1833);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11837, &__last1834);
  int* t1838 = __value1835;
  struct std___Deque_iterator_int__int____int___ t1839 = agg_tmp01836;
  struct std___Deque_iterator_int__int____int___ t1840 = agg_tmp11837;
  void_std____fill_a_std___Deque_iterator_int__int___int____int_(t1839, t1840, t1838);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt19_UninitDestroyGuardISt15_Deque_iteratorIiRiPiESaIiEEC2ERS3_RS4_
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int______UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* v1841, struct std___Deque_iterator_int__int____int___* v1842, struct std__allocator_int_* v1843) {
bb1844: ;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* this1845;
  struct std___Deque_iterator_int__int____int___* __first1846;
  struct std__allocator_int_* __a1847;
  this1845 = v1841;
  __first1846 = v1842;
  __a1847 = v1843;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* t1848 = this1845;
  struct std___Deque_iterator_int__int____int___* t1849 = __first1846;
  std___Deque_iterator_int__int___int_____Deque_iterator(&t1848->_M_first, t1849);
  struct std___Deque_iterator_int__int____int___* t1850 = __first1846;
  t1848->_M_cur = t1850;
  struct std__allocator_int_* t1851 = __a1847;
  t1848->_M_alloc = t1851;
  return;
}

// function: _ZNSt19_UninitDestroyGuardISt15_Deque_iteratorIiRiPiESaIiEE7releaseEv
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_____release(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* v1852) {
bb1853: ;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* this1854;
  this1854 = v1852;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* t1855 = this1854;
  struct std___Deque_iterator_int__int____int___* c1856 = ((void*)0);
  t1855->_M_cur = c1856;
  return;
}

// function: _ZNSt19_UninitDestroyGuardISt15_Deque_iteratorIiRiPiESaIiEED2Ev
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_______UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* v1857) {
bb1858: ;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* this1859;
  this1859 = v1857;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* t1860 = this1859;
    struct std___Deque_iterator_int__int____int___* t1861 = t1860->_M_cur;
    struct std___Deque_iterator_int__int____int___* c1862 = ((void*)0);
    _Bool c1863 = ((t1861 != c1862)) ? 1 : 0;
    if (c1863) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01864;
      struct std___Deque_iterator_int__int____int___ agg_tmp11865;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01864, &t1860->_M_first);
      struct std___Deque_iterator_int__int____int___* t1866 = t1860->_M_cur;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11865, t1866);
      struct std__allocator_int_* t1867 = t1860->_M_alloc;
      struct std___Deque_iterator_int__int____int___ t1868 = agg_tmp01864;
      struct std___Deque_iterator_int__int____int___ t1869 = agg_tmp11865;
      void_std___Destroy_std___Deque_iterator_int__int___int____int_(t1868, t1869, t1867);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt25__uninitialized_move_fillISt15_Deque_iteratorIiRiPiES3_iSaIiEEvT_S5_T0_S6_RKT1_RT2_
void void_std____uninitialized_move_fill_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____int__std__allocator_int___(struct std___Deque_iterator_int__int____int___ v1870, struct std___Deque_iterator_int__int____int___ v1871, struct std___Deque_iterator_int__int____int___ v1872, struct std___Deque_iterator_int__int____int___ v1873, int* v1874, struct std__allocator_int_* v1875) {
bb1876: ;
  struct std___Deque_iterator_int__int____int___ __first11877;
  struct std___Deque_iterator_int__int____int___ __last11878;
  struct std___Deque_iterator_int__int____int___ __first21879;
  struct std___Deque_iterator_int__int____int___ __last21880;
  int* __x1881;
  struct std__allocator_int_* __alloc1882;
  struct std___Deque_iterator_int__int____int___ __mid21883;
  struct std___Deque_iterator_int__int____int___ agg_tmp01884;
  struct std___Deque_iterator_int__int____int___ agg_tmp11885;
  struct std___Deque_iterator_int__int____int___ agg_tmp21886;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__ __guard1887;
  struct std___Deque_iterator_int__int____int___ agg_tmp31888;
  struct std___Deque_iterator_int__int____int___ agg_tmp41889;
  __first11877 = v1870;
  __last11878 = v1871;
  __first21879 = v1872;
  __last21880 = v1873;
  __x1881 = v1874;
  __alloc1882 = v1875;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01884, &__first11877);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11885, &__last11878);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21886, &__first21879);
  struct std__allocator_int_* t1890 = __alloc1882;
  struct std___Deque_iterator_int__int____int___ t1891 = agg_tmp01884;
  struct std___Deque_iterator_int__int____int___ t1892 = agg_tmp11885;
  struct std___Deque_iterator_int__int____int___ t1893 = agg_tmp21886;
  struct std___Deque_iterator_int__int____int___ r1894 = std___Deque_iterator_int__int___int___std____uninitialized_move_a_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____std__allocator_int___(t1891, t1892, t1893, t1890);
  if (__cir_exc_active) {
    return;
  }
  __mid21883 = r1894;
  struct std__allocator_int_* t1895 = __alloc1882;
  std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int______UninitDestroyGuard(&__guard1887, &__first21879, t1895);
  if (__cir_exc_active) {
    return;
  }
    struct std___Deque_iterator_int__int____int___* r1896 = std___Deque_iterator_int__int___int____operator_(&__first21879, &__mid21883);
    std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp31888, &__mid21883);
    std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp41889, &__last21880);
    int* t1897 = __x1881;
    struct std__allocator_int_* t1898 = __alloc1882;
    struct std___Deque_iterator_int__int____int___ t1899 = agg_tmp31888;
    struct std___Deque_iterator_int__int____int___ t1900 = agg_tmp41889;
    void_std____uninitialized_fill_a_std___Deque_iterator_int__int___int____int__int_(t1899, t1900, t1897, t1898);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_______UninitDestroyGuard(&__guard1887);
      }
      return;
    }
    std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_____release(&__guard1887);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_______UninitDestroyGuard(&__guard1887);
      }
      return;
    }
  {
    std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_______UninitDestroyGuard(&__guard1887);
  }
  return;
}

// function: _ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int___long_(int** v1901, long v1902, struct std__random_access_iterator_tag v1903) {
bb1904: ;
  int** __i1905;
  long __n1906;
  struct std__random_access_iterator_tag unnamed1907;
  __i1905 = v1901;
  __n1906 = v1902;
  unnamed1907 = v1903;
    long t1908 = __n1906;
    _Bool isconst1909 = 0;
    _Bool ternary1910;
    if (isconst1909) {
      long t1911 = __n1906;
      long c1912 = 1;
      _Bool c1913 = ((t1911 == c1912)) ? 1 : 0;
      ternary1910 = (_Bool)c1913;
    } else {
      _Bool c1914 = 0;
      ternary1910 = (_Bool)c1914;
    }
    if (ternary1910) {
      int** t1915 = __i1905;
      int* t1916 = *t1915;
      int c1917 = 1;
      int* ptr1918 = &(t1916)[c1917];
      *t1915 = ptr1918;
    } else {
        long t1919 = __n1906;
        _Bool isconst1920 = 0;
        _Bool ternary1921;
        if (isconst1920) {
          long t1922 = __n1906;
          long c1923 = -1;
          _Bool c1924 = ((t1922 == c1923)) ? 1 : 0;
          ternary1921 = (_Bool)c1924;
        } else {
          _Bool c1925 = 0;
          ternary1921 = (_Bool)c1925;
        }
        if (ternary1921) {
          int** t1926 = __i1905;
          int* t1927 = *t1926;
          int c1928 = -1;
          int* ptr1929 = &(t1927)[c1928];
          *t1926 = ptr1929;
        } else {
          long t1930 = __n1906;
          int** t1931 = __i1905;
          int* t1932 = *t1931;
          int* ptr1933 = &(t1932)[t1930];
          *t1931 = ptr1933;
        }
    }
  return;
}

// function: _ZSt7advanceIPilEvRT_T0_
void void_std__advance_int___long_(int** v1934, long v1935) {
bb1936: ;
  int** __i1937;
  long __n1938;
  long __d1939;
  struct std__random_access_iterator_tag agg_tmp01940;
  __i1937 = v1934;
  __n1938 = v1935;
  long t1941 = __n1938;
  __d1939 = t1941;
  int** t1942 = __i1937;
  long t1943 = __d1939;
  int** t1944 = __i1937;
  struct std__random_access_iterator_tag r1945 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t1944);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp01940 = r1945;
  struct std__random_access_iterator_tag t1946 = agg_tmp01940;
  void_std____advance_int___long_(t1942, t1943, t1946);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a2_true__int___int__(int* v1947, int* v1948, int* v1949) {
bb1950: ;
  int* __first1951;
  int* __last1952;
  int* __result1953;
  int* __retval1954;
  __first1951 = v1947;
  __last1952 = v1948;
  __result1953 = v1949;
      _Bool r1955 = std__is_constant_evaluated();
      if (r1955) {
      } else {
          long __n1956;
          int* t1957 = __first1951;
          int* t1958 = __last1952;
          long r1959 = std__iterator_traits_int____difference_type_std__distance_int__(t1957, t1958);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          __n1956 = r1959;
          long t1960 = __n1956;
          long u1961 = -t1960;
          void_std__advance_int___long_(&__result1953, u1961);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
            long t1962 = __n1956;
            long c1963 = 1;
            _Bool c1964 = ((t1962 > c1963)) ? 1 : 0;
            if (c1964) {
              int* t1965 = __result1953;
              void* cast1966 = (void*)t1965;
              int* t1967 = __first1951;
              void* cast1968 = (void*)t1967;
              long t1969 = __n1956;
              unsigned long cast1970 = (unsigned long)t1969;
              unsigned long c1971 = 4;
              unsigned long b1972 = cast1970 * c1971;
              void* r1973 = memmove(cast1966, cast1968, b1972);
            } else {
                long t1974 = __n1956;
                long c1975 = 1;
                _Bool c1976 = ((t1974 == c1975)) ? 1 : 0;
                if (c1976) {
                  void_std____assign_one_true__int___int__(&__result1953, &__first1951);
                  if (__cir_exc_active) {
                    int* __cir_eh_ret = (int*)0;
                    return __cir_eh_ret;
                  }
                }
            }
          int* t1977 = __result1953;
          __retval1954 = t1977;
          int* t1978 = __retval1954;
          return t1978;
      }
    while (1) {
      int* t1979 = __first1951;
      int* t1980 = __last1952;
      _Bool c1981 = ((t1979 != t1980)) ? 1 : 0;
      if (!c1981) break;
        int* t1982 = __last1952;
        int c1983 = -1;
        int* ptr1984 = &(t1982)[c1983];
        __last1952 = ptr1984;
        int* t1985 = __result1953;
        int c1986 = -1;
        int* ptr1987 = &(t1985)[c1986];
        __result1953 = ptr1987;
        void_std____assign_one_true__int___int__(&__result1953, &__last1952);
        if (__cir_exc_active) {
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
    }
  int* t1988 = __result1953;
  __retval1954 = t1988;
  int* t1989 = __retval1954;
  return t1989;
}

// function: _ZSt23__copy_move_backward_a1ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a1_true__int___int__(int* v1990, int* v1991, int* v1992) {
bb1993: ;
  int* __first1994;
  int* __last1995;
  int* __result1996;
  int* __retval1997;
  __first1994 = v1990;
  __last1995 = v1991;
  __result1996 = v1992;
  int* t1998 = __first1994;
  int* t1999 = __last1995;
  int* t2000 = __result1996;
  int* r2001 = int__std____copy_move_backward_a2_true__int___int__(t1998, t1999, t2000);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1997 = r2001;
  int* t2002 = __retval1997;
  return t2002;
}

// function: _ZSt23__copy_move_backward_a1ILb1EPiiEN9__gnu_cxx11__enable_ifIXsr23__is_random_access_iterIT0_EE7__valueESt15_Deque_iteratorIT1_RS5_PS5_EE6__typeES3_S3_S8_
struct std___Deque_iterator_int__int____int___ __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(int* v2003, int* v2004, struct std___Deque_iterator_int__int____int___ v2005) {
bb2006: ;
  int* __first2007;
  int* __last2008;
  struct std___Deque_iterator_int__int____int___ __result2009;
  struct std___Deque_iterator_int__int____int___ __retval2010;
  long __len2011;
  __first2007 = v2003;
  __last2008 = v2004;
  __result2009 = v2005;
  int* t2012 = __last2008;
  int* t2013 = __first2007;
  long diff2014 = t2012 - t2013;
  __len2011 = diff2014;
    while (1) {
      long t2015 = __len2011;
      long c2016 = 0;
      _Bool c2017 = ((t2015 > c2016)) ? 1 : 0;
      if (!c2017) break;
        long __rlen2018;
        int* __rend2019;
        long __clen2020;
        int* t2021 = __result2009._M_cur;
        int* t2022 = __result2009._M_first;
        long diff2023 = t2021 - t2022;
        __rlen2018 = diff2023;
        int* t2024 = __result2009._M_cur;
        __rend2019 = t2024;
          long t2025 = __rlen2018;
          _Bool cast2026 = (_Bool)t2025;
          _Bool u2027 = !cast2026;
          if (u2027) {
            unsigned long r2028 = std___Deque_iterator_int__int___int_____S_buffer_size();
            long cast2029 = (long)r2028;
            __rlen2018 = cast2029;
            int** t2030 = __result2009._M_node;
            int c2031 = -1;
            int** ptr2032 = &(t2030)[c2031];
            int* t2033 = *ptr2032;
            long t2034 = __rlen2018;
            int* ptr2035 = &(t2033)[t2034];
            __rend2019 = ptr2035;
          }
        long* r2036 = long_const__std__min_long_(&__len2011, &__rlen2018);
        if (__cir_exc_active) {
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        long t2037 = *r2036;
        __clen2020 = t2037;
        int* t2038 = __last2008;
        long t2039 = __clen2020;
        long u2040 = -t2039;
        int* ptr2041 = &(t2038)[u2040];
        int* t2042 = __last2008;
        int* t2043 = __rend2019;
        int* r2044 = int__std____copy_move_backward_a1_true__int___int__(ptr2041, t2042, t2043);
        if (__cir_exc_active) {
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        long t2045 = __clen2020;
        int* t2046 = __last2008;
        long u2047 = -t2045;
        int* ptr2048 = &(t2046)[u2047];
        __last2008 = ptr2048;
        long t2049 = __clen2020;
        struct std___Deque_iterator_int__int____int___* r2050 = std___Deque_iterator_int__int___int____operator__(&__result2009, t2049);
        long t2051 = __clen2020;
        long t2052 = __len2011;
        long b2053 = t2052 - t2051;
        __len2011 = b2053;
    }
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval2010, &__result2009);
  struct std___Deque_iterator_int__int____int___ t2054 = __retval2010;
  return t2054;
}

// function: _ZSt24__copy_move_backward_ditILb1EiRiPiSt15_Deque_iteratorIiS0_S1_EET3_S2_IT0_T1_T2_ES8_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_dit_true__int__int___int___std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v2055, struct std___Deque_iterator_int__int____int___ v2056, struct std___Deque_iterator_int__int____int___ v2057) {
bb2058: ;
  struct std___Deque_iterator_int__int____int___ __first2059;
  struct std___Deque_iterator_int__int____int___ __last2060;
  struct std___Deque_iterator_int__int____int___ __result2061;
  struct std___Deque_iterator_int__int____int___ __retval2062;
  struct std___Deque_iterator_int__int____int___ agg_tmp32063;
  __first2059 = v2055;
  __last2060 = v2056;
  __result2061 = v2057;
    int** t2064 = __first2059._M_node;
    int** t2065 = __last2060._M_node;
    _Bool c2066 = ((t2064 != t2065)) ? 1 : 0;
    if (c2066) {
      struct std___Deque_iterator_int__int____int___ ref_tmp02067;
      struct std___Deque_iterator_int__int____int___ agg_tmp02068;
      struct std___Deque_iterator_int__int____int___ agg_tmp22069;
      int* t2070 = __last2060._M_first;
      int* t2071 = __last2060._M_cur;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp02068, &__result2061);
      struct std___Deque_iterator_int__int____int___ t2072 = agg_tmp02068;
      struct std___Deque_iterator_int__int____int___ r2073 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(t2070, t2071, t2072);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      ref_tmp02067 = r2073;
      struct std___Deque_iterator_int__int____int___* r2074 = std___Deque_iterator_int__int___int____operator_(&__result2061, &ref_tmp02067);
        int** __node2075;
        struct std___Deque_iterator_int__int____int___ ref_tmp12076;
        struct std___Deque_iterator_int__int____int___ agg_tmp12077;
        int** t2078 = __last2060._M_node;
        int c2079 = -1;
        int** ptr2080 = &(t2078)[c2079];
        __node2075 = ptr2080;
        while (1) {
          int** t2082 = __node2075;
          int** t2083 = __first2059._M_node;
          _Bool c2084 = ((t2082 != t2083)) ? 1 : 0;
          if (!c2084) break;
          int** t2085 = __node2075;
          int* t2086 = *t2085;
          int** t2087 = __node2075;
          int* t2088 = *t2087;
          unsigned long r2089 = std___Deque_iterator_int__int___int_____S_buffer_size();
          int* ptr2090 = &(t2088)[r2089];
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp12077, &__result2061);
          struct std___Deque_iterator_int__int____int___ t2091 = agg_tmp12077;
          struct std___Deque_iterator_int__int____int___ r2092 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(t2086, ptr2090, t2091);
          if (__cir_exc_active) {
            struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ref_tmp12076 = r2092;
          struct std___Deque_iterator_int__int____int___* r2093 = std___Deque_iterator_int__int___int____operator_(&__result2061, &ref_tmp12076);
        for_step2081: ;
          int** t2094 = __node2075;
          int c2095 = -1;
          int** ptr2096 = &(t2094)[c2095];
          __node2075 = ptr2096;
        }
      int* t2097 = __first2059._M_cur;
      int* t2098 = __first2059._M_last;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp22069, &__result2061);
      struct std___Deque_iterator_int__int____int___ t2099 = agg_tmp22069;
      struct std___Deque_iterator_int__int____int___ r2100 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(t2097, t2098, t2099);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval2062 = r2100;
      struct std___Deque_iterator_int__int____int___ t2101 = __retval2062;
      return t2101;
    }
  int* t2102 = __first2059._M_cur;
  int* t2103 = __last2060._M_cur;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp32063, &__result2061);
  struct std___Deque_iterator_int__int____int___ t2104 = agg_tmp32063;
  struct std___Deque_iterator_int__int____int___ r2105 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(t2102, t2103, t2104);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval2062 = r2105;
  struct std___Deque_iterator_int__int____int___ t2106 = __retval2062;
  return t2106;
}

// function: _ZSt23__copy_move_backward_a1ILb1EiRiPiiESt15_Deque_iteratorIT3_RS3_PS3_ES2_IT0_T1_T2_ESA_S6_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_a1_true__int__int___int___int_(struct std___Deque_iterator_int__int____int___ v2107, struct std___Deque_iterator_int__int____int___ v2108, struct std___Deque_iterator_int__int____int___ v2109) {
bb2110: ;
  struct std___Deque_iterator_int__int____int___ __first2111;
  struct std___Deque_iterator_int__int____int___ __last2112;
  struct std___Deque_iterator_int__int____int___ __result2113;
  struct std___Deque_iterator_int__int____int___ __retval2114;
  struct std___Deque_iterator_int__int____int___ agg_tmp02115;
  struct std___Deque_iterator_int__int____int___ agg_tmp12116;
  struct std___Deque_iterator_int__int____int___ agg_tmp22117;
  __first2111 = v2107;
  __last2112 = v2108;
  __result2113 = v2109;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp02115, &__first2111);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp12116, &__last2112);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp22117, &__result2113);
  struct std___Deque_iterator_int__int____int___ t2118 = agg_tmp02115;
  struct std___Deque_iterator_int__int____int___ t2119 = agg_tmp12116;
  struct std___Deque_iterator_int__int____int___ t2120 = agg_tmp22117;
  struct std___Deque_iterator_int__int____int___ r2121 = std___Deque_iterator_int__int___int___std____copy_move_backward_dit_true__int__int___int___std___Deque_iterator_int__int___int____(t2118, t2119, t2120);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval2114 = r2121;
  struct std___Deque_iterator_int__int____int___ t2122 = __retval2114;
  return t2122;
}

// function: _ZSt22__copy_move_backward_aILb1ESt15_Deque_iteratorIiRiPiES3_ET1_T0_S5_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_a_true__std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v2123, struct std___Deque_iterator_int__int____int___ v2124, struct std___Deque_iterator_int__int____int___ v2125) {
bb2126: ;
  struct std___Deque_iterator_int__int____int___ __first2127;
  struct std___Deque_iterator_int__int____int___ __last2128;
  struct std___Deque_iterator_int__int____int___ __result2129;
  struct std___Deque_iterator_int__int____int___ __retval2130;
  struct std___Deque_iterator_int__int____int___ agg_tmp02131;
  struct std___Deque_iterator_int__int____int___ agg_tmp12132;
  struct std___Deque_iterator_int__int____int___ agg_tmp22133;
  struct std___Deque_iterator_int__int____int___ agg_tmp32134;
  struct std___Deque_iterator_int__int____int___ agg_tmp42135;
  struct std___Deque_iterator_int__int____int___ agg_tmp52136;
  struct std___Deque_iterator_int__int____int___ agg_tmp62137;
  __first2127 = v2123;
  __last2128 = v2124;
  __result2129 = v2125;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp22133, &__first2127);
  struct std___Deque_iterator_int__int____int___ t2138 = agg_tmp22133;
  struct std___Deque_iterator_int__int____int___ r2139 = std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(t2138);
  agg_tmp12132 = r2139;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp42135, &__last2128);
  struct std___Deque_iterator_int__int____int___ t2140 = agg_tmp42135;
  struct std___Deque_iterator_int__int____int___ r2141 = std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(t2140);
  agg_tmp32134 = r2141;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp62137, &__result2129);
  struct std___Deque_iterator_int__int____int___ t2142 = agg_tmp62137;
  struct std___Deque_iterator_int__int____int___ r2143 = std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(t2142);
  agg_tmp52136 = r2143;
  struct std___Deque_iterator_int__int____int___ t2144 = agg_tmp12132;
  struct std___Deque_iterator_int__int____int___ t2145 = agg_tmp32134;
  struct std___Deque_iterator_int__int____int___ t2146 = agg_tmp52136;
  struct std___Deque_iterator_int__int____int___ r2147 = std___Deque_iterator_int__int___int___std____copy_move_backward_a1_true__int__int___int___int_(t2144, t2145, t2146);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp02131 = r2147;
  struct std___Deque_iterator_int__int____int___ t2148 = agg_tmp02131;
  struct std___Deque_iterator_int__int____int___ r2149 = std___Deque_iterator_int__int___int___std____niter_wrap_std___Deque_iterator_int__int___int____(&__result2129, t2148);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval2130 = r2149;
  struct std___Deque_iterator_int__int____int___ t2150 = __retval2130;
  return t2150;
}

// function: _ZSt13move_backwardISt15_Deque_iteratorIiRiPiES3_ET0_T_S5_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__move_backward_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v2151, struct std___Deque_iterator_int__int____int___ v2152, struct std___Deque_iterator_int__int____int___ v2153) {
bb2154: ;
  struct std___Deque_iterator_int__int____int___ __first2155;
  struct std___Deque_iterator_int__int____int___ __last2156;
  struct std___Deque_iterator_int__int____int___ __result2157;
  struct std___Deque_iterator_int__int____int___ __retval2158;
  struct std___Deque_iterator_int__int____int___ agg_tmp02159;
  struct std___Deque_iterator_int__int____int___ agg_tmp12160;
  struct std___Deque_iterator_int__int____int___ agg_tmp22161;
  struct std___Deque_iterator_int__int____int___ agg_tmp32162;
  struct std___Deque_iterator_int__int____int___ agg_tmp42163;
  __first2155 = v2151;
  __last2156 = v2152;
  __result2157 = v2153;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp12160, &__first2155);
  struct std___Deque_iterator_int__int____int___ t2164 = agg_tmp12160;
  struct std___Deque_iterator_int__int____int___ r2165 = std___Deque_iterator_int__int___int___std____miter_base_std___Deque_iterator_int__int___int____(t2164);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp02159 = r2165;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp32162, &__last2156);
  struct std___Deque_iterator_int__int____int___ t2166 = agg_tmp32162;
  struct std___Deque_iterator_int__int____int___ r2167 = std___Deque_iterator_int__int___int___std____miter_base_std___Deque_iterator_int__int___int____(t2166);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp22161 = r2167;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp42163, &__result2157);
  struct std___Deque_iterator_int__int____int___ t2168 = agg_tmp02159;
  struct std___Deque_iterator_int__int____int___ t2169 = agg_tmp22161;
  struct std___Deque_iterator_int__int____int___ t2170 = agg_tmp42163;
  struct std___Deque_iterator_int__int____int___ r2171 = std___Deque_iterator_int__int___int___std____copy_move_backward_a_true__std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(t2168, t2169, t2170);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval2158 = r2171;
  struct std___Deque_iterator_int__int____int___ t2172 = __retval2158;
  return t2172;
}

// function: _ZSt25__uninitialized_fill_moveISt15_Deque_iteratorIiRiPiEiS3_SaIiEET_S5_S5_RKT0_T1_S9_RT2_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____uninitialized_fill_move_std___Deque_iterator_int__int___int____int__std___Deque_iterator_int__int___int____std__allocator_int___(struct std___Deque_iterator_int__int____int___ v2173, struct std___Deque_iterator_int__int____int___ v2174, int* v2175, struct std___Deque_iterator_int__int____int___ v2176, struct std___Deque_iterator_int__int____int___ v2177, struct std__allocator_int_* v2178) {
bb2179: ;
  struct std___Deque_iterator_int__int____int___ __result2180;
  struct std___Deque_iterator_int__int____int___ __mid2181;
  int* __x2182;
  struct std___Deque_iterator_int__int____int___ __first2183;
  struct std___Deque_iterator_int__int____int___ __last2184;
  struct std__allocator_int_* __alloc2185;
  struct std___Deque_iterator_int__int____int___ __retval2186;
  struct std___Deque_iterator_int__int____int___ agg_tmp02187;
  struct std___Deque_iterator_int__int____int___ agg_tmp12188;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__ __guard2189;
  struct std___Deque_iterator_int__int____int___ ref_tmp02190;
  struct std___Deque_iterator_int__int____int___ agg_tmp22191;
  struct std___Deque_iterator_int__int____int___ agg_tmp32192;
  struct std___Deque_iterator_int__int____int___ agg_tmp42193;
  __result2180 = v2173;
  __mid2181 = v2174;
  __x2182 = v2175;
  __first2183 = v2176;
  __last2184 = v2177;
  __alloc2185 = v2178;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp02187, &__result2180);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp12188, &__mid2181);
  int* t2194 = __x2182;
  struct std__allocator_int_* t2195 = __alloc2185;
  struct std___Deque_iterator_int__int____int___ t2196 = agg_tmp02187;
  struct std___Deque_iterator_int__int____int___ t2197 = agg_tmp12188;
  void_std____uninitialized_fill_a_std___Deque_iterator_int__int___int____int__int_(t2196, t2197, t2194, t2195);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__allocator_int_* t2198 = __alloc2185;
  std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int______UninitDestroyGuard(&__guard2189, &__result2180, t2198);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
    struct std___Deque_iterator_int__int____int___* r2199 = std___Deque_iterator_int__int___int____operator_(&__result2180, &__mid2181);
    std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp22191, &__first2183);
    std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp32192, &__last2184);
    std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp42193, &__mid2181);
    struct std__allocator_int_* t2200 = __alloc2185;
    struct std___Deque_iterator_int__int____int___ t2201 = agg_tmp22191;
    struct std___Deque_iterator_int__int____int___ t2202 = agg_tmp32192;
    struct std___Deque_iterator_int__int____int___ t2203 = agg_tmp42193;
    struct std___Deque_iterator_int__int____int___ r2204 = std___Deque_iterator_int__int___int___std____uninitialized_move_a_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____std__allocator_int___(t2201, t2202, t2203, t2200);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_______UninitDestroyGuard(&__guard2189);
      }
      struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ref_tmp02190 = r2204;
    struct std___Deque_iterator_int__int____int___* r2205 = std___Deque_iterator_int__int___int____operator_(&__result2180, &ref_tmp02190);
    std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_____release(&__guard2189);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_______UninitDestroyGuard(&__guard2189);
      }
      struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    std___Deque_iterator_int__int___int_____Deque_iterator(&__retval2186, &__result2180);
    struct std___Deque_iterator_int__int____int___ t2206 = __retval2186;
    struct std___Deque_iterator_int__int____int___ ret_val2207 = t2206;
    {
      std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_______UninitDestroyGuard(&__guard2189);
    }
    return ret_val2207;
  abort();
}

// function: _ZNSt5dequeIiSaIiEE13_M_insert_auxESt15_Deque_iteratorIiRiPiEmRKi
void std__deque_int__std__allocator_int______M_insert_aux(struct std__deque_int__std__allocator_int__* v2208, struct std___Deque_iterator_int__int____int___ v2209, unsigned long v2210, int* v2211) {
bb2212: ;
  struct std__deque_int__std__allocator_int__* this2213;
  struct std___Deque_iterator_int__int____int___ __pos2214;
  unsigned long __n2215;
  int* __x2216;
  long __elems_before2217;
  unsigned long __length2218;
  int __x_copy2219;
  this2213 = v2208;
  __pos2214 = v2209;
  __n2215 = v2210;
  __x2216 = v2211;
  struct std__deque_int__std__allocator_int__* t2220 = this2213;
  struct std___Deque_base_int__std__allocator_int__* base2221 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2222 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2221->_M_impl) + 0);
  long r2223 = std__operator__2(&__pos2214, &base2222->_M_start);
  __elems_before2217 = r2223;
  unsigned long r2224 = std__deque_int__std__allocator_int_____size___const(t2220);
  __length2218 = r2224;
  int* t2225 = __x2216;
  int t2226 = *t2225;
  __x_copy2219 = t2226;
    long t2227 = __elems_before2217;
    unsigned long t2228 = __length2218;
    unsigned long c2229 = 2;
    unsigned long b2230 = t2228 / c2229;
    long cast2231 = (long)b2230;
    _Bool c2232 = ((t2227 < cast2231)) ? 1 : 0;
    if (c2232) {
      struct std___Deque_iterator_int__int____int___ __new_start2233;
      struct std___Deque_iterator_int__int____int___ __old_start2234;
      struct std___Deque_iterator_int__int____int___ ref_tmp02235;
      unsigned long t2236 = __n2215;
      struct std___Deque_iterator_int__int____int___ r2237 = std__deque_int__std__allocator_int______M_reserve_elements_at_front(t2220, t2236);
      if (__cir_exc_active) {
        return;
      }
      __new_start2233 = r2237;
      struct std___Deque_base_int__std__allocator_int__* base2238 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2239 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2238->_M_impl) + 0);
      std___Deque_iterator_int__int___int_____Deque_iterator(&__old_start2234, &base2239->_M_start);
      struct std___Deque_base_int__std__allocator_int__* base2240 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2241 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2240->_M_impl) + 0);
      long t2242 = __elems_before2217;
      struct std___Deque_iterator_int__int____int___ r2243 = std__operator__5(&base2241->_M_start, t2242);
      ref_tmp02235 = r2243;
      struct std___Deque_iterator_int__int____int___* r2244 = std___Deque_iterator_int__int___int____operator_(&__pos2214, &ref_tmp02235);
            long t2246 = __elems_before2217;
            unsigned long t2247 = __n2215;
            long cast2248 = (long)t2247;
            _Bool c2249 = ((t2246 >= cast2248)) ? 1 : 0;
            if (c2249) {
              struct std___Deque_iterator_int__int____int___ __start_n2250;
              struct std___Deque_iterator_int__int____int___ agg_tmp02251;
              struct std___Deque_iterator_int__int____int___ agg_tmp12252;
              struct std___Deque_iterator_int__int____int___ agg_tmp22253;
              struct std___Deque_iterator_int__int____int___ agg_tmp32254;
              struct std___Deque_iterator_int__int____int___ agg_tmp42255;
              struct std___Deque_iterator_int__int____int___ agg_tmp52256;
              struct std___Deque_iterator_int__int____int___ agg_tmp62257;
              struct std___Deque_iterator_int__int____int___ agg_tmp72258;
              struct std___Deque_iterator_int__int____int___ agg_tmp82259;
              struct std___Deque_iterator_int__int____int___ agg_tmp92260;
              struct std___Deque_base_int__std__allocator_int__* base2261 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2262 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2261->_M_impl) + 0);
              unsigned long t2263 = __n2215;
              long cast2264 = (long)t2263;
              struct std___Deque_iterator_int__int____int___ r2265 = std__operator__5(&base2262->_M_start, cast2264);
              __start_n2250 = r2265;
              struct std___Deque_base_int__std__allocator_int__* base2266 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2267 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2266->_M_impl) + 0);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp02251, &base2267->_M_start);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp12252, &__start_n2250);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp22253, &__new_start2233);
              struct std___Deque_base_int__std__allocator_int__* base2268 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
              struct std__allocator_int_* r2269 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2268);
              struct std___Deque_iterator_int__int____int___ t2270 = agg_tmp02251;
              struct std___Deque_iterator_int__int____int___ t2271 = agg_tmp12252;
              struct std___Deque_iterator_int__int____int___ t2272 = agg_tmp22253;
              struct std___Deque_iterator_int__int____int___ r2273 = std___Deque_iterator_int__int___int___std____uninitialized_move_a_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____std__allocator_int___(t2270, t2271, t2272, r2269);
              if (__cir_exc_active) {
                goto cir_try_dispatch2245;
              }
              agg_tmp32254 = r2273;
              struct std___Deque_base_int__std__allocator_int__* base2274 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2275 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2274->_M_impl) + 0);
              struct std___Deque_iterator_int__int____int___* r2276 = std___Deque_iterator_int__int___int____operator_(&base2275->_M_start, &__new_start2233);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp42255, &__start_n2250);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp52256, &__pos2214);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp62257, &__old_start2234);
              struct std___Deque_iterator_int__int____int___ t2277 = agg_tmp42255;
              struct std___Deque_iterator_int__int____int___ t2278 = agg_tmp52256;
              struct std___Deque_iterator_int__int____int___ t2279 = agg_tmp62257;
              struct std___Deque_iterator_int__int____int___ r2280 = std___Deque_iterator_int__int___int___std__move_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(t2277, t2278, t2279);
              if (__cir_exc_active) {
                goto cir_try_dispatch2245;
              }
              agg_tmp72258 = r2280;
              unsigned long t2281 = __n2215;
              long cast2282 = (long)t2281;
              struct std___Deque_iterator_int__int____int___ r2283 = std__operator__3(&__pos2214, cast2282);
              agg_tmp82259 = r2283;
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp92260, &__pos2214);
              struct std___Deque_iterator_int__int____int___ t2284 = agg_tmp82259;
              struct std___Deque_iterator_int__int____int___ t2285 = agg_tmp92260;
              void_std__fill_std___Deque_iterator_int__int___int____int_(t2284, t2285, &__x_copy2219);
              if (__cir_exc_active) {
                goto cir_try_dispatch2245;
              }
            } else {
              struct std___Deque_iterator_int__int____int___ agg_tmp102286;
              struct std___Deque_iterator_int__int____int___ agg_tmp112287;
              struct std___Deque_iterator_int__int____int___ agg_tmp122288;
              struct std___Deque_iterator_int__int____int___ agg_tmp132289;
              struct std___Deque_iterator_int__int____int___ agg_tmp142290;
              struct std___Deque_iterator_int__int____int___ agg_tmp152291;
              struct std___Deque_base_int__std__allocator_int__* base2292 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2293 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2292->_M_impl) + 0);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp102286, &base2293->_M_start);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp112287, &__pos2214);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp122288, &__new_start2233);
              struct std___Deque_base_int__std__allocator_int__* base2294 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2295 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2294->_M_impl) + 0);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp132289, &base2295->_M_start);
              struct std___Deque_base_int__std__allocator_int__* base2296 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
              struct std__allocator_int_* r2297 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2296);
              struct std___Deque_iterator_int__int____int___ t2298 = agg_tmp102286;
              struct std___Deque_iterator_int__int____int___ t2299 = agg_tmp112287;
              struct std___Deque_iterator_int__int____int___ t2300 = agg_tmp122288;
              struct std___Deque_iterator_int__int____int___ t2301 = agg_tmp132289;
              void_std____uninitialized_move_fill_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____int__std__allocator_int___(t2298, t2299, t2300, t2301, &__x_copy2219, r2297);
              if (__cir_exc_active) {
                goto cir_try_dispatch2245;
              }
              struct std___Deque_base_int__std__allocator_int__* base2302 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2303 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2302->_M_impl) + 0);
              struct std___Deque_iterator_int__int____int___* r2304 = std___Deque_iterator_int__int___int____operator_(&base2303->_M_start, &__new_start2233);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp142290, &__old_start2234);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp152291, &__pos2214);
              struct std___Deque_iterator_int__int____int___ t2305 = agg_tmp142290;
              struct std___Deque_iterator_int__int____int___ t2306 = agg_tmp152291;
              void_std__fill_std___Deque_iterator_int__int___int____int_(t2305, t2306, &__x_copy2219);
              if (__cir_exc_active) {
                goto cir_try_dispatch2245;
              }
            }
        cir_try_dispatch2245: ;
        if (__cir_exc_active) {
        {
          int ca_tok2307 = 0;
          void* ca_exn2308 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
            struct std___Deque_base_int__std__allocator_int__* base2309 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
            int** t2310 = __new_start2233._M_node;
            struct std___Deque_base_int__std__allocator_int__* base2311 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
            struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2312 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2311->_M_impl) + 0);
            int** t2313 = base2312->_M_start._M_node;
            std___Deque_base_int__std__allocator_int______M_destroy_nodes(base2309, t2310, t2313);
            __cir_exc_active = 1;
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            return;
            __builtin_unreachable();
        }
        }
    } else {
      struct std___Deque_iterator_int__int____int___ __new_finish2314;
      struct std___Deque_iterator_int__int____int___ __old_finish2315;
      long __elems_after2316;
      struct std___Deque_iterator_int__int____int___ ref_tmp12317;
      unsigned long t2318 = __n2215;
      struct std___Deque_iterator_int__int____int___ r2319 = std__deque_int__std__allocator_int______M_reserve_elements_at_back(t2220, t2318);
      if (__cir_exc_active) {
        return;
      }
      __new_finish2314 = r2319;
      struct std___Deque_base_int__std__allocator_int__* base2320 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2321 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2320->_M_impl) + 0);
      std___Deque_iterator_int__int___int_____Deque_iterator(&__old_finish2315, &base2321->_M_finish);
      unsigned long t2322 = __length2218;
      long cast2323 = (long)t2322;
      long t2324 = __elems_before2217;
      long b2325 = cast2323 - t2324;
      __elems_after2316 = b2325;
      struct std___Deque_base_int__std__allocator_int__* base2326 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2327 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2326->_M_impl) + 0);
      long t2328 = __elems_after2316;
      struct std___Deque_iterator_int__int____int___ r2329 = std__operator__3(&base2327->_M_finish, t2328);
      ref_tmp12317 = r2329;
      struct std___Deque_iterator_int__int____int___* r2330 = std___Deque_iterator_int__int___int____operator_(&__pos2214, &ref_tmp12317);
            long t2332 = __elems_after2316;
            unsigned long t2333 = __n2215;
            long cast2334 = (long)t2333;
            _Bool c2335 = ((t2332 > cast2334)) ? 1 : 0;
            if (c2335) {
              struct std___Deque_iterator_int__int____int___ __finish_n2336;
              struct std___Deque_iterator_int__int____int___ agg_tmp162337;
              struct std___Deque_iterator_int__int____int___ agg_tmp172338;
              struct std___Deque_iterator_int__int____int___ agg_tmp182339;
              struct std___Deque_iterator_int__int____int___ agg_tmp192340;
              struct std___Deque_iterator_int__int____int___ agg_tmp202341;
              struct std___Deque_iterator_int__int____int___ agg_tmp212342;
              struct std___Deque_iterator_int__int____int___ agg_tmp222343;
              struct std___Deque_iterator_int__int____int___ agg_tmp232344;
              struct std___Deque_iterator_int__int____int___ agg_tmp242345;
              struct std___Deque_iterator_int__int____int___ agg_tmp252346;
              struct std___Deque_base_int__std__allocator_int__* base2347 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2348 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2347->_M_impl) + 0);
              unsigned long t2349 = __n2215;
              long cast2350 = (long)t2349;
              struct std___Deque_iterator_int__int____int___ r2351 = std__operator__3(&base2348->_M_finish, cast2350);
              __finish_n2336 = r2351;
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp162337, &__finish_n2336);
              struct std___Deque_base_int__std__allocator_int__* base2352 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2353 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2352->_M_impl) + 0);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp172338, &base2353->_M_finish);
              struct std___Deque_base_int__std__allocator_int__* base2354 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2355 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2354->_M_impl) + 0);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp182339, &base2355->_M_finish);
              struct std___Deque_base_int__std__allocator_int__* base2356 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
              struct std__allocator_int_* r2357 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2356);
              struct std___Deque_iterator_int__int____int___ t2358 = agg_tmp162337;
              struct std___Deque_iterator_int__int____int___ t2359 = agg_tmp172338;
              struct std___Deque_iterator_int__int____int___ t2360 = agg_tmp182339;
              struct std___Deque_iterator_int__int____int___ r2361 = std___Deque_iterator_int__int___int___std____uninitialized_move_a_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____std__allocator_int___(t2358, t2359, t2360, r2357);
              if (__cir_exc_active) {
                goto cir_try_dispatch2331;
              }
              agg_tmp192340 = r2361;
              struct std___Deque_base_int__std__allocator_int__* base2362 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2363 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2362->_M_impl) + 0);
              struct std___Deque_iterator_int__int____int___* r2364 = std___Deque_iterator_int__int___int____operator_(&base2363->_M_finish, &__new_finish2314);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp202341, &__pos2214);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp212342, &__finish_n2336);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp222343, &__old_finish2315);
              struct std___Deque_iterator_int__int____int___ t2365 = agg_tmp202341;
              struct std___Deque_iterator_int__int____int___ t2366 = agg_tmp212342;
              struct std___Deque_iterator_int__int____int___ t2367 = agg_tmp222343;
              struct std___Deque_iterator_int__int____int___ r2368 = std___Deque_iterator_int__int___int___std__move_backward_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(t2365, t2366, t2367);
              if (__cir_exc_active) {
                goto cir_try_dispatch2331;
              }
              agg_tmp232344 = r2368;
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp242345, &__pos2214);
              unsigned long t2369 = __n2215;
              long cast2370 = (long)t2369;
              struct std___Deque_iterator_int__int____int___ r2371 = std__operator__5(&__pos2214, cast2370);
              agg_tmp252346 = r2371;
              struct std___Deque_iterator_int__int____int___ t2372 = agg_tmp242345;
              struct std___Deque_iterator_int__int____int___ t2373 = agg_tmp252346;
              void_std__fill_std___Deque_iterator_int__int___int____int_(t2372, t2373, &__x_copy2219);
              if (__cir_exc_active) {
                goto cir_try_dispatch2331;
              }
            } else {
              struct std___Deque_iterator_int__int____int___ agg_tmp262374;
              struct std___Deque_iterator_int__int____int___ agg_tmp272375;
              struct std___Deque_iterator_int__int____int___ agg_tmp282376;
              struct std___Deque_iterator_int__int____int___ agg_tmp292377;
              struct std___Deque_iterator_int__int____int___ agg_tmp302378;
              struct std___Deque_iterator_int__int____int___ agg_tmp312379;
              struct std___Deque_iterator_int__int____int___ agg_tmp322380;
              struct std___Deque_base_int__std__allocator_int__* base2381 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2382 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2381->_M_impl) + 0);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp262374, &base2382->_M_finish);
              unsigned long t2383 = __n2215;
              long cast2384 = (long)t2383;
              struct std___Deque_iterator_int__int____int___ r2385 = std__operator__5(&__pos2214, cast2384);
              agg_tmp272375 = r2385;
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp282376, &__pos2214);
              struct std___Deque_base_int__std__allocator_int__* base2386 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2387 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2386->_M_impl) + 0);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp292377, &base2387->_M_finish);
              struct std___Deque_base_int__std__allocator_int__* base2388 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
              struct std__allocator_int_* r2389 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2388);
              struct std___Deque_iterator_int__int____int___ t2390 = agg_tmp262374;
              struct std___Deque_iterator_int__int____int___ t2391 = agg_tmp272375;
              struct std___Deque_iterator_int__int____int___ t2392 = agg_tmp282376;
              struct std___Deque_iterator_int__int____int___ t2393 = agg_tmp292377;
              struct std___Deque_iterator_int__int____int___ r2394 = std___Deque_iterator_int__int___int___std____uninitialized_fill_move_std___Deque_iterator_int__int___int____int__std___Deque_iterator_int__int___int____std__allocator_int___(t2390, t2391, &__x_copy2219, t2392, t2393, r2389);
              if (__cir_exc_active) {
                goto cir_try_dispatch2331;
              }
              agg_tmp302378 = r2394;
              struct std___Deque_base_int__std__allocator_int__* base2395 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2396 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2395->_M_impl) + 0);
              struct std___Deque_iterator_int__int____int___* r2397 = std___Deque_iterator_int__int___int____operator_(&base2396->_M_finish, &__new_finish2314);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp312379, &__pos2214);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp322380, &__old_finish2315);
              struct std___Deque_iterator_int__int____int___ t2398 = agg_tmp312379;
              struct std___Deque_iterator_int__int____int___ t2399 = agg_tmp322380;
              void_std__fill_std___Deque_iterator_int__int___int____int_(t2398, t2399, &__x_copy2219);
              if (__cir_exc_active) {
                goto cir_try_dispatch2331;
              }
            }
        cir_try_dispatch2331: ;
        if (__cir_exc_active) {
        {
          int ca_tok2400 = 0;
          void* ca_exn2401 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
            struct std___Deque_base_int__std__allocator_int__* base2402 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
            struct std___Deque_base_int__std__allocator_int__* base2403 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2220 + 0);
            struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2404 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2403->_M_impl) + 0);
            int** t2405 = base2404->_M_finish._M_node;
            int c2406 = 1;
            int** ptr2407 = &(t2405)[c2406];
            int** t2408 = __new_finish2314._M_node;
            int c2409 = 1;
            int** ptr2410 = &(t2408)[c2409];
            std___Deque_base_int__std__allocator_int______M_destroy_nodes(base2402, ptr2407, ptr2410);
            __cir_exc_active = 1;
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            return;
            __builtin_unreachable();
        }
        }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE14_M_fill_insertESt15_Deque_iteratorIiRiPiEmRKi
void std__deque_int__std__allocator_int______M_fill_insert(struct std__deque_int__std__allocator_int__* v2411, struct std___Deque_iterator_int__int____int___ v2412, unsigned long v2413, int* v2414) {
bb2415: ;
  struct std__deque_int__std__allocator_int__* this2416;
  struct std___Deque_iterator_int__int____int___ __pos2417;
  unsigned long __n2418;
  int* __x2419;
  this2416 = v2411;
  __pos2417 = v2412;
  __n2418 = v2413;
  __x2419 = v2414;
  struct std__deque_int__std__allocator_int__* t2420 = this2416;
    int* t2421 = __pos2417._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base2422 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2420 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2423 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2422->_M_impl) + 0);
    int* t2424 = base2423->_M_start._M_cur;
    _Bool c2425 = ((t2421 == t2424)) ? 1 : 0;
    if (c2425) {
      struct std___Deque_iterator_int__int____int___ __new_start2426;
      unsigned long t2427 = __n2418;
      struct std___Deque_iterator_int__int____int___ r2428 = std__deque_int__std__allocator_int______M_reserve_elements_at_front(t2420, t2427);
      if (__cir_exc_active) {
        return;
      }
      __new_start2426 = r2428;
        struct std___Deque_iterator_int__int____int___ agg_tmp02429;
        struct std___Deque_iterator_int__int____int___ agg_tmp12430;
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp02429, &__new_start2426);
          struct std___Deque_base_int__std__allocator_int__* base2432 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2420 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2433 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2432->_M_impl) + 0);
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp12430, &base2433->_M_start);
          int* t2434 = __x2419;
          struct std___Deque_base_int__std__allocator_int__* base2435 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2420 + 0);
          struct std__allocator_int_* r2436 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2435);
          struct std___Deque_iterator_int__int____int___ t2437 = agg_tmp02429;
          struct std___Deque_iterator_int__int____int___ t2438 = agg_tmp12430;
          void_std____uninitialized_fill_a_std___Deque_iterator_int__int___int____int__int_(t2437, t2438, t2434, r2436);
          if (__cir_exc_active) {
            goto cir_try_dispatch2431;
          }
          struct std___Deque_base_int__std__allocator_int__* base2439 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2420 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2440 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2439->_M_impl) + 0);
          struct std___Deque_iterator_int__int____int___* r2441 = std___Deque_iterator_int__int___int____operator_(&base2440->_M_start, &__new_start2426);
        cir_try_dispatch2431: ;
        if (__cir_exc_active) {
        {
          int ca_tok2442 = 0;
          void* ca_exn2443 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
            struct std___Deque_base_int__std__allocator_int__* base2444 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2420 + 0);
            int** t2445 = __new_start2426._M_node;
            struct std___Deque_base_int__std__allocator_int__* base2446 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2420 + 0);
            struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2447 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2446->_M_impl) + 0);
            int** t2448 = base2447->_M_start._M_node;
            std___Deque_base_int__std__allocator_int______M_destroy_nodes(base2444, t2445, t2448);
            __cir_exc_active = 1;
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            return;
            __builtin_unreachable();
        }
        }
    } else {
        int* t2449 = __pos2417._M_cur;
        struct std___Deque_base_int__std__allocator_int__* base2450 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2420 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2451 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2450->_M_impl) + 0);
        int* t2452 = base2451->_M_finish._M_cur;
        _Bool c2453 = ((t2449 == t2452)) ? 1 : 0;
        if (c2453) {
          struct std___Deque_iterator_int__int____int___ __new_finish2454;
          unsigned long t2455 = __n2418;
          struct std___Deque_iterator_int__int____int___ r2456 = std__deque_int__std__allocator_int______M_reserve_elements_at_back(t2420, t2455);
          if (__cir_exc_active) {
            return;
          }
          __new_finish2454 = r2456;
            struct std___Deque_iterator_int__int____int___ agg_tmp22457;
            struct std___Deque_iterator_int__int____int___ agg_tmp32458;
              struct std___Deque_base_int__std__allocator_int__* base2460 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2420 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2461 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2460->_M_impl) + 0);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp22457, &base2461->_M_finish);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp32458, &__new_finish2454);
              int* t2462 = __x2419;
              struct std___Deque_base_int__std__allocator_int__* base2463 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2420 + 0);
              struct std__allocator_int_* r2464 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2463);
              struct std___Deque_iterator_int__int____int___ t2465 = agg_tmp22457;
              struct std___Deque_iterator_int__int____int___ t2466 = agg_tmp32458;
              void_std____uninitialized_fill_a_std___Deque_iterator_int__int___int____int__int_(t2465, t2466, t2462, r2464);
              if (__cir_exc_active) {
                goto cir_try_dispatch2459;
              }
              struct std___Deque_base_int__std__allocator_int__* base2467 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2420 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2468 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2467->_M_impl) + 0);
              struct std___Deque_iterator_int__int____int___* r2469 = std___Deque_iterator_int__int___int____operator_(&base2468->_M_finish, &__new_finish2454);
            cir_try_dispatch2459: ;
            if (__cir_exc_active) {
            {
              int ca_tok2470 = 0;
              void* ca_exn2471 = (void*)__cir_exc_ptr;
              __cir_exc_active = 0;
                struct std___Deque_base_int__std__allocator_int__* base2472 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2420 + 0);
                struct std___Deque_base_int__std__allocator_int__* base2473 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2420 + 0);
                struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2474 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2473->_M_impl) + 0);
                int** t2475 = base2474->_M_finish._M_node;
                int c2476 = 1;
                int** ptr2477 = &(t2475)[c2476];
                int** t2478 = __new_finish2454._M_node;
                int c2479 = 1;
                int** ptr2480 = &(t2478)[c2479];
                std___Deque_base_int__std__allocator_int______M_destroy_nodes(base2472, ptr2477, ptr2480);
                __cir_exc_active = 1;
                {
                  if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                }
                return;
                __builtin_unreachable();
            }
            }
        } else {
          struct std___Deque_iterator_int__int____int___ agg_tmp42481;
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp42481, &__pos2417);
          unsigned long t2482 = __n2418;
          int* t2483 = __x2419;
          struct std___Deque_iterator_int__int____int___ t2484 = agg_tmp42481;
          std__deque_int__std__allocator_int______M_insert_aux(t2420, t2484, t2482, t2483);
          if (__cir_exc_active) {
            return;
          }
        }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ES1_PS1_
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v2485, int* v2486, int** v2487) {
bb2488: ;
  struct std___Deque_iterator_int__int____int___* this2489;
  int* __x2490;
  int** __y2491;
  this2489 = v2485;
  __x2490 = v2486;
  __y2491 = v2487;
  struct std___Deque_iterator_int__int____int___* t2492 = this2489;
  int* t2493 = __x2490;
  t2492->_M_cur = t2493;
  int** t2494 = __y2491;
  int* t2495 = *t2494;
  t2492->_M_first = t2495;
  int** t2496 = __y2491;
  int* t2497 = *t2496;
  unsigned long r2498 = std___Deque_iterator_int__int___int_____S_buffer_size();
  int* ptr2499 = &(t2497)[r2498];
  t2492->_M_last = ptr2499;
  int** t2500 = __y2491;
  t2492->_M_node = t2500;
  return;
}

// function: _ZNKSt15_Deque_iteratorIiRKiPS0_E13_M_const_castEv
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int_const___int_const_____M_const_cast___const(struct std___Deque_iterator_int_int___int___* v2501) {
bb2502: ;
  struct std___Deque_iterator_int_int___int___* this2503;
  struct std___Deque_iterator_int__int____int___ __retval2504;
  this2503 = v2501;
  struct std___Deque_iterator_int_int___int___* t2505 = this2503;
  int* t2506 = t2505->_M_cur;
  int** t2507 = t2505->_M_node;
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&__retval2504, t2506, t2507);
  struct std___Deque_iterator_int__int____int___ t2508 = __retval2504;
  return t2508;
}

// function: _ZStplRKSt15_Deque_iteratorIiRiPiEl
struct std___Deque_iterator_int__int____int___ std__operator__5(struct std___Deque_iterator_int__int____int___* v2509, long v2510) {
bb2511: ;
  struct std___Deque_iterator_int__int____int___* __x2512;
  long __n2513;
  struct std___Deque_iterator_int__int____int___ __retval2514;
  __x2512 = v2509;
  __n2513 = v2510;
  struct std___Deque_iterator_int__int____int___* t2515 = __x2512;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval2514, t2515);
  long t2516 = __n2513;
  struct std___Deque_iterator_int__int____int___* r2517 = std___Deque_iterator_int__int___int____operator___2(&__retval2514, t2516);
  struct std___Deque_iterator_int__int____int___ t2518 = __retval2514;
  return t2518;
}

// function: _ZNSt5dequeIiSaIiEE6insertESt15_Deque_iteratorIiRKiPS3_EmS4_
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____insert(struct std__deque_int__std__allocator_int__* v2519, struct std___Deque_iterator_int_int___int___ v2520, unsigned long v2521, int* v2522) {
bb2523: ;
  struct std__deque_int__std__allocator_int__* this2524;
  struct std___Deque_iterator_int_int___int___ __position2525;
  unsigned long __n2526;
  int* __x2527;
  struct std___Deque_iterator_int__int____int___ __retval2528;
  long __offset2529;
  struct std___Deque_iterator_int_int___int___ ref_tmp02530;
  struct std___Deque_iterator_int__int____int___ agg_tmp02531;
  struct std___Deque_iterator_int__int____int___ ref_tmp12532;
  this2524 = v2519;
  __position2525 = v2520;
  __n2526 = v2521;
  __x2527 = v2522;
  struct std__deque_int__std__allocator_int__* t2533 = this2524;
  struct std___Deque_iterator_int_int___int___ r2534 = std__deque_int__std__allocator_int_____cbegin___const(t2533);
  ref_tmp02530 = r2534;
  long r2535 = std__operator_(&__position2525, &ref_tmp02530);
  __offset2529 = r2535;
  struct std___Deque_iterator_int__int____int___ r2536 = std___Deque_iterator_int__int_const___int_const_____M_const_cast___const(&__position2525);
  agg_tmp02531 = r2536;
  unsigned long t2537 = __n2526;
  int* t2538 = __x2527;
  struct std___Deque_iterator_int__int____int___ t2539 = agg_tmp02531;
  std__deque_int__std__allocator_int______M_fill_insert(t2533, t2539, t2537, t2538);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Deque_iterator_int__int____int___ r2540 = std__deque_int__std__allocator_int_____begin(t2533);
  ref_tmp12532 = r2540;
  long t2541 = __offset2529;
  struct std___Deque_iterator_int__int____int___ r2542 = std__operator__5(&ref_tmp12532, t2541);
  __retval2528 = r2542;
  struct std___Deque_iterator_int__int____int___ t2543 = __retval2528;
  return t2543;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v2544) {
bb2545: ;
  struct std__deque_int__std__allocator_int__* this2546;
  struct std___Deque_iterator_int__int____int___ __retval2547;
  this2546 = v2544;
  struct std__deque_int__std__allocator_int__* t2548 = this2546;
  struct std___Deque_base_int__std__allocator_int__* base2549 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2548 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2550 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2549->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval2547, &base2550->_M_start);
  struct std___Deque_iterator_int__int____int___ t2551 = __retval2547;
  return t2551;
}

// function: _ZNSt15_Deque_iteratorIiRKiPS0_EC2IS_IiRiPiEvEERKT_
void std___Deque_iterator_int__int_const___int_const_____Deque_iterator_std___Deque_iterator_int__int___int____void_(struct std___Deque_iterator_int_int___int___* v2552, struct std___Deque_iterator_int__int____int___* v2553) {
bb2554: ;
  struct std___Deque_iterator_int_int___int___* this2555;
  struct std___Deque_iterator_int__int____int___* __x2556;
  this2555 = v2552;
  __x2556 = v2553;
  struct std___Deque_iterator_int_int___int___* t2557 = this2555;
  struct std___Deque_iterator_int__int____int___* t2558 = __x2556;
  int* t2559 = t2558->_M_cur;
  t2557->_M_cur = t2559;
  struct std___Deque_iterator_int__int____int___* t2560 = __x2556;
  int* t2561 = t2560->_M_first;
  t2557->_M_first = t2561;
  struct std___Deque_iterator_int__int____int___* t2562 = __x2556;
  int* t2563 = t2562->_M_last;
  t2557->_M_last = t2563;
  struct std___Deque_iterator_int__int____int___* t2564 = __x2556;
  int** t2565 = t2564->_M_node;
  t2557->_M_node = t2565;
  return;
}

// function: _ZNKSt5dequeIiSaIiEE5emptyEv
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* v2566) {
bb2567: ;
  struct std__deque_int__std__allocator_int__* this2568;
  _Bool __retval2569;
  this2568 = v2566;
  struct std__deque_int__std__allocator_int__* t2570 = this2568;
  struct std___Deque_base_int__std__allocator_int__* base2571 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2570 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2572 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2571->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base2573 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2570 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2574 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2573->_M_impl) + 0);
  _Bool r2575 = std__operator__(&base2572->_M_finish, &base2574->_M_start);
  __retval2569 = r2575;
  _Bool t2576 = __retval2569;
  return t2576;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v2577, int* v2578) {
bb2579: ;
  struct std__allocator_int_* __a2580;
  int* __p2581;
  __a2580 = v2577;
  __p2581 = v2578;
  int* t2582 = __p2581;
  void_std__destroy_at_int_(t2582);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_pop_back_auxEv
void std__deque_int__std__allocator_int______M_pop_back_aux(struct std__deque_int__std__allocator_int__* v2583) {
bb2584: ;
  struct std__deque_int__std__allocator_int__* this2585;
  this2585 = v2583;
  struct std__deque_int__std__allocator_int__* t2586 = this2585;
  struct std___Deque_base_int__std__allocator_int__* base2587 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2586 + 0);
  struct std___Deque_base_int__std__allocator_int__* base2588 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2586 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2589 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2588->_M_impl) + 0);
  int* t2590 = base2589->_M_finish._M_first;
  std___Deque_base_int__std__allocator_int______M_deallocate_node(base2587, t2590);
  struct std___Deque_base_int__std__allocator_int__* base2591 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2586 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2592 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2591->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base2593 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2586 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2594 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2593->_M_impl) + 0);
  int** t2595 = base2594->_M_finish._M_node;
  int c2596 = -1;
  int** ptr2597 = &(t2595)[c2596];
  std___Deque_iterator_int__int___int_____M_set_node(&base2592->_M_finish, ptr2597);
  struct std___Deque_base_int__std__allocator_int__* base2598 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2586 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2599 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2598->_M_impl) + 0);
  int* t2600 = base2599->_M_finish._M_last;
  int c2601 = -1;
  int* ptr2602 = &(t2600)[c2601];
  struct std___Deque_base_int__std__allocator_int__* base2603 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2586 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2604 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2603->_M_impl) + 0);
  base2604->_M_finish._M_cur = ptr2602;
  struct std___Deque_base_int__std__allocator_int__* base2605 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2586 + 0);
  struct std__allocator_int_* r2606 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2605);
  struct std___Deque_base_int__std__allocator_int__* base2607 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2586 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2608 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2607->_M_impl) + 0);
  int* t2609 = base2608->_M_finish._M_cur;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(r2606, t2609);
  return;
}

// function: _ZNSt5dequeIiSaIiEE8pop_backEv
void std__deque_int__std__allocator_int_____pop_back(struct std__deque_int__std__allocator_int__* v2610) {
bb2611: ;
  struct std__deque_int__std__allocator_int__* this2612;
  this2612 = v2610;
  struct std__deque_int__std__allocator_int__* t2613 = this2612;
    do {
          _Bool r2614 = std__deque_int__std__allocator_int_____empty___const(t2613);
          if (r2614) {
            char* cast2615 = (char*)&(_str_12);
            int c2616 = 1666;
            char* cast2617 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE8pop_backEv);
            char* cast2618 = (char*)&(_str_13);
            std____glibcxx_assert_fail(cast2615, c2616, cast2617, cast2618);
          }
      _Bool c2619 = 0;
      if (!c2619) break;
    } while (1);
    struct std___Deque_base_int__std__allocator_int__* base2620 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2613 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2621 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2620->_M_impl) + 0);
    int* t2622 = base2621->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base2623 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2613 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2624 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2623->_M_impl) + 0);
    int* t2625 = base2624->_M_finish._M_first;
    _Bool c2626 = ((t2622 != t2625)) ? 1 : 0;
    if (c2626) {
      struct std___Deque_base_int__std__allocator_int__* base2627 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2613 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2628 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2627->_M_impl) + 0);
      int* t2629 = base2628->_M_finish._M_cur;
      int c2630 = -1;
      int* ptr2631 = &(t2629)[c2630];
      base2628->_M_finish._M_cur = ptr2631;
      struct std___Deque_base_int__std__allocator_int__* base2632 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2613 + 0);
      struct std__allocator_int_* r2633 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2632);
      struct std___Deque_base_int__std__allocator_int__* base2634 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2613 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2635 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2634->_M_impl) + 0);
      int* t2636 = base2635->_M_finish._M_cur;
      void_std__allocator_traits_std__allocator_int_____destroy_int_(r2633, t2636);
    } else {
      std__deque_int__std__allocator_int______M_pop_back_aux(t2613);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v2637) {
bb2638: ;
  struct std__deque_int__std__allocator_int__* this2639;
  struct std___Deque_iterator_int__int____int___ agg_tmp02640;
  struct std___Deque_iterator_int__int____int___ agg_tmp12641;
  this2639 = v2637;
  struct std__deque_int__std__allocator_int__* t2642 = this2639;
    struct std___Deque_iterator_int__int____int___ r2643 = std__deque_int__std__allocator_int_____begin(t2642);
    agg_tmp02640 = r2643;
    struct std___Deque_iterator_int__int____int___ r2644 = std__deque_int__std__allocator_int_____end(t2642);
    agg_tmp12641 = r2644;
    struct std___Deque_base_int__std__allocator_int__* base2645 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2642 + 0);
    struct std__allocator_int_* r2646 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2645);
    struct std___Deque_iterator_int__int____int___ t2647 = agg_tmp02640;
    struct std___Deque_iterator_int__int____int___ t2648 = agg_tmp12641;
    std__deque_int__std__allocator_int______M_destroy_data(t2642, t2647, t2648, r2646);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base2649 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2642 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base2649);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base2650 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2642 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base2650);
  }
  return;
}

// function: main
int main() {
bb2651: ;
  int __retval2652;
  struct std__deque_int__std__allocator_int__ myints2653;
  struct std___Deque_iterator_int_int___int___ agg_tmp02654;
  struct std___Deque_iterator_int__int____int___ ref_tmp02655;
  int ref_tmp12656;
  struct std___Deque_iterator_int__int____int___ agg_tmp12657;
  int c2658 = 0;
  __retval2652 = c2658;
  std__deque_int__std__allocator_int_____deque(&myints2653);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    char* cast2659 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r2660 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2659);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&myints2653);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r2661 = std__deque_int__std__allocator_int_____size___const(&myints2653);
    int cast2662 = (int)r2661;
    struct std__basic_ostream_char__std__char_traits_char__* r2663 = std__ostream__operator__(r2660, cast2662);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&myints2653);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r2664 = std__ostream__operator___std__ostream_____(r2663, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&myints2653);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r2665 = std__deque_int__std__allocator_int_____size___const(&myints2653);
    unsigned long c2666 = 0;
    _Bool c2667 = ((r2665 == c2666)) ? 1 : 0;
    if (c2667) {
    } else {
      char* cast2668 = (char*)&(_str_1);
      char* c2669 = (char*)_str_2;
      unsigned int c2670 = 18;
      char* cast2671 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast2668, c2669, c2670, cast2671);
    }
      int i2672;
      int c2673 = 0;
      i2672 = c2673;
      while (1) {
        int t2675 = i2672;
        int c2676 = 5;
        _Bool c2677 = ((t2675 < c2676)) ? 1 : 0;
        if (!c2677) break;
        std__deque_int__std__allocator_int_____push_back(&myints2653, &i2672);
        if (__cir_exc_active) {
          {
            std__deque_int__std__allocator_int______deque(&myints2653);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step2674: ;
        int t2678 = i2672;
        int u2679 = t2678 + 1;
        i2672 = u2679;
      }
    char* cast2680 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r2681 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2680);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&myints2653);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r2682 = std__deque_int__std__allocator_int_____size___const(&myints2653);
    int cast2683 = (int)r2682;
    struct std__basic_ostream_char__std__char_traits_char__* r2684 = std__ostream__operator__(r2681, cast2683);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&myints2653);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r2685 = std__ostream__operator___std__ostream_____(r2684, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&myints2653);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r2686 = std__deque_int__std__allocator_int_____size___const(&myints2653);
    unsigned long c2687 = 5;
    _Bool c2688 = ((r2686 == c2687)) ? 1 : 0;
    if (c2688) {
    } else {
      char* cast2689 = (char*)&(_str_4);
      char* c2690 = (char*)_str_2;
      unsigned int c2691 = 21;
      char* cast2692 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast2689, c2690, c2691, cast2692);
    }
    struct std___Deque_iterator_int__int____int___ r2693 = std__deque_int__std__allocator_int_____begin(&myints2653);
    ref_tmp02655 = r2693;
    std___Deque_iterator_int__int_const___int_const_____Deque_iterator_std___Deque_iterator_int__int___int____void_(&agg_tmp02654, &ref_tmp02655);
    unsigned long c2694 = 5;
    int c2695 = 100;
    ref_tmp12656 = c2695;
    struct std___Deque_iterator_int_int___int___ t2696 = agg_tmp02654;
    struct std___Deque_iterator_int__int____int___ r2697 = std__deque_int__std__allocator_int_____insert(&myints2653, t2696, c2694, &ref_tmp12656);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&myints2653);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp12657 = r2697;
    char* cast2698 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r2699 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2698);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&myints2653);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r2700 = std__deque_int__std__allocator_int_____size___const(&myints2653);
    int cast2701 = (int)r2700;
    struct std__basic_ostream_char__std__char_traits_char__* r2702 = std__ostream__operator__(r2699, cast2701);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&myints2653);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r2703 = std__ostream__operator___std__ostream_____(r2702, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&myints2653);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r2704 = std__deque_int__std__allocator_int_____size___const(&myints2653);
    unsigned long c2705 = 10;
    _Bool c2706 = ((r2704 == c2705)) ? 1 : 0;
    if (c2706) {
    } else {
      char* cast2707 = (char*)&(_str_6);
      char* c2708 = (char*)_str_2;
      unsigned int c2709 = 24;
      char* cast2710 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast2707, c2708, c2709, cast2710);
    }
    std__deque_int__std__allocator_int_____pop_back(&myints2653);
    char* cast2711 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* r2712 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2711);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&myints2653);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r2713 = std__deque_int__std__allocator_int_____size___const(&myints2653);
    int cast2714 = (int)r2713;
    struct std__basic_ostream_char__std__char_traits_char__* r2715 = std__ostream__operator__(r2712, cast2714);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&myints2653);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r2716 = std__ostream__operator___std__ostream_____(r2715, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&myints2653);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r2717 = std__deque_int__std__allocator_int_____size___const(&myints2653);
    unsigned long c2718 = 9;
    _Bool c2719 = ((r2717 == c2718)) ? 1 : 0;
    if (c2719) {
    } else {
      char* cast2720 = (char*)&(_str_8);
      char* c2721 = (char*)_str_2;
      unsigned int c2722 = 27;
      char* cast2723 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast2720, c2721, c2722, cast2723);
    }
    int c2724 = 0;
    __retval2652 = c2724;
    int t2725 = __retval2652;
    int ret_val2726 = t2725;
    {
      std__deque_int__std__allocator_int______deque(&myints2653);
    }
    return ret_val2726;
  int t2727 = __retval2652;
  return t2727;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v2728) {
bb2729: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this2730;
  this2730 = v2728;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t2731 = this2730;
  struct std__allocator_int_* base2732 = (struct std__allocator_int_*)((char *)t2731 + 0);
  std__allocator_int___allocator(base2732);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2733 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t2731 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base2733);
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v2734) {
bb2735: ;
  unsigned long __size2736;
  unsigned long __retval2737;
  __size2736 = v2734;
  unsigned long t2738 = __size2736;
  unsigned long c2739 = 512;
  _Bool c2740 = ((t2738 < c2739)) ? 1 : 0;
  unsigned long ternary2741;
  if (c2740) {
    unsigned long c2742 = 512;
    unsigned long t2743 = __size2736;
    unsigned long b2744 = c2742 / t2743;
    ternary2741 = (unsigned long)b2744;
  } else {
    unsigned long c2745 = 1;
    ternary2741 = (unsigned long)c2745;
  }
  __retval2737 = ternary2741;
  unsigned long t2746 = __retval2737;
  return t2746;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v2747, unsigned long* v2748) {
bb2749: ;
  unsigned long* __a2750;
  unsigned long* __b2751;
  unsigned long* __retval2752;
  __a2750 = v2747;
  __b2751 = v2748;
    unsigned long* t2753 = __a2750;
    unsigned long t2754 = *t2753;
    unsigned long* t2755 = __b2751;
    unsigned long t2756 = *t2755;
    _Bool c2757 = ((t2754 < t2756)) ? 1 : 0;
    if (c2757) {
      unsigned long* t2758 = __b2751;
      __retval2752 = t2758;
      unsigned long* t2759 = __retval2752;
      return t2759;
    }
  unsigned long* t2760 = __a2750;
  __retval2752 = t2760;
  unsigned long* t2761 = __retval2752;
  return t2761;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v2762) {
bb2763: ;
  struct std___Deque_base_int__std__allocator_int__* this2764;
  struct std__allocator_int_* __retval2765;
  this2764 = v2762;
  struct std___Deque_base_int__std__allocator_int__* t2766 = this2764;
  struct std__allocator_int_* base2767 = (struct std__allocator_int_*)((char *)&(t2766->_M_impl) + 0);
  __retval2765 = base2767;
  struct std__allocator_int_* t2768 = __retval2765;
  return t2768;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v2769, struct std__allocator_int_* v2770) {
bb2771: ;
  struct std__allocator_int___* this2772;
  struct std__allocator_int_* unnamed2773;
  this2772 = v2769;
  unnamed2773 = v2770;
  struct std__allocator_int___* t2774 = this2772;
  struct std____new_allocator_int___* base2775 = (struct std____new_allocator_int___*)((char *)t2774 + 0);
  std____new_allocator_int______new_allocator(base2775);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v2776) {
bb2777: ;
  struct std___Deque_base_int__std__allocator_int__* this2778;
  struct std__allocator_int___ __retval2779;
  this2778 = v2776;
  struct std___Deque_base_int__std__allocator_int__* t2780 = this2778;
  struct std__allocator_int_* r2781 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t2780);
  std__allocator_int____allocator_int_(&__retval2779, r2781);
  struct std__allocator_int___ t2782 = __retval2779;
  return t2782;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb2783: ;
  _Bool __retval2784;
    _Bool c2785 = 0;
    __retval2784 = c2785;
    _Bool t2786 = __retval2784;
    return t2786;
  abort();
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v2787) {
bb2788: ;
  struct std____new_allocator_int___* this2789;
  unsigned long __retval2790;
  this2789 = v2787;
  struct std____new_allocator_int___* t2791 = this2789;
  unsigned long c2792 = 9223372036854775807;
  unsigned long c2793 = 8;
  unsigned long b2794 = c2792 / c2793;
  __retval2790 = b2794;
  unsigned long t2795 = __retval2790;
  return t2795;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v2796, unsigned long v2797, void* v2798) {
bb2799: ;
  struct std____new_allocator_int___* this2800;
  unsigned long __n2801;
  void* unnamed2802;
  int** __retval2803;
  this2800 = v2796;
  __n2801 = v2797;
  unnamed2802 = v2798;
  struct std____new_allocator_int___* t2804 = this2800;
    unsigned long t2805 = __n2801;
    unsigned long r2806 = std____new_allocator_int_____M_max_size___const(t2804);
    _Bool c2807 = ((t2805 > r2806)) ? 1 : 0;
    if (c2807) {
        unsigned long t2808 = __n2801;
        unsigned long c2809 = -1;
        unsigned long c2810 = 8;
        unsigned long b2811 = c2809 / c2810;
        _Bool c2812 = ((t2808 > b2811)) ? 1 : 0;
        if (c2812) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c2813 = 8;
    unsigned long c2814 = 16;
    _Bool c2815 = ((c2813 > c2814)) ? 1 : 0;
    if (c2815) {
      unsigned long __al2816;
      unsigned long c2817 = 8;
      __al2816 = c2817;
      unsigned long t2818 = __n2801;
      unsigned long c2819 = 8;
      unsigned long b2820 = t2818 * c2819;
      unsigned long t2821 = __al2816;
      void* r2822 = operator_new_2(b2820, t2821);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast2823 = (int**)r2822;
      __retval2803 = cast2823;
      int** t2824 = __retval2803;
      return t2824;
    }
  unsigned long t2825 = __n2801;
  unsigned long c2826 = 8;
  unsigned long b2827 = t2825 * c2826;
  void* r2828 = operator_new(b2827);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast2829 = (int**)r2828;
  __retval2803 = cast2829;
  int** t2830 = __retval2803;
  return t2830;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v2831, unsigned long v2832) {
bb2833: ;
  struct std__allocator_int___* this2834;
  unsigned long __n2835;
  int** __retval2836;
  this2834 = v2831;
  __n2835 = v2832;
  struct std__allocator_int___* t2837 = this2834;
    _Bool r2838 = std____is_constant_evaluated();
    if (r2838) {
        unsigned long t2839 = __n2835;
        unsigned long c2840 = 8;
        unsigned long ovr2841;
        _Bool ovf2842 = __builtin_mul_overflow(t2839, c2840, &ovr2841);
        __n2835 = ovr2841;
        if (ovf2842) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t2843 = __n2835;
      void* r2844 = operator_new(t2843);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast2845 = (int**)r2844;
      __retval2836 = cast2845;
      int** t2846 = __retval2836;
      return t2846;
    }
  struct std____new_allocator_int___* base2847 = (struct std____new_allocator_int___*)((char *)t2837 + 0);
  unsigned long t2848 = __n2835;
  void* c2849 = ((void*)0);
  int** r2850 = std____new_allocator_int____allocate(base2847, t2848, c2849);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval2836 = r2850;
  int** t2851 = __retval2836;
  return t2851;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v2852, unsigned long v2853) {
bb2854: ;
  struct std__allocator_int___* __a2855;
  unsigned long __n2856;
  int** __retval2857;
  __a2855 = v2852;
  __n2856 = v2853;
  struct std__allocator_int___* t2858 = __a2855;
  unsigned long t2859 = __n2856;
  int** r2860 = std__allocator_int____allocate(t2858, t2859);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval2857 = r2860;
  int** t2861 = __retval2857;
  return t2861;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v2862, unsigned long v2863) {
bb2864: ;
  struct std___Deque_base_int__std__allocator_int__* this2865;
  unsigned long __n2866;
  int** __retval2867;
  struct std__allocator_int___ __map_alloc2868;
  this2865 = v2862;
  __n2866 = v2863;
  struct std___Deque_base_int__std__allocator_int__* t2869 = this2865;
  struct std__allocator_int___ r2870 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t2869);
  __map_alloc2868 = r2870;
  unsigned long t2871 = __n2866;
  int** r2872 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc2868, t2871);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval2867 = r2872;
  int** t2873 = __retval2867;
  return t2873;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v2874) {
bb2875: ;
  struct std____new_allocator_int_* this2876;
  unsigned long __retval2877;
  this2876 = v2874;
  struct std____new_allocator_int_* t2878 = this2876;
  unsigned long c2879 = 9223372036854775807;
  unsigned long c2880 = 4;
  unsigned long b2881 = c2879 / c2880;
  __retval2877 = b2881;
  unsigned long t2882 = __retval2877;
  return t2882;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v2883, unsigned long v2884, void* v2885) {
bb2886: ;
  struct std____new_allocator_int_* this2887;
  unsigned long __n2888;
  void* unnamed2889;
  int* __retval2890;
  this2887 = v2883;
  __n2888 = v2884;
  unnamed2889 = v2885;
  struct std____new_allocator_int_* t2891 = this2887;
    unsigned long t2892 = __n2888;
    unsigned long r2893 = std____new_allocator_int____M_max_size___const(t2891);
    _Bool c2894 = ((t2892 > r2893)) ? 1 : 0;
    if (c2894) {
        unsigned long t2895 = __n2888;
        unsigned long c2896 = -1;
        unsigned long c2897 = 4;
        unsigned long b2898 = c2896 / c2897;
        _Bool c2899 = ((t2895 > b2898)) ? 1 : 0;
        if (c2899) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c2900 = 4;
    unsigned long c2901 = 16;
    _Bool c2902 = ((c2900 > c2901)) ? 1 : 0;
    if (c2902) {
      unsigned long __al2903;
      unsigned long c2904 = 4;
      __al2903 = c2904;
      unsigned long t2905 = __n2888;
      unsigned long c2906 = 4;
      unsigned long b2907 = t2905 * c2906;
      unsigned long t2908 = __al2903;
      void* r2909 = operator_new_2(b2907, t2908);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast2910 = (int*)r2909;
      __retval2890 = cast2910;
      int* t2911 = __retval2890;
      return t2911;
    }
  unsigned long t2912 = __n2888;
  unsigned long c2913 = 4;
  unsigned long b2914 = t2912 * c2913;
  void* r2915 = operator_new(b2914);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast2916 = (int*)r2915;
  __retval2890 = cast2916;
  int* t2917 = __retval2890;
  return t2917;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v2918, unsigned long v2919) {
bb2920: ;
  struct std__allocator_int_* this2921;
  unsigned long __n2922;
  int* __retval2923;
  this2921 = v2918;
  __n2922 = v2919;
  struct std__allocator_int_* t2924 = this2921;
    _Bool r2925 = std____is_constant_evaluated();
    if (r2925) {
        unsigned long t2926 = __n2922;
        unsigned long c2927 = 4;
        unsigned long ovr2928;
        _Bool ovf2929 = __builtin_mul_overflow(t2926, c2927, &ovr2928);
        __n2922 = ovr2928;
        if (ovf2929) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t2930 = __n2922;
      void* r2931 = operator_new(t2930);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast2932 = (int*)r2931;
      __retval2923 = cast2932;
      int* t2933 = __retval2923;
      return t2933;
    }
  struct std____new_allocator_int_* base2934 = (struct std____new_allocator_int_*)((char *)t2924 + 0);
  unsigned long t2935 = __n2922;
  void* c2936 = ((void*)0);
  int* r2937 = std____new_allocator_int___allocate(base2934, t2935, c2936);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval2923 = r2937;
  int* t2938 = __retval2923;
  return t2938;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v2939, unsigned long v2940) {
bb2941: ;
  struct std__allocator_int_* __a2942;
  unsigned long __n2943;
  int* __retval2944;
  __a2942 = v2939;
  __n2943 = v2940;
  struct std__allocator_int_* t2945 = __a2942;
  unsigned long t2946 = __n2943;
  int* r2947 = std__allocator_int___allocate(t2945, t2946);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval2944 = r2947;
  int* t2948 = __retval2944;
  return t2948;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v2949) {
bb2950: ;
  struct std___Deque_base_int__std__allocator_int__* this2951;
  int* __retval2952;
  this2951 = v2949;
  struct std___Deque_base_int__std__allocator_int__* t2953 = this2951;
  struct std__allocator_int_* base2954 = (struct std__allocator_int_*)((char *)&(t2953->_M_impl) + 0);
  unsigned long c2955 = 4;
  unsigned long r2956 = std____deque_buf_size(c2955);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r2957 = std__allocator_traits_std__allocator_int_____allocate(base2954, r2956);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval2952 = r2957;
  int* t2958 = __retval2952;
  return t2958;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v2959, int* v2960, unsigned long v2961) {
bb2962: ;
  struct std____new_allocator_int_* this2963;
  int* __p2964;
  unsigned long __n2965;
  this2963 = v2959;
  __p2964 = v2960;
  __n2965 = v2961;
  struct std____new_allocator_int_* t2966 = this2963;
    unsigned long c2967 = 4;
    unsigned long c2968 = 16;
    _Bool c2969 = ((c2967 > c2968)) ? 1 : 0;
    if (c2969) {
      int* t2970 = __p2964;
      void* cast2971 = (void*)t2970;
      unsigned long t2972 = __n2965;
      unsigned long c2973 = 4;
      unsigned long b2974 = t2972 * c2973;
      unsigned long c2975 = 4;
      operator_delete_3(cast2971, b2974, c2975);
      return;
    }
  int* t2976 = __p2964;
  void* cast2977 = (void*)t2976;
  unsigned long t2978 = __n2965;
  unsigned long c2979 = 4;
  unsigned long b2980 = t2978 * c2979;
  operator_delete_2(cast2977, b2980);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v2981, int* v2982, unsigned long v2983) {
bb2984: ;
  struct std__allocator_int_* this2985;
  int* __p2986;
  unsigned long __n2987;
  this2985 = v2981;
  __p2986 = v2982;
  __n2987 = v2983;
  struct std__allocator_int_* t2988 = this2985;
    _Bool r2989 = std____is_constant_evaluated();
    if (r2989) {
      int* t2990 = __p2986;
      void* cast2991 = (void*)t2990;
      operator_delete(cast2991);
      return;
    }
  struct std____new_allocator_int_* base2992 = (struct std____new_allocator_int_*)((char *)t2988 + 0);
  int* t2993 = __p2986;
  unsigned long t2994 = __n2987;
  std____new_allocator_int___deallocate(base2992, t2993, t2994);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v2995, int* v2996, unsigned long v2997) {
bb2998: ;
  struct std__allocator_int_* __a2999;
  int* __p3000;
  unsigned long __n3001;
  __a2999 = v2995;
  __p3000 = v2996;
  __n3001 = v2997;
  struct std__allocator_int_* t3002 = __a2999;
  int* t3003 = __p3000;
  unsigned long t3004 = __n3001;
  std__allocator_int___deallocate(t3002, t3003, t3004);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v3005, int* v3006) {
bb3007: ;
  struct std___Deque_base_int__std__allocator_int__* this3008;
  int* __p3009;
  this3008 = v3005;
  __p3009 = v3006;
  struct std___Deque_base_int__std__allocator_int__* t3010 = this3008;
  struct std__allocator_int_* base3011 = (struct std__allocator_int_*)((char *)&(t3010->_M_impl) + 0);
  int* t3012 = __p3009;
  unsigned long c3013 = 4;
  unsigned long r3014 = std____deque_buf_size(c3013);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base3011, t3012, r3014);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v3015, int** v3016, int** v3017) {
bb3018: ;
  struct std___Deque_base_int__std__allocator_int__* this3019;
  int** __nstart3020;
  int** __nfinish3021;
  this3019 = v3015;
  __nstart3020 = v3016;
  __nfinish3021 = v3017;
  struct std___Deque_base_int__std__allocator_int__* t3022 = this3019;
    int** __n3023;
    int** t3024 = __nstart3020;
    __n3023 = t3024;
    while (1) {
      int** t3026 = __n3023;
      int** t3027 = __nfinish3021;
      _Bool c3028 = ((t3026 < t3027)) ? 1 : 0;
      if (!c3028) break;
      int** t3029 = __n3023;
      int* t3030 = *t3029;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t3022, t3030);
    for_step3025: ;
      int** t3031 = __n3023;
      int c3032 = 1;
      int** ptr3033 = &(t3031)[c3032];
      __n3023 = ptr3033;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v3034, int** v3035, int** v3036) {
bb3037: ;
  struct std___Deque_base_int__std__allocator_int__* this3038;
  int** __nstart3039;
  int** __nfinish3040;
  int** __cur3041;
  this3038 = v3034;
  __nstart3039 = v3035;
  __nfinish3040 = v3036;
  struct std___Deque_base_int__std__allocator_int__* t3042 = this3038;
        int** t3044 = __nstart3039;
        __cur3041 = t3044;
        while (1) {
          int** t3046 = __cur3041;
          int** t3047 = __nfinish3040;
          _Bool c3048 = ((t3046 < t3047)) ? 1 : 0;
          if (!c3048) break;
          int* r3049 = std___Deque_base_int__std__allocator_int______M_allocate_node(t3042);
          if (__cir_exc_active) {
            goto cir_try_dispatch3043;
          }
          int** t3050 = __cur3041;
          *t3050 = r3049;
        for_step3045: ;
          int** t3051 = __cur3041;
          int c3052 = 1;
          int** ptr3053 = &(t3051)[c3052];
          __cur3041 = ptr3053;
        }
    cir_try_dispatch3043: ;
    if (__cir_exc_active) {
    {
      int ca_tok3054 = 0;
      void* ca_exn3055 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t3056 = __nstart3039;
        int** t3057 = __cur3041;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t3042, t3056, t3057);
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  return;
}

// function: _ZNSt15__new_allocatorIPiE10deallocateEPS0_m
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v3058, int** v3059, unsigned long v3060) {
bb3061: ;
  struct std____new_allocator_int___* this3062;
  int** __p3063;
  unsigned long __n3064;
  this3062 = v3058;
  __p3063 = v3059;
  __n3064 = v3060;
  struct std____new_allocator_int___* t3065 = this3062;
    unsigned long c3066 = 8;
    unsigned long c3067 = 16;
    _Bool c3068 = ((c3066 > c3067)) ? 1 : 0;
    if (c3068) {
      int** t3069 = __p3063;
      void* cast3070 = (void*)t3069;
      unsigned long t3071 = __n3064;
      unsigned long c3072 = 8;
      unsigned long b3073 = t3071 * c3072;
      unsigned long c3074 = 8;
      operator_delete_3(cast3070, b3073, c3074);
      return;
    }
  int** t3075 = __p3063;
  void* cast3076 = (void*)t3075;
  unsigned long t3077 = __n3064;
  unsigned long c3078 = 8;
  unsigned long b3079 = t3077 * c3078;
  operator_delete_2(cast3076, b3079);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v3080, int** v3081, unsigned long v3082) {
bb3083: ;
  struct std__allocator_int___* this3084;
  int** __p3085;
  unsigned long __n3086;
  this3084 = v3080;
  __p3085 = v3081;
  __n3086 = v3082;
  struct std__allocator_int___* t3087 = this3084;
    _Bool r3088 = std____is_constant_evaluated();
    if (r3088) {
      int** t3089 = __p3085;
      void* cast3090 = (void*)t3089;
      operator_delete(cast3090);
      return;
    }
  struct std____new_allocator_int___* base3091 = (struct std____new_allocator_int___*)((char *)t3087 + 0);
  int** t3092 = __p3085;
  unsigned long t3093 = __n3086;
  std____new_allocator_int____deallocate(base3091, t3092, t3093);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v3094, int** v3095, unsigned long v3096) {
bb3097: ;
  struct std__allocator_int___* __a3098;
  int** __p3099;
  unsigned long __n3100;
  __a3098 = v3094;
  __p3099 = v3095;
  __n3100 = v3096;
  struct std__allocator_int___* t3101 = __a3098;
  int** t3102 = __p3099;
  unsigned long t3103 = __n3100;
  std__allocator_int____deallocate(t3101, t3102, t3103);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v3104, int** v3105, unsigned long v3106) {
bb3107: ;
  struct std___Deque_base_int__std__allocator_int__* this3108;
  int** __p3109;
  unsigned long __n3110;
  struct std__allocator_int___ __map_alloc3111;
  this3108 = v3104;
  __p3109 = v3105;
  __n3110 = v3106;
  struct std___Deque_base_int__std__allocator_int__* t3112 = this3108;
  struct std__allocator_int___ r3113 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t3112);
  __map_alloc3111 = r3113;
  int** t3114 = __p3109;
  unsigned long t3115 = __n3110;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc3111, t3114, t3115);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size() {
bb3116: ;
  unsigned long __retval3117;
  unsigned long c3118 = 4;
  unsigned long r3119 = std____deque_buf_size(c3118);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval3117 = r3119;
  unsigned long t3120 = __retval3117;
  return t3120;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v3121, int** v3122) {
bb3123: ;
  struct std___Deque_iterator_int__int____int___* this3124;
  int** __new_node3125;
  this3124 = v3121;
  __new_node3125 = v3122;
  struct std___Deque_iterator_int__int____int___* t3126 = this3124;
  int** t3127 = __new_node3125;
  t3126->_M_node = t3127;
  int** t3128 = __new_node3125;
  int* t3129 = *t3128;
  t3126->_M_first = t3129;
  int* t3130 = t3126->_M_first;
  unsigned long r3131 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast3132 = (long)r3131;
  int* ptr3133 = &(t3130)[cast3132];
  t3126->_M_last = ptr3133;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v3134, unsigned long v3135) {
bb3136: ;
  struct std___Deque_base_int__std__allocator_int__* this3137;
  unsigned long __num_elements3138;
  unsigned long __num_nodes3139;
  unsigned long ref_tmp03140;
  unsigned long ref_tmp13141;
  int** __nstart3142;
  int** __nfinish3143;
  this3137 = v3134;
  __num_elements3138 = v3135;
  struct std___Deque_base_int__std__allocator_int__* t3144 = this3137;
  unsigned long t3145 = __num_elements3138;
  unsigned long c3146 = 4;
  unsigned long r3147 = std____deque_buf_size(c3146);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b3148 = t3145 / r3147;
  unsigned long c3149 = 1;
  unsigned long b3150 = b3148 + c3149;
  __num_nodes3139 = b3150;
  unsigned long c3151 = 8;
  ref_tmp03140 = c3151;
  unsigned long t3152 = __num_nodes3139;
  unsigned long c3153 = 2;
  unsigned long b3154 = t3152 + c3153;
  ref_tmp13141 = b3154;
  unsigned long* r3155 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp03140, &ref_tmp13141);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t3156 = *r3155;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3157 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3144->_M_impl) + 0);
  base3157->_M_map_size = t3156;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3158 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3144->_M_impl) + 0);
  unsigned long t3159 = base3158->_M_map_size;
  int** r3160 = std___Deque_base_int__std__allocator_int______M_allocate_map(t3144, t3159);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3161 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3144->_M_impl) + 0);
  base3161->_M_map = r3160;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3162 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3144->_M_impl) + 0);
  int** t3163 = base3162->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3164 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3144->_M_impl) + 0);
  unsigned long t3165 = base3164->_M_map_size;
  unsigned long t3166 = __num_nodes3139;
  unsigned long b3167 = t3165 - t3166;
  unsigned long c3168 = 2;
  unsigned long b3169 = b3167 / c3168;
  int** ptr3170 = &(t3163)[b3169];
  __nstart3142 = ptr3170;
  int** t3171 = __nstart3142;
  unsigned long t3172 = __num_nodes3139;
  int** ptr3173 = &(t3171)[t3172];
  __nfinish3143 = ptr3173;
      int** t3175 = __nstart3142;
      int** t3176 = __nfinish3143;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t3144, t3175, t3176);
      if (__cir_exc_active) {
        goto cir_try_dispatch3174;
      }
    cir_try_dispatch3174: ;
    if (__cir_exc_active) {
    {
      int ca_tok3177 = 0;
      void* ca_exn3178 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3179 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3144->_M_impl) + 0);
        int** t3180 = base3179->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3181 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3144->_M_impl) + 0);
        unsigned long t3182 = base3181->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t3144, t3180, t3182);
        int** c3183 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3184 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3144->_M_impl) + 0);
        base3184->_M_map = c3183;
        unsigned long c3185 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3186 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3144->_M_impl) + 0);
        base3186->_M_map_size = c3185;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3187 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3144->_M_impl) + 0);
  int** t3188 = __nstart3142;
  std___Deque_iterator_int__int___int_____M_set_node(&base3187->_M_start, t3188);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3189 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3144->_M_impl) + 0);
  int** t3190 = __nfinish3143;
  int c3191 = -1;
  int** ptr3192 = &(t3190)[c3191];
  std___Deque_iterator_int__int___int_____M_set_node(&base3189->_M_finish, ptr3192);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3193 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3144->_M_impl) + 0);
  int* t3194 = base3193->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3195 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3144->_M_impl) + 0);
  base3195->_M_start._M_cur = t3194;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3196 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3144->_M_impl) + 0);
  int* t3197 = base3196->_M_finish._M_first;
  unsigned long t3198 = __num_elements3138;
  unsigned long c3199 = 4;
  unsigned long r3200 = std____deque_buf_size(c3199);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b3201 = t3198 % r3200;
  int* ptr3202 = &(t3197)[b3201];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3203 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3144->_M_impl) + 0);
  base3203->_M_finish._M_cur = ptr3202;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v3204) {
bb3205: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this3206;
  this3206 = v3204;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t3207 = this3206;
  {
    struct std__allocator_int_* base3208 = (struct std__allocator_int_*)((char *)t3207 + 0);
    std__allocator_int____allocator(base3208);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v3209) {
bb3210: ;
  struct std___Deque_base_int__std__allocator_int__* this3211;
  this3211 = v3209;
  struct std___Deque_base_int__std__allocator_int__* t3212 = this3211;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t3212->_M_impl);
    unsigned long c3213 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t3212, c3213);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t3212->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v3214) {
bb3215: ;
  struct std___Deque_base_int__std__allocator_int__* this3216;
  this3216 = v3214;
  struct std___Deque_base_int__std__allocator_int__* t3217 = this3216;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3218 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3217->_M_impl) + 0);
      int** t3219 = base3218->_M_map;
      _Bool cast3220 = (_Bool)t3219;
      if (cast3220) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3221 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3217->_M_impl) + 0);
        int** t3222 = base3221->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3223 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3217->_M_impl) + 0);
        int** t3224 = base3223->_M_finish._M_node;
        int c3225 = 1;
        int** ptr3226 = &(t3224)[c3225];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t3217, t3222, ptr3226);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3227 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3217->_M_impl) + 0);
        int** t3228 = base3227->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3229 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3217->_M_impl) + 0);
        unsigned long t3230 = base3229->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t3217, t3228, t3230);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t3217->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v3231) {
bb3232: ;
  struct std____new_allocator_int_* this3233;
  this3233 = v3231;
  struct std____new_allocator_int_* t3234 = this3233;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v3235) {
bb3236: ;
  struct std__allocator_int_* this3237;
  this3237 = v3235;
  struct std__allocator_int_* t3238 = this3237;
  struct std____new_allocator_int_* base3239 = (struct std____new_allocator_int_*)((char *)t3238 + 0);
  std____new_allocator_int_____new_allocator(base3239);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_3(struct std___Deque_iterator_int__int____int___* v3240) {
bb3241: ;
  struct std___Deque_iterator_int__int____int___* this3242;
  this3242 = v3240;
  struct std___Deque_iterator_int__int____int___* t3243 = this3242;
  int* c3244 = ((void*)0);
  t3243->_M_cur = c3244;
  int* c3245 = ((void*)0);
  t3243->_M_first = c3245;
  int* c3246 = ((void*)0);
  t3243->_M_last = c3246;
  int** c3247 = ((void*)0);
  t3243->_M_node = c3247;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v3248) {
bb3249: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this3250;
  this3250 = v3248;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t3251 = this3250;
  int** c3252 = ((void*)0);
  t3251->_M_map = c3252;
  unsigned long c3253 = 0;
  t3251->_M_map_size = c3253;
  std___Deque_iterator_int__int___int_____Deque_iterator_3(&t3251->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_3(&t3251->_M_finish);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v3254) {
bb3255: ;
  struct std__allocator_int_* this3256;
  this3256 = v3254;
  struct std__allocator_int_* t3257 = this3256;
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v3258) {
bb3259: ;
  struct std____new_allocator_int___* this3260;
  this3260 = v3258;
  struct std____new_allocator_int___* t3261 = this3260;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v3262) {
bb3263: ;
  int* __location3264;
  __location3264 = v3262;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v3265, int* v3266) {
bb3267: ;
  int* __first3268;
  int* __last3269;
  __first3268 = v3265;
  __last3269 = v3266;
      _Bool r3270 = std____is_constant_evaluated();
      if (r3270) {
          while (1) {
            int* t3272 = __first3268;
            int* t3273 = __last3269;
            _Bool c3274 = ((t3272 != t3273)) ? 1 : 0;
            if (!c3274) break;
            int* t3275 = __first3268;
            void_std__destroy_at_int_(t3275);
            if (__cir_exc_active) {
              return;
            }
          for_step3271: ;
            int* t3276 = __first3268;
            int c3277 = 1;
            int* ptr3278 = &(t3276)[c3277];
            __first3268 = ptr3278;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v3279, int* v3280, struct std__allocator_int_* v3281) {
bb3282: ;
  int* __first3283;
  int* __last3284;
  struct std__allocator_int_* unnamed3285;
  __first3283 = v3279;
  __last3284 = v3280;
  unnamed3285 = v3281;
  int* t3286 = __first3283;
  int* t3287 = __last3284;
  void_std___Destroy_int__(t3286, t3287);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb3288: ;
  unsigned long __retval3289;
  unsigned long c3290 = 4;
  unsigned long r3291 = std____deque_buf_size(c3290);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval3289 = r3291;
  unsigned long t3292 = __retval3289;
  return t3292;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v3293, struct std___Deque_iterator_int__int____int___ v3294, struct std___Deque_iterator_int__int____int___ v3295) {
bb3296: ;
  struct std__deque_int__std__allocator_int__* this3297;
  struct std___Deque_iterator_int__int____int___ __first3298;
  struct std___Deque_iterator_int__int____int___ __last3299;
  this3297 = v3293;
  __first3298 = v3294;
  __last3299 = v3295;
  struct std__deque_int__std__allocator_int__* t3300 = this3297;
    int** __node3301;
    int** t3302 = __first3298._M_node;
    int c3303 = 1;
    int** ptr3304 = &(t3302)[c3303];
    __node3301 = ptr3304;
    while (1) {
      int** t3306 = __node3301;
      int** t3307 = __last3299._M_node;
      _Bool c3308 = ((t3306 < t3307)) ? 1 : 0;
      if (!c3308) break;
      int** t3309 = __node3301;
      int* t3310 = *t3309;
      int** t3311 = __node3301;
      int* t3312 = *t3311;
      unsigned long r3313 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr3314 = &(t3312)[r3313];
      struct std___Deque_base_int__std__allocator_int__* base3315 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t3300 + 0);
      struct std__allocator_int_* r3316 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base3315);
      void_std___Destroy_int___int_(t3310, ptr3314, r3316);
      if (__cir_exc_active) {
        return;
      }
    for_step3305: ;
      int** t3317 = __node3301;
      int c3318 = 1;
      int** ptr3319 = &(t3317)[c3318];
      __node3301 = ptr3319;
    }
    int** t3320 = __first3298._M_node;
    int** t3321 = __last3299._M_node;
    _Bool c3322 = ((t3320 != t3321)) ? 1 : 0;
    if (c3322) {
      int* t3323 = __first3298._M_cur;
      int* t3324 = __first3298._M_last;
      struct std___Deque_base_int__std__allocator_int__* base3325 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t3300 + 0);
      struct std__allocator_int_* r3326 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base3325);
      void_std___Destroy_int___int_(t3323, t3324, r3326);
      if (__cir_exc_active) {
        return;
      }
      int* t3327 = __last3299._M_first;
      int* t3328 = __last3299._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base3329 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t3300 + 0);
      struct std__allocator_int_* r3330 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base3329);
      void_std___Destroy_int___int_(t3327, t3328, r3330);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t3331 = __first3298._M_cur;
      int* t3332 = __last3299._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base3333 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t3300 + 0);
      struct std__allocator_int_* r3334 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base3333);
      void_std___Destroy_int___int_(t3331, t3332, r3334);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v3335, struct std___Deque_iterator_int__int____int___* v3336) {
bb3337: ;
  struct std___Deque_iterator_int__int____int___* this3338;
  struct std___Deque_iterator_int__int____int___* __x3339;
  this3338 = v3335;
  __x3339 = v3336;
  struct std___Deque_iterator_int__int____int___* t3340 = this3338;
  struct std___Deque_iterator_int__int____int___* t3341 = __x3339;
  int* t3342 = t3341->_M_cur;
  t3340->_M_cur = t3342;
  struct std___Deque_iterator_int__int____int___* t3343 = __x3339;
  int* t3344 = t3343->_M_first;
  t3340->_M_first = t3344;
  struct std___Deque_iterator_int__int____int___* t3345 = __x3339;
  int* t3346 = t3345->_M_last;
  t3340->_M_last = t3346;
  struct std___Deque_iterator_int__int____int___* t3347 = __x3339;
  int** t3348 = t3347->_M_node;
  t3340->_M_node = t3348;
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v3349, struct std___Deque_iterator_int__int____int___ v3350, struct std___Deque_iterator_int__int____int___ v3351, struct std__allocator_int_* v3352) {
bb3353: ;
  struct std__deque_int__std__allocator_int__* this3354;
  struct std___Deque_iterator_int__int____int___ __first3355;
  struct std___Deque_iterator_int__int____int___ __last3356;
  struct std__allocator_int_* unnamed3357;
  this3354 = v3349;
  __first3355 = v3350;
  __last3356 = v3351;
  unnamed3357 = v3352;
  struct std__deque_int__std__allocator_int__* t3358 = this3354;
    _Bool c3359 = 0;
    if (c3359) {
      struct std___Deque_iterator_int__int____int___ agg_tmp03360;
      struct std___Deque_iterator_int__int____int___ agg_tmp13361;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp03360, &__first3355);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp13361, &__last3356);
      struct std___Deque_iterator_int__int____int___ t3362 = agg_tmp03360;
      struct std___Deque_iterator_int__int____int___ t3363 = agg_tmp13361;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t3358, t3362, t3363);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v3364) {
bb3365: ;
  struct std__deque_int__std__allocator_int__* this3366;
  struct std___Deque_iterator_int__int____int___ __retval3367;
  this3366 = v3364;
  struct std__deque_int__std__allocator_int__* t3368 = this3366;
  struct std___Deque_base_int__std__allocator_int__* base3369 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t3368 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3370 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base3369->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval3367, &base3370->_M_finish);
  struct std___Deque_iterator_int__int____int___ t3371 = __retval3367;
  return t3371;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v3372) {
bb3373: ;
  struct std___Deque_base_int__std__allocator_int__* this3374;
  struct std__allocator_int_* __retval3375;
  this3374 = v3372;
  struct std___Deque_base_int__std__allocator_int__* t3376 = this3374;
  struct std__allocator_int_* base3377 = (struct std__allocator_int_*)((char *)&(t3376->_M_impl) + 0);
  __retval3375 = base3377;
  struct std__allocator_int_* t3378 = __retval3375;
  return t3378;
}

// function: _ZSt8_DestroyISt15_Deque_iteratorIiRiPiEEvT_S4_
void void_std___Destroy_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v3379, struct std___Deque_iterator_int__int____int___ v3380) {
bb3381: ;
  struct std___Deque_iterator_int__int____int___ __first3382;
  struct std___Deque_iterator_int__int____int___ __last3383;
  __first3382 = v3379;
  __last3383 = v3380;
      _Bool r3384 = std____is_constant_evaluated();
      if (r3384) {
          while (1) {
            _Bool r3386 = std__operator__(&__first3382, &__last3383);
            _Bool u3387 = !r3386;
            if (!u3387) break;
            int* r3388 = std___Deque_iterator_int__int___int____operator____const(&__first3382);
            void_std__destroy_at_int_(r3388);
            if (__cir_exc_active) {
              return;
            }
          for_step3385: ;
            struct std___Deque_iterator_int__int____int___* r3389 = std___Deque_iterator_int__int___int____operator___3(&__first3382);
          }
      }
  return;
}

// function: _ZSt8_DestroyISt15_Deque_iteratorIiRiPiEiEvT_S4_RSaIT0_E
void void_std___Destroy_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ v3390, struct std___Deque_iterator_int__int____int___ v3391, struct std__allocator_int_* v3392) {
bb3393: ;
  struct std___Deque_iterator_int__int____int___ __first3394;
  struct std___Deque_iterator_int__int____int___ __last3395;
  struct std__allocator_int_* unnamed3396;
  struct std___Deque_iterator_int__int____int___ agg_tmp03397;
  struct std___Deque_iterator_int__int____int___ agg_tmp13398;
  __first3394 = v3390;
  __last3395 = v3391;
  unnamed3396 = v3392;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp03397, &__first3394);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp13398, &__last3395);
  struct std___Deque_iterator_int__int____int___ t3399 = agg_tmp03397;
  struct std___Deque_iterator_int__int____int___ t3400 = agg_tmp13398;
  void_std___Destroy_std___Deque_iterator_int__int___int____(t3399, t3400);
  if (__cir_exc_active) {
    return;
  }
  return;
}

