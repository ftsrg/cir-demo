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
struct std____cxx11__list_double__std__allocator_double_____Finalize_merge { struct std____cxx11__list_double__std__allocator_double__* _M_dest; struct std____cxx11__list_double__std__allocator_double__* _M_src; struct std___List_iterator_double_* _M_next; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____false_type { unsigned char __field0; };
struct std____list___Scratch_list_std____detail___List_node_base_ { struct std____detail___List_node_base __field0; };
struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_ { unsigned char __field0; };
struct std____new_allocator_double_ { unsigned char __field0; };
struct std____new_allocator_std___List_node_double__ { unsigned char __field0; };
struct std__allocator_double_ { unsigned char __field0; };
struct std__allocator_std___List_node_double__ { unsigned char __field0; };
struct std__bidirectional_iterator_tag { unsigned char __field0; };
struct std__input_iterator_tag { unsigned char __field0; };
struct std___List_node_double_ { struct std____detail___List_node_base __field0; struct __gnu_cxx____aligned_membuf_double_ _M_storage; };
struct std____allocated_obj_std__allocator_std___List_node_double___ { struct std____allocated_ptr_std__allocator_std___List_node_double___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std____cxx11___List_base_double__std__allocator_double_____List_impl { struct std____detail___List_node_header _M_node; };
struct std____cxx11___List_base_double__std__allocator_double__ { struct std____cxx11___List_base_double__std__allocator_double_____List_impl _M_impl; };
struct std____cxx11__list_double__std__allocator_double__ { struct std____cxx11___List_base_double__std__allocator_double__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
double __const_main_md2[4] = {0x1.6666666666666p0, 0x1.199999999999ap1, 0x1.0cccccccccccdp1, 0x1.8cccccccccccdp1};
char _str[16] = "merged != first";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_merge_bug-2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIdSaIdEE4backEv[84] = "reference std::list<double>::back() [_Tp = double, _Alloc = std::allocator<double>]";
char _str_3[15] = "!this->empty()";
_Bool mycomparison(double p0, double p1);
void std____cxx11__list_double__std__allocator_double_____list(struct std____cxx11__list_double__std__allocator_double__* p0);
struct std__allocator_std___List_node_double__* std____cxx11___List_base_double__std__allocator_double______M_get_Node_allocator(struct std____cxx11___List_base_double__std__allocator_double__* p0);
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
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
double* _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(double* p0, double* p1);
void void_std__allocator_traits_std__allocator_std___List_node_double_______construct_double__double_(struct std__allocator_std___List_node_double__* p0, double* p1, double* p2);
struct std___List_node_double_* std____allocated_obj_std__allocator_std___List_node_double_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_double___* p0);
struct std___List_node_double_* std___List_node_double___std____exchange_std___List_node_double____decltype_nullptr___std___List_node_double_____decltype(struct std___List_node_double_** p0, void** p1);
struct std___List_node_double_* std____allocated_ptr_std__allocator_std___List_node_double_______release(struct std____allocated_ptr_std__allocator_std___List_node_double___* p0);
void std____allocated_obj_std__allocator_std___List_node_double__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_double___* p0);
struct std___List_node_double_* std___List_node_double___std____cxx11__list_double__std__allocator_double______M_create_node_double_(struct std____cxx11__list_double__std__allocator_double__* p0, double* p1);
extern void std____detail___List_node_base___M_hook(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1);
void std____cxx11___List_base_double__std__allocator_double______M_inc_size(struct std____cxx11___List_base_double__std__allocator_double__* p0, unsigned long p1);
void void_std____cxx11__list_double__std__allocator_double______M_insert_double_(struct std____cxx11__list_double__std__allocator_double__* p0, struct std___List_iterator_double_ p1, double* p2);
void std___List_iterator_double____List_iterator(struct std___List_iterator_double_* p0, struct std____detail___List_node_base* p1);
struct std___List_iterator_double_ std____cxx11__list_double__std__allocator_double_____end(struct std____cxx11__list_double__std__allocator_double__* p0);
void std____cxx11__list_double__std__allocator_double_____push_back(struct std____cxx11__list_double__std__allocator_double__* p0, double* p1);
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* p0);
_Bool std____cxx11__list_double__std__allocator_double_____empty___const(struct std____cxx11__list_double__std__allocator_double__* p0);
_Bool std__operator___2(struct std___List_iterator_double_* p0, struct std___List_iterator_double_* p1);
struct std___List_iterator_double_ std____cxx11__list_double__std__allocator_double_____begin(struct std____cxx11__list_double__std__allocator_double__* p0);
struct std___List_iterator_double_* std___List_iterator_double___operator___2(struct std___List_iterator_double_* p0);
void std____list___Scratch_list_std____detail___List_node_base____Scratch_list(struct std____list___Scratch_list_std____detail___List_node_base_* p0);
extern int __gxx_personality_v0();
extern void std____detail___List_node_base___M_transfer(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1, struct std____detail___List_node_base* p2);
void std____list___Scratch_list_std____detail___List_node_base____M_take_one(struct std____list___Scratch_list_std____detail___List_node_base_* p0, struct std____detail___List_node_base* p1);
_Bool std____list___Scratch_list_std____detail___List_node_base___empty___const(struct std____list___Scratch_list_std____detail___List_node_base_* p0);
double* std___List_iterator_double___operator____const(struct std___List_iterator_double_* p0);
_Bool std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void___operator___std____detail___List_node_base___std____detail___List_node_base___const(struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_* p0, struct std____detail___List_node_base* p1, struct std____detail___List_node_base* p2);
void void_std____list___Scratch_list_std____detail___List_node_base___merge_std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void___(struct std____list___Scratch_list_std____detail___List_node_base_* p0, struct std____detail___List_node_base* p1, struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_ p2);
extern void std____detail___List_node_base__swap(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1);
void std____list___Scratch_list_std____detail___List_node_base___swap(struct std____list___Scratch_list_std____detail___List_node_base_* p0, struct std____detail___List_node_base* p1);
void std____list___Scratch_list_std____detail___List_node_base____M_put_all(struct std____list___Scratch_list_std____detail___List_node_base_* p0, struct std____detail___List_node_base* p1);
void std____cxx11__list_double__std__allocator_double_____sort(struct std____cxx11__list_double__std__allocator_double__* p0);
_Bool std__operator___3(struct std___List_const_iterator_double_* p0, struct std___List_const_iterator_double_* p1);
void std____cxx11___List_base_double__std__allocator_double______M_dec_size(struct std____cxx11___List_base_double__std__allocator_double__* p0, unsigned long p1);
extern void std____detail___List_node_base___M_unhook(struct std____detail___List_node_base* p0);
void std____cxx11__list_double__std__allocator_double______M_erase(struct std____cxx11__list_double__std__allocator_double__* p0, struct std___List_iterator_double_ p1);
struct std___List_iterator_double_ std____cxx11__list_double__std__allocator_double_____erase(struct std____cxx11__list_double__std__allocator_double__* p0, struct std___List_const_iterator_double_ p1);
struct std___List_const_iterator_double_* std___List_const_iterator_double___operator_(struct std___List_const_iterator_double_* p0, struct std___List_const_iterator_double_* p1);
struct std___List_iterator_double_ std___List_const_iterator_double____M_const_cast___const(struct std___List_const_iterator_double_* p0);
struct std___List_iterator_double_ std____cxx11__list_double__std__allocator_double_____erase_2(struct std____cxx11__list_double__std__allocator_double__* p0, struct std___List_const_iterator_double_ p1, struct std___List_const_iterator_double_ p2);
void std___List_const_iterator_double____List_const_iterator_2(struct std___List_const_iterator_double_* p0, struct std___List_iterator_double_* p1);
struct std__allocator_std___List_node_double__* std____cxx11___List_base_double__std__allocator_double______M_get_Node_allocator___const(struct std____cxx11___List_base_double__std__allocator_double__* p0);
void std__allocator_double___allocator_std___List_node_double___(struct std__allocator_double_* p0, struct std__allocator_std___List_node_double__* p1);
struct std__allocator_double_ std____cxx11__list_double__std__allocator_double_____get_allocator___const(struct std____cxx11__list_double__std__allocator_double__* p0);
void std____cxx11__list_double__std__allocator_double_____list_double___void_(struct std____cxx11__list_double__std__allocator_double__* p0, double* p1, double* p2, struct std__allocator_double_* p3);
void std__allocator_double____allocator(struct std__allocator_double_* p0);
_Bool std__operator__(struct std__allocator_std___List_node_double__* p0, struct std__allocator_std___List_node_double__* p1);
extern void abort();
void std____cxx11__list_double__std__allocator_double______M_check_equal_allocators(struct std____cxx11__list_double__std__allocator_double__* p0, struct std____cxx11__list_double__std__allocator_double__* p1);
void std____cxx11__list_double__std__allocator_double______M_transfer(struct std____cxx11__list_double__std__allocator_double__* p0, struct std___List_iterator_double_ p1, struct std___List_iterator_double_ p2, struct std___List_iterator_double_ p3);
unsigned long std____cxx11___List_base_double__std__allocator_double______M_get_size___const(struct std____cxx11___List_base_double__std__allocator_double__* p0);
void std____cxx11___List_base_double__std__allocator_double______M_set_size(struct std____cxx11___List_base_double__std__allocator_double__* p0, unsigned long p1);
void std____cxx11__list_double__std__allocator_double_____splice(struct std____cxx11__list_double__std__allocator_double__* p0, struct std___List_const_iterator_double_ p1, struct std____cxx11__list_double__std__allocator_double__* p2);
void std____cxx11__list_double__std__allocator_double_____splice_2(struct std____cxx11__list_double__std__allocator_double__* p0, struct std___List_const_iterator_double_ p1, struct std____cxx11__list_double__std__allocator_double__* p2);
struct std___List_iterator_double_ std___List_iterator_double__std____cxx11__list_double__std__allocator_double_____insert_double___void_(struct std____cxx11__list_double__std__allocator_double__* p0, struct std___List_const_iterator_double_ p1, double* p2, double* p3);
void void_std____cxx11__list_double__std__allocator_double______M_assign_dispatch_double__(struct std____cxx11__list_double__std__allocator_double__* p0, double* p1, double* p2, struct std____false_type p3);
void void_std____cxx11__list_double__std__allocator_double_____assign_double___void_(struct std____cxx11__list_double__std__allocator_double__* p0, double* p1, double* p2);
void std____cxx11__list_double__std__allocator_double______Finalize_merge___Finalize_merge(struct std____cxx11__list_double__std__allocator_double_____Finalize_merge* p0, struct std____cxx11__list_double__std__allocator_double__* p1, struct std____cxx11__list_double__std__allocator_double__* p2, struct std___List_iterator_double_* p3);
struct std___List_iterator_double_* std___List_iterator_double___operator_(struct std___List_iterator_double_* p0, struct std___List_iterator_double_* p1);
void std____cxx11__list_double__std__allocator_double______Finalize_merge____Finalize_merge(struct std____cxx11__list_double__std__allocator_double_____Finalize_merge* p0);
void void_std____cxx11__list_double__std__allocator_double_____merge_bool_____double__double___std____cxx11__list_double__std__allocator_double_______bool____(struct std____cxx11__list_double__std__allocator_double__* p0, struct std____cxx11__list_double__std__allocator_double__* p1, void* p2);
void void_std____cxx11__list_double__std__allocator_double_____merge_bool_____double__double___std____cxx11__list_double__std__allocator_double______bool____(struct std____cxx11__list_double__std__allocator_double__* p0, struct std____cxx11__list_double__std__allocator_double__* p1, void* p2);
unsigned long std____cxx11__list_double__std__allocator_double_____size___const(struct std____cxx11__list_double__std__allocator_double__* p0);
void std___List_const_iterator_double____List_const_iterator(struct std___List_const_iterator_double_* p0, struct std____detail___List_node_base* p1);
struct std___List_const_iterator_double_ std____cxx11__list_double__std__allocator_double_____end___const(struct std____cxx11__list_double__std__allocator_double__* p0);
struct std___List_const_iterator_double_ std____cxx11__list_double__std__allocator_double_____begin___const(struct std____cxx11__list_double__std__allocator_double__* p0);
void* __gnu_cxx____aligned_membuf_double____M_addr___const(struct __gnu_cxx____aligned_membuf_double_* p0);
double* __gnu_cxx____aligned_membuf_double____M_ptr___const(struct __gnu_cxx____aligned_membuf_double_* p0);
double* std___List_node_double____M_valptr___const(struct std___List_node_double_* p0);
double* std___List_const_iterator_double___operator____const(struct std___List_const_iterator_double_* p0);
_Bool bool_std__operator___double__std__allocator_double___(struct std____cxx11__list_double__std__allocator_double__* p0, struct std____cxx11__list_double__std__allocator_double__* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std____cxx11__list_double__std__allocator_double______list(struct std____cxx11__list_double__std__allocator_double__* p0);
int main();
void std____cxx11___List_base_double__std__allocator_double______List_impl___List_impl_2(struct std____cxx11___List_base_double__std__allocator_double_____List_impl* p0);
void std____cxx11___List_base_double__std__allocator_double______List_impl____List_impl(struct std____cxx11___List_base_double__std__allocator_double_____List_impl* p0);
void std____cxx11___List_base_double__std__allocator_double______List_base_2(struct std____cxx11___List_base_double__std__allocator_double__* p0);
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* p0);
void void_std__destroy_at_double_(double* p0);
void void_std__allocator_traits_std__allocator_std___List_node_double_______destroy_double_(struct std__allocator_std___List_node_double__* p0, double* p1);
void* __gnu_cxx____aligned_membuf_double____M_addr(struct __gnu_cxx____aligned_membuf_double_* p0);
double* __gnu_cxx____aligned_membuf_double____M_ptr(struct __gnu_cxx____aligned_membuf_double_* p0);
double* std___List_node_double____M_valptr(struct std___List_node_double_* p0);
_Bool std____is_constant_evaluated();
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
void std____cxx11___List_base_double__std__allocator_double_______List_base(struct std____cxx11___List_base_double__std__allocator_double__* p0);
void std____new_allocator_std___List_node_double_______new_allocator_2(struct std____new_allocator_std___List_node_double__* p0);
void std__allocator_std___List_node_double_____allocator_2(struct std__allocator_std___List_node_double__* p0);
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* p0);
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* p0, struct std____detail___List_size* p1);
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* p0);
void std____allocated_ptr_std__allocator_std___List_node_double_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_double___* p0, struct std____allocated_ptr_std__allocator_std___List_node_double___* p1);
struct std___List_node_double_* std___List_node_double___std__to_address_std___List_node_double___(struct std___List_node_double_* p0);
struct std___List_node_double_* auto_std____to_address_std___List_node_double___(struct std___List_node_double_** p0);
struct std___List_node_double_* std____allocated_ptr_std__allocator_std___List_node_double_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_double___* p0);
_Bool std____allocated_ptr_std__allocator_std___List_node_double_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_double___* p0);
struct std____detail___List_node_base* std____detail___List_node_base___M_base(struct std____detail___List_node_base* p0);
void std____new_allocator_double_____new_allocator(struct std____new_allocator_double_* p0);
void std__allocator_std___List_node_double_____allocator_double_(struct std__allocator_std___List_node_double__* p0, struct std__allocator_double_* p1);
void std____cxx11___List_base_double__std__allocator_double______List_impl___List_impl(struct std____cxx11___List_base_double__std__allocator_double_____List_impl* p0, struct std__allocator_std___List_node_double__* p1);
void std____cxx11___List_base_double__std__allocator_double______List_base(struct std____cxx11___List_base_double__std__allocator_double__* p0, struct std__allocator_std___List_node_double__* p1);
void std__allocator_std___List_node_double______allocator(struct std__allocator_std___List_node_double__* p0);
double* _ZSt12construct_atIdJRdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(double* p0, double* p1);
void void_std__allocator_traits_std__allocator_std___List_node_double_______construct_double__double__(struct std__allocator_std___List_node_double__* p0, double* p1, double* p2);
struct std___List_node_double_* std___List_node_double___std____cxx11__list_double__std__allocator_double______M_create_node_double__(struct std____cxx11__list_double__std__allocator_double__* p0, double* p1);
void void_std____cxx11__list_double__std__allocator_double______M_insert_double__(struct std____cxx11__list_double__std__allocator_double__* p0, struct std___List_iterator_double_ p1, double* p2);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___List_iterator_double_* std___List_iterator_double___operator__(struct std___List_iterator_double_* p0);
double* std____cxx11__list_double__std__allocator_double_____back(struct std____cxx11__list_double__std__allocator_double__* p0);
double* double__std____cxx11__list_double__std__allocator_double_____emplace_back_double__(struct std____cxx11__list_double__std__allocator_double__* p0, double* p1);
void void_std____cxx11__list_double__std__allocator_double______M_initialize_dispatch_double__(struct std____cxx11__list_double__std__allocator_double__* p0, double* p1, double* p2, struct std____false_type p3);
void std____new_allocator_std___List_node_double_______new_allocator(struct std____new_allocator_std___List_node_double__* p0, struct std____new_allocator_std___List_node_double__* p1);
void std__allocator_std___List_node_double_____allocator(struct std__allocator_std___List_node_double__* p0, struct std__allocator_std___List_node_double__* p1);
struct std___List_const_iterator_double_* std___List_const_iterator_double___operator__(struct std___List_const_iterator_double_* p0);
long long_std____distance_double__2(struct std___List_const_iterator_double_ p0, struct std___List_const_iterator_double_ p1, struct std__input_iterator_tag p2);
long long_std____distance_double_(struct std___List_iterator_double_ p0, struct std___List_iterator_double_ p1, struct std__input_iterator_tag p2);
struct std__bidirectional_iterator_tag std__iterator_traits_std___List_iterator_double_____iterator_category_std____iterator_category_std___List_iterator_double___(struct std___List_iterator_double_* p0);
long std__iterator_traits_std___List_iterator_double_____difference_type_std__distance_std___List_iterator_double___(struct std___List_iterator_double_ p0, struct std___List_iterator_double_ p1);

// function: _Z12mycomparisondd
_Bool mycomparison(double v0, double v1) {
bb2:
  double first3;
  double second4;
  _Bool __retval5;
  first3 = v0;
  second4 = v1;
  double t6 = first3;
  int cast7 = (int)t6;
  double t8 = second4;
  int cast9 = (int)t8;
  _Bool c10 = ((cast7 < cast9)) ? 1 : 0;
  __retval5 = c10;
  _Bool t11 = __retval5;
  return t11;
}

// function: _ZNSt7__cxx114listIdSaIdEEC2Ev
void std____cxx11__list_double__std__allocator_double_____list(struct std____cxx11__list_double__std__allocator_double__* v12) {
bb13:
  struct std____cxx11__list_double__std__allocator_double__* this14;
  this14 = v12;
  struct std____cxx11__list_double__std__allocator_double__* t15 = this14;
  struct std____cxx11___List_base_double__std__allocator_double__* base16 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t15 + 0);
  std____cxx11___List_base_double__std__allocator_double______List_base_2(base16);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_double__* std____cxx11___List_base_double__std__allocator_double______M_get_Node_allocator(struct std____cxx11___List_base_double__std__allocator_double__* v17) {
bb18:
  struct std____cxx11___List_base_double__std__allocator_double__* this19;
  struct std__allocator_std___List_node_double__* __retval20;
  this19 = v17;
  struct std____cxx11___List_base_double__std__allocator_double__* t21 = this19;
  struct std__allocator_std___List_node_double__* base22 = (struct std__allocator_std___List_node_double__*)((char *)&(t21->_M_impl) + 0);
  __retval20 = base22;
  struct std__allocator_std___List_node_double__* t23 = __retval20;
  return t23;
}

