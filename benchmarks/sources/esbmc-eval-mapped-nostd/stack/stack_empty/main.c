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
struct std__stack_int__std__deque_int__std__allocator_int___ { struct std__deque_int__std__allocator_int__ c; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[16] = "mystack.empty()";
char _str_1[105] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stack/stack_empty/main.cpp";
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
bb1: ;
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

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v19, int* v20, int* v21) {
bb22: ;
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
bb31: ;
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
bb62: ;
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
bb80: ;
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
bb94: ;
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
bb105: ;
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
bb115: ;
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
bb124: ;
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
bb134: ;
  int*** unnamed135;
  struct std__random_access_iterator_tag __retval136;
  unnamed135 = v133;
  struct std__random_access_iterator_tag t137 = __retval136;
  return t137;
}

// function: _ZSt8distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_int_____difference_type_std__distance_int___(int** v138, int** v139) {
bb140: ;
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
bb153: ;
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
bb164: ;
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
bb212: ;
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
bb223: ;
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
bb231: ;
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
bb246: ;
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
bb254: ;
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
bb266: ;
  _Bool __retval267;
    _Bool c268 = 0;
    __retval267 = c268;
    _Bool t269 = __retval267;
    return t269;
  abort();
}

// function: _ZSt9__advanceIPPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int____long_(int*** v270, long v271, struct std__random_access_iterator_tag v272) {
bb273: ;
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
bb305: ;
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
bb319: ;
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
bb362: ;
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
bb375: ;
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
bb392: ;
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
bb407: ;
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
bb553: ;
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
bb577: ;
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
bb623: ;
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
bb650: ;
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
bb657: ;
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
bb668: ;
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
bb679: ;
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
bb686: ;
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
bb702: ;
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
bb709: ;
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
bb725: ;
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
bb739: ;
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
bb744: ;
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
bb771: ;
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
bb798: ;
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
bb809: ;
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
bb818: ;
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
bb827: ;
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
bb836: ;
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
bb849: ;
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
bb866: ;
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
bb878: ;
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
bb908: ;
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
bb917: ;
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
bb924: ;
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
bb934: ;
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
bb955: ;
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
bb966: ;
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
bb988: ;
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
bb991: ;
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
    if (r1011) {
    } else {
      char* cast1012 = (char*)&(_str);
      char* c1013 = (char*)_str_1;
      unsigned int c1014 = 27;
      char* cast1015 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1012, c1013, c1014, cast1015);
    }
    char* cast1016 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r1017 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1016);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&mystack993);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t1018 = sum994;
    struct std__basic_ostream_char__std__char_traits_char__* r1019 = std__ostream__operator__(r1017, t1018);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&mystack993);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1020 = std__ostream__operator___std__ostream_____(r1019, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&mystack993);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1021 = 0;
    __retval992 = c1021;
    int t1022 = __retval992;
    int ret_val1023 = t1022;
    {
      std__stack_int__std__deque_int__std__allocator_int________stack(&mystack993);
    }
    return ret_val1023;
  int t1024 = __retval992;
  return t1024;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v1025) {
bb1026: ;
  struct std__deque_int__std__allocator_int__* this1027;
  struct std___Deque_iterator_int__int____int___ agg_tmp01028;
  struct std___Deque_iterator_int__int____int___ agg_tmp11029;
  this1027 = v1025;
  struct std__deque_int__std__allocator_int__* t1030 = this1027;
    struct std___Deque_iterator_int__int____int___ r1031 = std__deque_int__std__allocator_int_____begin(t1030);
    agg_tmp01028 = r1031;
    struct std___Deque_iterator_int__int____int___ r1032 = std__deque_int__std__allocator_int_____end(t1030);
    agg_tmp11029 = r1032;
    struct std___Deque_base_int__std__allocator_int__* base1033 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1030 + 0);
    struct std__allocator_int_* r1034 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1033);
    struct std___Deque_iterator_int__int____int___ t1035 = agg_tmp01028;
    struct std___Deque_iterator_int__int____int___ t1036 = agg_tmp11029;
    std__deque_int__std__allocator_int______M_destroy_data(t1030, t1035, t1036, r1034);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base1037 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1030 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base1037);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base1038 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1030 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base1038);
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1039: ;
  _Bool __retval1040;
    _Bool c1041 = 0;
    __retval1040 = c1041;
    _Bool t1042 = __retval1040;
    return t1042;
  abort();
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1043) {
bb1044: ;
  int* __location1045;
  __location1045 = v1043;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1046, int* v1047) {
bb1048: ;
  int* __first1049;
  int* __last1050;
  __first1049 = v1046;
  __last1050 = v1047;
      _Bool r1051 = std____is_constant_evaluated();
      if (r1051) {
          while (1) {
            int* t1053 = __first1049;
            int* t1054 = __last1050;
            _Bool c1055 = ((t1053 != t1054)) ? 1 : 0;
            if (!c1055) break;
            int* t1056 = __first1049;
            void_std__destroy_at_int_(t1056);
            if (__cir_exc_active) {
              return;
            }
          for_step1052: ;
            int* t1057 = __first1049;
            int c1058 = 1;
            int* ptr1059 = &(t1057)[c1058];
            __first1049 = ptr1059;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1060, int* v1061, struct std__allocator_int_* v1062) {
bb1063: ;
  int* __first1064;
  int* __last1065;
  struct std__allocator_int_* unnamed1066;
  __first1064 = v1060;
  __last1065 = v1061;
  unnamed1066 = v1062;
  int* t1067 = __first1064;
  int* t1068 = __last1065;
  void_std___Destroy_int__(t1067, t1068);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v1069) {
bb1070: ;
  unsigned long __size1071;
  unsigned long __retval1072;
  __size1071 = v1069;
  unsigned long t1073 = __size1071;
  unsigned long c1074 = 512;
  _Bool c1075 = ((t1073 < c1074)) ? 1 : 0;
  unsigned long ternary1076;
  if (c1075) {
    unsigned long c1077 = 512;
    unsigned long t1078 = __size1071;
    unsigned long b1079 = c1077 / t1078;
    ternary1076 = (unsigned long)b1079;
  } else {
    unsigned long c1080 = 1;
    ternary1076 = (unsigned long)c1080;
  }
  __retval1072 = ternary1076;
  unsigned long t1081 = __retval1072;
  return t1081;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb1082: ;
  unsigned long __retval1083;
  unsigned long c1084 = 4;
  unsigned long r1085 = std____deque_buf_size(c1084);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1083 = r1085;
  unsigned long t1086 = __retval1083;
  return t1086;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v1087, struct std___Deque_iterator_int__int____int___ v1088, struct std___Deque_iterator_int__int____int___ v1089) {
bb1090: ;
  struct std__deque_int__std__allocator_int__* this1091;
  struct std___Deque_iterator_int__int____int___ __first1092;
  struct std___Deque_iterator_int__int____int___ __last1093;
  this1091 = v1087;
  __first1092 = v1088;
  __last1093 = v1089;
  struct std__deque_int__std__allocator_int__* t1094 = this1091;
    int** __node1095;
    int** t1096 = __first1092._M_node;
    int c1097 = 1;
    int** ptr1098 = &(t1096)[c1097];
    __node1095 = ptr1098;
    while (1) {
      int** t1100 = __node1095;
      int** t1101 = __last1093._M_node;
      _Bool c1102 = ((t1100 < t1101)) ? 1 : 0;
      if (!c1102) break;
      int** t1103 = __node1095;
      int* t1104 = *t1103;
      int** t1105 = __node1095;
      int* t1106 = *t1105;
      unsigned long r1107 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr1108 = &(t1106)[r1107];
      struct std___Deque_base_int__std__allocator_int__* base1109 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1094 + 0);
      struct std__allocator_int_* r1110 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1109);
      void_std___Destroy_int___int_(t1104, ptr1108, r1110);
      if (__cir_exc_active) {
        return;
      }
    for_step1099: ;
      int** t1111 = __node1095;
      int c1112 = 1;
      int** ptr1113 = &(t1111)[c1112];
      __node1095 = ptr1113;
    }
    int** t1114 = __first1092._M_node;
    int** t1115 = __last1093._M_node;
    _Bool c1116 = ((t1114 != t1115)) ? 1 : 0;
    if (c1116) {
      int* t1117 = __first1092._M_cur;
      int* t1118 = __first1092._M_last;
      struct std___Deque_base_int__std__allocator_int__* base1119 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1094 + 0);
      struct std__allocator_int_* r1120 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1119);
      void_std___Destroy_int___int_(t1117, t1118, r1120);
      if (__cir_exc_active) {
        return;
      }
      int* t1121 = __last1093._M_first;
      int* t1122 = __last1093._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1123 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1094 + 0);
      struct std__allocator_int_* r1124 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1123);
      void_std___Destroy_int___int_(t1121, t1122, r1124);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t1125 = __first1092._M_cur;
      int* t1126 = __last1093._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1127 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1094 + 0);
      struct std__allocator_int_* r1128 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1127);
      void_std___Destroy_int___int_(t1125, t1126, r1128);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v1129, struct std___Deque_iterator_int__int____int___* v1130) {
bb1131: ;
  struct std___Deque_iterator_int__int____int___* this1132;
  struct std___Deque_iterator_int__int____int___* __x1133;
  this1132 = v1129;
  __x1133 = v1130;
  struct std___Deque_iterator_int__int____int___* t1134 = this1132;
  struct std___Deque_iterator_int__int____int___* t1135 = __x1133;
  int* t1136 = t1135->_M_cur;
  t1134->_M_cur = t1136;
  struct std___Deque_iterator_int__int____int___* t1137 = __x1133;
  int* t1138 = t1137->_M_first;
  t1134->_M_first = t1138;
  struct std___Deque_iterator_int__int____int___* t1139 = __x1133;
  int* t1140 = t1139->_M_last;
  t1134->_M_last = t1140;
  struct std___Deque_iterator_int__int____int___* t1141 = __x1133;
  int** t1142 = t1141->_M_node;
  t1134->_M_node = t1142;
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v1143, struct std___Deque_iterator_int__int____int___ v1144, struct std___Deque_iterator_int__int____int___ v1145, struct std__allocator_int_* v1146) {
bb1147: ;
  struct std__deque_int__std__allocator_int__* this1148;
  struct std___Deque_iterator_int__int____int___ __first1149;
  struct std___Deque_iterator_int__int____int___ __last1150;
  struct std__allocator_int_* unnamed1151;
  this1148 = v1143;
  __first1149 = v1144;
  __last1150 = v1145;
  unnamed1151 = v1146;
  struct std__deque_int__std__allocator_int__* t1152 = this1148;
    _Bool c1153 = 0;
    if (c1153) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01154;
      struct std___Deque_iterator_int__int____int___ agg_tmp11155;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01154, &__first1149);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11155, &__last1150);
      struct std___Deque_iterator_int__int____int___ t1156 = agg_tmp01154;
      struct std___Deque_iterator_int__int____int___ t1157 = agg_tmp11155;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t1152, t1156, t1157);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v1158) {
bb1159: ;
  struct std__deque_int__std__allocator_int__* this1160;
  struct std___Deque_iterator_int__int____int___ __retval1161;
  this1160 = v1158;
  struct std__deque_int__std__allocator_int__* t1162 = this1160;
  struct std___Deque_base_int__std__allocator_int__* base1163 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1162 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1164 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1163->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1161, &base1164->_M_start);
  struct std___Deque_iterator_int__int____int___ t1165 = __retval1161;
  return t1165;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v1166) {
bb1167: ;
  struct std__deque_int__std__allocator_int__* this1168;
  struct std___Deque_iterator_int__int____int___ __retval1169;
  this1168 = v1166;
  struct std__deque_int__std__allocator_int__* t1170 = this1168;
  struct std___Deque_base_int__std__allocator_int__* base1171 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1170 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1172 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1171->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1169, &base1172->_M_finish);
  struct std___Deque_iterator_int__int____int___ t1173 = __retval1169;
  return t1173;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v1174) {
bb1175: ;
  struct std___Deque_base_int__std__allocator_int__* this1176;
  struct std__allocator_int_* __retval1177;
  this1176 = v1174;
  struct std___Deque_base_int__std__allocator_int__* t1178 = this1176;
  struct std__allocator_int_* base1179 = (struct std__allocator_int_*)((char *)&(t1178->_M_impl) + 0);
  __retval1177 = base1179;
  struct std__allocator_int_* t1180 = __retval1177;
  return t1180;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1181, int* v1182, unsigned long v1183) {
bb1184: ;
  struct std____new_allocator_int_* this1185;
  int* __p1186;
  unsigned long __n1187;
  this1185 = v1181;
  __p1186 = v1182;
  __n1187 = v1183;
  struct std____new_allocator_int_* t1188 = this1185;
    unsigned long c1189 = 4;
    unsigned long c1190 = 16;
    _Bool c1191 = ((c1189 > c1190)) ? 1 : 0;
    if (c1191) {
      int* t1192 = __p1186;
      void* cast1193 = (void*)t1192;
      unsigned long t1194 = __n1187;
      unsigned long c1195 = 4;
      unsigned long b1196 = t1194 * c1195;
      unsigned long c1197 = 4;
      operator_delete_3(cast1193, b1196, c1197);
      return;
    }
  int* t1198 = __p1186;
  void* cast1199 = (void*)t1198;
  unsigned long t1200 = __n1187;
  unsigned long c1201 = 4;
  unsigned long b1202 = t1200 * c1201;
  operator_delete_2(cast1199, b1202);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1203, int* v1204, unsigned long v1205) {
bb1206: ;
  struct std__allocator_int_* this1207;
  int* __p1208;
  unsigned long __n1209;
  this1207 = v1203;
  __p1208 = v1204;
  __n1209 = v1205;
  struct std__allocator_int_* t1210 = this1207;
    _Bool r1211 = std____is_constant_evaluated();
    if (r1211) {
      int* t1212 = __p1208;
      void* cast1213 = (void*)t1212;
      operator_delete(cast1213);
      return;
    }
  struct std____new_allocator_int_* base1214 = (struct std____new_allocator_int_*)((char *)t1210 + 0);
  int* t1215 = __p1208;
  unsigned long t1216 = __n1209;
  std____new_allocator_int___deallocate(base1214, t1215, t1216);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1217, int* v1218, unsigned long v1219) {
bb1220: ;
  struct std__allocator_int_* __a1221;
  int* __p1222;
  unsigned long __n1223;
  __a1221 = v1217;
  __p1222 = v1218;
  __n1223 = v1219;
  struct std__allocator_int_* t1224 = __a1221;
  int* t1225 = __p1222;
  unsigned long t1226 = __n1223;
  std__allocator_int___deallocate(t1224, t1225, t1226);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v1227, int* v1228) {
bb1229: ;
  struct std___Deque_base_int__std__allocator_int__* this1230;
  int* __p1231;
  this1230 = v1227;
  __p1231 = v1228;
  struct std___Deque_base_int__std__allocator_int__* t1232 = this1230;
  struct std__allocator_int_* base1233 = (struct std__allocator_int_*)((char *)&(t1232->_M_impl) + 0);
  int* t1234 = __p1231;
  unsigned long c1235 = 4;
  unsigned long r1236 = std____deque_buf_size(c1235);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base1233, t1234, r1236);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v1237, int** v1238, int** v1239) {
bb1240: ;
  struct std___Deque_base_int__std__allocator_int__* this1241;
  int** __nstart1242;
  int** __nfinish1243;
  this1241 = v1237;
  __nstart1242 = v1238;
  __nfinish1243 = v1239;
  struct std___Deque_base_int__std__allocator_int__* t1244 = this1241;
    int** __n1245;
    int** t1246 = __nstart1242;
    __n1245 = t1246;
    while (1) {
      int** t1248 = __n1245;
      int** t1249 = __nfinish1243;
      _Bool c1250 = ((t1248 < t1249)) ? 1 : 0;
      if (!c1250) break;
      int** t1251 = __n1245;
      int* t1252 = *t1251;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t1244, t1252);
    for_step1247: ;
      int** t1253 = __n1245;
      int c1254 = 1;
      int** ptr1255 = &(t1253)[c1254];
      __n1245 = ptr1255;
    }
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1256) {
bb1257: ;
  struct std___Deque_base_int__std__allocator_int__* this1258;
  struct std__allocator_int_* __retval1259;
  this1258 = v1256;
  struct std___Deque_base_int__std__allocator_int__* t1260 = this1258;
  struct std__allocator_int_* base1261 = (struct std__allocator_int_*)((char *)&(t1260->_M_impl) + 0);
  __retval1259 = base1261;
  struct std__allocator_int_* t1262 = __retval1259;
  return t1262;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v1263, struct std__allocator_int_* v1264) {
bb1265: ;
  struct std__allocator_int___* this1266;
  struct std__allocator_int_* unnamed1267;
  this1266 = v1263;
  unnamed1267 = v1264;
  struct std__allocator_int___* t1268 = this1266;
  struct std____new_allocator_int___* base1269 = (struct std____new_allocator_int___*)((char *)t1268 + 0);
  std____new_allocator_int______new_allocator(base1269);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1270) {
bb1271: ;
  struct std___Deque_base_int__std__allocator_int__* this1272;
  struct std__allocator_int___ __retval1273;
  this1272 = v1270;
  struct std___Deque_base_int__std__allocator_int__* t1274 = this1272;
  struct std__allocator_int_* r1275 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t1274);
  std__allocator_int____allocator_int_(&__retval1273, r1275);
  struct std__allocator_int___ t1276 = __retval1273;
  return t1276;
}

