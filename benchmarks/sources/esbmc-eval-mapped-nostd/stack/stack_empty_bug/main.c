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
struct std__stack_int__std__deque_int__std__allocator_int___ { struct std__deque_int__std__allocator_int__ c; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "!mystack.empty()";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stack/stack_empty_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[8] = "total: ";
char _str_3[48] = "cannot create std::deque larger than max_size()";
char _str_4[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_stack.h";
char __PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3topEv[74] = "reference std::stack<int>::top() [_Tp = int, _Sequence = std::deque<int>]";
char _str_5[15] = "!this->empty()";
char _str_6[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3popEv[69] = "void std::stack<int>::pop() [_Tp = int, _Sequence = std::deque<int>]";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE8pop_backEv[75] = "void std::deque<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
void std__stack_int__std__deque_int__std__allocator_int_______stack_std__deque_int__std__allocator_int_____void_(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* p0, int* p1, int* p2);
long std__operator_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
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
void std__stack_int__std__deque_int__std__allocator_int_______push(struct std__stack_int__std__deque_int__std__allocator_int___* p0, int* p1);
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* p0);
_Bool std__stack_int__std__deque_int__std__allocator_int_______empty___const(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* p0);
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* p0);
int* std__deque_int__std__allocator_int_____back(struct std__deque_int__std__allocator_int__* p0);
int* std__stack_int__std__deque_int__std__allocator_int_______top(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* p0, int* p1);
void std__deque_int__std__allocator_int______M_pop_back_aux(struct std__deque_int__std__allocator_int__* p0);
void std__deque_int__std__allocator_int_____pop_back(struct std__deque_int__std__allocator_int__* p0);
void std__stack_int__std__deque_int__std__allocator_int_______pop(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
void std__stack_int__std__deque_int__std__allocator_int________stack(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
int main();
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
unsigned long std____deque_buf_size(unsigned long p0);
unsigned long std__deque_int__std__allocator_int______S_buffer_size();
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__allocator_int_* p3);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* p0);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* p0);
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* p0, int* p1);
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, int** p2);
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* p0);
void std__allocator_int____allocator_int_(struct std__allocator_int___* p0, struct std__allocator_int_* p1);
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* p0);
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* p0, int** p1, unsigned long p2);
void std__allocator_int____deallocate(struct std__allocator_int___* p0, int** p1, unsigned long p2);
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* p0, int** p1, unsigned long p2);
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, unsigned long p2);
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0);
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0);
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* p0);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* p0);
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
extern void std____throw_bad_array_new_length();
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
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, int** p2);
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size();
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* p0, int** p1);
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0);
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* p0);
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p0);

// function: _ZNSt5stackIiSt5dequeIiSaIiEEEC2IS2_vEEv
void std__stack_int__std__deque_int__std__allocator_int_______stack_std__deque_int__std__allocator_int_____void_(struct std__stack_int__std__deque_int__std__allocator_int___* v0) {
bb1:
  struct std__stack_int__std__deque_int__std__allocator_int___* this2;
  this2 = v0;
  struct std__stack_int__std__deque_int__std__allocator_int___* t3 = this2;
  struct std__deque_int__std__allocator_int__ c4 = {0};
  t3->c = c4;
  std__deque_int__std__allocator_int_____deque(&t3->c);
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

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiES4_
long std__operator_(struct std___Deque_iterator_int__int____int___* v29, struct std___Deque_iterator_int__int____int___* v30) {
bb31:
  struct std___Deque_iterator_int__int____int___* __x32;
  struct std___Deque_iterator_int__int____int___* __y33;
  long __retval34;
  __x32 = v29;
  __y33 = v30;
  unsigned long r35 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast36 = (long)r35;
  struct std___Deque_iterator_int__int____int___* t37 = __x32;
  int** t38 = t37->_M_node;
  struct std___Deque_iterator_int__int____int___* t39 = __y33;
  int** t40 = t39->_M_node;
  long diff41 = t38 - t40;
  struct std___Deque_iterator_int__int____int___* t42 = __x32;
  int** t43 = t42->_M_node;
  _Bool cast44 = (_Bool)t43;
  long cast45 = (long)cast44;
  long b46 = diff41 - cast45;
  long b47 = cast36 * b46;
  struct std___Deque_iterator_int__int____int___* t48 = __x32;
  int* t49 = t48->_M_cur;
  struct std___Deque_iterator_int__int____int___* t50 = __x32;
  int* t51 = t50->_M_first;
  long diff52 = t49 - t51;
  long b53 = b47 + diff52;
  struct std___Deque_iterator_int__int____int___* t54 = __y33;
  int* t55 = t54->_M_last;
  struct std___Deque_iterator_int__int____int___* t56 = __y33;
  int* t57 = t56->_M_cur;
  long diff58 = t55 - t57;
  long b59 = b53 + diff58;
  __retval34 = b59;
  long t60 = __retval34;
  return t60;
}

// function: _ZNKSt5dequeIiSaIiEE4sizeEv
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* v61) {
bb62:
  struct std__deque_int__std__allocator_int__* this63;
  unsigned long __retval64;
  unsigned long __sz65;
  this63 = v61;
  struct std__deque_int__std__allocator_int__* t66 = this63;
  struct std___Deque_base_int__std__allocator_int__* base67 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t66 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base68 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base67->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base69 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t66 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base70 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base69->_M_impl) + 0);
  long r71 = std__operator_(&base68->_M_finish, &base70->_M_start);
  unsigned long cast72 = (unsigned long)r71;
  __sz65 = cast72;
    unsigned long t73 = __sz65;
    unsigned long r74 = std__deque_int__std__allocator_int_____max_size___const(t66);
    _Bool c75 = ((t73 > r74)) ? 1 : 0;
    if (c75) {
      __builtin_unreachable();
    }
  unsigned long t76 = __sz65;
  __retval64 = t76;
  unsigned long t77 = __retval64;
  return t77;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v78, unsigned long* v79) {
bb80:
  unsigned long* __a81;
  unsigned long* __b82;
  unsigned long* __retval83;
  __a81 = v78;
  __b82 = v79;
    unsigned long* t84 = __b82;
    unsigned long t85 = *t84;
    unsigned long* t86 = __a81;
    unsigned long t87 = *t86;
    _Bool c88 = ((t85 < t87)) ? 1 : 0;
    if (c88) {
      unsigned long* t89 = __b82;
      __retval83 = t89;
      unsigned long* t90 = __retval83;
      return t90;
    }
  unsigned long* t91 = __a81;
  __retval83 = t91;
  unsigned long* t92 = __retval83;
  return t92;
}

// function: _ZNSt5dequeIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* v93) {
bb94:
  struct std__allocator_int_* __a95;
  unsigned long __retval96;
  unsigned long __diffmax97;
  unsigned long __allocmax98;
  __a95 = v93;
  unsigned long c99 = 9223372036854775807;
  __diffmax97 = c99;
  unsigned long c100 = 4611686018427387903;
  __allocmax98 = c100;
  unsigned long* r101 = unsigned_long_const__std__min_unsigned_long_(&__diffmax97, &__allocmax98);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t102 = *r101;
  __retval96 = t102;
  unsigned long t103 = __retval96;
  return t103;
}

// function: _ZNKSt5dequeIiSaIiEE8max_sizeEv
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* v104) {
bb105:
  struct std__deque_int__std__allocator_int__* this106;
  unsigned long __retval107;
  this106 = v104;
  struct std__deque_int__std__allocator_int__* t108 = this106;
  struct std___Deque_base_int__std__allocator_int__* base109 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t108 + 0);
  struct std__allocator_int_* r110 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(base109);
  unsigned long r111 = std__deque_int__std__allocator_int______S_max_size(r110);
  __retval107 = r111;
  unsigned long t112 = __retval107;
  return t112;
}

// function: _ZSt12__niter_wrapIPPiET_RKS2_S2_
int** int___std____niter_wrap_int___(int*** v113, int** v114) {
bb115:
  int*** unnamed116;
  int** __res117;
  int** __retval118;
  unnamed116 = v113;
  __res117 = v114;
  int** t119 = __res117;
  __retval118 = t119;
  int** t120 = __retval118;
  return t120;
}

// function: _ZSt10__distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_int_____difference_type_std____distance_int___(int** v121, int** v122, struct std__random_access_iterator_tag v123) {
bb124:
  int** __first125;
  int** __last126;
  struct std__random_access_iterator_tag unnamed127;
  long __retval128;
  __first125 = v121;
  __last126 = v122;
  unnamed127 = v123;
  int** t129 = __last126;
  int** t130 = __first125;
  long diff131 = t129 - t130;
  __retval128 = diff131;
  long t132 = __retval128;
  return t132;
}

// function: _ZSt19__iterator_categoryIPPiENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_int_____iterator_category_std____iterator_category_int___(int*** v133) {
bb134:
  int*** unnamed135;
  struct std__random_access_iterator_tag __retval136;
  unnamed135 = v133;
  struct std__random_access_iterator_tag t137 = __retval136;
  return t137;
}

// function: _ZSt8distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_int_____difference_type_std__distance_int___(int** v138, int** v139) {
bb140:
  int** __first141;
  int** __last142;
  long __retval143;
  struct std__random_access_iterator_tag agg_tmp0144;
  __first141 = v138;
  __last142 = v139;
  int** t145 = __first141;
  int** t146 = __last142;
  struct std__random_access_iterator_tag r147 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(&__first141);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp0144 = r147;
  struct std__random_access_iterator_tag t148 = agg_tmp0144;
  long r149 = std__iterator_traits_int_____difference_type_std____distance_int___(t145, t146, t148);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval143 = r149;
  long t150 = __retval143;
  return t150;
}

// function: _ZSt12__assign_oneILb0EPPiS1_EvRT0_RT1_
void void_std____assign_one_false__int____int___(int*** v151, int*** v152) {
bb153:
  int*** __out154;
  int*** __in155;
  __out154 = v151;
  __in155 = v152;
    int*** t156 = __in155;
    int** t157 = *t156;
    int* t158 = *t157;
    int*** t159 = __out154;
    int** t160 = *t159;
    *t160 = t158;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPPiS1_S1_ET2_T0_T1_S2_
int** int___std____copy_move_a2_false__int____int____int___(int** v161, int** v162, int** v163) {
bb164:
  int** __first165;
  int** __last166;
  int** __result167;
  int** __retval168;
  __first165 = v161;
  __last166 = v162;
  __result167 = v163;
      _Bool r169 = std____is_constant_evaluated();
      if (r169) {
      } else {
          long __n170;
          int** t171 = __first165;
          int** t172 = __last166;
          long r173 = std__iterator_traits_int_____difference_type_std__distance_int___(t171, t172);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n170 = r173;
            long t174 = __n170;
            long c175 = 1;
            _Bool c176 = ((t174 > c175)) ? 1 : 0;
            if (c176) {
              int** t177 = __result167;
              void* cast178 = (void*)t177;
              int** t179 = __first165;
              void* cast180 = (void*)t179;
              long t181 = __n170;
              unsigned long cast182 = (unsigned long)t181;
              unsigned long c183 = 8;
              unsigned long b184 = cast182 * c183;
              void* r185 = memmove(cast178, cast180, b184);
              long t186 = __n170;
              int** t187 = __result167;
              int** ptr188 = &(t187)[t186];
              __result167 = ptr188;
            } else {
                long t189 = __n170;
                long c190 = 1;
                _Bool c191 = ((t189 == c190)) ? 1 : 0;
                if (c191) {
                  void_std____assign_one_false__int____int___(&__result167, &__first165);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                  int** t192 = __result167;
                  int c193 = 1;
                  int** ptr194 = &(t192)[c193];
                  __result167 = ptr194;
                }
            }
          int** t195 = __result167;
          __retval168 = t195;
          int** t196 = __retval168;
          return t196;
      }
    while (1) {
      int** t198 = __first165;
      int** t199 = __last166;
      _Bool c200 = ((t198 != t199)) ? 1 : 0;
      if (!c200) break;
      void_std____assign_one_false__int____int___(&__result167, &__first165);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
    for_step197: ;
      int** t201 = __result167;
      int c202 = 1;
      int** ptr203 = &(t201)[c202];
      __result167 = ptr203;
      int** t204 = __first165;
      int c205 = 1;
      int** ptr206 = &(t204)[c205];
      __first165 = ptr206;
    }
  int** t207 = __result167;
  __retval168 = t207;
  int** t208 = __retval168;
  return t208;
}

// function: _ZSt14__copy_move_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a1_false__int____int___(int** v209, int** v210, int** v211) {
bb212:
  int** __first213;
  int** __last214;
  int** __result215;
  int** __retval216;
  __first213 = v209;
  __last214 = v210;
  __result215 = v211;
  int** t217 = __first213;
  int** t218 = __last214;
  int** t219 = __result215;
  int** r220 = int___std____copy_move_a2_false__int____int____int___(t217, t218, t219);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval216 = r220;
  int** t221 = __retval216;
  return t221;
}

