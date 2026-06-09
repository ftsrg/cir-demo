extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_comp_val_std__greater_int__ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_comp_val_std__less_int__ { unsigned char __field0; };
struct mycomparison { _Bool reverse; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__greater_int_ { unsigned char __field0; };
struct std__less_int_ { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };
struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_ { struct std__vector_int__std__allocator_int__ c; struct mycomparison comp; unsigned char __field2[7]; } __attribute__((packed));
struct std__priority_queue_int__std__vector_int__std__allocator_int____std__greater_int__ { struct std__vector_int__std__allocator_int__ c; unsigned char __field1[8]; } __attribute__((packed));
struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__ { struct std__vector_int__std__allocator_int__ c; unsigned char __field1[8]; } __attribute__((packed));

int __const_main_myints[4] = {10, 60, 50, 20};
char _str[18] = "first.size() == 0";
char _str_1[129] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/priority_queue/priority_queue_constructor/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "second.size() == 4";
char _str_3[18] = "third.size() == 4";
char _str_4[19] = "fourth.size() == 0";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_5[49] = "cannot create std::vector larger than max_size()";
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____priority_queue_std__vector_int__std__allocator_int_____void_(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____size___const(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____priority_queue_int___void_(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* p0, int* p1, int* p2, struct std__less_int_* p3);
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__greater_int_____priority_queue_int___void_(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__greater_int__* p0, int* p1, int* p2, struct std__greater_int_* p3);
unsigned long std__priority_queue_int__std__vector_int__std__allocator_int_____std__greater_int_____size___const(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__greater_int__* p0);
void std__priority_queue_int__std__vector_int__std__allocator_int_____mycomparison___priority_queue_std__vector_int__std__allocator_int_____void_(struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_* p0);
unsigned long std__priority_queue_int__std__vector_int__std__allocator_int_____mycomparison___size___const(struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_* p0);
void std__priority_queue_int__std__vector_int__std__allocator_int_____mycomparison____priority_queue(struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_* p0);
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__greater_int______priority_queue(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__greater_int__* p0);
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int______priority_queue(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* p0);
int main();
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____ops___Iter_comp_iter_std__less_int______Iter_comp_iter(struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* p0, struct std__less_int_ p1);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* p0, int* p1, int* p2);
_Bool bool___gnu_cxx____ops___Iter_comp_iter_std__less_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void __gnu_cxx____ops___Iter_comp_val_std__less_int______Iter_comp_val(struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* p0, struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* p1);
_Bool bool___gnu_cxx____ops___Iter_comp_val_std__less_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_std__less_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* p4);
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_std__less_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ p4);
void void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_std__less_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* p2);
void void_std__make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__less_int___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct std__less_int_ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0, struct std__allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0, struct std__allocator_int_* p1);
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* p0, int** p1, int* p2);
extern void std____throw_bad_array_new_length();
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* p0, unsigned long p1, void* p2);
int* std__allocator_int___allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
extern void std____throw_length_error(char* p0);
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long p0, struct std__allocator_int_* p1);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std___Construct_int__int__(int* p0, int* p1);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____do_uninit_copy_int___int___int__(int* p0, int* p1, int* p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* int__std____niter_base_int__(int* p0);
int* int__std__uninitialized_copy_int___int__(int* p0, int* p1, int* p2);
int* int__std____uninitialized_copy_a_int___int___int___int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, unsigned long p3);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0, struct std____new_allocator_int_* p1);
void __gnu_cxx____ops___Iter_comp_iter_std__greater_int______Iter_comp_iter(struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__* p0, struct std__greater_int_ p1);
_Bool std__greater_int___operator___int_const___int_const___const(struct std__greater_int_* p0, int* p1, int* p2);
_Bool bool___gnu_cxx____ops___Iter_comp_iter_std__greater_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void __gnu_cxx____ops___Iter_comp_val_std__greater_int______Iter_comp_val(struct __gnu_cxx____ops___Iter_comp_val_std__greater_int__* p0, struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__* p1);
_Bool bool___gnu_cxx____ops___Iter_comp_val_std__greater_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____ops___Iter_comp_val_std__greater_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_std__greater_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_comp_val_std__greater_int__* p4);
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_std__greater_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__ p4);
void void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_std__greater_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__* p2);
void void_std__make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__greater_int___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct std__greater_int_ p2);
void mycomparison__mycomparison(struct mycomparison* p0, _Bool* p1);

// function: _ZNSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEEC2IS2_vEEv
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____priority_queue_std__vector_int__std__allocator_int_____void_(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* v0) {
bb1:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* this2;
  this2 = v0;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* t3 = this2;
  struct std__vector_int__std__allocator_int__ c4 = {0};
  t3->c = c4;
  std__vector_int__std__allocator_int_____vector(&t3->c);
  return;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v5) {
bb6:
  struct std__vector_int__std__allocator_int__* this7;
  unsigned long __retval8;
  long __dif9;
  this7 = v5;
  struct std__vector_int__std__allocator_int__* t10 = this7;
  struct std___Vector_base_int__std__allocator_int__* base11 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t10 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base12 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base11->_M_impl) + 0);
  int* t13 = base12->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base14 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t10 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base15 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base14->_M_impl) + 0);
  int* t16 = base15->_M_start;
  long diff17 = t13 - t16;
  __dif9 = diff17;
    long t18 = __dif9;
    long c19 = 0;
    _Bool c20 = ((t18 < c19)) ? 1 : 0;
    if (c20) {
      __builtin_unreachable();
    }
  long t21 = __dif9;
  unsigned long cast22 = (unsigned long)t21;
  __retval8 = cast22;
  unsigned long t23 = __retval8;
  return t23;
}

// function: _ZNKSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEE4sizeEv
unsigned long std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____size___const(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* v24) {
bb25:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* this26;
  unsigned long __retval27;
  this26 = v24;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* t28 = this26;
  unsigned long r29 = std__vector_int__std__allocator_int_____size___const(&t28->c);
  __retval27 = r29;
  unsigned long t30 = __retval27;
  return t30;
}

// function: _ZNSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEEC2IPivEET_S8_RKS4_
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____priority_queue_int___void_(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* v31, int* v32, int* v33, struct std__less_int_* v34) {
bb35:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* this36;
  int* __first37;
  int* __last38;
  struct std__less_int_* __x39;
  struct std__allocator_int_ ref_tmp040;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp041;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp142;
  struct std__less_int_ agg_tmp243;
  this36 = v31;
  __first37 = v32;
  __last38 = v33;
  __x39 = v34;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* t44 = this36;
  int* t45 = __first37;
  int* t46 = __last38;
  std__allocator_int___allocator_2(&ref_tmp040);
    std__vector_int__std__allocator_int_____vector_int___void_(&t44->c, t45, t46, &ref_tmp040);
  {
    std__allocator_int____allocator(&ref_tmp040);
  }
    struct std__less_int_* t47 = __x39;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r48 = std__vector_int__std__allocator_int_____begin(&t44->c);
    agg_tmp041 = r48;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r49 = std__vector_int__std__allocator_int_____end(&t44->c);
    agg_tmp142 = r49;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t50 = agg_tmp041;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t51 = agg_tmp142;
    struct std__less_int_ t52 = agg_tmp243;
    void_std__make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__less_int___(t50, t51, t52);
  return;
}

// function: _ZNSt14priority_queueIiSt6vectorIiSaIiEESt7greaterIiEEC2IPivEET_S8_RKS4_
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__greater_int_____priority_queue_int___void_(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__greater_int__* v53, int* v54, int* v55, struct std__greater_int_* v56) {
bb57:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__greater_int__* this58;
  int* __first59;
  int* __last60;
  struct std__greater_int_* __x61;
  struct std__allocator_int_ ref_tmp062;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp063;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp164;
  struct std__greater_int_ agg_tmp265;
  this58 = v53;
  __first59 = v54;
  __last60 = v55;
  __x61 = v56;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__greater_int__* t66 = this58;
  int* t67 = __first59;
  int* t68 = __last60;
  std__allocator_int___allocator_2(&ref_tmp062);
    std__vector_int__std__allocator_int_____vector_int___void_(&t66->c, t67, t68, &ref_tmp062);
  {
    std__allocator_int____allocator(&ref_tmp062);
  }
    struct std__greater_int_* t69 = __x61;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r70 = std__vector_int__std__allocator_int_____begin(&t66->c);
    agg_tmp063 = r70;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r71 = std__vector_int__std__allocator_int_____end(&t66->c);
    agg_tmp164 = r71;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t72 = agg_tmp063;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t73 = agg_tmp164;
    struct std__greater_int_ t74 = agg_tmp265;
    void_std__make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__greater_int___(t72, t73, t74);
  return;
}

