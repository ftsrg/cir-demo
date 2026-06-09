/*
 * Copyright 2025 Budapest University of Technology and Economics
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}
__attribute__((weak)) void __VERIFIER_virtual_call_void(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  ((void(*)(void*))__fn)(__obj);
}

// Struct definitions (auto-parsed)
struct _IO_FILE { int __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; char* __field7; char* __field8; char* __field9; char* __field10; char* __field11; struct _IO_marker* __field12; struct _IO_FILE* __field13; int __field14; unsigned char __field15[3]; char __field16[1]; long __field17; unsigned short __field18; char __field19; char __field20[1]; void* __field21; long __field22; struct _IO_codecvt* __field23; struct _IO_wide_data* __field24; struct _IO_FILE* __field25; void* __field26; struct _IO_FILE** __field27; int __field28; int __field29; unsigned long __field30; char __field31[8]; };
struct _IO_codecvt { unsigned char __placeholder; };
struct _IO_marker { unsigned char __placeholder; };
struct _IO_wide_data { unsigned char __placeholder; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct __pthread_internal_list { struct __pthread_internal_list* __field0; struct __pthread_internal_list* __field1; };
struct __pthread_mutex_s { int __field0; unsigned int __field1; int __field2; unsigned int __field3; int __field4; short __field5; short __field6; struct __pthread_internal_list __field7; };
struct anon_0 { unsigned int __field0; unsigned int __field1; };
union anon_1 { unsigned int __field0; char __field1[4]; };
union anon_2 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
union pthread_attr_t { char __field0[56]; long __field1; };
union pthread_mutex_t { struct __pthread_mutex_s __field0; char __field1[40]; long __field2; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_;
struct timeval { long __field0; long __field1; };
struct EmbeddedPC { union pthread_mutex_t __field0; unsigned int __field1; _Bool __field2; struct timeval __field3; struct timeval __field4; float __field5; float __field6; float __field7; struct Display* __field8; };
union __atomic_wide_counter { unsigned long __field0; struct anon_0 __field1; };
struct __mbstate_t { int __field0; union anon_1 __field1; };
struct __pthread_cond_s { union __atomic_wide_counter __field0; union __atomic_wide_counter __field1; unsigned int __field2[2]; unsigned int __field3; unsigned int __field4; unsigned int __field5[2]; unsigned int __field6; unsigned int __field7; };
union pthread_cond_t { struct __pthread_cond_s __field0; char __field1[48]; long __field2; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_2 field2; };
struct std__ctype_char_;
struct std__ios_base;
struct Thread { void* __field0; union pthread_mutex_t __field1; union pthread_mutex_t __field2; union pthread_cond_t __field3; _Bool __field4; union pthread_attr_t __field5; unsigned long __field6; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct Bicycle { struct Thread __field0; struct EmbeddedPC* __field1; };
struct Display { struct Thread __field0; struct std__basic_ofstream_char__std__char_traits_char__ __field1; struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __field2; int __field3; unsigned char __field4[4]; } __attribute__((packed));

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[12] = "Booting ...";
char _str_1[7] = " Done!";
char _str_2[53] = "----------------------------------------------------";
char _str_3[19] = "You are now biking";
char _str_4[21] = "Choose your option: ";
char _str_5[22] = "1 - Press Mode Button";
char _str_6[23] = "2 - Press Reset Button";
char _str_7[26] = "3 - Remove PC's Batteries";
char _str_8[16] = " Enter number: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_9[17] = "Press 1, 2 or 3.";
char _str_10[5] = "Bye!";
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
extern void EmbeddedPC__EmbeddedPC(struct EmbeddedPC* p0);
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
extern void Bicycle__Bicycle(struct Bicycle* p0, struct EmbeddedPC* p1);
extern struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ EmbeddedPC__currentMode_abi_cxx11_(struct EmbeddedPC* p0);
extern int isdigit(int p0);
extern int atoi(char* p0);
extern void EmbeddedPC__modePressed(struct EmbeddedPC* p0);
extern void EmbeddedPC__resetPressed(struct EmbeddedPC* p0);
extern void exit(int p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct EmbeddedPC* pc2;
  struct EmbeddedPC* __new_result3;
  struct Bicycle* b4;
  struct Bicycle* __new_result5;
  char op6;
  int c7 = 0;
  __retval1 = c7;
  char* cast8 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  unsigned long c10 = 104;
  void* r11 = operator_new(c10);
    struct EmbeddedPC* cast12 = (struct EmbeddedPC*)r11;
    __new_result3 = cast12;
    EmbeddedPC__EmbeddedPC(cast12);
  struct EmbeddedPC* t13 = __new_result3;
  pc2 = t13;
  unsigned long c14 = 216;
  void* r15 = operator_new(c14);
    struct Bicycle* cast16 = (struct Bicycle*)r15;
    __new_result5 = cast16;
    struct EmbeddedPC* t17 = pc2;
    Bicycle__Bicycle(cast16, t17);
  struct Bicycle* t18 = __new_result5;
  b4 = t18;
  struct Bicycle* t19 = b4;
  struct Thread* base20 = (struct Thread*)((char *)t19 + 0);
  void** v21 = (void**)base20;
  void* v22 = *((void**)v21);
  __VERIFIER_virtual_call_void(base20, 3);
  char* cast25 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  char* cast28 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  struct std__basic_ostream_char__std__char_traits_char__* std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  char* cast31 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  char* cast34 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  struct std__basic_ostream_char__std__char_traits_char__* std36;
  __VERIFIER_nondet_memory(&std36, sizeof(std36));
  char* cast37 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std38;
  __VERIFIER_nondet_memory(&std38, sizeof(std38));
  struct std__basic_ostream_char__std__char_traits_char__* std39;
  __VERIFIER_nondet_memory(&std39, sizeof(std39));
  char* cast40 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std41;
  __VERIFIER_nondet_memory(&std41, sizeof(std41));
  struct std__basic_ostream_char__std__char_traits_char__* std42;
  __VERIFIER_nondet_memory(&std42, sizeof(std42));
  char* cast43 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std44;
  __VERIFIER_nondet_memory(&std44, sizeof(std44));
  struct std__basic_ostream_char__std__char_traits_char__* std45;
  __VERIFIER_nondet_memory(&std45, sizeof(std45));
  char* cast46 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std47;
  __VERIFIER_nondet_memory(&std47, sizeof(std47));
  struct std__basic_ostream_char__std__char_traits_char__* std48;
  __VERIFIER_nondet_memory(&std48, sizeof(std48));
    while (1) {
      int c49 = 1;
      _Bool cast50 = (_Bool)c49;
      if (!cast50) break;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp051;
        struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup52;
        struct EmbeddedPC* t53 = pc2;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r54 = EmbeddedPC__currentMode_abi_cxx11_(t53);
        ref_tmp051 = r54;
          struct std__basic_ostream_char__std__char_traits_char__* std55;
          __VERIFIER_nondet_memory(&std55, sizeof(std55));
          tmp_exprcleanup52 = std55;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp051, sizeof(ref_tmp051));
        }
        struct std__basic_ostream_char__std__char_traits_char__* t56 = tmp_exprcleanup52;
        char* cast57 = (char*)&(_str_8);
        struct std__basic_ostream_char__std__char_traits_char__* std58;
        __VERIFIER_nondet_memory(&std58, sizeof(std58));
        struct std__basic_istream_char__std__char_traits_char__* std59;
        __VERIFIER_nondet_memory(&std59, sizeof(std59));
          char t60 = op6;
          int cast61 = (int)t60;
          int r62 = isdigit(cast61);
          _Bool cast63 = (_Bool)r62;
          _Bool u64 = !cast63;
          if (u64) {
            char* cast65 = (char*)&(_str_9);
            struct std__basic_ostream_char__std__char_traits_char__* std66;
            __VERIFIER_nondet_memory(&std66, sizeof(std66));
            struct std__basic_ostream_char__std__char_traits_char__* std67;
            __VERIFIER_nondet_memory(&std67, sizeof(std67));
            continue;
          }
          int r68 = atoi(&op6);
          switch (r68) {
          case 1:
            struct EmbeddedPC* t69 = pc2;
            EmbeddedPC__modePressed(t69);
            break;
          case 2:
            struct EmbeddedPC* t70 = pc2;
            EmbeddedPC__resetPressed(t70);
            break;
          case 3:
            char* cast71 = (char*)&(_str_10);
            struct std__basic_ostream_char__std__char_traits_char__* std72;
            __VERIFIER_nondet_memory(&std72, sizeof(std72));
            struct std__basic_ostream_char__std__char_traits_char__* std73;
            __VERIFIER_nondet_memory(&std73, sizeof(std73));
            int c74 = 1;
            exit(c74);
            break;
          default:
            char* cast75 = (char*)&(_str_9);
            struct std__basic_ostream_char__std__char_traits_char__* std76;
            __VERIFIER_nondet_memory(&std76, sizeof(std76));
            struct std__basic_ostream_char__std__char_traits_char__* std77;
            __VERIFIER_nondet_memory(&std77, sizeof(std77));
            break;
          }
    }
  int c78 = 0;
  __retval1 = c78;
  int t79 = __retval1;
  return t79;
}

