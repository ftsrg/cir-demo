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
struct std____new_allocator_double_;
struct std____new_allocator_std___List_node_double__;
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
double __const_main_mydoubles[3] = {0x1.6666666666666p0, 0x1.199999999999ap1, 0x1.7333333333333p1};
char _str[16] = "first != merged";
char _str_1[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_merge_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIdSaIdEE4backEv[84] = "reference std::list<double>::back() [_Tp = double, _Alloc = std::allocator<double>]";
char _str_3[15] = "!this->empty()";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std____cxx11__list_double__std__allocator_double__ first2;
  struct std____cxx11__list_double__std__allocator_double__ second3;
  double mydoubles4[3];
  struct std____cxx11__list_double__std__allocator_double__ merged5;
  double ref_tmp06;
  double ref_tmp17;
  double ref_tmp28;
  int c9 = 0;
  __retval1 = c9;
  // externalized std:: op: std::__cxx11::list<double, std::allocator<double> >::list()
  __VERIFIER_nondet_memory(&first2, sizeof(first2));
    // externalized std:: op: std::__cxx11::list<double, std::allocator<double> >::list()
    __VERIFIER_nondet_memory(&second3, sizeof(second3));
      // array copy
      __builtin_memcpy(mydoubles4, __const_main_mydoubles, (unsigned long)3 * sizeof(__const_main_mydoubles[0]));
      // externalized std:: op: std::__cxx11::list<double, std::allocator<double> >::list()
      __VERIFIER_nondet_memory(&merged5, sizeof(merged5));
        double* cast10 = (double*)&(mydoubles4);
        double* cast11 = (double*)&(mydoubles4);
        int c12 = 3;
        double* ptr13 = &(cast11)[c12];
        // externalized std:: op: void std::__cxx11::list<double, std::allocator<double> >::assign<double*, void>(double*, double*)
        __VERIFIER_nondet_memory(&merged5, sizeof(merged5));
        __VERIFIER_nondet_memory(cast10, sizeof(*cast10));
        __VERIFIER_nondet_memory(ptr13, sizeof(*ptr13));
        double c14 = 0x1.199999999999ap1;
        ref_tmp06 = c14;
        // externalized std:: op: std::__cxx11::list<double, std::allocator<double> >::push_back(double&&)
        __VERIFIER_nondet_memory(&first2, sizeof(first2));
        __VERIFIER_nondet_memory(&ref_tmp06, sizeof(ref_tmp06));
        double c15 = 0x1.7333333333333p1;
        ref_tmp17 = c15;
        // externalized std:: op: std::__cxx11::list<double, std::allocator<double> >::push_back(double&&)
        __VERIFIER_nondet_memory(&first2, sizeof(first2));
        __VERIFIER_nondet_memory(&ref_tmp17, sizeof(ref_tmp17));
        double c16 = 0x1.6666666666666p0;
        ref_tmp28 = c16;
        // externalized std:: op: std::__cxx11::list<double, std::allocator<double> >::push_back(double&&)
        __VERIFIER_nondet_memory(&second3, sizeof(second3));
        __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
        // externalized std:: op: std::__cxx11::list<double, std::allocator<double> >::sort()
        __VERIFIER_nondet_memory(&first2, sizeof(first2));
        // externalized std:: op: std::__cxx11::list<double, std::allocator<double> >::merge(std::__cxx11::list<double, std::allocator<double> >&)
        __VERIFIER_nondet_memory(&first2, sizeof(first2));
        __VERIFIER_nondet_memory(&second3, sizeof(second3));
        _Bool std17;
        __VERIFIER_nondet_memory(&std17, sizeof(std17));
        _Bool u18 = !std17;
        if (u18) {
        } else {
          char* cast19 = (char*)&(_str);
          char* c20 = (char*)_str_1;
          unsigned int c21 = 29;
          char* cast22 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast19, c20, c21, cast22);
        }
        int c23 = 0;
        __retval1 = c23;
        int t24 = __retval1;
        int ret_val25 = t24;
        {
          // externalized std:: op: std::__cxx11::list<double, std::allocator<double> >::~list()
          __VERIFIER_nondet_memory(&merged5, sizeof(merged5));
        }
        {
          // externalized std:: op: std::__cxx11::list<double, std::allocator<double> >::~list()
          __VERIFIER_nondet_memory(&second3, sizeof(second3));
        }
        {
          // externalized std:: op: std::__cxx11::list<double, std::allocator<double> >::~list()
          __VERIFIER_nondet_memory(&first2, sizeof(first2));
        }
        return ret_val25;
  int t26 = __retval1;
  return t26;
}

