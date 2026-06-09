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
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____detail____move_iter_cat_int___;
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__move_iterator_int___ { int* _M_current; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____imove___IterMove { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[19] = "myvector contains:";
char _str_1[2] = " ";
char _str_2[26] = "vector::_M_realloc_append";
char _str_3[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_4[15] = "!this->empty()";
char _str_5[26] = "vector::_M_default_append";
char _str_6[23] = "vector::_M_fill_append";
char _str_7[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_8[9] = "__n >= 0";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_9[19] = "__n < this->size()";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ myvector2;
  unsigned int i3;
  int ref_tmp14;
  int c5 = 0;
  __retval1 = c5;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
      int ref_tmp06;
      unsigned int c7 = 1;
      i3 = c7;
      while (1) {
        unsigned int t9 = i3;
        unsigned int c10 = 10;
        _Bool c11 = ((t9 < c10)) ? 1 : 0;
        if (!c11) break;
        unsigned int t12 = i3;
        int cast13 = (int)t12;
        ref_tmp06 = cast13;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
        __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
        __VERIFIER_nondet_memory(&ref_tmp06, sizeof(ref_tmp06));
      for_step8: ;
        unsigned int t14 = i3;
        unsigned int u15 = t14 + 1;
        i3 = u15;
      }
    unsigned long c16 = 5;
    // externalized std:: op: std::vector<int, std::allocator<int> >::resize(unsigned long)
    __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    unsigned long c17 = 8;
    int c18 = 100;
    ref_tmp14 = c18;
    // externalized std:: op: std::vector<int, std::allocator<int> >::resize(unsigned long, int const&)
    __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    unsigned long c19 = 12;
    // externalized std:: op: std::vector<int, std::allocator<int> >::resize(unsigned long)
    __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    char* cast20 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
      unsigned int c22 = 0;
      i3 = c22;
      while (1) {
        unsigned int t24 = i3;
        unsigned long cast25 = (unsigned long)t24;
        unsigned long std26 = __VERIFIER_nondet_unsigned_long();
        _Bool c27 = ((cast25 < std26)) ? 1 : 0;
        if (!c27) break;
        char* cast28 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std29;
        __VERIFIER_nondet_memory(&std29, sizeof(std29));
        unsigned int t30 = i3;
        unsigned long cast31 = (unsigned long)t30;
        int* std32;
        __VERIFIER_nondet_memory(&std32, sizeof(std32));
        int t33 = *std32;
        struct std__basic_ostream_char__std__char_traits_char__* std34;
        __VERIFIER_nondet_memory(&std34, sizeof(std34));
      for_step23: ;
        unsigned int t35 = i3;
        unsigned int u36 = t35 + 1;
        i3 = u36;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    int c38 = 0;
    __retval1 = c38;
    int t39 = __retval1;
    int ret_val40 = t39;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    }
    return ret_val40;
  int t41 = __retval1;
  return t41;
}

