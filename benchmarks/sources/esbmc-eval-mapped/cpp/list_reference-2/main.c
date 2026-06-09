extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct std___List_const_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std___List_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_int___ { struct std__allocator_std___List_node_int__* _M_alloc; struct std___List_node_int_* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____false_type { unsigned char __field0; };
struct std____new_allocator_int_;
struct std____new_allocator_std___List_node_int__;
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_std___List_node_int__ { unsigned char __field0; };
struct std___List_node_int_;
struct std____allocated_obj_std__allocator_std___List_node_int___ { struct std____allocated_ptr_std__allocator_std___List_node_int___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
int __const_main_myints[4] = {15, 36, 7, 17};
char _str[19] = "mylist.size() == 3";
char _str_1[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/list_reference-2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[10] = "*it == 15";
char _str_3[10] = "*it == 36";
char _str_4[10] = "*it == 17";
char _str_5[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[15] = "!this->empty()";
_Bool single_digit(int* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: _Z12single_digitRKi
_Bool single_digit(int* v0) {
bb1:
  int* value2;
  _Bool __retval3;
  value2 = v0;
  int* t4 = value2;
  int t5 = *t4;
  int c6 = 10;
  _Bool c7 = ((t5 < c6)) ? 1 : 0;
  __retval3 = c7;
  _Bool t8 = __retval3;
  return t8;
}

// function: main
int main() {
bb9:
  int __retval10;
  int myints11[4];
  struct std____cxx11__list_int__std__allocator_int__ mylist12;
  struct std__allocator_int_ ref_tmp013;
  struct std___List_iterator_int_ it14;
  struct std___List_iterator_int_ ref_tmp115;
  struct std___List_iterator_int_ agg_tmp016;
  struct std___List_iterator_int_ agg_tmp117;
  int c18 = 0;
  __retval10 = c18;
  // array copy
  __builtin_memcpy(myints11, __const_main_myints, (unsigned long)4 * sizeof(__const_main_myints[0]));
  int* cast19 = (int*)&(myints11);
  int* cast20 = (int*)&(myints11);
  int c21 = 4;
  int* ptr22 = &(cast20)[c21];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp013, sizeof(ref_tmp013));
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&mylist12, sizeof(mylist12));
    __VERIFIER_nondet_memory(cast19, sizeof(*cast19));
    __VERIFIER_nondet_memory(ptr22, sizeof(*ptr22));
    __VERIFIER_nondet_memory(&ref_tmp013, sizeof(ref_tmp013));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp013, sizeof(ref_tmp013));
  }
    // externalized std:: op: std::_List_iterator<int>::_List_iterator()
    __VERIFIER_nondet_memory(&it14, sizeof(it14));
    unsigned long std23 = __VERIFIER_nondet_unsigned_long();
    unsigned long std24 = __VERIFIER_nondet_unsigned_long();
    unsigned long c25 = 3;
    _Bool c26 = ((std24 == c25)) ? 1 : 0;
    if (c26) {
    } else {
      char* cast27 = (char*)&(_str);
      char* c28 = _str_1;
      unsigned int c29 = 23;
      char* cast30 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast27, c28, c29, cast30);
    }
    struct std___List_iterator_int_ std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    ref_tmp115 = std31;
    struct std___List_iterator_int_* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    int* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    int t34 = *std33;
    int c35 = 15;
    _Bool c36 = ((t34 == c35)) ? 1 : 0;
    if (c36) {
    } else {
      char* cast37 = (char*)&(_str_2);
      char* c38 = _str_1;
      unsigned int c39 = 25;
      char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast37, c38, c39, cast40);
    }
    int c41 = 0;
    struct std___List_iterator_int_ std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    agg_tmp016 = std42;
    int* std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    int t44 = *std43;
    int c45 = 36;
    _Bool c46 = ((t44 == c45)) ? 1 : 0;
    if (c46) {
    } else {
      char* cast47 = (char*)&(_str_3);
      char* c48 = _str_1;
      unsigned int c49 = 27;
      char* cast50 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast47, c48, c49, cast50);
    }
    int c51 = 0;
    struct std___List_iterator_int_ std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    agg_tmp117 = std52;
    int* std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    int t54 = *std53;
    int c55 = 17;
    _Bool c56 = ((t54 == c55)) ? 1 : 0;
    if (c56) {
    } else {
      char* cast57 = (char*)&(_str_4);
      char* c58 = _str_1;
      unsigned int c59 = 29;
      char* cast60 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast57, c58, c59, cast60);
    }
    int c61 = 0;
    __retval10 = c61;
    int t62 = __retval10;
    int ret_val63 = t62;
    {
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
      __VERIFIER_nondet_memory(&mylist12, sizeof(mylist12));
    }
    return ret_val63;
  int t64 = __retval10;
  return t64;
}

