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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[37] = "Popping out the elements in mydeque:";
char _str_1[21] = "mydeque.front()==100";
char _str_2[99] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch21_42/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[27] = "\nFinal size of mydeque is ";
char _str_4[23] = "int(mydeque.size())==0";
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
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* p0);
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
int* std__deque_int__std__allocator_int_____front(struct std__deque_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* p0, int* p1);
void std__deque_int__std__allocator_int______M_pop_front_aux(struct std__deque_int__std__allocator_int__* p0);
void std__deque_int__std__allocator_int_____pop_front(struct std__deque_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
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

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v5, int* v6) {
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

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v19, int* v20, int* v21) {
bb22:
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

// function: _ZNSt5dequeIiSaIiEE16_M_push_back_auxIJiEEEvDpOT_
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_(struct std__deque_int__std__allocator_int__* v526, int* v527) {
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

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* v572, struct std___Deque_iterator_int__int____int___* v573) {
bb574:
  struct std___Deque_iterator_int__int____int___* __x575;
  struct std___Deque_iterator_int__int____int___* __y576;
  _Bool __retval577;
  __x575 = v572;
  __y576 = v573;
  struct std___Deque_iterator_int__int____int___* t578 = __x575;
  int* t579 = t578->_M_cur;
  struct std___Deque_iterator_int__int____int___* t580 = __y576;
  int* t581 = t580->_M_cur;
  _Bool c582 = ((t579 == t581)) ? 1 : 0;
  __retval577 = c582;
  _Bool t583 = __retval577;
  return t583;
}

// function: _ZNKSt5dequeIiSaIiEE5emptyEv
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* v584) {
bb585:
  struct std__deque_int__std__allocator_int__* this586;
  _Bool __retval587;
  this586 = v584;
  struct std__deque_int__std__allocator_int__* t588 = this586;
  struct std___Deque_base_int__std__allocator_int__* base589 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t588 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base590 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base589->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base591 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t588 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base592 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base591->_M_impl) + 0);
  _Bool r593 = std__operator__(&base590->_M_finish, &base592->_M_start);
  __retval587 = r593;
  _Bool t594 = __retval587;
  return t594;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEmmEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* v595) {
bb596:
  struct std___Deque_iterator_int__int____int___* this597;
  struct std___Deque_iterator_int__int____int___* __retval598;
  this597 = v595;
  struct std___Deque_iterator_int__int____int___* t599 = this597;
    int* t600 = t599->_M_cur;
    int* t601 = t599->_M_first;
    _Bool c602 = ((t600 == t601)) ? 1 : 0;
    if (c602) {
      int** t603 = t599->_M_node;
      int c604 = -1;
      int** ptr605 = &(t603)[c604];
      std___Deque_iterator_int__int___int_____M_set_node(t599, ptr605);
      int* t606 = t599->_M_last;
      t599->_M_cur = t606;
    }
  int* t607 = t599->_M_cur;
  int c608 = -1;
  int* ptr609 = &(t607)[c608];
  t599->_M_cur = ptr609;
  __retval598 = t599;
  struct std___Deque_iterator_int__int____int___* t610 = __retval598;
  return t610;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v611) {
bb612:
  struct std___Deque_iterator_int__int____int___* this613;
  int* __retval614;
  this613 = v611;
  struct std___Deque_iterator_int__int____int___* t615 = this613;
  int* t616 = t615->_M_cur;
  __retval614 = t616;
  int* t617 = __retval614;
  return t617;
}

// function: _ZNSt5dequeIiSaIiEE4backEv
int* std__deque_int__std__allocator_int_____back(struct std__deque_int__std__allocator_int__* v618) {
bb619:
  struct std__deque_int__std__allocator_int__* this620;
  int* __retval621;
  struct std___Deque_iterator_int__int____int___ __tmp622;
  this620 = v618;
  struct std__deque_int__std__allocator_int__* t623 = this620;
    do {
          _Bool r624 = std__deque_int__std__allocator_int_____empty___const(t623);
          if (r624) {
            char* cast625 = (char*)&(_str_6);
            int c626 = 1537;
            char* cast627 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv);
            char* cast628 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast625, c626, cast627, cast628);
          }
      _Bool c629 = 0;
      if (!c629) break;
    } while (1);
  struct std___Deque_iterator_int__int____int___ r630 = std__deque_int__std__allocator_int_____end(t623);
  __tmp622 = r630;
  struct std___Deque_iterator_int__int____int___* r631 = std___Deque_iterator_int__int___int____operator__(&__tmp622);
  int* r632 = std___Deque_iterator_int__int___int____operator____const(&__tmp622);
  __retval621 = r632;
  int* t633 = __retval621;
  return t633;
}

// function: _ZNSt5dequeIiSaIiEE12emplace_backIJiEEERiDpOT_
int* int__std__deque_int__std__allocator_int_____emplace_back_int_(struct std__deque_int__std__allocator_int__* v634, int* v635) {
bb636:
  struct std__deque_int__std__allocator_int__* this637;
  int* __args638;
  int* __retval639;
  this637 = v634;
  __args638 = v635;
  struct std__deque_int__std__allocator_int__* t640 = this637;
    struct std___Deque_base_int__std__allocator_int__* base641 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t640 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base642 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base641->_M_impl) + 0);
    int* t643 = base642->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base644 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t640 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base645 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base644->_M_impl) + 0);
    int* t646 = base645->_M_finish._M_last;
    int c647 = -1;
    int* ptr648 = &(t646)[c647];
    _Bool c649 = ((t643 != ptr648)) ? 1 : 0;
    if (c649) {
      struct std___Deque_base_int__std__allocator_int__* base650 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t640 + 0);
      struct std__allocator_int_* base651 = (struct std__allocator_int_*)((char *)&(base650->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base652 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t640 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base653 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base652->_M_impl) + 0);
      int* t654 = base653->_M_finish._M_cur;
      int* t655 = __args638;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base651, t654, t655);
      struct std___Deque_base_int__std__allocator_int__* base656 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t640 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base657 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base656->_M_impl) + 0);
      int* t658 = base657->_M_finish._M_cur;
      int c659 = 1;
      int* ptr660 = &(t658)[c659];
      base657->_M_finish._M_cur = ptr660;
    } else {
      int* t661 = __args638;
      void_std__deque_int__std__allocator_int______M_push_back_aux_int_(t640, t661);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    }
  int* r662 = std__deque_int__std__allocator_int_____back(t640);
  __retval639 = r662;
  int* t663 = __retval639;
  return t663;
}