// function: _ZNKSt14priority_queueIiSt6vectorIiSaIiEESt7greaterIiEE4sizeEv
unsigned long std__priority_queue_int__std__vector_int__std__allocator_int_____std__greater_int_____size___const(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__greater_int__* v75) {
bb76:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__greater_int__* this77;
  unsigned long __retval78;
  this77 = v75;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__greater_int__* t79 = this77;
  unsigned long r80 = std__vector_int__std__allocator_int_____size___const(&t79->c);
  __retval78 = r80;
  unsigned long t81 = __retval78;
  return t81;
}

// function: _ZNSt14priority_queueIiSt6vectorIiSaIiEE12mycomparisonEC2IS2_vEEv
void std__priority_queue_int__std__vector_int__std__allocator_int_____mycomparison___priority_queue_std__vector_int__std__allocator_int_____void_(struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_* v82) {
bb83:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_* this84;
  _Bool ref_tmp085;
  this84 = v82;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_* t86 = this84;
  struct std__vector_int__std__allocator_int__ c87 = {0};
  t86->c = c87;
  std__vector_int__std__allocator_int_____vector(&t86->c);
    _Bool c88 = 0;
    ref_tmp085 = c88;
    mycomparison__mycomparison(&t86->comp, &ref_tmp085);
  return;
}

// function: _ZNKSt14priority_queueIiSt6vectorIiSaIiEE12mycomparisonE4sizeEv
unsigned long std__priority_queue_int__std__vector_int__std__allocator_int_____mycomparison___size___const(struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_* v89) {
bb90:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_* this91;
  unsigned long __retval92;
  this91 = v89;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_* t93 = this91;
  unsigned long r94 = std__vector_int__std__allocator_int_____size___const(&t93->c);
  __retval92 = r94;
  unsigned long t95 = __retval92;
  return t95;
}

// function: _ZNSt14priority_queueIiSt6vectorIiSaIiEE12mycomparisonED2Ev
void std__priority_queue_int__std__vector_int__std__allocator_int_____mycomparison____priority_queue(struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_* v96) {
bb97:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_* this98;
  this98 = v96;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_* t99 = this98;
  {
    std__vector_int__std__allocator_int______vector(&t99->c);
  }
  return;
}

// function: _ZNSt14priority_queueIiSt6vectorIiSaIiEESt7greaterIiEED2Ev
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__greater_int______priority_queue(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__greater_int__* v100) {
bb101:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__greater_int__* this102;
  this102 = v100;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__greater_int__* t103 = this102;
  {
    std__vector_int__std__allocator_int______vector(&t103->c);
  }
  return;
}

// function: _ZNSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEED2Ev
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int______priority_queue(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* v104) {
bb105:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* this106;
  this106 = v104;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* t107 = this106;
  {
    std__vector_int__std__allocator_int______vector(&t107->c);
  }
  return;
}