// function: _ZSt12__niter_baseIPPiET_S2_
int** int___std____niter_base_int___(int** v222) {
bb223:
  int** __it224;
  int** __retval225;
  __it224 = v222;
  int** t226 = __it224;
  __retval225 = t226;
  int** t227 = __retval225;
  return t227;
}

// function: _ZSt13__copy_move_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a_false__int____int___(int** v228, int** v229, int** v230) {
bb231:
  int** __first232;
  int** __last233;
  int** __result234;
  int** __retval235;
  __first232 = v228;
  __last233 = v229;
  __result234 = v230;
  int** t236 = __first232;
  int** r237 = int___std____niter_base_int___(t236);
  int** t238 = __last233;
  int** r239 = int___std____niter_base_int___(t238);
  int** t240 = __result234;
  int** r241 = int___std____niter_base_int___(t240);
  int** r242 = int___std____copy_move_a1_false__int____int___(r237, r239, r241);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r243 = int___std____niter_wrap_int___(&__result234, r242);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval235 = r243;
  int** t244 = __retval235;
  return t244;
}

// function: _ZSt12__miter_baseIPPiET_S2_
int** int___std____miter_base_int___(int** v245) {
bb246:
  int** __it247;
  int** __retval248;
  __it247 = v245;
  int** t249 = __it247;
  __retval248 = t249;
  int** t250 = __retval248;
  return t250;
}

// function: _ZSt4copyIPPiS1_ET0_T_S3_S2_
int** int___std__copy_int____int___(int** v251, int** v252, int** v253) {
bb254:
  int** __first255;
  int** __last256;
  int** __result257;
  int** __retval258;
  __first255 = v251;
  __last256 = v252;
  __result257 = v253;
  int** t259 = __first255;
  int** r260 = int___std____miter_base_int___(t259);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t261 = __last256;
  int** r262 = int___std____miter_base_int___(t261);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t263 = __result257;
  int** r264 = int___std____copy_move_a_false__int____int___(r260, r262, t263);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval258 = r264;
  int** t265 = __retval258;
  return t265;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb266:
  _Bool __retval267;
    _Bool c268 = 0;
    __retval267 = c268;
    _Bool t269 = __retval267;
    return t269;
  abort();
}

// function: _ZSt9__advanceIPPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int____long_(int*** v270, long v271, struct std__random_access_iterator_tag v272) {
bb273:
  int*** __i274;
  long __n275;
  struct std__random_access_iterator_tag unnamed276;
  __i274 = v270;
  __n275 = v271;
  unnamed276 = v272;
    long t277 = __n275;
    _Bool isconst278 = 0;
    _Bool ternary279;
    if (isconst278) {
      long t280 = __n275;
      long c281 = 1;
      _Bool c282 = ((t280 == c281)) ? 1 : 0;
      ternary279 = (_Bool)c282;
    } else {
      _Bool c283 = 0;
      ternary279 = (_Bool)c283;
    }
    if (ternary279) {
      int*** t284 = __i274;
      int** t285 = *t284;
      int c286 = 1;
      int** ptr287 = &(t285)[c286];
      *t284 = ptr287;
    } else {
        long t288 = __n275;
        _Bool isconst289 = 0;
        _Bool ternary290;
        if (isconst289) {
          long t291 = __n275;
          long c292 = -1;
          _Bool c293 = ((t291 == c292)) ? 1 : 0;
          ternary290 = (_Bool)c293;
        } else {
          _Bool c294 = 0;
          ternary290 = (_Bool)c294;
        }
        if (ternary290) {
          int*** t295 = __i274;
          int** t296 = *t295;
          int c297 = -1;
          int** ptr298 = &(t296)[c297];
          *t295 = ptr298;
        } else {
          long t299 = __n275;
          int*** t300 = __i274;
          int** t301 = *t300;
          int** ptr302 = &(t301)[t299];
          *t300 = ptr302;
        }
    }
  return;
}

// function: _ZSt7advanceIPPilEvRT_T0_
void void_std__advance_int____long_(int*** v303, long v304) {
bb305:
  int*** __i306;
  long __n307;
  long __d308;
  struct std__random_access_iterator_tag agg_tmp0309;
  __i306 = v303;
  __n307 = v304;
  long t310 = __n307;
  __d308 = t310;
  int*** t311 = __i306;
  long t312 = __d308;
  int*** t313 = __i306;
  struct std__random_access_iterator_tag r314 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(t313);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0309 = r314;
  struct std__random_access_iterator_tag t315 = agg_tmp0309;
  void_std____advance_int____long_(t311, t312, t315);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a2_false__int____int___(int** v316, int** v317, int** v318) {
bb319:
  int** __first320;
  int** __last321;
  int** __result322;
  int** __retval323;
  __first320 = v316;
  __last321 = v317;
  __result322 = v318;
      _Bool r324 = std__is_constant_evaluated();
      if (r324) {
      } else {
          long __n325;
          int** t326 = __first320;
          int** t327 = __last321;
          long r328 = std__iterator_traits_int_____difference_type_std__distance_int___(t326, t327);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n325 = r328;
          long t329 = __n325;
          long u330 = -t329;
          void_std__advance_int____long_(&__result322, u330);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
            long t331 = __n325;
            long c332 = 1;
            _Bool c333 = ((t331 > c332)) ? 1 : 0;
            if (c333) {
              int** t334 = __result322;
              void* cast335 = (void*)t334;
              int** t336 = __first320;
              void* cast337 = (void*)t336;
              long t338 = __n325;
              unsigned long cast339 = (unsigned long)t338;
              unsigned long c340 = 8;
              unsigned long b341 = cast339 * c340;
              void* r342 = memmove(cast335, cast337, b341);
            } else {
                long t343 = __n325;
                long c344 = 1;
                _Bool c345 = ((t343 == c344)) ? 1 : 0;
                if (c345) {
                  void_std____assign_one_false__int____int___(&__result322, &__first320);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                }
            }
          int** t346 = __result322;
          __retval323 = t346;
          int** t347 = __retval323;
          return t347;
      }
    while (1) {
      int** t348 = __first320;
      int** t349 = __last321;
      _Bool c350 = ((t348 != t349)) ? 1 : 0;
      if (!c350) break;
        int** t351 = __last321;
        int c352 = -1;
        int** ptr353 = &(t351)[c352];
        __last321 = ptr353;
        int** t354 = __result322;
        int c355 = -1;
        int** ptr356 = &(t354)[c355];
        __result322 = ptr356;
        void_std____assign_one_false__int____int___(&__result322, &__last321);
        if (__cir_exc_active) {
          int** __cir_eh_ret = (int**)0;
          return __cir_eh_ret;
        }
    }
  int** t357 = __result322;
  __retval323 = t357;
  int** t358 = __retval323;
  return t358;
}

// function: _ZSt23__copy_move_backward_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a1_false__int____int___(int** v359, int** v360, int** v361) {
bb362:
  int** __first363;
  int** __last364;
  int** __result365;
  int** __retval366;
  __first363 = v359;
  __last364 = v360;
  __result365 = v361;
  int** t367 = __first363;
  int** t368 = __last364;
  int** t369 = __result365;
  int** r370 = int___std____copy_move_backward_a2_false__int____int___(t367, t368, t369);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval366 = r370;
  int** t371 = __retval366;
  return t371;
}

// function: _ZSt22__copy_move_backward_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a_false__int____int___(int** v372, int** v373, int** v374) {
bb375:
  int** __first376;
  int** __last377;
  int** __result378;
  int** __retval379;
  __first376 = v372;
  __last377 = v373;
  __result378 = v374;
  int** t380 = __first376;
  int** r381 = int___std____niter_base_int___(t380);
  int** t382 = __last377;
  int** r383 = int___std____niter_base_int___(t382);
  int** t384 = __result378;
  int** r385 = int___std____niter_base_int___(t384);
  int** r386 = int___std____copy_move_backward_a1_false__int____int___(r381, r383, r385);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r387 = int___std____niter_wrap_int___(&__result378, r386);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval379 = r387;
  int** t388 = __retval379;
  return t388;
}

// function: _ZSt13copy_backwardIPPiS1_ET0_T_S3_S2_
int** int___std__copy_backward_int____int___(int** v389, int** v390, int** v391) {
bb392:
  int** __first393;
  int** __last394;
  int** __result395;
  int** __retval396;
  __first393 = v389;
  __last394 = v390;
  __result395 = v391;
  int** t397 = __first393;
  int** r398 = int___std____miter_base_int___(t397);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t399 = __last394;
  int** r400 = int___std____miter_base_int___(t399);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t401 = __result395;
  int** r402 = int___std____copy_move_backward_a_false__int____int___(r398, r400, t401);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval396 = r402;
  int** t403 = __retval396;
  return t403;
}

