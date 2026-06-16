extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
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

int __const_main_myints1[9] = {10, 10, 20, 20, 30, 0, 0, 0, 0};
int __const_main_myints[9] = {10, 20, 20, 20, 30, 30, 20, 20, 10};
char _str[9] = "*it == 0";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm32/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[49] = "cannot create std::vector larger than max_size()";
char _str_3[26] = "vector::_M_default_append";
_Bool myfunction(int p0, int p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______unique_copy_esbmc_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______unique_copy_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, void* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern long __VERIFIER_nondet_long(void);
// function: _Z10myfunctionii
_Bool myfunction(int v0, int v1) {
bb2: ;
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

// function: _Z17unique_copy_esbmcIiN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET0_PT_S9_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______unique_copy_esbmc_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v10, int* v11, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v12) {
bb13: ;
  int* first14;
  int* last15;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ dest16;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval17;
  int value18;
  first14 = v10;
  last15 = v11;
  dest16 = v12;
  int* t19 = first14;
  int t20 = *t19;
  value18 = t20;
  int* t21 = first14;
  int t22 = *t21;
  int* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  *std23 = t22;
    while (1) {
      int* t24 = first14;
      int c25 = 1;
      int* ptr26 = &(t24)[c25];
      first14 = ptr26;
      int* t27 = last15;
      _Bool c28 = ((ptr26 != t27)) ? 1 : 0;
      if (!c28) break;
          int t29 = value18;
          int* t30 = first14;
          int t31 = *t30;
          _Bool c32 = ((t29 == t31)) ? 1 : 0;
          _Bool u33 = !c32;
          if (u33) {
            int* t34 = first14;
            int t35 = *t34;
            value18 = t35;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std36;
            __VERIFIER_nondet_memory(&std36, sizeof(std36));
            int* std37;
            __VERIFIER_nondet_memory(&std37, sizeof(std37));
            *std37 = t35;
          }
    }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std38;
  __VERIFIER_nondet_memory(&std38, sizeof(std38));
  __retval17 = *std38; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t39 = __retval17;
  return t39;
}

// function: _Z17unique_copy_esbmcIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_PFbiiEET0_T_SA_S9_T1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______unique_copy_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v40, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v41, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v42, void* v43) {
bb44: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first45;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ last46;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ dest47;
  void* pred48;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval49;
  first45 = v40;
  last46 = v41;
  dest47 = v42;
  pred48 = v43;
  abort();
}

// function: main
int main() {
bb50: ;
  int __retval51;
  int myints52[9];
  int myints153[9];
  struct std__vector_int__std__allocator_int__ myvector54;
  struct std__allocator_int_ ref_tmp055;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it56;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp157;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp058;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp259;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp160;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp261;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp362;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp363;
  int c64 = 0;
  __retval51 = c64;
  // array copy
  __builtin_memcpy(myints52, __const_main_myints, (unsigned long)9 * sizeof(__const_main_myints[0]));
  // array copy
  __builtin_memcpy(myints153, __const_main_myints1, (unsigned long)9 * sizeof(__const_main_myints1[0]));
  unsigned long c65 = 9;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp055, sizeof(ref_tmp055));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector54, sizeof(myvector54));
    __VERIFIER_nondet_memory(&ref_tmp055, sizeof(ref_tmp055));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp055, sizeof(ref_tmp055));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it56, sizeof(it56));
    int* cast66 = (int*)&(myints52);
    int* cast67 = (int*)&(myints52);
    int c68 = 9;
    int* ptr69 = &(cast67)[c68];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std70;
    __VERIFIER_nondet_memory(&std70, sizeof(std70));
    agg_tmp058 = std70;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t71 = agg_tmp058;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r72 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______unique_copy_esbmc_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(cast66, ptr69, t71);
    ref_tmp157 = r72;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std73;
    __VERIFIER_nondet_memory(&std73, sizeof(std73));
    int* std74;
    __VERIFIER_nondet_memory(&std74, sizeof(std74));
    int t75 = *std74;
    int c76 = 0;
    _Bool c77 = ((t75 == c76)) ? 1 : 0;
    if (c77) {
    } else {
      char* cast78 = (char*)&(_str);
      char* c79 = (char*)_str_1;
      unsigned int c80 = 63;
      char* cast81 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast78, c79, c80, cast81);
    }
    int* cast82 = (int*)&(myints153);
    int* cast83 = (int*)&(myints153);
    int c84 = 9;
    int* ptr85 = &(cast83)[c84];
    // externalized std:: op: void std::vector<int, std::allocator<int> >::assign<int*, void>(int*, int*)
    __VERIFIER_nondet_memory(&myvector54, sizeof(myvector54));
    __VERIFIER_nondet_memory(cast82, sizeof(*cast82));
    __VERIFIER_nondet_memory(ptr85, sizeof(*ptr85));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std86;
    __VERIFIER_nondet_memory(&std86, sizeof(std86));
    agg_tmp160 = std86;
    agg_tmp261 = it56; // copy
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std87;
    __VERIFIER_nondet_memory(&std87, sizeof(std87));
    agg_tmp362 = std87;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t88 = agg_tmp160;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t89 = agg_tmp261;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t90 = agg_tmp362;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r91 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______unique_copy_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(t88, t89, t90, &myfunction);
    ref_tmp259 = r91;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std92;
    __VERIFIER_nondet_memory(&std92, sizeof(std92));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std93;
    __VERIFIER_nondet_memory(&std93, sizeof(std93));
    ref_tmp363 = std93;
    long std94 = __VERIFIER_nondet_long();
    unsigned long cast95 = (unsigned long)std94;
    // externalized std:: op: std::vector<int, std::allocator<int> >::resize(unsigned long)
    __VERIFIER_nondet_memory(&myvector54, sizeof(myvector54));
    struct std__basic_ostream_char__std__char_traits_char__* std96;
    __VERIFIER_nondet_memory(&std96, sizeof(std96));
    int c97 = 0;
    __retval51 = c97;
    int t98 = __retval51;
    int ret_val99 = t98;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector54, sizeof(myvector54));
    }
    return ret_val99;
  int t100 = __retval51;
  return t100;
}

