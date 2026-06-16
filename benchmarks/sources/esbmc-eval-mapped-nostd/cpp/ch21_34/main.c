extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____new_allocator_int___ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };
struct std__stack_int__std__deque_int__std__allocator_int___ { struct std__deque_int__std__allocator_int__ c; };

char _str[18] = "mystack.top()==20";
char _str_1[99] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch21_34/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[48] = "cannot create std::deque larger than max_size()";
char _str_3[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_4[15] = "!this->empty()";
char _str_5[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_stack.h";
char __PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3topEv[74] = "reference std::stack<int>::top() [_Tp = int, _Sequence = std::deque<int>]";
void std__stack_int__std__deque_int__std__allocator_int_______stack_std__deque_int__std__allocator_int_____void_(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
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
void std__stack_int__std__deque_int__std__allocator_int_______push(struct std__stack_int__std__deque_int__std__allocator_int___* p0, int* p1);
_Bool std__stack_int__std__deque_int__std__allocator_int_______empty___const(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
int* std__stack_int__std__deque_int__std__allocator_int_______top(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
      char* cast584 = (char*)&(_str_2);
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
            char* cast674 = (char*)&(_str_3);
            int c675 = 1537;
            char* cast676 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv);
            char* cast677 = (char*)&(_str_4);
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

// function: _ZNSt5stackIiSt5dequeIiSaIiEEE4pushEOi
void std__stack_int__std__deque_int__std__allocator_int_______push(struct std__stack_int__std__deque_int__std__allocator_int___* v721, int* v722) {
bb723: ;
  struct std__stack_int__std__deque_int__std__allocator_int___* this724;
  int* __x725;
  this724 = v721;
  __x725 = v722;
  struct std__stack_int__std__deque_int__std__allocator_int___* t726 = this724;
  int* t727 = __x725;
  std__deque_int__std__allocator_int_____push_back(&t726->c, t727);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNKSt5stackIiSt5dequeIiSaIiEEE5emptyEv
_Bool std__stack_int__std__deque_int__std__allocator_int_______empty___const(struct std__stack_int__std__deque_int__std__allocator_int___* v728) {
bb729: ;
  struct std__stack_int__std__deque_int__std__allocator_int___* this730;
  _Bool __retval731;
  this730 = v728;
  struct std__stack_int__std__deque_int__std__allocator_int___* t732 = this730;
  _Bool r733 = std__deque_int__std__allocator_int_____empty___const(&t732->c);
  __retval731 = r733;
  _Bool t734 = __retval731;
  return t734;
}

// function: _ZNSt5stackIiSt5dequeIiSaIiEEE3topEv
int* std__stack_int__std__deque_int__std__allocator_int_______top(struct std__stack_int__std__deque_int__std__allocator_int___* v735) {
bb736: ;
  struct std__stack_int__std__deque_int__std__allocator_int___* this737;
  int* __retval738;
  this737 = v735;
  struct std__stack_int__std__deque_int__std__allocator_int___* t739 = this737;
    do {
          _Bool r740 = std__stack_int__std__deque_int__std__allocator_int_______empty___const(t739);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          if (r740) {
            char* cast741 = (char*)&(_str_5);
            int c742 = 260;
            char* cast743 = (char*)&(__PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3topEv);
            char* cast744 = (char*)&(_str_4);
            std____glibcxx_assert_fail(cast741, c742, cast743, cast744);
          }
      _Bool c745 = 0;
      if (!c745) break;
    } while (1);
  int* r746 = std__deque_int__std__allocator_int_____back(&t739->c);
  __retval738 = r746;
  int* t747 = __retval738;
  return t747;
}

// function: _ZNSt5stackIiSt5dequeIiSaIiEEED2Ev
void std__stack_int__std__deque_int__std__allocator_int________stack(struct std__stack_int__std__deque_int__std__allocator_int___* v748) {
bb749: ;
  struct std__stack_int__std__deque_int__std__allocator_int___* this750;
  this750 = v748;
  struct std__stack_int__std__deque_int__std__allocator_int___* t751 = this750;
  {
    std__deque_int__std__allocator_int______deque(&t751->c);
  }
  return;
}

// function: main
int main() {
bb752: ;
  int __retval753;
  struct std__stack_int__std__deque_int__std__allocator_int___ mystack754;
  int ref_tmp0755;
  int ref_tmp1756;
  int c757 = 0;
  __retval753 = c757;
  std__stack_int__std__deque_int__std__allocator_int_______stack_std__deque_int__std__allocator_int_____void_(&mystack754);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    int c758 = 10;
    ref_tmp0755 = c758;
    std__stack_int__std__deque_int__std__allocator_int_______push(&mystack754, &ref_tmp0755);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&mystack754);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c759 = 20;
    ref_tmp1756 = c759;
    std__stack_int__std__deque_int__std__allocator_int_______push(&mystack754, &ref_tmp1756);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&mystack754);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int* r760 = std__stack_int__std__deque_int__std__allocator_int_______top(&mystack754);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&mystack754);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t761 = *r760;
    int c762 = 20;
    _Bool c763 = ((t761 == c762)) ? 1 : 0;
    if (c763) {
    } else {
      char* cast764 = (char*)&(_str);
      char* c765 = (char*)_str_1;
      unsigned int c766 = 21;
      char* cast767 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast764, c765, c766, cast767);
    }
    int c768 = 0;
    __retval753 = c768;
    int t769 = __retval753;
    int ret_val770 = t769;
    {
      std__stack_int__std__deque_int__std__allocator_int________stack(&mystack754);
    }
    return ret_val770;
  int t771 = __retval753;
  return t771;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v772) {
bb773: ;
  struct std__deque_int__std__allocator_int__* this774;
  struct std___Deque_iterator_int__int____int___ agg_tmp0775;
  struct std___Deque_iterator_int__int____int___ agg_tmp1776;
  this774 = v772;
  struct std__deque_int__std__allocator_int__* t777 = this774;
    struct std___Deque_iterator_int__int____int___ r778 = std__deque_int__std__allocator_int_____begin(t777);
    agg_tmp0775 = r778;
    struct std___Deque_iterator_int__int____int___ r779 = std__deque_int__std__allocator_int_____end(t777);
    agg_tmp1776 = r779;
    struct std___Deque_base_int__std__allocator_int__* base780 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t777 + 0);
    struct std__allocator_int_* r781 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base780);
    struct std___Deque_iterator_int__int____int___ t782 = agg_tmp0775;
    struct std___Deque_iterator_int__int____int___ t783 = agg_tmp1776;
    std__deque_int__std__allocator_int______M_destroy_data(t777, t782, t783, r781);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base784 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t777 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base784);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base785 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t777 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base785);
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb786: ;
  _Bool __retval787;
    _Bool c788 = 0;
    __retval787 = c788;
    _Bool t789 = __retval787;
    return t789;
  abort();
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v790) {
bb791: ;
  int* __location792;
  __location792 = v790;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v793, int* v794) {
bb795: ;
  int* __first796;
  int* __last797;
  __first796 = v793;
  __last797 = v794;
      _Bool r798 = std____is_constant_evaluated();
      if (r798) {
          while (1) {
            int* t800 = __first796;
            int* t801 = __last797;
            _Bool c802 = ((t800 != t801)) ? 1 : 0;
            if (!c802) break;
            int* t803 = __first796;
            void_std__destroy_at_int_(t803);
            if (__cir_exc_active) {
              return;
            }
          for_step799: ;
            int* t804 = __first796;
            int c805 = 1;
            int* ptr806 = &(t804)[c805];
            __first796 = ptr806;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v807, int* v808, struct std__allocator_int_* v809) {
bb810: ;
  int* __first811;
  int* __last812;
  struct std__allocator_int_* unnamed813;
  __first811 = v807;
  __last812 = v808;
  unnamed813 = v809;
  int* t814 = __first811;
  int* t815 = __last812;
  void_std___Destroy_int__(t814, t815);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v816) {
bb817: ;
  unsigned long __size818;
  unsigned long __retval819;
  __size818 = v816;
  unsigned long t820 = __size818;
  unsigned long c821 = 512;
  _Bool c822 = ((t820 < c821)) ? 1 : 0;
  unsigned long ternary823;
  if (c822) {
    unsigned long c824 = 512;
    unsigned long t825 = __size818;
    unsigned long b826 = c824 / t825;
    ternary823 = (unsigned long)b826;
  } else {
    unsigned long c827 = 1;
    ternary823 = (unsigned long)c827;
  }
  __retval819 = ternary823;
  unsigned long t828 = __retval819;
  return t828;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb829: ;
  unsigned long __retval830;
  unsigned long c831 = 4;
  unsigned long r832 = std____deque_buf_size(c831);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval830 = r832;
  unsigned long t833 = __retval830;
  return t833;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v834, struct std___Deque_iterator_int__int____int___ v835, struct std___Deque_iterator_int__int____int___ v836) {
bb837: ;
  struct std__deque_int__std__allocator_int__* this838;
  struct std___Deque_iterator_int__int____int___ __first839;
  struct std___Deque_iterator_int__int____int___ __last840;
  this838 = v834;
  __first839 = v835;
  __last840 = v836;
  struct std__deque_int__std__allocator_int__* t841 = this838;
    int** __node842;
    int** t843 = __first839._M_node;
    int c844 = 1;
    int** ptr845 = &(t843)[c844];
    __node842 = ptr845;
    while (1) {
      int** t847 = __node842;
      int** t848 = __last840._M_node;
      _Bool c849 = ((t847 < t848)) ? 1 : 0;
      if (!c849) break;
      int** t850 = __node842;
      int* t851 = *t850;
      int** t852 = __node842;
      int* t853 = *t852;
      unsigned long r854 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr855 = &(t853)[r854];
      struct std___Deque_base_int__std__allocator_int__* base856 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t841 + 0);
      struct std__allocator_int_* r857 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base856);
      void_std___Destroy_int___int_(t851, ptr855, r857);
      if (__cir_exc_active) {
        return;
      }
    for_step846: ;
      int** t858 = __node842;
      int c859 = 1;
      int** ptr860 = &(t858)[c859];
      __node842 = ptr860;
    }
    int** t861 = __first839._M_node;
    int** t862 = __last840._M_node;
    _Bool c863 = ((t861 != t862)) ? 1 : 0;
    if (c863) {
      int* t864 = __first839._M_cur;
      int* t865 = __first839._M_last;
      struct std___Deque_base_int__std__allocator_int__* base866 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t841 + 0);
      struct std__allocator_int_* r867 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base866);
      void_std___Destroy_int___int_(t864, t865, r867);
      if (__cir_exc_active) {
        return;
      }
      int* t868 = __last840._M_first;
      int* t869 = __last840._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base870 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t841 + 0);
      struct std__allocator_int_* r871 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base870);
      void_std___Destroy_int___int_(t868, t869, r871);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t872 = __first839._M_cur;
      int* t873 = __last840._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base874 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t841 + 0);
      struct std__allocator_int_* r875 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base874);
      void_std___Destroy_int___int_(t872, t873, r875);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v876, struct std___Deque_iterator_int__int____int___* v877) {
bb878: ;
  struct std___Deque_iterator_int__int____int___* this879;
  struct std___Deque_iterator_int__int____int___* __x880;
  this879 = v876;
  __x880 = v877;
  struct std___Deque_iterator_int__int____int___* t881 = this879;
  struct std___Deque_iterator_int__int____int___* t882 = __x880;
  int* t883 = t882->_M_cur;
  t881->_M_cur = t883;
  struct std___Deque_iterator_int__int____int___* t884 = __x880;
  int* t885 = t884->_M_first;
  t881->_M_first = t885;
  struct std___Deque_iterator_int__int____int___* t886 = __x880;
  int* t887 = t886->_M_last;
  t881->_M_last = t887;
  struct std___Deque_iterator_int__int____int___* t888 = __x880;
  int** t889 = t888->_M_node;
  t881->_M_node = t889;
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v890, struct std___Deque_iterator_int__int____int___ v891, struct std___Deque_iterator_int__int____int___ v892, struct std__allocator_int_* v893) {
bb894: ;
  struct std__deque_int__std__allocator_int__* this895;
  struct std___Deque_iterator_int__int____int___ __first896;
  struct std___Deque_iterator_int__int____int___ __last897;
  struct std__allocator_int_* unnamed898;
  this895 = v890;
  __first896 = v891;
  __last897 = v892;
  unnamed898 = v893;
  struct std__deque_int__std__allocator_int__* t899 = this895;
    _Bool c900 = 0;
    if (c900) {
      struct std___Deque_iterator_int__int____int___ agg_tmp0901;
      struct std___Deque_iterator_int__int____int___ agg_tmp1902;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp0901, &__first896);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp1902, &__last897);
      struct std___Deque_iterator_int__int____int___ t903 = agg_tmp0901;
      struct std___Deque_iterator_int__int____int___ t904 = agg_tmp1902;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t899, t903, t904);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v905) {
bb906: ;
  struct std__deque_int__std__allocator_int__* this907;
  struct std___Deque_iterator_int__int____int___ __retval908;
  this907 = v905;
  struct std__deque_int__std__allocator_int__* t909 = this907;
  struct std___Deque_base_int__std__allocator_int__* base910 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t909 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base911 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base910->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval908, &base911->_M_start);
  struct std___Deque_iterator_int__int____int___ t912 = __retval908;
  return t912;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v913) {
bb914: ;
  struct std__deque_int__std__allocator_int__* this915;
  struct std___Deque_iterator_int__int____int___ __retval916;
  this915 = v913;
  struct std__deque_int__std__allocator_int__* t917 = this915;
  struct std___Deque_base_int__std__allocator_int__* base918 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t917 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base919 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base918->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval916, &base919->_M_finish);
  struct std___Deque_iterator_int__int____int___ t920 = __retval916;
  return t920;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v921) {
bb922: ;
  struct std___Deque_base_int__std__allocator_int__* this923;
  struct std__allocator_int_* __retval924;
  this923 = v921;
  struct std___Deque_base_int__std__allocator_int__* t925 = this923;
  struct std__allocator_int_* base926 = (struct std__allocator_int_*)((char *)&(t925->_M_impl) + 0);
  __retval924 = base926;
  struct std__allocator_int_* t927 = __retval924;
  return t927;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v928, int* v929, unsigned long v930) {
bb931: ;
  struct std____new_allocator_int_* this932;
  int* __p933;
  unsigned long __n934;
  this932 = v928;
  __p933 = v929;
  __n934 = v930;
  struct std____new_allocator_int_* t935 = this932;
    unsigned long c936 = 4;
    unsigned long c937 = 16;
    _Bool c938 = ((c936 > c937)) ? 1 : 0;
    if (c938) {
      int* t939 = __p933;
      void* cast940 = (void*)t939;
      unsigned long t941 = __n934;
      unsigned long c942 = 4;
      unsigned long b943 = t941 * c942;
      unsigned long c944 = 4;
      operator_delete_3(cast940, b943, c944);
      return;
    }
  int* t945 = __p933;
  void* cast946 = (void*)t945;
  unsigned long t947 = __n934;
  unsigned long c948 = 4;
  unsigned long b949 = t947 * c948;
  operator_delete_2(cast946, b949);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v950, int* v951, unsigned long v952) {
bb953: ;
  struct std__allocator_int_* this954;
  int* __p955;
  unsigned long __n956;
  this954 = v950;
  __p955 = v951;
  __n956 = v952;
  struct std__allocator_int_* t957 = this954;
    _Bool r958 = std____is_constant_evaluated();
    if (r958) {
      int* t959 = __p955;
      void* cast960 = (void*)t959;
      operator_delete(cast960);
      return;
    }
  struct std____new_allocator_int_* base961 = (struct std____new_allocator_int_*)((char *)t957 + 0);
  int* t962 = __p955;
  unsigned long t963 = __n956;
  std____new_allocator_int___deallocate(base961, t962, t963);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v964, int* v965, unsigned long v966) {
bb967: ;
  struct std__allocator_int_* __a968;
  int* __p969;
  unsigned long __n970;
  __a968 = v964;
  __p969 = v965;
  __n970 = v966;
  struct std__allocator_int_* t971 = __a968;
  int* t972 = __p969;
  unsigned long t973 = __n970;
  std__allocator_int___deallocate(t971, t972, t973);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v974, int* v975) {
bb976: ;
  struct std___Deque_base_int__std__allocator_int__* this977;
  int* __p978;
  this977 = v974;
  __p978 = v975;
  struct std___Deque_base_int__std__allocator_int__* t979 = this977;
  struct std__allocator_int_* base980 = (struct std__allocator_int_*)((char *)&(t979->_M_impl) + 0);
  int* t981 = __p978;
  unsigned long c982 = 4;
  unsigned long r983 = std____deque_buf_size(c982);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base980, t981, r983);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v984, int** v985, int** v986) {
bb987: ;
  struct std___Deque_base_int__std__allocator_int__* this988;
  int** __nstart989;
  int** __nfinish990;
  this988 = v984;
  __nstart989 = v985;
  __nfinish990 = v986;
  struct std___Deque_base_int__std__allocator_int__* t991 = this988;
    int** __n992;
    int** t993 = __nstart989;
    __n992 = t993;
    while (1) {
      int** t995 = __n992;
      int** t996 = __nfinish990;
      _Bool c997 = ((t995 < t996)) ? 1 : 0;
      if (!c997) break;
      int** t998 = __n992;
      int* t999 = *t998;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t991, t999);
    for_step994: ;
      int** t1000 = __n992;
      int c1001 = 1;
      int** ptr1002 = &(t1000)[c1001];
      __n992 = ptr1002;
    }
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1003) {
bb1004: ;
  struct std___Deque_base_int__std__allocator_int__* this1005;
  struct std__allocator_int_* __retval1006;
  this1005 = v1003;
  struct std___Deque_base_int__std__allocator_int__* t1007 = this1005;
  struct std__allocator_int_* base1008 = (struct std__allocator_int_*)((char *)&(t1007->_M_impl) + 0);
  __retval1006 = base1008;
  struct std__allocator_int_* t1009 = __retval1006;
  return t1009;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v1010, struct std__allocator_int_* v1011) {
bb1012: ;
  struct std__allocator_int___* this1013;
  struct std__allocator_int_* unnamed1014;
  this1013 = v1010;
  unnamed1014 = v1011;
  struct std__allocator_int___* t1015 = this1013;
  struct std____new_allocator_int___* base1016 = (struct std____new_allocator_int___*)((char *)t1015 + 0);
  std____new_allocator_int______new_allocator(base1016);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1017) {
bb1018: ;
  struct std___Deque_base_int__std__allocator_int__* this1019;
  struct std__allocator_int___ __retval1020;
  this1019 = v1017;
  struct std___Deque_base_int__std__allocator_int__* t1021 = this1019;
  struct std__allocator_int_* r1022 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t1021);
  std__allocator_int____allocator_int_(&__retval1020, r1022);
  struct std__allocator_int___ t1023 = __retval1020;
  return t1023;
}

