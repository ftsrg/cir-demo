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

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[18] = "mydeque contains:";
char _str_1[2] = " ";
char _str_2[17] = "!mydeque.empty()";
char _str_3[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_clear_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[20] = "mydeque.size() != 2";
char _str_5[19] = "\nmydeque contains:";
char _str_6[48] = "cannot create std::deque larger than max_size()";
char _str_7[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_8[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm[91] = "reference std::deque<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_9[19] = "__n < this->size()";
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* p0);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
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
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_(struct std__deque_int__std__allocator_int__* p0, int* p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* p0);
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* p0);
int* std__deque_int__std__allocator_int_____back(struct std__deque_int__std__allocator_int__* p0);
int* int__std__deque_int__std__allocator_int_____emplace_back_int_(struct std__deque_int__std__allocator_int__* p0, int* p1);
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* p0, int* p1);
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
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___2(struct std___Deque_iterator_int__int____int___* p0, long p1);
struct std___Deque_iterator_int__int____int___ std__operator__3(struct std___Deque_iterator_int__int____int___* p0, long p1);
int* std___Deque_iterator_int__int___int____operator___long__const(struct std___Deque_iterator_int__int____int___* p0, long p1);
int* std__deque_int__std__allocator_int_____operator__(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void std__deque_int__std__allocator_int______M_erase_at_end(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1);
void std__deque_int__std__allocator_int_____clear(struct std__deque_int__std__allocator_int__* p0);
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* p0);
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
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__allocator_int_* p3);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* p0);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* p0);
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* p0);

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

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v5, int* v6) {
bb7: ;
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

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v19, int* v20, int* v21) {
bb22: ;
  struct std__allocator_int_* __a23;
  int* __p24;
  int* __args25;
  __a23 = v19;
  __p24 = v20;
  __args25 = v21;
  int* t26 = __p24;
  int* t27 = __args25;
  int* r28 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t26, t27);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v29, unsigned long* v30) {
bb31: ;
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
bb45: ;
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
bb56: ;
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
bb66: ;
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
bb75: ;
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
bb85: ;
  int*** unnamed86;
  struct std__random_access_iterator_tag __retval87;
  unnamed86 = v84;
  struct std__random_access_iterator_tag t88 = __retval87;
  return t88;
}

// function: _ZSt8distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_int_____difference_type_std__distance_int___(int** v89, int** v90) {
bb91: ;
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
bb104: ;
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
bb115: ;
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
bb163: ;
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
bb174: ;
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
bb182: ;
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
bb197: ;
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
bb205: ;
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
bb217: ;
  _Bool __retval218;
    _Bool c219 = 0;
    __retval218 = c219;
    _Bool t220 = __retval218;
    return t220;
  abort();
}

// function: _ZSt9__advanceIPPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int____long_(int*** v221, long v222, struct std__random_access_iterator_tag v223) {
bb224: ;
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
bb256: ;
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
bb270: ;
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
bb313: ;
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
bb326: ;
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
bb343: ;
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
bb358: ;
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
bb504: ;
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

// function: _ZNSt5dequeIiSaIiEE16_M_push_back_auxIJiEEEvDpOT_
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_(struct std__deque_int__std__allocator_int__* v526, int* v527) {
bb528: ;
  struct std__deque_int__std__allocator_int__* this529;
  int* __args530;
  this529 = v526;
  __args530 = v527;
  struct std__deque_int__std__allocator_int__* t531 = this529;
    unsigned long r532 = std__deque_int__std__allocator_int_____size___const(t531);
    unsigned long r533 = std__deque_int__std__allocator_int_____max_size___const(t531);
    _Bool c534 = ((r532 == r533)) ? 1 : 0;
    if (c534) {
      char* cast535 = (char*)&(_str_6);
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
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base546, t549, t550);
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

// function: _ZNSt15_Deque_iteratorIiRiPiEmmEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* v572) {
bb573: ;
  struct std___Deque_iterator_int__int____int___* this574;
  struct std___Deque_iterator_int__int____int___* __retval575;
  this574 = v572;
  struct std___Deque_iterator_int__int____int___* t576 = this574;
    int* t577 = t576->_M_cur;
    int* t578 = t576->_M_first;
    _Bool c579 = ((t577 == t578)) ? 1 : 0;
    if (c579) {
      int** t580 = t576->_M_node;
      int c581 = -1;
      int** ptr582 = &(t580)[c581];
      std___Deque_iterator_int__int___int_____M_set_node(t576, ptr582);
      int* t583 = t576->_M_last;
      t576->_M_cur = t583;
    }
  int* t584 = t576->_M_cur;
  int c585 = -1;
  int* ptr586 = &(t584)[c585];
  t576->_M_cur = ptr586;
  __retval575 = t576;
  struct std___Deque_iterator_int__int____int___* t587 = __retval575;
  return t587;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v588) {
bb589: ;
  struct std___Deque_iterator_int__int____int___* this590;
  int* __retval591;
  this590 = v588;
  struct std___Deque_iterator_int__int____int___* t592 = this590;
  int* t593 = t592->_M_cur;
  __retval591 = t593;
  int* t594 = __retval591;
  return t594;
}

// function: _ZNSt5dequeIiSaIiEE4backEv
int* std__deque_int__std__allocator_int_____back(struct std__deque_int__std__allocator_int__* v595) {
bb596: ;
  struct std__deque_int__std__allocator_int__* this597;
  int* __retval598;
  struct std___Deque_iterator_int__int____int___ __tmp599;
  this597 = v595;
  struct std__deque_int__std__allocator_int__* t600 = this597;
    do {
          _Bool r601 = std__deque_int__std__allocator_int_____empty___const(t600);
          if (r601) {
            char* cast602 = (char*)&(_str_7);
            int c603 = 1537;
            char* cast604 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv);
            char* cast605 = (char*)&(_str_8);
            std____glibcxx_assert_fail(cast602, c603, cast604, cast605);
          }
      _Bool c606 = 0;
      if (!c606) break;
    } while (1);
  struct std___Deque_iterator_int__int____int___ r607 = std__deque_int__std__allocator_int_____end(t600);
  __tmp599 = r607;
  struct std___Deque_iterator_int__int____int___* r608 = std___Deque_iterator_int__int___int____operator__(&__tmp599);
  int* r609 = std___Deque_iterator_int__int___int____operator____const(&__tmp599);
  __retval598 = r609;
  int* t610 = __retval598;
  return t610;
}

// function: _ZNSt5dequeIiSaIiEE12emplace_backIJiEEERiDpOT_
int* int__std__deque_int__std__allocator_int_____emplace_back_int_(struct std__deque_int__std__allocator_int__* v611, int* v612) {
bb613: ;
  struct std__deque_int__std__allocator_int__* this614;
  int* __args615;
  int* __retval616;
  this614 = v611;
  __args615 = v612;
  struct std__deque_int__std__allocator_int__* t617 = this614;
    struct std___Deque_base_int__std__allocator_int__* base618 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t617 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base619 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base618->_M_impl) + 0);
    int* t620 = base619->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base621 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t617 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base622 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base621->_M_impl) + 0);
    int* t623 = base622->_M_finish._M_last;
    int c624 = -1;
    int* ptr625 = &(t623)[c624];
    _Bool c626 = ((t620 != ptr625)) ? 1 : 0;
    if (c626) {
      struct std___Deque_base_int__std__allocator_int__* base627 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t617 + 0);
      struct std__allocator_int_* base628 = (struct std__allocator_int_*)((char *)&(base627->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base629 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t617 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base630 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base629->_M_impl) + 0);
      int* t631 = base630->_M_finish._M_cur;
      int* t632 = __args615;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base628, t631, t632);
      struct std___Deque_base_int__std__allocator_int__* base633 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t617 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base634 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base633->_M_impl) + 0);
      int* t635 = base634->_M_finish._M_cur;
      int c636 = 1;
      int* ptr637 = &(t635)[c636];
      base634->_M_finish._M_cur = ptr637;
    } else {
      int* t638 = __args615;
      void_std__deque_int__std__allocator_int______M_push_back_aux_int_(t617, t638);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    }
  int* r639 = std__deque_int__std__allocator_int_____back(t617);
  __retval616 = r639;
  int* t640 = __retval616;
  return t640;
}

