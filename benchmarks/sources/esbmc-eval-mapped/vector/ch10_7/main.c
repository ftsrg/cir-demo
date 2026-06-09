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
__attribute__((weak)) double __VERIFIER_virtual_call_double(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((double(*)(void*))__fn)(__obj);
}
__attribute__((weak)) void __VERIFIER_virtual_call_void(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  ((void(*)(void*))__fn)(__obj);
}

// Struct definitions (auto-parsed)
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std___Setprecision { int _M_n; };
struct std___UninitDestroyGuard_Employee_____void_ { struct Employee** _M_first; struct Employee*** _M_cur; };
struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data { struct Employee** _M_start; struct Employee** _M_finish; struct Employee** _M_end_of_storage; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_Employee___;
struct std____new_allocator_char_;
struct std__allocator_Employee___ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__type_info;
struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl { struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ctype_char_;
struct std__ios_base;
struct Employee { void* __field0; struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ firstName; struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ lastName; struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ socialSecurityNumber; };
struct HourlyEmployee { struct Employee __field0; double __field1; double __field2; };
struct SalariedEmployee { struct Employee __field0; double __field1; };
struct std___Vector_base_Employee____std__allocator_Employee____ { struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_Employee____std__allocator_Employee____ { struct std___Vector_base_Employee____std__allocator_Employee____ __field0; };
struct CommissionEmployee { struct Employee __field0; double __field1; double __field2; };
struct BasePlusCommissionEmployee { struct CommissionEmployee __field0; double __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[5] = "John";
char _str_1[6] = "Smith";
char _str_2[12] = "111-11-1111";
char _str_3[4] = "Sue";
char _str_4[6] = "Jones";
char _str_5[12] = "222-22-2222";
char _str_6[4] = "Bob";
char _str_7[6] = "Lewis";
char _str_8[12] = "333-33-3333";
char _str_9[6] = "Karen";
char _str_10[6] = "Price";
char _str_11[12] = "444-44-4444";
static const char _ZTI8Employee__n_[] = "_ZTI8Employee";
static void* _ZTI8Employee[2] = {(void*)0, (void*)_ZTI8Employee__n_};
static const char _ZTI26BasePlusCommissionEmployee__n_[] = "_ZTI26BasePlusCommissionEmployee";
static void* _ZTI26BasePlusCommissionEmployee[2] = {(void*)0, (void*)_ZTI26BasePlusCommissionEmployee__n_};
char _str_12[19] = "old base salary: $";
char _str_13[40] = "new base salary with 10% increase is: $";
char _str_14[12] = "i>=0 && i<3";
char _str_15[101] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/ch10_7/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_16[9] = "earned $";
char _str_17[21] = "\ndeleting object of ";
char _str_18[49] = "cannot create std::vector larger than max_size()";
char _str_19[50] = "basic_string: construction from null is not valid";
char _str_20[24] = "basic_string::_M_create";
char _str_21[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIP8EmployeeSaIS1_EEixEm[113] = "reference std::vector<Employee *>::operator[](size_type) [_Tp = Employee *, _Alloc = std::allocator<Employee *>]";
char _str_22[19] = "__n < this->size()";
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
extern void SalariedEmployee__SalariedEmployee(struct SalariedEmployee* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3, double p4);
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
extern void CommissionEmployee__CommissionEmployee(struct CommissionEmployee* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3, double p4, double p5);
extern void BasePlusCommissionEmployee__BasePlusCommissionEmployee(struct BasePlusCommissionEmployee* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3, double p4, double p5, double p6);
extern void HourlyEmployee__HourlyEmployee(struct HourlyEmployee* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3, double p4, double p5);
extern void* __dynamic_cast(void* p0, unsigned char* p1, unsigned char* p2, long p3);
extern double BasePlusCommissionEmployee__getBaseSalary___const(struct BasePlusCommissionEmployee* p0);
extern void BasePlusCommissionEmployee__setBaseSalary(struct BasePlusCommissionEmployee* p0, double p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void __cxa_bad_typeid();
void Employee___Employee(struct Employee* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: _ZN8EmployeeD2Ev
void Employee___Employee(struct Employee* v0) {
bb1:
  struct Employee* this2;
  this2 = v0;
  struct Employee* t3 = this2;
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&t3->socialSecurityNumber, sizeof(t3->socialSecurityNumber));
      }
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&t3->lastName, sizeof(t3->lastName));
    }
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&t3->firstName, sizeof(t3->firstName));
  }
  return;
}

// function: main
int main() {
bb4:
  int __retval5;
  struct std___Setprecision agg_tmp06;
  struct std__vector_Employee____std__allocator_Employee____ employees7;
  struct std__allocator_Employee___ ref_tmp08;
  struct SalariedEmployee* __new_result9;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp110;
  struct std__allocator_char_ ref_tmp211;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp312;
  struct std__allocator_char_ ref_tmp413;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp514;
  struct std__allocator_char_ ref_tmp615;
  _Bool cleanup_isactive16;
  struct Employee** tmp_exprcleanup17;
  struct CommissionEmployee* __new_result18;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp719;
  struct std__allocator_char_ ref_tmp820;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp921;
  struct std__allocator_char_ ref_tmp1022;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp1123;
  struct std__allocator_char_ ref_tmp1224;
  _Bool cleanup_isactive25;
  struct Employee** tmp_exprcleanup26;
  struct BasePlusCommissionEmployee* __new_result27;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp1328;
  struct std__allocator_char_ ref_tmp1429;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp1530;
  struct std__allocator_char_ ref_tmp1631;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp1732;
  struct std__allocator_char_ ref_tmp1833;
  _Bool cleanup_isactive34;
  struct Employee** tmp_exprcleanup35;
  struct HourlyEmployee* __new_result36;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp1937;
  struct std__allocator_char_ ref_tmp2038;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp2139;
  struct std__allocator_char_ ref_tmp2240;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp2341;
  struct std__allocator_char_ ref_tmp2442;
  _Bool cleanup_isactive43;
  struct Employee** tmp_exprcleanup44;
  int c45 = 0;
  __retval5 = c45;
  struct std__basic_ostream_char__std__char_traits_char__* std46;
  __VERIFIER_nondet_memory(&std46, sizeof(std46));
  int c47 = 2;
  struct std___Setprecision std48;
  __VERIFIER_nondet_memory(&std48, sizeof(std48));
  agg_tmp06 = std48;
  struct std___Setprecision t49 = agg_tmp06;
  struct std__basic_ostream_char__std__char_traits_char__* std50;
  __VERIFIER_nondet_memory(&std50, sizeof(std50));
  unsigned long c51 = 4;
  // externalized std:: op: std::allocator<Employee*>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp08, sizeof(ref_tmp08));
    // externalized std:: op: std::vector<Employee*, std::allocator<Employee*> >::vector(unsigned long, std::allocator<Employee*> const&)
    __VERIFIER_nondet_memory(&employees7, sizeof(employees7));
    __VERIFIER_nondet_memory(&ref_tmp08, sizeof(ref_tmp08));
  {
    // externalized std:: op: std::allocator<Employee*>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp08, sizeof(ref_tmp08));
  }
    unsigned long c52 = 112;
    void* r53 = operator_new(c52);
      _Bool c54 = 1;
      cleanup_isactive16 = c54;
      struct SalariedEmployee* cast55 = (struct SalariedEmployee*)r53;
      __new_result9 = cast55;
      char* cast56 = (char*)&(_str);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp211, sizeof(ref_tmp211));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&ref_tmp110, sizeof(ref_tmp110));
        __VERIFIER_nondet_memory(cast56, sizeof(*cast56));
        __VERIFIER_nondet_memory(&ref_tmp211, sizeof(ref_tmp211));
          char* cast57 = (char*)&(_str_1);
          // externalized std:: op: std::allocator<char>::allocator()
          __VERIFIER_nondet_memory(&ref_tmp413, sizeof(ref_tmp413));
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
            __VERIFIER_nondet_memory(&ref_tmp312, sizeof(ref_tmp312));
            __VERIFIER_nondet_memory(cast57, sizeof(*cast57));
            __VERIFIER_nondet_memory(&ref_tmp413, sizeof(ref_tmp413));
              char* cast58 = (char*)&(_str_2);
              // externalized std:: op: std::allocator<char>::allocator()
              __VERIFIER_nondet_memory(&ref_tmp615, sizeof(ref_tmp615));
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                __VERIFIER_nondet_memory(&ref_tmp514, sizeof(ref_tmp514));
                __VERIFIER_nondet_memory(cast58, sizeof(*cast58));
                __VERIFIER_nondet_memory(&ref_tmp615, sizeof(ref_tmp615));
                  double c59 = 0x1.9p9;
                  SalariedEmployee__SalariedEmployee(cast55, &ref_tmp110, &ref_tmp312, &ref_tmp514, c59);
                  _Bool c60 = 0;
                  cleanup_isactive16 = c60;
                  struct SalariedEmployee* t61 = __new_result9;
                  struct Employee* base62 = (struct Employee*)((char *)t61 + 0);
                  unsigned long c63 = 0;
                  struct Employee** std64;
                  __VERIFIER_nondet_memory(&std64, sizeof(std64));
                  *std64 = base62;
                  tmp_exprcleanup17 = std64;
                {
                  // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                  __VERIFIER_nondet_memory(&ref_tmp514, sizeof(ref_tmp514));
                }
              {
                // externalized std:: op: std::allocator<char>::~allocator()
                __VERIFIER_nondet_memory(&ref_tmp615, sizeof(ref_tmp615));
              }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&ref_tmp312, sizeof(ref_tmp312));
            }
          {
            // externalized std:: op: std::allocator<char>::~allocator()
            __VERIFIER_nondet_memory(&ref_tmp413, sizeof(ref_tmp413));
          }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp110, sizeof(ref_tmp110));
        }
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp211, sizeof(ref_tmp211));
      }
    struct Employee** t65 = tmp_exprcleanup17;
    unsigned long c66 = 120;
    void* r67 = operator_new(c66);
      _Bool c68 = 1;
      cleanup_isactive25 = c68;
      struct CommissionEmployee* cast69 = (struct CommissionEmployee*)r67;
      __new_result18 = cast69;
      char* cast70 = (char*)&(_str_3);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp820, sizeof(ref_tmp820));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&ref_tmp719, sizeof(ref_tmp719));
        __VERIFIER_nondet_memory(cast70, sizeof(*cast70));
        __VERIFIER_nondet_memory(&ref_tmp820, sizeof(ref_tmp820));
          char* cast71 = (char*)&(_str_4);
          // externalized std:: op: std::allocator<char>::allocator()
          __VERIFIER_nondet_memory(&ref_tmp1022, sizeof(ref_tmp1022));
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
            __VERIFIER_nondet_memory(&ref_tmp921, sizeof(ref_tmp921));
            __VERIFIER_nondet_memory(cast71, sizeof(*cast71));
            __VERIFIER_nondet_memory(&ref_tmp1022, sizeof(ref_tmp1022));
              char* cast72 = (char*)&(_str_5);
              // externalized std:: op: std::allocator<char>::allocator()
              __VERIFIER_nondet_memory(&ref_tmp1224, sizeof(ref_tmp1224));
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                __VERIFIER_nondet_memory(&ref_tmp1123, sizeof(ref_tmp1123));
                __VERIFIER_nondet_memory(cast72, sizeof(*cast72));
                __VERIFIER_nondet_memory(&ref_tmp1224, sizeof(ref_tmp1224));
                  int c73 = 10000;
                  double cast74 = (double)c73;
                  double c75 = 0x1.eb851eb851eb8p-5;
                  CommissionEmployee__CommissionEmployee(cast69, &ref_tmp719, &ref_tmp921, &ref_tmp1123, cast74, c75);
                  _Bool c76 = 0;
                  cleanup_isactive25 = c76;
                  struct CommissionEmployee* t77 = __new_result18;
                  struct Employee* base78 = (struct Employee*)((char *)t77 + 0);
                  unsigned long c79 = 1;
                  struct Employee** std80;
                  __VERIFIER_nondet_memory(&std80, sizeof(std80));
                  *std80 = base78;
                  tmp_exprcleanup26 = std80;
                {
                  // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                  __VERIFIER_nondet_memory(&ref_tmp1123, sizeof(ref_tmp1123));
                }
              {
                // externalized std:: op: std::allocator<char>::~allocator()
                __VERIFIER_nondet_memory(&ref_tmp1224, sizeof(ref_tmp1224));
              }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&ref_tmp921, sizeof(ref_tmp921));
            }
          {
            // externalized std:: op: std::allocator<char>::~allocator()
            __VERIFIER_nondet_memory(&ref_tmp1022, sizeof(ref_tmp1022));
          }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp719, sizeof(ref_tmp719));
        }
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp820, sizeof(ref_tmp820));
      }
    struct Employee** t81 = tmp_exprcleanup26;
    unsigned long c82 = 128;
    void* r83 = operator_new(c82);
      _Bool c84 = 1;
      cleanup_isactive34 = c84;
      struct BasePlusCommissionEmployee* cast85 = (struct BasePlusCommissionEmployee*)r83;
      __new_result27 = cast85;
      char* cast86 = (char*)&(_str_6);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp1429, sizeof(ref_tmp1429));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&ref_tmp1328, sizeof(ref_tmp1328));
        __VERIFIER_nondet_memory(cast86, sizeof(*cast86));
        __VERIFIER_nondet_memory(&ref_tmp1429, sizeof(ref_tmp1429));
          char* cast87 = (char*)&(_str_7);
          // externalized std:: op: std::allocator<char>::allocator()
          __VERIFIER_nondet_memory(&ref_tmp1631, sizeof(ref_tmp1631));
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
            __VERIFIER_nondet_memory(&ref_tmp1530, sizeof(ref_tmp1530));
            __VERIFIER_nondet_memory(cast87, sizeof(*cast87));
            __VERIFIER_nondet_memory(&ref_tmp1631, sizeof(ref_tmp1631));
              char* cast88 = (char*)&(_str_8);
              // externalized std:: op: std::allocator<char>::allocator()
              __VERIFIER_nondet_memory(&ref_tmp1833, sizeof(ref_tmp1833));
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                __VERIFIER_nondet_memory(&ref_tmp1732, sizeof(ref_tmp1732));
                __VERIFIER_nondet_memory(cast88, sizeof(*cast88));
                __VERIFIER_nondet_memory(&ref_tmp1833, sizeof(ref_tmp1833));
                  int c89 = 300;
                  double cast90 = (double)c89;
                  int c91 = 5000;
                  double cast92 = (double)c91;
                  double c93 = 0x1.47ae147ae147bp-5;
                  BasePlusCommissionEmployee__BasePlusCommissionEmployee(cast85, &ref_tmp1328, &ref_tmp1530, &ref_tmp1732, cast90, cast92, c93);
                  _Bool c94 = 0;
                  cleanup_isactive34 = c94;
                  struct BasePlusCommissionEmployee* t95 = __new_result27;
                  struct Employee* base96 = (struct Employee*)((char *)t95 + 0);
                  unsigned long c97 = 2;
                  struct Employee** std98;
                  __VERIFIER_nondet_memory(&std98, sizeof(std98));
                  *std98 = base96;
                  tmp_exprcleanup35 = std98;
                {
                  // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                  __VERIFIER_nondet_memory(&ref_tmp1732, sizeof(ref_tmp1732));
                }
              {
                // externalized std:: op: std::allocator<char>::~allocator()
                __VERIFIER_nondet_memory(&ref_tmp1833, sizeof(ref_tmp1833));
              }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&ref_tmp1530, sizeof(ref_tmp1530));
            }
          {
            // externalized std:: op: std::allocator<char>::~allocator()
            __VERIFIER_nondet_memory(&ref_tmp1631, sizeof(ref_tmp1631));
          }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp1328, sizeof(ref_tmp1328));
        }
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp1429, sizeof(ref_tmp1429));
      }
    struct Employee** t99 = tmp_exprcleanup35;
    unsigned long c100 = 120;
    void* r101 = operator_new(c100);
      _Bool c102 = 1;
      cleanup_isactive43 = c102;
      struct HourlyEmployee* cast103 = (struct HourlyEmployee*)r101;
      __new_result36 = cast103;
      char* cast104 = (char*)&(_str_9);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp2038, sizeof(ref_tmp2038));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&ref_tmp1937, sizeof(ref_tmp1937));
        __VERIFIER_nondet_memory(cast104, sizeof(*cast104));
        __VERIFIER_nondet_memory(&ref_tmp2038, sizeof(ref_tmp2038));
          char* cast105 = (char*)&(_str_10);
          // externalized std:: op: std::allocator<char>::allocator()
          __VERIFIER_nondet_memory(&ref_tmp2240, sizeof(ref_tmp2240));
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
            __VERIFIER_nondet_memory(&ref_tmp2139, sizeof(ref_tmp2139));
            __VERIFIER_nondet_memory(cast105, sizeof(*cast105));
            __VERIFIER_nondet_memory(&ref_tmp2240, sizeof(ref_tmp2240));
              char* cast106 = (char*)&(_str_11);
              // externalized std:: op: std::allocator<char>::allocator()
              __VERIFIER_nondet_memory(&ref_tmp2442, sizeof(ref_tmp2442));
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                __VERIFIER_nondet_memory(&ref_tmp2341, sizeof(ref_tmp2341));
                __VERIFIER_nondet_memory(cast106, sizeof(*cast106));
                __VERIFIER_nondet_memory(&ref_tmp2442, sizeof(ref_tmp2442));
                  double c107 = 0x1.0cp4;
                  int c108 = 40;
                  double cast109 = (double)c108;
                  HourlyEmployee__HourlyEmployee(cast103, &ref_tmp1937, &ref_tmp2139, &ref_tmp2341, c107, cast109);
                  _Bool c110 = 0;
                  cleanup_isactive43 = c110;
                  struct HourlyEmployee* t111 = __new_result36;
                  struct Employee* base112 = (struct Employee*)((char *)t111 + 0);
                  unsigned long c113 = 3;
                  struct Employee** std114;
                  __VERIFIER_nondet_memory(&std114, sizeof(std114));
                  *std114 = base112;
                  tmp_exprcleanup44 = std114;
                {
                  // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                  __VERIFIER_nondet_memory(&ref_tmp2341, sizeof(ref_tmp2341));
                }
              {
                // externalized std:: op: std::allocator<char>::~allocator()
                __VERIFIER_nondet_memory(&ref_tmp2442, sizeof(ref_tmp2442));
              }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&ref_tmp2139, sizeof(ref_tmp2139));
            }
          {
            // externalized std:: op: std::allocator<char>::~allocator()
            __VERIFIER_nondet_memory(&ref_tmp2240, sizeof(ref_tmp2240));
          }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp1937, sizeof(ref_tmp1937));
        }
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp2038, sizeof(ref_tmp2038));
      }
    struct Employee** t115 = tmp_exprcleanup44;
      int i116;
      int c117 = 0;
      i116 = c117;
      while (1) {
        int t119 = i116;
        unsigned long cast120 = (unsigned long)t119;
        unsigned long std121 = __VERIFIER_nondet_unsigned_long();
        unsigned long c122 = 1;
        unsigned long b123 = std121 + c122;
        _Bool c124 = ((cast120 < b123)) ? 1 : 0;
        if (!c124) break;
          struct BasePlusCommissionEmployee* commissionPtr125;
          int t126 = i116;
          unsigned long cast127 = (unsigned long)t126;
          struct Employee** std128;
          __VERIFIER_nondet_memory(&std128, sizeof(std128));
          struct Employee* t129 = *std128;
          void** v130 = (void**)t129;
          void* v131 = *((void**)v130);
          __VERIFIER_virtual_call_void(t129, 1);
          int t134 = i116;
          unsigned long cast135 = (unsigned long)t134;
          struct Employee** std136;
          __VERIFIER_nondet_memory(&std136, sizeof(std136));
          struct Employee* t137 = *std136;
          _Bool cast138 = (_Bool)t137;
          struct BasePlusCommissionEmployee* ternary139;
          if (cast138) {
            void* cast140 = (void*)t137;
            unsigned char* c141 = _ZTI8Employee;
            unsigned char* c142 = _ZTI26BasePlusCommissionEmployee;
            long c143 = 0;
            void* r144 = __dynamic_cast(cast140, c141, c142, c143);
            struct BasePlusCommissionEmployee* cast145 = (struct BasePlusCommissionEmployee*)r144;
            ternary139 = (struct BasePlusCommissionEmployee*)cast145;
          } else {
            struct BasePlusCommissionEmployee* c146 = ((void*)0);
            ternary139 = (struct BasePlusCommissionEmployee*)c146;
          }
          commissionPtr125 = ternary139;
            struct BasePlusCommissionEmployee* t147 = commissionPtr125;
            struct BasePlusCommissionEmployee* c148 = ((void*)0);
            _Bool c149 = ((t147 != c148)) ? 1 : 0;
            if (c149) {
              char* cast150 = (char*)&(_str_12);
              struct std__basic_ostream_char__std__char_traits_char__* std151;
              __VERIFIER_nondet_memory(&std151, sizeof(std151));
              struct BasePlusCommissionEmployee* t152 = commissionPtr125;
              double r153 = BasePlusCommissionEmployee__getBaseSalary___const(t152);
              struct std__basic_ostream_char__std__char_traits_char__* std154;
              __VERIFIER_nondet_memory(&std154, sizeof(std154));
              struct std__basic_ostream_char__std__char_traits_char__* std155;
              __VERIFIER_nondet_memory(&std155, sizeof(std155));
              struct BasePlusCommissionEmployee* t156 = commissionPtr125;
              double c157 = 0x1.199999999999ap0;
              struct BasePlusCommissionEmployee* t158 = commissionPtr125;
              double r159 = BasePlusCommissionEmployee__getBaseSalary___const(t158);
              double b160 = c157 * r159;
              BasePlusCommissionEmployee__setBaseSalary(t156, b160);
              char* cast161 = (char*)&(_str_13);
              struct std__basic_ostream_char__std__char_traits_char__* std162;
              __VERIFIER_nondet_memory(&std162, sizeof(std162));
              struct BasePlusCommissionEmployee* t163 = commissionPtr125;
              double r164 = BasePlusCommissionEmployee__getBaseSalary___const(t163);
              struct std__basic_ostream_char__std__char_traits_char__* std165;
              __VERIFIER_nondet_memory(&std165, sizeof(std165));
              struct std__basic_ostream_char__std__char_traits_char__* std166;
              __VERIFIER_nondet_memory(&std166, sizeof(std166));
            }
          int t167 = i116;
          int c168 = 0;
          _Bool c169 = ((t167 >= c168)) ? 1 : 0;
          _Bool ternary170;
          if (c169) {
            int t171 = i116;
            int c172 = 3;
            _Bool c173 = ((t171 < c172)) ? 1 : 0;
            ternary170 = (_Bool)c173;
          } else {
            _Bool c174 = 0;
            ternary170 = (_Bool)c174;
          }
          if (ternary170) {
          } else {
            char* cast175 = (char*)&(_str_14);
            char* c176 = _str_15;
            unsigned int c177 = 73;
            char* cast178 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast175, c176, c177, cast178);
          }
          char* cast179 = (char*)&(_str_16);
          struct std__basic_ostream_char__std__char_traits_char__* std180;
          __VERIFIER_nondet_memory(&std180, sizeof(std180));
          int t181 = i116;
          unsigned long cast182 = (unsigned long)t181;
          struct Employee** std183;
          __VERIFIER_nondet_memory(&std183, sizeof(std183));
          struct Employee* t184 = *std183;
          void** v185 = (void**)t184;
          void* v186 = *((void**)v185);
          double vcall189 = (double)__VERIFIER_virtual_call_double(t184, 0);
          struct std__basic_ostream_char__std__char_traits_char__* std190;
          __VERIFIER_nondet_memory(&std190, sizeof(std190));
          struct std__basic_ostream_char__std__char_traits_char__* std191;
          __VERIFIER_nondet_memory(&std191, sizeof(std191));
      for_step118: ;
        int t192 = i116;
        int u193 = t192 + 1;
        i116 = u193;
      }
      int j194;
      int c195 = 0;
      j194 = c195;
      while (1) {
        int t197 = j194;
        unsigned long cast198 = (unsigned long)t197;
        unsigned long std199 = __VERIFIER_nondet_unsigned_long();
        _Bool c200 = ((cast198 < std199)) ? 1 : 0;
        if (!c200) break;
          char* cast201 = (char*)&(_str_17);
          struct std__basic_ostream_char__std__char_traits_char__* std202;
          __VERIFIER_nondet_memory(&std202, sizeof(std202));
          int t203 = j194;
          unsigned long cast204 = (unsigned long)t203;
          struct Employee** std205;
          __VERIFIER_nondet_memory(&std205, sizeof(std205));
          struct Employee* t206 = *std205;
          struct Employee* c207 = ((void*)0);
          _Bool c208 = ((t206 == c207)) ? 1 : 0;
          if (c208) {
            __cxa_bad_typeid();
            __builtin_unreachable();
          }
          void** v209 = (void**)t206;
          void* v210 = *((void**)v209);
          long c211 = -1;
          struct std__type_info** cast212 = (struct std__type_info**)v210;
          struct std__type_info** ptr213 = &(cast212)[c211];
          struct std__type_info* t214 = *ptr213;
          char* std215;
          __VERIFIER_nondet_memory(&std215, sizeof(std215));
          struct std__basic_ostream_char__std__char_traits_char__* std216;
          __VERIFIER_nondet_memory(&std216, sizeof(std216));
          int t217 = j194;
          unsigned long cast218 = (unsigned long)t217;
          struct Employee** std219;
          __VERIFIER_nondet_memory(&std219, sizeof(std219));
          struct Employee* t220 = *std219;
          struct Employee* c221 = ((void*)0);
          _Bool c222 = ((t220 != c221)) ? 1 : 0;
          if (c222) {
              Employee___Employee(t220);
            {
              void* cast223 = (void*)t220;
              unsigned long c224 = 104;
              operator_delete_2(cast223, c224);
            }
          }
      for_step196: ;
        int t225 = j194;
        int u226 = t225 + 1;
        j194 = u226;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std227;
    __VERIFIER_nondet_memory(&std227, sizeof(std227));
    int c228 = 0;
    __retval5 = c228;
    int t229 = __retval5;
    int ret_val230 = t229;
    {
      // externalized std:: op: std::vector<Employee*, std::allocator<Employee*> >::~vector()
      __VERIFIER_nondet_memory(&employees7, sizeof(employees7));
    }
    return ret_val230;
  int t231 = __retval5;
  return t231;
}