// function: _ZNSt15__new_allocatorIPiE10deallocateEPS0_m
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v1024, int** v1025, unsigned long v1026) {
bb1027: ;
  struct std____new_allocator_int___* this1028;
  int** __p1029;
  unsigned long __n1030;
  this1028 = v1024;
  __p1029 = v1025;
  __n1030 = v1026;
  struct std____new_allocator_int___* t1031 = this1028;
    unsigned long c1032 = 8;
    unsigned long c1033 = 16;
    _Bool c1034 = ((c1032 > c1033)) ? 1 : 0;
    if (c1034) {
      int** t1035 = __p1029;
      void* cast1036 = (void*)t1035;
      unsigned long t1037 = __n1030;
      unsigned long c1038 = 8;
      unsigned long b1039 = t1037 * c1038;
      unsigned long c1040 = 8;
      operator_delete_3(cast1036, b1039, c1040);
      return;
    }
  int** t1041 = __p1029;
  void* cast1042 = (void*)t1041;
  unsigned long t1043 = __n1030;
  unsigned long c1044 = 8;
  unsigned long b1045 = t1043 * c1044;
  operator_delete_2(cast1042, b1045);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v1046, int** v1047, unsigned long v1048) {
bb1049: ;
  struct std__allocator_int___* this1050;
  int** __p1051;
  unsigned long __n1052;
  this1050 = v1046;
  __p1051 = v1047;
  __n1052 = v1048;
  struct std__allocator_int___* t1053 = this1050;
    _Bool r1054 = std____is_constant_evaluated();
    if (r1054) {
      int** t1055 = __p1051;
      void* cast1056 = (void*)t1055;
      operator_delete(cast1056);
      return;
    }
  struct std____new_allocator_int___* base1057 = (struct std____new_allocator_int___*)((char *)t1053 + 0);
  int** t1058 = __p1051;
  unsigned long t1059 = __n1052;
  std____new_allocator_int____deallocate(base1057, t1058, t1059);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v1060, int** v1061, unsigned long v1062) {
bb1063: ;
  struct std__allocator_int___* __a1064;
  int** __p1065;
  unsigned long __n1066;
  __a1064 = v1060;
  __p1065 = v1061;
  __n1066 = v1062;
  struct std__allocator_int___* t1067 = __a1064;
  int** t1068 = __p1065;
  unsigned long t1069 = __n1066;
  std__allocator_int____deallocate(t1067, t1068, t1069);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v1070, int** v1071, unsigned long v1072) {
bb1073: ;
  struct std___Deque_base_int__std__allocator_int__* this1074;
  int** __p1075;
  unsigned long __n1076;
  struct std__allocator_int___ __map_alloc1077;
  this1074 = v1070;
  __p1075 = v1071;
  __n1076 = v1072;
  struct std___Deque_base_int__std__allocator_int__* t1078 = this1074;
  struct std__allocator_int___ r1079 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1078);
  __map_alloc1077 = r1079;
  int** t1080 = __p1075;
  unsigned long t1081 = __n1076;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc1077, t1080, t1081);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1082) {
bb1083: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1084;
  this1084 = v1082;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1085 = this1084;
  {
    struct std__allocator_int_* base1086 = (struct std__allocator_int_*)((char *)t1085 + 0);
    std__allocator_int____allocator(base1086);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1087) {
bb1088: ;
  struct std___Deque_base_int__std__allocator_int__* this1089;
  this1089 = v1087;
  struct std___Deque_base_int__std__allocator_int__* t1090 = this1089;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1091 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1090->_M_impl) + 0);
      int** t1092 = base1091->_M_map;
      _Bool cast1093 = (_Bool)t1092;
      if (cast1093) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1094 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1090->_M_impl) + 0);
        int** t1095 = base1094->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1096 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1090->_M_impl) + 0);
        int** t1097 = base1096->_M_finish._M_node;
        int c1098 = 1;
        int** ptr1099 = &(t1097)[c1098];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1090, t1095, ptr1099);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1100 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1090->_M_impl) + 0);
        int** t1101 = base1100->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1102 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1090->_M_impl) + 0);
        unsigned long t1103 = base1102->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1090, t1101, t1103);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1090->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1104) {
bb1105: ;
  struct std____new_allocator_int___* this1106;
  this1106 = v1104;
  struct std____new_allocator_int___* t1107 = this1106;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1108) {
bb1109: ;
  struct std__allocator_int_* this1110;
  this1110 = v1108;
  struct std__allocator_int_* t1111 = this1110;
  return;
}

