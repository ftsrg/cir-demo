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
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ { void* _M_comp; };
struct __gnu_cxx____ops___Iter_equal_to_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__input_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints1[9] = {10, 10, 20, 20, 30, 0, 0, 0, 0};
int __const_main_myints[9] = {10, 20, 20, 20, 30, 30, 20, 20, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myvector[0] == 10";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm32/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myvector[1] == 20";
char _str_3[18] = "myvector[2] == 30";
char _str_4[18] = "myvector[3] == 20";
char _str_5[18] = "myvector[4] == 30";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[19] = "myvector contains:";
char _str_7[2] = " ";
char _str_8[49] = "cannot create std::vector larger than max_size()";
char _str_9[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
_Bool myfunction(int p0, int p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10myfunctionii
_Bool myfunction(int v0, int v1) {
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

// function: main
int main() {
bb10:
  int __retval11;
  int myints12[9];
  int myints113[9];
  struct std__vector_int__std__allocator_int__ myvector14;
  struct std__allocator_int_ ref_tmp015;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it16;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp117;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp018;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp219;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp120;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp221;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp322;
  int c23 = 0;
  __retval11 = c23;
  // array copy
  __builtin_memcpy(myints12, __const_main_myints, (unsigned long)9 * sizeof(__const_main_myints[0]));
  // array copy
  __builtin_memcpy(myints113, __const_main_myints1, (unsigned long)9 * sizeof(__const_main_myints1[0]));
  unsigned long c24 = 9;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp015, sizeof(ref_tmp015));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector14, sizeof(myvector14));
    __VERIFIER_nondet_memory(&ref_tmp015, sizeof(ref_tmp015));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp015, sizeof(ref_tmp015));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it16, sizeof(it16));
    int* cast25 = (int*)&(myints12);
    int* cast26 = (int*)&(myints12);
    int c27 = 9;
    int* ptr28 = &(cast26)[c27];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    agg_tmp018 = std29;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t30 = agg_tmp018;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    ref_tmp117 = std31;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    int* cast33 = (int*)&(myints113);
    int* cast34 = (int*)&(myints113);
    int c35 = 9;
    int* ptr36 = &(cast34)[c35];
    // externalized std:: op: void std::vector<int, std::allocator<int> >::assign<int*, void>(int*, int*)
    __VERIFIER_nondet_memory(&myvector14, sizeof(myvector14));
    __VERIFIER_nondet_memory(cast33, sizeof(*cast33));
    __VERIFIER_nondet_memory(ptr36, sizeof(*ptr36));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    agg_tmp120 = std37;
    agg_tmp221 = it16; // copy
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    agg_tmp322 = std38;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t39 = agg_tmp120;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t40 = agg_tmp221;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t41 = agg_tmp322;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    ref_tmp219 = std42;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    unsigned long c44 = 0;
    int* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    int t46 = *std45;
    int c47 = 10;
    _Bool c48 = ((t46 == c47)) ? 1 : 0;
    if (c48) {
    } else {
      char* cast49 = (char*)&(_str);
      char* c50 = _str_1;
      unsigned int c51 = 36;
      char* cast52 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast49, c50, c51, cast52);
    }
    unsigned long c53 = 1;
    int* std54;
    __VERIFIER_nondet_memory(&std54, sizeof(std54));
    int t55 = *std54;
    int c56 = 20;
    _Bool c57 = ((t55 == c56)) ? 1 : 0;
    if (c57) {
    } else {
      char* cast58 = (char*)&(_str_2);
      char* c59 = _str_1;
      unsigned int c60 = 37;
      char* cast61 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast58, c59, c60, cast61);
    }
    unsigned long c62 = 2;
    int* std63;
    __VERIFIER_nondet_memory(&std63, sizeof(std63));
    int t64 = *std63;
    int c65 = 30;
    _Bool c66 = ((t64 == c65)) ? 1 : 0;
    if (c66) {
    } else {
      char* cast67 = (char*)&(_str_3);
      char* c68 = _str_1;
      unsigned int c69 = 38;
      char* cast70 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast67, c68, c69, cast70);
    }
    unsigned long c71 = 3;
    int* std72;
    __VERIFIER_nondet_memory(&std72, sizeof(std72));
    int t73 = *std72;
    int c74 = 20;
    _Bool c75 = ((t73 == c74)) ? 1 : 0;
    if (c75) {
    } else {
      char* cast76 = (char*)&(_str_4);
      char* c77 = _str_1;
      unsigned int c78 = 39;
      char* cast79 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast76, c77, c78, cast79);
    }
    unsigned long c80 = 4;
    int* std81;
    __VERIFIER_nondet_memory(&std81, sizeof(std81));
    int t82 = *std81;
    int c83 = 30;
    _Bool c84 = ((t82 == c83)) ? 1 : 0;
    if (c84) {
    } else {
      char* cast85 = (char*)&(_str_5);
      char* c86 = _str_1;
      unsigned int c87 = 40;
      char* cast88 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast85, c86, c87, cast88);
    }
    char* cast89 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std90;
    __VERIFIER_nondet_memory(&std90, sizeof(std90));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp391;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp492;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp493;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std94;
      __VERIFIER_nondet_memory(&std94, sizeof(std94));
      ref_tmp391 = std94;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std95;
      __VERIFIER_nondet_memory(&std95, sizeof(std95));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std97;
        __VERIFIER_nondet_memory(&std97, sizeof(std97));
        ref_tmp492 = std97;
        _Bool std98;
        __VERIFIER_nondet_memory(&std98, sizeof(std98));
        _Bool u99 = !std98;
        if (!u99) break;
        char* cast100 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* std101;
        __VERIFIER_nondet_memory(&std101, sizeof(std101));
        int* std102;
        __VERIFIER_nondet_memory(&std102, sizeof(std102));
        int t103 = *std102;
        struct std__basic_ostream_char__std__char_traits_char__* std104;
        __VERIFIER_nondet_memory(&std104, sizeof(std104));
      for_step96: ;
        int c105 = 0;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std106;
        __VERIFIER_nondet_memory(&std106, sizeof(std106));
        agg_tmp493 = std106;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std107;
    __VERIFIER_nondet_memory(&std107, sizeof(std107));
    int c108 = 0;
    __retval11 = c108;
    int t109 = __retval11;
    int ret_val110 = t109;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector14, sizeof(myvector14));
    }
    return ret_val110;
  int t111 = __retval11;
  return t111;
}