// function: _ZNSt5dequeIiSaIiEE9push_backEOi
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* v641, int* v642) {
bb643: ;
  struct std__deque_int__std__allocator_int__* this644;
  int* __x645;
  this644 = v641;
  __x645 = v642;
  struct std__deque_int__std__allocator_int__* t646 = this644;
  int* t647 = __x645;
  int* r648 = int__std__deque_int__std__allocator_int_____emplace_back_int_(t646, t647);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v649, int v650) {
bb651: ;
  int __a652;
  int __b653;
  int __retval654;
  __a652 = v649;
  __b653 = v650;
  int t655 = __a652;
  int t656 = __b653;
  int b657 = t655 | t656;
  __retval654 = b657;
  int t658 = __retval654;
  return t658;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v659) {
bb660: ;
  struct std__basic_ios_char__std__char_traits_char__* this661;
  int __retval662;
  this661 = v659;
  struct std__basic_ios_char__std__char_traits_char__* t663 = this661;
  struct std__ios_base* base664 = (struct std__ios_base*)((char *)t663 + 0);
  int t665 = base664->_M_streambuf_state;
  __retval662 = t665;
  int t666 = __retval662;
  return t666;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v667, int v668) {
bb669: ;
  struct std__basic_ios_char__std__char_traits_char__* this670;
  int __state671;
  this670 = v667;
  __state671 = v668;
  struct std__basic_ios_char__std__char_traits_char__* t672 = this670;
  int r673 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t672);
  if (__cir_exc_active) {
    return;
  }
  int t674 = __state671;
  int r675 = std__operator__2(r673, t674);
  std__basic_ios_char__std__char_traits_char_____clear(t672, r675);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v676, char* v677) {
bb678: ;
  char* __c1679;
  char* __c2680;
  _Bool __retval681;
  __c1679 = v676;
  __c2680 = v677;
  char* t682 = __c1679;
  char t683 = *t682;
  int cast684 = (int)t683;
  char* t685 = __c2680;
  char t686 = *t685;
  int cast687 = (int)t686;
  _Bool c688 = ((cast684 == cast687)) ? 1 : 0;
  __retval681 = c688;
  _Bool t689 = __retval681;
  return t689;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v690) {
bb691: ;
  char* __p692;
  unsigned long __retval693;
  unsigned long __i694;
  __p692 = v690;
  unsigned long c695 = 0;
  __i694 = c695;
    char ref_tmp0696;
    while (1) {
      unsigned long t697 = __i694;
      char* t698 = __p692;
      char* ptr699 = &(t698)[t697];
      char c700 = 0;
      ref_tmp0696 = c700;
      _Bool r701 = __gnu_cxx__char_traits_char___eq(ptr699, &ref_tmp0696);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u702 = !r701;
      if (!u702) break;
      unsigned long t703 = __i694;
      unsigned long u704 = t703 + 1;
      __i694 = u704;
    }
  unsigned long t705 = __i694;
  __retval693 = t705;
  unsigned long t706 = __retval693;
  return t706;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v707) {
bb708: ;
  char* __s709;
  unsigned long __retval710;
  __s709 = v707;
    _Bool r711 = std____is_constant_evaluated();
    if (r711) {
      char* t712 = __s709;
      unsigned long r713 = __gnu_cxx__char_traits_char___length(t712);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval710 = r713;
      unsigned long t714 = __retval710;
      return t714;
    }
  char* t715 = __s709;
  unsigned long r716 = strlen(t715);
  __retval710 = r716;
  unsigned long t717 = __retval710;
  return t717;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v718, char* v719) {
bb720: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out721;
  char* __s722;
  struct std__basic_ostream_char__std__char_traits_char__* __retval723;
  __out721 = v718;
  __s722 = v719;
    char* t724 = __s722;
    _Bool cast725 = (_Bool)t724;
    _Bool u726 = !cast725;
    if (u726) {
      struct std__basic_ostream_char__std__char_traits_char__* t727 = __out721;
      void** v728 = (void**)t727;
      void* v729 = *((void**)v728);
      unsigned char* cast730 = (unsigned char*)v729;
      long c731 = -24;
      unsigned char* ptr732 = &(cast730)[c731];
      long* cast733 = (long*)ptr732;
      long t734 = *cast733;
      unsigned char* cast735 = (unsigned char*)t727;
      unsigned char* ptr736 = &(cast735)[t734];
      struct std__basic_ostream_char__std__char_traits_char__* cast737 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr736;
      struct std__basic_ios_char__std__char_traits_char__* cast738 = (struct std__basic_ios_char__std__char_traits_char__*)cast737;
      int t739 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast738, t739);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t740 = __out721;
      char* t741 = __s722;
      char* t742 = __s722;
      unsigned long r743 = std__char_traits_char___length(t742);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast744 = (long)r743;
      struct std__basic_ostream_char__std__char_traits_char__* r745 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t740, t741, cast744);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t746 = __out721;
  __retval723 = t746;
  struct std__basic_ostream_char__std__char_traits_char__* t747 = __retval723;
  return t747;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiES4_
long std__operator_(struct std___Deque_iterator_int__int____int___* v748, struct std___Deque_iterator_int__int____int___* v749) {
bb750: ;
  struct std___Deque_iterator_int__int____int___* __x751;
  struct std___Deque_iterator_int__int____int___* __y752;
  long __retval753;
  __x751 = v748;
  __y752 = v749;
  unsigned long r754 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast755 = (long)r754;
  struct std___Deque_iterator_int__int____int___* t756 = __x751;
  int** t757 = t756->_M_node;
  struct std___Deque_iterator_int__int____int___* t758 = __y752;
  int** t759 = t758->_M_node;
  long diff760 = t757 - t759;
  struct std___Deque_iterator_int__int____int___* t761 = __x751;
  int** t762 = t761->_M_node;
  _Bool cast763 = (_Bool)t762;
  long cast764 = (long)cast763;
  long b765 = diff760 - cast764;
  long b766 = cast755 * b765;
  struct std___Deque_iterator_int__int____int___* t767 = __x751;
  int* t768 = t767->_M_cur;
  struct std___Deque_iterator_int__int____int___* t769 = __x751;
  int* t770 = t769->_M_first;
  long diff771 = t768 - t770;
  long b772 = b766 + diff771;
  struct std___Deque_iterator_int__int____int___* t773 = __y752;
  int* t774 = t773->_M_last;
  struct std___Deque_iterator_int__int____int___* t775 = __y752;
  int* t776 = t775->_M_cur;
  long diff777 = t774 - t776;
  long b778 = b772 + diff777;
  __retval753 = b778;
  long t779 = __retval753;
  return t779;
}

// function: _ZNKSt5dequeIiSaIiEE4sizeEv
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* v780) {
bb781: ;
  struct std__deque_int__std__allocator_int__* this782;
  unsigned long __retval783;
  unsigned long __sz784;
  this782 = v780;
  struct std__deque_int__std__allocator_int__* t785 = this782;
  struct std___Deque_base_int__std__allocator_int__* base786 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t785 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base787 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base786->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base788 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t785 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base789 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base788->_M_impl) + 0);
  long r790 = std__operator_(&base787->_M_finish, &base789->_M_start);
  unsigned long cast791 = (unsigned long)r790;
  __sz784 = cast791;
    unsigned long t792 = __sz784;
    unsigned long r793 = std__deque_int__std__allocator_int_____max_size___const(t785);
    _Bool c794 = ((t792 > r793)) ? 1 : 0;
    if (c794) {
      __builtin_unreachable();
    }
  unsigned long t795 = __sz784;
  __retval783 = t795;
  unsigned long t796 = __retval783;
  return t796;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEpLEl
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___2(struct std___Deque_iterator_int__int____int___* v797, long v798) {
bb799: ;
  struct std___Deque_iterator_int__int____int___* this800;
  long __n801;
  struct std___Deque_iterator_int__int____int___* __retval802;
  long __offset803;
  this800 = v797;
  __n801 = v798;
  struct std___Deque_iterator_int__int____int___* t804 = this800;
  long t805 = __n801;
  int* t806 = t804->_M_cur;
  int* t807 = t804->_M_first;
  long diff808 = t806 - t807;
  long b809 = t805 + diff808;
  __offset803 = b809;
    long t810 = __offset803;
    long c811 = 0;
    _Bool c812 = ((t810 >= c811)) ? 1 : 0;
    _Bool ternary813;
    if (c812) {
      long t814 = __offset803;
      unsigned long r815 = std___Deque_iterator_int__int___int_____S_buffer_size();
      long cast816 = (long)r815;
      _Bool c817 = ((t814 < cast816)) ? 1 : 0;
      ternary813 = (_Bool)c817;
    } else {
      _Bool c818 = 0;
      ternary813 = (_Bool)c818;
    }
    if (ternary813) {
      long t819 = __n801;
      int* t820 = t804->_M_cur;
      int* ptr821 = &(t820)[t819];
      t804->_M_cur = ptr821;
    } else {
      long __node_offset822;
      long t823 = __offset803;
      long c824 = 0;
      _Bool c825 = ((t823 > c824)) ? 1 : 0;
      long ternary826;
      if (c825) {
        long t827 = __offset803;
        unsigned long r828 = std___Deque_iterator_int__int___int_____S_buffer_size();
        long cast829 = (long)r828;
        long b830 = t827 / cast829;
        ternary826 = (long)b830;
      } else {
        long t831 = __offset803;
        long u832 = -t831;
        long c833 = 1;
        long b834 = u832 - c833;
        unsigned long cast835 = (unsigned long)b834;
        unsigned long r836 = std___Deque_iterator_int__int___int_____S_buffer_size();
        unsigned long b837 = cast835 / r836;
        long cast838 = (long)b837;
        long u839 = -cast838;
        long c840 = 1;
        long b841 = u839 - c840;
        ternary826 = (long)b841;
      }
      __node_offset822 = ternary826;
      int** t842 = t804->_M_node;
      long t843 = __node_offset822;
      int** ptr844 = &(t842)[t843];
      std___Deque_iterator_int__int___int_____M_set_node(t804, ptr844);
      int* t845 = t804->_M_first;
      long t846 = __offset803;
      long t847 = __node_offset822;
      unsigned long r848 = std___Deque_iterator_int__int___int_____S_buffer_size();
      long cast849 = (long)r848;
      long b850 = t847 * cast849;
      long b851 = t846 - b850;
      int* ptr852 = &(t845)[b851];
      t804->_M_cur = ptr852;
    }
  __retval802 = t804;
  struct std___Deque_iterator_int__int____int___* t853 = __retval802;
  return t853;
}

