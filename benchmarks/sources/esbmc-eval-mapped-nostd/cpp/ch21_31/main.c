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
struct std__queue_int__std__deque_int__std__allocator_int___ { struct std__deque_int__std__allocator_int__ c; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[23] = "myqueue.back() is now ";
char _str_1[19] = "myqueue.back()==63";
char _str_2[99] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch21_31/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[48] = "cannot create std::deque larger than max_size()";
char _str_4[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[15] = "!this->empty()";
char _str_6[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_queue.h";
char __PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE4backEv[75] = "reference std::queue<int>::back() [_Tp = int, _Sequence = std::deque<int>]";
char __PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE5frontEv[76] = "reference std::queue<int>::front() [_Tp = int, _Sequence = std::deque<int>]";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv[77] = "reference std::deque<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
void std__queue_int__std__deque_int__std__allocator_int_______queue_std__deque_int__std__allocator_int_____void_(struct std__queue_int__std__deque_int__std__allocator_int___* p0);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
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
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_(struct std__deque_int__std__allocator_int__* p0, int* p1);
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* p0);
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* p0);
int* std__deque_int__std__allocator_int_____back(struct std__deque_int__std__allocator_int__* p0);
int* int__std__deque_int__std__allocator_int_____emplace_back_int_(struct std__deque_int__std__allocator_int__* p0, int* p1);
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* p0, int* p1);
void std__queue_int__std__deque_int__std__allocator_int_______push(struct std__queue_int__std__deque_int__std__allocator_int___* p0, int* p1);
int* std__deque_int__std__allocator_int_____front(struct std__deque_int__std__allocator_int__* p0);
int* std__queue_int__std__deque_int__std__allocator_int_______front(struct std__queue_int__std__deque_int__std__allocator_int___* p0);
_Bool std__queue_int__std__deque_int__std__allocator_int_______empty___const(struct std__queue_int__std__deque_int__std__allocator_int___* p0);
int* std__queue_int__std__deque_int__std__allocator_int_______back(struct std__queue_int__std__deque_int__std__allocator_int___* p0);
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
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std__queue_int__std__deque_int__std__allocator_int________queue(struct std__queue_int__std__deque_int__std__allocator_int___* p0);
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

// function: _ZNSt5queueIiSt5dequeIiSaIiEEEC2IS2_vEEv
void std__queue_int__std__deque_int__std__allocator_int_______queue_std__deque_int__std__allocator_int_____void_(struct std__queue_int__std__deque_int__std__allocator_int___* v0) {
bb1: ;
  struct std__queue_int__std__deque_int__std__allocator_int___* this2;
  this2 = v0;
  struct std__queue_int__std__deque_int__std__allocator_int___* t3 = this2;
  struct std__deque_int__std__allocator_int__ c4 = {0};
  t3->c = c4;
  std__deque_int__std__allocator_int_____deque(&t3->c);
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

// function: _ZNSt5dequeIiSaIiEE16_M_push_back_auxIJiEEEvDpOT_
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_(struct std__deque_int__std__allocator_int__* v575, int* v576) {
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
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base595, t598, t599);
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

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* v621, struct std___Deque_iterator_int__int____int___* v622) {
bb623: ;
  struct std___Deque_iterator_int__int____int___* __x624;
  struct std___Deque_iterator_int__int____int___* __y625;
  _Bool __retval626;
  __x624 = v621;
  __y625 = v622;
  struct std___Deque_iterator_int__int____int___* t627 = __x624;
  int* t628 = t627->_M_cur;
  struct std___Deque_iterator_int__int____int___* t629 = __y625;
  int* t630 = t629->_M_cur;
  _Bool c631 = ((t628 == t630)) ? 1 : 0;
  __retval626 = c631;
  _Bool t632 = __retval626;
  return t632;
}

// function: _ZNKSt5dequeIiSaIiEE5emptyEv
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* v633) {
bb634: ;
  struct std__deque_int__std__allocator_int__* this635;
  _Bool __retval636;
  this635 = v633;
  struct std__deque_int__std__allocator_int__* t637 = this635;
  struct std___Deque_base_int__std__allocator_int__* base638 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t637 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base639 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base638->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base640 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t637 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base641 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base640->_M_impl) + 0);
  _Bool r642 = std__operator__(&base639->_M_finish, &base641->_M_start);
  __retval636 = r642;
  _Bool t643 = __retval636;
  return t643;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEmmEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* v644) {
bb645: ;
  struct std___Deque_iterator_int__int____int___* this646;
  struct std___Deque_iterator_int__int____int___* __retval647;
  this646 = v644;
  struct std___Deque_iterator_int__int____int___* t648 = this646;
    int* t649 = t648->_M_cur;
    int* t650 = t648->_M_first;
    _Bool c651 = ((t649 == t650)) ? 1 : 0;
    if (c651) {
      int** t652 = t648->_M_node;
      int c653 = -1;
      int** ptr654 = &(t652)[c653];
      std___Deque_iterator_int__int___int_____M_set_node(t648, ptr654);
      int* t655 = t648->_M_last;
      t648->_M_cur = t655;
    }
  int* t656 = t648->_M_cur;
  int c657 = -1;
  int* ptr658 = &(t656)[c657];
  t648->_M_cur = ptr658;
  __retval647 = t648;
  struct std___Deque_iterator_int__int____int___* t659 = __retval647;
  return t659;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v660) {
bb661: ;
  struct std___Deque_iterator_int__int____int___* this662;
  int* __retval663;
  this662 = v660;
  struct std___Deque_iterator_int__int____int___* t664 = this662;
  int* t665 = t664->_M_cur;
  __retval663 = t665;
  int* t666 = __retval663;
  return t666;
}

// function: _ZNSt5dequeIiSaIiEE4backEv
int* std__deque_int__std__allocator_int_____back(struct std__deque_int__std__allocator_int__* v667) {
bb668: ;
  struct std__deque_int__std__allocator_int__* this669;
  int* __retval670;
  struct std___Deque_iterator_int__int____int___ __tmp671;
  this669 = v667;
  struct std__deque_int__std__allocator_int__* t672 = this669;
    do {
          _Bool r673 = std__deque_int__std__allocator_int_____empty___const(t672);
          if (r673) {
            char* cast674 = (char*)&(_str_4);
            int c675 = 1537;
            char* cast676 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv);
            char* cast677 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast674, c675, cast676, cast677);
          }
      _Bool c678 = 0;
      if (!c678) break;
    } while (1);
  struct std___Deque_iterator_int__int____int___ r679 = std__deque_int__std__allocator_int_____end(t672);
  __tmp671 = r679;
  struct std___Deque_iterator_int__int____int___* r680 = std___Deque_iterator_int__int___int____operator__(&__tmp671);
  int* r681 = std___Deque_iterator_int__int___int____operator____const(&__tmp671);
  __retval670 = r681;
  int* t682 = __retval670;
  return t682;
}

