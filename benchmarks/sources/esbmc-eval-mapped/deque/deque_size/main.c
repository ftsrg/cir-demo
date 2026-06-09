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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std___Deque_iterator_int_int___int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__ { struct std___Deque_iterator_int__int____int___ _M_first; struct std___Deque_iterator_int__int____int___* _M_cur; struct std__allocator_int_* _M_alloc; };
struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_ { struct std___Deque_iterator_int__int____int___ _M_first; struct std___Deque_iterator_int__int____int___* _M_cur; };
struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____;
struct std____new_allocator_int_;
struct std____new_allocator_int___;
struct std__allocator_int_;
struct std__allocator_int___ { unsigned char __field0; };
struct std__move_iterator_std___Deque_iterator_int__int____int____ { struct std___Deque_iterator_int__int____int___ _M_current; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____imove___IterMove { unsigned char __field0; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[10] = "0. size: ";
char _str_1[19] = "myints.size() == 0";
char _str_2[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_size/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[10] = "1. size: ";
char _str_4[19] = "myints.size() == 5";
char _str_5[10] = "2. size: ";
char _str_6[20] = "myints.size() == 10";
char _str_7[10] = "3. size: ";
char _str_8[19] = "myints.size() == 9";
char _str_9[48] = "cannot create std::deque larger than max_size()";
char _str_10[32] = "deque::_M_new_elements_at_front";
char _str_11[31] = "deque::_M_new_elements_at_back";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
char _str_12[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE8pop_backEv[75] = "void std::deque<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_13[15] = "!this->empty()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__deque_int__std__allocator_int__ myints2;
  struct std___Deque_iterator_int_int___int___ agg_tmp03;
  struct std___Deque_iterator_int__int____int___ ref_tmp04;
  int ref_tmp15;
  struct std___Deque_iterator_int__int____int___ agg_tmp16;
  int c7 = 0;
  __retval1 = c7;
  // externalized std:: op: std::deque<int, std::allocator<int> >::deque()
  __VERIFIER_nondet_memory(&myints2, sizeof(myints2));
    char* cast8 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std9;
    __VERIFIER_nondet_memory(&std9, sizeof(std9));
    unsigned long std10 = __VERIFIER_nondet_unsigned_long();
    int cast11 = (int)std10;
    struct std__basic_ostream_char__std__char_traits_char__* std12;
    __VERIFIER_nondet_memory(&std12, sizeof(std12));
    struct std__basic_ostream_char__std__char_traits_char__* std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    unsigned long std14 = __VERIFIER_nondet_unsigned_long();
    unsigned long c15 = 0;
    _Bool c16 = ((std14 == c15)) ? 1 : 0;
    if (c16) {
    } else {
      char* cast17 = (char*)&(_str_1);
      char* c18 = _str_2;
      unsigned int c19 = 18;
      char* cast20 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast17, c18, c19, cast20);
    }
      int i21;
      int c22 = 0;
      i21 = c22;
      while (1) {
        int t24 = i21;
        int c25 = 5;
        _Bool c26 = ((t24 < c25)) ? 1 : 0;
        if (!c26) break;
        // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int const&)
        __VERIFIER_nondet_memory(&myints2, sizeof(myints2));
        __VERIFIER_nondet_memory(&i21, sizeof(i21));
      for_step23: ;
        int t27 = i21;
        int u28 = t27 + 1;
        i21 = u28;
      }
    char* cast29 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    unsigned long std31 = __VERIFIER_nondet_unsigned_long();
    int cast32 = (int)std31;
    struct std__basic_ostream_char__std__char_traits_char__* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    struct std__basic_ostream_char__std__char_traits_char__* std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    unsigned long std35 = __VERIFIER_nondet_unsigned_long();
    unsigned long c36 = 5;
    _Bool c37 = ((std35 == c36)) ? 1 : 0;
    if (c37) {
    } else {
      char* cast38 = (char*)&(_str_4);
      char* c39 = _str_2;
      unsigned int c40 = 21;
      char* cast41 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast38, c39, c40, cast41);
    }
    struct std___Deque_iterator_int__int____int___ std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    ref_tmp04 = std42;
    // externalized std:: op: std::_Deque_iterator<int, int const&, int const*>::_Deque_iterator<std::_Deque_iterator<int, int&, int*>, void>(std::_Deque_iterator<int, int&, int*> const&)
    __VERIFIER_nondet_memory(&agg_tmp03, sizeof(agg_tmp03));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    unsigned long c43 = 5;
    int c44 = 100;
    ref_tmp15 = c44;
    struct std___Deque_iterator_int_int___int___ t45 = agg_tmp03;
    struct std___Deque_iterator_int__int____int___ std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    agg_tmp16 = std46;
    char* cast47 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    unsigned long std49 = __VERIFIER_nondet_unsigned_long();
    int cast50 = (int)std49;
    struct std__basic_ostream_char__std__char_traits_char__* std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    struct std__basic_ostream_char__std__char_traits_char__* std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    unsigned long std53 = __VERIFIER_nondet_unsigned_long();
    unsigned long c54 = 10;
    _Bool c55 = ((std53 == c54)) ? 1 : 0;
    if (c55) {
    } else {
      char* cast56 = (char*)&(_str_6);
      char* c57 = _str_2;
      unsigned int c58 = 24;
      char* cast59 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast56, c57, c58, cast59);
    }
    // externalized std:: op: std::deque<int, std::allocator<int> >::pop_back()
    __VERIFIER_nondet_memory(&myints2, sizeof(myints2));
    char* cast60 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    unsigned long std62 = __VERIFIER_nondet_unsigned_long();
    int cast63 = (int)std62;
    struct std__basic_ostream_char__std__char_traits_char__* std64;
    __VERIFIER_nondet_memory(&std64, sizeof(std64));
    struct std__basic_ostream_char__std__char_traits_char__* std65;
    __VERIFIER_nondet_memory(&std65, sizeof(std65));
    unsigned long std66 = __VERIFIER_nondet_unsigned_long();
    unsigned long c67 = 9;
    _Bool c68 = ((std66 == c67)) ? 1 : 0;
    if (c68) {
    } else {
      char* cast69 = (char*)&(_str_8);
      char* c70 = _str_2;
      unsigned int c71 = 27;
      char* cast72 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast69, c70, c71, cast72);
    }
    int c73 = 0;
    __retval1 = c73;
    int t74 = __retval1;
    int ret_val75 = t74;
    {
      // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
      __VERIFIER_nondet_memory(&myints2, sizeof(myints2));
    }
    return ret_val75;
  int t76 = __retval1;
  return t76;
}

