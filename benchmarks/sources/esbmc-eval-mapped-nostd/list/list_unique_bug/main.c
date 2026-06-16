extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_double_ { unsigned char _M_storage[8]; };
struct std___List_const_iterator_double_ { struct std____detail___List_node_base* _M_node; };
struct std___List_iterator_double_ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_double___ { struct std__allocator_std___List_node_double__* _M_alloc; struct std___List_node_double_* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____false_type { unsigned char __field0; };
struct std____list___Scratch_list_std____detail___List_node_base_ { struct std____detail___List_node_base __field0; };
struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_ { unsigned char __field0; };
struct std____new_allocator_double_ { unsigned char __field0; };
struct std____new_allocator_std___List_node_double__ { unsigned char __field0; };
struct std__allocator_double_ { unsigned char __field0; };
struct std__allocator_std___List_node_double__ { unsigned char __field0; };
struct std___List_node_double_ { struct std____detail___List_node_base __field0; struct __gnu_cxx____aligned_membuf_double_ _M_storage; };
struct std____allocated_obj_std__allocator_std___List_node_double___ { struct std____allocated_ptr_std__allocator_std___List_node_double___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std____cxx11___List_base_double__std__allocator_double_____List_impl { struct std____detail___List_node_header _M_node; };
struct std____cxx11___List_base_double__std__allocator_double__ { struct std____cxx11___List_base_double__std__allocator_double_____List_impl _M_impl; };
struct std____cxx11__list_double__std__allocator_double__ { struct std____cxx11___List_base_double__std__allocator_double__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
double __const_main_mydoubles[10] = {0x1.84ccccccccccdp3, 0x1.5c28f5c28f5c3p1, 0x1.24p6, 0x1.98a3d70a3d70ap3, 0x1.91eb851eb851fp1, 0x1.98a3d70a3d70ap3, 0x1.2566666666666p6, 0x1.21p6, 0x1.e99999999999ap3, 0x1.21p6};
char _str[19] = "mylist.size() == 8";
char _str_1[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_unique_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[12] = "*it == 2.72";
char _str_3[12] = "*it == 3.14";
char _str_4[13] = "*it != 12.15";
char _str_5[13] = "*it == 12.77";
char _str_6[12] = "*it == 15.3";
char _str_7[13] = "*it != 72.25";
char _str_8[12] = "*it == 73.0";
char _str_9[13] = "*it == 73.35";
char _str_10[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIdSaIdEE4backEv[84] = "reference std::list<double>::back() [_Tp = double, _Alloc = std::allocator<double>]";
char _str_11[15] = "!this->empty()";
_Bool same_integral_part(double p0, double p1);
void std__allocator_double___allocator(struct std__allocator_double_* p0);
void std____cxx11__list_double__std__allocator_double_____list_double___void_(struct std____cxx11__list_double__std__allocator_double__* p0, double* p1, double* p2, struct std__allocator_double_* p3);
void std__allocator_double____allocator(struct std__allocator_double_* p0);
struct std___List_iterator_double_* std___List_iterator_double___operator___3(struct std___List_iterator_double_* p0);
void std____list___Scratch_list_std____detail___List_node_base____Scratch_list(struct std____list___Scratch_list_std____detail___List_node_base_* p0);
extern int __gxx_personality_v0();
extern void std____detail___List_node_base___M_transfer(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1, struct std____detail___List_node_base* p2);
void std____list___Scratch_list_std____detail___List_node_base____M_take_one(struct std____list___Scratch_list_std____detail___List_node_base_* p0, struct std____detail___List_node_base* p1);
_Bool std____list___Scratch_list_std____detail___List_node_base___empty___const(struct std____list___Scratch_list_std____detail___List_node_base_* p0);
_Bool std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void___operator___std____detail___List_node_base___std____detail___List_node_base___const(struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_* p0, struct std____detail___List_node_base* p1, struct std____detail___List_node_base* p2);
void void_std____list___Scratch_list_std____detail___List_node_base___merge_std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void___(struct std____list___Scratch_list_std____detail___List_node_base_* p0, struct std____detail___List_node_base* p1, struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_ p2);
extern void std____detail___List_node_base__swap(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1);
void std____list___Scratch_list_std____detail___List_node_base___swap(struct std____list___Scratch_list_std____detail___List_node_base_* p0, struct std____detail___List_node_base* p1);
void std____list___Scratch_list_std____detail___List_node_base____M_put_all(struct std____list___Scratch_list_std____detail___List_node_base_* p0, struct std____detail___List_node_base* p1);
void std____cxx11__list_double__std__allocator_double_____sort(struct std____cxx11__list_double__std__allocator_double__* p0);
struct std__allocator_std___List_node_double__* std____cxx11___List_base_double__std__allocator_double______M_get_Node_allocator___const(struct std____cxx11___List_base_double__std__allocator_double__* p0);
void std__allocator_double___allocator_std___List_node_double___(struct std__allocator_double_* p0, struct std__allocator_std___List_node_double__* p1);
struct std__allocator_double_ std____cxx11__list_double__std__allocator_double_____get_allocator___const(struct std____cxx11__list_double__std__allocator_double__* p0);
void std____cxx11__list_double__std__allocator_double_____list(struct std____cxx11__list_double__std__allocator_double__* p0, struct std__allocator_double_* p1);
struct std___List_iterator_double_ std___List_const_iterator_double____M_const_cast___const(struct std___List_const_iterator_double_* p0);
_Bool std__operator___3(struct std___List_const_iterator_double_* p0, struct std___List_const_iterator_double_* p1);
_Bool std__operator__(struct std__allocator_std___List_node_double__* p0, struct std__allocator_std___List_node_double__* p1);
extern void abort();
void std____cxx11__list_double__std__allocator_double______M_check_equal_allocators(struct std____cxx11__list_double__std__allocator_double__* p0, struct std____cxx11__list_double__std__allocator_double__* p1);
void std____cxx11__list_double__std__allocator_double______M_transfer(struct std____cxx11__list_double__std__allocator_double__* p0, struct std___List_iterator_double_ p1, struct std___List_iterator_double_ p2, struct std___List_iterator_double_ p3);
void std____cxx11___List_base_double__std__allocator_double______M_dec_size(struct std____cxx11___List_base_double__std__allocator_double__* p0, unsigned long p1);
void std____cxx11__list_double__std__allocator_double_____splice(struct std____cxx11__list_double__std__allocator_double__* p0, struct std___List_const_iterator_double_ p1, struct std____cxx11__list_double__std__allocator_double__* p2, struct std___List_const_iterator_double_ p3);
void std____cxx11__list_double__std__allocator_double_____splice_2(struct std____cxx11__list_double__std__allocator_double__* p0, struct std___List_const_iterator_double_ p1, struct std____cxx11__list_double__std__allocator_double__* p2, struct std___List_const_iterator_double_ p3);
void std___List_const_iterator_double____List_const_iterator(struct std___List_const_iterator_double_* p0, struct std___List_iterator_double_* p1);
struct std___List_iterator_double_* std___List_iterator_double___operator_(struct std___List_iterator_double_* p0, struct std___List_iterator_double_* p1);
unsigned long std____cxx11__list_double__std__allocator_double_____unique(struct std____cxx11__list_double__std__allocator_double__* p0);
unsigned long std____cxx11___List_base_double__std__allocator_double______M_get_size___const(struct std____cxx11___List_base_double__std__allocator_double__* p0);
unsigned long std____cxx11__list_double__std__allocator_double_____size___const(struct std____cxx11__list_double__std__allocator_double__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std___List_iterator_double_ std____cxx11__list_double__std__allocator_double_____begin(struct std____cxx11__list_double__std__allocator_double__* p0);
double* std___List_iterator_double___operator____const(struct std___List_iterator_double_* p0);
struct std___List_iterator_double_ std___List_iterator_double___operator___2(struct std___List_iterator_double_* p0, int p1);
void std____cxx11__list_double__std__allocator_double______list(struct std____cxx11__list_double__std__allocator_double__* p0);
int main();
void std____new_allocator_double_____new_allocator(struct std____new_allocator_double_* p0);
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* p0);
void void_std__destroy_at_double_(double* p0);
void void_std__allocator_traits_std__allocator_std___List_node_double_______destroy_double_(struct std__allocator_std___List_node_double__* p0, double* p1);
void* __gnu_cxx____aligned_membuf_double____M_addr(struct __gnu_cxx____aligned_membuf_double_* p0);
double* __gnu_cxx____aligned_membuf_double____M_ptr(struct __gnu_cxx____aligned_membuf_double_* p0);
double* std___List_node_double____M_valptr(struct std___List_node_double_* p0);
_Bool std____is_constant_evaluated();
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_std___List_node_double_____deallocate(struct std____new_allocator_std___List_node_double__* p0, struct std___List_node_double_* p1, unsigned long p2);
void std__allocator_std___List_node_double_____deallocate(struct std__allocator_std___List_node_double__* p0, struct std___List_node_double_* p1, unsigned long p2);
void std__allocator_traits_std__allocator_std___List_node_double_______deallocate(struct std__allocator_std___List_node_double__* p0, struct std___List_node_double_* p1, unsigned long p2);
void std____cxx11___List_base_double__std__allocator_double______M_put_node(struct std____cxx11___List_base_double__std__allocator_double__* p0, struct std___List_node_double_* p1);
void std____cxx11___List_base_double__std__allocator_double______M_destroy_node(struct std____cxx11___List_base_double__std__allocator_double__* p0, struct std___List_node_double_* p1);
struct std___List_node_double_* std___List_node_double____M_node_ptr(struct std___List_node_double_* p0);
void std____cxx11___List_base_double__std__allocator_double______M_clear(struct std____cxx11___List_base_double__std__allocator_double__* p0);
void std____cxx11___List_base_double__std__allocator_double______List_impl____List_impl(struct std____cxx11___List_base_double__std__allocator_double_____List_impl* p0);
void std____cxx11___List_base_double__std__allocator_double_______List_base(struct std____cxx11___List_base_double__std__allocator_double__* p0);
void std__allocator_std___List_node_double_____allocator_double_(struct std__allocator_std___List_node_double__* p0, struct std__allocator_double_* p1);
void std____cxx11___List_base_double__std__allocator_double______List_impl___List_impl(struct std____cxx11___List_base_double__std__allocator_double_____List_impl* p0, struct std__allocator_std___List_node_double__* p1);
void std____cxx11___List_base_double__std__allocator_double______List_base(struct std____cxx11___List_base_double__std__allocator_double__* p0, struct std__allocator_std___List_node_double__* p1);
void std__allocator_std___List_node_double______allocator(struct std__allocator_std___List_node_double__* p0);
struct std__allocator_std___List_node_double__* std____cxx11___List_base_double__std__allocator_double______M_get_Node_allocator(struct std____cxx11___List_base_double__std__allocator_double__* p0);
extern void std____throw_bad_array_new_length();
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_std___List_node_double______M_max_size___const(struct std____new_allocator_std___List_node_double__* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
struct std___List_node_double_* std____new_allocator_std___List_node_double_____allocate(struct std____new_allocator_std___List_node_double__* p0, unsigned long p1, void* p2);
struct std___List_node_double_* std__allocator_std___List_node_double_____allocate(struct std__allocator_std___List_node_double__* p0, unsigned long p1);
struct std___List_node_double_* std__allocator_traits_std__allocator_std___List_node_double_______allocate(struct std__allocator_std___List_node_double__* p0, unsigned long p1);
void std____allocated_ptr_std__allocator_std___List_node_double_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_double___* p0, struct std__allocator_std___List_node_double__* p1, struct std___List_node_double_* p2);
struct std____allocated_ptr_std__allocator_std___List_node_double___ std____allocated_ptr_std__allocator_std___List_node_double______std____allocate_guarded_std__allocator_std___List_node_double_____(struct std__allocator_std___List_node_double__* p0);
void std____allocated_obj_std__allocator_std___List_node_double_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_double___* p0, struct std____allocated_ptr_std__allocator_std___List_node_double___* p1);
void std____allocated_ptr_std__allocator_std___List_node_double__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_double___* p0);
struct std____allocated_obj_std__allocator_std___List_node_double___ std____allocated_obj_std__allocator_std___List_node_double______std____allocate_guarded_obj_std__allocator_std___List_node_double_____(struct std__allocator_std___List_node_double__* p0);
double* _ZSt12construct_atIdJRdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(double* p0, double* p1);
void void_std__allocator_traits_std__allocator_std___List_node_double_______construct_double__double__(struct std__allocator_std___List_node_double__* p0, double* p1, double* p2);
struct std___List_node_double_* std____allocated_obj_std__allocator_std___List_node_double_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_double___* p0);
struct std___List_node_double_* std___List_node_double___std____exchange_std___List_node_double____decltype_nullptr___std___List_node_double_____decltype(struct std___List_node_double_** p0, void** p1);
struct std___List_node_double_* std____allocated_ptr_std__allocator_std___List_node_double_______release(struct std____allocated_ptr_std__allocator_std___List_node_double___* p0);
void std____allocated_obj_std__allocator_std___List_node_double__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_double___* p0);
struct std___List_node_double_* std___List_node_double___std____cxx11__list_double__std__allocator_double______M_create_node_double__(struct std____cxx11__list_double__std__allocator_double__* p0, double* p1);
extern void std____detail___List_node_base___M_hook(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1);
void std____cxx11___List_base_double__std__allocator_double______M_inc_size(struct std____cxx11___List_base_double__std__allocator_double__* p0, unsigned long p1);
void void_std____cxx11__list_double__std__allocator_double______M_insert_double__(struct std____cxx11__list_double__std__allocator_double__* p0, struct std___List_iterator_double_ p1, double* p2);
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* p0);
_Bool std____cxx11__list_double__std__allocator_double_____empty___const(struct std____cxx11__list_double__std__allocator_double__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___List_iterator_double_* std___List_iterator_double___operator__(struct std___List_iterator_double_* p0);
double* std____cxx11__list_double__std__allocator_double_____back(struct std____cxx11__list_double__std__allocator_double__* p0);
double* double__std____cxx11__list_double__std__allocator_double_____emplace_back_double__(struct std____cxx11__list_double__std__allocator_double__* p0, double* p1);
_Bool std__operator___2(struct std___List_iterator_double_* p0, struct std___List_iterator_double_* p1);
void std___List_iterator_double____List_iterator(struct std___List_iterator_double_* p0, struct std____detail___List_node_base* p1);
struct std___List_iterator_double_ std____cxx11__list_double__std__allocator_double_____end(struct std____cxx11__list_double__std__allocator_double__* p0);
void void_std____cxx11__list_double__std__allocator_double______M_initialize_dispatch_double__(struct std____cxx11__list_double__std__allocator_double__* p0, double* p1, double* p2, struct std____false_type p3);
void std____new_allocator_std___List_node_double_______new_allocator_2(struct std____new_allocator_std___List_node_double__* p0);
void std____new_allocator_std___List_node_double_______new_allocator(struct std____new_allocator_std___List_node_double__* p0, struct std____new_allocator_std___List_node_double__* p1);
void std__allocator_std___List_node_double_____allocator(struct std__allocator_std___List_node_double__* p0, struct std__allocator_std___List_node_double__* p1);
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* p0);
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* p0, struct std____detail___List_size* p1);
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* p0);
void std____allocated_ptr_std__allocator_std___List_node_double_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_double___* p0, struct std____allocated_ptr_std__allocator_std___List_node_double___* p1);
struct std___List_node_double_* std___List_node_double___std__to_address_std___List_node_double___(struct std___List_node_double_* p0);
struct std___List_node_double_* auto_std____to_address_std___List_node_double___(struct std___List_node_double_** p0);
struct std___List_node_double_* std____allocated_ptr_std__allocator_std___List_node_double_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_double___* p0);
_Bool std____allocated_ptr_std__allocator_std___List_node_double_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_double___* p0);
struct std____detail___List_node_base* std____detail___List_node_base___M_base(struct std____detail___List_node_base* p0);

