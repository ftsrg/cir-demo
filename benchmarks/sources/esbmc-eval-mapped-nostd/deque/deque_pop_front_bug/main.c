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

int __const_main_arrae[3] = {100, 200, 300};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[37] = "Popping out the elements in mydeque:";
char _str_1[2] = " ";
char _str_2[30] = "mydeque.front() != arrae[n++]";
char _str_3[113] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_pop_front_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[27] = "\nFinal size of mydeque is ";
char _str_5[48] = "cannot create std::deque larger than max_size()";
char _str_6[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv[77] = "reference std::deque<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE9pop_frontEv[76] = "void std::deque<int>::pop_front() [_Tp = int, _Alloc = std::allocator<int>]";
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
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* std__deque_int__std__allocator_int_____front(struct std__deque_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* p0, int* p1);
void std__deque_int__std__allocator_int______M_pop_front_aux(struct std__deque_int__std__allocator_int__* p0);
void std__deque_int__std__allocator_int_____pop_front(struct std__deque_int__std__allocator_int__* p0);
long std__operator_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
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
      char* cast535 = (char*)&(_str_5);
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
            char* cast602 = (char*)&(_str_6);
            int c603 = 1537;
            char* cast604 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv);
            char* cast605 = (char*)&(_str_7);
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

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* v748, struct std___Deque_iterator_int__int____int___* v749) {
bb750: ;
  struct std___Deque_iterator_int__int____int___* __x751;
  struct std___Deque_iterator_int__int____int___* __y752;
  _Bool __retval753;
  __x751 = v748;
  __y752 = v749;
  struct std___Deque_iterator_int__int____int___* t754 = __x751;
  int* t755 = t754->_M_cur;
  struct std___Deque_iterator_int__int____int___* t756 = __y752;
  int* t757 = t756->_M_cur;
  _Bool c758 = ((t755 == t757)) ? 1 : 0;
  __retval753 = c758;
  _Bool t759 = __retval753;
  return t759;
}

// function: _ZNKSt5dequeIiSaIiEE5emptyEv
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* v760) {
bb761: ;
  struct std__deque_int__std__allocator_int__* this762;
  _Bool __retval763;
  this762 = v760;
  struct std__deque_int__std__allocator_int__* t764 = this762;
  struct std___Deque_base_int__std__allocator_int__* base765 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t764 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base766 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base765->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base767 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t764 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base768 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base767->_M_impl) + 0);
  _Bool r769 = std__operator__(&base766->_M_finish, &base768->_M_start);
  __retval763 = r769;
  _Bool t770 = __retval763;
  return t770;
}

// function: _ZNSt5dequeIiSaIiEE5frontEv
int* std__deque_int__std__allocator_int_____front(struct std__deque_int__std__allocator_int__* v771) {
bb772: ;
  struct std__deque_int__std__allocator_int__* this773;
  int* __retval774;
  struct std___Deque_iterator_int__int____int___ ref_tmp0775;
  this773 = v771;
  struct std__deque_int__std__allocator_int__* t776 = this773;
    do {
          _Bool r777 = std__deque_int__std__allocator_int_____empty___const(t776);
          if (r777) {
            char* cast778 = (char*)&(_str_6);
            int c779 = 1513;
            char* cast780 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv);
            char* cast781 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast778, c779, cast780, cast781);
          }
      _Bool c782 = 0;
      if (!c782) break;
    } while (1);
  struct std___Deque_iterator_int__int____int___ r783 = std__deque_int__std__allocator_int_____begin(t776);
  ref_tmp0775 = r783;
  int* r784 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp0775);
  __retval774 = r784;
  int* t785 = __retval774;
  return t785;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v786, int* v787) {
bb788: ;
  struct std__allocator_int_* __a789;
  int* __p790;
  __a789 = v786;
  __p790 = v787;
  int* t791 = __p790;
  void_std__destroy_at_int_(t791);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE16_M_pop_front_auxEv
void std__deque_int__std__allocator_int______M_pop_front_aux(struct std__deque_int__std__allocator_int__* v792) {
bb793: ;
  struct std__deque_int__std__allocator_int__* this794;
  this794 = v792;
  struct std__deque_int__std__allocator_int__* t795 = this794;
  struct std___Deque_base_int__std__allocator_int__* base796 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t795 + 0);
  struct std__allocator_int_* r797 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base796);
  struct std___Deque_base_int__std__allocator_int__* base798 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t795 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base799 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base798->_M_impl) + 0);
  int* t800 = base799->_M_start._M_cur;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(r797, t800);
  struct std___Deque_base_int__std__allocator_int__* base801 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t795 + 0);
  struct std___Deque_base_int__std__allocator_int__* base802 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t795 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base803 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base802->_M_impl) + 0);
  int* t804 = base803->_M_start._M_first;
  std___Deque_base_int__std__allocator_int______M_deallocate_node(base801, t804);
  struct std___Deque_base_int__std__allocator_int__* base805 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t795 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base806 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base805->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base807 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t795 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base808 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base807->_M_impl) + 0);
  int** t809 = base808->_M_start._M_node;
  int c810 = 1;
  int** ptr811 = &(t809)[c810];
  std___Deque_iterator_int__int___int_____M_set_node(&base806->_M_start, ptr811);
  struct std___Deque_base_int__std__allocator_int__* base812 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t795 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base813 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base812->_M_impl) + 0);
  int* t814 = base813->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int__* base815 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t795 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base816 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base815->_M_impl) + 0);
  base816->_M_start._M_cur = t814;
  return;
}

