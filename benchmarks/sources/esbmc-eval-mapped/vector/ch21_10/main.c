extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std___List_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____allocated_ptr_std__allocator_std___List_node_int___ { struct std__allocator_std___List_node_int__* _M_alloc; struct std___List_node_int_* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____new_allocator_int_;
struct std____new_allocator_int___;
struct std____new_allocator_std___List_node_int__;
struct std__allocator_int_;
struct std__allocator_int___ { unsigned char __field0; };
struct std__allocator_std___List_node_int__;
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std___List_node_int_;
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std____allocated_obj_std__allocator_std___List_node_int___ { struct std____allocated_ptr_std__allocator_std___List_node_int___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };
struct std__stack_int__std____cxx11__list_int__std__allocator_int___ { struct std____cxx11__list_int__std__allocator_int__ c; };
struct std__stack_int__std__deque_int__std__allocator_int___ { struct std__deque_int__std__allocator_int__ c; };
struct std__stack_int__std__vector_int__std__allocator_int___ { struct std__vector_int__std__allocator_int__ c; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[29] = "Popping from intDequeStack: ";
char _str_1[31] = "\nPopping from intVectorStack: ";
char _str_2[29] = "\nPopping from intListStack: ";
char _str_3[48] = "cannot create std::deque larger than max_size()";
char _str_4[26] = "vector::_M_realloc_append";
char _str_5[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_stack.h";
char __PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3topEv[74] = "reference std::stack<int>::top() [_Tp = int, _Sequence = std::deque<int>]";
char _str_6[15] = "!this->empty()";
char _str_7[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3popEv[69] = "void std::stack<int>::pop() [_Tp = int, _Sequence = std::deque<int>]";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE8pop_backEv[75] = "void std::deque<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt5stackIiSt6vectorIiSaIiEEE3topEv[93] = "reference std::stack<int, std::vector<int>>::top() [_Tp = int, _Sequence = std::vector<int>]";
char _str_8[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt5stackIiSt6vectorIiSaIiEEE3popEv[88] = "void std::stack<int, std::vector<int>>::pop() [_Tp = int, _Sequence = std::vector<int>]";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE8pop_backEv[76] = "void std::vector<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt5stackIiNSt7__cxx114listIiSaIiEEEE3topEv[89] = "reference std::stack<int, std::list<int>>::top() [_Tp = int, _Sequence = std::list<int>]";
char _str_9[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt5stackIiNSt7__cxx114listIiSaIiEEEE3popEv[84] = "void std::stack<int, std::list<int>>::pop() [_Tp = int, _Sequence = std::list<int>]";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE8pop_backEv[74] = "void std::list<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
void void_popElements_std__stack_int__std__deque_int__std__allocator_int_______(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
void void_popElements_std__stack_int__std__vector_int__std__allocator_int_______(struct std__stack_int__std__vector_int__std__allocator_int___* p0);
void void_popElements_std__stack_int__std____cxx11__list_int__std__allocator_int_______(struct std__stack_int__std____cxx11__list_int__std__allocator_int___* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z11popElementsISt5stackIiSt5dequeIiSaIiEEEEvRT_
void void_popElements_std__stack_int__std__deque_int__std__allocator_int_______(struct std__stack_int__std__deque_int__std__allocator_int___* v0) {
bb1:
  struct std__stack_int__std__deque_int__std__allocator_int___* stackRef2;
  stackRef2 = v0;
    while (1) {
      struct std__stack_int__std__deque_int__std__allocator_int___* t3 = stackRef2;
      _Bool std4;
      __VERIFIER_nondet_memory(&std4, sizeof(std4));
      _Bool u5 = !std4;
      if (!u5) break;
        struct std__stack_int__std__deque_int__std__allocator_int___* t6 = stackRef2;
        int* std7;
        __VERIFIER_nondet_memory(&std7, sizeof(std7));
        int t8 = *std7;
        struct std__basic_ostream_char__std__char_traits_char__* std9;
        __VERIFIER_nondet_memory(&std9, sizeof(std9));
        char c10 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* std11;
        __VERIFIER_nondet_memory(&std11, sizeof(std11));
        struct std__stack_int__std__deque_int__std__allocator_int___* t12 = stackRef2;
        // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::pop()
        __VERIFIER_nondet_memory(t12, sizeof(*t12));
    }
  return;
}

// function: _Z11popElementsISt5stackIiSt6vectorIiSaIiEEEEvRT_
void void_popElements_std__stack_int__std__vector_int__std__allocator_int_______(struct std__stack_int__std__vector_int__std__allocator_int___* v13) {
bb14:
  struct std__stack_int__std__vector_int__std__allocator_int___* stackRef15;
  stackRef15 = v13;
    while (1) {
      struct std__stack_int__std__vector_int__std__allocator_int___* t16 = stackRef15;
      _Bool std17;
      __VERIFIER_nondet_memory(&std17, sizeof(std17));
      _Bool u18 = !std17;
      if (!u18) break;
        struct std__stack_int__std__vector_int__std__allocator_int___* t19 = stackRef15;
        int* std20;
        __VERIFIER_nondet_memory(&std20, sizeof(std20));
        int t21 = *std20;
        struct std__basic_ostream_char__std__char_traits_char__* std22;
        __VERIFIER_nondet_memory(&std22, sizeof(std22));
        char c23 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* std24;
        __VERIFIER_nondet_memory(&std24, sizeof(std24));
        struct std__stack_int__std__vector_int__std__allocator_int___* t25 = stackRef15;
        // externalized std:: op: std::stack<int, std::vector<int, std::allocator<int> > >::pop()
        __VERIFIER_nondet_memory(t25, sizeof(*t25));
    }
  return;
}

// function: _Z11popElementsISt5stackIiNSt7__cxx114listIiSaIiEEEEEvRT_
void void_popElements_std__stack_int__std____cxx11__list_int__std__allocator_int_______(struct std__stack_int__std____cxx11__list_int__std__allocator_int___* v26) {
bb27:
  struct std__stack_int__std____cxx11__list_int__std__allocator_int___* stackRef28;
  stackRef28 = v26;
    while (1) {
      struct std__stack_int__std____cxx11__list_int__std__allocator_int___* t29 = stackRef28;
      _Bool std30;
      __VERIFIER_nondet_memory(&std30, sizeof(std30));
      _Bool u31 = !std30;
      if (!u31) break;
        struct std__stack_int__std____cxx11__list_int__std__allocator_int___* t32 = stackRef28;
        int* std33;
        __VERIFIER_nondet_memory(&std33, sizeof(std33));
        int t34 = *std33;
        struct std__basic_ostream_char__std__char_traits_char__* std35;
        __VERIFIER_nondet_memory(&std35, sizeof(std35));
        char c36 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* std37;
        __VERIFIER_nondet_memory(&std37, sizeof(std37));
        struct std__stack_int__std____cxx11__list_int__std__allocator_int___* t38 = stackRef28;
        // externalized std:: op: std::stack<int, std::__cxx11::list<int, std::allocator<int> > >::pop()
        __VERIFIER_nondet_memory(t38, sizeof(*t38));
    }
  return;
}

// function: main
int main() {
bb39:
  int __retval40;
  struct std__stack_int__std__deque_int__std__allocator_int___ intDequeStack41;
  struct std__stack_int__std__vector_int__std__allocator_int___ intVectorStack42;
  struct std__stack_int__std____cxx11__list_int__std__allocator_int___ intListStack43;
  int c44 = 0;
  __retval40 = c44;
  // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::stack<std::deque<int, std::allocator<int> >, void>()
  __VERIFIER_nondet_memory(&intDequeStack41, sizeof(intDequeStack41));
    // externalized std:: op: std::stack<int, std::vector<int, std::allocator<int> > >::stack<std::vector<int, std::allocator<int> >, void>()
    __VERIFIER_nondet_memory(&intVectorStack42, sizeof(intVectorStack42));
      // externalized std:: op: std::stack<int, std::__cxx11::list<int, std::allocator<int> > >::stack<std::__cxx11::list<int, std::allocator<int> >, void>()
      __VERIFIER_nondet_memory(&intListStack43, sizeof(intListStack43));
          int i45;
          int c46 = 0;
          i45 = c46;
          while (1) {
            int t48 = i45;
            int c49 = 10;
            _Bool c50 = ((t48 < c49)) ? 1 : 0;
            if (!c50) break;
              // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::push(int const&)
              __VERIFIER_nondet_memory(&intDequeStack41, sizeof(intDequeStack41));
              __VERIFIER_nondet_memory(&i45, sizeof(i45));
              // externalized std:: op: std::stack<int, std::vector<int, std::allocator<int> > >::push(int const&)
              __VERIFIER_nondet_memory(&intVectorStack42, sizeof(intVectorStack42));
              __VERIFIER_nondet_memory(&i45, sizeof(i45));
              // externalized std:: op: std::stack<int, std::__cxx11::list<int, std::allocator<int> > >::push(int const&)
              __VERIFIER_nondet_memory(&intListStack43, sizeof(intListStack43));
              __VERIFIER_nondet_memory(&i45, sizeof(i45));
          for_step47: ;
            int t51 = i45;
            int u52 = t51 + 1;
            i45 = u52;
          }
        char* cast53 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* std54;
        __VERIFIER_nondet_memory(&std54, sizeof(std54));
        void_popElements_std__stack_int__std__deque_int__std__allocator_int_______(&intDequeStack41);
        if (__cir_exc_active) {
          {
            // externalized std:: op: std::stack<int, std::__cxx11::list<int, std::allocator<int> > >::~stack()
            __VERIFIER_nondet_memory(&intListStack43, sizeof(intListStack43));
          }
          {
            // externalized std:: op: std::stack<int, std::vector<int, std::allocator<int> > >::~stack()
            __VERIFIER_nondet_memory(&intVectorStack42, sizeof(intVectorStack42));
          }
          {
            // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::~stack()
            __VERIFIER_nondet_memory(&intDequeStack41, sizeof(intDequeStack41));
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        char* cast55 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std56;
        __VERIFIER_nondet_memory(&std56, sizeof(std56));
        void_popElements_std__stack_int__std__vector_int__std__allocator_int_______(&intVectorStack42);
        if (__cir_exc_active) {
          {
            // externalized std:: op: std::stack<int, std::__cxx11::list<int, std::allocator<int> > >::~stack()
            __VERIFIER_nondet_memory(&intListStack43, sizeof(intListStack43));
          }
          {
            // externalized std:: op: std::stack<int, std::vector<int, std::allocator<int> > >::~stack()
            __VERIFIER_nondet_memory(&intVectorStack42, sizeof(intVectorStack42));
          }
          {
            // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::~stack()
            __VERIFIER_nondet_memory(&intDequeStack41, sizeof(intDequeStack41));
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        char* cast57 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* std58;
        __VERIFIER_nondet_memory(&std58, sizeof(std58));
        void_popElements_std__stack_int__std____cxx11__list_int__std__allocator_int_______(&intListStack43);
        if (__cir_exc_active) {
          {
            // externalized std:: op: std::stack<int, std::__cxx11::list<int, std::allocator<int> > >::~stack()
            __VERIFIER_nondet_memory(&intListStack43, sizeof(intListStack43));
          }
          {
            // externalized std:: op: std::stack<int, std::vector<int, std::allocator<int> > >::~stack()
            __VERIFIER_nondet_memory(&intVectorStack42, sizeof(intVectorStack42));
          }
          {
            // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::~stack()
            __VERIFIER_nondet_memory(&intDequeStack41, sizeof(intDequeStack41));
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        struct std__basic_ostream_char__std__char_traits_char__* std59;
        __VERIFIER_nondet_memory(&std59, sizeof(std59));
        int c60 = 0;
        __retval40 = c60;
        int t61 = __retval40;
        int ret_val62 = t61;
        {
          // externalized std:: op: std::stack<int, std::__cxx11::list<int, std::allocator<int> > >::~stack()
          __VERIFIER_nondet_memory(&intListStack43, sizeof(intListStack43));
        }
        {
          // externalized std:: op: std::stack<int, std::vector<int, std::allocator<int> > >::~stack()
          __VERIFIER_nondet_memory(&intVectorStack42, sizeof(intVectorStack42));
        }
        {
          // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::~stack()
          __VERIFIER_nondet_memory(&intDequeStack41, sizeof(intDequeStack41));
        }
        return ret_val62;
  int t63 = __retval40;
  return t63;
}

