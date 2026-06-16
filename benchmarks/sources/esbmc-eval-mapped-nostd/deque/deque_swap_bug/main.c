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
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____new_allocator_int___ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
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
char _str[16] = "first[2] == 100";
char _str_1[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_swap_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "second[4] == 200";
char _str_3[16] = "first[4] != 200";
char _str_4[17] = "second[2] != 100";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[16] = "first contains:";
char _str_6[2] = " ";
char _str_7[18] = "\nsecond contains:";
char _str_8[48] = "cannot create std::deque larger than max_size()";
char _str_9[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm[91] = "reference std::deque<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4swapERS1_[91] = "void std::deque<int>::swap(deque<_Tp, _Alloc> &) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_11[104] = "_Alloc_traits::propagate_on_container_swap::value || _M_get_Tp_allocator() == __x._M_get_Tp_allocator()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* p0, long p1);
struct std___Deque_iterator_int__int____int___ std__operator__3(struct std___Deque_iterator_int__int____int___* p0, long p1);
int* std___Deque_iterator_int__int___int____operator___long__const(struct std___Deque_iterator_int__int____int___* p0, long p1);
int* std__deque_int__std__allocator_int_____operator__(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
_Bool std__operator__(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p0, struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p1);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* std___Deque_base_int__std__allocator_int______Deque_impl_data__operator_(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p0, struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p1);
void std__enable_if___and__std____not__std____is_tuple_like_std___Deque_base_int__std__allocator_int______Deque_impl_data_____std__is_move_constructible_std___Deque_base_int__std__allocator_int______Deque_impl_data___std__is_move_assignable_std___Deque_base_int__std__allocator_int______Deque_impl_data_____value__void___type_std__swap_std___Deque_base_int__std__allocator_int______Deque_impl_data_(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p0, struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p1);
void std___Deque_base_int__std__allocator_int______Deque_impl_data___M_swap_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p0, struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p1);
void void_std____alloc_on_swap_std__allocator_int___(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void __gnu_cxx____alloc_traits_std__allocator_int___int____S_on_swap(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void std__deque_int__std__allocator_int_____swap(struct std__deque_int__std__allocator_int__* p0, struct std__deque_int__std__allocator_int__* p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__2(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
long std__operator_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* p0);
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* p0);
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
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* p0);
int main();
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
extern void std____throw_length_error(char* p0);
unsigned long std__deque_int__std__allocator_int______S_check_init_len(unsigned long p0, struct std__allocator_int_* p1);
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0, struct std__allocator_int_* p1);
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
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0, struct std__allocator_int_* p1, unsigned long p2);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std___Construct_int__int_const__(int* p0, int* p1);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
void void_std____do_uninit_fill_int___int_(int* p0, int* p1, int* p2);
void void_std__uninitialized_fill_int___int_(int* p0, int* p1, int* p2);
void void_std____uninitialized_fill_a_int___int__int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
unsigned long std__deque_int__std__allocator_int______S_buffer_size();
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* p0);
_Bool std__operator___2(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* p0);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___2(struct std___Deque_iterator_int__int____int___* p0);
void void_std___Destroy_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1);
void void_std___Destroy_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std__allocator_int_* p2);
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* p0, int* p1, int** p2);
void std__deque_int__std__allocator_int______M_fill_initialize(struct std__deque_int__std__allocator_int__* p0, int* p1);
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0, struct std____new_allocator_int_* p1);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void std___Deque_iterator_int__int___int_____Deque_iterator_3(struct std___Deque_iterator_int__int____int___* p0);
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* p0);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__allocator_int_* p3);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* p0);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* p0);
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data_2(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p0, struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p1);
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data_3(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p0);

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v0) {
bb1: ;
  struct std__allocator_int_* this2;
  this2 = v0;
  struct std__allocator_int_* t3 = this2;
  struct std____new_allocator_int_* base4 = (struct std____new_allocator_int_*)((char *)t3 + 0);
  std____new_allocator_int_____new_allocator_2(base4);
  return;
}

// function: _ZNSt5dequeIiSaIiEEC2EmRKiRKS0_
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* v5, unsigned long v6, int* v7, struct std__allocator_int_* v8) {
bb9: ;
  struct std__deque_int__std__allocator_int__* this10;
  unsigned long __n11;
  int* __value12;
  struct std__allocator_int_* __a13;
  this10 = v5;
  __n11 = v6;
  __value12 = v7;
  __a13 = v8;
  struct std__deque_int__std__allocator_int__* t14 = this10;
  struct std___Deque_base_int__std__allocator_int__* base15 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t14 + 0);
  struct std__allocator_int_* t16 = __a13;
  unsigned long t17 = __n11;
  struct std__allocator_int_* t18 = __a13;
  unsigned long r19 = std__deque_int__std__allocator_int______S_check_init_len(t17, t18);
  if (__cir_exc_active) {
    return;
  }
  std___Deque_base_int__std__allocator_int______Deque_base(base15, t16, r19);
  if (__cir_exc_active) {
    return;
  }
    int* t20 = __value12;
    std__deque_int__std__allocator_int______M_fill_initialize(t14, t20);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base21 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t14 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base21);
      }
      return;
    }
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v22) {
bb23: ;
  struct std__allocator_int_* this24;
  this24 = v22;
  struct std__allocator_int_* t25 = this24;
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEpLEl
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* v26, long v27) {
bb28: ;
  struct std___Deque_iterator_int__int____int___* this29;
  long __n30;
  struct std___Deque_iterator_int__int____int___* __retval31;
  long __offset32;
  this29 = v26;
  __n30 = v27;
  struct std___Deque_iterator_int__int____int___* t33 = this29;
  long t34 = __n30;
  int* t35 = t33->_M_cur;
  int* t36 = t33->_M_first;
  long diff37 = t35 - t36;
  long b38 = t34 + diff37;
  __offset32 = b38;
    long t39 = __offset32;
    long c40 = 0;
    _Bool c41 = ((t39 >= c40)) ? 1 : 0;
    _Bool ternary42;
    if (c41) {
      long t43 = __offset32;
      unsigned long r44 = std___Deque_iterator_int__int___int_____S_buffer_size();
      long cast45 = (long)r44;
      _Bool c46 = ((t43 < cast45)) ? 1 : 0;
      ternary42 = (_Bool)c46;
    } else {
      _Bool c47 = 0;
      ternary42 = (_Bool)c47;
    }
    if (ternary42) {
      long t48 = __n30;
      int* t49 = t33->_M_cur;
      int* ptr50 = &(t49)[t48];
      t33->_M_cur = ptr50;
    } else {
      long __node_offset51;
      long t52 = __offset32;
      long c53 = 0;
      _Bool c54 = ((t52 > c53)) ? 1 : 0;
      long ternary55;
      if (c54) {
        long t56 = __offset32;
        unsigned long r57 = std___Deque_iterator_int__int___int_____S_buffer_size();
        long cast58 = (long)r57;
        long b59 = t56 / cast58;
        ternary55 = (long)b59;
      } else {
        long t60 = __offset32;
        long u61 = -t60;
        long c62 = 1;
        long b63 = u61 - c62;
        unsigned long cast64 = (unsigned long)b63;
        unsigned long r65 = std___Deque_iterator_int__int___int_____S_buffer_size();
        unsigned long b66 = cast64 / r65;
        long cast67 = (long)b66;
        long u68 = -cast67;
        long c69 = 1;
        long b70 = u68 - c69;
        ternary55 = (long)b70;
      }
      __node_offset51 = ternary55;
      int** t71 = t33->_M_node;
      long t72 = __node_offset51;
      int** ptr73 = &(t71)[t72];
      std___Deque_iterator_int__int___int_____M_set_node(t33, ptr73);
      int* t74 = t33->_M_first;
      long t75 = __offset32;
      long t76 = __node_offset51;
      unsigned long r77 = std___Deque_iterator_int__int___int_____S_buffer_size();
      long cast78 = (long)r77;
      long b79 = t76 * cast78;
      long b80 = t75 - b79;
      int* ptr81 = &(t74)[b80];
      t33->_M_cur = ptr81;
    }
  __retval31 = t33;
  struct std___Deque_iterator_int__int____int___* t82 = __retval31;
  return t82;
}

// function: _ZStplRKSt15_Deque_iteratorIiRiPiEl
struct std___Deque_iterator_int__int____int___ std__operator__3(struct std___Deque_iterator_int__int____int___* v83, long v84) {
bb85: ;
  struct std___Deque_iterator_int__int____int___* __x86;
  long __n87;
  struct std___Deque_iterator_int__int____int___ __retval88;
  __x86 = v83;
  __n87 = v84;
  struct std___Deque_iterator_int__int____int___* t89 = __x86;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval88, t89);
  long t90 = __n87;
  struct std___Deque_iterator_int__int____int___* r91 = std___Deque_iterator_int__int___int____operator__(&__retval88, t90);
  struct std___Deque_iterator_int__int____int___ t92 = __retval88;
  return t92;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEixEl
int* std___Deque_iterator_int__int___int____operator___long__const(struct std___Deque_iterator_int__int____int___* v93, long v94) {
bb95: ;
  struct std___Deque_iterator_int__int____int___* this96;
  long __n97;
  int* __retval98;
  struct std___Deque_iterator_int__int____int___ ref_tmp099;
  this96 = v93;
  __n97 = v94;
  struct std___Deque_iterator_int__int____int___* t100 = this96;
  long t101 = __n97;
  struct std___Deque_iterator_int__int____int___ r102 = std__operator__3(t100, t101);
  ref_tmp099 = r102;
  int* r103 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp099);
  __retval98 = r103;
  int* t104 = __retval98;
  return t104;
}

// function: _ZNSt5dequeIiSaIiEEixEm
int* std__deque_int__std__allocator_int_____operator__(struct std__deque_int__std__allocator_int__* v105, unsigned long v106) {
bb107: ;
  struct std__deque_int__std__allocator_int__* this108;
  unsigned long __n109;
  int* __retval110;
  this108 = v105;
  __n109 = v106;
  struct std__deque_int__std__allocator_int__* t111 = this108;
    do {
          unsigned long t112 = __n109;
          unsigned long r113 = std__deque_int__std__allocator_int_____size___const(t111);
          _Bool c114 = ((t112 < r113)) ? 1 : 0;
          _Bool u115 = !c114;
          if (u115) {
            char* cast116 = (char*)&(_str_9);
            int c117 = 1433;
            char* cast118 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm);
            char* cast119 = (char*)&(_str_10);
            std____glibcxx_assert_fail(cast116, c117, cast118, cast119);
          }
      _Bool c120 = 0;
      if (!c120) break;
    } while (1);
  struct std___Deque_base_int__std__allocator_int__* base121 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t111 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base122 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base121->_M_impl) + 0);
  unsigned long t123 = __n109;
  long cast124 = (long)t123;
  int* r125 = std___Deque_iterator_int__int___int____operator___long__const(&base122->_M_start, cast124);
  __retval110 = r125;
  int* t126 = __retval110;
  return t126;
}