// function: _ZNSt5dequeIiSaIiEE17_M_reallocate_mapEmb
void std__deque_int__std__allocator_int______M_reallocate_map(struct std__deque_int__std__allocator_int__* v404, unsigned long v405, _Bool v406) {
bb407:
  struct std__deque_int__std__allocator_int__* this408;
  unsigned long __nodes_to_add409;
  _Bool __add_at_front410;
  unsigned long __old_num_nodes411;
  unsigned long __new_num_nodes412;
  int** __new_nstart413;
  this408 = v404;
  __nodes_to_add409 = v405;
  __add_at_front410 = v406;
  struct std__deque_int__std__allocator_int__* t414 = this408;
  struct std___Deque_base_int__std__allocator_int__* base415 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base416 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base415->_M_impl) + 0);
  int** t417 = base416->_M_finish._M_node;
  struct std___Deque_base_int__std__allocator_int__* base418 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base419 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base418->_M_impl) + 0);
  int** t420 = base419->_M_start._M_node;
  long diff421 = t417 - t420;
  long c422 = 1;
  long b423 = diff421 + c422;
  unsigned long cast424 = (unsigned long)b423;
  __old_num_nodes411 = cast424;
  unsigned long t425 = __old_num_nodes411;
  unsigned long t426 = __nodes_to_add409;
  unsigned long b427 = t425 + t426;
  __new_num_nodes412 = b427;
    struct std___Deque_base_int__std__allocator_int__* base428 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base429 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base428->_M_impl) + 0);
    unsigned long t430 = base429->_M_map_size;
    unsigned long c431 = 2;
    unsigned long t432 = __new_num_nodes412;
    unsigned long b433 = c431 * t432;
    _Bool c434 = ((t430 > b433)) ? 1 : 0;
    if (c434) {
      struct std___Deque_base_int__std__allocator_int__* base435 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base436 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base435->_M_impl) + 0);
      int** t437 = base436->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base438 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base439 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base438->_M_impl) + 0);
      unsigned long t440 = base439->_M_map_size;
      unsigned long t441 = __new_num_nodes412;
      unsigned long b442 = t440 - t441;
      unsigned long c443 = 2;
      unsigned long b444 = b442 / c443;
      int** ptr445 = &(t437)[b444];
      _Bool t446 = __add_at_front410;
      unsigned long ternary447;
      if (t446) {
        unsigned long t448 = __nodes_to_add409;
        ternary447 = (unsigned long)t448;
      } else {
        unsigned long c449 = 0;
        ternary447 = (unsigned long)c449;
      }
      int** ptr450 = &(ptr445)[ternary447];
      __new_nstart413 = ptr450;
        int** t451 = __new_nstart413;
        struct std___Deque_base_int__std__allocator_int__* base452 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base453 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base452->_M_impl) + 0);
        int** t454 = base453->_M_start._M_node;
        _Bool c455 = ((t451 < t454)) ? 1 : 0;
        if (c455) {
          struct std___Deque_base_int__std__allocator_int__* base456 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base457 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base456->_M_impl) + 0);
          int** t458 = base457->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base459 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base460 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base459->_M_impl) + 0);
          int** t461 = base460->_M_finish._M_node;
          int c462 = 1;
          int** ptr463 = &(t461)[c462];
          int** t464 = __new_nstart413;
          int** r465 = int___std__copy_int____int___(t458, ptr463, t464);
          if (__cir_exc_active) {
            return;
          }
        } else {
          struct std___Deque_base_int__std__allocator_int__* base466 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base467 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base466->_M_impl) + 0);
          int** t468 = base467->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base469 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base470 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base469->_M_impl) + 0);
          int** t471 = base470->_M_finish._M_node;
          int c472 = 1;
          int** ptr473 = &(t471)[c472];
          int** t474 = __new_nstart413;
          unsigned long t475 = __old_num_nodes411;
          int** ptr476 = &(t474)[t475];
          int** r477 = int___std__copy_backward_int____int___(t468, ptr473, ptr476);
          if (__cir_exc_active) {
            return;
          }
        }
    } else {
      unsigned long __new_map_size478;
      unsigned long __bufsz479;
      int** __new_map480;
      struct std___Deque_base_int__std__allocator_int__* base481 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base482 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base481->_M_impl) + 0);
      unsigned long t483 = base482->_M_map_size;
      struct std___Deque_base_int__std__allocator_int__* base484 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base485 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base484->_M_impl) + 0);
      unsigned long* r486 = unsigned_long_const__std__max_unsigned_long_(&base485->_M_map_size, &__nodes_to_add409);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t487 = *r486;
      unsigned long b488 = t483 + t487;
      unsigned long c489 = 2;
      unsigned long b490 = b488 + c489;
      __new_map_size478 = b490;
      unsigned long c491 = 128;
      __bufsz479 = c491;
        unsigned long t492 = __new_map_size478;
        unsigned long r493 = std__deque_int__std__allocator_int_____max_size___const(t414);
        unsigned long t494 = __bufsz479;
        unsigned long b495 = r493 + t494;
        unsigned long c496 = 1;
        unsigned long b497 = b495 - c496;
        unsigned long t498 = __bufsz479;
        unsigned long b499 = b497 / t498;
        unsigned long c500 = 2;
        unsigned long b501 = b499 * c500;
        _Bool c502 = ((t492 > b501)) ? 1 : 0;
        if (c502) {
          __builtin_unreachable();
        }
      struct std___Deque_base_int__std__allocator_int__* base503 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      unsigned long t504 = __new_map_size478;
      int** r505 = std___Deque_base_int__std__allocator_int______M_allocate_map(base503, t504);
      if (__cir_exc_active) {
        return;
      }
      __new_map480 = r505;
      int** t506 = __new_map480;
      unsigned long t507 = __new_map_size478;
      unsigned long t508 = __new_num_nodes412;
      unsigned long b509 = t507 - t508;
      unsigned long c510 = 2;
      unsigned long b511 = b509 / c510;
      int** ptr512 = &(t506)[b511];
      _Bool t513 = __add_at_front410;
      unsigned long ternary514;
      if (t513) {
        unsigned long t515 = __nodes_to_add409;
        ternary514 = (unsigned long)t515;
      } else {
        unsigned long c516 = 0;
        ternary514 = (unsigned long)c516;
      }
      int** ptr517 = &(ptr512)[ternary514];
      __new_nstart413 = ptr517;
      struct std___Deque_base_int__std__allocator_int__* base518 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base519 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base518->_M_impl) + 0);
      int** t520 = base519->_M_start._M_node;
      struct std___Deque_base_int__std__allocator_int__* base521 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base522 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base521->_M_impl) + 0);
      int** t523 = base522->_M_finish._M_node;
      int c524 = 1;
      int** ptr525 = &(t523)[c524];
      int** t526 = __new_nstart413;
      int** r527 = int___std__copy_int____int___(t520, ptr525, t526);
      if (__cir_exc_active) {
        return;
      }
      struct std___Deque_base_int__std__allocator_int__* base528 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      struct std___Deque_base_int__std__allocator_int__* base529 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base530 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base529->_M_impl) + 0);
      int** t531 = base530->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base532 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base533 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base532->_M_impl) + 0);
      unsigned long t534 = base533->_M_map_size;
      std___Deque_base_int__std__allocator_int______M_deallocate_map(base528, t531, t534);
      int** t535 = __new_map480;
      struct std___Deque_base_int__std__allocator_int__* base536 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base537 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base536->_M_impl) + 0);
      base537->_M_map = t535;
      unsigned long t538 = __new_map_size478;
      struct std___Deque_base_int__std__allocator_int__* base539 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base540 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base539->_M_impl) + 0);
      base540->_M_map_size = t538;
    }
  struct std___Deque_base_int__std__allocator_int__* base541 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base542 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base541->_M_impl) + 0);
  int** t543 = __new_nstart413;
  std___Deque_iterator_int__int___int_____M_set_node(&base542->_M_start, t543);
  struct std___Deque_base_int__std__allocator_int__* base544 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base545 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base544->_M_impl) + 0);
  int** t546 = __new_nstart413;
  unsigned long t547 = __old_num_nodes411;
  int** ptr548 = &(t546)[t547];
  int c549 = -1;
  int** ptr550 = &(ptr548)[c549];
  std___Deque_iterator_int__int___int_____M_set_node(&base545->_M_finish, ptr550);
  return;
}

// function: _ZNSt5dequeIiSaIiEE22_M_reserve_map_at_backEm
void std__deque_int__std__allocator_int______M_reserve_map_at_back(struct std__deque_int__std__allocator_int__* v551, unsigned long v552) {
bb553:
  struct std__deque_int__std__allocator_int__* this554;
  unsigned long __nodes_to_add555;
  this554 = v551;
  __nodes_to_add555 = v552;
  struct std__deque_int__std__allocator_int__* t556 = this554;
    unsigned long t557 = __nodes_to_add555;
    unsigned long c558 = 1;
    unsigned long b559 = t557 + c558;
    struct std___Deque_base_int__std__allocator_int__* base560 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t556 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base561 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base560->_M_impl) + 0);
    unsigned long t562 = base561->_M_map_size;
    struct std___Deque_base_int__std__allocator_int__* base563 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t556 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base564 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base563->_M_impl) + 0);
    int** t565 = base564->_M_finish._M_node;
    struct std___Deque_base_int__std__allocator_int__* base566 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t556 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base567 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base566->_M_impl) + 0);
    int** t568 = base567->_M_map;
    long diff569 = t565 - t568;
    unsigned long cast570 = (unsigned long)diff569;
    unsigned long b571 = t562 - cast570;
    _Bool c572 = ((b559 > b571)) ? 1 : 0;
    if (c572) {
      unsigned long t573 = __nodes_to_add555;
      _Bool c574 = 0;
      std__deque_int__std__allocator_int______M_reallocate_map(t556, t573, c574);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE16_M_push_back_auxIJRKiEEEvDpOT_
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(struct std__deque_int__std__allocator_int__* v575, int* v576) {
bb577:
  struct std__deque_int__std__allocator_int__* this578;
  int* __args579;
  this578 = v575;
  __args579 = v576;
  struct std__deque_int__std__allocator_int__* t580 = this578;
    unsigned long r581 = std__deque_int__std__allocator_int_____size___const(t580);
    unsigned long r582 = std__deque_int__std__allocator_int_____max_size___const(t580);
    _Bool c583 = ((r581 == r582)) ? 1 : 0;
    if (c583) {
      char* cast584 = (char*)&(_str_3);
      std____throw_length_error(cast584);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long c585 = 1;
  std__deque_int__std__allocator_int______M_reserve_map_at_back(t580, c585);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base586 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t580 + 0);
  int* r587 = std___Deque_base_int__std__allocator_int______M_allocate_node(base586);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base588 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t580 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base589 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base588->_M_impl) + 0);
  int** t590 = base589->_M_finish._M_node;
  int c591 = 1;
  int** ptr592 = &(t590)[c591];
  *ptr592 = r587;
      struct std___Deque_base_int__std__allocator_int__* base594 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t580 + 0);
      struct std__allocator_int_* base595 = (struct std__allocator_int_*)((char *)&(base594->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base596 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t580 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base597 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base596->_M_impl) + 0);
      int* t598 = base597->_M_finish._M_cur;
      int* t599 = __args579;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base595, t598, t599);
      struct std___Deque_base_int__std__allocator_int__* base600 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t580 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base601 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base600->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base602 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t580 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base603 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base602->_M_impl) + 0);
      int** t604 = base603->_M_finish._M_node;
      int c605 = 1;
      int** ptr606 = &(t604)[c605];
      std___Deque_iterator_int__int___int_____M_set_node(&base601->_M_finish, ptr606);
      struct std___Deque_base_int__std__allocator_int__* base607 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t580 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base608 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base607->_M_impl) + 0);
      int* t609 = base608->_M_finish._M_first;
      struct std___Deque_base_int__std__allocator_int__* base610 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t580 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base611 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base610->_M_impl) + 0);
      base611->_M_finish._M_cur = t609;
    cir_try_dispatch593: ;
    if (__cir_exc_active) {
    {
      int ca_tok612 = 0;
      void* ca_exn613 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base614 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t580 + 0);
        struct std___Deque_base_int__std__allocator_int__* base615 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t580 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base616 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base615->_M_impl) + 0);
        int** t617 = base616->_M_finish._M_node;
        int c618 = 1;
        int** ptr619 = &(t617)[c618];
        int* t620 = *ptr619;
        std___Deque_base_int__std__allocator_int______M_deallocate_node(base614, t620);
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
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* v621, int* v622) {
bb623:
  struct std__deque_int__std__allocator_int__* this624;
  int* __x625;
  this624 = v621;
  __x625 = v622;
  struct std__deque_int__std__allocator_int__* t626 = this624;
    struct std___Deque_base_int__std__allocator_int__* base627 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t626 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base628 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base627->_M_impl) + 0);
    int* t629 = base628->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base630 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t626 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base631 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base630->_M_impl) + 0);
    int* t632 = base631->_M_finish._M_last;
    int c633 = -1;
    int* ptr634 = &(t632)[c633];
    _Bool c635 = ((t629 != ptr634)) ? 1 : 0;
    if (c635) {
      struct std___Deque_base_int__std__allocator_int__* base636 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t626 + 0);
      struct std__allocator_int_* base637 = (struct std__allocator_int_*)((char *)&(base636->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base638 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t626 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base639 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base638->_M_impl) + 0);
      int* t640 = base639->_M_finish._M_cur;
      int* t641 = __x625;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base637, t640, t641);
      struct std___Deque_base_int__std__allocator_int__* base642 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t626 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base643 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base642->_M_impl) + 0);
      int* t644 = base643->_M_finish._M_cur;
      int c645 = 1;
      int* ptr646 = &(t644)[c645];
      base643->_M_finish._M_cur = ptr646;
    } else {
      int* t647 = __x625;
      void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(t626, t647);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5stackIiSt5dequeIiSaIiEEE4pushERKi
void std__stack_int__std__deque_int__std__allocator_int_______push(struct std__stack_int__std__deque_int__std__allocator_int___* v648, int* v649) {
bb650:
  struct std__stack_int__std__deque_int__std__allocator_int___* this651;
  int* __x652;
  this651 = v648;
  __x652 = v649;
  struct std__stack_int__std__deque_int__std__allocator_int___* t653 = this651;
  int* t654 = __x652;
  std__deque_int__std__allocator_int_____push_back(&t653->c, t654);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* v655, struct std___Deque_iterator_int__int____int___* v656) {
bb657:
  struct std___Deque_iterator_int__int____int___* __x658;
  struct std___Deque_iterator_int__int____int___* __y659;
  _Bool __retval660;
  __x658 = v655;
  __y659 = v656;
  struct std___Deque_iterator_int__int____int___* t661 = __x658;
  int* t662 = t661->_M_cur;
  struct std___Deque_iterator_int__int____int___* t663 = __y659;
  int* t664 = t663->_M_cur;
  _Bool c665 = ((t662 == t664)) ? 1 : 0;
  __retval660 = c665;
  _Bool t666 = __retval660;
  return t666;
}

// function: _ZNKSt5dequeIiSaIiEE5emptyEv
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* v667) {
bb668:
  struct std__deque_int__std__allocator_int__* this669;
  _Bool __retval670;
  this669 = v667;
  struct std__deque_int__std__allocator_int__* t671 = this669;
  struct std___Deque_base_int__std__allocator_int__* base672 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t671 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base673 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base672->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base674 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t671 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base675 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base674->_M_impl) + 0);
  _Bool r676 = std__operator__(&base673->_M_finish, &base675->_M_start);
  __retval670 = r676;
  _Bool t677 = __retval670;
  return t677;
}

