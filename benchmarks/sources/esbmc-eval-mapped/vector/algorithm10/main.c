extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[5] = {20, 40, 60, 80, 100};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[51] = "(equal (myvector.begin(), myvector.end(), myints))";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm10/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[42] = "The contents of both sequences are equal.";
char _str_3[39] = "The contents of both sequences differ.";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_4[49] = "cannot create std::vector larger than max_size()";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
_Bool mypredicate(int p0, int p1);
_Bool bool_equal___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z11mypredicateii
_Bool mypredicate(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = ((t6 == t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: _Z5equalIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEbT_S7_PT0_
_Bool bool_equal___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v10, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v11, int* v12) {
bb13:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first114;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ last115;
  int* first216;
  _Bool __retval17;
  first114 = v10;
  last115 = v11;
  first216 = v12;
    while (1) {
      _Bool std18;
      __VERIFIER_nondet_memory(&std18, sizeof(std18));
      _Bool u19 = !std18;
      if (!u19) break;
          int* std20;
          __VERIFIER_nondet_memory(&std20, sizeof(std20));
          int t21 = *std20;
          int* t22 = first216;
          int t23 = *t22;
          _Bool c24 = ((t21 == t23)) ? 1 : 0;
          _Bool u25 = !c24;
          if (u25) {
            _Bool c26 = 0;
            __retval17 = c26;
            _Bool t27 = __retval17;
            _Bool ret_val28 = t27;
            return ret_val28;
          }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std29;
        __VERIFIER_nondet_memory(&std29, sizeof(std29));
        int* t30 = first216;
        int c31 = 1;
        int* ptr32 = &(t30)[c31];
        first216 = ptr32;
    }
  _Bool c33 = 1;
  __retval17 = c33;
  _Bool t34 = __retval17;
  return t34;
}

// function: main
int main() {
bb35:
  int __retval36;
  int myints37[5];
  struct std__vector_int__std__allocator_int__ myvector38;
  struct std__allocator_int_ ref_tmp039;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp040;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp141;
  int c42 = 0;
  __retval36 = c42;
  // array copy
  __builtin_memcpy(myints37, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast43 = (int*)&(myints37);
  int* cast44 = (int*)&(myints37);
  int c45 = 5;
  int* ptr46 = &(cast44)[c45];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp039, sizeof(ref_tmp039));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector38, sizeof(myvector38));
    __VERIFIER_nondet_memory(cast43, sizeof(*cast43));
    __VERIFIER_nondet_memory(ptr46, sizeof(*ptr46));
    __VERIFIER_nondet_memory(&ref_tmp039, sizeof(ref_tmp039));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp039, sizeof(ref_tmp039));
  }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    agg_tmp040 = std47;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    agg_tmp141 = std48;
    int* cast49 = (int*)&(myints37);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t50 = agg_tmp040;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t51 = agg_tmp141;
    _Bool r52 = bool_equal___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t50, t51, cast49);
    if (r52) {
    } else {
      char* cast53 = (char*)&(_str);
      char* c54 = _str_1;
      unsigned int c55 = 55;
      char* cast56 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast53, c54, c55, cast56);
    }
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp257;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp358;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std59;
      __VERIFIER_nondet_memory(&std59, sizeof(std59));
      agg_tmp257 = std59;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std60;
      __VERIFIER_nondet_memory(&std60, sizeof(std60));
      agg_tmp358 = std60;
      int* cast61 = (int*)&(myints37);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t62 = agg_tmp257;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t63 = agg_tmp358;
      _Bool r64 = bool_equal___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t62, t63, cast61);
      if (r64) {
        char* cast65 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* std66;
        __VERIFIER_nondet_memory(&std66, sizeof(std66));
        struct std__basic_ostream_char__std__char_traits_char__* std67;
        __VERIFIER_nondet_memory(&std67, sizeof(std67));
      } else {
        char* cast68 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std69;
        __VERIFIER_nondet_memory(&std69, sizeof(std69));
        struct std__basic_ostream_char__std__char_traits_char__* std70;
        __VERIFIER_nondet_memory(&std70, sizeof(std70));
      }
    int c71 = 81;
    unsigned long c72 = 3;
    int* std73;
    __VERIFIER_nondet_memory(&std73, sizeof(std73));
    *std73 = c71;
    int c74 = 0;
    __retval36 = c74;
    int t75 = __retval36;
    int ret_val76 = t75;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector38, sizeof(myvector38));
    }
    return ret_val76;
  int t77 = __retval36;
  return t77;
}