// function: main
int main() {
bb108:
  int __retval109;
  int myints110[4];
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__ first111;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__ second112;
  struct std__less_int_ ref_tmp0113;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__greater_int__ third114;
  struct std__greater_int_ ref_tmp1115;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_ fourth116;
  int c117 = 0;
  __retval109 = c117;
  // array copy
  __builtin_memcpy(myints110, __const_main_myints, (unsigned long)4 * sizeof(__const_main_myints[0]));
  std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____priority_queue_std__vector_int__std__allocator_int_____void_(&first111);
    unsigned long r118 = std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____size___const(&first111);
    unsigned long c119 = 0;
    _Bool c120 = ((r118 == c119)) ? 1 : 0;
    if (c120) {
    } else {
      char* cast121 = (char*)&(_str);
      char* c122 = _str_1;
      unsigned int c123 = 32;
      char* cast124 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast121, c122, c123, cast124);
    }
    int* cast125 = (int*)&(myints110);
    int* cast126 = (int*)&(myints110);
    int c127 = 4;
    int* ptr128 = &(cast126)[c127];
    std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____priority_queue_int___void_(&second112, cast125, ptr128, &ref_tmp0113);
      unsigned long r129 = std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____size___const(&second112);
      unsigned long c130 = 4;
      _Bool c131 = ((r129 == c130)) ? 1 : 0;
      if (c131) {
      } else {
        char* cast132 = (char*)&(_str_2);
        char* c133 = _str_1;
        unsigned int c134 = 34;
        char* cast135 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast132, c133, c134, cast135);
      }
      int* cast136 = (int*)&(myints110);
      int* cast137 = (int*)&(myints110);
      int c138 = 4;
      int* ptr139 = &(cast137)[c138];
      std__priority_queue_int__std__vector_int__std__allocator_int_____std__greater_int_____priority_queue_int___void_(&third114, cast136, ptr139, &ref_tmp1115);
        unsigned long r140 = std__priority_queue_int__std__vector_int__std__allocator_int_____std__greater_int_____size___const(&third114);
        unsigned long c141 = 4;
        _Bool c142 = ((r140 == c141)) ? 1 : 0;
        if (c142) {
        } else {
          char* cast143 = (char*)&(_str_3);
          char* c144 = _str_1;
          unsigned int c145 = 36;
          char* cast146 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast143, c144, c145, cast146);
        }
        std__priority_queue_int__std__vector_int__std__allocator_int_____mycomparison___priority_queue_std__vector_int__std__allocator_int_____void_(&fourth116);
          unsigned long r147 = std__priority_queue_int__std__vector_int__std__allocator_int_____mycomparison___size___const(&fourth116);
          unsigned long c148 = 0;
          _Bool c149 = ((r147 == c148)) ? 1 : 0;
          if (c149) {
          } else {
            char* cast150 = (char*)&(_str_4);
            char* c151 = _str_1;
            unsigned int c152 = 40;
            char* cast153 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast150, c151, c152, cast153);
          }
          int c154 = 0;
          __retval109 = c154;
          int t155 = __retval109;
          int ret_val156 = t155;
          {
            std__priority_queue_int__std__vector_int__std__allocator_int_____mycomparison____priority_queue(&fourth116);
          }
          {
            std__priority_queue_int__std__vector_int__std__allocator_int_____std__greater_int______priority_queue(&third114);
          }
          {
            std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int______priority_queue(&second112);
          }
          {
            std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int______priority_queue(&first111);
          }
          return ret_val156;
  int t157 = __retval109;
  return t157;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v158) {
bb159:
  struct std__vector_int__std__allocator_int__* this160;
  this160 = v158;
  struct std__vector_int__std__allocator_int__* t161 = this160;
    struct std___Vector_base_int__std__allocator_int__* base162 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t161 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base163 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base162->_M_impl) + 0);
    int* t164 = base163->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base165 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t161 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base166 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base165->_M_impl) + 0);
    int* t167 = base166->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base168 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t161 + 0);
    struct std__allocator_int_* r169 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base168);
    void_std___Destroy_int___int_(t164, t167, r169);
  {
    struct std___Vector_base_int__std__allocator_int__* base170 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t161 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base170);
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb171:
  _Bool __retval172;
    _Bool c173 = 0;
    __retval172 = c173;
    _Bool t174 = __retval172;
    return t174;
  abort();
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v175) {
bb176:
  int* __location177;
  __location177 = v175;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v178, int* v179) {
bb180:
  int* __first181;
  int* __last182;
  __first181 = v178;
  __last182 = v179;
      _Bool r183 = std____is_constant_evaluated();
      if (r183) {
          while (1) {
            int* t185 = __first181;
            int* t186 = __last182;
            _Bool c187 = ((t185 != t186)) ? 1 : 0;
            if (!c187) break;
            int* t188 = __first181;
            void_std__destroy_at_int_(t188);
          for_step184: ;
            int* t189 = __first181;
            int c190 = 1;
            int* ptr191 = &(t189)[c190];
            __first181 = ptr191;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v192, int* v193, struct std__allocator_int_* v194) {
bb195:
  int* __first196;
  int* __last197;
  struct std__allocator_int_* unnamed198;
  __first196 = v192;
  __last197 = v193;
  unnamed198 = v194;
  int* t199 = __first196;
  int* t200 = __last197;
  void_std___Destroy_int__(t199, t200);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v201) {
bb202:
  struct std___Vector_base_int__std__allocator_int__* this203;
  struct std__allocator_int_* __retval204;
  this203 = v201;
  struct std___Vector_base_int__std__allocator_int__* t205 = this203;
  struct std__allocator_int_* base206 = (struct std__allocator_int_*)((char *)&(t205->_M_impl) + 0);
  __retval204 = base206;
  struct std__allocator_int_* t207 = __retval204;
  return t207;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v208, int* v209, unsigned long v210) {
bb211:
  struct std____new_allocator_int_* this212;
  int* __p213;
  unsigned long __n214;
  this212 = v208;
  __p213 = v209;
  __n214 = v210;
  struct std____new_allocator_int_* t215 = this212;
    unsigned long c216 = 4;
    unsigned long c217 = 16;
    _Bool c218 = ((c216 > c217)) ? 1 : 0;
    if (c218) {
      int* t219 = __p213;
      void* cast220 = (void*)t219;
      unsigned long t221 = __n214;
      unsigned long c222 = 4;
      unsigned long b223 = t221 * c222;
      unsigned long c224 = 4;
      operator_delete_3(cast220, b223, c224);
      return;
    }
  int* t225 = __p213;
  void* cast226 = (void*)t225;
  unsigned long t227 = __n214;
  unsigned long c228 = 4;
  unsigned long b229 = t227 * c228;
  operator_delete_2(cast226, b229);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v230, int* v231, unsigned long v232) {
bb233:
  struct std__allocator_int_* this234;
  int* __p235;
  unsigned long __n236;
  this234 = v230;
  __p235 = v231;
  __n236 = v232;
  struct std__allocator_int_* t237 = this234;
    _Bool r238 = std____is_constant_evaluated();
    if (r238) {
      int* t239 = __p235;
      void* cast240 = (void*)t239;
      operator_delete(cast240);
      return;
    }
  struct std____new_allocator_int_* base241 = (struct std____new_allocator_int_*)((char *)t237 + 0);
  int* t242 = __p235;
  unsigned long t243 = __n236;
  std____new_allocator_int___deallocate(base241, t242, t243);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v244, int* v245, unsigned long v246) {
bb247:
  struct std__allocator_int_* __a248;
  int* __p249;
  unsigned long __n250;
  __a248 = v244;
  __p249 = v245;
  __n250 = v246;
  struct std__allocator_int_* t251 = __a248;
  int* t252 = __p249;
  unsigned long t253 = __n250;
  std__allocator_int___deallocate(t251, t252, t253);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v254, int* v255, unsigned long v256) {
bb257:
  struct std___Vector_base_int__std__allocator_int__* this258;
  int* __p259;
  unsigned long __n260;
  this258 = v254;
  __p259 = v255;
  __n260 = v256;
  struct std___Vector_base_int__std__allocator_int__* t261 = this258;
    int* t262 = __p259;
    _Bool cast263 = (_Bool)t262;
    if (cast263) {
      struct std__allocator_int_* base264 = (struct std__allocator_int_*)((char *)&(t261->_M_impl) + 0);
      int* t265 = __p259;
      unsigned long t266 = __n260;
      std__allocator_traits_std__allocator_int_____deallocate(base264, t265, t266);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v267) {
bb268:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this269;
  this269 = v267;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t270 = this269;
  {
    struct std__allocator_int_* base271 = (struct std__allocator_int_*)((char *)t270 + 0);
    std__allocator_int____allocator(base271);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v272) {
bb273:
  struct std___Vector_base_int__std__allocator_int__* this274;
  this274 = v272;
  struct std___Vector_base_int__std__allocator_int__* t275 = this274;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base276 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t275->_M_impl) + 0);
    int* t277 = base276->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base278 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t275->_M_impl) + 0);
    int* t279 = base278->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base280 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t275->_M_impl) + 0);
    int* t281 = base280->_M_start;
    long diff282 = t279 - t281;
    unsigned long cast283 = (unsigned long)diff282;
    std___Vector_base_int__std__allocator_int______M_deallocate(t275, t277, cast283);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t275->_M_impl);
  }
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v284) {
bb285:
  struct std__vector_int__std__allocator_int__* this286;
  this286 = v284;
  struct std__vector_int__std__allocator_int__* t287 = this286;
  struct std___Vector_base_int__std__allocator_int__* base288 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t287 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base_2(base288);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v289) {
bb290:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this291;
  this291 = v289;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t292 = this291;
  struct std__allocator_int_* base293 = (struct std__allocator_int_*)((char *)t292 + 0);
  std__allocator_int___allocator_2(base293);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base294 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t292 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base294);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* v295) {
bb296:
  struct std___Vector_base_int__std__allocator_int__* this297;
  this297 = v295;
  struct std___Vector_base_int__std__allocator_int__* t298 = this297;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t298->_M_impl);
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v299) {
bb300:
  struct std____new_allocator_int_* this301;
  this301 = v299;
  struct std____new_allocator_int_* t302 = this301;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v303) {
bb304:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this305;
  this305 = v303;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t306 = this305;
  int* c307 = ((void*)0);
  t306->_M_start = c307;
  int* c308 = ((void*)0);
  t306->_M_finish = c308;
  int* c309 = ((void*)0);
  t306->_M_end_of_storage = c309;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v310) {
bb311:
  struct std__allocator_int_* this312;
  this312 = v310;
  struct std__allocator_int_* t313 = this312;
  struct std____new_allocator_int_* base314 = (struct std____new_allocator_int_*)((char *)t313 + 0);
  std____new_allocator_int_____new_allocator_2(base314);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2IPivEET_S4_RKS0_
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* v315, int* v316, int* v317, struct std__allocator_int_* v318) {
bb319:
  struct std__vector_int__std__allocator_int__* this320;
  int* __first321;
  int* __last322;
  struct std__allocator_int_* __a323;
  this320 = v315;
  __first321 = v316;
  __last322 = v317;
  __a323 = v318;
  struct std__vector_int__std__allocator_int__* t324 = this320;
  struct std___Vector_base_int__std__allocator_int__* base325 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t324 + 0);
  struct std__allocator_int_* t326 = __a323;
  std___Vector_base_int__std__allocator_int______Vector_base(base325, t326);
      unsigned long __n327;
      int* t328 = __last322;
      long r329 = _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(&_ZNSt6ranges8distanceE, &__first321, t328);
      unsigned long cast330 = (unsigned long)r329;
      __n327 = cast330;
      int* t331 = __first321;
      int* t332 = __last322;
      unsigned long t333 = __n327;
      void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(t324, t331, t332, t333);
      {
        struct std___Vector_base_int__std__allocator_int__* base334 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t324 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base334);
      }
      return;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v335) {
bb336:
  struct std__allocator_int_* this337;
  this337 = v335;
  struct std__allocator_int_* t338 = this337;
  return;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessIiEEC2ES3_
void __gnu_cxx____ops___Iter_comp_iter_std__less_int______Iter_comp_iter(struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* v339, struct std__less_int_ v340) {
bb341:
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* this342;
  struct std__less_int_ __comp343;
  this342 = v339;
  __comp343 = v340;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v344) {
bb345:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this346;
  int** __retval347;
  this346 = v344;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t348 = this346;
  __retval347 = &t348->_M_current;
  int** t349 = __retval347;
  return t349;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v350, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v351) {
bb352:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs353;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs354;
  long __retval355;
  __lhs353 = v350;
  __rhs354 = v351;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t356 = __lhs353;
  int** r357 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t356);
  int* t358 = *r357;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t359 = __rhs354;
  int** r360 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t359);
  int* t361 = *r360;
  long diff362 = t358 - t361;
  __retval355 = diff362;
  long t363 = __retval355;
  return t363;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v364, int** v365) {
bb366:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this367;
  int** __i368;
  this367 = v364;
  __i368 = v365;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t369 = this367;
  int** t370 = __i368;
  int* t371 = *t370;
  t369->_M_current = t371;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v372, long v373) {
bb374:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this375;
  long __n376;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval377;
  int* ref_tmp0378;
  this375 = v372;
  __n376 = v373;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t379 = this375;
  int* t380 = t379->_M_current;
  long t381 = __n376;
  int* ptr382 = &(t380)[t381];
  ref_tmp0378 = ptr382;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval377, &ref_tmp0378);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t383 = __retval377;
  return t383;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v384) {
bb385:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this386;
  int* __retval387;
  this386 = v384;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t388 = this386;
  int* t389 = t388->_M_current;
  __retval387 = t389;
  int* t390 = __retval387;
  return t390;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v391, int* v392, int* v393) {
bb394:
  struct std__less_int_* this395;
  int* __x396;
  int* __y397;
  _Bool __retval398;
  this395 = v391;
  __x396 = v392;
  __y397 = v393;
  struct std__less_int_* t399 = this395;
  int* t400 = __x396;
  int t401 = *t400;
  int* t402 = __y397;
  int t403 = *t402;
  _Bool c404 = ((t401 < t403)) ? 1 : 0;
  __retval398 = c404;
  _Bool t405 = __retval398;
  return t405;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessIiEEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEESB_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_comp_iter_std__less_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* v406, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v407, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v408) {
bb409:
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* this410;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1411;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it2412;
  _Bool __retval413;
  this410 = v406;
  __it1411 = v407;
  __it2412 = v408;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* t414 = this410;
  struct std__less_int_* cast415 = (struct std__less_int_*)t414;
  int* r416 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it1411);
  int* r417 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it2412);
  _Bool r418 = std__less_int___operator___int_const___int_const___const(cast415, r416, r417);
  __retval413 = r418;
  _Bool t419 = __retval413;
  return t419;
}