// function: _ZNKSt15__new_allocatorISt10_List_nodeIdEE11_M_max_sizeEv
unsigned long std____new_allocator_std___List_node_double______M_max_size___const(struct std____new_allocator_std___List_node_double__* v24) {
bb25:
  struct std____new_allocator_std___List_node_double__* this26;
  unsigned long __retval27;
  this26 = v24;
  struct std____new_allocator_std___List_node_double__* t28 = this26;
  unsigned long c29 = 9223372036854775807;
  unsigned long c30 = 24;
  unsigned long b31 = c29 / c30;
  __retval27 = b31;
  unsigned long t32 = __retval27;
  return t32;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIdEE8allocateEmPKv
struct std___List_node_double_* std____new_allocator_std___List_node_double_____allocate(struct std____new_allocator_std___List_node_double__* v33, unsigned long v34, void* v35) {
bb36:
  struct std____new_allocator_std___List_node_double__* this37;
  unsigned long __n38;
  void* unnamed39;
  struct std___List_node_double_* __retval40;
  this37 = v33;
  __n38 = v34;
  unnamed39 = v35;
  struct std____new_allocator_std___List_node_double__* t41 = this37;
    unsigned long t42 = __n38;
    unsigned long r43 = std____new_allocator_std___List_node_double______M_max_size___const(t41);
    _Bool c44 = ((t42 > r43)) ? 1 : 0;
    if (c44) {
        unsigned long t45 = __n38;
        unsigned long c46 = -1;
        unsigned long c47 = 24;
        unsigned long b48 = c46 / c47;
        _Bool c49 = ((t45 > b48)) ? 1 : 0;
        if (c49) {
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
    unsigned long c50 = 8;
    unsigned long c51 = 16;
    _Bool c52 = ((c50 > c51)) ? 1 : 0;
    if (c52) {
      unsigned long __al53;
      unsigned long c54 = 8;
      __al53 = c54;
      unsigned long t55 = __n38;
      unsigned long c56 = 24;
      unsigned long b57 = t55 * c56;
      unsigned long t58 = __al53;
      void* r59 = operator_new_2(b57, t58);
      if (__cir_exc_active) {
        struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
        return __cir_eh_ret;
      }
      struct std___List_node_double_* cast60 = (struct std___List_node_double_*)r59;
      __retval40 = cast60;
      struct std___List_node_double_* t61 = __retval40;
      return t61;
    }
  unsigned long t62 = __n38;
  unsigned long c63 = 24;
  unsigned long b64 = t62 * c63;
  void* r65 = operator_new(b64);
  if (__cir_exc_active) {
    struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
    return __cir_eh_ret;
  }
  struct std___List_node_double_* cast66 = (struct std___List_node_double_*)r65;
  __retval40 = cast66;
  struct std___List_node_double_* t67 = __retval40;
  return t67;
}

// function: _ZNSaISt10_List_nodeIdEE8allocateEm
struct std___List_node_double_* std__allocator_std___List_node_double_____allocate(struct std__allocator_std___List_node_double__* v68, unsigned long v69) {
bb70:
  struct std__allocator_std___List_node_double__* this71;
  unsigned long __n72;
  struct std___List_node_double_* __retval73;
  this71 = v68;
  __n72 = v69;
  struct std__allocator_std___List_node_double__* t74 = this71;
    _Bool r75 = std____is_constant_evaluated();
    if (r75) {
        unsigned long t76 = __n72;
        unsigned long c77 = 24;
        unsigned long ovr78;
        _Bool ovf79 = __builtin_mul_overflow(t76, c77, &ovr78);
        __n72 = ovr78;
        if (ovf79) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t80 = __n72;
      void* r81 = operator_new(t80);
      if (__cir_exc_active) {
        struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
        return __cir_eh_ret;
      }
      struct std___List_node_double_* cast82 = (struct std___List_node_double_*)r81;
      __retval73 = cast82;
      struct std___List_node_double_* t83 = __retval73;
      return t83;
    }
  struct std____new_allocator_std___List_node_double__* base84 = (struct std____new_allocator_std___List_node_double__*)((char *)t74 + 0);
  unsigned long t85 = __n72;
  void* c86 = ((void*)0);
  struct std___List_node_double_* r87 = std____new_allocator_std___List_node_double_____allocate(base84, t85, c86);
  if (__cir_exc_active) {
    struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
    return __cir_eh_ret;
  }
  __retval73 = r87;
  struct std___List_node_double_* t88 = __retval73;
  return t88;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIdEEE8allocateERS2_m
struct std___List_node_double_* std__allocator_traits_std__allocator_std___List_node_double_______allocate(struct std__allocator_std___List_node_double__* v89, unsigned long v90) {
bb91:
  struct std__allocator_std___List_node_double__* __a92;
  unsigned long __n93;
  struct std___List_node_double_* __retval94;
  __a92 = v89;
  __n93 = v90;
  struct std__allocator_std___List_node_double__* t95 = __a92;
  unsigned long t96 = __n93;
  struct std___List_node_double_* r97 = std__allocator_std___List_node_double_____allocate(t95, t96);
  if (__cir_exc_active) {
    struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
    return __cir_eh_ret;
  }
  __retval94 = r97;
  struct std___List_node_double_* t98 = __retval94;
  return t98;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIdEEEC2ERS2_PS1_
void std____allocated_ptr_std__allocator_std___List_node_double_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_double___* v99, struct std__allocator_std___List_node_double__* v100, struct std___List_node_double_* v101) {
bb102:
  struct std____allocated_ptr_std__allocator_std___List_node_double___* this103;
  struct std__allocator_std___List_node_double__* __a104;
  struct std___List_node_double_* __ptr105;
  this103 = v99;
  __a104 = v100;
  __ptr105 = v101;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t106 = this103;
  struct std__allocator_std___List_node_double__* t107 = __a104;
  t106->_M_alloc = t107;
  struct std___List_node_double_* t108 = __ptr105;
  t106->_M_ptr = t108;
  return;
}

// function: _ZSt18__allocate_guardedISaISt10_List_nodeIdEEESt15__allocated_ptrIT_ERS4_
struct std____allocated_ptr_std__allocator_std___List_node_double___ std____allocated_ptr_std__allocator_std___List_node_double______std____allocate_guarded_std__allocator_std___List_node_double_____(struct std__allocator_std___List_node_double__* v109) {
bb110:
  struct std__allocator_std___List_node_double__* __a111;
  struct std____allocated_ptr_std__allocator_std___List_node_double___ __retval112;
  __a111 = v109;
  struct std__allocator_std___List_node_double__* t113 = __a111;
  struct std__allocator_std___List_node_double__* t114 = __a111;
  unsigned long c115 = 1;
  struct std___List_node_double_* r116 = std__allocator_traits_std__allocator_std___List_node_double_______allocate(t114, c115);
  if (__cir_exc_active) {
    struct std____allocated_ptr_std__allocator_std___List_node_double___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std____allocated_ptr_std__allocator_std___List_node_double_________allocated_ptr_2(&__retval112, t113, r116);
  struct std____allocated_ptr_std__allocator_std___List_node_double___ t117 = __retval112;
  return t117;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIdEEEC2EOSt15__allocated_ptrIS2_E
void std____allocated_obj_std__allocator_std___List_node_double_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_double___* v118, struct std____allocated_ptr_std__allocator_std___List_node_double___* v119) {
bb120:
  struct std____allocated_obj_std__allocator_std___List_node_double___* this121;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* __ptr122;
  this121 = v118;
  __ptr122 = v119;
  struct std____allocated_obj_std__allocator_std___List_node_double___* t123 = this121;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* base124 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t123 + 0);
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t125 = __ptr122;
  std____allocated_ptr_std__allocator_std___List_node_double_________allocated_ptr(base124, t125);
    struct std____allocated_ptr_std__allocator_std___List_node_double___* base126 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t123 + 0);
    struct std___List_node_double_* r127 = std____allocated_ptr_std__allocator_std___List_node_double_______get___const(base126);
    if (__cir_exc_active) {
      {
        struct std____allocated_ptr_std__allocator_std___List_node_double___* base128 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t123 + 0);
        std____allocated_ptr_std__allocator_std___List_node_double__________allocated_ptr(base128);
      }
      return;
    }
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIdEEED2Ev
void std____allocated_ptr_std__allocator_std___List_node_double__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_double___* v129) {
bb130:
  struct std____allocated_ptr_std__allocator_std___List_node_double___* this131;
  this131 = v129;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t132 = this131;
    struct std___List_node_double_* t133 = t132->_M_ptr;
    struct std___List_node_double_* c134 = ((void*)0);
    _Bool c135 = ((t133 != c134)) ? 1 : 0;
    if (c135) {
      struct std__allocator_std___List_node_double__* t136 = t132->_M_alloc;
      struct std___List_node_double_* t137 = t132->_M_ptr;
      unsigned long c138 = 1;
      std__allocator_traits_std__allocator_std___List_node_double_______deallocate(t136, t137, c138);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt22__allocate_guarded_objISaISt10_List_nodeIdEEESt15__allocated_objIT_ERS4_
struct std____allocated_obj_std__allocator_std___List_node_double___ std____allocated_obj_std__allocator_std___List_node_double______std____allocate_guarded_obj_std__allocator_std___List_node_double_____(struct std__allocator_std___List_node_double__* v139) {
bb140:
  struct std__allocator_std___List_node_double__* __a141;
  struct std____allocated_obj_std__allocator_std___List_node_double___ __retval142;
  struct std____allocated_ptr_std__allocator_std___List_node_double___ ref_tmp0143;
  __a141 = v139;
  struct std__allocator_std___List_node_double__* t144 = __a141;
  struct std____allocated_ptr_std__allocator_std___List_node_double___ r145 = std____allocated_ptr_std__allocator_std___List_node_double______std____allocate_guarded_std__allocator_std___List_node_double_____(t144);
  if (__cir_exc_active) {
    struct std____allocated_obj_std__allocator_std___List_node_double___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0143 = r145;
    std____allocated_obj_std__allocator_std___List_node_double_________allocated_obj(&__retval142, &ref_tmp0143);
    if (__cir_exc_active) {
      {
        std____allocated_ptr_std__allocator_std___List_node_double__________allocated_ptr(&ref_tmp0143);
      }
      struct std____allocated_obj_std__allocator_std___List_node_double___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
  {
    std____allocated_ptr_std__allocator_std___List_node_double__________allocated_ptr(&ref_tmp0143);
  }
  struct std____allocated_obj_std__allocator_std___List_node_double___ t146 = __retval142;
  return t146;
}

// function: _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
double* _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(double* v147, double* v148) {
bb149:
  double* __location150;
  double* __args151;
  double* __retval152;
  void* __loc153;
  __location150 = v147;
  __args151 = v148;
  double* t154 = __location150;
  void* cast155 = (void*)t154;
  __loc153 = cast155;
    void* t156 = __loc153;
    double* cast157 = (double*)t156;
    double* t158 = __args151;
    double t159 = *t158;
    *cast157 = t159;
    __retval152 = cast157;
    double* t160 = __retval152;
    return t160;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIdEEE9constructIdJdEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_double_______construct_double__double_(struct std__allocator_std___List_node_double__* v161, double* v162, double* v163) {
bb164:
  struct std__allocator_std___List_node_double__* __a165;
  double* __p166;
  double* __args167;
  __a165 = v161;
  __p166 = v162;
  __args167 = v163;
  double* t168 = __p166;
  double* t169 = __args167;
  double* r170 = _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t168, t169);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIdEEEptEv
struct std___List_node_double_* std____allocated_obj_std__allocator_std___List_node_double_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_double___* v171) {
bb172:
  struct std____allocated_obj_std__allocator_std___List_node_double___* this173;
  struct std___List_node_double_* __retval174;
  this173 = v171;
  struct std____allocated_obj_std__allocator_std___List_node_double___* t175 = this173;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* base176 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t175 + 0);
  struct std___List_node_double_* r177 = std____allocated_ptr_std__allocator_std___List_node_double_______get___const(base176);
  if (__cir_exc_active) {
    struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
    return __cir_eh_ret;
  }
  __retval174 = r177;
  struct std___List_node_double_* t178 = __retval174;
  return t178;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIdEDnET_RS3_OT0_
struct std___List_node_double_* std___List_node_double___std____exchange_std___List_node_double____decltype_nullptr___std___List_node_double_____decltype(struct std___List_node_double_** v179, void** v180) {
bb181:
  struct std___List_node_double_** __obj182;
  void** __new_val183;
  struct std___List_node_double_* __retval184;
  struct std___List_node_double_* __old_val185;
  __obj182 = v179;
  __new_val183 = v180;
  struct std___List_node_double_** t186 = __obj182;
  struct std___List_node_double_* t187 = *t186;
  __old_val185 = t187;
  void** t188 = __new_val183;
  struct std___List_node_double_* c189 = ((void*)0);
  struct std___List_node_double_** t190 = __obj182;
  *t190 = c189;
  struct std___List_node_double_* t191 = __old_val185;
  __retval184 = t191;
  struct std___List_node_double_* t192 = __retval184;
  return t192;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIdEEE7releaseEv
struct std___List_node_double_* std____allocated_ptr_std__allocator_std___List_node_double_______release(struct std____allocated_ptr_std__allocator_std___List_node_double___* v193) {
bb194:
  struct std____allocated_ptr_std__allocator_std___List_node_double___* this195;
  struct std___List_node_double_* __retval196;
  void* ref_tmp0197;
  this195 = v193;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t198 = this195;
  void* c199 = ((void*)0);
  ref_tmp0197 = c199;
  struct std___List_node_double_* r200 = std___List_node_double___std____exchange_std___List_node_double____decltype_nullptr___std___List_node_double_____decltype(&t198->_M_ptr, &ref_tmp0197);
  if (__cir_exc_active) {
    struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
    return __cir_eh_ret;
  }
  __retval196 = r200;
  struct std___List_node_double_* t201 = __retval196;
  return t201;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIdEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_double__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_double___* v202) {
bb203:
  struct std____allocated_obj_std__allocator_std___List_node_double___* this204;
  this204 = v202;
  struct std____allocated_obj_std__allocator_std___List_node_double___* t205 = this204;
      struct std____allocated_ptr_std__allocator_std___List_node_double___* base206 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t205 + 0);
      _Bool r207 = std____allocated_ptr_std__allocator_std___List_node_double_______operator_bool___const(base206);
      if (r207) {
        struct std____allocated_ptr_std__allocator_std___List_node_double___* base208 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t205 + 0);
        struct std___List_node_double_* r209 = std____allocated_ptr_std__allocator_std___List_node_double_______get___const(base208);
        if (__cir_exc_active) {
          {
            struct std____allocated_ptr_std__allocator_std___List_node_double___* base210 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t205 + 0);
            std____allocated_ptr_std__allocator_std___List_node_double__________allocated_ptr(base210);
          }
          return;
        }
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_double___* base211 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)t205 + 0);
    std____allocated_ptr_std__allocator_std___List_node_double__________allocated_ptr(base211);
  }
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE14_M_create_nodeIJdEEEPSt10_List_nodeIdEDpOT_
struct std___List_node_double_* std___List_node_double___std____cxx11__list_double__std__allocator_double______M_create_node_double_(struct std____cxx11__list_double__std__allocator_double__* v212, double* v213) {
bb214:
  struct std____cxx11__list_double__std__allocator_double__* this215;
  double* __args216;
  struct std___List_node_double_* __retval217;
  struct std__allocator_std___List_node_double__* __alloc218;
  struct std____allocated_obj_std__allocator_std___List_node_double___ __guard219;
  this215 = v212;
  __args216 = v213;
  struct std____cxx11__list_double__std__allocator_double__* t220 = this215;
  struct std____cxx11___List_base_double__std__allocator_double__* base221 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t220 + 0);
  struct std__allocator_std___List_node_double__* r222 = std____cxx11___List_base_double__std__allocator_double______M_get_Node_allocator(base221);
  __alloc218 = r222;
  struct std__allocator_std___List_node_double__* t223 = __alloc218;
  struct std____allocated_obj_std__allocator_std___List_node_double___ r224 = std____allocated_obj_std__allocator_std___List_node_double______std____allocate_guarded_obj_std__allocator_std___List_node_double_____(t223);
  if (__cir_exc_active) {
    struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
    return __cir_eh_ret;
  }
  __guard219 = r224;
    struct std__allocator_std___List_node_double__* t225 = __alloc218;
    struct std___List_node_double_* r226 = std____allocated_obj_std__allocator_std___List_node_double_______operator_____const(&__guard219);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_double__________allocated_obj(&__guard219);
      }
      struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
      return __cir_eh_ret;
    }
    double* r227 = std___List_node_double____M_valptr(r226);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_double__________allocated_obj(&__guard219);
      }
      struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
      return __cir_eh_ret;
    }
    double* t228 = __args216;
    void_std__allocator_traits_std__allocator_std___List_node_double_______construct_double__double_(t225, r227, t228);
    struct std____allocated_ptr_std__allocator_std___List_node_double___* base229 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)&(__guard219) + 0);
    struct std___List_node_double_* r230 = std____allocated_ptr_std__allocator_std___List_node_double_______release(base229);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_double__________allocated_obj(&__guard219);
      }
      struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
      return __cir_eh_ret;
    }
    __retval217 = r230;
    struct std___List_node_double_* t231 = __retval217;
    struct std___List_node_double_* ret_val232 = t231;
    {
      std____allocated_obj_std__allocator_std___List_node_double__________allocated_obj(&__guard219);
    }
    return ret_val232;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE11_M_inc_sizeEm
