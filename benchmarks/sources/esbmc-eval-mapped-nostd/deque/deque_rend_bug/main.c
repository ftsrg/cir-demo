extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____new_allocator_int___ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__iterator_std__random_access_iterator_tag__int__long__int____int___ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__reverse_iterator_std___Deque_iterator_int__int____int____ { struct std___Deque_iterator_int__int____int___ current; };
struct std__strong_ordering { char _M_value; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };

struct std____cmp_cat____unspec __const_main_agg_tmp1;
struct std____cmp_cat____unspec __const__ZStssRKSt15_Deque_iteratorIiRiPiES4__agg_tmp1;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[18] = "mydeque contains:";
char _str_1[2] = " ";
char _str_2[22] = "rit != mydeque.rend()";
char _str_3[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_rend_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[48] = "cannot create std::deque larger than max_size()";
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* p0);
void std__reverse_iterator_std___Deque_iterator_int__int___int______reverse_iterator_2(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* p0);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* p0, int* p1, int* p2);
long std__operator__2(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* p0);
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
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__3(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
void std__reverse_iterator_std___Deque_iterator_int__int___int______reverse_iterator(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* p0, struct std___Deque_iterator_int__int____int___ p1);
struct std__reverse_iterator_std___Deque_iterator_int__int____int____ std__deque_int__std__allocator_int_____rbegin(struct std__deque_int__std__allocator_int__* p0);
struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* std__iterator_std__random_access_iterator_tag__int__long__int___int____operator_(struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* p0, struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* p1);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
struct std__reverse_iterator_std___Deque_iterator_int__int____int____* std__reverse_iterator_std___Deque_iterator_int__int___int______operator_(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* p0, struct std__reverse_iterator_std___Deque_iterator_int__int____int____* p1);
_Bool std__operator_(struct std__strong_ordering p0, struct std____cmp_cat____unspec p1);
_Bool std__operator___2(struct std__strong_ordering p0, struct std____cmp_cat____unspec p1);
struct std__strong_ordering std__operator___(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
struct std___Deque_iterator_int__int____int___ std__reverse_iterator_std___Deque_iterator_int__int___int______base___const(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* p0);
struct std__strong_ordering _ZStssITkSt20three_way_comparableSt15_Deque_iteratorIiRiPiEENSt8__detail18__cmp3way_res_implIT_S6_E4typeERKSt16reverse_iteratorIS6_ESC_(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* p0, struct std__reverse_iterator_std___Deque_iterator_int__int____int____* p1);
struct std__reverse_iterator_std___Deque_iterator_int__int____int____ std__deque_int__std__allocator_int_____rend(struct std__deque_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* p0);
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* p0);
int* std__reverse_iterator_std___Deque_iterator_int__int___int______operator____const(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* p0);
struct std__reverse_iterator_std___Deque_iterator_int__int____int____* std__reverse_iterator_std___Deque_iterator_int__int___int______operator__(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* p0);
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
_Bool _ZSteqISt15_Deque_iteratorIiRiPiEEbRKSt16reverse_iteratorIT_ES8_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* p0, struct std__reverse_iterator_std___Deque_iterator_int__int____int____* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* p0);
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p0);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* p0);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
unsigned long std__deque_int__std__allocator_int______S_buffer_size();
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__allocator_int_* p3);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* p0);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* p0);
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* p0);

// function: _ZNSt5dequeIiSaIiEEC2Ev
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* v0) {
bb1:
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

// function: _ZNSt16reverse_iteratorISt15_Deque_iteratorIiRiPiEEC2Ev
void std__reverse_iterator_std___Deque_iterator_int__int___int______reverse_iterator_2(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* v5) {
bb6:
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* this7;
  this7 = v5;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t8 = this7;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* base9 = (struct std__iterator_std__random_access_iterator_tag__int__long__int____int___*)((char *)t8 + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t8->current);
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v10, int* v11) {
bb12:
  int* __location13;
  int* __args14;
  int* __retval15;
  void* __loc16;
  __location13 = v10;
  __args14 = v11;
  int* t17 = __location13;
  void* cast18 = (void*)t17;
  __loc16 = cast18;
    void* t19 = __loc16;
    int* cast20 = (int*)t19;
    int* t21 = __args14;
    int t22 = *t21;
    *cast20 = t22;
    __retval15 = cast20;
    int* t23 = __retval15;
    return t23;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v24, int* v25, int* v26) {
bb27:
  struct std__allocator_int_* __a28;
  int* __p29;
  int* __args30;
  __a28 = v24;
  __p29 = v25;
  __args30 = v26;
  int* t31 = __p29;
  int* t32 = __args30;
  int* r33 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t31, t32);
  return;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiES4_
long std__operator__2(struct std___Deque_iterator_int__int____int___* v34, struct std___Deque_iterator_int__int____int___* v35) {
bb36:
  struct std___Deque_iterator_int__int____int___* __x37;
  struct std___Deque_iterator_int__int____int___* __y38;
  long __retval39;
  __x37 = v34;
  __y38 = v35;
  unsigned long r40 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast41 = (long)r40;
  struct std___Deque_iterator_int__int____int___* t42 = __x37;
  int** t43 = t42->_M_node;
  struct std___Deque_iterator_int__int____int___* t44 = __y38;
  int** t45 = t44->_M_node;
  long diff46 = t43 - t45;
  struct std___Deque_iterator_int__int____int___* t47 = __x37;
  int** t48 = t47->_M_node;
  _Bool cast49 = (_Bool)t48;
  long cast50 = (long)cast49;
  long b51 = diff46 - cast50;
  long b52 = cast41 * b51;
  struct std___Deque_iterator_int__int____int___* t53 = __x37;
  int* t54 = t53->_M_cur;
  struct std___Deque_iterator_int__int____int___* t55 = __x37;
  int* t56 = t55->_M_first;
  long diff57 = t54 - t56;
  long b58 = b52 + diff57;
  struct std___Deque_iterator_int__int____int___* t59 = __y38;
  int* t60 = t59->_M_last;
  struct std___Deque_iterator_int__int____int___* t61 = __y38;
  int* t62 = t61->_M_cur;
  long diff63 = t60 - t62;
  long b64 = b58 + diff63;
  __retval39 = b64;
  long t65 = __retval39;
  return t65;
}

// function: _ZNKSt5dequeIiSaIiEE4sizeEv
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* v66) {
bb67:
  struct std__deque_int__std__allocator_int__* this68;
  unsigned long __retval69;
  unsigned long __sz70;
  this68 = v66;
  struct std__deque_int__std__allocator_int__* t71 = this68;
  struct std___Deque_base_int__std__allocator_int__* base72 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t71 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base73 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base72->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base74 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t71 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base75 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base74->_M_impl) + 0);
  long r76 = std__operator__2(&base73->_M_finish, &base75->_M_start);
  unsigned long cast77 = (unsigned long)r76;
  __sz70 = cast77;
    unsigned long t78 = __sz70;
    unsigned long r79 = std__deque_int__std__allocator_int_____max_size___const(t71);
    _Bool c80 = ((t78 > r79)) ? 1 : 0;
    if (c80) {
      __builtin_unreachable();
    }
  unsigned long t81 = __sz70;
  __retval69 = t81;
  unsigned long t82 = __retval69;
  return t82;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v83, unsigned long* v84) {
bb85:
  unsigned long* __a86;
  unsigned long* __b87;
  unsigned long* __retval88;
  __a86 = v83;
  __b87 = v84;
    unsigned long* t89 = __b87;
    unsigned long t90 = *t89;
    unsigned long* t91 = __a86;
    unsigned long t92 = *t91;
    _Bool c93 = ((t90 < t92)) ? 1 : 0;
    if (c93) {
      unsigned long* t94 = __b87;
      __retval88 = t94;
      unsigned long* t95 = __retval88;
      return t95;
    }
  unsigned long* t96 = __a86;
  __retval88 = t96;
  unsigned long* t97 = __retval88;
  return t97;
}

// function: _ZNSt5dequeIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* v98) {
bb99:
  struct std__allocator_int_* __a100;
  unsigned long __retval101;
  unsigned long __diffmax102;
  unsigned long __allocmax103;
  __a100 = v98;
  unsigned long c104 = 9223372036854775807;
  __diffmax102 = c104;
  unsigned long c105 = 4611686018427387903;
  __allocmax103 = c105;
  unsigned long* r106 = unsigned_long_const__std__min_unsigned_long_(&__diffmax102, &__allocmax103);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t107 = *r106;
  __retval101 = t107;
  unsigned long t108 = __retval101;
  return t108;
}

// function: _ZNKSt5dequeIiSaIiEE8max_sizeEv
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* v109) {
bb110:
  struct std__deque_int__std__allocator_int__* this111;
  unsigned long __retval112;
  this111 = v109;
  struct std__deque_int__std__allocator_int__* t113 = this111;
  struct std___Deque_base_int__std__allocator_int__* base114 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t113 + 0);
  struct std__allocator_int_* r115 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(base114);
  unsigned long r116 = std__deque_int__std__allocator_int______S_max_size(r115);
  __retval112 = r116;
  unsigned long t117 = __retval112;
  return t117;
}

// function: _ZSt12__niter_wrapIPPiET_RKS2_S2_
int** int___std____niter_wrap_int___(int*** v118, int** v119) {
bb120:
  int*** unnamed121;
  int** __res122;
  int** __retval123;
  unnamed121 = v118;
  __res122 = v119;
  int** t124 = __res122;
  __retval123 = t124;
  int** t125 = __retval123;
  return t125;
}

// function: _ZSt10__distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_int_____difference_type_std____distance_int___(int** v126, int** v127, struct std__random_access_iterator_tag v128) {
bb129:
  int** __first130;
  int** __last131;
  struct std__random_access_iterator_tag unnamed132;
  long __retval133;
  __first130 = v126;
  __last131 = v127;
  unnamed132 = v128;
  int** t134 = __last131;
  int** t135 = __first130;
  long diff136 = t134 - t135;
  __retval133 = diff136;
  long t137 = __retval133;
  return t137;
}

// function: _ZSt19__iterator_categoryIPPiENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_int_____iterator_category_std____iterator_category_int___(int*** v138) {
bb139:
  int*** unnamed140;
  struct std__random_access_iterator_tag __retval141;
  unnamed140 = v138;
  struct std__random_access_iterator_tag t142 = __retval141;
  return t142;
}

// function: _ZSt8distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_int_____difference_type_std__distance_int___(int** v143, int** v144) {
bb145:
  int** __first146;
  int** __last147;
  long __retval148;
  struct std__random_access_iterator_tag agg_tmp0149;
  __first146 = v143;
  __last147 = v144;
  int** t150 = __first146;
  int** t151 = __last147;
  struct std__random_access_iterator_tag r152 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(&__first146);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp0149 = r152;
  struct std__random_access_iterator_tag t153 = agg_tmp0149;
  long r154 = std__iterator_traits_int_____difference_type_std____distance_int___(t150, t151, t153);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval148 = r154;
  long t155 = __retval148;
  return t155;
}

// function: _ZSt12__assign_oneILb0EPPiS1_EvRT0_RT1_
void void_std____assign_one_false__int____int___(int*** v156, int*** v157) {
bb158:
  int*** __out159;
  int*** __in160;
  __out159 = v156;
  __in160 = v157;
    int*** t161 = __in160;
    int** t162 = *t161;
    int* t163 = *t162;
    int*** t164 = __out159;
    int** t165 = *t164;
    *t165 = t163;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPPiS1_S1_ET2_T0_T1_S2_
int** int___std____copy_move_a2_false__int____int____int___(int** v166, int** v167, int** v168) {
bb169:
  int** __first170;
  int** __last171;
  int** __result172;
  int** __retval173;
  __first170 = v166;
  __last171 = v167;
  __result172 = v168;
      _Bool r174 = std____is_constant_evaluated();
      if (r174) {
      } else {
          long __n175;
          int** t176 = __first170;
          int** t177 = __last171;
          long r178 = std__iterator_traits_int_____difference_type_std__distance_int___(t176, t177);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n175 = r178;
            long t179 = __n175;
            long c180 = 1;
            _Bool c181 = ((t179 > c180)) ? 1 : 0;
            if (c181) {
              int** t182 = __result172;
              void* cast183 = (void*)t182;
              int** t184 = __first170;
              void* cast185 = (void*)t184;
              long t186 = __n175;
              unsigned long cast187 = (unsigned long)t186;
              unsigned long c188 = 8;
              unsigned long b189 = cast187 * c188;
              void* r190 = memmove(cast183, cast185, b189);
              long t191 = __n175;
              int** t192 = __result172;
              int** ptr193 = &(t192)[t191];
              __result172 = ptr193;
            } else {
                long t194 = __n175;
                long c195 = 1;
                _Bool c196 = ((t194 == c195)) ? 1 : 0;
                if (c196) {
                  void_std____assign_one_false__int____int___(&__result172, &__first170);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                  int** t197 = __result172;
                  int c198 = 1;
                  int** ptr199 = &(t197)[c198];
                  __result172 = ptr199;
                }
            }
          int** t200 = __result172;
          __retval173 = t200;
          int** t201 = __retval173;
          return t201;
      }
    while (1) {
      int** t203 = __first170;
      int** t204 = __last171;
      _Bool c205 = ((t203 != t204)) ? 1 : 0;
      if (!c205) break;
      void_std____assign_one_false__int____int___(&__result172, &__first170);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
    for_step202: ;
      int** t206 = __result172;
      int c207 = 1;
      int** ptr208 = &(t206)[c207];
      __result172 = ptr208;
      int** t209 = __first170;
      int c210 = 1;
      int** ptr211 = &(t209)[c210];
      __first170 = ptr211;
    }
  int** t212 = __result172;
  __retval173 = t212;
  int** t213 = __retval173;
  return t213;
}

// function: _ZSt14__copy_move_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a1_false__int____int___(int** v214, int** v215, int** v216) {
bb217:
  int** __first218;
  int** __last219;
  int** __result220;
  int** __retval221;
  __first218 = v214;
  __last219 = v215;
  __result220 = v216;
  int** t222 = __first218;
  int** t223 = __last219;
  int** t224 = __result220;
  int** r225 = int___std____copy_move_a2_false__int____int____int___(t222, t223, t224);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval221 = r225;
  int** t226 = __retval221;
  return t226;
}