// function: _ZNSt5dequeIiSaIiEEC2Ev
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* v1112) {
bb1113: ;
  struct std__deque_int__std__allocator_int__* this1114;
  this1114 = v1112;
  struct std__deque_int__std__allocator_int__* t1115 = this1114;
  struct std___Deque_base_int__std__allocator_int__* base1116 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1115 + 0);
  std___Deque_base_int__std__allocator_int______Deque_base(base1116);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1117) {
bb1118: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1119;
  this1119 = v1117;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1120 = this1119;
  struct std__allocator_int_* base1121 = (struct std__allocator_int_*)((char *)t1120 + 0);
  std__allocator_int___allocator(base1121);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1122 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t1120 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base1122);
  return;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v1123, unsigned long* v1124) {
bb1125: ;
  unsigned long* __a1126;
  unsigned long* __b1127;
  unsigned long* __retval1128;
  __a1126 = v1123;
  __b1127 = v1124;
    unsigned long* t1129 = __a1126;
    unsigned long t1130 = *t1129;
    unsigned long* t1131 = __b1127;
    unsigned long t1132 = *t1131;
    _Bool c1133 = ((t1130 < t1132)) ? 1 : 0;
    if (c1133) {
      unsigned long* t1134 = __b1127;
      __retval1128 = t1134;
      unsigned long* t1135 = __retval1128;
      return t1135;
    }
  unsigned long* t1136 = __a1126;
  __retval1128 = t1136;
  unsigned long* t1137 = __retval1128;
  return t1137;
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v1138) {
bb1139: ;
  struct std____new_allocator_int___* this1140;
  unsigned long __retval1141;
  this1140 = v1138;
  struct std____new_allocator_int___* t1142 = this1140;
  unsigned long c1143 = 9223372036854775807;
  unsigned long c1144 = 8;
  unsigned long b1145 = c1143 / c1144;
  __retval1141 = b1145;
  unsigned long t1146 = __retval1141;
  return t1146;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v1147, unsigned long v1148, void* v1149) {
bb1150: ;
  struct std____new_allocator_int___* this1151;
  unsigned long __n1152;
  void* unnamed1153;
  int** __retval1154;
  this1151 = v1147;
  __n1152 = v1148;
  unnamed1153 = v1149;
  struct std____new_allocator_int___* t1155 = this1151;
    unsigned long t1156 = __n1152;
    unsigned long r1157 = std____new_allocator_int_____M_max_size___const(t1155);
    _Bool c1158 = ((t1156 > r1157)) ? 1 : 0;
    if (c1158) {
        unsigned long t1159 = __n1152;
        unsigned long c1160 = -1;
        unsigned long c1161 = 8;
        unsigned long b1162 = c1160 / c1161;
        _Bool c1163 = ((t1159 > b1162)) ? 1 : 0;
        if (c1163) {
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
    unsigned long c1164 = 8;
    unsigned long c1165 = 16;
    _Bool c1166 = ((c1164 > c1165)) ? 1 : 0;
    if (c1166) {
      unsigned long __al1167;
      unsigned long c1168 = 8;
      __al1167 = c1168;
      unsigned long t1169 = __n1152;
      unsigned long c1170 = 8;
      unsigned long b1171 = t1169 * c1170;
      unsigned long t1172 = __al1167;
      void* r1173 = operator_new_2(b1171, t1172);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1174 = (int**)r1173;
      __retval1154 = cast1174;
      int** t1175 = __retval1154;
      return t1175;
    }
  unsigned long t1176 = __n1152;
  unsigned long c1177 = 8;
  unsigned long b1178 = t1176 * c1177;
  void* r1179 = operator_new(b1178);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast1180 = (int**)r1179;
  __retval1154 = cast1180;
  int** t1181 = __retval1154;
  return t1181;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v1182, unsigned long v1183) {
bb1184: ;
  struct std__allocator_int___* this1185;
  unsigned long __n1186;
  int** __retval1187;
  this1185 = v1182;
  __n1186 = v1183;
  struct std__allocator_int___* t1188 = this1185;
    _Bool r1189 = std____is_constant_evaluated();
    if (r1189) {
        unsigned long t1190 = __n1186;
        unsigned long c1191 = 8;
        unsigned long ovr1192;
        _Bool ovf1193 = __builtin_mul_overflow(t1190, c1191, &ovr1192);
        __n1186 = ovr1192;
        if (ovf1193) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1194 = __n1186;
      void* r1195 = operator_new(t1194);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1196 = (int**)r1195;
      __retval1187 = cast1196;
      int** t1197 = __retval1187;
      return t1197;
    }
  struct std____new_allocator_int___* base1198 = (struct std____new_allocator_int___*)((char *)t1188 + 0);
  unsigned long t1199 = __n1186;
  void* c1200 = ((void*)0);
  int** r1201 = std____new_allocator_int____allocate(base1198, t1199, c1200);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1187 = r1201;
  int** t1202 = __retval1187;
  return t1202;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v1203, unsigned long v1204) {
bb1205: ;
  struct std__allocator_int___* __a1206;
  unsigned long __n1207;
  int** __retval1208;
  __a1206 = v1203;
  __n1207 = v1204;
  struct std__allocator_int___* t1209 = __a1206;
  unsigned long t1210 = __n1207;
  int** r1211 = std__allocator_int____allocate(t1209, t1210);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1208 = r1211;
  int** t1212 = __retval1208;
  return t1212;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v1213, unsigned long v1214) {
bb1215: ;
  struct std___Deque_base_int__std__allocator_int__* this1216;
  unsigned long __n1217;
  int** __retval1218;
  struct std__allocator_int___ __map_alloc1219;
  this1216 = v1213;
  __n1217 = v1214;
  struct std___Deque_base_int__std__allocator_int__* t1220 = this1216;
  struct std__allocator_int___ r1221 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1220);
  __map_alloc1219 = r1221;
  unsigned long t1222 = __n1217;
  int** r1223 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc1219, t1222);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1218 = r1223;
  int** t1224 = __retval1218;
  return t1224;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1225) {
bb1226: ;
  struct std____new_allocator_int_* this1227;
  unsigned long __retval1228;
  this1227 = v1225;
  struct std____new_allocator_int_* t1229 = this1227;
  unsigned long c1230 = 9223372036854775807;
  unsigned long c1231 = 4;
  unsigned long b1232 = c1230 / c1231;
  __retval1228 = b1232;
  unsigned long t1233 = __retval1228;
  return t1233;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1234, unsigned long v1235, void* v1236) {
bb1237: ;
  struct std____new_allocator_int_* this1238;
  unsigned long __n1239;
  void* unnamed1240;
  int* __retval1241;
  this1238 = v1234;
  __n1239 = v1235;
  unnamed1240 = v1236;
  struct std____new_allocator_int_* t1242 = this1238;
    unsigned long t1243 = __n1239;
    unsigned long r1244 = std____new_allocator_int____M_max_size___const(t1242);
    _Bool c1245 = ((t1243 > r1244)) ? 1 : 0;
    if (c1245) {
        unsigned long t1246 = __n1239;
        unsigned long c1247 = -1;
        unsigned long c1248 = 4;
        unsigned long b1249 = c1247 / c1248;
        _Bool c1250 = ((t1246 > b1249)) ? 1 : 0;
        if (c1250) {
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
    unsigned long c1251 = 4;
    unsigned long c1252 = 16;
    _Bool c1253 = ((c1251 > c1252)) ? 1 : 0;
    if (c1253) {
      unsigned long __al1254;
      unsigned long c1255 = 4;
      __al1254 = c1255;
      unsigned long t1256 = __n1239;
      unsigned long c1257 = 4;
      unsigned long b1258 = t1256 * c1257;
      unsigned long t1259 = __al1254;
      void* r1260 = operator_new_2(b1258, t1259);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1261 = (int*)r1260;
      __retval1241 = cast1261;
      int* t1262 = __retval1241;
      return t1262;
    }
  unsigned long t1263 = __n1239;
  unsigned long c1264 = 4;
  unsigned long b1265 = t1263 * c1264;
  void* r1266 = operator_new(b1265);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast1267 = (int*)r1266;
  __retval1241 = cast1267;
  int* t1268 = __retval1241;
  return t1268;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1269, unsigned long v1270) {
bb1271: ;
  struct std__allocator_int_* this1272;
  unsigned long __n1273;
  int* __retval1274;
  this1272 = v1269;
  __n1273 = v1270;
  struct std__allocator_int_* t1275 = this1272;
    _Bool r1276 = std____is_constant_evaluated();
    if (r1276) {
        unsigned long t1277 = __n1273;
        unsigned long c1278 = 4;
        unsigned long ovr1279;
        _Bool ovf1280 = __builtin_mul_overflow(t1277, c1278, &ovr1279);
        __n1273 = ovr1279;
        if (ovf1280) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1281 = __n1273;
      void* r1282 = operator_new(t1281);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1283 = (int*)r1282;
      __retval1274 = cast1283;
      int* t1284 = __retval1274;
      return t1284;
    }
  struct std____new_allocator_int_* base1285 = (struct std____new_allocator_int_*)((char *)t1275 + 0);
  unsigned long t1286 = __n1273;
  void* c1287 = ((void*)0);
  int* r1288 = std____new_allocator_int___allocate(base1285, t1286, c1287);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1274 = r1288;
  int* t1289 = __retval1274;
  return t1289;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1290, unsigned long v1291) {
bb1292: ;
  struct std__allocator_int_* __a1293;
  unsigned long __n1294;
  int* __retval1295;
  __a1293 = v1290;
  __n1294 = v1291;
  struct std__allocator_int_* t1296 = __a1293;
  unsigned long t1297 = __n1294;
  int* r1298 = std__allocator_int___allocate(t1296, t1297);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1295 = r1298;
  int* t1299 = __retval1295;
  return t1299;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v1300) {
bb1301: ;
  struct std___Deque_base_int__std__allocator_int__* this1302;
  int* __retval1303;
  this1302 = v1300;
  struct std___Deque_base_int__std__allocator_int__* t1304 = this1302;
  struct std__allocator_int_* base1305 = (struct std__allocator_int_*)((char *)&(t1304->_M_impl) + 0);
  unsigned long c1306 = 4;
  unsigned long r1307 = std____deque_buf_size(c1306);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r1308 = std__allocator_traits_std__allocator_int_____allocate(base1305, r1307);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1303 = r1308;
  int* t1309 = __retval1303;
  return t1309;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v1310, int** v1311, int** v1312) {
bb1313: ;
  struct std___Deque_base_int__std__allocator_int__* this1314;
  int** __nstart1315;
  int** __nfinish1316;
  int** __cur1317;
  this1314 = v1310;
  __nstart1315 = v1311;
  __nfinish1316 = v1312;
  struct std___Deque_base_int__std__allocator_int__* t1318 = this1314;
        int** t1320 = __nstart1315;
        __cur1317 = t1320;
        while (1) {
          int** t1322 = __cur1317;
          int** t1323 = __nfinish1316;
          _Bool c1324 = ((t1322 < t1323)) ? 1 : 0;
          if (!c1324) break;
          int* r1325 = std___Deque_base_int__std__allocator_int______M_allocate_node(t1318);
          if (__cir_exc_active) {
            goto cir_try_dispatch1319;
          }
          int** t1326 = __cur1317;
          *t1326 = r1325;
        for_step1321: ;
          int** t1327 = __cur1317;
          int c1328 = 1;
          int** ptr1329 = &(t1327)[c1328];
          __cur1317 = ptr1329;
        }
    cir_try_dispatch1319: ;
    if (__cir_exc_active) {
    {
      int ca_tok1330 = 0;
      void* ca_exn1331 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t1332 = __nstart1315;
        int** t1333 = __cur1317;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1318, t1332, t1333);
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
bb1334: ;
  unsigned long __retval1335;
  unsigned long c1336 = 4;
  unsigned long r1337 = std____deque_buf_size(c1336);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1335 = r1337;
  unsigned long t1338 = __retval1335;
  return t1338;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v1339, int** v1340) {
bb1341: ;
  struct std___Deque_iterator_int__int____int___* this1342;
  int** __new_node1343;
  this1342 = v1339;
  __new_node1343 = v1340;
  struct std___Deque_iterator_int__int____int___* t1344 = this1342;
  int** t1345 = __new_node1343;
  t1344->_M_node = t1345;
  int** t1346 = __new_node1343;
  int* t1347 = *t1346;
  t1344->_M_first = t1347;
  int* t1348 = t1344->_M_first;
  unsigned long r1349 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1350 = (long)r1349;
  int* ptr1351 = &(t1348)[cast1350];
  t1344->_M_last = ptr1351;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v1352, unsigned long v1353) {
bb1354: ;
  struct std___Deque_base_int__std__allocator_int__* this1355;
  unsigned long __num_elements1356;
  unsigned long __num_nodes1357;
  unsigned long ref_tmp01358;
  unsigned long ref_tmp11359;
  int** __nstart1360;
  int** __nfinish1361;
  this1355 = v1352;
  __num_elements1356 = v1353;
  struct std___Deque_base_int__std__allocator_int__* t1362 = this1355;
  unsigned long t1363 = __num_elements1356;
  unsigned long c1364 = 4;
  unsigned long r1365 = std____deque_buf_size(c1364);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1366 = t1363 / r1365;
  unsigned long c1367 = 1;
  unsigned long b1368 = b1366 + c1367;
  __num_nodes1357 = b1368;
  unsigned long c1369 = 8;
  ref_tmp01358 = c1369;
  unsigned long t1370 = __num_nodes1357;
  unsigned long c1371 = 2;
  unsigned long b1372 = t1370 + c1371;
  ref_tmp11359 = b1372;
  unsigned long* r1373 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01358, &ref_tmp11359);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1374 = *r1373;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1375 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1362->_M_impl) + 0);
  base1375->_M_map_size = t1374;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1376 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1362->_M_impl) + 0);
  unsigned long t1377 = base1376->_M_map_size;
  int** r1378 = std___Deque_base_int__std__allocator_int______M_allocate_map(t1362, t1377);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1379 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1362->_M_impl) + 0);
  base1379->_M_map = r1378;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1380 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1362->_M_impl) + 0);
  int** t1381 = base1380->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1382 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1362->_M_impl) + 0);
  unsigned long t1383 = base1382->_M_map_size;
  unsigned long t1384 = __num_nodes1357;
  unsigned long b1385 = t1383 - t1384;
  unsigned long c1386 = 2;
  unsigned long b1387 = b1385 / c1386;
  int** ptr1388 = &(t1381)[b1387];
  __nstart1360 = ptr1388;
  int** t1389 = __nstart1360;
  unsigned long t1390 = __num_nodes1357;
  int** ptr1391 = &(t1389)[t1390];
  __nfinish1361 = ptr1391;
      int** t1393 = __nstart1360;
      int** t1394 = __nfinish1361;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t1362, t1393, t1394);
      if (__cir_exc_active) {
        goto cir_try_dispatch1392;
      }
    cir_try_dispatch1392: ;
    if (__cir_exc_active) {
    {
      int ca_tok1395 = 0;
      void* ca_exn1396 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1397 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1362->_M_impl) + 0);
        int** t1398 = base1397->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1399 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1362->_M_impl) + 0);
        unsigned long t1400 = base1399->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1362, t1398, t1400);
        int** c1401 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1402 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1362->_M_impl) + 0);
        base1402->_M_map = c1401;
        unsigned long c1403 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1404 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1362->_M_impl) + 0);
        base1404->_M_map_size = c1403;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1405 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1362->_M_impl) + 0);
  int** t1406 = __nstart1360;
  std___Deque_iterator_int__int___int_____M_set_node(&base1405->_M_start, t1406);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1407 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1362->_M_impl) + 0);
  int** t1408 = __nfinish1361;
  int c1409 = -1;
  int** ptr1410 = &(t1408)[c1409];
  std___Deque_iterator_int__int___int_____M_set_node(&base1407->_M_finish, ptr1410);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1411 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1362->_M_impl) + 0);
  int* t1412 = base1411->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1413 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1362->_M_impl) + 0);
  base1413->_M_start._M_cur = t1412;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1414 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1362->_M_impl) + 0);
  int* t1415 = base1414->_M_finish._M_first;
  unsigned long t1416 = __num_elements1356;
  unsigned long c1417 = 4;
  unsigned long r1418 = std____deque_buf_size(c1417);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1419 = t1416 % r1418;
  int* ptr1420 = &(t1415)[b1419];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1421 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1362->_M_impl) + 0);
  base1421->_M_finish._M_cur = ptr1420;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1422) {
bb1423: ;
  struct std___Deque_base_int__std__allocator_int__* this1424;
  this1424 = v1422;
  struct std___Deque_base_int__std__allocator_int__* t1425 = this1424;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1425->_M_impl);
    unsigned long c1426 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1425, c1426);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1425->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1427) {
bb1428: ;
  struct std____new_allocator_int_* this1429;
  this1429 = v1427;
  struct std____new_allocator_int_* t1430 = this1429;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1431) {
bb1432: ;
  struct std__allocator_int_* this1433;
  this1433 = v1431;
  struct std__allocator_int_* t1434 = this1433;
  struct std____new_allocator_int_* base1435 = (struct std____new_allocator_int_*)((char *)t1434 + 0);
  std____new_allocator_int_____new_allocator(base1435);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1436) {
bb1437: ;
  struct std___Deque_iterator_int__int____int___* this1438;
  this1438 = v1436;
  struct std___Deque_iterator_int__int____int___* t1439 = this1438;
  int* c1440 = ((void*)0);
  t1439->_M_cur = c1440;
  int* c1441 = ((void*)0);
  t1439->_M_first = c1441;
  int* c1442 = ((void*)0);
  t1439->_M_last = c1442;
  int** c1443 = ((void*)0);
  t1439->_M_node = c1443;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1444) {
bb1445: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1446;
  this1446 = v1444;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1447 = this1446;
  int** c1448 = ((void*)0);
  t1447->_M_map = c1448;
  unsigned long c1449 = 0;
  t1447->_M_map_size = c1449;
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1447->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1447->_M_finish);
  return;
}