// function: _Z18same_integral_partdd
_Bool same_integral_part(double v0, double v1) {
bb2: ;
  double first3;
  double second4;
  _Bool __retval5;
  first3 = v0;
  second4 = v1;
  double t6 = first3;
  int cast7 = (int)t6;
  double t8 = second4;
  int cast9 = (int)t8;
  _Bool c10 = ((cast7 == cast9)) ? 1 : 0;
  __retval5 = c10;
  _Bool t11 = __retval5;
  return t11;
}

// function: _ZNSaIdEC2Ev
void std__allocator_double___allocator(struct std__allocator_double_* v12) {
bb13: ;
  struct std__allocator_double_* this14;
  this14 = v12;
  struct std__allocator_double_* t15 = this14;
  struct std____new_allocator_double_* base16 = (struct std____new_allocator_double_*)((char *)t15 + 0);
  std____new_allocator_double_____new_allocator(base16);
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEEC2IPdvEET_S5_RKS1_
void std____cxx11__list_double__std__allocator_double_____list_double___void_(struct std____cxx11__list_double__std__allocator_double__* v17, double* v18, double* v19, struct std__allocator_double_* v20) {
bb21: ;
  struct std____cxx11__list_double__std__allocator_double__* this22;
  double* __first23;
  double* __last24;
  struct std__allocator_double_* __a25;
  struct std__allocator_std___List_node_double__ ref_tmp026;
  struct std____false_type agg_tmp027;
  this22 = v17;
  __first23 = v18;
  __last24 = v19;
  __a25 = v20;
  struct std____cxx11__list_double__std__allocator_double__* t28 = this22;
  struct std____cxx11___List_base_double__std__allocator_double__* base29 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t28 + 0);
  struct std__allocator_double_* t30 = __a25;
  std__allocator_std___List_node_double_____allocator_double_(&ref_tmp026, t30);
    std____cxx11___List_base_double__std__allocator_double______List_base(base29, &ref_tmp026);
    if (__cir_exc_active) {
      {
        std__allocator_std___List_node_double______allocator(&ref_tmp026);
      }
      return;
    }
  {
    std__allocator_std___List_node_double______allocator(&ref_tmp026);
  }
    double* t31 = __first23;
    double* t32 = __last24;
    struct std____false_type t33 = agg_tmp027;
    void_std____cxx11__list_double__std__allocator_double______M_initialize_dispatch_double__(t28, t31, t32, t33);
    if (__cir_exc_active) {
      {
        struct std____cxx11___List_base_double__std__allocator_double__* base34 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t28 + 0);
        std____cxx11___List_base_double__std__allocator_double_______List_base(base34);
      }
      return;
    }
  return;
}

// function: _ZNSaIdED2Ev
void std__allocator_double____allocator(struct std__allocator_double_* v35) {
bb36: ;
  struct std__allocator_double_* this37;
  this37 = v35;
  struct std__allocator_double_* t38 = this37;
  return;
}

// function: _ZNSt14_List_iteratorIdEppEv
struct std___List_iterator_double_* std___List_iterator_double___operator___3(struct std___List_iterator_double_* v39) {
bb40: ;
  struct std___List_iterator_double_* this41;
  struct std___List_iterator_double_* __retval42;
  this41 = v39;
  struct std___List_iterator_double_* t43 = this41;
  struct std____detail___List_node_base* t44 = t43->_M_node;
  struct std____detail___List_node_base* t45 = t44->_M_next;
  t43->_M_node = t45;
  __retval42 = t43;
  struct std___List_iterator_double_* t46 = __retval42;
  return t46;
}

// function: _ZNSt6__list13_Scratch_listINSt8__detail15_List_node_baseEEC2Ev
void std____list___Scratch_list_std____detail___List_node_base____Scratch_list(struct std____list___Scratch_list_std____detail___List_node_base_* v47) {
bb48: ;
  struct std____list___Scratch_list_std____detail___List_node_base_* this49;
  this49 = v47;
  struct std____list___Scratch_list_std____detail___List_node_base_* t50 = this49;
  struct std____detail___List_node_base* base51 = (struct std____detail___List_node_base*)((char *)t50 + 0);
  struct std____detail___List_node_base* base52 = (struct std____detail___List_node_base*)((char *)t50 + 0);
  struct std____detail___List_node_base* r53 = std____detail___List_node_base___M_base(base52);
  if (__cir_exc_active) {
    return;
  }
  struct std____detail___List_node_base* base54 = (struct std____detail___List_node_base*)((char *)t50 + 0);
  base54->_M_prev = r53;
  struct std____detail___List_node_base* base55 = (struct std____detail___List_node_base*)((char *)t50 + 0);
  base55->_M_next = r53;
  return;
}

// function: _ZNSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE11_M_take_oneEPS2_
void std____list___Scratch_list_std____detail___List_node_base____M_take_one(struct std____list___Scratch_list_std____detail___List_node_base_* v56, struct std____detail___List_node_base* v57) {
bb58: ;
  struct std____list___Scratch_list_std____detail___List_node_base_* this59;
  struct std____detail___List_node_base* __i60;
  this59 = v56;
  __i60 = v57;
  struct std____list___Scratch_list_std____detail___List_node_base_* t61 = this59;
  struct std____detail___List_node_base* base62 = (struct std____detail___List_node_base*)((char *)t61 + 0);
  struct std____detail___List_node_base* t63 = __i60;
  struct std____detail___List_node_base* t64 = __i60;
  struct std____detail___List_node_base* t65 = t64->_M_next;
  std____detail___List_node_base___M_transfer(base62, t63, t65);
  return;
}

// function: _ZNKSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE5emptyEv
_Bool std____list___Scratch_list_std____detail___List_node_base___empty___const(struct std____list___Scratch_list_std____detail___List_node_base_* v66) {
bb67: ;
  struct std____list___Scratch_list_std____detail___List_node_base_* this68;
  _Bool __retval69;
  this68 = v66;
  struct std____list___Scratch_list_std____detail___List_node_base_* t70 = this68;
  struct std____detail___List_node_base* base71 = (struct std____detail___List_node_base*)((char *)t70 + 0);
  struct std____detail___List_node_base* t72 = base71->_M_next;
  struct std____detail___List_node_base* base73 = (struct std____detail___List_node_base*)((char *)t70 + 0);
  struct std____detail___List_node_base* r74 = std____detail___List_node_base___M_base___const(base73);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool c75 = ((t72 == r74)) ? 1 : 0;
  __retval69 = c75;
  _Bool t76 = __retval69;
  return t76;
}

// function: _ZNKSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE8_Ptr_cmpISt14_List_iteratorIdEvEclEPS2_S8_
_Bool std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void___operator___std____detail___List_node_base___std____detail___List_node_base___const(struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_* v77, struct std____detail___List_node_base* v78, struct std____detail___List_node_base* v79) {
bb80: ;
  struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_* this81;
  struct std____detail___List_node_base* __lhs82;
  struct std____detail___List_node_base* __rhs83;
  _Bool __retval84;
  struct std___List_iterator_double_ ref_tmp085;
  struct std___List_iterator_double_ ref_tmp186;
  this81 = v77;
  __lhs82 = v78;
  __rhs83 = v79;
  struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_* t87 = this81;
  struct std____detail___List_node_base* t88 = __lhs82;
  std___List_iterator_double____List_iterator(&ref_tmp085, t88);
  double* r89 = std___List_iterator_double___operator____const(&ref_tmp085);
  double t90 = *r89;
  struct std____detail___List_node_base* t91 = __rhs83;
  std___List_iterator_double____List_iterator(&ref_tmp186, t91);
  double* r92 = std___List_iterator_double___operator____const(&ref_tmp186);
  double t93 = *r92;
  _Bool c94 = ((t90 < t93)) ? 1 : 0;
  __retval84 = c94;
  _Bool t95 = __retval84;
  return t95;
}

// function: _ZNSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE5mergeINS3_8_Ptr_cmpISt14_List_iteratorIdEvEEEEvRS2_T_
void void_std____list___Scratch_list_std____detail___List_node_base___merge_std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void___(struct std____list___Scratch_list_std____detail___List_node_base_* v96, struct std____detail___List_node_base* v97, struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_ v98) {
bb99: ;
  struct std____list___Scratch_list_std____detail___List_node_base_* this100;
  struct std____detail___List_node_base* __x101;
  struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_ __comp102;
  struct std____detail___List_node_base* __first1103;
  struct std____detail___List_node_base* __last1104;
  struct std____detail___List_node_base* __first2105;
  struct std____detail___List_node_base* __last2106;
  this100 = v96;
  __x101 = v97;
  __comp102 = v98;
  struct std____list___Scratch_list_std____detail___List_node_base_* t107 = this100;
  struct std____detail___List_node_base* base108 = (struct std____detail___List_node_base*)((char *)t107 + 0);
  struct std____detail___List_node_base* t109 = base108->_M_next;
  __first1103 = t109;
  struct std____detail___List_node_base* base110 = (struct std____detail___List_node_base*)((char *)t107 + 0);
  struct std____detail___List_node_base* r111 = std____detail___List_node_base___M_base(base110);
  if (__cir_exc_active) {
    return;
  }
  __last1104 = r111;
  struct std____detail___List_node_base* t112 = __x101;
  struct std____detail___List_node_base* t113 = t112->_M_next;
  __first2105 = t113;
  struct std____detail___List_node_base* t114 = __x101;
  struct std____detail___List_node_base* r115 = std____detail___List_node_base___M_base(t114);
  if (__cir_exc_active) {
    return;
  }
  __last2106 = r115;
    while (1) {
      struct std____detail___List_node_base* t116 = __first1103;
      struct std____detail___List_node_base* t117 = __last1104;
      _Bool c118 = ((t116 != t117)) ? 1 : 0;
      _Bool ternary119;
      if (c118) {
        struct std____detail___List_node_base* t120 = __first2105;
        struct std____detail___List_node_base* t121 = __last2106;
        _Bool c122 = ((t120 != t121)) ? 1 : 0;
        ternary119 = (_Bool)c122;
      } else {
        _Bool c123 = 0;
        ternary119 = (_Bool)c123;
      }
      if (!ternary119) break;
          struct std____detail___List_node_base* t124 = __first2105;
          struct std____detail___List_node_base* t125 = __first1103;
          _Bool r126 = std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void___operator___std____detail___List_node_base___std____detail___List_node_base___const(&__comp102, t124, t125);
          if (__cir_exc_active) {
            return;
          }
          if (r126) {
            struct std____detail___List_node_base* __next127;
            struct std____detail___List_node_base* t128 = __first2105;
            struct std____detail___List_node_base* t129 = t128->_M_next;
            __next127 = t129;
            struct std____detail___List_node_base* t130 = __first1103;
            struct std____detail___List_node_base* t131 = __first2105;
            struct std____detail___List_node_base* t132 = __next127;
            std____detail___List_node_base___M_transfer(t130, t131, t132);
            struct std____detail___List_node_base* t133 = __next127;
            __first2105 = t133;
          } else {
            struct std____detail___List_node_base* t134 = __first1103;
            struct std____detail___List_node_base* t135 = t134->_M_next;
            __first1103 = t135;
          }
    }
    struct std____detail___List_node_base* t136 = __first2105;
    struct std____detail___List_node_base* t137 = __last2106;
    _Bool c138 = ((t136 != t137)) ? 1 : 0;
    if (c138) {
      struct std____detail___List_node_base* base139 = (struct std____detail___List_node_base*)((char *)t107 + 0);
      struct std____detail___List_node_base* t140 = __first2105;
      struct std____detail___List_node_base* t141 = __last2106;
      std____detail___List_node_base___M_transfer(base139, t140, t141);
    }
  return;
}

// function: _ZNSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE4swapERS2_
void std____list___Scratch_list_std____detail___List_node_base___swap(struct std____list___Scratch_list_std____detail___List_node_base_* v142, struct std____detail___List_node_base* v143) {
bb144: ;
  struct std____list___Scratch_list_std____detail___List_node_base_* this145;
  struct std____detail___List_node_base* __l146;
  this145 = v142;
  __l146 = v143;
  struct std____list___Scratch_list_std____detail___List_node_base_* t147 = this145;
  struct std____detail___List_node_base* base148 = (struct std____detail___List_node_base*)((char *)t147 + 0);
  struct std____detail___List_node_base* t149 = __l146;
  std____detail___List_node_base__swap(base148, t149);
  return;
}

