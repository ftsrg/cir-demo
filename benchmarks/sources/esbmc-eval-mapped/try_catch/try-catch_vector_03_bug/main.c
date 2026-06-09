extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;
// Per-RTTI address tags: each thrown/caught type symbol gets a
// distinct storage location so catch dispatch is a pointer compare.
static const char __cir_eh_type__ZTISt12out_of_range[] = "_ZTISt12out_of_range";

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}
__attribute__((weak)) char* __VERIFIER_virtual_call_char_ptr(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char*(*)(void*))__fn)(__obj);
}

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char* __field0; char __field1[8]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__logic_error;
struct std__out_of_range;
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
static const char _ZTISt12out_of_range__n_[] = "_ZTISt12out_of_range";
static void* _ZTISt12out_of_range[2] = {(void*)0, (void*)_ZTISt12out_of_range__n_};
char _str[18] = "myvector.at(0)==2";
char _str_1[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/try_catch/try-catch_vector_03_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str_2[21] = "Out of Range error: ";
char _str_3[49] = "cannot create std::vector larger than max_size()";
char _str_4[74] = "vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
extern int __gxx_personality_v0();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ myvector2;
  struct std__allocator_int_ ref_tmp03;
  int c4 = 0;
  __retval1 = c4;
  unsigned long c5 = 10;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
      struct std__out_of_range* oor6;
        int c8 = 1;
        unsigned long c9 = 0;
        int* std10;
        __VERIFIER_nondet_memory(&std10, sizeof(std10));
        *std10 = c8;
        int c11 = 100;
        unsigned long c12 = 20;
        int* std13;
        __VERIFIER_nondet_memory(&std13, sizeof(std13));
        *std13 = c11;
      cir_try_dispatch7: ;
      if (__cir_exc_active) {
      if (__cir_exc_type == (const void*)__cir_eh_type__ZTISt12out_of_range) {
        int ca_tok14 = 0;
        void* ca_exn15 = (void*)__cir_exc_ptr;
        __cir_exc_active = 0;
          oor6 = (struct std__out_of_range*)__cir_exc_ptr;
          unsigned long c16 = 0;
          int* std17;
          __VERIFIER_nondet_memory(&std17, sizeof(std17));
          int t18 = *std17;
          int c19 = 2;
          _Bool c20 = ((t18 == c19)) ? 1 : 0;
          if (c20) {
          } else {
            char* cast21 = (char*)&(_str);
            char* c22 = _str_1;
            unsigned int c23 = 22;
            char* cast24 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast21, c22, c23, cast24);
          }
          char* cast25 = (char*)&(_str_2);
          struct std__basic_ostream_char__std__char_traits_char__* std26;
          __VERIFIER_nondet_memory(&std26, sizeof(std26));
          struct std__out_of_range* t27 = oor6;
          struct std__logic_error* base28 = (struct std__logic_error*)((char *)t27 + 0);
          void** v29 = (void**)base28;
          void* v30 = *((void**)v29);
          char* vcall33 = (char*)__VERIFIER_virtual_call_char_ptr(base28, 2);
          struct std__basic_ostream_char__std__char_traits_char__* std34;
          __VERIFIER_nondet_memory(&std34, sizeof(std34));
          struct std__basic_ostream_char__std__char_traits_char__* std35;
          __VERIFIER_nondet_memory(&std35, sizeof(std35));
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
      }
      else {
        __cir_exc_active = 1;
        { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
      { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
      }
      }
    int c36 = 0;
    __retval1 = c36;
    int t37 = __retval1;
    int ret_val38 = t37;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    }
    return ret_val38;
  int t39 = __retval1;
  return t39;
}