// function: _ZStplRKSt15_Deque_iteratorIiRiPiEl
struct std___Deque_iterator_int__int____int___ std__operator__3(struct std___Deque_iterator_int__int____int___* v854, long v855) {
bb856: ;
  struct std___Deque_iterator_int__int____int___* __x857;
  long __n858;
  struct std___Deque_iterator_int__int____int___ __retval859;
  __x857 = v854;
  __n858 = v855;
  struct std___Deque_iterator_int__int____int___* t860 = __x857;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval859, t860);
  long t861 = __n858;
  struct std___Deque_iterator_int__int____int___* r862 = std___Deque_iterator_int__int___int____operator___2(&__retval859, t861);
  struct std___Deque_iterator_int__int____int___ t863 = __retval859;
  return t863;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEixEl
int* std___Deque_iterator_int__int___int____operator___long__const(struct std___Deque_iterator_int__int____int___* v864, long v865) {
bb866: ;
  struct std___Deque_iterator_int__int____int___* this867;
  long __n868;
  int* __retval869;
  struct std___Deque_iterator_int__int____int___ ref_tmp0870;
  this867 = v864;
  __n868 = v865;
  struct std___Deque_iterator_int__int____int___* t871 = this867;
  long t872 = __n868;
  struct std___Deque_iterator_int__int____int___ r873 = std__operator__3(t871, t872);
  ref_tmp0870 = r873;
  int* r874 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp0870);
  __retval869 = r874;
  int* t875 = __retval869;
  return t875;
}

// function: _ZNSt5dequeIiSaIiEEixEm
int* std__deque_int__std__allocator_int_____operator__(struct std__deque_int__std__allocator_int__* v876, unsigned long v877) {
bb878: ;
  struct std__deque_int__std__allocator_int__* this879;
  unsigned long __n880;
  int* __retval881;
  this879 = v876;
  __n880 = v877;
  struct std__deque_int__std__allocator_int__* t882 = this879;
    do {
          unsigned long t883 = __n880;
          unsigned long r884 = std__deque_int__std__allocator_int_____size___const(t882);
          _Bool c885 = ((t883 < r884)) ? 1 : 0;
          _Bool u886 = !c885;
          if (u886) {
            char* cast887 = (char*)&(_str_7);
            int c888 = 1433;
            char* cast889 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm);
            char* cast890 = (char*)&(_str_9);
            std____glibcxx_assert_fail(cast887, c888, cast889, cast890);
          }
      _Bool c891 = 0;
      if (!c891) break;
    } while (1);
  struct std___Deque_base_int__std__allocator_int__* base892 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t882 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base893 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base892->_M_impl) + 0);
  unsigned long t894 = __n880;
  long cast895 = (long)t894;
  int* r896 = std___Deque_iterator_int__int___int____operator___long__const(&base893->_M_start, cast895);
  __retval881 = r896;
  int* t897 = __retval881;
  return t897;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEaSERKS2_
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator_(struct std___Deque_iterator_int__int____int___* v898, struct std___Deque_iterator_int__int____int___* v899) {
bb900: ;
  struct std___Deque_iterator_int__int____int___* this901;
  struct std___Deque_iterator_int__int____int___* unnamed902;
  struct std___Deque_iterator_int__int____int___* __retval903;
  this901 = v898;
  unnamed902 = v899;
  struct std___Deque_iterator_int__int____int___* t904 = this901;
  struct std___Deque_iterator_int__int____int___* t905 = unnamed902;
  int* t906 = t905->_M_cur;
  t904->_M_cur = t906;
  struct std___Deque_iterator_int__int____int___* t907 = unnamed902;
  int* t908 = t907->_M_first;
  t904->_M_first = t908;
  struct std___Deque_iterator_int__int____int___* t909 = unnamed902;
  int* t910 = t909->_M_last;
  t904->_M_last = t910;
  struct std___Deque_iterator_int__int____int___* t911 = unnamed902;
  int** t912 = t911->_M_node;
  t904->_M_node = t912;
  __retval903 = t904;
  struct std___Deque_iterator_int__int____int___* t913 = __retval903;
  return t913;
}

// function: _ZNSt5dequeIiSaIiEE15_M_erase_at_endESt15_Deque_iteratorIiRiPiE
void std__deque_int__std__allocator_int______M_erase_at_end(struct std__deque_int__std__allocator_int__* v914, struct std___Deque_iterator_int__int____int___ v915) {
bb916: ;
  struct std__deque_int__std__allocator_int__* this917;
  struct std___Deque_iterator_int__int____int___ __pos918;
  struct std___Deque_iterator_int__int____int___ agg_tmp0919;
  struct std___Deque_iterator_int__int____int___ agg_tmp1920;
  this917 = v914;
  __pos918 = v915;
  struct std__deque_int__std__allocator_int__* t921 = this917;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp0919, &__pos918);
  struct std___Deque_iterator_int__int____int___ r922 = std__deque_int__std__allocator_int_____end(t921);
  agg_tmp1920 = r922;
  struct std___Deque_base_int__std__allocator_int__* base923 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t921 + 0);
  struct std__allocator_int_* r924 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base923);
  struct std___Deque_iterator_int__int____int___ t925 = agg_tmp0919;
  struct std___Deque_iterator_int__int____int___ t926 = agg_tmp1920;
  std__deque_int__std__allocator_int______M_destroy_data(t921, t925, t926, r924);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base927 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t921 + 0);
  int** t928 = __pos918._M_node;
  int c929 = 1;
  int** ptr930 = &(t928)[c929];
  struct std___Deque_base_int__std__allocator_int__* base931 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t921 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base932 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base931->_M_impl) + 0);
  int** t933 = base932->_M_finish._M_node;
  int c934 = 1;
  int** ptr935 = &(t933)[c934];
  std___Deque_base_int__std__allocator_int______M_destroy_nodes(base927, ptr930, ptr935);
  struct std___Deque_base_int__std__allocator_int__* base936 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t921 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base937 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base936->_M_impl) + 0);
  struct std___Deque_iterator_int__int____int___* r938 = std___Deque_iterator_int__int___int____operator_(&base937->_M_finish, &__pos918);
  return;
}

// function: _ZNSt5dequeIiSaIiEE5clearEv
void std__deque_int__std__allocator_int_____clear(struct std__deque_int__std__allocator_int__* v939) {
bb940: ;
  struct std__deque_int__std__allocator_int__* this941;
  struct std___Deque_iterator_int__int____int___ agg_tmp0942;
  this941 = v939;
  struct std__deque_int__std__allocator_int__* t943 = this941;
  struct std___Deque_iterator_int__int____int___ r944 = std__deque_int__std__allocator_int_____begin(t943);
  agg_tmp0942 = r944;
  struct std___Deque_iterator_int__int____int___ t945 = agg_tmp0942;
  std__deque_int__std__allocator_int______M_erase_at_end(t943, t945);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* v946, struct std___Deque_iterator_int__int____int___* v947) {
bb948: ;
  struct std___Deque_iterator_int__int____int___* __x949;
  struct std___Deque_iterator_int__int____int___* __y950;
  _Bool __retval951;
  __x949 = v946;
  __y950 = v947;
  struct std___Deque_iterator_int__int____int___* t952 = __x949;
  int* t953 = t952->_M_cur;
  struct std___Deque_iterator_int__int____int___* t954 = __y950;
  int* t955 = t954->_M_cur;
  _Bool c956 = ((t953 == t955)) ? 1 : 0;
  __retval951 = c956;
  _Bool t957 = __retval951;
  return t957;
}

