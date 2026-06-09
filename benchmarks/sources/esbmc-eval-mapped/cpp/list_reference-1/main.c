extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___List_const_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std___List_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_int___ { struct std__allocator_std___List_node_int__* _M_alloc; struct std___List_node_int_* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____new_allocator_std___List_node_int__;
struct std__allocator_std___List_node_int__;
struct std___List_node_int_;
struct std____allocated_obj_std__allocator_std___List_node_int___ { struct std____allocated_ptr_std__allocator_std___List_node_int___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std__ctype_char_;
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
char _str[9] = "*it == 4";
char _str_1[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/list_reference-1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__list_int__std__allocator_int__ mylist2;
  struct std___List_iterator_int_ it3;
  int ref_tmp04;
  int ref_tmp15;
  int ref_tmp26;
  int ref_tmp37;
  struct std___List_iterator_int_ ref_tmp48;
  struct std___List_const_iterator_int_ agg_tmp09;
  int ref_tmp510;
  struct std___List_iterator_int_ agg_tmp111;
  struct std___List_iterator_int_ ref_tmp612;
  struct std___List_iterator_int_ agg_tmp213;
  struct std___List_iterator_int_ agg_tmp314;
  struct std___List_iterator_int_ agg_tmp415;
  struct std___List_iterator_int_ agg_tmp516;
  int c17 = 0;
  __retval1 = c17;
  // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list()
  __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    // externalized std:: op: std::_List_iterator<int>::_List_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    int c18 = 1;
    ref_tmp04 = c18;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    int c19 = 2;
    ref_tmp15 = c19;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    int c20 = 3;
    ref_tmp26 = c20;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
    int c21 = 4;
    ref_tmp37 = c21;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
    struct std___List_iterator_int_ std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    ref_tmp48 = std22;
    struct std___List_iterator_int_* std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    struct std___List_iterator_int_* std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    // externalized std:: op: std::_List_const_iterator<int>::_List_const_iterator(std::_List_iterator<int> const&)
    __VERIFIER_nondet_memory(&agg_tmp09, sizeof(agg_tmp09));
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    int c25 = 10;
    ref_tmp510 = c25;
    struct std___List_const_iterator_int_ t26 = agg_tmp09;
    struct std___List_iterator_int_ std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    agg_tmp111 = std27;
    struct std___List_iterator_int_ std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    ref_tmp612 = std28;
    struct std___List_iterator_int_* std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    int c30 = 0;
    struct std___List_iterator_int_ std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    agg_tmp213 = std31;
    int c32 = 0;
    struct std___List_iterator_int_ std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    agg_tmp314 = std33;
    int c34 = 0;
    struct std___List_iterator_int_ std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    agg_tmp415 = std35;
    int c36 = 0;
    struct std___List_iterator_int_ std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    agg_tmp516 = std37;
    int* std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    int t39 = *std38;
    int c40 = 4;
    _Bool c41 = ((t39 == c40)) ? 1 : 0;
    if (c41) {
    } else {
      char* cast42 = (char*)&(_str);
      char* c43 = _str_1;
      unsigned int c44 = 34;
      char* cast45 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast42, c43, c44, cast45);
    }
    int* std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    int t47 = *std46;
    struct std__basic_ostream_char__std__char_traits_char__* std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    struct std__basic_ostream_char__std__char_traits_char__* std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    int c50 = 0;
    __retval1 = c50;
    int t51 = __retval1;
    int ret_val52 = t51;
    {
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
      __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    }
    return ret_val52;
  int t53 = __retval1;
  return t53;
}

