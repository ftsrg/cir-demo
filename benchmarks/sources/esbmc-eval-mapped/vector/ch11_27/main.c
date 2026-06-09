extern void abort(void);
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
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[16] = "first contains:";
char _str_1[2] = " ";
char _str_2[18] = "\nsecond contains:";
char _str_3[49] = "cannot create std::vector larger than max_size()";
char _str_4[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_5[9] = "__n >= 0";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
char _str_6[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4swapERS1_[93] = "void std::vector<int>::swap(vector<_Tp, _Alloc> &) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[104] = "_Alloc_traits::propagate_on_container_swap::value || _M_get_Tp_allocator() == __x._M_get_Tp_allocator()";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_8[19] = "__n < this->size()";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  unsigned int i2;
  struct std__vector_int__std__allocator_int__ first3;
  int ref_tmp04;
  struct std__allocator_int_ ref_tmp15;
  struct std__vector_int__std__allocator_int__ second6;
  int ref_tmp27;
  struct std__allocator_int_ ref_tmp38;
  int c9 = 0;
  __retval1 = c9;
  unsigned long c10 = 3;
  int c11 = 100;
  ref_tmp04 = c11;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&first3, sizeof(first3));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
  }
    unsigned long c12 = 5;
    int c13 = 200;
    ref_tmp27 = c13;
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp38, sizeof(ref_tmp38));
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&second6, sizeof(second6));
      __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      __VERIFIER_nondet_memory(&ref_tmp38, sizeof(ref_tmp38));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp38, sizeof(ref_tmp38));
    }
      // externalized std:: op: std::vector<int, std::allocator<int> >::swap(std::vector<int, std::allocator<int> >&)
      __VERIFIER_nondet_memory(&first3, sizeof(first3));
      __VERIFIER_nondet_memory(&second6, sizeof(second6));
      char* cast14 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* std15;
      __VERIFIER_nondet_memory(&std15, sizeof(std15));
        unsigned int c16 = 0;
        i2 = c16;
        while (1) {
          unsigned int t18 = i2;
          unsigned long cast19 = (unsigned long)t18;
          unsigned long std20 = __VERIFIER_nondet_unsigned_long();
          _Bool c21 = ((cast19 < std20)) ? 1 : 0;
          if (!c21) break;
          char* cast22 = (char*)&(_str_1);
          struct std__basic_ostream_char__std__char_traits_char__* std23;
          __VERIFIER_nondet_memory(&std23, sizeof(std23));
          unsigned int t24 = i2;
          unsigned long cast25 = (unsigned long)t24;
          int* std26;
          __VERIFIER_nondet_memory(&std26, sizeof(std26));
          int t27 = *std26;
          struct std__basic_ostream_char__std__char_traits_char__* std28;
          __VERIFIER_nondet_memory(&std28, sizeof(std28));
        for_step17: ;
          unsigned int t29 = i2;
          unsigned int u30 = t29 + 1;
          i2 = u30;
        }
      char* cast31 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std32;
      __VERIFIER_nondet_memory(&std32, sizeof(std32));
        unsigned int c33 = 0;
        i2 = c33;
        while (1) {
          unsigned int t35 = i2;
          unsigned long cast36 = (unsigned long)t35;
          unsigned long std37 = __VERIFIER_nondet_unsigned_long();
          _Bool c38 = ((cast36 < std37)) ? 1 : 0;
          if (!c38) break;
          char* cast39 = (char*)&(_str_1);
          struct std__basic_ostream_char__std__char_traits_char__* std40;
          __VERIFIER_nondet_memory(&std40, sizeof(std40));
          unsigned int t41 = i2;
          unsigned long cast42 = (unsigned long)t41;
          int* std43;
          __VERIFIER_nondet_memory(&std43, sizeof(std43));
          int t44 = *std43;
          struct std__basic_ostream_char__std__char_traits_char__* std45;
          __VERIFIER_nondet_memory(&std45, sizeof(std45));
        for_step34: ;
          unsigned int t46 = i2;
          unsigned int u47 = t46 + 1;
          i2 = u47;
        }
      struct std__basic_ostream_char__std__char_traits_char__* std48;
      __VERIFIER_nondet_memory(&std48, sizeof(std48));
      int c49 = 0;
      __retval1 = c49;
      int t50 = __retval1;
      int ret_val51 = t50;
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&second6, sizeof(second6));
      }
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&first3, sizeof(first3));
      }
      return ret_val51;
  int t52 = __retval1;
  return t52;
}