// function: _ZNKSt5stackIiSt5dequeIiSaIiEEE5emptyEv
_Bool std__stack_int__std__deque_int__std__allocator_int_______empty___const(struct std__stack_int__std__deque_int__std__allocator_int___* v678) {
bb679:
  struct std__stack_int__std__deque_int__std__allocator_int___* this680;
  _Bool __retval681;
  this680 = v678;
  struct std__stack_int__std__deque_int__std__allocator_int___* t682 = this680;
  _Bool r683 = std__deque_int__std__allocator_int_____empty___const(&t682->c);
  __retval681 = r683;
  _Bool t684 = __retval681;
  return t684;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEmmEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* v685) {
bb686:
  struct std___Deque_iterator_int__int____int___* this687;
  struct std___Deque_iterator_int__int____int___* __retval688;
  this687 = v685;
  struct std___Deque_iterator_int__int____int___* t689 = this687;
    int* t690 = t689->_M_cur;
    int* t691 = t689->_M_first;
    _Bool c692 = ((t690 == t691)) ? 1 : 0;
    if (c692) {
      int** t693 = t689->_M_node;
      int c694 = -1;
      int** ptr695 = &(t693)[c694];
      std___Deque_iterator_int__int___int_____M_set_node(t689, ptr695);
      int* t696 = t689->_M_last;
      t689->_M_cur = t696;
    }
  int* t697 = t689->_M_cur;
  int c698 = -1;
  int* ptr699 = &(t697)[c698];
  t689->_M_cur = ptr699;
  __retval688 = t689;
  struct std___Deque_iterator_int__int____int___* t700 = __retval688;
  return t700;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v701) {
bb702:
  struct std___Deque_iterator_int__int____int___* this703;
  int* __retval704;
  this703 = v701;
  struct std___Deque_iterator_int__int____int___* t705 = this703;
  int* t706 = t705->_M_cur;
  __retval704 = t706;
  int* t707 = __retval704;
  return t707;
}

// function: _ZNSt5dequeIiSaIiEE4backEv
int* std__deque_int__std__allocator_int_____back(struct std__deque_int__std__allocator_int__* v708) {
bb709:
  struct std__deque_int__std__allocator_int__* this710;
  int* __retval711;
  struct std___Deque_iterator_int__int____int___ __tmp712;
  this710 = v708;
  struct std__deque_int__std__allocator_int__* t713 = this710;
    do {
          _Bool r714 = std__deque_int__std__allocator_int_____empty___const(t713);
          if (r714) {
            char* cast715 = (char*)&(_str_6);
            int c716 = 1537;
            char* cast717 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv);
            char* cast718 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast715, c716, cast717, cast718);
          }
      _Bool c719 = 0;
      if (!c719) break;
    } while (1);
  struct std___Deque_iterator_int__int____int___ r720 = std__deque_int__std__allocator_int_____end(t713);
  __tmp712 = r720;
  struct std___Deque_iterator_int__int____int___* r721 = std___Deque_iterator_int__int___int____operator__(&__tmp712);
  int* r722 = std___Deque_iterator_int__int___int____operator____const(&__tmp712);
  __retval711 = r722;
  int* t723 = __retval711;
  return t723;
}

// function: _ZNSt5stackIiSt5dequeIiSaIiEEE3topEv
int* std__stack_int__std__deque_int__std__allocator_int_______top(struct std__stack_int__std__deque_int__std__allocator_int___* v724) {
bb725:
  struct std__stack_int__std__deque_int__std__allocator_int___* this726;
  int* __retval727;
  this726 = v724;
  struct std__stack_int__std__deque_int__std__allocator_int___* t728 = this726;
    do {
          _Bool r729 = std__stack_int__std__deque_int__std__allocator_int_______empty___const(t728);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          if (r729) {
            char* cast730 = (char*)&(_str_4);
            int c731 = 260;
            char* cast732 = (char*)&(__PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3topEv);
            char* cast733 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast730, c731, cast732, cast733);
          }
      _Bool c734 = 0;
      if (!c734) break;
    } while (1);
  int* r735 = std__deque_int__std__allocator_int_____back(&t728->c);
  __retval727 = r735;
  int* t736 = __retval727;
  return t736;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v737, int* v738) {
bb739:
  struct std__allocator_int_* __a740;
  int* __p741;
  __a740 = v737;
  __p741 = v738;
  int* t742 = __p741;
  void_std__destroy_at_int_(t742);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_pop_back_auxEv
void std__deque_int__std__allocator_int______M_pop_back_aux(struct std__deque_int__std__allocator_int__* v743) {
bb744:
  struct std__deque_int__std__allocator_int__* this745;
  this745 = v743;
  struct std__deque_int__std__allocator_int__* t746 = this745;
  struct std___Deque_base_int__std__allocator_int__* base747 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t746 + 0);
  struct std___Deque_base_int__std__allocator_int__* base748 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t746 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base749 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base748->_M_impl) + 0);
  int* t750 = base749->_M_finish._M_first;
  std___Deque_base_int__std__allocator_int______M_deallocate_node(base747, t750);
  struct std___Deque_base_int__std__allocator_int__* base751 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t746 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base752 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base751->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base753 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t746 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base754 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base753->_M_impl) + 0);
  int** t755 = base754->_M_finish._M_node;
  int c756 = -1;
  int** ptr757 = &(t755)[c756];
  std___Deque_iterator_int__int___int_____M_set_node(&base752->_M_finish, ptr757);
  struct std___Deque_base_int__std__allocator_int__* base758 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t746 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base759 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base758->_M_impl) + 0);
  int* t760 = base759->_M_finish._M_last;
  int c761 = -1;
  int* ptr762 = &(t760)[c761];
  struct std___Deque_base_int__std__allocator_int__* base763 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t746 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base764 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base763->_M_impl) + 0);
  base764->_M_finish._M_cur = ptr762;
  struct std___Deque_base_int__std__allocator_int__* base765 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t746 + 0);
  struct std__allocator_int_* r766 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base765);
  struct std___Deque_base_int__std__allocator_int__* base767 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t746 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base768 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base767->_M_impl) + 0);
  int* t769 = base768->_M_finish._M_cur;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(r766, t769);
  return;
}