// function: _ZNKSt5dequeIiSaIiEE5emptyEv
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* v958) {
bb959: ;
  struct std__deque_int__std__allocator_int__* this960;
  _Bool __retval961;
  this960 = v958;
  struct std__deque_int__std__allocator_int__* t962 = this960;
  struct std___Deque_base_int__std__allocator_int__* base963 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t962 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base964 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base963->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base965 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t962 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base966 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base965->_M_impl) + 0);
  _Bool r967 = std__operator__(&base964->_M_finish, &base966->_M_start);
  __retval961 = r967;
  _Bool t968 = __retval961;
  return t968;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v969, void* v970) {
bb971: ;
  struct std__basic_ostream_char__std__char_traits_char__* this972;
  void* __pf973;
  struct std__basic_ostream_char__std__char_traits_char__* __retval974;
  this972 = v969;
  __pf973 = v970;
  struct std__basic_ostream_char__std__char_traits_char__* t975 = this972;
  void* t976 = __pf973;
  struct std__basic_ostream_char__std__char_traits_char__* r977 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t976)(t975);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval974 = r977;
  struct std__basic_ostream_char__std__char_traits_char__* t978 = __retval974;
  return t978;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v979) {
bb980: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os981;
  struct std__basic_ostream_char__std__char_traits_char__* __retval982;
  __os981 = v979;
  struct std__basic_ostream_char__std__char_traits_char__* t983 = __os981;
  struct std__basic_ostream_char__std__char_traits_char__* r984 = std__ostream__flush(t983);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval982 = r984;
  struct std__basic_ostream_char__std__char_traits_char__* t985 = __retval982;
  return t985;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v986) {
bb987: ;
  struct std__ctype_char_* __f988;
  struct std__ctype_char_* __retval989;
  __f988 = v986;
    struct std__ctype_char_* t990 = __f988;
    _Bool cast991 = (_Bool)t990;
    _Bool u992 = !cast991;
    if (u992) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t993 = __f988;
  __retval989 = t993;
  struct std__ctype_char_* t994 = __retval989;
  return t994;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v995, char v996) {
bb997: ;
  struct std__ctype_char_* this998;
  char __c999;
  char __retval1000;
  this998 = v995;
  __c999 = v996;
  struct std__ctype_char_* t1001 = this998;
    char t1002 = t1001->_M_widen_ok;
    _Bool cast1003 = (_Bool)t1002;
    if (cast1003) {
      char t1004 = __c999;
      unsigned char cast1005 = (unsigned char)t1004;
      unsigned long cast1006 = (unsigned long)cast1005;
      char t1007 = t1001->_M_widen[cast1006];
      __retval1000 = t1007;
      char t1008 = __retval1000;
      return t1008;
    }
  std__ctype_char____M_widen_init___const(t1001);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t1009 = __c999;
  void** v1010 = (void**)t1001;
  void* v1011 = *((void**)v1010);
  char vcall1014 = (char)__VERIFIER_virtual_call_char_char(t1001, 6, t1009);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval1000 = vcall1014;
  char t1015 = __retval1000;
  return t1015;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1016, char v1017) {
bb1018: ;
  struct std__basic_ios_char__std__char_traits_char__* this1019;
  char __c1020;
  char __retval1021;
  this1019 = v1016;
  __c1020 = v1017;
  struct std__basic_ios_char__std__char_traits_char__* t1022 = this1019;
  struct std__ctype_char_* t1023 = t1022->_M_ctype;
  struct std__ctype_char_* r1024 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1023);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t1025 = __c1020;
  char r1026 = std__ctype_char___widen_char__const(r1024, t1025);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval1021 = r1026;
  char t1027 = __retval1021;
  return t1027;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1028) {
bb1029: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1030;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1031;
  __os1030 = v1028;
  struct std__basic_ostream_char__std__char_traits_char__* t1032 = __os1030;
  struct std__basic_ostream_char__std__char_traits_char__* t1033 = __os1030;
  void** v1034 = (void**)t1033;
  void* v1035 = *((void**)v1034);
  unsigned char* cast1036 = (unsigned char*)v1035;
  long c1037 = -24;
  unsigned char* ptr1038 = &(cast1036)[c1037];
  long* cast1039 = (long*)ptr1038;
  long t1040 = *cast1039;
  unsigned char* cast1041 = (unsigned char*)t1033;
  unsigned char* ptr1042 = &(cast1041)[t1040];
  struct std__basic_ostream_char__std__char_traits_char__* cast1043 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1042;
  struct std__basic_ios_char__std__char_traits_char__* cast1044 = (struct std__basic_ios_char__std__char_traits_char__*)cast1043;
  char c1045 = 10;
  char r1046 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1044, c1045);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r1047 = std__ostream__put(t1032, r1046);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r1048 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1047);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1031 = r1048;
  struct std__basic_ostream_char__std__char_traits_char__* t1049 = __retval1031;
  return t1049;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v1050) {
bb1051: ;
  struct std__deque_int__std__allocator_int__* this1052;
  struct std___Deque_iterator_int__int____int___ agg_tmp01053;
  struct std___Deque_iterator_int__int____int___ agg_tmp11054;
  this1052 = v1050;
  struct std__deque_int__std__allocator_int__* t1055 = this1052;
    struct std___Deque_iterator_int__int____int___ r1056 = std__deque_int__std__allocator_int_____begin(t1055);
    agg_tmp01053 = r1056;
    struct std___Deque_iterator_int__int____int___ r1057 = std__deque_int__std__allocator_int_____end(t1055);
    agg_tmp11054 = r1057;
    struct std___Deque_base_int__std__allocator_int__* base1058 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1055 + 0);
    struct std__allocator_int_* r1059 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1058);
    struct std___Deque_iterator_int__int____int___ t1060 = agg_tmp01053;
    struct std___Deque_iterator_int__int____int___ t1061 = agg_tmp11054;
    std__deque_int__std__allocator_int______M_destroy_data(t1055, t1060, t1061, r1059);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base1062 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1055 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base1062);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base1063 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1055 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base1063);
  }
  return;
}