// function: _ZNSt5dequeIiSaIiEE12emplace_backIJiEEERiDpOT_
int* int__std__deque_int__std__allocator_int_____emplace_back_int_(struct std__deque_int__std__allocator_int__* v683, int* v684) {
bb685: ;
  struct std__deque_int__std__allocator_int__* this686;
  int* __args687;
  int* __retval688;
  this686 = v683;
  __args687 = v684;
  struct std__deque_int__std__allocator_int__* t689 = this686;
    struct std___Deque_base_int__std__allocator_int__* base690 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t689 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base691 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base690->_M_impl) + 0);
    int* t692 = base691->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base693 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t689 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base694 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base693->_M_impl) + 0);
    int* t695 = base694->_M_finish._M_last;
    int c696 = -1;
    int* ptr697 = &(t695)[c696];
    _Bool c698 = ((t692 != ptr697)) ? 1 : 0;
    if (c698) {
      struct std___Deque_base_int__std__allocator_int__* base699 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t689 + 0);
      struct std__allocator_int_* base700 = (struct std__allocator_int_*)((char *)&(base699->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base701 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t689 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base702 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base701->_M_impl) + 0);
      int* t703 = base702->_M_finish._M_cur;
      int* t704 = __args687;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base700, t703, t704);
      struct std___Deque_base_int__std__allocator_int__* base705 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t689 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base706 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base705->_M_impl) + 0);
      int* t707 = base706->_M_finish._M_cur;
      int c708 = 1;
      int* ptr709 = &(t707)[c708];
      base706->_M_finish._M_cur = ptr709;
    } else {
      int* t710 = __args687;
      void_std__deque_int__std__allocator_int______M_push_back_aux_int_(t689, t710);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    }
  int* r711 = std__deque_int__std__allocator_int_____back(t689);
  __retval688 = r711;
  int* t712 = __retval688;
  return t712;
}

// function: _ZNSt5dequeIiSaIiEE9push_backEOi
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* v713, int* v714) {
bb715: ;
  struct std__deque_int__std__allocator_int__* this716;
  int* __x717;
  this716 = v713;
  __x717 = v714;
  struct std__deque_int__std__allocator_int__* t718 = this716;
  int* t719 = __x717;
  int* r720 = int__std__deque_int__std__allocator_int_____emplace_back_int_(t718, t719);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5queueIiSt5dequeIiSaIiEEE4pushEOi
void std__queue_int__std__deque_int__std__allocator_int_______push(struct std__queue_int__std__deque_int__std__allocator_int___* v721, int* v722) {
bb723: ;
  struct std__queue_int__std__deque_int__std__allocator_int___* this724;
  int* __x725;
  this724 = v721;
  __x725 = v722;
  struct std__queue_int__std__deque_int__std__allocator_int___* t726 = this724;
  int* t727 = __x725;
  std__deque_int__std__allocator_int_____push_back(&t726->c, t727);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5frontEv
int* std__deque_int__std__allocator_int_____front(struct std__deque_int__std__allocator_int__* v728) {
bb729: ;
  struct std__deque_int__std__allocator_int__* this730;
  int* __retval731;
  struct std___Deque_iterator_int__int____int___ ref_tmp0732;
  this730 = v728;
  struct std__deque_int__std__allocator_int__* t733 = this730;
    do {
          _Bool r734 = std__deque_int__std__allocator_int_____empty___const(t733);
          if (r734) {
            char* cast735 = (char*)&(_str_4);
            int c736 = 1513;
            char* cast737 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv);
            char* cast738 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast735, c736, cast737, cast738);
          }
      _Bool c739 = 0;
      if (!c739) break;
    } while (1);
  struct std___Deque_iterator_int__int____int___ r740 = std__deque_int__std__allocator_int_____begin(t733);
  ref_tmp0732 = r740;
  int* r741 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp0732);
  __retval731 = r741;
  int* t742 = __retval731;
  return t742;
}

// function: _ZNSt5queueIiSt5dequeIiSaIiEEE5frontEv
int* std__queue_int__std__deque_int__std__allocator_int_______front(struct std__queue_int__std__deque_int__std__allocator_int___* v743) {
bb744: ;
  struct std__queue_int__std__deque_int__std__allocator_int___* this745;
  int* __retval746;
  this745 = v743;
  struct std__queue_int__std__deque_int__std__allocator_int___* t747 = this745;
    do {
          _Bool r748 = std__queue_int__std__deque_int__std__allocator_int_______empty___const(t747);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          if (r748) {
            char* cast749 = (char*)&(_str_6);
            int c750 = 262;
            char* cast751 = (char*)&(__PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE5frontEv);
            char* cast752 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast749, c750, cast751, cast752);
          }
      _Bool c753 = 0;
      if (!c753) break;
    } while (1);
  int* r754 = std__deque_int__std__allocator_int_____front(&t747->c);
  __retval746 = r754;
  int* t755 = __retval746;
  return t755;
}

// function: _ZNKSt5queueIiSt5dequeIiSaIiEEE5emptyEv
_Bool std__queue_int__std__deque_int__std__allocator_int_______empty___const(struct std__queue_int__std__deque_int__std__allocator_int___* v756) {
bb757: ;
  struct std__queue_int__std__deque_int__std__allocator_int___* this758;
  _Bool __retval759;
  this758 = v756;
  struct std__queue_int__std__deque_int__std__allocator_int___* t760 = this758;
  _Bool r761 = std__deque_int__std__allocator_int_____empty___const(&t760->c);
  __retval759 = r761;
  _Bool t762 = __retval759;
  return t762;
}