// function: _ZNSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE10_M_put_allEPS2_
void std____list___Scratch_list_std____detail___List_node_base____M_put_all(struct std____list___Scratch_list_std____detail___List_node_base_* v150, struct std____detail___List_node_base* v151) {
bb152: ;
  struct std____list___Scratch_list_std____detail___List_node_base_* this153;
  struct std____detail___List_node_base* __i154;
  this153 = v150;
  __i154 = v151;
  struct std____list___Scratch_list_std____detail___List_node_base_* t155 = this153;
    _Bool r156 = std____list___Scratch_list_std____detail___List_node_base___empty___const(t155);
    if (__cir_exc_active) {
      return;
    }
    _Bool u157 = !r156;
    if (u157) {
      struct std____detail___List_node_base* t158 = __i154;
      struct std____detail___List_node_base* base159 = (struct std____detail___List_node_base*)((char *)t155 + 0);
      struct std____detail___List_node_base* t160 = base159->_M_next;
      struct std____detail___List_node_base* base161 = (struct std____detail___List_node_base*)((char *)t155 + 0);
      struct std____detail___List_node_base* r162 = std____detail___List_node_base___M_base(base161);
      if (__cir_exc_active) {
        return;
      }
      std____detail___List_node_base___M_transfer(t158, t160, r162);
    }
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE4sortEv
void std____cxx11__list_double__std__allocator_double_____sort(struct std____cxx11__list_double__std__allocator_double__* v163) {
bb164: ;
  struct std____cxx11__list_double__std__allocator_double__* this165;
  this165 = v163;
  struct std____cxx11__list_double__std__allocator_double__* t166 = this165;
    _Bool r167 = std____cxx11__list_double__std__allocator_double_____empty___const(t166);
    _Bool ternary168;
    if (r167) {
      _Bool c169 = 1;
      ternary168 = (_Bool)c169;
    } else {
      struct std___List_iterator_double_ ref_tmp0170;
      struct std___List_iterator_double_ ref_tmp1171;
      struct std___List_iterator_double_ r172 = std____cxx11__list_double__std__allocator_double_____begin(t166);
      ref_tmp0170 = r172;
      struct std___List_iterator_double_* r173 = std___List_iterator_double___operator___3(&ref_tmp0170);
      struct std___List_iterator_double_ r174 = std____cxx11__list_double__std__allocator_double_____end(t166);
      ref_tmp1171 = r174;
      _Bool r175 = std__operator___2(r173, &ref_tmp1171);
      ternary168 = (_Bool)r175;
    }
    if (ternary168) {
      return;
    }
    struct std____list___Scratch_list_std____detail___List_node_base_ __carry176;
    struct std____list___Scratch_list_std____detail___List_node_base_ __tmp177[64];
    struct std____list___Scratch_list_std____detail___List_node_base_* __fill178;
    struct std____list___Scratch_list_std____detail___List_node_base_* __counter179;
    struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_ __ptr_comp180;
    std____list___Scratch_list_std____detail___List_node_base____Scratch_list(&__carry176);
    if (__cir_exc_active) {
      return;
    }
    unsigned long c181 = 64;
    struct std____list___Scratch_list_std____detail___List_node_base_* cast182 = (struct std____list___Scratch_list_std____detail___List_node_base_*)&(__tmp177);
    struct std____list___Scratch_list_std____detail___List_node_base_* ptr183 = &(cast182)[c181];
    struct std____list___Scratch_list_std____detail___List_node_base_* __array_idx184;
    __array_idx184 = cast182;
    do {
      struct std____list___Scratch_list_std____detail___List_node_base_* t185 = __array_idx184;
      std____list___Scratch_list_std____detail___List_node_base____Scratch_list(t185);
      if (__cir_exc_active) {
        return;
      }
      unsigned long c186 = 1;
      struct std____list___Scratch_list_std____detail___List_node_base_* ptr187 = &(t185)[c186];
      __array_idx184 = ptr187;
      struct std____list___Scratch_list_std____detail___List_node_base_* t188 = __array_idx184;
      _Bool c189 = ((t188 != ptr183)) ? 1 : 0;
      if (!c189) break;
    } while (1);
    struct std____list___Scratch_list_std____detail___List_node_base_* cast190 = (struct std____list___Scratch_list_std____detail___List_node_base_*)&(__tmp177);
    __fill178 = cast190;
      struct std___List_iterator_double_ ref_tmp3191;
          do {
              struct std___List_iterator_double_ ref_tmp2193;
              struct std___List_iterator_double_ r194 = std____cxx11__list_double__std__allocator_double_____begin(t166);
              ref_tmp2193 = r194;
              struct std____detail___List_node_base* t195 = ref_tmp2193._M_node;
              std____list___Scratch_list_std____detail___List_node_base____M_take_one(&__carry176, t195);
              if (__cir_exc_active) {
                goto cir_try_dispatch192;
              }
                struct std____list___Scratch_list_std____detail___List_node_base_* cast196 = (struct std____list___Scratch_list_std____detail___List_node_base_*)&(__tmp177);
                __counter179 = cast196;
                while (1) {
                  struct std____list___Scratch_list_std____detail___List_node_base_* t198 = __counter179;
                  struct std____list___Scratch_list_std____detail___List_node_base_* t199 = __fill178;
                  _Bool c200 = ((t198 != t199)) ? 1 : 0;
                  _Bool ternary201;
                  if (c200) {
                    struct std____list___Scratch_list_std____detail___List_node_base_* t202 = __counter179;
                    _Bool r203 = std____list___Scratch_list_std____detail___List_node_base___empty___const(t202);
                    if (__cir_exc_active) {
                      goto cir_try_dispatch192;
                    }
                    _Bool u204 = !r203;
                    ternary201 = (_Bool)u204;
                  } else {
                    _Bool c205 = 0;
                    ternary201 = (_Bool)c205;
                  }
                  if (!ternary201) break;
                    struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_ agg_tmp0206;
                    struct std____list___Scratch_list_std____detail___List_node_base_* t207 = __counter179;
                    struct std____detail___List_node_base* base208 = (struct std____detail___List_node_base*)((char *)&(__carry176) + 0);
                    struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_ t209 = agg_tmp0206;
                    void_std____list___Scratch_list_std____detail___List_node_base___merge_std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void___(t207, base208, t209);
                    if (__cir_exc_active) {
                      goto cir_try_dispatch192;
                    }
                    struct std____list___Scratch_list_std____detail___List_node_base_* t210 = __counter179;
                    struct std____detail___List_node_base* base211 = (struct std____detail___List_node_base*)((char *)t210 + 0);
                    std____list___Scratch_list_std____detail___List_node_base___swap(&__carry176, base211);
                    if (__cir_exc_active) {
                      goto cir_try_dispatch192;
                    }
                for_step197: ;
                  struct std____list___Scratch_list_std____detail___List_node_base_* t212 = __counter179;
                  int c213 = 1;
                  struct std____list___Scratch_list_std____detail___List_node_base_* ptr214 = &(t212)[c213];
                  __counter179 = ptr214;
                }
              struct std____list___Scratch_list_std____detail___List_node_base_* t215 = __counter179;
              struct std____detail___List_node_base* base216 = (struct std____detail___List_node_base*)((char *)t215 + 0);
              std____list___Scratch_list_std____detail___List_node_base___swap(&__carry176, base216);
              if (__cir_exc_active) {
                goto cir_try_dispatch192;
              }
                struct std____list___Scratch_list_std____detail___List_node_base_* t217 = __counter179;
                struct std____list___Scratch_list_std____detail___List_node_base_* t218 = __fill178;
                _Bool c219 = ((t217 == t218)) ? 1 : 0;
                if (c219) {
                  struct std____list___Scratch_list_std____detail___List_node_base_* t220 = __fill178;
                  int c221 = 1;
                  struct std____list___Scratch_list_std____detail___List_node_base_* ptr222 = &(t220)[c221];
                  __fill178 = ptr222;
                }
            _Bool r223 = std____cxx11__list_double__std__allocator_double_____empty___const(t166);
            _Bool u224 = !r223;
            if (!u224) break;
          } while (1);
          struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_ agg_tmp1225;
          struct std____list___Scratch_list_std____detail___List_node_base_* cast226 = (struct std____list___Scratch_list_std____detail___List_node_base_*)&(__tmp177);
          int c227 = 1;
          struct std____list___Scratch_list_std____detail___List_node_base_* ptr228 = &(cast226)[c227];
          __counter179 = ptr228;
          while (1) {
            struct std____list___Scratch_list_std____detail___List_node_base_* t230 = __counter179;
            struct std____list___Scratch_list_std____detail___List_node_base_* t231 = __fill178;
            _Bool c232 = ((t230 != t231)) ? 1 : 0;
            if (!c232) break;
            struct std____list___Scratch_list_std____detail___List_node_base_* t233 = __counter179;
            long c234 = -1;
            struct std____list___Scratch_list_std____detail___List_node_base_* t235 = __counter179;
            struct std____list___Scratch_list_std____detail___List_node_base_* ptr236 = &(t235)[c234];
            struct std____detail___List_node_base* base237 = (struct std____detail___List_node_base*)((char *)ptr236 + 0);
            struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_ t238 = agg_tmp1225;
            void_std____list___Scratch_list_std____detail___List_node_base___merge_std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void___(t233, base237, t238);
            if (__cir_exc_active) {
              goto cir_try_dispatch192;
            }
          for_step229: ;
            struct std____list___Scratch_list_std____detail___List_node_base_* t239 = __counter179;
            int c240 = 1;
            struct std____list___Scratch_list_std____detail___List_node_base_* ptr241 = &(t239)[c240];
            __counter179 = ptr241;
          }
        long c242 = -1;
        struct std____list___Scratch_list_std____detail___List_node_base_* t243 = __fill178;
        struct std____list___Scratch_list_std____detail___List_node_base_* ptr244 = &(t243)[c242];
        struct std____cxx11___List_base_double__std__allocator_double__* base245 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t166 + 0);
        struct std____detail___List_node_base* base246 = (struct std____detail___List_node_base*)((char *)&(base245->_M_impl._M_node) + 0);
        std____list___Scratch_list_std____detail___List_node_base___swap(ptr244, base246);
        if (__cir_exc_active) {
          goto cir_try_dispatch192;
        }
      cir_try_dispatch192: ;
      if (__cir_exc_active) {
      {
        int ca_tok247 = 0;
        void* ca_exn248 = (void*)__cir_exc_ptr;
        __cir_exc_active = 0;
          struct std___List_iterator_double_ r249 = std____cxx11__list_double__std__allocator_double_____end(t166);
          ref_tmp3191 = r249;
          struct std____detail___List_node_base* t250 = ref_tmp3191._M_node;
          std____list___Scratch_list_std____detail___List_node_base____M_put_all(&__carry176, t250);
          if (__cir_exc_active) {
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            return;
          }
            int __i251;
            struct std___List_iterator_double_ ref_tmp4252;
            int c253 = 0;
            __i251 = c253;
            while (1) {
              int t255 = __i251;
              unsigned long cast256 = (unsigned long)t255;
              unsigned long c257 = 1024;
              unsigned long c258 = 16;
              unsigned long b259 = c257 / c258;
              _Bool c260 = ((cast256 < b259)) ? 1 : 0;
              if (!c260) break;
              int t261 = __i251;
              long cast262 = (long)t261;
              struct std___List_iterator_double_ r263 = std____cxx11__list_double__std__allocator_double_____end(t166);
              ref_tmp4252 = r263;
              struct std____detail___List_node_base* t264 = ref_tmp4252._M_node;
              std____list___Scratch_list_std____detail___List_node_base____M_put_all(&__tmp177[cast262], t264);
              if (__cir_exc_active) {
                {
                  if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                }
                return;
              }
            for_step254: ;
              int t265 = __i251;
              int u266 = t265 + 1;
              __i251 = u266;
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

// function: _ZNKSt7__cxx1110_List_baseIdSaIdEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_double__* std____cxx11___List_base_double__std__allocator_double______M_get_Node_allocator___const(struct std____cxx11___List_base_double__std__allocator_double__* v267) {
bb268: ;
  struct std____cxx11___List_base_double__std__allocator_double__* this269;
  struct std__allocator_std___List_node_double__* __retval270;
  this269 = v267;
  struct std____cxx11___List_base_double__std__allocator_double__* t271 = this269;
  struct std__allocator_std___List_node_double__* base272 = (struct std__allocator_std___List_node_double__*)((char *)&(t271->_M_impl) + 0);
  __retval270 = base272;
  struct std__allocator_std___List_node_double__* t273 = __retval270;
  return t273;
}

// function: _ZNSaIdEC2ISt10_List_nodeIdEEERKSaIT_E
void std__allocator_double___allocator_std___List_node_double___(struct std__allocator_double_* v274, struct std__allocator_std___List_node_double__* v275) {
bb276: ;
  struct std__allocator_double_* this277;
  struct std__allocator_std___List_node_double__* unnamed278;
  this277 = v274;
  unnamed278 = v275;
  struct std__allocator_double_* t279 = this277;
  struct std____new_allocator_double_* base280 = (struct std____new_allocator_double_*)((char *)t279 + 0);
  std____new_allocator_double_____new_allocator(base280);
  return;
}

// function: _ZNKSt7__cxx114listIdSaIdEE13get_allocatorEv
struct std__allocator_double_ std____cxx11__list_double__std__allocator_double_____get_allocator___const(struct std____cxx11__list_double__std__allocator_double__* v281) {
bb282: ;
  struct std____cxx11__list_double__std__allocator_double__* this283;
  struct std__allocator_double_ __retval284;
  this283 = v281;
  struct std____cxx11__list_double__std__allocator_double__* t285 = this283;
  struct std____cxx11___List_base_double__std__allocator_double__* base286 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t285 + 0);
  struct std__allocator_std___List_node_double__* r287 = std____cxx11___List_base_double__std__allocator_double______M_get_Node_allocator___const(base286);
  std__allocator_double___allocator_std___List_node_double___(&__retval284, r287);
  struct std__allocator_double_ t288 = __retval284;
  return t288;
}

// function: _ZNSt7__cxx114listIdSaIdEEC2ERKS1_
void std____cxx11__list_double__std__allocator_double_____list(struct std____cxx11__list_double__std__allocator_double__* v289, struct std__allocator_double_* v290) {
bb291: ;
  struct std____cxx11__list_double__std__allocator_double__* this292;
  struct std__allocator_double_* __a293;
  struct std__allocator_std___List_node_double__ ref_tmp0294;
  this292 = v289;
  __a293 = v290;
  struct std____cxx11__list_double__std__allocator_double__* t295 = this292;
  struct std____cxx11___List_base_double__std__allocator_double__* base296 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t295 + 0);
  struct std__allocator_double_* t297 = __a293;
  std__allocator_std___List_node_double_____allocator_double_(&ref_tmp0294, t297);
    std____cxx11___List_base_double__std__allocator_double______List_base(base296, &ref_tmp0294);
    if (__cir_exc_active) {
      {
        std__allocator_std___List_node_double______allocator(&ref_tmp0294);
      }
      return;
    }
  {
    std__allocator_std___List_node_double______allocator(&ref_tmp0294);
  }
  return;
}

// function: _ZNKSt20_List_const_iteratorIdE13_M_const_castEv
struct std___List_iterator_double_ std___List_const_iterator_double____M_const_cast___const(struct std___List_const_iterator_double_* v298) {
bb299: ;
  struct std___List_const_iterator_double_* this300;
  struct std___List_iterator_double_ __retval301;
  this300 = v298;
  struct std___List_const_iterator_double_* t302 = this300;
  struct std____detail___List_node_base* t303 = t302->_M_node;
  std___List_iterator_double____List_iterator(&__retval301, t303);
  struct std___List_iterator_double_ t304 = __retval301;
  return t304;
}

// function: _ZSteqRKSt20_List_const_iteratorIdES2_
_Bool std__operator___3(struct std___List_const_iterator_double_* v305, struct std___List_const_iterator_double_* v306) {
bb307: ;
  struct std___List_const_iterator_double_* __x308;
  struct std___List_const_iterator_double_* __y309;
  _Bool __retval310;
  __x308 = v305;
  __y309 = v306;
  struct std___List_const_iterator_double_* t311 = __x308;
  struct std____detail___List_node_base* t312 = t311->_M_node;
  struct std___List_const_iterator_double_* t313 = __y309;
  struct std____detail___List_node_base* t314 = t313->_M_node;
  _Bool c315 = ((t312 == t314)) ? 1 : 0;
  __retval310 = c315;
  _Bool t316 = __retval310;
  return t316;
}

// function: _ZSteqRKSaISt10_List_nodeIdEES3_
_Bool std__operator__(struct std__allocator_std___List_node_double__* v317, struct std__allocator_std___List_node_double__* v318) {
bb319: ;
  struct std__allocator_std___List_node_double__* unnamed320;
  struct std__allocator_std___List_node_double__* unnamed321;
  _Bool __retval322;
  unnamed320 = v317;
  unnamed321 = v318;
  _Bool c323 = 1;
  __retval322 = c323;
  _Bool t324 = __retval322;
  return t324;
}

// function: _ZNSt7__cxx114listIdSaIdEE25_M_check_equal_allocatorsERKS2_
void std____cxx11__list_double__std__allocator_double______M_check_equal_allocators(struct std____cxx11__list_double__std__allocator_double__* v325, struct std____cxx11__list_double__std__allocator_double__* v326) {
bb327: ;
  struct std____cxx11__list_double__std__allocator_double__* this328;
  struct std____cxx11__list_double__std__allocator_double__* __x329;
  this328 = v325;
  __x329 = v326;
  struct std____cxx11__list_double__std__allocator_double__* t330 = this328;
    struct std____cxx11___List_base_double__std__allocator_double__* base331 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t330 + 0);
    struct std__allocator_std___List_node_double__* r332 = std____cxx11___List_base_double__std__allocator_double______M_get_Node_allocator(base331);
    struct std____cxx11__list_double__std__allocator_double__* t333 = __x329;
    struct std____cxx11___List_base_double__std__allocator_double__* base334 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t333 + 0);
    struct std__allocator_std___List_node_double__* r335 = std____cxx11___List_base_double__std__allocator_double______M_get_Node_allocator___const(base334);
    _Bool r336 = std__operator__(r332, r335);
    _Bool u337 = !r336;
    if (u337) {
      abort();
    }
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE11_M_transferESt14_List_iteratorIdES4_S4_
void std____cxx11__list_double__std__allocator_double______M_transfer(struct std____cxx11__list_double__std__allocator_double__* v338, struct std___List_iterator_double_ v339, struct std___List_iterator_double_ v340, struct std___List_iterator_double_ v341) {
bb342: ;
  struct std____cxx11__list_double__std__allocator_double__* this343;
  struct std___List_iterator_double_ __position344;
  struct std___List_iterator_double_ __first345;
  struct std___List_iterator_double_ __last346;
  this343 = v338;
  __position344 = v339;
  __first345 = v340;
  __last346 = v341;
  struct std____cxx11__list_double__std__allocator_double__* t347 = this343;
  struct std____detail___List_node_base* t348 = __position344._M_node;
  struct std____detail___List_node_base* t349 = __first345._M_node;
  struct std____detail___List_node_base* t350 = __last346._M_node;
  std____detail___List_node_base___M_transfer(t348, t349, t350);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE11_M_dec_sizeEm
void std____cxx11___List_base_double__std__allocator_double______M_dec_size(struct std____cxx11___List_base_double__std__allocator_double__* v351, unsigned long v352) {
bb353: ;
  struct std____cxx11___List_base_double__std__allocator_double__* this354;
  unsigned long __n355;
  this354 = v351;
  __n355 = v352;
  struct std____cxx11___List_base_double__std__allocator_double__* t356 = this354;
  unsigned long t357 = __n355;
  struct std____detail___List_size* base358 = (struct std____detail___List_size*)((char *)&(t356->_M_impl._M_node) + 16);
  unsigned long t359 = base358->_M_size;
  unsigned long b360 = t359 - t357;
  base358->_M_size = b360;
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE6spliceESt20_List_const_iteratorIdEOS2_S4_
void std____cxx11__list_double__std__allocator_double_____splice(struct std____cxx11__list_double__std__allocator_double__* v361, struct std___List_const_iterator_double_ v362, struct std____cxx11__list_double__std__allocator_double__* v363, struct std___List_const_iterator_double_ v364) {
bb365: ;
  struct std____cxx11__list_double__std__allocator_double__* this366;
  struct std___List_const_iterator_double_ __position367;
  struct std____cxx11__list_double__std__allocator_double__* __x368;
  struct std___List_const_iterator_double_ __i369;
  struct std___List_iterator_double_ __j370;
  struct std___List_iterator_double_ agg_tmp0371;
  struct std___List_iterator_double_ agg_tmp1372;
  struct std___List_iterator_double_ agg_tmp2373;
  this366 = v361;
  __position367 = v362;
  __x368 = v363;
  __i369 = v364;
  struct std____cxx11__list_double__std__allocator_double__* t374 = this366;
  struct std___List_iterator_double_ r375 = std___List_const_iterator_double____M_const_cast___const(&__i369);
  __j370 = r375;
  struct std___List_iterator_double_* r376 = std___List_iterator_double___operator___3(&__j370);
    _Bool r377 = std__operator___3(&__position367, &__i369);
    _Bool ternary378;
    if (r377) {
      _Bool c379 = 1;
      ternary378 = (_Bool)c379;
    } else {
      struct std___List_const_iterator_double_ ref_tmp0380;
      std___List_const_iterator_double____List_const_iterator(&ref_tmp0380, &__j370);
      _Bool r381 = std__operator___3(&__position367, &ref_tmp0380);
      ternary378 = (_Bool)r381;
    }
    if (ternary378) {
      return;
    }
    struct std____cxx11__list_double__std__allocator_double__* t382 = __x368;
    _Bool c383 = ((t374 != t382)) ? 1 : 0;
    if (c383) {
      struct std____cxx11__list_double__std__allocator_double__* t384 = __x368;
      std____cxx11__list_double__std__allocator_double______M_check_equal_allocators(t374, t384);
    }
  struct std___List_iterator_double_ r385 = std___List_const_iterator_double____M_const_cast___const(&__position367);
  agg_tmp0371 = r385;
  struct std___List_iterator_double_ r386 = std___List_const_iterator_double____M_const_cast___const(&__i369);
  agg_tmp1372 = r386;
  agg_tmp2373 = __j370; // copy
  struct std___List_iterator_double_ t387 = agg_tmp0371;
  struct std___List_iterator_double_ t388 = agg_tmp1372;
  struct std___List_iterator_double_ t389 = agg_tmp2373;
  std____cxx11__list_double__std__allocator_double______M_transfer(t374, t387, t388, t389);
  if (__cir_exc_active) {
    return;
  }
  struct std____cxx11___List_base_double__std__allocator_double__* base390 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t374 + 0);
  unsigned long c391 = 1;
  std____cxx11___List_base_double__std__allocator_double______M_inc_size(base390, c391);
  if (__cir_exc_active) {
    return;
  }
  struct std____cxx11__list_double__std__allocator_double__* t392 = __x368;
  struct std____cxx11___List_base_double__std__allocator_double__* base393 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t392 + 0);
  unsigned long c394 = 1;
  std____cxx11___List_base_double__std__allocator_double______M_dec_size(base393, c394);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE6spliceESt20_List_const_iteratorIdERS2_S4_
void std____cxx11__list_double__std__allocator_double_____splice_2(struct std____cxx11__list_double__std__allocator_double__* v395, struct std___List_const_iterator_double_ v396, struct std____cxx11__list_double__std__allocator_double__* v397, struct std___List_const_iterator_double_ v398) {
bb399: ;
  struct std____cxx11__list_double__std__allocator_double__* this400;
  struct std___List_const_iterator_double_ __position401;
  struct std____cxx11__list_double__std__allocator_double__* __x402;
  struct std___List_const_iterator_double_ __i403;
  struct std___List_const_iterator_double_ agg_tmp0404;
  struct std___List_const_iterator_double_ agg_tmp1405;
  this400 = v395;
  __position401 = v396;
  __x402 = v397;
  __i403 = v398;
  struct std____cxx11__list_double__std__allocator_double__* t406 = this400;
  agg_tmp0404 = __position401; // copy
  struct std____cxx11__list_double__std__allocator_double__* t407 = __x402;
  agg_tmp1405 = __i403; // copy
  struct std___List_const_iterator_double_ t408 = agg_tmp0404;
  struct std___List_const_iterator_double_ t409 = agg_tmp1405;
  std____cxx11__list_double__std__allocator_double_____splice(t406, t408, t407, t409);
  return;
}

// function: _ZNSt20_List_const_iteratorIdEC2ERKSt14_List_iteratorIdE
void std___List_const_iterator_double____List_const_iterator(struct std___List_const_iterator_double_* v410, struct std___List_iterator_double_* v411) {
bb412: ;
  struct std___List_const_iterator_double_* this413;
  struct std___List_iterator_double_* __x414;
  this413 = v410;
  __x414 = v411;
  struct std___List_const_iterator_double_* t415 = this413;
  struct std___List_iterator_double_* t416 = __x414;
  struct std____detail___List_node_base* t417 = t416->_M_node;
  t415->_M_node = t417;
  return;
}

// function: _ZNSt14_List_iteratorIdEaSERKS0_
struct std___List_iterator_double_* std___List_iterator_double___operator_(struct std___List_iterator_double_* v418, struct std___List_iterator_double_* v419) {
bb420: ;
  struct std___List_iterator_double_* this421;
  struct std___List_iterator_double_* unnamed422;
  struct std___List_iterator_double_* __retval423;
  this421 = v418;
  unnamed422 = v419;
  struct std___List_iterator_double_* t424 = this421;
  struct std___List_iterator_double_* t425 = unnamed422;
  struct std____detail___List_node_base* t426 = t425->_M_node;
  t424->_M_node = t426;
  __retval423 = t424;
  struct std___List_iterator_double_* t427 = __retval423;
  return t427;
}

// function: _ZNSt7__cxx114listIdSaIdEE6uniqueEv
unsigned long std____cxx11__list_double__std__allocator_double_____unique(struct std____cxx11__list_double__std__allocator_double__* v428) {
bb429: ;
  struct std____cxx11__list_double__std__allocator_double__* this430;
  unsigned long __retval431;
  struct std___List_iterator_double_ __first432;
  struct std___List_iterator_double_ __last433;
  struct std____cxx11__list_double__std__allocator_double__ __to_destroy434;
  struct std__allocator_double_ ref_tmp0435;
  struct std___List_iterator_double_ __next436;
  this430 = v428;
  struct std____cxx11__list_double__std__allocator_double__* t437 = this430;
  struct std___List_iterator_double_ r438 = std____cxx11__list_double__std__allocator_double_____begin(t437);
  __first432 = r438;
  struct std___List_iterator_double_ r439 = std____cxx11__list_double__std__allocator_double_____end(t437);
  __last433 = r439;
    _Bool r440 = std__operator___2(&__first432, &__last433);
    if (r440) {
      unsigned long c441 = 0;
      __retval431 = c441;
      unsigned long t442 = __retval431;
      return t442;
    }
  struct std__allocator_double_ r443 = std____cxx11__list_double__std__allocator_double_____get_allocator___const(t437);
  ref_tmp0435 = r443;
    std____cxx11__list_double__std__allocator_double_____list(&__to_destroy434, &ref_tmp0435);
  {
    std__allocator_double____allocator(&ref_tmp0435);
  }
    __next436 = __first432; // copy
      while (1) {
        struct std___List_iterator_double_* r444 = std___List_iterator_double___operator___3(&__next436);
        _Bool r445 = std__operator___2(r444, &__last433);
        _Bool u446 = !r445;
        if (!u446) break;
            double* r447 = std___List_iterator_double___operator____const(&__first432);
            double t448 = *r447;
            double* r449 = std___List_iterator_double___operator____const(&__next436);
            double t450 = *r449;
            _Bool c451 = ((t448 == t450)) ? 1 : 0;
            if (c451) {
              struct std___List_const_iterator_double_ agg_tmp0452;
              struct std___List_iterator_double_ ref_tmp1453;
              struct std___List_const_iterator_double_ agg_tmp1454;
              struct std___List_iterator_double_ r455 = std____cxx11__list_double__std__allocator_double_____begin(&__to_destroy434);
              ref_tmp1453 = r455;
              std___List_const_iterator_double____List_const_iterator(&agg_tmp0452, &ref_tmp1453);
              std___List_const_iterator_double____List_const_iterator(&agg_tmp1454, &__next436);
              struct std___List_const_iterator_double_ t456 = agg_tmp0452;
              struct std___List_const_iterator_double_ t457 = agg_tmp1454;
              std____cxx11__list_double__std__allocator_double_____splice_2(&__to_destroy434, t456, t437, t457);
            } else {
              struct std___List_iterator_double_* r458 = std___List_iterator_double___operator_(&__first432, &__next436);
            }
          struct std___List_iterator_double_* r459 = std___List_iterator_double___operator_(&__next436, &__first432);
      }
    unsigned long r460 = std____cxx11__list_double__std__allocator_double_____size___const(&__to_destroy434);
    __retval431 = r460;
    unsigned long t461 = __retval431;
    unsigned long ret_val462 = t461;
    {
      std____cxx11__list_double__std__allocator_double______list(&__to_destroy434);
    }
    return ret_val462;
  abort();
}

// function: _ZNKSt7__cxx1110_List_baseIdSaIdEE11_M_get_sizeEv
unsigned long std____cxx11___List_base_double__std__allocator_double______M_get_size___const(struct std____cxx11___List_base_double__std__allocator_double__* v463) {
bb464: ;
  struct std____cxx11___List_base_double__std__allocator_double__* this465;
  unsigned long __retval466;
  this465 = v463;
  struct std____cxx11___List_base_double__std__allocator_double__* t467 = this465;
  struct std____detail___List_size* base468 = (struct std____detail___List_size*)((char *)&(t467->_M_impl._M_node) + 16);
  unsigned long t469 = base468->_M_size;
  __retval466 = t469;
  unsigned long t470 = __retval466;
  return t470;
}

// function: _ZNKSt7__cxx114listIdSaIdEE4sizeEv
unsigned long std____cxx11__list_double__std__allocator_double_____size___const(struct std____cxx11__list_double__std__allocator_double__* v471) {
bb472: ;
  struct std____cxx11__list_double__std__allocator_double__* this473;
  unsigned long __retval474;
  this473 = v471;
  struct std____cxx11__list_double__std__allocator_double__* t475 = this473;
  struct std____cxx11___List_base_double__std__allocator_double__* base476 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t475 + 0);
  unsigned long r477 = std____cxx11___List_base_double__std__allocator_double______M_get_size___const(base476);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval474 = r477;
  unsigned long t478 = __retval474;
  return t478;
}

