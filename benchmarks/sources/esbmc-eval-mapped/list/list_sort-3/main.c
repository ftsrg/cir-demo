extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct std___List_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_int___ { struct std__allocator_std___List_node_int__* _M_alloc; struct std___List_node_int_* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____list___Scratch_list_std____detail___List_node_base_ { struct std____detail___List_node_base __field0; };
struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_ { unsigned char __field0; };
struct std____new_allocator_std___List_node_int__;
struct std__allocator_std___List_node_int__;
struct std___List_node_int_;
struct std____allocated_obj_std__allocator_std___List_node_int___ { struct std____allocated_ptr_std__allocator_std___List_node_int___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
char _str[20] = "mylist.front() == 1";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_sort-3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "mylist.back() == 4";
char _str_3[19] = "mylist.size() == 4";
char _str_4[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE5frontEv[76] = "reference std::list<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__list_int__std__allocator_int__ mylist2;
  int ref_tmp03;
  int ref_tmp14;
  int ref_tmp25;
  int ref_tmp36;
  int c7 = 0;
  __retval1 = c7;
  // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list()
  __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    int c8 = 3;
    ref_tmp03 = c8;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    int c9 = 2;
    ref_tmp14 = c9;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    int c10 = 4;
    ref_tmp25 = c10;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp25, sizeof(ref_tmp25));
    int c11 = 1;
    ref_tmp36 = c11;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp36, sizeof(ref_tmp36));
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::sort()
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    int* std12;
    __VERIFIER_nondet_memory(&std12, sizeof(std12));
    int t13 = *std12;
    int c14 = 1;
    _Bool c15 = ((t13 == c14)) ? 1 : 0;
    if (c15) {
    } else {
      char* cast16 = (char*)&(_str);
      char* c17 = _str_1;
      unsigned int c18 = 24;
      char* cast19 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast16, c17, c18, cast19);
    }
    int* std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    int t21 = *std20;
    int c22 = 4;
    _Bool c23 = ((t21 == c22)) ? 1 : 0;
    if (c23) {
    } else {
      char* cast24 = (char*)&(_str_2);
      char* c25 = _str_1;
      unsigned int c26 = 25;
      char* cast27 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast24, c25, c26, cast27);
    }
    unsigned long std28 = __VERIFIER_nondet_unsigned_long();
    unsigned long c29 = 4;
    _Bool c30 = ((std28 == c29)) ? 1 : 0;
    if (c30) {
    } else {
      char* cast31 = (char*)&(_str_3);
      char* c32 = _str_1;
      unsigned int c33 = 26;
      char* cast34 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast31, c32, c33, cast34);
    }
    int c35 = 0;
    __retval1 = c35;
    int t36 = __retval1;
    int ret_val37 = t36;
    {
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
      __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    }
    return ret_val37;
  int t38 = __retval1;
  return t38;
}

