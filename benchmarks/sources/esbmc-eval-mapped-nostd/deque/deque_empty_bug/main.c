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
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "!mydeque.empty()";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_empty_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[20] = "mydeque.size() != 0";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[8] = "total: ";
char _str_4[48] = "cannot create std::deque larger than max_size()";
char _str_5[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv[77] = "reference std::deque<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE9pop_frontEv[76] = "void std::deque<int>::pop_front() [_Tp = int, _Alloc = std::allocator<int>]";
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* p0);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* p0, int* p1, int* p2);
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
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* p0);
int* std__deque_int__std__allocator_int_____front(struct std__deque_int__std__allocator_int__* p0);
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* p0, int* p1);
void std__deque_int__std__allocator_int______M_pop_front_aux(struct std__deque_int__std__allocator_int__* p0);
void std__deque_int__std__allocator_int_____pop_front(struct std__deque_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
long std__operator_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* p0);
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
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
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

// function: _ZNSt5dequeIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* v44) {
bb45:
  struct std__allocator_int_* __a46;
  unsigned long __retval47;
  unsigned long __diffmax48;
  unsigned long __allocmax49;
  __a46 = v44;
  unsigned long c50 = 9223372036854775807;
  __diffmax48 = c50;
  unsigned long c51 = 4611686018427387903;
  __allocmax49 = c51;
  unsigned long* r52 = unsigned_long_const__std__min_unsigned_long_(&__diffmax48, &__allocmax49);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t53 = *r52;
  __retval47 = t53;
  unsigned long t54 = __retval47;
  return t54;
}

// function: _ZNKSt5dequeIiSaIiEE8max_sizeEv
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* v55) {
bb56:
  struct std__deque_int__std__allocator_int__* this57;
  unsigned long __retval58;
  this57 = v55;
  struct std__deque_int__std__allocator_int__* t59 = this57;
  struct std___Deque_base_int__std__allocator_int__* base60 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t59 + 0);
  struct std__allocator_int_* r61 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(base60);
  unsigned long r62 = std__deque_int__std__allocator_int______S_max_size(r61);
  __retval58 = r62;
  unsigned long t63 = __retval58;
  return t63;
}

// function: _ZSt12__niter_wrapIPPiET_RKS2_S2_
int** int___std____niter_wrap_int___(int*** v64, int** v65) {
bb66:
  int*** unnamed67;
  int** __res68;
  int** __retval69;
  unnamed67 = v64;
  __res68 = v65;
  int** t70 = __res68;
  __retval69 = t70;
  int** t71 = __retval69;
  return t71;
}

// function: _ZSt10__distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_int_____difference_type_std____distance_int___(int** v72, int** v73, struct std__random_access_iterator_tag v74) {
bb75:
  int** __first76;
  int** __last77;
  struct std__random_access_iterator_tag unnamed78;
  long __retval79;
  __first76 = v72;
  __last77 = v73;
  unnamed78 = v74;
  int** t80 = __last77;
  int** t81 = __first76;
  long diff82 = t80 - t81;
  __retval79 = diff82;
  long t83 = __retval79;
  return t83;
}

// function: _ZSt19__iterator_categoryIPPiENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_int_____iterator_category_std____iterator_category_int___(int*** v84) {
bb85:
  int*** unnamed86;
  struct std__random_access_iterator_tag __retval87;
  unnamed86 = v84;
  struct std__random_access_iterator_tag t88 = __retval87;
  return t88;
}

// function: _ZSt8distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_int_____difference_type_std__distance_int___(int** v89, int** v90) {
bb91:
  int** __first92;
  int** __last93;
  long __retval94;
  struct std__random_access_iterator_tag agg_tmp095;
  __first92 = v89;
  __last93 = v90;
  int** t96 = __first92;
  int** t97 = __last93;
  struct std__random_access_iterator_tag r98 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(&__first92);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp095 = r98;
  struct std__random_access_iterator_tag t99 = agg_tmp095;
  long r100 = std__iterator_traits_int_____difference_type_std____distance_int___(t96, t97, t99);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval94 = r100;
  long t101 = __retval94;
  return t101;
}

// function: _ZSt12__assign_oneILb0EPPiS1_EvRT0_RT1_
void void_std____assign_one_false__int____int___(int*** v102, int*** v103) {
bb104:
  int*** __out105;
  int*** __in106;
  __out105 = v102;
  __in106 = v103;
    int*** t107 = __in106;
    int** t108 = *t107;
    int* t109 = *t108;
    int*** t110 = __out105;
    int** t111 = *t110;
    *t111 = t109;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPPiS1_S1_ET2_T0_T1_S2_
int** int___std____copy_move_a2_false__int____int____int___(int** v112, int** v113, int** v114) {
bb115:
  int** __first116;
  int** __last117;
  int** __result118;
  int** __retval119;
  __first116 = v112;
  __last117 = v113;
  __result118 = v114;
      _Bool r120 = std____is_constant_evaluated();
      if (r120) {
      } else {
          long __n121;
          int** t122 = __first116;
          int** t123 = __last117;
          long r124 = std__iterator_traits_int_____difference_type_std__distance_int___(t122, t123);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n121 = r124;
            long t125 = __n121;
            long c126 = 1;
            _Bool c127 = ((t125 > c126)) ? 1 : 0;
            if (c127) {
              int** t128 = __result118;
              void* cast129 = (void*)t128;
              int** t130 = __first116;
              void* cast131 = (void*)t130;
              long t132 = __n121;
              unsigned long cast133 = (unsigned long)t132;
              unsigned long c134 = 8;
              unsigned long b135 = cast133 * c134;
              void* r136 = memmove(cast129, cast131, b135);
              long t137 = __n121;
              int** t138 = __result118;
              int** ptr139 = &(t138)[t137];
              __result118 = ptr139;
            } else {
                long t140 = __n121;
                long c141 = 1;
                _Bool c142 = ((t140 == c141)) ? 1 : 0;
                if (c142) {
                  void_std____assign_one_false__int____int___(&__result118, &__first116);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                  int** t143 = __result118;
                  int c144 = 1;
                  int** ptr145 = &(t143)[c144];
                  __result118 = ptr145;
                }
            }
          int** t146 = __result118;
          __retval119 = t146;
          int** t147 = __retval119;
          return t147;
      }
    while (1) {
      int** t149 = __first116;
      int** t150 = __last117;
      _Bool c151 = ((t149 != t150)) ? 1 : 0;
      if (!c151) break;
      void_std____assign_one_false__int____int___(&__result118, &__first116);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
    for_step148: ;
      int** t152 = __result118;
      int c153 = 1;
      int** ptr154 = &(t152)[c153];
      __result118 = ptr154;
      int** t155 = __first116;
      int c156 = 1;
      int** ptr157 = &(t155)[c156];
      __first116 = ptr157;
    }
  int** t158 = __result118;
  __retval119 = t158;
  int** t159 = __retval119;
  return t159;
}

// function: _ZSt14__copy_move_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a1_false__int____int___(int** v160, int** v161, int** v162) {
bb163:
  int** __first164;
  int** __last165;
  int** __result166;
  int** __retval167;
  __first164 = v160;
  __last165 = v161;
  __result166 = v162;
  int** t168 = __first164;
  int** t169 = __last165;
  int** t170 = __result166;
  int** r171 = int___std____copy_move_a2_false__int____int____int___(t168, t169, t170);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval167 = r171;
  int** t172 = __retval167;
  return t172;
}

// function: _ZSt12__niter_baseIPPiET_S2_
int** int___std____niter_base_int___(int** v173) {
bb174:
  int** __it175;
  int** __retval176;
  __it175 = v173;
  int** t177 = __it175;
  __retval176 = t177;
  int** t178 = __retval176;
  return t178;
}

// function: _ZSt13__copy_move_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a_false__int____int___(int** v179, int** v180, int** v181) {
bb182:
  int** __first183;
  int** __last184;
  int** __result185;
  int** __retval186;
  __first183 = v179;
  __last184 = v180;
  __result185 = v181;
  int** t187 = __first183;
  int** r188 = int___std____niter_base_int___(t187);
  int** t189 = __last184;
  int** r190 = int___std____niter_base_int___(t189);
  int** t191 = __result185;
  int** r192 = int___std____niter_base_int___(t191);
  int** r193 = int___std____copy_move_a1_false__int____int___(r188, r190, r192);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r194 = int___std____niter_wrap_int___(&__result185, r193);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval186 = r194;
  int** t195 = __retval186;
  return t195;
}

// function: _ZSt12__miter_baseIPPiET_S2_
int** int___std____miter_base_int___(int** v196) {
bb197:
  int** __it198;
  int** __retval199;
  __it198 = v196;
  int** t200 = __it198;
  __retval199 = t200;
  int** t201 = __retval199;
  return t201;
}

// function: _ZSt4copyIPPiS1_ET0_T_S3_S2_
int** int___std__copy_int____int___(int** v202, int** v203, int** v204) {
bb205:
  int** __first206;
  int** __last207;
  int** __result208;
  int** __retval209;
  __first206 = v202;
  __last207 = v203;
  __result208 = v204;
  int** t210 = __first206;
  int** r211 = int___std____miter_base_int___(t210);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t212 = __last207;
  int** r213 = int___std____miter_base_int___(t212);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t214 = __result208;
  int** r215 = int___std____copy_move_a_false__int____int___(r211, r213, t214);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval209 = r215;
  int** t216 = __retval209;
  return t216;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb217:
  _Bool __retval218;
    _Bool c219 = 0;
    __retval218 = c219;
    _Bool t220 = __retval218;
    return t220;
  abort();
}

// function: _ZSt9__advanceIPPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int____long_(int*** v221, long v222, struct std__random_access_iterator_tag v223) {
bb224:
  int*** __i225;
  long __n226;
  struct std__random_access_iterator_tag unnamed227;
  __i225 = v221;
  __n226 = v222;
  unnamed227 = v223;
    long t228 = __n226;
    _Bool isconst229 = 0;
    _Bool ternary230;
    if (isconst229) {
      long t231 = __n226;
      long c232 = 1;
      _Bool c233 = ((t231 == c232)) ? 1 : 0;
      ternary230 = (_Bool)c233;
    } else {
      _Bool c234 = 0;
      ternary230 = (_Bool)c234;
    }
    if (ternary230) {
      int*** t235 = __i225;
      int** t236 = *t235;
      int c237 = 1;
      int** ptr238 = &(t236)[c237];
      *t235 = ptr238;
    } else {
        long t239 = __n226;
        _Bool isconst240 = 0;
        _Bool ternary241;
        if (isconst240) {
          long t242 = __n226;
          long c243 = -1;
          _Bool c244 = ((t242 == c243)) ? 1 : 0;
          ternary241 = (_Bool)c244;
        } else {
          _Bool c245 = 0;
          ternary241 = (_Bool)c245;
        }
        if (ternary241) {
          int*** t246 = __i225;
          int** t247 = *t246;
          int c248 = -1;
          int** ptr249 = &(t247)[c248];
          *t246 = ptr249;
        } else {
          long t250 = __n226;
          int*** t251 = __i225;
          int** t252 = *t251;
          int** ptr253 = &(t252)[t250];
          *t251 = ptr253;
        }
    }
  return;
}