// function: _ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessIiEEC2EONS0_15_Iter_comp_iterIS3_EE
void __gnu_cxx____ops___Iter_comp_val_std__less_int______Iter_comp_val(struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* v420, struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* v421) {
bb422:
  struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* this423;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* __comp424;
  this423 = v420;
  __comp424 = v421;
  return;
}

// function: _ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessIiEEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEEbT_RT0_
_Bool bool___gnu_cxx____ops___Iter_comp_val_std__less_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* v425, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v426, int* v427) {
bb428:
  struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* this429;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it430;
  int* __val431;
  _Bool __retval432;
  this429 = v425;
  __it430 = v426;
  __val431 = v427;
  struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* t433 = this429;
  struct std__less_int_* cast434 = (struct std__less_int_*)t433;
  int* r435 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it430);
  int* t436 = __val431;
  _Bool r437 = std__less_int___operator___int_const___int_const___const(cast434, r435, t436);
  __retval432 = r437;
  _Bool t438 = __retval432;
  return t438;
}

// function: _ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops14_Iter_comp_valISt4lessIiEEEEvT_T0_SD_T1_RT2_
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_std__less_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v439, long v440, long v441, int v442, struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* v443) {
bb444:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first445;
  long __holeIndex446;
  long __topIndex447;
  int __value448;
  struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* __comp449;
  long __parent450;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2451;
  __first445 = v439;
  __holeIndex446 = v440;
  __topIndex447 = v441;
  __value448 = v442;
  __comp449 = v443;
  long t452 = __holeIndex446;
  long c453 = 1;
  long b454 = t452 - c453;
  long c455 = 2;
  long b456 = b454 / c455;
  __parent450 = b456;
    while (1) {
      long t457 = __holeIndex446;
      long t458 = __topIndex447;
      _Bool c459 = ((t457 > t458)) ? 1 : 0;
      _Bool ternary460;
      if (c459) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0461;
        struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* t462 = __comp449;
        long t463 = __parent450;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r464 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first445, t463);
        agg_tmp0461 = r464;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t465 = agg_tmp0461;
        _Bool r466 = bool___gnu_cxx____ops___Iter_comp_val_std__less_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t462, t465, &__value448);
        ternary460 = (_Bool)r466;
      } else {
        _Bool c467 = 0;
        ternary460 = (_Bool)c467;
      }
      if (!ternary460) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0468;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1469;
        long t470 = __parent450;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r471 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first445, t470);
        ref_tmp0468 = r471;
        int* r472 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0468);
        int t473 = *r472;
        long t474 = __holeIndex446;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r475 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first445, t474);
        ref_tmp1469 = r475;
        int* r476 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1469);
        *r476 = t473;
        long t477 = __parent450;
        __holeIndex446 = t477;
        long t478 = __holeIndex446;
        long c479 = 1;
        long b480 = t478 - c479;
        long c481 = 2;
        long b482 = b480 / c481;
        __parent450 = b482;
    }
  int t483 = __value448;
  long t484 = __holeIndex446;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r485 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first445, t484);
  ref_tmp2451 = r485;
  int* r486 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp2451);
  *r486 = t483;
  return;
}

// function: _ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_comp_iterISt4lessIiEEEEvT_T0_SD_T1_T2_
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_std__less_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v487, long v488, long v489, int v490, struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ v491) {
bb492:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first493;
  long __holeIndex494;
  long __len495;
  int __value496;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ __comp497;
  long __topIndex498;
  long __secondChild499;
  struct __gnu_cxx____ops___Iter_comp_val_std__less_int__ __cmp500;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2501;
  __first493 = v487;
  __holeIndex494 = v488;
  __len495 = v489;
  __value496 = v490;
  __comp497 = v491;
  long t502 = __holeIndex494;
  __topIndex498 = t502;
  long t503 = __holeIndex494;
  __secondChild499 = t503;
    while (1) {
      long t504 = __secondChild499;
      long t505 = __len495;
      long c506 = 1;
      long b507 = t505 - c506;
      long c508 = 2;
      long b509 = b507 / c508;
      _Bool c510 = ((t504 < b509)) ? 1 : 0;
      if (!c510) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0511;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1512;
        long c513 = 2;
        long t514 = __secondChild499;
        long c515 = 1;
        long b516 = t514 + c515;
        long b517 = c513 * b516;
        __secondChild499 = b517;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0518;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1519;
          long t520 = __secondChild499;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r521 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first493, t520);
          agg_tmp0518 = r521;
          long t522 = __secondChild499;
          long c523 = 1;
          long b524 = t522 - c523;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r525 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first493, b524);
          agg_tmp1519 = r525;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t526 = agg_tmp0518;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t527 = agg_tmp1519;
          _Bool r528 = bool___gnu_cxx____ops___Iter_comp_iter_std__less_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp497, t526, t527);
          if (r528) {
            long t529 = __secondChild499;
            long u530 = t529 - 1;
            __secondChild499 = u530;
          }
        long t531 = __secondChild499;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r532 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first493, t531);
        ref_tmp0511 = r532;
        int* r533 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0511);
        int t534 = *r533;
        long t535 = __holeIndex494;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r536 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first493, t535);
        ref_tmp1512 = r536;
        int* r537 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1512);
        *r537 = t534;
        long t538 = __secondChild499;
        __holeIndex494 = t538;
    }
    long t539 = __len495;
    long c540 = 1;
    long b541 = t539 & c540;
    long c542 = 0;
    _Bool c543 = ((b541 == c542)) ? 1 : 0;
    _Bool ternary544;
    if (c543) {
      long t545 = __secondChild499;
      long t546 = __len495;
      long c547 = 2;
      long b548 = t546 - c547;
      long c549 = 2;
      long b550 = b548 / c549;
      _Bool c551 = ((t545 == b550)) ? 1 : 0;
      ternary544 = (_Bool)c551;
    } else {
      _Bool c552 = 0;
      ternary544 = (_Bool)c552;
    }
    if (ternary544) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2553;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3554;
      long c555 = 2;
      long t556 = __secondChild499;
      long c557 = 1;
      long b558 = t556 + c557;
      long b559 = c555 * b558;
      __secondChild499 = b559;
      long t560 = __secondChild499;
      long c561 = 1;
      long b562 = t560 - c561;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r563 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first493, b562);
      ref_tmp2553 = r563;
      int* r564 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp2553);
      int t565 = *r564;
      long t566 = __holeIndex494;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r567 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first493, t566);
      ref_tmp3554 = r567;
      int* r568 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp3554);
      *r568 = t565;
      long t569 = __secondChild499;
      long c570 = 1;
      long b571 = t569 - c570;
      __holeIndex494 = b571;
    }
  __gnu_cxx____ops___Iter_comp_val_std__less_int______Iter_comp_val(&__cmp500, &__comp497);
  agg_tmp2501 = __first493; // copy
  long t572 = __holeIndex494;
  long t573 = __topIndex498;
  int t574 = __value496;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t575 = agg_tmp2501;
  void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_std__less_int_____(t575, t572, t573, t574, &__cmp500);
  return;
}

