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
struct std__ios_base;
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[9] = "*it != 4";
char _str_1[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/list_reference-3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[6] = "*it: ";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__list_int__std__allocator_int__ mylist2;
  struct std___List_iterator_int_ it3;
  struct std___List_iterator_int_ ref_tmp04;
  int c5 = 0;
  __retval1 = c5;
  // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list()
  __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    // externalized std:: op: std::_List_iterator<int>::_List_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
      int i6;
      int c7 = 1;
      i6 = c7;
      while (1) {
        int t9 = i6;
        int c10 = 5;
        _Bool c11 = ((t9 < c10)) ? 1 : 0;
        if (!c11) break;
        // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int const&)
        __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
        __VERIFIER_nondet_memory(&i6, sizeof(i6));
      for_step8: ;
        int t12 = i6;
        int u13 = t12 + 1;
        i6 = u13;
      }
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::reverse()
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    struct std___List_iterator_int_ std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    ref_tmp04 = std14;
    struct std___List_iterator_int_* std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
    int* std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    int t17 = *std16;
    int c18 = 4;
    _Bool c19 = ((t17 != c18)) ? 1 : 0;
    if (c19) {
    } else {
      char* cast20 = (char*)&(_str);
      char* c21 = _str_1;
      unsigned int c22 = 24;
      char* cast23 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast20, c21, c22, cast23);
    }
    char* cast24 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    int* std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    int t27 = *std26;
    struct std__basic_ostream_char__std__char_traits_char__* std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    struct std__basic_ostream_char__std__char_traits_char__* std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    int c30 = 0;
    __retval1 = c30;
    int t31 = __retval1;
    int ret_val32 = t31;
    {
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
      __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    }
    return ret_val32;
  int t33 = __retval1;
  return t33;
}