// function: _ZNSt5dequeIiSaIiEE8pop_backEv
void std__deque_int__std__allocator_int_____pop_back(struct std__deque_int__std__allocator_int__* v770) {
bb771:
  struct std__deque_int__std__allocator_int__* this772;
  this772 = v770;
  struct std__deque_int__std__allocator_int__* t773 = this772;
    do {
          _Bool r774 = std__deque_int__std__allocator_int_____empty___const(t773);
          if (r774) {
            char* cast775 = (char*)&(_str_6);
            int c776 = 1666;
            char* cast777 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE8pop_backEv);
            char* cast778 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast775, c776, cast777, cast778);
          }
      _Bool c779 = 0;
      if (!c779) break;
    } while (1);
    struct std___Deque_base_int__std__allocator_int__* base780 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t773 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base781 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base780->_M_impl) + 0);
    int* t782 = base781->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base783 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t773 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base784 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base783->_M_impl) + 0);
    int* t785 = base784->_M_finish._M_first;
    _Bool c786 = ((t782 != t785)) ? 1 : 0;
    if (c786) {
      struct std___Deque_base_int__std__allocator_int__* base787 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t773 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base788 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base787->_M_impl) + 0);
      int* t789 = base788->_M_finish._M_cur;
      int c790 = -1;
      int* ptr791 = &(t789)[c790];
      base788->_M_finish._M_cur = ptr791;
      struct std___Deque_base_int__std__allocator_int__* base792 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t773 + 0);
      struct std__allocator_int_* r793 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base792);
      struct std___Deque_base_int__std__allocator_int__* base794 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t773 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base795 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base794->_M_impl) + 0);
      int* t796 = base795->_M_finish._M_cur;
      void_std__allocator_traits_std__allocator_int_____destroy_int_(r793, t796);
    } else {
      std__deque_int__std__allocator_int______M_pop_back_aux(t773);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5stackIiSt5dequeIiSaIiEEE3popEv
void std__stack_int__std__deque_int__std__allocator_int_______pop(struct std__stack_int__std__deque_int__std__allocator_int___* v797) {
bb798:
  struct std__stack_int__std__deque_int__std__allocator_int___* this799;
  this799 = v797;
  struct std__stack_int__std__deque_int__std__allocator_int___* t800 = this799;
    do {
          _Bool r801 = std__stack_int__std__deque_int__std__allocator_int_______empty___const(t800);
          if (__cir_exc_active) {
            return;
          }
          if (r801) {
            char* cast802 = (char*)&(_str_4);
            int c803 = 333;
            char* cast804 = (char*)&(__PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3popEv);
            char* cast805 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast802, c803, cast804, cast805);
          }
      _Bool c806 = 0;
      if (!c806) break;
    } while (1);
  std__deque_int__std__allocator_int_____pop_back(&t800->c);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v807, int v808) {
bb809:
  int __a810;
  int __b811;
  int __retval812;
  __a810 = v807;
  __b811 = v808;
  int t813 = __a810;
  int t814 = __b811;
  int b815 = t813 | t814;
  __retval812 = b815;
  int t816 = __retval812;
  return t816;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v817) {
bb818:
  struct std__basic_ios_char__std__char_traits_char__* this819;
  int __retval820;
  this819 = v817;
  struct std__basic_ios_char__std__char_traits_char__* t821 = this819;
  struct std__ios_base* base822 = (struct std__ios_base*)((char *)t821 + 0);
  int t823 = base822->_M_streambuf_state;
  __retval820 = t823;
  int t824 = __retval820;
  return t824;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v825, int v826) {
bb827:
  struct std__basic_ios_char__std__char_traits_char__* this828;
  int __state829;
  this828 = v825;
  __state829 = v826;
  struct std__basic_ios_char__std__char_traits_char__* t830 = this828;
  int r831 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t830);
  if (__cir_exc_active) {
    return;
  }
  int t832 = __state829;
  int r833 = std__operator__2(r831, t832);
  std__basic_ios_char__std__char_traits_char_____clear(t830, r833);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v834, char* v835) {
bb836:
  char* __c1837;
  char* __c2838;
  _Bool __retval839;
  __c1837 = v834;
  __c2838 = v835;
  char* t840 = __c1837;
  char t841 = *t840;
  int cast842 = (int)t841;
  char* t843 = __c2838;
  char t844 = *t843;
  int cast845 = (int)t844;
  _Bool c846 = ((cast842 == cast845)) ? 1 : 0;
  __retval839 = c846;
  _Bool t847 = __retval839;
  return t847;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v848) {
bb849:
  char* __p850;
  unsigned long __retval851;
  unsigned long __i852;
  __p850 = v848;
  unsigned long c853 = 0;
  __i852 = c853;
    char ref_tmp0854;
    while (1) {
      unsigned long t855 = __i852;
      char* t856 = __p850;
      char* ptr857 = &(t856)[t855];
      char c858 = 0;
      ref_tmp0854 = c858;
      _Bool r859 = __gnu_cxx__char_traits_char___eq(ptr857, &ref_tmp0854);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u860 = !r859;
      if (!u860) break;
      unsigned long t861 = __i852;
      unsigned long u862 = t861 + 1;
      __i852 = u862;
    }
  unsigned long t863 = __i852;
  __retval851 = t863;
  unsigned long t864 = __retval851;
  return t864;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v865) {
bb866:
  char* __s867;
  unsigned long __retval868;
  __s867 = v865;
    _Bool r869 = std____is_constant_evaluated();
    if (r869) {
      char* t870 = __s867;
      unsigned long r871 = __gnu_cxx__char_traits_char___length(t870);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval868 = r871;
      unsigned long t872 = __retval868;
      return t872;
    }
  char* t873 = __s867;
  unsigned long r874 = strlen(t873);
  __retval868 = r874;
  unsigned long t875 = __retval868;
  return t875;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v876, char* v877) {
bb878:
  struct std__basic_ostream_char__std__char_traits_char__* __out879;
  char* __s880;
  struct std__basic_ostream_char__std__char_traits_char__* __retval881;
  __out879 = v876;
  __s880 = v877;
    char* t882 = __s880;
    _Bool cast883 = (_Bool)t882;
    _Bool u884 = !cast883;
    if (u884) {
      struct std__basic_ostream_char__std__char_traits_char__* t885 = __out879;
      void** v886 = (void**)t885;
      void* v887 = *((void**)v886);
      unsigned char* cast888 = (unsigned char*)v887;
      long c889 = -24;
      unsigned char* ptr890 = &(cast888)[c889];
      long* cast891 = (long*)ptr890;
      long t892 = *cast891;
      unsigned char* cast893 = (unsigned char*)t885;
      unsigned char* ptr894 = &(cast893)[t892];
      struct std__basic_ostream_char__std__char_traits_char__* cast895 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr894;
      struct std__basic_ios_char__std__char_traits_char__* cast896 = (struct std__basic_ios_char__std__char_traits_char__*)cast895;
      int t897 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast896, t897);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t898 = __out879;
      char* t899 = __s880;
      char* t900 = __s880;
      unsigned long r901 = std__char_traits_char___length(t900);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast902 = (long)r901;
      struct std__basic_ostream_char__std__char_traits_char__* r903 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t898, t899, cast902);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t904 = __out879;
  __retval881 = t904;
  struct std__basic_ostream_char__std__char_traits_char__* t905 = __retval881;
  return t905;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v906, void* v907) {
bb908:
  struct std__basic_ostream_char__std__char_traits_char__* this909;
  void* __pf910;
  struct std__basic_ostream_char__std__char_traits_char__* __retval911;
  this909 = v906;
  __pf910 = v907;
  struct std__basic_ostream_char__std__char_traits_char__* t912 = this909;
  void* t913 = __pf910;
  struct std__basic_ostream_char__std__char_traits_char__* r914 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t913)(t912);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval911 = r914;
  struct std__basic_ostream_char__std__char_traits_char__* t915 = __retval911;
  return t915;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v916) {
bb917:
  struct std__basic_ostream_char__std__char_traits_char__* __os918;
  struct std__basic_ostream_char__std__char_traits_char__* __retval919;
  __os918 = v916;
  struct std__basic_ostream_char__std__char_traits_char__* t920 = __os918;
  struct std__basic_ostream_char__std__char_traits_char__* r921 = std__ostream__flush(t920);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval919 = r921;
  struct std__basic_ostream_char__std__char_traits_char__* t922 = __retval919;
  return t922;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v923) {
bb924:
  struct std__ctype_char_* __f925;
  struct std__ctype_char_* __retval926;
  __f925 = v923;
    struct std__ctype_char_* t927 = __f925;
    _Bool cast928 = (_Bool)t927;
    _Bool u929 = !cast928;
    if (u929) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t930 = __f925;
  __retval926 = t930;
  struct std__ctype_char_* t931 = __retval926;
  return t931;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v932, char v933) {
bb934:
  struct std__ctype_char_* this935;
  char __c936;
  char __retval937;
  this935 = v932;
  __c936 = v933;
  struct std__ctype_char_* t938 = this935;
    char t939 = t938->_M_widen_ok;
    _Bool cast940 = (_Bool)t939;
    if (cast940) {
      char t941 = __c936;
      unsigned char cast942 = (unsigned char)t941;
      unsigned long cast943 = (unsigned long)cast942;
      char t944 = t938->_M_widen[cast943];
      __retval937 = t944;
      char t945 = __retval937;
      return t945;
    }
  std__ctype_char____M_widen_init___const(t938);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t946 = __c936;
  void** v947 = (void**)t938;
  void* v948 = *((void**)v947);
  char vcall951 = (char)__VERIFIER_virtual_call_char_char(t938, 6, t946);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval937 = vcall951;
  char t952 = __retval937;
  return t952;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v953, char v954) {
bb955:
  struct std__basic_ios_char__std__char_traits_char__* this956;
  char __c957;
  char __retval958;
  this956 = v953;
  __c957 = v954;
  struct std__basic_ios_char__std__char_traits_char__* t959 = this956;
  struct std__ctype_char_* t960 = t959->_M_ctype;
  struct std__ctype_char_* r961 = std__ctype_char__const__std____check_facet_std__ctype_char___(t960);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t962 = __c957;
  char r963 = std__ctype_char___widen_char__const(r961, t962);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval958 = r963;
  char t964 = __retval958;
  return t964;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v965) {
bb966:
  struct std__basic_ostream_char__std__char_traits_char__* __os967;
  struct std__basic_ostream_char__std__char_traits_char__* __retval968;
  __os967 = v965;
  struct std__basic_ostream_char__std__char_traits_char__* t969 = __os967;
  struct std__basic_ostream_char__std__char_traits_char__* t970 = __os967;
  void** v971 = (void**)t970;
  void* v972 = *((void**)v971);
  unsigned char* cast973 = (unsigned char*)v972;
  long c974 = -24;
  unsigned char* ptr975 = &(cast973)[c974];
  long* cast976 = (long*)ptr975;
  long t977 = *cast976;
  unsigned char* cast978 = (unsigned char*)t970;
  unsigned char* ptr979 = &(cast978)[t977];
  struct std__basic_ostream_char__std__char_traits_char__* cast980 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr979;
  struct std__basic_ios_char__std__char_traits_char__* cast981 = (struct std__basic_ios_char__std__char_traits_char__*)cast980;
  char c982 = 10;
  char r983 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast981, c982);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r984 = std__ostream__put(t969, r983);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r985 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r984);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval968 = r985;
  struct std__basic_ostream_char__std__char_traits_char__* t986 = __retval968;
  return t986;
}

// function: _ZNSt5stackIiSt5dequeIiSaIiEEED2Ev
void std__stack_int__std__deque_int__std__allocator_int________stack(struct std__stack_int__std__deque_int__std__allocator_int___* v987) {
bb988:
  struct std__stack_int__std__deque_int__std__allocator_int___* this989;
  this989 = v987;
  struct std__stack_int__std__deque_int__std__allocator_int___* t990 = this989;
  {
    std__deque_int__std__allocator_int______deque(&t990->c);
  }
  return;
}