// function: _ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterISt4lessIiEEEEvT_SC_RT0_
void void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_std__less_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v576, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v577, struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* v578) {
bb579:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first580;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last581;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* __comp582;
  long __len583;
  long __parent584;
  __first580 = v576;
  __last581 = v577;
  __comp582 = v578;
    long r585 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last581, &__first580);
    long c586 = 2;
    _Bool c587 = ((r585 < c586)) ? 1 : 0;
    if (c587) {
      return;
    }
  long r588 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last581, &__first580);
  __len583 = r588;
  long t589 = __len583;
  long c590 = 2;
  long b591 = t589 - c590;
  long c592 = 2;
  long b593 = b591 / c592;
  __parent584 = b593;
    while (1) {
      _Bool c594 = 1;
      if (!c594) break;
        int __value595;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0596;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0597;
        struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ agg_tmp1598;
        long t599 = __parent584;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r600 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first580, t599);
        ref_tmp0596 = r600;
        int* r601 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0596);
        int t602 = *r601;
        __value595 = t602;
        agg_tmp0597 = __first580; // copy
        long t603 = __parent584;
        long t604 = __len583;
        int t605 = __value595;
        struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* t606 = __comp582;
        agg_tmp1598 = *t606; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t607 = agg_tmp0597;
        struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ t608 = agg_tmp1598;
        void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_std__less_int_____(t607, t603, t604, t605, t608);
          long t609 = __parent584;
          long c610 = 0;
          _Bool c611 = ((t609 == c610)) ? 1 : 0;
          if (c611) {
            return;
          }
        long t612 = __parent584;
        long u613 = t612 - 1;
        __parent584 = u613;
    }
  return;
}

