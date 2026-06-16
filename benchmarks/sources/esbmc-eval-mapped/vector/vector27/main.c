extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

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
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__move_iterator_int___ { int* _M_current; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____imove___IterMove { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
union std__vector_int__std__allocator_int_____Temporary_value___Storage { unsigned char _M_byte; int _M_val; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__vector_int__std__allocator_int_____Temporary_value { struct std__vector_int__std__allocator_int__* _M_this; union std__vector_int__std__allocator_int_____Temporary_value___Storage _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[10] = "0. size: ";
char _str_1[19] = "myints.size() == 0";
char _str_2[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector27/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[10] = "1. size: ";
char _str_4[20] = "myints.size() == 10";
char _str_5[10] = "2. size: ";
char _str_6[20] = "myints.size() == 20";
char _str_7[10] = "3. size: ";
char _str_8[20] = "myints.size() == 19";
char _str_9[26] = "vector::_M_realloc_append";
char _str_10[23] = "vector::_M_fill_insert";
char _str_11[23] = "vector::_M_fill_append";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
char _str_12[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_13[9] = "__n >= 0";
char _str_14[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE8pop_backEv[76] = "void std::vector<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_15[15] = "!this->empty()";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0: ;
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
    unsigned long std14 = __VERIFIER_nondet_unsigned_long();
    unsigned long c15 = 0;
    _Bool c16 = ((std14 == c15)) ? 1 : 0;
    if (c16) {
    } else {
      char* cast17 = (char*)&(_str_1);
      char* c18 = (char*)_str_2;
      unsigned int c19 = 18;
      char* cast20 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast17, c18, c19, cast20);
    }
      int i21;
      int c22 = 0;
      i21 = c22;
      while (1) {
        int t24 = i21;
        int c25 = 10;
        _Bool c26 = ((t24 < c25)) ? 1 : 0;
        if (!c26) break;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int const&)
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
    unsigned long c36 = 10;
    _Bool c37 = ((std35 == c36)) ? 1 : 0;
    if (c37) {
    } else {
      char* cast38 = (char*)&(_str_4);
      char* c39 = (char*)_str_2;
      unsigned int c40 = 22;
      char* cast41 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast38, c39, c40, cast41);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    ref_tmp04 = std42;
    // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
    __VERIFIER_nondet_memory(&agg_tmp03, sizeof(agg_tmp03));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    unsigned long c43 = 10;
    int c44 = 100;
    ref_tmp15 = c44;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t45 = agg_tmp03;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std46;
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
    unsigned long c54 = 20;
    _Bool c55 = ((std53 == c54)) ? 1 : 0;
    if (c55) {
    } else {
      char* cast56 = (char*)&(_str_6);
      char* c57 = (char*)_str_2;
      unsigned int c58 = 26;
      char* cast59 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast56, c57, c58, cast59);
    }
    // externalized std:: op: std::vector<int, std::allocator<int> >::pop_back()
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
    unsigned long c67 = 19;
    _Bool c68 = ((std66 == c67)) ? 1 : 0;
    if (c68) {
    } else {
      char* cast69 = (char*)&(_str_8);
      char* c70 = (char*)_str_2;
      unsigned int c71 = 30;
      char* cast72 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast69, c70, c71, cast72);
    }
    int c73 = 0;
    __retval1 = c73;
    int t74 = __retval1;
    int ret_val75 = t74;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myints2, sizeof(myints2));
    }
    return ret_val75;
  int t76 = __retval1;
  return t76;
}

