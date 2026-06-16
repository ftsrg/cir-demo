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
char _str_1[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_unique_bug-2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[12] = "*it == 2.72";
char _str_3[12] = "*it == 3.14";
char _str_4[13] = "*it == 12.15";
char _str_5[13] = "*it == 12.77";
char _str_6[12] = "*it == 15.3";
char _str_7[13] = "*it == 72.25";
char _str_8[12] = "*it == 73.0";
char _str_9[13] = "*it == 73.35";
char _str_10[12] = "*it != 3.14";
char _str_11[13] = "*it != 72.25";
char _str_12[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIdSaIdEE4backEv[84] = "reference std::list<double>::back() [_Tp = double, _Alloc = std::allocator<double>]";
char _str_13[15] = "!this->empty()";
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
struct std___List_iterator_double_* std___List_iterator_double___operator__2(struct std___List_iterator_double_* p0, struct std___List_iterator_double_* p1);
unsigned long std____cxx11__list_double__std__allocator_double_____unique(struct std____cxx11__list_double__std__allocator_double__* p0);
unsigned long std____cxx11___List_base_double__std__allocator_double______M_get_size___const(struct std____cxx11___List_base_double__std__allocator_double__* p0);
unsigned long std____cxx11__list_double__std__allocator_double_____size___const(struct std____cxx11__list_double__std__allocator_double__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std___List_iterator_double_ std____cxx11__list_double__std__allocator_double_____begin(struct std____cxx11__list_double__std__allocator_double__* p0);
double* std___List_iterator_double___operator____const(struct std___List_iterator_double_* p0);
struct std___List_iterator_double_ std___List_iterator_double___operator___2(struct std___List_iterator_double_* p0, int p1);
unsigned long unsigned_long_std____cxx11__list_double__std__allocator_double_____unique_bool_____double__double___bool____(struct std____cxx11__list_double__std__allocator_double__* p0, void* p1);
struct std___List_iterator_double_* std___List_iterator_double___operator_(struct std___List_iterator_double_* p0, struct std___List_iterator_double_* p1);
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
struct std___List_iterator_double_* std___List_iterator_double___operator__2(struct std___List_iterator_double_* v418, struct std___List_iterator_double_* v419) {
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
              struct std___List_iterator_double_* r458 = std___List_iterator_double___operator__2(&__first432, &__next436);
            }
          struct std___List_iterator_double_* r459 = std___List_iterator_double___operator__2(&__next436, &__first432);
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

// function: _ZNSt7__cxx114listIdSaIdEE6uniqueIPFbddEEEmT_
unsigned long unsigned_long_std____cxx11__list_double__std__allocator_double_____unique_bool_____double__double___bool____(struct std____cxx11__list_double__std__allocator_double__* v507, void* v508) {
bb509: ;
  struct std____cxx11__list_double__std__allocator_double__* this510;
  void* __binary_pred511;
  unsigned long __retval512;
  struct std___List_iterator_double_ __first513;
  struct std___List_iterator_double_ __last514;
  struct std____cxx11__list_double__std__allocator_double__ __to_destroy515;
  struct std__allocator_double_ ref_tmp0516;
  struct std___List_iterator_double_ __next517;
  this510 = v507;
  __binary_pred511 = v508;
  struct std____cxx11__list_double__std__allocator_double__* t518 = this510;
  struct std___List_iterator_double_ r519 = std____cxx11__list_double__std__allocator_double_____begin(t518);
  __first513 = r519;
  struct std___List_iterator_double_ r520 = std____cxx11__list_double__std__allocator_double_____end(t518);
  __last514 = r520;
    _Bool r521 = std__operator___2(&__first513, &__last514);
    if (r521) {
      unsigned long c522 = 0;
      __retval512 = c522;
      unsigned long t523 = __retval512;
      return t523;
    }
  struct std__allocator_double_ r524 = std____cxx11__list_double__std__allocator_double_____get_allocator___const(t518);
  ref_tmp0516 = r524;
    std____cxx11__list_double__std__allocator_double_____list(&__to_destroy515, &ref_tmp0516);
  {
    std__allocator_double____allocator(&ref_tmp0516);
  }
    __next517 = __first513; // copy
      while (1) {
        struct std___List_iterator_double_* r525 = std___List_iterator_double___operator___3(&__next517);
        _Bool r526 = std__operator___2(r525, &__last514);
        _Bool u527 = !r526;
        if (!u527) break;
            void* t528 = __binary_pred511;
            double* r529 = std___List_iterator_double___operator____const(&__first513);
            double t530 = *r529;
            double* r531 = std___List_iterator_double___operator____const(&__next517);
            double t532 = *r531;
            _Bool r533 = ((_Bool (*)(double, double))t528)(t530, t532);
            if (__cir_exc_active) {
              {
                std____cxx11__list_double__std__allocator_double______list(&__to_destroy515);
              }
              unsigned long __cir_eh_ret = (unsigned long)0;
              return __cir_eh_ret;
            }
            if (r533) {
              struct std___List_const_iterator_double_ agg_tmp0534;
              struct std___List_iterator_double_ ref_tmp1535;
              struct std___List_const_iterator_double_ agg_tmp1536;
              struct std___List_iterator_double_ r537 = std____cxx11__list_double__std__allocator_double_____begin(&__to_destroy515);
              ref_tmp1535 = r537;
              std___List_const_iterator_double____List_const_iterator(&agg_tmp0534, &ref_tmp1535);
              std___List_const_iterator_double____List_const_iterator(&agg_tmp1536, &__next517);
              struct std___List_const_iterator_double_ t538 = agg_tmp0534;
              struct std___List_const_iterator_double_ t539 = agg_tmp1536;
              std____cxx11__list_double__std__allocator_double_____splice_2(&__to_destroy515, t538, t518, t539);
            } else {
              struct std___List_iterator_double_* r540 = std___List_iterator_double___operator__2(&__first513, &__next517);
            }
          struct std___List_iterator_double_* r541 = std___List_iterator_double___operator__2(&__next517, &__first513);
      }
    unsigned long r542 = std____cxx11__list_double__std__allocator_double_____size___const(&__to_destroy515);
    __retval512 = r542;
    unsigned long t543 = __retval512;
    unsigned long ret_val544 = t543;
    {
      std____cxx11__list_double__std__allocator_double______list(&__to_destroy515);
    }
    return ret_val544;
  abort();
}

// function: _ZNSt14_List_iteratorIdEaSEOS0_
struct std___List_iterator_double_* std___List_iterator_double___operator_(struct std___List_iterator_double_* v545, struct std___List_iterator_double_* v546) {
bb547: ;
  struct std___List_iterator_double_* this548;
  struct std___List_iterator_double_* unnamed549;
  struct std___List_iterator_double_* __retval550;
  this548 = v545;
  unnamed549 = v546;
  struct std___List_iterator_double_* t551 = this548;
  struct std___List_iterator_double_* t552 = unnamed549;
  struct std____detail___List_node_base* t553 = t552->_M_node;
  t551->_M_node = t553;
  __retval550 = t551;
  struct std___List_iterator_double_* t554 = __retval550;
  return t554;
}

// function: _ZNSt7__cxx114listIdSaIdEED2Ev
void std____cxx11__list_double__std__allocator_double______list(struct std____cxx11__list_double__std__allocator_double__* v555) {
bb556: ;
  struct std____cxx11__list_double__std__allocator_double__* this557;
  this557 = v555;
  struct std____cxx11__list_double__std__allocator_double__* t558 = this557;
  {
    struct std____cxx11___List_base_double__std__allocator_double__* base559 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t558 + 0);
    std____cxx11___List_base_double__std__allocator_double_______List_base(base559);
  }
  return;
}

// function: main
int main() {
bb560: ;
  int __retval561;
  double mydoubles562[10];
  struct std____cxx11__list_double__std__allocator_double__ mylist563;
  struct std__allocator_double_ ref_tmp0564;
  struct std___List_iterator_double_ it565;
  struct std___List_iterator_double_ agg_tmp0566;
  struct std___List_iterator_double_ agg_tmp1567;
  struct std___List_iterator_double_ agg_tmp2568;
  struct std___List_iterator_double_ agg_tmp3569;
  struct std___List_iterator_double_ agg_tmp4570;
  struct std___List_iterator_double_ agg_tmp5571;
  struct std___List_iterator_double_ agg_tmp6572;
  struct std___List_iterator_double_ ref_tmp1573;
  struct std___List_iterator_double_ agg_tmp7574;
  struct std___List_iterator_double_ agg_tmp8575;
  struct std___List_iterator_double_ agg_tmp9576;
  struct std___List_iterator_double_ agg_tmp10577;
  struct std___List_iterator_double_ agg_tmp11578;
  struct std___List_iterator_double_ agg_tmp12579;
  int c580 = 0;
  __retval561 = c580;
  // array copy
  __builtin_memcpy(mydoubles562, __const_main_mydoubles, (unsigned long)10 * sizeof(__const_main_mydoubles[0]));
  double* cast581 = (double*)&(mydoubles562);
  double* cast582 = (double*)&(mydoubles562);
  int c583 = 10;
  double* ptr584 = &(cast582)[c583];
  std__allocator_double___allocator(&ref_tmp0564);
    std____cxx11__list_double__std__allocator_double_____list_double___void_(&mylist563, cast581, ptr584, &ref_tmp0564);
    if (__cir_exc_active) {
      {
        std__allocator_double____allocator(&ref_tmp0564);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  {
    std__allocator_double____allocator(&ref_tmp0564);
  }
    std____cxx11__list_double__std__allocator_double_____sort(&mylist563);
    if (__cir_exc_active) {
      {
        std____cxx11__list_double__std__allocator_double______list(&mylist563);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r585 = std____cxx11__list_double__std__allocator_double_____unique(&mylist563);
    if (__cir_exc_active) {
      {
        std____cxx11__list_double__std__allocator_double______list(&mylist563);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r586 = std____cxx11__list_double__std__allocator_double_____size___const(&mylist563);
    unsigned long c587 = 8;
    _Bool c588 = ((r586 == c587)) ? 1 : 0;
    if (c588) {
    } else {
      char* cast589 = (char*)&(_str);
      char* c590 = (char*)_str_1;
      unsigned int c591 = 38;
      char* cast592 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast589, c590, c591, cast592);
    }
    struct std___List_iterator_double_ r593 = std____cxx11__list_double__std__allocator_double_____begin(&mylist563);
    it565 = r593;
    double* r594 = std___List_iterator_double___operator____const(&it565);
    double t595 = *r594;
    double c596 = 0x1.5c28f5c28f5c3p1;
    _Bool c597 = ((t595 == c596)) ? 1 : 0;
    if (c597) {
    } else {
      char* cast598 = (char*)&(_str_2);
      char* c599 = (char*)_str_1;
      unsigned int c600 = 40;
      char* cast601 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast598, c599, c600, cast601);
    }
    int c602 = 0;
    struct std___List_iterator_double_ r603 = std___List_iterator_double___operator___2(&it565, c602);
    agg_tmp0566 = r603;
    double* r604 = std___List_iterator_double___operator____const(&it565);
    double t605 = *r604;
    double c606 = 0x1.91eb851eb851fp1;
    _Bool c607 = ((t605 == c606)) ? 1 : 0;
    if (c607) {
    } else {
      char* cast608 = (char*)&(_str_3);
      char* c609 = (char*)_str_1;
      unsigned int c610 = 41;
      char* cast611 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast608, c609, c610, cast611);
    }
    int c612 = 0;
    struct std___List_iterator_double_ r613 = std___List_iterator_double___operator___2(&it565, c612);
    agg_tmp1567 = r613;
    double* r614 = std___List_iterator_double___operator____const(&it565);
    double t615 = *r614;
    double c616 = 0x1.84ccccccccccdp3;
    _Bool c617 = ((t615 == c616)) ? 1 : 0;
    if (c617) {
    } else {
      char* cast618 = (char*)&(_str_4);
      char* c619 = (char*)_str_1;
      unsigned int c620 = 42;
      char* cast621 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast618, c619, c620, cast621);
    }
    int c622 = 0;
    struct std___List_iterator_double_ r623 = std___List_iterator_double___operator___2(&it565, c622);
    agg_tmp2568 = r623;
    double* r624 = std___List_iterator_double___operator____const(&it565);
    double t625 = *r624;
    double c626 = 0x1.98a3d70a3d70ap3;
    _Bool c627 = ((t625 == c626)) ? 1 : 0;
    if (c627) {
    } else {
      char* cast628 = (char*)&(_str_5);
      char* c629 = (char*)_str_1;
      unsigned int c630 = 43;
      char* cast631 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast628, c629, c630, cast631);
    }
    int c632 = 0;
    struct std___List_iterator_double_ r633 = std___List_iterator_double___operator___2(&it565, c632);
    agg_tmp3569 = r633;
    double* r634 = std___List_iterator_double___operator____const(&it565);
    double t635 = *r634;
    double c636 = 0x1.e99999999999ap3;
    _Bool c637 = ((t635 == c636)) ? 1 : 0;
    if (c637) {
    } else {
      char* cast638 = (char*)&(_str_6);
      char* c639 = (char*)_str_1;
      unsigned int c640 = 44;
      char* cast641 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast638, c639, c640, cast641);
    }
    int c642 = 0;
    struct std___List_iterator_double_ r643 = std___List_iterator_double___operator___2(&it565, c642);
    agg_tmp4570 = r643;
    double* r644 = std___List_iterator_double___operator____const(&it565);
    double t645 = *r644;
    double c646 = 0x1.21p6;
    _Bool c647 = ((t645 == c646)) ? 1 : 0;
    if (c647) {
    } else {
      char* cast648 = (char*)&(_str_7);
      char* c649 = (char*)_str_1;
      unsigned int c650 = 45;
      char* cast651 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast648, c649, c650, cast651);
    }
    int c652 = 0;
    struct std___List_iterator_double_ r653 = std___List_iterator_double___operator___2(&it565, c652);
    agg_tmp5571 = r653;
    double* r654 = std___List_iterator_double___operator____const(&it565);
    double t655 = *r654;
    double c656 = 0x1.24p6;
    _Bool c657 = ((t655 == c656)) ? 1 : 0;
    if (c657) {
    } else {
      char* cast658 = (char*)&(_str_8);
      char* c659 = (char*)_str_1;
      unsigned int c660 = 46;
      char* cast661 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast658, c659, c660, cast661);
    }
    int c662 = 0;
    struct std___List_iterator_double_ r663 = std___List_iterator_double___operator___2(&it565, c662);
    agg_tmp6572 = r663;
    double* r664 = std___List_iterator_double___operator____const(&it565);
    double t665 = *r664;
    double c666 = 0x1.2566666666666p6;
    _Bool c667 = ((t665 == c666)) ? 1 : 0;
    if (c667) {
    } else {
      char* cast668 = (char*)&(_str_9);
      char* c669 = (char*)_str_1;
      unsigned int c670 = 47;
      char* cast671 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast668, c669, c670, cast671);
    }
    unsigned long r672 = unsigned_long_std____cxx11__list_double__std__allocator_double_____unique_bool_____double__double___bool____(&mylist563, &same_integral_part);
    if (__cir_exc_active) {
      {
        std____cxx11__list_double__std__allocator_double______list(&mylist563);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std___List_iterator_double_ r673 = std____cxx11__list_double__std__allocator_double_____begin(&mylist563);
    ref_tmp1573 = r673;
    struct std___List_iterator_double_* r674 = std___List_iterator_double___operator_(&it565, &ref_tmp1573);
    double* r675 = std___List_iterator_double___operator____const(&it565);
    double t676 = *r675;
    double c677 = 0x1.5c28f5c28f5c3p1;
    _Bool c678 = ((t676 == c677)) ? 1 : 0;
    if (c678) {
    } else {
      char* cast679 = (char*)&(_str_2);
      char* c680 = (char*)_str_1;
      unsigned int c681 = 52;
      char* cast682 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast679, c680, c681, cast682);
    }
    int c683 = 0;
    struct std___List_iterator_double_ r684 = std___List_iterator_double___operator___2(&it565, c683);
    agg_tmp7574 = r684;
    double* r685 = std___List_iterator_double___operator____const(&it565);
    double t686 = *r685;
    double c687 = 0x1.91eb851eb851fp1;
    _Bool c688 = ((t686 != c687)) ? 1 : 0;
    if (c688) {
    } else {
      char* cast689 = (char*)&(_str_10);
      char* c690 = (char*)_str_1;
      unsigned int c691 = 53;
      char* cast692 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast689, c690, c691, cast692);
    }
    int c693 = 0;
    struct std___List_iterator_double_ r694 = std___List_iterator_double___operator___2(&it565, c693);
    agg_tmp8575 = r694;
    double* r695 = std___List_iterator_double___operator____const(&it565);
    double t696 = *r695;
    double c697 = 0x1.84ccccccccccdp3;
    _Bool c698 = ((t696 == c697)) ? 1 : 0;
    if (c698) {
    } else {
      char* cast699 = (char*)&(_str_4);
      char* c700 = (char*)_str_1;
      unsigned int c701 = 54;
      char* cast702 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast699, c700, c701, cast702);
    }
    int c703 = 0;
    struct std___List_iterator_double_ r704 = std___List_iterator_double___operator___2(&it565, c703);
    agg_tmp9576 = r704;
    double* r705 = std___List_iterator_double___operator____const(&it565);
    double t706 = *r705;
    double c707 = 0x1.e99999999999ap3;
    _Bool c708 = ((t706 == c707)) ? 1 : 0;
    if (c708) {
    } else {
      char* cast709 = (char*)&(_str_6);
      char* c710 = (char*)_str_1;
      unsigned int c711 = 55;
      char* cast712 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast709, c710, c711, cast712);
    }
    int c713 = 0;
    struct std___List_iterator_double_ r714 = std___List_iterator_double___operator___2(&it565, c713);
    agg_tmp10577 = r714;
    double* r715 = std___List_iterator_double___operator____const(&it565);
    double t716 = *r715;
    double c717 = 0x1.21p6;
    _Bool c718 = ((t716 != c717)) ? 1 : 0;
    if (c718) {
    } else {
      char* cast719 = (char*)&(_str_11);
      char* c720 = (char*)_str_1;
      unsigned int c721 = 56;
      char* cast722 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast719, c720, c721, cast722);
    }
    int c723 = 0;
    struct std___List_iterator_double_ r724 = std___List_iterator_double___operator___2(&it565, c723);
    agg_tmp11578 = r724;
    double* r725 = std___List_iterator_double___operator____const(&it565);
    double t726 = *r725;
    double c727 = 0x1.24p6;
    _Bool c728 = ((t726 == c727)) ? 1 : 0;
    if (c728) {
    } else {
      char* cast729 = (char*)&(_str_8);
      char* c730 = (char*)_str_1;
      unsigned int c731 = 57;
      char* cast732 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast729, c730, c731, cast732);
    }
    int c733 = 0;
    struct std___List_iterator_double_ r734 = std___List_iterator_double___operator___2(&it565, c733);
    agg_tmp12579 = r734;
    int c735 = 0;
    __retval561 = c735;
    int t736 = __retval561;
    int ret_val737 = t736;
    {
      std____cxx11__list_double__std__allocator_double______list(&mylist563);
    }
    return ret_val737;
  int t738 = __retval561;
  return t738;
}