void std____cxx11___List_base_double__std__allocator_double______M_inc_size(struct std____cxx11___List_base_double__std__allocator_double__* v233, unsigned long v234) {
bb235:
  struct std____cxx11___List_base_double__std__allocator_double__* this236;
  unsigned long __n237;
  this236 = v233;
  __n237 = v234;
  struct std____cxx11___List_base_double__std__allocator_double__* t238 = this236;
  unsigned long t239 = __n237;
  struct std____detail___List_size* base240 = (struct std____detail___List_size*)((char *)&(t238->_M_impl._M_node) + 16);
  unsigned long t241 = base240->_M_size;
  unsigned long b242 = t241 + t239;
  base240->_M_size = b242;
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE9_M_insertIJdEEEvSt14_List_iteratorIdEDpOT_
void void_std____cxx11__list_double__std__allocator_double______M_insert_double_(struct std____cxx11__list_double__std__allocator_double__* v243, struct std___List_iterator_double_ v244, double* v245) {
bb246:
  struct std____cxx11__list_double__std__allocator_double__* this247;
  struct std___List_iterator_double_ __position248;
  double* __args249;
  struct std___List_node_double_* __tmp250;
  this247 = v243;
  __position248 = v244;
  __args249 = v245;
  struct std____cxx11__list_double__std__allocator_double__* t251 = this247;
  double* t252 = __args249;
  struct std___List_node_double_* r253 = std___List_node_double___std____cxx11__list_double__std__allocator_double______M_create_node_double_(t251, t252);
  if (__cir_exc_active) {
    return;
  }
  __tmp250 = r253;
  struct std___List_node_double_* t254 = __tmp250;
  struct std____detail___List_node_base* base255 = (struct std____detail___List_node_base*)((char *)t254 + 0);
  struct std____detail___List_node_base* t256 = __position248._M_node;
  std____detail___List_node_base___M_hook(base255, t256);
  struct std____cxx11___List_base_double__std__allocator_double__* base257 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t251 + 0);
  unsigned long c258 = 1;
  std____cxx11___List_base_double__std__allocator_double______M_inc_size(base257, c258);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt14_List_iteratorIdEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_double____List_iterator(struct std___List_iterator_double_* v259, struct std____detail___List_node_base* v260) {
bb261:
  struct std___List_iterator_double_* this262;
  struct std____detail___List_node_base* __x263;
  this262 = v259;
  __x263 = v260;
  struct std___List_iterator_double_* t264 = this262;
  struct std____detail___List_node_base* t265 = __x263;
  t264->_M_node = t265;
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE3endEv
struct std___List_iterator_double_ std____cxx11__list_double__std__allocator_double_____end(struct std____cxx11__list_double__std__allocator_double__* v266) {
bb267:
  struct std____cxx11__list_double__std__allocator_double__* this268;
  struct std___List_iterator_double_ __retval269;
  this268 = v266;
  struct std____cxx11__list_double__std__allocator_double__* t270 = this268;
  struct std____cxx11___List_base_double__std__allocator_double__* base271 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t270 + 0);
  struct std____detail___List_node_base* r272 = std____detail___List_node_header___M_base(&base271->_M_impl._M_node);
  if (__cir_exc_active) {
    struct std___List_iterator_double_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___List_iterator_double____List_iterator(&__retval269, r272);
  struct std___List_iterator_double_ t273 = __retval269;
  return t273;
}

// function: _ZNSt7__cxx114listIdSaIdEE9push_backEOd
void std____cxx11__list_double__std__allocator_double_____push_back(struct std____cxx11__list_double__std__allocator_double__* v274, double* v275) {
bb276:
  struct std____cxx11__list_double__std__allocator_double__* this277;
  double* __x278;
  struct std___List_iterator_double_ agg_tmp0279;
  this277 = v274;
  __x278 = v275;
  struct std____cxx11__list_double__std__allocator_double__* t280 = this277;
  struct std___List_iterator_double_ r281 = std____cxx11__list_double__std__allocator_double_____end(t280);
  agg_tmp0279 = r281;
  double* t282 = __x278;
  struct std___List_iterator_double_ t283 = agg_tmp0279;
  void_std____cxx11__list_double__std__allocator_double______M_insert_double_(t280, t283, t282);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v284) {
bb285:
  struct std____detail___List_node_base* this286;
  struct std____detail___List_node_base* __retval287;
  this286 = v284;
  struct std____detail___List_node_base* t288 = this286;
  __retval287 = t288;
  struct std____detail___List_node_base* t289 = __retval287;
  return t289;
}

// function: _ZNKSt7__cxx114listIdSaIdEE5emptyEv
_Bool std____cxx11__list_double__std__allocator_double_____empty___const(struct std____cxx11__list_double__std__allocator_double__* v290) {
bb291:
  struct std____cxx11__list_double__std__allocator_double__* this292;
  _Bool __retval293;
  this292 = v290;
  struct std____cxx11__list_double__std__allocator_double__* t294 = this292;
  struct std____cxx11___List_base_double__std__allocator_double__* base295 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t294 + 0);
  struct std____detail___List_node_base* base296 = (struct std____detail___List_node_base*)((char *)&(base295->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t297 = base296->_M_next;
  struct std____cxx11___List_base_double__std__allocator_double__* base298 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t294 + 0);
  struct std____detail___List_node_base* base299 = (struct std____detail___List_node_base*)((char *)&(base298->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r300 = std____detail___List_node_base___M_base___const(base299);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool c301 = ((t297 == r300)) ? 1 : 0;
  __retval293 = c301;
  _Bool t302 = __retval293;
  return t302;
}

// function: _ZSteqRKSt14_List_iteratorIdES2_
_Bool std__operator___2(struct std___List_iterator_double_* v303, struct std___List_iterator_double_* v304) {
bb305:
  struct std___List_iterator_double_* __x306;
  struct std___List_iterator_double_* __y307;
  _Bool __retval308;
  __x306 = v303;
  __y307 = v304;
  struct std___List_iterator_double_* t309 = __x306;
  struct std____detail___List_node_base* t310 = t309->_M_node;
  struct std___List_iterator_double_* t311 = __y307;
  struct std____detail___List_node_base* t312 = t311->_M_node;
  _Bool c313 = ((t310 == t312)) ? 1 : 0;
  __retval308 = c313;
  _Bool t314 = __retval308;
  return t314;
}

// function: _ZNSt7__cxx114listIdSaIdEE5beginEv
struct std___List_iterator_double_ std____cxx11__list_double__std__allocator_double_____begin(struct std____cxx11__list_double__std__allocator_double__* v315) {
bb316:
  struct std____cxx11__list_double__std__allocator_double__* this317;
  struct std___List_iterator_double_ __retval318;
  this317 = v315;
  struct std____cxx11__list_double__std__allocator_double__* t319 = this317;
  struct std____cxx11___List_base_double__std__allocator_double__* base320 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t319 + 0);
  struct std____detail___List_node_base* base321 = (struct std____detail___List_node_base*)((char *)&(base320->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t322 = base321->_M_next;
  std___List_iterator_double____List_iterator(&__retval318, t322);
  struct std___List_iterator_double_ t323 = __retval318;
  return t323;
}

// function: _ZNSt14_List_iteratorIdEppEv
struct std___List_iterator_double_* std___List_iterator_double___operator___2(struct std___List_iterator_double_* v324) {
bb325:
  struct std___List_iterator_double_* this326;
  struct std___List_iterator_double_* __retval327;
  this326 = v324;
  struct std___List_iterator_double_* t328 = this326;
  struct std____detail___List_node_base* t329 = t328->_M_node;
  struct std____detail___List_node_base* t330 = t329->_M_next;
  t328->_M_node = t330;
  __retval327 = t328;
  struct std___List_iterator_double_* t331 = __retval327;
  return t331;
}

// function: _ZNSt6__list13_Scratch_listINSt8__detail15_List_node_baseEEC2Ev
void std____list___Scratch_list_std____detail___List_node_base____Scratch_list(struct std____list___Scratch_list_std____detail___List_node_base_* v332) {
bb333:
  struct std____list___Scratch_list_std____detail___List_node_base_* this334;
  this334 = v332;
  struct std____list___Scratch_list_std____detail___List_node_base_* t335 = this334;
  struct std____detail___List_node_base* base336 = (struct std____detail___List_node_base*)((char *)t335 + 0);
  struct std____detail___List_node_base* base337 = (struct std____detail___List_node_base*)((char *)t335 + 0);
  struct std____detail___List_node_base* r338 = std____detail___List_node_base___M_base(base337);
  if (__cir_exc_active) {
    return;
  }
  struct std____detail___List_node_base* base339 = (struct std____detail___List_node_base*)((char *)t335 + 0);
  base339->_M_prev = r338;
  struct std____detail___List_node_base* base340 = (struct std____detail___List_node_base*)((char *)t335 + 0);
  base340->_M_next = r338;
  return;
}

// function: _ZNSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE11_M_take_oneEPS2_
void std____list___Scratch_list_std____detail___List_node_base____M_take_one(struct std____list___Scratch_list_std____detail___List_node_base_* v341, struct std____detail___List_node_base* v342) {
bb343:
  struct std____list___Scratch_list_std____detail___List_node_base_* this344;
  struct std____detail___List_node_base* __i345;
  this344 = v341;
  __i345 = v342;
  struct std____list___Scratch_list_std____detail___List_node_base_* t346 = this344;
  struct std____detail___List_node_base* base347 = (struct std____detail___List_node_base*)((char *)t346 + 0);
  struct std____detail___List_node_base* t348 = __i345;
  struct std____detail___List_node_base* t349 = __i345;
  struct std____detail___List_node_base* t350 = t349->_M_next;
  std____detail___List_node_base___M_transfer(base347, t348, t350);
  return;
}

// function: _ZNKSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE5emptyEv
_Bool std____list___Scratch_list_std____detail___List_node_base___empty___const(struct std____list___Scratch_list_std____detail___List_node_base_* v351) {
bb352:
  struct std____list___Scratch_list_std____detail___List_node_base_* this353;
  _Bool __retval354;
  this353 = v351;
  struct std____list___Scratch_list_std____detail___List_node_base_* t355 = this353;
  struct std____detail___List_node_base* base356 = (struct std____detail___List_node_base*)((char *)t355 + 0);
  struct std____detail___List_node_base* t357 = base356->_M_next;
  struct std____detail___List_node_base* base358 = (struct std____detail___List_node_base*)((char *)t355 + 0);
  struct std____detail___List_node_base* r359 = std____detail___List_node_base___M_base___const(base358);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool c360 = ((t357 == r359)) ? 1 : 0;
  __retval354 = c360;
  _Bool t361 = __retval354;
  return t361;
}

// function: _ZNKSt14_List_iteratorIdEdeEv
double* std___List_iterator_double___operator____const(struct std___List_iterator_double_* v362) {
bb363:
  struct std___List_iterator_double_* this364;
  double* __retval365;
  this364 = v362;
  struct std___List_iterator_double_* t366 = this364;
  struct std____detail___List_node_base* t367 = t366->_M_node;
  struct std___List_node_double_* derived368 = ((t367) ? (struct std___List_node_double_*)((char *)t367 - 0) : (struct std___List_node_double_*)0);
  double* r369 = std___List_node_double____M_valptr(derived368);
  if (__cir_exc_active) {
    double* __cir_eh_ret = (double*)0;
    return __cir_eh_ret;
  }
  __retval365 = r369;
  double* t370 = __retval365;
  return t370;
}

// function: _ZNKSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE8_Ptr_cmpISt14_List_iteratorIdEvEclEPS2_S8_
_Bool std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void___operator___std____detail___List_node_base___std____detail___List_node_base___const(struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_* v371, struct std____detail___List_node_base* v372, struct std____detail___List_node_base* v373) {
bb374:
  struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_* this375;
  struct std____detail___List_node_base* __lhs376;
  struct std____detail___List_node_base* __rhs377;
  _Bool __retval378;
  struct std___List_iterator_double_ ref_tmp0379;
  struct std___List_iterator_double_ ref_tmp1380;
  this375 = v371;
  __lhs376 = v372;
  __rhs377 = v373;
  struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_* t381 = this375;
  struct std____detail___List_node_base* t382 = __lhs376;
  std___List_iterator_double____List_iterator(&ref_tmp0379, t382);
  double* r383 = std___List_iterator_double___operator____const(&ref_tmp0379);
  double t384 = *r383;
  struct std____detail___List_node_base* t385 = __rhs377;
  std___List_iterator_double____List_iterator(&ref_tmp1380, t385);
  double* r386 = std___List_iterator_double___operator____const(&ref_tmp1380);
  double t387 = *r386;
  _Bool c388 = ((t384 < t387)) ? 1 : 0;
  __retval378 = c388;
  _Bool t389 = __retval378;
  return t389;
}

// function: _ZNSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE5mergeINS3_8_Ptr_cmpISt14_List_iteratorIdEvEEEEvRS2_T_
void void_std____list___Scratch_list_std____detail___List_node_base___merge_std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void___(struct std____list___Scratch_list_std____detail___List_node_base_* v390, struct std____detail___List_node_base* v391, struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_ v392) {
bb393:
  struct std____list___Scratch_list_std____detail___List_node_base_* this394;
  struct std____detail___List_node_base* __x395;
  struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_ __comp396;
  struct std____detail___List_node_base* __first1397;
  struct std____detail___List_node_base* __last1398;
  struct std____detail___List_node_base* __first2399;
  struct std____detail___List_node_base* __last2400;
  this394 = v390;
  __x395 = v391;
  __comp396 = v392;
  struct std____list___Scratch_list_std____detail___List_node_base_* t401 = this394;
  struct std____detail___List_node_base* base402 = (struct std____detail___List_node_base*)((char *)t401 + 0);
  struct std____detail___List_node_base* t403 = base402->_M_next;
  __first1397 = t403;
  struct std____detail___List_node_base* base404 = (struct std____detail___List_node_base*)((char *)t401 + 0);
  struct std____detail___List_node_base* r405 = std____detail___List_node_base___M_base(base404);
  if (__cir_exc_active) {
    return;
  }
  __last1398 = r405;
  struct std____detail___List_node_base* t406 = __x395;
  struct std____detail___List_node_base* t407 = t406->_M_next;
  __first2399 = t407;
  struct std____detail___List_node_base* t408 = __x395;
  struct std____detail___List_node_base* r409 = std____detail___List_node_base___M_base(t408);
  if (__cir_exc_active) {
    return;
  }
  __last2400 = r409;
    while (1) {
      struct std____detail___List_node_base* t410 = __first1397;
      struct std____detail___List_node_base* t411 = __last1398;
      _Bool c412 = ((t410 != t411)) ? 1 : 0;
      _Bool ternary413;
      if (c412) {
        struct std____detail___List_node_base* t414 = __first2399;
        struct std____detail___List_node_base* t415 = __last2400;
        _Bool c416 = ((t414 != t415)) ? 1 : 0;
        ternary413 = (_Bool)c416;
      } else {
        _Bool c417 = 0;
        ternary413 = (_Bool)c417;
      }
      if (!ternary413) break;
          struct std____detail___List_node_base* t418 = __first2399;
          struct std____detail___List_node_base* t419 = __first1397;
          _Bool r420 = std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void___operator___std____detail___List_node_base___std____detail___List_node_base___const(&__comp396, t418, t419);
          if (__cir_exc_active) {
            return;
          }
          if (r420) {
            struct std____detail___List_node_base* __next421;
            struct std____detail___List_node_base* t422 = __first2399;
            struct std____detail___List_node_base* t423 = t422->_M_next;
            __next421 = t423;
            struct std____detail___List_node_base* t424 = __first1397;
            struct std____detail___List_node_base* t425 = __first2399;
            struct std____detail___List_node_base* t426 = __next421;
            std____detail___List_node_base___M_transfer(t424, t425, t426);
            struct std____detail___List_node_base* t427 = __next421;
            __first2399 = t427;
          } else {
            struct std____detail___List_node_base* t428 = __first1397;
            struct std____detail___List_node_base* t429 = t428->_M_next;
            __first1397 = t429;
          }
    }
    struct std____detail___List_node_base* t430 = __first2399;
    struct std____detail___List_node_base* t431 = __last2400;
    _Bool c432 = ((t430 != t431)) ? 1 : 0;
    if (c432) {
      struct std____detail___List_node_base* base433 = (struct std____detail___List_node_base*)((char *)t401 + 0);
      struct std____detail___List_node_base* t434 = __first2399;
      struct std____detail___List_node_base* t435 = __last2400;
      std____detail___List_node_base___M_transfer(base433, t434, t435);
    }
  return;
}

// function: _ZNSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE4swapERS2_
void std____list___Scratch_list_std____detail___List_node_base___swap(struct std____list___Scratch_list_std____detail___List_node_base_* v436, struct std____detail___List_node_base* v437) {
bb438:
  struct std____list___Scratch_list_std____detail___List_node_base_* this439;
  struct std____detail___List_node_base* __l440;
  this439 = v436;
  __l440 = v437;
  struct std____list___Scratch_list_std____detail___List_node_base_* t441 = this439;
  struct std____detail___List_node_base* base442 = (struct std____detail___List_node_base*)((char *)t441 + 0);
  struct std____detail___List_node_base* t443 = __l440;
  std____detail___List_node_base__swap(base442, t443);
  return;
}

// function: _ZNSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE10_M_put_allEPS2_
void std____list___Scratch_list_std____detail___List_node_base____M_put_all(struct std____list___Scratch_list_std____detail___List_node_base_* v444, struct std____detail___List_node_base* v445) {
bb446:
  struct std____list___Scratch_list_std____detail___List_node_base_* this447;
  struct std____detail___List_node_base* __i448;
  this447 = v444;
  __i448 = v445;
  struct std____list___Scratch_list_std____detail___List_node_base_* t449 = this447;
    _Bool r450 = std____list___Scratch_list_std____detail___List_node_base___empty___const(t449);
    if (__cir_exc_active) {
      return;
    }
    _Bool u451 = !r450;
    if (u451) {
      struct std____detail___List_node_base* t452 = __i448;
      struct std____detail___List_node_base* base453 = (struct std____detail___List_node_base*)((char *)t449 + 0);
      struct std____detail___List_node_base* t454 = base453->_M_next;
      struct std____detail___List_node_base* base455 = (struct std____detail___List_node_base*)((char *)t449 + 0);
      struct std____detail___List_node_base* r456 = std____detail___List_node_base___M_base(base455);
      if (__cir_exc_active) {
        return;
      }
      std____detail___List_node_base___M_transfer(t452, t454, r456);
    }
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE4sortEv
void std____cxx11__list_double__std__allocator_double_____sort(struct std____cxx11__list_double__std__allocator_double__* v457) {
bb458:
  struct std____cxx11__list_double__std__allocator_double__* this459;
  this459 = v457;
  struct std____cxx11__list_double__std__allocator_double__* t460 = this459;
    _Bool r461 = std____cxx11__list_double__std__allocator_double_____empty___const(t460);
    _Bool ternary462;
    if (r461) {
      _Bool c463 = 1;
      ternary462 = (_Bool)c463;
    } else {
      struct std___List_iterator_double_ ref_tmp0464;
      struct std___List_iterator_double_ ref_tmp1465;
      struct std___List_iterator_double_ r466 = std____cxx11__list_double__std__allocator_double_____begin(t460);
      ref_tmp0464 = r466;
      struct std___List_iterator_double_* r467 = std___List_iterator_double___operator___2(&ref_tmp0464);
      struct std___List_iterator_double_ r468 = std____cxx11__list_double__std__allocator_double_____end(t460);
      ref_tmp1465 = r468;
      _Bool r469 = std__operator___2(r467, &ref_tmp1465);
      ternary462 = (_Bool)r469;
    }
    if (ternary462) {
      return;
    }
    struct std____list___Scratch_list_std____detail___List_node_base_ __carry470;
    struct std____list___Scratch_list_std____detail___List_node_base_ __tmp471[64];
    struct std____list___Scratch_list_std____detail___List_node_base_* __fill472;
    struct std____list___Scratch_list_std____detail___List_node_base_* __counter473;
    struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_ __ptr_comp474;
    std____list___Scratch_list_std____detail___List_node_base____Scratch_list(&__carry470);
    if (__cir_exc_active) {
      return;
    }
    unsigned long c475 = 64;
    struct std____list___Scratch_list_std____detail___List_node_base_* cast476 = (struct std____list___Scratch_list_std____detail___List_node_base_*)&(__tmp471);
    struct std____list___Scratch_list_std____detail___List_node_base_* ptr477 = &(cast476)[c475];
    struct std____list___Scratch_list_std____detail___List_node_base_* __array_idx478;
    __array_idx478 = cast476;
    do {
      struct std____list___Scratch_list_std____detail___List_node_base_* t479 = __array_idx478;
      std____list___Scratch_list_std____detail___List_node_base____Scratch_list(t479);
      if (__cir_exc_active) {
        return;
      }
      unsigned long c480 = 1;
      struct std____list___Scratch_list_std____detail___List_node_base_* ptr481 = &(t479)[c480];
      __array_idx478 = ptr481;
      struct std____list___Scratch_list_std____detail___List_node_base_* t482 = __array_idx478;
      _Bool c483 = ((t482 != ptr477)) ? 1 : 0;
      if (!c483) break;
    } while (1);
    struct std____list___Scratch_list_std____detail___List_node_base_* cast484 = (struct std____list___Scratch_list_std____detail___List_node_base_*)&(__tmp471);
    __fill472 = cast484;
      struct std___List_iterator_double_ ref_tmp3485;
          do {
              struct std___List_iterator_double_ ref_tmp2487;
              struct std___List_iterator_double_ r488 = std____cxx11__list_double__std__allocator_double_____begin(t460);
              ref_tmp2487 = r488;
              struct std____detail___List_node_base* t489 = ref_tmp2487._M_node;
              std____list___Scratch_list_std____detail___List_node_base____M_take_one(&__carry470, t489);
              if (__cir_exc_active) {
                goto cir_try_dispatch486;
              }
                struct std____list___Scratch_list_std____detail___List_node_base_* cast490 = (struct std____list___Scratch_list_std____detail___List_node_base_*)&(__tmp471);
                __counter473 = cast490;
                while (1) {
                  struct std____list___Scratch_list_std____detail___List_node_base_* t492 = __counter473;
                  struct std____list___Scratch_list_std____detail___List_node_base_* t493 = __fill472;
                  _Bool c494 = ((t492 != t493)) ? 1 : 0;
                  _Bool ternary495;
                  if (c494) {
                    struct std____list___Scratch_list_std____detail___List_node_base_* t496 = __counter473;
                    _Bool r497 = std____list___Scratch_list_std____detail___List_node_base___empty___const(t496);
                    if (__cir_exc_active) {
                      goto cir_try_dispatch486;
                    }
                    _Bool u498 = !r497;
                    ternary495 = (_Bool)u498;
                  } else {
                    _Bool c499 = 0;
                    ternary495 = (_Bool)c499;
                  }
                  if (!ternary495) break;
                    struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_ agg_tmp0500;
                    struct std____list___Scratch_list_std____detail___List_node_base_* t501 = __counter473;
                    struct std____detail___List_node_base* base502 = (struct std____detail___List_node_base*)((char *)&(__carry470) + 0);
                    struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_ t503 = agg_tmp0500;
                    void_std____list___Scratch_list_std____detail___List_node_base___merge_std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void___(t501, base502, t503);
                    if (__cir_exc_active) {
                      goto cir_try_dispatch486;
                    }
                    struct std____list___Scratch_list_std____detail___List_node_base_* t504 = __counter473;
                    struct std____detail___List_node_base* base505 = (struct std____detail___List_node_base*)((char *)t504 + 0);
                    std____list___Scratch_list_std____detail___List_node_base___swap(&__carry470, base505);
                    if (__cir_exc_active) {
                      goto cir_try_dispatch486;
                    }
                for_step491: ;
                  struct std____list___Scratch_list_std____detail___List_node_base_* t506 = __counter473;
                  int c507 = 1;
                  struct std____list___Scratch_list_std____detail___List_node_base_* ptr508 = &(t506)[c507];
                  __counter473 = ptr508;
                }
              struct std____list___Scratch_list_std____detail___List_node_base_* t509 = __counter473;
              struct std____detail___List_node_base* base510 = (struct std____detail___List_node_base*)((char *)t509 + 0);
              std____list___Scratch_list_std____detail___List_node_base___swap(&__carry470, base510);
              if (__cir_exc_active) {
                goto cir_try_dispatch486;
              }
                struct std____list___Scratch_list_std____detail___List_node_base_* t511 = __counter473;
                struct std____list___Scratch_list_std____detail___List_node_base_* t512 = __fill472;
                _Bool c513 = ((t511 == t512)) ? 1 : 0;
                if (c513) {
                  struct std____list___Scratch_list_std____detail___List_node_base_* t514 = __fill472;
                  int c515 = 1;
                  struct std____list___Scratch_list_std____detail___List_node_base_* ptr516 = &(t514)[c515];
                  __fill472 = ptr516;
                }
            _Bool r517 = std____cxx11__list_double__std__allocator_double_____empty___const(t460);
            _Bool u518 = !r517;
            if (!u518) break;
          } while (1);
          struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_ agg_tmp1519;
          struct std____list___Scratch_list_std____detail___List_node_base_* cast520 = (struct std____list___Scratch_list_std____detail___List_node_base_*)&(__tmp471);
          int c521 = 1;
          struct std____list___Scratch_list_std____detail___List_node_base_* ptr522 = &(cast520)[c521];
          __counter473 = ptr522;
          while (1) {
            struct std____list___Scratch_list_std____detail___List_node_base_* t524 = __counter473;
            struct std____list___Scratch_list_std____detail___List_node_base_* t525 = __fill472;
            _Bool c526 = ((t524 != t525)) ? 1 : 0;
            if (!c526) break;
            struct std____list___Scratch_list_std____detail___List_node_base_* t527 = __counter473;
            long c528 = -1;
            struct std____list___Scratch_list_std____detail___List_node_base_* t529 = __counter473;
            struct std____list___Scratch_list_std____detail___List_node_base_* ptr530 = &(t529)[c528];
            struct std____detail___List_node_base* base531 = (struct std____detail___List_node_base*)((char *)ptr530 + 0);
            struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_ t532 = agg_tmp1519;
            void_std____list___Scratch_list_std____detail___List_node_base___merge_std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void___(t527, base531, t532);
            if (__cir_exc_active) {
              goto cir_try_dispatch486;
            }
          for_step523: ;
            struct std____list___Scratch_list_std____detail___List_node_base_* t533 = __counter473;
            int c534 = 1;
            struct std____list___Scratch_list_std____detail___List_node_base_* ptr535 = &(t533)[c534];
            __counter473 = ptr535;
          }
        long c536 = -1;
        struct std____list___Scratch_list_std____detail___List_node_base_* t537 = __fill472;
        struct std____list___Scratch_list_std____detail___List_node_base_* ptr538 = &(t537)[c536];
        struct std____cxx11___List_base_double__std__allocator_double__* base539 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t460 + 0);
        struct std____detail___List_node_base* base540 = (struct std____detail___List_node_base*)((char *)&(base539->_M_impl._M_node) + 0);
        std____list___Scratch_list_std____detail___List_node_base___swap(ptr538, base540);
        if (__cir_exc_active) {
          goto cir_try_dispatch486;
        }
      cir_try_dispatch486: ;
      if (__cir_exc_active) {
      {
        int ca_tok541 = 0;
        void* ca_exn542 = (void*)__cir_exc_ptr;
        __cir_exc_active = 0;
          struct std___List_iterator_double_ r543 = std____cxx11__list_double__std__allocator_double_____end(t460);
          ref_tmp3485 = r543;
          struct std____detail___List_node_base* t544 = ref_tmp3485._M_node;
          std____list___Scratch_list_std____detail___List_node_base____M_put_all(&__carry470, t544);
          if (__cir_exc_active) {
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            return;
          }
            int __i545;
            struct std___List_iterator_double_ ref_tmp4546;
            int c547 = 0;
            __i545 = c547;
            while (1) {
              int t549 = __i545;
              unsigned long cast550 = (unsigned long)t549;
              unsigned long c551 = 1024;
              unsigned long c552 = 16;
              unsigned long b553 = c551 / c552;
              _Bool c554 = ((cast550 < b553)) ? 1 : 0;
              if (!c554) break;
              int t555 = __i545;
              long cast556 = (long)t555;
              struct std___List_iterator_double_ r557 = std____cxx11__list_double__std__allocator_double_____end(t460);
              ref_tmp4546 = r557;
              struct std____detail___List_node_base* t558 = ref_tmp4546._M_node;
              std____list___Scratch_list_std____detail___List_node_base____M_put_all(&__tmp471[cast556], t558);
              if (__cir_exc_active) {
                {
                  if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                }
                return;
              }
            for_step548: ;
              int t559 = __i545;
              int u560 = t559 + 1;
              __i545 = u560;
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

// function: _ZSteqRKSt20_List_const_iteratorIdES2_
_Bool std__operator___3(struct std___List_const_iterator_double_* v561, struct std___List_const_iterator_double_* v562) {
bb563:
  struct std___List_const_iterator_double_* __x564;
  struct std___List_const_iterator_double_* __y565;
  _Bool __retval566;
  __x564 = v561;
  __y565 = v562;
  struct std___List_const_iterator_double_* t567 = __x564;
  struct std____detail___List_node_base* t568 = t567->_M_node;
  struct std___List_const_iterator_double_* t569 = __y565;
  struct std____detail___List_node_base* t570 = t569->_M_node;
  _Bool c571 = ((t568 == t570)) ? 1 : 0;
  __retval566 = c571;
  _Bool t572 = __retval566;
  return t572;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE11_M_dec_sizeEm
void std____cxx11___List_base_double__std__allocator_double______M_dec_size(struct std____cxx11___List_base_double__std__allocator_double__* v573, unsigned long v574) {
bb575:
  struct std____cxx11___List_base_double__std__allocator_double__* this576;
  unsigned long __n577;
  this576 = v573;
  __n577 = v574;
  struct std____cxx11___List_base_double__std__allocator_double__* t578 = this576;
  unsigned long t579 = __n577;
  struct std____detail___List_size* base580 = (struct std____detail___List_size*)((char *)&(t578->_M_impl._M_node) + 16);
  unsigned long t581 = base580->_M_size;
  unsigned long b582 = t581 - t579;
  base580->_M_size = b582;
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE8_M_eraseESt14_List_iteratorIdE
void std____cxx11__list_double__std__allocator_double______M_erase(struct std____cxx11__list_double__std__allocator_double__* v583, struct std___List_iterator_double_ v584) {
bb585:
  struct std____cxx11__list_double__std__allocator_double__* this586;
  struct std___List_iterator_double_ __position587;
  struct std___List_node_double_* __n588;
  this586 = v583;
  __position587 = v584;
  struct std____cxx11__list_double__std__allocator_double__* t589 = this586;
  struct std____cxx11___List_base_double__std__allocator_double__* base590 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t589 + 0);
  unsigned long c591 = 1;
  std____cxx11___List_base_double__std__allocator_double______M_dec_size(base590, c591);
  if (__cir_exc_active) {
    return;
  }
  struct std____detail___List_node_base* t592 = __position587._M_node;
  std____detail___List_node_base___M_unhook(t592);
  struct std____detail___List_node_base* t593 = __position587._M_node;
  struct std___List_node_double_* derived594 = (struct std___List_node_double_*)((char *)t593 - 0);
  __n588 = derived594;
  struct std____cxx11___List_base_double__std__allocator_double__* base595 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t589 + 0);
  struct std___List_node_double_* t596 = __n588;
  struct std___List_node_double_* r597 = std___List_node_double____M_node_ptr(t596);
  if (__cir_exc_active) {
    return;
  }
  std____cxx11___List_base_double__std__allocator_double______M_destroy_node(base595, r597);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE5eraseESt20_List_const_iteratorIdE
struct std___List_iterator_double_ std____cxx11__list_double__std__allocator_double_____erase(struct std____cxx11__list_double__std__allocator_double__* v598, struct std___List_const_iterator_double_ v599) {
bb600:
  struct std____cxx11__list_double__std__allocator_double__* this601;
  struct std___List_const_iterator_double_ __position602;
  struct std___List_iterator_double_ __retval603;
  struct std___List_iterator_double_ agg_tmp0604;
  this601 = v598;
  __position602 = v599;
  struct std____cxx11__list_double__std__allocator_double__* t605 = this601;
  struct std____detail___List_node_base* t606 = __position602._M_node;
  struct std____detail___List_node_base* t607 = t606->_M_next;
  std___List_iterator_double____List_iterator(&__retval603, t607);
  struct std___List_iterator_double_ r608 = std___List_const_iterator_double____M_const_cast___const(&__position602);
  agg_tmp0604 = r608;
  struct std___List_iterator_double_ t609 = agg_tmp0604;
  std____cxx11__list_double__std__allocator_double______M_erase(t605, t609);
  struct std___List_iterator_double_ t610 = __retval603;
  return t610;
}

// function: _ZNSt20_List_const_iteratorIdEaSEOS0_
struct std___List_const_iterator_double_* std___List_const_iterator_double___operator_(struct std___List_const_iterator_double_* v611, struct std___List_const_iterator_double_* v612) {
bb613:
  struct std___List_const_iterator_double_* this614;
  struct std___List_const_iterator_double_* unnamed615;
  struct std___List_const_iterator_double_* __retval616;
  this614 = v611;
  unnamed615 = v612;
  struct std___List_const_iterator_double_* t617 = this614;
  struct std___List_const_iterator_double_* t618 = unnamed615;
  struct std____detail___List_node_base* t619 = t618->_M_node;
  t617->_M_node = t619;
  __retval616 = t617;
  struct std___List_const_iterator_double_* t620 = __retval616;
  return t620;
}

// function: _ZNKSt20_List_const_iteratorIdE13_M_const_castEv
struct std___List_iterator_double_ std___List_const_iterator_double____M_const_cast___const(struct std___List_const_iterator_double_* v621) {
bb622:
  struct std___List_const_iterator_double_* this623;
  struct std___List_iterator_double_ __retval624;
  this623 = v621;
  struct std___List_const_iterator_double_* t625 = this623;
  struct std____detail___List_node_base* t626 = t625->_M_node;
  std___List_iterator_double____List_iterator(&__retval624, t626);
  struct std___List_iterator_double_ t627 = __retval624;
  return t627;
}

// function: _ZNSt7__cxx114listIdSaIdEE5eraseESt20_List_const_iteratorIdES4_
struct std___List_iterator_double_ std____cxx11__list_double__std__allocator_double_____erase_2(struct std____cxx11__list_double__std__allocator_double__* v628, struct std___List_const_iterator_double_ v629, struct std___List_const_iterator_double_ v630) {
bb631:
  struct std____cxx11__list_double__std__allocator_double__* this632;
  struct std___List_const_iterator_double_ __first633;
  struct std___List_const_iterator_double_ __last634;
  struct std___List_iterator_double_ __retval635;
  this632 = v628;
  __first633 = v629;
  __last634 = v630;
  struct std____cxx11__list_double__std__allocator_double__* t636 = this632;
    struct std___List_const_iterator_double_ ref_tmp0637;
    struct std___List_iterator_double_ ref_tmp1638;
    struct std___List_const_iterator_double_ agg_tmp0639;
    while (1) {
      _Bool r640 = std__operator___3(&__first633, &__last634);
      _Bool u641 = !r640;
      if (!u641) break;
      agg_tmp0639 = __first633; // copy
      struct std___List_const_iterator_double_ t642 = agg_tmp0639;
      struct std___List_iterator_double_ r643 = std____cxx11__list_double__std__allocator_double_____erase(t636, t642);
      ref_tmp1638 = r643;
      std___List_const_iterator_double____List_const_iterator_2(&ref_tmp0637, &ref_tmp1638);
      struct std___List_const_iterator_double_* r644 = std___List_const_iterator_double___operator_(&__first633, &ref_tmp0637);
    }
  struct std___List_iterator_double_ r645 = std___List_const_iterator_double____M_const_cast___const(&__last634);
  __retval635 = r645;
  struct std___List_iterator_double_ t646 = __retval635;
  return t646;
}

// function: _ZNSt20_List_const_iteratorIdEC2ERKSt14_List_iteratorIdE
void std___List_const_iterator_double____List_const_iterator_2(struct std___List_const_iterator_double_* v647, struct std___List_iterator_double_* v648) {
bb649:
  struct std___List_const_iterator_double_* this650;
  struct std___List_iterator_double_* __x651;
  this650 = v647;
  __x651 = v648;
  struct std___List_const_iterator_double_* t652 = this650;
  struct std___List_iterator_double_* t653 = __x651;
  struct std____detail___List_node_base* t654 = t653->_M_node;
  t652->_M_node = t654;
  return;
}

// function: _ZNKSt7__cxx1110_List_baseIdSaIdEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_double__* std____cxx11___List_base_double__std__allocator_double______M_get_Node_allocator___const(struct std____cxx11___List_base_double__std__allocator_double__* v655) {
bb656:
  struct std____cxx11___List_base_double__std__allocator_double__* this657;
  struct std__allocator_std___List_node_double__* __retval658;
  this657 = v655;
  struct std____cxx11___List_base_double__std__allocator_double__* t659 = this657;
  struct std__allocator_std___List_node_double__* base660 = (struct std__allocator_std___List_node_double__*)((char *)&(t659->_M_impl) + 0);
  __retval658 = base660;
  struct std__allocator_std___List_node_double__* t661 = __retval658;
  return t661;
}

// function: _ZNSaIdEC2ISt10_List_nodeIdEEERKSaIT_E
void std__allocator_double___allocator_std___List_node_double___(struct std__allocator_double_* v662, struct std__allocator_std___List_node_double__* v663) {
bb664:
  struct std__allocator_double_* this665;
  struct std__allocator_std___List_node_double__* unnamed666;
  this665 = v662;
  unnamed666 = v663;
  struct std__allocator_double_* t667 = this665;
  struct std____new_allocator_double_* base668 = (struct std____new_allocator_double_*)((char *)t667 + 0);
  std____new_allocator_double_____new_allocator(base668);
  return;
}

// function: _ZNKSt7__cxx114listIdSaIdEE13get_allocatorEv
struct std__allocator_double_ std____cxx11__list_double__std__allocator_double_____get_allocator___const(struct std____cxx11__list_double__std__allocator_double__* v669) {
bb670:
  struct std____cxx11__list_double__std__allocator_double__* this671;
  struct std__allocator_double_ __retval672;
  this671 = v669;
  struct std____cxx11__list_double__std__allocator_double__* t673 = this671;
  struct std____cxx11___List_base_double__std__allocator_double__* base674 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t673 + 0);
  struct std__allocator_std___List_node_double__* r675 = std____cxx11___List_base_double__std__allocator_double______M_get_Node_allocator___const(base674);
  std__allocator_double___allocator_std___List_node_double___(&__retval672, r675);
  struct std__allocator_double_ t676 = __retval672;
  return t676;
}

// function: _ZNSt7__cxx114listIdSaIdEEC2IPdvEET_S5_RKS1_
void std____cxx11__list_double__std__allocator_double_____list_double___void_(struct std____cxx11__list_double__std__allocator_double__* v677, double* v678, double* v679, struct std__allocator_double_* v680) {
bb681:
  struct std____cxx11__list_double__std__allocator_double__* this682;
  double* __first683;
  double* __last684;
  struct std__allocator_double_* __a685;
  struct std__allocator_std___List_node_double__ ref_tmp0686;
  struct std____false_type agg_tmp0687;
  this682 = v677;
  __first683 = v678;
  __last684 = v679;
  __a685 = v680;
  struct std____cxx11__list_double__std__allocator_double__* t688 = this682;
  struct std____cxx11___List_base_double__std__allocator_double__* base689 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t688 + 0);
  struct std__allocator_double_* t690 = __a685;
  std__allocator_std___List_node_double_____allocator_double_(&ref_tmp0686, t690);
    std____cxx11___List_base_double__std__allocator_double______List_base(base689, &ref_tmp0686);
    if (__cir_exc_active) {
      {
        std__allocator_std___List_node_double______allocator(&ref_tmp0686);
      }
      return;
    }
  {
    std__allocator_std___List_node_double______allocator(&ref_tmp0686);
  }
    double* t691 = __first683;
    double* t692 = __last684;
    struct std____false_type t693 = agg_tmp0687;
    void_std____cxx11__list_double__std__allocator_double______M_initialize_dispatch_double__(t688, t691, t692, t693);
    if (__cir_exc_active) {
      {
        struct std____cxx11___List_base_double__std__allocator_double__* base694 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t688 + 0);
        std____cxx11___List_base_double__std__allocator_double_______List_base(base694);
      }
      return;
    }
  return;
}

// function: _ZNSaIdED2Ev
void std__allocator_double____allocator(struct std__allocator_double_* v695) {
bb696:
  struct std__allocator_double_* this697;
  this697 = v695;
  struct std__allocator_double_* t698 = this697;
  return;
}

// function: _ZSteqRKSaISt10_List_nodeIdEES3_
_Bool std__operator__(struct std__allocator_std___List_node_double__* v699, struct std__allocator_std___List_node_double__* v700) {
bb701:
  struct std__allocator_std___List_node_double__* unnamed702;
  struct std__allocator_std___List_node_double__* unnamed703;
  _Bool __retval704;
  unnamed702 = v699;
  unnamed703 = v700;
  _Bool c705 = 1;
  __retval704 = c705;
  _Bool t706 = __retval704;
  return t706;
}

// function: _ZNSt7__cxx114listIdSaIdEE25_M_check_equal_allocatorsERKS2_
void std____cxx11__list_double__std__allocator_double______M_check_equal_allocators(struct std____cxx11__list_double__std__allocator_double__* v707, struct std____cxx11__list_double__std__allocator_double__* v708) {
bb709:
  struct std____cxx11__list_double__std__allocator_double__* this710;
  struct std____cxx11__list_double__std__allocator_double__* __x711;
  this710 = v707;
  __x711 = v708;
  struct std____cxx11__list_double__std__allocator_double__* t712 = this710;
    struct std____cxx11___List_base_double__std__allocator_double__* base713 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t712 + 0);
    struct std__allocator_std___List_node_double__* r714 = std____cxx11___List_base_double__std__allocator_double______M_get_Node_allocator(base713);
    struct std____cxx11__list_double__std__allocator_double__* t715 = __x711;
    struct std____cxx11___List_base_double__std__allocator_double__* base716 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t715 + 0);
    struct std__allocator_std___List_node_double__* r717 = std____cxx11___List_base_double__std__allocator_double______M_get_Node_allocator___const(base716);
    _Bool r718 = std__operator__(r714, r717);
    _Bool u719 = !r718;
    if (u719) {
      abort();
    }
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE11_M_transferESt14_List_iteratorIdES4_S4_
void std____cxx11__list_double__std__allocator_double______M_transfer(struct std____cxx11__list_double__std__allocator_double__* v720, struct std___List_iterator_double_ v721, struct std___List_iterator_double_ v722, struct std___List_iterator_double_ v723) {
bb724:
  struct std____cxx11__list_double__std__allocator_double__* this725;
  struct std___List_iterator_double_ __position726;
  struct std___List_iterator_double_ __first727;
  struct std___List_iterator_double_ __last728;
  this725 = v720;
  __position726 = v721;
  __first727 = v722;
  __last728 = v723;
  struct std____cxx11__list_double__std__allocator_double__* t729 = this725;
  struct std____detail___List_node_base* t730 = __position726._M_node;
  struct std____detail___List_node_base* t731 = __first727._M_node;
  struct std____detail___List_node_base* t732 = __last728._M_node;
  std____detail___List_node_base___M_transfer(t730, t731, t732);
  return;
}

// function: _ZNKSt7__cxx1110_List_baseIdSaIdEE11_M_get_sizeEv
unsigned long std____cxx11___List_base_double__std__allocator_double______M_get_size___const(struct std____cxx11___List_base_double__std__allocator_double__* v733) {
bb734:
  struct std____cxx11___List_base_double__std__allocator_double__* this735;
  unsigned long __retval736;
  this735 = v733;
  struct std____cxx11___List_base_double__std__allocator_double__* t737 = this735;
  struct std____detail___List_size* base738 = (struct std____detail___List_size*)((char *)&(t737->_M_impl._M_node) + 16);
  unsigned long t739 = base738->_M_size;
  __retval736 = t739;
  unsigned long t740 = __retval736;
  return t740;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE11_M_set_sizeEm
void std____cxx11___List_base_double__std__allocator_double______M_set_size(struct std____cxx11___List_base_double__std__allocator_double__* v741, unsigned long v742) {
bb743:
  struct std____cxx11___List_base_double__std__allocator_double__* this744;
  unsigned long __n745;
  this744 = v741;
  __n745 = v742;
  struct std____cxx11___List_base_double__std__allocator_double__* t746 = this744;
  unsigned long t747 = __n745;
  struct std____detail___List_size* base748 = (struct std____detail___List_size*)((char *)&(t746->_M_impl._M_node) + 16);
  base748->_M_size = t747;
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE6spliceESt20_List_const_iteratorIdEOS2_
void std____cxx11__list_double__std__allocator_double_____splice(struct std____cxx11__list_double__std__allocator_double__* v749, struct std___List_const_iterator_double_ v750, struct std____cxx11__list_double__std__allocator_double__* v751) {
bb752:
  struct std____cxx11__list_double__std__allocator_double__* this753;
  struct std___List_const_iterator_double_ __position754;
  struct std____cxx11__list_double__std__allocator_double__* __x755;
  this753 = v749;
  __position754 = v750;
  __x755 = v751;
  struct std____cxx11__list_double__std__allocator_double__* t756 = this753;
    struct std____cxx11__list_double__std__allocator_double__* t757 = __x755;
    _Bool r758 = std____cxx11__list_double__std__allocator_double_____empty___const(t757);
    _Bool u759 = !r758;
    if (u759) {
      struct std___List_iterator_double_ agg_tmp0760;
      struct std___List_iterator_double_ agg_tmp1761;
      struct std___List_iterator_double_ agg_tmp2762;
      struct std____cxx11__list_double__std__allocator_double__* t763 = __x755;
      std____cxx11__list_double__std__allocator_double______M_check_equal_allocators(t756, t763);
      struct std___List_iterator_double_ r764 = std___List_const_iterator_double____M_const_cast___const(&__position754);
      agg_tmp0760 = r764;
      struct std____cxx11__list_double__std__allocator_double__* t765 = __x755;
      struct std___List_iterator_double_ r766 = std____cxx11__list_double__std__allocator_double_____begin(t765);
      agg_tmp1761 = r766;
      struct std____cxx11__list_double__std__allocator_double__* t767 = __x755;
      struct std___List_iterator_double_ r768 = std____cxx11__list_double__std__allocator_double_____end(t767);
      agg_tmp2762 = r768;
      struct std___List_iterator_double_ t769 = agg_tmp0760;
      struct std___List_iterator_double_ t770 = agg_tmp1761;
      struct std___List_iterator_double_ t771 = agg_tmp2762;
      std____cxx11__list_double__std__allocator_double______M_transfer(t756, t769, t770, t771);
      if (__cir_exc_active) {
        return;
      }
      struct std____cxx11___List_base_double__std__allocator_double__* base772 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t756 + 0);
      struct std____cxx11__list_double__std__allocator_double__* t773 = __x755;
      struct std____cxx11___List_base_double__std__allocator_double__* base774 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t773 + 0);
      unsigned long r775 = std____cxx11___List_base_double__std__allocator_double______M_get_size___const(base774);
      if (__cir_exc_active) {
        return;
      }
      std____cxx11___List_base_double__std__allocator_double______M_inc_size(base772, r775);
      if (__cir_exc_active) {
        return;
      }
      struct std____cxx11__list_double__std__allocator_double__* t776 = __x755;
      struct std____cxx11___List_base_double__std__allocator_double__* base777 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t776 + 0);
      unsigned long c778 = 0;
      std____cxx11___List_base_double__std__allocator_double______M_set_size(base777, c778);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE6spliceESt20_List_const_iteratorIdERS2_
void std____cxx11__list_double__std__allocator_double_____splice_2(struct std____cxx11__list_double__std__allocator_double__* v779, struct std___List_const_iterator_double_ v780, struct std____cxx11__list_double__std__allocator_double__* v781) {
bb782:
  struct std____cxx11__list_double__std__allocator_double__* this783;
  struct std___List_const_iterator_double_ __position784;
  struct std____cxx11__list_double__std__allocator_double__* __x785;
  struct std___List_const_iterator_double_ agg_tmp0786;
  this783 = v779;
  __position784 = v780;
  __x785 = v781;
  struct std____cxx11__list_double__std__allocator_double__* t787 = this783;
  agg_tmp0786 = __position784; // copy
  struct std____cxx11__list_double__std__allocator_double__* t788 = __x785;
  struct std___List_const_iterator_double_ t789 = agg_tmp0786;
  std____cxx11__list_double__std__allocator_double_____splice(t787, t789, t788);
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE6insertIPdvEESt14_List_iteratorIdESt20_List_const_iteratorIdET_S9_
struct std___List_iterator_double_ std___List_iterator_double__std____cxx11__list_double__std__allocator_double_____insert_double___void_(struct std____cxx11__list_double__std__allocator_double__* v790, struct std___List_const_iterator_double_ v791, double* v792, double* v793) {
bb794:
  struct std____cxx11__list_double__std__allocator_double__* this795;
  struct std___List_const_iterator_double_ __position796;
  double* __first797;
  double* __last798;
  struct std___List_iterator_double_ __retval799;
  struct std____cxx11__list_double__std__allocator_double__ __tmp800;
  struct std__allocator_double_ ref_tmp0801;
  this795 = v790;
  __position796 = v791;
  __first797 = v792;
  __last798 = v793;
  struct std____cxx11__list_double__std__allocator_double__* t802 = this795;
  double* t803 = __first797;
  double* t804 = __last798;
  struct std__allocator_double_ r805 = std____cxx11__list_double__std__allocator_double_____get_allocator___const(t802);
  ref_tmp0801 = r805;
    std____cxx11__list_double__std__allocator_double_____list_double___void_(&__tmp800, t803, t804, &ref_tmp0801);
    if (__cir_exc_active) {
      {
        std__allocator_double____allocator(&ref_tmp0801);
      }
      struct std___List_iterator_double_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
  {
    std__allocator_double____allocator(&ref_tmp0801);
  }
      _Bool r806 = std____cxx11__list_double__std__allocator_double_____empty___const(&__tmp800);
      _Bool u807 = !r806;
      if (u807) {
        struct std___List_const_iterator_double_ agg_tmp0808;
        struct std___List_iterator_double_ r809 = std____cxx11__list_double__std__allocator_double_____begin(&__tmp800);
        __retval799 = r809;
        agg_tmp0808 = __position796; // copy
        struct std___List_const_iterator_double_ t810 = agg_tmp0808;
        std____cxx11__list_double__std__allocator_double_____splice_2(t802, t810, &__tmp800);
        struct std___List_iterator_double_ t811 = __retval799;
        struct std___List_iterator_double_ ret_val812 = t811;
        {
          std____cxx11__list_double__std__allocator_double______list(&__tmp800);
        }
        return ret_val812;
      }
    struct std___List_iterator_double_ r813 = std___List_const_iterator_double____M_const_cast___const(&__position796);
    __retval799 = r813;
    struct std___List_iterator_double_ t814 = __retval799;
    struct std___List_iterator_double_ ret_val815 = t814;
    return ret_val815;
  abort();
}

// function: _ZNSt7__cxx114listIdSaIdEE18_M_assign_dispatchIPdEEvT_S5_St12__false_type
void void_std____cxx11__list_double__std__allocator_double______M_assign_dispatch_double__(struct std____cxx11__list_double__std__allocator_double__* v816, double* v817, double* v818, struct std____false_type v819) {
bb820:
  struct std____cxx11__list_double__std__allocator_double__* this821;
  double* __first2822;
  double* __last2823;
  struct std____false_type unnamed824;
  struct std___List_iterator_double_ __first1825;
  struct std___List_iterator_double_ __last1826;
  this821 = v816;
  __first2822 = v817;
  __last2823 = v818;
  unnamed824 = v819;
  struct std____cxx11__list_double__std__allocator_double__* t827 = this821;
  struct std___List_iterator_double_ r828 = std____cxx11__list_double__std__allocator_double_____begin(t827);
  __first1825 = r828;
  struct std___List_iterator_double_ r829 = std____cxx11__list_double__std__allocator_double_____end(t827);
  __last1826 = r829;
    while (1) {
      _Bool r831 = std__operator___2(&__first1825, &__last1826);
      _Bool u832 = !r831;
      _Bool ternary833;
      if (u832) {
        double* t834 = __first2822;
        double* t835 = __last2823;
        _Bool c836 = ((t834 != t835)) ? 1 : 0;
        ternary833 = (_Bool)c836;
      } else {
        _Bool c837 = 0;
        ternary833 = (_Bool)c837;
      }
      if (!ternary833) break;
      double* t838 = __first2822;
      double t839 = *t838;
      double* r840 = std___List_iterator_double___operator____const(&__first1825);
      *r840 = t839;
    for_step830: ;
      struct std___List_iterator_double_* r841 = std___List_iterator_double___operator___2(&__first1825);
      double* t842 = __first2822;
      int c843 = 1;
      double* ptr844 = &(t842)[c843];
      __first2822 = ptr844;
    }
    double* t845 = __first2822;
    double* t846 = __last2823;
    _Bool c847 = ((t845 == t846)) ? 1 : 0;
    if (c847) {
      struct std___List_const_iterator_double_ agg_tmp0848;
      struct std___List_const_iterator_double_ agg_tmp1849;
      struct std___List_iterator_double_ agg_tmp2850;
      std___List_const_iterator_double____List_const_iterator_2(&agg_tmp0848, &__first1825);
      std___List_const_iterator_double____List_const_iterator_2(&agg_tmp1849, &__last1826);
      struct std___List_const_iterator_double_ t851 = agg_tmp0848;
      struct std___List_const_iterator_double_ t852 = agg_tmp1849;
      struct std___List_iterator_double_ r853 = std____cxx11__list_double__std__allocator_double_____erase_2(t827, t851, t852);
      agg_tmp2850 = r853;
    } else {
      struct std___List_const_iterator_double_ agg_tmp3854;
      struct std___List_iterator_double_ agg_tmp4855;
      std___List_const_iterator_double____List_const_iterator_2(&agg_tmp3854, &__last1826);
      double* t856 = __first2822;
      double* t857 = __last2823;
      struct std___List_const_iterator_double_ t858 = agg_tmp3854;
      struct std___List_iterator_double_ r859 = std___List_iterator_double__std____cxx11__list_double__std__allocator_double_____insert_double___void_(t827, t858, t856, t857);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp4855 = r859;
    }
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE6assignIPdvEEvT_S5_
void void_std____cxx11__list_double__std__allocator_double_____assign_double___void_(struct std____cxx11__list_double__std__allocator_double__* v860, double* v861, double* v862) {
bb863:
  struct std____cxx11__list_double__std__allocator_double__* this864;
  double* __first865;
  double* __last866;
  struct std____false_type agg_tmp0867;
  this864 = v860;
  __first865 = v861;
  __last866 = v862;
  struct std____cxx11__list_double__std__allocator_double__* t868 = this864;
  double* t869 = __first865;
  double* t870 = __last866;
  struct std____false_type t871 = agg_tmp0867;
  void_std____cxx11__list_double__std__allocator_double______M_assign_dispatch_double__(t868, t869, t870, t871);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE15_Finalize_mergeC2ERS2_S4_RKSt14_List_iteratorIdE
void std____cxx11__list_double__std__allocator_double______Finalize_merge___Finalize_merge(struct std____cxx11__list_double__std__allocator_double_____Finalize_merge* v872, struct std____cxx11__list_double__std__allocator_double__* v873, struct std____cxx11__list_double__std__allocator_double__* v874, struct std___List_iterator_double_* v875) {
bb876:
  struct std____cxx11__list_double__std__allocator_double_____Finalize_merge* this877;
  struct std____cxx11__list_double__std__allocator_double__* __dest878;
  struct std____cxx11__list_double__std__allocator_double__* __src879;
  struct std___List_iterator_double_* __src_next880;
  this877 = v872;
  __dest878 = v873;
  __src879 = v874;
  __src_next880 = v875;
  struct std____cxx11__list_double__std__allocator_double_____Finalize_merge* t881 = this877;
  struct std____cxx11__list_double__std__allocator_double__* t882 = __dest878;
  t881->_M_dest = t882;
  struct std____cxx11__list_double__std__allocator_double__* t883 = __src879;
  t881->_M_src = t883;
  struct std___List_iterator_double_* t884 = __src_next880;
  t881->_M_next = t884;
  return;
}

// function: _ZNSt14_List_iteratorIdEaSERKS0_
struct std___List_iterator_double_* std___List_iterator_double___operator_(struct std___List_iterator_double_* v885, struct std___List_iterator_double_* v886) {
bb887:
  struct std___List_iterator_double_* this888;
  struct std___List_iterator_double_* unnamed889;
  struct std___List_iterator_double_* __retval890;
  this888 = v885;
  unnamed889 = v886;
  struct std___List_iterator_double_* t891 = this888;
  struct std___List_iterator_double_* t892 = unnamed889;
  struct std____detail___List_node_base* t893 = t892->_M_node;
  t891->_M_node = t893;
  __retval890 = t891;
  struct std___List_iterator_double_* t894 = __retval890;
  return t894;
}

// function: _ZNSt7__cxx114listIdSaIdEE15_Finalize_mergeD2Ev
void std____cxx11__list_double__std__allocator_double______Finalize_merge____Finalize_merge(struct std____cxx11__list_double__std__allocator_double_____Finalize_merge* v895) {
bb896:
  struct std____cxx11__list_double__std__allocator_double_____Finalize_merge* this897;
  unsigned long __num_unmerged898;
  struct std___List_iterator_double_ agg_tmp0899;
  struct std___List_iterator_double_ agg_tmp1900;
  unsigned long __orig_size901;
  this897 = v895;
  struct std____cxx11__list_double__std__allocator_double_____Finalize_merge* t902 = this897;
  struct std___List_iterator_double_* t903 = t902->_M_next;
  agg_tmp0899 = *t903; // copy
  struct std____cxx11__list_double__std__allocator_double__* t904 = t902->_M_src;
  struct std___List_iterator_double_ r905 = std____cxx11__list_double__std__allocator_double_____end(t904);
  agg_tmp1900 = r905;
  struct std___List_iterator_double_ t906 = agg_tmp0899;
  struct std___List_iterator_double_ t907 = agg_tmp1900;
  long r908 = std__iterator_traits_std___List_iterator_double_____difference_type_std__distance_std___List_iterator_double___(t906, t907);
  if (__cir_exc_active) {
    return;
  }
  unsigned long cast909 = (unsigned long)r908;
  __num_unmerged898 = cast909;
  struct std____cxx11__list_double__std__allocator_double__* t910 = t902->_M_src;
  struct std____cxx11___List_base_double__std__allocator_double__* base911 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t910 + 0);
  unsigned long r912 = std____cxx11___List_base_double__std__allocator_double______M_get_size___const(base911);
  if (__cir_exc_active) {
    return;
  }
  __orig_size901 = r912;
  struct std____cxx11__list_double__std__allocator_double__* t913 = t902->_M_dest;
  struct std____cxx11___List_base_double__std__allocator_double__* base914 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t913 + 0);
  unsigned long t915 = __orig_size901;
  unsigned long t916 = __num_unmerged898;
  unsigned long b917 = t915 - t916;
  std____cxx11___List_base_double__std__allocator_double______M_inc_size(base914, b917);
  if (__cir_exc_active) {
    return;
  }
  struct std____cxx11__list_double__std__allocator_double__* t918 = t902->_M_src;
  struct std____cxx11___List_base_double__std__allocator_double__* base919 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t918 + 0);
  unsigned long t920 = __num_unmerged898;
  std____cxx11___List_base_double__std__allocator_double______M_set_size(base919, t920);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE5mergeIPFbddEEEvOS2_T_
void void_std____cxx11__list_double__std__allocator_double_____merge_bool_____double__double___std____cxx11__list_double__std__allocator_double_______bool____(struct std____cxx11__list_double__std__allocator_double__* v921, struct std____cxx11__list_double__std__allocator_double__* v922, void* v923) {
bb924:
  struct std____cxx11__list_double__std__allocator_double__* this925;
  struct std____cxx11__list_double__std__allocator_double__* __x926;
  void* __comp927;
  this925 = v921;
  __x926 = v922;
  __comp927 = v923;
  struct std____cxx11__list_double__std__allocator_double__* t928 = this925;
    struct std____cxx11__list_double__std__allocator_double__* t929 = __x926;
    _Bool c930 = ((t928 != t929)) ? 1 : 0;
    if (c930) {
      struct std___List_iterator_double_ __first1931;
      struct std___List_iterator_double_ __last1932;
      struct std___List_iterator_double_ __first2933;
      struct std___List_iterator_double_ __last2934;
      struct std____cxx11__list_double__std__allocator_double_____Finalize_merge __fin935;
      struct std____cxx11__list_double__std__allocator_double__* t936 = __x926;
      std____cxx11__list_double__std__allocator_double______M_check_equal_allocators(t928, t936);
      struct std___List_iterator_double_ r937 = std____cxx11__list_double__std__allocator_double_____begin(t928);
      __first1931 = r937;
      struct std___List_iterator_double_ r938 = std____cxx11__list_double__std__allocator_double_____end(t928);
      __last1932 = r938;
      struct std____cxx11__list_double__std__allocator_double__* t939 = __x926;
      struct std___List_iterator_double_ r940 = std____cxx11__list_double__std__allocator_double_____begin(t939);
      __first2933 = r940;
      struct std____cxx11__list_double__std__allocator_double__* t941 = __x926;
      struct std___List_iterator_double_ r942 = std____cxx11__list_double__std__allocator_double_____end(t941);
      __last2934 = r942;
      struct std____cxx11__list_double__std__allocator_double__* t943 = __x926;
      std____cxx11__list_double__std__allocator_double______Finalize_merge___Finalize_merge(&__fin935, t928, t943, &__first2933);
      if (__cir_exc_active) {
        return;
      }
          while (1) {
            _Bool r944 = std__operator___2(&__first1931, &__last1932);
            _Bool u945 = !r944;
            _Bool ternary946;
            if (u945) {
              _Bool r947 = std__operator___2(&__first2933, &__last2934);
              _Bool u948 = !r947;
              ternary946 = (_Bool)u948;
            } else {
              _Bool c949 = 0;
              ternary946 = (_Bool)c949;
            }
            if (!ternary946) break;
              void* t950 = __comp927;
              double* r951 = std___List_iterator_double___operator____const(&__first2933);
              double t952 = *r951;
              double* r953 = std___List_iterator_double___operator____const(&__first1931);
              double t954 = *r953;
              _Bool r955 = ((_Bool (*)(double, double))t950)(t952, t954);
              if (__cir_exc_active) {
                {
                  std____cxx11__list_double__std__allocator_double______Finalize_merge____Finalize_merge(&__fin935);
                }
                return;
              }
              if (r955) {
                struct std___List_iterator_double_ __next956;
                struct std___List_iterator_double_ agg_tmp0957;
                struct std___List_iterator_double_ agg_tmp1958;
                struct std___List_iterator_double_ agg_tmp2959;
                __next956 = __first2933; // copy
                agg_tmp0957 = __first1931; // copy
                agg_tmp1958 = __first2933; // copy
                struct std___List_iterator_double_* r960 = std___List_iterator_double___operator___2(&__next956);
                agg_tmp2959 = *r960; // copy
                struct std___List_iterator_double_ t961 = agg_tmp0957;
                struct std___List_iterator_double_ t962 = agg_tmp1958;
                struct std___List_iterator_double_ t963 = agg_tmp2959;
                std____cxx11__list_double__std__allocator_double______M_transfer(t928, t961, t962, t963);
                if (__cir_exc_active) {
                  {
                    std____cxx11__list_double__std__allocator_double______Finalize_merge____Finalize_merge(&__fin935);
                  }
                  return;
                }
                struct std___List_iterator_double_* r964 = std___List_iterator_double___operator_(&__first2933, &__next956);
              } else {
                struct std___List_iterator_double_* r965 = std___List_iterator_double___operator___2(&__first1931);
              }
          }
          _Bool r966 = std__operator___2(&__first2933, &__last2934);
          _Bool u967 = !r966;
          if (u967) {
            struct std___List_iterator_double_ agg_tmp3968;
            struct std___List_iterator_double_ agg_tmp4969;
            struct std___List_iterator_double_ agg_tmp5970;
            agg_tmp3968 = __last1932; // copy
            agg_tmp4969 = __first2933; // copy
            agg_tmp5970 = __last2934; // copy
            struct std___List_iterator_double_ t971 = agg_tmp3968;
            struct std___List_iterator_double_ t972 = agg_tmp4969;
            struct std___List_iterator_double_ t973 = agg_tmp5970;
            std____cxx11__list_double__std__allocator_double______M_transfer(t928, t971, t972, t973);
            if (__cir_exc_active) {
              {
                std____cxx11__list_double__std__allocator_double______Finalize_merge____Finalize_merge(&__fin935);
              }
              return;
            }
            struct std___List_iterator_double_* r974 = std___List_iterator_double___operator_(&__first2933, &__last2934);
          }
      {
        std____cxx11__list_double__std__allocator_double______Finalize_merge____Finalize_merge(&__fin935);
      }
    }
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE5mergeIPFbddEEEvRS2_T_
void void_std____cxx11__list_double__std__allocator_double_____merge_bool_____double__double___std____cxx11__list_double__std__allocator_double______bool____(struct std____cxx11__list_double__std__allocator_double__* v975, struct std____cxx11__list_double__std__allocator_double__* v976, void* v977) {
bb978:
  struct std____cxx11__list_double__std__allocator_double__* this979;
  struct std____cxx11__list_double__std__allocator_double__* __x980;
  void* __comp981;
  this979 = v975;
  __x980 = v976;
  __comp981 = v977;
  struct std____cxx11__list_double__std__allocator_double__* t982 = this979;
  struct std____cxx11__list_double__std__allocator_double__* t983 = __x980;
  void* t984 = __comp981;
  void_std____cxx11__list_double__std__allocator_double_____merge_bool_____double__double___std____cxx11__list_double__std__allocator_double_______bool____(t982, t983, t984);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNKSt7__cxx114listIdSaIdEE4sizeEv
unsigned long std____cxx11__list_double__std__allocator_double_____size___const(struct std____cxx11__list_double__std__allocator_double__* v985) {
bb986:
  struct std____cxx11__list_double__std__allocator_double__* this987;
  unsigned long __retval988;
  this987 = v985;
  struct std____cxx11__list_double__std__allocator_double__* t989 = this987;
  struct std____cxx11___List_base_double__std__allocator_double__* base990 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t989 + 0);
  unsigned long r991 = std____cxx11___List_base_double__std__allocator_double______M_get_size___const(base990);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval988 = r991;
  unsigned long t992 = __retval988;
  return t992;
}

// function: _ZNSt20_List_const_iteratorIdEC2EPKNSt8__detail15_List_node_baseE
void std___List_const_iterator_double____List_const_iterator(struct std___List_const_iterator_double_* v993, struct std____detail___List_node_base* v994) {
bb995:
  struct std___List_const_iterator_double_* this996;
  struct std____detail___List_node_base* __x997;
  this996 = v993;
  __x997 = v994;
  struct std___List_const_iterator_double_* t998 = this996;
  struct std____detail___List_node_base* t999 = __x997;
  t998->_M_node = t999;
  return;
}

// function: _ZNKSt7__cxx114listIdSaIdEE3endEv
struct std___List_const_iterator_double_ std____cxx11__list_double__std__allocator_double_____end___const(struct std____cxx11__list_double__std__allocator_double__* v1000) {
bb1001:
  struct std____cxx11__list_double__std__allocator_double__* this1002;
  struct std___List_const_iterator_double_ __retval1003;
  this1002 = v1000;
  struct std____cxx11__list_double__std__allocator_double__* t1004 = this1002;
  struct std____cxx11___List_base_double__std__allocator_double__* base1005 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t1004 + 0);
  struct std____detail___List_node_base* base1006 = (struct std____detail___List_node_base*)((char *)&(base1005->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r1007 = std____detail___List_node_base___M_base___const(base1006);
  if (__cir_exc_active) {
    struct std___List_const_iterator_double_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___List_const_iterator_double____List_const_iterator(&__retval1003, r1007);
  struct std___List_const_iterator_double_ t1008 = __retval1003;
  return t1008;
}

// function: _ZNKSt7__cxx114listIdSaIdEE5beginEv
struct std___List_const_iterator_double_ std____cxx11__list_double__std__allocator_double_____begin___const(struct std____cxx11__list_double__std__allocator_double__* v1009) {
bb1010:
  struct std____cxx11__list_double__std__allocator_double__* this1011;
  struct std___List_const_iterator_double_ __retval1012;
  this1011 = v1009;
  struct std____cxx11__list_double__std__allocator_double__* t1013 = this1011;
  struct std____cxx11___List_base_double__std__allocator_double__* base1014 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t1013 + 0);
  struct std____detail___List_node_base* base1015 = (struct std____detail___List_node_base*)((char *)&(base1014->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t1016 = base1015->_M_next;
  std___List_const_iterator_double____List_const_iterator(&__retval1012, t1016);
  struct std___List_const_iterator_double_ t1017 = __retval1012;
  return t1017;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIdE7_M_addrEv
void* __gnu_cxx____aligned_membuf_double____M_addr___const(struct __gnu_cxx____aligned_membuf_double_* v1018) {
bb1019:
  struct __gnu_cxx____aligned_membuf_double_* this1020;
  void* __retval1021;
  this1020 = v1018;
  struct __gnu_cxx____aligned_membuf_double_* t1022 = this1020;
  void* cast1023 = (void*)&(t1022->_M_storage);
  __retval1021 = cast1023;
  void* t1024 = __retval1021;
  return t1024;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIdE6_M_ptrEv
double* __gnu_cxx____aligned_membuf_double____M_ptr___const(struct __gnu_cxx____aligned_membuf_double_* v1025) {
bb1026:
  struct __gnu_cxx____aligned_membuf_double_* this1027;
  double* __retval1028;
  this1027 = v1025;
  struct __gnu_cxx____aligned_membuf_double_* t1029 = this1027;
  void* r1030 = __gnu_cxx____aligned_membuf_double____M_addr___const(t1029);
  double* cast1031 = (double*)r1030;
  __retval1028 = cast1031;
  double* t1032 = __retval1028;
  return t1032;
}

// function: _ZNKSt10_List_nodeIdE9_M_valptrEv
double* std___List_node_double____M_valptr___const(struct std___List_node_double_* v1033) {
bb1034:
  struct std___List_node_double_* this1035;
  double* __retval1036;
  this1035 = v1033;
  struct std___List_node_double_* t1037 = this1035;
  double* r1038 = __gnu_cxx____aligned_membuf_double____M_ptr___const(&t1037->_M_storage);
  __retval1036 = r1038;
  double* t1039 = __retval1036;
  return t1039;
}

// function: _ZNKSt20_List_const_iteratorIdEdeEv
double* std___List_const_iterator_double___operator____const(struct std___List_const_iterator_double_* v1040) {
bb1041:
  struct std___List_const_iterator_double_* this1042;
  double* __retval1043;
  this1042 = v1040;
  struct std___List_const_iterator_double_* t1044 = this1042;
  struct std____detail___List_node_base* t1045 = t1044->_M_node;
  struct std___List_node_double_* derived1046 = ((t1045) ? (struct std___List_node_double_*)((char *)t1045 - 0) : (struct std___List_node_double_*)0);
  double* r1047 = std___List_node_double____M_valptr___const(derived1046);
  if (__cir_exc_active) {
    double* __cir_eh_ret = (double*)0;
    return __cir_eh_ret;
  }
  __retval1043 = r1047;
  double* t1048 = __retval1043;
  return t1048;
}

// function: _ZSteqIdSaIdEEbRKNSt7__cxx114listIT_T0_EES7_
_Bool bool_std__operator___double__std__allocator_double___(struct std____cxx11__list_double__std__allocator_double__* v1049, struct std____cxx11__list_double__std__allocator_double__* v1050) {
bb1051:
  struct std____cxx11__list_double__std__allocator_double__* __x1052;
  struct std____cxx11__list_double__std__allocator_double__* __y1053;
  _Bool __retval1054;
  struct std___List_const_iterator_double_ __end11055;
  struct std___List_const_iterator_double_ __end21056;
  struct std___List_const_iterator_double_ __i11057;
  struct std___List_const_iterator_double_ __i21058;
  __x1052 = v1049;
  __y1053 = v1050;
    struct std____cxx11__list_double__std__allocator_double__* t1059 = __x1052;
    unsigned long r1060 = std____cxx11__list_double__std__allocator_double_____size___const(t1059);
    struct std____cxx11__list_double__std__allocator_double__* t1061 = __y1053;
    unsigned long r1062 = std____cxx11__list_double__std__allocator_double_____size___const(t1061);
    _Bool c1063 = ((r1060 != r1062)) ? 1 : 0;
    if (c1063) {
      _Bool c1064 = 0;
      __retval1054 = c1064;
      _Bool t1065 = __retval1054;
      return t1065;
    }
  struct std____cxx11__list_double__std__allocator_double__* t1066 = __x1052;
  struct std___List_const_iterator_double_ r1067 = std____cxx11__list_double__std__allocator_double_____end___const(t1066);
  __end11055 = r1067;
  struct std____cxx11__list_double__std__allocator_double__* t1068 = __y1053;
  struct std___List_const_iterator_double_ r1069 = std____cxx11__list_double__std__allocator_double_____end___const(t1068);
  __end21056 = r1069;
  struct std____cxx11__list_double__std__allocator_double__* t1070 = __x1052;
  struct std___List_const_iterator_double_ r1071 = std____cxx11__list_double__std__allocator_double_____begin___const(t1070);
  __i11057 = r1071;
  struct std____cxx11__list_double__std__allocator_double__* t1072 = __y1053;
  struct std___List_const_iterator_double_ r1073 = std____cxx11__list_double__std__allocator_double_____begin___const(t1072);
  __i21058 = r1073;
    while (1) {
      _Bool r1074 = std__operator___3(&__i11057, &__end11055);
      _Bool u1075 = !r1074;
      _Bool ternary1076;
      if (u1075) {
        _Bool r1077 = std__operator___3(&__i21058, &__end21056);
        _Bool u1078 = !r1077;
        ternary1076 = (_Bool)u1078;
      } else {
        _Bool c1079 = 0;
        ternary1076 = (_Bool)c1079;
      }
      _Bool ternary1080;
      if (ternary1076) {
        double* r1081 = std___List_const_iterator_double___operator____const(&__i11057);
        double t1082 = *r1081;
        double* r1083 = std___List_const_iterator_double___operator____const(&__i21058);
        double t1084 = *r1083;
        _Bool c1085 = ((t1082 == t1084)) ? 1 : 0;
        ternary1080 = (_Bool)c1085;
      } else {
        _Bool c1086 = 0;
        ternary1080 = (_Bool)c1086;
      }
      if (!ternary1080) break;
        struct std___List_const_iterator_double_* r1087 = std___List_const_iterator_double___operator__(&__i11057);
        struct std___List_const_iterator_double_* r1088 = std___List_const_iterator_double___operator__(&__i21058);
    }
  _Bool r1089 = std__operator___3(&__i11057, &__end11055);
  _Bool ternary1090;
  if (r1089) {
    _Bool r1091 = std__operator___3(&__i21058, &__end21056);
    ternary1090 = (_Bool)r1091;
  } else {
    _Bool c1092 = 0;
    ternary1090 = (_Bool)c1092;
  }
  __retval1054 = ternary1090;
  _Bool t1093 = __retval1054;
  return t1093;
}

// function: _ZNSt7__cxx114listIdSaIdEED2Ev
void std____cxx11__list_double__std__allocator_double______list(struct std____cxx11__list_double__std__allocator_double__* v1094) {
bb1095:
  struct std____cxx11__list_double__std__allocator_double__* this1096;
  this1096 = v1094;
  struct std____cxx11__list_double__std__allocator_double__* t1097 = this1096;
  {
    struct std____cxx11___List_base_double__std__allocator_double__* base1098 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t1097 + 0);
    std____cxx11___List_base_double__std__allocator_double_______List_base(base1098);
  }
  return;
}

// function: main
int main() {
bb1099:
  int __retval1100;
  struct std____cxx11__list_double__std__allocator_double__ first1101;
  struct std____cxx11__list_double__std__allocator_double__ second1102;
  double md21103[4];
  struct std____cxx11__list_double__std__allocator_double__ merged1104;
  double ref_tmp01105;
  double ref_tmp11106;
  double ref_tmp21107;
  double ref_tmp31108;
  int c1109 = 0;
  __retval1100 = c1109;
  std____cxx11__list_double__std__allocator_double_____list(&first1101);
    std____cxx11__list_double__std__allocator_double_____list(&second1102);
      // array copy
      __builtin_memcpy(md21103, __const_main_md2, (unsigned long)4 * sizeof(__const_main_md2[0]));
      std____cxx11__list_double__std__allocator_double_____list(&merged1104);
        double c1110 = 0x1.8cccccccccccdp1;
        ref_tmp01105 = c1110;
        std____cxx11__list_double__std__allocator_double_____push_back(&first1101, &ref_tmp01105);
        if (__cir_exc_active) {
          {
            std____cxx11__list_double__std__allocator_double______list(&merged1104);
          }
          {
            std____cxx11__list_double__std__allocator_double______list(&second1102);
          }
          {
            std____cxx11__list_double__std__allocator_double______list(&first1101);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        double c1111 = 0x1.199999999999ap1;
        ref_tmp11106 = c1111;
        std____cxx11__list_double__std__allocator_double_____push_back(&first1101, &ref_tmp11106);
        if (__cir_exc_active) {
          {
            std____cxx11__list_double__std__allocator_double______list(&merged1104);
          }
          {
            std____cxx11__list_double__std__allocator_double______list(&second1102);
          }
          {
            std____cxx11__list_double__std__allocator_double______list(&first1101);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        double c1112 = 0x1.6666666666666p0;
        ref_tmp21107 = c1112;
        std____cxx11__list_double__std__allocator_double_____push_back(&second1102, &ref_tmp21107);
        if (__cir_exc_active) {
          {
            std____cxx11__list_double__std__allocator_double______list(&merged1104);
          }
          {
            std____cxx11__list_double__std__allocator_double______list(&second1102);
          }
          {
            std____cxx11__list_double__std__allocator_double______list(&first1101);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        std____cxx11__list_double__std__allocator_double_____sort(&first1101);
        if (__cir_exc_active) {
          {
            std____cxx11__list_double__std__allocator_double______list(&merged1104);
          }
          {
            std____cxx11__list_double__std__allocator_double______list(&second1102);
          }
          {
            std____cxx11__list_double__std__allocator_double______list(&first1101);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        double c1113 = 0x1.0cccccccccccdp1;
        ref_tmp31108 = c1113;
        std____cxx11__list_double__std__allocator_double_____push_back(&second1102, &ref_tmp31108);
        if (__cir_exc_active) {
          {
            std____cxx11__list_double__std__allocator_double______list(&merged1104);
          }
          {
            std____cxx11__list_double__std__allocator_double______list(&second1102);
          }
          {
            std____cxx11__list_double__std__allocator_double______list(&first1101);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        double* cast1114 = (double*)&(md21103);
        double* cast1115 = (double*)&(md21103);
        int c1116 = 4;
        double* ptr1117 = &(cast1115)[c1116];
        void_std____cxx11__list_double__std__allocator_double_____assign_double___void_(&merged1104, cast1114, ptr1117);
        if (__cir_exc_active) {
          {
            std____cxx11__list_double__std__allocator_double______list(&merged1104);
          }
          {
            std____cxx11__list_double__std__allocator_double______list(&second1102);
          }
          {
            std____cxx11__list_double__std__allocator_double______list(&first1101);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        void_std____cxx11__list_double__std__allocator_double_____merge_bool_____double__double___std____cxx11__list_double__std__allocator_double______bool____(&first1101, &second1102, &mycomparison);
        if (__cir_exc_active) {
          {
            std____cxx11__list_double__std__allocator_double______list(&merged1104);
          }
          {
            std____cxx11__list_double__std__allocator_double______list(&second1102);
          }
          {
            std____cxx11__list_double__std__allocator_double______list(&first1101);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        _Bool r1118 = bool_std__operator___double__std__allocator_double___(&merged1104, &first1101);
        if (__cir_exc_active) {
          {
            std____cxx11__list_double__std__allocator_double______list(&merged1104);
          }
          {
            std____cxx11__list_double__std__allocator_double______list(&second1102);
          }
          {
            std____cxx11__list_double__std__allocator_double______list(&first1101);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        _Bool u1119 = !r1118;
        if (u1119) {
        } else {
          char* cast1120 = (char*)&(_str);
          char* c1121 = _str_1;
          unsigned int c1122 = 35;
          char* cast1123 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1120, c1121, c1122, cast1123);
        }
        int c1124 = 0;
        __retval1100 = c1124;
        int t1125 = __retval1100;
        int ret_val1126 = t1125;
        {
          std____cxx11__list_double__std__allocator_double______list(&merged1104);
        }
        {
          std____cxx11__list_double__std__allocator_double______list(&second1102);
        }
        {
          std____cxx11__list_double__std__allocator_double______list(&first1101);
        }
        return ret_val1126;
  int t1127 = __retval1100;
  return t1127;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE10_List_implC2Ev
void std____cxx11___List_base_double__std__allocator_double______List_impl___List_impl_2(struct std____cxx11___List_base_double__std__allocator_double_____List_impl* v1128) {
bb1129:
  struct std____cxx11___List_base_double__std__allocator_double_____List_impl* this1130;
  this1130 = v1128;
  struct std____cxx11___List_base_double__std__allocator_double_____List_impl* t1131 = this1130;
  struct std__allocator_std___List_node_double__* base1132 = (struct std__allocator_std___List_node_double__*)((char *)t1131 + 0);
  std__allocator_std___List_node_double_____allocator_2(base1132);
    std____detail___List_node_header___List_node_header(&t1131->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE10_List_implD2Ev
void std____cxx11___List_base_double__std__allocator_double______List_impl____List_impl(struct std____cxx11___List_base_double__std__allocator_double_____List_impl* v1133) {
bb1134:
  struct std____cxx11___List_base_double__std__allocator_double_____List_impl* this1135;
  this1135 = v1133;
  struct std____cxx11___List_base_double__std__allocator_double_____List_impl* t1136 = this1135;
  {
    struct std__allocator_std___List_node_double__* base1137 = (struct std__allocator_std___List_node_double__*)((char *)t1136 + 0);
    std__allocator_std___List_node_double______allocator(base1137);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEEC2Ev
void std____cxx11___List_base_double__std__allocator_double______List_base_2(struct std____cxx11___List_base_double__std__allocator_double__* v1138) {
bb1139:
  struct std____cxx11___List_base_double__std__allocator_double__* this1140;
  this1140 = v1138;
  struct std____cxx11___List_base_double__std__allocator_double__* t1141 = this1140;
  std____cxx11___List_base_double__std__allocator_double______List_impl___List_impl_2(&t1141->_M_impl);
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v1142) {
bb1143:
  struct std____detail___List_node_header* this1144;
  struct std____detail___List_node_base* __retval1145;
  this1144 = v1142;
  struct std____detail___List_node_header* t1146 = this1144;
  struct std____detail___List_node_base* base1147 = (struct std____detail___List_node_base*)((char *)t1146 + 0);
  __retval1145 = base1147;
  struct std____detail___List_node_base* t1148 = __retval1145;
  return t1148;
}

// function: _ZSt10destroy_atIdEvPT_
void void_std__destroy_at_double_(double* v1149) {
bb1150:
  double* __location1151;
  __location1151 = v1149;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIdEEE7destroyIdEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_double_______destroy_double_(struct std__allocator_std___List_node_double__* v1152, double* v1153) {
bb1154:
  struct std__allocator_std___List_node_double__* __a1155;
  double* __p1156;
  __a1155 = v1152;
  __p1156 = v1153;
  double* t1157 = __p1156;
  void_std__destroy_at_double_(t1157);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIdE7_M_addrEv
void* __gnu_cxx____aligned_membuf_double____M_addr(struct __gnu_cxx____aligned_membuf_double_* v1158) {
bb1159:
  struct __gnu_cxx____aligned_membuf_double_* this1160;
  void* __retval1161;
  this1160 = v1158;
  struct __gnu_cxx____aligned_membuf_double_* t1162 = this1160;
  void* cast1163 = (void*)&(t1162->_M_storage);
  __retval1161 = cast1163;
  void* t1164 = __retval1161;
  return t1164;
}

// function: _ZN9__gnu_cxx16__aligned_membufIdE6_M_ptrEv
double* __gnu_cxx____aligned_membuf_double____M_ptr(struct __gnu_cxx____aligned_membuf_double_* v1165) {
bb1166:
  struct __gnu_cxx____aligned_membuf_double_* this1167;
  double* __retval1168;
  this1167 = v1165;
  struct __gnu_cxx____aligned_membuf_double_* t1169 = this1167;
  void* r1170 = __gnu_cxx____aligned_membuf_double____M_addr(t1169);
  double* cast1171 = (double*)r1170;
  __retval1168 = cast1171;
  double* t1172 = __retval1168;
  return t1172;
}

// function: _ZNSt10_List_nodeIdE9_M_valptrEv
double* std___List_node_double____M_valptr(struct std___List_node_double_* v1173) {
bb1174:
  struct std___List_node_double_* this1175;
  double* __retval1176;
  this1175 = v1173;
  struct std___List_node_double_* t1177 = this1175;
  double* r1178 = __gnu_cxx____aligned_membuf_double____M_ptr(&t1177->_M_storage);
  __retval1176 = r1178;
  double* t1179 = __retval1176;
  return t1179;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1180:
  _Bool __retval1181;
    _Bool c1182 = 0;
    __retval1181 = c1182;
    _Bool t1183 = __retval1181;
    return t1183;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIdEE10deallocateEPS1_m
void std____new_allocator_std___List_node_double_____deallocate(struct std____new_allocator_std___List_node_double__* v1184, struct std___List_node_double_* v1185, unsigned long v1186) {
bb1187:
  struct std____new_allocator_std___List_node_double__* this1188;
  struct std___List_node_double_* __p1189;
  unsigned long __n1190;
  this1188 = v1184;
  __p1189 = v1185;
  __n1190 = v1186;
  struct std____new_allocator_std___List_node_double__* t1191 = this1188;
    unsigned long c1192 = 8;
    unsigned long c1193 = 16;
    _Bool c1194 = ((c1192 > c1193)) ? 1 : 0;
    if (c1194) {
      struct std___List_node_double_* t1195 = __p1189;
      void* cast1196 = (void*)t1195;
      unsigned long t1197 = __n1190;
      unsigned long c1198 = 24;
      unsigned long b1199 = t1197 * c1198;
      unsigned long c1200 = 8;
      operator_delete_3(cast1196, b1199, c1200);
      return;
    }
  struct std___List_node_double_* t1201 = __p1189;
  void* cast1202 = (void*)t1201;
  unsigned long t1203 = __n1190;
  unsigned long c1204 = 24;
  unsigned long b1205 = t1203 * c1204;
  operator_delete_2(cast1202, b1205);
  return;
}

// function: _ZNSaISt10_List_nodeIdEE10deallocateEPS0_m
void std__allocator_std___List_node_double_____deallocate(struct std__allocator_std___List_node_double__* v1206, struct std___List_node_double_* v1207, unsigned long v1208) {
bb1209:
  struct std__allocator_std___List_node_double__* this1210;
  struct std___List_node_double_* __p1211;
  unsigned long __n1212;
  this1210 = v1206;
  __p1211 = v1207;
  __n1212 = v1208;
  struct std__allocator_std___List_node_double__* t1213 = this1210;
    _Bool r1214 = std____is_constant_evaluated();
    if (r1214) {
      struct std___List_node_double_* t1215 = __p1211;
      void* cast1216 = (void*)t1215;
      operator_delete(cast1216);
      return;
    }
  struct std____new_allocator_std___List_node_double__* base1217 = (struct std____new_allocator_std___List_node_double__*)((char *)t1213 + 0);
  struct std___List_node_double_* t1218 = __p1211;
  unsigned long t1219 = __n1212;
  std____new_allocator_std___List_node_double_____deallocate(base1217, t1218, t1219);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIdEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_double_______deallocate(struct std__allocator_std___List_node_double__* v1220, struct std___List_node_double_* v1221, unsigned long v1222) {
bb1223:
  struct std__allocator_std___List_node_double__* __a1224;
  struct std___List_node_double_* __p1225;
  unsigned long __n1226;
  __a1224 = v1220;
  __p1225 = v1221;
  __n1226 = v1222;
  struct std__allocator_std___List_node_double__* t1227 = __a1224;
  struct std___List_node_double_* t1228 = __p1225;
  unsigned long t1229 = __n1226;
  std__allocator_std___List_node_double_____deallocate(t1227, t1228, t1229);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE11_M_put_nodeEPSt10_List_nodeIdE
void std____cxx11___List_base_double__std__allocator_double______M_put_node(struct std____cxx11___List_base_double__std__allocator_double__* v1230, struct std___List_node_double_* v1231) {
bb1232:
  struct std____cxx11___List_base_double__std__allocator_double__* this1233;
  struct std___List_node_double_* __p1234;
  this1233 = v1230;
  __p1234 = v1231;
  struct std____cxx11___List_base_double__std__allocator_double__* t1235 = this1233;
  struct std__allocator_std___List_node_double__* base1236 = (struct std__allocator_std___List_node_double__*)((char *)&(t1235->_M_impl) + 0);
  struct std___List_node_double_* t1237 = __p1234;
  unsigned long c1238 = 1;
  std__allocator_traits_std__allocator_std___List_node_double_______deallocate(base1236, t1237, c1238);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE15_M_destroy_nodeEPSt10_List_nodeIdE
void std____cxx11___List_base_double__std__allocator_double______M_destroy_node(struct std____cxx11___List_base_double__std__allocator_double__* v1239, struct std___List_node_double_* v1240) {
bb1241:
  struct std____cxx11___List_base_double__std__allocator_double__* this1242;
  struct std___List_node_double_* __p1243;
  this1242 = v1239;
  __p1243 = v1240;
  struct std____cxx11___List_base_double__std__allocator_double__* t1244 = this1242;
  struct std__allocator_std___List_node_double__* base1245 = (struct std__allocator_std___List_node_double__*)((char *)&(t1244->_M_impl) + 0);
  struct std___List_node_double_* t1246 = __p1243;
  double* r1247 = std___List_node_double____M_valptr(t1246);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___List_node_double_______destroy_double_(base1245, r1247);
  struct std___List_node_double_* t1248 = __p1243;
  std____cxx11___List_base_double__std__allocator_double______M_put_node(t1244, t1248);
  return;
}

// function: _ZNSt10_List_nodeIdE11_M_node_ptrEv
struct std___List_node_double_* std___List_node_double____M_node_ptr(struct std___List_node_double_* v1249) {
bb1250:
  struct std___List_node_double_* this1251;
  struct std___List_node_double_* __retval1252;
  this1251 = v1249;
  struct std___List_node_double_* t1253 = this1251;
  __retval1252 = t1253;
  struct std___List_node_double_* t1254 = __retval1252;
  return t1254;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE8_M_clearEv
void std____cxx11___List_base_double__std__allocator_double______M_clear(struct std____cxx11___List_base_double__std__allocator_double__* v1255) {
bb1256:
  struct std____cxx11___List_base_double__std__allocator_double__* this1257;
  struct std____detail___List_node_base* __cur1258;
  this1257 = v1255;
  struct std____cxx11___List_base_double__std__allocator_double__* t1259 = this1257;
  struct std____detail___List_node_base* base1260 = (struct std____detail___List_node_base*)((char *)&(t1259->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t1261 = base1260->_M_next;
  __cur1258 = t1261;
    while (1) {
      struct std____detail___List_node_base* t1262 = __cur1258;
      struct std____detail___List_node_base* r1263 = std____detail___List_node_header___M_base(&t1259->_M_impl._M_node);
      if (__cir_exc_active) {
        return;
      }
      _Bool c1264 = ((t1262 != r1263)) ? 1 : 0;
      if (!c1264) break;
        struct std___List_node_double_* __tmp1265;
        struct std____detail___List_node_base* t1266 = __cur1258;
        struct std___List_node_double_* derived1267 = (struct std___List_node_double_*)((char *)t1266 - 0);
        __tmp1265 = derived1267;
        struct std___List_node_double_* t1268 = __tmp1265;
        struct std____detail___List_node_base* base1269 = (struct std____detail___List_node_base*)((char *)t1268 + 0);
        struct std____detail___List_node_base* t1270 = base1269->_M_next;
        __cur1258 = t1270;
        struct std___List_node_double_* t1271 = __tmp1265;
        struct std___List_node_double_* r1272 = std___List_node_double____M_node_ptr(t1271);
        if (__cir_exc_active) {
          return;
        }
        std____cxx11___List_base_double__std__allocator_double______M_destroy_node(t1259, r1272);
        if (__cir_exc_active) {
          return;
        }
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEED2Ev
void std____cxx11___List_base_double__std__allocator_double_______List_base(struct std____cxx11___List_base_double__std__allocator_double__* v1273) {
bb1274:
  struct std____cxx11___List_base_double__std__allocator_double__* this1275;
  this1275 = v1273;
  struct std____cxx11___List_base_double__std__allocator_double__* t1276 = this1275;
    std____cxx11___List_base_double__std__allocator_double______M_clear(t1276);
  {
    std____cxx11___List_base_double__std__allocator_double______List_impl____List_impl(&t1276->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIdEEC2Ev
void std____new_allocator_std___List_node_double_______new_allocator_2(struct std____new_allocator_std___List_node_double__* v1277) {
bb1278:
  struct std____new_allocator_std___List_node_double__* this1279;
  this1279 = v1277;
  struct std____new_allocator_std___List_node_double__* t1280 = this1279;
  return;
}

// function: _ZNSaISt10_List_nodeIdEEC2Ev
void std__allocator_std___List_node_double_____allocator_2(struct std__allocator_std___List_node_double__* v1281) {
bb1282:
  struct std__allocator_std___List_node_double__* this1283;
  this1283 = v1281;
  struct std__allocator_std___List_node_double__* t1284 = this1283;
  struct std____new_allocator_std___List_node_double__* base1285 = (struct std____new_allocator_std___List_node_double__*)((char *)t1284 + 0);
  std____new_allocator_std___List_node_double_______new_allocator_2(base1285);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v1286) {
bb1287:
  struct std____detail___List_node_header* this1288;
  this1288 = v1286;
  struct std____detail___List_node_header* t1289 = this1288;
  struct std____detail___List_node_base* base1290 = (struct std____detail___List_node_base*)((char *)t1289 + 0);
  struct std____detail___List_size* base1291 = (struct std____detail___List_size*)((char *)t1289 + 16);
  std____detail___List_node_header___M_init(t1289);
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v1292, struct std____detail___List_size* v1293) {
bb1294:
  struct std____detail___List_size* this1295;
  struct std____detail___List_size* unnamed1296;
  struct std____detail___List_size* __retval1297;
  this1295 = v1292;
  unnamed1296 = v1293;
  struct std____detail___List_size* t1298 = this1295;
  struct std____detail___List_size* t1299 = unnamed1296;
  unsigned long t1300 = t1299->_M_size;
  t1298->_M_size = t1300;
  __retval1297 = t1298;
  struct std____detail___List_size* t1301 = __retval1297;
  return t1301;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v1302) {
bb1303:
  struct std____detail___List_node_header* this1304;
  struct std____detail___List_size ref_tmp01305;
  this1304 = v1302;
  struct std____detail___List_node_header* t1306 = this1304;
  struct std____detail___List_node_base* base1307 = (struct std____detail___List_node_base*)((char *)t1306 + 0);
  struct std____detail___List_node_base* base1308 = (struct std____detail___List_node_base*)((char *)t1306 + 0);
  base1308->_M_prev = base1307;
  struct std____detail___List_node_base* base1309 = (struct std____detail___List_node_base*)((char *)t1306 + 0);
  base1309->_M_next = base1307;
  struct std____detail___List_size* base1310 = (struct std____detail___List_size*)((char *)t1306 + 16);
  ref_tmp01305 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r1311 = std____detail___List_size__operator_(base1310, &ref_tmp01305);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIdEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_double_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_double___* v1312, struct std____allocated_ptr_std__allocator_std___List_node_double___* v1313) {
bb1314:
  struct std____allocated_ptr_std__allocator_std___List_node_double___* this1315;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* __gd1316;
  this1315 = v1312;
  __gd1316 = v1313;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t1317 = this1315;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t1318 = __gd1316;
  struct std__allocator_std___List_node_double__* t1319 = t1318->_M_alloc;
  t1317->_M_alloc = t1319;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t1320 = __gd1316;
  struct std___List_node_double_* t1321 = t1320->_M_ptr;
  t1317->_M_ptr = t1321;
  struct std___List_node_double_* c1322 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t1323 = __gd1316;
  t1323->_M_ptr = c1322;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIdEEPT_S3_
struct std___List_node_double_* std___List_node_double___std__to_address_std___List_node_double___(struct std___List_node_double_* v1324) {
bb1325:
  struct std___List_node_double_* __ptr1326;
  struct std___List_node_double_* __retval1327;
  __ptr1326 = v1324;
  struct std___List_node_double_* t1328 = __ptr1326;
  __retval1327 = t1328;
  struct std___List_node_double_* t1329 = __retval1327;
  return t1329;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIdEEDaRKT_
struct std___List_node_double_* auto_std____to_address_std___List_node_double___(struct std___List_node_double_** v1330) {
bb1331:
  struct std___List_node_double_** __ptr1332;
  struct std___List_node_double_* __retval1333;
  __ptr1332 = v1330;
  struct std___List_node_double_** t1334 = __ptr1332;
  struct std___List_node_double_* t1335 = *t1334;
  struct std___List_node_double_* r1336 = std___List_node_double___std__to_address_std___List_node_double___(t1335);
  __retval1333 = r1336;
  struct std___List_node_double_* t1337 = __retval1333;
  return t1337;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIdEEE3getEv
struct std___List_node_double_* std____allocated_ptr_std__allocator_std___List_node_double_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_double___* v1338) {
bb1339:
  struct std____allocated_ptr_std__allocator_std___List_node_double___* this1340;
  struct std___List_node_double_* __retval1341;
  this1340 = v1338;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t1342 = this1340;
  struct std___List_node_double_* r1343 = auto_std____to_address_std___List_node_double___(&t1342->_M_ptr);
  __retval1341 = r1343;
  struct std___List_node_double_* t1344 = __retval1341;
  return t1344;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIdEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_double_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_double___* v1345) {
bb1346:
  struct std____allocated_ptr_std__allocator_std___List_node_double___* this1347;
  _Bool __retval1348;
  this1347 = v1345;
  struct std____allocated_ptr_std__allocator_std___List_node_double___* t1349 = this1347;
  struct std___List_node_double_* t1350 = t1349->_M_ptr;
  _Bool cast1351 = (_Bool)t1350;
  __retval1348 = cast1351;
  _Bool t1352 = __retval1348;
  return t1352;
}

// function: _ZNSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base(struct std____detail___List_node_base* v1353) {
bb1354:
  struct std____detail___List_node_base* this1355;
  struct std____detail___List_node_base* __retval1356;
  this1355 = v1353;
  struct std____detail___List_node_base* t1357 = this1355;
  __retval1356 = t1357;
  struct std____detail___List_node_base* t1358 = __retval1356;
  return t1358;
}

// function: _ZNSt15__new_allocatorIdEC2Ev
void std____new_allocator_double_____new_allocator(struct std____new_allocator_double_* v1359) {
bb1360:
  struct std____new_allocator_double_* this1361;
  this1361 = v1359;
  struct std____new_allocator_double_* t1362 = this1361;
  return;
}

// function: _ZNSaISt10_List_nodeIdEEC2IdEERKSaIT_E
void std__allocator_std___List_node_double_____allocator_double_(struct std__allocator_std___List_node_double__* v1363, struct std__allocator_double_* v1364) {
bb1365:
  struct std__allocator_std___List_node_double__* this1366;
  struct std__allocator_double_* unnamed1367;
  this1366 = v1363;
  unnamed1367 = v1364;
  struct std__allocator_std___List_node_double__* t1368 = this1366;
  struct std____new_allocator_std___List_node_double__* base1369 = (struct std____new_allocator_std___List_node_double__*)((char *)t1368 + 0);
  std____new_allocator_std___List_node_double_______new_allocator_2(base1369);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEE10_List_implC2EOSaISt10_List_nodeIdEE
void std____cxx11___List_base_double__std__allocator_double______List_impl___List_impl(struct std____cxx11___List_base_double__std__allocator_double_____List_impl* v1370, struct std__allocator_std___List_node_double__* v1371) {
bb1372:
  struct std____cxx11___List_base_double__std__allocator_double_____List_impl* this1373;
  struct std__allocator_std___List_node_double__* __a1374;
  this1373 = v1370;
  __a1374 = v1371;
  struct std____cxx11___List_base_double__std__allocator_double_____List_impl* t1375 = this1373;
  struct std__allocator_std___List_node_double__* base1376 = (struct std__allocator_std___List_node_double__*)((char *)t1375 + 0);
  struct std__allocator_std___List_node_double__* t1377 = __a1374;
  std__allocator_std___List_node_double_____allocator(base1376, t1377);
    std____detail___List_node_header___List_node_header(&t1375->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIdSaIdEEC2EOSaISt10_List_nodeIdEE
void std____cxx11___List_base_double__std__allocator_double______List_base(struct std____cxx11___List_base_double__std__allocator_double__* v1378, struct std__allocator_std___List_node_double__* v1379) {
bb1380:
  struct std____cxx11___List_base_double__std__allocator_double__* this1381;
  struct std__allocator_std___List_node_double__* __a1382;
  this1381 = v1378;
  __a1382 = v1379;
  struct std____cxx11___List_base_double__std__allocator_double__* t1383 = this1381;
  struct std__allocator_std___List_node_double__* t1384 = __a1382;
  std____cxx11___List_base_double__std__allocator_double______List_impl___List_impl(&t1383->_M_impl, t1384);
  return;
}

// function: _ZNSaISt10_List_nodeIdEED2Ev
void std__allocator_std___List_node_double______allocator(struct std__allocator_std___List_node_double__* v1385) {
bb1386:
  struct std__allocator_std___List_node_double__* this1387;
  this1387 = v1385;
  struct std__allocator_std___List_node_double__* t1388 = this1387;
  return;
}

// function: _ZSt12construct_atIdJRdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
double* _ZSt12construct_atIdJRdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(double* v1389, double* v1390) {
bb1391:
  double* __location1392;
  double* __args1393;
  double* __retval1394;
  void* __loc1395;
  __location1392 = v1389;
  __args1393 = v1390;
  double* t1396 = __location1392;
  void* cast1397 = (void*)t1396;
  __loc1395 = cast1397;
    void* t1398 = __loc1395;
    double* cast1399 = (double*)t1398;
    double* t1400 = __args1393;
    double t1401 = *t1400;
    *cast1399 = t1401;
    __retval1394 = cast1399;
    double* t1402 = __retval1394;
    return t1402;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIdEEE9constructIdJRdEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_double_______construct_double__double__(struct std__allocator_std___List_node_double__* v1403, double* v1404, double* v1405) {
bb1406:
  struct std__allocator_std___List_node_double__* __a1407;
  double* __p1408;
  double* __args1409;
  __a1407 = v1403;
  __p1408 = v1404;
  __args1409 = v1405;
  double* t1410 = __p1408;
  double* t1411 = __args1409;
  double* r1412 = _ZSt12construct_atIdJRdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1410, t1411);
  return;
}

// function: _ZNSt7__cxx114listIdSaIdEE14_M_create_nodeIJRdEEEPSt10_List_nodeIdEDpOT_
struct std___List_node_double_* std___List_node_double___std____cxx11__list_double__std__allocator_double______M_create_node_double__(struct std____cxx11__list_double__std__allocator_double__* v1413, double* v1414) {
bb1415:
  struct std____cxx11__list_double__std__allocator_double__* this1416;
  double* __args1417;
  struct std___List_node_double_* __retval1418;
  struct std__allocator_std___List_node_double__* __alloc1419;
  struct std____allocated_obj_std__allocator_std___List_node_double___ __guard1420;
  this1416 = v1413;
  __args1417 = v1414;
  struct std____cxx11__list_double__std__allocator_double__* t1421 = this1416;
  struct std____cxx11___List_base_double__std__allocator_double__* base1422 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t1421 + 0);
  struct std__allocator_std___List_node_double__* r1423 = std____cxx11___List_base_double__std__allocator_double______M_get_Node_allocator(base1422);
  __alloc1419 = r1423;
  struct std__allocator_std___List_node_double__* t1424 = __alloc1419;
  struct std____allocated_obj_std__allocator_std___List_node_double___ r1425 = std____allocated_obj_std__allocator_std___List_node_double______std____allocate_guarded_obj_std__allocator_std___List_node_double_____(t1424);
  if (__cir_exc_active) {
    struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
    return __cir_eh_ret;
  }
  __guard1420 = r1425;
    struct std__allocator_std___List_node_double__* t1426 = __alloc1419;
    struct std___List_node_double_* r1427 = std____allocated_obj_std__allocator_std___List_node_double_______operator_____const(&__guard1420);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_double__________allocated_obj(&__guard1420);
      }
      struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
      return __cir_eh_ret;
    }
    double* r1428 = std___List_node_double____M_valptr(r1427);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_double__________allocated_obj(&__guard1420);
      }
      struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
      return __cir_eh_ret;
    }
    double* t1429 = __args1417;
    void_std__allocator_traits_std__allocator_std___List_node_double_______construct_double__double__(t1426, r1428, t1429);
    struct std____allocated_ptr_std__allocator_std___List_node_double___* base1430 = (struct std____allocated_ptr_std__allocator_std___List_node_double___*)((char *)&(__guard1420) + 0);
    struct std___List_node_double_* r1431 = std____allocated_ptr_std__allocator_std___List_node_double_______release(base1430);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_double__________allocated_obj(&__guard1420);
      }
      struct std___List_node_double_* __cir_eh_ret = (struct std___List_node_double_*)0;
      return __cir_eh_ret;
    }
    __retval1418 = r1431;
    struct std___List_node_double_* t1432 = __retval1418;
    struct std___List_node_double_* ret_val1433 = t1432;
    {
      std____allocated_obj_std__allocator_std___List_node_double__________allocated_obj(&__guard1420);
    }
    return ret_val1433;
  abort();
}

// function: _ZNSt7__cxx114listIdSaIdEE9_M_insertIJRdEEEvSt14_List_iteratorIdEDpOT_
void void_std____cxx11__list_double__std__allocator_double______M_insert_double__(struct std____cxx11__list_double__std__allocator_double__* v1434, struct std___List_iterator_double_ v1435, double* v1436) {
bb1437:
  struct std____cxx11__list_double__std__allocator_double__* this1438;
  struct std___List_iterator_double_ __position1439;
  double* __args1440;
  struct std___List_node_double_* __tmp1441;
  this1438 = v1434;
  __position1439 = v1435;
  __args1440 = v1436;
  struct std____cxx11__list_double__std__allocator_double__* t1442 = this1438;
  double* t1443 = __args1440;
  struct std___List_node_double_* r1444 = std___List_node_double___std____cxx11__list_double__std__allocator_double______M_create_node_double__(t1442, t1443);
  if (__cir_exc_active) {
    return;
  }
  __tmp1441 = r1444;
  struct std___List_node_double_* t1445 = __tmp1441;
  struct std____detail___List_node_base* base1446 = (struct std____detail___List_node_base*)((char *)t1445 + 0);
  struct std____detail___List_node_base* t1447 = __position1439._M_node;
  std____detail___List_node_base___M_hook(base1446, t1447);
  struct std____cxx11___List_base_double__std__allocator_double__* base1448 = (struct std____cxx11___List_base_double__std__allocator_double__*)((char *)t1442 + 0);
  unsigned long c1449 = 1;
  std____cxx11___List_base_double__std__allocator_double______M_inc_size(base1448, c1449);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt14_List_iteratorIdEmmEv
struct std___List_iterator_double_* std___List_iterator_double___operator__(struct std___List_iterator_double_* v1450) {
bb1451:
  struct std___List_iterator_double_* this1452;
  struct std___List_iterator_double_* __retval1453;
  this1452 = v1450;
  struct std___List_iterator_double_* t1454 = this1452;
  struct std____detail___List_node_base* t1455 = t1454->_M_node;
  struct std____detail___List_node_base* t1456 = t1455->_M_prev;
  t1454->_M_node = t1456;
  __retval1453 = t1454;
  struct std___List_iterator_double_* t1457 = __retval1453;
  return t1457;
}

// function: _ZNSt7__cxx114listIdSaIdEE4backEv
double* std____cxx11__list_double__std__allocator_double_____back(struct std____cxx11__list_double__std__allocator_double__* v1458) {
bb1459:
  struct std____cxx11__list_double__std__allocator_double__* this1460;
  double* __retval1461;
  struct std___List_iterator_double_ __tmp1462;
  this1460 = v1458;
  struct std____cxx11__list_double__std__allocator_double__* t1463 = this1460;
    do {
          _Bool r1464 = std____cxx11__list_double__std__allocator_double_____empty___const(t1463);
          if (r1464) {
            char* cast1465 = (char*)&(_str_2);
            int c1466 = 1674;
            char* cast1467 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIdSaIdEE4backEv);
            char* cast1468 = (char*)&(_str_3);
            std____glibcxx_assert_fail(cast1465, c1466, cast1467, cast1468);
          }
      _Bool c1469 = 0;
      if (!c1469) break;
    } while (1);
  struct std___List_iterator_double_ r1470 = std____cxx11__list_double__std__allocator_double_____end(t1463);
  __tmp1462 = r1470;
  struct std___List_iterator_double_* r1471 = std___List_iterator_double___operator__(&__tmp1462);
  double* r1472 = std___List_iterator_double___operator____const(&__tmp1462);
  __retval1461 = r1472;
  double* t1473 = __retval1461;
  return t1473;
}

// function: _ZNSt7__cxx114listIdSaIdEE12emplace_backIJRdEEES4_DpOT_
double* double__std____cxx11__list_double__std__allocator_double_____emplace_back_double__(struct std____cxx11__list_double__std__allocator_double__* v1474, double* v1475) {
bb1476:
  struct std____cxx11__list_double__std__allocator_double__* this1477;
  double* __args1478;
  double* __retval1479;
  struct std___List_iterator_double_ agg_tmp01480;
  this1477 = v1474;
  __args1478 = v1475;
  struct std____cxx11__list_double__std__allocator_double__* t1481 = this1477;
  struct std___List_iterator_double_ r1482 = std____cxx11__list_double__std__allocator_double_____end(t1481);
  agg_tmp01480 = r1482;
  double* t1483 = __args1478;
  struct std___List_iterator_double_ t1484 = agg_tmp01480;
  void_std____cxx11__list_double__std__allocator_double______M_insert_double__(t1481, t1484, t1483);
  if (__cir_exc_active) {
    double* __cir_eh_ret = (double*)0;
    return __cir_eh_ret;
  }
  double* r1485 = std____cxx11__list_double__std__allocator_double_____back(t1481);
  __retval1479 = r1485;
  double* t1486 = __retval1479;
  return t1486;
}

// function: _ZNSt7__cxx114listIdSaIdEE22_M_initialize_dispatchIPdEEvT_S5_St12__false_type
void void_std____cxx11__list_double__std__allocator_double______M_initialize_dispatch_double__(struct std____cxx11__list_double__std__allocator_double__* v1487, double* v1488, double* v1489, struct std____false_type v1490) {
bb1491:
  struct std____cxx11__list_double__std__allocator_double__* this1492;
  double* __first1493;
  double* __last1494;
  struct std____false_type unnamed1495;
  _Bool __notempty1496;
  this1492 = v1487;
  __first1493 = v1488;
  __last1494 = v1489;
  unnamed1495 = v1490;
  struct std____cxx11__list_double__std__allocator_double__* t1497 = this1492;
  double* t1498 = __first1493;
  double* t1499 = __last1494;
  _Bool c1500 = ((t1498 != t1499)) ? 1 : 0;
  __notempty1496 = c1500;
    while (1) {
      double* t1502 = __first1493;
      double* t1503 = __last1494;
      _Bool c1504 = ((t1502 != t1503)) ? 1 : 0;
      if (!c1504) break;
      double* t1505 = __first1493;
      double* r1506 = double__std____cxx11__list_double__std__allocator_double_____emplace_back_double__(t1497, t1505);
      if (__cir_exc_active) {
        return;
      }
    for_step1501: ;
      double* t1507 = __first1493;
      int c1508 = 1;
      double* ptr1509 = &(t1507)[c1508];
      __first1493 = ptr1509;
    }
    _Bool t1510 = __notempty1496;
    if (t1510) {
        struct std___List_iterator_double_ ref_tmp01511;
        struct std___List_iterator_double_ ref_tmp11512;
        struct std___List_iterator_double_ r1513 = std____cxx11__list_double__std__allocator_double_____begin(t1497);
        ref_tmp01511 = r1513;
        struct std___List_iterator_double_ r1514 = std____cxx11__list_double__std__allocator_double_____end(t1497);
        ref_tmp11512 = r1514;
        _Bool r1515 = std__operator___2(&ref_tmp01511, &ref_tmp11512);
        if (r1515) {
          __builtin_unreachable();
        }
    }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIdEEC2ERKS2_
void std____new_allocator_std___List_node_double_______new_allocator(struct std____new_allocator_std___List_node_double__* v1516, struct std____new_allocator_std___List_node_double__* v1517) {
bb1518:
  struct std____new_allocator_std___List_node_double__* this1519;
  struct std____new_allocator_std___List_node_double__* unnamed1520;
  this1519 = v1516;
  unnamed1520 = v1517;
  struct std____new_allocator_std___List_node_double__* t1521 = this1519;
  return;
}

// function: _ZNSaISt10_List_nodeIdEEC2ERKS1_
void std__allocator_std___List_node_double_____allocator(struct std__allocator_std___List_node_double__* v1522, struct std__allocator_std___List_node_double__* v1523) {
bb1524:
  struct std__allocator_std___List_node_double__* this1525;
  struct std__allocator_std___List_node_double__* __a1526;
  this1525 = v1522;
  __a1526 = v1523;
  struct std__allocator_std___List_node_double__* t1527 = this1525;
  struct std____new_allocator_std___List_node_double__* base1528 = (struct std____new_allocator_std___List_node_double__*)((char *)t1527 + 0);
  struct std__allocator_std___List_node_double__* t1529 = __a1526;
  struct std____new_allocator_std___List_node_double__* base1530 = (struct std____new_allocator_std___List_node_double__*)((char *)t1529 + 0);
  std____new_allocator_std___List_node_double_______new_allocator(base1528, base1530);
  return;
}

// function: _ZNSt20_List_const_iteratorIdEppEv
struct std___List_const_iterator_double_* std___List_const_iterator_double___operator__(struct std___List_const_iterator_double_* v1531) {
bb1532:
  struct std___List_const_iterator_double_* this1533;
  struct std___List_const_iterator_double_* __retval1534;
  this1533 = v1531;
  struct std___List_const_iterator_double_* t1535 = this1533;
  struct std____detail___List_node_base* t1536 = t1535->_M_node;
  struct std____detail___List_node_base* t1537 = t1536->_M_next;
  t1535->_M_node = t1537;
  __retval1534 = t1535;
  struct std___List_const_iterator_double_* t1538 = __retval1534;
  return t1538;
}

// function: _ZSt10__distanceIdElSt20_List_const_iteratorIT_ES2_St18input_iterator_tag
long long_std____distance_double__2(struct std___List_const_iterator_double_ v1539, struct std___List_const_iterator_double_ v1540, struct std__input_iterator_tag v1541) {
bb1542:
  struct std___List_const_iterator_double_ __first1543;
  struct std___List_const_iterator_double_ __last1544;
  struct std__input_iterator_tag unnamed1545;
  long __retval1546;
  struct std___List_const_iterator_double_ __beyond1547;
  _Bool __whole1548;
  long __n1549;
  __first1543 = v1539;
  __last1544 = v1540;
  unnamed1545 = v1541;
  __beyond1547 = __last1544; // copy
  struct std___List_const_iterator_double_* r1550 = std___List_const_iterator_double___operator__(&__beyond1547);
  _Bool r1551 = std__operator___3(&__first1543, &__beyond1547);
  __whole1548 = r1551;
    _Bool t1552 = __whole1548;
    _Bool isconst1553 = 0;
    _Bool ternary1554;
    if (isconst1553) {
      _Bool t1555 = __whole1548;
      ternary1554 = (_Bool)t1555;
    } else {
      _Bool c1556 = 0;
      ternary1554 = (_Bool)c1556;
    }
    if (ternary1554) {
      struct std____detail___List_node_base* t1557 = __last1544._M_node;
      struct std____detail___List_node_header* derived1558 = ((t1557) ? (struct std____detail___List_node_header*)((char *)t1557 - 0) : (struct std____detail___List_node_header*)0);
      struct std____detail___List_size* base1559 = (struct std____detail___List_size*)((char *)derived1558 + 16);
      unsigned long t1560 = base1559->_M_size;
      long cast1561 = (long)t1560;
      __retval1546 = cast1561;
      long t1562 = __retval1546;
      return t1562;
    }
  long c1563 = 0;
  __n1549 = c1563;
    while (1) {
      _Bool r1564 = std__operator___3(&__first1543, &__last1544);
      _Bool u1565 = !r1564;
      if (!u1565) break;
        struct std___List_const_iterator_double_* r1566 = std___List_const_iterator_double___operator__(&__first1543);
        long t1567 = __n1549;
        long u1568 = t1567 + 1;
        __n1549 = u1568;
    }
  long t1569 = __n1549;
  __retval1546 = t1569;
  long t1570 = __retval1546;
  return t1570;
}

// function: _ZSt10__distanceIdElSt14_List_iteratorIT_ES2_St18input_iterator_tag
long long_std____distance_double_(struct std___List_iterator_double_ v1571, struct std___List_iterator_double_ v1572, struct std__input_iterator_tag v1573) {
bb1574:
  struct std___List_iterator_double_ __first1575;
  struct std___List_iterator_double_ __last1576;
  struct std__input_iterator_tag __tag1577;
  long __retval1578;
  struct std___List_const_iterator_double_ agg_tmp01579;
  struct std___List_const_iterator_double_ agg_tmp11580;
  struct std__input_iterator_tag agg_tmp21581;
  __first1575 = v1571;
  __last1576 = v1572;
  __tag1577 = v1573;
  std___List_const_iterator_double____List_const_iterator_2(&agg_tmp01579, &__first1575);
  std___List_const_iterator_double____List_const_iterator_2(&agg_tmp11580, &__last1576);
  struct std___List_const_iterator_double_ t1582 = agg_tmp01579;
  struct std___List_const_iterator_double_ t1583 = agg_tmp11580;
  struct std__input_iterator_tag t1584 = agg_tmp21581;
  long r1585 = long_std____distance_double__2(t1582, t1583, t1584);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval1578 = r1585;
  long t1586 = __retval1578;
  return t1586;
}

// function: _ZSt19__iterator_categoryISt14_List_iteratorIdEENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__bidirectional_iterator_tag std__iterator_traits_std___List_iterator_double_____iterator_category_std____iterator_category_std___List_iterator_double___(struct std___List_iterator_double_* v1587) {
bb1588:
  struct std___List_iterator_double_* unnamed1589;
  struct std__bidirectional_iterator_tag __retval1590;
  unnamed1589 = v1587;
  struct std__bidirectional_iterator_tag t1591 = __retval1590;
  return t1591;
}

// function: _ZSt8distanceISt14_List_iteratorIdEENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_std___List_iterator_double_____difference_type_std__distance_std___List_iterator_double___(struct std___List_iterator_double_ v1592, struct std___List_iterator_double_ v1593) {
bb1594:
  struct std___List_iterator_double_ __first1595;
  struct std___List_iterator_double_ __last1596;
  long __retval1597;
  struct std___List_iterator_double_ agg_tmp01598;
  struct std___List_iterator_double_ agg_tmp11599;
  struct std__input_iterator_tag agg_tmp21600;
  struct std__bidirectional_iterator_tag ref_tmp01601;
  __first1595 = v1592;
  __last1596 = v1593;
  agg_tmp01598 = __first1595; // copy
  agg_tmp11599 = __last1596; // copy
  struct std__bidirectional_iterator_tag r1602 = std__iterator_traits_std___List_iterator_double_____iterator_category_std____iterator_category_std___List_iterator_double___(&__first1595);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  ref_tmp01601 = r1602;
  struct std__input_iterator_tag* base1603 = (struct std__input_iterator_tag*)((char *)&(ref_tmp01601) + 0);
  struct std___List_iterator_double_ t1604 = agg_tmp01598;
  struct std___List_iterator_double_ t1605 = agg_tmp11599;
  struct std__input_iterator_tag t1606 = agg_tmp21600;
  long r1607 = long_std____distance_double_(t1604, t1605, t1606);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval1597 = r1607;
  long t1608 = __retval1597;
  return t1608;
}