// function: _ZSt9make_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt4lessIiEEvT_S9_T0_
void void_std__make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__less_int___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v614, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v615, struct std__less_int_ v616) {
bb617:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first618;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last619;
  struct std__less_int_ __comp620;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ __cmp621;
  struct std__less_int_ agg_tmp0622;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1623;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2624;
  __first618 = v614;
  __last619 = v615;
  __comp620 = v616;
  struct std__less_int_ t625 = agg_tmp0622;
  __gnu_cxx____ops___Iter_comp_iter_std__less_int______Iter_comp_iter(&__cmp621, t625);
  agg_tmp1623 = __first618; // copy
  agg_tmp2624 = __last619; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t626 = agg_tmp1623;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t627 = agg_tmp2624;
  void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_std__less_int_____(t626, t627, &__cmp621);
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v628) {
bb629:
  struct std__vector_int__std__allocator_int__* this630;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval631;
  this630 = v628;
  struct std__vector_int__std__allocator_int__* t632 = this630;
  struct std___Vector_base_int__std__allocator_int__* base633 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t632 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base634 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base633->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval631, &base634->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t635 = __retval631;
  return t635;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v636) {
bb637:
  struct std__vector_int__std__allocator_int__* this638;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval639;
  this638 = v636;
  struct std__vector_int__std__allocator_int__* t640 = this638;
  struct std___Vector_base_int__std__allocator_int__* base641 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t640 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base642 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base641->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval639, &base642->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t643 = __retval639;
  return t643;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v644, struct std__allocator_int_* v645) {
bb646:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this647;
  struct std__allocator_int_* __a648;
  this647 = v644;
  __a648 = v645;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t649 = this647;
  struct std__allocator_int_* base650 = (struct std__allocator_int_*)((char *)t649 + 0);
  struct std__allocator_int_* t651 = __a648;
  std__allocator_int___allocator(base650, t651);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base652 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t649 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base652);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v653, struct std__allocator_int_* v654) {
bb655:
  struct std___Vector_base_int__std__allocator_int__* this656;
  struct std__allocator_int_* __a657;
  this656 = v653;
  __a657 = v654;
  struct std___Vector_base_int__std__allocator_int__* t658 = this656;
  struct std__allocator_int_* t659 = __a657;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t658->_M_impl, t659);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v660, int** v661, int* v662) {
bb663:
  struct std__ranges____distance_fn* this664;
  int** __first665;
  int* __last666;
  long __retval667;
  this664 = v660;
  __first665 = v661;
  __last666 = v662;
  struct std__ranges____distance_fn* t668 = this664;
  int* t669 = __last666;
  int** t670 = __first665;
  int* t671 = *t670;
  long diff672 = t669 - t671;
  __retval667 = diff672;
  long t673 = __retval667;
  return t673;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v674) {
bb675:
  struct std____new_allocator_int_* this676;
  unsigned long __retval677;
  this676 = v674;
  struct std____new_allocator_int_* t678 = this676;
  unsigned long c679 = 9223372036854775807;
  unsigned long c680 = 4;
  unsigned long b681 = c679 / c680;
  __retval677 = b681;
  unsigned long t682 = __retval677;
  return t682;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v683, unsigned long v684, void* v685) {
bb686:
  struct std____new_allocator_int_* this687;
  unsigned long __n688;
  void* unnamed689;
  int* __retval690;
  this687 = v683;
  __n688 = v684;
  unnamed689 = v685;
  struct std____new_allocator_int_* t691 = this687;
    unsigned long t692 = __n688;
    unsigned long r693 = std____new_allocator_int____M_max_size___const(t691);
    _Bool c694 = ((t692 > r693)) ? 1 : 0;
    if (c694) {
        unsigned long t695 = __n688;
        unsigned long c696 = -1;
        unsigned long c697 = 4;
        unsigned long b698 = c696 / c697;
        _Bool c699 = ((t695 > b698)) ? 1 : 0;
        if (c699) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c700 = 4;
    unsigned long c701 = 16;
    _Bool c702 = ((c700 > c701)) ? 1 : 0;
    if (c702) {
      unsigned long __al703;
      unsigned long c704 = 4;
      __al703 = c704;
      unsigned long t705 = __n688;
      unsigned long c706 = 4;
      unsigned long b707 = t705 * c706;
      unsigned long t708 = __al703;
      void* r709 = operator_new_2(b707, t708);
      int* cast710 = (int*)r709;
      __retval690 = cast710;
      int* t711 = __retval690;
      return t711;
    }
  unsigned long t712 = __n688;
  unsigned long c713 = 4;
  unsigned long b714 = t712 * c713;
  void* r715 = operator_new(b714);
  int* cast716 = (int*)r715;
  __retval690 = cast716;
  int* t717 = __retval690;
  return t717;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v718, unsigned long v719) {
bb720:
  struct std__allocator_int_* this721;
  unsigned long __n722;
  int* __retval723;
  this721 = v718;
  __n722 = v719;
  struct std__allocator_int_* t724 = this721;
    _Bool r725 = std____is_constant_evaluated();
    if (r725) {
        unsigned long t726 = __n722;
        unsigned long c727 = 4;
        unsigned long ovr728;
        _Bool ovf729 = __builtin_mul_overflow(t726, c727, &ovr728);
        __n722 = ovr728;
        if (ovf729) {
          std____throw_bad_array_new_length();
        }
      unsigned long t730 = __n722;
      void* r731 = operator_new(t730);
      int* cast732 = (int*)r731;
      __retval723 = cast732;
      int* t733 = __retval723;
      return t733;
    }
  struct std____new_allocator_int_* base734 = (struct std____new_allocator_int_*)((char *)t724 + 0);
  unsigned long t735 = __n722;
  void* c736 = ((void*)0);
  int* r737 = std____new_allocator_int___allocate(base734, t735, c736);
  __retval723 = r737;
  int* t738 = __retval723;
  return t738;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v739, unsigned long v740) {
bb741:
  struct std__allocator_int_* __a742;
  unsigned long __n743;
  int* __retval744;
  __a742 = v739;
  __n743 = v740;
  struct std__allocator_int_* t745 = __a742;
  unsigned long t746 = __n743;
  int* r747 = std__allocator_int___allocate(t745, t746);
  __retval744 = r747;
  int* t748 = __retval744;
  return t748;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v749, unsigned long v750) {
bb751:
  struct std___Vector_base_int__std__allocator_int__* this752;
  unsigned long __n753;
  int* __retval754;
  this752 = v749;
  __n753 = v750;
  struct std___Vector_base_int__std__allocator_int__* t755 = this752;
  unsigned long t756 = __n753;
  unsigned long c757 = 0;
  _Bool c758 = ((t756 != c757)) ? 1 : 0;
  int* ternary759;
  if (c758) {
    struct std__allocator_int_* base760 = (struct std__allocator_int_*)((char *)&(t755->_M_impl) + 0);
    unsigned long t761 = __n753;
    int* r762 = std__allocator_traits_std__allocator_int_____allocate(base760, t761);
    ternary759 = (int*)r762;
  } else {
    int* c763 = ((void*)0);
    ternary759 = (int*)c763;
  }
  __retval754 = ternary759;
  int* t764 = __retval754;
  return t764;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v765, unsigned long* v766) {
bb767:
  unsigned long* __a768;
  unsigned long* __b769;
  unsigned long* __retval770;
  __a768 = v765;
  __b769 = v766;
    unsigned long* t771 = __b769;
    unsigned long t772 = *t771;
    unsigned long* t773 = __a768;
    unsigned long t774 = *t773;
    _Bool c775 = ((t772 < t774)) ? 1 : 0;
    if (c775) {
      unsigned long* t776 = __b769;
      __retval770 = t776;
      unsigned long* t777 = __retval770;
      return t777;
    }
  unsigned long* t778 = __a768;
  __retval770 = t778;
  unsigned long* t779 = __retval770;
  return t779;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v780) {
bb781:
  struct std__allocator_int_* __a782;
  unsigned long __retval783;
  unsigned long __diffmax784;
  unsigned long __allocmax785;
  __a782 = v780;
  unsigned long c786 = 2305843009213693951;
  __diffmax784 = c786;
  unsigned long c787 = 4611686018427387903;
  __allocmax785 = c787;
  unsigned long* r788 = unsigned_long_const__std__min_unsigned_long_(&__diffmax784, &__allocmax785);
  unsigned long t789 = *r788;
  __retval783 = t789;
  unsigned long t790 = __retval783;
  return t790;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v791, struct std__allocator_int_* v792) {
bb793:
  struct std__allocator_int_* this794;
  struct std__allocator_int_* __a795;
  this794 = v791;
  __a795 = v792;
  struct std__allocator_int_* t796 = this794;
  struct std____new_allocator_int_* base797 = (struct std____new_allocator_int_*)((char *)t796 + 0);
  struct std__allocator_int_* t798 = __a795;
  struct std____new_allocator_int_* base799 = (struct std____new_allocator_int_*)((char *)t798 + 0);
  std____new_allocator_int_____new_allocator(base797, base799);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v800, struct std__allocator_int_* v801) {
bb802:
  unsigned long __n803;
  struct std__allocator_int_* __a804;
  unsigned long __retval805;
  __n803 = v800;
  __a804 = v801;
    struct std__allocator_int_ ref_tmp0806;
    _Bool tmp_exprcleanup807;
    unsigned long t808 = __n803;
    struct std__allocator_int_* t809 = __a804;
    std__allocator_int___allocator(&ref_tmp0806, t809);
      unsigned long r810 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0806);
      _Bool c811 = ((t808 > r810)) ? 1 : 0;
      tmp_exprcleanup807 = c811;
    {
      std__allocator_int____allocator(&ref_tmp0806);
    }
    _Bool t812 = tmp_exprcleanup807;
    if (t812) {
      char* cast813 = (char*)&(_str_5);
      std____throw_length_error(cast813);
    }
  unsigned long t814 = __n803;
  __retval805 = t814;
  unsigned long t815 = __retval805;
  return t815;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb816:
  _Bool __retval817;
    _Bool c818 = 0;
    __retval817 = c818;
    _Bool t819 = __retval817;
    return t819;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v820, int** v821) {
bb822:
  struct std___UninitDestroyGuard_int____void_* this823;
  int** __first824;
  this823 = v820;
  __first824 = v821;
  struct std___UninitDestroyGuard_int____void_* t825 = this823;
  int** t826 = __first824;
  int* t827 = *t826;
  t825->_M_first = t827;
  int** t828 = __first824;
  t825->_M_cur = t828;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v829, int* v830) {
bb831:
  int* __location832;
  int* __args833;
  int* __retval834;
  void* __loc835;
  __location832 = v829;
  __args833 = v830;
  int* t836 = __location832;
  void* cast837 = (void*)t836;
  __loc835 = cast837;
    void* t838 = __loc835;
    int* cast839 = (int*)t838;
    int* t840 = __args833;
    int t841 = *t840;
    *cast839 = t841;
    __retval834 = cast839;
    int* t842 = __retval834;
    return t842;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v843, int* v844) {
bb845:
  int* __p846;
  int* __args847;
  __p846 = v843;
  __args847 = v844;
    _Bool r848 = std____is_constant_evaluated();
    if (r848) {
      int* t849 = __p846;
      int* t850 = __args847;
      int* r851 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t849, t850);
      return;
    }
  int* t852 = __p846;
  void* cast853 = (void*)t852;
  int* cast854 = (int*)cast853;
  int* t855 = __args847;
  int t856 = *t855;
  *cast854 = t856;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v857) {
bb858:
  struct std___UninitDestroyGuard_int____void_* this859;
  this859 = v857;
  struct std___UninitDestroyGuard_int____void_* t860 = this859;
  int** c861 = ((void*)0);
  t860->_M_cur = c861;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v862) {
bb863:
  struct std___UninitDestroyGuard_int____void_* this864;
  this864 = v862;
  struct std___UninitDestroyGuard_int____void_* t865 = this864;
    int** t866 = t865->_M_cur;
    int** c867 = ((void*)0);
    _Bool c868 = ((t866 != c867)) ? 1 : 0;
    if (c868) {
      int* t869 = t865->_M_first;
      int** t870 = t865->_M_cur;
      int* t871 = *t870;
      void_std___Destroy_int__(t869, t871);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v872, int* v873, int* v874) {
bb875:
  int* __first876;
  int* __last877;
  int* __result878;
  int* __retval879;
  struct std___UninitDestroyGuard_int____void_ __guard880;
  __first876 = v872;
  __last877 = v873;
  __result878 = v874;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard880, &__result878);
      while (1) {
        int* t882 = __first876;
        int* t883 = __last877;
        _Bool c884 = ((t882 != t883)) ? 1 : 0;
        if (!c884) break;
        int* t885 = __result878;
        int* t886 = __first876;
        void_std___Construct_int__int__(t885, t886);
      for_step881: ;
        int* t887 = __first876;
        int c888 = 1;
        int* ptr889 = &(t887)[c888];
        __first876 = ptr889;
        int* t890 = __result878;
        int c891 = 1;
        int* ptr892 = &(t890)[c891];
        __result878 = ptr892;
      }
    std___UninitDestroyGuard_int___void___release(&__guard880);
    int* t893 = __result878;
    __retval879 = t893;
    int* t894 = __retval879;
    int* ret_val895 = t894;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard880);
    }
    return ret_val895;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v896) {
bb897:
  int* __it898;
  int* __retval899;
  __it898 = v896;
  int* t900 = __it898;
  __retval899 = t900;
  int* t901 = __retval899;
  return t901;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v902, int* v903, int* v904) {
bb905:
  int* __first906;
  int* __last907;
  int* __result908;
  int* __retval909;
  __first906 = v902;
  __last907 = v903;
  __result908 = v904;
      long __n910;
      int* t911 = __last907;
      int* t912 = __first906;
      long diff913 = t911 - t912;
      __n910 = diff913;
        long t914 = __n910;
        long c915 = 0;
        _Bool c916 = ((t914 > c915)) ? 1 : 0;
        if (c916) {
          int* t917 = __result908;
          int* r918 = int__std____niter_base_int__(t917);
          void* cast919 = (void*)r918;
          int* t920 = __first906;
          int* r921 = int__std____niter_base_int__(t920);
          void* cast922 = (void*)r921;
          long t923 = __n910;
          unsigned long cast924 = (unsigned long)t923;
          unsigned long c925 = 4;
          unsigned long b926 = cast924 * c925;
          void* r927 = memcpy(cast919, cast922, b926);
          long t928 = __n910;
          int* t929 = __result908;
          int* ptr930 = &(t929)[t928];
          __result908 = ptr930;
        }
      int* t931 = __result908;
      __retval909 = t931;
      int* t932 = __retval909;
      return t932;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v933, int* v934, int* v935, struct std__allocator_int_* v936) {
bb937:
  int* __first938;
  int* __last939;
  int* __result940;
  struct std__allocator_int_* unnamed941;
  int* __retval942;
  __first938 = v933;
  __last939 = v934;
  __result940 = v935;
  unnamed941 = v936;
    _Bool r943 = std__is_constant_evaluated();
    if (r943) {
      int* t944 = __first938;
      int* t945 = __last939;
      int* t946 = __result940;
      int* r947 = int__std____do_uninit_copy_int___int___int__(t944, t945, t946);
      __retval942 = r947;
      int* t948 = __retval942;
      return t948;
    }
    int* t949 = __first938;
    int* t950 = __last939;
    int* t951 = __result940;
    int* r952 = int__std__uninitialized_copy_int___int__(t949, t950, t951);
    __retval942 = r952;
    int* t953 = __retval942;
    return t953;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v954, int* v955, int* v956, unsigned long v957) {
bb958:
  struct std__vector_int__std__allocator_int__* this959;
  int* __first960;
  int* __last961;
  unsigned long __n962;
  int* __start963;
  this959 = v954;
  __first960 = v955;
  __last961 = v956;
  __n962 = v957;
  struct std__vector_int__std__allocator_int__* t964 = this959;
  struct std___Vector_base_int__std__allocator_int__* base965 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t964 + 0);
  unsigned long t966 = __n962;
  struct std___Vector_base_int__std__allocator_int__* base967 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t964 + 0);
  struct std__allocator_int_* r968 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base967);
  unsigned long r969 = std__vector_int__std__allocator_int______S_check_init_len(t966, r968);
  int* r970 = std___Vector_base_int__std__allocator_int______M_allocate(base965, r969);
  __start963 = r970;
  int* t971 = __start963;
  struct std___Vector_base_int__std__allocator_int__* base972 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t964 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base973 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base972->_M_impl) + 0);
  base973->_M_finish = t971;
  struct std___Vector_base_int__std__allocator_int__* base974 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t964 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base975 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base974->_M_impl) + 0);
  base975->_M_start = t971;
  int* t976 = __start963;
  unsigned long t977 = __n962;
  int* ptr978 = &(t976)[t977];
  struct std___Vector_base_int__std__allocator_int__* base979 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t964 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base980 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base979->_M_impl) + 0);
  base980->_M_end_of_storage = ptr978;
  int* t981 = __first960;
  int* t982 = __last961;
  int* t983 = __start963;
  struct std___Vector_base_int__std__allocator_int__* base984 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t964 + 0);
  struct std__allocator_int_* r985 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base984);
  int* r986 = int__std____uninitialized_copy_a_int___int___int___int_(t981, t982, t983, r985);
  struct std___Vector_base_int__std__allocator_int__* base987 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t964 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base988 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base987->_M_impl) + 0);
  base988->_M_finish = r986;
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v989, struct std____new_allocator_int_* v990) {
bb991:
  struct std____new_allocator_int_* this992;
  struct std____new_allocator_int_* unnamed993;
  this992 = v989;
  unnamed993 = v990;
  struct std____new_allocator_int_* t994 = this992;
  return;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterISt7greaterIiEEC2ES3_
void __gnu_cxx____ops___Iter_comp_iter_std__greater_int______Iter_comp_iter(struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__* v995, struct std__greater_int_ v996) {
bb997:
  struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__* this998;
  struct std__greater_int_ __comp999;
  this998 = v995;
  __comp999 = v996;
  return;
}

// function: _ZNKSt7greaterIiEclERKiS2_
_Bool std__greater_int___operator___int_const___int_const___const(struct std__greater_int_* v1000, int* v1001, int* v1002) {
bb1003:
  struct std__greater_int_* this1004;
  int* __x1005;
  int* __y1006;
  _Bool __retval1007;
  this1004 = v1000;
  __x1005 = v1001;
  __y1006 = v1002;
  struct std__greater_int_* t1008 = this1004;
  int* t1009 = __x1005;
  int t1010 = *t1009;
  int* t1011 = __y1006;
  int t1012 = *t1011;
  _Bool c1013 = ((t1010 > t1012)) ? 1 : 0;
  __retval1007 = c1013;
  _Bool t1014 = __retval1007;
  return t1014;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterISt7greaterIiEEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEESB_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_comp_iter_std__greater_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__* v1015, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1016, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1017) {
bb1018:
  struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__* this1019;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it11020;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it21021;
  _Bool __retval1022;
  this1019 = v1015;
  __it11020 = v1016;
  __it21021 = v1017;
  struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__* t1023 = this1019;
  struct std__greater_int_* cast1024 = (struct std__greater_int_*)t1023;
  int* r1025 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it11020);
  int* r1026 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it21021);
  _Bool r1027 = std__greater_int___operator___int_const___int_const___const(cast1024, r1025, r1026);
  __retval1022 = r1027;
  _Bool t1028 = __retval1022;
  return t1028;
}