// function: _ZNSt15__new_allocatorIPiE10deallocateEPS0_m
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v1277, int** v1278, unsigned long v1279) {
bb1280: ;
  struct std____new_allocator_int___* this1281;
  int** __p1282;
  unsigned long __n1283;
  this1281 = v1277;
  __p1282 = v1278;
  __n1283 = v1279;
  struct std____new_allocator_int___* t1284 = this1281;
    unsigned long c1285 = 8;
    unsigned long c1286 = 16;
    _Bool c1287 = ((c1285 > c1286)) ? 1 : 0;
    if (c1287) {
      int** t1288 = __p1282;
      void* cast1289 = (void*)t1288;
      unsigned long t1290 = __n1283;
      unsigned long c1291 = 8;
      unsigned long b1292 = t1290 * c1291;
      unsigned long c1293 = 8;
      operator_delete_3(cast1289, b1292, c1293);
      return;
    }
  int** t1294 = __p1282;
  void* cast1295 = (void*)t1294;
  unsigned long t1296 = __n1283;
  unsigned long c1297 = 8;
  unsigned long b1298 = t1296 * c1297;
  operator_delete_2(cast1295, b1298);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v1299, int** v1300, unsigned long v1301) {
bb1302: ;
  struct std__allocator_int___* this1303;
  int** __p1304;
  unsigned long __n1305;
  this1303 = v1299;
  __p1304 = v1300;
  __n1305 = v1301;
  struct std__allocator_int___* t1306 = this1303;
    _Bool r1307 = std____is_constant_evaluated();
    if (r1307) {
      int** t1308 = __p1304;
      void* cast1309 = (void*)t1308;
      operator_delete(cast1309);
      return;
    }
  struct std____new_allocator_int___* base1310 = (struct std____new_allocator_int___*)((char *)t1306 + 0);
  int** t1311 = __p1304;
  unsigned long t1312 = __n1305;
  std____new_allocator_int____deallocate(base1310, t1311, t1312);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v1313, int** v1314, unsigned long v1315) {
bb1316: ;
  struct std__allocator_int___* __a1317;
  int** __p1318;
  unsigned long __n1319;
  __a1317 = v1313;
  __p1318 = v1314;
  __n1319 = v1315;
  struct std__allocator_int___* t1320 = __a1317;
  int** t1321 = __p1318;
  unsigned long t1322 = __n1319;
  std__allocator_int____deallocate(t1320, t1321, t1322);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v1323, int** v1324, unsigned long v1325) {
bb1326: ;
  struct std___Deque_base_int__std__allocator_int__* this1327;
  int** __p1328;
  unsigned long __n1329;
  struct std__allocator_int___ __map_alloc1330;
  this1327 = v1323;
  __p1328 = v1324;
  __n1329 = v1325;
  struct std___Deque_base_int__std__allocator_int__* t1331 = this1327;
  struct std__allocator_int___ r1332 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1331);
  __map_alloc1330 = r1332;
  int** t1333 = __p1328;
  unsigned long t1334 = __n1329;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc1330, t1333, t1334);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1335) {
bb1336: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1337;
  this1337 = v1335;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1338 = this1337;
  {
    struct std__allocator_int_* base1339 = (struct std__allocator_int_*)((char *)t1338 + 0);
    std__allocator_int____allocator(base1339);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1340) {
bb1341: ;
  struct std___Deque_base_int__std__allocator_int__* this1342;
  this1342 = v1340;
  struct std___Deque_base_int__std__allocator_int__* t1343 = this1342;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1344 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1343->_M_impl) + 0);
      int** t1345 = base1344->_M_map;
      _Bool cast1346 = (_Bool)t1345;
      if (cast1346) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1347 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1343->_M_impl) + 0);
        int** t1348 = base1347->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1349 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1343->_M_impl) + 0);
        int** t1350 = base1349->_M_finish._M_node;
        int c1351 = 1;
        int** ptr1352 = &(t1350)[c1351];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1343, t1348, ptr1352);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1353 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1343->_M_impl) + 0);
        int** t1354 = base1353->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1355 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1343->_M_impl) + 0);
        unsigned long t1356 = base1355->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1343, t1354, t1356);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1343->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1357) {
bb1358: ;
  struct std____new_allocator_int___* this1359;
  this1359 = v1357;
  struct std____new_allocator_int___* t1360 = this1359;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1361) {
bb1362: ;
  struct std__allocator_int_* this1363;
  this1363 = v1361;
  struct std__allocator_int_* t1364 = this1363;
  return;
}