// function: _ZSt7advanceIPPilEvRT_T0_
void void_std__advance_int____long_(int*** v254, long v255) {
bb256:
  int*** __i257;
  long __n258;
  long __d259;
  struct std__random_access_iterator_tag agg_tmp0260;
  __i257 = v254;
  __n258 = v255;
  long t261 = __n258;
  __d259 = t261;
  int*** t262 = __i257;
  long t263 = __d259;
  int*** t264 = __i257;
  struct std__random_access_iterator_tag r265 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(t264);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0260 = r265;
  struct std__random_access_iterator_tag t266 = agg_tmp0260;
  void_std____advance_int____long_(t262, t263, t266);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a2_false__int____int___(int** v267, int** v268, int** v269) {
bb270:
  int** __first271;
  int** __last272;
  int** __result273;
  int** __retval274;
  __first271 = v267;
  __last272 = v268;
  __result273 = v269;
      _Bool r275 = std__is_constant_evaluated();
      if (r275) {
      } else {
          long __n276;
          int** t277 = __first271;
          int** t278 = __last272;
          long r279 = std__iterator_traits_int_____difference_type_std__distance_int___(t277, t278);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n276 = r279;
          long t280 = __n276;
          long u281 = -t280;
          void_std__advance_int____long_(&__result273, u281);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
            long t282 = __n276;
            long c283 = 1;
            _Bool c284 = ((t282 > c283)) ? 1 : 0;
            if (c284) {
              int** t285 = __result273;
              void* cast286 = (void*)t285;
              int** t287 = __first271;
              void* cast288 = (void*)t287;
              long t289 = __n276;
              unsigned long cast290 = (unsigned long)t289;
              unsigned long c291 = 8;
              unsigned long b292 = cast290 * c291;
              void* r293 = memmove(cast286, cast288, b292);
            } else {
                long t294 = __n276;
                long c295 = 1;
                _Bool c296 = ((t294 == c295)) ? 1 : 0;
                if (c296) {
                  void_std____assign_one_false__int____int___(&__result273, &__first271);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                }
            }
          int** t297 = __result273;
          __retval274 = t297;
          int** t298 = __retval274;
          return t298;
      }
    while (1) {
      int** t299 = __first271;
      int** t300 = __last272;
      _Bool c301 = ((t299 != t300)) ? 1 : 0;
      if (!c301) break;
        int** t302 = __last272;
        int c303 = -1;
        int** ptr304 = &(t302)[c303];
        __last272 = ptr304;
        int** t305 = __result273;
        int c306 = -1;
        int** ptr307 = &(t305)[c306];
        __result273 = ptr307;
        void_std____assign_one_false__int____int___(&__result273, &__last272);
        if (__cir_exc_active) {
          int** __cir_eh_ret = (int**)0;
          return __cir_eh_ret;
        }
    }
  int** t308 = __result273;
  __retval274 = t308;
  int** t309 = __retval274;
  return t309;
}

// function: _ZSt23__copy_move_backward_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a1_false__int____int___(int** v310, int** v311, int** v312) {
bb313:
  int** __first314;
  int** __last315;
  int** __result316;
  int** __retval317;
  __first314 = v310;
  __last315 = v311;
  __result316 = v312;
  int** t318 = __first314;
  int** t319 = __last315;
  int** t320 = __result316;
  int** r321 = int___std____copy_move_backward_a2_false__int____int___(t318, t319, t320);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval317 = r321;
  int** t322 = __retval317;
  return t322;
}

// function: _ZSt22__copy_move_backward_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a_false__int____int___(int** v323, int** v324, int** v325) {
bb326:
  int** __first327;
  int** __last328;
  int** __result329;
  int** __retval330;
  __first327 = v323;
  __last328 = v324;
  __result329 = v325;
  int** t331 = __first327;
  int** r332 = int___std____niter_base_int___(t331);
  int** t333 = __last328;
  int** r334 = int___std____niter_base_int___(t333);
  int** t335 = __result329;
  int** r336 = int___std____niter_base_int___(t335);
  int** r337 = int___std____copy_move_backward_a1_false__int____int___(r332, r334, r336);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r338 = int___std____niter_wrap_int___(&__result329, r337);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval330 = r338;
  int** t339 = __retval330;
  return t339;
}

// function: _ZSt13copy_backwardIPPiS1_ET0_T_S3_S2_
int** int___std__copy_backward_int____int___(int** v340, int** v341, int** v342) {
bb343:
  int** __first344;
  int** __last345;
  int** __result346;
  int** __retval347;
  __first344 = v340;
  __last345 = v341;
  __result346 = v342;
  int** t348 = __first344;
  int** r349 = int___std____miter_base_int___(t348);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t350 = __last345;
  int** r351 = int___std____miter_base_int___(t350);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t352 = __result346;
  int** r353 = int___std____copy_move_backward_a_false__int____int___(r349, r351, t352);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval347 = r353;
  int** t354 = __retval347;
  return t354;
}

// function: _ZNSt5dequeIiSaIiEE17_M_reallocate_mapEmb
void std__deque_int__std__allocator_int______M_reallocate_map(struct std__deque_int__std__allocator_int__* v355, unsigned long v356, _Bool v357) {
bb358:
  struct std__deque_int__std__allocator_int__* this359;
  unsigned long __nodes_to_add360;
  _Bool __add_at_front361;
  unsigned long __old_num_nodes362;
  unsigned long __new_num_nodes363;
  int** __new_nstart364;
  this359 = v355;
  __nodes_to_add360 = v356;
  __add_at_front361 = v357;
  struct std__deque_int__std__allocator_int__* t365 = this359;
  struct std___Deque_base_int__std__allocator_int__* base366 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base367 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base366->_M_impl) + 0);
  int** t368 = base367->_M_finish._M_node;
  struct std___Deque_base_int__std__allocator_int__* base369 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base370 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base369->_M_impl) + 0);
  int** t371 = base370->_M_start._M_node;
  long diff372 = t368 - t371;
  long c373 = 1;
  long b374 = diff372 + c373;
  unsigned long cast375 = (unsigned long)b374;
  __old_num_nodes362 = cast375;
  unsigned long t376 = __old_num_nodes362;
  unsigned long t377 = __nodes_to_add360;
  unsigned long b378 = t376 + t377;
  __new_num_nodes363 = b378;
    struct std___Deque_base_int__std__allocator_int__* base379 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base380 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base379->_M_impl) + 0);
    unsigned long t381 = base380->_M_map_size;
    unsigned long c382 = 2;
    unsigned long t383 = __new_num_nodes363;
    unsigned long b384 = c382 * t383;
    _Bool c385 = ((t381 > b384)) ? 1 : 0;
    if (c385) {
      struct std___Deque_base_int__std__allocator_int__* base386 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base387 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base386->_M_impl) + 0);
      int** t388 = base387->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base389 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base390 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base389->_M_impl) + 0);
      unsigned long t391 = base390->_M_map_size;
      unsigned long t392 = __new_num_nodes363;
      unsigned long b393 = t391 - t392;
      unsigned long c394 = 2;
      unsigned long b395 = b393 / c394;
      int** ptr396 = &(t388)[b395];
      _Bool t397 = __add_at_front361;
      unsigned long ternary398;
      if (t397) {
        unsigned long t399 = __nodes_to_add360;
        ternary398 = (unsigned long)t399;
      } else {
        unsigned long c400 = 0;
        ternary398 = (unsigned long)c400;
      }
      int** ptr401 = &(ptr396)[ternary398];
      __new_nstart364 = ptr401;
        int** t402 = __new_nstart364;
        struct std___Deque_base_int__std__allocator_int__* base403 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base404 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base403->_M_impl) + 0);
        int** t405 = base404->_M_start._M_node;
        _Bool c406 = ((t402 < t405)) ? 1 : 0;
        if (c406) {
          struct std___Deque_base_int__std__allocator_int__* base407 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base408 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base407->_M_impl) + 0);
          int** t409 = base408->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base410 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base411 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base410->_M_impl) + 0);
          int** t412 = base411->_M_finish._M_node;
          int c413 = 1;
          int** ptr414 = &(t412)[c413];
          int** t415 = __new_nstart364;
          int** r416 = int___std__copy_int____int___(t409, ptr414, t415);
          if (__cir_exc_active) {
            return;
          }
        } else {
          struct std___Deque_base_int__std__allocator_int__* base417 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base418 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base417->_M_impl) + 0);
          int** t419 = base418->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base420 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base421 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base420->_M_impl) + 0);
          int** t422 = base421->_M_finish._M_node;
          int c423 = 1;
          int** ptr424 = &(t422)[c423];
          int** t425 = __new_nstart364;
          unsigned long t426 = __old_num_nodes362;
          int** ptr427 = &(t425)[t426];
          int** r428 = int___std__copy_backward_int____int___(t419, ptr424, ptr427);
          if (__cir_exc_active) {
            return;
          }
        }
    } else {
      unsigned long __new_map_size429;
      unsigned long __bufsz430;
      int** __new_map431;
      struct std___Deque_base_int__std__allocator_int__* base432 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base433 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base432->_M_impl) + 0);
      unsigned long t434 = base433->_M_map_size;
      struct std___Deque_base_int__std__allocator_int__* base435 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base436 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base435->_M_impl) + 0);
      unsigned long* r437 = unsigned_long_const__std__max_unsigned_long_(&base436->_M_map_size, &__nodes_to_add360);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t438 = *r437;
      unsigned long b439 = t434 + t438;
      unsigned long c440 = 2;
      unsigned long b441 = b439 + c440;
      __new_map_size429 = b441;
      unsigned long c442 = 128;
      __bufsz430 = c442;
        unsigned long t443 = __new_map_size429;
        unsigned long r444 = std__deque_int__std__allocator_int_____max_size___const(t365);
        unsigned long t445 = __bufsz430;
        unsigned long b446 = r444 + t445;
        unsigned long c447 = 1;
        unsigned long b448 = b446 - c447;
        unsigned long t449 = __bufsz430;
        unsigned long b450 = b448 / t449;
        unsigned long c451 = 2;
        unsigned long b452 = b450 * c451;
        _Bool c453 = ((t443 > b452)) ? 1 : 0;
        if (c453) {
          __builtin_unreachable();
        }
      struct std___Deque_base_int__std__allocator_int__* base454 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      unsigned long t455 = __new_map_size429;
      int** r456 = std___Deque_base_int__std__allocator_int______M_allocate_map(base454, t455);
      if (__cir_exc_active) {
        return;
      }
      __new_map431 = r456;
      int** t457 = __new_map431;
      unsigned long t458 = __new_map_size429;
      unsigned long t459 = __new_num_nodes363;
      unsigned long b460 = t458 - t459;
      unsigned long c461 = 2;
      unsigned long b462 = b460 / c461;
      int** ptr463 = &(t457)[b462];
      _Bool t464 = __add_at_front361;
      unsigned long ternary465;
      if (t464) {
        unsigned long t466 = __nodes_to_add360;
        ternary465 = (unsigned long)t466;
      } else {
        unsigned long c467 = 0;
        ternary465 = (unsigned long)c467;
      }
      int** ptr468 = &(ptr463)[ternary465];
      __new_nstart364 = ptr468;
      struct std___Deque_base_int__std__allocator_int__* base469 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base470 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base469->_M_impl) + 0);
      int** t471 = base470->_M_start._M_node;
      struct std___Deque_base_int__std__allocator_int__* base472 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base473 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base472->_M_impl) + 0);
      int** t474 = base473->_M_finish._M_node;
      int c475 = 1;
      int** ptr476 = &(t474)[c475];
      int** t477 = __new_nstart364;
      int** r478 = int___std__copy_int____int___(t471, ptr476, t477);
      if (__cir_exc_active) {
        return;
      }
      struct std___Deque_base_int__std__allocator_int__* base479 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      struct std___Deque_base_int__std__allocator_int__* base480 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base481 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base480->_M_impl) + 0);
      int** t482 = base481->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base483 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base484 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base483->_M_impl) + 0);
      unsigned long t485 = base484->_M_map_size;
      std___Deque_base_int__std__allocator_int______M_deallocate_map(base479, t482, t485);
      int** t486 = __new_map431;
      struct std___Deque_base_int__std__allocator_int__* base487 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base488 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base487->_M_impl) + 0);
      base488->_M_map = t486;
      unsigned long t489 = __new_map_size429;
      struct std___Deque_base_int__std__allocator_int__* base490 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base491 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base490->_M_impl) + 0);
      base491->_M_map_size = t489;
    }
  struct std___Deque_base_int__std__allocator_int__* base492 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base493 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base492->_M_impl) + 0);
  int** t494 = __new_nstart364;
  std___Deque_iterator_int__int___int_____M_set_node(&base493->_M_start, t494);
  struct std___Deque_base_int__std__allocator_int__* base495 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base496 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base495->_M_impl) + 0);
  int** t497 = __new_nstart364;
  unsigned long t498 = __old_num_nodes362;
  int** ptr499 = &(t497)[t498];
  int c500 = -1;
  int** ptr501 = &(ptr499)[c500];
  std___Deque_iterator_int__int___int_____M_set_node(&base496->_M_finish, ptr501);
  return;
}