// function: _ZN9__gnu_cxx5__ops14_Iter_comp_valISt7greaterIiEEC2EONS0_15_Iter_comp_iterIS3_EE
void __gnu_cxx____ops___Iter_comp_val_std__greater_int______Iter_comp_val(struct __gnu_cxx____ops___Iter_comp_val_std__greater_int__* v1029, struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__* v1030) {
bb1031:
  struct __gnu_cxx____ops___Iter_comp_val_std__greater_int__* this1032;
  struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__* __comp1033;
  this1032 = v1029;
  __comp1033 = v1030;
  return;
}

// function: _ZN9__gnu_cxx5__ops14_Iter_comp_valISt7greaterIiEEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEEbT_RT0_
_Bool bool___gnu_cxx____ops___Iter_comp_val_std__greater_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____ops___Iter_comp_val_std__greater_int__* v1034, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1035, int* v1036) {
bb1037:
  struct __gnu_cxx____ops___Iter_comp_val_std__greater_int__* this1038;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1039;
  int* __val1040;
  _Bool __retval1041;
  this1038 = v1034;
  __it1039 = v1035;
  __val1040 = v1036;
  struct __gnu_cxx____ops___Iter_comp_val_std__greater_int__* t1042 = this1038;
  struct std__greater_int_* cast1043 = (struct std__greater_int_*)t1042;
  int* r1044 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it1039);
  int* t1045 = __val1040;
  _Bool r1046 = std__greater_int___operator___int_const___int_const___const(cast1043, r1044, t1045);
  __retval1041 = r1046;
  _Bool t1047 = __retval1041;
  return t1047;
}

// function: _ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops14_Iter_comp_valISt7greaterIiEEEEvT_T0_SD_T1_RT2_
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_std__greater_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1048, long v1049, long v1050, int v1051, struct __gnu_cxx____ops___Iter_comp_val_std__greater_int__* v1052) {
bb1053:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1054;
  long __holeIndex1055;
  long __topIndex1056;
  int __value1057;
  struct __gnu_cxx____ops___Iter_comp_val_std__greater_int__* __comp1058;
  long __parent1059;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp21060;
  __first1054 = v1048;
  __holeIndex1055 = v1049;
  __topIndex1056 = v1050;
  __value1057 = v1051;
  __comp1058 = v1052;
  long t1061 = __holeIndex1055;
  long c1062 = 1;
  long b1063 = t1061 - c1062;
  long c1064 = 2;
  long b1065 = b1063 / c1064;
  __parent1059 = b1065;
    while (1) {
      long t1066 = __holeIndex1055;
      long t1067 = __topIndex1056;
      _Bool c1068 = ((t1066 > t1067)) ? 1 : 0;
      _Bool ternary1069;
      if (c1068) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01070;
        struct __gnu_cxx____ops___Iter_comp_val_std__greater_int__* t1071 = __comp1058;
        long t1072 = __parent1059;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1073 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first1054, t1072);
        agg_tmp01070 = r1073;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1074 = agg_tmp01070;
        _Bool r1075 = bool___gnu_cxx____ops___Iter_comp_val_std__greater_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t1071, t1074, &__value1057);
        ternary1069 = (_Bool)r1075;
      } else {
        _Bool c1076 = 0;
        ternary1069 = (_Bool)c1076;
      }
      if (!ternary1069) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01077;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11078;
        long t1079 = __parent1059;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1080 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first1054, t1079);
        ref_tmp01077 = r1080;
        int* r1081 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp01077);
        int t1082 = *r1081;
        long t1083 = __holeIndex1055;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1084 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first1054, t1083);
        ref_tmp11078 = r1084;
        int* r1085 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp11078);
        *r1085 = t1082;
        long t1086 = __parent1059;
        __holeIndex1055 = t1086;
        long t1087 = __holeIndex1055;
        long c1088 = 1;
        long b1089 = t1087 - c1088;
        long c1090 = 2;
        long b1091 = b1089 / c1090;
        __parent1059 = b1091;
    }
  int t1092 = __value1057;
  long t1093 = __holeIndex1055;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1094 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first1054, t1093);
  ref_tmp21060 = r1094;
  int* r1095 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp21060);
  *r1095 = t1092;
  return;
}