// function: _ZNSt5dequeIiSaIiEEC2Ev
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* v1365) {
bb1366: ;
  struct std__deque_int__std__allocator_int__* this1367;
  this1367 = v1365;
  struct std__deque_int__std__allocator_int__* t1368 = this1367;
  struct std___Deque_base_int__std__allocator_int__* base1369 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1368 + 0);
  std___Deque_base_int__std__allocator_int______Deque_base(base1369);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1370) {
bb1371: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1372;
  this1372 = v1370;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1373 = this1372;
  struct std__allocator_int_* base1374 = (struct std__allocator_int_*)((char *)t1373 + 0);
  std__allocator_int___allocator(base1374);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1375 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t1373 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base1375);
  return;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v1376, unsigned long* v1377) {
bb1378: ;
  unsigned long* __a1379;
  unsigned long* __b1380;
  unsigned long* __retval1381;
  __a1379 = v1376;
  __b1380 = v1377;
    unsigned long* t1382 = __a1379;
    unsigned long t1383 = *t1382;
    unsigned long* t1384 = __b1380;
    unsigned long t1385 = *t1384;
    _Bool c1386 = ((t1383 < t1385)) ? 1 : 0;
    if (c1386) {
      unsigned long* t1387 = __b1380;
      __retval1381 = t1387;
      unsigned long* t1388 = __retval1381;
      return t1388;
    }
  unsigned long* t1389 = __a1379;
  __retval1381 = t1389;
  unsigned long* t1390 = __retval1381;
  return t1390;
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v1391) {
bb1392: ;
  struct std____new_allocator_int___* this1393;
  unsigned long __retval1394;
  this1393 = v1391;
  struct std____new_allocator_int___* t1395 = this1393;
  unsigned long c1396 = 9223372036854775807;
  unsigned long c1397 = 8;
  unsigned long b1398 = c1396 / c1397;
  __retval1394 = b1398;
  unsigned long t1399 = __retval1394;
  return t1399;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v1400, unsigned long v1401, void* v1402) {
bb1403: ;
  struct std____new_allocator_int___* this1404;
  unsigned long __n1405;
  void* unnamed1406;
  int** __retval1407;
  this1404 = v1400;
  __n1405 = v1401;
  unnamed1406 = v1402;
  struct std____new_allocator_int___* t1408 = this1404;
    unsigned long t1409 = __n1405;
    unsigned long r1410 = std____new_allocator_int_____M_max_size___const(t1408);
    _Bool c1411 = ((t1409 > r1410)) ? 1 : 0;
    if (c1411) {
        unsigned long t1412 = __n1405;
        unsigned long c1413 = -1;
        unsigned long c1414 = 8;
        unsigned long b1415 = c1413 / c1414;
        _Bool c1416 = ((t1412 > b1415)) ? 1 : 0;
        if (c1416) {
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
    unsigned long c1417 = 8;
    unsigned long c1418 = 16;
    _Bool c1419 = ((c1417 > c1418)) ? 1 : 0;
    if (c1419) {
      unsigned long __al1420;
      unsigned long c1421 = 8;
      __al1420 = c1421;
      unsigned long t1422 = __n1405;
      unsigned long c1423 = 8;
      unsigned long b1424 = t1422 * c1423;
      unsigned long t1425 = __al1420;
      void* r1426 = operator_new_2(b1424, t1425);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1427 = (int**)r1426;
      __retval1407 = cast1427;
      int** t1428 = __retval1407;
      return t1428;
    }
  unsigned long t1429 = __n1405;
  unsigned long c1430 = 8;
  unsigned long b1431 = t1429 * c1430;
  void* r1432 = operator_new(b1431);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast1433 = (int**)r1432;
  __retval1407 = cast1433;
  int** t1434 = __retval1407;
  return t1434;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v1435, unsigned long v1436) {
bb1437: ;
  struct std__allocator_int___* this1438;
  unsigned long __n1439;
  int** __retval1440;
  this1438 = v1435;
  __n1439 = v1436;
  struct std__allocator_int___* t1441 = this1438;
    _Bool r1442 = std____is_constant_evaluated();
    if (r1442) {
        unsigned long t1443 = __n1439;
        unsigned long c1444 = 8;
        unsigned long ovr1445;
        _Bool ovf1446 = __builtin_mul_overflow(t1443, c1444, &ovr1445);
        __n1439 = ovr1445;
        if (ovf1446) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1447 = __n1439;
      void* r1448 = operator_new(t1447);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1449 = (int**)r1448;
      __retval1440 = cast1449;
      int** t1450 = __retval1440;
      return t1450;
    }
  struct std____new_allocator_int___* base1451 = (struct std____new_allocator_int___*)((char *)t1441 + 0);
  unsigned long t1452 = __n1439;
  void* c1453 = ((void*)0);
  int** r1454 = std____new_allocator_int____allocate(base1451, t1452, c1453);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1440 = r1454;
  int** t1455 = __retval1440;
  return t1455;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v1456, unsigned long v1457) {
bb1458: ;
  struct std__allocator_int___* __a1459;
  unsigned long __n1460;
  int** __retval1461;
  __a1459 = v1456;
  __n1460 = v1457;
  struct std__allocator_int___* t1462 = __a1459;
  unsigned long t1463 = __n1460;
  int** r1464 = std__allocator_int____allocate(t1462, t1463);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1461 = r1464;
  int** t1465 = __retval1461;
  return t1465;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v1466, unsigned long v1467) {
bb1468: ;
  struct std___Deque_base_int__std__allocator_int__* this1469;
  unsigned long __n1470;
  int** __retval1471;
  struct std__allocator_int___ __map_alloc1472;
  this1469 = v1466;
  __n1470 = v1467;
  struct std___Deque_base_int__std__allocator_int__* t1473 = this1469;
  struct std__allocator_int___ r1474 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1473);
  __map_alloc1472 = r1474;
  unsigned long t1475 = __n1470;
  int** r1476 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc1472, t1475);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1471 = r1476;
  int** t1477 = __retval1471;
  return t1477;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1478) {
bb1479: ;
  struct std____new_allocator_int_* this1480;
  unsigned long __retval1481;
  this1480 = v1478;
  struct std____new_allocator_int_* t1482 = this1480;
  unsigned long c1483 = 9223372036854775807;
  unsigned long c1484 = 4;
  unsigned long b1485 = c1483 / c1484;
  __retval1481 = b1485;
  unsigned long t1486 = __retval1481;
  return t1486;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1487, unsigned long v1488, void* v1489) {
bb1490: ;
  struct std____new_allocator_int_* this1491;
  unsigned long __n1492;
  void* unnamed1493;
  int* __retval1494;
  this1491 = v1487;
  __n1492 = v1488;
  unnamed1493 = v1489;
  struct std____new_allocator_int_* t1495 = this1491;
    unsigned long t1496 = __n1492;
    unsigned long r1497 = std____new_allocator_int____M_max_size___const(t1495);
    _Bool c1498 = ((t1496 > r1497)) ? 1 : 0;
    if (c1498) {
        unsigned long t1499 = __n1492;
        unsigned long c1500 = -1;
        unsigned long c1501 = 4;
        unsigned long b1502 = c1500 / c1501;
        _Bool c1503 = ((t1499 > b1502)) ? 1 : 0;
        if (c1503) {
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
    unsigned long c1504 = 4;
    unsigned long c1505 = 16;
    _Bool c1506 = ((c1504 > c1505)) ? 1 : 0;
    if (c1506) {
      unsigned long __al1507;
      unsigned long c1508 = 4;
      __al1507 = c1508;
      unsigned long t1509 = __n1492;
      unsigned long c1510 = 4;
      unsigned long b1511 = t1509 * c1510;
      unsigned long t1512 = __al1507;
      void* r1513 = operator_new_2(b1511, t1512);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1514 = (int*)r1513;
      __retval1494 = cast1514;
      int* t1515 = __retval1494;
      return t1515;
    }
  unsigned long t1516 = __n1492;
  unsigned long c1517 = 4;
  unsigned long b1518 = t1516 * c1517;
  void* r1519 = operator_new(b1518);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast1520 = (int*)r1519;
  __retval1494 = cast1520;
  int* t1521 = __retval1494;
  return t1521;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1522, unsigned long v1523) {
bb1524: ;
  struct std__allocator_int_* this1525;
  unsigned long __n1526;
  int* __retval1527;
  this1525 = v1522;
  __n1526 = v1523;
  struct std__allocator_int_* t1528 = this1525;
    _Bool r1529 = std____is_constant_evaluated();
    if (r1529) {
        unsigned long t1530 = __n1526;
        unsigned long c1531 = 4;
        unsigned long ovr1532;
        _Bool ovf1533 = __builtin_mul_overflow(t1530, c1531, &ovr1532);
        __n1526 = ovr1532;
        if (ovf1533) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1534 = __n1526;
      void* r1535 = operator_new(t1534);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1536 = (int*)r1535;
      __retval1527 = cast1536;
      int* t1537 = __retval1527;
      return t1537;
    }
  struct std____new_allocator_int_* base1538 = (struct std____new_allocator_int_*)((char *)t1528 + 0);
  unsigned long t1539 = __n1526;
  void* c1540 = ((void*)0);
  int* r1541 = std____new_allocator_int___allocate(base1538, t1539, c1540);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1527 = r1541;
  int* t1542 = __retval1527;
  return t1542;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1543, unsigned long v1544) {
bb1545: ;
  struct std__allocator_int_* __a1546;
  unsigned long __n1547;
  int* __retval1548;
  __a1546 = v1543;
  __n1547 = v1544;
  struct std__allocator_int_* t1549 = __a1546;
  unsigned long t1550 = __n1547;
  int* r1551 = std__allocator_int___allocate(t1549, t1550);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1548 = r1551;
  int* t1552 = __retval1548;
  return t1552;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v1553) {
bb1554: ;
  struct std___Deque_base_int__std__allocator_int__* this1555;
  int* __retval1556;
  this1555 = v1553;
  struct std___Deque_base_int__std__allocator_int__* t1557 = this1555;
  struct std__allocator_int_* base1558 = (struct std__allocator_int_*)((char *)&(t1557->_M_impl) + 0);
  unsigned long c1559 = 4;
  unsigned long r1560 = std____deque_buf_size(c1559);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r1561 = std__allocator_traits_std__allocator_int_____allocate(base1558, r1560);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1556 = r1561;
  int* t1562 = __retval1556;
  return t1562;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v1563, int** v1564, int** v1565) {
bb1566: ;
  struct std___Deque_base_int__std__allocator_int__* this1567;
  int** __nstart1568;
  int** __nfinish1569;
  int** __cur1570;
  this1567 = v1563;
  __nstart1568 = v1564;
  __nfinish1569 = v1565;
  struct std___Deque_base_int__std__allocator_int__* t1571 = this1567;
        int** t1573 = __nstart1568;
        __cur1570 = t1573;
        while (1) {
          int** t1575 = __cur1570;
          int** t1576 = __nfinish1569;
          _Bool c1577 = ((t1575 < t1576)) ? 1 : 0;
          if (!c1577) break;
          int* r1578 = std___Deque_base_int__std__allocator_int______M_allocate_node(t1571);
          if (__cir_exc_active) {
            goto cir_try_dispatch1572;
          }
          int** t1579 = __cur1570;
          *t1579 = r1578;
        for_step1574: ;
          int** t1580 = __cur1570;
          int c1581 = 1;
          int** ptr1582 = &(t1580)[c1581];
          __cur1570 = ptr1582;
        }
    cir_try_dispatch1572: ;
    if (__cir_exc_active) {
    {
      int ca_tok1583 = 0;
      void* ca_exn1584 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t1585 = __nstart1568;
        int** t1586 = __cur1570;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1571, t1585, t1586);
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
bb1587: ;
  unsigned long __retval1588;
  unsigned long c1589 = 4;
  unsigned long r1590 = std____deque_buf_size(c1589);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1588 = r1590;
  unsigned long t1591 = __retval1588;
  return t1591;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v1592, int** v1593) {
bb1594: ;
  struct std___Deque_iterator_int__int____int___* this1595;
  int** __new_node1596;
  this1595 = v1592;
  __new_node1596 = v1593;
  struct std___Deque_iterator_int__int____int___* t1597 = this1595;
  int** t1598 = __new_node1596;
  t1597->_M_node = t1598;
  int** t1599 = __new_node1596;
  int* t1600 = *t1599;
  t1597->_M_first = t1600;
  int* t1601 = t1597->_M_first;
  unsigned long r1602 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1603 = (long)r1602;
  int* ptr1604 = &(t1601)[cast1603];
  t1597->_M_last = ptr1604;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v1605, unsigned long v1606) {
bb1607: ;
  struct std___Deque_base_int__std__allocator_int__* this1608;
  unsigned long __num_elements1609;
  unsigned long __num_nodes1610;
  unsigned long ref_tmp01611;
  unsigned long ref_tmp11612;
  int** __nstart1613;
  int** __nfinish1614;
  this1608 = v1605;
  __num_elements1609 = v1606;
  struct std___Deque_base_int__std__allocator_int__* t1615 = this1608;
  unsigned long t1616 = __num_elements1609;
  unsigned long c1617 = 4;
  unsigned long r1618 = std____deque_buf_size(c1617);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1619 = t1616 / r1618;
  unsigned long c1620 = 1;
  unsigned long b1621 = b1619 + c1620;
  __num_nodes1610 = b1621;
  unsigned long c1622 = 8;
  ref_tmp01611 = c1622;
  unsigned long t1623 = __num_nodes1610;
  unsigned long c1624 = 2;
  unsigned long b1625 = t1623 + c1624;
  ref_tmp11612 = b1625;
  unsigned long* r1626 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01611, &ref_tmp11612);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1627 = *r1626;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1628 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1615->_M_impl) + 0);
  base1628->_M_map_size = t1627;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1629 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1615->_M_impl) + 0);
  unsigned long t1630 = base1629->_M_map_size;
  int** r1631 = std___Deque_base_int__std__allocator_int______M_allocate_map(t1615, t1630);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1632 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1615->_M_impl) + 0);
  base1632->_M_map = r1631;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1633 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1615->_M_impl) + 0);
  int** t1634 = base1633->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1635 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1615->_M_impl) + 0);
  unsigned long t1636 = base1635->_M_map_size;
  unsigned long t1637 = __num_nodes1610;
  unsigned long b1638 = t1636 - t1637;
  unsigned long c1639 = 2;
  unsigned long b1640 = b1638 / c1639;
  int** ptr1641 = &(t1634)[b1640];
  __nstart1613 = ptr1641;
  int** t1642 = __nstart1613;
  unsigned long t1643 = __num_nodes1610;
  int** ptr1644 = &(t1642)[t1643];
  __nfinish1614 = ptr1644;
      int** t1646 = __nstart1613;
      int** t1647 = __nfinish1614;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t1615, t1646, t1647);
      if (__cir_exc_active) {
        goto cir_try_dispatch1645;
      }
    cir_try_dispatch1645: ;
    if (__cir_exc_active) {
    {
      int ca_tok1648 = 0;
      void* ca_exn1649 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1650 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1615->_M_impl) + 0);
        int** t1651 = base1650->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1652 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1615->_M_impl) + 0);
        unsigned long t1653 = base1652->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1615, t1651, t1653);
        int** c1654 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1655 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1615->_M_impl) + 0);
        base1655->_M_map = c1654;
        unsigned long c1656 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1657 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1615->_M_impl) + 0);
        base1657->_M_map_size = c1656;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1658 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1615->_M_impl) + 0);
  int** t1659 = __nstart1613;
  std___Deque_iterator_int__int___int_____M_set_node(&base1658->_M_start, t1659);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1660 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1615->_M_impl) + 0);
  int** t1661 = __nfinish1614;
  int c1662 = -1;
  int** ptr1663 = &(t1661)[c1662];
  std___Deque_iterator_int__int___int_____M_set_node(&base1660->_M_finish, ptr1663);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1664 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1615->_M_impl) + 0);
  int* t1665 = base1664->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1666 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1615->_M_impl) + 0);
  base1666->_M_start._M_cur = t1665;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1667 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1615->_M_impl) + 0);
  int* t1668 = base1667->_M_finish._M_first;
  unsigned long t1669 = __num_elements1609;
  unsigned long c1670 = 4;
  unsigned long r1671 = std____deque_buf_size(c1670);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1672 = t1669 % r1671;
  int* ptr1673 = &(t1668)[b1672];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1674 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1615->_M_impl) + 0);
  base1674->_M_finish._M_cur = ptr1673;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1675) {
bb1676: ;
  struct std___Deque_base_int__std__allocator_int__* this1677;
  this1677 = v1675;
  struct std___Deque_base_int__std__allocator_int__* t1678 = this1677;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1678->_M_impl);
    unsigned long c1679 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1678, c1679);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1678->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1680) {
bb1681: ;
  struct std____new_allocator_int_* this1682;
  this1682 = v1680;
  struct std____new_allocator_int_* t1683 = this1682;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1684) {
bb1685: ;
  struct std__allocator_int_* this1686;
  this1686 = v1684;
  struct std__allocator_int_* t1687 = this1686;
  struct std____new_allocator_int_* base1688 = (struct std____new_allocator_int_*)((char *)t1687 + 0);
  std____new_allocator_int_____new_allocator(base1688);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1689) {
bb1690: ;
  struct std___Deque_iterator_int__int____int___* this1691;
  this1691 = v1689;
  struct std___Deque_iterator_int__int____int___* t1692 = this1691;
  int* c1693 = ((void*)0);
  t1692->_M_cur = c1693;
  int* c1694 = ((void*)0);
  t1692->_M_first = c1694;
  int* c1695 = ((void*)0);
  t1692->_M_last = c1695;
  int** c1696 = ((void*)0);
  t1692->_M_node = c1696;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1697) {
bb1698: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1699;
  this1699 = v1697;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1700 = this1699;
  int** c1701 = ((void*)0);
  t1700->_M_map = c1701;
  unsigned long c1702 = 0;
  t1700->_M_map_size = c1702;
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1700->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1700->_M_finish);
  return;
}