// function: _ZSteqRKSaIiES1_
_Bool std__operator__(struct std__allocator_int_* v127, struct std__allocator_int_* v128) {
bb129: ;
  struct std__allocator_int_* unnamed130;
  struct std__allocator_int_* unnamed131;
  _Bool __retval132;
  unnamed130 = v127;
  unnamed131 = v128;
  _Bool c133 = 1;
  __retval132 = c133;
  _Bool t134 = __retval132;
  return t134;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2EOS2_
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v135, struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v136) {
bb137: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this138;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* __x139;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data ref_tmp0140;
  this138 = v135;
  __x139 = v136;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t141 = this138;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t142 = __x139;
  std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data_2(t141, t142);
  std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data_3(&ref_tmp0140);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t143 = __x139;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* r144 = std___Deque_base_int__std__allocator_int______Deque_impl_data__operator_(t143, &ref_tmp0140);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEaSERKS2_
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator_(struct std___Deque_iterator_int__int____int___* v145, struct std___Deque_iterator_int__int____int___* v146) {
bb147: ;
  struct std___Deque_iterator_int__int____int___* this148;
  struct std___Deque_iterator_int__int____int___* unnamed149;
  struct std___Deque_iterator_int__int____int___* __retval150;
  this148 = v145;
  unnamed149 = v146;
  struct std___Deque_iterator_int__int____int___* t151 = this148;
  struct std___Deque_iterator_int__int____int___* t152 = unnamed149;
  int* t153 = t152->_M_cur;
  t151->_M_cur = t153;
  struct std___Deque_iterator_int__int____int___* t154 = unnamed149;
  int* t155 = t154->_M_first;
  t151->_M_first = t155;
  struct std___Deque_iterator_int__int____int___* t156 = unnamed149;
  int* t157 = t156->_M_last;
  t151->_M_last = t157;
  struct std___Deque_iterator_int__int____int___* t158 = unnamed149;
  int** t159 = t158->_M_node;
  t151->_M_node = t159;
  __retval150 = t151;
  struct std___Deque_iterator_int__int____int___* t160 = __retval150;
  return t160;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataaSERKS2_
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* std___Deque_base_int__std__allocator_int______Deque_impl_data__operator_(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v161, struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v162) {
bb163: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this164;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* unnamed165;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* __retval166;
  this164 = v161;
  unnamed165 = v162;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t167 = this164;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t168 = unnamed165;
  int** t169 = t168->_M_map;
  t167->_M_map = t169;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t170 = unnamed165;
  unsigned long t171 = t170->_M_map_size;
  t167->_M_map_size = t171;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t172 = unnamed165;
  struct std___Deque_iterator_int__int____int___* r173 = std___Deque_iterator_int__int___int____operator_(&t167->_M_start, &t172->_M_start);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t174 = unnamed165;
  struct std___Deque_iterator_int__int____int___* r175 = std___Deque_iterator_int__int___int____operator_(&t167->_M_finish, &t174->_M_finish);
  __retval166 = t167;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t176 = __retval166;
  return t176;
}

// function: _ZSt4swapINSt11_Deque_baseIiSaIiEE16_Deque_impl_dataEENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS7_ESt18is_move_assignableIS7_EEE5valueEvE4typeERS7_SG_
void std__enable_if___and__std____not__std____is_tuple_like_std___Deque_base_int__std__allocator_int______Deque_impl_data_____std__is_move_constructible_std___Deque_base_int__std__allocator_int______Deque_impl_data___std__is_move_assignable_std___Deque_base_int__std__allocator_int______Deque_impl_data_____value__void___type_std__swap_std___Deque_base_int__std__allocator_int______Deque_impl_data_(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v177, struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v178) {
bb179: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* __a180;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* __b181;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __tmp182;
  __a180 = v177;
  __b181 = v178;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t183 = __a180;
  std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(&__tmp182, t183);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t184 = __b181;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t185 = __a180;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* r186 = std___Deque_base_int__std__allocator_int______Deque_impl_data__operator_(t185, t184);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t187 = __b181;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* r188 = std___Deque_base_int__std__allocator_int______Deque_impl_data__operator_(t187, &__tmp182);
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_data12_M_swap_dataERS2_
void std___Deque_base_int__std__allocator_int______Deque_impl_data___M_swap_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v189, struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v190) {
bb191: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this192;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* __x193;
  this192 = v189;
  __x193 = v190;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t194 = this192;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t195 = __x193;
  std__enable_if___and__std____not__std____is_tuple_like_std___Deque_base_int__std__allocator_int______Deque_impl_data_____std__is_move_constructible_std___Deque_base_int__std__allocator_int______Deque_impl_data___std__is_move_assignable_std___Deque_base_int__std__allocator_int______Deque_impl_data_____value__void___type_std__swap_std___Deque_base_int__std__allocator_int______Deque_impl_data_(t194, t195);
  return;
}

// function: _ZSt15__alloc_on_swapISaIiEEvRT_S2_
void void_std____alloc_on_swap_std__allocator_int___(struct std__allocator_int_* v196, struct std__allocator_int_* v197) {
bb198: ;
  struct std__allocator_int_* __one199;
  struct std__allocator_int_* __two200;
  __one199 = v196;
  __two200 = v197;
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIiEiE10_S_on_swapERS1_S3_
void __gnu_cxx____alloc_traits_std__allocator_int___int____S_on_swap(struct std__allocator_int_* v201, struct std__allocator_int_* v202) {
bb203: ;
  struct std__allocator_int_* __a204;
  struct std__allocator_int_* __b205;
  __a204 = v201;
  __b205 = v202;
  struct std__allocator_int_* t206 = __a204;
  struct std__allocator_int_* t207 = __b205;
  void_std____alloc_on_swap_std__allocator_int___(t206, t207);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE4swapERS1_
void std__deque_int__std__allocator_int_____swap(struct std__deque_int__std__allocator_int__* v208, struct std__deque_int__std__allocator_int__* v209) {
bb210: ;
  struct std__deque_int__std__allocator_int__* this211;
  struct std__deque_int__std__allocator_int__* __x212;
  this211 = v208;
  __x212 = v209;
  struct std__deque_int__std__allocator_int__* t213 = this211;
    do {
          _Bool t214 = _ZNSt17integral_constantIbLb0EE5valueE;
          _Bool ternary215;
          if (t214) {
            _Bool c216 = 1;
            ternary215 = (_Bool)c216;
          } else {
            struct std___Deque_base_int__std__allocator_int__* base217 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t213 + 0);
            struct std__allocator_int_* r218 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base217);
            struct std__deque_int__std__allocator_int__* t219 = __x212;
            struct std___Deque_base_int__std__allocator_int__* base220 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t219 + 0);
            struct std__allocator_int_* r221 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base220);
            _Bool r222 = std__operator__(r218, r221);
            ternary215 = (_Bool)r222;
          }
          _Bool u223 = !ternary215;
          if (u223) {
            char* cast224 = (char*)&(_str_9);
            int c225 = 1920;
            char* cast226 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4swapERS1_);
            char* cast227 = (char*)&(_str_11);
            std____glibcxx_assert_fail(cast224, c225, cast226, cast227);
          }
      _Bool c228 = 0;
      if (!c228) break;
    } while (1);
  struct std___Deque_base_int__std__allocator_int__* base229 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t213 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base230 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base229->_M_impl) + 0);
  struct std__deque_int__std__allocator_int__* t231 = __x212;
  struct std___Deque_base_int__std__allocator_int__* base232 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t231 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base233 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base232->_M_impl) + 0);
  std___Deque_base_int__std__allocator_int______Deque_impl_data___M_swap_data(base230, base233);
  struct std___Deque_base_int__std__allocator_int__* base234 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t213 + 0);
  struct std__allocator_int_* r235 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base234);
  struct std__deque_int__std__allocator_int__* t236 = __x212;
  struct std___Deque_base_int__std__allocator_int__* base237 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t236 + 0);
  struct std__allocator_int_* r238 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base237);
  __gnu_cxx____alloc_traits_std__allocator_int___int____S_on_swap(r235, r238);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v239, int v240) {
bb241: ;
  int __a242;
  int __b243;
  int __retval244;
  __a242 = v239;
  __b243 = v240;
  int t245 = __a242;
  int t246 = __b243;
  int b247 = t245 | t246;
  __retval244 = b247;
  int t248 = __retval244;
  return t248;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v249) {
bb250: ;
  struct std__basic_ios_char__std__char_traits_char__* this251;
  int __retval252;
  this251 = v249;
  struct std__basic_ios_char__std__char_traits_char__* t253 = this251;
  struct std__ios_base* base254 = (struct std__ios_base*)((char *)t253 + 0);
  int t255 = base254->_M_streambuf_state;
  __retval252 = t255;
  int t256 = __retval252;
  return t256;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v257, int v258) {
bb259: ;
  struct std__basic_ios_char__std__char_traits_char__* this260;
  int __state261;
  this260 = v257;
  __state261 = v258;
  struct std__basic_ios_char__std__char_traits_char__* t262 = this260;
  int r263 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t262);
  if (__cir_exc_active) {
    return;
  }
  int t264 = __state261;
  int r265 = std__operator__2(r263, t264);
  std__basic_ios_char__std__char_traits_char_____clear(t262, r265);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v266, char* v267) {
bb268: ;
  char* __c1269;
  char* __c2270;
  _Bool __retval271;
  __c1269 = v266;
  __c2270 = v267;
  char* t272 = __c1269;
  char t273 = *t272;
  int cast274 = (int)t273;
  char* t275 = __c2270;
  char t276 = *t275;
  int cast277 = (int)t276;
  _Bool c278 = ((cast274 == cast277)) ? 1 : 0;
  __retval271 = c278;
  _Bool t279 = __retval271;
  return t279;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v280) {
bb281: ;
  char* __p282;
  unsigned long __retval283;
  unsigned long __i284;
  __p282 = v280;
  unsigned long c285 = 0;
  __i284 = c285;
    char ref_tmp0286;
    while (1) {
      unsigned long t287 = __i284;
      char* t288 = __p282;
      char* ptr289 = &(t288)[t287];
      char c290 = 0;
      ref_tmp0286 = c290;
      _Bool r291 = __gnu_cxx__char_traits_char___eq(ptr289, &ref_tmp0286);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u292 = !r291;
      if (!u292) break;
      unsigned long t293 = __i284;
      unsigned long u294 = t293 + 1;
      __i284 = u294;
    }
  unsigned long t295 = __i284;
  __retval283 = t295;
  unsigned long t296 = __retval283;
  return t296;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v297) {
bb298: ;
  char* __s299;
  unsigned long __retval300;
  __s299 = v297;
    _Bool r301 = std____is_constant_evaluated();
    if (r301) {
      char* t302 = __s299;
      unsigned long r303 = __gnu_cxx__char_traits_char___length(t302);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval300 = r303;
      unsigned long t304 = __retval300;
      return t304;
    }
  char* t305 = __s299;
  unsigned long r306 = strlen(t305);
  __retval300 = r306;
  unsigned long t307 = __retval300;
  return t307;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v308, char* v309) {
bb310: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out311;
  char* __s312;
  struct std__basic_ostream_char__std__char_traits_char__* __retval313;
  __out311 = v308;
  __s312 = v309;
    char* t314 = __s312;
    _Bool cast315 = (_Bool)t314;
    _Bool u316 = !cast315;
    if (u316) {
      struct std__basic_ostream_char__std__char_traits_char__* t317 = __out311;
      void** v318 = (void**)t317;
      void* v319 = *((void**)v318);
      unsigned char* cast320 = (unsigned char*)v319;
      long c321 = -24;
      unsigned char* ptr322 = &(cast320)[c321];
      long* cast323 = (long*)ptr322;
      long t324 = *cast323;
      unsigned char* cast325 = (unsigned char*)t317;
      unsigned char* ptr326 = &(cast325)[t324];
      struct std__basic_ostream_char__std__char_traits_char__* cast327 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr326;
      struct std__basic_ios_char__std__char_traits_char__* cast328 = (struct std__basic_ios_char__std__char_traits_char__*)cast327;
      int t329 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast328, t329);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t330 = __out311;
      char* t331 = __s312;
      char* t332 = __s312;
      unsigned long r333 = std__char_traits_char___length(t332);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast334 = (long)r333;
      struct std__basic_ostream_char__std__char_traits_char__* r335 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t330, t331, cast334);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t336 = __out311;
  __retval313 = t336;
  struct std__basic_ostream_char__std__char_traits_char__* t337 = __retval313;
  return t337;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiES4_
