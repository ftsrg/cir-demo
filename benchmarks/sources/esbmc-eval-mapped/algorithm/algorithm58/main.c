extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__ranges____distance_fn { unsigned char __field0; };
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

int __const_main_myints[5] = {10, 20, 30, 5, 15};
struct __gnu_cxx____ops___Iter_less_val __const__ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2____cmp;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[22] = "initial max heap   : ";
char _str_1[22] = "max heap after pop : ";
char _str_2[22] = "max heap after push: ";
char _str_3[11] = "v[0] == 99";
char _str_4[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm58/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_5[11] = "v[1] == 20";
char _str_6[11] = "v[2] == 10";
char _str_7[10] = "v[3] == 5";
char _str_8[11] = "v[4] == 15";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_9[49] = "cannot create std::vector larger than max_size()";
char _str_10[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE5frontEv[78] = "reference std::vector<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_11[15] = "!this->empty()";
char _str_12[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_heap.h";
char __PRETTY_FUNCTION____ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_[145] = "void std::pop_heap(_RandomAccessIterator, _RandomAccessIterator) [_RandomAccessIterator = __gnu_cxx::__normal_iterator<int *, std::vector<int>>]";
char _str_13[18] = "__first != __last";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE8pop_backEv[76] = "void std::vector<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_14[26] = "vector::_M_realloc_append";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_15[19] = "__n < this->size()";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  int myints2[5];
  struct std__vector_int__std__allocator_int__ v3;
  struct std__allocator_int_ ref_tmp04;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp05;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp16;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp27;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp38;
  int ref_tmp19;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp410;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp511;
  int c12 = 0;
  __retval1 = c12;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast13 = (int*)&(myints2);
  int* cast14 = (int*)&(myints2);
  int c15 = 5;
  int* ptr16 = &(cast14)[c15];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&v3, sizeof(v3));
    __VERIFIER_nondet_memory(cast13, sizeof(*cast13));
    __VERIFIER_nondet_memory(ptr16, sizeof(*ptr16));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
  }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std17;
    __VERIFIER_nondet_memory(&std17, sizeof(std17));
    agg_tmp05 = std17;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    agg_tmp16 = std18;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t19 = agg_tmp05;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t20 = agg_tmp16;
    // externalized std:: op: void std::make_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
    char* cast21 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    int* std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    int t24 = *std23;
    struct std__basic_ostream_char__std__char_traits_char__* std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    struct std__basic_ostream_char__std__char_traits_char__* std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    agg_tmp27 = std27;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    agg_tmp38 = std28;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t29 = agg_tmp27;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t30 = agg_tmp38;
    // externalized std:: op: void std::pop_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
    // externalized std:: op: std::vector<int, std::allocator<int> >::pop_back()
    __VERIFIER_nondet_memory(&v3, sizeof(v3));
    char* cast31 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    int* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    int t34 = *std33;
    struct std__basic_ostream_char__std__char_traits_char__* std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    struct std__basic_ostream_char__std__char_traits_char__* std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    int c37 = 99;
    ref_tmp19 = c37;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&v3, sizeof(v3));
    __VERIFIER_nondet_memory(&ref_tmp19, sizeof(ref_tmp19));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    agg_tmp410 = std38;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    agg_tmp511 = std39;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t40 = agg_tmp410;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t41 = agg_tmp511;
    // externalized std:: op: void std::push_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
    char* cast42 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    int* std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    int t45 = *std44;
    struct std__basic_ostream_char__std__char_traits_char__* std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    struct std__basic_ostream_char__std__char_traits_char__* std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    unsigned long c48 = 0;
    int* std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    int t50 = *std49;
    int c51 = 99;
    _Bool c52 = ((t50 == c51)) ? 1 : 0;
    if (c52) {
    } else {
      char* cast53 = (char*)&(_str_3);
      char* c54 = (char*)_str_4;
      unsigned int c55 = 27;
      char* cast56 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast53, c54, c55, cast56);
    }
    unsigned long c57 = 1;
    int* std58;
    __VERIFIER_nondet_memory(&std58, sizeof(std58));
    int t59 = *std58;
    int c60 = 20;
    _Bool c61 = ((t59 == c60)) ? 1 : 0;
    if (c61) {
    } else {
      char* cast62 = (char*)&(_str_5);
      char* c63 = (char*)_str_4;
      unsigned int c64 = 28;
      char* cast65 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast62, c63, c64, cast65);
    }
    unsigned long c66 = 2;
    int* std67;
    __VERIFIER_nondet_memory(&std67, sizeof(std67));
    int t68 = *std67;
    int c69 = 10;
    _Bool c70 = ((t68 == c69)) ? 1 : 0;
    if (c70) {
    } else {
      char* cast71 = (char*)&(_str_6);
      char* c72 = (char*)_str_4;
      unsigned int c73 = 29;
      char* cast74 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast71, c72, c73, cast74);
    }
    unsigned long c75 = 3;
    int* std76;
    __VERIFIER_nondet_memory(&std76, sizeof(std76));
    int t77 = *std76;
    int c78 = 5;
    _Bool c79 = ((t77 == c78)) ? 1 : 0;
    if (c79) {
    } else {
      char* cast80 = (char*)&(_str_7);
      char* c81 = (char*)_str_4;
      unsigned int c82 = 30;
      char* cast83 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast80, c81, c82, cast83);
    }
    unsigned long c84 = 4;
    int* std85;
    __VERIFIER_nondet_memory(&std85, sizeof(std85));
    int t86 = *std85;
    int c87 = 15;
    _Bool c88 = ((t86 == c87)) ? 1 : 0;
    if (c88) {
    } else {
      char* cast89 = (char*)&(_str_8);
      char* c90 = (char*)_str_4;
      unsigned int c91 = 31;
      char* cast92 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast89, c90, c91, cast92);
    }
    struct std__basic_ostream_char__std__char_traits_char__* std93;
    __VERIFIER_nondet_memory(&std93, sizeof(std93));
    int c94 = 0;
    __retval1 = c94;
    int t95 = __retval1;
    int ret_val96 = t95;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&v3, sizeof(v3));
    }
    return ret_val96;
  int t97 = __retval1;
  return t97;
}