// function: _ZNSt7__cxx114listIdSaIdEE5beginEv
struct std___List_iterator_double_ std____cxx11__list_double__std__allocator_double_____begin(struct std____cxx11__list_double__std__allocator_double__* v479) {
bb480: ;
  struct std____cxx11__list_double__std__allocator_double__* this481;
  struct std___List_iterator_double_ __retval482;
  this481 = v479;
  struct std____cxx11__list_double__std__allocator_double__* t483 = this481;
  struct std____cxx11___List_base_double__std__allocator_double__* base484 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t483 + 0);
  struct std____detail___List_node_base* base485 = (struct std____detail___List_node_base*)((char *)&(base484->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t486 = base485->_M_next;
  std___List_iterator_double____List_iterator(&__retval482, t486);
  struct std___List_iterator_double_ t487 = __retval482;
  return t487;
}

// function: _ZNKSt14_List_iteratorIdEdeEv
double* std___List_iterator_double___operator____const(struct std___List_iterator_double_* v488) {
bb489: ;
  struct std___List_iterator_double_* this490;
  double* __retval491;
  this490 = v488;
  struct std___List_iterator_double_* t492 = this490;
  struct std____detail___List_node_base* t493 = t492->_M_node;
  struct std___List_node_double_* derived494 = ((t493) ? (struct std___List_node_double_*)((char *)t493 - 0) : (struct std___List_node_double_*)0);
  double* r495 = std___List_node_double____M_valptr(derived494);
  if (__cir_exc_active) {
    double* __cir_eh_ret = (double*)0;
    return __cir_eh_ret;
  }
  __retval491 = r495;
  double* t496 = __retval491;
  return t496;
}

// function: _ZNSt14_List_iteratorIdEppEi
struct std___List_iterator_double_ std___List_iterator_double___operator___2(struct std___List_iterator_double_* v497, int v498) {
bb499: ;
  struct std___List_iterator_double_* this500;
  int unnamed501;
  struct std___List_iterator_double_ __retval502;
  this500 = v497;
  unnamed501 = v498;
  struct std___List_iterator_double_* t503 = this500;
  __retval502 = *t503; // copy
  struct std____detail___List_node_base* t504 = t503->_M_node;
  struct std____detail___List_node_base* t505 = t504->_M_next;
  t503->_M_node = t505;
  struct std___List_iterator_double_ t506 = __retval502;
  return t506;
}

// function: _ZNSt7__cxx114listIdSaIdEED2Ev
void std____cxx11__list_double__std__allocator_double______list(struct std____cxx11__list_double__std__allocator_double__* v507) {
bb508: ;
  struct std____cxx11__list_double__std__allocator_double__* this509;
  this509 = v507;
  struct std____cxx11__list_double__std__allocator_double__* t510 = this509;
  {
    struct std____cxx11___List_base_double__std__allocator_double__* base511 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t510 + 0);
    std____cxx11___List_base_double__std__allocator_double_______List_base(base511);
  }
  return;
}