long std__operator_(struct std___Deque_iterator_int__int____int___* v338, struct std___Deque_iterator_int__int____int___* v339) {
bb340: ;
  struct std___Deque_iterator_int__int____int___* __x341;
  struct std___Deque_iterator_int__int____int___* __y342;
  long __retval343;
  __x341 = v338;
  __y342 = v339;
  unsigned long r344 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast345 = (long)r344;
  struct std___Deque_iterator_int__int____int___* t346 = __x341;
  int** t347 = t346->_M_node;
  struct std___Deque_iterator_int__int____int___* t348 = __y342;
  int** t349 = t348->_M_node;
  long diff350 = t347 - t349;
  struct std___Deque_iterator_int__int____int___* t351 = __x341;
  int** t352 = t351->_M_node;
  _Bool cast353 = (_Bool)t352;
  long cast354 = (long)cast353;
  long b355 = diff350 - cast354;
  long b356 = cast345 * b355;
  struct std___Deque_iterator_int__int____int___* t357 = __x341;
  int* t358 = t357->_M_cur;
  struct std___Deque_iterator_int__int____int___* t359 = __x341;
  int* t360 = t359->_M_first;
  long diff361 = t358 - t360;
  long b362 = b356 + diff361;
  struct std___Deque_iterator_int__int____int___* t363 = __y342;
  int* t364 = t363->_M_last;
  struct std___Deque_iterator_int__int____int___* t365 = __y342;
  int* t366 = t365->_M_cur;
  long diff367 = t364 - t366;
  long b368 = b362 + diff367;
  __retval343 = b368;
  long t369 = __retval343;
  return t369;
}

// function: _ZNKSt5dequeIiSaIiEE8max_sizeEv
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* v370) {
bb371: ;
  struct std__deque_int__std__allocator_int__* this372;
  unsigned long __retval373;
  this372 = v370;
  struct std__deque_int__std__allocator_int__* t374 = this372;
  struct std___Deque_base_int__std__allocator_int__* base375 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t374 + 0);
  struct std__allocator_int_* r376 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(base375);
  unsigned long r377 = std__deque_int__std__allocator_int______S_max_size(r376);
  __retval373 = r377;
  unsigned long t378 = __retval373;
  return t378;
}

// function: _ZNKSt5dequeIiSaIiEE4sizeEv
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* v379) {
bb380: ;
  struct std__deque_int__std__allocator_int__* this381;
  unsigned long __retval382;
  unsigned long __sz383;
  this381 = v379;
  struct std__deque_int__std__allocator_int__* t384 = this381;
  struct std___Deque_base_int__std__allocator_int__* base385 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t384 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base386 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base385->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base387 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t384 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base388 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base387->_M_impl) + 0);
  long r389 = std__operator_(&base386->_M_finish, &base388->_M_start);
  unsigned long cast390 = (unsigned long)r389;
  __sz383 = cast390;
    unsigned long t391 = __sz383;
    unsigned long r392 = std__deque_int__std__allocator_int_____max_size___const(t384);
    _Bool c393 = ((t391 > r392)) ? 1 : 0;
    if (c393) {
      __builtin_unreachable();
    }
  unsigned long t394 = __sz383;
  __retval382 = t394;
  unsigned long t395 = __retval382;
  return t395;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v396, void* v397) {
bb398: ;
  struct std__basic_ostream_char__std__char_traits_char__* this399;
  void* __pf400;
  struct std__basic_ostream_char__std__char_traits_char__* __retval401;
  this399 = v396;
  __pf400 = v397;
  struct std__basic_ostream_char__std__char_traits_char__* t402 = this399;
  void* t403 = __pf400;
  struct std__basic_ostream_char__std__char_traits_char__* r404 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t403)(t402);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval401 = r404;
  struct std__basic_ostream_char__std__char_traits_char__* t405 = __retval401;
  return t405;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v406) {
bb407: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os408;
  struct std__basic_ostream_char__std__char_traits_char__* __retval409;
  __os408 = v406;
  struct std__basic_ostream_char__std__char_traits_char__* t410 = __os408;
  struct std__basic_ostream_char__std__char_traits_char__* r411 = std__ostream__flush(t410);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval409 = r411;
  struct std__basic_ostream_char__std__char_traits_char__* t412 = __retval409;
  return t412;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v413) {
bb414: ;
  struct std__ctype_char_* __f415;
  struct std__ctype_char_* __retval416;
  __f415 = v413;
    struct std__ctype_char_* t417 = __f415;
    _Bool cast418 = (_Bool)t417;
    _Bool u419 = !cast418;
    if (u419) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t420 = __f415;
  __retval416 = t420;
  struct std__ctype_char_* t421 = __retval416;
  return t421;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v422, char v423) {
bb424: ;
  struct std__ctype_char_* this425;
  char __c426;
  char __retval427;
  this425 = v422;
  __c426 = v423;
  struct std__ctype_char_* t428 = this425;
    char t429 = t428->_M_widen_ok;
    _Bool cast430 = (_Bool)t429;
    if (cast430) {
      char t431 = __c426;
      unsigned char cast432 = (unsigned char)t431;
      unsigned long cast433 = (unsigned long)cast432;
      char t434 = t428->_M_widen[cast433];
      __retval427 = t434;
      char t435 = __retval427;
      return t435;
    }
  std__ctype_char____M_widen_init___const(t428);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t436 = __c426;
  void** v437 = (void**)t428;
  void* v438 = *((void**)v437);
  char vcall441 = (char)__VERIFIER_virtual_call_char_char(t428, 6, t436);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval427 = vcall441;
  char t442 = __retval427;
  return t442;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v443, char v444) {
bb445: ;
  struct std__basic_ios_char__std__char_traits_char__* this446;
  char __c447;
  char __retval448;
  this446 = v443;
  __c447 = v444;
  struct std__basic_ios_char__std__char_traits_char__* t449 = this446;
  struct std__ctype_char_* t450 = t449->_M_ctype;
  struct std__ctype_char_* r451 = std__ctype_char__const__std____check_facet_std__ctype_char___(t450);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t452 = __c447;
  char r453 = std__ctype_char___widen_char__const(r451, t452);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval448 = r453;
  char t454 = __retval448;
  return t454;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v455) {
bb456: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os457;
  struct std__basic_ostream_char__std__char_traits_char__* __retval458;
  __os457 = v455;
  struct std__basic_ostream_char__std__char_traits_char__* t459 = __os457;
  struct std__basic_ostream_char__std__char_traits_char__* t460 = __os457;
  void** v461 = (void**)t460;
  void* v462 = *((void**)v461);
  unsigned char* cast463 = (unsigned char*)v462;
  long c464 = -24;
  unsigned char* ptr465 = &(cast463)[c464];
  long* cast466 = (long*)ptr465;
  long t467 = *cast466;
  unsigned char* cast468 = (unsigned char*)t460;
  unsigned char* ptr469 = &(cast468)[t467];
  struct std__basic_ostream_char__std__char_traits_char__* cast470 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr469;
  struct std__basic_ios_char__std__char_traits_char__* cast471 = (struct std__basic_ios_char__std__char_traits_char__*)cast470;
  char c472 = 10;
  char r473 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast471, c472);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r474 = std__ostream__put(t459, r473);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r475 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r474);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval458 = r475;
  struct std__basic_ostream_char__std__char_traits_char__* t476 = __retval458;
  return t476;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v477) {
bb478: ;
  struct std__deque_int__std__allocator_int__* this479;
  struct std___Deque_iterator_int__int____int___ agg_tmp0480;
  struct std___Deque_iterator_int__int____int___ agg_tmp1481;
  this479 = v477;
  struct std__deque_int__std__allocator_int__* t482 = this479;
    struct std___Deque_iterator_int__int____int___ r483 = std__deque_int__std__allocator_int_____begin(t482);
    agg_tmp0480 = r483;
    struct std___Deque_iterator_int__int____int___ r484 = std__deque_int__std__allocator_int_____end(t482);
    agg_tmp1481 = r484;
    struct std___Deque_base_int__std__allocator_int__* base485 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t482 + 0);
    struct std__allocator_int_* r486 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base485);
    struct std___Deque_iterator_int__int____int___ t487 = agg_tmp0480;
    struct std___Deque_iterator_int__int____int___ t488 = agg_tmp1481;
    std__deque_int__std__allocator_int______M_destroy_data(t482, t487, t488, r486);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base489 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t482 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base489);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base490 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t482 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base490);
  }
  return;
}

