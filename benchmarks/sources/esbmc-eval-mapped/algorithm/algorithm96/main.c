extern void abort(void);
// Struct definitions (auto-parsed)
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
char _str[20] = "myvector[2] == NULL";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm96/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[19] = "myvector contains:";
char _str_3[2] = " ";
char _str_4[26] = "vector::_M_realloc_append";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
extern int rand();
long myrandom(long p0);
extern void srand(unsigned int p0);
extern long time(long* p0);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

void* p_myrandom __attribute__((aligned(8))) = (void*)(&myrandom);
extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z8myrandoml
long myrandom(long v0) {
bb1: ;
  long i2;
  long __retval3;
  i2 = v0;
  int r4 = rand();
  long cast5 = (long)r4;
  long t6 = i2;
  long b7 = cast5 % t6;
  __retval3 = b7;
  long t8 = __retval3;
  return t8;
}

// function: main
int main() {
bb9: ;
  int __retval10;
  struct std__vector_int__std__allocator_int__ myvector11;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it12;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp013;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp114;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp215;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp316;
  int c17 = 0;
  __retval10 = c17;
  long* c18 = ((void*)0);
  long r19 = time(c18);
  unsigned int cast20 = (unsigned int)r19;
  srand(cast20);
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector11, sizeof(myvector11));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it12, sizeof(it12));
      int i21;
      int c22 = 1;
      i21 = c22;
      while (1) {
        int t24 = i21;
        int c25 = 10;
        _Bool c26 = ((t24 < c25)) ? 1 : 0;
        if (!c26) break;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int const&)
        __VERIFIER_nondet_memory(&myvector11, sizeof(myvector11));
        __VERIFIER_nondet_memory(&i21, sizeof(i21));
      for_step23: ;
        int t27 = i21;
        int u28 = t27 + 1;
        i21 = u28;
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    agg_tmp013 = std29;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    agg_tmp114 = std30;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t31 = agg_tmp013;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t32 = agg_tmp114;
    // externalized std:: op: void std::random_shuffle<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
    unsigned long c33 = 2;
    int* std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    int t35 = *std34;
    long cast36 = (long)t35;
    long c37 = 0;
    _Bool c38 = ((cast36 == c37)) ? 1 : 0;
    if (c38) {
    } else {
      char* cast39 = (char*)&(_str);
      char* c40 = (char*)_str_1;
      unsigned int c41 = 34;
      char* cast42 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast39, c40, c41, cast42);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    agg_tmp215 = std43;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    agg_tmp316 = std44;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t45 = agg_tmp215;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t46 = agg_tmp316;
    // externalized std:: op: void std::random_shuffle<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, long (*&)(long)>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, long (*&)(long))
    __VERIFIER_nondet_memory(&p_myrandom, sizeof(p_myrandom));
    char* cast47 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp049;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp150;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std51;
      __VERIFIER_nondet_memory(&std51, sizeof(std51));
      ref_tmp049 = std51;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std52;
      __VERIFIER_nondet_memory(&std52, sizeof(std52));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std54;
        __VERIFIER_nondet_memory(&std54, sizeof(std54));
        ref_tmp150 = std54;
        _Bool std55;
        __VERIFIER_nondet_memory(&std55, sizeof(std55));
        _Bool u56 = !std55;
        if (!u56) break;
        char* cast57 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std58;
        __VERIFIER_nondet_memory(&std58, sizeof(std58));
        int* std59;
        __VERIFIER_nondet_memory(&std59, sizeof(std59));
        int t60 = *std59;
        struct std__basic_ostream_char__std__char_traits_char__* std61;
        __VERIFIER_nondet_memory(&std61, sizeof(std61));
      for_step53: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std62;
        __VERIFIER_nondet_memory(&std62, sizeof(std62));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std63;
    __VERIFIER_nondet_memory(&std63, sizeof(std63));
    int c64 = 0;
    __retval10 = c64;
    int t65 = __retval10;
    int ret_val66 = t65;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector11, sizeof(myvector11));
    }
    return ret_val66;
  int t67 = __retval10;
  return t67;
}

