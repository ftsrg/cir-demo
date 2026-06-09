extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;
// Per-RTTI address tags: each thrown/caught type symbol gets a
// distinct storage location so catch dispatch is a pointer compare.
static const char __cir_eh_type__ZTISt9bad_alloc[] = "_ZTISt9bad_alloc";

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
struct std__bad_alloc;
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[35] = "Allocated 5000000 doubles in ptr[ ";
char _str_1[4] = " ]\n";
static const char _ZTISt9bad_alloc__n_[] = "_ZTISt9bad_alloc";
static void* _ZTISt9bad_alloc[2] = {(void*)0, (void*)_ZTISt9bad_alloc__n_};
char _str_2[21] = "Exception occurred: ";
extern int __gxx_personality_v0();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new__(unsigned long p0) { return malloc(p0); }
void operator_delete__(void* p0, unsigned long p1) { free(p0); }
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  double* ptr2[50];
  int c3 = 0;
  __retval1 = c3;
    struct std__bad_alloc* memoryAllocationException4;
        int i6;
        int c7 = 0;
        i6 = c7;
        while (1) {
          int t9 = i6;
          int c10 = 50;
          _Bool c11 = ((t9 < c10)) ? 1 : 0;
          if (!c11) break;
            double* __new_result12;
            unsigned long c13 = 400000000000;
            void* r14 = operator_new__(c13);
            if (__cir_exc_active) {
              goto cir_try_dispatch5;
            }
              double* cast15 = (double*)r14;
              __new_result12 = cast15;
            double* t16 = __new_result12;
            int t17 = i6;
            long cast18 = (long)t17;
            ptr2[cast18] = t16;
            char* cast19 = (char*)&(_str);
            struct std__basic_ostream_char__std__char_traits_char__* std20;
            __VERIFIER_nondet_memory(&std20, sizeof(std20));
            int t21 = i6;
            struct std__basic_ostream_char__std__char_traits_char__* std22;
            __VERIFIER_nondet_memory(&std22, sizeof(std22));
            char* cast23 = (char*)&(_str_1);
            struct std__basic_ostream_char__std__char_traits_char__* std24;
            __VERIFIER_nondet_memory(&std24, sizeof(std24));
        for_step8: ;
          int t25 = i6;
          int u26 = t25 + 1;
          i6 = u26;
        }
    cir_try_dispatch5: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTISt9bad_alloc) {
      int ca_tok27 = 0;
      void* ca_exn28 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        memoryAllocationException4 = (struct std__bad_alloc*)__cir_exc_ptr;
        char* cast29 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* std30;
        __VERIFIER_nondet_memory(&std30, sizeof(std30));
        struct std__bad_alloc* t31 = memoryAllocationException4;
        void** v32 = (void**)t31;
        void* v33 = *((void**)v32);
        char* vcall36 = (char*)__VERIFIER_virtual_call_char_ptr(t31, 2);
        struct std__basic_ostream_char__std__char_traits_char__* std37;
        __VERIFIER_nondet_memory(&std37, sizeof(std37));
        struct std__basic_ostream_char__std__char_traits_char__* std38;
        __VERIFIER_nondet_memory(&std38, sizeof(std38));
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
  int c39 = 0;
  __retval1 = c39;
  int t40 = __retval1;
  return t40;
}

