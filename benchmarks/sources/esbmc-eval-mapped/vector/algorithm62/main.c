extern void abort(void);
// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

char __const_main_second[10] = "apartment";
char __const_main_first[6] = "Apple";
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[55] = "lexicographical_compare(first,first+5,second,second+9)";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm62/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[39] = "Using default comparison (operator<): ";
char _str_3[15] = " is less than ";
char _str_4[18] = " is greater than ";
char _str_5[6] = " and ";
char _str_6[17] = " are equivalent\n";
extern int tolower(int p0);
_Bool mycomp(char p0, char p1);
_Bool bool_lexicographical_compare_char__char_(char* p0, char* p1, char* p2, char* p3);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z6mycompcc
_Bool mycomp(char v0, char v1) {
bb2: ;
  char c13;
  char c24;
  _Bool __retval5;
  c13 = v0;
  c24 = v1;
  char t6 = c13;
  int cast7 = (int)t6;
  int r8 = tolower(cast7);
  char t9 = c24;
  int cast10 = (int)t9;
  int r11 = tolower(cast10);
  _Bool c12 = ((r8 < r11)) ? 1 : 0;
  __retval5 = c12;
  _Bool t13 = __retval5;
  return t13;
}

// function: _Z23lexicographical_compareIccEbPT_S1_PT0_S3_
_Bool bool_lexicographical_compare_char__char_(char* v14, char* v15, char* v16, char* v17) {
bb18: ;
  char* first119;
  char* last120;
  char* first221;
  char* last222;
  _Bool __retval23;
  first119 = v14;
  last120 = v15;
  first221 = v16;
  last222 = v17;
    while (1) {
      char* t24 = first119;
      char* t25 = last120;
      _Bool c26 = ((t24 != t25)) ? 1 : 0;
      if (!c26) break;
          char* t27 = first221;
          char* t28 = last222;
          _Bool c29 = ((t27 == t28)) ? 1 : 0;
          _Bool ternary30;
          if (c29) {
            _Bool c31 = 1;
            ternary30 = (_Bool)c31;
          } else {
            char* t32 = first221;
            char t33 = *t32;
            int cast34 = (int)t33;
            char* t35 = first119;
            char t36 = *t35;
            int cast37 = (int)t36;
            _Bool c38 = ((cast34 < cast37)) ? 1 : 0;
            ternary30 = (_Bool)c38;
          }
          if (ternary30) {
            _Bool c39 = 0;
            __retval23 = c39;
            _Bool t40 = __retval23;
            _Bool ret_val41 = t40;
            return ret_val41;
          } else {
              char* t42 = first119;
              char t43 = *t42;
              int cast44 = (int)t43;
              char* t45 = first221;
              char t46 = *t45;
              int cast47 = (int)t46;
              _Bool c48 = ((cast44 < cast47)) ? 1 : 0;
              if (c48) {
                _Bool c49 = 1;
                __retval23 = c49;
                _Bool t50 = __retval23;
                _Bool ret_val51 = t50;
                return ret_val51;
              }
          }
        char* t52 = first119;
        int c53 = 1;
        char* ptr54 = &(t52)[c53];
        first119 = ptr54;
        char* t55 = first221;
        int c56 = 1;
        char* ptr57 = &(t55)[c56];
        first221 = ptr57;
    }
  char* t58 = first221;
  char* t59 = last222;
  _Bool c60 = ((t58 != t59)) ? 1 : 0;
  __retval23 = c60;
  _Bool t61 = __retval23;
  return t61;
}

// function: main
int main() {
bb62: ;
  int __retval63;
  char first64[6];
  char second65[10];
  int c66 = 0;
  __retval63 = c66;
  // array copy
  __builtin_memcpy(first64, __const_main_first, (unsigned long)6 * sizeof(__const_main_first[0]));
  // array copy
  __builtin_memcpy(second65, __const_main_second, (unsigned long)10 * sizeof(__const_main_second[0]));
  char* cast67 = (char*)&(first64);
  char* cast68 = (char*)&(first64);
  int c69 = 5;
  char* ptr70 = &(cast68)[c69];
  char* cast71 = (char*)&(second65);
  char* cast72 = (char*)&(second65);
  int c73 = 9;
  char* ptr74 = &(cast72)[c73];
  _Bool r75 = bool_lexicographical_compare_char__char_(cast67, ptr70, cast71, ptr74);
  if (r75) {
  } else {
    char* cast76 = (char*)&(_str);
    char* c77 = (char*)_str_1;
    unsigned int c78 = 35;
    char* cast79 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast76, c77, c78, cast79);
  }
  char* cast80 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std81;
  __VERIFIER_nondet_memory(&std81, sizeof(std81));
    char* cast82 = (char*)&(first64);
    char* cast83 = (char*)&(first64);
    int c84 = 5;
    char* ptr85 = &(cast83)[c84];
    char* cast86 = (char*)&(second65);
    char* cast87 = (char*)&(second65);
    int c88 = 9;
    char* ptr89 = &(cast87)[c88];
    _Bool r90 = bool_lexicographical_compare_char__char_(cast82, ptr85, cast86, ptr89);
    if (r90) {
      char* cast91 = (char*)&(first64);
      struct std__basic_ostream_char__std__char_traits_char__* std92;
      __VERIFIER_nondet_memory(&std92, sizeof(std92));
      char* cast93 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std94;
      __VERIFIER_nondet_memory(&std94, sizeof(std94));
      char* cast95 = (char*)&(second65);
      struct std__basic_ostream_char__std__char_traits_char__* std96;
      __VERIFIER_nondet_memory(&std96, sizeof(std96));
      struct std__basic_ostream_char__std__char_traits_char__* std97;
      __VERIFIER_nondet_memory(&std97, sizeof(std97));
    } else {
        char* cast98 = (char*)&(second65);
        char* cast99 = (char*)&(second65);
        int c100 = 9;
        char* ptr101 = &(cast99)[c100];
        char* cast102 = (char*)&(first64);
        char* cast103 = (char*)&(first64);
        int c104 = 5;
        char* ptr105 = &(cast103)[c104];
        _Bool r106 = bool_lexicographical_compare_char__char_(cast98, ptr101, cast102, ptr105);
        if (r106) {
          char* cast107 = (char*)&(first64);
          struct std__basic_ostream_char__std__char_traits_char__* std108;
          __VERIFIER_nondet_memory(&std108, sizeof(std108));
          char* cast109 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* std110;
          __VERIFIER_nondet_memory(&std110, sizeof(std110));
          char* cast111 = (char*)&(second65);
          struct std__basic_ostream_char__std__char_traits_char__* std112;
          __VERIFIER_nondet_memory(&std112, sizeof(std112));
          struct std__basic_ostream_char__std__char_traits_char__* std113;
          __VERIFIER_nondet_memory(&std113, sizeof(std113));
        } else {
          char* cast114 = (char*)&(first64);
          struct std__basic_ostream_char__std__char_traits_char__* std115;
          __VERIFIER_nondet_memory(&std115, sizeof(std115));
          char* cast116 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* std117;
          __VERIFIER_nondet_memory(&std117, sizeof(std117));
          char* cast118 = (char*)&(second65);
          struct std__basic_ostream_char__std__char_traits_char__* std119;
          __VERIFIER_nondet_memory(&std119, sizeof(std119));
          char* cast120 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* std121;
          __VERIFIER_nondet_memory(&std121, sizeof(std121));
        }
    }
  int c122 = 0;
  __retval63 = c122;
  int t123 = __retval63;
  return t123;
}