// function: _ZSt12__niter_baseIPPiET_S2_
int** int___std____niter_base_int___(int** v227) {
bb228:
  int** __it229;
  int** __retval230;
  __it229 = v227;
  int** t231 = __it229;
  __retval230 = t231;
  int** t232 = __retval230;
  return t232;
}

// function: _ZSt13__copy_move_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a_false__int____int___(int** v233, int** v234, int** v235) {
bb236:
  int** __first237;
  int** __last238;
  int** __result239;
  int** __retval240;
  __first237 = v233;
  __last238 = v234;
  __result239 = v235;
  int** t241 = __first237;
  int** r242 = int___std____niter_base_int___(t241);
  int** t243 = __last238;
  int** r244 = int___std____niter_base_int___(t243);
  int** t245 = __result239;
  int** r246 = int___std____niter_base_int___(t245);
  int** r247 = int___std____copy_move_a1_false__int____int___(r242, r244, r246);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r248 = int___std____niter_wrap_int___(&__result239, r247);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval240 = r248;
  int** t249 = __retval240;
  return t249;
}

// function: _ZSt12__miter_baseIPPiET_S2_
int** int___std____miter_base_int___(int** v250) {
bb251:
  int** __it252;
  int** __retval253;
  __it252 = v250;
  int** t254 = __it252;
  __retval253 = t254;
  int** t255 = __retval253;
  return t255;
}

// function: _ZSt4copyIPPiS1_ET0_T_S3_S2_
int** int___std__copy_int____int___(int** v256, int** v257, int** v258) {
bb259:
  int** __first260;
  int** __last261;
  int** __result262;
  int** __retval263;
  __first260 = v256;
  __last261 = v257;
  __result262 = v258;
  int** t264 = __first260;
  int** r265 = int___std____miter_base_int___(t264);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t266 = __last261;
  int** r267 = int___std____miter_base_int___(t266);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t268 = __result262;
  int** r269 = int___std____copy_move_a_false__int____int___(r265, r267, t268);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval263 = r269;
  int** t270 = __retval263;
  return t270;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb271:
  _Bool __retval272;
    _Bool c273 = 0;
    __retval272 = c273;
    _Bool t274 = __retval272;
    return t274;
  abort();
}

// function: _ZSt9__advanceIPPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int____long_(int*** v275, long v276, struct std__random_access_iterator_tag v277) {
bb278:
  int*** __i279;
  long __n280;
  struct std__random_access_iterator_tag unnamed281;
  __i279 = v275;
  __n280 = v276;
  unnamed281 = v277;
    long t282 = __n280;
    _Bool isconst283 = 0;
    _Bool ternary284;
    if (isconst283) {
      long t285 = __n280;
      long c286 = 1;
      _Bool c287 = ((t285 == c286)) ? 1 : 0;
      ternary284 = (_Bool)c287;
    } else {
      _Bool c288 = 0;
      ternary284 = (_Bool)c288;
    }
    if (ternary284) {
      int*** t289 = __i279;
      int** t290 = *t289;
      int c291 = 1;
      int** ptr292 = &(t290)[c291];
      *t289 = ptr292;
    } else {
        long t293 = __n280;
        _Bool isconst294 = 0;
        _Bool ternary295;
        if (isconst294) {
          long t296 = __n280;
          long c297 = -1;
          _Bool c298 = ((t296 == c297)) ? 1 : 0;
          ternary295 = (_Bool)c298;
        } else {
          _Bool c299 = 0;
          ternary295 = (_Bool)c299;
        }
        if (ternary295) {
          int*** t300 = __i279;
          int** t301 = *t300;
          int c302 = -1;
          int** ptr303 = &(t301)[c302];
          *t300 = ptr303;
        } else {
          long t304 = __n280;
          int*** t305 = __i279;
          int** t306 = *t305;
          int** ptr307 = &(t306)[t304];
          *t305 = ptr307;
        }
    }
  return;
}

// function: _ZSt7advanceIPPilEvRT_T0_
void void_std__advance_int____long_(int*** v308, long v309) {
bb310:
  int*** __i311;
  long __n312;
  long __d313;
  struct std__random_access_iterator_tag agg_tmp0314;
  __i311 = v308;
  __n312 = v309;
  long t315 = __n312;
  __d313 = t315;
  int*** t316 = __i311;
  long t317 = __d313;
  int*** t318 = __i311;
  struct std__random_access_iterator_tag r319 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(t318);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0314 = r319;
  struct std__random_access_iterator_tag t320 = agg_tmp0314;
  void_std____advance_int____long_(t316, t317, t320);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a2_false__int____int___(int** v321, int** v322, int** v323) {
bb324:
  int** __first325;
  int** __last326;
  int** __result327;
  int** __retval328;
  __first325 = v321;
  __last326 = v322;
  __result327 = v323;
      _Bool r329 = std__is_constant_evaluated();
      if (r329) {
      } else {
          long __n330;
          int** t331 = __first325;
          int** t332 = __last326;
          long r333 = std__iterator_traits_int_____difference_type_std__distance_int___(t331, t332);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n330 = r333;
          long t334 = __n330;
          long u335 = -t334;
          void_std__advance_int____long_(&__result327, u335);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
            long t336 = __n330;
            long c337 = 1;
            _Bool c338 = ((t336 > c337)) ? 1 : 0;
            if (c338) {
              int** t339 = __result327;
              void* cast340 = (void*)t339;
              int** t341 = __first325;
              void* cast342 = (void*)t341;
              long t343 = __n330;
              unsigned long cast344 = (unsigned long)t343;
              unsigned long c345 = 8;
              unsigned long b346 = cast344 * c345;
              void* r347 = memmove(cast340, cast342, b346);
            } else {
                long t348 = __n330;
                long c349 = 1;
                _Bool c350 = ((t348 == c349)) ? 1 : 0;
                if (c350) {
                  void_std____assign_one_false__int____int___(&__result327, &__first325);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                }
            }
          int** t351 = __result327;
          __retval328 = t351;
          int** t352 = __retval328;
          return t352;
      }
    while (1) {
      int** t353 = __first325;
      int** t354 = __last326;
      _Bool c355 = ((t353 != t354)) ? 1 : 0;
      if (!c355) break;
        int** t356 = __last326;
        int c357 = -1;
        int** ptr358 = &(t356)[c357];
        __last326 = ptr358;
        int** t359 = __result327;
        int c360 = -1;
        int** ptr361 = &(t359)[c360];
        __result327 = ptr361;
        void_std____assign_one_false__int____int___(&__result327, &__last326);
        if (__cir_exc_active) {
          int** __cir_eh_ret = (int**)0;
          return __cir_eh_ret;
        }
    }
  int** t362 = __result327;
  __retval328 = t362;
  int** t363 = __retval328;
  return t363;
}

// function: _ZSt23__copy_move_backward_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a1_false__int____int___(int** v364, int** v365, int** v366) {
bb367:
  int** __first368;
  int** __last369;
  int** __result370;
  int** __retval371;
  __first368 = v364;
  __last369 = v365;
  __result370 = v366;
  int** t372 = __first368;
  int** t373 = __last369;
  int** t374 = __result370;
  int** r375 = int___std____copy_move_backward_a2_false__int____int___(t372, t373, t374);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval371 = r375;
  int** t376 = __retval371;
  return t376;
}

// function: _ZSt22__copy_move_backward_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a_false__int____int___(int** v377, int** v378, int** v379) {
bb380:
  int** __first381;
  int** __last382;
  int** __result383;
  int** __retval384;
  __first381 = v377;
  __last382 = v378;
  __result383 = v379;
  int** t385 = __first381;
  int** r386 = int___std____niter_base_int___(t385);
  int** t387 = __last382;
  int** r388 = int___std____niter_base_int___(t387);
  int** t389 = __result383;
  int** r390 = int___std____niter_base_int___(t389);
  int** r391 = int___std____copy_move_backward_a1_false__int____int___(r386, r388, r390);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r392 = int___std____niter_wrap_int___(&__result383, r391);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval384 = r392;
  int** t393 = __retval384;
  return t393;
}

// function: _ZSt13copy_backwardIPPiS1_ET0_T_S3_S2_
int** int___std__copy_backward_int____int___(int** v394, int** v395, int** v396) {
bb397:
  int** __first398;
  int** __last399;
  int** __result400;
  int** __retval401;
  __first398 = v394;
  __last399 = v395;
  __result400 = v396;
  int** t402 = __first398;
  int** r403 = int___std____miter_base_int___(t402);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t404 = __last399;
  int** r405 = int___std____miter_base_int___(t404);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t406 = __result400;
  int** r407 = int___std____copy_move_backward_a_false__int____int___(r403, r405, t406);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval401 = r407;
  int** t408 = __retval401;
  return t408;
}