// function: _ZNSt5queueIiSt5dequeIiSaIiEEE4backEv
int* std__queue_int__std__deque_int__std__allocator_int_______back(struct std__queue_int__std__deque_int__std__allocator_int___* v763) {
bb764: ;
  struct std__queue_int__std__deque_int__std__allocator_int___* this765;
  int* __retval766;
  this765 = v763;
  struct std__queue_int__std__deque_int__std__allocator_int___* t767 = this765;
    do {
          _Bool r768 = std__queue_int__std__deque_int__std__allocator_int_______empty___const(t767);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          if (r768) {
            char* cast769 = (char*)&(_str_6);
            int c770 = 286;
            char* cast771 = (char*)&(__PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE4backEv);
            char* cast772 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast769, c770, cast771, cast772);
          }
      _Bool c773 = 0;
      if (!c773) break;
    } while (1);
  int* r774 = std__deque_int__std__allocator_int_____back(&t767->c);
  __retval766 = r774;
  int* t775 = __retval766;
  return t775;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v776, int v777) {
bb778: ;
  int __a779;
  int __b780;
  int __retval781;
  __a779 = v776;
  __b780 = v777;
  int t782 = __a779;
  int t783 = __b780;
  int b784 = t782 | t783;
  __retval781 = b784;
  int t785 = __retval781;
  return t785;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v786) {
bb787: ;
  struct std__basic_ios_char__std__char_traits_char__* this788;
  int __retval789;
  this788 = v786;
  struct std__basic_ios_char__std__char_traits_char__* t790 = this788;
  struct std__ios_base* base791 = (struct std__ios_base*)((char *)t790 + 0);
  int t792 = base791->_M_streambuf_state;
  __retval789 = t792;
  int t793 = __retval789;
  return t793;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v794, int v795) {
bb796: ;
  struct std__basic_ios_char__std__char_traits_char__* this797;
  int __state798;
  this797 = v794;
  __state798 = v795;
  struct std__basic_ios_char__std__char_traits_char__* t799 = this797;
  int r800 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t799);
  if (__cir_exc_active) {
    return;
  }
  int t801 = __state798;
  int r802 = std__operator__2(r800, t801);
  std__basic_ios_char__std__char_traits_char_____clear(t799, r802);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v803, char* v804) {
bb805: ;
  char* __c1806;
  char* __c2807;
  _Bool __retval808;
  __c1806 = v803;
  __c2807 = v804;
  char* t809 = __c1806;
  char t810 = *t809;
  int cast811 = (int)t810;
  char* t812 = __c2807;
  char t813 = *t812;
  int cast814 = (int)t813;
  _Bool c815 = ((cast811 == cast814)) ? 1 : 0;
  __retval808 = c815;
  _Bool t816 = __retval808;
  return t816;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v817) {
bb818: ;
  char* __p819;
  unsigned long __retval820;
  unsigned long __i821;
  __p819 = v817;
  unsigned long c822 = 0;
  __i821 = c822;
    char ref_tmp0823;
    while (1) {
      unsigned long t824 = __i821;
      char* t825 = __p819;
      char* ptr826 = &(t825)[t824];
      char c827 = 0;
      ref_tmp0823 = c827;
      _Bool r828 = __gnu_cxx__char_traits_char___eq(ptr826, &ref_tmp0823);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u829 = !r828;
      if (!u829) break;
      unsigned long t830 = __i821;
      unsigned long u831 = t830 + 1;
      __i821 = u831;
    }
  unsigned long t832 = __i821;
  __retval820 = t832;
  unsigned long t833 = __retval820;
  return t833;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v834) {
bb835: ;
  char* __s836;
  unsigned long __retval837;
  __s836 = v834;
    _Bool r838 = std____is_constant_evaluated();
    if (r838) {
      char* t839 = __s836;
      unsigned long r840 = __gnu_cxx__char_traits_char___length(t839);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval837 = r840;
      unsigned long t841 = __retval837;
      return t841;
    }
  char* t842 = __s836;
  unsigned long r843 = strlen(t842);
  __retval837 = r843;
  unsigned long t844 = __retval837;
  return t844;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v845, char* v846) {
bb847: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out848;
  char* __s849;
  struct std__basic_ostream_char__std__char_traits_char__* __retval850;
  __out848 = v845;
  __s849 = v846;
    char* t851 = __s849;
    _Bool cast852 = (_Bool)t851;
    _Bool u853 = !cast852;
    if (u853) {
      struct std__basic_ostream_char__std__char_traits_char__* t854 = __out848;
      void** v855 = (void**)t854;
      void* v856 = *((void**)v855);
      unsigned char* cast857 = (unsigned char*)v856;
      long c858 = -24;
      unsigned char* ptr859 = &(cast857)[c858];
      long* cast860 = (long*)ptr859;
      long t861 = *cast860;
      unsigned char* cast862 = (unsigned char*)t854;
      unsigned char* ptr863 = &(cast862)[t861];
      struct std__basic_ostream_char__std__char_traits_char__* cast864 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr863;
      struct std__basic_ios_char__std__char_traits_char__* cast865 = (struct std__basic_ios_char__std__char_traits_char__*)cast864;
      int t866 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast865, t866);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t867 = __out848;
      char* t868 = __s849;
      char* t869 = __s849;
      unsigned long r870 = std__char_traits_char___length(t869);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast871 = (long)r870;
      struct std__basic_ostream_char__std__char_traits_char__* r872 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t867, t868, cast871);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t873 = __out848;
  __retval850 = t873;
  struct std__basic_ostream_char__std__char_traits_char__* t874 = __retval850;
  return t874;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v875, void* v876) {
bb877: ;
  struct std__basic_ostream_char__std__char_traits_char__* this878;
  void* __pf879;
  struct std__basic_ostream_char__std__char_traits_char__* __retval880;
  this878 = v875;
  __pf879 = v876;
  struct std__basic_ostream_char__std__char_traits_char__* t881 = this878;
  void* t882 = __pf879;
  struct std__basic_ostream_char__std__char_traits_char__* r883 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t882)(t881);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval880 = r883;
  struct std__basic_ostream_char__std__char_traits_char__* t884 = __retval880;
  return t884;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v885) {
bb886: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os887;
  struct std__basic_ostream_char__std__char_traits_char__* __retval888;
  __os887 = v885;
  struct std__basic_ostream_char__std__char_traits_char__* t889 = __os887;
  struct std__basic_ostream_char__std__char_traits_char__* r890 = std__ostream__flush(t889);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval888 = r890;
  struct std__basic_ostream_char__std__char_traits_char__* t891 = __retval888;
  return t891;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v892) {
bb893: ;
  struct std__ctype_char_* __f894;
  struct std__ctype_char_* __retval895;
  __f894 = v892;
    struct std__ctype_char_* t896 = __f894;
    _Bool cast897 = (_Bool)t896;
    _Bool u898 = !cast897;
    if (u898) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t899 = __f894;
  __retval895 = t899;
  struct std__ctype_char_* t900 = __retval895;
  return t900;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v901, char v902) {
bb903: ;
  struct std__ctype_char_* this904;
  char __c905;
  char __retval906;
  this904 = v901;
  __c905 = v902;
  struct std__ctype_char_* t907 = this904;
    char t908 = t907->_M_widen_ok;
    _Bool cast909 = (_Bool)t908;
    if (cast909) {
      char t910 = __c905;
      unsigned char cast911 = (unsigned char)t910;
      unsigned long cast912 = (unsigned long)cast911;
      char t913 = t907->_M_widen[cast912];
      __retval906 = t913;
      char t914 = __retval906;
      return t914;
    }
  std__ctype_char____M_widen_init___const(t907);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t915 = __c905;
  void** v916 = (void**)t907;
  void* v917 = *((void**)v916);
  char vcall920 = (char)__VERIFIER_virtual_call_char_char(t907, 6, t915);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval906 = vcall920;
  char t921 = __retval906;
  return t921;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v922, char v923) {
bb924: ;
  struct std__basic_ios_char__std__char_traits_char__* this925;
  char __c926;
  char __retval927;
  this925 = v922;
  __c926 = v923;
  struct std__basic_ios_char__std__char_traits_char__* t928 = this925;
  struct std__ctype_char_* t929 = t928->_M_ctype;
  struct std__ctype_char_* r930 = std__ctype_char__const__std____check_facet_std__ctype_char___(t929);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t931 = __c926;
  char r932 = std__ctype_char___widen_char__const(r930, t931);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval927 = r932;
  char t933 = __retval927;
  return t933;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v934) {
bb935: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os936;
  struct std__basic_ostream_char__std__char_traits_char__* __retval937;
  __os936 = v934;
  struct std__basic_ostream_char__std__char_traits_char__* t938 = __os936;
  struct std__basic_ostream_char__std__char_traits_char__* t939 = __os936;
  void** v940 = (void**)t939;
  void* v941 = *((void**)v940);
  unsigned char* cast942 = (unsigned char*)v941;
  long c943 = -24;
  unsigned char* ptr944 = &(cast942)[c943];
  long* cast945 = (long*)ptr944;
  long t946 = *cast945;
  unsigned char* cast947 = (unsigned char*)t939;
  unsigned char* ptr948 = &(cast947)[t946];
  struct std__basic_ostream_char__std__char_traits_char__* cast949 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr948;
  struct std__basic_ios_char__std__char_traits_char__* cast950 = (struct std__basic_ios_char__std__char_traits_char__*)cast949;
  char c951 = 10;
  char r952 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast950, c951);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r953 = std__ostream__put(t938, r952);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r954 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r953);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval937 = r954;
  struct std__basic_ostream_char__std__char_traits_char__* t955 = __retval937;
  return t955;
}

// function: _ZNSt5queueIiSt5dequeIiSaIiEEED2Ev
void std__queue_int__std__deque_int__std__allocator_int________queue(struct std__queue_int__std__deque_int__std__allocator_int___* v956) {
bb957: ;
  struct std__queue_int__std__deque_int__std__allocator_int___* this958;
  this958 = v956;
  struct std__queue_int__std__deque_int__std__allocator_int___* t959 = this958;
  {
    std__deque_int__std__allocator_int______deque(&t959->c);
  }
  return;
}