// function: _ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_comp_iterISt7greaterIiEEEEvT_T0_SD_T1_T2_
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_std__greater_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1096, long v1097, long v1098, int v1099, struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__ v1100) {
bb1101:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1102;
  long __holeIndex1103;
  long __len1104;
  int __value1105;
  struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__ __comp1106;
  long __topIndex1107;
  long __secondChild1108;
  struct __gnu_cxx____ops___Iter_comp_val_std__greater_int__ __cmp1109;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21110;
  __first1102 = v1096;
  __holeIndex1103 = v1097;
  __len1104 = v1098;
  __value1105 = v1099;
  __comp1106 = v1100;
  long t1111 = __holeIndex1103;
  __topIndex1107 = t1111;
  long t1112 = __holeIndex1103;
  __secondChild1108 = t1112;
    while (1) {
      long t1113 = __secondChild1108;
      long t1114 = __len1104;
      long c1115 = 1;
      long b1116 = t1114 - c1115;
      long c1117 = 2;
      long b1118 = b1116 / c1117;
      _Bool c1119 = ((t1113 < b1118)) ? 1 : 0;
      if (!c1119) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01120;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11121;
        long c1122 = 2;
        long t1123 = __secondChild1108;
        long c1124 = 1;
        long b1125 = t1123 + c1124;
        long b1126 = c1122 * b1125;
        __secondChild1108 = b1126;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01127;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11128;
          long t1129 = __secondChild1108;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1130 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first1102, t1129);
          agg_tmp01127 = r1130;
          long t1131 = __secondChild1108;
          long c1132 = 1;
          long b1133 = t1131 - c1132;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1134 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first1102, b1133);
          agg_tmp11128 = r1134;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1135 = agg_tmp01127;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1136 = agg_tmp11128;
          _Bool r1137 = bool___gnu_cxx____ops___Iter_comp_iter_std__greater_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp1106, t1135, t1136);
          if (r1137) {
            long t1138 = __secondChild1108;
            long u1139 = t1138 - 1;
            __secondChild1108 = u1139;
          }
        long t1140 = __secondChild1108;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1141 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first1102, t1140);
        ref_tmp01120 = r1141;
        int* r1142 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp01120);
        int t1143 = *r1142;
        long t1144 = __holeIndex1103;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1145 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first1102, t1144);
        ref_tmp11121 = r1145;
        int* r1146 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp11121);
        *r1146 = t1143;
        long t1147 = __secondChild1108;
        __holeIndex1103 = t1147;
    }
    long t1148 = __len1104;
    long c1149 = 1;
    long b1150 = t1148 & c1149;
    long c1151 = 0;
    _Bool c1152 = ((b1150 == c1151)) ? 1 : 0;
    _Bool ternary1153;
    if (c1152) {
      long t1154 = __secondChild1108;
      long t1155 = __len1104;
      long c1156 = 2;
      long b1157 = t1155 - c1156;
      long c1158 = 2;
      long b1159 = b1157 / c1158;
      _Bool c1160 = ((t1154 == b1159)) ? 1 : 0;
      ternary1153 = (_Bool)c1160;
    } else {
      _Bool c1161 = 0;
      ternary1153 = (_Bool)c1161;
    }
    if (ternary1153) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp21162;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp31163;
      long c1164 = 2;
      long t1165 = __secondChild1108;
      long c1166 = 1;
      long b1167 = t1165 + c1166;
      long b1168 = c1164 * b1167;
      __secondChild1108 = b1168;
      long t1169 = __secondChild1108;
      long c1170 = 1;
      long b1171 = t1169 - c1170;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1172 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first1102, b1171);
      ref_tmp21162 = r1172;
      int* r1173 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp21162);
      int t1174 = *r1173;
      long t1175 = __holeIndex1103;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1176 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first1102, t1175);
      ref_tmp31163 = r1176;
      int* r1177 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp31163);
      *r1177 = t1174;
      long t1178 = __secondChild1108;
      long c1179 = 1;
      long b1180 = t1178 - c1179;
      __holeIndex1103 = b1180;
    }
  __gnu_cxx____ops___Iter_comp_val_std__greater_int______Iter_comp_val(&__cmp1109, &__comp1106);
  agg_tmp21110 = __first1102; // copy
  long t1181 = __holeIndex1103;
  long t1182 = __topIndex1107;
  int t1183 = __value1105;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1184 = agg_tmp21110;
  void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_std__greater_int_____(t1184, t1181, t1182, t1183, &__cmp1109);
  return;
}

// function: _ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterISt7greaterIiEEEEvT_SC_RT0_
void void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_std__greater_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1185, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1186, struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__* v1187) {
bb1188:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1189;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1190;
  struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__* __comp1191;
  long __len1192;
  long __parent1193;
  __first1189 = v1185;
  __last1190 = v1186;
  __comp1191 = v1187;
    long r1194 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last1190, &__first1189);
    long c1195 = 2;
    _Bool c1196 = ((r1194 < c1195)) ? 1 : 0;
    if (c1196) {
      return;
    }
  long r1197 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last1190, &__first1189);
  __len1192 = r1197;
  long t1198 = __len1192;
  long c1199 = 2;
  long b1200 = t1198 - c1199;
  long c1201 = 2;
  long b1202 = b1200 / c1201;
  __parent1193 = b1202;
    while (1) {
      _Bool c1203 = 1;
      if (!c1203) break;
        int __value1204;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01205;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01206;
        struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__ agg_tmp11207;
        long t1208 = __parent1193;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1209 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first1189, t1208);
        ref_tmp01205 = r1209;
        int* r1210 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp01205);
        int t1211 = *r1210;
        __value1204 = t1211;
        agg_tmp01206 = __first1189; // copy
        long t1212 = __parent1193;
        long t1213 = __len1192;
        int t1214 = __value1204;
        struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__* t1215 = __comp1191;
        agg_tmp11207 = *t1215; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1216 = agg_tmp01206;
        struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__ t1217 = agg_tmp11207;
        void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_std__greater_int_____(t1216, t1212, t1213, t1214, t1217);
          long t1218 = __parent1193;
          long c1219 = 0;
          _Bool c1220 = ((t1218 == c1219)) ? 1 : 0;
          if (c1220) {
            return;
          }
        long t1221 = __parent1193;
        long u1222 = t1221 - 1;
        __parent1193 = u1222;
    }
  return;
}

// function: _ZSt9make_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt7greaterIiEEvT_S9_T0_
void void_std__make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__greater_int___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1223, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1224, struct std__greater_int_ v1225) {
bb1226:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1227;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1228;
  struct std__greater_int_ __comp1229;
  struct __gnu_cxx____ops___Iter_comp_iter_std__greater_int__ __cmp1230;
  struct std__greater_int_ agg_tmp01231;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11232;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21233;
  __first1227 = v1223;
  __last1228 = v1224;
  __comp1229 = v1225;
  struct std__greater_int_ t1234 = agg_tmp01231;
  __gnu_cxx____ops___Iter_comp_iter_std__greater_int______Iter_comp_iter(&__cmp1230, t1234);
  agg_tmp11232 = __first1227; // copy
  agg_tmp21233 = __last1228; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1235 = agg_tmp11232;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1236 = agg_tmp21233;
  void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_std__greater_int_____(t1235, t1236, &__cmp1230);
  return;
}

// function: _ZN12mycomparisonC2ERKb
void mycomparison__mycomparison(struct mycomparison* v1237, _Bool* v1238) {
bb1239:
  struct mycomparison* this1240;
  _Bool* revparam1241;
  this1240 = v1237;
  revparam1241 = v1238;
  struct mycomparison* t1242 = this1240;
  _Bool* t1243 = revparam1241;
  _Bool t1244 = *t1243;
  t1242->reverse = t1244;
  return;
}