// function: _ZNSt5dequeIiSaIiEE17_M_reallocate_mapEmb
void std__deque_int__std__allocator_int______M_reallocate_map(struct std__deque_int__std__allocator_int__* v409, unsigned long v410, _Bool v411) {
bb412:
  struct std__deque_int__std__allocator_int__* this413;
  unsigned long __nodes_to_add414;
  _Bool __add_at_front415;
  unsigned long __old_num_nodes416;
  unsigned long __new_num_nodes417;
  int** __new_nstart418;
  this413 = v409;
  __nodes_to_add414 = v410;
  __add_at_front415 = v411;
  struct std__deque_int__std__allocator_int__* t419 = this413;
  struct std___Deque_base_int__std__allocator_int__* base420 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base421 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base420->_M_impl) + 0);
  int** t422 = base421->_M_finish._M_node;
  struct std___Deque_base_int__std__allocator_int__* base423 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base424 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base423->_M_impl) + 0);
  int** t425 = base424->_M_start._M_node;
  long diff426 = t422 - t425;
  long c427 = 1;
  long b428 = diff426 + c427;
  unsigned long cast429 = (unsigned long)b428;
  __old_num_nodes416 = cast429;
  unsigned long t430 = __old_num_nodes416;
  unsigned long t431 = __nodes_to_add414;
  unsigned long b432 = t430 + t431;
  __new_num_nodes417 = b432;
    struct std___Deque_base_int__std__allocator_int__* base433 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base434 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base433->_M_impl) + 0);
    unsigned long t435 = base434->_M_map_size;
    unsigned long c436 = 2;
    unsigned long t437 = __new_num_nodes417;
    unsigned long b438 = c436 * t437;
    _Bool c439 = ((t435 > b438)) ? 1 : 0;
    if (c439) {
      struct std___Deque_base_int__std__allocator_int__* base440 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base441 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base440->_M_impl) + 0);
      int** t442 = base441->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base443 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base444 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base443->_M_impl) + 0);
      unsigned long t445 = base444->_M_map_size;
      unsigned long t446 = __new_num_nodes417;
      unsigned long b447 = t445 - t446;
      unsigned long c448 = 2;
      unsigned long b449 = b447 / c448;
      int** ptr450 = &(t442)[b449];
      _Bool t451 = __add_at_front415;
      unsigned long ternary452;
      if (t451) {
        unsigned long t453 = __nodes_to_add414;
        ternary452 = (unsigned long)t453;
      } else {
        unsigned long c454 = 0;
        ternary452 = (unsigned long)c454;
      }
      int** ptr455 = &(ptr450)[ternary452];
      __new_nstart418 = ptr455;
        int** t456 = __new_nstart418;
        struct std___Deque_base_int__std__allocator_int__* base457 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base458 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base457->_M_impl) + 0);
        int** t459 = base458->_M_start._M_node;
        _Bool c460 = ((t456 < t459)) ? 1 : 0;
        if (c460) {
          struct std___Deque_base_int__std__allocator_int__* base461 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base462 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base461->_M_impl) + 0);
          int** t463 = base462->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base464 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base465 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base464->_M_impl) + 0);
          int** t466 = base465->_M_finish._M_node;
          int c467 = 1;
          int** ptr468 = &(t466)[c467];
          int** t469 = __new_nstart418;
          int** r470 = int___std__copy_int____int___(t463, ptr468, t469);
          if (__cir_exc_active) {
            return;
          }
        } else {
          struct std___Deque_base_int__std__allocator_int__* base471 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base472 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base471->_M_impl) + 0);
          int** t473 = base472->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base474 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base475 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base474->_M_impl) + 0);
          int** t476 = base475->_M_finish._M_node;
          int c477 = 1;
          int** ptr478 = &(t476)[c477];
          int** t479 = __new_nstart418;
          unsigned long t480 = __old_num_nodes416;
          int** ptr481 = &(t479)[t480];
          int** r482 = int___std__copy_backward_int____int___(t473, ptr478, ptr481);
          if (__cir_exc_active) {
            return;
          }
        }
    } else {
      unsigned long __new_map_size483;
      unsigned long __bufsz484;
      int** __new_map485;
      struct std___Deque_base_int__std__allocator_int__* base486 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base487 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base486->_M_impl) + 0);
      unsigned long t488 = base487->_M_map_size;
      struct std___Deque_base_int__std__allocator_int__* base489 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base490 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base489->_M_impl) + 0);
      unsigned long* r491 = unsigned_long_const__std__max_unsigned_long_(&base490->_M_map_size, &__nodes_to_add414);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t492 = *r491;
      unsigned long b493 = t488 + t492;
      unsigned long c494 = 2;
      unsigned long b495 = b493 + c494;
      __new_map_size483 = b495;
      unsigned long c496 = 128;
      __bufsz484 = c496;
        unsigned long t497 = __new_map_size483;
        unsigned long r498 = std__deque_int__std__allocator_int_____max_size___const(t419);
        unsigned long t499 = __bufsz484;
        unsigned long b500 = r498 + t499;
        unsigned long c501 = 1;
        unsigned long b502 = b500 - c501;
        unsigned long t503 = __bufsz484;
        unsigned long b504 = b502 / t503;
        unsigned long c505 = 2;
        unsigned long b506 = b504 * c505;
        _Bool c507 = ((t497 > b506)) ? 1 : 0;
        if (c507) {
          __builtin_unreachable();
        }
      struct std___Deque_base_int__std__allocator_int__* base508 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      unsigned long t509 = __new_map_size483;
      int** r510 = std___Deque_base_int__std__allocator_int______M_allocate_map(base508, t509);
      if (__cir_exc_active) {
        return;
      }
      __new_map485 = r510;
      int** t511 = __new_map485;
      unsigned long t512 = __new_map_size483;
      unsigned long t513 = __new_num_nodes417;
      unsigned long b514 = t512 - t513;
      unsigned long c515 = 2;
      unsigned long b516 = b514 / c515;
      int** ptr517 = &(t511)[b516];
      _Bool t518 = __add_at_front415;
      unsigned long ternary519;
      if (t518) {
        unsigned long t520 = __nodes_to_add414;
        ternary519 = (unsigned long)t520;
      } else {
        unsigned long c521 = 0;
        ternary519 = (unsigned long)c521;
      }
      int** ptr522 = &(ptr517)[ternary519];
      __new_nstart418 = ptr522;
      struct std___Deque_base_int__std__allocator_int__* base523 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base524 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base523->_M_impl) + 0);
      int** t525 = base524->_M_start._M_node;
      struct std___Deque_base_int__std__allocator_int__* base526 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base527 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base526->_M_impl) + 0);
      int** t528 = base527->_M_finish._M_node;
      int c529 = 1;
      int** ptr530 = &(t528)[c529];
      int** t531 = __new_nstart418;
      int** r532 = int___std__copy_int____int___(t525, ptr530, t531);
      if (__cir_exc_active) {
        return;
      }
      struct std___Deque_base_int__std__allocator_int__* base533 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      struct std___Deque_base_int__std__allocator_int__* base534 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base535 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base534->_M_impl) + 0);
      int** t536 = base535->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base537 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base538 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base537->_M_impl) + 0);
      unsigned long t539 = base538->_M_map_size;
      std___Deque_base_int__std__allocator_int______M_deallocate_map(base533, t536, t539);
      int** t540 = __new_map485;
      struct std___Deque_base_int__std__allocator_int__* base541 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base542 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base541->_M_impl) + 0);
      base542->_M_map = t540;
      unsigned long t543 = __new_map_size483;
      struct std___Deque_base_int__std__allocator_int__* base544 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base545 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base544->_M_impl) + 0);
      base545->_M_map_size = t543;
    }
  struct std___Deque_base_int__std__allocator_int__* base546 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base547 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base546->_M_impl) + 0);
  int** t548 = __new_nstart418;
  std___Deque_iterator_int__int___int_____M_set_node(&base547->_M_start, t548);
  struct std___Deque_base_int__std__allocator_int__* base549 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base550 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base549->_M_impl) + 0);
  int** t551 = __new_nstart418;
  unsigned long t552 = __old_num_nodes416;
  int** ptr553 = &(t551)[t552];
  int c554 = -1;
  int** ptr555 = &(ptr553)[c554];
  std___Deque_iterator_int__int___int_____M_set_node(&base550->_M_finish, ptr555);
  return;
}

// function: _ZNSt5dequeIiSaIiEE22_M_reserve_map_at_backEm
void std__deque_int__std__allocator_int______M_reserve_map_at_back(struct std__deque_int__std__allocator_int__* v556, unsigned long v557) {
bb558:
  struct std__deque_int__std__allocator_int__* this559;
  unsigned long __nodes_to_add560;
  this559 = v556;
  __nodes_to_add560 = v557;
  struct std__deque_int__std__allocator_int__* t561 = this559;
    unsigned long t562 = __nodes_to_add560;
    unsigned long c563 = 1;
    unsigned long b564 = t562 + c563;
    struct std___Deque_base_int__std__allocator_int__* base565 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t561 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base566 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base565->_M_impl) + 0);
    unsigned long t567 = base566->_M_map_size;
    struct std___Deque_base_int__std__allocator_int__* base568 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t561 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base569 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base568->_M_impl) + 0);
    int** t570 = base569->_M_finish._M_node;
    struct std___Deque_base_int__std__allocator_int__* base571 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t561 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base572 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base571->_M_impl) + 0);
    int** t573 = base572->_M_map;
    long diff574 = t570 - t573;
    unsigned long cast575 = (unsigned long)diff574;
    unsigned long b576 = t567 - cast575;
    _Bool c577 = ((b564 > b576)) ? 1 : 0;
    if (c577) {
      unsigned long t578 = __nodes_to_add560;
      _Bool c579 = 0;
      std__deque_int__std__allocator_int______M_reallocate_map(t561, t578, c579);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE16_M_push_back_auxIJRKiEEEvDpOT_
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(struct std__deque_int__std__allocator_int__* v580, int* v581) {
bb582:
  struct std__deque_int__std__allocator_int__* this583;
  int* __args584;
  this583 = v580;
  __args584 = v581;
  struct std__deque_int__std__allocator_int__* t585 = this583;
    unsigned long r586 = std__deque_int__std__allocator_int_____size___const(t585);
    unsigned long r587 = std__deque_int__std__allocator_int_____max_size___const(t585);
    _Bool c588 = ((r586 == r587)) ? 1 : 0;
    if (c588) {
      char* cast589 = (char*)&(_str_4);
      std____throw_length_error(cast589);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long c590 = 1;
  std__deque_int__std__allocator_int______M_reserve_map_at_back(t585, c590);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base591 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t585 + 0);
  int* r592 = std___Deque_base_int__std__allocator_int______M_allocate_node(base591);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base593 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t585 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base594 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base593->_M_impl) + 0);
  int** t595 = base594->_M_finish._M_node;
  int c596 = 1;
  int** ptr597 = &(t595)[c596];
  *ptr597 = r592;
      struct std___Deque_base_int__std__allocator_int__* base599 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t585 + 0);
      struct std__allocator_int_* base600 = (struct std__allocator_int_*)((char *)&(base599->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base601 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t585 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base602 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base601->_M_impl) + 0);
      int* t603 = base602->_M_finish._M_cur;
      int* t604 = __args584;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base600, t603, t604);
      struct std___Deque_base_int__std__allocator_int__* base605 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t585 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base606 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base605->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base607 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t585 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base608 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base607->_M_impl) + 0);
      int** t609 = base608->_M_finish._M_node;
      int c610 = 1;
      int** ptr611 = &(t609)[c610];
      std___Deque_iterator_int__int___int_____M_set_node(&base606->_M_finish, ptr611);
      struct std___Deque_base_int__std__allocator_int__* base612 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t585 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base613 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base612->_M_impl) + 0);
      int* t614 = base613->_M_finish._M_first;
      struct std___Deque_base_int__std__allocator_int__* base615 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t585 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base616 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base615->_M_impl) + 0);
      base616->_M_finish._M_cur = t614;
    cir_try_dispatch598: ;
    if (__cir_exc_active) {
    {
      int ca_tok617 = 0;
      void* ca_exn618 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base619 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t585 + 0);
        struct std___Deque_base_int__std__allocator_int__* base620 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t585 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base621 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base620->_M_impl) + 0);
        int** t622 = base621->_M_finish._M_node;
        int c623 = 1;
        int** ptr624 = &(t622)[c623];
        int* t625 = *ptr624;
        std___Deque_base_int__std__allocator_int______M_deallocate_node(base619, t625);
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
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* v626, int* v627) {
bb628:
  struct std__deque_int__std__allocator_int__* this629;
  int* __x630;
  this629 = v626;
  __x630 = v627;
  struct std__deque_int__std__allocator_int__* t631 = this629;
    struct std___Deque_base_int__std__allocator_int__* base632 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t631 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base633 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base632->_M_impl) + 0);
    int* t634 = base633->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base635 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t631 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base636 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base635->_M_impl) + 0);
    int* t637 = base636->_M_finish._M_last;
    int c638 = -1;
    int* ptr639 = &(t637)[c638];
    _Bool c640 = ((t634 != ptr639)) ? 1 : 0;
    if (c640) {
      struct std___Deque_base_int__std__allocator_int__* base641 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t631 + 0);
      struct std__allocator_int_* base642 = (struct std__allocator_int_*)((char *)&(base641->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base643 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t631 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base644 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base643->_M_impl) + 0);
      int* t645 = base644->_M_finish._M_cur;
      int* t646 = __x630;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base642, t645, t646);
      struct std___Deque_base_int__std__allocator_int__* base647 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t631 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base648 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base647->_M_impl) + 0);
      int* t649 = base648->_M_finish._M_cur;
      int c650 = 1;
      int* ptr651 = &(t649)[c650];
      base648->_M_finish._M_cur = ptr651;
    } else {
      int* t652 = __x630;
      void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(t631, t652);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__3(int v653, int v654) {
bb655:
  int __a656;
  int __b657;
  int __retval658;
  __a656 = v653;
  __b657 = v654;
  int t659 = __a656;
  int t660 = __b657;
  int b661 = t659 | t660;
  __retval658 = b661;
  int t662 = __retval658;
  return t662;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v663) {
bb664:
  struct std__basic_ios_char__std__char_traits_char__* this665;
  int __retval666;
  this665 = v663;
  struct std__basic_ios_char__std__char_traits_char__* t667 = this665;
  struct std__ios_base* base668 = (struct std__ios_base*)((char *)t667 + 0);
  int t669 = base668->_M_streambuf_state;
  __retval666 = t669;
  int t670 = __retval666;
  return t670;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v671, int v672) {
bb673:
  struct std__basic_ios_char__std__char_traits_char__* this674;
  int __state675;
  this674 = v671;
  __state675 = v672;
  struct std__basic_ios_char__std__char_traits_char__* t676 = this674;
  int r677 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t676);
  if (__cir_exc_active) {
    return;
  }
  int t678 = __state675;
  int r679 = std__operator__3(r677, t678);
  std__basic_ios_char__std__char_traits_char_____clear(t676, r679);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v680, char* v681) {
bb682:
  char* __c1683;
  char* __c2684;
  _Bool __retval685;
  __c1683 = v680;
  __c2684 = v681;
  char* t686 = __c1683;
  char t687 = *t686;
  int cast688 = (int)t687;
  char* t689 = __c2684;
  char t690 = *t689;
  int cast691 = (int)t690;
  _Bool c692 = ((cast688 == cast691)) ? 1 : 0;
  __retval685 = c692;
  _Bool t693 = __retval685;
  return t693;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v694) {
bb695:
  char* __p696;
  unsigned long __retval697;
  unsigned long __i698;
  __p696 = v694;
  unsigned long c699 = 0;
  __i698 = c699;
    char ref_tmp0700;
    while (1) {
      unsigned long t701 = __i698;
      char* t702 = __p696;
      char* ptr703 = &(t702)[t701];
      char c704 = 0;
      ref_tmp0700 = c704;
      _Bool r705 = __gnu_cxx__char_traits_char___eq(ptr703, &ref_tmp0700);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u706 = !r705;
      if (!u706) break;
      unsigned long t707 = __i698;
      unsigned long u708 = t707 + 1;
      __i698 = u708;
    }
  unsigned long t709 = __i698;
  __retval697 = t709;
  unsigned long t710 = __retval697;
  return t710;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v711) {
bb712:
  char* __s713;
  unsigned long __retval714;
  __s713 = v711;
    _Bool r715 = std____is_constant_evaluated();
    if (r715) {
      char* t716 = __s713;
      unsigned long r717 = __gnu_cxx__char_traits_char___length(t716);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval714 = r717;
      unsigned long t718 = __retval714;
      return t718;
    }
  char* t719 = __s713;
  unsigned long r720 = strlen(t719);
  __retval714 = r720;
  unsigned long t721 = __retval714;
  return t721;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v722, char* v723) {
bb724:
  struct std__basic_ostream_char__std__char_traits_char__* __out725;
  char* __s726;
  struct std__basic_ostream_char__std__char_traits_char__* __retval727;
  __out725 = v722;
  __s726 = v723;
    char* t728 = __s726;
    _Bool cast729 = (_Bool)t728;
    _Bool u730 = !cast729;
    if (u730) {
      struct std__basic_ostream_char__std__char_traits_char__* t731 = __out725;
      void** v732 = (void**)t731;
      void* v733 = *((void**)v732);
      unsigned char* cast734 = (unsigned char*)v733;
      long c735 = -24;
      unsigned char* ptr736 = &(cast734)[c735];
      long* cast737 = (long*)ptr736;
      long t738 = *cast737;
      unsigned char* cast739 = (unsigned char*)t731;
      unsigned char* ptr740 = &(cast739)[t738];
      struct std__basic_ostream_char__std__char_traits_char__* cast741 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr740;
      struct std__basic_ios_char__std__char_traits_char__* cast742 = (struct std__basic_ios_char__std__char_traits_char__*)cast741;
      int t743 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast742, t743);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t744 = __out725;
      char* t745 = __s726;
      char* t746 = __s726;
      unsigned long r747 = std__char_traits_char___length(t746);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast748 = (long)r747;
      struct std__basic_ostream_char__std__char_traits_char__* r749 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t744, t745, cast748);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t750 = __out725;
  __retval727 = t750;
  struct std__basic_ostream_char__std__char_traits_char__* t751 = __retval727;
  return t751;
}

