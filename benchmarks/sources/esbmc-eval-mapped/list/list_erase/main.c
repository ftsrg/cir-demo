extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_unsigned_int_ { unsigned char _M_storage[4]; };
struct std___List_iterator_unsigned_int_ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_unsigned_int___ { struct std__allocator_std___List_node_unsigned_int__* _M_alloc; struct std___List_node_unsigned_int_* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____new_allocator_std___List_node_unsigned_int__;
struct std__allocator_std___List_node_unsigned_int__;
struct std___List_node_unsigned_int_;
struct std____allocated_obj_std__allocator_std___List_node_unsigned_int___ { struct std____allocated_ptr_std__allocator_std___List_node_unsigned_int___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std____cxx11___List_base_unsigned_int__std__allocator_unsigned_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std____cxx11___List_base_unsigned_int__std__allocator_unsigned_int__ { struct std____cxx11___List_base_unsigned_int__std__allocator_unsigned_int_____List_impl _M_impl; };
struct std____cxx11__list_unsigned_int__std__allocator_unsigned_int__ { struct std____cxx11___List_base_unsigned_int__std__allocator_unsigned_int__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  unsigned int i2;
  struct std____cxx11__list_unsigned_int__std__allocator_unsigned_int__ mylist3;
  struct std___List_iterator_unsigned_int_ it14;
  struct std___List_iterator_unsigned_int_ it25;
  int c6 = 0;
  __retval1 = c6;
  // externalized std:: op: std::__cxx11::list<unsigned int, std::allocator<unsigned int> >::list()
  __VERIFIER_nondet_memory(&mylist3, sizeof(mylist3));
    // externalized std:: op: std::_List_iterator<unsigned int>::_List_iterator()
    __VERIFIER_nondet_memory(&it14, sizeof(it14));
    // externalized std:: op: std::_List_iterator<unsigned int>::_List_iterator()
    __VERIFIER_nondet_memory(&it25, sizeof(it25));
      unsigned int ref_tmp07;
      unsigned int c8 = 1;
      i2 = c8;
      while (1) {
        unsigned int t10 = i2;
        unsigned int c11 = 10;
        _Bool c12 = ((t10 < c11)) ? 1 : 0;
        if (!c12) break;
        unsigned int t13 = i2;
        unsigned int c14 = 10;
        unsigned int b15 = t13 * c14;
        ref_tmp07 = b15;
        // externalized std:: op: std::__cxx11::list<unsigned int, std::allocator<unsigned int> >::push_back(unsigned int&&)
        __VERIFIER_nondet_memory(&mylist3, sizeof(mylist3));
        __VERIFIER_nondet_memory(&ref_tmp07, sizeof(ref_tmp07));
      for_step9: ;
        unsigned int t16 = i2;
        unsigned int u17 = t16 + 1;
        i2 = u17;
      }
    int c18 = 0;
    __retval1 = c18;
    int t19 = __retval1;
    int ret_val20 = t19;
    {
      // externalized std:: op: std::__cxx11::list<unsigned int, std::allocator<unsigned int> >::~list()
      __VERIFIER_nondet_memory(&mylist3, sizeof(mylist3));
    }
    return ret_val20;
  int t21 = __retval1;
  return t21;
}