// function: _ZNSt15__new_allocatorIdEC2Ev
void std____new_allocator_double_____new_allocator(struct std____new_allocator_double_* v739) {
bb740: ;
  struct std____new_allocator_double_* this741;
  this741 = v739;
  struct std____new_allocator_double_* t742 = this741;
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v743) {
bb744: ;
  struct std____detail___List_node_header* this745;
  struct std____detail___List_node_base* __retval746;
  this745 = v743;
  struct std____detail___List_node_header* t747 = this745;
  struct std____detail___List_node_base* base748 = (struct std____detail___List_node_base*)((char *)t747 + 0);
  __retval746 = base748;
  struct std____detail___List_node_base* t749 = __retval746;
  return t749;
}

// function: _ZSt10destroy_atIdEvPT_
void void_std__destroy_at_double_(double* v750) {
bb751: ;
  double* __location752;
  __location752 = v750;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIdEEE7destroyIdEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_double_______destroy_double_(struct std__allocator_std___List_node_double__* v753, double* v754) {
bb755: ;
  struct std__allocator_std___List_node_double__* __a756;
  double* __p757;
  __a756 = v753;
  __p757 = v754;
  double* t758 = __p757;
  void_std__destroy_at_double_(t758);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIdE7_M_addrEv
void* __gnu_cxx____aligned_membuf_double____M_addr(struct __gnu_cxx____aligned_membuf_double_* v759) {
bb760: ;
  struct __gnu_cxx____aligned_membuf_double_* this761;
  void* __retval762;
  this761 = v759;
  struct __gnu_cxx____aligned_membuf_double_* t763 = this761;
  void* cast764 = (void*)&(t763->_M_storage);
  __retval762 = cast764;
  void* t765 = __retval762;
  return t765;
}

// function: _ZN9__gnu_cxx16__aligned_membufIdE6_M_ptrEv
double* __gnu_cxx____aligned_membuf_double____M_ptr(struct __gnu_cxx____aligned_membuf_double_* v766) {
bb767: ;
  struct __gnu_cxx____aligned_membuf_double_* this768;
  double* __retval769;
  this768 = v766;
  struct __gnu_cxx____aligned_membuf_double_* t770 = this768;
  void* r771 = __gnu_cxx____aligned_membuf_double____M_addr(t770);
  double* cast772 = (double*)r771;
  __retval769 = cast772;
  double* t773 = __retval769;
  return t773;
}

// function: _ZNSt10_List_nodeIdE9_M_valptrEv
double* std___List_node_double____M_valptr(struct std___List_node_double_* v774) {
bb775: ;
  struct std___List_node_double_* this776;
  double* __retval777;
  this776 = v774;
  struct std___List_node_double_* t778 = this776;
  double* r779 = __gnu_cxx____aligned_membuf_double____M_ptr(&t778->_M_storage);
  __retval777 = r779;
  double* t780 = __retval777;
  return t780;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb781: ;
  _Bool __retval782;
    _Bool c783 = 0;
    __retval782 = c783;
    _Bool t784 = __retval782;
    return t784;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIdEE10deallocateEPS1_m
void std____new_allocator_std___List_node_double_____deallocate(struct std____new_allocator_std___List_node_double__* v785, struct std___List_node_double_* v786, unsigned long v787) {
bb788: ;
  struct std____new_allocator_std___List_node_double__* this789;
  struct std___List_node_double_* __p790;
  unsigned long __n791;
  this789 = v785;
  __p790 = v786;
  __n791 = v787;
  struct std____new_allocator_std___List_node_double__* t792 = this789;
    unsigned long c793 = 8;
    unsigned long c794 = 16;
    _Bool c795 = ((c793 > c794)) ? 1 : 0;
    if (c795) {
      struct std___List_node_double_* t796 = __p790;
      void* cast797 = (void*)t796;
      unsigned long t798 = __n791;
      unsigned long c799 = 24;
      unsigned long b800 = t798 * c799;
      unsigned long c801 = 8;
      operator_delete_3(cast797, b800, c801);
      return;
    }
  struct std___List_node_double_* t802 = __p790;
  void* cast803 = (void*)t802;
  unsigned long t804 = __n791;
  unsigned long c805 = 24;
  unsigned long b806 = t804 * c805;
  operator_delete_2(cast803, b806);
  return;
}

// function: _ZNSaISt10_List_nodeIdEE10deallocateEPS0_m
void std__allocator_std___List_node_double_____deallocate(struct std__allocator_std___List_node_double__* v807, struct std___List_node_double_* v808, unsigned long v809) {
bb810: ;
  struct std__allocator_std___List_node_double__* this811;
  struct std___List_node_double_* __p812;
  unsigned long __n813;
  this811 = v807;
  __p812 = v808;
  __n813 = v809;
  struct std__allocator_std___List_node_double__* t814 = this811;
    _Bool r815 = std____is_constant_evaluated();
    if (r815) {
      struct std___List_node_double_* t816 = __p812;
      void* cast817 = (void*)t816;
      operator_delete(cast817);
      return;
    }
  struct std____new_allocator_std___List_node_double__* base818 = (struct std____new_allocator_std___List_node_double__*)((char *)t814 + 0);
  struct std___List_node_double_* t819 = __p812;
  unsigned long t820 = __n813;
  std____new_allocator_std___List_node_double_____deallocate(base818, t819, t820);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIdEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_double_______deallocate(struct std__allocator_std___List_node_double__* v821, struct std___List_node_double_* v822, unsigned long v823) {
bb824: ;
  struct std__allocator_std___List_node_double__* __a825;
  struct std___List_node_double_* __p826;
  unsigned long __n827;
  __a825 = v821;
  __p826 = v822;
  __n827 = v823;
  struct std__allocator_std___List_node_double__* t828 = __a825;
  struct std___List_node_double_* t829 = __p826;
  unsigned long t830 = __n827;
  std__allocator_std___List_node_double_____deallocate(t828, t829, t830);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE11_M_put_nodeEPSt10_List_nodeIdE
void std____cxx11___List_base_double__std__allocator_double______M_put_node(struct std____cxx11___List_base_double__std__allocator_double__* v831, struct std___List_node_double_* v832) {
bb833: ;
  struct std____cxx11___List_base_double__std__allocator_double__* this834;
  struct std___List_node_double_* __p835;
  this834 = v831;
  __p835 = v832;
  struct std____cxx11___List_base_double__std__allocator_double__* t836 = this834;
  struct std__allocator_std___List_node_double__* base837 = (struct std__allocator_std___List_node_double__*)((char *)&(t836->_M_impl) + 0);
  struct std___List_node_double_* t838 = __p835;
  unsigned long c839 = 1;
  std__allocator_traits_std__allocator_std___List_node_double_______deallocate(base837, t838, c839);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE15_M_destroy_nodeEPSt10_List_nodeIdE
void std____cxx11___List_base_double__std__allocator_double______M_destroy_node(struct std____cxx11___List_base_double__std__allocator_double__* v840, struct std___List_node_double_* v841) {
bb842: ;
  struct std____cxx11___List_base_double__std__allocator_double__* this843;
  struct std___List_node_double_* __p844;
  this843 = v840;
  __p844 = v841;
  struct std____cxx11___List_base_double__std__allocator_double__* t845 = this843;
  struct std__allocator_std___List_node_double__* base846 = (struct std__allocator_std___List_node_double__*)((char *)&(t845->_M_impl) + 0);
  struct std___List_node_double_* t847 = __p844;
  double* r848 = std___List_node_double____M_valptr(t847);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___List_node_double_______destroy_double_(base846, r848);
  struct std___List_node_double_* t849 = __p844;
  std____cxx11___List_base_double__std__allocator_double______M_put_node(t845, t849);
  return;
}

// function: _ZNSt10_List_nodeIdE11_M_node_ptrEv
struct std___List_node_double_* std___List_node_double____M_node_ptr(struct std___List_node_double_* v850) {
bb851: ;
  struct std___List_node_double_* this852;
  struct std___List_node_double_* __retval853;
  this852 = v850;
  struct std___List_node_double_* t854 = this852;
  __retval853 = t854;
  struct std___List_node_double_* t855 = __retval853;
  return t855;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE8_M_clearEv
void std____cxx11___List_base_double__std__allocator_double______M_clear(struct std____cxx11___List_base_double__std__allocator_double__* v856) {
bb857: ;
  struct std____cxx11___List_base_double__std__allocator_double__* this858;
  struct std____detail___List_node_base* __cur859;
  this858 = v856;
  struct std____cxx11___List_base_double__std__allocator_double__* t860 = this858;
  struct std____detail___List_node_base* base861 = (struct std____detail___List_node_base*)((char *)&(t860->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t862 = base861->_M_next;
  __cur859 = t862;
    while (1) {
      struct std____detail___List_node_base* t863 = __cur859;
      struct std____detail___List_node_base* r864 = std____detail___List_node_header___M_base(&t860->_M_impl._M_node);
      if (__cir_exc_active) {
        return;
      }
      _Bool c865 = ((t863 != r864)) ? 1 : 0;
      if (!c865) break;
        struct std___List_node_double_* __tmp866;
        struct std____detail___List_node_base* t867 = __cur859;
        struct std___List_node_double_* derived868 = (struct std___List_node_double_*)((char *)t867 - 0);
        __tmp866 = derived868;
        struct std___List_node_double_* t869 = __tmp866;
        struct std____detail___List_node_base* base870 = (struct std____detail___List_node_base*)((char *)t869 + 0);
        struct std____detail___List_node_base* t871 = base870->_M_next;
        __cur859 = t871;
        struct std___List_node_double_* t872 = __tmp866;
        struct std___List_node_double_* r873 = std___List_node_double____M_node_ptr(t872);
        if (__cir_exc_active) {
          return;
        }
        std____cxx11___List_base_double__std__allocator_double______M_destroy_node(t860, r873);
        if (__cir_exc_active) {
          return;
        }
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE10_List_implD2Ev
void std____cxx11___List_base_double__std__allocator_double______List_impl____List_impl(struct std____cxx11___List_base_double__std__allocator_double_____List_impl* v874) {
bb875: ;
  struct std____cxx11___List_base_double__std__allocator_double_____List_impl* this876;
  this876 = v874;
  struct std____cxx11___List_base_double__std__allocator_double_____List_impl* t877 = this876;
  {
    struct std__allocator_std___List_node_double__* base878 = (struct std__allocator_std___List_node_double__*)((char *)t877 + 0);
    std__allocator_std___List_node_double______allocator(base878);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEED2Ev
void std____cxx11___List_base_double__std__allocator_double_______List_base(struct std____cxx11___List_base_double__std__allocator_double__* v879) {
bb880: ;
  struct std____cxx11___List_base_double__std__allocator_double__* this881;
  this881 = v879;
  struct std____cxx11___List_base_double__std__allocator_double__* t882 = this881;
    std____cxx11___List_base_double__std__allocator_double______M_clear(t882);
  {
    std____cxx11___List_base_double__std__allocator_double______List_impl____List_impl(&t882->_M_impl);
  }
  return;
}

// function: _ZNSaISt10_List_nodeIdEEC2IdEERKSaIT_E
void std__allocator_std___List_node_double_____allocator_double_(struct std__allocator_std___List_node_double__* v883, struct std__allocator_double_* v884) {
bb885: ;
  struct std__allocator_std___List_node_double__* this886;
  struct std__allocator_double_* unnamed887;
  this886 = v883;
  unnamed887 = v884;
  struct std__allocator_std___List_node_double__* t888 = this886;
  struct std____new_allocator_std___List_node_double__* base889 = (struct std____new_allocator_std___List_node_double__*)((char *)t888 + 0);
  std____new_allocator_std___List_node_double_______new_allocator_2(base889);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE10_List_implC2EOSaISt10_List_nodeIdEE
void std____cxx11___List_base_double__std__allocator_double______List_impl___List_impl(struct std____cxx11___List_base_double__std__allocator_double_____List_impl* v890, struct std__allocator_std___List_node_double__* v891) {
bb892: ;
  struct std____cxx11___List_base_double__std__allocator_double_____List_impl* this893;
  struct std__allocator_std___List_node_double__* __a894;
  this893 = v890;
  __a894 = v891;
  struct std____cxx11___List_base_double__std__allocator_double_____List_impl* t895 = this893;
  struct std__allocator_std___List_node_double__* base896 = (struct std__allocator_std___List_node_double__*)((char *)t895 + 0);
  struct std__allocator_std___List_node_double__* t897 = __a894;
  std__allocator_std___List_node_double_____allocator(base896, t897);
    std____detail___List_node_header___List_node_header(&t895->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEEC2EOSaISt10_List_nodeIdEE
void std____cxx11___List_base_double__std__allocator_double______List_base(struct std____cxx11___List_base_double__std__allocator_double__* v898, struct std__allocator_std___List_node_double__* v899) {
bb900: ;
  struct std____cxx11___List_base_double__std__allocator_double__* this901;
  struct std__allocator_std___List_node_double__* __a902;
  this901 = v898;
  __a902 = v899;
  struct std____cxx11___List_base_double__std__allocator_double__* t903 = this901;
  struct std__allocator_std___List_node_double__* t904 = __a902;
  std____cxx11___List_base_double__std__allocator_double______List_impl___List_impl(&t903->_M_impl, t904);
  return;
}

// function: _ZNSaISt10_List_nodeIdEED2Ev
void std__allocator_std___List_node_double______allocator(struct std__allocator_std___List_node_double__* v905) {
bb906: ;
  struct std__allocator_std___List_node_double__* this907;
  this907 = v905;
  struct std__allocator_std___List_node_double__* t908 = this907;
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_double__* std____cxx11___List_base_double__std__allocator_double______M_get_Node_allocator(struct std____cxx11___List_base_double__std__allocator_double__* v909) {
bb910: ;
  struct std____cxx11___List_base_double__std__allocator_double__* this911;
  struct std__allocator_std___List_node_double__* __retval912;
  this911 = v909;
  struct std____cxx11___List_base_double__std__allocator_double__* t913 = this911;
  struct std__allocator_std___List_node_double__* base914 = (struct std__allocator_std___List_node_double__*)((char *)&(t913->_M_impl) + 0);
  __retval912 = base914;
  struct std__allocator_std___List_node_double__* t915 = __retval912;
  return t915;
}

// function: _ZNKSt15__new_allocatorISt10_List_nodeIdEE11_M_max_sizeEv
unsigned long std____new_allocator_std___List_node_double______M_max_size___const(struct std____new_allocator_std___List_node_double__* v916) {
bb917: ;
  struct std____new_allocator_std___List_node_double__* this918;
  unsigned long __retval919;
  this918 = v916;
  struct std____new_allocator_std___List_node_double__* t920 = this918;
  unsigned long c921 = 9223372036854775807;
  unsigned long c922 = 24;
  unsigned long b923 = c921 / c922;
  __retval919 = b923;
  unsigned long t924 = __retval919;
  return t924;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIdEE8allocateEmPKv
struct std___List_node_double_* std____new_allocator_std___List_node_double_____allocate(struct std____new_allocator_std___List_node_double__* v925, unsigned long v926, void* v927) {
bb928: ;
  struct std____new_allocator_std___List_node_double__* this929;
  unsigned long __n930;
  void* unnamed931;
  struct std___List_node_double_* __retval932;
  this929 = v925;
  __n930 = v926;
  unnamed931 = v927;
  struct std____new_allocator_std___List_node_double__* t933 = this929;
    unsigned long t934 = __n930;
    unsigned long r935 = std____new_allocator_std___List_node_double______M_max_size___const(t933);
    _Bool c936 = ((t934 > r935)) ? 1 : 0;
    if (c936) {
        unsigned long t937 = __n930;
        unsigned long c938 = -1;
        unsigned long c939 = 24;
        unsigned long b940 = c938 / c939;
        _Bool c941 = ((t937 > b940)) ? 1 : 0;
        if (c941) {
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
    unsigned long c942 = 8;
    unsigned long c943 = 16;
    _Bool c944 = ((c942 > c943)) ? 1 : 0;
    if (c944) {
      unsigned long __al945;
      unsigned long c946 = 8;
      __al945 = c946;
      unsigned long t947 = __n930;
      unsigned long c948 = 24;
      unsigned long b949 = t947 * c948;
      unsigned long t950 = __al945;
      void* r951 = operator_new_2(b949, t950);
      if (__cir_exc_active) {
        struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
        return __cir_eh_ret;
      }
      struct std___List_node_double_* cast952 = (struct std___List_node_double_*)r951;
      __retval932 = cast952;
      struct std___List_node_double_* t953 = __retval932;
      return t953;
    }
  unsigned long t954 = __n930;
  unsigned long c955 = 24;
  unsigned long b956 = t954 * c955;
  void* r957 = operator_new(b956);
  if (__cir_exc_active) {
    struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
    return __cir_eh_ret;
  }
  struct std___List_node_double_* cast958 = (struct std___List_node_double_*)r957;
  __retval932 = cast958;
  struct std___List_node_double_* t959 = __retval932;
  return t959;
}

// function: _ZNSaISt10_List_nodeIdEE8allocateEm
struct std___List_node_double_* std__allocator_std___List_node_double_____allocate(struct std__allocator_std___List_node_double__* v960, unsigned long v961) {
bb962: ;
  struct std__allocator_std___List_node_double__* this963;
  unsigned long __n964;
  struct std___List_node_double_* __retval965;
  this963 = v960;
  __n964 = v961;
  struct std__allocator_std___List_node_double__* t966 = this963;
    _Bool r967 = std____is_constant_evaluated();
    if (r967) {
        unsigned long t968 = __n964;
        unsigned long c969 = 24;
        unsigned long ovr970;
        _Bool ovf971 = __builtin_mul_overflow(t968, c969, &ovr970);
        __n964 = ovr970;
        if (ovf971) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t972 = __n964;
      void* r973 = operator_new(t972);
      if (__cir_exc_active) {
        struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
        return __cir_eh_ret;
      }
      struct std___List_node_double_* cast974 = (struct std___List_node_double_*)r973;
      __retval965 = cast974;
      struct std___List_node_double_* t975 = __retval965;
      return t975;
    }
  struct std____new_allocator_std___List_node_double__* base976 = (struct std____new_allocator_std___List_node_double__*)((char *)t966 + 0);
  unsigned long t977 = __n964;
  void* c978 = ((void*)0);
  struct std___List_node_double_* r979 = std____new_allocator_std___List_node_double_____allocate(base976, t977, c978);
  if (__cir_exc_active) {
    struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
    return __cir_eh_ret;
  }
  __retval965 = r979;
  struct std___List_node_double_* t980 = __retval965;
  return t980;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIdEEE8allocateERS2_m
struct std___List_node_double_* std__allocator_traits_std__allocator_std___List_node_double_______allocate(struct std__allocator_std___List_node_double__* v981, unsigned long v982) {
bb983: ;
  struct std__allocator_std___List_node_double__* __a984;
  unsigned long __n985;
  struct std___List_node_double_* __retval986;
  __a984 = v981;
  __n985 = v982;
  struct std__allocator_std___List_node_double__* t987 = __a984;
  unsigned long t988 = __n985;
  struct std___List_node_double_* r989 = std__allocator_std___List_node_double_____allocate(t987, t988);
  if (__cir_exc_active) {
    struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
    return __cir_eh_ret;
  }
  __retval986 = r989;
  struct std___List_node_double_* t990 = __retval986;
  return t990;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIdEEEC2ERS2_PS1_
void std____allocated_ptr_std__allocator_std___List_node_double_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_double___* v991, struct std__allocator_std___List_node_double__* v992, struct std___List_node_double_* v993) {
bb994: ;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* this995;
  struct std__allocator_std___List_node_double__* __a996;
  struct std___List_node_double_* __ptr997;
  this995 = v991;
  __a996 = v992;
  __ptr997 = v993;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t998 = this995;
  struct std__allocator_std___List_node_double__* t999 = __a996;
  t998->_M_alloc = t999;
  struct std___List_node_double_* t1000 = __ptr997;
  t998->_M_ptr = t1000;
  return;
}

// function: _ZSt18__allocate_guardedISaISt10_List_nodeIdEEESt15__allocated_ptrIT_ERS4_
struct std____allocated_ptr_std__allocator_std___List_node_double___ std____allocated_ptr_std__allocator_std___List_node_double______std____allocate_guarded_std__allocator_std___List_node_double_____(struct std__allocator_std___List_node_double__* v1001) {
bb1002: ;
  struct std__allocator_std___List_node_double__* __a1003;
  struct std____allocated_ptr_std__allocator_std___List_node_double___ __retval1004;
  __a1003 = v1001;
  struct std__allocator_std___List_node_double__* t1005 = __a1003;
  struct std__allocator_std___List_node_double__* t1006 = __a1003;
  unsigned long c1007 = 1;
  struct std___List_node_double_* r1008 = std__allocator_traits_std__allocator_std___List_node_double_______allocate(t1006, c1007);
  if (__cir_exc_active) {
    struct std____allocated_ptr_std__allocator_std___List_node_double___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std____allocated_ptr_std__allocator_std___List_node_double_________allocated_ptr_2(&__retval1004, t1005, r1008);
  struct std____allocated_ptr_std__allocator_std___List_node_double___ t1009 = __retval1004;
  return t1009;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIdEEEC2EOSt15__allocated_ptrIS2_E
void std____allocated_obj_std__allocator_std___List_node_double_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_double___* v1010, struct std____allocated_ptr_std__allocator_std___List_node_double___* v1011) {
bb1012: ;
  struct std____allocated_obj_std__allocator_std___List_node_double___* this1013;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* __ptr1014;
  this1013 = v1010;
  __ptr1014 = v1011;
  struct std____allocated_obj_std__allocator_std___List_node_double___* t1015 = this1013;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* base1016 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t1015 + 0);
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t1017 = __ptr1014;
  std____allocated_ptr_std__allocator_std___List_node_double_________allocated_ptr(base1016, t1017);
    struct std____allocated_ptr_std__allocator_std___List_node_double___* base1018 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t1015 + 0);
    struct std___List_node_double_* r1019 = std____allocated_ptr_std__allocator_std___List_node_double_______get___const(base1018);
    if (__cir_exc_active) {
      {
        struct std____allocated_ptr_std__allocator_std___List_node_double___* base1020 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t1015 + 0);
        std____allocated_ptr_std__allocator_std___List_node_double__________allocated_ptr(base1020);
      }
      return;
    }
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIdEEED2Ev
void std____allocated_ptr_std__allocator_std___List_node_double__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_double___* v1021) {
bb1022: ;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* this1023;
  this1023 = v1021;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t1024 = this1023;
    struct std___List_node_double_* t1025 = t1024->_M_ptr;
    struct std___List_node_double_* c1026 = ((void*)0);
    _Bool c1027 = ((t1025 != c1026)) ? 1 : 0;
    if (c1027) {
      struct std__allocator_std___List_node_double__* t1028 = t1024->_M_alloc;
      struct std___List_node_double_* t1029 = t1024->_M_ptr;
      unsigned long c1030 = 1;
      std__allocator_traits_std__allocator_std___List_node_double_______deallocate(t1028, t1029, c1030);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt22__allocate_guarded_objISaISt10_List_nodeIdEEESt15__allocated_objIT_ERS4_
struct std____allocated_obj_std__allocator_std___List_node_double___ std____allocated_obj_std__allocator_std___List_node_double______std____allocate_guarded_obj_std__allocator_std___List_node_double_____(struct std__allocator_std___List_node_double__* v1031) {
bb1032: ;
  struct std__allocator_std___List_node_double__* __a1033;
  struct std____allocated_obj_std__allocator_std___List_node_double___ __retval1034;
  struct std____allocated_ptr_std__allocator_std___List_node_double___ ref_tmp01035;
  __a1033 = v1031;
  struct std__allocator_std___List_node_double__* t1036 = __a1033;
  struct std____allocated_ptr_std__allocator_std___List_node_double___ r1037 = std____allocated_ptr_std__allocator_std___List_node_double______std____allocate_guarded_std__allocator_std___List_node_double_____(t1036);
  if (__cir_exc_active) {
    struct std____allocated_obj_std__allocator_std___List_node_double___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp01035 = r1037;
    std____allocated_obj_std__allocator_std___List_node_double_________allocated_obj(&__retval1034, &ref_tmp01035);
    if (__cir_exc_active) {
      {
        std____allocated_ptr_std__allocator_std___List_node_double__________allocated_ptr(&ref_tmp01035);
      }
      struct std____allocated_obj_std__allocator_std___List_node_double___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
  {
    std____allocated_ptr_std__allocator_std___List_node_double__________allocated_ptr(&ref_tmp01035);
  }
  struct std____allocated_obj_std__allocator_std___List_node_double___ t1038 = __retval1034;
  return t1038;
}

// function: _ZSt12construct_atIdJRdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
double* _ZSt12construct_atIdJRdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(double* v1039, double* v1040) {
bb1041: ;
  double* __location1042;
  double* __args1043;
  double* __retval1044;
  void* __loc1045;
  __location1042 = v1039;
  __args1043 = v1040;
  double* t1046 = __location1042;
  void* cast1047 = (void*)t1046;
  __loc1045 = cast1047;
    void* t1048 = __loc1045;
    double* cast1049 = (double*)t1048;
    double* t1050 = __args1043;
    double t1051 = *t1050;
    *cast1049 = t1051;
    __retval1044 = cast1049;
    double* t1052 = __retval1044;
    return t1052;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIdEEE9constructIdJRdEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_double_______construct_double__double__(struct std__allocator_std___List_node_double__* v1053, double* v1054, double* v1055) {
bb1056: ;
  struct std__allocator_std___List_node_double__* __a1057;
  double* __p1058;
  double* __args1059;
  __a1057 = v1053;
  __p1058 = v1054;
  __args1059 = v1055;
  double* t1060 = __p1058;
  double* t1061 = __args1059;
  double* r1062 = _ZSt12construct_atIdJRdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1060, t1061);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIdEEEptEv
struct std___List_node_double_* std____allocated_obj_std__allocator_std___List_node_double_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_double___* v1063) {
bb1064: ;
  struct std____allocated_obj_std__allocator_std___List_node_double___* this1065;
  struct std___List_node_double_* __retval1066;
  this1065 = v1063;
  struct std____allocated_obj_std__allocator_std___List_node_double___* t1067 = this1065;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* base1068 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t1067 + 0);
  struct std___List_node_double_* r1069 = std____allocated_ptr_std__allocator_std___List_node_double_______get___const(base1068);
  if (__cir_exc_active) {
    struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
    return __cir_eh_ret;
  }
  __retval1066 = r1069;
  struct std___List_node_double_* t1070 = __retval1066;
  return t1070;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIdEDnET_RS3_OT0_
struct std___List_node_double_* std___List_node_double___std____exchange_std___List_node_double____decltype_nullptr___std___List_node_double_____decltype(struct std___List_node_double_** v1071, void** v1072) {
bb1073: ;
  struct std___List_node_double_** __obj1074;
  void** __new_val1075;
  struct std___List_node_double_* __retval1076;
  struct std___List_node_double_* __old_val1077;
  __obj1074 = v1071;
  __new_val1075 = v1072;
  struct std___List_node_double_** t1078 = __obj1074;
  struct std___List_node_double_* t1079 = *t1078;
  __old_val1077 = t1079;
  void** t1080 = __new_val1075;
  struct std___List_node_double_* c1081 = ((void*)0);
  struct std___List_node_double_** t1082 = __obj1074;
  *t1082 = c1081;
  struct std___List_node_double_* t1083 = __old_val1077;
  __retval1076 = t1083;
  struct std___List_node_double_* t1084 = __retval1076;
  return t1084;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIdEEE7releaseEv
struct std___List_node_double_* std____allocated_ptr_std__allocator_std___List_node_double_______release(struct std____allocated_ptr_std__allocator_std___List_node_double___* v1085) {
bb1086: ;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* this1087;
  struct std___List_node_double_* __retval1088;
  void* ref_tmp01089;
  this1087 = v1085;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t1090 = this1087;
  void* c1091 = ((void*)0);
  ref_tmp01089 = c1091;
  struct std___List_node_double_* r1092 = std___List_node_double___std____exchange_std___List_node_double____decltype_nullptr___std___List_node_double_____decltype(&t1090->_M_ptr, &ref_tmp01089);
  if (__cir_exc_active) {
    struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
    return __cir_eh_ret;
  }
  __retval1088 = r1092;
  struct std___List_node_double_* t1093 = __retval1088;
  return t1093;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIdEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_double__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_double___* v1094) {
bb1095: ;
  struct std____allocated_obj_std__allocator_std___List_node_double___* this1096;
  this1096 = v1094;
  struct std____allocated_obj_std__allocator_std___List_node_double___* t1097 = this1096;
      struct std____allocated_ptr_std__allocator_std___List_node_double___* base1098 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t1097 + 0);
      _Bool r1099 = std____allocated_ptr_std__allocator_std___List_node_double_______operator_bool___const(base1098);
      if (r1099) {
        struct std____allocated_ptr_std__allocator_std___List_node_double___* base1100 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t1097 + 0);
        struct std___List_node_double_* r1101 = std____allocated_ptr_std__allocator_std___List_node_double_______get___const(base1100);
        if (__cir_exc_active) {
          {
            struct std____allocated_ptr_std__allocator_std___List_node_double___* base1102 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t1097 + 0);
            std____allocated_ptr_std__allocator_std___List_node_double__________allocated_ptr(base1102);
          }
          return;
        }
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_double___* base1103 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t1097 + 0);
    std____allocated_ptr_std__allocator_std___List_node_double__________allocated_ptr(base1103);
  }
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE14_M_create_nodeIJRdEEEPSt10_List_nodeIdEDpOT_
struct std___List_node_double_* std___List_node_double___std____cxx11__list_double__std__allocator_double______M_create_node_double__(struct std____cxx11__list_double__std__allocator_double__* v1104, double* v1105) {
bb1106: ;
  struct std____cxx11__list_double__std__allocator_double__* this1107;
  double* __args1108;
  struct std___List_node_double_* __retval1109;
  struct std__allocator_std___List_node_double__* __alloc1110;
  struct std____allocated_obj_std__allocator_std___List_node_double___ __guard1111;
  this1107 = v1104;
  __args1108 = v1105;
  struct std____cxx11__list_double__std__allocator_double__* t1112 = this1107;
  struct std____cxx11___List_base_double__std__allocator_double__* base1113 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t1112 + 0);
  struct std__allocator_std___List_node_double__* r1114 = std____cxx11___List_base_double__std__allocator_double______M_get_Node_allocator(base1113);
  __alloc1110 = r1114;
  struct std__allocator_std___List_node_double__* t1115 = __alloc1110;
  struct std____allocated_obj_std__allocator_std___List_node_double___ r1116 = std____allocated_obj_std__allocator_std___List_node_double______std____allocate_guarded_obj_std__allocator_std___List_node_double_____(t1115);
  if (__cir_exc_active) {
    struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
    return __cir_eh_ret;
  }
  __guard1111 = r1116;
    struct std__allocator_std___List_node_double__* t1117 = __alloc1110;
    struct std___List_node_double_* r1118 = std____allocated_obj_std__allocator_std___List_node_double_______operator_____const(&__guard1111);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_double__________allocated_obj(&__guard1111);
      }
      struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
      return __cir_eh_ret;
    }
    double* r1119 = std___List_node_double____M_valptr(r1118);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_double__________allocated_obj(&__guard1111);
      }
      struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
      return __cir_eh_ret;
    }
    double* t1120 = __args1108;
    void_std__allocator_traits_std__allocator_std___List_node_double_______construct_double__double__(t1117, r1119, t1120);
    struct std____allocated_ptr_std__allocator_std___List_node_double___* base1121 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)&(__guard1111) + 0);
    struct std___List_node_double_* r1122 = std____allocated_ptr_std__allocator_std___List_node_double_______release(base1121);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_double__________allocated_obj(&__guard1111);
      }
      struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
      return __cir_eh_ret;
    }
    __retval1109 = r1122;
    struct std___List_node_double_* t1123 = __retval1109;
    struct std___List_node_double_* ret_val1124 = t1123;
    {
      std____allocated_obj_std__allocator_std___List_node_double__________allocated_obj(&__guard1111);
    }
    return ret_val1124;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE11_M_inc_sizeEm
void std____cxx11___List_base_double__std__allocator_double______M_inc_size(struct std____cxx11___List_base_double__std__allocator_double__* v1125, unsigned long v1126) {
bb1127: ;
  struct std____cxx11___List_base_double__std__allocator_double__* this1128;
  unsigned long __n1129;
  this1128 = v1125;
  __n1129 = v1126;
  struct std____cxx11___List_base_double__std__allocator_double__* t1130 = this1128;
  unsigned long t1131 = __n1129;
  struct std____detail___List_size* base1132 = (struct std____detail___List_size*)((char *)&(t1130->_M_impl._M_node) + 16);
  unsigned long t1133 = base1132->_M_size;
  unsigned long b1134 = t1133 + t1131;
  base1132->_M_size = b1134;
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE9_M_insertIJRdEEEvSt14_List_iteratorIdEDpOT_
void void_std____cxx11__list_double__std__allocator_double______M_insert_double__(struct std____cxx11__list_double__std__allocator_double__* v1135, struct std___List_iterator_double_ v1136, double* v1137) {
bb1138: ;
  struct std____cxx11__list_double__std__allocator_double__* this1139;
  struct std___List_iterator_double_ __position1140;
  double* __args1141;
  struct std___List_node_double_* __tmp1142;
  this1139 = v1135;
  __position1140 = v1136;
  __args1141 = v1137;
  struct std____cxx11__list_double__std__allocator_double__* t1143 = this1139;
  double* t1144 = __args1141;
  struct std___List_node_double_* r1145 = std___List_node_double___std____cxx11__list_double__std__allocator_double______M_create_node_double__(t1143, t1144);
  if (__cir_exc_active) {
    return;
  }
  __tmp1142 = r1145;
  struct std___List_node_double_* t1146 = __tmp1142;
  struct std____detail___List_node_base* base1147 = (struct std____detail___List_node_base*)((char *)t1146 + 0);
  struct std____detail___List_node_base* t1148 = __position1140._M_node;
  std____detail___List_node_base___M_hook(base1147, t1148);
  struct std____cxx11___List_base_double__std__allocator_double__* base1149 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t1143 + 0);
  unsigned long c1150 = 1;
  std____cxx11___List_base_double__std__allocator_double______M_inc_size(base1149, c1150);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v1151) {
bb1152: ;
  struct std____detail___List_node_base* this1153;
  struct std____detail___List_node_base* __retval1154;
  this1153 = v1151;
  struct std____detail___List_node_base* t1155 = this1153;
  __retval1154 = t1155;
  struct std____detail___List_node_base* t1156 = __retval1154;
  return t1156;
}

// function: _ZNKSt7__cxx114listIdSaIdEE5emptyEv
_Bool std____cxx11__list_double__std__allocator_double_____empty___const(struct std____cxx11__list_double__std__allocator_double__* v1157) {
bb1158: ;
  struct std____cxx11__list_double__std__allocator_double__* this1159;
  _Bool __retval1160;
  this1159 = v1157;
  struct std____cxx11__list_double__std__allocator_double__* t1161 = this1159;
  struct std____cxx11___List_base_double__std__allocator_double__* base1162 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t1161 + 0);
  struct std____detail___List_node_base* base1163 = (struct std____detail___List_node_base*)((char *)&(base1162->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t1164 = base1163->_M_next;
  struct std____cxx11___List_base_double__std__allocator_double__* base1165 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t1161 + 0);
  struct std____detail___List_node_base* base1166 = (struct std____detail___List_node_base*)((char *)&(base1165->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r1167 = std____detail___List_node_base___M_base___const(base1166);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool c1168 = ((t1164 == r1167)) ? 1 : 0;
  __retval1160 = c1168;
  _Bool t1169 = __retval1160;
  return t1169;
}

// function: _ZNSt14_List_iteratorIdEmmEv
struct std___List_iterator_double_* std___List_iterator_double___operator__(struct std___List_iterator_double_* v1170) {
bb1171: ;
  struct std___List_iterator_double_* this1172;
  struct std___List_iterator_double_* __retval1173;
  this1172 = v1170;
  struct std___List_iterator_double_* t1174 = this1172;
  struct std____detail___List_node_base* t1175 = t1174->_M_node;
  struct std____detail___List_node_base* t1176 = t1175->_M_prev;
  t1174->_M_node = t1176;
  __retval1173 = t1174;
  struct std___List_iterator_double_* t1177 = __retval1173;
  return t1177;
}

// function: _ZNSt7__cxx114listIdSaIdEE4backEv
double* std____cxx11__list_double__std__allocator_double_____back(struct std____cxx11__list_double__std__allocator_double__* v1178) {
bb1179: ;
  struct std____cxx11__list_double__std__allocator_double__* this1180;
  double* __retval1181;
  struct std___List_iterator_double_ __tmp1182;
  this1180 = v1178;
  struct std____cxx11__list_double__std__allocator_double__* t1183 = this1180;
    do {
          _Bool r1184 = std____cxx11__list_double__std__allocator_double_____empty___const(t1183);
          if (r1184) {
            char* cast1185 = (char*)&(_str_12);
            int c1186 = 1674;
            char* cast1187 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIdSaIdEE4backEv);
            char* cast1188 = (char*)&(_str_13);
            std____glibcxx_assert_fail(cast1185, c1186, cast1187, cast1188);
          }
      _Bool c1189 = 0;
      if (!c1189) break;
    } while (1);
  struct std___List_iterator_double_ r1190 = std____cxx11__list_double__std__allocator_double_____end(t1183);
  __tmp1182 = r1190;
  struct std___List_iterator_double_* r1191 = std___List_iterator_double___operator__(&__tmp1182);
  double* r1192 = std___List_iterator_double___operator____const(&__tmp1182);
  __retval1181 = r1192;
  double* t1193 = __retval1181;
  return t1193;
}

// function: _ZNSt7__cxx114listIdSaIdEE12emplace_backIJRdEEES4_DpOT_
double* double__std____cxx11__list_double__std__allocator_double_____emplace_back_double__(struct std____cxx11__list_double__std__allocator_double__* v1194, double* v1195) {
bb1196: ;
  struct std____cxx11__list_double__std__allocator_double__* this1197;
  double* __args1198;
  double* __retval1199;
  struct std___List_iterator_double_ agg_tmp01200;
  this1197 = v1194;
  __args1198 = v1195;
  struct std____cxx11__list_double__std__allocator_double__* t1201 = this1197;
  struct std___List_iterator_double_ r1202 = std____cxx11__list_double__std__allocator_double_____end(t1201);
  agg_tmp01200 = r1202;
  double* t1203 = __args1198;
  struct std___List_iterator_double_ t1204 = agg_tmp01200;
  void_std____cxx11__list_double__std__allocator_double______M_insert_double__(t1201, t1204, t1203);
  if (__cir_exc_active) {
    double* __cir_eh_ret = (double*)0;
    return __cir_eh_ret;
  }
  double* r1205 = std____cxx11__list_double__std__allocator_double_____back(t1201);
  __retval1199 = r1205;
  double* t1206 = __retval1199;
  return t1206;
}

// function: _ZSteqRKSt14_List_iteratorIdES2_
_Bool std__operator___2(struct std___List_iterator_double_* v1207, struct std___List_iterator_double_* v1208) {
bb1209: ;
  struct std___List_iterator_double_* __x1210;
  struct std___List_iterator_double_* __y1211;
  _Bool __retval1212;
  __x1210 = v1207;
  __y1211 = v1208;
  struct std___List_iterator_double_* t1213 = __x1210;
  struct std____detail___List_node_base* t1214 = t1213->_M_node;
  struct std___List_iterator_double_* t1215 = __y1211;
  struct std____detail___List_node_base* t1216 = t1215->_M_node;
  _Bool c1217 = ((t1214 == t1216)) ? 1 : 0;
  __retval1212 = c1217;
  _Bool t1218 = __retval1212;
  return t1218;
}

// function: _ZNSt14_List_iteratorIdEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_double____List_iterator(struct std___List_iterator_double_* v1219, struct std____detail___List_node_base* v1220) {
bb1221: ;
  struct std___List_iterator_double_* this1222;
  struct std____detail___List_node_base* __x1223;
  this1222 = v1219;
  __x1223 = v1220;
  struct std___List_iterator_double_* t1224 = this1222;
  struct std____detail___List_node_base* t1225 = __x1223;
  t1224->_M_node = t1225;
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE3endEv
struct std___List_iterator_double_ std____cxx11__list_double__std__allocator_double_____end(struct std____cxx11__list_double__std__allocator_double__* v1226) {
bb1227: ;
  struct std____cxx11__list_double__std__allocator_double__* this1228;
  struct std___List_iterator_double_ __retval1229;
  this1228 = v1226;
  struct std____cxx11__list_double__std__allocator_double__* t1230 = this1228;
  struct std____cxx11___List_base_double__std__allocator_double__* base1231 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t1230 + 0);
  struct std____detail___List_node_base* r1232 = std____detail___List_node_header___M_base(&base1231->_M_impl._M_node);
  if (__cir_exc_active) {
    struct std___List_iterator_double_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___List_iterator_double____List_iterator(&__retval1229, r1232);
  struct std___List_iterator_double_ t1233 = __retval1229;
  return t1233;
}

// function: _ZNSt7__cxx114listIdSaIdEE22_M_initialize_dispatchIPdEEvT_S5_St12__false_type
void void_std____cxx11__list_double__std__allocator_double______M_initialize_dispatch_double__(struct std____cxx11__list_double__std__allocator_double__* v1234, double* v1235, double* v1236, struct std____false_type v1237) {
bb1238: ;
  struct std____cxx11__list_double__std__allocator_double__* this1239;
  double* __first1240;
  double* __last1241;
  struct std____false_type unnamed1242;
  _Bool __notempty1243;
  this1239 = v1234;
  __first1240 = v1235;
  __last1241 = v1236;
  unnamed1242 = v1237;
  struct std____cxx11__list_double__std__allocator_double__* t1244 = this1239;
  double* t1245 = __first1240;
  double* t1246 = __last1241;
  _Bool c1247 = ((t1245 != t1246)) ? 1 : 0;
  __notempty1243 = c1247;
    while (1) {
      double* t1249 = __first1240;
      double* t1250 = __last1241;
      _Bool c1251 = ((t1249 != t1250)) ? 1 : 0;
      if (!c1251) break;
      double* t1252 = __first1240;
      double* r1253 = double__std____cxx11__list_double__std__allocator_double_____emplace_back_double__(t1244, t1252);
      if (__cir_exc_active) {
        return;
      }
    for_step1248: ;
      double* t1254 = __first1240;
      int c1255 = 1;
      double* ptr1256 = &(t1254)[c1255];
      __first1240 = ptr1256;
    }
    _Bool t1257 = __notempty1243;
    if (t1257) {
        struct std___List_iterator_double_ ref_tmp01258;
        struct std___List_iterator_double_ ref_tmp11259;
        struct std___List_iterator_double_ r1260 = std____cxx11__list_double__std__allocator_double_____begin(t1244);
        ref_tmp01258 = r1260;
        struct std___List_iterator_double_ r1261 = std____cxx11__list_double__std__allocator_double_____end(t1244);
        ref_tmp11259 = r1261;
        _Bool r1262 = std__operator___2(&ref_tmp01258, &ref_tmp11259);
        if (r1262) {
          __builtin_unreachable();
        }
    }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIdEEC2Ev
void std____new_allocator_std___List_node_double_______new_allocator_2(struct std____new_allocator_std___List_node_double__* v1263) {
bb1264: ;
  struct std____new_allocator_std___List_node_double__* this1265;
  this1265 = v1263;
  struct std____new_allocator_std___List_node_double__* t1266 = this1265;
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIdEEC2ERKS2_
void std____new_allocator_std___List_node_double_______new_allocator(struct std____new_allocator_std___List_node_double__* v1267, struct std____new_allocator_std___List_node_double__* v1268) {
bb1269: ;
  struct std____new_allocator_std___List_node_double__* this1270;
  struct std____new_allocator_std___List_node_double__* unnamed1271;
  this1270 = v1267;
  unnamed1271 = v1268;
  struct std____new_allocator_std___List_node_double__* t1272 = this1270;
  return;
}

// function: _ZNSaISt10_List_nodeIdEEC2ERKS1_
void std__allocator_std___List_node_double_____allocator(struct std__allocator_std___List_node_double__* v1273, struct std__allocator_std___List_node_double__* v1274) {
bb1275: ;
  struct std__allocator_std___List_node_double__* this1276;
  struct std__allocator_std___List_node_double__* __a1277;
  this1276 = v1273;
  __a1277 = v1274;
  struct std__allocator_std___List_node_double__* t1278 = this1276;
  struct std____new_allocator_std___List_node_double__* base1279 = (struct std____new_allocator_std___List_node_double__*)((char *)t1278 + 0);
  struct std__allocator_std___List_node_double__* t1280 = __a1277;
  struct std____new_allocator_std___List_node_double__* base1281 = (struct std____new_allocator_std___List_node_double__*)((char *)t1280 + 0);
  std____new_allocator_std___List_node_double_______new_allocator(base1279, base1281);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v1282) {
bb1283: ;
  struct std____detail___List_node_header* this1284;
  this1284 = v1282;
  struct std____detail___List_node_header* t1285 = this1284;
  struct std____detail___List_node_base* base1286 = (struct std____detail___List_node_base*)((char *)t1285 + 0);
  struct std____detail___List_size* base1287 = (struct std____detail___List_size*)((char *)t1285 + 16);
  std____detail___List_node_header___M_init(t1285);
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v1288, struct std____detail___List_size* v1289) {
bb1290: ;
  struct std____detail___List_size* this1291;
  struct std____detail___List_size* unnamed1292;
  struct std____detail___List_size* __retval1293;
  this1291 = v1288;
  unnamed1292 = v1289;
  struct std____detail___List_size* t1294 = this1291;
  struct std____detail___List_size* t1295 = unnamed1292;
  unsigned long t1296 = t1295->_M_size;
  t1294->_M_size = t1296;
  __retval1293 = t1294;
  struct std____detail___List_size* t1297 = __retval1293;
  return t1297;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v1298) {
bb1299: ;
  struct std____detail___List_node_header* this1300;
  struct std____detail___List_size ref_tmp01301;
  this1300 = v1298;
  struct std____detail___List_node_header* t1302 = this1300;
  struct std____detail___List_node_base* base1303 = (struct std____detail___List_node_base*)((char *)t1302 + 0);
  struct std____detail___List_node_base* base1304 = (struct std____detail___List_node_base*)((char *)t1302 + 0);
  base1304->_M_prev = base1303;
  struct std____detail___List_node_base* base1305 = (struct std____detail___List_node_base*)((char *)t1302 + 0);
  base1305->_M_next = base1303;
  struct std____detail___List_size* base1306 = (struct std____detail___List_size*)((char *)t1302 + 16);
  ref_tmp01301 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r1307 = std____detail___List_size__operator_(base1306, &ref_tmp01301);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIdEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_double_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_double___* v1308, struct std____allocated_ptr_std__allocator_std___List_node_double___* v1309) {
bb1310: ;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* this1311;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* __gd1312;
  this1311 = v1308;
  __gd1312 = v1309;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t1313 = this1311;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t1314 = __gd1312;
  struct std__allocator_std___List_node_double__* t1315 = t1314->_M_alloc;
  t1313->_M_alloc = t1315;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t1316 = __gd1312;
  struct std___List_node_double_* t1317 = t1316->_M_ptr;
  t1313->_M_ptr = t1317;
  struct std___List_node_double_* c1318 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t1319 = __gd1312;
  t1319->_M_ptr = c1318;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIdEEPT_S3_
struct std___List_node_double_* std___List_node_double___std__to_address_std___List_node_double___(struct std___List_node_double_* v1320) {
bb1321: ;
  struct std___List_node_double_* __ptr1322;
  struct std___List_node_double_* __retval1323;
  __ptr1322 = v1320;
  struct std___List_node_double_* t1324 = __ptr1322;
  __retval1323 = t1324;
  struct std___List_node_double_* t1325 = __retval1323;
  return t1325;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIdEEDaRKT_
struct std___List_node_double_* auto_std____to_address_std___List_node_double___(struct std___List_node_double_** v1326) {
bb1327: ;
  struct std___List_node_double_** __ptr1328;
  struct std___List_node_double_* __retval1329;
  __ptr1328 = v1326;
  struct std___List_node_double_** t1330 = __ptr1328;
  struct std___List_node_double_* t1331 = *t1330;
  struct std___List_node_double_* r1332 = std___List_node_double___std__to_address_std___List_node_double___(t1331);
  __retval1329 = r1332;
  struct std___List_node_double_* t1333 = __retval1329;
  return t1333;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIdEEE3getEv
struct std___List_node_double_* std____allocated_ptr_std__allocator_std___List_node_double_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_double___* v1334) {
bb1335: ;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* this1336;
  struct std___List_node_double_* __retval1337;
  this1336 = v1334;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t1338 = this1336;
  struct std___List_node_double_* r1339 = auto_std____to_address_std___List_node_double___(&t1338->_M_ptr);
  __retval1337 = r1339;
  struct std___List_node_double_* t1340 = __retval1337;
  return t1340;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIdEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_double_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_double___* v1341) {
bb1342: ;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* this1343;
  _Bool __retval1344;
  this1343 = v1341;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t1345 = this1343;
  struct std___List_node_double_* t1346 = t1345->_M_ptr;
  _Bool cast1347 = (_Bool)t1346;
  __retval1344 = cast1347;
  _Bool t1348 = __retval1344;
  return t1348;
}

// function: _ZNSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base(struct std____detail___List_node_base* v1349) {
bb1350: ;
  struct std____detail___List_node_base* this1351;
  struct std____detail___List_node_base* __retval1352;
  this1351 = v1349;
  struct std____detail___List_node_base* t1353 = this1351;
  __retval1352 = t1353;
  struct std____detail___List_node_base* t1354 = __retval1352;
  return t1354;
}

