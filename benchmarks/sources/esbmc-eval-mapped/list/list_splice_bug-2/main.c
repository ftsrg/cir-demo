extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct std___List_const_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std___List_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_int___ { struct std__allocator_std___List_node_int__* _M_alloc; struct std___List_node_int_* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____new_allocator_std___List_node_int__;
struct std__allocator_std___List_node_int__;
struct std__bidirectional_iterator_tag { unsigned char __field0; };
struct std___List_node_int_ { struct std____detail___List_node_base __field0; struct __gnu_cxx____aligned_membuf_int_ _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std____allocated_obj_std__allocator_std___List_node_int___ { struct std____allocated_ptr_std__allocator_std___List_node_int___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
char _str[20] = "mylist1.size() == 7";
char _str_1[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_splice_bug-2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[16] = "mylist2.empty()";
char _str_3[9] = "*it == 2";
char _str_4[10] = "*it == 30";
char _str_5[20] = "mylist1.size() == 6";
char _str_6[20] = "mylist2.size() != 1";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std____cxx11__list_int__std__allocator_int__ mylist12;
  struct std____cxx11__list_int__std__allocator_int__ mylist23;
  struct std___List_iterator_int_ it4;
  struct std___List_iterator_int_ ref_tmp15;
  struct std___List_const_iterator_int_ agg_tmp06;
  struct std___List_iterator_int_ agg_tmp17;
  struct std___List_iterator_int_ agg_tmp28;
  struct std___List_const_iterator_int_ agg_tmp39;
  struct std___List_iterator_int_ ref_tmp210;
  struct std___List_const_iterator_int_ agg_tmp411;
  struct std___List_iterator_int_ ref_tmp312;
  int c13 = 0;
  __retval1 = c13;
  // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list()
  __VERIFIER_nondet_memory(&mylist12, sizeof(mylist12));
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list()
    __VERIFIER_nondet_memory(&mylist23, sizeof(mylist23));
      // externalized std:: op: std::_List_iterator<int>::_List_iterator()
      __VERIFIER_nondet_memory(&it4, sizeof(it4));
        int i14;
        int c15 = 1;
        i14 = c15;
        while (1) {
          int t17 = i14;
          int c18 = 4;
          _Bool c19 = ((t17 <= c18)) ? 1 : 0;
          if (!c19) break;
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int const&)
          __VERIFIER_nondet_memory(&mylist12, sizeof(mylist12));
          __VERIFIER_nondet_memory(&i14, sizeof(i14));
        for_step16: ;
          int t20 = i14;
          int u21 = t20 + 1;
          i14 = u21;
        }
        int i22;
        int ref_tmp023;
        int c24 = 1;
        i22 = c24;
        while (1) {
          int t26 = i22;
          int c27 = 3;
          _Bool c28 = ((t26 <= c27)) ? 1 : 0;
          if (!c28) break;
          int t29 = i22;
          int c30 = 10;
          int b31 = t29 * c30;
          ref_tmp023 = b31;
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
          __VERIFIER_nondet_memory(&mylist23, sizeof(mylist23));
          __VERIFIER_nondet_memory(&ref_tmp023, sizeof(ref_tmp023));
        for_step25: ;
          int t32 = i22;
          int u33 = t32 + 1;
          i22 = u33;
        }
      struct std___List_iterator_int_ std34;
      __VERIFIER_nondet_memory(&std34, sizeof(std34));
      ref_tmp15 = std34;
      struct std___List_iterator_int_* std35;
      __VERIFIER_nondet_memory(&std35, sizeof(std35));
      struct std___List_iterator_int_* std36;
      __VERIFIER_nondet_memory(&std36, sizeof(std36));
      // externalized std:: op: std::_List_const_iterator<int>::_List_const_iterator(std::_List_iterator<int> const&)
      __VERIFIER_nondet_memory(&agg_tmp06, sizeof(agg_tmp06));
      __VERIFIER_nondet_memory(&it4, sizeof(it4));
      struct std___List_const_iterator_int_ t37 = agg_tmp06;
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::splice(std::_List_const_iterator<int>, std::__cxx11::list<int, std::allocator<int> >&)
      __VERIFIER_nondet_memory(&mylist12, sizeof(mylist12));
      __VERIFIER_nondet_memory(&mylist23, sizeof(mylist23));
      unsigned long std38 = __VERIFIER_nondet_unsigned_long();
      unsigned long c39 = 7;
      _Bool c40 = ((std38 == c39)) ? 1 : 0;
      if (c40) {
      } else {
        char* cast41 = (char*)&(_str);
        char* c42 = (char*)_str_1;
        unsigned int c43 = 32;
        char* cast44 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast41, c42, c43, cast44);
      }
      _Bool std45;
      __VERIFIER_nondet_memory(&std45, sizeof(std45));
      if (std45) {
      } else {
        char* cast46 = (char*)&(_str_2);
        char* c47 = (char*)_str_1;
        unsigned int c48 = 33;
        char* cast49 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast46, c47, c48, cast49);
      }
      int* std50;
      __VERIFIER_nondet_memory(&std50, sizeof(std50));
      int t51 = *std50;
      int c52 = 2;
      _Bool c53 = ((t51 == c52)) ? 1 : 0;
      if (c53) {
      } else {
        char* cast54 = (char*)&(_str_3);
        char* c55 = (char*)_str_1;
        unsigned int c56 = 34;
        char* cast57 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast54, c55, c56, cast57);
      }
      int c58 = 0;
      struct std___List_iterator_int_ std59;
      __VERIFIER_nondet_memory(&std59, sizeof(std59));
      agg_tmp17 = std59;
      int* std60;
      __VERIFIER_nondet_memory(&std60, sizeof(std60));
      int t61 = *std60;
      int c62 = 30;
      _Bool c63 = ((t61 == c62)) ? 1 : 0;
      if (c63) {
      } else {
        char* cast64 = (char*)&(_str_4);
        char* c65 = (char*)_str_1;
        unsigned int c66 = 36;
        char* cast67 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast64, c65, c66, cast67);
      }
      int c68 = 0;
      struct std___List_iterator_int_ std69;
      __VERIFIER_nondet_memory(&std69, sizeof(std69));
      agg_tmp28 = std69;
      struct std___List_iterator_int_ std70;
      __VERIFIER_nondet_memory(&std70, sizeof(std70));
      ref_tmp210 = std70;
      // externalized std:: op: std::_List_const_iterator<int>::_List_const_iterator(std::_List_iterator<int> const&)
      __VERIFIER_nondet_memory(&agg_tmp39, sizeof(agg_tmp39));
      __VERIFIER_nondet_memory(&ref_tmp210, sizeof(ref_tmp210));
      // externalized std:: op: std::_List_const_iterator<int>::_List_const_iterator(std::_List_iterator<int> const&)
      __VERIFIER_nondet_memory(&agg_tmp411, sizeof(agg_tmp411));
      __VERIFIER_nondet_memory(&it4, sizeof(it4));
      struct std___List_const_iterator_int_ t71 = agg_tmp39;
      struct std___List_const_iterator_int_ t72 = agg_tmp411;
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::splice(std::_List_const_iterator<int>, std::__cxx11::list<int, std::allocator<int> >&, std::_List_const_iterator<int>)
      __VERIFIER_nondet_memory(&mylist23, sizeof(mylist23));
      __VERIFIER_nondet_memory(&mylist12, sizeof(mylist12));
      unsigned long std73 = __VERIFIER_nondet_unsigned_long();
      unsigned long c74 = 6;
      _Bool c75 = ((std73 == c74)) ? 1 : 0;
      if (c75) {
      } else {
        char* cast76 = (char*)&(_str_5);
        char* c77 = (char*)_str_1;
        unsigned int c78 = 43;
        char* cast79 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast76, c77, c78, cast79);
      }
      unsigned long std80 = __VERIFIER_nondet_unsigned_long();
      unsigned long c81 = 1;
      _Bool c82 = ((std80 != c81)) ? 1 : 0;
      if (c82) {
      } else {
        char* cast83 = (char*)&(_str_6);
        char* c84 = (char*)_str_1;
        unsigned int c85 = 44;
        char* cast86 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast83, c84, c85, cast86);
      }
      struct std___List_iterator_int_ std87;
      __VERIFIER_nondet_memory(&std87, sizeof(std87));
      ref_tmp312 = std87;
      struct std___List_iterator_int_* std88;
      __VERIFIER_nondet_memory(&std88, sizeof(std88));
      int c89 = 3;
      // externalized std:: op: void std::advance<std::_List_iterator<int>, int>(std::_List_iterator<int>&, int)
      __VERIFIER_nondet_memory(&it4, sizeof(it4));
      int c90 = 0;
      __retval1 = c90;
      int t91 = __retval1;
      int ret_val92 = t91;
      {
        // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
        __VERIFIER_nondet_memory(&mylist23, sizeof(mylist23));
      }
      {
        // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
        __VERIFIER_nondet_memory(&mylist12, sizeof(mylist12));
      }
      return ret_val92;
  int t93 = __retval1;
  return t93;
}

