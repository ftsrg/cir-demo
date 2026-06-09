extern void abort(void);
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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Setw { int _M_n; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[29] = "Size of vector integers1 is ";
char _str_1[31] = "\nvector after initialization:\n";
char _str_2[30] = "\nSize of vector integers2 is ";
char _str_3[21] = "\nInput 17 integers:\n";
char _str_4[36] = "\nAfter input, the vectors contain:\n";
char _str_5[12] = "integers1:\n";
char _str_6[12] = "integers2:\n";
char _str_7[37] = "\nEvaluating: integers1 != integers2\n";
char _str_8[39] = "integers1 and integers2 are not equal\n";
char _str_9[30] = "\nSize of vector integers3 is ";
char _str_10[36] = "\nAssigning integers2 to integers1:\n";
char _str_11[37] = "\nEvaluating: integers1 == integers2\n";
char _str_12[35] = "integers1 and integers2 are equal\n";
char _str_13[18] = "\nintegers1[5] is ";
char _str_14[34] = "\n\nAssigning 1000 to integers1[5]\n";
char _str_15[46] = "\nAttempt to assign 1000 to integers1.at( 15 )";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_16[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_17[19] = "__n < this->size()";
char _str_18[74] = "vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)";
char __PRETTY_FUNCTION____ZNKSt6vectorIiSaIiEEixEm[104] = "const_reference std::vector<int>::operator[](size_type) const [_Tp = int, _Alloc = std::allocator<int>]";
void outputVector(struct std__vector_int__std__allocator_int__* p0);
void inputVector(struct std__vector_int__std__allocator_int__* p0);
int main();

extern unsigned long __VERIFIER_nondet_unsigned_long(void);
extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z12outputVectorRKSt6vectorIiSaIiEE
void outputVector(struct std__vector_int__std__allocator_int__* v0) {
bb1:
  struct std__vector_int__std__allocator_int__* array2;
  int i3;
  array2 = v0;
    int i4;
    int c5 = 0;
    i4 = c5;
    while (1) {
      int t7 = i4;
      unsigned long cast8 = (unsigned long)t7;
      struct std__vector_int__std__allocator_int__* t9 = array2;
      unsigned long std10 = __VERIFIER_nondet_unsigned_long();
      _Bool c11 = ((cast8 < std10)) ? 1 : 0;
      if (!c11) break;
        struct std___Setw agg_tmp012;
        int c13 = 12;
        struct std___Setw std14;
        __VERIFIER_nondet_memory(&std14, sizeof(std14));
        agg_tmp012 = std14;
        struct std___Setw t15 = agg_tmp012;
        struct std__basic_ostream_char__std__char_traits_char__* std16;
        __VERIFIER_nondet_memory(&std16, sizeof(std16));
        struct std__vector_int__std__allocator_int__* t17 = array2;
        int t18 = i4;
        unsigned long cast19 = (unsigned long)t18;
        int* std20;
        __VERIFIER_nondet_memory(&std20, sizeof(std20));
        int t21 = *std20;
        struct std__basic_ostream_char__std__char_traits_char__* std22;
        __VERIFIER_nondet_memory(&std22, sizeof(std22));
          int t23 = i4;
          int c24 = 1;
          int b25 = t23 + c24;
          int c26 = 4;
          int b27 = b25 % c26;
          int c28 = 0;
          _Bool c29 = ((b27 == c28)) ? 1 : 0;
          if (c29) {
            struct std__basic_ostream_char__std__char_traits_char__* std30;
            __VERIFIER_nondet_memory(&std30, sizeof(std30));
          }
    for_step6: ;
      int t31 = i4;
      int u32 = t31 + 1;
      i4 = u32;
    }
    int t33 = i3;
    int c34 = 4;
    int b35 = t33 % c34;
    int c36 = 0;
    _Bool c37 = ((b35 != c36)) ? 1 : 0;
    if (c37) {
      struct std__basic_ostream_char__std__char_traits_char__* std38;
      __VERIFIER_nondet_memory(&std38, sizeof(std38));
    }
  return;
}

// function: _Z11inputVectorRSt6vectorIiSaIiEE
void inputVector(struct std__vector_int__std__allocator_int__* v39) {
bb40:
  struct std__vector_int__std__allocator_int__* array41;
  array41 = v39;
    int i42;
    int c43 = 0;
    i42 = c43;
    while (1) {
      int t45 = i42;
      unsigned long cast46 = (unsigned long)t45;
      struct std__vector_int__std__allocator_int__* t47 = array41;
      unsigned long std48 = __VERIFIER_nondet_unsigned_long();
      _Bool c49 = ((cast46 < std48)) ? 1 : 0;
      if (!c49) break;
      struct std__vector_int__std__allocator_int__* t50 = array41;
      int t51 = i42;
      unsigned long cast52 = (unsigned long)t51;
      int* std53;
      __VERIFIER_nondet_memory(&std53, sizeof(std53));
      struct std__basic_istream_char__std__char_traits_char__* std54;
      __VERIFIER_nondet_memory(&std54, sizeof(std54));
    for_step44: ;
      int t55 = i42;
      int u56 = t55 + 1;
      i42 = u56;
    }
  return;
}

// function: main
int main() {
bb57:
  int __retval58;
  struct std__vector_int__std__allocator_int__ integers159;
  struct std__vector_int__std__allocator_int__ integers260;
  struct std__vector_int__std__allocator_int__ integers361;
  int c62 = 0;
  __retval58 = c62;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&integers159, sizeof(integers159));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
    __VERIFIER_nondet_memory(&integers260, sizeof(integers260));
      char* cast63 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* std64;
      __VERIFIER_nondet_memory(&std64, sizeof(std64));
      unsigned long std65 = __VERIFIER_nondet_unsigned_long();
      struct std__basic_ostream_char__std__char_traits_char__* std66;
      __VERIFIER_nondet_memory(&std66, sizeof(std66));
      char* cast67 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* std68;
      __VERIFIER_nondet_memory(&std68, sizeof(std68));
      outputVector(&integers159);
      char* cast69 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std70;
      __VERIFIER_nondet_memory(&std70, sizeof(std70));
      unsigned long std71 = __VERIFIER_nondet_unsigned_long();
      struct std__basic_ostream_char__std__char_traits_char__* std72;
      __VERIFIER_nondet_memory(&std72, sizeof(std72));
      char* cast73 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* std74;
      __VERIFIER_nondet_memory(&std74, sizeof(std74));
      outputVector(&integers260);
      char* cast75 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std76;
      __VERIFIER_nondet_memory(&std76, sizeof(std76));
      inputVector(&integers159);
      inputVector(&integers260);
      char* cast77 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std78;
      __VERIFIER_nondet_memory(&std78, sizeof(std78));
      char* cast79 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* std80;
      __VERIFIER_nondet_memory(&std80, sizeof(std80));
      outputVector(&integers159);
      char* cast81 = (char*)&(_str_6);
      struct std__basic_ostream_char__std__char_traits_char__* std82;
      __VERIFIER_nondet_memory(&std82, sizeof(std82));
      outputVector(&integers260);
      char* cast83 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* std84;
      __VERIFIER_nondet_memory(&std84, sizeof(std84));
        _Bool std85;
        __VERIFIER_nondet_memory(&std85, sizeof(std85));
        _Bool u86 = !std85;
        if (u86) {
          char* cast87 = (char*)&(_str_8);
          struct std__basic_ostream_char__std__char_traits_char__* std88;
          __VERIFIER_nondet_memory(&std88, sizeof(std88));
        }
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector(std::vector<int, std::allocator<int> > const&)
      __VERIFIER_nondet_memory(&integers361, sizeof(integers361));
      __VERIFIER_nondet_memory(&integers159, sizeof(integers159));
        char* cast89 = (char*)&(_str_9);
        struct std__basic_ostream_char__std__char_traits_char__* std90;
        __VERIFIER_nondet_memory(&std90, sizeof(std90));
        unsigned long std91 = __VERIFIER_nondet_unsigned_long();
        struct std__basic_ostream_char__std__char_traits_char__* std92;
        __VERIFIER_nondet_memory(&std92, sizeof(std92));
        char* cast93 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std94;
        __VERIFIER_nondet_memory(&std94, sizeof(std94));
        outputVector(&integers361);
        char* cast95 = (char*)&(_str_10);
        struct std__basic_ostream_char__std__char_traits_char__* std96;
        __VERIFIER_nondet_memory(&std96, sizeof(std96));
        struct std__vector_int__std__allocator_int__* std97;
        __VERIFIER_nondet_memory(&std97, sizeof(std97));
        char* cast98 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std99;
        __VERIFIER_nondet_memory(&std99, sizeof(std99));
        outputVector(&integers159);
        char* cast100 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* std101;
        __VERIFIER_nondet_memory(&std101, sizeof(std101));
        outputVector(&integers159);
        char* cast102 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* std103;
        __VERIFIER_nondet_memory(&std103, sizeof(std103));
          _Bool std104;
          __VERIFIER_nondet_memory(&std104, sizeof(std104));
          if (std104) {
            char* cast105 = (char*)&(_str_12);
            struct std__basic_ostream_char__std__char_traits_char__* std106;
            __VERIFIER_nondet_memory(&std106, sizeof(std106));
          }
        char* cast107 = (char*)&(_str_13);
        struct std__basic_ostream_char__std__char_traits_char__* std108;
        __VERIFIER_nondet_memory(&std108, sizeof(std108));
        unsigned long c109 = 5;
        int* std110;
        __VERIFIER_nondet_memory(&std110, sizeof(std110));
        int t111 = *std110;
        struct std__basic_ostream_char__std__char_traits_char__* std112;
        __VERIFIER_nondet_memory(&std112, sizeof(std112));
        char* cast113 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* std114;
        __VERIFIER_nondet_memory(&std114, sizeof(std114));
        int c115 = 1000;
        unsigned long c116 = 5;
        int* std117;
        __VERIFIER_nondet_memory(&std117, sizeof(std117));
        *std117 = c115;
        char* cast118 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std119;
        __VERIFIER_nondet_memory(&std119, sizeof(std119));
        outputVector(&integers159);
        char* cast120 = (char*)&(_str_15);
        struct std__basic_ostream_char__std__char_traits_char__* std121;
        __VERIFIER_nondet_memory(&std121, sizeof(std121));
        struct std__basic_ostream_char__std__char_traits_char__* std122;
        __VERIFIER_nondet_memory(&std122, sizeof(std122));
        int c123 = 1000;
        unsigned long c124 = 15;
        int* std125;
        __VERIFIER_nondet_memory(&std125, sizeof(std125));
        *std125 = c123;
        int c126 = 0;
        __retval58 = c126;
        int t127 = __retval58;
        int ret_val128 = t127;
        {
          // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
          __VERIFIER_nondet_memory(&integers361, sizeof(integers361));
        }
        {
          // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
          __VERIFIER_nondet_memory(&integers260, sizeof(integers260));
        }
        {
          // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
          __VERIFIER_nondet_memory(&integers159, sizeof(integers159));
        }
        return ret_val128;
  int t129 = __retval58;
  return t129;
}