// function: _ZNSt5dequeIiSaIiEE22_M_reserve_map_at_backEm
void std__deque_int__std__allocator_int______M_reserve_map_at_back(struct std__deque_int__std__allocator_int__* v502, unsigned long v503) {
bb504:
  struct std__deque_int__std__allocator_int__* this505;
  unsigned long __nodes_to_add506;
  this505 = v502;
  __nodes_to_add506 = v503;
  struct std__deque_int__std__allocator_int__* t507 = this505;
    unsigned long t508 = __nodes_to_add506;
    unsigned long c509 = 1;
    unsigned long b510 = t508 + c509;
    struct std___Deque_base_int__std__allocator_int__* base511 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t507 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base512 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base511->_M_impl) + 0);
    unsigned long t513 = base512->_M_map_size;
    struct std___Deque_base_int__std__allocator_int__* base514 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t507 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base515 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base514->_M_impl) + 0);
    int** t516 = base515->_M_finish._M_node;
    struct std___Deque_base_int__std__allocator_int__* base517 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t507 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base518 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base517->_M_impl) + 0);
    int** t519 = base518->_M_map;
    long diff520 = t516 - t519;
    unsigned long cast521 = (unsigned long)diff520;
    unsigned long b522 = t513 - cast521;
    _Bool c523 = ((b510 > b522)) ? 1 : 0;
    if (c523) {
      unsigned long t524 = __nodes_to_add506;
      _Bool c525 = 0;
      std__deque_int__std__allocator_int______M_reallocate_map(t507, t524, c525);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE16_M_push_back_auxIJRKiEEEvDpOT_
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(struct std__deque_int__std__allocator_int__* v526, int* v527) {
bb528:
  struct std__deque_int__std__allocator_int__* this529;
  int* __args530;
  this529 = v526;
  __args530 = v527;
  struct std__deque_int__std__allocator_int__* t531 = this529;
    unsigned long r532 = std__deque_int__std__allocator_int_____size___const(t531);
    unsigned long r533 = std__deque_int__std__allocator_int_____max_size___const(t531);
    _Bool c534 = ((r532 == r533)) ? 1 : 0;
    if (c534) {
      char* cast535 = (char*)&(_str_4);
      std____throw_length_error(cast535);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long c536 = 1;
  std__deque_int__std__allocator_int______M_reserve_map_at_back(t531, c536);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base537 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t531 + 0);
  int* r538 = std___Deque_base_int__std__allocator_int______M_allocate_node(base537);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base539 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t531 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base540 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base539->_M_impl) + 0);
  int** t541 = base540->_M_finish._M_node;
  int c542 = 1;
  int** ptr543 = &(t541)[c542];
  *ptr543 = r538;
      struct std___Deque_base_int__std__allocator_int__* base545 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t531 + 0);
      struct std__allocator_int_* base546 = (struct std__allocator_int_*)((char *)&(base545->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base547 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t531 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base548 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base547->_M_impl) + 0);
      int* t549 = base548->_M_finish._M_cur;
      int* t550 = __args530;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base546, t549, t550);
      struct std___Deque_base_int__std__allocator_int__* base551 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t531 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base552 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base551->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base553 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t531 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base554 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base553->_M_impl) + 0);
      int** t555 = base554->_M_finish._M_node;
      int c556 = 1;
      int** ptr557 = &(t555)[c556];
      std___Deque_iterator_int__int___int_____M_set_node(&base552->_M_finish, ptr557);
      struct std___Deque_base_int__std__allocator_int__* base558 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t531 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base559 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base558->_M_impl) + 0);
      int* t560 = base559->_M_finish._M_first;
      struct std___Deque_base_int__std__allocator_int__* base561 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t531 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base562 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base561->_M_impl) + 0);
      base562->_M_finish._M_cur = t560;
    cir_try_dispatch544: ;
    if (__cir_exc_active) {
    {
      int ca_tok563 = 0;
      void* ca_exn564 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base565 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t531 + 0);
        struct std___Deque_base_int__std__allocator_int__* base566 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t531 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base567 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base566->_M_impl) + 0);
        int** t568 = base567->_M_finish._M_node;
        int c569 = 1;
        int** ptr570 = &(t568)[c569];
        int* t571 = *ptr570;
        std___Deque_base_int__std__allocator_int______M_deallocate_node(base565, t571);
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
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* v572, int* v573) {
bb574:
  struct std__deque_int__std__allocator_int__* this575;
  int* __x576;
  this575 = v572;
  __x576 = v573;
  struct std__deque_int__std__allocator_int__* t577 = this575;
    struct std___Deque_base_int__std__allocator_int__* base578 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t577 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base579 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base578->_M_impl) + 0);
    int* t580 = base579->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base581 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t577 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base582 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base581->_M_impl) + 0);
    int* t583 = base582->_M_finish._M_last;
    int c584 = -1;
    int* ptr585 = &(t583)[c584];
    _Bool c586 = ((t580 != ptr585)) ? 1 : 0;
    if (c586) {
      struct std___Deque_base_int__std__allocator_int__* base587 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t577 + 0);
      struct std__allocator_int_* base588 = (struct std__allocator_int_*)((char *)&(base587->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base589 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t577 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base590 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base589->_M_impl) + 0);
      int* t591 = base590->_M_finish._M_cur;
      int* t592 = __x576;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base588, t591, t592);
      struct std___Deque_base_int__std__allocator_int__* base593 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t577 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base594 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base593->_M_impl) + 0);
      int* t595 = base594->_M_finish._M_cur;
      int c596 = 1;
      int* ptr597 = &(t595)[c596];
      base594->_M_finish._M_cur = ptr597;
    } else {
      int* t598 = __x576;
      void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(t577, t598);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* v599, struct std___Deque_iterator_int__int____int___* v600) {
bb601:
  struct std___Deque_iterator_int__int____int___* __x602;
  struct std___Deque_iterator_int__int____int___* __y603;
  _Bool __retval604;
  __x602 = v599;
  __y603 = v600;
  struct std___Deque_iterator_int__int____int___* t605 = __x602;
  int* t606 = t605->_M_cur;
  struct std___Deque_iterator_int__int____int___* t607 = __y603;
  int* t608 = t607->_M_cur;
  _Bool c609 = ((t606 == t608)) ? 1 : 0;
  __retval604 = c609;
  _Bool t610 = __retval604;
  return t610;
}

// function: _ZNKSt5dequeIiSaIiEE5emptyEv
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* v611) {
bb612:
  struct std__deque_int__std__allocator_int__* this613;
  _Bool __retval614;
  this613 = v611;
  struct std__deque_int__std__allocator_int__* t615 = this613;
  struct std___Deque_base_int__std__allocator_int__* base616 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t615 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base617 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base616->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base618 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t615 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base619 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base618->_M_impl) + 0);
  _Bool r620 = std__operator__(&base617->_M_finish, &base619->_M_start);
  __retval614 = r620;
  _Bool t621 = __retval614;
  return t621;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v622) {
bb623:
  struct std___Deque_iterator_int__int____int___* this624;
  int* __retval625;
  this624 = v622;
  struct std___Deque_iterator_int__int____int___* t626 = this624;
  int* t627 = t626->_M_cur;
  __retval625 = t627;
  int* t628 = __retval625;
  return t628;
}