// function: main
int main() {
bb491: ;
  int __retval492;
  unsigned int i493;
  struct std__deque_int__std__allocator_int__ first494;
  int ref_tmp0495;
  struct std__allocator_int_ ref_tmp1496;
  struct std__deque_int__std__allocator_int__ second497;
  int ref_tmp2498;
  struct std__allocator_int_ ref_tmp3499;
  int c500 = 0;
  __retval492 = c500;
  unsigned long c501 = 3;
  int c502 = 100;
  ref_tmp0495 = c502;
  std__allocator_int___allocator_2(&ref_tmp1496);
    std__deque_int__std__allocator_int_____deque(&first494, c501, &ref_tmp0495, &ref_tmp1496);
    if (__cir_exc_active) {
      {
        std__allocator_int____allocator(&ref_tmp1496);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  {
    std__allocator_int____allocator(&ref_tmp1496);
  }
    unsigned long c503 = 5;
    int c504 = 200;
    ref_tmp2498 = c504;
    std__allocator_int___allocator_2(&ref_tmp3499);
      std__deque_int__std__allocator_int_____deque(&second497, c503, &ref_tmp2498, &ref_tmp3499);
      if (__cir_exc_active) {
        {
          std__allocator_int____allocator(&ref_tmp3499);
        }
        {
          std__deque_int__std__allocator_int______deque(&first494);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
    {
      std__allocator_int____allocator(&ref_tmp3499);
    }
      unsigned long c505 = 2;
      int* r506 = std__deque_int__std__allocator_int_____operator__(&first494, c505);
      int t507 = *r506;
      int c508 = 100;
      _Bool c509 = ((t507 == c508)) ? 1 : 0;
      if (c509) {
      } else {
        char* cast510 = (char*)&(_str);
        char* c511 = (char*)_str_1;
        unsigned int c512 = 20;
        char* cast513 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast510, c511, c512, cast513);
      }
      unsigned long c514 = 4;
      int* r515 = std__deque_int__std__allocator_int_____operator__(&second497, c514);
      int t516 = *r515;
      int c517 = 200;
      _Bool c518 = ((t516 == c517)) ? 1 : 0;
      if (c518) {
      } else {
        char* cast519 = (char*)&(_str_2);
        char* c520 = (char*)_str_1;
        unsigned int c521 = 21;
        char* cast522 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast519, c520, c521, cast522);
      }
      std__deque_int__std__allocator_int_____swap(&first494, &second497);
      unsigned long c523 = 4;
      int* r524 = std__deque_int__std__allocator_int_____operator__(&first494, c523);
      int t525 = *r524;
      int c526 = 200;
      _Bool c527 = ((t525 != c526)) ? 1 : 0;
      if (c527) {
      } else {
        char* cast528 = (char*)&(_str_3);
        char* c529 = (char*)_str_1;
        unsigned int c530 = 25;
        char* cast531 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast528, c529, c530, cast531);
      }
      unsigned long c532 = 2;
      int* r533 = std__deque_int__std__allocator_int_____operator__(&second497, c532);
      int t534 = *r533;
      int c535 = 100;
      _Bool c536 = ((t534 != c535)) ? 1 : 0;
      if (c536) {
      } else {
        char* cast537 = (char*)&(_str_4);
        char* c538 = (char*)_str_1;
        unsigned int c539 = 26;
        char* cast540 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast537, c538, c539, cast540);
      }
      char* cast541 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* r542 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast541);
      if (__cir_exc_active) {
        {
          std__deque_int__std__allocator_int______deque(&second497);
        }
        {
          std__deque_int__std__allocator_int______deque(&first494);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
        unsigned int c543 = 0;
        i493 = c543;
        while (1) {
          unsigned int t545 = i493;
          unsigned long cast546 = (unsigned long)t545;
          unsigned long r547 = std__deque_int__std__allocator_int_____size___const(&first494);
          _Bool c548 = ((cast546 < r547)) ? 1 : 0;
          if (!c548) break;
          char* cast549 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* r550 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast549);
          if (__cir_exc_active) {
            {
              std__deque_int__std__allocator_int______deque(&second497);
            }
            {
              std__deque_int__std__allocator_int______deque(&first494);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          unsigned int t551 = i493;
          unsigned long cast552 = (unsigned long)t551;
          int* r553 = std__deque_int__std__allocator_int_____operator__(&first494, cast552);
          int t554 = *r553;
          struct std__basic_ostream_char__std__char_traits_char__* r555 = std__ostream__operator__(r550, t554);
          if (__cir_exc_active) {
            {
              std__deque_int__std__allocator_int______deque(&second497);
            }
            {
              std__deque_int__std__allocator_int______deque(&first494);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
        for_step544: ;
          unsigned int t556 = i493;
          unsigned int u557 = t556 + 1;
          i493 = u557;
        }
      char* cast558 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* r559 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast558);
      if (__cir_exc_active) {
        {
          std__deque_int__std__allocator_int______deque(&second497);
        }
        {
          std__deque_int__std__allocator_int______deque(&first494);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
        unsigned int c560 = 0;
        i493 = c560;
        while (1) {
          unsigned int t562 = i493;
          unsigned long cast563 = (unsigned long)t562;
          unsigned long r564 = std__deque_int__std__allocator_int_____size___const(&second497);
          _Bool c565 = ((cast563 < r564)) ? 1 : 0;
          if (!c565) break;
          char* cast566 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* r567 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast566);
          if (__cir_exc_active) {
            {
              std__deque_int__std__allocator_int______deque(&second497);
            }
            {
              std__deque_int__std__allocator_int______deque(&first494);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          unsigned int t568 = i493;
          unsigned long cast569 = (unsigned long)t568;
          int* r570 = std__deque_int__std__allocator_int_____operator__(&second497, cast569);
          int t571 = *r570;
          struct std__basic_ostream_char__std__char_traits_char__* r572 = std__ostream__operator__(r567, t571);
          if (__cir_exc_active) {
            {
              std__deque_int__std__allocator_int______deque(&second497);
            }
            {
              std__deque_int__std__allocator_int______deque(&first494);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
        for_step561: ;
          unsigned int t573 = i493;
          unsigned int u574 = t573 + 1;
          i493 = u574;
        }
      struct std__basic_ostream_char__std__char_traits_char__* r575 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      if (__cir_exc_active) {
        {
          std__deque_int__std__allocator_int______deque(&second497);
        }
        {
          std__deque_int__std__allocator_int______deque(&first494);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      int c576 = 0;
      __retval492 = c576;
      int t577 = __retval492;
      int ret_val578 = t577;
      {
        std__deque_int__std__allocator_int______deque(&second497);
      }
      {
        std__deque_int__std__allocator_int______deque(&first494);
      }
      return ret_val578;
  int t579 = __retval492;
  return t579;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v580) {
bb581: ;
  struct std____new_allocator_int_* this582;
  this582 = v580;
  struct std____new_allocator_int_* t583 = this582;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v584, unsigned long* v585) {
bb586: ;
  unsigned long* __a587;
  unsigned long* __b588;
  unsigned long* __retval589;
  __a587 = v584;
  __b588 = v585;
    unsigned long* t590 = __b588;
    unsigned long t591 = *t590;
    unsigned long* t592 = __a587;
    unsigned long t593 = *t592;
    _Bool c594 = ((t591 < t593)) ? 1 : 0;
    if (c594) {
      unsigned long* t595 = __b588;
      __retval589 = t595;
      unsigned long* t596 = __retval589;
      return t596;
    }
  unsigned long* t597 = __a587;
  __retval589 = t597;
  unsigned long* t598 = __retval589;
  return t598;
}

// function: _ZNSt5dequeIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* v599) {
bb600: ;
  struct std__allocator_int_* __a601;
  unsigned long __retval602;
  unsigned long __diffmax603;
  unsigned long __allocmax604;
  __a601 = v599;
  unsigned long c605 = 9223372036854775807;
  __diffmax603 = c605;
  unsigned long c606 = 4611686018427387903;
  __allocmax604 = c606;
  unsigned long* r607 = unsigned_long_const__std__min_unsigned_long_(&__diffmax603, &__allocmax604);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t608 = *r607;
  __retval602 = t608;
  unsigned long t609 = __retval602;
  return t609;
}

// function: _ZNSt5dequeIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__deque_int__std__allocator_int______S_check_init_len(unsigned long v610, struct std__allocator_int_* v611) {
bb612: ;
  unsigned long __n613;
  struct std__allocator_int_* __a614;
  unsigned long __retval615;
  __n613 = v610;
  __a614 = v611;
    unsigned long t616 = __n613;
    struct std__allocator_int_* t617 = __a614;
    unsigned long r618 = std__deque_int__std__allocator_int______S_max_size(t617);
    _Bool c619 = ((t616 > r618)) ? 1 : 0;
    if (c619) {
      char* cast620 = (char*)&(_str_8);
      std____throw_length_error(cast620);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long t621 = __n613;
  __retval615 = t621;
  unsigned long t622 = __retval615;
  return t622;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2ERKS0_
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v623, struct std__allocator_int_* v624) {
bb625: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this626;
  struct std__allocator_int_* __a627;
  this626 = v623;
  __a627 = v624;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t628 = this626;
  struct std__allocator_int_* base629 = (struct std__allocator_int_*)((char *)t628 + 0);
  struct std__allocator_int_* t630 = __a627;
  std__allocator_int___allocator(base629, t630);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base631 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t628 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data_3(base631);
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v632) {
bb633: ;
  unsigned long __size634;
  unsigned long __retval635;
  __size634 = v632;
  unsigned long t636 = __size634;
  unsigned long c637 = 512;
  _Bool c638 = ((t636 < c637)) ? 1 : 0;
  unsigned long ternary639;
  if (c638) {
    unsigned long c640 = 512;
    unsigned long t641 = __size634;
    unsigned long b642 = c640 / t641;
    ternary639 = (unsigned long)b642;
  } else {
    unsigned long c643 = 1;
    ternary639 = (unsigned long)c643;
  }
  __retval635 = ternary639;
  unsigned long t644 = __retval635;
  return t644;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v645, unsigned long* v646) {
bb647: ;
  unsigned long* __a648;
  unsigned long* __b649;
  unsigned long* __retval650;
  __a648 = v645;
  __b649 = v646;
    unsigned long* t651 = __a648;
    unsigned long t652 = *t651;
    unsigned long* t653 = __b649;
    unsigned long t654 = *t653;
    _Bool c655 = ((t652 < t654)) ? 1 : 0;
    if (c655) {
      unsigned long* t656 = __b649;
      __retval650 = t656;
      unsigned long* t657 = __retval650;
      return t657;
    }
  unsigned long* t658 = __a648;
  __retval650 = t658;
  unsigned long* t659 = __retval650;
  return t659;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v660) {
bb661: ;
  struct std___Deque_base_int__std__allocator_int__* this662;
  struct std__allocator_int_* __retval663;
  this662 = v660;
  struct std___Deque_base_int__std__allocator_int__* t664 = this662;
  struct std__allocator_int_* base665 = (struct std__allocator_int_*)((char *)&(t664->_M_impl) + 0);
  __retval663 = base665;
  struct std__allocator_int_* t666 = __retval663;
  return t666;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v667, struct std__allocator_int_* v668) {
bb669: ;
  struct std__allocator_int___* this670;
  struct std__allocator_int_* unnamed671;
  this670 = v667;
  unnamed671 = v668;
  struct std__allocator_int___* t672 = this670;
  struct std____new_allocator_int___* base673 = (struct std____new_allocator_int___*)((char *)t672 + 0);
  std____new_allocator_int______new_allocator(base673);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v674) {
bb675: ;
  struct std___Deque_base_int__std__allocator_int__* this676;
  struct std__allocator_int___ __retval677;
  this676 = v674;
  struct std___Deque_base_int__std__allocator_int__* t678 = this676;
  struct std__allocator_int_* r679 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t678);
  std__allocator_int____allocator_int_(&__retval677, r679);
  struct std__allocator_int___ t680 = __retval677;
  return t680;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb681: ;
  _Bool __retval682;
    _Bool c683 = 0;
    __retval682 = c683;
    _Bool t684 = __retval682;
    return t684;
  abort();
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v685) {
bb686: ;
  struct std____new_allocator_int___* this687;
  unsigned long __retval688;
  this687 = v685;
  struct std____new_allocator_int___* t689 = this687;
  unsigned long c690 = 9223372036854775807;
  unsigned long c691 = 8;
  unsigned long b692 = c690 / c691;
  __retval688 = b692;
  unsigned long t693 = __retval688;
  return t693;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v694, unsigned long v695, void* v696) {
bb697: ;
  struct std____new_allocator_int___* this698;
  unsigned long __n699;
  void* unnamed700;
  int** __retval701;
  this698 = v694;
  __n699 = v695;
  unnamed700 = v696;
  struct std____new_allocator_int___* t702 = this698;
    unsigned long t703 = __n699;
    unsigned long r704 = std____new_allocator_int_____M_max_size___const(t702);
    _Bool c705 = ((t703 > r704)) ? 1 : 0;
    if (c705) {
        unsigned long t706 = __n699;
        unsigned long c707 = -1;
        unsigned long c708 = 8;
        unsigned long b709 = c707 / c708;
        _Bool c710 = ((t706 > b709)) ? 1 : 0;
        if (c710) {
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
    unsigned long c711 = 8;
    unsigned long c712 = 16;
    _Bool c713 = ((c711 > c712)) ? 1 : 0;
    if (c713) {
      unsigned long __al714;
      unsigned long c715 = 8;
      __al714 = c715;
      unsigned long t716 = __n699;
      unsigned long c717 = 8;
      unsigned long b718 = t716 * c717;
      unsigned long t719 = __al714;
      void* r720 = operator_new_2(b718, t719);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast721 = (int**)r720;
      __retval701 = cast721;
      int** t722 = __retval701;
      return t722;
    }
  unsigned long t723 = __n699;
  unsigned long c724 = 8;
  unsigned long b725 = t723 * c724;
  void* r726 = operator_new(b725);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast727 = (int**)r726;
  __retval701 = cast727;
  int** t728 = __retval701;
  return t728;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v729, unsigned long v730) {
bb731: ;
  struct std__allocator_int___* this732;
  unsigned long __n733;
  int** __retval734;
  this732 = v729;
  __n733 = v730;
  struct std__allocator_int___* t735 = this732;
    _Bool r736 = std____is_constant_evaluated();
    if (r736) {
        unsigned long t737 = __n733;
        unsigned long c738 = 8;
        unsigned long ovr739;
        _Bool ovf740 = __builtin_mul_overflow(t737, c738, &ovr739);
        __n733 = ovr739;
        if (ovf740) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t741 = __n733;
      void* r742 = operator_new(t741);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast743 = (int**)r742;
      __retval734 = cast743;
      int** t744 = __retval734;
      return t744;
    }
  struct std____new_allocator_int___* base745 = (struct std____new_allocator_int___*)((char *)t735 + 0);
  unsigned long t746 = __n733;
  void* c747 = ((void*)0);
  int** r748 = std____new_allocator_int____allocate(base745, t746, c747);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval734 = r748;
  int** t749 = __retval734;
  return t749;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v750, unsigned long v751) {
bb752: ;
  struct std__allocator_int___* __a753;
  unsigned long __n754;
  int** __retval755;
  __a753 = v750;
  __n754 = v751;
  struct std__allocator_int___* t756 = __a753;
  unsigned long t757 = __n754;
  int** r758 = std__allocator_int____allocate(t756, t757);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval755 = r758;
  int** t759 = __retval755;
  return t759;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v760, unsigned long v761) {
bb762: ;
  struct std___Deque_base_int__std__allocator_int__* this763;
  unsigned long __n764;
  int** __retval765;
  struct std__allocator_int___ __map_alloc766;
  this763 = v760;
  __n764 = v761;
  struct std___Deque_base_int__std__allocator_int__* t767 = this763;
  struct std__allocator_int___ r768 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t767);
  __map_alloc766 = r768;
  unsigned long t769 = __n764;
  int** r770 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc766, t769);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval765 = r770;
  int** t771 = __retval765;
  return t771;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v772) {
bb773: ;
  struct std____new_allocator_int_* this774;
  unsigned long __retval775;
  this774 = v772;
  struct std____new_allocator_int_* t776 = this774;
  unsigned long c777 = 9223372036854775807;
  unsigned long c778 = 4;
  unsigned long b779 = c777 / c778;
  __retval775 = b779;
  unsigned long t780 = __retval775;
  return t780;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v781, unsigned long v782, void* v783) {
bb784: ;
  struct std____new_allocator_int_* this785;
  unsigned long __n786;
  void* unnamed787;
  int* __retval788;
  this785 = v781;
  __n786 = v782;
  unnamed787 = v783;
  struct std____new_allocator_int_* t789 = this785;
    unsigned long t790 = __n786;
    unsigned long r791 = std____new_allocator_int____M_max_size___const(t789);
    _Bool c792 = ((t790 > r791)) ? 1 : 0;
    if (c792) {
        unsigned long t793 = __n786;
        unsigned long c794 = -1;
        unsigned long c795 = 4;
        unsigned long b796 = c794 / c795;
        _Bool c797 = ((t793 > b796)) ? 1 : 0;
        if (c797) {
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
    unsigned long c798 = 4;
    unsigned long c799 = 16;
    _Bool c800 = ((c798 > c799)) ? 1 : 0;
    if (c800) {
      unsigned long __al801;
      unsigned long c802 = 4;
      __al801 = c802;
      unsigned long t803 = __n786;
      unsigned long c804 = 4;
      unsigned long b805 = t803 * c804;
      unsigned long t806 = __al801;
      void* r807 = operator_new_2(b805, t806);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast808 = (int*)r807;
      __retval788 = cast808;
      int* t809 = __retval788;
      return t809;
    }
  unsigned long t810 = __n786;
  unsigned long c811 = 4;
  unsigned long b812 = t810 * c811;
  void* r813 = operator_new(b812);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast814 = (int*)r813;
  __retval788 = cast814;
  int* t815 = __retval788;
  return t815;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v816, unsigned long v817) {
bb818: ;
  struct std__allocator_int_* this819;
  unsigned long __n820;
  int* __retval821;
  this819 = v816;
  __n820 = v817;
  struct std__allocator_int_* t822 = this819;
    _Bool r823 = std____is_constant_evaluated();
    if (r823) {
        unsigned long t824 = __n820;
        unsigned long c825 = 4;
        unsigned long ovr826;
        _Bool ovf827 = __builtin_mul_overflow(t824, c825, &ovr826);
        __n820 = ovr826;
        if (ovf827) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t828 = __n820;
      void* r829 = operator_new(t828);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast830 = (int*)r829;
      __retval821 = cast830;
      int* t831 = __retval821;
      return t831;
    }
  struct std____new_allocator_int_* base832 = (struct std____new_allocator_int_*)((char *)t822 + 0);
  unsigned long t833 = __n820;
  void* c834 = ((void*)0);
  int* r835 = std____new_allocator_int___allocate(base832, t833, c834);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval821 = r835;
  int* t836 = __retval821;
  return t836;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v837, unsigned long v838) {
bb839: ;
  struct std__allocator_int_* __a840;
  unsigned long __n841;
  int* __retval842;
  __a840 = v837;
  __n841 = v838;
  struct std__allocator_int_* t843 = __a840;
  unsigned long t844 = __n841;
  int* r845 = std__allocator_int___allocate(t843, t844);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval842 = r845;
  int* t846 = __retval842;
  return t846;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v847) {
bb848: ;
  struct std___Deque_base_int__std__allocator_int__* this849;
  int* __retval850;
  this849 = v847;
  struct std___Deque_base_int__std__allocator_int__* t851 = this849;
  struct std__allocator_int_* base852 = (struct std__allocator_int_*)((char *)&(t851->_M_impl) + 0);
  unsigned long c853 = 4;
  unsigned long r854 = std____deque_buf_size(c853);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r855 = std__allocator_traits_std__allocator_int_____allocate(base852, r854);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval850 = r855;
  int* t856 = __retval850;
  return t856;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v857, int* v858, unsigned long v859) {
bb860: ;
  struct std____new_allocator_int_* this861;
  int* __p862;
  unsigned long __n863;
  this861 = v857;
  __p862 = v858;
  __n863 = v859;
  struct std____new_allocator_int_* t864 = this861;
    unsigned long c865 = 4;
    unsigned long c866 = 16;
    _Bool c867 = ((c865 > c866)) ? 1 : 0;
    if (c867) {
      int* t868 = __p862;
      void* cast869 = (void*)t868;
      unsigned long t870 = __n863;
      unsigned long c871 = 4;
      unsigned long b872 = t870 * c871;
      unsigned long c873 = 4;
      operator_delete_3(cast869, b872, c873);
      return;
    }
  int* t874 = __p862;
  void* cast875 = (void*)t874;
  unsigned long t876 = __n863;
  unsigned long c877 = 4;
  unsigned long b878 = t876 * c877;
  operator_delete_2(cast875, b878);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v879, int* v880, unsigned long v881) {
bb882: ;
  struct std__allocator_int_* this883;
  int* __p884;
  unsigned long __n885;
  this883 = v879;
  __p884 = v880;
  __n885 = v881;
  struct std__allocator_int_* t886 = this883;
    _Bool r887 = std____is_constant_evaluated();
    if (r887) {
      int* t888 = __p884;
      void* cast889 = (void*)t888;
      operator_delete(cast889);
      return;
    }
  struct std____new_allocator_int_* base890 = (struct std____new_allocator_int_*)((char *)t886 + 0);
  int* t891 = __p884;
  unsigned long t892 = __n885;
  std____new_allocator_int___deallocate(base890, t891, t892);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v893, int* v894, unsigned long v895) {
bb896: ;
  struct std__allocator_int_* __a897;
  int* __p898;
  unsigned long __n899;
  __a897 = v893;
  __p898 = v894;
  __n899 = v895;
  struct std__allocator_int_* t900 = __a897;
  int* t901 = __p898;
  unsigned long t902 = __n899;
  std__allocator_int___deallocate(t900, t901, t902);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v903, int* v904) {
bb905: ;
  struct std___Deque_base_int__std__allocator_int__* this906;
  int* __p907;
  this906 = v903;
  __p907 = v904;
  struct std___Deque_base_int__std__allocator_int__* t908 = this906;
  struct std__allocator_int_* base909 = (struct std__allocator_int_*)((char *)&(t908->_M_impl) + 0);
  int* t910 = __p907;
  unsigned long c911 = 4;
  unsigned long r912 = std____deque_buf_size(c911);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base909, t910, r912);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v913, int** v914, int** v915) {
bb916: ;
  struct std___Deque_base_int__std__allocator_int__* this917;
  int** __nstart918;
  int** __nfinish919;
  this917 = v913;
  __nstart918 = v914;
  __nfinish919 = v915;
  struct std___Deque_base_int__std__allocator_int__* t920 = this917;
    int** __n921;
    int** t922 = __nstart918;
    __n921 = t922;
    while (1) {
      int** t924 = __n921;
      int** t925 = __nfinish919;
      _Bool c926 = ((t924 < t925)) ? 1 : 0;
      if (!c926) break;
      int** t927 = __n921;
      int* t928 = *t927;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t920, t928);
    for_step923: ;
      int** t929 = __n921;
      int c930 = 1;
      int** ptr931 = &(t929)[c930];
      __n921 = ptr931;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v932, int** v933, int** v934) {
bb935: ;
  struct std___Deque_base_int__std__allocator_int__* this936;
  int** __nstart937;
  int** __nfinish938;
  int** __cur939;
  this936 = v932;
  __nstart937 = v933;
  __nfinish938 = v934;
  struct std___Deque_base_int__std__allocator_int__* t940 = this936;
        int** t942 = __nstart937;
        __cur939 = t942;
        while (1) {
          int** t944 = __cur939;
          int** t945 = __nfinish938;
          _Bool c946 = ((t944 < t945)) ? 1 : 0;
          if (!c946) break;
          int* r947 = std___Deque_base_int__std__allocator_int______M_allocate_node(t940);
          if (__cir_exc_active) {
            goto cir_try_dispatch941;
          }
          int** t948 = __cur939;
          *t948 = r947;
        for_step943: ;
          int** t949 = __cur939;
          int c950 = 1;
          int** ptr951 = &(t949)[c950];
          __cur939 = ptr951;
        }
    cir_try_dispatch941: ;
    if (__cir_exc_active) {
    {
      int ca_tok952 = 0;
      void* ca_exn953 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t954 = __nstart937;
        int** t955 = __cur939;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t940, t954, t955);
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
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v956, int** v957, unsigned long v958) {
bb959: ;
  struct std____new_allocator_int___* this960;
  int** __p961;
  unsigned long __n962;
  this960 = v956;
  __p961 = v957;
  __n962 = v958;
  struct std____new_allocator_int___* t963 = this960;
    unsigned long c964 = 8;
    unsigned long c965 = 16;
    _Bool c966 = ((c964 > c965)) ? 1 : 0;
    if (c966) {
      int** t967 = __p961;
      void* cast968 = (void*)t967;
      unsigned long t969 = __n962;
      unsigned long c970 = 8;
      unsigned long b971 = t969 * c970;
      unsigned long c972 = 8;
      operator_delete_3(cast968, b971, c972);
      return;
    }
  int** t973 = __p961;
  void* cast974 = (void*)t973;
  unsigned long t975 = __n962;
  unsigned long c976 = 8;
  unsigned long b977 = t975 * c976;
  operator_delete_2(cast974, b977);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v978, int** v979, unsigned long v980) {
bb981: ;
  struct std__allocator_int___* this982;
  int** __p983;
  unsigned long __n984;
  this982 = v978;
  __p983 = v979;
  __n984 = v980;
  struct std__allocator_int___* t985 = this982;
    _Bool r986 = std____is_constant_evaluated();
    if (r986) {
      int** t987 = __p983;
      void* cast988 = (void*)t987;
      operator_delete(cast988);
      return;
    }
  struct std____new_allocator_int___* base989 = (struct std____new_allocator_int___*)((char *)t985 + 0);
  int** t990 = __p983;
  unsigned long t991 = __n984;
  std____new_allocator_int____deallocate(base989, t990, t991);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v992, int** v993, unsigned long v994) {
bb995: ;
  struct std__allocator_int___* __a996;
  int** __p997;
  unsigned long __n998;
  __a996 = v992;
  __p997 = v993;
  __n998 = v994;
  struct std__allocator_int___* t999 = __a996;
  int** t1000 = __p997;
  unsigned long t1001 = __n998;
  std__allocator_int____deallocate(t999, t1000, t1001);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v1002, int** v1003, unsigned long v1004) {
bb1005: ;
  struct std___Deque_base_int__std__allocator_int__* this1006;
  int** __p1007;
  unsigned long __n1008;
  struct std__allocator_int___ __map_alloc1009;
  this1006 = v1002;
  __p1007 = v1003;
  __n1008 = v1004;
  struct std___Deque_base_int__std__allocator_int__* t1010 = this1006;
  struct std__allocator_int___ r1011 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1010);
  __map_alloc1009 = r1011;
  int** t1012 = __p1007;
  unsigned long t1013 = __n1008;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc1009, t1012, t1013);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size() {
bb1014: ;
  unsigned long __retval1015;
  unsigned long c1016 = 4;
  unsigned long r1017 = std____deque_buf_size(c1016);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1015 = r1017;
  unsigned long t1018 = __retval1015;
  return t1018;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v1019, int** v1020) {
bb1021: ;
  struct std___Deque_iterator_int__int____int___* this1022;
  int** __new_node1023;
  this1022 = v1019;
  __new_node1023 = v1020;
  struct std___Deque_iterator_int__int____int___* t1024 = this1022;
  int** t1025 = __new_node1023;
  t1024->_M_node = t1025;
  int** t1026 = __new_node1023;
  int* t1027 = *t1026;
  t1024->_M_first = t1027;
  int* t1028 = t1024->_M_first;
  unsigned long r1029 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1030 = (long)r1029;
  int* ptr1031 = &(t1028)[cast1030];
  t1024->_M_last = ptr1031;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v1032, unsigned long v1033) {
bb1034: ;
  struct std___Deque_base_int__std__allocator_int__* this1035;
  unsigned long __num_elements1036;
  unsigned long __num_nodes1037;
  unsigned long ref_tmp01038;
  unsigned long ref_tmp11039;
  int** __nstart1040;
  int** __nfinish1041;
  this1035 = v1032;
  __num_elements1036 = v1033;
  struct std___Deque_base_int__std__allocator_int__* t1042 = this1035;
  unsigned long t1043 = __num_elements1036;
  unsigned long c1044 = 4;
  unsigned long r1045 = std____deque_buf_size(c1044);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1046 = t1043 / r1045;
  unsigned long c1047 = 1;
  unsigned long b1048 = b1046 + c1047;
  __num_nodes1037 = b1048;
  unsigned long c1049 = 8;
  ref_tmp01038 = c1049;
  unsigned long t1050 = __num_nodes1037;
  unsigned long c1051 = 2;
  unsigned long b1052 = t1050 + c1051;
  ref_tmp11039 = b1052;
  unsigned long* r1053 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01038, &ref_tmp11039);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1054 = *r1053;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1055 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1042->_M_impl) + 0);
  base1055->_M_map_size = t1054;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1056 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1042->_M_impl) + 0);
  unsigned long t1057 = base1056->_M_map_size;
  int** r1058 = std___Deque_base_int__std__allocator_int______M_allocate_map(t1042, t1057);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1059 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1042->_M_impl) + 0);
  base1059->_M_map = r1058;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1060 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1042->_M_impl) + 0);
  int** t1061 = base1060->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1062 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1042->_M_impl) + 0);
  unsigned long t1063 = base1062->_M_map_size;
  unsigned long t1064 = __num_nodes1037;
  unsigned long b1065 = t1063 - t1064;
  unsigned long c1066 = 2;
  unsigned long b1067 = b1065 / c1066;
  int** ptr1068 = &(t1061)[b1067];
  __nstart1040 = ptr1068;
  int** t1069 = __nstart1040;
  unsigned long t1070 = __num_nodes1037;
  int** ptr1071 = &(t1069)[t1070];
  __nfinish1041 = ptr1071;
      int** t1073 = __nstart1040;
      int** t1074 = __nfinish1041;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t1042, t1073, t1074);
      if (__cir_exc_active) {
        goto cir_try_dispatch1072;
      }
    cir_try_dispatch1072: ;
    if (__cir_exc_active) {
    {
      int ca_tok1075 = 0;
      void* ca_exn1076 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1077 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1042->_M_impl) + 0);
        int** t1078 = base1077->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1079 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1042->_M_impl) + 0);
        unsigned long t1080 = base1079->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1042, t1078, t1080);
        int** c1081 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1082 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1042->_M_impl) + 0);
        base1082->_M_map = c1081;
        unsigned long c1083 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1084 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1042->_M_impl) + 0);
        base1084->_M_map_size = c1083;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1085 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1042->_M_impl) + 0);
  int** t1086 = __nstart1040;
  std___Deque_iterator_int__int___int_____M_set_node(&base1085->_M_start, t1086);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1087 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1042->_M_impl) + 0);
  int** t1088 = __nfinish1041;
  int c1089 = -1;
  int** ptr1090 = &(t1088)[c1089];
  std___Deque_iterator_int__int___int_____M_set_node(&base1087->_M_finish, ptr1090);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1091 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1042->_M_impl) + 0);
  int* t1092 = base1091->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1093 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1042->_M_impl) + 0);
  base1093->_M_start._M_cur = t1092;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1094 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1042->_M_impl) + 0);
  int* t1095 = base1094->_M_finish._M_first;
  unsigned long t1096 = __num_elements1036;
  unsigned long c1097 = 4;
  unsigned long r1098 = std____deque_buf_size(c1097);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1099 = t1096 % r1098;
  int* ptr1100 = &(t1095)[b1099];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1101 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1042->_M_impl) + 0);
  base1101->_M_finish._M_cur = ptr1100;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1102) {
bb1103: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1104;
  this1104 = v1102;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1105 = this1104;
  {
    struct std__allocator_int_* base1106 = (struct std__allocator_int_*)((char *)t1105 + 0);
    std__allocator_int____allocator(base1106);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2ERKS0_m
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1107, struct std__allocator_int_* v1108, unsigned long v1109) {
bb1110: ;
  struct std___Deque_base_int__std__allocator_int__* this1111;
  struct std__allocator_int_* __a1112;
  unsigned long __num_elements1113;
  this1111 = v1107;
  __a1112 = v1108;
  __num_elements1113 = v1109;
  struct std___Deque_base_int__std__allocator_int__* t1114 = this1111;
  struct std__allocator_int_* t1115 = __a1112;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1114->_M_impl, t1115);
    unsigned long t1116 = __num_elements1113;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1114, t1116);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1114->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1117: ;
  _Bool __retval1118;
    _Bool c1119 = 0;
    __retval1118 = c1119;
    _Bool t1120 = __retval1118;
    return t1120;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1121, int** v1122) {
bb1123: ;
  struct std___UninitDestroyGuard_int____void_* this1124;
  int** __first1125;
  this1124 = v1121;
  __first1125 = v1122;
  struct std___UninitDestroyGuard_int____void_* t1126 = this1124;
  int** t1127 = __first1125;
  int* t1128 = *t1127;
  t1126->_M_first = t1128;
  int** t1129 = __first1125;
  t1126->_M_cur = t1129;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v1130, int* v1131) {
bb1132: ;
  int* __location1133;
  int* __args1134;
  int* __retval1135;
  void* __loc1136;
  __location1133 = v1130;
  __args1134 = v1131;
  int* t1137 = __location1133;
  void* cast1138 = (void*)t1137;
  __loc1136 = cast1138;
    void* t1139 = __loc1136;
    int* cast1140 = (int*)t1139;
    int* t1141 = __args1134;
    int t1142 = *t1141;
    *cast1140 = t1142;
    __retval1135 = cast1140;
    int* t1143 = __retval1135;
    return t1143;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v1144, int* v1145) {
bb1146: ;
  int* __p1147;
  int* __args1148;
  __p1147 = v1144;
  __args1148 = v1145;
    _Bool r1149 = std____is_constant_evaluated();
    if (r1149) {
      int* t1150 = __p1147;
      int* t1151 = __args1148;
      int* r1152 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1150, t1151);
      return;
    }
  int* t1153 = __p1147;
  void* cast1154 = (void*)t1153;
  int* cast1155 = (int*)cast1154;
  int* t1156 = __args1148;
  int t1157 = *t1156;
  *cast1155 = t1157;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1158) {
bb1159: ;
  struct std___UninitDestroyGuard_int____void_* this1160;
  this1160 = v1158;
  struct std___UninitDestroyGuard_int____void_* t1161 = this1160;
  int** c1162 = ((void*)0);
  t1161->_M_cur = c1162;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1163) {
bb1164: ;
  struct std___UninitDestroyGuard_int____void_* this1165;
  this1165 = v1163;
  struct std___UninitDestroyGuard_int____void_* t1166 = this1165;
    int** t1167 = t1166->_M_cur;
    int** c1168 = ((void*)0);
    _Bool c1169 = ((t1167 != c1168)) ? 1 : 0;
    if (c1169) {
      int* t1170 = t1166->_M_first;
      int** t1171 = t1166->_M_cur;
      int* t1172 = *t1171;
      void_std___Destroy_int__(t1170, t1172);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt16__do_uninit_fillIPiiEvT_S1_RKT0_
void void_std____do_uninit_fill_int___int_(int* v1173, int* v1174, int* v1175) {
bb1176: ;
  int* __first1177;
  int* __last1178;
  int* __x1179;
  struct std___UninitDestroyGuard_int____void_ __guard1180;
  __first1177 = v1173;
  __last1178 = v1174;
  __x1179 = v1175;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1180, &__first1177);
  if (__cir_exc_active) {
    return;
  }
      while (1) {
        int* t1182 = __first1177;
        int* t1183 = __last1178;
        _Bool c1184 = ((t1182 != t1183)) ? 1 : 0;
        if (!c1184) break;
        int* t1185 = __first1177;
        int* t1186 = __x1179;
        void_std___Construct_int__int_const__(t1185, t1186);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1180);
          }
          return;
        }
      for_step1181: ;
        int* t1187 = __first1177;
        int c1188 = 1;
        int* ptr1189 = &(t1187)[c1188];
        __first1177 = ptr1189;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1180);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1180);
      }
      return;
    }
  {
    std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1180);
  }
  return;
}