// function: main
int main() {
bb1064: ;
  int __retval1065;
  unsigned int i1066;
  struct std__deque_int__std__allocator_int__ mydeque1067;
  int ref_tmp01068;
  int ref_tmp11069;
  int ref_tmp21070;
  int ref_tmp31071;
  int ref_tmp41072;
  int c1073 = 0;
  __retval1065 = c1073;
  std__deque_int__std__allocator_int_____deque(&mydeque1067);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    int c1074 = 100;
    ref_tmp01068 = c1074;
    std__deque_int__std__allocator_int_____push_back(&mydeque1067, &ref_tmp01068);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque1067);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1075 = 200;
    ref_tmp11069 = c1075;
    std__deque_int__std__allocator_int_____push_back(&mydeque1067, &ref_tmp11069);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque1067);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1076 = 300;
    ref_tmp21070 = c1076;
    std__deque_int__std__allocator_int_____push_back(&mydeque1067, &ref_tmp21070);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque1067);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast1077 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r1078 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1077);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque1067);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      unsigned int c1079 = 0;
      i1066 = c1079;
      while (1) {
        unsigned int t1081 = i1066;
        unsigned long cast1082 = (unsigned long)t1081;
        unsigned long r1083 = std__deque_int__std__allocator_int_____size___const(&mydeque1067);
        _Bool c1084 = ((cast1082 < r1083)) ? 1 : 0;
        if (!c1084) break;
        char* cast1085 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r1086 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1085);
        if (__cir_exc_active) {
          {
            std__deque_int__std__allocator_int______deque(&mydeque1067);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        unsigned int t1087 = i1066;
        unsigned long cast1088 = (unsigned long)t1087;
        int* r1089 = std__deque_int__std__allocator_int_____operator__(&mydeque1067, cast1088);
        int t1090 = *r1089;
        struct std__basic_ostream_char__std__char_traits_char__* r1091 = std__ostream__operator__(r1086, t1090);
        if (__cir_exc_active) {
          {
            std__deque_int__std__allocator_int______deque(&mydeque1067);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step1080: ;
        unsigned int t1092 = i1066;
        unsigned int u1093 = t1092 + 1;
        i1066 = u1093;
      }
    std__deque_int__std__allocator_int_____clear(&mydeque1067);
    _Bool r1094 = std__deque_int__std__allocator_int_____empty___const(&mydeque1067);
    _Bool u1095 = !r1094;
    if (u1095) {
    } else {
      char* cast1096 = (char*)&(_str_2);
      char* c1097 = (char*)_str_3;
      unsigned int c1098 = 26;
      char* cast1099 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1096, c1097, c1098, cast1099);
    }
    int c1100 = 1101;
    ref_tmp31071 = c1100;
    std__deque_int__std__allocator_int_____push_back(&mydeque1067, &ref_tmp31071);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque1067);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1101 = 2202;
    ref_tmp41072 = c1101;
    std__deque_int__std__allocator_int_____push_back(&mydeque1067, &ref_tmp41072);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque1067);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1102 = std__deque_int__std__allocator_int_____size___const(&mydeque1067);
    unsigned long c1103 = 2;
    _Bool c1104 = ((r1102 != c1103)) ? 1 : 0;
    if (c1104) {
    } else {
      char* cast1105 = (char*)&(_str_4);
      char* c1106 = (char*)_str_3;
      unsigned int c1107 = 29;
      char* cast1108 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1105, c1106, c1107, cast1108);
    }
    char* cast1109 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r1110 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1109);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque1067);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      unsigned int c1111 = 0;
      i1066 = c1111;
      while (1) {
        unsigned int t1113 = i1066;
        unsigned long cast1114 = (unsigned long)t1113;
        unsigned long r1115 = std__deque_int__std__allocator_int_____size___const(&mydeque1067);
        _Bool c1116 = ((cast1114 < r1115)) ? 1 : 0;
        if (!c1116) break;
        char* cast1117 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r1118 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1117);
        if (__cir_exc_active) {
          {
            std__deque_int__std__allocator_int______deque(&mydeque1067);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        unsigned int t1119 = i1066;
        unsigned long cast1120 = (unsigned long)t1119;
        int* r1121 = std__deque_int__std__allocator_int_____operator__(&mydeque1067, cast1120);
        int t1122 = *r1121;
        struct std__basic_ostream_char__std__char_traits_char__* r1123 = std__ostream__operator__(r1118, t1122);
        if (__cir_exc_active) {
          {
            std__deque_int__std__allocator_int______deque(&mydeque1067);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step1112: ;
        unsigned int t1124 = i1066;
        unsigned int u1125 = t1124 + 1;
        i1066 = u1125;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1126 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque1067);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1127 = 0;
    __retval1065 = c1127;
    int t1128 = __retval1065;
    int ret_val1129 = t1128;
    {
      std__deque_int__std__allocator_int______deque(&mydeque1067);
    }
    return ret_val1129;
  int t1130 = __retval1065;
  return t1130;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1131) {
bb1132: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1133;
  this1133 = v1131;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1134 = this1133;
  struct std__allocator_int_* base1135 = (struct std__allocator_int_*)((char *)t1134 + 0);
  std__allocator_int___allocator(base1135);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1136 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t1134 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base1136);
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v1137) {
bb1138: ;
  unsigned long __size1139;
  unsigned long __retval1140;
  __size1139 = v1137;
  unsigned long t1141 = __size1139;
  unsigned long c1142 = 512;
  _Bool c1143 = ((t1141 < c1142)) ? 1 : 0;
  unsigned long ternary1144;
  if (c1143) {
    unsigned long c1145 = 512;
    unsigned long t1146 = __size1139;
    unsigned long b1147 = c1145 / t1146;
    ternary1144 = (unsigned long)b1147;
  } else {
    unsigned long c1148 = 1;
    ternary1144 = (unsigned long)c1148;
  }
  __retval1140 = ternary1144;
  unsigned long t1149 = __retval1140;
  return t1149;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v1150, unsigned long* v1151) {
bb1152: ;
  unsigned long* __a1153;
  unsigned long* __b1154;
  unsigned long* __retval1155;
  __a1153 = v1150;
  __b1154 = v1151;
    unsigned long* t1156 = __a1153;
    unsigned long t1157 = *t1156;
    unsigned long* t1158 = __b1154;
    unsigned long t1159 = *t1158;
    _Bool c1160 = ((t1157 < t1159)) ? 1 : 0;
    if (c1160) {
      unsigned long* t1161 = __b1154;
      __retval1155 = t1161;
      unsigned long* t1162 = __retval1155;
      return t1162;
    }
  unsigned long* t1163 = __a1153;
  __retval1155 = t1163;
  unsigned long* t1164 = __retval1155;
  return t1164;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1165) {
bb1166: ;
  struct std___Deque_base_int__std__allocator_int__* this1167;
  struct std__allocator_int_* __retval1168;
  this1167 = v1165;
  struct std___Deque_base_int__std__allocator_int__* t1169 = this1167;
  struct std__allocator_int_* base1170 = (struct std__allocator_int_*)((char *)&(t1169->_M_impl) + 0);
  __retval1168 = base1170;
  struct std__allocator_int_* t1171 = __retval1168;
  return t1171;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v1172, struct std__allocator_int_* v1173) {
bb1174: ;
  struct std__allocator_int___* this1175;
  struct std__allocator_int_* unnamed1176;
  this1175 = v1172;
  unnamed1176 = v1173;
  struct std__allocator_int___* t1177 = this1175;
  struct std____new_allocator_int___* base1178 = (struct std____new_allocator_int___*)((char *)t1177 + 0);
  std____new_allocator_int______new_allocator(base1178);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1179) {
bb1180: ;
  struct std___Deque_base_int__std__allocator_int__* this1181;
  struct std__allocator_int___ __retval1182;
  this1181 = v1179;
  struct std___Deque_base_int__std__allocator_int__* t1183 = this1181;
  struct std__allocator_int_* r1184 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t1183);
  std__allocator_int____allocator_int_(&__retval1182, r1184);
  struct std__allocator_int___ t1185 = __retval1182;
  return t1185;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1186: ;
  _Bool __retval1187;
    _Bool c1188 = 0;
    __retval1187 = c1188;
    _Bool t1189 = __retval1187;
    return t1189;
  abort();
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v1190) {
bb1191: ;
  struct std____new_allocator_int___* this1192;
  unsigned long __retval1193;
  this1192 = v1190;
  struct std____new_allocator_int___* t1194 = this1192;
  unsigned long c1195 = 9223372036854775807;
  unsigned long c1196 = 8;
  unsigned long b1197 = c1195 / c1196;
  __retval1193 = b1197;
  unsigned long t1198 = __retval1193;
  return t1198;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v1199, unsigned long v1200, void* v1201) {
bb1202: ;
  struct std____new_allocator_int___* this1203;
  unsigned long __n1204;
  void* unnamed1205;
  int** __retval1206;
  this1203 = v1199;
  __n1204 = v1200;
  unnamed1205 = v1201;
  struct std____new_allocator_int___* t1207 = this1203;
    unsigned long t1208 = __n1204;
    unsigned long r1209 = std____new_allocator_int_____M_max_size___const(t1207);
    _Bool c1210 = ((t1208 > r1209)) ? 1 : 0;
    if (c1210) {
        unsigned long t1211 = __n1204;
        unsigned long c1212 = -1;
        unsigned long c1213 = 8;
        unsigned long b1214 = c1212 / c1213;
        _Bool c1215 = ((t1211 > b1214)) ? 1 : 0;
        if (c1215) {
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
    unsigned long c1216 = 8;
    unsigned long c1217 = 16;
    _Bool c1218 = ((c1216 > c1217)) ? 1 : 0;
    if (c1218) {
      unsigned long __al1219;
      unsigned long c1220 = 8;
      __al1219 = c1220;
      unsigned long t1221 = __n1204;
      unsigned long c1222 = 8;
      unsigned long b1223 = t1221 * c1222;
      unsigned long t1224 = __al1219;
      void* r1225 = operator_new_2(b1223, t1224);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1226 = (int**)r1225;
      __retval1206 = cast1226;
      int** t1227 = __retval1206;
      return t1227;
    }
  unsigned long t1228 = __n1204;
  unsigned long c1229 = 8;
  unsigned long b1230 = t1228 * c1229;
  void* r1231 = operator_new(b1230);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast1232 = (int**)r1231;
  __retval1206 = cast1232;
  int** t1233 = __retval1206;
  return t1233;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v1234, unsigned long v1235) {
bb1236: ;
  struct std__allocator_int___* this1237;
  unsigned long __n1238;
  int** __retval1239;
  this1237 = v1234;
  __n1238 = v1235;
  struct std__allocator_int___* t1240 = this1237;
    _Bool r1241 = std____is_constant_evaluated();
    if (r1241) {
        unsigned long t1242 = __n1238;
        unsigned long c1243 = 8;
        unsigned long ovr1244;
        _Bool ovf1245 = __builtin_mul_overflow(t1242, c1243, &ovr1244);
        __n1238 = ovr1244;
        if (ovf1245) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1246 = __n1238;
      void* r1247 = operator_new(t1246);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1248 = (int**)r1247;
      __retval1239 = cast1248;
      int** t1249 = __retval1239;
      return t1249;
    }
  struct std____new_allocator_int___* base1250 = (struct std____new_allocator_int___*)((char *)t1240 + 0);
  unsigned long t1251 = __n1238;
  void* c1252 = ((void*)0);
  int** r1253 = std____new_allocator_int____allocate(base1250, t1251, c1252);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1239 = r1253;
  int** t1254 = __retval1239;
  return t1254;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v1255, unsigned long v1256) {
bb1257: ;
  struct std__allocator_int___* __a1258;
  unsigned long __n1259;
  int** __retval1260;
  __a1258 = v1255;
  __n1259 = v1256;
  struct std__allocator_int___* t1261 = __a1258;
  unsigned long t1262 = __n1259;
  int** r1263 = std__allocator_int____allocate(t1261, t1262);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1260 = r1263;
  int** t1264 = __retval1260;
  return t1264;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v1265, unsigned long v1266) {
bb1267: ;
  struct std___Deque_base_int__std__allocator_int__* this1268;
  unsigned long __n1269;
  int** __retval1270;
  struct std__allocator_int___ __map_alloc1271;
  this1268 = v1265;
  __n1269 = v1266;
  struct std___Deque_base_int__std__allocator_int__* t1272 = this1268;
  struct std__allocator_int___ r1273 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1272);
  __map_alloc1271 = r1273;
  unsigned long t1274 = __n1269;
  int** r1275 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc1271, t1274);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1270 = r1275;
  int** t1276 = __retval1270;
  return t1276;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1277) {
bb1278: ;
  struct std____new_allocator_int_* this1279;
  unsigned long __retval1280;
  this1279 = v1277;
  struct std____new_allocator_int_* t1281 = this1279;
  unsigned long c1282 = 9223372036854775807;
  unsigned long c1283 = 4;
  unsigned long b1284 = c1282 / c1283;
  __retval1280 = b1284;
  unsigned long t1285 = __retval1280;
  return t1285;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1286, unsigned long v1287, void* v1288) {
bb1289: ;
  struct std____new_allocator_int_* this1290;
  unsigned long __n1291;
  void* unnamed1292;
  int* __retval1293;
  this1290 = v1286;
  __n1291 = v1287;
  unnamed1292 = v1288;
  struct std____new_allocator_int_* t1294 = this1290;
    unsigned long t1295 = __n1291;
    unsigned long r1296 = std____new_allocator_int____M_max_size___const(t1294);
    _Bool c1297 = ((t1295 > r1296)) ? 1 : 0;
    if (c1297) {
        unsigned long t1298 = __n1291;
        unsigned long c1299 = -1;
        unsigned long c1300 = 4;
        unsigned long b1301 = c1299 / c1300;
        _Bool c1302 = ((t1298 > b1301)) ? 1 : 0;
        if (c1302) {
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
    unsigned long c1303 = 4;
    unsigned long c1304 = 16;
    _Bool c1305 = ((c1303 > c1304)) ? 1 : 0;
    if (c1305) {
      unsigned long __al1306;
      unsigned long c1307 = 4;
      __al1306 = c1307;
      unsigned long t1308 = __n1291;
      unsigned long c1309 = 4;
      unsigned long b1310 = t1308 * c1309;
      unsigned long t1311 = __al1306;
      void* r1312 = operator_new_2(b1310, t1311);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1313 = (int*)r1312;
      __retval1293 = cast1313;
      int* t1314 = __retval1293;
      return t1314;
    }
  unsigned long t1315 = __n1291;
  unsigned long c1316 = 4;
  unsigned long b1317 = t1315 * c1316;
  void* r1318 = operator_new(b1317);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast1319 = (int*)r1318;
  __retval1293 = cast1319;
  int* t1320 = __retval1293;
  return t1320;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1321, unsigned long v1322) {
bb1323: ;
  struct std__allocator_int_* this1324;
  unsigned long __n1325;
  int* __retval1326;
  this1324 = v1321;
  __n1325 = v1322;
  struct std__allocator_int_* t1327 = this1324;
    _Bool r1328 = std____is_constant_evaluated();
    if (r1328) {
        unsigned long t1329 = __n1325;
        unsigned long c1330 = 4;
        unsigned long ovr1331;
        _Bool ovf1332 = __builtin_mul_overflow(t1329, c1330, &ovr1331);
        __n1325 = ovr1331;
        if (ovf1332) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1333 = __n1325;
      void* r1334 = operator_new(t1333);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1335 = (int*)r1334;
      __retval1326 = cast1335;
      int* t1336 = __retval1326;
      return t1336;
    }
  struct std____new_allocator_int_* base1337 = (struct std____new_allocator_int_*)((char *)t1327 + 0);
  unsigned long t1338 = __n1325;
  void* c1339 = ((void*)0);
  int* r1340 = std____new_allocator_int___allocate(base1337, t1338, c1339);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1326 = r1340;
  int* t1341 = __retval1326;
  return t1341;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1342, unsigned long v1343) {
bb1344: ;
  struct std__allocator_int_* __a1345;
  unsigned long __n1346;
  int* __retval1347;
  __a1345 = v1342;
  __n1346 = v1343;
  struct std__allocator_int_* t1348 = __a1345;
  unsigned long t1349 = __n1346;
  int* r1350 = std__allocator_int___allocate(t1348, t1349);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1347 = r1350;
  int* t1351 = __retval1347;
  return t1351;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v1352) {
bb1353: ;
  struct std___Deque_base_int__std__allocator_int__* this1354;
  int* __retval1355;
  this1354 = v1352;
  struct std___Deque_base_int__std__allocator_int__* t1356 = this1354;
  struct std__allocator_int_* base1357 = (struct std__allocator_int_*)((char *)&(t1356->_M_impl) + 0);
  unsigned long c1358 = 4;
  unsigned long r1359 = std____deque_buf_size(c1358);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r1360 = std__allocator_traits_std__allocator_int_____allocate(base1357, r1359);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1355 = r1360;
  int* t1361 = __retval1355;
  return t1361;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1362, int* v1363, unsigned long v1364) {
bb1365: ;
  struct std____new_allocator_int_* this1366;
  int* __p1367;
  unsigned long __n1368;
  this1366 = v1362;
  __p1367 = v1363;
  __n1368 = v1364;
  struct std____new_allocator_int_* t1369 = this1366;
    unsigned long c1370 = 4;
    unsigned long c1371 = 16;
    _Bool c1372 = ((c1370 > c1371)) ? 1 : 0;
    if (c1372) {
      int* t1373 = __p1367;
      void* cast1374 = (void*)t1373;
      unsigned long t1375 = __n1368;
      unsigned long c1376 = 4;
      unsigned long b1377 = t1375 * c1376;
      unsigned long c1378 = 4;
      operator_delete_3(cast1374, b1377, c1378);
      return;
    }
  int* t1379 = __p1367;
  void* cast1380 = (void*)t1379;
  unsigned long t1381 = __n1368;
  unsigned long c1382 = 4;
  unsigned long b1383 = t1381 * c1382;
  operator_delete_2(cast1380, b1383);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1384, int* v1385, unsigned long v1386) {
bb1387: ;
  struct std__allocator_int_* this1388;
  int* __p1389;
  unsigned long __n1390;
  this1388 = v1384;
  __p1389 = v1385;
  __n1390 = v1386;
  struct std__allocator_int_* t1391 = this1388;
    _Bool r1392 = std____is_constant_evaluated();
    if (r1392) {
      int* t1393 = __p1389;
      void* cast1394 = (void*)t1393;
      operator_delete(cast1394);
      return;
    }
  struct std____new_allocator_int_* base1395 = (struct std____new_allocator_int_*)((char *)t1391 + 0);
  int* t1396 = __p1389;
  unsigned long t1397 = __n1390;
  std____new_allocator_int___deallocate(base1395, t1396, t1397);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1398, int* v1399, unsigned long v1400) {
bb1401: ;
  struct std__allocator_int_* __a1402;
  int* __p1403;
  unsigned long __n1404;
  __a1402 = v1398;
  __p1403 = v1399;
  __n1404 = v1400;
  struct std__allocator_int_* t1405 = __a1402;
  int* t1406 = __p1403;
  unsigned long t1407 = __n1404;
  std__allocator_int___deallocate(t1405, t1406, t1407);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v1408, int* v1409) {
bb1410: ;
  struct std___Deque_base_int__std__allocator_int__* this1411;
  int* __p1412;
  this1411 = v1408;
  __p1412 = v1409;
  struct std___Deque_base_int__std__allocator_int__* t1413 = this1411;
  struct std__allocator_int_* base1414 = (struct std__allocator_int_*)((char *)&(t1413->_M_impl) + 0);
  int* t1415 = __p1412;
  unsigned long c1416 = 4;
  unsigned long r1417 = std____deque_buf_size(c1416);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base1414, t1415, r1417);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v1418, int** v1419, int** v1420) {
bb1421: ;
  struct std___Deque_base_int__std__allocator_int__* this1422;
  int** __nstart1423;
  int** __nfinish1424;
  this1422 = v1418;
  __nstart1423 = v1419;
  __nfinish1424 = v1420;
  struct std___Deque_base_int__std__allocator_int__* t1425 = this1422;
    int** __n1426;
    int** t1427 = __nstart1423;
    __n1426 = t1427;
    while (1) {
      int** t1429 = __n1426;
      int** t1430 = __nfinish1424;
      _Bool c1431 = ((t1429 < t1430)) ? 1 : 0;
      if (!c1431) break;
      int** t1432 = __n1426;
      int* t1433 = *t1432;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t1425, t1433);
    for_step1428: ;
      int** t1434 = __n1426;
      int c1435 = 1;
      int** ptr1436 = &(t1434)[c1435];
      __n1426 = ptr1436;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v1437, int** v1438, int** v1439) {
bb1440: ;
  struct std___Deque_base_int__std__allocator_int__* this1441;
  int** __nstart1442;
  int** __nfinish1443;
  int** __cur1444;
  this1441 = v1437;
  __nstart1442 = v1438;
  __nfinish1443 = v1439;
  struct std___Deque_base_int__std__allocator_int__* t1445 = this1441;
        int** t1447 = __nstart1442;
        __cur1444 = t1447;
        while (1) {
          int** t1449 = __cur1444;
          int** t1450 = __nfinish1443;
          _Bool c1451 = ((t1449 < t1450)) ? 1 : 0;
          if (!c1451) break;
          int* r1452 = std___Deque_base_int__std__allocator_int______M_allocate_node(t1445);
          if (__cir_exc_active) {
            goto cir_try_dispatch1446;
          }
          int** t1453 = __cur1444;
          *t1453 = r1452;
        for_step1448: ;
          int** t1454 = __cur1444;
          int c1455 = 1;
          int** ptr1456 = &(t1454)[c1455];
          __cur1444 = ptr1456;
        }
    cir_try_dispatch1446: ;
    if (__cir_exc_active) {
    {
      int ca_tok1457 = 0;
      void* ca_exn1458 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t1459 = __nstart1442;
        int** t1460 = __cur1444;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1445, t1459, t1460);
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
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v1461, int** v1462, unsigned long v1463) {
bb1464: ;
  struct std____new_allocator_int___* this1465;
  int** __p1466;
  unsigned long __n1467;
  this1465 = v1461;
  __p1466 = v1462;
  __n1467 = v1463;
  struct std____new_allocator_int___* t1468 = this1465;
    unsigned long c1469 = 8;
    unsigned long c1470 = 16;
    _Bool c1471 = ((c1469 > c1470)) ? 1 : 0;
    if (c1471) {
      int** t1472 = __p1466;
      void* cast1473 = (void*)t1472;
      unsigned long t1474 = __n1467;
      unsigned long c1475 = 8;
      unsigned long b1476 = t1474 * c1475;
      unsigned long c1477 = 8;
      operator_delete_3(cast1473, b1476, c1477);
      return;
    }
  int** t1478 = __p1466;
  void* cast1479 = (void*)t1478;
  unsigned long t1480 = __n1467;
  unsigned long c1481 = 8;
  unsigned long b1482 = t1480 * c1481;
  operator_delete_2(cast1479, b1482);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v1483, int** v1484, unsigned long v1485) {
bb1486: ;
  struct std__allocator_int___* this1487;
  int** __p1488;
  unsigned long __n1489;
  this1487 = v1483;
  __p1488 = v1484;
  __n1489 = v1485;
  struct std__allocator_int___* t1490 = this1487;
    _Bool r1491 = std____is_constant_evaluated();
    if (r1491) {
      int** t1492 = __p1488;
      void* cast1493 = (void*)t1492;
      operator_delete(cast1493);
      return;
    }
  struct std____new_allocator_int___* base1494 = (struct std____new_allocator_int___*)((char *)t1490 + 0);
  int** t1495 = __p1488;
  unsigned long t1496 = __n1489;
  std____new_allocator_int____deallocate(base1494, t1495, t1496);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v1497, int** v1498, unsigned long v1499) {
bb1500: ;
  struct std__allocator_int___* __a1501;
  int** __p1502;
  unsigned long __n1503;
  __a1501 = v1497;
  __p1502 = v1498;
  __n1503 = v1499;
  struct std__allocator_int___* t1504 = __a1501;
  int** t1505 = __p1502;
  unsigned long t1506 = __n1503;
  std__allocator_int____deallocate(t1504, t1505, t1506);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v1507, int** v1508, unsigned long v1509) {
bb1510: ;
  struct std___Deque_base_int__std__allocator_int__* this1511;
  int** __p1512;
  unsigned long __n1513;
  struct std__allocator_int___ __map_alloc1514;
  this1511 = v1507;
  __p1512 = v1508;
  __n1513 = v1509;
  struct std___Deque_base_int__std__allocator_int__* t1515 = this1511;
  struct std__allocator_int___ r1516 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1515);
  __map_alloc1514 = r1516;
  int** t1517 = __p1512;
  unsigned long t1518 = __n1513;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc1514, t1517, t1518);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size() {
bb1519: ;
  unsigned long __retval1520;
  unsigned long c1521 = 4;
  unsigned long r1522 = std____deque_buf_size(c1521);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1520 = r1522;
  unsigned long t1523 = __retval1520;
  return t1523;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v1524, int** v1525) {
bb1526: ;
  struct std___Deque_iterator_int__int____int___* this1527;
  int** __new_node1528;
  this1527 = v1524;
  __new_node1528 = v1525;
  struct std___Deque_iterator_int__int____int___* t1529 = this1527;
  int** t1530 = __new_node1528;
  t1529->_M_node = t1530;
  int** t1531 = __new_node1528;
  int* t1532 = *t1531;
  t1529->_M_first = t1532;
  int* t1533 = t1529->_M_first;
  unsigned long r1534 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1535 = (long)r1534;
  int* ptr1536 = &(t1533)[cast1535];
  t1529->_M_last = ptr1536;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v1537, unsigned long v1538) {
bb1539: ;
  struct std___Deque_base_int__std__allocator_int__* this1540;
  unsigned long __num_elements1541;
  unsigned long __num_nodes1542;
  unsigned long ref_tmp01543;
  unsigned long ref_tmp11544;
  int** __nstart1545;
  int** __nfinish1546;
  this1540 = v1537;
  __num_elements1541 = v1538;
  struct std___Deque_base_int__std__allocator_int__* t1547 = this1540;
  unsigned long t1548 = __num_elements1541;
  unsigned long c1549 = 4;
  unsigned long r1550 = std____deque_buf_size(c1549);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1551 = t1548 / r1550;
  unsigned long c1552 = 1;
  unsigned long b1553 = b1551 + c1552;
  __num_nodes1542 = b1553;
  unsigned long c1554 = 8;
  ref_tmp01543 = c1554;
  unsigned long t1555 = __num_nodes1542;
  unsigned long c1556 = 2;
  unsigned long b1557 = t1555 + c1556;
  ref_tmp11544 = b1557;
  unsigned long* r1558 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01543, &ref_tmp11544);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1559 = *r1558;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1560 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1547->_M_impl) + 0);
  base1560->_M_map_size = t1559;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1561 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1547->_M_impl) + 0);
  unsigned long t1562 = base1561->_M_map_size;
  int** r1563 = std___Deque_base_int__std__allocator_int______M_allocate_map(t1547, t1562);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1564 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1547->_M_impl) + 0);
  base1564->_M_map = r1563;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1565 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1547->_M_impl) + 0);
  int** t1566 = base1565->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1567 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1547->_M_impl) + 0);
  unsigned long t1568 = base1567->_M_map_size;
  unsigned long t1569 = __num_nodes1542;
  unsigned long b1570 = t1568 - t1569;
  unsigned long c1571 = 2;
  unsigned long b1572 = b1570 / c1571;
  int** ptr1573 = &(t1566)[b1572];
  __nstart1545 = ptr1573;
  int** t1574 = __nstart1545;
  unsigned long t1575 = __num_nodes1542;
  int** ptr1576 = &(t1574)[t1575];
  __nfinish1546 = ptr1576;
      int** t1578 = __nstart1545;
      int** t1579 = __nfinish1546;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t1547, t1578, t1579);
      if (__cir_exc_active) {
        goto cir_try_dispatch1577;
      }
    cir_try_dispatch1577: ;
    if (__cir_exc_active) {
    {
      int ca_tok1580 = 0;
      void* ca_exn1581 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1582 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1547->_M_impl) + 0);
        int** t1583 = base1582->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1584 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1547->_M_impl) + 0);
        unsigned long t1585 = base1584->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1547, t1583, t1585);
        int** c1586 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1587 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1547->_M_impl) + 0);
        base1587->_M_map = c1586;
        unsigned long c1588 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1589 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1547->_M_impl) + 0);
        base1589->_M_map_size = c1588;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1590 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1547->_M_impl) + 0);
  int** t1591 = __nstart1545;
  std___Deque_iterator_int__int___int_____M_set_node(&base1590->_M_start, t1591);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1592 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1547->_M_impl) + 0);
  int** t1593 = __nfinish1546;
  int c1594 = -1;
  int** ptr1595 = &(t1593)[c1594];
  std___Deque_iterator_int__int___int_____M_set_node(&base1592->_M_finish, ptr1595);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1596 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1547->_M_impl) + 0);
  int* t1597 = base1596->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1598 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1547->_M_impl) + 0);
  base1598->_M_start._M_cur = t1597;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1599 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1547->_M_impl) + 0);
  int* t1600 = base1599->_M_finish._M_first;
  unsigned long t1601 = __num_elements1541;
  unsigned long c1602 = 4;
  unsigned long r1603 = std____deque_buf_size(c1602);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1604 = t1601 % r1603;
  int* ptr1605 = &(t1600)[b1604];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1606 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1547->_M_impl) + 0);
  base1606->_M_finish._M_cur = ptr1605;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1607) {
bb1608: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1609;
  this1609 = v1607;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1610 = this1609;
  {
    struct std__allocator_int_* base1611 = (struct std__allocator_int_*)((char *)t1610 + 0);
    std__allocator_int____allocator(base1611);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1612) {
bb1613: ;
  struct std___Deque_base_int__std__allocator_int__* this1614;
  this1614 = v1612;
  struct std___Deque_base_int__std__allocator_int__* t1615 = this1614;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1615->_M_impl);
    unsigned long c1616 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1615, c1616);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1615->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1617) {
bb1618: ;
  struct std___Deque_base_int__std__allocator_int__* this1619;
  this1619 = v1617;
  struct std___Deque_base_int__std__allocator_int__* t1620 = this1619;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1621 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1620->_M_impl) + 0);
      int** t1622 = base1621->_M_map;
      _Bool cast1623 = (_Bool)t1622;
      if (cast1623) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1624 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1620->_M_impl) + 0);
        int** t1625 = base1624->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1626 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1620->_M_impl) + 0);
        int** t1627 = base1626->_M_finish._M_node;
        int c1628 = 1;
        int** ptr1629 = &(t1627)[c1628];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1620, t1625, ptr1629);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1630 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1620->_M_impl) + 0);
        int** t1631 = base1630->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1632 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1620->_M_impl) + 0);
        unsigned long t1633 = base1632->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1620, t1631, t1633);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1620->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1634) {
bb1635: ;
  struct std____new_allocator_int_* this1636;
  this1636 = v1634;
  struct std____new_allocator_int_* t1637 = this1636;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1638) {
bb1639: ;
  struct std__allocator_int_* this1640;
  this1640 = v1638;
  struct std__allocator_int_* t1641 = this1640;
  struct std____new_allocator_int_* base1642 = (struct std____new_allocator_int_*)((char *)t1641 + 0);
  std____new_allocator_int_____new_allocator(base1642);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1643) {
bb1644: ;
  struct std___Deque_iterator_int__int____int___* this1645;
  this1645 = v1643;
  struct std___Deque_iterator_int__int____int___* t1646 = this1645;
  int* c1647 = ((void*)0);
  t1646->_M_cur = c1647;
  int* c1648 = ((void*)0);
  t1646->_M_first = c1648;
  int* c1649 = ((void*)0);
  t1646->_M_last = c1649;
  int** c1650 = ((void*)0);
  t1646->_M_node = c1650;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1651) {
bb1652: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1653;
  this1653 = v1651;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1654 = this1653;
  int** c1655 = ((void*)0);
  t1654->_M_map = c1655;
  unsigned long c1656 = 0;
  t1654->_M_map_size = c1656;
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1654->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1654->_M_finish);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1657) {
bb1658: ;
  struct std__allocator_int_* this1659;
  this1659 = v1657;
  struct std__allocator_int_* t1660 = this1659;
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1661) {
bb1662: ;
  struct std____new_allocator_int___* this1663;
  this1663 = v1661;
  struct std____new_allocator_int___* t1664 = this1663;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1665) {
bb1666: ;
  int* __location1667;
  __location1667 = v1665;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1668, int* v1669) {
bb1670: ;
  int* __first1671;
  int* __last1672;
  __first1671 = v1668;
  __last1672 = v1669;
      _Bool r1673 = std____is_constant_evaluated();
      if (r1673) {
          while (1) {
            int* t1675 = __first1671;
            int* t1676 = __last1672;
            _Bool c1677 = ((t1675 != t1676)) ? 1 : 0;
            if (!c1677) break;
            int* t1678 = __first1671;
            void_std__destroy_at_int_(t1678);
            if (__cir_exc_active) {
              return;
            }
          for_step1674: ;
            int* t1679 = __first1671;
            int c1680 = 1;
            int* ptr1681 = &(t1679)[c1680];
            __first1671 = ptr1681;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1682, int* v1683, struct std__allocator_int_* v1684) {
bb1685: ;
  int* __first1686;
  int* __last1687;
  struct std__allocator_int_* unnamed1688;
  __first1686 = v1682;
  __last1687 = v1683;
  unnamed1688 = v1684;
  int* t1689 = __first1686;
  int* t1690 = __last1687;
  void_std___Destroy_int__(t1689, t1690);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb1691: ;
  unsigned long __retval1692;
  unsigned long c1693 = 4;
  unsigned long r1694 = std____deque_buf_size(c1693);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1692 = r1694;
  unsigned long t1695 = __retval1692;
  return t1695;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v1696, struct std___Deque_iterator_int__int____int___ v1697, struct std___Deque_iterator_int__int____int___ v1698) {
bb1699: ;
  struct std__deque_int__std__allocator_int__* this1700;
  struct std___Deque_iterator_int__int____int___ __first1701;
  struct std___Deque_iterator_int__int____int___ __last1702;
  this1700 = v1696;
  __first1701 = v1697;
  __last1702 = v1698;
  struct std__deque_int__std__allocator_int__* t1703 = this1700;
    int** __node1704;
    int** t1705 = __first1701._M_node;
    int c1706 = 1;
    int** ptr1707 = &(t1705)[c1706];
    __node1704 = ptr1707;
    while (1) {
      int** t1709 = __node1704;
      int** t1710 = __last1702._M_node;
      _Bool c1711 = ((t1709 < t1710)) ? 1 : 0;
      if (!c1711) break;
      int** t1712 = __node1704;
      int* t1713 = *t1712;
      int** t1714 = __node1704;
      int* t1715 = *t1714;
      unsigned long r1716 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr1717 = &(t1715)[r1716];
      struct std___Deque_base_int__std__allocator_int__* base1718 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1703 + 0);
      struct std__allocator_int_* r1719 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1718);
      void_std___Destroy_int___int_(t1713, ptr1717, r1719);
      if (__cir_exc_active) {
        return;
      }
    for_step1708: ;
      int** t1720 = __node1704;
      int c1721 = 1;
      int** ptr1722 = &(t1720)[c1721];
      __node1704 = ptr1722;
    }
    int** t1723 = __first1701._M_node;
    int** t1724 = __last1702._M_node;
    _Bool c1725 = ((t1723 != t1724)) ? 1 : 0;
    if (c1725) {
      int* t1726 = __first1701._M_cur;
      int* t1727 = __first1701._M_last;
      struct std___Deque_base_int__std__allocator_int__* base1728 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1703 + 0);
      struct std__allocator_int_* r1729 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1728);
      void_std___Destroy_int___int_(t1726, t1727, r1729);
      if (__cir_exc_active) {
        return;
      }
      int* t1730 = __last1702._M_first;
      int* t1731 = __last1702._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1732 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1703 + 0);
      struct std__allocator_int_* r1733 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1732);
      void_std___Destroy_int___int_(t1730, t1731, r1733);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t1734 = __first1701._M_cur;
      int* t1735 = __last1702._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1736 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1703 + 0);
      struct std__allocator_int_* r1737 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1736);
      void_std___Destroy_int___int_(t1734, t1735, r1737);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v1738, struct std___Deque_iterator_int__int____int___* v1739) {
bb1740: ;
  struct std___Deque_iterator_int__int____int___* this1741;
  struct std___Deque_iterator_int__int____int___* __x1742;
  this1741 = v1738;
  __x1742 = v1739;
  struct std___Deque_iterator_int__int____int___* t1743 = this1741;
  struct std___Deque_iterator_int__int____int___* t1744 = __x1742;
  int* t1745 = t1744->_M_cur;
  t1743->_M_cur = t1745;
  struct std___Deque_iterator_int__int____int___* t1746 = __x1742;
  int* t1747 = t1746->_M_first;
  t1743->_M_first = t1747;
  struct std___Deque_iterator_int__int____int___* t1748 = __x1742;
  int* t1749 = t1748->_M_last;
  t1743->_M_last = t1749;
  struct std___Deque_iterator_int__int____int___* t1750 = __x1742;
  int** t1751 = t1750->_M_node;
  t1743->_M_node = t1751;
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v1752, struct std___Deque_iterator_int__int____int___ v1753, struct std___Deque_iterator_int__int____int___ v1754, struct std__allocator_int_* v1755) {
bb1756: ;
  struct std__deque_int__std__allocator_int__* this1757;
  struct std___Deque_iterator_int__int____int___ __first1758;
  struct std___Deque_iterator_int__int____int___ __last1759;
  struct std__allocator_int_* unnamed1760;
  this1757 = v1752;
  __first1758 = v1753;
  __last1759 = v1754;
  unnamed1760 = v1755;
  struct std__deque_int__std__allocator_int__* t1761 = this1757;
    _Bool c1762 = 0;
    if (c1762) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01763;
      struct std___Deque_iterator_int__int____int___ agg_tmp11764;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01763, &__first1758);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11764, &__last1759);
      struct std___Deque_iterator_int__int____int___ t1765 = agg_tmp01763;
      struct std___Deque_iterator_int__int____int___ t1766 = agg_tmp11764;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t1761, t1765, t1766);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v1767) {
bb1768: ;
  struct std__deque_int__std__allocator_int__* this1769;
  struct std___Deque_iterator_int__int____int___ __retval1770;
  this1769 = v1767;
  struct std__deque_int__std__allocator_int__* t1771 = this1769;
  struct std___Deque_base_int__std__allocator_int__* base1772 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1771 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1773 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1772->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1770, &base1773->_M_start);
  struct std___Deque_iterator_int__int____int___ t1774 = __retval1770;
  return t1774;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v1775) {
bb1776: ;
  struct std__deque_int__std__allocator_int__* this1777;
  struct std___Deque_iterator_int__int____int___ __retval1778;
  this1777 = v1775;
  struct std__deque_int__std__allocator_int__* t1779 = this1777;
  struct std___Deque_base_int__std__allocator_int__* base1780 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1779 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1781 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1780->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1778, &base1781->_M_finish);
  struct std___Deque_iterator_int__int____int___ t1782 = __retval1778;
  return t1782;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v1783) {
bb1784: ;
  struct std___Deque_base_int__std__allocator_int__* this1785;
  struct std__allocator_int_* __retval1786;
  this1785 = v1783;
  struct std___Deque_base_int__std__allocator_int__* t1787 = this1785;
  struct std__allocator_int_* base1788 = (struct std__allocator_int_*)((char *)&(t1787->_M_impl) + 0);
  __retval1786 = base1788;
  struct std__allocator_int_* t1789 = __retval1786;
  return t1789;
}