// function: _ZNSt5dequeIiSaIiEE5frontEv
int* std__deque_int__std__allocator_int_____front(struct std__deque_int__std__allocator_int__* v629) {
bb630:
  struct std__deque_int__std__allocator_int__* this631;
  int* __retval632;
  struct std___Deque_iterator_int__int____int___ ref_tmp0633;
  this631 = v629;
  struct std__deque_int__std__allocator_int__* t634 = this631;
    do {
          _Bool r635 = std__deque_int__std__allocator_int_____empty___const(t634);
          if (r635) {
            char* cast636 = (char*)&(_str_5);
            int c637 = 1513;
            char* cast638 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv);
            char* cast639 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast636, c637, cast638, cast639);
          }
      _Bool c640 = 0;
      if (!c640) break;
    } while (1);
  struct std___Deque_iterator_int__int____int___ r641 = std__deque_int__std__allocator_int_____begin(t634);
  ref_tmp0633 = r641;
  int* r642 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp0633);
  __retval632 = r642;
  int* t643 = __retval632;
  return t643;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v644, int* v645) {
bb646:
  struct std__allocator_int_* __a647;
  int* __p648;
  __a647 = v644;
  __p648 = v645;
  int* t649 = __p648;
  void_std__destroy_at_int_(t649);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE16_M_pop_front_auxEv
void std__deque_int__std__allocator_int______M_pop_front_aux(struct std__deque_int__std__allocator_int__* v650) {
bb651:
  struct std__deque_int__std__allocator_int__* this652;
  this652 = v650;
  struct std__deque_int__std__allocator_int__* t653 = this652;
  struct std___Deque_base_int__std__allocator_int__* base654 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t653 + 0);
  struct std__allocator_int_* r655 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base654);
  struct std___Deque_base_int__std__allocator_int__* base656 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t653 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base657 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base656->_M_impl) + 0);
  int* t658 = base657->_M_start._M_cur;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(r655, t658);
  struct std___Deque_base_int__std__allocator_int__* base659 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t653 + 0);
  struct std___Deque_base_int__std__allocator_int__* base660 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t653 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base661 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base660->_M_impl) + 0);
  int* t662 = base661->_M_start._M_first;
  std___Deque_base_int__std__allocator_int______M_deallocate_node(base659, t662);
  struct std___Deque_base_int__std__allocator_int__* base663 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t653 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base664 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base663->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base665 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t653 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base666 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base665->_M_impl) + 0);
  int** t667 = base666->_M_start._M_node;
  int c668 = 1;
  int** ptr669 = &(t667)[c668];
  std___Deque_iterator_int__int___int_____M_set_node(&base664->_M_start, ptr669);
  struct std___Deque_base_int__std__allocator_int__* base670 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t653 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base671 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base670->_M_impl) + 0);
  int* t672 = base671->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int__* base673 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t653 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base674 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base673->_M_impl) + 0);
  base674->_M_start._M_cur = t672;
  return;
}

// function: _ZNSt5dequeIiSaIiEE9pop_frontEv
void std__deque_int__std__allocator_int_____pop_front(struct std__deque_int__std__allocator_int__* v675) {
bb676:
  struct std__deque_int__std__allocator_int__* this677;
  this677 = v675;
  struct std__deque_int__std__allocator_int__* t678 = this677;
    do {
          _Bool r679 = std__deque_int__std__allocator_int_____empty___const(t678);
          if (r679) {
            char* cast680 = (char*)&(_str_5);
            int c681 = 1643;
            char* cast682 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE9pop_frontEv);
            char* cast683 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast680, c681, cast682, cast683);
          }
      _Bool c684 = 0;
      if (!c684) break;
    } while (1);
    struct std___Deque_base_int__std__allocator_int__* base685 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t678 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base686 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base685->_M_impl) + 0);
    int* t687 = base686->_M_start._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base688 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t678 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base689 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base688->_M_impl) + 0);
    int* t690 = base689->_M_start._M_last;
    int c691 = -1;
    int* ptr692 = &(t690)[c691];
    _Bool c693 = ((t687 != ptr692)) ? 1 : 0;
    if (c693) {
      struct std___Deque_base_int__std__allocator_int__* base694 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t678 + 0);
      struct std__allocator_int_* r695 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base694);
      struct std___Deque_base_int__std__allocator_int__* base696 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t678 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base697 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base696->_M_impl) + 0);
      int* t698 = base697->_M_start._M_cur;
      void_std__allocator_traits_std__allocator_int_____destroy_int_(r695, t698);
      struct std___Deque_base_int__std__allocator_int__* base699 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t678 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base700 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base699->_M_impl) + 0);
      int* t701 = base700->_M_start._M_cur;
      int c702 = 1;
      int* ptr703 = &(t701)[c702];
      base700->_M_start._M_cur = ptr703;
    } else {
      std__deque_int__std__allocator_int______M_pop_front_aux(t678);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiES4_
long std__operator_(struct std___Deque_iterator_int__int____int___* v704, struct std___Deque_iterator_int__int____int___* v705) {
bb706:
  struct std___Deque_iterator_int__int____int___* __x707;
  struct std___Deque_iterator_int__int____int___* __y708;
  long __retval709;
  __x707 = v704;
  __y708 = v705;
  unsigned long r710 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast711 = (long)r710;
  struct std___Deque_iterator_int__int____int___* t712 = __x707;
  int** t713 = t712->_M_node;
  struct std___Deque_iterator_int__int____int___* t714 = __y708;
  int** t715 = t714->_M_node;
  long diff716 = t713 - t715;
  struct std___Deque_iterator_int__int____int___* t717 = __x707;
  int** t718 = t717->_M_node;
  _Bool cast719 = (_Bool)t718;
  long cast720 = (long)cast719;
  long b721 = diff716 - cast720;
  long b722 = cast711 * b721;
  struct std___Deque_iterator_int__int____int___* t723 = __x707;
  int* t724 = t723->_M_cur;
  struct std___Deque_iterator_int__int____int___* t725 = __x707;
  int* t726 = t725->_M_first;
  long diff727 = t724 - t726;
  long b728 = b722 + diff727;
  struct std___Deque_iterator_int__int____int___* t729 = __y708;
  int* t730 = t729->_M_last;
  struct std___Deque_iterator_int__int____int___* t731 = __y708;
  int* t732 = t731->_M_cur;
  long diff733 = t730 - t732;
  long b734 = b728 + diff733;
  __retval709 = b734;
  long t735 = __retval709;
  return t735;
}

// function: _ZNKSt5dequeIiSaIiEE4sizeEv
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* v736) {
bb737:
  struct std__deque_int__std__allocator_int__* this738;
  unsigned long __retval739;
  unsigned long __sz740;
  this738 = v736;
  struct std__deque_int__std__allocator_int__* t741 = this738;
  struct std___Deque_base_int__std__allocator_int__* base742 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t741 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base743 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base742->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base744 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t741 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base745 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base744->_M_impl) + 0);
  long r746 = std__operator_(&base743->_M_finish, &base745->_M_start);
  unsigned long cast747 = (unsigned long)r746;
  __sz740 = cast747;
    unsigned long t748 = __sz740;
    unsigned long r749 = std__deque_int__std__allocator_int_____max_size___const(t741);
    _Bool c750 = ((t748 > r749)) ? 1 : 0;
    if (c750) {
      __builtin_unreachable();
    }
  unsigned long t751 = __sz740;
  __retval739 = t751;
  unsigned long t752 = __retval739;
  return t752;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v753, int v754) {
bb755:
  int __a756;
  int __b757;
  int __retval758;
  __a756 = v753;
  __b757 = v754;
  int t759 = __a756;
  int t760 = __b757;
  int b761 = t759 | t760;
  __retval758 = b761;
  int t762 = __retval758;
  return t762;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v763) {
bb764:
  struct std__basic_ios_char__std__char_traits_char__* this765;
  int __retval766;
  this765 = v763;
  struct std__basic_ios_char__std__char_traits_char__* t767 = this765;
  struct std__ios_base* base768 = (struct std__ios_base*)((char *)t767 + 0);
  int t769 = base768->_M_streambuf_state;
  __retval766 = t769;
  int t770 = __retval766;
  return t770;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v771, int v772) {
bb773:
  struct std__basic_ios_char__std__char_traits_char__* this774;
  int __state775;
  this774 = v771;
  __state775 = v772;
  struct std__basic_ios_char__std__char_traits_char__* t776 = this774;
  int r777 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t776);
  if (__cir_exc_active) {
    return;
  }
  int t778 = __state775;
  int r779 = std__operator__2(r777, t778);
  std__basic_ios_char__std__char_traits_char_____clear(t776, r779);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v780, char* v781) {
bb782:
  char* __c1783;
  char* __c2784;
  _Bool __retval785;
  __c1783 = v780;
  __c2784 = v781;
  char* t786 = __c1783;
  char t787 = *t786;
  int cast788 = (int)t787;
  char* t789 = __c2784;
  char t790 = *t789;
  int cast791 = (int)t790;
  _Bool c792 = ((cast788 == cast791)) ? 1 : 0;
  __retval785 = c792;
  _Bool t793 = __retval785;
  return t793;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v794) {
bb795:
  char* __p796;
  unsigned long __retval797;
  unsigned long __i798;
  __p796 = v794;
  unsigned long c799 = 0;
  __i798 = c799;
    char ref_tmp0800;
    while (1) {
      unsigned long t801 = __i798;
      char* t802 = __p796;
      char* ptr803 = &(t802)[t801];
      char c804 = 0;
      ref_tmp0800 = c804;
      _Bool r805 = __gnu_cxx__char_traits_char___eq(ptr803, &ref_tmp0800);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u806 = !r805;
      if (!u806) break;
      unsigned long t807 = __i798;
      unsigned long u808 = t807 + 1;
      __i798 = u808;
    }
  unsigned long t809 = __i798;
  __retval797 = t809;
  unsigned long t810 = __retval797;
  return t810;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v811) {
bb812:
  char* __s813;
  unsigned long __retval814;
  __s813 = v811;
    _Bool r815 = std____is_constant_evaluated();
    if (r815) {
      char* t816 = __s813;
      unsigned long r817 = __gnu_cxx__char_traits_char___length(t816);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval814 = r817;
      unsigned long t818 = __retval814;
      return t818;
    }
  char* t819 = __s813;
  unsigned long r820 = strlen(t819);
  __retval814 = r820;
  unsigned long t821 = __retval814;
  return t821;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v822, char* v823) {
bb824:
  struct std__basic_ostream_char__std__char_traits_char__* __out825;
  char* __s826;
  struct std__basic_ostream_char__std__char_traits_char__* __retval827;
  __out825 = v822;
  __s826 = v823;
    char* t828 = __s826;
    _Bool cast829 = (_Bool)t828;
    _Bool u830 = !cast829;
    if (u830) {
      struct std__basic_ostream_char__std__char_traits_char__* t831 = __out825;
      void** v832 = (void**)t831;
      void* v833 = *((void**)v832);
      unsigned char* cast834 = (unsigned char*)v833;
      long c835 = -24;
      unsigned char* ptr836 = &(cast834)[c835];
      long* cast837 = (long*)ptr836;
      long t838 = *cast837;
      unsigned char* cast839 = (unsigned char*)t831;
      unsigned char* ptr840 = &(cast839)[t838];
      struct std__basic_ostream_char__std__char_traits_char__* cast841 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr840;
      struct std__basic_ios_char__std__char_traits_char__* cast842 = (struct std__basic_ios_char__std__char_traits_char__*)cast841;
      int t843 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast842, t843);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t844 = __out825;
      char* t845 = __s826;
      char* t846 = __s826;
      unsigned long r847 = std__char_traits_char___length(t846);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast848 = (long)r847;
      struct std__basic_ostream_char__std__char_traits_char__* r849 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t844, t845, cast848);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t850 = __out825;
  __retval827 = t850;
  struct std__basic_ostream_char__std__char_traits_char__* t851 = __retval827;
  return t851;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v852, void* v853) {
bb854:
  struct std__basic_ostream_char__std__char_traits_char__* this855;
  void* __pf856;
  struct std__basic_ostream_char__std__char_traits_char__* __retval857;
  this855 = v852;
  __pf856 = v853;
  struct std__basic_ostream_char__std__char_traits_char__* t858 = this855;
  void* t859 = __pf856;
  struct std__basic_ostream_char__std__char_traits_char__* r860 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t859)(t858);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval857 = r860;
  struct std__basic_ostream_char__std__char_traits_char__* t861 = __retval857;
  return t861;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v862) {
bb863:
  struct std__basic_ostream_char__std__char_traits_char__* __os864;
  struct std__basic_ostream_char__std__char_traits_char__* __retval865;
  __os864 = v862;
  struct std__basic_ostream_char__std__char_traits_char__* t866 = __os864;
  struct std__basic_ostream_char__std__char_traits_char__* r867 = std__ostream__flush(t866);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval865 = r867;
  struct std__basic_ostream_char__std__char_traits_char__* t868 = __retval865;
  return t868;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v869) {
bb870:
  struct std__ctype_char_* __f871;
  struct std__ctype_char_* __retval872;
  __f871 = v869;
    struct std__ctype_char_* t873 = __f871;
    _Bool cast874 = (_Bool)t873;
    _Bool u875 = !cast874;
    if (u875) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t876 = __f871;
  __retval872 = t876;
  struct std__ctype_char_* t877 = __retval872;
  return t877;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v878, char v879) {
bb880:
  struct std__ctype_char_* this881;
  char __c882;
  char __retval883;
  this881 = v878;
  __c882 = v879;
  struct std__ctype_char_* t884 = this881;
    char t885 = t884->_M_widen_ok;
    _Bool cast886 = (_Bool)t885;
    if (cast886) {
      char t887 = __c882;
      unsigned char cast888 = (unsigned char)t887;
      unsigned long cast889 = (unsigned long)cast888;
      char t890 = t884->_M_widen[cast889];
      __retval883 = t890;
      char t891 = __retval883;
      return t891;
    }
  std__ctype_char____M_widen_init___const(t884);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t892 = __c882;
  void** v893 = (void**)t884;
  void* v894 = *((void**)v893);
  char vcall897 = (char)__VERIFIER_virtual_call_char_char(t884, 6, t892);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval883 = vcall897;
  char t898 = __retval883;
  return t898;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v899, char v900) {
bb901:
  struct std__basic_ios_char__std__char_traits_char__* this902;
  char __c903;
  char __retval904;
  this902 = v899;
  __c903 = v900;
  struct std__basic_ios_char__std__char_traits_char__* t905 = this902;
  struct std__ctype_char_* t906 = t905->_M_ctype;
  struct std__ctype_char_* r907 = std__ctype_char__const__std____check_facet_std__ctype_char___(t906);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t908 = __c903;
  char r909 = std__ctype_char___widen_char__const(r907, t908);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval904 = r909;
  char t910 = __retval904;
  return t910;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v911) {
bb912:
  struct std__basic_ostream_char__std__char_traits_char__* __os913;
  struct std__basic_ostream_char__std__char_traits_char__* __retval914;
  __os913 = v911;
  struct std__basic_ostream_char__std__char_traits_char__* t915 = __os913;
  struct std__basic_ostream_char__std__char_traits_char__* t916 = __os913;
  void** v917 = (void**)t916;
  void* v918 = *((void**)v917);
  unsigned char* cast919 = (unsigned char*)v918;
  long c920 = -24;
  unsigned char* ptr921 = &(cast919)[c920];
  long* cast922 = (long*)ptr921;
  long t923 = *cast922;
  unsigned char* cast924 = (unsigned char*)t916;
  unsigned char* ptr925 = &(cast924)[t923];
  struct std__basic_ostream_char__std__char_traits_char__* cast926 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr925;
  struct std__basic_ios_char__std__char_traits_char__* cast927 = (struct std__basic_ios_char__std__char_traits_char__*)cast926;
  char c928 = 10;
  char r929 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast927, c928);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r930 = std__ostream__put(t915, r929);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r931 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r930);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval914 = r931;
  struct std__basic_ostream_char__std__char_traits_char__* t932 = __retval914;
  return t932;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v933) {
bb934:
  struct std__deque_int__std__allocator_int__* this935;
  struct std___Deque_iterator_int__int____int___ agg_tmp0936;
  struct std___Deque_iterator_int__int____int___ agg_tmp1937;
  this935 = v933;
  struct std__deque_int__std__allocator_int__* t938 = this935;
    struct std___Deque_iterator_int__int____int___ r939 = std__deque_int__std__allocator_int_____begin(t938);
    agg_tmp0936 = r939;
    struct std___Deque_iterator_int__int____int___ r940 = std__deque_int__std__allocator_int_____end(t938);
    agg_tmp1937 = r940;
    struct std___Deque_base_int__std__allocator_int__* base941 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t938 + 0);
    struct std__allocator_int_* r942 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base941);
    struct std___Deque_iterator_int__int____int___ t943 = agg_tmp0936;
    struct std___Deque_iterator_int__int____int___ t944 = agg_tmp1937;
    std__deque_int__std__allocator_int______M_destroy_data(t938, t943, t944, r942);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base945 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t938 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base945);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base946 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t938 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base946);
  }
  return;
}

