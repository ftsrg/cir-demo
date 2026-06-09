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
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
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
char _str[6] = "v1 = ";
char _str_1[2] = " ";
char _str_2[6] = "v2 = ";
char _str_3[11] = "v3[6] != 4";
char _str_4[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector17/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_5[6] = "v3 = ";
char _str_6[26] = "vector::_M_realloc_append";
char _str_7[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[35] = "reference std::vector<int>::back()";
char _str_8[15] = "!this->empty()";
char _str_9[49] = "cannot create std::vector larger than max_size()";
char _str_10[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_11[9] = "__n >= 0";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[50] = "reference std::vector<int>::operator[](size_type)";
char _str_12[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ v12;
  struct std__vector_int__std__allocator_int__ v23;
  struct std__vector_int__std__allocator_int__ v34;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ iter5;
  int ref_tmp06;
  int ref_tmp17;
  int ref_tmp28;
  int ref_tmp39;
  int ref_tmp410;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp111;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp212;
  int ref_tmp913;
  int c14 = 0;
  __retval1 = c14;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&v12, sizeof(v12));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
    __VERIFIER_nondet_memory(&v23, sizeof(v23));
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
      __VERIFIER_nondet_memory(&v34, sizeof(v34));
        // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
        __VERIFIER_nondet_memory(&iter5, sizeof(iter5));
        int c15 = 10;
        ref_tmp06 = c15;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
        __VERIFIER_nondet_memory(&v12, sizeof(v12));
        __VERIFIER_nondet_memory(&ref_tmp06, sizeof(ref_tmp06));
        int c16 = 20;
        ref_tmp17 = c16;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
        __VERIFIER_nondet_memory(&v12, sizeof(v12));
        __VERIFIER_nondet_memory(&ref_tmp17, sizeof(ref_tmp17));
        int c17 = 30;
        ref_tmp28 = c17;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
        __VERIFIER_nondet_memory(&v12, sizeof(v12));
        __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
        int c18 = 40;
        ref_tmp39 = c18;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
        __VERIFIER_nondet_memory(&v12, sizeof(v12));
        __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        int c19 = 50;
        ref_tmp410 = c19;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
        __VERIFIER_nondet_memory(&v12, sizeof(v12));
        __VERIFIER_nondet_memory(&ref_tmp410, sizeof(ref_tmp410));
        char* cast20 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* std21;
        __VERIFIER_nondet_memory(&std21, sizeof(std21));
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp522;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp623;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp024;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std25;
          __VERIFIER_nondet_memory(&std25, sizeof(std25));
          ref_tmp522 = std25;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std26;
          __VERIFIER_nondet_memory(&std26, sizeof(std26));
          while (1) {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std28;
            __VERIFIER_nondet_memory(&std28, sizeof(std28));
            ref_tmp623 = std28;
            _Bool std29;
            __VERIFIER_nondet_memory(&std29, sizeof(std29));
            _Bool u30 = !std29;
            if (!u30) break;
            int* std31;
            __VERIFIER_nondet_memory(&std31, sizeof(std31));
            int t32 = *std31;
            struct std__basic_ostream_char__std__char_traits_char__* std33;
            __VERIFIER_nondet_memory(&std33, sizeof(std33));
            char* cast34 = (char*)&(_str_1);
            struct std__basic_ostream_char__std__char_traits_char__* std35;
            __VERIFIER_nondet_memory(&std35, sizeof(std35));
          for_step27: ;
            int c36 = 0;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std37;
            __VERIFIER_nondet_memory(&std37, sizeof(std37));
            agg_tmp024 = std37;
          }
        struct std__basic_ostream_char__std__char_traits_char__* std38;
        __VERIFIER_nondet_memory(&std38, sizeof(std38));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std39;
        __VERIFIER_nondet_memory(&std39, sizeof(std39));
        agg_tmp111 = std39;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std40;
        __VERIFIER_nondet_memory(&std40, sizeof(std40));
        agg_tmp212 = std40;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t41 = agg_tmp111;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t42 = agg_tmp212;
        // externalized std:: op: void std::vector<int, std::allocator<int> >::assign<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, void>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
        __VERIFIER_nondet_memory(&v23, sizeof(v23));
        char* cast43 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* std44;
        __VERIFIER_nondet_memory(&std44, sizeof(std44));
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp745;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp846;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp347;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std48;
          __VERIFIER_nondet_memory(&std48, sizeof(std48));
          ref_tmp745 = std48;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std49;
          __VERIFIER_nondet_memory(&std49, sizeof(std49));
          while (1) {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std51;
            __VERIFIER_nondet_memory(&std51, sizeof(std51));
            ref_tmp846 = std51;
            _Bool std52;
            __VERIFIER_nondet_memory(&std52, sizeof(std52));
            _Bool u53 = !std52;
            if (!u53) break;
            int* std54;
            __VERIFIER_nondet_memory(&std54, sizeof(std54));
            int t55 = *std54;
            struct std__basic_ostream_char__std__char_traits_char__* std56;
            __VERIFIER_nondet_memory(&std56, sizeof(std56));
            char* cast57 = (char*)&(_str_1);
            struct std__basic_ostream_char__std__char_traits_char__* std58;
            __VERIFIER_nondet_memory(&std58, sizeof(std58));
          for_step50: ;
            int c59 = 0;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std60;
            __VERIFIER_nondet_memory(&std60, sizeof(std60));
            agg_tmp347 = std60;
          }
        struct std__basic_ostream_char__std__char_traits_char__* std61;
        __VERIFIER_nondet_memory(&std61, sizeof(std61));
        unsigned long c62 = 7;
        int c63 = 4;
        ref_tmp913 = c63;
        // externalized std:: op: std::vector<int, std::allocator<int> >::assign(unsigned long, int const&)
        __VERIFIER_nondet_memory(&v34, sizeof(v34));
        __VERIFIER_nondet_memory(&ref_tmp913, sizeof(ref_tmp913));
        unsigned long c64 = 6;
        int* std65;
        __VERIFIER_nondet_memory(&std65, sizeof(std65));
        int t66 = *std65;
        int c67 = 4;
        _Bool c68 = ((t66 != c67)) ? 1 : 0;
        if (c68) {
        } else {
          char* cast69 = (char*)&(_str_3);
          char* c70 = _str_4;
          unsigned int c71 = 38;
          char* cast72 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast69, c70, c71, cast72);
        }
        char* cast73 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std74;
        __VERIFIER_nondet_memory(&std74, sizeof(std74));
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1075;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1176;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp477;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std78;
          __VERIFIER_nondet_memory(&std78, sizeof(std78));
          ref_tmp1075 = std78;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std79;
          __VERIFIER_nondet_memory(&std79, sizeof(std79));
          while (1) {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std81;
            __VERIFIER_nondet_memory(&std81, sizeof(std81));
            ref_tmp1176 = std81;
            _Bool std82;
            __VERIFIER_nondet_memory(&std82, sizeof(std82));
            _Bool u83 = !std82;
            if (!u83) break;
            int* std84;
            __VERIFIER_nondet_memory(&std84, sizeof(std84));
            int t85 = *std84;
            struct std__basic_ostream_char__std__char_traits_char__* std86;
            __VERIFIER_nondet_memory(&std86, sizeof(std86));
            char* cast87 = (char*)&(_str_1);
            struct std__basic_ostream_char__std__char_traits_char__* std88;
            __VERIFIER_nondet_memory(&std88, sizeof(std88));
          for_step80: ;
            int c89 = 0;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std90;
            __VERIFIER_nondet_memory(&std90, sizeof(std90));
            agg_tmp477 = std90;
          }
        struct std__basic_ostream_char__std__char_traits_char__* std91;
        __VERIFIER_nondet_memory(&std91, sizeof(std91));
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&v34, sizeof(v34));
      }
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&v23, sizeof(v23));
    }
  {
    // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
    __VERIFIER_nondet_memory(&v12, sizeof(v12));
  }
  int t92 = __retval1;
  return t92;
}