// function: main
int main() {
bb991:
  int __retval992;
  struct std__stack_int__std__deque_int__std__allocator_int___ mystack993;
  int sum994;
  int c995 = 0;
  __retval992 = c995;
  std__stack_int__std__deque_int__std__allocator_int_______stack_std__deque_int__std__allocator_int_____void_(&mystack993);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    int c996 = 0;
    sum994 = c996;
      int i997;
      int c998 = 1;
      i997 = c998;
      while (1) {
        int t1000 = i997;
        int c1001 = 10;
        _Bool c1002 = ((t1000 <= c1001)) ? 1 : 0;
        if (!c1002) break;
        std__stack_int__std__deque_int__std__allocator_int_______push(&mystack993, &i997);
        if (__cir_exc_active) {
          {
            std__stack_int__std__deque_int__std__allocator_int________stack(&mystack993);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step999: ;
        int t1003 = i997;
        int u1004 = t1003 + 1;
        i997 = u1004;
      }
      while (1) {
        _Bool r1005 = std__stack_int__std__deque_int__std__allocator_int_______empty___const(&mystack993);
        if (__cir_exc_active) {
          {
            std__stack_int__std__deque_int__std__allocator_int________stack(&mystack993);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        _Bool u1006 = !r1005;
        if (!u1006) break;
          int* r1007 = std__stack_int__std__deque_int__std__allocator_int_______top(&mystack993);
          if (__cir_exc_active) {
            {
              std__stack_int__std__deque_int__std__allocator_int________stack(&mystack993);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int t1008 = *r1007;
          int t1009 = sum994;
          int b1010 = t1009 + t1008;
          sum994 = b1010;
          std__stack_int__std__deque_int__std__allocator_int_______pop(&mystack993);
          if (__cir_exc_active) {
            {
              std__stack_int__std__deque_int__std__allocator_int________stack(&mystack993);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
      }
    _Bool r1011 = std__stack_int__std__deque_int__std__allocator_int_______empty___const(&mystack993);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&mystack993);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    _Bool u1012 = !r1011;
    if (u1012) {
    } else {
      char* cast1013 = (char*)&(_str);
      char* c1014 = _str_1;
      unsigned int c1015 = 26;
      char* cast1016 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1013, c1014, c1015, cast1016);
    }
    char* cast1017 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r1018 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1017);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&mystack993);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t1019 = sum994;
    struct std__basic_ostream_char__std__char_traits_char__* r1020 = std__ostream__operator__(r1018, t1019);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&mystack993);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1021 = std__ostream__operator___std__ostream_____(r1020, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&mystack993);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1022 = 0;
    __retval992 = c1022;
    int t1023 = __retval992;
    int ret_val1024 = t1023;
    {
      std__stack_int__std__deque_int__std__allocator_int________stack(&mystack993);
    }
    return ret_val1024;
  int t1025 = __retval992;
  return t1025;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v1026) {
bb1027:
  struct std__deque_int__std__allocator_int__* this1028;
  struct std___Deque_iterator_int__int____int___ agg_tmp01029;
  struct std___Deque_iterator_int__int____int___ agg_tmp11030;
  this1028 = v1026;
  struct std__deque_int__std__allocator_int__* t1031 = this1028;
    struct std___Deque_iterator_int__int____int___ r1032 = std__deque_int__std__allocator_int_____begin(t1031);
    agg_tmp01029 = r1032;
    struct std___Deque_iterator_int__int____int___ r1033 = std__deque_int__std__allocator_int_____end(t1031);
    agg_tmp11030 = r1033;
    struct std___Deque_base_int__std__allocator_int__* base1034 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1031 + 0);
    struct std__allocator_int_* r1035 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1034);
    struct std___Deque_iterator_int__int____int___ t1036 = agg_tmp01029;
    struct std___Deque_iterator_int__int____int___ t1037 = agg_tmp11030;
    std__deque_int__std__allocator_int______M_destroy_data(t1031, t1036, t1037, r1035);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base1038 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1031 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base1038);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base1039 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1031 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base1039);
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1040:
  _Bool __retval1041;
    _Bool c1042 = 0;
    __retval1041 = c1042;
    _Bool t1043 = __retval1041;
    return t1043;
  abort();
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1044) {
bb1045:
  int* __location1046;
  __location1046 = v1044;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1047, int* v1048) {
bb1049:
  int* __first1050;
  int* __last1051;
  __first1050 = v1047;
  __last1051 = v1048;
      _Bool r1052 = std____is_constant_evaluated();
      if (r1052) {
          while (1) {
            int* t1054 = __first1050;
            int* t1055 = __last1051;
            _Bool c1056 = ((t1054 != t1055)) ? 1 : 0;
            if (!c1056) break;
            int* t1057 = __first1050;
            void_std__destroy_at_int_(t1057);
            if (__cir_exc_active) {
              return;
            }
          for_step1053: ;
            int* t1058 = __first1050;
            int c1059 = 1;
            int* ptr1060 = &(t1058)[c1059];
            __first1050 = ptr1060;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1061, int* v1062, struct std__allocator_int_* v1063) {
bb1064:
  int* __first1065;
  int* __last1066;
  struct std__allocator_int_* unnamed1067;
  __first1065 = v1061;
  __last1066 = v1062;
  unnamed1067 = v1063;
  int* t1068 = __first1065;
  int* t1069 = __last1066;
  void_std___Destroy_int__(t1068, t1069);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v1070) {
bb1071:
  unsigned long __size1072;
  unsigned long __retval1073;
  __size1072 = v1070;
  unsigned long t1074 = __size1072;
  unsigned long c1075 = 512;
  _Bool c1076 = ((t1074 < c1075)) ? 1 : 0;
  unsigned long ternary1077;
  if (c1076) {
    unsigned long c1078 = 512;
    unsigned long t1079 = __size1072;
    unsigned long b1080 = c1078 / t1079;
    ternary1077 = (unsigned long)b1080;
  } else {
    unsigned long c1081 = 1;
    ternary1077 = (unsigned long)c1081;
  }
  __retval1073 = ternary1077;
  unsigned long t1082 = __retval1073;
  return t1082;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb1083:
  unsigned long __retval1084;
  unsigned long c1085 = 4;
  unsigned long r1086 = std____deque_buf_size(c1085);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1084 = r1086;
  unsigned long t1087 = __retval1084;
  return t1087;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v1088, struct std___Deque_iterator_int__int____int___ v1089, struct std___Deque_iterator_int__int____int___ v1090) {
bb1091:
  struct std__deque_int__std__allocator_int__* this1092;
  struct std___Deque_iterator_int__int____int___ __first1093;
  struct std___Deque_iterator_int__int____int___ __last1094;
  this1092 = v1088;
  __first1093 = v1089;
  __last1094 = v1090;
  struct std__deque_int__std__allocator_int__* t1095 = this1092;
    int** __node1096;
    int** t1097 = __first1093._M_node;
    int c1098 = 1;
    int** ptr1099 = &(t1097)[c1098];
    __node1096 = ptr1099;
    while (1) {
      int** t1101 = __node1096;
      int** t1102 = __last1094._M_node;
      _Bool c1103 = ((t1101 < t1102)) ? 1 : 0;
      if (!c1103) break;
      int** t1104 = __node1096;
      int* t1105 = *t1104;
      int** t1106 = __node1096;
      int* t1107 = *t1106;
      unsigned long r1108 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr1109 = &(t1107)[r1108];
      struct std___Deque_base_int__std__allocator_int__* base1110 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1095 + 0);
      struct std__allocator_int_* r1111 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1110);
      void_std___Destroy_int___int_(t1105, ptr1109, r1111);
      if (__cir_exc_active) {
        return;
      }
    for_step1100: ;
      int** t1112 = __node1096;
      int c1113 = 1;
      int** ptr1114 = &(t1112)[c1113];
      __node1096 = ptr1114;
    }
    int** t1115 = __first1093._M_node;
    int** t1116 = __last1094._M_node;
    _Bool c1117 = ((t1115 != t1116)) ? 1 : 0;
    if (c1117) {
      int* t1118 = __first1093._M_cur;
      int* t1119 = __first1093._M_last;
      struct std___Deque_base_int__std__allocator_int__* base1120 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1095 + 0);
      struct std__allocator_int_* r1121 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1120);
      void_std___Destroy_int___int_(t1118, t1119, r1121);
      if (__cir_exc_active) {
        return;
      }
      int* t1122 = __last1094._M_first;
      int* t1123 = __last1094._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1124 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1095 + 0);
      struct std__allocator_int_* r1125 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1124);
      void_std___Destroy_int___int_(t1122, t1123, r1125);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t1126 = __first1093._M_cur;
      int* t1127 = __last1094._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1128 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1095 + 0);
      struct std__allocator_int_* r1129 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1128);
      void_std___Destroy_int___int_(t1126, t1127, r1129);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v1130, struct std___Deque_iterator_int__int____int___* v1131) {
bb1132:
  struct std___Deque_iterator_int__int____int___* this1133;
  struct std___Deque_iterator_int__int____int___* __x1134;
  this1133 = v1130;
  __x1134 = v1131;
  struct std___Deque_iterator_int__int____int___* t1135 = this1133;
  struct std___Deque_iterator_int__int____int___* t1136 = __x1134;
  int* t1137 = t1136->_M_cur;
  t1135->_M_cur = t1137;
  struct std___Deque_iterator_int__int____int___* t1138 = __x1134;
  int* t1139 = t1138->_M_first;
  t1135->_M_first = t1139;
  struct std___Deque_iterator_int__int____int___* t1140 = __x1134;
  int* t1141 = t1140->_M_last;
  t1135->_M_last = t1141;
  struct std___Deque_iterator_int__int____int___* t1142 = __x1134;
  int** t1143 = t1142->_M_node;
  t1135->_M_node = t1143;
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v1144, struct std___Deque_iterator_int__int____int___ v1145, struct std___Deque_iterator_int__int____int___ v1146, struct std__allocator_int_* v1147) {
bb1148:
  struct std__deque_int__std__allocator_int__* this1149;
  struct std___Deque_iterator_int__int____int___ __first1150;
  struct std___Deque_iterator_int__int____int___ __last1151;
  struct std__allocator_int_* unnamed1152;
  this1149 = v1144;
  __first1150 = v1145;
  __last1151 = v1146;
  unnamed1152 = v1147;
  struct std__deque_int__std__allocator_int__* t1153 = this1149;
    _Bool c1154 = 0;
    if (c1154) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01155;
      struct std___Deque_iterator_int__int____int___ agg_tmp11156;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01155, &__first1150);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11156, &__last1151);
      struct std___Deque_iterator_int__int____int___ t1157 = agg_tmp01155;
      struct std___Deque_iterator_int__int____int___ t1158 = agg_tmp11156;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t1153, t1157, t1158);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v1159) {
bb1160:
  struct std__deque_int__std__allocator_int__* this1161;
  struct std___Deque_iterator_int__int____int___ __retval1162;
  this1161 = v1159;
  struct std__deque_int__std__allocator_int__* t1163 = this1161;
  struct std___Deque_base_int__std__allocator_int__* base1164 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1163 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1165 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1164->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1162, &base1165->_M_start);
  struct std___Deque_iterator_int__int____int___ t1166 = __retval1162;
  return t1166;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v1167) {
bb1168:
  struct std__deque_int__std__allocator_int__* this1169;
  struct std___Deque_iterator_int__int____int___ __retval1170;
  this1169 = v1167;
  struct std__deque_int__std__allocator_int__* t1171 = this1169;
  struct std___Deque_base_int__std__allocator_int__* base1172 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1171 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1173 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1172->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1170, &base1173->_M_finish);
  struct std___Deque_iterator_int__int____int___ t1174 = __retval1170;
  return t1174;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v1175) {
bb1176:
  struct std___Deque_base_int__std__allocator_int__* this1177;
  struct std__allocator_int_* __retval1178;
  this1177 = v1175;
  struct std___Deque_base_int__std__allocator_int__* t1179 = this1177;
  struct std__allocator_int_* base1180 = (struct std__allocator_int_*)((char *)&(t1179->_M_impl) + 0);
  __retval1178 = base1180;
  struct std__allocator_int_* t1181 = __retval1178;
  return t1181;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1182, int* v1183, unsigned long v1184) {
bb1185:
  struct std____new_allocator_int_* this1186;
  int* __p1187;
  unsigned long __n1188;
  this1186 = v1182;
  __p1187 = v1183;
  __n1188 = v1184;
  struct std____new_allocator_int_* t1189 = this1186;
    unsigned long c1190 = 4;
    unsigned long c1191 = 16;
    _Bool c1192 = ((c1190 > c1191)) ? 1 : 0;
    if (c1192) {
      int* t1193 = __p1187;
      void* cast1194 = (void*)t1193;
      unsigned long t1195 = __n1188;
      unsigned long c1196 = 4;
      unsigned long b1197 = t1195 * c1196;
      unsigned long c1198 = 4;
      operator_delete_3(cast1194, b1197, c1198);
      return;
    }
  int* t1199 = __p1187;
  void* cast1200 = (void*)t1199;
  unsigned long t1201 = __n1188;
  unsigned long c1202 = 4;
  unsigned long b1203 = t1201 * c1202;
  operator_delete_2(cast1200, b1203);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1204, int* v1205, unsigned long v1206) {
bb1207:
  struct std__allocator_int_* this1208;
  int* __p1209;
  unsigned long __n1210;
  this1208 = v1204;
  __p1209 = v1205;
  __n1210 = v1206;
  struct std__allocator_int_* t1211 = this1208;
    _Bool r1212 = std____is_constant_evaluated();
    if (r1212) {
      int* t1213 = __p1209;
      void* cast1214 = (void*)t1213;
      operator_delete(cast1214);
      return;
    }
  struct std____new_allocator_int_* base1215 = (struct std____new_allocator_int_*)((char *)t1211 + 0);
  int* t1216 = __p1209;
  unsigned long t1217 = __n1210;
  std____new_allocator_int___deallocate(base1215, t1216, t1217);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1218, int* v1219, unsigned long v1220) {
bb1221:
  struct std__allocator_int_* __a1222;
  int* __p1223;
  unsigned long __n1224;
  __a1222 = v1218;
  __p1223 = v1219;
  __n1224 = v1220;
  struct std__allocator_int_* t1225 = __a1222;
  int* t1226 = __p1223;
  unsigned long t1227 = __n1224;
  std__allocator_int___deallocate(t1225, t1226, t1227);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v1228, int* v1229) {
bb1230:
  struct std___Deque_base_int__std__allocator_int__* this1231;
  int* __p1232;
  this1231 = v1228;
  __p1232 = v1229;
  struct std___Deque_base_int__std__allocator_int__* t1233 = this1231;
  struct std__allocator_int_* base1234 = (struct std__allocator_int_*)((char *)&(t1233->_M_impl) + 0);
  int* t1235 = __p1232;
  unsigned long c1236 = 4;
  unsigned long r1237 = std____deque_buf_size(c1236);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base1234, t1235, r1237);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v1238, int** v1239, int** v1240) {
bb1241:
  struct std___Deque_base_int__std__allocator_int__* this1242;
  int** __nstart1243;
  int** __nfinish1244;
  this1242 = v1238;
  __nstart1243 = v1239;
  __nfinish1244 = v1240;
  struct std___Deque_base_int__std__allocator_int__* t1245 = this1242;
    int** __n1246;
    int** t1247 = __nstart1243;
    __n1246 = t1247;
    while (1) {
      int** t1249 = __n1246;
      int** t1250 = __nfinish1244;
      _Bool c1251 = ((t1249 < t1250)) ? 1 : 0;
      if (!c1251) break;
      int** t1252 = __n1246;
      int* t1253 = *t1252;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t1245, t1253);
    for_step1248: ;
      int** t1254 = __n1246;
      int c1255 = 1;
      int** ptr1256 = &(t1254)[c1255];
      __n1246 = ptr1256;
    }
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1257) {
bb1258:
  struct std___Deque_base_int__std__allocator_int__* this1259;
  struct std__allocator_int_* __retval1260;
  this1259 = v1257;
  struct std___Deque_base_int__std__allocator_int__* t1261 = this1259;
  struct std__allocator_int_* base1262 = (struct std__allocator_int_*)((char *)&(t1261->_M_impl) + 0);
  __retval1260 = base1262;
  struct std__allocator_int_* t1263 = __retval1260;
  return t1263;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v1264, struct std__allocator_int_* v1265) {
bb1266:
  struct std__allocator_int___* this1267;
  struct std__allocator_int_* unnamed1268;
  this1267 = v1264;
  unnamed1268 = v1265;
  struct std__allocator_int___* t1269 = this1267;
  struct std____new_allocator_int___* base1270 = (struct std____new_allocator_int___*)((char *)t1269 + 0);
  std____new_allocator_int______new_allocator(base1270);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1271) {
bb1272:
  struct std___Deque_base_int__std__allocator_int__* this1273;
  struct std__allocator_int___ __retval1274;
  this1273 = v1271;
  struct std___Deque_base_int__std__allocator_int__* t1275 = this1273;
  struct std__allocator_int_* r1276 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t1275);
  std__allocator_int____allocator_int_(&__retval1274, r1276);
  struct std__allocator_int___ t1277 = __retval1274;
  return t1277;
}