// function: _ZNSt5dequeIiSaIiEE9push_backEOi
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* v664, int* v665) {
bb666:
  struct std__deque_int__std__allocator_int__* this667;
  int* __x668;
  this667 = v664;
  __x668 = v665;
  struct std__deque_int__std__allocator_int__* t669 = this667;
  int* t670 = __x668;
  int* r671 = int__std__deque_int__std__allocator_int_____emplace_back_int_(t669, t670);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v672, int v673) {
bb674:
  int __a675;
  int __b676;
  int __retval677;
  __a675 = v672;
  __b676 = v673;
  int t678 = __a675;
  int t679 = __b676;
  int b680 = t678 | t679;
  __retval677 = b680;
  int t681 = __retval677;
  return t681;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v682) {
bb683:
  struct std__basic_ios_char__std__char_traits_char__* this684;
  int __retval685;
  this684 = v682;
  struct std__basic_ios_char__std__char_traits_char__* t686 = this684;
  struct std__ios_base* base687 = (struct std__ios_base*)((char *)t686 + 0);
  int t688 = base687->_M_streambuf_state;
  __retval685 = t688;
  int t689 = __retval685;
  return t689;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v690, int v691) {
bb692:
  struct std__basic_ios_char__std__char_traits_char__* this693;
  int __state694;
  this693 = v690;
  __state694 = v691;
  struct std__basic_ios_char__std__char_traits_char__* t695 = this693;
  int r696 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t695);
  if (__cir_exc_active) {
    return;
  }
  int t697 = __state694;
  int r698 = std__operator__2(r696, t697);
  std__basic_ios_char__std__char_traits_char_____clear(t695, r698);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v699, char* v700) {
bb701:
  char* __c1702;
  char* __c2703;
  _Bool __retval704;
  __c1702 = v699;
  __c2703 = v700;
  char* t705 = __c1702;
  char t706 = *t705;
  int cast707 = (int)t706;
  char* t708 = __c2703;
  char t709 = *t708;
  int cast710 = (int)t709;
  _Bool c711 = ((cast707 == cast710)) ? 1 : 0;
  __retval704 = c711;
  _Bool t712 = __retval704;
  return t712;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v713) {
bb714:
  char* __p715;
  unsigned long __retval716;
  unsigned long __i717;
  __p715 = v713;
  unsigned long c718 = 0;
  __i717 = c718;
    char ref_tmp0719;
    while (1) {
      unsigned long t720 = __i717;
      char* t721 = __p715;
      char* ptr722 = &(t721)[t720];
      char c723 = 0;
      ref_tmp0719 = c723;
      _Bool r724 = __gnu_cxx__char_traits_char___eq(ptr722, &ref_tmp0719);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u725 = !r724;
      if (!u725) break;
      unsigned long t726 = __i717;
      unsigned long u727 = t726 + 1;
      __i717 = u727;
    }
  unsigned long t728 = __i717;
  __retval716 = t728;
  unsigned long t729 = __retval716;
  return t729;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v730) {
bb731:
  char* __s732;
  unsigned long __retval733;
  __s732 = v730;
    _Bool r734 = std____is_constant_evaluated();
    if (r734) {
      char* t735 = __s732;
      unsigned long r736 = __gnu_cxx__char_traits_char___length(t735);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval733 = r736;
      unsigned long t737 = __retval733;
      return t737;
    }
  char* t738 = __s732;
  unsigned long r739 = strlen(t738);
  __retval733 = r739;
  unsigned long t740 = __retval733;
  return t740;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v741, char* v742) {
bb743:
  struct std__basic_ostream_char__std__char_traits_char__* __out744;
  char* __s745;
  struct std__basic_ostream_char__std__char_traits_char__* __retval746;
  __out744 = v741;
  __s745 = v742;
    char* t747 = __s745;
    _Bool cast748 = (_Bool)t747;
    _Bool u749 = !cast748;
    if (u749) {
      struct std__basic_ostream_char__std__char_traits_char__* t750 = __out744;
      void** v751 = (void**)t750;
      void* v752 = *((void**)v751);
      unsigned char* cast753 = (unsigned char*)v752;
      long c754 = -24;
      unsigned char* ptr755 = &(cast753)[c754];
      long* cast756 = (long*)ptr755;
      long t757 = *cast756;
      unsigned char* cast758 = (unsigned char*)t750;
      unsigned char* ptr759 = &(cast758)[t757];
      struct std__basic_ostream_char__std__char_traits_char__* cast760 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr759;
      struct std__basic_ios_char__std__char_traits_char__* cast761 = (struct std__basic_ios_char__std__char_traits_char__*)cast760;
      int t762 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast761, t762);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t763 = __out744;
      char* t764 = __s745;
      char* t765 = __s745;
      unsigned long r766 = std__char_traits_char___length(t765);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast767 = (long)r766;
      struct std__basic_ostream_char__std__char_traits_char__* r768 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t763, t764, cast767);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t769 = __out744;
  __retval746 = t769;
  struct std__basic_ostream_char__std__char_traits_char__* t770 = __retval746;
  return t770;
}

