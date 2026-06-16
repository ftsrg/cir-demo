extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
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
char _str[15] = "first[3] != 80";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm81/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[16] = "first contains:";
char _str_3[2] = " ";
char _str_4[26] = "vector::_M_realloc_append";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[19] = "__n < this->size()";
int op_increase(int p0);
int op_sum(int p0, int p1);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z11op_increasei
int op_increase(int v0) {
bb1: ;
  int i2;
  int __retval3;
  i2 = v0;
  int t4 = i2;
  int u5 = t4 + 1;
  i2 = u5;
  __retval3 = u5;
  int t6 = __retval3;
  return t6;
}

// function: _Z6op_sumii
int op_sum(int v7, int v8) {
bb9: ;
  int i10;
  int j11;
  int __retval12;
  i10 = v7;
  j11 = v8;
  int t13 = i10;
  int t14 = j11;
  int b15 = t13 + t14;
  __retval12 = b15;
  int t16 = __retval12;
  return t16;
}

// function: main
int main() {
bb17: ;
  int __retval18;
  struct std__vector_int__std__allocator_int__ first19;
  struct std__vector_int__std__allocator_int__ second20;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it21;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp022;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp123;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp224;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp325;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp426;
  int c27 = 0;
  __retval18 = c27;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&first19, sizeof(first19));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
    __VERIFIER_nondet_memory(&second20, sizeof(second20));
      // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
      __VERIFIER_nondet_memory(&it21, sizeof(it21));
        int i28;
        int ref_tmp029;
        int c30 = 1;
        i28 = c30;
        while (1) {
          int t32 = i28;
          int c33 = 6;
          _Bool c34 = ((t32 < c33)) ? 1 : 0;
          if (!c34) break;
          int t35 = i28;
          int c36 = 10;
          int b37 = t35 * c36;
          ref_tmp029 = b37;
          // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
          __VERIFIER_nondet_memory(&first19, sizeof(first19));
          __VERIFIER_nondet_memory(&ref_tmp029, sizeof(ref_tmp029));
        for_step31: ;
          int t38 = i28;
          int u39 = t38 + 1;
          i28 = u39;
        }
        int i40;
        int ref_tmp141;
        int c42 = 1;
        i40 = c42;
        while (1) {
          int t44 = i40;
          int c45 = 6;
          _Bool c46 = ((t44 < c45)) ? 1 : 0;
          if (!c46) break;
          int t47 = i40;
          int c48 = 10;
          int b49 = t47 * c48;
          ref_tmp141 = b49;
          // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
          __VERIFIER_nondet_memory(&second20, sizeof(second20));
          __VERIFIER_nondet_memory(&ref_tmp141, sizeof(ref_tmp141));
        for_step43: ;
          int t50 = i40;
          int u51 = t50 + 1;
          i40 = u51;
        }
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std52;
      __VERIFIER_nondet_memory(&std52, sizeof(std52));
      agg_tmp022 = std52;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std53;
      __VERIFIER_nondet_memory(&std53, sizeof(std53));
      agg_tmp123 = std53;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std54;
      __VERIFIER_nondet_memory(&std54, sizeof(std54));
      agg_tmp224 = std54;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std55;
      __VERIFIER_nondet_memory(&std55, sizeof(std55));
      agg_tmp325 = std55;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t56 = agg_tmp022;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t57 = agg_tmp123;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t58 = agg_tmp224;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t59 = agg_tmp325;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std60;
      __VERIFIER_nondet_memory(&std60, sizeof(std60));
      agg_tmp426 = std60;
      unsigned long c61 = 3;
      int* std62;
      __VERIFIER_nondet_memory(&std62, sizeof(std62));
      int t63 = *std62;
      int c64 = 80;
      _Bool c65 = ((t63 != c64)) ? 1 : 0;
      if (c65) {
      } else {
        char* cast66 = (char*)&(_str);
        char* c67 = (char*)_str_1;
        unsigned int c68 = 35;
        char* cast69 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast66, c67, c68, cast69);
      }
      char* cast70 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std71;
      __VERIFIER_nondet_memory(&std71, sizeof(std71));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp272;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp373;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std74;
        __VERIFIER_nondet_memory(&std74, sizeof(std74));
        ref_tmp272 = std74;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std75;
        __VERIFIER_nondet_memory(&std75, sizeof(std75));
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std77;
          __VERIFIER_nondet_memory(&std77, sizeof(std77));
          ref_tmp373 = std77;
          _Bool std78;
          __VERIFIER_nondet_memory(&std78, sizeof(std78));
          _Bool u79 = !std78;
          if (!u79) break;
          char* cast80 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* std81;
          __VERIFIER_nondet_memory(&std81, sizeof(std81));
          int* std82;
          __VERIFIER_nondet_memory(&std82, sizeof(std82));
          int t83 = *std82;
          struct std__basic_ostream_char__std__char_traits_char__* std84;
          __VERIFIER_nondet_memory(&std84, sizeof(std84));
        for_step76: ;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std85;
          __VERIFIER_nondet_memory(&std85, sizeof(std85));
        }
      struct std__basic_ostream_char__std__char_traits_char__* std86;
      __VERIFIER_nondet_memory(&std86, sizeof(std86));
      int c87 = 0;
      __retval18 = c87;
      int t88 = __retval18;
      int ret_val89 = t88;
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&second20, sizeof(second20));
      }
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&first19, sizeof(first19));
      }
      return ret_val89;
  int t90 = __retval18;
  return t90;
}