// function: main
int main() {
bb960: ;
  int __retval961;
  struct std__queue_int__std__deque_int__std__allocator_int___ myqueue962;
  int ref_tmp0963;
  int ref_tmp1964;
  int c965 = 0;
  __retval961 = c965;
  std__queue_int__std__deque_int__std__allocator_int_______queue_std__deque_int__std__allocator_int_____void_(&myqueue962);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    int c966 = 12;
    ref_tmp0963 = c966;
    std__queue_int__std__deque_int__std__allocator_int_______push(&myqueue962, &ref_tmp0963);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue962);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c967 = 75;
    ref_tmp1964 = c967;
    std__queue_int__std__deque_int__std__allocator_int_______push(&myqueue962, &ref_tmp1964);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue962);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int* r968 = std__queue_int__std__deque_int__std__allocator_int_______front(&myqueue962);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue962);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t969 = *r968;
    int* r970 = std__queue_int__std__deque_int__std__allocator_int_______back(&myqueue962);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue962);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t971 = *r970;
    int b972 = t971 - t969;
    *r970 = b972;
    char* cast973 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r974 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast973);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue962);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int* r975 = std__queue_int__std__deque_int__std__allocator_int_______back(&myqueue962);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue962);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t976 = *r975;
    struct std__basic_ostream_char__std__char_traits_char__* r977 = std__ostream__operator__(r974, t976);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue962);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r978 = std__ostream__operator___std__ostream_____(r977, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue962);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int* r979 = std__queue_int__std__deque_int__std__allocator_int_______back(&myqueue962);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue962);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t980 = *r979;
    int c981 = 63;
    _Bool c982 = ((t980 == c981)) ? 1 : 0;
    if (c982) {
    } else {
      char* cast983 = (char*)&(_str_1);
      char* c984 = (char*)_str_2;
      unsigned int c985 = 25;
      char* cast986 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast983, c984, c985, cast986);
    }
    int c987 = 0;
    __retval961 = c987;
    int t988 = __retval961;
    int ret_val989 = t988;
    {
      std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue962);
    }
    return ret_val989;
  int t990 = __retval961;
  return t990;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v991) {
bb992: ;
  struct std__deque_int__std__allocator_int__* this993;
  struct std___Deque_iterator_int__int____int___ agg_tmp0994;
  struct std___Deque_iterator_int__int____int___ agg_tmp1995;
  this993 = v991;
  struct std__deque_int__std__allocator_int__* t996 = this993;
    struct std___Deque_iterator_int__int____int___ r997 = std__deque_int__std__allocator_int_____begin(t996);
    agg_tmp0994 = r997;
    struct std___Deque_iterator_int__int____int___ r998 = std__deque_int__std__allocator_int_____end(t996);
    agg_tmp1995 = r998;
    struct std___Deque_base_int__std__allocator_int__* base999 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t996 + 0);
    struct std__allocator_int_* r1000 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base999);
    struct std___Deque_iterator_int__int____int___ t1001 = agg_tmp0994;
    struct std___Deque_iterator_int__int____int___ t1002 = agg_tmp1995;
    std__deque_int__std__allocator_int______M_destroy_data(t996, t1001, t1002, r1000);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base1003 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t996 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base1003);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base1004 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t996 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base1004);
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1005: ;
  _Bool __retval1006;
    _Bool c1007 = 0;
    __retval1006 = c1007;
    _Bool t1008 = __retval1006;
    return t1008;
  abort();
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1009) {
bb1010: ;
  int* __location1011;
  __location1011 = v1009;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1012, int* v1013) {
bb1014: ;
  int* __first1015;
  int* __last1016;
  __first1015 = v1012;
  __last1016 = v1013;
      _Bool r1017 = std____is_constant_evaluated();
      if (r1017) {
          while (1) {
            int* t1019 = __first1015;
            int* t1020 = __last1016;
            _Bool c1021 = ((t1019 != t1020)) ? 1 : 0;
            if (!c1021) break;
            int* t1022 = __first1015;
            void_std__destroy_at_int_(t1022);
            if (__cir_exc_active) {
              return;
            }
          for_step1018: ;
            int* t1023 = __first1015;
            int c1024 = 1;
            int* ptr1025 = &(t1023)[c1024];
            __first1015 = ptr1025;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1026, int* v1027, struct std__allocator_int_* v1028) {
bb1029: ;
  int* __first1030;
  int* __last1031;
  struct std__allocator_int_* unnamed1032;
  __first1030 = v1026;
  __last1031 = v1027;
  unnamed1032 = v1028;
  int* t1033 = __first1030;
  int* t1034 = __last1031;
  void_std___Destroy_int__(t1033, t1034);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v1035) {
bb1036: ;
  unsigned long __size1037;
  unsigned long __retval1038;
  __size1037 = v1035;
  unsigned long t1039 = __size1037;
  unsigned long c1040 = 512;
  _Bool c1041 = ((t1039 < c1040)) ? 1 : 0;
  unsigned long ternary1042;
  if (c1041) {
    unsigned long c1043 = 512;
    unsigned long t1044 = __size1037;
    unsigned long b1045 = c1043 / t1044;
    ternary1042 = (unsigned long)b1045;
  } else {
    unsigned long c1046 = 1;
    ternary1042 = (unsigned long)c1046;
  }
  __retval1038 = ternary1042;
  unsigned long t1047 = __retval1038;
  return t1047;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb1048: ;
  unsigned long __retval1049;
  unsigned long c1050 = 4;
  unsigned long r1051 = std____deque_buf_size(c1050);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1049 = r1051;
  unsigned long t1052 = __retval1049;
  return t1052;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v1053, struct std___Deque_iterator_int__int____int___ v1054, struct std___Deque_iterator_int__int____int___ v1055) {
bb1056: ;
  struct std__deque_int__std__allocator_int__* this1057;
  struct std___Deque_iterator_int__int____int___ __first1058;
  struct std___Deque_iterator_int__int____int___ __last1059;
  this1057 = v1053;
  __first1058 = v1054;
  __last1059 = v1055;
  struct std__deque_int__std__allocator_int__* t1060 = this1057;
    int** __node1061;
    int** t1062 = __first1058._M_node;
    int c1063 = 1;
    int** ptr1064 = &(t1062)[c1063];
    __node1061 = ptr1064;
    while (1) {
      int** t1066 = __node1061;
      int** t1067 = __last1059._M_node;
      _Bool c1068 = ((t1066 < t1067)) ? 1 : 0;
      if (!c1068) break;
      int** t1069 = __node1061;
      int* t1070 = *t1069;
      int** t1071 = __node1061;
      int* t1072 = *t1071;
      unsigned long r1073 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr1074 = &(t1072)[r1073];
      struct std___Deque_base_int__std__allocator_int__* base1075 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1060 + 0);
      struct std__allocator_int_* r1076 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1075);
      void_std___Destroy_int___int_(t1070, ptr1074, r1076);
      if (__cir_exc_active) {
        return;
      }
    for_step1065: ;
      int** t1077 = __node1061;
      int c1078 = 1;
      int** ptr1079 = &(t1077)[c1078];
      __node1061 = ptr1079;
    }
    int** t1080 = __first1058._M_node;
    int** t1081 = __last1059._M_node;
    _Bool c1082 = ((t1080 != t1081)) ? 1 : 0;
    if (c1082) {
      int* t1083 = __first1058._M_cur;
      int* t1084 = __first1058._M_last;
      struct std___Deque_base_int__std__allocator_int__* base1085 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1060 + 0);
      struct std__allocator_int_* r1086 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1085);
      void_std___Destroy_int___int_(t1083, t1084, r1086);
      if (__cir_exc_active) {
        return;
      }
      int* t1087 = __last1059._M_first;
      int* t1088 = __last1059._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1089 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1060 + 0);
      struct std__allocator_int_* r1090 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1089);
      void_std___Destroy_int___int_(t1087, t1088, r1090);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t1091 = __first1058._M_cur;
      int* t1092 = __last1059._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1093 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1060 + 0);
      struct std__allocator_int_* r1094 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1093);
      void_std___Destroy_int___int_(t1091, t1092, r1094);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v1095, struct std___Deque_iterator_int__int____int___* v1096) {
bb1097: ;
  struct std___Deque_iterator_int__int____int___* this1098;
  struct std___Deque_iterator_int__int____int___* __x1099;
  this1098 = v1095;
  __x1099 = v1096;
  struct std___Deque_iterator_int__int____int___* t1100 = this1098;
  struct std___Deque_iterator_int__int____int___* t1101 = __x1099;
  int* t1102 = t1101->_M_cur;
  t1100->_M_cur = t1102;
  struct std___Deque_iterator_int__int____int___* t1103 = __x1099;
  int* t1104 = t1103->_M_first;
  t1100->_M_first = t1104;
  struct std___Deque_iterator_int__int____int___* t1105 = __x1099;
  int* t1106 = t1105->_M_last;
  t1100->_M_last = t1106;
  struct std___Deque_iterator_int__int____int___* t1107 = __x1099;
  int** t1108 = t1107->_M_node;
  t1100->_M_node = t1108;
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v1109, struct std___Deque_iterator_int__int____int___ v1110, struct std___Deque_iterator_int__int____int___ v1111, struct std__allocator_int_* v1112) {
bb1113: ;
  struct std__deque_int__std__allocator_int__* this1114;
  struct std___Deque_iterator_int__int____int___ __first1115;
  struct std___Deque_iterator_int__int____int___ __last1116;
  struct std__allocator_int_* unnamed1117;
  this1114 = v1109;
  __first1115 = v1110;
  __last1116 = v1111;
  unnamed1117 = v1112;
  struct std__deque_int__std__allocator_int__* t1118 = this1114;
    _Bool c1119 = 0;
    if (c1119) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01120;
      struct std___Deque_iterator_int__int____int___ agg_tmp11121;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01120, &__first1115);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11121, &__last1116);
      struct std___Deque_iterator_int__int____int___ t1122 = agg_tmp01120;
      struct std___Deque_iterator_int__int____int___ t1123 = agg_tmp11121;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t1118, t1122, t1123);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v1124) {
bb1125: ;
  struct std__deque_int__std__allocator_int__* this1126;
  struct std___Deque_iterator_int__int____int___ __retval1127;
  this1126 = v1124;
  struct std__deque_int__std__allocator_int__* t1128 = this1126;
  struct std___Deque_base_int__std__allocator_int__* base1129 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1128 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1130 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1129->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1127, &base1130->_M_start);
  struct std___Deque_iterator_int__int____int___ t1131 = __retval1127;
  return t1131;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v1132) {
bb1133: ;
  struct std__deque_int__std__allocator_int__* this1134;
  struct std___Deque_iterator_int__int____int___ __retval1135;
  this1134 = v1132;
  struct std__deque_int__std__allocator_int__* t1136 = this1134;
  struct std___Deque_base_int__std__allocator_int__* base1137 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1136 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1138 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1137->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1135, &base1138->_M_finish);
  struct std___Deque_iterator_int__int____int___ t1139 = __retval1135;
  return t1139;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v1140) {
bb1141: ;
  struct std___Deque_base_int__std__allocator_int__* this1142;
  struct std__allocator_int_* __retval1143;
  this1142 = v1140;
  struct std___Deque_base_int__std__allocator_int__* t1144 = this1142;
  struct std__allocator_int_* base1145 = (struct std__allocator_int_*)((char *)&(t1144->_M_impl) + 0);
  __retval1143 = base1145;
  struct std__allocator_int_* t1146 = __retval1143;
  return t1146;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1147, int* v1148, unsigned long v1149) {
bb1150: ;
  struct std____new_allocator_int_* this1151;
  int* __p1152;
  unsigned long __n1153;
  this1151 = v1147;
  __p1152 = v1148;
  __n1153 = v1149;
  struct std____new_allocator_int_* t1154 = this1151;
    unsigned long c1155 = 4;
    unsigned long c1156 = 16;
    _Bool c1157 = ((c1155 > c1156)) ? 1 : 0;
    if (c1157) {
      int* t1158 = __p1152;
      void* cast1159 = (void*)t1158;
      unsigned long t1160 = __n1153;
      unsigned long c1161 = 4;
      unsigned long b1162 = t1160 * c1161;
      unsigned long c1163 = 4;
      operator_delete_3(cast1159, b1162, c1163);
      return;
    }
  int* t1164 = __p1152;
  void* cast1165 = (void*)t1164;
  unsigned long t1166 = __n1153;
  unsigned long c1167 = 4;
  unsigned long b1168 = t1166 * c1167;
  operator_delete_2(cast1165, b1168);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1169, int* v1170, unsigned long v1171) {
bb1172: ;
  struct std__allocator_int_* this1173;
  int* __p1174;
  unsigned long __n1175;
  this1173 = v1169;
  __p1174 = v1170;
  __n1175 = v1171;
  struct std__allocator_int_* t1176 = this1173;
    _Bool r1177 = std____is_constant_evaluated();
    if (r1177) {
      int* t1178 = __p1174;
      void* cast1179 = (void*)t1178;
      operator_delete(cast1179);
      return;
    }
  struct std____new_allocator_int_* base1180 = (struct std____new_allocator_int_*)((char *)t1176 + 0);
  int* t1181 = __p1174;
  unsigned long t1182 = __n1175;
  std____new_allocator_int___deallocate(base1180, t1181, t1182);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1183, int* v1184, unsigned long v1185) {
bb1186: ;
  struct std__allocator_int_* __a1187;
  int* __p1188;
  unsigned long __n1189;
  __a1187 = v1183;
  __p1188 = v1184;
  __n1189 = v1185;
  struct std__allocator_int_* t1190 = __a1187;
  int* t1191 = __p1188;
  unsigned long t1192 = __n1189;
  std__allocator_int___deallocate(t1190, t1191, t1192);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v1193, int* v1194) {
bb1195: ;
  struct std___Deque_base_int__std__allocator_int__* this1196;
  int* __p1197;
  this1196 = v1193;
  __p1197 = v1194;
  struct std___Deque_base_int__std__allocator_int__* t1198 = this1196;
  struct std__allocator_int_* base1199 = (struct std__allocator_int_*)((char *)&(t1198->_M_impl) + 0);
  int* t1200 = __p1197;
  unsigned long c1201 = 4;
  unsigned long r1202 = std____deque_buf_size(c1201);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base1199, t1200, r1202);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v1203, int** v1204, int** v1205) {
bb1206: ;
  struct std___Deque_base_int__std__allocator_int__* this1207;
  int** __nstart1208;
  int** __nfinish1209;
  this1207 = v1203;
  __nstart1208 = v1204;
  __nfinish1209 = v1205;
  struct std___Deque_base_int__std__allocator_int__* t1210 = this1207;
    int** __n1211;
    int** t1212 = __nstart1208;
    __n1211 = t1212;
    while (1) {
      int** t1214 = __n1211;
      int** t1215 = __nfinish1209;
      _Bool c1216 = ((t1214 < t1215)) ? 1 : 0;
      if (!c1216) break;
      int** t1217 = __n1211;
      int* t1218 = *t1217;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t1210, t1218);
    for_step1213: ;
      int** t1219 = __n1211;
      int c1220 = 1;
      int** ptr1221 = &(t1219)[c1220];
      __n1211 = ptr1221;
    }
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1222) {
bb1223: ;
  struct std___Deque_base_int__std__allocator_int__* this1224;
  struct std__allocator_int_* __retval1225;
  this1224 = v1222;
  struct std___Deque_base_int__std__allocator_int__* t1226 = this1224;
  struct std__allocator_int_* base1227 = (struct std__allocator_int_*)((char *)&(t1226->_M_impl) + 0);
  __retval1225 = base1227;
  struct std__allocator_int_* t1228 = __retval1225;
  return t1228;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v1229, struct std__allocator_int_* v1230) {
bb1231: ;
  struct std__allocator_int___* this1232;
  struct std__allocator_int_* unnamed1233;
  this1232 = v1229;
  unnamed1233 = v1230;
  struct std__allocator_int___* t1234 = this1232;
  struct std____new_allocator_int___* base1235 = (struct std____new_allocator_int___*)((char *)t1234 + 0);
  std____new_allocator_int______new_allocator(base1235);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1236) {
bb1237: ;
  struct std___Deque_base_int__std__allocator_int__* this1238;
  struct std__allocator_int___ __retval1239;
  this1238 = v1236;
  struct std___Deque_base_int__std__allocator_int__* t1240 = this1238;
  struct std__allocator_int_* r1241 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t1240);
  std__allocator_int____allocator_int_(&__retval1239, r1241);
  struct std__allocator_int___ t1242 = __retval1239;
  return t1242;
}