// function: _ZNSt16reverse_iteratorISt15_Deque_iteratorIiRiPiEEC2ES3_
void std__reverse_iterator_std___Deque_iterator_int__int___int______reverse_iterator(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* v752, struct std___Deque_iterator_int__int____int___ v753) {
bb754:
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* this755;
  struct std___Deque_iterator_int__int____int___ __x756;
  this755 = v752;
  __x756 = v753;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t757 = this755;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* base758 = (struct std__iterator_std__random_access_iterator_tag__int__long__int____int___*)((char *)t757 + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&t757->current, &__x756);
  return;
}

// function: _ZNSt5dequeIiSaIiEE6rbeginEv
struct std__reverse_iterator_std___Deque_iterator_int__int____int____ std__deque_int__std__allocator_int_____rbegin(struct std__deque_int__std__allocator_int__* v759) {
bb760:
  struct std__deque_int__std__allocator_int__* this761;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____ __retval762;
  struct std___Deque_iterator_int__int____int___ agg_tmp0763;
  this761 = v759;
  struct std__deque_int__std__allocator_int__* t764 = this761;
  struct std___Deque_base_int__std__allocator_int__* base765 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t764 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base766 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base765->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp0763, &base766->_M_finish);
  struct std___Deque_iterator_int__int____int___ t767 = agg_tmp0763;
  std__reverse_iterator_std___Deque_iterator_int__int___int______reverse_iterator(&__retval762, t767);
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____ t768 = __retval762;
  return t768;
}

// function: _ZNSt8iteratorISt26random_access_iterator_tagilPiRiEaSERKS3_
struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* std__iterator_std__random_access_iterator_tag__int__long__int___int____operator_(struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* v769, struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* v770) {
bb771:
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* this772;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* unnamed773;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* __retval774;
  this772 = v769;
  unnamed773 = v770;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* t775 = this772;
  __retval774 = t775;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* t776 = __retval774;
  return t776;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEaSERKS2_
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator_(struct std___Deque_iterator_int__int____int___* v777, struct std___Deque_iterator_int__int____int___* v778) {
bb779:
  struct std___Deque_iterator_int__int____int___* this780;
  struct std___Deque_iterator_int__int____int___* unnamed781;
  struct std___Deque_iterator_int__int____int___* __retval782;
  this780 = v777;
  unnamed781 = v778;
  struct std___Deque_iterator_int__int____int___* t783 = this780;
  struct std___Deque_iterator_int__int____int___* t784 = unnamed781;
  int* t785 = t784->_M_cur;
  t783->_M_cur = t785;
  struct std___Deque_iterator_int__int____int___* t786 = unnamed781;
  int* t787 = t786->_M_first;
  t783->_M_first = t787;
  struct std___Deque_iterator_int__int____int___* t788 = unnamed781;
  int* t789 = t788->_M_last;
  t783->_M_last = t789;
  struct std___Deque_iterator_int__int____int___* t790 = unnamed781;
  int** t791 = t790->_M_node;
  t783->_M_node = t791;
  __retval782 = t783;
  struct std___Deque_iterator_int__int____int___* t792 = __retval782;
  return t792;
}

// function: _ZNSt16reverse_iteratorISt15_Deque_iteratorIiRiPiEEaSERKS4_
struct std__reverse_iterator_std___Deque_iterator_int__int____int____* std__reverse_iterator_std___Deque_iterator_int__int___int______operator_(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* v793, struct std__reverse_iterator_std___Deque_iterator_int__int____int____* v794) {
bb795:
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* this796;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* unnamed797;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* __retval798;
  this796 = v793;
  unnamed797 = v794;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t799 = this796;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* base800 = (struct std__iterator_std__random_access_iterator_tag__int__long__int____int___*)((char *)t799 + 0);
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t801 = unnamed797;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* base802 = (struct std__iterator_std__random_access_iterator_tag__int__long__int____int___*)((char *)t801 + 0);
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* r803 = std__iterator_std__random_access_iterator_tag__int__long__int___int____operator_(base800, base802);
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t804 = unnamed797;
  struct std___Deque_iterator_int__int____int___* r805 = std___Deque_iterator_int__int___int____operator_(&t799->current, &t804->current);
  __retval798 = t799;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t806 = __retval798;
  return t806;
}

// function: _ZStltSt15strong_orderingNSt9__cmp_cat8__unspecE
_Bool std__operator_(struct std__strong_ordering v807, struct std____cmp_cat____unspec v808) {
bb809:
  struct std__strong_ordering __v810;
  struct std____cmp_cat____unspec unnamed811;
  _Bool __retval812;
  __v810 = v807;
  unnamed811 = v808;
  char t813 = __v810._M_value;
  int cast814 = (int)t813;
  int c815 = 0;
  _Bool c816 = ((cast814 < c815)) ? 1 : 0;
  __retval812 = c816;
  _Bool t817 = __retval812;
  return t817;
}

// function: _ZSteqSt15strong_orderingNSt9__cmp_cat8__unspecE
_Bool std__operator___2(struct std__strong_ordering v818, struct std____cmp_cat____unspec v819) {
bb820:
  struct std__strong_ordering __v821;
  struct std____cmp_cat____unspec unnamed822;
  _Bool __retval823;
  __v821 = v818;
  unnamed822 = v819;
  char t824 = __v821._M_value;
  int cast825 = (int)t824;
  int c826 = 0;
  _Bool c827 = ((cast825 == c826)) ? 1 : 0;
  __retval823 = c827;
  _Bool t828 = __retval823;
  return t828;
}

// function: _ZStssRKSt15_Deque_iteratorIiRiPiES4_
struct std__strong_ordering std__operator___(struct std___Deque_iterator_int__int____int___* v829, struct std___Deque_iterator_int__int____int___* v830) {
bb831:
  struct std___Deque_iterator_int__int____int___* __x832;
  struct std___Deque_iterator_int__int____int___* __y833;
  struct std__strong_ordering __retval834;
  __x832 = v829;
  __y833 = v830;
    struct std__strong_ordering agg_tmp0835;
    struct std____cmp_cat____unspec agg_tmp1836;
    struct std___Deque_iterator_int__int____int___* t837 = __x832;
    int** t838 = t837->_M_node;
    struct std___Deque_iterator_int__int____int___* t839 = __y833;
    int** t840 = t839->_M_node;
    char c841 = -1;
    char c842 = 0;
    char c843 = 1;
    _Bool c844 = ((t838 < t840)) ? 1 : 0;
    char sel845 = c844 ? c841 : c843;
    _Bool c846 = ((t838 == t840)) ? 1 : 0;
    char sel847 = c846 ? c842 : sel845;
    __retval834._M_value = sel847;
    agg_tmp0835 = __retval834; // copy
    agg_tmp1836 = *&__const__ZStssRKSt15_Deque_iteratorIiRiPiES4__agg_tmp1; // copy
    struct std__strong_ordering t848 = agg_tmp0835;
    struct std____cmp_cat____unspec t849 = agg_tmp1836;
    _Bool r850 = std__operator___2(t848, t849);
    _Bool u851 = !r850;
    if (u851) {
      struct std__strong_ordering t852 = __retval834;
      return t852;
    }
  struct std___Deque_iterator_int__int____int___* t853 = __x832;
  int* t854 = t853->_M_cur;
  struct std___Deque_iterator_int__int____int___* t855 = __y833;
  int* t856 = t855->_M_cur;
  char c857 = -1;
  char c858 = 0;
  char c859 = 1;
  _Bool c860 = ((t854 < t856)) ? 1 : 0;
  char sel861 = c860 ? c857 : c859;
  _Bool c862 = ((t854 == t856)) ? 1 : 0;
  char sel863 = c862 ? c858 : sel861;
  __retval834._M_value = sel863;
  struct std__strong_ordering t864 = __retval834;
  return t864;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v865, struct std___Deque_iterator_int__int____int___* v866) {
bb867:
  struct std___Deque_iterator_int__int____int___* this868;
  struct std___Deque_iterator_int__int____int___* __x869;
  this868 = v865;
  __x869 = v866;
  struct std___Deque_iterator_int__int____int___* t870 = this868;
  struct std___Deque_iterator_int__int____int___* t871 = __x869;
  int* t872 = t871->_M_cur;
  t870->_M_cur = t872;
  struct std___Deque_iterator_int__int____int___* t873 = __x869;
  int* t874 = t873->_M_first;
  t870->_M_first = t874;
  struct std___Deque_iterator_int__int____int___* t875 = __x869;
  int* t876 = t875->_M_last;
  t870->_M_last = t876;
  struct std___Deque_iterator_int__int____int___* t877 = __x869;
  int** t878 = t877->_M_node;
  t870->_M_node = t878;
  return;
}

// function: _ZNKSt16reverse_iteratorISt15_Deque_iteratorIiRiPiEE4baseEv
struct std___Deque_iterator_int__int____int___ std__reverse_iterator_std___Deque_iterator_int__int___int______base___const(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* v879) {
bb880:
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* this881;
  struct std___Deque_iterator_int__int____int___ __retval882;
  this881 = v879;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t883 = this881;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval882, &t883->current);
  struct std___Deque_iterator_int__int____int___ t884 = __retval882;
  return t884;
}