// function: _ZNSt5dequeIiSaIiEE9pop_frontEv
void std__deque_int__std__allocator_int_____pop_front(struct std__deque_int__std__allocator_int__* v817) {
bb818: ;
  struct std__deque_int__std__allocator_int__* this819;
  this819 = v817;
  struct std__deque_int__std__allocator_int__* t820 = this819;
    do {
          _Bool r821 = std__deque_int__std__allocator_int_____empty___const(t820);
          if (r821) {
            char* cast822 = (char*)&(_str_6);
            int c823 = 1643;
            char* cast824 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE9pop_frontEv);
            char* cast825 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast822, c823, cast824, cast825);
          }
      _Bool c826 = 0;
      if (!c826) break;
    } while (1);
    struct std___Deque_base_int__std__allocator_int__* base827 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t820 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base828 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base827->_M_impl) + 0);
    int* t829 = base828->_M_start._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base830 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t820 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base831 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base830->_M_impl) + 0);
    int* t832 = base831->_M_start._M_last;
    int c833 = -1;
    int* ptr834 = &(t832)[c833];
    _Bool c835 = ((t829 != ptr834)) ? 1 : 0;
    if (c835) {
      struct std___Deque_base_int__std__allocator_int__* base836 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t820 + 0);
      struct std__allocator_int_* r837 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base836);
      struct std___Deque_base_int__std__allocator_int__* base838 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t820 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base839 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base838->_M_impl) + 0);
      int* t840 = base839->_M_start._M_cur;
      void_std__allocator_traits_std__allocator_int_____destroy_int_(r837, t840);
      struct std___Deque_base_int__std__allocator_int__* base841 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t820 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base842 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base841->_M_impl) + 0);
      int* t843 = base842->_M_start._M_cur;
      int c844 = 1;
      int* ptr845 = &(t843)[c844];
      base842->_M_start._M_cur = ptr845;
    } else {
      std__deque_int__std__allocator_int______M_pop_front_aux(t820);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiES4_
long std__operator_(struct std___Deque_iterator_int__int____int___* v846, struct std___Deque_iterator_int__int____int___* v847) {
bb848: ;
  struct std___Deque_iterator_int__int____int___* __x849;
  struct std___Deque_iterator_int__int____int___* __y850;
  long __retval851;
  __x849 = v846;
  __y850 = v847;
  unsigned long r852 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast853 = (long)r852;
  struct std___Deque_iterator_int__int____int___* t854 = __x849;
  int** t855 = t854->_M_node;
  struct std___Deque_iterator_int__int____int___* t856 = __y850;
  int** t857 = t856->_M_node;
  long diff858 = t855 - t857;
  struct std___Deque_iterator_int__int____int___* t859 = __x849;
  int** t860 = t859->_M_node;
  _Bool cast861 = (_Bool)t860;
  long cast862 = (long)cast861;
  long b863 = diff858 - cast862;
  long b864 = cast853 * b863;
  struct std___Deque_iterator_int__int____int___* t865 = __x849;
  int* t866 = t865->_M_cur;
  struct std___Deque_iterator_int__int____int___* t867 = __x849;
  int* t868 = t867->_M_first;
  long diff869 = t866 - t868;
  long b870 = b864 + diff869;
  struct std___Deque_iterator_int__int____int___* t871 = __y850;
  int* t872 = t871->_M_last;
  struct std___Deque_iterator_int__int____int___* t873 = __y850;
  int* t874 = t873->_M_cur;
  long diff875 = t872 - t874;
  long b876 = b870 + diff875;
  __retval851 = b876;
  long t877 = __retval851;
  return t877;
}

// function: _ZNKSt5dequeIiSaIiEE4sizeEv
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* v878) {
bb879: ;
  struct std__deque_int__std__allocator_int__* this880;
  unsigned long __retval881;
  unsigned long __sz882;
  this880 = v878;
  struct std__deque_int__std__allocator_int__* t883 = this880;
  struct std___Deque_base_int__std__allocator_int__* base884 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t883 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base885 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base884->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base886 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t883 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base887 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base886->_M_impl) + 0);
  long r888 = std__operator_(&base885->_M_finish, &base887->_M_start);
  unsigned long cast889 = (unsigned long)r888;
  __sz882 = cast889;
    unsigned long t890 = __sz882;
    unsigned long r891 = std__deque_int__std__allocator_int_____max_size___const(t883);
    _Bool c892 = ((t890 > r891)) ? 1 : 0;
    if (c892) {
      __builtin_unreachable();
    }
  unsigned long t893 = __sz882;
  __retval881 = t893;
  unsigned long t894 = __retval881;
  return t894;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v895, void* v896) {
bb897: ;
  struct std__basic_ostream_char__std__char_traits_char__* this898;
  void* __pf899;
  struct std__basic_ostream_char__std__char_traits_char__* __retval900;
  this898 = v895;
  __pf899 = v896;
  struct std__basic_ostream_char__std__char_traits_char__* t901 = this898;
  void* t902 = __pf899;
  struct std__basic_ostream_char__std__char_traits_char__* r903 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t902)(t901);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval900 = r903;
  struct std__basic_ostream_char__std__char_traits_char__* t904 = __retval900;
  return t904;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v905) {
bb906: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os907;
  struct std__basic_ostream_char__std__char_traits_char__* __retval908;
  __os907 = v905;
  struct std__basic_ostream_char__std__char_traits_char__* t909 = __os907;
  struct std__basic_ostream_char__std__char_traits_char__* r910 = std__ostream__flush(t909);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval908 = r910;
  struct std__basic_ostream_char__std__char_traits_char__* t911 = __retval908;
  return t911;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v912) {
bb913: ;
  struct std__ctype_char_* __f914;
  struct std__ctype_char_* __retval915;
  __f914 = v912;
    struct std__ctype_char_* t916 = __f914;
    _Bool cast917 = (_Bool)t916;
    _Bool u918 = !cast917;
    if (u918) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t919 = __f914;
  __retval915 = t919;
  struct std__ctype_char_* t920 = __retval915;
  return t920;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v921, char v922) {
bb923: ;
  struct std__ctype_char_* this924;
  char __c925;
  char __retval926;
  this924 = v921;
  __c925 = v922;
  struct std__ctype_char_* t927 = this924;
    char t928 = t927->_M_widen_ok;
    _Bool cast929 = (_Bool)t928;
    if (cast929) {
      char t930 = __c925;
      unsigned char cast931 = (unsigned char)t930;
      unsigned long cast932 = (unsigned long)cast931;
      char t933 = t927->_M_widen[cast932];
      __retval926 = t933;
      char t934 = __retval926;
      return t934;
    }
  std__ctype_char____M_widen_init___const(t927);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t935 = __c925;
  void** v936 = (void**)t927;
  void* v937 = *((void**)v936);
  char vcall940 = (char)__VERIFIER_virtual_call_char_char(t927, 6, t935);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval926 = vcall940;
  char t941 = __retval926;
  return t941;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v942, char v943) {
bb944: ;
  struct std__basic_ios_char__std__char_traits_char__* this945;
  char __c946;
  char __retval947;
  this945 = v942;
  __c946 = v943;
  struct std__basic_ios_char__std__char_traits_char__* t948 = this945;
  struct std__ctype_char_* t949 = t948->_M_ctype;
  struct std__ctype_char_* r950 = std__ctype_char__const__std____check_facet_std__ctype_char___(t949);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t951 = __c946;
  char r952 = std__ctype_char___widen_char__const(r950, t951);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval947 = r952;
  char t953 = __retval947;
  return t953;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v954) {
bb955: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os956;
  struct std__basic_ostream_char__std__char_traits_char__* __retval957;
  __os956 = v954;
  struct std__basic_ostream_char__std__char_traits_char__* t958 = __os956;
  struct std__basic_ostream_char__std__char_traits_char__* t959 = __os956;
  void** v960 = (void**)t959;
  void* v961 = *((void**)v960);
  unsigned char* cast962 = (unsigned char*)v961;
  long c963 = -24;
  unsigned char* ptr964 = &(cast962)[c963];
  long* cast965 = (long*)ptr964;
  long t966 = *cast965;
  unsigned char* cast967 = (unsigned char*)t959;
  unsigned char* ptr968 = &(cast967)[t966];
  struct std__basic_ostream_char__std__char_traits_char__* cast969 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr968;
  struct std__basic_ios_char__std__char_traits_char__* cast970 = (struct std__basic_ios_char__std__char_traits_char__*)cast969;
  char c971 = 10;
  char r972 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast970, c971);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r973 = std__ostream__put(t958, r972);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r974 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r973);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval957 = r974;
  struct std__basic_ostream_char__std__char_traits_char__* t975 = __retval957;
  return t975;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v976) {
bb977: ;
  struct std__deque_int__std__allocator_int__* this978;
  struct std___Deque_iterator_int__int____int___ agg_tmp0979;
  struct std___Deque_iterator_int__int____int___ agg_tmp1980;
  this978 = v976;
  struct std__deque_int__std__allocator_int__* t981 = this978;
    struct std___Deque_iterator_int__int____int___ r982 = std__deque_int__std__allocator_int_____begin(t981);
    agg_tmp0979 = r982;
    struct std___Deque_iterator_int__int____int___ r983 = std__deque_int__std__allocator_int_____end(t981);
    agg_tmp1980 = r983;
    struct std___Deque_base_int__std__allocator_int__* base984 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t981 + 0);
    struct std__allocator_int_* r985 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base984);
    struct std___Deque_iterator_int__int____int___ t986 = agg_tmp0979;
    struct std___Deque_iterator_int__int____int___ t987 = agg_tmp1980;
    std__deque_int__std__allocator_int______M_destroy_data(t981, t986, t987, r985);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base988 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t981 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base988);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base989 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t981 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base989);
  }
  return;
}