// function: _ZSt18uninitialized_fillIPiiEvT_S1_RKT0_
void void_std__uninitialized_fill_int___int_(int* v1190, int* v1191, int* v1192) {
bb1193: ;
  int* __first1194;
  int* __last1195;
  int* __x1196;
  __first1194 = v1190;
  __last1195 = v1191;
  __x1196 = v1192;
  int* t1197 = __first1194;
  int* t1198 = __last1195;
  int* t1199 = __x1196;
  void_std____do_uninit_fill_int___int_(t1197, t1198, t1199);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt22__uninitialized_fill_aIPiiiEvT_S1_RKT0_RSaIT1_E
void void_std____uninitialized_fill_a_int___int__int_(int* v1200, int* v1201, int* v1202, struct std__allocator_int_* v1203) {
bb1204: ;
  int* __first1205;
  int* __last1206;
  int* __x1207;
  struct std__allocator_int_* unnamed1208;
  __first1205 = v1200;
  __last1206 = v1201;
  __x1207 = v1202;
  unnamed1208 = v1203;
    _Bool r1209 = std__is_constant_evaluated();
    if (r1209) {
      int* t1210 = __first1205;
      int* t1211 = __last1206;
      int* t1212 = __x1207;
      void_std____do_uninit_fill_int___int_(t1210, t1211, t1212);
      if (__cir_exc_active) {
        return;
      }
      return;
    }
  int* t1213 = __first1205;
  int* t1214 = __last1206;
  int* t1215 = __x1207;
  void_std__uninitialized_fill_int___int_(t1213, t1214, t1215);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb1216: ;
  unsigned long __retval1217;
  unsigned long c1218 = 4;
  unsigned long r1219 = std____deque_buf_size(c1218);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1217 = r1219;
  unsigned long t1220 = __retval1217;
  return t1220;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v1221) {
bb1222: ;
  struct std___Deque_base_int__std__allocator_int__* this1223;
  struct std__allocator_int_* __retval1224;
  this1223 = v1221;
  struct std___Deque_base_int__std__allocator_int__* t1225 = this1223;
  struct std__allocator_int_* base1226 = (struct std__allocator_int_*)((char *)&(t1225->_M_impl) + 0);
  __retval1224 = base1226;
  struct std__allocator_int_* t1227 = __retval1224;
  return t1227;
}

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator___2(struct std___Deque_iterator_int__int____int___* v1228, struct std___Deque_iterator_int__int____int___* v1229) {
bb1230: ;
  struct std___Deque_iterator_int__int____int___* __x1231;
  struct std___Deque_iterator_int__int____int___* __y1232;
  _Bool __retval1233;
  __x1231 = v1228;
  __y1232 = v1229;
  struct std___Deque_iterator_int__int____int___* t1234 = __x1231;
  int* t1235 = t1234->_M_cur;
  struct std___Deque_iterator_int__int____int___* t1236 = __y1232;
  int* t1237 = t1236->_M_cur;
  _Bool c1238 = ((t1235 == t1237)) ? 1 : 0;
  __retval1233 = c1238;
  _Bool t1239 = __retval1233;
  return t1239;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v1240) {
bb1241: ;
  struct std___Deque_iterator_int__int____int___* this1242;
  int* __retval1243;
  this1242 = v1240;
  struct std___Deque_iterator_int__int____int___* t1244 = this1242;
  int* t1245 = t1244->_M_cur;
  __retval1243 = t1245;
  int* t1246 = __retval1243;
  return t1246;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEppEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___2(struct std___Deque_iterator_int__int____int___* v1247) {
bb1248: ;
  struct std___Deque_iterator_int__int____int___* this1249;
  struct std___Deque_iterator_int__int____int___* __retval1250;
  this1249 = v1247;
  struct std___Deque_iterator_int__int____int___* t1251 = this1249;
  int* t1252 = t1251->_M_cur;
  int c1253 = 1;
  int* ptr1254 = &(t1252)[c1253];
  t1251->_M_cur = ptr1254;
    int* t1255 = t1251->_M_cur;
    int* t1256 = t1251->_M_last;
    _Bool c1257 = ((t1255 == t1256)) ? 1 : 0;
    if (c1257) {
      int** t1258 = t1251->_M_node;
      int c1259 = 1;
      int** ptr1260 = &(t1258)[c1259];
      std___Deque_iterator_int__int___int_____M_set_node(t1251, ptr1260);
      int* t1261 = t1251->_M_first;
      t1251->_M_cur = t1261;
    }
  __retval1250 = t1251;
  struct std___Deque_iterator_int__int____int___* t1262 = __retval1250;
  return t1262;
}

// function: _ZSt8_DestroyISt15_Deque_iteratorIiRiPiEEvT_S4_
void void_std___Destroy_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1263, struct std___Deque_iterator_int__int____int___ v1264) {
bb1265: ;
  struct std___Deque_iterator_int__int____int___ __first1266;
  struct std___Deque_iterator_int__int____int___ __last1267;
  __first1266 = v1263;
  __last1267 = v1264;
      _Bool r1268 = std____is_constant_evaluated();
      if (r1268) {
          while (1) {
            _Bool r1270 = std__operator___2(&__first1266, &__last1267);
            _Bool u1271 = !r1270;
            if (!u1271) break;
            int* r1272 = std___Deque_iterator_int__int___int____operator____const(&__first1266);
            void_std__destroy_at_int_(r1272);
            if (__cir_exc_active) {
              return;
            }
          for_step1269: ;
            struct std___Deque_iterator_int__int____int___* r1273 = std___Deque_iterator_int__int___int____operator___2(&__first1266);
          }
      }
  return;
}

// function: _ZSt8_DestroyISt15_Deque_iteratorIiRiPiEiEvT_S4_RSaIT0_E
void void_std___Destroy_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ v1274, struct std___Deque_iterator_int__int____int___ v1275, struct std__allocator_int_* v1276) {
bb1277: ;
  struct std___Deque_iterator_int__int____int___ __first1278;
  struct std___Deque_iterator_int__int____int___ __last1279;
  struct std__allocator_int_* unnamed1280;
  struct std___Deque_iterator_int__int____int___ agg_tmp01281;
  struct std___Deque_iterator_int__int____int___ agg_tmp11282;
  __first1278 = v1274;
  __last1279 = v1275;
  unnamed1280 = v1276;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01281, &__first1278);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11282, &__last1279);
  struct std___Deque_iterator_int__int____int___ t1283 = agg_tmp01281;
  struct std___Deque_iterator_int__int____int___ t1284 = agg_tmp11282;
  void_std___Destroy_std___Deque_iterator_int__int___int____(t1283, t1284);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v1285, struct std___Deque_iterator_int__int____int___* v1286) {
bb1287: ;
  struct std___Deque_iterator_int__int____int___* this1288;
  struct std___Deque_iterator_int__int____int___* __x1289;
  this1288 = v1285;
  __x1289 = v1286;
  struct std___Deque_iterator_int__int____int___* t1290 = this1288;
  struct std___Deque_iterator_int__int____int___* t1291 = __x1289;
  int* t1292 = t1291->_M_cur;
  t1290->_M_cur = t1292;
  struct std___Deque_iterator_int__int____int___* t1293 = __x1289;
  int* t1294 = t1293->_M_first;
  t1290->_M_first = t1294;
  struct std___Deque_iterator_int__int____int___* t1295 = __x1289;
  int* t1296 = t1295->_M_last;
  t1290->_M_last = t1296;
  struct std___Deque_iterator_int__int____int___* t1297 = __x1289;
  int** t1298 = t1297->_M_node;
  t1290->_M_node = t1298;
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ES1_PS1_
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1299, int* v1300, int** v1301) {
bb1302: ;
  struct std___Deque_iterator_int__int____int___* this1303;
  int* __x1304;
  int** __y1305;
  this1303 = v1299;
  __x1304 = v1300;
  __y1305 = v1301;
  struct std___Deque_iterator_int__int____int___* t1306 = this1303;
  int* t1307 = __x1304;
  t1306->_M_cur = t1307;
  int** t1308 = __y1305;
  int* t1309 = *t1308;
  t1306->_M_first = t1309;
  int** t1310 = __y1305;
  int* t1311 = *t1310;
  unsigned long r1312 = std___Deque_iterator_int__int___int_____S_buffer_size();
  int* ptr1313 = &(t1311)[r1312];
  t1306->_M_last = ptr1313;
  int** t1314 = __y1305;
  t1306->_M_node = t1314;
  return;
}