// function: _ZStssITkSt20three_way_comparableSt15_Deque_iteratorIiRiPiEENSt8__detail18__cmp3way_res_implIT_S6_E4typeERKSt16reverse_iteratorIS6_ESC_
struct std__strong_ordering _ZStssITkSt20three_way_comparableSt15_Deque_iteratorIiRiPiEENSt8__detail18__cmp3way_res_implIT_S6_E4typeERKSt16reverse_iteratorIS6_ESC_(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* v885, struct std__reverse_iterator_std___Deque_iterator_int__int____int____* v886) {
bb887:
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* __x888;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* __y889;
  struct std__strong_ordering __retval890;
  struct std___Deque_iterator_int__int____int___ ref_tmp0891;
  struct std___Deque_iterator_int__int____int___ ref_tmp1892;
  __x888 = v885;
  __y889 = v886;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t893 = __y889;
  struct std___Deque_iterator_int__int____int___ r894 = std__reverse_iterator_std___Deque_iterator_int__int___int______base___const(t893);
  ref_tmp0891 = r894;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t895 = __x888;
  struct std___Deque_iterator_int__int____int___ r896 = std__reverse_iterator_std___Deque_iterator_int__int___int______base___const(t895);
  ref_tmp1892 = r896;
  struct std__strong_ordering r897 = std__operator___(&ref_tmp0891, &ref_tmp1892);
  __retval890 = r897;
  struct std__strong_ordering t898 = __retval890;
  return t898;
}

// function: _ZNSt5dequeIiSaIiEE4rendEv
struct std__reverse_iterator_std___Deque_iterator_int__int____int____ std__deque_int__std__allocator_int_____rend(struct std__deque_int__std__allocator_int__* v899) {
bb900:
  struct std__deque_int__std__allocator_int__* this901;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____ __retval902;
  struct std___Deque_iterator_int__int____int___ agg_tmp0903;
  this901 = v899;
  struct std__deque_int__std__allocator_int__* t904 = this901;
  struct std___Deque_base_int__std__allocator_int__* base905 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t904 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base906 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base905->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp0903, &base906->_M_start);
  struct std___Deque_iterator_int__int____int___ t907 = agg_tmp0903;
  std__reverse_iterator_std___Deque_iterator_int__int___int______reverse_iterator(&__retval902, t907);
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____ t908 = __retval902;
  return t908;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEmmEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* v909) {
bb910:
  struct std___Deque_iterator_int__int____int___* this911;
  struct std___Deque_iterator_int__int____int___* __retval912;
  this911 = v909;
  struct std___Deque_iterator_int__int____int___* t913 = this911;
    int* t914 = t913->_M_cur;
    int* t915 = t913->_M_first;
    _Bool c916 = ((t914 == t915)) ? 1 : 0;
    if (c916) {
      int** t917 = t913->_M_node;
      int c918 = -1;
      int** ptr919 = &(t917)[c918];
      std___Deque_iterator_int__int___int_____M_set_node(t913, ptr919);
      int* t920 = t913->_M_last;
      t913->_M_cur = t920;
    }
  int* t921 = t913->_M_cur;
  int c922 = -1;
  int* ptr923 = &(t921)[c922];
  t913->_M_cur = ptr923;
  __retval912 = t913;
  struct std___Deque_iterator_int__int____int___* t924 = __retval912;
  return t924;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v925) {
bb926:
  struct std___Deque_iterator_int__int____int___* this927;
  int* __retval928;
  this927 = v925;
  struct std___Deque_iterator_int__int____int___* t929 = this927;
  int* t930 = t929->_M_cur;
  __retval928 = t930;
  int* t931 = __retval928;
  return t931;
}

// function: _ZNKSt16reverse_iteratorISt15_Deque_iteratorIiRiPiEEdeEv
int* std__reverse_iterator_std___Deque_iterator_int__int___int______operator____const(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* v932) {
bb933:
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* this934;
  int* __retval935;
  struct std___Deque_iterator_int__int____int___ __tmp936;
  this934 = v932;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t937 = this934;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__tmp936, &t937->current);
  struct std___Deque_iterator_int__int____int___* r938 = std___Deque_iterator_int__int___int____operator__(&__tmp936);
  int* r939 = std___Deque_iterator_int__int___int____operator____const(r938);
  __retval935 = r939;
  int* t940 = __retval935;
  return t940;
}

// function: _ZNSt16reverse_iteratorISt15_Deque_iteratorIiRiPiEEppEv
struct std__reverse_iterator_std___Deque_iterator_int__int____int____* std__reverse_iterator_std___Deque_iterator_int__int___int______operator__(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* v941) {
bb942:
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* this943;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* __retval944;
  this943 = v941;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t945 = this943;
  struct std___Deque_iterator_int__int____int___* r946 = std___Deque_iterator_int__int___int____operator__(&t945->current);
  __retval944 = t945;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t947 = __retval944;
  return t947;
}

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* v948, struct std___Deque_iterator_int__int____int___* v949) {
bb950:
  struct std___Deque_iterator_int__int____int___* __x951;
  struct std___Deque_iterator_int__int____int___* __y952;
  _Bool __retval953;
  __x951 = v948;
  __y952 = v949;
  struct std___Deque_iterator_int__int____int___* t954 = __x951;
  int* t955 = t954->_M_cur;
  struct std___Deque_iterator_int__int____int___* t956 = __y952;
  int* t957 = t956->_M_cur;
  _Bool c958 = ((t955 == t957)) ? 1 : 0;
  __retval953 = c958;
  _Bool t959 = __retval953;
  return t959;
}

// function: _ZSteqISt15_Deque_iteratorIiRiPiEEbRKSt16reverse_iteratorIT_ES8_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZSteqISt15_Deque_iteratorIiRiPiEEbRKSt16reverse_iteratorIT_ES8_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* v960, struct std__reverse_iterator_std___Deque_iterator_int__int____int____* v961) {
bb962:
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* __x963;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* __y964;
  _Bool __retval965;
  struct std___Deque_iterator_int__int____int___ ref_tmp0966;
  struct std___Deque_iterator_int__int____int___ ref_tmp1967;
  __x963 = v960;
  __y964 = v961;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t968 = __x963;
  struct std___Deque_iterator_int__int____int___ r969 = std__reverse_iterator_std___Deque_iterator_int__int___int______base___const(t968);
  ref_tmp0966 = r969;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t970 = __y964;
  struct std___Deque_iterator_int__int____int___ r971 = std__reverse_iterator_std___Deque_iterator_int__int___int______base___const(t970);
  ref_tmp1967 = r971;
  _Bool r972 = std__operator__(&ref_tmp0966, &ref_tmp1967);
  __retval965 = r972;
  _Bool t973 = __retval965;
  return t973;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v974, void* v975) {
bb976:
  struct std__basic_ostream_char__std__char_traits_char__* this977;
  void* __pf978;
  struct std__basic_ostream_char__std__char_traits_char__* __retval979;
  this977 = v974;
  __pf978 = v975;
  struct std__basic_ostream_char__std__char_traits_char__* t980 = this977;
  void* t981 = __pf978;
  struct std__basic_ostream_char__std__char_traits_char__* r982 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t981)(t980);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval979 = r982;
  struct std__basic_ostream_char__std__char_traits_char__* t983 = __retval979;
  return t983;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v984) {
bb985:
  struct std__basic_ostream_char__std__char_traits_char__* __os986;
  struct std__basic_ostream_char__std__char_traits_char__* __retval987;
  __os986 = v984;
  struct std__basic_ostream_char__std__char_traits_char__* t988 = __os986;
  struct std__basic_ostream_char__std__char_traits_char__* r989 = std__ostream__flush(t988);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval987 = r989;
  struct std__basic_ostream_char__std__char_traits_char__* t990 = __retval987;
  return t990;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v991) {
bb992:
  struct std__ctype_char_* __f993;
  struct std__ctype_char_* __retval994;
  __f993 = v991;
    struct std__ctype_char_* t995 = __f993;
    _Bool cast996 = (_Bool)t995;
    _Bool u997 = !cast996;
    if (u997) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t998 = __f993;
  __retval994 = t998;
  struct std__ctype_char_* t999 = __retval994;
  return t999;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1000, char v1001) {
bb1002:
  struct std__ctype_char_* this1003;
  char __c1004;
  char __retval1005;
  this1003 = v1000;
  __c1004 = v1001;
  struct std__ctype_char_* t1006 = this1003;
    char t1007 = t1006->_M_widen_ok;
    _Bool cast1008 = (_Bool)t1007;
    if (cast1008) {
      char t1009 = __c1004;
      unsigned char cast1010 = (unsigned char)t1009;
      unsigned long cast1011 = (unsigned long)cast1010;
      char t1012 = t1006->_M_widen[cast1011];
      __retval1005 = t1012;
      char t1013 = __retval1005;
      return t1013;
    }
  std__ctype_char____M_widen_init___const(t1006);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t1014 = __c1004;
  void** v1015 = (void**)t1006;
  void* v1016 = *((void**)v1015);
  char vcall1019 = (char)__VERIFIER_virtual_call_char_char(t1006, 6, t1014);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval1005 = vcall1019;
  char t1020 = __retval1005;
  return t1020;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1021, char v1022) {
bb1023:
  struct std__basic_ios_char__std__char_traits_char__* this1024;
  char __c1025;
  char __retval1026;
  this1024 = v1021;
  __c1025 = v1022;
  struct std__basic_ios_char__std__char_traits_char__* t1027 = this1024;
  struct std__ctype_char_* t1028 = t1027->_M_ctype;
  struct std__ctype_char_* r1029 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1028);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t1030 = __c1025;
  char r1031 = std__ctype_char___widen_char__const(r1029, t1030);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval1026 = r1031;
  char t1032 = __retval1026;
  return t1032;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1033) {
bb1034:
  struct std__basic_ostream_char__std__char_traits_char__* __os1035;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1036;
  __os1035 = v1033;
  struct std__basic_ostream_char__std__char_traits_char__* t1037 = __os1035;
  struct std__basic_ostream_char__std__char_traits_char__* t1038 = __os1035;
  void** v1039 = (void**)t1038;
  void* v1040 = *((void**)v1039);
  unsigned char* cast1041 = (unsigned char*)v1040;
  long c1042 = -24;
  unsigned char* ptr1043 = &(cast1041)[c1042];
  long* cast1044 = (long*)ptr1043;
  long t1045 = *cast1044;
  unsigned char* cast1046 = (unsigned char*)t1038;
  unsigned char* ptr1047 = &(cast1046)[t1045];
  struct std__basic_ostream_char__std__char_traits_char__* cast1048 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1047;
  struct std__basic_ios_char__std__char_traits_char__* cast1049 = (struct std__basic_ios_char__std__char_traits_char__*)cast1048;
  char c1050 = 10;
  char r1051 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1049, c1050);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r1052 = std__ostream__put(t1037, r1051);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r1053 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1052);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1036 = r1053;
  struct std__basic_ostream_char__std__char_traits_char__* t1054 = __retval1036;
  return t1054;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v1055) {
bb1056:
  struct std__deque_int__std__allocator_int__* this1057;
  struct std___Deque_iterator_int__int____int___ agg_tmp01058;
  struct std___Deque_iterator_int__int____int___ agg_tmp11059;
  this1057 = v1055;
  struct std__deque_int__std__allocator_int__* t1060 = this1057;
    struct std___Deque_iterator_int__int____int___ r1061 = std__deque_int__std__allocator_int_____begin(t1060);
    agg_tmp01058 = r1061;
    struct std___Deque_iterator_int__int____int___ r1062 = std__deque_int__std__allocator_int_____end(t1060);
    agg_tmp11059 = r1062;
    struct std___Deque_base_int__std__allocator_int__* base1063 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1060 + 0);
    struct std__allocator_int_* r1064 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1063);
    struct std___Deque_iterator_int__int____int___ t1065 = agg_tmp01058;
    struct std___Deque_iterator_int__int____int___ t1066 = agg_tmp11059;
    std__deque_int__std__allocator_int______M_destroy_data(t1060, t1065, t1066, r1064);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base1067 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1060 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base1067);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base1068 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1060 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base1068);
  }
  return;
}