// function: main
int main() {
bb947:
  int __retval948;
  struct std__deque_int__std__allocator_int__ mydeque949;
  int sum950;
  int c951 = 0;
  __retval948 = c951;
  std__deque_int__std__allocator_int_____deque(&mydeque949);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    int c952 = 0;
    sum950 = c952;
      int i953;
      int c954 = 1;
      i953 = c954;
      while (1) {
        int t956 = i953;
        int c957 = 10;
        _Bool c958 = ((t956 <= c957)) ? 1 : 0;
        if (!c958) break;
        std__deque_int__std__allocator_int_____push_back(&mydeque949, &i953);
        if (__cir_exc_active) {
          {
            std__deque_int__std__allocator_int______deque(&mydeque949);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step955: ;
        int t959 = i953;
        int u960 = t959 + 1;
        i953 = u960;
      }
      while (1) {
        _Bool r961 = std__deque_int__std__allocator_int_____empty___const(&mydeque949);
        _Bool u962 = !r961;
        if (!u962) break;
          int* r963 = std__deque_int__std__allocator_int_____front(&mydeque949);
          int t964 = *r963;
          int t965 = sum950;
          int b966 = t965 + t964;
          sum950 = b966;
          std__deque_int__std__allocator_int_____pop_front(&mydeque949);
      }
    _Bool r967 = std__deque_int__std__allocator_int_____empty___const(&mydeque949);
    _Bool u968 = !r967;
    if (u968) {
    } else {
      char* cast969 = (char*)&(_str);
      char* c970 = _str_1;
      unsigned int c971 = 27;
      char* cast972 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast969, c970, c971, cast972);
    }
    unsigned long r973 = std__deque_int__std__allocator_int_____size___const(&mydeque949);
    unsigned long c974 = 0;
    _Bool c975 = ((r973 != c974)) ? 1 : 0;
    if (c975) {
    } else {
      char* cast976 = (char*)&(_str_2);
      char* c977 = _str_1;
      unsigned int c978 = 28;
      char* cast979 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast976, c977, c978, cast979);
    }
    char* cast980 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r981 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast980);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque949);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t982 = sum950;
    struct std__basic_ostream_char__std__char_traits_char__* r983 = std__ostream__operator__(r981, t982);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque949);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r984 = std__ostream__operator___std__ostream_____(r983, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque949);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c985 = 0;
    __retval948 = c985;
    int t986 = __retval948;
    int ret_val987 = t986;
    {
      std__deque_int__std__allocator_int______deque(&mydeque949);
    }
    return ret_val987;
  int t988 = __retval948;
  return t988;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v989) {
bb990:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this991;
  this991 = v989;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t992 = this991;
  struct std__allocator_int_* base993 = (struct std__allocator_int_*)((char *)t992 + 0);
  std__allocator_int___allocator(base993);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base994 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t992 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base994);
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v995) {
bb996:
  unsigned long __size997;
  unsigned long __retval998;
  __size997 = v995;
  unsigned long t999 = __size997;
  unsigned long c1000 = 512;
  _Bool c1001 = ((t999 < c1000)) ? 1 : 0;
  unsigned long ternary1002;
  if (c1001) {
    unsigned long c1003 = 512;
    unsigned long t1004 = __size997;
    unsigned long b1005 = c1003 / t1004;
    ternary1002 = (unsigned long)b1005;
  } else {
    unsigned long c1006 = 1;
    ternary1002 = (unsigned long)c1006;
  }
  __retval998 = ternary1002;
  unsigned long t1007 = __retval998;
  return t1007;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v1008, unsigned long* v1009) {
bb1010:
  unsigned long* __a1011;
  unsigned long* __b1012;
  unsigned long* __retval1013;
  __a1011 = v1008;
  __b1012 = v1009;
    unsigned long* t1014 = __a1011;
    unsigned long t1015 = *t1014;
    unsigned long* t1016 = __b1012;
    unsigned long t1017 = *t1016;
    _Bool c1018 = ((t1015 < t1017)) ? 1 : 0;
    if (c1018) {
      unsigned long* t1019 = __b1012;
      __retval1013 = t1019;
      unsigned long* t1020 = __retval1013;
      return t1020;
    }
  unsigned long* t1021 = __a1011;
  __retval1013 = t1021;
  unsigned long* t1022 = __retval1013;
  return t1022;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1023) {
bb1024:
  struct std___Deque_base_int__std__allocator_int__* this1025;
  struct std__allocator_int_* __retval1026;
  this1025 = v1023;
  struct std___Deque_base_int__std__allocator_int__* t1027 = this1025;
  struct std__allocator_int_* base1028 = (struct std__allocator_int_*)((char *)&(t1027->_M_impl) + 0);
  __retval1026 = base1028;
  struct std__allocator_int_* t1029 = __retval1026;
  return t1029;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v1030, struct std__allocator_int_* v1031) {
bb1032:
  struct std__allocator_int___* this1033;
  struct std__allocator_int_* unnamed1034;
  this1033 = v1030;
  unnamed1034 = v1031;
  struct std__allocator_int___* t1035 = this1033;
  struct std____new_allocator_int___* base1036 = (struct std____new_allocator_int___*)((char *)t1035 + 0);
  std____new_allocator_int______new_allocator(base1036);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1037) {
bb1038:
  struct std___Deque_base_int__std__allocator_int__* this1039;
  struct std__allocator_int___ __retval1040;
  this1039 = v1037;
  struct std___Deque_base_int__std__allocator_int__* t1041 = this1039;
  struct std__allocator_int_* r1042 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t1041);
  std__allocator_int____allocator_int_(&__retval1040, r1042);
  struct std__allocator_int___ t1043 = __retval1040;
  return t1043;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1044:
  _Bool __retval1045;
    _Bool c1046 = 0;
    __retval1045 = c1046;
    _Bool t1047 = __retval1045;
    return t1047;
  abort();
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v1048) {
bb1049:
  struct std____new_allocator_int___* this1050;
  unsigned long __retval1051;
  this1050 = v1048;
  struct std____new_allocator_int___* t1052 = this1050;
  unsigned long c1053 = 9223372036854775807;
  unsigned long c1054 = 8;
  unsigned long b1055 = c1053 / c1054;
  __retval1051 = b1055;
  unsigned long t1056 = __retval1051;
  return t1056;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v1057, unsigned long v1058, void* v1059) {
bb1060:
  struct std____new_allocator_int___* this1061;
  unsigned long __n1062;
  void* unnamed1063;
  int** __retval1064;
  this1061 = v1057;
  __n1062 = v1058;
  unnamed1063 = v1059;
  struct std____new_allocator_int___* t1065 = this1061;
    unsigned long t1066 = __n1062;
    unsigned long r1067 = std____new_allocator_int_____M_max_size___const(t1065);
    _Bool c1068 = ((t1066 > r1067)) ? 1 : 0;
    if (c1068) {
        unsigned long t1069 = __n1062;
        unsigned long c1070 = -1;
        unsigned long c1071 = 8;
        unsigned long b1072 = c1070 / c1071;
        _Bool c1073 = ((t1069 > b1072)) ? 1 : 0;
        if (c1073) {
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
    unsigned long c1074 = 8;
    unsigned long c1075 = 16;
    _Bool c1076 = ((c1074 > c1075)) ? 1 : 0;
    if (c1076) {
      unsigned long __al1077;
      unsigned long c1078 = 8;
      __al1077 = c1078;
      unsigned long t1079 = __n1062;
      unsigned long c1080 = 8;
      unsigned long b1081 = t1079 * c1080;
      unsigned long t1082 = __al1077;
      void* r1083 = operator_new_2(b1081, t1082);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1084 = (int**)r1083;
      __retval1064 = cast1084;
      int** t1085 = __retval1064;
      return t1085;
    }
  unsigned long t1086 = __n1062;
  unsigned long c1087 = 8;
  unsigned long b1088 = t1086 * c1087;
  void* r1089 = operator_new(b1088);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast1090 = (int**)r1089;
  __retval1064 = cast1090;
  int** t1091 = __retval1064;
  return t1091;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v1092, unsigned long v1093) {
bb1094:
  struct std__allocator_int___* this1095;
  unsigned long __n1096;
  int** __retval1097;
  this1095 = v1092;
  __n1096 = v1093;
  struct std__allocator_int___* t1098 = this1095;
    _Bool r1099 = std____is_constant_evaluated();
    if (r1099) {
        unsigned long t1100 = __n1096;
        unsigned long c1101 = 8;
        unsigned long ovr1102;
        _Bool ovf1103 = __builtin_mul_overflow(t1100, c1101, &ovr1102);
        __n1096 = ovr1102;
        if (ovf1103) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1104 = __n1096;
      void* r1105 = operator_new(t1104);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1106 = (int**)r1105;
      __retval1097 = cast1106;
      int** t1107 = __retval1097;
      return t1107;
    }
  struct std____new_allocator_int___* base1108 = (struct std____new_allocator_int___*)((char *)t1098 + 0);
  unsigned long t1109 = __n1096;
  void* c1110 = ((void*)0);
  int** r1111 = std____new_allocator_int____allocate(base1108, t1109, c1110);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1097 = r1111;
  int** t1112 = __retval1097;
  return t1112;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v1113, unsigned long v1114) {
bb1115:
  struct std__allocator_int___* __a1116;
  unsigned long __n1117;
  int** __retval1118;
  __a1116 = v1113;
  __n1117 = v1114;
  struct std__allocator_int___* t1119 = __a1116;
  unsigned long t1120 = __n1117;
  int** r1121 = std__allocator_int____allocate(t1119, t1120);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1118 = r1121;
  int** t1122 = __retval1118;
  return t1122;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v1123, unsigned long v1124) {
bb1125:
  struct std___Deque_base_int__std__allocator_int__* this1126;
  unsigned long __n1127;
  int** __retval1128;
  struct std__allocator_int___ __map_alloc1129;
  this1126 = v1123;
  __n1127 = v1124;
  struct std___Deque_base_int__std__allocator_int__* t1130 = this1126;
  struct std__allocator_int___ r1131 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1130);
  __map_alloc1129 = r1131;
  unsigned long t1132 = __n1127;
  int** r1133 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc1129, t1132);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1128 = r1133;
  int** t1134 = __retval1128;
  return t1134;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1135) {
bb1136:
  struct std____new_allocator_int_* this1137;
  unsigned long __retval1138;
  this1137 = v1135;
  struct std____new_allocator_int_* t1139 = this1137;
  unsigned long c1140 = 9223372036854775807;
  unsigned long c1141 = 4;
  unsigned long b1142 = c1140 / c1141;
  __retval1138 = b1142;
  unsigned long t1143 = __retval1138;
  return t1143;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1144, unsigned long v1145, void* v1146) {
bb1147:
  struct std____new_allocator_int_* this1148;
  unsigned long __n1149;
  void* unnamed1150;
  int* __retval1151;
  this1148 = v1144;
  __n1149 = v1145;
  unnamed1150 = v1146;
  struct std____new_allocator_int_* t1152 = this1148;
    unsigned long t1153 = __n1149;
    unsigned long r1154 = std____new_allocator_int____M_max_size___const(t1152);
    _Bool c1155 = ((t1153 > r1154)) ? 1 : 0;
    if (c1155) {
        unsigned long t1156 = __n1149;
        unsigned long c1157 = -1;
        unsigned long c1158 = 4;
        unsigned long b1159 = c1157 / c1158;
        _Bool c1160 = ((t1156 > b1159)) ? 1 : 0;
        if (c1160) {
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
    unsigned long c1161 = 4;
    unsigned long c1162 = 16;
    _Bool c1163 = ((c1161 > c1162)) ? 1 : 0;
    if (c1163) {
      unsigned long __al1164;
      unsigned long c1165 = 4;
      __al1164 = c1165;
      unsigned long t1166 = __n1149;
      unsigned long c1167 = 4;
      unsigned long b1168 = t1166 * c1167;
      unsigned long t1169 = __al1164;
      void* r1170 = operator_new_2(b1168, t1169);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1171 = (int*)r1170;
      __retval1151 = cast1171;
      int* t1172 = __retval1151;
      return t1172;
    }
  unsigned long t1173 = __n1149;
  unsigned long c1174 = 4;
  unsigned long b1175 = t1173 * c1174;
  void* r1176 = operator_new(b1175);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast1177 = (int*)r1176;
  __retval1151 = cast1177;
  int* t1178 = __retval1151;
  return t1178;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1179, unsigned long v1180) {
bb1181:
  struct std__allocator_int_* this1182;
  unsigned long __n1183;
  int* __retval1184;
  this1182 = v1179;
  __n1183 = v1180;
  struct std__allocator_int_* t1185 = this1182;
    _Bool r1186 = std____is_constant_evaluated();
    if (r1186) {
        unsigned long t1187 = __n1183;
        unsigned long c1188 = 4;
        unsigned long ovr1189;
        _Bool ovf1190 = __builtin_mul_overflow(t1187, c1188, &ovr1189);
        __n1183 = ovr1189;
        if (ovf1190) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1191 = __n1183;
      void* r1192 = operator_new(t1191);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1193 = (int*)r1192;
      __retval1184 = cast1193;
      int* t1194 = __retval1184;
      return t1194;
    }
  struct std____new_allocator_int_* base1195 = (struct std____new_allocator_int_*)((char *)t1185 + 0);
  unsigned long t1196 = __n1183;
  void* c1197 = ((void*)0);
  int* r1198 = std____new_allocator_int___allocate(base1195, t1196, c1197);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1184 = r1198;
  int* t1199 = __retval1184;
  return t1199;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1200, unsigned long v1201) {
bb1202:
  struct std__allocator_int_* __a1203;
  unsigned long __n1204;
  int* __retval1205;
  __a1203 = v1200;
  __n1204 = v1201;
  struct std__allocator_int_* t1206 = __a1203;
  unsigned long t1207 = __n1204;
  int* r1208 = std__allocator_int___allocate(t1206, t1207);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1205 = r1208;
  int* t1209 = __retval1205;
  return t1209;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v1210) {
bb1211:
  struct std___Deque_base_int__std__allocator_int__* this1212;
  int* __retval1213;
  this1212 = v1210;
  struct std___Deque_base_int__std__allocator_int__* t1214 = this1212;
  struct std__allocator_int_* base1215 = (struct std__allocator_int_*)((char *)&(t1214->_M_impl) + 0);
  unsigned long c1216 = 4;
  unsigned long r1217 = std____deque_buf_size(c1216);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r1218 = std__allocator_traits_std__allocator_int_____allocate(base1215, r1217);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1213 = r1218;
  int* t1219 = __retval1213;
  return t1219;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1220, int* v1221, unsigned long v1222) {
bb1223:
  struct std____new_allocator_int_* this1224;
  int* __p1225;
  unsigned long __n1226;
  this1224 = v1220;
  __p1225 = v1221;
  __n1226 = v1222;
  struct std____new_allocator_int_* t1227 = this1224;
    unsigned long c1228 = 4;
    unsigned long c1229 = 16;
    _Bool c1230 = ((c1228 > c1229)) ? 1 : 0;
    if (c1230) {
      int* t1231 = __p1225;
      void* cast1232 = (void*)t1231;
      unsigned long t1233 = __n1226;
      unsigned long c1234 = 4;
      unsigned long b1235 = t1233 * c1234;
      unsigned long c1236 = 4;
      operator_delete_3(cast1232, b1235, c1236);
      return;
    }
  int* t1237 = __p1225;
  void* cast1238 = (void*)t1237;
  unsigned long t1239 = __n1226;
  unsigned long c1240 = 4;
  unsigned long b1241 = t1239 * c1240;
  operator_delete_2(cast1238, b1241);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1242, int* v1243, unsigned long v1244) {
bb1245:
  struct std__allocator_int_* this1246;
  int* __p1247;
  unsigned long __n1248;
  this1246 = v1242;
  __p1247 = v1243;
  __n1248 = v1244;
  struct std__allocator_int_* t1249 = this1246;
    _Bool r1250 = std____is_constant_evaluated();
    if (r1250) {
      int* t1251 = __p1247;
      void* cast1252 = (void*)t1251;
      operator_delete(cast1252);
      return;
    }
  struct std____new_allocator_int_* base1253 = (struct std____new_allocator_int_*)((char *)t1249 + 0);
  int* t1254 = __p1247;
  unsigned long t1255 = __n1248;
  std____new_allocator_int___deallocate(base1253, t1254, t1255);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1256, int* v1257, unsigned long v1258) {
bb1259:
  struct std__allocator_int_* __a1260;
  int* __p1261;
  unsigned long __n1262;
  __a1260 = v1256;
  __p1261 = v1257;
  __n1262 = v1258;
  struct std__allocator_int_* t1263 = __a1260;
  int* t1264 = __p1261;
  unsigned long t1265 = __n1262;
  std__allocator_int___deallocate(t1263, t1264, t1265);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v1266, int* v1267) {
bb1268:
  struct std___Deque_base_int__std__allocator_int__* this1269;
  int* __p1270;
  this1269 = v1266;
  __p1270 = v1267;
  struct std___Deque_base_int__std__allocator_int__* t1271 = this1269;
  struct std__allocator_int_* base1272 = (struct std__allocator_int_*)((char *)&(t1271->_M_impl) + 0);
  int* t1273 = __p1270;
  unsigned long c1274 = 4;
  unsigned long r1275 = std____deque_buf_size(c1274);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base1272, t1273, r1275);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v1276, int** v1277, int** v1278) {
bb1279:
  struct std___Deque_base_int__std__allocator_int__* this1280;
  int** __nstart1281;
  int** __nfinish1282;
  this1280 = v1276;
  __nstart1281 = v1277;
  __nfinish1282 = v1278;
  struct std___Deque_base_int__std__allocator_int__* t1283 = this1280;
    int** __n1284;
    int** t1285 = __nstart1281;
    __n1284 = t1285;
    while (1) {
      int** t1287 = __n1284;
      int** t1288 = __nfinish1282;
      _Bool c1289 = ((t1287 < t1288)) ? 1 : 0;
      if (!c1289) break;
      int** t1290 = __n1284;
      int* t1291 = *t1290;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t1283, t1291);
    for_step1286: ;
      int** t1292 = __n1284;
      int c1293 = 1;
      int** ptr1294 = &(t1292)[c1293];
      __n1284 = ptr1294;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v1295, int** v1296, int** v1297) {
bb1298:
  struct std___Deque_base_int__std__allocator_int__* this1299;
  int** __nstart1300;
  int** __nfinish1301;
  int** __cur1302;
  this1299 = v1295;
  __nstart1300 = v1296;
  __nfinish1301 = v1297;
  struct std___Deque_base_int__std__allocator_int__* t1303 = this1299;
        int** t1305 = __nstart1300;
        __cur1302 = t1305;
        while (1) {
          int** t1307 = __cur1302;
          int** t1308 = __nfinish1301;
          _Bool c1309 = ((t1307 < t1308)) ? 1 : 0;
          if (!c1309) break;
          int* r1310 = std___Deque_base_int__std__allocator_int______M_allocate_node(t1303);
          if (__cir_exc_active) {
            goto cir_try_dispatch1304;
          }
          int** t1311 = __cur1302;
          *t1311 = r1310;
        for_step1306: ;
          int** t1312 = __cur1302;
          int c1313 = 1;
          int** ptr1314 = &(t1312)[c1313];
          __cur1302 = ptr1314;
        }
    cir_try_dispatch1304: ;
    if (__cir_exc_active) {
    {
      int ca_tok1315 = 0;
      void* ca_exn1316 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t1317 = __nstart1300;
        int** t1318 = __cur1302;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1303, t1317, t1318);
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
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v1319, int** v1320, unsigned long v1321) {
bb1322:
  struct std____new_allocator_int___* this1323;
  int** __p1324;
  unsigned long __n1325;
  this1323 = v1319;
  __p1324 = v1320;
  __n1325 = v1321;
  struct std____new_allocator_int___* t1326 = this1323;
    unsigned long c1327 = 8;
    unsigned long c1328 = 16;
    _Bool c1329 = ((c1327 > c1328)) ? 1 : 0;
    if (c1329) {
      int** t1330 = __p1324;
      void* cast1331 = (void*)t1330;
      unsigned long t1332 = __n1325;
      unsigned long c1333 = 8;
      unsigned long b1334 = t1332 * c1333;
      unsigned long c1335 = 8;
      operator_delete_3(cast1331, b1334, c1335);
      return;
    }
  int** t1336 = __p1324;
  void* cast1337 = (void*)t1336;
  unsigned long t1338 = __n1325;
  unsigned long c1339 = 8;
  unsigned long b1340 = t1338 * c1339;
  operator_delete_2(cast1337, b1340);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v1341, int** v1342, unsigned long v1343) {
bb1344:
  struct std__allocator_int___* this1345;
  int** __p1346;
  unsigned long __n1347;
  this1345 = v1341;
  __p1346 = v1342;
  __n1347 = v1343;
  struct std__allocator_int___* t1348 = this1345;
    _Bool r1349 = std____is_constant_evaluated();
    if (r1349) {
      int** t1350 = __p1346;
      void* cast1351 = (void*)t1350;
      operator_delete(cast1351);
      return;
    }
  struct std____new_allocator_int___* base1352 = (struct std____new_allocator_int___*)((char *)t1348 + 0);
  int** t1353 = __p1346;
  unsigned long t1354 = __n1347;
  std____new_allocator_int____deallocate(base1352, t1353, t1354);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v1355, int** v1356, unsigned long v1357) {
bb1358:
  struct std__allocator_int___* __a1359;
  int** __p1360;
  unsigned long __n1361;
  __a1359 = v1355;
  __p1360 = v1356;
  __n1361 = v1357;
  struct std__allocator_int___* t1362 = __a1359;
  int** t1363 = __p1360;
  unsigned long t1364 = __n1361;
  std__allocator_int____deallocate(t1362, t1363, t1364);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v1365, int** v1366, unsigned long v1367) {
bb1368:
  struct std___Deque_base_int__std__allocator_int__* this1369;
  int** __p1370;
  unsigned long __n1371;
  struct std__allocator_int___ __map_alloc1372;
  this1369 = v1365;
  __p1370 = v1366;
  __n1371 = v1367;
  struct std___Deque_base_int__std__allocator_int__* t1373 = this1369;
  struct std__allocator_int___ r1374 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1373);
  __map_alloc1372 = r1374;
  int** t1375 = __p1370;
  unsigned long t1376 = __n1371;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc1372, t1375, t1376);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size() {
bb1377:
  unsigned long __retval1378;
  unsigned long c1379 = 4;
  unsigned long r1380 = std____deque_buf_size(c1379);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1378 = r1380;
  unsigned long t1381 = __retval1378;
  return t1381;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v1382, int** v1383) {
bb1384:
  struct std___Deque_iterator_int__int____int___* this1385;
  int** __new_node1386;
  this1385 = v1382;
  __new_node1386 = v1383;
  struct std___Deque_iterator_int__int____int___* t1387 = this1385;
  int** t1388 = __new_node1386;
  t1387->_M_node = t1388;
  int** t1389 = __new_node1386;
  int* t1390 = *t1389;
  t1387->_M_first = t1390;
  int* t1391 = t1387->_M_first;
  unsigned long r1392 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1393 = (long)r1392;
  int* ptr1394 = &(t1391)[cast1393];
  t1387->_M_last = ptr1394;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v1395, unsigned long v1396) {
bb1397:
  struct std___Deque_base_int__std__allocator_int__* this1398;
  unsigned long __num_elements1399;
  unsigned long __num_nodes1400;
  unsigned long ref_tmp01401;
  unsigned long ref_tmp11402;
  int** __nstart1403;
  int** __nfinish1404;
  this1398 = v1395;
  __num_elements1399 = v1396;
  struct std___Deque_base_int__std__allocator_int__* t1405 = this1398;
  unsigned long t1406 = __num_elements1399;
  unsigned long c1407 = 4;
  unsigned long r1408 = std____deque_buf_size(c1407);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1409 = t1406 / r1408;
  unsigned long c1410 = 1;
  unsigned long b1411 = b1409 + c1410;
  __num_nodes1400 = b1411;
  unsigned long c1412 = 8;
  ref_tmp01401 = c1412;
  unsigned long t1413 = __num_nodes1400;
  unsigned long c1414 = 2;
  unsigned long b1415 = t1413 + c1414;
  ref_tmp11402 = b1415;
  unsigned long* r1416 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01401, &ref_tmp11402);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1417 = *r1416;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1418 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1405->_M_impl) + 0);
  base1418->_M_map_size = t1417;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1419 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1405->_M_impl) + 0);
  unsigned long t1420 = base1419->_M_map_size;
  int** r1421 = std___Deque_base_int__std__allocator_int______M_allocate_map(t1405, t1420);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1422 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1405->_M_impl) + 0);
  base1422->_M_map = r1421;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1423 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1405->_M_impl) + 0);
  int** t1424 = base1423->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1425 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1405->_M_impl) + 0);
  unsigned long t1426 = base1425->_M_map_size;
  unsigned long t1427 = __num_nodes1400;
  unsigned long b1428 = t1426 - t1427;
  unsigned long c1429 = 2;
  unsigned long b1430 = b1428 / c1429;
  int** ptr1431 = &(t1424)[b1430];
  __nstart1403 = ptr1431;
  int** t1432 = __nstart1403;
  unsigned long t1433 = __num_nodes1400;
  int** ptr1434 = &(t1432)[t1433];
  __nfinish1404 = ptr1434;
      int** t1436 = __nstart1403;
      int** t1437 = __nfinish1404;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t1405, t1436, t1437);
      if (__cir_exc_active) {
        goto cir_try_dispatch1435;
      }
    cir_try_dispatch1435: ;
    if (__cir_exc_active) {
    {
      int ca_tok1438 = 0;
      void* ca_exn1439 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1440 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1405->_M_impl) + 0);
        int** t1441 = base1440->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1442 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1405->_M_impl) + 0);
        unsigned long t1443 = base1442->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1405, t1441, t1443);
        int** c1444 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1445 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1405->_M_impl) + 0);
        base1445->_M_map = c1444;
        unsigned long c1446 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1447 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1405->_M_impl) + 0);
        base1447->_M_map_size = c1446;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1448 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1405->_M_impl) + 0);
  int** t1449 = __nstart1403;
  std___Deque_iterator_int__int___int_____M_set_node(&base1448->_M_start, t1449);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1450 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1405->_M_impl) + 0);
  int** t1451 = __nfinish1404;
  int c1452 = -1;
  int** ptr1453 = &(t1451)[c1452];
  std___Deque_iterator_int__int___int_____M_set_node(&base1450->_M_finish, ptr1453);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1454 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1405->_M_impl) + 0);
  int* t1455 = base1454->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1456 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1405->_M_impl) + 0);
  base1456->_M_start._M_cur = t1455;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1457 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1405->_M_impl) + 0);
  int* t1458 = base1457->_M_finish._M_first;
  unsigned long t1459 = __num_elements1399;
  unsigned long c1460 = 4;
  unsigned long r1461 = std____deque_buf_size(c1460);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1462 = t1459 % r1461;
  int* ptr1463 = &(t1458)[b1462];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1464 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1405->_M_impl) + 0);
  base1464->_M_finish._M_cur = ptr1463;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1465) {
bb1466:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1467;
  this1467 = v1465;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1468 = this1467;
  {
    struct std__allocator_int_* base1469 = (struct std__allocator_int_*)((char *)t1468 + 0);
    std__allocator_int____allocator(base1469);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1470) {
bb1471:
  struct std___Deque_base_int__std__allocator_int__* this1472;
  this1472 = v1470;
  struct std___Deque_base_int__std__allocator_int__* t1473 = this1472;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1473->_M_impl);
    unsigned long c1474 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1473, c1474);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1473->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1475) {
bb1476:
  struct std___Deque_base_int__std__allocator_int__* this1477;
  this1477 = v1475;
  struct std___Deque_base_int__std__allocator_int__* t1478 = this1477;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1479 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1478->_M_impl) + 0);
      int** t1480 = base1479->_M_map;
      _Bool cast1481 = (_Bool)t1480;
      if (cast1481) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1482 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1478->_M_impl) + 0);
        int** t1483 = base1482->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1484 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1478->_M_impl) + 0);
        int** t1485 = base1484->_M_finish._M_node;
        int c1486 = 1;
        int** ptr1487 = &(t1485)[c1486];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1478, t1483, ptr1487);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1488 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1478->_M_impl) + 0);
        int** t1489 = base1488->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1490 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1478->_M_impl) + 0);
        unsigned long t1491 = base1490->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1478, t1489, t1491);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1478->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1492) {
bb1493:
  struct std____new_allocator_int_* this1494;
  this1494 = v1492;
  struct std____new_allocator_int_* t1495 = this1494;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1496) {
bb1497:
  struct std__allocator_int_* this1498;
  this1498 = v1496;
  struct std__allocator_int_* t1499 = this1498;
  struct std____new_allocator_int_* base1500 = (struct std____new_allocator_int_*)((char *)t1499 + 0);
  std____new_allocator_int_____new_allocator(base1500);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1501) {
bb1502:
  struct std___Deque_iterator_int__int____int___* this1503;
  this1503 = v1501;
  struct std___Deque_iterator_int__int____int___* t1504 = this1503;
  int* c1505 = ((void*)0);
  t1504->_M_cur = c1505;
  int* c1506 = ((void*)0);
  t1504->_M_first = c1506;
  int* c1507 = ((void*)0);
  t1504->_M_last = c1507;
  int** c1508 = ((void*)0);
  t1504->_M_node = c1508;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1509) {
bb1510:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1511;
  this1511 = v1509;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1512 = this1511;
  int** c1513 = ((void*)0);
  t1512->_M_map = c1513;
  unsigned long c1514 = 0;
  t1512->_M_map_size = c1514;
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1512->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1512->_M_finish);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1515) {
bb1516:
  struct std__allocator_int_* this1517;
  this1517 = v1515;
  struct std__allocator_int_* t1518 = this1517;
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1519) {
bb1520:
  struct std____new_allocator_int___* this1521;
  this1521 = v1519;
  struct std____new_allocator_int___* t1522 = this1521;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1523) {
bb1524:
  int* __location1525;
  __location1525 = v1523;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1526, int* v1527) {
bb1528:
  int* __first1529;
  int* __last1530;
  __first1529 = v1526;
  __last1530 = v1527;
      _Bool r1531 = std____is_constant_evaluated();
      if (r1531) {
          while (1) {
            int* t1533 = __first1529;
            int* t1534 = __last1530;
            _Bool c1535 = ((t1533 != t1534)) ? 1 : 0;
            if (!c1535) break;
            int* t1536 = __first1529;
            void_std__destroy_at_int_(t1536);
            if (__cir_exc_active) {
              return;
            }
          for_step1532: ;
            int* t1537 = __first1529;
            int c1538 = 1;
            int* ptr1539 = &(t1537)[c1538];
            __first1529 = ptr1539;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1540, int* v1541, struct std__allocator_int_* v1542) {
bb1543:
  int* __first1544;
  int* __last1545;
  struct std__allocator_int_* unnamed1546;
  __first1544 = v1540;
  __last1545 = v1541;
  unnamed1546 = v1542;
  int* t1547 = __first1544;
  int* t1548 = __last1545;
  void_std___Destroy_int__(t1547, t1548);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb1549:
  unsigned long __retval1550;
  unsigned long c1551 = 4;
  unsigned long r1552 = std____deque_buf_size(c1551);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1550 = r1552;
  unsigned long t1553 = __retval1550;
  return t1553;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v1554, struct std___Deque_iterator_int__int____int___ v1555, struct std___Deque_iterator_int__int____int___ v1556) {
bb1557:
  struct std__deque_int__std__allocator_int__* this1558;
  struct std___Deque_iterator_int__int____int___ __first1559;
  struct std___Deque_iterator_int__int____int___ __last1560;
  this1558 = v1554;
  __first1559 = v1555;
  __last1560 = v1556;
  struct std__deque_int__std__allocator_int__* t1561 = this1558;
    int** __node1562;
    int** t1563 = __first1559._M_node;
    int c1564 = 1;
    int** ptr1565 = &(t1563)[c1564];
    __node1562 = ptr1565;
    while (1) {
      int** t1567 = __node1562;
      int** t1568 = __last1560._M_node;
      _Bool c1569 = ((t1567 < t1568)) ? 1 : 0;
      if (!c1569) break;
      int** t1570 = __node1562;
      int* t1571 = *t1570;
      int** t1572 = __node1562;
      int* t1573 = *t1572;
      unsigned long r1574 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr1575 = &(t1573)[r1574];
      struct std___Deque_base_int__std__allocator_int__* base1576 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1561 + 0);
      struct std__allocator_int_* r1577 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1576);
      void_std___Destroy_int___int_(t1571, ptr1575, r1577);
      if (__cir_exc_active) {
        return;
      }
    for_step1566: ;
      int** t1578 = __node1562;
      int c1579 = 1;
      int** ptr1580 = &(t1578)[c1579];
      __node1562 = ptr1580;
    }
    int** t1581 = __first1559._M_node;
    int** t1582 = __last1560._M_node;
    _Bool c1583 = ((t1581 != t1582)) ? 1 : 0;
    if (c1583) {
      int* t1584 = __first1559._M_cur;
      int* t1585 = __first1559._M_last;
      struct std___Deque_base_int__std__allocator_int__* base1586 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1561 + 0);
      struct std__allocator_int_* r1587 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1586);
      void_std___Destroy_int___int_(t1584, t1585, r1587);
      if (__cir_exc_active) {
        return;
      }
      int* t1588 = __last1560._M_first;
      int* t1589 = __last1560._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1590 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1561 + 0);
      struct std__allocator_int_* r1591 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1590);
      void_std___Destroy_int___int_(t1588, t1589, r1591);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t1592 = __first1559._M_cur;
      int* t1593 = __last1560._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1594 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1561 + 0);
      struct std__allocator_int_* r1595 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1594);
      void_std___Destroy_int___int_(t1592, t1593, r1595);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v1596, struct std___Deque_iterator_int__int____int___* v1597) {
bb1598:
  struct std___Deque_iterator_int__int____int___* this1599;
  struct std___Deque_iterator_int__int____int___* __x1600;
  this1599 = v1596;
  __x1600 = v1597;
  struct std___Deque_iterator_int__int____int___* t1601 = this1599;
  struct std___Deque_iterator_int__int____int___* t1602 = __x1600;
  int* t1603 = t1602->_M_cur;
  t1601->_M_cur = t1603;
  struct std___Deque_iterator_int__int____int___* t1604 = __x1600;
  int* t1605 = t1604->_M_first;
  t1601->_M_first = t1605;
  struct std___Deque_iterator_int__int____int___* t1606 = __x1600;
  int* t1607 = t1606->_M_last;
  t1601->_M_last = t1607;
  struct std___Deque_iterator_int__int____int___* t1608 = __x1600;
  int** t1609 = t1608->_M_node;
  t1601->_M_node = t1609;
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v1610, struct std___Deque_iterator_int__int____int___ v1611, struct std___Deque_iterator_int__int____int___ v1612, struct std__allocator_int_* v1613) {
bb1614:
  struct std__deque_int__std__allocator_int__* this1615;
  struct std___Deque_iterator_int__int____int___ __first1616;
  struct std___Deque_iterator_int__int____int___ __last1617;
  struct std__allocator_int_* unnamed1618;
  this1615 = v1610;
  __first1616 = v1611;
  __last1617 = v1612;
  unnamed1618 = v1613;
  struct std__deque_int__std__allocator_int__* t1619 = this1615;
    _Bool c1620 = 0;
    if (c1620) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01621;
      struct std___Deque_iterator_int__int____int___ agg_tmp11622;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01621, &__first1616);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11622, &__last1617);
      struct std___Deque_iterator_int__int____int___ t1623 = agg_tmp01621;
      struct std___Deque_iterator_int__int____int___ t1624 = agg_tmp11622;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t1619, t1623, t1624);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v1625) {
bb1626:
  struct std__deque_int__std__allocator_int__* this1627;
  struct std___Deque_iterator_int__int____int___ __retval1628;
  this1627 = v1625;
  struct std__deque_int__std__allocator_int__* t1629 = this1627;
  struct std___Deque_base_int__std__allocator_int__* base1630 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1629 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1631 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1630->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1628, &base1631->_M_start);
  struct std___Deque_iterator_int__int____int___ t1632 = __retval1628;
  return t1632;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v1633) {
bb1634:
  struct std__deque_int__std__allocator_int__* this1635;
  struct std___Deque_iterator_int__int____int___ __retval1636;
  this1635 = v1633;
  struct std__deque_int__std__allocator_int__* t1637 = this1635;
  struct std___Deque_base_int__std__allocator_int__* base1638 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1637 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1639 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1638->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1636, &base1639->_M_finish);
  struct std___Deque_iterator_int__int____int___ t1640 = __retval1636;
  return t1640;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v1641) {
bb1642:
  struct std___Deque_base_int__std__allocator_int__* this1643;
  struct std__allocator_int_* __retval1644;
  this1643 = v1641;
  struct std___Deque_base_int__std__allocator_int__* t1645 = this1643;
  struct std__allocator_int_* base1646 = (struct std__allocator_int_*)((char *)&(t1645->_M_impl) + 0);
  __retval1644 = base1646;
  struct std__allocator_int_* t1647 = __retval1644;
  return t1647;
}