// function: _ZNSt15__new_allocatorIPiE10deallocateEPS0_m
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v1243, int** v1244, unsigned long v1245) {
bb1246: ;
  struct std____new_allocator_int___* this1247;
  int** __p1248;
  unsigned long __n1249;
  this1247 = v1243;
  __p1248 = v1244;
  __n1249 = v1245;
  struct std____new_allocator_int___* t1250 = this1247;
    unsigned long c1251 = 8;
    unsigned long c1252 = 16;
    _Bool c1253 = ((c1251 > c1252)) ? 1 : 0;
    if (c1253) {
      int** t1254 = __p1248;
      void* cast1255 = (void*)t1254;
      unsigned long t1256 = __n1249;
      unsigned long c1257 = 8;
      unsigned long b1258 = t1256 * c1257;
      unsigned long c1259 = 8;
      operator_delete_3(cast1255, b1258, c1259);
      return;
    }
  int** t1260 = __p1248;
  void* cast1261 = (void*)t1260;
  unsigned long t1262 = __n1249;
  unsigned long c1263 = 8;
  unsigned long b1264 = t1262 * c1263;
  operator_delete_2(cast1261, b1264);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v1265, int** v1266, unsigned long v1267) {
bb1268: ;
  struct std__allocator_int___* this1269;
  int** __p1270;
  unsigned long __n1271;
  this1269 = v1265;
  __p1270 = v1266;
  __n1271 = v1267;
  struct std__allocator_int___* t1272 = this1269;
    _Bool r1273 = std____is_constant_evaluated();
    if (r1273) {
      int** t1274 = __p1270;
      void* cast1275 = (void*)t1274;
      operator_delete(cast1275);
      return;
    }
  struct std____new_allocator_int___* base1276 = (struct std____new_allocator_int___*)((char *)t1272 + 0);
  int** t1277 = __p1270;
  unsigned long t1278 = __n1271;
  std____new_allocator_int____deallocate(base1276, t1277, t1278);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v1279, int** v1280, unsigned long v1281) {
bb1282: ;
  struct std__allocator_int___* __a1283;
  int** __p1284;
  unsigned long __n1285;
  __a1283 = v1279;
  __p1284 = v1280;
  __n1285 = v1281;
  struct std__allocator_int___* t1286 = __a1283;
  int** t1287 = __p1284;
  unsigned long t1288 = __n1285;
  std__allocator_int____deallocate(t1286, t1287, t1288);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v1289, int** v1290, unsigned long v1291) {
bb1292: ;
  struct std___Deque_base_int__std__allocator_int__* this1293;
  int** __p1294;
  unsigned long __n1295;
  struct std__allocator_int___ __map_alloc1296;
  this1293 = v1289;
  __p1294 = v1290;
  __n1295 = v1291;
  struct std___Deque_base_int__std__allocator_int__* t1297 = this1293;
  struct std__allocator_int___ r1298 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1297);
  __map_alloc1296 = r1298;
  int** t1299 = __p1294;
  unsigned long t1300 = __n1295;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc1296, t1299, t1300);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1301) {
bb1302: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1303;
  this1303 = v1301;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1304 = this1303;
  {
    struct std__allocator_int_* base1305 = (struct std__allocator_int_*)((char *)t1304 + 0);
    std__allocator_int____allocator(base1305);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1306) {
bb1307: ;
  struct std___Deque_base_int__std__allocator_int__* this1308;
  this1308 = v1306;
  struct std___Deque_base_int__std__allocator_int__* t1309 = this1308;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1310 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1309->_M_impl) + 0);
      int** t1311 = base1310->_M_map;
      _Bool cast1312 = (_Bool)t1311;
      if (cast1312) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1313 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1309->_M_impl) + 0);
        int** t1314 = base1313->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1315 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1309->_M_impl) + 0);
        int** t1316 = base1315->_M_finish._M_node;
        int c1317 = 1;
        int** ptr1318 = &(t1316)[c1317];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1309, t1314, ptr1318);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1319 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1309->_M_impl) + 0);
        int** t1320 = base1319->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1321 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1309->_M_impl) + 0);
        unsigned long t1322 = base1321->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1309, t1320, t1322);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1309->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1323) {
bb1324: ;
  struct std____new_allocator_int___* this1325;
  this1325 = v1323;
  struct std____new_allocator_int___* t1326 = this1325;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1327) {
bb1328: ;
  struct std__allocator_int_* this1329;
  this1329 = v1327;
  struct std__allocator_int_* t1330 = this1329;
  return;
}