// function: main
int main() {
bb1069:
  int __retval1070;
  struct std__deque_int__std__allocator_int__ mydeque1071;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____ rit1072;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____ ref_tmp01073;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____ ref_tmp21074;
  int c1075 = 0;
  __retval1070 = c1075;
  std__deque_int__std__allocator_int_____deque(&mydeque1071);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    std__reverse_iterator_std___Deque_iterator_int__int___int______reverse_iterator_2(&rit1072);
      int i1076;
      int c1077 = 1;
      i1076 = c1077;
      while (1) {
        int t1079 = i1076;
        int c1080 = 5;
        _Bool c1081 = ((t1079 <= c1080)) ? 1 : 0;
        if (!c1081) break;
        std__deque_int__std__allocator_int_____push_back(&mydeque1071, &i1076);
        if (__cir_exc_active) {
          {
            std__deque_int__std__allocator_int______deque(&mydeque1071);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step1078: ;
        int t1082 = i1076;
        int u1083 = t1082 + 1;
        i1076 = u1083;
      }
    char* cast1084 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r1085 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1084);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque1071);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__reverse_iterator_std___Deque_iterator_int__int____int____ r1086 = std__deque_int__std__allocator_int_____rbegin(&mydeque1071);
    ref_tmp01073 = r1086;
    struct std__reverse_iterator_std___Deque_iterator_int__int____int____* r1087 = std__reverse_iterator_std___Deque_iterator_int__int___int______operator_(&rit1072, &ref_tmp01073);
      struct std__strong_ordering agg_tmp01088;
      struct std__reverse_iterator_std___Deque_iterator_int__int____int____ ref_tmp11089;
      struct std____cmp_cat____unspec agg_tmp11090;
      while (1) {
        struct std__reverse_iterator_std___Deque_iterator_int__int____int____ r1091 = std__deque_int__std__allocator_int_____rend(&mydeque1071);
        ref_tmp11089 = r1091;
        struct std__strong_ordering r1092 = _ZStssITkSt20three_way_comparableSt15_Deque_iteratorIiRiPiEENSt8__detail18__cmp3way_res_implIT_S6_E4typeERKSt16reverse_iteratorIS6_ESC_(&rit1072, &ref_tmp11089);
        if (__cir_exc_active) {
          {
            std__deque_int__std__allocator_int______deque(&mydeque1071);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        agg_tmp01088 = r1092;
        agg_tmp11090 = *&__const_main_agg_tmp1; // copy
        struct std__strong_ordering t1093 = agg_tmp01088;
        struct std____cmp_cat____unspec t1094 = agg_tmp11090;
        _Bool r1095 = std__operator_(t1093, t1094);
        if (!r1095) break;
          char* cast1096 = (char*)&(_str_1);
          struct std__basic_ostream_char__std__char_traits_char__* r1097 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1096);
          if (__cir_exc_active) {
            {
              std__deque_int__std__allocator_int______deque(&mydeque1071);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int* r1098 = std__reverse_iterator_std___Deque_iterator_int__int___int______operator____const(&rit1072);
          if (__cir_exc_active) {
            {
              std__deque_int__std__allocator_int______deque(&mydeque1071);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int t1099 = *r1098;
          struct std__basic_ostream_char__std__char_traits_char__* r1100 = std__ostream__operator__(r1097, t1099);
          if (__cir_exc_active) {
            {
              std__deque_int__std__allocator_int______deque(&mydeque1071);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std__reverse_iterator_std___Deque_iterator_int__int____int____* r1101 = std__reverse_iterator_std___Deque_iterator_int__int___int______operator__(&rit1072);
          if (__cir_exc_active) {
            {
              std__deque_int__std__allocator_int______deque(&mydeque1071);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
      }
    struct std__reverse_iterator_std___Deque_iterator_int__int____int____ r1102 = std__deque_int__std__allocator_int_____rend(&mydeque1071);
    ref_tmp21074 = r1102;
    _Bool r1103 = _ZSteqISt15_Deque_iteratorIiRiPiEEbRKSt16reverse_iteratorIT_ES8_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&rit1072, &ref_tmp21074);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque1071);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    _Bool u1104 = !r1103;
    if (u1104) {
    } else {
      char* cast1105 = (char*)&(_str_2);
      char* c1106 = _str_3;
      unsigned int c1107 = 31;
      char* cast1108 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1105, c1106, c1107, cast1108);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1109 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque1071);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1110 = 0;
    __retval1070 = c1110;
    int t1111 = __retval1070;
    int ret_val1112 = t1111;
    {
      std__deque_int__std__allocator_int______deque(&mydeque1071);
    }
    return ret_val1112;
  int t1113 = __retval1070;
  return t1113;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1114) {
bb1115:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1116;
  this1116 = v1114;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1117 = this1116;
  struct std__allocator_int_* base1118 = (struct std__allocator_int_*)((char *)t1117 + 0);
  std__allocator_int___allocator(base1118);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1119 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t1117 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base1119);
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v1120) {
bb1121:
  unsigned long __size1122;
  unsigned long __retval1123;
  __size1122 = v1120;
  unsigned long t1124 = __size1122;
  unsigned long c1125 = 512;
  _Bool c1126 = ((t1124 < c1125)) ? 1 : 0;
  unsigned long ternary1127;
  if (c1126) {
    unsigned long c1128 = 512;
    unsigned long t1129 = __size1122;
    unsigned long b1130 = c1128 / t1129;
    ternary1127 = (unsigned long)b1130;
  } else {
    unsigned long c1131 = 1;
    ternary1127 = (unsigned long)c1131;
  }
  __retval1123 = ternary1127;
  unsigned long t1132 = __retval1123;
  return t1132;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v1133, unsigned long* v1134) {
bb1135:
  unsigned long* __a1136;
  unsigned long* __b1137;
  unsigned long* __retval1138;
  __a1136 = v1133;
  __b1137 = v1134;
    unsigned long* t1139 = __a1136;
    unsigned long t1140 = *t1139;
    unsigned long* t1141 = __b1137;
    unsigned long t1142 = *t1141;
    _Bool c1143 = ((t1140 < t1142)) ? 1 : 0;
    if (c1143) {
      unsigned long* t1144 = __b1137;
      __retval1138 = t1144;
      unsigned long* t1145 = __retval1138;
      return t1145;
    }
  unsigned long* t1146 = __a1136;
  __retval1138 = t1146;
  unsigned long* t1147 = __retval1138;
  return t1147;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1148) {
bb1149:
  struct std___Deque_base_int__std__allocator_int__* this1150;
  struct std__allocator_int_* __retval1151;
  this1150 = v1148;
  struct std___Deque_base_int__std__allocator_int__* t1152 = this1150;
  struct std__allocator_int_* base1153 = (struct std__allocator_int_*)((char *)&(t1152->_M_impl) + 0);
  __retval1151 = base1153;
  struct std__allocator_int_* t1154 = __retval1151;
  return t1154;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v1155, struct std__allocator_int_* v1156) {
bb1157:
  struct std__allocator_int___* this1158;
  struct std__allocator_int_* unnamed1159;
  this1158 = v1155;
  unnamed1159 = v1156;
  struct std__allocator_int___* t1160 = this1158;
  struct std____new_allocator_int___* base1161 = (struct std____new_allocator_int___*)((char *)t1160 + 0);
  std____new_allocator_int______new_allocator(base1161);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1162) {
bb1163:
  struct std___Deque_base_int__std__allocator_int__* this1164;
  struct std__allocator_int___ __retval1165;
  this1164 = v1162;
  struct std___Deque_base_int__std__allocator_int__* t1166 = this1164;
  struct std__allocator_int_* r1167 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t1166);
  std__allocator_int____allocator_int_(&__retval1165, r1167);
  struct std__allocator_int___ t1168 = __retval1165;
  return t1168;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1169:
  _Bool __retval1170;
    _Bool c1171 = 0;
    __retval1170 = c1171;
    _Bool t1172 = __retval1170;
    return t1172;
  abort();
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v1173) {
bb1174:
  struct std____new_allocator_int___* this1175;
  unsigned long __retval1176;
  this1175 = v1173;
  struct std____new_allocator_int___* t1177 = this1175;
  unsigned long c1178 = 9223372036854775807;
  unsigned long c1179 = 8;
  unsigned long b1180 = c1178 / c1179;
  __retval1176 = b1180;
  unsigned long t1181 = __retval1176;
  return t1181;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v1182, unsigned long v1183, void* v1184) {
bb1185:
  struct std____new_allocator_int___* this1186;
  unsigned long __n1187;
  void* unnamed1188;
  int** __retval1189;
  this1186 = v1182;
  __n1187 = v1183;
  unnamed1188 = v1184;
  struct std____new_allocator_int___* t1190 = this1186;
    unsigned long t1191 = __n1187;
    unsigned long r1192 = std____new_allocator_int_____M_max_size___const(t1190);
    _Bool c1193 = ((t1191 > r1192)) ? 1 : 0;
    if (c1193) {
        unsigned long t1194 = __n1187;
        unsigned long c1195 = -1;
        unsigned long c1196 = 8;
        unsigned long b1197 = c1195 / c1196;
        _Bool c1198 = ((t1194 > b1197)) ? 1 : 0;
        if (c1198) {
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
    unsigned long c1199 = 8;
    unsigned long c1200 = 16;
    _Bool c1201 = ((c1199 > c1200)) ? 1 : 0;
    if (c1201) {
      unsigned long __al1202;
      unsigned long c1203 = 8;
      __al1202 = c1203;
      unsigned long t1204 = __n1187;
      unsigned long c1205 = 8;
      unsigned long b1206 = t1204 * c1205;
      unsigned long t1207 = __al1202;
      void* r1208 = operator_new_2(b1206, t1207);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1209 = (int**)r1208;
      __retval1189 = cast1209;
      int** t1210 = __retval1189;
      return t1210;
    }
  unsigned long t1211 = __n1187;
  unsigned long c1212 = 8;
  unsigned long b1213 = t1211 * c1212;
  void* r1214 = operator_new(b1213);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast1215 = (int**)r1214;
  __retval1189 = cast1215;
  int** t1216 = __retval1189;
  return t1216;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v1217, unsigned long v1218) {
bb1219:
  struct std__allocator_int___* this1220;
  unsigned long __n1221;
  int** __retval1222;
  this1220 = v1217;
  __n1221 = v1218;
  struct std__allocator_int___* t1223 = this1220;
    _Bool r1224 = std____is_constant_evaluated();
    if (r1224) {
        unsigned long t1225 = __n1221;
        unsigned long c1226 = 8;
        unsigned long ovr1227;
        _Bool ovf1228 = __builtin_mul_overflow(t1225, c1226, &ovr1227);
        __n1221 = ovr1227;
        if (ovf1228) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1229 = __n1221;
      void* r1230 = operator_new(t1229);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1231 = (int**)r1230;
      __retval1222 = cast1231;
      int** t1232 = __retval1222;
      return t1232;
    }
  struct std____new_allocator_int___* base1233 = (struct std____new_allocator_int___*)((char *)t1223 + 0);
  unsigned long t1234 = __n1221;
  void* c1235 = ((void*)0);
  int** r1236 = std____new_allocator_int____allocate(base1233, t1234, c1235);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1222 = r1236;
  int** t1237 = __retval1222;
  return t1237;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v1238, unsigned long v1239) {
bb1240:
  struct std__allocator_int___* __a1241;
  unsigned long __n1242;
  int** __retval1243;
  __a1241 = v1238;
  __n1242 = v1239;
  struct std__allocator_int___* t1244 = __a1241;
  unsigned long t1245 = __n1242;
  int** r1246 = std__allocator_int____allocate(t1244, t1245);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1243 = r1246;
  int** t1247 = __retval1243;
  return t1247;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v1248, unsigned long v1249) {
bb1250:
  struct std___Deque_base_int__std__allocator_int__* this1251;
  unsigned long __n1252;
  int** __retval1253;
  struct std__allocator_int___ __map_alloc1254;
  this1251 = v1248;
  __n1252 = v1249;
  struct std___Deque_base_int__std__allocator_int__* t1255 = this1251;
  struct std__allocator_int___ r1256 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1255);
  __map_alloc1254 = r1256;
  unsigned long t1257 = __n1252;
  int** r1258 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc1254, t1257);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1253 = r1258;
  int** t1259 = __retval1253;
  return t1259;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1260) {
bb1261:
  struct std____new_allocator_int_* this1262;
  unsigned long __retval1263;
  this1262 = v1260;
  struct std____new_allocator_int_* t1264 = this1262;
  unsigned long c1265 = 9223372036854775807;
  unsigned long c1266 = 4;
  unsigned long b1267 = c1265 / c1266;
  __retval1263 = b1267;
  unsigned long t1268 = __retval1263;
  return t1268;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1269, unsigned long v1270, void* v1271) {
bb1272:
  struct std____new_allocator_int_* this1273;
  unsigned long __n1274;
  void* unnamed1275;
  int* __retval1276;
  this1273 = v1269;
  __n1274 = v1270;
  unnamed1275 = v1271;
  struct std____new_allocator_int_* t1277 = this1273;
    unsigned long t1278 = __n1274;
    unsigned long r1279 = std____new_allocator_int____M_max_size___const(t1277);
    _Bool c1280 = ((t1278 > r1279)) ? 1 : 0;
    if (c1280) {
        unsigned long t1281 = __n1274;
        unsigned long c1282 = -1;
        unsigned long c1283 = 4;
        unsigned long b1284 = c1282 / c1283;
        _Bool c1285 = ((t1281 > b1284)) ? 1 : 0;
        if (c1285) {
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
    unsigned long c1286 = 4;
    unsigned long c1287 = 16;
    _Bool c1288 = ((c1286 > c1287)) ? 1 : 0;
    if (c1288) {
      unsigned long __al1289;
      unsigned long c1290 = 4;
      __al1289 = c1290;
      unsigned long t1291 = __n1274;
      unsigned long c1292 = 4;
      unsigned long b1293 = t1291 * c1292;
      unsigned long t1294 = __al1289;
      void* r1295 = operator_new_2(b1293, t1294);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1296 = (int*)r1295;
      __retval1276 = cast1296;
      int* t1297 = __retval1276;
      return t1297;
    }
  unsigned long t1298 = __n1274;
  unsigned long c1299 = 4;
  unsigned long b1300 = t1298 * c1299;
  void* r1301 = operator_new(b1300);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast1302 = (int*)r1301;
  __retval1276 = cast1302;
  int* t1303 = __retval1276;
  return t1303;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1304, unsigned long v1305) {
bb1306:
  struct std__allocator_int_* this1307;
  unsigned long __n1308;
  int* __retval1309;
  this1307 = v1304;
  __n1308 = v1305;
  struct std__allocator_int_* t1310 = this1307;
    _Bool r1311 = std____is_constant_evaluated();
    if (r1311) {
        unsigned long t1312 = __n1308;
        unsigned long c1313 = 4;
        unsigned long ovr1314;
        _Bool ovf1315 = __builtin_mul_overflow(t1312, c1313, &ovr1314);
        __n1308 = ovr1314;
        if (ovf1315) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1316 = __n1308;
      void* r1317 = operator_new(t1316);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1318 = (int*)r1317;
      __retval1309 = cast1318;
      int* t1319 = __retval1309;
      return t1319;
    }
  struct std____new_allocator_int_* base1320 = (struct std____new_allocator_int_*)((char *)t1310 + 0);
  unsigned long t1321 = __n1308;
  void* c1322 = ((void*)0);
  int* r1323 = std____new_allocator_int___allocate(base1320, t1321, c1322);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1309 = r1323;
  int* t1324 = __retval1309;
  return t1324;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1325, unsigned long v1326) {
bb1327:
  struct std__allocator_int_* __a1328;
  unsigned long __n1329;
  int* __retval1330;
  __a1328 = v1325;
  __n1329 = v1326;
  struct std__allocator_int_* t1331 = __a1328;
  unsigned long t1332 = __n1329;
  int* r1333 = std__allocator_int___allocate(t1331, t1332);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1330 = r1333;
  int* t1334 = __retval1330;
  return t1334;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v1335) {
bb1336:
  struct std___Deque_base_int__std__allocator_int__* this1337;
  int* __retval1338;
  this1337 = v1335;
  struct std___Deque_base_int__std__allocator_int__* t1339 = this1337;
  struct std__allocator_int_* base1340 = (struct std__allocator_int_*)((char *)&(t1339->_M_impl) + 0);
  unsigned long c1341 = 4;
  unsigned long r1342 = std____deque_buf_size(c1341);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r1343 = std__allocator_traits_std__allocator_int_____allocate(base1340, r1342);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1338 = r1343;
  int* t1344 = __retval1338;
  return t1344;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1345, int* v1346, unsigned long v1347) {
bb1348:
  struct std____new_allocator_int_* this1349;
  int* __p1350;
  unsigned long __n1351;
  this1349 = v1345;
  __p1350 = v1346;
  __n1351 = v1347;
  struct std____new_allocator_int_* t1352 = this1349;
    unsigned long c1353 = 4;
    unsigned long c1354 = 16;
    _Bool c1355 = ((c1353 > c1354)) ? 1 : 0;
    if (c1355) {
      int* t1356 = __p1350;
      void* cast1357 = (void*)t1356;
      unsigned long t1358 = __n1351;
      unsigned long c1359 = 4;
      unsigned long b1360 = t1358 * c1359;
      unsigned long c1361 = 4;
      operator_delete_3(cast1357, b1360, c1361);
      return;
    }
  int* t1362 = __p1350;
  void* cast1363 = (void*)t1362;
  unsigned long t1364 = __n1351;
  unsigned long c1365 = 4;
  unsigned long b1366 = t1364 * c1365;
  operator_delete_2(cast1363, b1366);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1367, int* v1368, unsigned long v1369) {
bb1370:
  struct std__allocator_int_* this1371;
  int* __p1372;
  unsigned long __n1373;
  this1371 = v1367;
  __p1372 = v1368;
  __n1373 = v1369;
  struct std__allocator_int_* t1374 = this1371;
    _Bool r1375 = std____is_constant_evaluated();
    if (r1375) {
      int* t1376 = __p1372;
      void* cast1377 = (void*)t1376;
      operator_delete(cast1377);
      return;
    }
  struct std____new_allocator_int_* base1378 = (struct std____new_allocator_int_*)((char *)t1374 + 0);
  int* t1379 = __p1372;
  unsigned long t1380 = __n1373;
  std____new_allocator_int___deallocate(base1378, t1379, t1380);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1381, int* v1382, unsigned long v1383) {
bb1384:
  struct std__allocator_int_* __a1385;
  int* __p1386;
  unsigned long __n1387;
  __a1385 = v1381;
  __p1386 = v1382;
  __n1387 = v1383;
  struct std__allocator_int_* t1388 = __a1385;
  int* t1389 = __p1386;
  unsigned long t1390 = __n1387;
  std__allocator_int___deallocate(t1388, t1389, t1390);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v1391, int* v1392) {
bb1393:
  struct std___Deque_base_int__std__allocator_int__* this1394;
  int* __p1395;
  this1394 = v1391;
  __p1395 = v1392;
  struct std___Deque_base_int__std__allocator_int__* t1396 = this1394;
  struct std__allocator_int_* base1397 = (struct std__allocator_int_*)((char *)&(t1396->_M_impl) + 0);
  int* t1398 = __p1395;
  unsigned long c1399 = 4;
  unsigned long r1400 = std____deque_buf_size(c1399);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base1397, t1398, r1400);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v1401, int** v1402, int** v1403) {
bb1404:
  struct std___Deque_base_int__std__allocator_int__* this1405;
  int** __nstart1406;
  int** __nfinish1407;
  this1405 = v1401;
  __nstart1406 = v1402;
  __nfinish1407 = v1403;
  struct std___Deque_base_int__std__allocator_int__* t1408 = this1405;
    int** __n1409;
    int** t1410 = __nstart1406;
    __n1409 = t1410;
    while (1) {
      int** t1412 = __n1409;
      int** t1413 = __nfinish1407;
      _Bool c1414 = ((t1412 < t1413)) ? 1 : 0;
      if (!c1414) break;
      int** t1415 = __n1409;
      int* t1416 = *t1415;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t1408, t1416);
    for_step1411: ;
      int** t1417 = __n1409;
      int c1418 = 1;
      int** ptr1419 = &(t1417)[c1418];
      __n1409 = ptr1419;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v1420, int** v1421, int** v1422) {
bb1423:
  struct std___Deque_base_int__std__allocator_int__* this1424;
  int** __nstart1425;
  int** __nfinish1426;
  int** __cur1427;
  this1424 = v1420;
  __nstart1425 = v1421;
  __nfinish1426 = v1422;
  struct std___Deque_base_int__std__allocator_int__* t1428 = this1424;
        int** t1430 = __nstart1425;
        __cur1427 = t1430;
        while (1) {
          int** t1432 = __cur1427;
          int** t1433 = __nfinish1426;
          _Bool c1434 = ((t1432 < t1433)) ? 1 : 0;
          if (!c1434) break;
          int* r1435 = std___Deque_base_int__std__allocator_int______M_allocate_node(t1428);
          if (__cir_exc_active) {
            goto cir_try_dispatch1429;
          }
          int** t1436 = __cur1427;
          *t1436 = r1435;
        for_step1431: ;
          int** t1437 = __cur1427;
          int c1438 = 1;
          int** ptr1439 = &(t1437)[c1438];
          __cur1427 = ptr1439;
        }
    cir_try_dispatch1429: ;
    if (__cir_exc_active) {
    {
      int ca_tok1440 = 0;
      void* ca_exn1441 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t1442 = __nstart1425;
        int** t1443 = __cur1427;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1428, t1442, t1443);
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
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v1444, int** v1445, unsigned long v1446) {
bb1447:
  struct std____new_allocator_int___* this1448;
  int** __p1449;
  unsigned long __n1450;
  this1448 = v1444;
  __p1449 = v1445;
  __n1450 = v1446;
  struct std____new_allocator_int___* t1451 = this1448;
    unsigned long c1452 = 8;
    unsigned long c1453 = 16;
    _Bool c1454 = ((c1452 > c1453)) ? 1 : 0;
    if (c1454) {
      int** t1455 = __p1449;
      void* cast1456 = (void*)t1455;
      unsigned long t1457 = __n1450;
      unsigned long c1458 = 8;
      unsigned long b1459 = t1457 * c1458;
      unsigned long c1460 = 8;
      operator_delete_3(cast1456, b1459, c1460);
      return;
    }
  int** t1461 = __p1449;
  void* cast1462 = (void*)t1461;
  unsigned long t1463 = __n1450;
  unsigned long c1464 = 8;
  unsigned long b1465 = t1463 * c1464;
  operator_delete_2(cast1462, b1465);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v1466, int** v1467, unsigned long v1468) {
bb1469:
  struct std__allocator_int___* this1470;
  int** __p1471;
  unsigned long __n1472;
  this1470 = v1466;
  __p1471 = v1467;
  __n1472 = v1468;
  struct std__allocator_int___* t1473 = this1470;
    _Bool r1474 = std____is_constant_evaluated();
    if (r1474) {
      int** t1475 = __p1471;
      void* cast1476 = (void*)t1475;
      operator_delete(cast1476);
      return;
    }
  struct std____new_allocator_int___* base1477 = (struct std____new_allocator_int___*)((char *)t1473 + 0);
  int** t1478 = __p1471;
  unsigned long t1479 = __n1472;
  std____new_allocator_int____deallocate(base1477, t1478, t1479);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v1480, int** v1481, unsigned long v1482) {
bb1483:
  struct std__allocator_int___* __a1484;
  int** __p1485;
  unsigned long __n1486;
  __a1484 = v1480;
  __p1485 = v1481;
  __n1486 = v1482;
  struct std__allocator_int___* t1487 = __a1484;
  int** t1488 = __p1485;
  unsigned long t1489 = __n1486;
  std__allocator_int____deallocate(t1487, t1488, t1489);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v1490, int** v1491, unsigned long v1492) {
bb1493:
  struct std___Deque_base_int__std__allocator_int__* this1494;
  int** __p1495;
  unsigned long __n1496;
  struct std__allocator_int___ __map_alloc1497;
  this1494 = v1490;
  __p1495 = v1491;
  __n1496 = v1492;
  struct std___Deque_base_int__std__allocator_int__* t1498 = this1494;
  struct std__allocator_int___ r1499 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1498);
  __map_alloc1497 = r1499;
  int** t1500 = __p1495;
  unsigned long t1501 = __n1496;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc1497, t1500, t1501);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size() {
bb1502:
  unsigned long __retval1503;
  unsigned long c1504 = 4;
  unsigned long r1505 = std____deque_buf_size(c1504);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1503 = r1505;
  unsigned long t1506 = __retval1503;
  return t1506;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v1507, int** v1508) {
bb1509:
  struct std___Deque_iterator_int__int____int___* this1510;
  int** __new_node1511;
  this1510 = v1507;
  __new_node1511 = v1508;
  struct std___Deque_iterator_int__int____int___* t1512 = this1510;
  int** t1513 = __new_node1511;
  t1512->_M_node = t1513;
  int** t1514 = __new_node1511;
  int* t1515 = *t1514;
  t1512->_M_first = t1515;
  int* t1516 = t1512->_M_first;
  unsigned long r1517 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1518 = (long)r1517;
  int* ptr1519 = &(t1516)[cast1518];
  t1512->_M_last = ptr1519;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v1520, unsigned long v1521) {
bb1522:
  struct std___Deque_base_int__std__allocator_int__* this1523;
  unsigned long __num_elements1524;
  unsigned long __num_nodes1525;
  unsigned long ref_tmp01526;
  unsigned long ref_tmp11527;
  int** __nstart1528;
  int** __nfinish1529;
  this1523 = v1520;
  __num_elements1524 = v1521;
  struct std___Deque_base_int__std__allocator_int__* t1530 = this1523;
  unsigned long t1531 = __num_elements1524;
  unsigned long c1532 = 4;
  unsigned long r1533 = std____deque_buf_size(c1532);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1534 = t1531 / r1533;
  unsigned long c1535 = 1;
  unsigned long b1536 = b1534 + c1535;
  __num_nodes1525 = b1536;
  unsigned long c1537 = 8;
  ref_tmp01526 = c1537;
  unsigned long t1538 = __num_nodes1525;
  unsigned long c1539 = 2;
  unsigned long b1540 = t1538 + c1539;
  ref_tmp11527 = b1540;
  unsigned long* r1541 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01526, &ref_tmp11527);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1542 = *r1541;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1543 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1530->_M_impl) + 0);
  base1543->_M_map_size = t1542;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1544 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1530->_M_impl) + 0);
  unsigned long t1545 = base1544->_M_map_size;
  int** r1546 = std___Deque_base_int__std__allocator_int______M_allocate_map(t1530, t1545);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1547 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1530->_M_impl) + 0);
  base1547->_M_map = r1546;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1548 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1530->_M_impl) + 0);
  int** t1549 = base1548->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1550 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1530->_M_impl) + 0);
  unsigned long t1551 = base1550->_M_map_size;
  unsigned long t1552 = __num_nodes1525;
  unsigned long b1553 = t1551 - t1552;
  unsigned long c1554 = 2;
  unsigned long b1555 = b1553 / c1554;
  int** ptr1556 = &(t1549)[b1555];
  __nstart1528 = ptr1556;
  int** t1557 = __nstart1528;
  unsigned long t1558 = __num_nodes1525;
  int** ptr1559 = &(t1557)[t1558];
  __nfinish1529 = ptr1559;
      int** t1561 = __nstart1528;
      int** t1562 = __nfinish1529;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t1530, t1561, t1562);
      if (__cir_exc_active) {
        goto cir_try_dispatch1560;
      }
    cir_try_dispatch1560: ;
    if (__cir_exc_active) {
    {
      int ca_tok1563 = 0;
      void* ca_exn1564 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1565 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1530->_M_impl) + 0);
        int** t1566 = base1565->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1567 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1530->_M_impl) + 0);
        unsigned long t1568 = base1567->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1530, t1566, t1568);
        int** c1569 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1570 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1530->_M_impl) + 0);
        base1570->_M_map = c1569;
        unsigned long c1571 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1572 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1530->_M_impl) + 0);
        base1572->_M_map_size = c1571;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1573 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1530->_M_impl) + 0);
  int** t1574 = __nstart1528;
  std___Deque_iterator_int__int___int_____M_set_node(&base1573->_M_start, t1574);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1575 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1530->_M_impl) + 0);
  int** t1576 = __nfinish1529;
  int c1577 = -1;
  int** ptr1578 = &(t1576)[c1577];
  std___Deque_iterator_int__int___int_____M_set_node(&base1575->_M_finish, ptr1578);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1579 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1530->_M_impl) + 0);
  int* t1580 = base1579->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1581 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1530->_M_impl) + 0);
  base1581->_M_start._M_cur = t1580;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1582 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1530->_M_impl) + 0);
  int* t1583 = base1582->_M_finish._M_first;
  unsigned long t1584 = __num_elements1524;
  unsigned long c1585 = 4;
  unsigned long r1586 = std____deque_buf_size(c1585);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1587 = t1584 % r1586;
  int* ptr1588 = &(t1583)[b1587];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1589 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1530->_M_impl) + 0);
  base1589->_M_finish._M_cur = ptr1588;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1590) {
bb1591:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1592;
  this1592 = v1590;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1593 = this1592;
  {
    struct std__allocator_int_* base1594 = (struct std__allocator_int_*)((char *)t1593 + 0);
    std__allocator_int____allocator(base1594);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1595) {
bb1596:
  struct std___Deque_base_int__std__allocator_int__* this1597;
  this1597 = v1595;
  struct std___Deque_base_int__std__allocator_int__* t1598 = this1597;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1598->_M_impl);
    unsigned long c1599 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1598, c1599);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1598->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1600) {
bb1601:
  struct std___Deque_base_int__std__allocator_int__* this1602;
  this1602 = v1600;
  struct std___Deque_base_int__std__allocator_int__* t1603 = this1602;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1604 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1603->_M_impl) + 0);
      int** t1605 = base1604->_M_map;
      _Bool cast1606 = (_Bool)t1605;
      if (cast1606) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1607 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1603->_M_impl) + 0);
        int** t1608 = base1607->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1609 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1603->_M_impl) + 0);
        int** t1610 = base1609->_M_finish._M_node;
        int c1611 = 1;
        int** ptr1612 = &(t1610)[c1611];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1603, t1608, ptr1612);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1613 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1603->_M_impl) + 0);
        int** t1614 = base1613->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1615 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1603->_M_impl) + 0);
        unsigned long t1616 = base1615->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1603, t1614, t1616);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1603->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1617) {
bb1618:
  struct std____new_allocator_int_* this1619;
  this1619 = v1617;
  struct std____new_allocator_int_* t1620 = this1619;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1621) {
bb1622:
  struct std__allocator_int_* this1623;
  this1623 = v1621;
  struct std__allocator_int_* t1624 = this1623;
  struct std____new_allocator_int_* base1625 = (struct std____new_allocator_int_*)((char *)t1624 + 0);
  std____new_allocator_int_____new_allocator(base1625);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1626) {
bb1627:
  struct std___Deque_iterator_int__int____int___* this1628;
  this1628 = v1626;
  struct std___Deque_iterator_int__int____int___* t1629 = this1628;
  int* c1630 = ((void*)0);
  t1629->_M_cur = c1630;
  int* c1631 = ((void*)0);
  t1629->_M_first = c1631;
  int* c1632 = ((void*)0);
  t1629->_M_last = c1632;
  int** c1633 = ((void*)0);
  t1629->_M_node = c1633;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1634) {
bb1635:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1636;
  this1636 = v1634;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1637 = this1636;
  int** c1638 = ((void*)0);
  t1637->_M_map = c1638;
  unsigned long c1639 = 0;
  t1637->_M_map_size = c1639;
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1637->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1637->_M_finish);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1640) {
bb1641:
  struct std__allocator_int_* this1642;
  this1642 = v1640;
  struct std__allocator_int_* t1643 = this1642;
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1644) {
bb1645:
  struct std____new_allocator_int___* this1646;
  this1646 = v1644;
  struct std____new_allocator_int___* t1647 = this1646;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1648) {
bb1649:
  int* __location1650;
  __location1650 = v1648;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1651, int* v1652) {
bb1653:
  int* __first1654;
  int* __last1655;
  __first1654 = v1651;
  __last1655 = v1652;
      _Bool r1656 = std____is_constant_evaluated();
      if (r1656) {
          while (1) {
            int* t1658 = __first1654;
            int* t1659 = __last1655;
            _Bool c1660 = ((t1658 != t1659)) ? 1 : 0;
            if (!c1660) break;
            int* t1661 = __first1654;
            void_std__destroy_at_int_(t1661);
            if (__cir_exc_active) {
              return;
            }
          for_step1657: ;
            int* t1662 = __first1654;
            int c1663 = 1;
            int* ptr1664 = &(t1662)[c1663];
            __first1654 = ptr1664;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1665, int* v1666, struct std__allocator_int_* v1667) {
bb1668:
  int* __first1669;
  int* __last1670;
  struct std__allocator_int_* unnamed1671;
  __first1669 = v1665;
  __last1670 = v1666;
  unnamed1671 = v1667;
  int* t1672 = __first1669;
  int* t1673 = __last1670;
  void_std___Destroy_int__(t1672, t1673);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb1674:
  unsigned long __retval1675;
  unsigned long c1676 = 4;
  unsigned long r1677 = std____deque_buf_size(c1676);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1675 = r1677;
  unsigned long t1678 = __retval1675;
  return t1678;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v1679, struct std___Deque_iterator_int__int____int___ v1680, struct std___Deque_iterator_int__int____int___ v1681) {
bb1682:
  struct std__deque_int__std__allocator_int__* this1683;
  struct std___Deque_iterator_int__int____int___ __first1684;
  struct std___Deque_iterator_int__int____int___ __last1685;
  this1683 = v1679;
  __first1684 = v1680;
  __last1685 = v1681;
  struct std__deque_int__std__allocator_int__* t1686 = this1683;
    int** __node1687;
    int** t1688 = __first1684._M_node;
    int c1689 = 1;
    int** ptr1690 = &(t1688)[c1689];
    __node1687 = ptr1690;
    while (1) {
      int** t1692 = __node1687;
      int** t1693 = __last1685._M_node;
      _Bool c1694 = ((t1692 < t1693)) ? 1 : 0;
      if (!c1694) break;
      int** t1695 = __node1687;
      int* t1696 = *t1695;
      int** t1697 = __node1687;
      int* t1698 = *t1697;
      unsigned long r1699 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr1700 = &(t1698)[r1699];
      struct std___Deque_base_int__std__allocator_int__* base1701 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1686 + 0);
      struct std__allocator_int_* r1702 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1701);
      void_std___Destroy_int___int_(t1696, ptr1700, r1702);
      if (__cir_exc_active) {
        return;
      }
    for_step1691: ;
      int** t1703 = __node1687;
      int c1704 = 1;
      int** ptr1705 = &(t1703)[c1704];
      __node1687 = ptr1705;
    }
    int** t1706 = __first1684._M_node;
    int** t1707 = __last1685._M_node;
    _Bool c1708 = ((t1706 != t1707)) ? 1 : 0;
    if (c1708) {
      int* t1709 = __first1684._M_cur;
      int* t1710 = __first1684._M_last;
      struct std___Deque_base_int__std__allocator_int__* base1711 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1686 + 0);
      struct std__allocator_int_* r1712 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1711);
      void_std___Destroy_int___int_(t1709, t1710, r1712);
      if (__cir_exc_active) {
        return;
      }
      int* t1713 = __last1685._M_first;
      int* t1714 = __last1685._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1715 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1686 + 0);
      struct std__allocator_int_* r1716 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1715);
      void_std___Destroy_int___int_(t1713, t1714, r1716);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t1717 = __first1684._M_cur;
      int* t1718 = __last1685._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1719 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1686 + 0);
      struct std__allocator_int_* r1720 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1719);
      void_std___Destroy_int___int_(t1717, t1718, r1720);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v1721, struct std___Deque_iterator_int__int____int___ v1722, struct std___Deque_iterator_int__int____int___ v1723, struct std__allocator_int_* v1724) {
bb1725:
  struct std__deque_int__std__allocator_int__* this1726;
  struct std___Deque_iterator_int__int____int___ __first1727;
  struct std___Deque_iterator_int__int____int___ __last1728;
  struct std__allocator_int_* unnamed1729;
  this1726 = v1721;
  __first1727 = v1722;
  __last1728 = v1723;
  unnamed1729 = v1724;
  struct std__deque_int__std__allocator_int__* t1730 = this1726;
    _Bool c1731 = 0;
    if (c1731) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01732;
      struct std___Deque_iterator_int__int____int___ agg_tmp11733;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01732, &__first1727);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11733, &__last1728);
      struct std___Deque_iterator_int__int____int___ t1734 = agg_tmp01732;
      struct std___Deque_iterator_int__int____int___ t1735 = agg_tmp11733;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t1730, t1734, t1735);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v1736) {
bb1737:
  struct std__deque_int__std__allocator_int__* this1738;
  struct std___Deque_iterator_int__int____int___ __retval1739;
  this1738 = v1736;
  struct std__deque_int__std__allocator_int__* t1740 = this1738;
  struct std___Deque_base_int__std__allocator_int__* base1741 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1740 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1742 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1741->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1739, &base1742->_M_start);
  struct std___Deque_iterator_int__int____int___ t1743 = __retval1739;
  return t1743;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v1744) {
bb1745:
  struct std__deque_int__std__allocator_int__* this1746;
  struct std___Deque_iterator_int__int____int___ __retval1747;
  this1746 = v1744;
  struct std__deque_int__std__allocator_int__* t1748 = this1746;
  struct std___Deque_base_int__std__allocator_int__* base1749 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1748 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1750 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1749->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1747, &base1750->_M_finish);
  struct std___Deque_iterator_int__int____int___ t1751 = __retval1747;
  return t1751;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v1752) {
bb1753:
  struct std___Deque_base_int__std__allocator_int__* this1754;
  struct std__allocator_int_* __retval1755;
  this1754 = v1752;
  struct std___Deque_base_int__std__allocator_int__* t1756 = this1754;
  struct std__allocator_int_* base1757 = (struct std__allocator_int_*)((char *)&(t1756->_M_impl) + 0);
  __retval1755 = base1757;
  struct std__allocator_int_* t1758 = __retval1755;
  return t1758;
}