// function: main
int main() {
bb512: ;
  int __retval513;
  double mydoubles514[10];
  struct std____cxx11__list_double__std__allocator_double__ mylist515;
  struct std__allocator_double_ ref_tmp0516;
  struct std___List_iterator_double_ it517;
  struct std___List_iterator_double_ agg_tmp0518;
  struct std___List_iterator_double_ agg_tmp1519;
  struct std___List_iterator_double_ agg_tmp2520;
  struct std___List_iterator_double_ agg_tmp3521;
  struct std___List_iterator_double_ agg_tmp4522;
  struct std___List_iterator_double_ agg_tmp5523;
  struct std___List_iterator_double_ agg_tmp6524;
  int c525 = 0;
  __retval513 = c525;
  // array copy
  __builtin_memcpy(mydoubles514, __const_main_mydoubles, (unsigned long)10 * sizeof(__const_main_mydoubles[0]));
  double* cast526 = (double*)&(mydoubles514);
  double* cast527 = (double*)&(mydoubles514);
  int c528 = 10;
  double* ptr529 = &(cast527)[c528];
  std__allocator_double___allocator(&ref_tmp0516);
    std____cxx11__list_double__std__allocator_double_____list_double___void_(&mylist515, cast526, ptr529, &ref_tmp0516);
    if (__cir_exc_active) {
      {
        std__allocator_double____allocator(&ref_tmp0516);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  {
    std__allocator_double____allocator(&ref_tmp0516);
  }
    std____cxx11__list_double__std__allocator_double_____sort(&mylist515);
    if (__cir_exc_active) {
      {
        std____cxx11__list_double__std__allocator_double______list(&mylist515);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r530 = std____cxx11__list_double__std__allocator_double_____unique(&mylist515);
    if (__cir_exc_active) {
      {
        std____cxx11__list_double__std__allocator_double______list(&mylist515);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r531 = std____cxx11__list_double__std__allocator_double_____size___const(&mylist515);
    unsigned long c532 = 8;
    _Bool c533 = ((r531 == c532)) ? 1 : 0;
    if (c533) {
    } else {
      char* cast534 = (char*)&(_str);
      char* c535 = (char*)_str_1;
      unsigned int c536 = 38;
      char* cast537 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast534, c535, c536, cast537);
    }
    struct std___List_iterator_double_ r538 = std____cxx11__list_double__std__allocator_double_____begin(&mylist515);
    it517 = r538;
    double* r539 = std___List_iterator_double___operator____const(&it517);
    double t540 = *r539;
    double c541 = 0x1.5c28f5c28f5c3p1;
    _Bool c542 = ((t540 == c541)) ? 1 : 0;
    if (c542) {
    } else {
      char* cast543 = (char*)&(_str_2);
      char* c544 = (char*)_str_1;
      unsigned int c545 = 40;
      char* cast546 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast543, c544, c545, cast546);
    }
    int c547 = 0;
    struct std___List_iterator_double_ r548 = std___List_iterator_double___operator___2(&it517, c547);
    agg_tmp0518 = r548;
    double* r549 = std___List_iterator_double___operator____const(&it517);
    double t550 = *r549;
    double c551 = 0x1.91eb851eb851fp1;
    _Bool c552 = ((t550 == c551)) ? 1 : 0;
    if (c552) {
    } else {
      char* cast553 = (char*)&(_str_3);
      char* c554 = (char*)_str_1;
      unsigned int c555 = 41;
      char* cast556 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast553, c554, c555, cast556);
    }
    int c557 = 0;
    struct std___List_iterator_double_ r558 = std___List_iterator_double___operator___2(&it517, c557);
    agg_tmp1519 = r558;
    double* r559 = std___List_iterator_double___operator____const(&it517);
    double t560 = *r559;
    double c561 = 0x1.84ccccccccccdp3;
    _Bool c562 = ((t560 != c561)) ? 1 : 0;
    if (c562) {
    } else {
      char* cast563 = (char*)&(_str_4);
      char* c564 = (char*)_str_1;
      unsigned int c565 = 42;
      char* cast566 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast563, c564, c565, cast566);
    }
    int c567 = 0;
    struct std___List_iterator_double_ r568 = std___List_iterator_double___operator___2(&it517, c567);
    agg_tmp2520 = r568;
    double* r569 = std___List_iterator_double___operator____const(&it517);
    double t570 = *r569;
    double c571 = 0x1.98a3d70a3d70ap3;
    _Bool c572 = ((t570 == c571)) ? 1 : 0;
    if (c572) {
    } else {
      char* cast573 = (char*)&(_str_5);
      char* c574 = (char*)_str_1;
      unsigned int c575 = 43;
      char* cast576 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast573, c574, c575, cast576);
    }
    int c577 = 0;
    struct std___List_iterator_double_ r578 = std___List_iterator_double___operator___2(&it517, c577);
    agg_tmp3521 = r578;
    double* r579 = std___List_iterator_double___operator____const(&it517);
    double t580 = *r579;
    double c581 = 0x1.e99999999999ap3;
    _Bool c582 = ((t580 == c581)) ? 1 : 0;
    if (c582) {
    } else {
      char* cast583 = (char*)&(_str_6);
      char* c584 = (char*)_str_1;
      unsigned int c585 = 44;
      char* cast586 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast583, c584, c585, cast586);
    }
    int c587 = 0;
    struct std___List_iterator_double_ r588 = std___List_iterator_double___operator___2(&it517, c587);
    agg_tmp4522 = r588;
    double* r589 = std___List_iterator_double___operator____const(&it517);
    double t590 = *r589;
    double c591 = 0x1.21p6;
    _Bool c592 = ((t590 != c591)) ? 1 : 0;
    if (c592) {
    } else {
      char* cast593 = (char*)&(_str_7);
      char* c594 = (char*)_str_1;
      unsigned int c595 = 45;
      char* cast596 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast593, c594, c595, cast596);
    }
    int c597 = 0;
    struct std___List_iterator_double_ r598 = std___List_iterator_double___operator___2(&it517, c597);
    agg_tmp5523 = r598;
    double* r599 = std___List_iterator_double___operator____const(&it517);
    double t600 = *r599;
    double c601 = 0x1.24p6;
    _Bool c602 = ((t600 == c601)) ? 1 : 0;
    if (c602) {
    } else {
      char* cast603 = (char*)&(_str_8);
      char* c604 = (char*)_str_1;
      unsigned int c605 = 46;
      char* cast606 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast603, c604, c605, cast606);
    }
    int c607 = 0;
    struct std___List_iterator_double_ r608 = std___List_iterator_double___operator___2(&it517, c607);
    agg_tmp6524 = r608;
    double* r609 = std___List_iterator_double___operator____const(&it517);
    double t610 = *r609;
    double c611 = 0x1.2566666666666p6;
    _Bool c612 = ((t610 == c611)) ? 1 : 0;
    if (c612) {
    } else {
      char* cast613 = (char*)&(_str_9);
      char* c614 = (char*)_str_1;
      unsigned int c615 = 47;
      char* cast616 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast613, c614, c615, cast616);
    }
    int c617 = 0;
    __retval513 = c617;
    int t618 = __retval513;
    int ret_val619 = t618;
    {
      std____cxx11__list_double__std__allocator_double______list(&mylist515);
    }
    return ret_val619;
  int t620 = __retval513;
  return t620;
}

// function: _ZNSt15__new_allocatorIdEC2Ev
void std____new_allocator_double_____new_allocator(struct std____new_allocator_double_* v621) {
bb622: ;
  struct std____new_allocator_double_* this623;
  this623 = v621;
  struct std____new_allocator_double_* t624 = this623;
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v625) {
bb626: ;
  struct std____detail___List_node_header* this627;
  struct std____detail___List_node_base* __retval628;
  this627 = v625;
  struct std____detail___List_node_header* t629 = this627;
  struct std____detail___List_node_base* base630 = (struct std____detail___List_node_base*)((char *)t629 + 0);
  __retval628 = base630;
  struct std____detail___List_node_base* t631 = __retval628;
  return t631;
}