// function: _ZNSt15__new_allocatorIPiE10deallocateEPS0_m
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v1278, int** v1279, unsigned long v1280) {
bb1281:
  struct std____new_allocator_int___* this1282;
  int** __p1283;
  unsigned long __n1284;
  this1282 = v1278;
  __p1283 = v1279;
  __n1284 = v1280;
  struct std____new_allocator_int___* t1285 = this1282;
    unsigned long c1286 = 8;
    unsigned long c1287 = 16;
    _Bool c1288 = ((c1286 > c1287)) ? 1 : 0;
    if (c1288) {
      int** t1289 = __p1283;
      void* cast1290 = (void*)t1289;
      unsigned long t1291 = __n1284;
      unsigned long c1292 = 8;
      unsigned long b1293 = t1291 * c1292;
      unsigned long c1294 = 8;
      operator_delete_3(cast1290, b1293, c1294);
      return;
    }
  int** t1295 = __p1283;
  void* cast1296 = (void*)t1295;
  unsigned long t1297 = __n1284;
  unsigned long c1298 = 8;
  unsigned long b1299 = t1297 * c1298;
  operator_delete_2(cast1296, b1299);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v1300, int** v1301, unsigned long v1302) {
bb1303:
  struct std__allocator_int___* this1304;
  int** __p1305;
  unsigned long __n1306;
  this1304 = v1300;
  __p1305 = v1301;
  __n1306 = v1302;
  struct std__allocator_int___* t1307 = this1304;
    _Bool r1308 = std____is_constant_evaluated();
    if (r1308) {
      int** t1309 = __p1305;
      void* cast1310 = (void*)t1309;
      operator_delete(cast1310);
      return;
    }
  struct std____new_allocator_int___* base1311 = (struct std____new_allocator_int___*)((char *)t1307 + 0);
  int** t1312 = __p1305;
  unsigned long t1313 = __n1306;
  std____new_allocator_int____deallocate(base1311, t1312, t1313);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v1314, int** v1315, unsigned long v1316) {
bb1317:
  struct std__allocator_int___* __a1318;
  int** __p1319;
  unsigned long __n1320;
  __a1318 = v1314;
  __p1319 = v1315;
  __n1320 = v1316;
  struct std__allocator_int___* t1321 = __a1318;
  int** t1322 = __p1319;
  unsigned long t1323 = __n1320;
  std__allocator_int____deallocate(t1321, t1322, t1323);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v1324, int** v1325, unsigned long v1326) {
bb1327:
  struct std___Deque_base_int__std__allocator_int__* this1328;
  int** __p1329;
  unsigned long __n1330;
  struct std__allocator_int___ __map_alloc1331;
  this1328 = v1324;
  __p1329 = v1325;
  __n1330 = v1326;
  struct std___Deque_base_int__std__allocator_int__* t1332 = this1328;
  struct std__allocator_int___ r1333 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1332);
  __map_alloc1331 = r1333;
  int** t1334 = __p1329;
  unsigned long t1335 = __n1330;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc1331, t1334, t1335);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1336) {
bb1337:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1338;
  this1338 = v1336;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1339 = this1338;
  {
    struct std__allocator_int_* base1340 = (struct std__allocator_int_*)((char *)t1339 + 0);
    std__allocator_int____allocator(base1340);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1341) {
bb1342:
  struct std___Deque_base_int__std__allocator_int__* this1343;
  this1343 = v1341;
  struct std___Deque_base_int__std__allocator_int__* t1344 = this1343;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1345 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1344->_M_impl) + 0);
      int** t1346 = base1345->_M_map;
      _Bool cast1347 = (_Bool)t1346;
      if (cast1347) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1348 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1344->_M_impl) + 0);
        int** t1349 = base1348->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1350 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1344->_M_impl) + 0);
        int** t1351 = base1350->_M_finish._M_node;
        int c1352 = 1;
        int** ptr1353 = &(t1351)[c1352];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1344, t1349, ptr1353);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1354 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1344->_M_impl) + 0);
        int** t1355 = base1354->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1356 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1344->_M_impl) + 0);
        unsigned long t1357 = base1356->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1344, t1355, t1357);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1344->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1358) {
bb1359:
  struct std____new_allocator_int___* this1360;
  this1360 = v1358;
  struct std____new_allocator_int___* t1361 = this1360;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1362) {
bb1363:
  struct std__allocator_int_* this1364;
  this1364 = v1362;
  struct std__allocator_int_* t1365 = this1364;
  return;
}

