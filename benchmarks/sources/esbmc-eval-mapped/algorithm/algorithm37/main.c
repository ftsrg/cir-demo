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
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_;
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
char _str[19] = "myvector contains:";
char _str_1[2] = " ";
char _str_2[26] = "vector::_M_realloc_append";
extern int rand();
long myrandom(long p0);
extern void srand(unsigned int p0);
extern long time(long* p0);
int main();

void* p_myrandom __attribute__((aligned(8))) = (void*)(&_Z8myrandoml);
extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z8myrandoml
long myrandom(long v0) {
bb1:
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
bb9:
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
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    agg_tmp215 = std33;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    agg_tmp316 = std34;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t35 = agg_tmp215;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t36 = agg_tmp316;
    // externalized std:: op: void std::random_shuffle<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, long (*&)(long)>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, long (*&)(long))
    __VERIFIER_nondet_memory(&p_myrandom, sizeof(p_myrandom));
    char* cast37 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp039;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp140;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std41;
      __VERIFIER_nondet_memory(&std41, sizeof(std41));
      ref_tmp039 = std41;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std42;
      __VERIFIER_nondet_memory(&std42, sizeof(std42));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std44;
        __VERIFIER_nondet_memory(&std44, sizeof(std44));
        ref_tmp140 = std44;
        _Bool std45;
        __VERIFIER_nondet_memory(&std45, sizeof(std45));
        _Bool u46 = !std45;
        if (!u46) break;
        char* cast47 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std48;
        __VERIFIER_nondet_memory(&std48, sizeof(std48));
        int* std49;
        __VERIFIER_nondet_memory(&std49, sizeof(std49));
        int t50 = *std49;
        struct std__basic_ostream_char__std__char_traits_char__* std51;
        __VERIFIER_nondet_memory(&std51, sizeof(std51));
      for_step43: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std52;
        __VERIFIER_nondet_memory(&std52, sizeof(std52));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    int c54 = 0;
    __retval10 = c54;
    int t55 = __retval10;
    int ret_val56 = t55;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector11, sizeof(myvector11));
    }
    return ret_val56;
  int t57 = __retval10;
  return t57;
}