// function: main
int main() {
bb990: ;
  int __retval991;
  struct std__deque_int__std__allocator_int__ mydeque992;
  int sum993;
  int ref_tmp0994;
  int ref_tmp1995;
  int ref_tmp2996;
  int n997;
  int arrae998[3];
  int c999 = 0;
  __retval991 = c999;
  std__deque_int__std__allocator_int_____deque(&mydeque992);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    int c1000 = 0;
    sum993 = c1000;
    int c1001 = 100;
    ref_tmp0994 = c1001;
    std__deque_int__std__allocator_int_____push_back(&mydeque992, &ref_tmp0994);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque992);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1002 = 200;
    ref_tmp1995 = c1002;
    std__deque_int__std__allocator_int_____push_back(&mydeque992, &ref_tmp1995);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque992);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1003 = 300;
    ref_tmp2996 = c1003;
    std__deque_int__std__allocator_int_____push_back(&mydeque992, &ref_tmp2996);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque992);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1004 = 0;
    n997 = c1004;
    // array copy
    __builtin_memcpy(arrae998, __const_main_arrae, (unsigned long)3 * sizeof(__const_main_arrae[0]));
    char* cast1005 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r1006 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1005);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque992);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      while (1) {
        _Bool r1007 = std__deque_int__std__allocator_int_____empty___const(&mydeque992);
        _Bool u1008 = !r1007;
        if (!u1008) break;
          char* cast1009 = (char*)&(_str_1);
          struct std__basic_ostream_char__std__char_traits_char__* r1010 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1009);
          if (__cir_exc_active) {
            {
              std__deque_int__std__allocator_int______deque(&mydeque992);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int* r1011 = std__deque_int__std__allocator_int_____front(&mydeque992);
          int t1012 = *r1011;
          struct std__basic_ostream_char__std__char_traits_char__* r1013 = std__ostream__operator__(r1010, t1012);
          if (__cir_exc_active) {
            {
              std__deque_int__std__allocator_int______deque(&mydeque992);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int* r1014 = std__deque_int__std__allocator_int_____front(&mydeque992);
          int t1015 = *r1014;
          int t1016 = n997;
          int u1017 = t1016 + 1;
          n997 = u1017;
          long cast1018 = (long)t1016;
          int t1019 = arrae998[cast1018];
          _Bool c1020 = ((t1015 != t1019)) ? 1 : 0;
          if (c1020) {
          } else {
            char* cast1021 = (char*)&(_str_2);
            char* c1022 = (char*)_str_3;
            unsigned int c1023 = 27;
            char* cast1024 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast1021, c1022, c1023, cast1024);
          }
          std__deque_int__std__allocator_int_____pop_front(&mydeque992);
      }
    char* cast1025 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r1026 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1025);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque992);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1027 = std__deque_int__std__allocator_int_____size___const(&mydeque992);
    int cast1028 = (int)r1027;
    struct std__basic_ostream_char__std__char_traits_char__* r1029 = std__ostream__operator__(r1026, cast1028);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque992);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1030 = std__ostream__operator___std__ostream_____(r1029, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque992);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1031 = 0;
    __retval991 = c1031;
    int t1032 = __retval991;
    int ret_val1033 = t1032;
    {
      std__deque_int__std__allocator_int______deque(&mydeque992);
    }
    return ret_val1033;
  int t1034 = __retval991;
  return t1034;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1035) {
bb1036: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1037;
  this1037 = v1035;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1038 = this1037;
  struct std__allocator_int_* base1039 = (struct std__allocator_int_*)((char *)t1038 + 0);
  std__allocator_int___allocator(base1039);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1040 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t1038 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base1040);
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v1041) {
bb1042: ;
  unsigned long __size1043;
  unsigned long __retval1044;
  __size1043 = v1041;
  unsigned long t1045 = __size1043;
  unsigned long c1046 = 512;
  _Bool c1047 = ((t1045 < c1046)) ? 1 : 0;
  unsigned long ternary1048;
  if (c1047) {
    unsigned long c1049 = 512;
    unsigned long t1050 = __size1043;
    unsigned long b1051 = c1049 / t1050;
    ternary1048 = (unsigned long)b1051;
  } else {
    unsigned long c1052 = 1;
    ternary1048 = (unsigned long)c1052;
  }
  __retval1044 = ternary1048;
  unsigned long t1053 = __retval1044;
  return t1053;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v1054, unsigned long* v1055) {
bb1056: ;
  unsigned long* __a1057;
  unsigned long* __b1058;
  unsigned long* __retval1059;
  __a1057 = v1054;
  __b1058 = v1055;
    unsigned long* t1060 = __a1057;
    unsigned long t1061 = *t1060;
    unsigned long* t1062 = __b1058;
    unsigned long t1063 = *t1062;
    _Bool c1064 = ((t1061 < t1063)) ? 1 : 0;
    if (c1064) {
      unsigned long* t1065 = __b1058;
      __retval1059 = t1065;
      unsigned long* t1066 = __retval1059;
      return t1066;
    }
  unsigned long* t1067 = __a1057;
  __retval1059 = t1067;
  unsigned long* t1068 = __retval1059;
  return t1068;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1069) {
bb1070: ;
  struct std___Deque_base_int__std__allocator_int__* this1071;
  struct std__allocator_int_* __retval1072;
  this1071 = v1069;
  struct std___Deque_base_int__std__allocator_int__* t1073 = this1071;
  struct std__allocator_int_* base1074 = (struct std__allocator_int_*)((char *)&(t1073->_M_impl) + 0);
  __retval1072 = base1074;
  struct std__allocator_int_* t1075 = __retval1072;
  return t1075;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v1076, struct std__allocator_int_* v1077) {
bb1078: ;
  struct std__allocator_int___* this1079;
  struct std__allocator_int_* unnamed1080;
  this1079 = v1076;
  unnamed1080 = v1077;
  struct std__allocator_int___* t1081 = this1079;
  struct std____new_allocator_int___* base1082 = (struct std____new_allocator_int___*)((char *)t1081 + 0);
  std____new_allocator_int______new_allocator(base1082);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1083) {
bb1084: ;
  struct std___Deque_base_int__std__allocator_int__* this1085;
  struct std__allocator_int___ __retval1086;
  this1085 = v1083;
  struct std___Deque_base_int__std__allocator_int__* t1087 = this1085;
  struct std__allocator_int_* r1088 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t1087);
  std__allocator_int____allocator_int_(&__retval1086, r1088);
  struct std__allocator_int___ t1089 = __retval1086;
  return t1089;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1090: ;
  _Bool __retval1091;
    _Bool c1092 = 0;
    __retval1091 = c1092;
    _Bool t1093 = __retval1091;
    return t1093;
  abort();
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v1094) {
bb1095: ;
  struct std____new_allocator_int___* this1096;
  unsigned long __retval1097;
  this1096 = v1094;
  struct std____new_allocator_int___* t1098 = this1096;
  unsigned long c1099 = 9223372036854775807;
  unsigned long c1100 = 8;
  unsigned long b1101 = c1099 / c1100;
  __retval1097 = b1101;
  unsigned long t1102 = __retval1097;
  return t1102;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v1103, unsigned long v1104, void* v1105) {
bb1106: ;
  struct std____new_allocator_int___* this1107;
  unsigned long __n1108;
  void* unnamed1109;
  int** __retval1110;
  this1107 = v1103;
  __n1108 = v1104;
  unnamed1109 = v1105;
  struct std____new_allocator_int___* t1111 = this1107;
    unsigned long t1112 = __n1108;
    unsigned long r1113 = std____new_allocator_int_____M_max_size___const(t1111);
    _Bool c1114 = ((t1112 > r1113)) ? 1 : 0;
    if (c1114) {
        unsigned long t1115 = __n1108;
        unsigned long c1116 = -1;
        unsigned long c1117 = 8;
        unsigned long b1118 = c1116 / c1117;
        _Bool c1119 = ((t1115 > b1118)) ? 1 : 0;
        if (c1119) {
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
    unsigned long c1120 = 8;
    unsigned long c1121 = 16;
    _Bool c1122 = ((c1120 > c1121)) ? 1 : 0;
    if (c1122) {
      unsigned long __al1123;
      unsigned long c1124 = 8;
      __al1123 = c1124;
      unsigned long t1125 = __n1108;
      unsigned long c1126 = 8;
      unsigned long b1127 = t1125 * c1126;
      unsigned long t1128 = __al1123;
      void* r1129 = operator_new_2(b1127, t1128);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1130 = (int**)r1129;
      __retval1110 = cast1130;
      int** t1131 = __retval1110;
      return t1131;
    }
  unsigned long t1132 = __n1108;
  unsigned long c1133 = 8;
  unsigned long b1134 = t1132 * c1133;
  void* r1135 = operator_new(b1134);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast1136 = (int**)r1135;
  __retval1110 = cast1136;
  int** t1137 = __retval1110;
  return t1137;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v1138, unsigned long v1139) {
bb1140: ;
  struct std__allocator_int___* this1141;
  unsigned long __n1142;
  int** __retval1143;
  this1141 = v1138;
  __n1142 = v1139;
  struct std__allocator_int___* t1144 = this1141;
    _Bool r1145 = std____is_constant_evaluated();
    if (r1145) {
        unsigned long t1146 = __n1142;
        unsigned long c1147 = 8;
        unsigned long ovr1148;
        _Bool ovf1149 = __builtin_mul_overflow(t1146, c1147, &ovr1148);
        __n1142 = ovr1148;
        if (ovf1149) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1150 = __n1142;
      void* r1151 = operator_new(t1150);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1152 = (int**)r1151;
      __retval1143 = cast1152;
      int** t1153 = __retval1143;
      return t1153;
    }
  struct std____new_allocator_int___* base1154 = (struct std____new_allocator_int___*)((char *)t1144 + 0);
  unsigned long t1155 = __n1142;
  void* c1156 = ((void*)0);
  int** r1157 = std____new_allocator_int____allocate(base1154, t1155, c1156);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1143 = r1157;
  int** t1158 = __retval1143;
  return t1158;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v1159, unsigned long v1160) {
bb1161: ;
  struct std__allocator_int___* __a1162;
  unsigned long __n1163;
  int** __retval1164;
  __a1162 = v1159;
  __n1163 = v1160;
  struct std__allocator_int___* t1165 = __a1162;
  unsigned long t1166 = __n1163;
  int** r1167 = std__allocator_int____allocate(t1165, t1166);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1164 = r1167;
  int** t1168 = __retval1164;
  return t1168;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v1169, unsigned long v1170) {
bb1171: ;
  struct std___Deque_base_int__std__allocator_int__* this1172;
  unsigned long __n1173;
  int** __retval1174;
  struct std__allocator_int___ __map_alloc1175;
  this1172 = v1169;
  __n1173 = v1170;
  struct std___Deque_base_int__std__allocator_int__* t1176 = this1172;
  struct std__allocator_int___ r1177 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1176);
  __map_alloc1175 = r1177;
  unsigned long t1178 = __n1173;
  int** r1179 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc1175, t1178);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1174 = r1179;
  int** t1180 = __retval1174;
  return t1180;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1181) {
bb1182: ;
  struct std____new_allocator_int_* this1183;
  unsigned long __retval1184;
  this1183 = v1181;
  struct std____new_allocator_int_* t1185 = this1183;
  unsigned long c1186 = 9223372036854775807;
  unsigned long c1187 = 4;
  unsigned long b1188 = c1186 / c1187;
  __retval1184 = b1188;
  unsigned long t1189 = __retval1184;
  return t1189;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1190, unsigned long v1191, void* v1192) {
bb1193: ;
  struct std____new_allocator_int_* this1194;
  unsigned long __n1195;
  void* unnamed1196;
  int* __retval1197;
  this1194 = v1190;
  __n1195 = v1191;
  unnamed1196 = v1192;
  struct std____new_allocator_int_* t1198 = this1194;
    unsigned long t1199 = __n1195;
    unsigned long r1200 = std____new_allocator_int____M_max_size___const(t1198);
    _Bool c1201 = ((t1199 > r1200)) ? 1 : 0;
    if (c1201) {
        unsigned long t1202 = __n1195;
        unsigned long c1203 = -1;
        unsigned long c1204 = 4;
        unsigned long b1205 = c1203 / c1204;
        _Bool c1206 = ((t1202 > b1205)) ? 1 : 0;
        if (c1206) {
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
    unsigned long c1207 = 4;
    unsigned long c1208 = 16;
    _Bool c1209 = ((c1207 > c1208)) ? 1 : 0;
    if (c1209) {
      unsigned long __al1210;
      unsigned long c1211 = 4;
      __al1210 = c1211;
      unsigned long t1212 = __n1195;
      unsigned long c1213 = 4;
      unsigned long b1214 = t1212 * c1213;
      unsigned long t1215 = __al1210;
      void* r1216 = operator_new_2(b1214, t1215);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1217 = (int*)r1216;
      __retval1197 = cast1217;
      int* t1218 = __retval1197;
      return t1218;
    }
  unsigned long t1219 = __n1195;
  unsigned long c1220 = 4;
  unsigned long b1221 = t1219 * c1220;
  void* r1222 = operator_new(b1221);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast1223 = (int*)r1222;
  __retval1197 = cast1223;
  int* t1224 = __retval1197;
  return t1224;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1225, unsigned long v1226) {
bb1227: ;
  struct std__allocator_int_* this1228;
  unsigned long __n1229;
  int* __retval1230;
  this1228 = v1225;
  __n1229 = v1226;
  struct std__allocator_int_* t1231 = this1228;
    _Bool r1232 = std____is_constant_evaluated();
    if (r1232) {
        unsigned long t1233 = __n1229;
        unsigned long c1234 = 4;
        unsigned long ovr1235;
        _Bool ovf1236 = __builtin_mul_overflow(t1233, c1234, &ovr1235);
        __n1229 = ovr1235;
        if (ovf1236) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1237 = __n1229;
      void* r1238 = operator_new(t1237);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1239 = (int*)r1238;
      __retval1230 = cast1239;
      int* t1240 = __retval1230;
      return t1240;
    }
  struct std____new_allocator_int_* base1241 = (struct std____new_allocator_int_*)((char *)t1231 + 0);
  unsigned long t1242 = __n1229;
  void* c1243 = ((void*)0);
  int* r1244 = std____new_allocator_int___allocate(base1241, t1242, c1243);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1230 = r1244;
  int* t1245 = __retval1230;
  return t1245;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1246, unsigned long v1247) {
bb1248: ;
  struct std__allocator_int_* __a1249;
  unsigned long __n1250;
  int* __retval1251;
  __a1249 = v1246;
  __n1250 = v1247;
  struct std__allocator_int_* t1252 = __a1249;
  unsigned long t1253 = __n1250;
  int* r1254 = std__allocator_int___allocate(t1252, t1253);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1251 = r1254;
  int* t1255 = __retval1251;
  return t1255;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v1256) {
bb1257: ;
  struct std___Deque_base_int__std__allocator_int__* this1258;
  int* __retval1259;
  this1258 = v1256;
  struct std___Deque_base_int__std__allocator_int__* t1260 = this1258;
  struct std__allocator_int_* base1261 = (struct std__allocator_int_*)((char *)&(t1260->_M_impl) + 0);
  unsigned long c1262 = 4;
  unsigned long r1263 = std____deque_buf_size(c1262);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r1264 = std__allocator_traits_std__allocator_int_____allocate(base1261, r1263);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1259 = r1264;
  int* t1265 = __retval1259;
  return t1265;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1266, int* v1267, unsigned long v1268) {
bb1269: ;
  struct std____new_allocator_int_* this1270;
  int* __p1271;
  unsigned long __n1272;
  this1270 = v1266;
  __p1271 = v1267;
  __n1272 = v1268;
  struct std____new_allocator_int_* t1273 = this1270;
    unsigned long c1274 = 4;
    unsigned long c1275 = 16;
    _Bool c1276 = ((c1274 > c1275)) ? 1 : 0;
    if (c1276) {
      int* t1277 = __p1271;
      void* cast1278 = (void*)t1277;
      unsigned long t1279 = __n1272;
      unsigned long c1280 = 4;
      unsigned long b1281 = t1279 * c1280;
      unsigned long c1282 = 4;
      operator_delete_3(cast1278, b1281, c1282);
      return;
    }
  int* t1283 = __p1271;
  void* cast1284 = (void*)t1283;
  unsigned long t1285 = __n1272;
  unsigned long c1286 = 4;
  unsigned long b1287 = t1285 * c1286;
  operator_delete_2(cast1284, b1287);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1288, int* v1289, unsigned long v1290) {
bb1291: ;
  struct std__allocator_int_* this1292;
  int* __p1293;
  unsigned long __n1294;
  this1292 = v1288;
  __p1293 = v1289;
  __n1294 = v1290;
  struct std__allocator_int_* t1295 = this1292;
    _Bool r1296 = std____is_constant_evaluated();
    if (r1296) {
      int* t1297 = __p1293;
      void* cast1298 = (void*)t1297;
      operator_delete(cast1298);
      return;
    }
  struct std____new_allocator_int_* base1299 = (struct std____new_allocator_int_*)((char *)t1295 + 0);
  int* t1300 = __p1293;
  unsigned long t1301 = __n1294;
  std____new_allocator_int___deallocate(base1299, t1300, t1301);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1302, int* v1303, unsigned long v1304) {
bb1305: ;
  struct std__allocator_int_* __a1306;
  int* __p1307;
  unsigned long __n1308;
  __a1306 = v1302;
  __p1307 = v1303;
  __n1308 = v1304;
  struct std__allocator_int_* t1309 = __a1306;
  int* t1310 = __p1307;
  unsigned long t1311 = __n1308;
  std__allocator_int___deallocate(t1309, t1310, t1311);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v1312, int* v1313) {
bb1314: ;
  struct std___Deque_base_int__std__allocator_int__* this1315;
  int* __p1316;
  this1315 = v1312;
  __p1316 = v1313;
  struct std___Deque_base_int__std__allocator_int__* t1317 = this1315;
  struct std__allocator_int_* base1318 = (struct std__allocator_int_*)((char *)&(t1317->_M_impl) + 0);
  int* t1319 = __p1316;
  unsigned long c1320 = 4;
  unsigned long r1321 = std____deque_buf_size(c1320);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base1318, t1319, r1321);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v1322, int** v1323, int** v1324) {
bb1325: ;
  struct std___Deque_base_int__std__allocator_int__* this1326;
  int** __nstart1327;
  int** __nfinish1328;
  this1326 = v1322;
  __nstart1327 = v1323;
  __nfinish1328 = v1324;
  struct std___Deque_base_int__std__allocator_int__* t1329 = this1326;
    int** __n1330;
    int** t1331 = __nstart1327;
    __n1330 = t1331;
    while (1) {
      int** t1333 = __n1330;
      int** t1334 = __nfinish1328;
      _Bool c1335 = ((t1333 < t1334)) ? 1 : 0;
      if (!c1335) break;
      int** t1336 = __n1330;
      int* t1337 = *t1336;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t1329, t1337);
    for_step1332: ;
      int** t1338 = __n1330;
      int c1339 = 1;
      int** ptr1340 = &(t1338)[c1339];
      __n1330 = ptr1340;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v1341, int** v1342, int** v1343) {
bb1344: ;
  struct std___Deque_base_int__std__allocator_int__* this1345;
  int** __nstart1346;
  int** __nfinish1347;
  int** __cur1348;
  this1345 = v1341;
  __nstart1346 = v1342;
  __nfinish1347 = v1343;
  struct std___Deque_base_int__std__allocator_int__* t1349 = this1345;
        int** t1351 = __nstart1346;
        __cur1348 = t1351;
        while (1) {
          int** t1353 = __cur1348;
          int** t1354 = __nfinish1347;
          _Bool c1355 = ((t1353 < t1354)) ? 1 : 0;
          if (!c1355) break;
          int* r1356 = std___Deque_base_int__std__allocator_int______M_allocate_node(t1349);
          if (__cir_exc_active) {
            goto cir_try_dispatch1350;
          }
          int** t1357 = __cur1348;
          *t1357 = r1356;
        for_step1352: ;
          int** t1358 = __cur1348;
          int c1359 = 1;
          int** ptr1360 = &(t1358)[c1359];
          __cur1348 = ptr1360;
        }
    cir_try_dispatch1350: ;
    if (__cir_exc_active) {
    {
      int ca_tok1361 = 0;
      void* ca_exn1362 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t1363 = __nstart1346;
        int** t1364 = __cur1348;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1349, t1363, t1364);
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
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v1365, int** v1366, unsigned long v1367) {
bb1368: ;
  struct std____new_allocator_int___* this1369;
  int** __p1370;
  unsigned long __n1371;
  this1369 = v1365;
  __p1370 = v1366;
  __n1371 = v1367;
  struct std____new_allocator_int___* t1372 = this1369;
    unsigned long c1373 = 8;
    unsigned long c1374 = 16;
    _Bool c1375 = ((c1373 > c1374)) ? 1 : 0;
    if (c1375) {
      int** t1376 = __p1370;
      void* cast1377 = (void*)t1376;
      unsigned long t1378 = __n1371;
      unsigned long c1379 = 8;
      unsigned long b1380 = t1378 * c1379;
      unsigned long c1381 = 8;
      operator_delete_3(cast1377, b1380, c1381);
      return;
    }
  int** t1382 = __p1370;
  void* cast1383 = (void*)t1382;
  unsigned long t1384 = __n1371;
  unsigned long c1385 = 8;
  unsigned long b1386 = t1384 * c1385;
  operator_delete_2(cast1383, b1386);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v1387, int** v1388, unsigned long v1389) {
bb1390: ;
  struct std__allocator_int___* this1391;
  int** __p1392;
  unsigned long __n1393;
  this1391 = v1387;
  __p1392 = v1388;
  __n1393 = v1389;
  struct std__allocator_int___* t1394 = this1391;
    _Bool r1395 = std____is_constant_evaluated();
    if (r1395) {
      int** t1396 = __p1392;
      void* cast1397 = (void*)t1396;
      operator_delete(cast1397);
      return;
    }
  struct std____new_allocator_int___* base1398 = (struct std____new_allocator_int___*)((char *)t1394 + 0);
  int** t1399 = __p1392;
  unsigned long t1400 = __n1393;
  std____new_allocator_int____deallocate(base1398, t1399, t1400);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v1401, int** v1402, unsigned long v1403) {
bb1404: ;
  struct std__allocator_int___* __a1405;
  int** __p1406;
  unsigned long __n1407;
  __a1405 = v1401;
  __p1406 = v1402;
  __n1407 = v1403;
  struct std__allocator_int___* t1408 = __a1405;
  int** t1409 = __p1406;
  unsigned long t1410 = __n1407;
  std__allocator_int____deallocate(t1408, t1409, t1410);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v1411, int** v1412, unsigned long v1413) {
bb1414: ;
  struct std___Deque_base_int__std__allocator_int__* this1415;
  int** __p1416;
  unsigned long __n1417;
  struct std__allocator_int___ __map_alloc1418;
  this1415 = v1411;
  __p1416 = v1412;
  __n1417 = v1413;
  struct std___Deque_base_int__std__allocator_int__* t1419 = this1415;
  struct std__allocator_int___ r1420 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1419);
  __map_alloc1418 = r1420;
  int** t1421 = __p1416;
  unsigned long t1422 = __n1417;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc1418, t1421, t1422);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size() {
bb1423: ;
  unsigned long __retval1424;
  unsigned long c1425 = 4;
  unsigned long r1426 = std____deque_buf_size(c1425);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1424 = r1426;
  unsigned long t1427 = __retval1424;
  return t1427;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v1428, int** v1429) {
bb1430: ;
  struct std___Deque_iterator_int__int____int___* this1431;
  int** __new_node1432;
  this1431 = v1428;
  __new_node1432 = v1429;
  struct std___Deque_iterator_int__int____int___* t1433 = this1431;
  int** t1434 = __new_node1432;
  t1433->_M_node = t1434;
  int** t1435 = __new_node1432;
  int* t1436 = *t1435;
  t1433->_M_first = t1436;
  int* t1437 = t1433->_M_first;
  unsigned long r1438 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1439 = (long)r1438;
  int* ptr1440 = &(t1437)[cast1439];
  t1433->_M_last = ptr1440;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v1441, unsigned long v1442) {
bb1443: ;
  struct std___Deque_base_int__std__allocator_int__* this1444;
  unsigned long __num_elements1445;
  unsigned long __num_nodes1446;
  unsigned long ref_tmp01447;
  unsigned long ref_tmp11448;
  int** __nstart1449;
  int** __nfinish1450;
  this1444 = v1441;
  __num_elements1445 = v1442;
  struct std___Deque_base_int__std__allocator_int__* t1451 = this1444;
  unsigned long t1452 = __num_elements1445;
  unsigned long c1453 = 4;
  unsigned long r1454 = std____deque_buf_size(c1453);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1455 = t1452 / r1454;
  unsigned long c1456 = 1;
  unsigned long b1457 = b1455 + c1456;
  __num_nodes1446 = b1457;
  unsigned long c1458 = 8;
  ref_tmp01447 = c1458;
  unsigned long t1459 = __num_nodes1446;
  unsigned long c1460 = 2;
  unsigned long b1461 = t1459 + c1460;
  ref_tmp11448 = b1461;
  unsigned long* r1462 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01447, &ref_tmp11448);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1463 = *r1462;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1464 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1451->_M_impl) + 0);
  base1464->_M_map_size = t1463;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1465 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1451->_M_impl) + 0);
  unsigned long t1466 = base1465->_M_map_size;
  int** r1467 = std___Deque_base_int__std__allocator_int______M_allocate_map(t1451, t1466);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1468 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1451->_M_impl) + 0);
  base1468->_M_map = r1467;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1469 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1451->_M_impl) + 0);
  int** t1470 = base1469->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1471 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1451->_M_impl) + 0);
  unsigned long t1472 = base1471->_M_map_size;
  unsigned long t1473 = __num_nodes1446;
  unsigned long b1474 = t1472 - t1473;
  unsigned long c1475 = 2;
  unsigned long b1476 = b1474 / c1475;
  int** ptr1477 = &(t1470)[b1476];
  __nstart1449 = ptr1477;
  int** t1478 = __nstart1449;
  unsigned long t1479 = __num_nodes1446;
  int** ptr1480 = &(t1478)[t1479];
  __nfinish1450 = ptr1480;
      int** t1482 = __nstart1449;
      int** t1483 = __nfinish1450;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t1451, t1482, t1483);
      if (__cir_exc_active) {
        goto cir_try_dispatch1481;
      }
    cir_try_dispatch1481: ;
    if (__cir_exc_active) {
    {
      int ca_tok1484 = 0;
      void* ca_exn1485 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1486 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1451->_M_impl) + 0);
        int** t1487 = base1486->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1488 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1451->_M_impl) + 0);
        unsigned long t1489 = base1488->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1451, t1487, t1489);
        int** c1490 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1491 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1451->_M_impl) + 0);
        base1491->_M_map = c1490;
        unsigned long c1492 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1493 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1451->_M_impl) + 0);
        base1493->_M_map_size = c1492;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1494 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1451->_M_impl) + 0);
  int** t1495 = __nstart1449;
  std___Deque_iterator_int__int___int_____M_set_node(&base1494->_M_start, t1495);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1496 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1451->_M_impl) + 0);
  int** t1497 = __nfinish1450;
  int c1498 = -1;
  int** ptr1499 = &(t1497)[c1498];
  std___Deque_iterator_int__int___int_____M_set_node(&base1496->_M_finish, ptr1499);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1500 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1451->_M_impl) + 0);
  int* t1501 = base1500->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1502 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1451->_M_impl) + 0);
  base1502->_M_start._M_cur = t1501;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1503 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1451->_M_impl) + 0);
  int* t1504 = base1503->_M_finish._M_first;
  unsigned long t1505 = __num_elements1445;
  unsigned long c1506 = 4;
  unsigned long r1507 = std____deque_buf_size(c1506);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1508 = t1505 % r1507;
  int* ptr1509 = &(t1504)[b1508];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1510 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1451->_M_impl) + 0);
  base1510->_M_finish._M_cur = ptr1509;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1511) {
bb1512: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1513;
  this1513 = v1511;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1514 = this1513;
  {
    struct std__allocator_int_* base1515 = (struct std__allocator_int_*)((char *)t1514 + 0);
    std__allocator_int____allocator(base1515);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1516) {
bb1517: ;
  struct std___Deque_base_int__std__allocator_int__* this1518;
  this1518 = v1516;
  struct std___Deque_base_int__std__allocator_int__* t1519 = this1518;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1519->_M_impl);
    unsigned long c1520 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1519, c1520);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1519->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1521) {
bb1522: ;
  struct std___Deque_base_int__std__allocator_int__* this1523;
  this1523 = v1521;
  struct std___Deque_base_int__std__allocator_int__* t1524 = this1523;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1525 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1524->_M_impl) + 0);
      int** t1526 = base1525->_M_map;
      _Bool cast1527 = (_Bool)t1526;
      if (cast1527) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1528 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1524->_M_impl) + 0);
        int** t1529 = base1528->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1530 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1524->_M_impl) + 0);
        int** t1531 = base1530->_M_finish._M_node;
        int c1532 = 1;
        int** ptr1533 = &(t1531)[c1532];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1524, t1529, ptr1533);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1534 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1524->_M_impl) + 0);
        int** t1535 = base1534->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1536 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1524->_M_impl) + 0);
        unsigned long t1537 = base1536->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1524, t1535, t1537);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1524->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1538) {
bb1539: ;
  struct std____new_allocator_int_* this1540;
  this1540 = v1538;
  struct std____new_allocator_int_* t1541 = this1540;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1542) {
bb1543: ;
  struct std__allocator_int_* this1544;
  this1544 = v1542;
  struct std__allocator_int_* t1545 = this1544;
  struct std____new_allocator_int_* base1546 = (struct std____new_allocator_int_*)((char *)t1545 + 0);
  std____new_allocator_int_____new_allocator(base1546);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1547) {
bb1548: ;
  struct std___Deque_iterator_int__int____int___* this1549;
  this1549 = v1547;
  struct std___Deque_iterator_int__int____int___* t1550 = this1549;
  int* c1551 = ((void*)0);
  t1550->_M_cur = c1551;
  int* c1552 = ((void*)0);
  t1550->_M_first = c1552;
  int* c1553 = ((void*)0);
  t1550->_M_last = c1553;
  int** c1554 = ((void*)0);
  t1550->_M_node = c1554;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1555) {
bb1556: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1557;
  this1557 = v1555;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1558 = this1557;
  int** c1559 = ((void*)0);
  t1558->_M_map = c1559;
  unsigned long c1560 = 0;
  t1558->_M_map_size = c1560;
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1558->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1558->_M_finish);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1561) {
bb1562: ;
  struct std__allocator_int_* this1563;
  this1563 = v1561;
  struct std__allocator_int_* t1564 = this1563;
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1565) {
bb1566: ;
  struct std____new_allocator_int___* this1567;
  this1567 = v1565;
  struct std____new_allocator_int___* t1568 = this1567;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1569) {
bb1570: ;
  int* __location1571;
  __location1571 = v1569;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1572, int* v1573) {
bb1574: ;
  int* __first1575;
  int* __last1576;
  __first1575 = v1572;
  __last1576 = v1573;
      _Bool r1577 = std____is_constant_evaluated();
      if (r1577) {
          while (1) {
            int* t1579 = __first1575;
            int* t1580 = __last1576;
            _Bool c1581 = ((t1579 != t1580)) ? 1 : 0;
            if (!c1581) break;
            int* t1582 = __first1575;
            void_std__destroy_at_int_(t1582);
            if (__cir_exc_active) {
              return;
            }
          for_step1578: ;
            int* t1583 = __first1575;
            int c1584 = 1;
            int* ptr1585 = &(t1583)[c1584];
            __first1575 = ptr1585;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1586, int* v1587, struct std__allocator_int_* v1588) {
bb1589: ;
  int* __first1590;
  int* __last1591;
  struct std__allocator_int_* unnamed1592;
  __first1590 = v1586;
  __last1591 = v1587;
  unnamed1592 = v1588;
  int* t1593 = __first1590;
  int* t1594 = __last1591;
  void_std___Destroy_int__(t1593, t1594);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb1595: ;
  unsigned long __retval1596;
  unsigned long c1597 = 4;
  unsigned long r1598 = std____deque_buf_size(c1597);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1596 = r1598;
  unsigned long t1599 = __retval1596;
  return t1599;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v1600, struct std___Deque_iterator_int__int____int___ v1601, struct std___Deque_iterator_int__int____int___ v1602) {
bb1603: ;
  struct std__deque_int__std__allocator_int__* this1604;
  struct std___Deque_iterator_int__int____int___ __first1605;
  struct std___Deque_iterator_int__int____int___ __last1606;
  this1604 = v1600;
  __first1605 = v1601;
  __last1606 = v1602;
  struct std__deque_int__std__allocator_int__* t1607 = this1604;
    int** __node1608;
    int** t1609 = __first1605._M_node;
    int c1610 = 1;
    int** ptr1611 = &(t1609)[c1610];
    __node1608 = ptr1611;
    while (1) {
      int** t1613 = __node1608;
      int** t1614 = __last1606._M_node;
      _Bool c1615 = ((t1613 < t1614)) ? 1 : 0;
      if (!c1615) break;
      int** t1616 = __node1608;
      int* t1617 = *t1616;
      int** t1618 = __node1608;
      int* t1619 = *t1618;
      unsigned long r1620 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr1621 = &(t1619)[r1620];
      struct std___Deque_base_int__std__allocator_int__* base1622 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1607 + 0);
      struct std__allocator_int_* r1623 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1622);
      void_std___Destroy_int___int_(t1617, ptr1621, r1623);
      if (__cir_exc_active) {
        return;
      }
    for_step1612: ;
      int** t1624 = __node1608;
      int c1625 = 1;
      int** ptr1626 = &(t1624)[c1625];
      __node1608 = ptr1626;
    }
    int** t1627 = __first1605._M_node;
    int** t1628 = __last1606._M_node;
    _Bool c1629 = ((t1627 != t1628)) ? 1 : 0;
    if (c1629) {
      int* t1630 = __first1605._M_cur;
      int* t1631 = __first1605._M_last;
      struct std___Deque_base_int__std__allocator_int__* base1632 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1607 + 0);
      struct std__allocator_int_* r1633 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1632);
      void_std___Destroy_int___int_(t1630, t1631, r1633);
      if (__cir_exc_active) {
        return;
      }
      int* t1634 = __last1606._M_first;
      int* t1635 = __last1606._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1636 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1607 + 0);
      struct std__allocator_int_* r1637 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1636);
      void_std___Destroy_int___int_(t1634, t1635, r1637);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t1638 = __first1605._M_cur;
      int* t1639 = __last1606._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1640 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1607 + 0);
      struct std__allocator_int_* r1641 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1640);
      void_std___Destroy_int___int_(t1638, t1639, r1641);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v1642, struct std___Deque_iterator_int__int____int___* v1643) {
bb1644: ;
  struct std___Deque_iterator_int__int____int___* this1645;
  struct std___Deque_iterator_int__int____int___* __x1646;
  this1645 = v1642;
  __x1646 = v1643;
  struct std___Deque_iterator_int__int____int___* t1647 = this1645;
  struct std___Deque_iterator_int__int____int___* t1648 = __x1646;
  int* t1649 = t1648->_M_cur;
  t1647->_M_cur = t1649;
  struct std___Deque_iterator_int__int____int___* t1650 = __x1646;
  int* t1651 = t1650->_M_first;
  t1647->_M_first = t1651;
  struct std___Deque_iterator_int__int____int___* t1652 = __x1646;
  int* t1653 = t1652->_M_last;
  t1647->_M_last = t1653;
  struct std___Deque_iterator_int__int____int___* t1654 = __x1646;
  int** t1655 = t1654->_M_node;
  t1647->_M_node = t1655;
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v1656, struct std___Deque_iterator_int__int____int___ v1657, struct std___Deque_iterator_int__int____int___ v1658, struct std__allocator_int_* v1659) {
bb1660: ;
  struct std__deque_int__std__allocator_int__* this1661;
  struct std___Deque_iterator_int__int____int___ __first1662;
  struct std___Deque_iterator_int__int____int___ __last1663;
  struct std__allocator_int_* unnamed1664;
  this1661 = v1656;
  __first1662 = v1657;
  __last1663 = v1658;
  unnamed1664 = v1659;
  struct std__deque_int__std__allocator_int__* t1665 = this1661;
    _Bool c1666 = 0;
    if (c1666) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01667;
      struct std___Deque_iterator_int__int____int___ agg_tmp11668;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01667, &__first1662);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11668, &__last1663);
      struct std___Deque_iterator_int__int____int___ t1669 = agg_tmp01667;
      struct std___Deque_iterator_int__int____int___ t1670 = agg_tmp11668;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t1665, t1669, t1670);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v1671) {
bb1672: ;
  struct std__deque_int__std__allocator_int__* this1673;
  struct std___Deque_iterator_int__int____int___ __retval1674;
  this1673 = v1671;
  struct std__deque_int__std__allocator_int__* t1675 = this1673;
  struct std___Deque_base_int__std__allocator_int__* base1676 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1675 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1677 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1676->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1674, &base1677->_M_start);
  struct std___Deque_iterator_int__int____int___ t1678 = __retval1674;
  return t1678;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v1679) {
bb1680: ;
  struct std__deque_int__std__allocator_int__* this1681;
  struct std___Deque_iterator_int__int____int___ __retval1682;
  this1681 = v1679;
  struct std__deque_int__std__allocator_int__* t1683 = this1681;
  struct std___Deque_base_int__std__allocator_int__* base1684 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1683 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1685 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1684->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1682, &base1685->_M_finish);
  struct std___Deque_iterator_int__int____int___ t1686 = __retval1682;
  return t1686;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v1687) {
bb1688: ;
  struct std___Deque_base_int__std__allocator_int__* this1689;
  struct std__allocator_int_* __retval1690;
  this1689 = v1687;
  struct std___Deque_base_int__std__allocator_int__* t1691 = this1689;
  struct std__allocator_int_* base1692 = (struct std__allocator_int_*)((char *)&(t1691->_M_impl) + 0);
  __retval1690 = base1692;
  struct std__allocator_int_* t1693 = __retval1690;
  return t1693;
}

