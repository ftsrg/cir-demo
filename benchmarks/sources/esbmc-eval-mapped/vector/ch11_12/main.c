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
union std__vector_int__std__allocator_int_____Temporary_value___Storage { unsigned char _M_byte; int _M_val; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std__vector_int__std__allocator_int_____Temporary_value { struct std__vector_int__std__allocator_int__* _M_this; union std__vector_int__std__allocator_int_____Temporary_value___Storage _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[10] = "0. size: ";
char _str_1[10] = "1. size: ";
char _str_2[10] = "2. size: ";
char _str_3[10] = "3. size: ";
char _str_4[26] = "vector::_M_realloc_append";
char _str_5[23] = "vector::_M_fill_insert";
char _str_6[23] = "vector::_M_fill_append";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
char _str_7[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_8[9] = "__n >= 0";
char _str_9[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE8pop_backEv[76] = "void std::vector<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[15] = "!this->empty()";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ myints2;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp03;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp04;
  int ref_tmp15;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp16;
  int c7 = 0;
  __retval1 = c7;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
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
      int i14;
      int c15 = 0;
      i14 = c15;
      while (1) {
        int t17 = i14;
        int c18 = 10;
        _Bool c19 = ((t17 < c18)) ? 1 : 0;
        if (!c19) break;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int const&)
        __VERIFIER_nondet_memory(&myints2, sizeof(myints2));
        __VERIFIER_nondet_memory(&i14, sizeof(i14));
      for_step16: ;
        int t20 = i14;
        int u21 = t20 + 1;
        i14 = u21;
      }
    char* cast22 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    unsigned long std24 = __VERIFIER_nondet_unsigned_long();
    int cast25 = (int)std24;
    struct std__basic_ostream_char__std__char_traits_char__* std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    struct std__basic_ostream_char__std__char_traits_char__* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    ref_tmp04 = std28;
    // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
    __VERIFIER_nondet_memory(&agg_tmp03, sizeof(agg_tmp03));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    unsigned long c29 = 10;
    int c30 = 100;
    ref_tmp15 = c30;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t31 = agg_tmp03;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    agg_tmp16 = std32;
    char* cast33 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    unsigned long std35 = __VERIFIER_nondet_unsigned_long();
    int cast36 = (int)std35;
    struct std__basic_ostream_char__std__char_traits_char__* std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    struct std__basic_ostream_char__std__char_traits_char__* std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    // externalized std:: op: std::vector<int, std::allocator<int> >::pop_back()
    __VERIFIER_nondet_memory(&myints2, sizeof(myints2));
    char* cast39 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    unsigned long std41 = __VERIFIER_nondet_unsigned_long();
    int cast42 = (int)std41;
    struct std__basic_ostream_char__std__char_traits_char__* std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    struct std__basic_ostream_char__std__char_traits_char__* std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    int c45 = 0;
    __retval1 = c45;
    int t46 = __retval1;
    int ret_val47 = t46;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myints2, sizeof(myints2));
    }
    return ret_val47;
  int t48 = __retval1;
  return t48;
}

