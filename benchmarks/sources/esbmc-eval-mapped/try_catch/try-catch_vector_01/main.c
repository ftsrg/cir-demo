extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;
// Per-RTTI address tags: each thrown/caught type symbol gets a
// distinct storage location so catch dispatch is a pointer compare.
static const char __cir_eh_type__ZTISt12length_error[] = "_ZTISt12length_error";

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
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char* __field0; char __field1[8]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__logic_error;
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std__length_error;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
static const char _ZTISt12length_error__n_[] = "_ZTISt12length_error";
static void* _ZTISt12length_error[2] = {(void*)0, (void*)_ZTISt12length_error__n_};
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str[15] = "Length error: ";
char _str_1[26] = "vector::_M_default_append";
extern int __gxx_personality_v0();
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  int c2 = 0;
  __retval1 = c2;
    struct std__vector_int__std__allocator_int__ myvector3;
    struct std__length_error* le4;
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
      __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
        unsigned long std6 = __VERIFIER_nondet_unsigned_long();
        unsigned long c7 = 1;
        unsigned long b8 = std6 + c7;
        // externalized std:: op: std::vector<int, std::allocator<int> >::resize(unsigned long)
        __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
      }
    cir_try_dispatch5: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTISt12length_error) {
      int ca_tok9 = 0;
      void* ca_exn10 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        le4 = (struct std__length_error*)__cir_exc_ptr;
        char* cast11 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* std12;
        __VERIFIER_nondet_memory(&std12, sizeof(std12));
        struct std__length_error* t13 = le4;
        struct std__logic_error* base14 = (struct std__logic_error*)((char *)t13 + 0);
        void** v15 = (void**)base14;
        void* v16 = *((void**)v15);
        char* vcall19 = (char*)__VERIFIER_virtual_call_char_ptr(base14, 2);
        struct std__basic_ostream_char__std__char_traits_char__* std20;
        __VERIFIER_nondet_memory(&std20, sizeof(std20));
        struct std__basic_ostream_char__std__char_traits_char__* std21;
        __VERIFIER_nondet_memory(&std21, sizeof(std21));
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
  int c22 = 0;
  __retval1 = c22;
  int t23 = __retval1;
  return t23;
}