// function: _ZNSt5dequeIiSaIiEE5frontEv
int* std__deque_int__std__allocator_int_____front(struct std__deque_int__std__allocator_int__* v771) {
bb772:
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
bb788:
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
bb793:
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
bb818:
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
bb848:
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
bb879:
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
bb897:
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
bb906:
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
bb913:
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
bb923:
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
bb944:
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
bb955:
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
bb977:
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
bb990:
  int __retval991;
  struct std__deque_int__std__allocator_int__ mydeque992;
  int sum993;
  int ref_tmp0994;
  int ref_tmp1995;
  int ref_tmp2996;
  int c997 = 0;
  __retval991 = c997;
  std__deque_int__std__allocator_int_____deque(&mydeque992);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    int c998 = 0;
    sum993 = c998;
    int c999 = 100;
    ref_tmp0994 = c999;
    std__deque_int__std__allocator_int_____push_back(&mydeque992, &ref_tmp0994);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque992);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1000 = 200;
    ref_tmp1995 = c1000;
    std__deque_int__std__allocator_int_____push_back(&mydeque992, &ref_tmp1995);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque992);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1001 = 300;
    ref_tmp2996 = c1001;
    std__deque_int__std__allocator_int_____push_back(&mydeque992, &ref_tmp2996);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque992);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast1002 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r1003 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1002);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque992);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int* r1004 = std__deque_int__std__allocator_int_____front(&mydeque992);
    int t1005 = *r1004;
    int c1006 = 100;
    _Bool c1007 = ((t1005 == c1006)) ? 1 : 0;
    if (c1007) {
    } else {
      char* cast1008 = (char*)&(_str_1);
      char* c1009 = _str_2;
      unsigned int c1010 = 27;
      char* cast1011 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1008, c1009, c1010, cast1011);
    }
    std__deque_int__std__allocator_int_____pop_front(&mydeque992);
    char* cast1012 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r1013 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1012);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque992);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1014 = std__deque_int__std__allocator_int_____size___const(&mydeque992);
    int cast1015 = (int)r1014;
    struct std__basic_ostream_char__std__char_traits_char__* r1016 = std__ostream__operator__(r1013, cast1015);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque992);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1017 = std__ostream__operator___std__ostream_____(r1016, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque992);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1018 = std__deque_int__std__allocator_int_____size___const(&mydeque992);
    int cast1019 = (int)r1018;
    int c1020 = 0;
    _Bool c1021 = ((cast1019 == c1020)) ? 1 : 0;
    if (c1021) {
    } else {
      char* cast1022 = (char*)&(_str_4);
      char* c1023 = _str_2;
      unsigned int c1024 = 32;
      char* cast1025 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1022, c1023, c1024, cast1025);
    }
    int c1026 = 0;
    __retval991 = c1026;
    int t1027 = __retval991;
    int ret_val1028 = t1027;
    {
      std__deque_int__std__allocator_int______deque(&mydeque992);
    }
    return ret_val1028;
  int t1029 = __retval991;
  return t1029;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1030) {
bb1031:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1032;
  this1032 = v1030;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1033 = this1032;
  struct std__allocator_int_* base1034 = (struct std__allocator_int_*)((char *)t1033 + 0);
  std__allocator_int___allocator(base1034);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1035 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t1033 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base1035);
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v1036) {
bb1037:
  unsigned long __size1038;
  unsigned long __retval1039;
  __size1038 = v1036;
  unsigned long t1040 = __size1038;
  unsigned long c1041 = 512;
  _Bool c1042 = ((t1040 < c1041)) ? 1 : 0;
  unsigned long ternary1043;
  if (c1042) {
    unsigned long c1044 = 512;
    unsigned long t1045 = __size1038;
    unsigned long b1046 = c1044 / t1045;
    ternary1043 = (unsigned long)b1046;
  } else {
    unsigned long c1047 = 1;
    ternary1043 = (unsigned long)c1047;
  }
  __retval1039 = ternary1043;
  unsigned long t1048 = __retval1039;
  return t1048;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v1049, unsigned long* v1050) {
bb1051:
  unsigned long* __a1052;
  unsigned long* __b1053;
  unsigned long* __retval1054;
  __a1052 = v1049;
  __b1053 = v1050;
    unsigned long* t1055 = __a1052;
    unsigned long t1056 = *t1055;
    unsigned long* t1057 = __b1053;
    unsigned long t1058 = *t1057;
    _Bool c1059 = ((t1056 < t1058)) ? 1 : 0;
    if (c1059) {
      unsigned long* t1060 = __b1053;
      __retval1054 = t1060;
      unsigned long* t1061 = __retval1054;
      return t1061;
    }
  unsigned long* t1062 = __a1052;
  __retval1054 = t1062;
  unsigned long* t1063 = __retval1054;
  return t1063;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1064) {
bb1065:
  struct std___Deque_base_int__std__allocator_int__* this1066;
  struct std__allocator_int_* __retval1067;
  this1066 = v1064;
  struct std___Deque_base_int__std__allocator_int__* t1068 = this1066;
  struct std__allocator_int_* base1069 = (struct std__allocator_int_*)((char *)&(t1068->_M_impl) + 0);
  __retval1067 = base1069;
  struct std__allocator_int_* t1070 = __retval1067;
  return t1070;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v1071, struct std__allocator_int_* v1072) {
bb1073:
  struct std__allocator_int___* this1074;
  struct std__allocator_int_* unnamed1075;
  this1074 = v1071;
  unnamed1075 = v1072;
  struct std__allocator_int___* t1076 = this1074;
  struct std____new_allocator_int___* base1077 = (struct std____new_allocator_int___*)((char *)t1076 + 0);
  std____new_allocator_int______new_allocator(base1077);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1078) {
bb1079:
  struct std___Deque_base_int__std__allocator_int__* this1080;
  struct std__allocator_int___ __retval1081;
  this1080 = v1078;
  struct std___Deque_base_int__std__allocator_int__* t1082 = this1080;
  struct std__allocator_int_* r1083 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t1082);
  std__allocator_int____allocator_int_(&__retval1081, r1083);
  struct std__allocator_int___ t1084 = __retval1081;
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

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v1089) {
bb1090:
  struct std____new_allocator_int___* this1091;
  unsigned long __retval1092;
  this1091 = v1089;
  struct std____new_allocator_int___* t1093 = this1091;
  unsigned long c1094 = 9223372036854775807;
  unsigned long c1095 = 8;
  unsigned long b1096 = c1094 / c1095;
  __retval1092 = b1096;
  unsigned long t1097 = __retval1092;
  return t1097;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v1098, unsigned long v1099, void* v1100) {
bb1101:
  struct std____new_allocator_int___* this1102;
  unsigned long __n1103;
  void* unnamed1104;
  int** __retval1105;
  this1102 = v1098;
  __n1103 = v1099;
  unnamed1104 = v1100;
  struct std____new_allocator_int___* t1106 = this1102;
    unsigned long t1107 = __n1103;
    unsigned long r1108 = std____new_allocator_int_____M_max_size___const(t1106);
    _Bool c1109 = ((t1107 > r1108)) ? 1 : 0;
    if (c1109) {
        unsigned long t1110 = __n1103;
        unsigned long c1111 = -1;
        unsigned long c1112 = 8;
        unsigned long b1113 = c1111 / c1112;
        _Bool c1114 = ((t1110 > b1113)) ? 1 : 0;
        if (c1114) {
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
    unsigned long c1115 = 8;
    unsigned long c1116 = 16;
    _Bool c1117 = ((c1115 > c1116)) ? 1 : 0;
    if (c1117) {
      unsigned long __al1118;
      unsigned long c1119 = 8;
      __al1118 = c1119;
      unsigned long t1120 = __n1103;
      unsigned long c1121 = 8;
      unsigned long b1122 = t1120 * c1121;
      unsigned long t1123 = __al1118;
      void* r1124 = operator_new_2(b1122, t1123);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1125 = (int**)r1124;
      __retval1105 = cast1125;
      int** t1126 = __retval1105;
      return t1126;
    }
  unsigned long t1127 = __n1103;
  unsigned long c1128 = 8;
  unsigned long b1129 = t1127 * c1128;
  void* r1130 = operator_new(b1129);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast1131 = (int**)r1130;
  __retval1105 = cast1131;
  int** t1132 = __retval1105;
  return t1132;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v1133, unsigned long v1134) {
bb1135:
  struct std__allocator_int___* this1136;
  unsigned long __n1137;
  int** __retval1138;
  this1136 = v1133;
  __n1137 = v1134;
  struct std__allocator_int___* t1139 = this1136;
    _Bool r1140 = std____is_constant_evaluated();
    if (r1140) {
        unsigned long t1141 = __n1137;
        unsigned long c1142 = 8;
        unsigned long ovr1143;
        _Bool ovf1144 = __builtin_mul_overflow(t1141, c1142, &ovr1143);
        __n1137 = ovr1143;
        if (ovf1144) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1145 = __n1137;
      void* r1146 = operator_new(t1145);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1147 = (int**)r1146;
      __retval1138 = cast1147;
      int** t1148 = __retval1138;
      return t1148;
    }
  struct std____new_allocator_int___* base1149 = (struct std____new_allocator_int___*)((char *)t1139 + 0);
  unsigned long t1150 = __n1137;
  void* c1151 = ((void*)0);
  int** r1152 = std____new_allocator_int____allocate(base1149, t1150, c1151);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1138 = r1152;
  int** t1153 = __retval1138;
  return t1153;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v1154, unsigned long v1155) {
bb1156:
  struct std__allocator_int___* __a1157;
  unsigned long __n1158;
  int** __retval1159;
  __a1157 = v1154;
  __n1158 = v1155;
  struct std__allocator_int___* t1160 = __a1157;
  unsigned long t1161 = __n1158;
  int** r1162 = std__allocator_int____allocate(t1160, t1161);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1159 = r1162;
  int** t1163 = __retval1159;
  return t1163;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v1164, unsigned long v1165) {
bb1166:
  struct std___Deque_base_int__std__allocator_int__* this1167;
  unsigned long __n1168;
  int** __retval1169;
  struct std__allocator_int___ __map_alloc1170;
  this1167 = v1164;
  __n1168 = v1165;
  struct std___Deque_base_int__std__allocator_int__* t1171 = this1167;
  struct std__allocator_int___ r1172 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1171);
  __map_alloc1170 = r1172;
  unsigned long t1173 = __n1168;
  int** r1174 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc1170, t1173);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1169 = r1174;
  int** t1175 = __retval1169;
  return t1175;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1176) {
bb1177:
  struct std____new_allocator_int_* this1178;
  unsigned long __retval1179;
  this1178 = v1176;
  struct std____new_allocator_int_* t1180 = this1178;
  unsigned long c1181 = 9223372036854775807;
  unsigned long c1182 = 4;
  unsigned long b1183 = c1181 / c1182;
  __retval1179 = b1183;
  unsigned long t1184 = __retval1179;
  return t1184;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1185, unsigned long v1186, void* v1187) {
bb1188:
  struct std____new_allocator_int_* this1189;
  unsigned long __n1190;
  void* unnamed1191;
  int* __retval1192;
  this1189 = v1185;
  __n1190 = v1186;
  unnamed1191 = v1187;
  struct std____new_allocator_int_* t1193 = this1189;
    unsigned long t1194 = __n1190;
    unsigned long r1195 = std____new_allocator_int____M_max_size___const(t1193);
    _Bool c1196 = ((t1194 > r1195)) ? 1 : 0;
    if (c1196) {
        unsigned long t1197 = __n1190;
        unsigned long c1198 = -1;
        unsigned long c1199 = 4;
        unsigned long b1200 = c1198 / c1199;
        _Bool c1201 = ((t1197 > b1200)) ? 1 : 0;
        if (c1201) {
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
    unsigned long c1202 = 4;
    unsigned long c1203 = 16;
    _Bool c1204 = ((c1202 > c1203)) ? 1 : 0;
    if (c1204) {
      unsigned long __al1205;
      unsigned long c1206 = 4;
      __al1205 = c1206;
      unsigned long t1207 = __n1190;
      unsigned long c1208 = 4;
      unsigned long b1209 = t1207 * c1208;
      unsigned long t1210 = __al1205;
      void* r1211 = operator_new_2(b1209, t1210);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1212 = (int*)r1211;
      __retval1192 = cast1212;
      int* t1213 = __retval1192;
      return t1213;
    }
  unsigned long t1214 = __n1190;
  unsigned long c1215 = 4;
  unsigned long b1216 = t1214 * c1215;
  void* r1217 = operator_new(b1216);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast1218 = (int*)r1217;
  __retval1192 = cast1218;
  int* t1219 = __retval1192;
  return t1219;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1220, unsigned long v1221) {
bb1222:
  struct std__allocator_int_* this1223;
  unsigned long __n1224;
  int* __retval1225;
  this1223 = v1220;
  __n1224 = v1221;
  struct std__allocator_int_* t1226 = this1223;
    _Bool r1227 = std____is_constant_evaluated();
    if (r1227) {
        unsigned long t1228 = __n1224;
        unsigned long c1229 = 4;
        unsigned long ovr1230;
        _Bool ovf1231 = __builtin_mul_overflow(t1228, c1229, &ovr1230);
        __n1224 = ovr1230;
        if (ovf1231) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1232 = __n1224;
      void* r1233 = operator_new(t1232);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1234 = (int*)r1233;
      __retval1225 = cast1234;
      int* t1235 = __retval1225;
      return t1235;
    }
  struct std____new_allocator_int_* base1236 = (struct std____new_allocator_int_*)((char *)t1226 + 0);
  unsigned long t1237 = __n1224;
  void* c1238 = ((void*)0);
  int* r1239 = std____new_allocator_int___allocate(base1236, t1237, c1238);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1225 = r1239;
  int* t1240 = __retval1225;
  return t1240;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1241, unsigned long v1242) {
bb1243:
  struct std__allocator_int_* __a1244;
  unsigned long __n1245;
  int* __retval1246;
  __a1244 = v1241;
  __n1245 = v1242;
  struct std__allocator_int_* t1247 = __a1244;
  unsigned long t1248 = __n1245;
  int* r1249 = std__allocator_int___allocate(t1247, t1248);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1246 = r1249;
  int* t1250 = __retval1246;
  return t1250;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v1251) {
bb1252:
  struct std___Deque_base_int__std__allocator_int__* this1253;
  int* __retval1254;
  this1253 = v1251;
  struct std___Deque_base_int__std__allocator_int__* t1255 = this1253;
  struct std__allocator_int_* base1256 = (struct std__allocator_int_*)((char *)&(t1255->_M_impl) + 0);
  unsigned long c1257 = 4;
  unsigned long r1258 = std____deque_buf_size(c1257);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r1259 = std__allocator_traits_std__allocator_int_____allocate(base1256, r1258);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1254 = r1259;
  int* t1260 = __retval1254;
  return t1260;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1261, int* v1262, unsigned long v1263) {
bb1264:
  struct std____new_allocator_int_* this1265;
  int* __p1266;
  unsigned long __n1267;
  this1265 = v1261;
  __p1266 = v1262;
  __n1267 = v1263;
  struct std____new_allocator_int_* t1268 = this1265;
    unsigned long c1269 = 4;
    unsigned long c1270 = 16;
    _Bool c1271 = ((c1269 > c1270)) ? 1 : 0;
    if (c1271) {
      int* t1272 = __p1266;
      void* cast1273 = (void*)t1272;
      unsigned long t1274 = __n1267;
      unsigned long c1275 = 4;
      unsigned long b1276 = t1274 * c1275;
      unsigned long c1277 = 4;
      operator_delete_3(cast1273, b1276, c1277);
      return;
    }
  int* t1278 = __p1266;
  void* cast1279 = (void*)t1278;
  unsigned long t1280 = __n1267;
  unsigned long c1281 = 4;
  unsigned long b1282 = t1280 * c1281;
  operator_delete_2(cast1279, b1282);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1283, int* v1284, unsigned long v1285) {
bb1286:
  struct std__allocator_int_* this1287;
  int* __p1288;
  unsigned long __n1289;
  this1287 = v1283;
  __p1288 = v1284;
  __n1289 = v1285;
  struct std__allocator_int_* t1290 = this1287;
    _Bool r1291 = std____is_constant_evaluated();
    if (r1291) {
      int* t1292 = __p1288;
      void* cast1293 = (void*)t1292;
      operator_delete(cast1293);
      return;
    }
  struct std____new_allocator_int_* base1294 = (struct std____new_allocator_int_*)((char *)t1290 + 0);
  int* t1295 = __p1288;
  unsigned long t1296 = __n1289;
  std____new_allocator_int___deallocate(base1294, t1295, t1296);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1297, int* v1298, unsigned long v1299) {
bb1300:
  struct std__allocator_int_* __a1301;
  int* __p1302;
  unsigned long __n1303;
  __a1301 = v1297;
  __p1302 = v1298;
  __n1303 = v1299;
  struct std__allocator_int_* t1304 = __a1301;
  int* t1305 = __p1302;
  unsigned long t1306 = __n1303;
  std__allocator_int___deallocate(t1304, t1305, t1306);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v1307, int* v1308) {
bb1309:
  struct std___Deque_base_int__std__allocator_int__* this1310;
  int* __p1311;
  this1310 = v1307;
  __p1311 = v1308;
  struct std___Deque_base_int__std__allocator_int__* t1312 = this1310;
  struct std__allocator_int_* base1313 = (struct std__allocator_int_*)((char *)&(t1312->_M_impl) + 0);
  int* t1314 = __p1311;
  unsigned long c1315 = 4;
  unsigned long r1316 = std____deque_buf_size(c1315);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base1313, t1314, r1316);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v1317, int** v1318, int** v1319) {
bb1320:
  struct std___Deque_base_int__std__allocator_int__* this1321;
  int** __nstart1322;
  int** __nfinish1323;
  this1321 = v1317;
  __nstart1322 = v1318;
  __nfinish1323 = v1319;
  struct std___Deque_base_int__std__allocator_int__* t1324 = this1321;
    int** __n1325;
    int** t1326 = __nstart1322;
    __n1325 = t1326;
    while (1) {
      int** t1328 = __n1325;
      int** t1329 = __nfinish1323;
      _Bool c1330 = ((t1328 < t1329)) ? 1 : 0;
      if (!c1330) break;
      int** t1331 = __n1325;
      int* t1332 = *t1331;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t1324, t1332);
    for_step1327: ;
      int** t1333 = __n1325;
      int c1334 = 1;
      int** ptr1335 = &(t1333)[c1334];
      __n1325 = ptr1335;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v1336, int** v1337, int** v1338) {
bb1339:
  struct std___Deque_base_int__std__allocator_int__* this1340;
  int** __nstart1341;
  int** __nfinish1342;
  int** __cur1343;
  this1340 = v1336;
  __nstart1341 = v1337;
  __nfinish1342 = v1338;
  struct std___Deque_base_int__std__allocator_int__* t1344 = this1340;
        int** t1346 = __nstart1341;
        __cur1343 = t1346;
        while (1) {
          int** t1348 = __cur1343;
          int** t1349 = __nfinish1342;
          _Bool c1350 = ((t1348 < t1349)) ? 1 : 0;
          if (!c1350) break;
          int* r1351 = std___Deque_base_int__std__allocator_int______M_allocate_node(t1344);
          if (__cir_exc_active) {
            goto cir_try_dispatch1345;
          }
          int** t1352 = __cur1343;
          *t1352 = r1351;
        for_step1347: ;
          int** t1353 = __cur1343;
          int c1354 = 1;
          int** ptr1355 = &(t1353)[c1354];
          __cur1343 = ptr1355;
        }
    cir_try_dispatch1345: ;
    if (__cir_exc_active) {
    {
      int ca_tok1356 = 0;
      void* ca_exn1357 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t1358 = __nstart1341;
        int** t1359 = __cur1343;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1344, t1358, t1359);
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
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v1360, int** v1361, unsigned long v1362) {
bb1363:
  struct std____new_allocator_int___* this1364;
  int** __p1365;
  unsigned long __n1366;
  this1364 = v1360;
  __p1365 = v1361;
  __n1366 = v1362;
  struct std____new_allocator_int___* t1367 = this1364;
    unsigned long c1368 = 8;
    unsigned long c1369 = 16;
    _Bool c1370 = ((c1368 > c1369)) ? 1 : 0;
    if (c1370) {
      int** t1371 = __p1365;
      void* cast1372 = (void*)t1371;
      unsigned long t1373 = __n1366;
      unsigned long c1374 = 8;
      unsigned long b1375 = t1373 * c1374;
      unsigned long c1376 = 8;
      operator_delete_3(cast1372, b1375, c1376);
      return;
    }
  int** t1377 = __p1365;
  void* cast1378 = (void*)t1377;
  unsigned long t1379 = __n1366;
  unsigned long c1380 = 8;
  unsigned long b1381 = t1379 * c1380;
  operator_delete_2(cast1378, b1381);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v1382, int** v1383, unsigned long v1384) {
bb1385:
  struct std__allocator_int___* this1386;
  int** __p1387;
  unsigned long __n1388;
  this1386 = v1382;
  __p1387 = v1383;
  __n1388 = v1384;
  struct std__allocator_int___* t1389 = this1386;
    _Bool r1390 = std____is_constant_evaluated();
    if (r1390) {
      int** t1391 = __p1387;
      void* cast1392 = (void*)t1391;
      operator_delete(cast1392);
      return;
    }
  struct std____new_allocator_int___* base1393 = (struct std____new_allocator_int___*)((char *)t1389 + 0);
  int** t1394 = __p1387;
  unsigned long t1395 = __n1388;
  std____new_allocator_int____deallocate(base1393, t1394, t1395);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v1396, int** v1397, unsigned long v1398) {
bb1399:
  struct std__allocator_int___* __a1400;
  int** __p1401;
  unsigned long __n1402;
  __a1400 = v1396;
  __p1401 = v1397;
  __n1402 = v1398;
  struct std__allocator_int___* t1403 = __a1400;
  int** t1404 = __p1401;
  unsigned long t1405 = __n1402;
  std__allocator_int____deallocate(t1403, t1404, t1405);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v1406, int** v1407, unsigned long v1408) {
bb1409:
  struct std___Deque_base_int__std__allocator_int__* this1410;
  int** __p1411;
  unsigned long __n1412;
  struct std__allocator_int___ __map_alloc1413;
  this1410 = v1406;
  __p1411 = v1407;
  __n1412 = v1408;
  struct std___Deque_base_int__std__allocator_int__* t1414 = this1410;
  struct std__allocator_int___ r1415 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1414);
  __map_alloc1413 = r1415;
  int** t1416 = __p1411;
  unsigned long t1417 = __n1412;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc1413, t1416, t1417);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size() {
bb1418:
  unsigned long __retval1419;
  unsigned long c1420 = 4;
  unsigned long r1421 = std____deque_buf_size(c1420);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1419 = r1421;
  unsigned long t1422 = __retval1419;
  return t1422;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v1423, int** v1424) {
bb1425:
  struct std___Deque_iterator_int__int____int___* this1426;
  int** __new_node1427;
  this1426 = v1423;
  __new_node1427 = v1424;
  struct std___Deque_iterator_int__int____int___* t1428 = this1426;
  int** t1429 = __new_node1427;
  t1428->_M_node = t1429;
  int** t1430 = __new_node1427;
  int* t1431 = *t1430;
  t1428->_M_first = t1431;
  int* t1432 = t1428->_M_first;
  unsigned long r1433 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1434 = (long)r1433;
  int* ptr1435 = &(t1432)[cast1434];
  t1428->_M_last = ptr1435;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v1436, unsigned long v1437) {
bb1438:
  struct std___Deque_base_int__std__allocator_int__* this1439;
  unsigned long __num_elements1440;
  unsigned long __num_nodes1441;
  unsigned long ref_tmp01442;
  unsigned long ref_tmp11443;
  int** __nstart1444;
  int** __nfinish1445;
  this1439 = v1436;
  __num_elements1440 = v1437;
  struct std___Deque_base_int__std__allocator_int__* t1446 = this1439;
  unsigned long t1447 = __num_elements1440;
  unsigned long c1448 = 4;
  unsigned long r1449 = std____deque_buf_size(c1448);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1450 = t1447 / r1449;
  unsigned long c1451 = 1;
  unsigned long b1452 = b1450 + c1451;
  __num_nodes1441 = b1452;
  unsigned long c1453 = 8;
  ref_tmp01442 = c1453;
  unsigned long t1454 = __num_nodes1441;
  unsigned long c1455 = 2;
  unsigned long b1456 = t1454 + c1455;
  ref_tmp11443 = b1456;
  unsigned long* r1457 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01442, &ref_tmp11443);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1458 = *r1457;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1459 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1446->_M_impl) + 0);
  base1459->_M_map_size = t1458;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1460 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1446->_M_impl) + 0);
  unsigned long t1461 = base1460->_M_map_size;
  int** r1462 = std___Deque_base_int__std__allocator_int______M_allocate_map(t1446, t1461);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1463 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1446->_M_impl) + 0);
  base1463->_M_map = r1462;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1464 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1446->_M_impl) + 0);
  int** t1465 = base1464->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1466 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1446->_M_impl) + 0);
  unsigned long t1467 = base1466->_M_map_size;
  unsigned long t1468 = __num_nodes1441;
  unsigned long b1469 = t1467 - t1468;
  unsigned long c1470 = 2;
  unsigned long b1471 = b1469 / c1470;
  int** ptr1472 = &(t1465)[b1471];
  __nstart1444 = ptr1472;
  int** t1473 = __nstart1444;
  unsigned long t1474 = __num_nodes1441;
  int** ptr1475 = &(t1473)[t1474];
  __nfinish1445 = ptr1475;
      int** t1477 = __nstart1444;
      int** t1478 = __nfinish1445;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t1446, t1477, t1478);
      if (__cir_exc_active) {
        goto cir_try_dispatch1476;
      }
    cir_try_dispatch1476: ;
    if (__cir_exc_active) {
    {
      int ca_tok1479 = 0;
      void* ca_exn1480 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1481 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1446->_M_impl) + 0);
        int** t1482 = base1481->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1483 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1446->_M_impl) + 0);
        unsigned long t1484 = base1483->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1446, t1482, t1484);
        int** c1485 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1486 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1446->_M_impl) + 0);
        base1486->_M_map = c1485;
        unsigned long c1487 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1488 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1446->_M_impl) + 0);
        base1488->_M_map_size = c1487;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1489 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1446->_M_impl) + 0);
  int** t1490 = __nstart1444;
  std___Deque_iterator_int__int___int_____M_set_node(&base1489->_M_start, t1490);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1491 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1446->_M_impl) + 0);
  int** t1492 = __nfinish1445;
  int c1493 = -1;
  int** ptr1494 = &(t1492)[c1493];
  std___Deque_iterator_int__int___int_____M_set_node(&base1491->_M_finish, ptr1494);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1495 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1446->_M_impl) + 0);
  int* t1496 = base1495->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1497 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1446->_M_impl) + 0);
  base1497->_M_start._M_cur = t1496;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1498 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1446->_M_impl) + 0);
  int* t1499 = base1498->_M_finish._M_first;
  unsigned long t1500 = __num_elements1440;
  unsigned long c1501 = 4;
  unsigned long r1502 = std____deque_buf_size(c1501);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1503 = t1500 % r1502;
  int* ptr1504 = &(t1499)[b1503];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1505 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1446->_M_impl) + 0);
  base1505->_M_finish._M_cur = ptr1504;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1506) {
bb1507:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1508;
  this1508 = v1506;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1509 = this1508;
  {
    struct std__allocator_int_* base1510 = (struct std__allocator_int_*)((char *)t1509 + 0);
    std__allocator_int____allocator(base1510);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1511) {
bb1512:
  struct std___Deque_base_int__std__allocator_int__* this1513;
  this1513 = v1511;
  struct std___Deque_base_int__std__allocator_int__* t1514 = this1513;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1514->_M_impl);
    unsigned long c1515 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1514, c1515);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1514->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1516) {
bb1517:
  struct std___Deque_base_int__std__allocator_int__* this1518;
  this1518 = v1516;
  struct std___Deque_base_int__std__allocator_int__* t1519 = this1518;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1520 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1519->_M_impl) + 0);
      int** t1521 = base1520->_M_map;
      _Bool cast1522 = (_Bool)t1521;
      if (cast1522) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1523 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1519->_M_impl) + 0);
        int** t1524 = base1523->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1525 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1519->_M_impl) + 0);
        int** t1526 = base1525->_M_finish._M_node;
        int c1527 = 1;
        int** ptr1528 = &(t1526)[c1527];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1519, t1524, ptr1528);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1529 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1519->_M_impl) + 0);
        int** t1530 = base1529->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1531 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1519->_M_impl) + 0);
        unsigned long t1532 = base1531->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1519, t1530, t1532);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1519->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1533) {
bb1534:
  struct std____new_allocator_int_* this1535;
  this1535 = v1533;
  struct std____new_allocator_int_* t1536 = this1535;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1537) {
bb1538:
  struct std__allocator_int_* this1539;
  this1539 = v1537;
  struct std__allocator_int_* t1540 = this1539;
  struct std____new_allocator_int_* base1541 = (struct std____new_allocator_int_*)((char *)t1540 + 0);
  std____new_allocator_int_____new_allocator(base1541);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1542) {
bb1543:
  struct std___Deque_iterator_int__int____int___* this1544;
  this1544 = v1542;
  struct std___Deque_iterator_int__int____int___* t1545 = this1544;
  int* c1546 = ((void*)0);
  t1545->_M_cur = c1546;
  int* c1547 = ((void*)0);
  t1545->_M_first = c1547;
  int* c1548 = ((void*)0);
  t1545->_M_last = c1548;
  int** c1549 = ((void*)0);
  t1545->_M_node = c1549;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1550) {
bb1551:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1552;
  this1552 = v1550;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1553 = this1552;
  int** c1554 = ((void*)0);
  t1553->_M_map = c1554;
  unsigned long c1555 = 0;
  t1553->_M_map_size = c1555;
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1553->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1553->_M_finish);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1556) {
bb1557:
  struct std__allocator_int_* this1558;
  this1558 = v1556;
  struct std__allocator_int_* t1559 = this1558;
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1560) {
bb1561:
  struct std____new_allocator_int___* this1562;
  this1562 = v1560;
  struct std____new_allocator_int___* t1563 = this1562;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1564) {
bb1565:
  int* __location1566;
  __location1566 = v1564;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1567, int* v1568) {
bb1569:
  int* __first1570;
  int* __last1571;
  __first1570 = v1567;
  __last1571 = v1568;
      _Bool r1572 = std____is_constant_evaluated();
      if (r1572) {
          while (1) {
            int* t1574 = __first1570;
            int* t1575 = __last1571;
            _Bool c1576 = ((t1574 != t1575)) ? 1 : 0;
            if (!c1576) break;
            int* t1577 = __first1570;
            void_std__destroy_at_int_(t1577);
            if (__cir_exc_active) {
              return;
            }
          for_step1573: ;
            int* t1578 = __first1570;
            int c1579 = 1;
            int* ptr1580 = &(t1578)[c1579];
            __first1570 = ptr1580;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1581, int* v1582, struct std__allocator_int_* v1583) {
bb1584:
  int* __first1585;
  int* __last1586;
  struct std__allocator_int_* unnamed1587;
  __first1585 = v1581;
  __last1586 = v1582;
  unnamed1587 = v1583;
  int* t1588 = __first1585;
  int* t1589 = __last1586;
  void_std___Destroy_int__(t1588, t1589);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb1590:
  unsigned long __retval1591;
  unsigned long c1592 = 4;
  unsigned long r1593 = std____deque_buf_size(c1592);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1591 = r1593;
  unsigned long t1594 = __retval1591;
  return t1594;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v1595, struct std___Deque_iterator_int__int____int___ v1596, struct std___Deque_iterator_int__int____int___ v1597) {
bb1598:
  struct std__deque_int__std__allocator_int__* this1599;
  struct std___Deque_iterator_int__int____int___ __first1600;
  struct std___Deque_iterator_int__int____int___ __last1601;
  this1599 = v1595;
  __first1600 = v1596;
  __last1601 = v1597;
  struct std__deque_int__std__allocator_int__* t1602 = this1599;
    int** __node1603;
    int** t1604 = __first1600._M_node;
    int c1605 = 1;
    int** ptr1606 = &(t1604)[c1605];
    __node1603 = ptr1606;
    while (1) {
      int** t1608 = __node1603;
      int** t1609 = __last1601._M_node;
      _Bool c1610 = ((t1608 < t1609)) ? 1 : 0;
      if (!c1610) break;
      int** t1611 = __node1603;
      int* t1612 = *t1611;
      int** t1613 = __node1603;
      int* t1614 = *t1613;
      unsigned long r1615 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr1616 = &(t1614)[r1615];
      struct std___Deque_base_int__std__allocator_int__* base1617 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1602 + 0);
      struct std__allocator_int_* r1618 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1617);
      void_std___Destroy_int___int_(t1612, ptr1616, r1618);
      if (__cir_exc_active) {
        return;
      }
    for_step1607: ;
      int** t1619 = __node1603;
      int c1620 = 1;
      int** ptr1621 = &(t1619)[c1620];
      __node1603 = ptr1621;
    }
    int** t1622 = __first1600._M_node;
    int** t1623 = __last1601._M_node;
    _Bool c1624 = ((t1622 != t1623)) ? 1 : 0;
    if (c1624) {
      int* t1625 = __first1600._M_cur;
      int* t1626 = __first1600._M_last;
      struct std___Deque_base_int__std__allocator_int__* base1627 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1602 + 0);
      struct std__allocator_int_* r1628 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1627);
      void_std___Destroy_int___int_(t1625, t1626, r1628);
      if (__cir_exc_active) {
        return;
      }
      int* t1629 = __last1601._M_first;
      int* t1630 = __last1601._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1631 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1602 + 0);
      struct std__allocator_int_* r1632 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1631);
      void_std___Destroy_int___int_(t1629, t1630, r1632);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t1633 = __first1600._M_cur;
      int* t1634 = __last1601._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1635 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1602 + 0);
      struct std__allocator_int_* r1636 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1635);
      void_std___Destroy_int___int_(t1633, t1634, r1636);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v1637, struct std___Deque_iterator_int__int____int___* v1638) {
bb1639:
  struct std___Deque_iterator_int__int____int___* this1640;
  struct std___Deque_iterator_int__int____int___* __x1641;
  this1640 = v1637;
  __x1641 = v1638;
  struct std___Deque_iterator_int__int____int___* t1642 = this1640;
  struct std___Deque_iterator_int__int____int___* t1643 = __x1641;
  int* t1644 = t1643->_M_cur;
  t1642->_M_cur = t1644;
  struct std___Deque_iterator_int__int____int___* t1645 = __x1641;
  int* t1646 = t1645->_M_first;
  t1642->_M_first = t1646;
  struct std___Deque_iterator_int__int____int___* t1647 = __x1641;
  int* t1648 = t1647->_M_last;
  t1642->_M_last = t1648;
  struct std___Deque_iterator_int__int____int___* t1649 = __x1641;
  int** t1650 = t1649->_M_node;
  t1642->_M_node = t1650;
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v1651, struct std___Deque_iterator_int__int____int___ v1652, struct std___Deque_iterator_int__int____int___ v1653, struct std__allocator_int_* v1654) {
bb1655:
  struct std__deque_int__std__allocator_int__* this1656;
  struct std___Deque_iterator_int__int____int___ __first1657;
  struct std___Deque_iterator_int__int____int___ __last1658;
  struct std__allocator_int_* unnamed1659;
  this1656 = v1651;
  __first1657 = v1652;
  __last1658 = v1653;
  unnamed1659 = v1654;
  struct std__deque_int__std__allocator_int__* t1660 = this1656;
    _Bool c1661 = 0;
    if (c1661) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01662;
      struct std___Deque_iterator_int__int____int___ agg_tmp11663;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01662, &__first1657);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11663, &__last1658);
      struct std___Deque_iterator_int__int____int___ t1664 = agg_tmp01662;
      struct std___Deque_iterator_int__int____int___ t1665 = agg_tmp11663;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t1660, t1664, t1665);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v1666) {
bb1667:
  struct std__deque_int__std__allocator_int__* this1668;
  struct std___Deque_iterator_int__int____int___ __retval1669;
  this1668 = v1666;
  struct std__deque_int__std__allocator_int__* t1670 = this1668;
  struct std___Deque_base_int__std__allocator_int__* base1671 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1670 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1672 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1671->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1669, &base1672->_M_start);
  struct std___Deque_iterator_int__int____int___ t1673 = __retval1669;
  return t1673;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v1674) {
bb1675:
  struct std__deque_int__std__allocator_int__* this1676;
  struct std___Deque_iterator_int__int____int___ __retval1677;
  this1676 = v1674;
  struct std__deque_int__std__allocator_int__* t1678 = this1676;
  struct std___Deque_base_int__std__allocator_int__* base1679 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1678 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1680 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1679->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1677, &base1680->_M_finish);
  struct std___Deque_iterator_int__int____int___ t1681 = __retval1677;
  return t1681;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v1682) {
bb1683:
  struct std___Deque_base_int__std__allocator_int__* this1684;
  struct std__allocator_int_* __retval1685;
  this1684 = v1682;
  struct std___Deque_base_int__std__allocator_int__* t1686 = this1684;
  struct std__allocator_int_* base1687 = (struct std__allocator_int_*)((char *)&(t1686->_M_impl) + 0);
  __retval1685 = base1687;
  struct std__allocator_int_* t1688 = __retval1685;
  return t1688;
}