// function: _ZNSt5dequeIiSaIiEEC2Ev
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* v1366) {
bb1367:
  struct std__deque_int__std__allocator_int__* this1368;
  this1368 = v1366;
  struct std__deque_int__std__allocator_int__* t1369 = this1368;
  struct std___Deque_base_int__std__allocator_int__* base1370 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1369 + 0);
  std___Deque_base_int__std__allocator_int______Deque_base(base1370);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1371) {
bb1372:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1373;
  this1373 = v1371;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1374 = this1373;
  struct std__allocator_int_* base1375 = (struct std__allocator_int_*)((char *)t1374 + 0);
  std__allocator_int___allocator(base1375);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1376 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t1374 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base1376);
  return;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v1377, unsigned long* v1378) {
bb1379:
  unsigned long* __a1380;
  unsigned long* __b1381;
  unsigned long* __retval1382;
  __a1380 = v1377;
  __b1381 = v1378;
    unsigned long* t1383 = __a1380;
    unsigned long t1384 = *t1383;
    unsigned long* t1385 = __b1381;
    unsigned long t1386 = *t1385;
    _Bool c1387 = ((t1384 < t1386)) ? 1 : 0;
    if (c1387) {
      unsigned long* t1388 = __b1381;
      __retval1382 = t1388;
      unsigned long* t1389 = __retval1382;
      return t1389;
    }
  unsigned long* t1390 = __a1380;
  __retval1382 = t1390;
  unsigned long* t1391 = __retval1382;
  return t1391;
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v1392) {
bb1393:
  struct std____new_allocator_int___* this1394;
  unsigned long __retval1395;
  this1394 = v1392;
  struct std____new_allocator_int___* t1396 = this1394;
  unsigned long c1397 = 9223372036854775807;
  unsigned long c1398 = 8;
  unsigned long b1399 = c1397 / c1398;
  __retval1395 = b1399;
  unsigned long t1400 = __retval1395;
  return t1400;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v1401, unsigned long v1402, void* v1403) {
bb1404:
  struct std____new_allocator_int___* this1405;
  unsigned long __n1406;
  void* unnamed1407;
  int** __retval1408;
  this1405 = v1401;
  __n1406 = v1402;
  unnamed1407 = v1403;
  struct std____new_allocator_int___* t1409 = this1405;
    unsigned long t1410 = __n1406;
    unsigned long r1411 = std____new_allocator_int_____M_max_size___const(t1409);
    _Bool c1412 = ((t1410 > r1411)) ? 1 : 0;
    if (c1412) {
        unsigned long t1413 = __n1406;
        unsigned long c1414 = -1;
        unsigned long c1415 = 8;
        unsigned long b1416 = c1414 / c1415;
        _Bool c1417 = ((t1413 > b1416)) ? 1 : 0;
        if (c1417) {
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
    unsigned long c1418 = 8;
    unsigned long c1419 = 16;
    _Bool c1420 = ((c1418 > c1419)) ? 1 : 0;
    if (c1420) {
      unsigned long __al1421;
      unsigned long c1422 = 8;
      __al1421 = c1422;
      unsigned long t1423 = __n1406;
      unsigned long c1424 = 8;
      unsigned long b1425 = t1423 * c1424;
      unsigned long t1426 = __al1421;
      void* r1427 = operator_new_2(b1425, t1426);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1428 = (int**)r1427;
      __retval1408 = cast1428;
      int** t1429 = __retval1408;
      return t1429;
    }
  unsigned long t1430 = __n1406;
  unsigned long c1431 = 8;
  unsigned long b1432 = t1430 * c1431;
  void* r1433 = operator_new(b1432);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast1434 = (int**)r1433;
  __retval1408 = cast1434;
  int** t1435 = __retval1408;
  return t1435;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v1436, unsigned long v1437) {
bb1438:
  struct std__allocator_int___* this1439;
  unsigned long __n1440;
  int** __retval1441;
  this1439 = v1436;
  __n1440 = v1437;
  struct std__allocator_int___* t1442 = this1439;
    _Bool r1443 = std____is_constant_evaluated();
    if (r1443) {
        unsigned long t1444 = __n1440;
        unsigned long c1445 = 8;
        unsigned long ovr1446;
        _Bool ovf1447 = __builtin_mul_overflow(t1444, c1445, &ovr1446);
        __n1440 = ovr1446;
        if (ovf1447) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1448 = __n1440;
      void* r1449 = operator_new(t1448);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1450 = (int**)r1449;
      __retval1441 = cast1450;
      int** t1451 = __retval1441;
      return t1451;
    }
  struct std____new_allocator_int___* base1452 = (struct std____new_allocator_int___*)((char *)t1442 + 0);
  unsigned long t1453 = __n1440;
  void* c1454 = ((void*)0);
  int** r1455 = std____new_allocator_int____allocate(base1452, t1453, c1454);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1441 = r1455;
  int** t1456 = __retval1441;
  return t1456;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v1457, unsigned long v1458) {
bb1459:
  struct std__allocator_int___* __a1460;
  unsigned long __n1461;
  int** __retval1462;
  __a1460 = v1457;
  __n1461 = v1458;
  struct std__allocator_int___* t1463 = __a1460;
  unsigned long t1464 = __n1461;
  int** r1465 = std__allocator_int____allocate(t1463, t1464);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1462 = r1465;
  int** t1466 = __retval1462;
  return t1466;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v1467, unsigned long v1468) {
bb1469:
  struct std___Deque_base_int__std__allocator_int__* this1470;
  unsigned long __n1471;
  int** __retval1472;
  struct std__allocator_int___ __map_alloc1473;
  this1470 = v1467;
  __n1471 = v1468;
  struct std___Deque_base_int__std__allocator_int__* t1474 = this1470;
  struct std__allocator_int___ r1475 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1474);
  __map_alloc1473 = r1475;
  unsigned long t1476 = __n1471;
  int** r1477 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc1473, t1476);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1472 = r1477;
  int** t1478 = __retval1472;
  return t1478;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1479) {
bb1480:
  struct std____new_allocator_int_* this1481;
  unsigned long __retval1482;
  this1481 = v1479;
  struct std____new_allocator_int_* t1483 = this1481;
  unsigned long c1484 = 9223372036854775807;
  unsigned long c1485 = 4;
  unsigned long b1486 = c1484 / c1485;
  __retval1482 = b1486;
  unsigned long t1487 = __retval1482;
  return t1487;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1488, unsigned long v1489, void* v1490) {
bb1491:
  struct std____new_allocator_int_* this1492;
  unsigned long __n1493;
  void* unnamed1494;
  int* __retval1495;
  this1492 = v1488;
  __n1493 = v1489;
  unnamed1494 = v1490;
  struct std____new_allocator_int_* t1496 = this1492;
    unsigned long t1497 = __n1493;
    unsigned long r1498 = std____new_allocator_int____M_max_size___const(t1496);
    _Bool c1499 = ((t1497 > r1498)) ? 1 : 0;
    if (c1499) {
        unsigned long t1500 = __n1493;
        unsigned long c1501 = -1;
        unsigned long c1502 = 4;
        unsigned long b1503 = c1501 / c1502;
        _Bool c1504 = ((t1500 > b1503)) ? 1 : 0;
        if (c1504) {
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
    unsigned long c1505 = 4;
    unsigned long c1506 = 16;
    _Bool c1507 = ((c1505 > c1506)) ? 1 : 0;
    if (c1507) {
      unsigned long __al1508;
      unsigned long c1509 = 4;
      __al1508 = c1509;
      unsigned long t1510 = __n1493;
      unsigned long c1511 = 4;
      unsigned long b1512 = t1510 * c1511;
      unsigned long t1513 = __al1508;
      void* r1514 = operator_new_2(b1512, t1513);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1515 = (int*)r1514;
      __retval1495 = cast1515;
      int* t1516 = __retval1495;
      return t1516;
    }
  unsigned long t1517 = __n1493;
  unsigned long c1518 = 4;
  unsigned long b1519 = t1517 * c1518;
  void* r1520 = operator_new(b1519);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast1521 = (int*)r1520;
  __retval1495 = cast1521;
  int* t1522 = __retval1495;
  return t1522;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1523, unsigned long v1524) {
bb1525:
  struct std__allocator_int_* this1526;
  unsigned long __n1527;
  int* __retval1528;
  this1526 = v1523;
  __n1527 = v1524;
  struct std__allocator_int_* t1529 = this1526;
    _Bool r1530 = std____is_constant_evaluated();
    if (r1530) {
        unsigned long t1531 = __n1527;
        unsigned long c1532 = 4;
        unsigned long ovr1533;
        _Bool ovf1534 = __builtin_mul_overflow(t1531, c1532, &ovr1533);
        __n1527 = ovr1533;
        if (ovf1534) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1535 = __n1527;
      void* r1536 = operator_new(t1535);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1537 = (int*)r1536;
      __retval1528 = cast1537;
      int* t1538 = __retval1528;
      return t1538;
    }
  struct std____new_allocator_int_* base1539 = (struct std____new_allocator_int_*)((char *)t1529 + 0);
  unsigned long t1540 = __n1527;
  void* c1541 = ((void*)0);
  int* r1542 = std____new_allocator_int___allocate(base1539, t1540, c1541);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1528 = r1542;
  int* t1543 = __retval1528;
  return t1543;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1544, unsigned long v1545) {
bb1546:
  struct std__allocator_int_* __a1547;
  unsigned long __n1548;
  int* __retval1549;
  __a1547 = v1544;
  __n1548 = v1545;
  struct std__allocator_int_* t1550 = __a1547;
  unsigned long t1551 = __n1548;
  int* r1552 = std__allocator_int___allocate(t1550, t1551);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1549 = r1552;
  int* t1553 = __retval1549;
  return t1553;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v1554) {
bb1555:
  struct std___Deque_base_int__std__allocator_int__* this1556;
  int* __retval1557;
  this1556 = v1554;
  struct std___Deque_base_int__std__allocator_int__* t1558 = this1556;
  struct std__allocator_int_* base1559 = (struct std__allocator_int_*)((char *)&(t1558->_M_impl) + 0);
  unsigned long c1560 = 4;
  unsigned long r1561 = std____deque_buf_size(c1560);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r1562 = std__allocator_traits_std__allocator_int_____allocate(base1559, r1561);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1557 = r1562;
  int* t1563 = __retval1557;
  return t1563;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v1564, int** v1565, int** v1566) {
bb1567:
  struct std___Deque_base_int__std__allocator_int__* this1568;
  int** __nstart1569;
  int** __nfinish1570;
  int** __cur1571;
  this1568 = v1564;
  __nstart1569 = v1565;
  __nfinish1570 = v1566;
  struct std___Deque_base_int__std__allocator_int__* t1572 = this1568;
        int** t1574 = __nstart1569;
        __cur1571 = t1574;
        while (1) {
          int** t1576 = __cur1571;
          int** t1577 = __nfinish1570;
          _Bool c1578 = ((t1576 < t1577)) ? 1 : 0;
          if (!c1578) break;
          int* r1579 = std___Deque_base_int__std__allocator_int______M_allocate_node(t1572);
          if (__cir_exc_active) {
            goto cir_try_dispatch1573;
          }
          int** t1580 = __cur1571;
          *t1580 = r1579;
        for_step1575: ;
          int** t1581 = __cur1571;
          int c1582 = 1;
          int** ptr1583 = &(t1581)[c1582];
          __cur1571 = ptr1583;
        }
    cir_try_dispatch1573: ;
    if (__cir_exc_active) {
    {
      int ca_tok1584 = 0;
      void* ca_exn1585 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t1586 = __nstart1569;
        int** t1587 = __cur1571;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1572, t1586, t1587);
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

// function: _ZNSt15_Deque_iteratorIiRiPiE14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size() {
bb1588:
  unsigned long __retval1589;
  unsigned long c1590 = 4;
  unsigned long r1591 = std____deque_buf_size(c1590);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1589 = r1591;
  unsigned long t1592 = __retval1589;
  return t1592;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v1593, int** v1594) {
bb1595:
  struct std___Deque_iterator_int__int____int___* this1596;
  int** __new_node1597;
  this1596 = v1593;
  __new_node1597 = v1594;
  struct std___Deque_iterator_int__int____int___* t1598 = this1596;
  int** t1599 = __new_node1597;
  t1598->_M_node = t1599;
  int** t1600 = __new_node1597;
  int* t1601 = *t1600;
  t1598->_M_first = t1601;
  int* t1602 = t1598->_M_first;
  unsigned long r1603 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1604 = (long)r1603;
  int* ptr1605 = &(t1602)[cast1604];
  t1598->_M_last = ptr1605;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v1606, unsigned long v1607) {
bb1608:
  struct std___Deque_base_int__std__allocator_int__* this1609;
  unsigned long __num_elements1610;
  unsigned long __num_nodes1611;
  unsigned long ref_tmp01612;
  unsigned long ref_tmp11613;
  int** __nstart1614;
  int** __nfinish1615;
  this1609 = v1606;
  __num_elements1610 = v1607;
  struct std___Deque_base_int__std__allocator_int__* t1616 = this1609;
  unsigned long t1617 = __num_elements1610;
  unsigned long c1618 = 4;
  unsigned long r1619 = std____deque_buf_size(c1618);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1620 = t1617 / r1619;
  unsigned long c1621 = 1;
  unsigned long b1622 = b1620 + c1621;
  __num_nodes1611 = b1622;
  unsigned long c1623 = 8;
  ref_tmp01612 = c1623;
  unsigned long t1624 = __num_nodes1611;
  unsigned long c1625 = 2;
  unsigned long b1626 = t1624 + c1625;
  ref_tmp11613 = b1626;
  unsigned long* r1627 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01612, &ref_tmp11613);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1628 = *r1627;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1629 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1616->_M_impl) + 0);
  base1629->_M_map_size = t1628;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1630 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1616->_M_impl) + 0);
  unsigned long t1631 = base1630->_M_map_size;
  int** r1632 = std___Deque_base_int__std__allocator_int______M_allocate_map(t1616, t1631);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1633 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1616->_M_impl) + 0);
  base1633->_M_map = r1632;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1634 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1616->_M_impl) + 0);
  int** t1635 = base1634->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1636 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1616->_M_impl) + 0);
  unsigned long t1637 = base1636->_M_map_size;
  unsigned long t1638 = __num_nodes1611;
  unsigned long b1639 = t1637 - t1638;
  unsigned long c1640 = 2;
  unsigned long b1641 = b1639 / c1640;
  int** ptr1642 = &(t1635)[b1641];
  __nstart1614 = ptr1642;
  int** t1643 = __nstart1614;
  unsigned long t1644 = __num_nodes1611;
  int** ptr1645 = &(t1643)[t1644];
  __nfinish1615 = ptr1645;
      int** t1647 = __nstart1614;
      int** t1648 = __nfinish1615;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t1616, t1647, t1648);
      if (__cir_exc_active) {
        goto cir_try_dispatch1646;
      }
    cir_try_dispatch1646: ;
    if (__cir_exc_active) {
    {
      int ca_tok1649 = 0;
      void* ca_exn1650 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1651 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1616->_M_impl) + 0);
        int** t1652 = base1651->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1653 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1616->_M_impl) + 0);
        unsigned long t1654 = base1653->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1616, t1652, t1654);
        int** c1655 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1656 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1616->_M_impl) + 0);
        base1656->_M_map = c1655;
        unsigned long c1657 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1658 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1616->_M_impl) + 0);
        base1658->_M_map_size = c1657;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1659 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1616->_M_impl) + 0);
  int** t1660 = __nstart1614;
  std___Deque_iterator_int__int___int_____M_set_node(&base1659->_M_start, t1660);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1661 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1616->_M_impl) + 0);
  int** t1662 = __nfinish1615;
  int c1663 = -1;
  int** ptr1664 = &(t1662)[c1663];
  std___Deque_iterator_int__int___int_____M_set_node(&base1661->_M_finish, ptr1664);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1665 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1616->_M_impl) + 0);
  int* t1666 = base1665->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1667 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1616->_M_impl) + 0);
  base1667->_M_start._M_cur = t1666;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1668 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1616->_M_impl) + 0);
  int* t1669 = base1668->_M_finish._M_first;
  unsigned long t1670 = __num_elements1610;
  unsigned long c1671 = 4;
  unsigned long r1672 = std____deque_buf_size(c1671);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1673 = t1670 % r1672;
  int* ptr1674 = &(t1669)[b1673];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1675 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1616->_M_impl) + 0);
  base1675->_M_finish._M_cur = ptr1674;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1676) {
bb1677:
  struct std___Deque_base_int__std__allocator_int__* this1678;
  this1678 = v1676;
  struct std___Deque_base_int__std__allocator_int__* t1679 = this1678;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1679->_M_impl);
    unsigned long c1680 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1679, c1680);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1679->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1681) {
bb1682:
  struct std____new_allocator_int_* this1683;
  this1683 = v1681;
  struct std____new_allocator_int_* t1684 = this1683;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1685) {
bb1686:
  struct std__allocator_int_* this1687;
  this1687 = v1685;
  struct std__allocator_int_* t1688 = this1687;
  struct std____new_allocator_int_* base1689 = (struct std____new_allocator_int_*)((char *)t1688 + 0);
  std____new_allocator_int_____new_allocator(base1689);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1690) {
bb1691:
  struct std___Deque_iterator_int__int____int___* this1692;
  this1692 = v1690;
  struct std___Deque_iterator_int__int____int___* t1693 = this1692;
  int* c1694 = ((void*)0);
  t1693->_M_cur = c1694;
  int* c1695 = ((void*)0);
  t1693->_M_first = c1695;
  int* c1696 = ((void*)0);
  t1693->_M_last = c1696;
  int** c1697 = ((void*)0);
  t1693->_M_node = c1697;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1698) {
bb1699:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1700;
  this1700 = v1698;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1701 = this1700;
  int** c1702 = ((void*)0);
  t1701->_M_map = c1702;
  unsigned long c1703 = 0;
  t1701->_M_map_size = c1703;
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1701->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1701->_M_finish);
  return;
}