// function: _ZNSt5dequeIiSaIiEE18_M_fill_initializeERKi
void std__deque_int__std__allocator_int______M_fill_initialize(struct std__deque_int__std__allocator_int__* v1315, int* v1316) {
bb1317: ;
  struct std__deque_int__std__allocator_int__* this1318;
  int* __value1319;
  int** __cur1320;
  this1318 = v1315;
  __value1319 = v1316;
  struct std__deque_int__std__allocator_int__* t1321 = this1318;
    struct std___Deque_iterator_int__int____int___ agg_tmp01322;
    struct std___Deque_iterator_int__int____int___ agg_tmp11323;
        struct std___Deque_base_int__std__allocator_int__* base1325 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1321 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1326 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1325->_M_impl) + 0);
        int** t1327 = base1326->_M_start._M_node;
        __cur1320 = t1327;
        while (1) {
          int** t1329 = __cur1320;
          struct std___Deque_base_int__std__allocator_int__* base1330 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1321 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1331 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1330->_M_impl) + 0);
          int** t1332 = base1331->_M_finish._M_node;
          _Bool c1333 = ((t1329 < t1332)) ? 1 : 0;
          if (!c1333) break;
          int** t1334 = __cur1320;
          int* t1335 = *t1334;
          int** t1336 = __cur1320;
          int* t1337 = *t1336;
          unsigned long r1338 = std__deque_int__std__allocator_int______S_buffer_size();
          int* ptr1339 = &(t1337)[r1338];
          int* t1340 = __value1319;
          struct std___Deque_base_int__std__allocator_int__* base1341 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1321 + 0);
          struct std__allocator_int_* r1342 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1341);
          void_std____uninitialized_fill_a_int___int__int_(t1335, ptr1339, t1340, r1342);
          if (__cir_exc_active) {
            goto cir_try_dispatch1324;
          }
        for_step1328: ;
          int** t1343 = __cur1320;
          int c1344 = 1;
          int** ptr1345 = &(t1343)[c1344];
          __cur1320 = ptr1345;
        }
      struct std___Deque_base_int__std__allocator_int__* base1346 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1321 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1347 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1346->_M_impl) + 0);
      int* t1348 = base1347->_M_finish._M_first;
      struct std___Deque_base_int__std__allocator_int__* base1349 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1321 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1350 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1349->_M_impl) + 0);
      int* t1351 = base1350->_M_finish._M_cur;
      int* t1352 = __value1319;
      struct std___Deque_base_int__std__allocator_int__* base1353 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1321 + 0);
      struct std__allocator_int_* r1354 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1353);
      void_std____uninitialized_fill_a_int___int__int_(t1348, t1351, t1352, r1354);
      if (__cir_exc_active) {
        goto cir_try_dispatch1324;
      }
    cir_try_dispatch1324: ;
    if (__cir_exc_active) {
    {
      int ca_tok1355 = 0;
      void* ca_exn1356 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base1357 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1321 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1358 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1357->_M_impl) + 0);
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01322, &base1358->_M_start);
        int** t1359 = __cur1320;
        int* t1360 = *t1359;
        int** t1361 = __cur1320;
        std___Deque_iterator_int__int___int_____Deque_iterator_2(&agg_tmp11323, t1360, t1361);
        struct std___Deque_base_int__std__allocator_int__* base1362 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1321 + 0);
        struct std__allocator_int_* r1363 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1362);
        struct std___Deque_iterator_int__int____int___ t1364 = agg_tmp01322;
        struct std___Deque_iterator_int__int____int___ t1365 = agg_tmp11323;
        void_std___Destroy_std___Deque_iterator_int__int___int____int_(t1364, t1365, r1363);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          return;
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

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1366) {
bb1367: ;
  struct std___Deque_base_int__std__allocator_int__* this1368;
  this1368 = v1366;
  struct std___Deque_base_int__std__allocator_int__* t1369 = this1368;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1370 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1369->_M_impl) + 0);
      int** t1371 = base1370->_M_map;
      _Bool cast1372 = (_Bool)t1371;
      if (cast1372) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1373 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1369->_M_impl) + 0);
        int** t1374 = base1373->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1375 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1369->_M_impl) + 0);
        int** t1376 = base1375->_M_finish._M_node;
        int c1377 = 1;
        int** ptr1378 = &(t1376)[c1377];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1369, t1374, ptr1378);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1379 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1369->_M_impl) + 0);
        int** t1380 = base1379->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1381 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1369->_M_impl) + 0);
        unsigned long t1382 = base1381->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1369, t1380, t1382);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1369->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1383, struct std____new_allocator_int_* v1384) {
bb1385: ;
  struct std____new_allocator_int_* this1386;
  struct std____new_allocator_int_* unnamed1387;
  this1386 = v1383;
  unnamed1387 = v1384;
  struct std____new_allocator_int_* t1388 = this1386;
  return;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1389, struct std__allocator_int_* v1390) {
bb1391: ;
  struct std__allocator_int_* this1392;
  struct std__allocator_int_* __a1393;
  this1392 = v1389;
  __a1393 = v1390;
  struct std__allocator_int_* t1394 = this1392;
  struct std____new_allocator_int_* base1395 = (struct std____new_allocator_int_*)((char *)t1394 + 0);
  struct std__allocator_int_* t1396 = __a1393;
  struct std____new_allocator_int_* base1397 = (struct std____new_allocator_int_*)((char *)t1396 + 0);
  std____new_allocator_int_____new_allocator(base1395, base1397);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_3(struct std___Deque_iterator_int__int____int___* v1398) {
bb1399: ;
  struct std___Deque_iterator_int__int____int___* this1400;
  this1400 = v1398;
  struct std___Deque_iterator_int__int____int___* t1401 = this1400;
  int* c1402 = ((void*)0);
  t1401->_M_cur = c1402;
  int* c1403 = ((void*)0);
  t1401->_M_first = c1403;
  int* c1404 = ((void*)0);
  t1401->_M_last = c1404;
  int** c1405 = ((void*)0);
  t1401->_M_node = c1405;
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1406) {
bb1407: ;
  struct std____new_allocator_int___* this1408;
  this1408 = v1406;
  struct std____new_allocator_int___* t1409 = this1408;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1410) {
bb1411: ;
  int* __location1412;
  __location1412 = v1410;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1413, int* v1414) {
bb1415: ;
  int* __first1416;
  int* __last1417;
  __first1416 = v1413;
  __last1417 = v1414;
      _Bool r1418 = std____is_constant_evaluated();
      if (r1418) {
          while (1) {
            int* t1420 = __first1416;
            int* t1421 = __last1417;
            _Bool c1422 = ((t1420 != t1421)) ? 1 : 0;
            if (!c1422) break;
            int* t1423 = __first1416;
            void_std__destroy_at_int_(t1423);
            if (__cir_exc_active) {
              return;
            }
          for_step1419: ;
            int* t1424 = __first1416;
            int c1425 = 1;
            int* ptr1426 = &(t1424)[c1425];
            __first1416 = ptr1426;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1427, int* v1428, struct std__allocator_int_* v1429) {
bb1430: ;
  int* __first1431;
  int* __last1432;
  struct std__allocator_int_* unnamed1433;
  __first1431 = v1427;
  __last1432 = v1428;
  unnamed1433 = v1429;
  int* t1434 = __first1431;
  int* t1435 = __last1432;
  void_std___Destroy_int__(t1434, t1435);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v1436, struct std___Deque_iterator_int__int____int___ v1437, struct std___Deque_iterator_int__int____int___ v1438) {
bb1439: ;
  struct std__deque_int__std__allocator_int__* this1440;
  struct std___Deque_iterator_int__int____int___ __first1441;
  struct std___Deque_iterator_int__int____int___ __last1442;
  this1440 = v1436;
  __first1441 = v1437;
  __last1442 = v1438;
  struct std__deque_int__std__allocator_int__* t1443 = this1440;
    int** __node1444;
    int** t1445 = __first1441._M_node;
    int c1446 = 1;
    int** ptr1447 = &(t1445)[c1446];
    __node1444 = ptr1447;
    while (1) {
      int** t1449 = __node1444;
      int** t1450 = __last1442._M_node;
      _Bool c1451 = ((t1449 < t1450)) ? 1 : 0;
      if (!c1451) break;
      int** t1452 = __node1444;
      int* t1453 = *t1452;
      int** t1454 = __node1444;
      int* t1455 = *t1454;
      unsigned long r1456 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr1457 = &(t1455)[r1456];
      struct std___Deque_base_int__std__allocator_int__* base1458 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1443 + 0);
      struct std__allocator_int_* r1459 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1458);
      void_std___Destroy_int___int_(t1453, ptr1457, r1459);
      if (__cir_exc_active) {
        return;
      }
    for_step1448: ;
      int** t1460 = __node1444;
      int c1461 = 1;
      int** ptr1462 = &(t1460)[c1461];
      __node1444 = ptr1462;
    }
    int** t1463 = __first1441._M_node;
    int** t1464 = __last1442._M_node;
    _Bool c1465 = ((t1463 != t1464)) ? 1 : 0;
    if (c1465) {
      int* t1466 = __first1441._M_cur;
      int* t1467 = __first1441._M_last;
      struct std___Deque_base_int__std__allocator_int__* base1468 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1443 + 0);
      struct std__allocator_int_* r1469 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1468);
      void_std___Destroy_int___int_(t1466, t1467, r1469);
      if (__cir_exc_active) {
        return;
      }
      int* t1470 = __last1442._M_first;
      int* t1471 = __last1442._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1472 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1443 + 0);
      struct std__allocator_int_* r1473 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1472);
      void_std___Destroy_int___int_(t1470, t1471, r1473);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t1474 = __first1441._M_cur;
      int* t1475 = __last1442._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1476 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1443 + 0);
      struct std__allocator_int_* r1477 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1476);
      void_std___Destroy_int___int_(t1474, t1475, r1477);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v1478, struct std___Deque_iterator_int__int____int___ v1479, struct std___Deque_iterator_int__int____int___ v1480, struct std__allocator_int_* v1481) {
bb1482: ;
  struct std__deque_int__std__allocator_int__* this1483;
  struct std___Deque_iterator_int__int____int___ __first1484;
  struct std___Deque_iterator_int__int____int___ __last1485;
  struct std__allocator_int_* unnamed1486;
  this1483 = v1478;
  __first1484 = v1479;
  __last1485 = v1480;
  unnamed1486 = v1481;
  struct std__deque_int__std__allocator_int__* t1487 = this1483;
    _Bool c1488 = 0;
    if (c1488) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01489;
      struct std___Deque_iterator_int__int____int___ agg_tmp11490;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01489, &__first1484);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11490, &__last1485);
      struct std___Deque_iterator_int__int____int___ t1491 = agg_tmp01489;
      struct std___Deque_iterator_int__int____int___ t1492 = agg_tmp11490;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t1487, t1491, t1492);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v1493) {
bb1494: ;
  struct std__deque_int__std__allocator_int__* this1495;
  struct std___Deque_iterator_int__int____int___ __retval1496;
  this1495 = v1493;
  struct std__deque_int__std__allocator_int__* t1497 = this1495;
  struct std___Deque_base_int__std__allocator_int__* base1498 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1497 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1499 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1498->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1496, &base1499->_M_start);
  struct std___Deque_iterator_int__int____int___ t1500 = __retval1496;
  return t1500;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v1501) {
bb1502: ;
  struct std__deque_int__std__allocator_int__* this1503;
  struct std___Deque_iterator_int__int____int___ __retval1504;
  this1503 = v1501;
  struct std__deque_int__std__allocator_int__* t1505 = this1503;
  struct std___Deque_base_int__std__allocator_int__* base1506 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1505 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1507 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1506->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1504, &base1507->_M_finish);
  struct std___Deque_iterator_int__int____int___ t1508 = __retval1504;
  return t1508;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2ERKS2_
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data_2(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1509, struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1510) {
bb1511: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1512;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* unnamed1513;
  this1512 = v1509;
  unnamed1513 = v1510;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1514 = this1512;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1515 = unnamed1513;
  int** t1516 = t1515->_M_map;
  t1514->_M_map = t1516;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1517 = unnamed1513;
  unsigned long t1518 = t1517->_M_map_size;
  t1514->_M_map_size = t1518;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1519 = unnamed1513;
  std___Deque_iterator_int__int___int_____Deque_iterator(&t1514->_M_start, &t1519->_M_start);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1520 = unnamed1513;
  std___Deque_iterator_int__int___int_____Deque_iterator(&t1514->_M_finish, &t1520->_M_finish);
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data_3(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1521) {
bb1522: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1523;
  this1523 = v1521;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1524 = this1523;
  int** c1525 = ((void*)0);
  t1524->_M_map = c1525;
  unsigned long c1526 = 0;
  t1524->_M_map_size = c1526;
  std___Deque_iterator_int__int___int_____Deque_iterator_3(&t1524->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_3(&t1524->_M_finish);
  return;
}