// function: _ZSt10destroy_atIdEvPT_
void void_std__destroy_at_double_(double* v632) {
bb633: ;
  double* __location634;
  __location634 = v632;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIdEEE7destroyIdEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_double_______destroy_double_(struct std__allocator_std___List_node_double__* v635, double* v636) {
bb637: ;
  struct std__allocator_std___List_node_double__* __a638;
  double* __p639;
  __a638 = v635;
  __p639 = v636;
  double* t640 = __p639;
  void_std__destroy_at_double_(t640);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIdE7_M_addrEv
void* __gnu_cxx____aligned_membuf_double____M_addr(struct __gnu_cxx____aligned_membuf_double_* v641) {
bb642: ;
  struct __gnu_cxx____aligned_membuf_double_* this643;
  void* __retval644;
  this643 = v641;
  struct __gnu_cxx____aligned_membuf_double_* t645 = this643;
  void* cast646 = (void*)&(t645->_M_storage);
  __retval644 = cast646;
  void* t647 = __retval644;
  return t647;
}

// function: _ZN9__gnu_cxx16__aligned_membufIdE6_M_ptrEv
double* __gnu_cxx____aligned_membuf_double____M_ptr(struct __gnu_cxx____aligned_membuf_double_* v648) {
bb649: ;
  struct __gnu_cxx____aligned_membuf_double_* this650;
  double* __retval651;
  this650 = v648;
  struct __gnu_cxx____aligned_membuf_double_* t652 = this650;
  void* r653 = __gnu_cxx____aligned_membuf_double____M_addr(t652);
  double* cast654 = (double*)r653;
  __retval651 = cast654;
  double* t655 = __retval651;
  return t655;
}

// function: _ZNSt10_List_nodeIdE9_M_valptrEv
double* std___List_node_double____M_valptr(struct std___List_node_double_* v656) {
bb657: ;
  struct std___List_node_double_* this658;
  double* __retval659;
  this658 = v656;
  struct std___List_node_double_* t660 = this658;
  double* r661 = __gnu_cxx____aligned_membuf_double____M_ptr(&t660->_M_storage);
  __retval659 = r661;
  double* t662 = __retval659;
  return t662;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb663: ;
  _Bool __retval664;
    _Bool c665 = 0;
    __retval664 = c665;
    _Bool t666 = __retval664;
    return t666;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIdEE10deallocateEPS1_m
void std____new_allocator_std___List_node_double_____deallocate(struct std____new_allocator_std___List_node_double__* v667, struct std___List_node_double_* v668, unsigned long v669) {
bb670: ;
  struct std____new_allocator_std___List_node_double__* this671;
  struct std___List_node_double_* __p672;
  unsigned long __n673;
  this671 = v667;
  __p672 = v668;
  __n673 = v669;
  struct std____new_allocator_std___List_node_double__* t674 = this671;
    unsigned long c675 = 8;
    unsigned long c676 = 16;
    _Bool c677 = ((c675 > c676)) ? 1 : 0;
    if (c677) {
      struct std___List_node_double_* t678 = __p672;
      void* cast679 = (void*)t678;
      unsigned long t680 = __n673;
      unsigned long c681 = 24;
      unsigned long b682 = t680 * c681;
      unsigned long c683 = 8;
      operator_delete_3(cast679, b682, c683);
      return;
    }
  struct std___List_node_double_* t684 = __p672;
  void* cast685 = (void*)t684;
  unsigned long t686 = __n673;
  unsigned long c687 = 24;
  unsigned long b688 = t686 * c687;
  operator_delete_2(cast685, b688);
  return;
}

// function: _ZNSaISt10_List_nodeIdEE10deallocateEPS0_m
void std__allocator_std___List_node_double_____deallocate(struct std__allocator_std___List_node_double__* v689, struct std___List_node_double_* v690, unsigned long v691) {
bb692: ;
  struct std__allocator_std___List_node_double__* this693;
  struct std___List_node_double_* __p694;
  unsigned long __n695;
  this693 = v689;
  __p694 = v690;
  __n695 = v691;
  struct std__allocator_std___List_node_double__* t696 = this693;
    _Bool r697 = std____is_constant_evaluated();
    if (r697) {
      struct std___List_node_double_* t698 = __p694;
      void* cast699 = (void*)t698;
      operator_delete(cast699);
      return;
    }
  struct std____new_allocator_std___List_node_double__* base700 = (struct std____new_allocator_std___List_node_double__*)((char *)t696 + 0);
  struct std___List_node_double_* t701 = __p694;
  unsigned long t702 = __n695;
  std____new_allocator_std___List_node_double_____deallocate(base700, t701, t702);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIdEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_double_______deallocate(struct std__allocator_std___List_node_double__* v703, struct std___List_node_double_* v704, unsigned long v705) {
bb706: ;
  struct std__allocator_std___List_node_double__* __a707;
  struct std___List_node_double_* __p708;
  unsigned long __n709;
  __a707 = v703;
  __p708 = v704;
  __n709 = v705;
  struct std__allocator_std___List_node_double__* t710 = __a707;
  struct std___List_node_double_* t711 = __p708;
  unsigned long t712 = __n709;
  std__allocator_std___List_node_double_____deallocate(t710, t711, t712);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE11_M_put_nodeEPSt10_List_nodeIdE
void std____cxx11___List_base_double__std__allocator_double______M_put_node(struct std____cxx11___List_base_double__std__allocator_double__* v713, struct std___List_node_double_* v714) {
bb715: ;
  struct std____cxx11___List_base_double__std__allocator_double__* this716;
  struct std___List_node_double_* __p717;
  this716 = v713;
  __p717 = v714;
  struct std____cxx11___List_base_double__std__allocator_double__* t718 = this716;
  struct std__allocator_std___List_node_double__* base719 = (struct std__allocator_std___List_node_double__*)((char *)&(t718->_M_impl) + 0);
  struct std___List_node_double_* t720 = __p717;
  unsigned long c721 = 1;
  std__allocator_traits_std__allocator_std___List_node_double_______deallocate(base719, t720, c721);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE15_M_destroy_nodeEPSt10_List_nodeIdE
void std____cxx11___List_base_double__std__allocator_double______M_destroy_node(struct std____cxx11___List_base_double__std__allocator_double__* v722, struct std___List_node_double_* v723) {
bb724: ;
  struct std____cxx11___List_base_double__std__allocator_double__* this725;
  struct std___List_node_double_* __p726;
  this725 = v722;
  __p726 = v723;
  struct std____cxx11___List_base_double__std__allocator_double__* t727 = this725;
  struct std__allocator_std___List_node_double__* base728 = (struct std__allocator_std___List_node_double__*)((char *)&(t727->_M_impl) + 0);
  struct std___List_node_double_* t729 = __p726;
  double* r730 = std___List_node_double____M_valptr(t729);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___List_node_double_______destroy_double_(base728, r730);
  struct std___List_node_double_* t731 = __p726;
  std____cxx11___List_base_double__std__allocator_double______M_put_node(t727, t731);
  return;
}

// function: _ZNSt10_List_nodeIdE11_M_node_ptrEv
struct std___List_node_double_* std___List_node_double____M_node_ptr(struct std___List_node_double_* v732) {
bb733: ;
  struct std___List_node_double_* this734;
  struct std___List_node_double_* __retval735;
  this734 = v732;
  struct std___List_node_double_* t736 = this734;
  __retval735 = t736;
  struct std___List_node_double_* t737 = __retval735;
  return t737;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE8_M_clearEv
void std____cxx11___List_base_double__std__allocator_double______M_clear(struct std____cxx11___List_base_double__std__allocator_double__* v738) {
bb739: ;
  struct std____cxx11___List_base_double__std__allocator_double__* this740;
  struct std____detail___List_node_base* __cur741;
  this740 = v738;
  struct std____cxx11___List_base_double__std__allocator_double__* t742 = this740;
  struct std____detail___List_node_base* base743 = (struct std____detail___List_node_base*)((char *)&(t742->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t744 = base743->_M_next;
  __cur741 = t744;
    while (1) {
      struct std____detail___List_node_base* t745 = __cur741;
      struct std____detail___List_node_base* r746 = std____detail___List_node_header___M_base(&t742->_M_impl._M_node);
      if (__cir_exc_active) {
        return;
      }
      _Bool c747 = ((t745 != r746)) ? 1 : 0;
      if (!c747) break;
        struct std___List_node_double_* __tmp748;
        struct std____detail___List_node_base* t749 = __cur741;
        struct std___List_node_double_* derived750 = (struct std___List_node_double_*)((char *)t749 - 0);
        __tmp748 = derived750;
        struct std___List_node_double_* t751 = __tmp748;
        struct std____detail___List_node_base* base752 = (struct std____detail___List_node_base*)((char *)t751 + 0);
        struct std____detail___List_node_base* t753 = base752->_M_next;
        __cur741 = t753;
        struct std___List_node_double_* t754 = __tmp748;
        struct std___List_node_double_* r755 = std___List_node_double____M_node_ptr(t754);
        if (__cir_exc_active) {
          return;
        }
        std____cxx11___List_base_double__std__allocator_double______M_destroy_node(t742, r755);
        if (__cir_exc_active) {
          return;
        }
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE10_List_implD2Ev
void std____cxx11___List_base_double__std__allocator_double______List_impl____List_impl(struct std____cxx11___List_base_double__std__allocator_double_____List_impl* v756) {
bb757: ;
  struct std____cxx11___List_base_double__std__allocator_double_____List_impl* this758;
  this758 = v756;
  struct std____cxx11___List_base_double__std__allocator_double_____List_impl* t759 = this758;
  {
    struct std__allocator_std___List_node_double__* base760 = (struct std__allocator_std___List_node_double__*)((char *)t759 + 0);
    std__allocator_std___List_node_double______allocator(base760);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEED2Ev
void std____cxx11___List_base_double__std__allocator_double_______List_base(struct std____cxx11___List_base_double__std__allocator_double__* v761) {
bb762: ;
  struct std____cxx11___List_base_double__std__allocator_double__* this763;
  this763 = v761;
  struct std____cxx11___List_base_double__std__allocator_double__* t764 = this763;
    std____cxx11___List_base_double__std__allocator_double______M_clear(t764);
  {
    std____cxx11___List_base_double__std__allocator_double______List_impl____List_impl(&t764->_M_impl);
  }
  return;
}

// function: _ZNSaISt10_List_nodeIdEEC2IdEERKSaIT_E
void std__allocator_std___List_node_double_____allocator_double_(struct std__allocator_std___List_node_double__* v765, struct std__allocator_double_* v766) {
bb767: ;
  struct std__allocator_std___List_node_double__* this768;
  struct std__allocator_double_* unnamed769;
  this768 = v765;
  unnamed769 = v766;
  struct std__allocator_std___List_node_double__* t770 = this768;
  struct std____new_allocator_std___List_node_double__* base771 = (struct std____new_allocator_std___List_node_double__*)((char *)t770 + 0);
  std____new_allocator_std___List_node_double_______new_allocator_2(base771);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE10_List_implC2EOSaISt10_List_nodeIdEE
void std____cxx11___List_base_double__std__allocator_double______List_impl___List_impl(struct std____cxx11___List_base_double__std__allocator_double_____List_impl* v772, struct std__allocator_std___List_node_double__* v773) {
bb774: ;
  struct std____cxx11___List_base_double__std__allocator_double_____List_impl* this775;
  struct std__allocator_std___List_node_double__* __a776;
  this775 = v772;
  __a776 = v773;
  struct std____cxx11___List_base_double__std__allocator_double_____List_impl* t777 = this775;
  struct std__allocator_std___List_node_double__* base778 = (struct std__allocator_std___List_node_double__*)((char *)t777 + 0);
  struct std__allocator_std___List_node_double__* t779 = __a776;
  std__allocator_std___List_node_double_____allocator(base778, t779);
    std____detail___List_node_header___List_node_header(&t777->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEEC2EOSaISt10_List_nodeIdEE
void std____cxx11___List_base_double__std__allocator_double______List_base(struct std____cxx11___List_base_double__std__allocator_double__* v780, struct std__allocator_std___List_node_double__* v781) {
bb782: ;
  struct std____cxx11___List_base_double__std__allocator_double__* this783;
  struct std__allocator_std___List_node_double__* __a784;
  this783 = v780;
  __a784 = v781;
  struct std____cxx11___List_base_double__std__allocator_double__* t785 = this783;
  struct std__allocator_std___List_node_double__* t786 = __a784;
  std____cxx11___List_base_double__std__allocator_double______List_impl___List_impl(&t785->_M_impl, t786);
  return;
}

// function: _ZNSaISt10_List_nodeIdEED2Ev
void std__allocator_std___List_node_double______allocator(struct std__allocator_std___List_node_double__* v787) {
bb788: ;
  struct std__allocator_std___List_node_double__* this789;
  this789 = v787;
  struct std__allocator_std___List_node_double__* t790 = this789;
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_double__* std____cxx11___List_base_double__std__allocator_double______M_get_Node_allocator(struct std____cxx11___List_base_double__std__allocator_double__* v791) {
bb792: ;
  struct std____cxx11___List_base_double__std__allocator_double__* this793;
  struct std__allocator_std___List_node_double__* __retval794;
  this793 = v791;
  struct std____cxx11___List_base_double__std__allocator_double__* t795 = this793;
  struct std__allocator_std___List_node_double__* base796 = (struct std__allocator_std___List_node_double__*)((char *)&(t795->_M_impl) + 0);
  __retval794 = base796;
  struct std__allocator_std___List_node_double__* t797 = __retval794;
  return t797;
}

// function: _ZNKSt15__new_allocatorISt10_List_nodeIdEE11_M_max_sizeEv
unsigned long std____new_allocator_std___List_node_double______M_max_size___const(struct std____new_allocator_std___List_node_double__* v798) {
bb799: ;
  struct std____new_allocator_std___List_node_double__* this800;
  unsigned long __retval801;
  this800 = v798;
  struct std____new_allocator_std___List_node_double__* t802 = this800;
  unsigned long c803 = 9223372036854775807;
  unsigned long c804 = 24;
  unsigned long b805 = c803 / c804;
  __retval801 = b805;
  unsigned long t806 = __retval801;
  return t806;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIdEE8allocateEmPKv
struct std___List_node_double_* std____new_allocator_std___List_node_double_____allocate(struct std____new_allocator_std___List_node_double__* v807, unsigned long v808, void* v809) {
bb810: ;
  struct std____new_allocator_std___List_node_double__* this811;
  unsigned long __n812;
  void* unnamed813;
  struct std___List_node_double_* __retval814;
  this811 = v807;
  __n812 = v808;
  unnamed813 = v809;
  struct std____new_allocator_std___List_node_double__* t815 = this811;
    unsigned long t816 = __n812;
    unsigned long r817 = std____new_allocator_std___List_node_double______M_max_size___const(t815);
    _Bool c818 = ((t816 > r817)) ? 1 : 0;
    if (c818) {
        unsigned long t819 = __n812;
        unsigned long c820 = -1;
        unsigned long c821 = 24;
        unsigned long b822 = c820 / c821;
        _Bool c823 = ((t819 > b822)) ? 1 : 0;
        if (c823) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c824 = 8;
    unsigned long c825 = 16;
    _Bool c826 = ((c824 > c825)) ? 1 : 0;
    if (c826) {
      unsigned long __al827;
      unsigned long c828 = 8;
      __al827 = c828;
      unsigned long t829 = __n812;
      unsigned long c830 = 24;
      unsigned long b831 = t829 * c830;
      unsigned long t832 = __al827;
      void* r833 = operator_new_2(b831, t832);
      if (__cir_exc_active) {
        struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
        return __cir_eh_ret;
      }
      struct std___List_node_double_* cast834 = (struct std___List_node_double_*)r833;
      __retval814 = cast834;
      struct std___List_node_double_* t835 = __retval814;
      return t835;
    }
  unsigned long t836 = __n812;
  unsigned long c837 = 24;
  unsigned long b838 = t836 * c837;
  void* r839 = operator_new(b838);
  if (__cir_exc_active) {
    struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
    return __cir_eh_ret;
  }
  struct std___List_node_double_* cast840 = (struct std___List_node_double_*)r839;
  __retval814 = cast840;
  struct std___List_node_double_* t841 = __retval814;
  return t841;
}

// function: _ZNSaISt10_List_nodeIdEE8allocateEm
struct std___List_node_double_* std__allocator_std___List_node_double_____allocate(struct std__allocator_std___List_node_double__* v842, unsigned long v843) {
bb844: ;
  struct std__allocator_std___List_node_double__* this845;
  unsigned long __n846;
  struct std___List_node_double_* __retval847;
  this845 = v842;
  __n846 = v843;
  struct std__allocator_std___List_node_double__* t848 = this845;
    _Bool r849 = std____is_constant_evaluated();
    if (r849) {
        unsigned long t850 = __n846;
        unsigned long c851 = 24;
        unsigned long ovr852;
        _Bool ovf853 = __builtin_mul_overflow(t850, c851, &ovr852);
        __n846 = ovr852;
        if (ovf853) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t854 = __n846;
      void* r855 = operator_new(t854);
      if (__cir_exc_active) {
        struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
        return __cir_eh_ret;
      }
      struct std___List_node_double_* cast856 = (struct std___List_node_double_*)r855;
      __retval847 = cast856;
      struct std___List_node_double_* t857 = __retval847;
      return t857;
    }
  struct std____new_allocator_std___List_node_double__* base858 = (struct std____new_allocator_std___List_node_double__*)((char *)t848 + 0);
  unsigned long t859 = __n846;
  void* c860 = ((void*)0);
  struct std___List_node_double_* r861 = std____new_allocator_std___List_node_double_____allocate(base858, t859, c860);
  if (__cir_exc_active) {
    struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
    return __cir_eh_ret;
  }
  __retval847 = r861;
  struct std___List_node_double_* t862 = __retval847;
  return t862;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIdEEE8allocateERS2_m
struct std___List_node_double_* std__allocator_traits_std__allocator_std___List_node_double_______allocate(struct std__allocator_std___List_node_double__* v863, unsigned long v864) {
bb865: ;
  struct std__allocator_std___List_node_double__* __a866;
  unsigned long __n867;
  struct std___List_node_double_* __retval868;
  __a866 = v863;
  __n867 = v864;
  struct std__allocator_std___List_node_double__* t869 = __a866;
  unsigned long t870 = __n867;
  struct std___List_node_double_* r871 = std__allocator_std___List_node_double_____allocate(t869, t870);
  if (__cir_exc_active) {
    struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
    return __cir_eh_ret;
  }
  __retval868 = r871;
  struct std___List_node_double_* t872 = __retval868;
  return t872;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIdEEEC2ERS2_PS1_
void std____allocated_ptr_std__allocator_std___List_node_double_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_double___* v873, struct std__allocator_std___List_node_double__* v874, struct std___List_node_double_* v875) {
bb876: ;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* this877;
  struct std__allocator_std___List_node_double__* __a878;
  struct std___List_node_double_* __ptr879;
  this877 = v873;
  __a878 = v874;
  __ptr879 = v875;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t880 = this877;
  struct std__allocator_std___List_node_double__* t881 = __a878;
  t880->_M_alloc = t881;
  struct std___List_node_double_* t882 = __ptr879;
  t880->_M_ptr = t882;
  return;
}

// function: _ZSt18__allocate_guardedISaISt10_List_nodeIdEEESt15__allocated_ptrIT_ERS4_
struct std____allocated_ptr_std__allocator_std___List_node_double___ std____allocated_ptr_std__allocator_std___List_node_double______std____allocate_guarded_std__allocator_std___List_node_double_____(struct std__allocator_std___List_node_double__* v883) {
bb884: ;
  struct std__allocator_std___List_node_double__* __a885;
  struct std____allocated_ptr_std__allocator_std___List_node_double___ __retval886;
  __a885 = v883;
  struct std__allocator_std___List_node_double__* t887 = __a885;
  struct std__allocator_std___List_node_double__* t888 = __a885;
  unsigned long c889 = 1;
  struct std___List_node_double_* r890 = std__allocator_traits_std__allocator_std___List_node_double_______allocate(t888, c889);
  if (__cir_exc_active) {
    struct std____allocated_ptr_std__allocator_std___List_node_double___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std____allocated_ptr_std__allocator_std___List_node_double_________allocated_ptr_2(&__retval886, t887, r890);
  struct std____allocated_ptr_std__allocator_std___List_node_double___ t891 = __retval886;
  return t891;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIdEEEC2EOSt15__allocated_ptrIS2_E
void std____allocated_obj_std__allocator_std___List_node_double_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_double___* v892, struct std____allocated_ptr_std__allocator_std___List_node_double___* v893) {
bb894: ;
  struct std____allocated_obj_std__allocator_std___List_node_double___* this895;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* __ptr896;
  this895 = v892;
  __ptr896 = v893;
  struct std____allocated_obj_std__allocator_std___List_node_double___* t897 = this895;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* base898 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t897 + 0);
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t899 = __ptr896;
  std____allocated_ptr_std__allocator_std___List_node_double_________allocated_ptr(base898, t899);
    struct std____allocated_ptr_std__allocator_std___List_node_double___* base900 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t897 + 0);
    struct std___List_node_double_* r901 = std____allocated_ptr_std__allocator_std___List_node_double_______get___const(base900);
    if (__cir_exc_active) {
      {
        struct std____allocated_ptr_std__allocator_std___List_node_double___* base902 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t897 + 0);
        std____allocated_ptr_std__allocator_std___List_node_double__________allocated_ptr(base902);
      }
      return;
    }
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIdEEED2Ev
void std____allocated_ptr_std__allocator_std___List_node_double__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_double___* v903) {
bb904: ;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* this905;
  this905 = v903;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t906 = this905;
    struct std___List_node_double_* t907 = t906->_M_ptr;
    struct std___List_node_double_* c908 = ((void*)0);
    _Bool c909 = ((t907 != c908)) ? 1 : 0;
    if (c909) {
      struct std__allocator_std___List_node_double__* t910 = t906->_M_alloc;
      struct std___List_node_double_* t911 = t906->_M_ptr;
      unsigned long c912 = 1;
      std__allocator_traits_std__allocator_std___List_node_double_______deallocate(t910, t911, c912);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt22__allocate_guarded_objISaISt10_List_nodeIdEEESt15__allocated_objIT_ERS4_
struct std____allocated_obj_std__allocator_std___List_node_double___ std____allocated_obj_std__allocator_std___List_node_double______std____allocate_guarded_obj_std__allocator_std___List_node_double_____(struct std__allocator_std___List_node_double__* v913) {
bb914: ;
  struct std__allocator_std___List_node_double__* __a915;
  struct std____allocated_obj_std__allocator_std___List_node_double___ __retval916;
  struct std____allocated_ptr_std__allocator_std___List_node_double___ ref_tmp0917;
  __a915 = v913;
  struct std__allocator_std___List_node_double__* t918 = __a915;
  struct std____allocated_ptr_std__allocator_std___List_node_double___ r919 = std____allocated_ptr_std__allocator_std___List_node_double______std____allocate_guarded_std__allocator_std___List_node_double_____(t918);
  if (__cir_exc_active) {
    struct std____allocated_obj_std__allocator_std___List_node_double___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0917 = r919;
    std____allocated_obj_std__allocator_std___List_node_double_________allocated_obj(&__retval916, &ref_tmp0917);
    if (__cir_exc_active) {
      {
        std____allocated_ptr_std__allocator_std___List_node_double__________allocated_ptr(&ref_tmp0917);
      }
      struct std____allocated_obj_std__allocator_std___List_node_double___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
  {
    std____allocated_ptr_std__allocator_std___List_node_double__________allocated_ptr(&ref_tmp0917);
  }
  struct std____allocated_obj_std__allocator_std___List_node_double___ t920 = __retval916;
  return t920;
}

// function: _ZSt12construct_atIdJRdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
double* _ZSt12construct_atIdJRdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(double* v921, double* v922) {
bb923: ;
  double* __location924;
  double* __args925;
  double* __retval926;
  void* __loc927;
  __location924 = v921;
  __args925 = v922;
  double* t928 = __location924;
  void* cast929 = (void*)t928;
  __loc927 = cast929;
    void* t930 = __loc927;
    double* cast931 = (double*)t930;
    double* t932 = __args925;
    double t933 = *t932;
    *cast931 = t933;
    __retval926 = cast931;
    double* t934 = __retval926;
    return t934;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIdEEE9constructIdJRdEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_double_______construct_double__double__(struct std__allocator_std___List_node_double__* v935, double* v936, double* v937) {
bb938: ;
  struct std__allocator_std___List_node_double__* __a939;
  double* __p940;
  double* __args941;
  __a939 = v935;
  __p940 = v936;
  __args941 = v937;
  double* t942 = __p940;
  double* t943 = __args941;
  double* r944 = _ZSt12construct_atIdJRdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t942, t943);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIdEEEptEv
struct std___List_node_double_* std____allocated_obj_std__allocator_std___List_node_double_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_double___* v945) {
bb946: ;
  struct std____allocated_obj_std__allocator_std___List_node_double___* this947;
  struct std___List_node_double_* __retval948;
  this947 = v945;
  struct std____allocated_obj_std__allocator_std___List_node_double___* t949 = this947;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* base950 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t949 + 0);
  struct std___List_node_double_* r951 = std____allocated_ptr_std__allocator_std___List_node_double_______get___const(base950);
  if (__cir_exc_active) {
    struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
    return __cir_eh_ret;
  }
  __retval948 = r951;
  struct std___List_node_double_* t952 = __retval948;
  return t952;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIdEDnET_RS3_OT0_
struct std___List_node_double_* std___List_node_double___std____exchange_std___List_node_double____decltype_nullptr___std___List_node_double_____decltype(struct std___List_node_double_** v953, void** v954) {
bb955: ;
  struct std___List_node_double_** __obj956;
  void** __new_val957;
  struct std___List_node_double_* __retval958;
  struct std___List_node_double_* __old_val959;
  __obj956 = v953;
  __new_val957 = v954;
  struct std___List_node_double_** t960 = __obj956;
  struct std___List_node_double_* t961 = *t960;
  __old_val959 = t961;
  void** t962 = __new_val957;
  struct std___List_node_double_* c963 = ((void*)0);
  struct std___List_node_double_** t964 = __obj956;
  *t964 = c963;
  struct std___List_node_double_* t965 = __old_val959;
  __retval958 = t965;
  struct std___List_node_double_* t966 = __retval958;
  return t966;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIdEEE7releaseEv
struct std___List_node_double_* std____allocated_ptr_std__allocator_std___List_node_double_______release(struct std____allocated_ptr_std__allocator_std___List_node_double___* v967) {
bb968: ;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* this969;
  struct std___List_node_double_* __retval970;
  void* ref_tmp0971;
  this969 = v967;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t972 = this969;
  void* c973 = ((void*)0);
  ref_tmp0971 = c973;
  struct std___List_node_double_* r974 = std___List_node_double___std____exchange_std___List_node_double____decltype_nullptr___std___List_node_double_____decltype(&t972->_M_ptr, &ref_tmp0971);
  if (__cir_exc_active) {
    struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
    return __cir_eh_ret;
  }
  __retval970 = r974;
  struct std___List_node_double_* t975 = __retval970;
  return t975;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIdEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_double__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_double___* v976) {
bb977: ;
  struct std____allocated_obj_std__allocator_std___List_node_double___* this978;
  this978 = v976;
  struct std____allocated_obj_std__allocator_std___List_node_double___* t979 = this978;
      struct std____allocated_ptr_std__allocator_std___List_node_double___* base980 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t979 + 0);
      _Bool r981 = std____allocated_ptr_std__allocator_std___List_node_double_______operator_bool___const(base980);
      if (r981) {
        struct std____allocated_ptr_std__allocator_std___List_node_double___* base982 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t979 + 0);
        struct std___List_node_double_* r983 = std____allocated_ptr_std__allocator_std___List_node_double_______get___const(base982);
        if (__cir_exc_active) {
          {
            struct std____allocated_ptr_std__allocator_std___List_node_double___* base984 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t979 + 0);
            std____allocated_ptr_std__allocator_std___List_node_double__________allocated_ptr(base984);
          }
          return;
        }
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_double___* base985 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t979 + 0);
    std____allocated_ptr_std__allocator_std___List_node_double__________allocated_ptr(base985);
  }
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE14_M_create_nodeIJRdEEEPSt10_List_nodeIdEDpOT_
struct std___List_node_double_* std___List_node_double___std____cxx11__list_double__std__allocator_double______M_create_node_double__(struct std____cxx11__list_double__std__allocator_double__* v986, double* v987) {
bb988: ;
  struct std____cxx11__list_double__std__allocator_double__* this989;
  double* __args990;
  struct std___List_node_double_* __retval991;
  struct std__allocator_std___List_node_double__* __alloc992;
  struct std____allocated_obj_std__allocator_std___List_node_double___ __guard993;
  this989 = v986;
  __args990 = v987;
  struct std____cxx11__list_double__std__allocator_double__* t994 = this989;
  struct std____cxx11___List_base_double__std__allocator_double__* base995 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t994 + 0);
  struct std__allocator_std___List_node_double__* r996 = std____cxx11___List_base_double__std__allocator_double______M_get_Node_allocator(base995);
  __alloc992 = r996;
  struct std__allocator_std___List_node_double__* t997 = __alloc992;
  struct std____allocated_obj_std__allocator_std___List_node_double___ r998 = std____allocated_obj_std__allocator_std___List_node_double______std____allocate_guarded_obj_std__allocator_std___List_node_double_____(t997);
  if (__cir_exc_active) {
    struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
    return __cir_eh_ret;
  }
  __guard993 = r998;
    struct std__allocator_std___List_node_double__* t999 = __alloc992;
    struct std___List_node_double_* r1000 = std____allocated_obj_std__allocator_std___List_node_double_______operator_____const(&__guard993);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_double__________allocated_obj(&__guard993);
      }
      struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
      return __cir_eh_ret;
    }
    double* r1001 = std___List_node_double____M_valptr(r1000);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_double__________allocated_obj(&__guard993);
      }
      struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
      return __cir_eh_ret;
    }
    double* t1002 = __args990;
    void_std__allocator_traits_std__allocator_std___List_node_double_______construct_double__double__(t999, r1001, t1002);
    struct std____allocated_ptr_std__allocator_std___List_node_double___* base1003 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)&(__guard993) + 0);
    struct std___List_node_double_* r1004 = std____allocated_ptr_std__allocator_std___List_node_double_______release(base1003);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_double__________allocated_obj(&__guard993);
      }
      struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
      return __cir_eh_ret;
    }
    __retval991 = r1004;
    struct std___List_node_double_* t1005 = __retval991;
    struct std___List_node_double_* ret_val1006 = t1005;
    {
      std____allocated_obj_std__allocator_std___List_node_double__________allocated_obj(&__guard993);
    }
    return ret_val1006;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE11_M_inc_sizeEm
void std____cxx11___List_base_double__std__allocator_double______M_inc_size(struct std____cxx11___List_base_double__std__allocator_double__* v1007, unsigned long v1008) {
bb1009: ;
  struct std____cxx11___List_base_double__std__allocator_double__* this1010;
  unsigned long __n1011;
  this1010 = v1007;
  __n1011 = v1008;
  struct std____cxx11___List_base_double__std__allocator_double__* t1012 = this1010;
  unsigned long t1013 = __n1011;
  struct std____detail___List_size* base1014 = (struct std____detail___List_size*)((char *)&(t1012->_M_impl._M_node) + 16);
  unsigned long t1015 = base1014->_M_size;
  unsigned long b1016 = t1015 + t1013;
  base1014->_M_size = b1016;
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE9_M_insertIJRdEEEvSt14_List_iteratorIdEDpOT_
void void_std____cxx11__list_double__std__allocator_double______M_insert_double__(struct std____cxx11__list_double__std__allocator_double__* v1017, struct std___List_iterator_double_ v1018, double* v1019) {
bb1020: ;
  struct std____cxx11__list_double__std__allocator_double__* this1021;
  struct std___List_iterator_double_ __position1022;
  double* __args1023;
  struct std___List_node_double_* __tmp1024;
  this1021 = v1017;
  __position1022 = v1018;
  __args1023 = v1019;
  struct std____cxx11__list_double__std__allocator_double__* t1025 = this1021;
  double* t1026 = __args1023;
  struct std___List_node_double_* r1027 = std___List_node_double___std____cxx11__list_double__std__allocator_double______M_create_node_double__(t1025, t1026);
  if (__cir_exc_active) {
    return;
  }
  __tmp1024 = r1027;
  struct std___List_node_double_* t1028 = __tmp1024;
  struct std____detail___List_node_base* base1029 = (struct std____detail___List_node_base*)((char *)t1028 + 0);
  struct std____detail___List_node_base* t1030 = __position1022._M_node;
  std____detail___List_node_base___M_hook(base1029, t1030);
  struct std____cxx11___List_base_double__std__allocator_double__* base1031 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t1025 + 0);
  unsigned long c1032 = 1;
  std____cxx11___List_base_double__std__allocator_double______M_inc_size(base1031, c1032);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v1033) {
bb1034: ;
  struct std____detail___List_node_base* this1035;
  struct std____detail___List_node_base* __retval1036;
  this1035 = v1033;
  struct std____detail___List_node_base* t1037 = this1035;
  __retval1036 = t1037;
  struct std____detail___List_node_base* t1038 = __retval1036;
  return t1038;
}

// function: _ZNKSt7__cxx114listIdSaIdEE5emptyEv
_Bool std____cxx11__list_double__std__allocator_double_____empty___const(struct std____cxx11__list_double__std__allocator_double__* v1039) {
bb1040: ;
  struct std____cxx11__list_double__std__allocator_double__* this1041;
  _Bool __retval1042;
  this1041 = v1039;
  struct std____cxx11__list_double__std__allocator_double__* t1043 = this1041;
  struct std____cxx11___List_base_double__std__allocator_double__* base1044 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t1043 + 0);
  struct std____detail___List_node_base* base1045 = (struct std____detail___List_node_base*)((char *)&(base1044->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t1046 = base1045->_M_next;
  struct std____cxx11___List_base_double__std__allocator_double__* base1047 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t1043 + 0);
  struct std____detail___List_node_base* base1048 = (struct std____detail___List_node_base*)((char *)&(base1047->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r1049 = std____detail___List_node_base___M_base___const(base1048);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool c1050 = ((t1046 == r1049)) ? 1 : 0;
  __retval1042 = c1050;
  _Bool t1051 = __retval1042;
  return t1051;
}

// function: _ZNSt14_List_iteratorIdEmmEv
struct std___List_iterator_double_* std___List_iterator_double___operator__(struct std___List_iterator_double_* v1052) {
bb1053: ;
  struct std___List_iterator_double_* this1054;
  struct std___List_iterator_double_* __retval1055;
  this1054 = v1052;
  struct std___List_iterator_double_* t1056 = this1054;
  struct std____detail___List_node_base* t1057 = t1056->_M_node;
  struct std____detail___List_node_base* t1058 = t1057->_M_prev;
  t1056->_M_node = t1058;
  __retval1055 = t1056;
  struct std___List_iterator_double_* t1059 = __retval1055;
  return t1059;
}

// function: _ZNSt7__cxx114listIdSaIdEE4backEv
double* std____cxx11__list_double__std__allocator_double_____back(struct std____cxx11__list_double__std__allocator_double__* v1060) {
bb1061: ;
  struct std____cxx11__list_double__std__allocator_double__* this1062;
  double* __retval1063;
  struct std___List_iterator_double_ __tmp1064;
  this1062 = v1060;
  struct std____cxx11__list_double__std__allocator_double__* t1065 = this1062;
    do {
          _Bool r1066 = std____cxx11__list_double__std__allocator_double_____empty___const(t1065);
          if (r1066) {
            char* cast1067 = (char*)&(_str_10);
            int c1068 = 1674;
            char* cast1069 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIdSaIdEE4backEv);
            char* cast1070 = (char*)&(_str_11);
            std____glibcxx_assert_fail(cast1067, c1068, cast1069, cast1070);
          }
      _Bool c1071 = 0;
      if (!c1071) break;
    } while (1);
  struct std___List_iterator_double_ r1072 = std____cxx11__list_double__std__allocator_double_____end(t1065);
  __tmp1064 = r1072;
  struct std___List_iterator_double_* r1073 = std___List_iterator_double___operator__(&__tmp1064);
  double* r1074 = std___List_iterator_double___operator____const(&__tmp1064);
  __retval1063 = r1074;
  double* t1075 = __retval1063;
  return t1075;
}

// function: _ZNSt7__cxx114listIdSaIdEE12emplace_backIJRdEEES4_DpOT_
double* double__std____cxx11__list_double__std__allocator_double_____emplace_back_double__(struct std____cxx11__list_double__std__allocator_double__* v1076, double* v1077) {
bb1078: ;
  struct std____cxx11__list_double__std__allocator_double__* this1079;
  double* __args1080;
  double* __retval1081;
  struct std___List_iterator_double_ agg_tmp01082;
  this1079 = v1076;
  __args1080 = v1077;
  struct std____cxx11__list_double__std__allocator_double__* t1083 = this1079;
  struct std___List_iterator_double_ r1084 = std____cxx11__list_double__std__allocator_double_____end(t1083);
  agg_tmp01082 = r1084;
  double* t1085 = __args1080;
  struct std___List_iterator_double_ t1086 = agg_tmp01082;
  void_std____cxx11__list_double__std__allocator_double______M_insert_double__(t1083, t1086, t1085);
  if (__cir_exc_active) {
    double* __cir_eh_ret = (double*)0;
    return __cir_eh_ret;
  }
  double* r1087 = std____cxx11__list_double__std__allocator_double_____back(t1083);
  __retval1081 = r1087;
  double* t1088 = __retval1081;
  return t1088;
}

// function: _ZSteqRKSt14_List_iteratorIdES2_
_Bool std__operator___2(struct std___List_iterator_double_* v1089, struct std___List_iterator_double_* v1090) {
bb1091: ;
  struct std___List_iterator_double_* __x1092;
  struct std___List_iterator_double_* __y1093;
  _Bool __retval1094;
  __x1092 = v1089;
  __y1093 = v1090;
  struct std___List_iterator_double_* t1095 = __x1092;
  struct std____detail___List_node_base* t1096 = t1095->_M_node;
  struct std___List_iterator_double_* t1097 = __y1093;
  struct std____detail___List_node_base* t1098 = t1097->_M_node;
  _Bool c1099 = ((t1096 == t1098)) ? 1 : 0;
  __retval1094 = c1099;
  _Bool t1100 = __retval1094;
  return t1100;
}

// function: _ZNSt14_List_iteratorIdEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_double____List_iterator(struct std___List_iterator_double_* v1101, struct std____detail___List_node_base* v1102) {
bb1103: ;
  struct std___List_iterator_double_* this1104;
  struct std____detail___List_node_base* __x1105;
  this1104 = v1101;
  __x1105 = v1102;
  struct std___List_iterator_double_* t1106 = this1104;
  struct std____detail___List_node_base* t1107 = __x1105;
  t1106->_M_node = t1107;
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE3endEv
struct std___List_iterator_double_ std____cxx11__list_double__std__allocator_double_____end(struct std____cxx11__list_double__std__allocator_double__* v1108) {
bb1109: ;
  struct std____cxx11__list_double__std__allocator_double__* this1110;
  struct std___List_iterator_double_ __retval1111;
  this1110 = v1108;
  struct std____cxx11__list_double__std__allocator_double__* t1112 = this1110;
  struct std____cxx11___List_base_double__std__allocator_double__* base1113 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t1112 + 0);
  struct std____detail___List_node_base* r1114 = std____detail___List_node_header___M_base(&base1113->_M_impl._M_node);
  if (__cir_exc_active) {
    struct std___List_iterator_double_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___List_iterator_double____List_iterator(&__retval1111, r1114);
  struct std___List_iterator_double_ t1115 = __retval1111;
  return t1115;
}

// function: _ZNSt7__cxx114listIdSaIdEE22_M_initialize_dispatchIPdEEvT_S5_St12__false_type
void void_std____cxx11__list_double__std__allocator_double______M_initialize_dispatch_double__(struct std____cxx11__list_double__std__allocator_double__* v1116, double* v1117, double* v1118, struct std____false_type v1119) {
bb1120: ;
  struct std____cxx11__list_double__std__allocator_double__* this1121;
  double* __first1122;
  double* __last1123;
  struct std____false_type unnamed1124;
  _Bool __notempty1125;
  this1121 = v1116;
  __first1122 = v1117;
  __last1123 = v1118;
  unnamed1124 = v1119;
  struct std____cxx11__list_double__std__allocator_double__* t1126 = this1121;
  double* t1127 = __first1122;
  double* t1128 = __last1123;
  _Bool c1129 = ((t1127 != t1128)) ? 1 : 0;
  __notempty1125 = c1129;
    while (1) {
      double* t1131 = __first1122;
      double* t1132 = __last1123;
      _Bool c1133 = ((t1131 != t1132)) ? 1 : 0;
      if (!c1133) break;
      double* t1134 = __first1122;
      double* r1135 = double__std____cxx11__list_double__std__allocator_double_____emplace_back_double__(t1126, t1134);
      if (__cir_exc_active) {
        return;
      }
    for_step1130: ;
      double* t1136 = __first1122;
      int c1137 = 1;
      double* ptr1138 = &(t1136)[c1137];
      __first1122 = ptr1138;
    }
    _Bool t1139 = __notempty1125;
    if (t1139) {
        struct std___List_iterator_double_ ref_tmp01140;
        struct std___List_iterator_double_ ref_tmp11141;
        struct std___List_iterator_double_ r1142 = std____cxx11__list_double__std__allocator_double_____begin(t1126);
        ref_tmp01140 = r1142;
        struct std___List_iterator_double_ r1143 = std____cxx11__list_double__std__allocator_double_____end(t1126);
        ref_tmp11141 = r1143;
        _Bool r1144 = std__operator___2(&ref_tmp01140, &ref_tmp11141);
        if (r1144) {
          __builtin_unreachable();
        }
    }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIdEEC2Ev
void std____new_allocator_std___List_node_double_______new_allocator_2(struct std____new_allocator_std___List_node_double__* v1145) {
bb1146: ;
  struct std____new_allocator_std___List_node_double__* this1147;
  this1147 = v1145;
  struct std____new_allocator_std___List_node_double__* t1148 = this1147;
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIdEEC2ERKS2_
void std____new_allocator_std___List_node_double_______new_allocator(struct std____new_allocator_std___List_node_double__* v1149, struct std____new_allocator_std___List_node_double__* v1150) {
bb1151: ;
  struct std____new_allocator_std___List_node_double__* this1152;
  struct std____new_allocator_std___List_node_double__* unnamed1153;
  this1152 = v1149;
  unnamed1153 = v1150;
  struct std____new_allocator_std___List_node_double__* t1154 = this1152;
  return;
}

// function: _ZNSaISt10_List_nodeIdEEC2ERKS1_
void std__allocator_std___List_node_double_____allocator(struct std__allocator_std___List_node_double__* v1155, struct std__allocator_std___List_node_double__* v1156) {
bb1157: ;
  struct std__allocator_std___List_node_double__* this1158;
  struct std__allocator_std___List_node_double__* __a1159;
  this1158 = v1155;
  __a1159 = v1156;
  struct std__allocator_std___List_node_double__* t1160 = this1158;
  struct std____new_allocator_std___List_node_double__* base1161 = (struct std____new_allocator_std___List_node_double__*)((char *)t1160 + 0);
  struct std__allocator_std___List_node_double__* t1162 = __a1159;
  struct std____new_allocator_std___List_node_double__* base1163 = (struct std____new_allocator_std___List_node_double__*)((char *)t1162 + 0);
  std____new_allocator_std___List_node_double_______new_allocator(base1161, base1163);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v1164) {
bb1165: ;
  struct std____detail___List_node_header* this1166;
  this1166 = v1164;
  struct std____detail___List_node_header* t1167 = this1166;
  struct std____detail___List_node_base* base1168 = (struct std____detail___List_node_base*)((char *)t1167 + 0);
  struct std____detail___List_size* base1169 = (struct std____detail___List_size*)((char *)t1167 + 16);
  std____detail___List_node_header___M_init(t1167);
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v1170, struct std____detail___List_size* v1171) {
bb1172: ;
  struct std____detail___List_size* this1173;
  struct std____detail___List_size* unnamed1174;
  struct std____detail___List_size* __retval1175;
  this1173 = v1170;
  unnamed1174 = v1171;
  struct std____detail___List_size* t1176 = this1173;
  struct std____detail___List_size* t1177 = unnamed1174;
  unsigned long t1178 = t1177->_M_size;
  t1176->_M_size = t1178;
  __retval1175 = t1176;
  struct std____detail___List_size* t1179 = __retval1175;
  return t1179;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v1180) {
bb1181: ;
  struct std____detail___List_node_header* this1182;
  struct std____detail___List_size ref_tmp01183;
  this1182 = v1180;
  struct std____detail___List_node_header* t1184 = this1182;
  struct std____detail___List_node_base* base1185 = (struct std____detail___List_node_base*)((char *)t1184 + 0);
  struct std____detail___List_node_base* base1186 = (struct std____detail___List_node_base*)((char *)t1184 + 0);
  base1186->_M_prev = base1185;
  struct std____detail___List_node_base* base1187 = (struct std____detail___List_node_base*)((char *)t1184 + 0);
  base1187->_M_next = base1185;
  struct std____detail___List_size* base1188 = (struct std____detail___List_size*)((char *)t1184 + 16);
  ref_tmp01183 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r1189 = std____detail___List_size__operator_(base1188, &ref_tmp01183);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIdEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_double_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_double___* v1190, struct std____allocated_ptr_std__allocator_std___List_node_double___* v1191) {
bb1192: ;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* this1193;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* __gd1194;
  this1193 = v1190;
  __gd1194 = v1191;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t1195 = this1193;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t1196 = __gd1194;
  struct std__allocator_std___List_node_double__* t1197 = t1196->_M_alloc;
  t1195->_M_alloc = t1197;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t1198 = __gd1194;
  struct std___List_node_double_* t1199 = t1198->_M_ptr;
  t1195->_M_ptr = t1199;
  struct std___List_node_double_* c1200 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t1201 = __gd1194;
  t1201->_M_ptr = c1200;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIdEEPT_S3_
struct std___List_node_double_* std___List_node_double___std__to_address_std___List_node_double___(struct std___List_node_double_* v1202) {
bb1203: ;
  struct std___List_node_double_* __ptr1204;
  struct std___List_node_double_* __retval1205;
  __ptr1204 = v1202;
  struct std___List_node_double_* t1206 = __ptr1204;
  __retval1205 = t1206;
  struct std___List_node_double_* t1207 = __retval1205;
  return t1207;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIdEEDaRKT_
struct std___List_node_double_* auto_std____to_address_std___List_node_double___(struct std___List_node_double_** v1208) {
bb1209: ;
  struct std___List_node_double_** __ptr1210;
  struct std___List_node_double_* __retval1211;
  __ptr1210 = v1208;
  struct std___List_node_double_** t1212 = __ptr1210;
  struct std___List_node_double_* t1213 = *t1212;
  struct std___List_node_double_* r1214 = std___List_node_double___std__to_address_std___List_node_double___(t1213);
  __retval1211 = r1214;
  struct std___List_node_double_* t1215 = __retval1211;
  return t1215;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIdEEE3getEv
struct std___List_node_double_* std____allocated_ptr_std__allocator_std___List_node_double_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_double___* v1216) {
bb1217: ;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* this1218;
  struct std___List_node_double_* __retval1219;
  this1218 = v1216;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t1220 = this1218;
  struct std___List_node_double_* r1221 = auto_std____to_address_std___List_node_double___(&t1220->_M_ptr);
  __retval1219 = r1221;
  struct std___List_node_double_* t1222 = __retval1219;
  return t1222;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIdEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_double_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_double___* v1223) {
bb1224: ;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* this1225;
  _Bool __retval1226;
  this1225 = v1223;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t1227 = this1225;
  struct std___List_node_double_* t1228 = t1227->_M_ptr;
  _Bool cast1229 = (_Bool)t1228;
  __retval1226 = cast1229;
  _Bool t1230 = __retval1226;
  return t1230;
}

// function: _ZNSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base(struct std____detail___List_node_base* v1231) {
bb1232: ;
  struct std____detail___List_node_base* this1233;
  struct std____detail___List_node_base* __retval1234;
  this1233 = v1231;
  struct std____detail___List_node_base* t1235 = this1233;
  __retval1234 = t1235;
  struct std____detail___List_node_base* t1236 = __retval1234;
  return t1236;
}