// function: _ZNSt5dequeIiSaIiEEC2Ev
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* v1331) {
bb1332: ;
  struct std__deque_int__std__allocator_int__* this1333;
  this1333 = v1331;
  struct std__deque_int__std__allocator_int__* t1334 = this1333;
  struct std___Deque_base_int__std__allocator_int__* base1335 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1334 + 0);
  std___Deque_base_int__std__allocator_int______Deque_base(base1335);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1336) {
bb1337: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1338;
  this1338 = v1336;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1339 = this1338;
  struct std__allocator_int_* base1340 = (struct std__allocator_int_*)((char *)t1339 + 0);
  std__allocator_int___allocator(base1340);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1341 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t1339 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base1341);
  return;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v1342, unsigned long* v1343) {
bb1344: ;
  unsigned long* __a1345;
  unsigned long* __b1346;
  unsigned long* __retval1347;
  __a1345 = v1342;
  __b1346 = v1343;
    unsigned long* t1348 = __a1345;
    unsigned long t1349 = *t1348;
    unsigned long* t1350 = __b1346;
    unsigned long t1351 = *t1350;
    _Bool c1352 = ((t1349 < t1351)) ? 1 : 0;
    if (c1352) {
      unsigned long* t1353 = __b1346;
      __retval1347 = t1353;
      unsigned long* t1354 = __retval1347;
      return t1354;
    }
  unsigned long* t1355 = __a1345;
  __retval1347 = t1355;
  unsigned long* t1356 = __retval1347;
  return t1356;
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v1357) {
bb1358: ;
  struct std____new_allocator_int___* this1359;
  unsigned long __retval1360;
  this1359 = v1357;
  struct std____new_allocator_int___* t1361 = this1359;
  unsigned long c1362 = 9223372036854775807;
  unsigned long c1363 = 8;
  unsigned long b1364 = c1362 / c1363;
  __retval1360 = b1364;
  unsigned long t1365 = __retval1360;
  return t1365;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v1366, unsigned long v1367, void* v1368) {
bb1369: ;
  struct std____new_allocator_int___* this1370;
  unsigned long __n1371;
  void* unnamed1372;
  int** __retval1373;
  this1370 = v1366;
  __n1371 = v1367;
  unnamed1372 = v1368;
  struct std____new_allocator_int___* t1374 = this1370;
    unsigned long t1375 = __n1371;
    unsigned long r1376 = std____new_allocator_int_____M_max_size___const(t1374);
    _Bool c1377 = ((t1375 > r1376)) ? 1 : 0;
    if (c1377) {
        unsigned long t1378 = __n1371;
        unsigned long c1379 = -1;
        unsigned long c1380 = 8;
        unsigned long b1381 = c1379 / c1380;
        _Bool c1382 = ((t1378 > b1381)) ? 1 : 0;
        if (c1382) {
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
    unsigned long c1383 = 8;
    unsigned long c1384 = 16;
    _Bool c1385 = ((c1383 > c1384)) ? 1 : 0;
    if (c1385) {
      unsigned long __al1386;
      unsigned long c1387 = 8;
      __al1386 = c1387;
      unsigned long t1388 = __n1371;
      unsigned long c1389 = 8;
      unsigned long b1390 = t1388 * c1389;
      unsigned long t1391 = __al1386;
      void* r1392 = operator_new_2(b1390, t1391);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1393 = (int**)r1392;
      __retval1373 = cast1393;
      int** t1394 = __retval1373;
      return t1394;
    }
  unsigned long t1395 = __n1371;
  unsigned long c1396 = 8;
  unsigned long b1397 = t1395 * c1396;
  void* r1398 = operator_new(b1397);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast1399 = (int**)r1398;
  __retval1373 = cast1399;
  int** t1400 = __retval1373;
  return t1400;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v1401, unsigned long v1402) {
bb1403: ;
  struct std__allocator_int___* this1404;
  unsigned long __n1405;
  int** __retval1406;
  this1404 = v1401;
  __n1405 = v1402;
  struct std__allocator_int___* t1407 = this1404;
    _Bool r1408 = std____is_constant_evaluated();
    if (r1408) {
        unsigned long t1409 = __n1405;
        unsigned long c1410 = 8;
        unsigned long ovr1411;
        _Bool ovf1412 = __builtin_mul_overflow(t1409, c1410, &ovr1411);
        __n1405 = ovr1411;
        if (ovf1412) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1413 = __n1405;
      void* r1414 = operator_new(t1413);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1415 = (int**)r1414;
      __retval1406 = cast1415;
      int** t1416 = __retval1406;
      return t1416;
    }
  struct std____new_allocator_int___* base1417 = (struct std____new_allocator_int___*)((char *)t1407 + 0);
  unsigned long t1418 = __n1405;
  void* c1419 = ((void*)0);
  int** r1420 = std____new_allocator_int____allocate(base1417, t1418, c1419);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1406 = r1420;
  int** t1421 = __retval1406;
  return t1421;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v1422, unsigned long v1423) {
bb1424: ;
  struct std__allocator_int___* __a1425;
  unsigned long __n1426;
  int** __retval1427;
  __a1425 = v1422;
  __n1426 = v1423;
  struct std__allocator_int___* t1428 = __a1425;
  unsigned long t1429 = __n1426;
  int** r1430 = std__allocator_int____allocate(t1428, t1429);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1427 = r1430;
  int** t1431 = __retval1427;
  return t1431;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v1432, unsigned long v1433) {
bb1434: ;
  struct std___Deque_base_int__std__allocator_int__* this1435;
  unsigned long __n1436;
  int** __retval1437;
  struct std__allocator_int___ __map_alloc1438;
  this1435 = v1432;
  __n1436 = v1433;
  struct std___Deque_base_int__std__allocator_int__* t1439 = this1435;
  struct std__allocator_int___ r1440 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1439);
  __map_alloc1438 = r1440;
  unsigned long t1441 = __n1436;
  int** r1442 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc1438, t1441);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1437 = r1442;
  int** t1443 = __retval1437;
  return t1443;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1444) {
bb1445: ;
  struct std____new_allocator_int_* this1446;
  unsigned long __retval1447;
  this1446 = v1444;
  struct std____new_allocator_int_* t1448 = this1446;
  unsigned long c1449 = 9223372036854775807;
  unsigned long c1450 = 4;
  unsigned long b1451 = c1449 / c1450;
  __retval1447 = b1451;
  unsigned long t1452 = __retval1447;
  return t1452;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1453, unsigned long v1454, void* v1455) {
bb1456: ;
  struct std____new_allocator_int_* this1457;
  unsigned long __n1458;
  void* unnamed1459;
  int* __retval1460;
  this1457 = v1453;
  __n1458 = v1454;
  unnamed1459 = v1455;
  struct std____new_allocator_int_* t1461 = this1457;
    unsigned long t1462 = __n1458;
    unsigned long r1463 = std____new_allocator_int____M_max_size___const(t1461);
    _Bool c1464 = ((t1462 > r1463)) ? 1 : 0;
    if (c1464) {
        unsigned long t1465 = __n1458;
        unsigned long c1466 = -1;
        unsigned long c1467 = 4;
        unsigned long b1468 = c1466 / c1467;
        _Bool c1469 = ((t1465 > b1468)) ? 1 : 0;
        if (c1469) {
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
    unsigned long c1470 = 4;
    unsigned long c1471 = 16;
    _Bool c1472 = ((c1470 > c1471)) ? 1 : 0;
    if (c1472) {
      unsigned long __al1473;
      unsigned long c1474 = 4;
      __al1473 = c1474;
      unsigned long t1475 = __n1458;
      unsigned long c1476 = 4;
      unsigned long b1477 = t1475 * c1476;
      unsigned long t1478 = __al1473;
      void* r1479 = operator_new_2(b1477, t1478);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1480 = (int*)r1479;
      __retval1460 = cast1480;
      int* t1481 = __retval1460;
      return t1481;
    }
  unsigned long t1482 = __n1458;
  unsigned long c1483 = 4;
  unsigned long b1484 = t1482 * c1483;
  void* r1485 = operator_new(b1484);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast1486 = (int*)r1485;
  __retval1460 = cast1486;
  int* t1487 = __retval1460;
  return t1487;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1488, unsigned long v1489) {
bb1490: ;
  struct std__allocator_int_* this1491;
  unsigned long __n1492;
  int* __retval1493;
  this1491 = v1488;
  __n1492 = v1489;
  struct std__allocator_int_* t1494 = this1491;
    _Bool r1495 = std____is_constant_evaluated();
    if (r1495) {
        unsigned long t1496 = __n1492;
        unsigned long c1497 = 4;
        unsigned long ovr1498;
        _Bool ovf1499 = __builtin_mul_overflow(t1496, c1497, &ovr1498);
        __n1492 = ovr1498;
        if (ovf1499) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1500 = __n1492;
      void* r1501 = operator_new(t1500);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1502 = (int*)r1501;
      __retval1493 = cast1502;
      int* t1503 = __retval1493;
      return t1503;
    }
  struct std____new_allocator_int_* base1504 = (struct std____new_allocator_int_*)((char *)t1494 + 0);
  unsigned long t1505 = __n1492;
  void* c1506 = ((void*)0);
  int* r1507 = std____new_allocator_int___allocate(base1504, t1505, c1506);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1493 = r1507;
  int* t1508 = __retval1493;
  return t1508;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1509, unsigned long v1510) {
bb1511: ;
  struct std__allocator_int_* __a1512;
  unsigned long __n1513;
  int* __retval1514;
  __a1512 = v1509;
  __n1513 = v1510;
  struct std__allocator_int_* t1515 = __a1512;
  unsigned long t1516 = __n1513;
  int* r1517 = std__allocator_int___allocate(t1515, t1516);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1514 = r1517;
  int* t1518 = __retval1514;
  return t1518;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v1519) {
bb1520: ;
  struct std___Deque_base_int__std__allocator_int__* this1521;
  int* __retval1522;
  this1521 = v1519;
  struct std___Deque_base_int__std__allocator_int__* t1523 = this1521;
  struct std__allocator_int_* base1524 = (struct std__allocator_int_*)((char *)&(t1523->_M_impl) + 0);
  unsigned long c1525 = 4;
  unsigned long r1526 = std____deque_buf_size(c1525);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r1527 = std__allocator_traits_std__allocator_int_____allocate(base1524, r1526);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1522 = r1527;
  int* t1528 = __retval1522;
  return t1528;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v1529, int** v1530, int** v1531) {
bb1532: ;
  struct std___Deque_base_int__std__allocator_int__* this1533;
  int** __nstart1534;
  int** __nfinish1535;
  int** __cur1536;
  this1533 = v1529;
  __nstart1534 = v1530;
  __nfinish1535 = v1531;
  struct std___Deque_base_int__std__allocator_int__* t1537 = this1533;
        int** t1539 = __nstart1534;
        __cur1536 = t1539;
        while (1) {
          int** t1541 = __cur1536;
          int** t1542 = __nfinish1535;
          _Bool c1543 = ((t1541 < t1542)) ? 1 : 0;
          if (!c1543) break;
          int* r1544 = std___Deque_base_int__std__allocator_int______M_allocate_node(t1537);
          if (__cir_exc_active) {
            goto cir_try_dispatch1538;
          }
          int** t1545 = __cur1536;
          *t1545 = r1544;
        for_step1540: ;
          int** t1546 = __cur1536;
          int c1547 = 1;
          int** ptr1548 = &(t1546)[c1547];
          __cur1536 = ptr1548;
        }
    cir_try_dispatch1538: ;
    if (__cir_exc_active) {
    {
      int ca_tok1549 = 0;
      void* ca_exn1550 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t1551 = __nstart1534;
        int** t1552 = __cur1536;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1537, t1551, t1552);
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
bb1553: ;
  unsigned long __retval1554;
  unsigned long c1555 = 4;
  unsigned long r1556 = std____deque_buf_size(c1555);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1554 = r1556;
  unsigned long t1557 = __retval1554;
  return t1557;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v1558, int** v1559) {
bb1560: ;
  struct std___Deque_iterator_int__int____int___* this1561;
  int** __new_node1562;
  this1561 = v1558;
  __new_node1562 = v1559;
  struct std___Deque_iterator_int__int____int___* t1563 = this1561;
  int** t1564 = __new_node1562;
  t1563->_M_node = t1564;
  int** t1565 = __new_node1562;
  int* t1566 = *t1565;
  t1563->_M_first = t1566;
  int* t1567 = t1563->_M_first;
  unsigned long r1568 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1569 = (long)r1568;
  int* ptr1570 = &(t1567)[cast1569];
  t1563->_M_last = ptr1570;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v1571, unsigned long v1572) {
bb1573: ;
  struct std___Deque_base_int__std__allocator_int__* this1574;
  unsigned long __num_elements1575;
  unsigned long __num_nodes1576;
  unsigned long ref_tmp01577;
  unsigned long ref_tmp11578;
  int** __nstart1579;
  int** __nfinish1580;
  this1574 = v1571;
  __num_elements1575 = v1572;
  struct std___Deque_base_int__std__allocator_int__* t1581 = this1574;
  unsigned long t1582 = __num_elements1575;
  unsigned long c1583 = 4;
  unsigned long r1584 = std____deque_buf_size(c1583);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1585 = t1582 / r1584;
  unsigned long c1586 = 1;
  unsigned long b1587 = b1585 + c1586;
  __num_nodes1576 = b1587;
  unsigned long c1588 = 8;
  ref_tmp01577 = c1588;
  unsigned long t1589 = __num_nodes1576;
  unsigned long c1590 = 2;
  unsigned long b1591 = t1589 + c1590;
  ref_tmp11578 = b1591;
  unsigned long* r1592 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01577, &ref_tmp11578);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1593 = *r1592;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1594 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1581->_M_impl) + 0);
  base1594->_M_map_size = t1593;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1595 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1581->_M_impl) + 0);
  unsigned long t1596 = base1595->_M_map_size;
  int** r1597 = std___Deque_base_int__std__allocator_int______M_allocate_map(t1581, t1596);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1598 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1581->_M_impl) + 0);
  base1598->_M_map = r1597;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1599 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1581->_M_impl) + 0);
  int** t1600 = base1599->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1601 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1581->_M_impl) + 0);
  unsigned long t1602 = base1601->_M_map_size;
  unsigned long t1603 = __num_nodes1576;
  unsigned long b1604 = t1602 - t1603;
  unsigned long c1605 = 2;
  unsigned long b1606 = b1604 / c1605;
  int** ptr1607 = &(t1600)[b1606];
  __nstart1579 = ptr1607;
  int** t1608 = __nstart1579;
  unsigned long t1609 = __num_nodes1576;
  int** ptr1610 = &(t1608)[t1609];
  __nfinish1580 = ptr1610;
      int** t1612 = __nstart1579;
      int** t1613 = __nfinish1580;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t1581, t1612, t1613);
      if (__cir_exc_active) {
        goto cir_try_dispatch1611;
      }
    cir_try_dispatch1611: ;
    if (__cir_exc_active) {
    {
      int ca_tok1614 = 0;
      void* ca_exn1615 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1616 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1581->_M_impl) + 0);
        int** t1617 = base1616->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1618 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1581->_M_impl) + 0);
        unsigned long t1619 = base1618->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1581, t1617, t1619);
        int** c1620 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1621 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1581->_M_impl) + 0);
        base1621->_M_map = c1620;
        unsigned long c1622 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1623 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1581->_M_impl) + 0);
        base1623->_M_map_size = c1622;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1624 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1581->_M_impl) + 0);
  int** t1625 = __nstart1579;
  std___Deque_iterator_int__int___int_____M_set_node(&base1624->_M_start, t1625);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1626 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1581->_M_impl) + 0);
  int** t1627 = __nfinish1580;
  int c1628 = -1;
  int** ptr1629 = &(t1627)[c1628];
  std___Deque_iterator_int__int___int_____M_set_node(&base1626->_M_finish, ptr1629);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1630 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1581->_M_impl) + 0);
  int* t1631 = base1630->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1632 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1581->_M_impl) + 0);
  base1632->_M_start._M_cur = t1631;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1633 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1581->_M_impl) + 0);
  int* t1634 = base1633->_M_finish._M_first;
  unsigned long t1635 = __num_elements1575;
  unsigned long c1636 = 4;
  unsigned long r1637 = std____deque_buf_size(c1636);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1638 = t1635 % r1637;
  int* ptr1639 = &(t1634)[b1638];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1640 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1581->_M_impl) + 0);
  base1640->_M_finish._M_cur = ptr1639;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1641) {
bb1642: ;
  struct std___Deque_base_int__std__allocator_int__* this1643;
  this1643 = v1641;
  struct std___Deque_base_int__std__allocator_int__* t1644 = this1643;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1644->_M_impl);
    unsigned long c1645 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1644, c1645);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1644->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1646) {
bb1647: ;
  struct std____new_allocator_int_* this1648;
  this1648 = v1646;
  struct std____new_allocator_int_* t1649 = this1648;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1650) {
bb1651: ;
  struct std__allocator_int_* this1652;
  this1652 = v1650;
  struct std__allocator_int_* t1653 = this1652;
  struct std____new_allocator_int_* base1654 = (struct std____new_allocator_int_*)((char *)t1653 + 0);
  std____new_allocator_int_____new_allocator(base1654);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1655) {
bb1656: ;
  struct std___Deque_iterator_int__int____int___* this1657;
  this1657 = v1655;
  struct std___Deque_iterator_int__int____int___* t1658 = this1657;
  int* c1659 = ((void*)0);
  t1658->_M_cur = c1659;
  int* c1660 = ((void*)0);
  t1658->_M_first = c1660;
  int* c1661 = ((void*)0);
  t1658->_M_last = c1661;
  int** c1662 = ((void*)0);
  t1658->_M_node = c1662;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1663) {
bb1664: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1665;
  this1665 = v1663;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1666 = this1665;
  int** c1667 = ((void*)0);
  t1666->_M_map = c1667;
  unsigned long c1668 = 0;
  t1666->_M_map_size = c1668;
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1666->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1666->_M_finish);
  return;
}

