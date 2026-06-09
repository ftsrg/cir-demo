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
struct std____new_allocator_Employee___ { unsigned char __field0; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_Employee___ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__type_info { void* __field0; char* __name; };
struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl { struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long _M_precision; long __field2; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct Employee { void* __field0; struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ firstName; struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ lastName; struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ socialSecurityNumber; };
struct HourlyEmployee { struct Employee __field0; double __field1; double __field2; };
struct SalariedEmployee { struct Employee __field0; double __field1; };
struct std___Vector_base_Employee____std__allocator_Employee____ { struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
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
char _str_14[9] = "earned $";
char _str_15[21] = "\ndeleting object of ";
char _str_16[49] = "cannot create std::vector larger than max_size()";
char _str_17[50] = "basic_string: construction from null is not valid";
char _str_18[24] = "basic_string::_M_create";
char _str_19[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIP8EmployeeSaIS1_EEixEm[113] = "reference std::vector<Employee *>::operator[](size_type) [_Tp = Employee *, _Alloc = std::allocator<Employee *>]";
char _str_20[19] = "__n < this->size()";
long std__ios_base__precision(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setprecision p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int* std__operator__(int* p0, int p1);
int std__operator__2(int p0);
int std__operator__4(int p0, int p1);
int* std__operator___2(int* p0, int p1);
int std__operator_(int p0, int p1);
int std__ios_base__setf(struct std__ios_base* p0, int p1, int p2);
struct std__ios_base* std__fixed(struct std__ios_base* p0);
struct std___Setprecision std__setprecision(int p0);
void std__allocator_Employee____allocator_2(struct std__allocator_Employee___* p0);
void std__vector_Employee___std__allocator_Employee______vector(struct std__vector_Employee____std__allocator_Employee____* p0, unsigned long p1, struct std__allocator_Employee___* p2);
void std__allocator_Employee_____allocator(struct std__allocator_Employee___* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
extern void SalariedEmployee__SalariedEmployee(struct SalariedEmployee* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3, double p4);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct Employee** std__vector_Employee___std__allocator_Employee______operator__(struct std__vector_Employee____std__allocator_Employee____* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
extern void CommissionEmployee__CommissionEmployee(struct CommissionEmployee* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3, double p4, double p5);
extern void BasePlusCommissionEmployee__BasePlusCommissionEmployee(struct BasePlusCommissionEmployee* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3, double p4, double p5, double p6);
extern void HourlyEmployee__HourlyEmployee(struct HourlyEmployee* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3, double p4, double p5);
unsigned long std__vector_Employee___std__allocator_Employee______size___const(struct std__vector_Employee____std__allocator_Employee____* p0);
extern void* __dynamic_cast(void* p0, unsigned char* p1, unsigned char* p2, long p3);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__3(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
extern double BasePlusCommissionEmployee__getBaseSalary___const(struct BasePlusCommissionEmployee* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void BasePlusCommissionEmployee__setBaseSalary(struct BasePlusCommissionEmployee* p0, double p1);
extern void __cxa_bad_typeid();
char* std__type_info__name___const(struct std__type_info* p0);
void Employee___Employee(struct Employee* p0);
void std__vector_Employee___std__allocator_Employee_______vector(struct std__vector_Employee____std__allocator_Employee____* p0);
int main();
void std____new_allocator_Employee______new_allocator_2(struct std____new_allocator_Employee___* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_Employee___std__allocator_Employee_______S_max_size(struct std__allocator_Employee___* p0);
void std__allocator_Employee____allocator(struct std__allocator_Employee___* p0, struct std__allocator_Employee___* p1);
extern void std____throw_length_error(char* p0);
unsigned long std__vector_Employee___std__allocator_Employee_______S_check_init_len(unsigned long p0, struct std__allocator_Employee___* p1);
void std___Vector_base_Employee___std__allocator_Employee_______Vector_impl___Vector_impl(struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl* p0, struct std__allocator_Employee___* p1);
_Bool std____is_constant_evaluated();
extern void std____throw_bad_array_new_length();
unsigned long std____new_allocator_Employee_____M_max_size___const(struct std____new_allocator_Employee___* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
struct Employee** std____new_allocator_Employee____allocate(struct std____new_allocator_Employee___* p0, unsigned long p1, void* p2);
struct Employee** std__allocator_Employee____allocate(struct std__allocator_Employee___* p0, unsigned long p1);
struct Employee** std__allocator_traits_std__allocator_Employee______allocate(struct std__allocator_Employee___* p0, unsigned long p1);
struct Employee** std___Vector_base_Employee___std__allocator_Employee_______M_allocate(struct std___Vector_base_Employee____std__allocator_Employee____* p0, unsigned long p1);
void std___Vector_base_Employee___std__allocator_Employee_______M_create_storage(struct std___Vector_base_Employee____std__allocator_Employee____* p0, unsigned long p1);
void std___Vector_base_Employee___std__allocator_Employee_______Vector_impl____Vector_impl(struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl* p0);
void std___Vector_base_Employee___std__allocator_Employee_______Vector_base(struct std___Vector_base_Employee____std__allocator_Employee____* p0, unsigned long p1, struct std__allocator_Employee___* p2);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_Employee____void____UninitDestroyGuard(struct std___UninitDestroyGuard_Employee_____void_* p0, struct Employee*** p1);
struct Employee** _ZSt12construct_atIP8EmployeeJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(struct Employee** p0);
void void_std___Construct_Employee__(struct Employee** p0);
void std___UninitDestroyGuard_Employee____void___release(struct std___UninitDestroyGuard_Employee_____void_* p0);
void std___UninitDestroyGuard_Employee____void_____UninitDestroyGuard(struct std___UninitDestroyGuard_Employee_____void_* p0);
struct Employee** Employee___std____uninitialized_default_n_1_false_____uninit_default_n_Employee____unsigned_long_(struct Employee** p0, unsigned long p1);
void void_std____fill_a1_Employee____Employee__(struct Employee** p0, struct Employee** p1, struct Employee** p2);
void void_std____fill_a_Employee____Employee__(struct Employee** p0, struct Employee** p1, struct Employee** p2);
struct Employee** Employee___std____fill_n_a_Employee____unsigned_long__Employee__(struct Employee** p0, unsigned long p1, struct Employee** p2, struct std__random_access_iterator_tag p3);
unsigned long std____size_to_integer(unsigned long p0);
struct std__random_access_iterator_tag std__iterator_traits_Employee_____iterator_category_std____iterator_category_Employee___(struct Employee*** p0);
struct Employee** Employee___std__fill_n_Employee____unsigned_long__Employee__(struct Employee** p0, unsigned long p1, struct Employee** p2);
struct Employee** Employee___std____uninitialized_default_n_1_true_____uninit_default_n_Employee____unsigned_long_(struct Employee** p0, unsigned long p1);
struct Employee** Employee___std____uninitialized_default_n_Employee____unsigned_long_(struct Employee** p0, unsigned long p1);
struct Employee** Employee___std____uninitialized_default_n_a_Employee____unsigned_long__Employee__(struct Employee** p0, unsigned long p1, struct std__allocator_Employee___* p2);
struct std__allocator_Employee___* std___Vector_base_Employee___std__allocator_Employee_______M_get_Tp_allocator(struct std___Vector_base_Employee____std__allocator_Employee____* p0);
void std__vector_Employee___std__allocator_Employee_______M_default_initialize(struct std__vector_Employee____std__allocator_Employee____* p0, unsigned long p1);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void std____new_allocator_Employee____deallocate(struct std____new_allocator_Employee___* p0, struct Employee** p1, unsigned long p2);
void std__allocator_Employee____deallocate(struct std__allocator_Employee___* p0, struct Employee** p1, unsigned long p2);
void std__allocator_traits_std__allocator_Employee______deallocate(struct std__allocator_Employee___* p0, struct Employee** p1, unsigned long p2);
void std___Vector_base_Employee___std__allocator_Employee_______M_deallocate(struct std___Vector_base_Employee____std__allocator_Employee____* p0, struct Employee** p1, unsigned long p2);
void std___Vector_base_Employee___std__allocator_Employee________Vector_base(struct std___Vector_base_Employee____std__allocator_Employee____* p0);
void std____new_allocator_Employee______new_allocator(struct std____new_allocator_Employee___* p0, struct std____new_allocator_Employee___* p1);
void std___Vector_base_Employee___std__allocator_Employee_______Vector_impl_data___Vector_impl_data(struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data* p0);
void void_std__destroy_at_Employee__(struct Employee** p0);
void void_std___Destroy_Employee___(struct Employee** p0, struct Employee** p1);
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
extern void std____throw_logic_error(char* p0);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* p0, char* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** p0);
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* p0);
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* p0, unsigned long p1, void* p2);
char* std__allocator_char___allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* p0, unsigned long p1);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
char* char_const__std____niter_base_char_const__(char* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* p0, char* p1, char* p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, char* p2, struct std__forward_iterator_tag p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void void_std___Destroy_Employee____Employee__(struct Employee** p0, struct Employee** p1, struct std__allocator_Employee___* p2);

// function: _ZNSt8ios_base9precisionEl
long std__ios_base__precision(struct std__ios_base* v0, long v1) {
bb2:
  struct std__ios_base* this3;
  long __prec4;
  long __retval5;
  long __old6;
  this3 = v0;
  __prec4 = v1;
  struct std__ios_base* t7 = this3;
  long t8 = t7->_M_precision;
  __old6 = t8;
  long t9 = __prec4;
  t7->_M_precision = t9;
  long t10 = __old6;
  __retval5 = t10;
  long t11 = __retval5;
  return t11;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v12, struct std___Setprecision v13) {
bb14:
  struct std__basic_ostream_char__std__char_traits_char__* __os15;
  struct std___Setprecision __f16;
  struct std__basic_ostream_char__std__char_traits_char__* __retval17;
  __os15 = v12;
  __f16 = v13;
  struct std__basic_ostream_char__std__char_traits_char__* t18 = __os15;
  void** v19 = (void**)t18;
  void* v20 = *((void**)v19);
  unsigned char* cast21 = (unsigned char*)v20;
  long c22 = -24;
  unsigned char* ptr23 = &(cast21)[c22];
  long* cast24 = (long*)ptr23;
  long t25 = *cast24;
  unsigned char* cast26 = (unsigned char*)t18;
  unsigned char* ptr27 = &(cast26)[t25];
  struct std__basic_ostream_char__std__char_traits_char__* cast28 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr27;
  struct std__ios_base* cast29 = (struct std__ios_base*)cast28;
  int t30 = __f16._M_n;
  long cast31 = (long)t30;
  long r32 = std__ios_base__precision(cast29, cast31);
  struct std__basic_ostream_char__std__char_traits_char__* t33 = __os15;
  __retval17 = t33;
  struct std__basic_ostream_char__std__char_traits_char__* t34 = __retval17;
  return t34;
}

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v35, void* v36) {
bb37:
  struct std__basic_ostream_char__std__char_traits_char__* this38;
  void* __pf39;
  struct std__basic_ostream_char__std__char_traits_char__* __retval40;
  this38 = v35;
  __pf39 = v36;
  struct std__basic_ostream_char__std__char_traits_char__* t41 = this38;
  void* t42 = __pf39;
  void** v43 = (void**)t41;
  void* v44 = *((void**)v43);
  unsigned char* cast45 = (unsigned char*)v44;
  long c46 = -24;
  unsigned char* ptr47 = &(cast45)[c46];
  long* cast48 = (long*)ptr47;
  long t49 = *cast48;
  unsigned char* cast50 = (unsigned char*)t41;
  unsigned char* ptr51 = &(cast50)[t49];
  struct std__basic_ostream_char__std__char_traits_char__* cast52 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr51;
  struct std__ios_base* cast53 = (struct std__ios_base*)cast52;
  struct std__ios_base* r54 = ((struct std__ios_base* (*)(struct std__ios_base*))t42)(cast53);
  __retval40 = t41;
  struct std__basic_ostream_char__std__char_traits_char__* t55 = __retval40;
  return t55;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v56, int v57) {
bb58:
  int* __a59;
  int __b60;
  int* __retval61;
  __a59 = v56;
  __b60 = v57;
  int* t62 = __a59;
  int t63 = *t62;
  int t64 = __b60;
  int r65 = std__operator_(t63, t64);
  int* t66 = __a59;
  *t66 = r65;
  __retval61 = t66;
  int* t67 = __retval61;
  return t67;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__2(int v68) {
bb69:
  int __a70;
  int __retval71;
  __a70 = v68;
  int t72 = __a70;
  int u73 = ~t72;
  __retval71 = u73;
  int t74 = __retval71;
  return t74;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__4(int v75, int v76) {
bb77:
  int __a78;
  int __b79;
  int __retval80;
  __a78 = v75;
  __b79 = v76;
  int t81 = __a78;
  int t82 = __b79;
  int b83 = t81 | t82;
  __retval80 = b83;
  int t84 = __retval80;
  return t84;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v85, int v86) {
bb87:
  int* __a88;
  int __b89;
  int* __retval90;
  __a88 = v85;
  __b89 = v86;
  int* t91 = __a88;
  int t92 = *t91;
  int t93 = __b89;
  int r94 = std__operator__4(t92, t93);
  int* t95 = __a88;
  *t95 = r94;
  __retval90 = t95;
  int* t96 = __retval90;
  return t96;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator_(int v97, int v98) {
bb99:
  int __a100;
  int __b101;
  int __retval102;
  __a100 = v97;
  __b101 = v98;
  int t103 = __a100;
  int t104 = __b101;
  int b105 = t103 & t104;
  __retval102 = b105;
  int t106 = __retval102;
  return t106;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std__ios_base* v107, int v108, int v109) {
bb110:
  struct std__ios_base* this111;
  int __fmtfl112;
  int __mask113;
  int __retval114;
  int __old115;
  this111 = v107;
  __fmtfl112 = v108;
  __mask113 = v109;
  struct std__ios_base* t116 = this111;
  int t117 = t116->_M_flags;
  __old115 = t117;
  int t118 = __mask113;
  int r119 = std__operator__2(t118);
  int* r120 = std__operator__(&t116->_M_flags, r119);
  int t121 = __fmtfl112;
  int t122 = __mask113;
  int r123 = std__operator_(t121, t122);
  int* r124 = std__operator___2(&t116->_M_flags, r123);
  int t125 = __old115;
  __retval114 = t125;
  int t126 = __retval114;
  return t126;
}

// function: _ZSt5fixedRSt8ios_base
struct std__ios_base* std__fixed(struct std__ios_base* v127) {
bb128:
  struct std__ios_base* __base129;
  struct std__ios_base* __retval130;
  __base129 = v127;
  struct std__ios_base* t131 = __base129;
  int t132 = _ZNSt8ios_base5fixedE_const;
  int t133 = _ZNSt8ios_base10floatfieldE_const;
  int r134 = std__ios_base__setf(t131, t132, t133);
  struct std__ios_base* t135 = __base129;
  __retval130 = t135;
  struct std__ios_base* t136 = __retval130;
  return t136;
}

// function: _ZSt12setprecisioni
struct std___Setprecision std__setprecision(int v137) {
bb138:
  int __n139;
  struct std___Setprecision __retval140;
  __n139 = v137;
  int t141 = __n139;
  __retval140._M_n = t141;
  struct std___Setprecision t142 = __retval140;
  return t142;
}

// function: _ZNSaIP8EmployeeEC2Ev
void std__allocator_Employee____allocator_2(struct std__allocator_Employee___* v143) {
bb144:
  struct std__allocator_Employee___* this145;
  this145 = v143;
  struct std__allocator_Employee___* t146 = this145;
  struct std____new_allocator_Employee___* base147 = (struct std____new_allocator_Employee___*)((char *)t146 + 0);
  std____new_allocator_Employee______new_allocator_2(base147);
  return;
}

// function: _ZNSt6vectorIP8EmployeeSaIS1_EEC2EmRKS2_
void std__vector_Employee___std__allocator_Employee______vector(struct std__vector_Employee____std__allocator_Employee____* v148, unsigned long v149, struct std__allocator_Employee___* v150) {
bb151:
  struct std__vector_Employee____std__allocator_Employee____* this152;
  unsigned long __n153;
  struct std__allocator_Employee___* __a154;
  this152 = v148;
  __n153 = v149;
  __a154 = v150;
  struct std__vector_Employee____std__allocator_Employee____* t155 = this152;
  struct std___Vector_base_Employee____std__allocator_Employee____* base156 = (struct std___Vector_base_Employee____std__allocator_Employee____*)((char *)t155 + 0);
  unsigned long t157 = __n153;
  struct std__allocator_Employee___* t158 = __a154;
  unsigned long r159 = std__vector_Employee___std__allocator_Employee_______S_check_init_len(t157, t158);
  struct std__allocator_Employee___* t160 = __a154;
  std___Vector_base_Employee___std__allocator_Employee_______Vector_base(base156, r159, t160);
    unsigned long t161 = __n153;
    std__vector_Employee___std__allocator_Employee_______M_default_initialize(t155, t161);
  return;
}

// function: _ZNSaIP8EmployeeED2Ev
void std__allocator_Employee_____allocator(struct std__allocator_Employee___* v162) {
bb163:
  struct std__allocator_Employee___* this164;
  this164 = v162;
  struct std__allocator_Employee___* t165 = this164;
  return;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v166) {
bb167:
  struct std__allocator_char_* this168;
  this168 = v166;
  struct std__allocator_char_* t169 = this168;
  struct std____new_allocator_char_* base170 = (struct std____new_allocator_char_*)((char *)t169 + 0);
  std____new_allocator_char_____new_allocator_2(base170);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v171, char* v172, struct std__allocator_char_* v173) {
bb174:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this175;
  char* __s176;
  struct std__allocator_char_* __a177;
  char* __end178;
  struct std__forward_iterator_tag agg_tmp0179;
  this175 = v171;
  __s176 = v172;
  __a177 = v173;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t180 = this175;
  char* r181 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t180);
  struct std__allocator_char_* t182 = __a177;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t180->_M_dataplus, r181, t182);
      char* t183 = __s176;
      char* c184 = ((void*)0);
      _Bool c185 = ((t183 == c184)) ? 1 : 0;
      if (c185) {
        char* cast186 = (char*)&(_str_17);
        std____throw_logic_error(cast186);
      }
    char* t187 = __s176;
    char* t188 = __s176;
    unsigned long r189 = std__char_traits_char___length(t188);
    char* ptr190 = &(t187)[r189];
    __end178 = ptr190;
    char* t191 = __s176;
    char* t192 = __end178;
    struct std__forward_iterator_tag t193 = agg_tmp0179;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t180, t191, t192, t193);
  return;
}

// function: _ZNSt6vectorIP8EmployeeSaIS1_EEixEm
struct Employee** std__vector_Employee___std__allocator_Employee______operator__(struct std__vector_Employee____std__allocator_Employee____* v194, unsigned long v195) {
bb196:
  struct std__vector_Employee____std__allocator_Employee____* this197;
  unsigned long __n198;
  struct Employee** __retval199;
  this197 = v194;
  __n198 = v195;
  struct std__vector_Employee____std__allocator_Employee____* t200 = this197;
    do {
          unsigned long t201 = __n198;
          unsigned long r202 = std__vector_Employee___std__allocator_Employee______size___const(t200);
          _Bool c203 = ((t201 < r202)) ? 1 : 0;
          _Bool u204 = !c203;
          if (u204) {
            char* cast205 = (char*)&(_str_19);
            int c206 = 1263;
            char* cast207 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIP8EmployeeSaIS1_EEixEm);
            char* cast208 = (char*)&(_str_20);
            std____glibcxx_assert_fail(cast205, c206, cast207, cast208);
          }
      _Bool c209 = 0;
      if (!c209) break;
    } while (1);
  struct std___Vector_base_Employee____std__allocator_Employee____* base210 = (struct std___Vector_base_Employee____std__allocator_Employee____*)((char *)t200 + 0);
  struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data* base211 = (struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data*)((char *)&(base210->_M_impl) + 0);
  struct Employee** t212 = base211->_M_start;
  unsigned long t213 = __n198;
  struct Employee** ptr214 = &(t212)[t213];
  __retval199 = ptr214;
  struct Employee** t215 = __retval199;
  return t215;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v216) {
bb217:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this218;
  this218 = v216;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t219 = this218;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t219);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t219->_M_dataplus);
  }
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v220) {
bb221:
  struct std__allocator_char_* this222;
  this222 = v220;
  struct std__allocator_char_* t223 = this222;
  return;
}

// function: _ZNKSt6vectorIP8EmployeeSaIS1_EE4sizeEv
unsigned long std__vector_Employee___std__allocator_Employee______size___const(struct std__vector_Employee____std__allocator_Employee____* v224) {
bb225:
  struct std__vector_Employee____std__allocator_Employee____* this226;
  unsigned long __retval227;
  long __dif228;
  this226 = v224;
  struct std__vector_Employee____std__allocator_Employee____* t229 = this226;
  struct std___Vector_base_Employee____std__allocator_Employee____* base230 = (struct std___Vector_base_Employee____std__allocator_Employee____*)((char *)t229 + 0);
  struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data* base231 = (struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data*)((char *)&(base230->_M_impl) + 0);
  struct Employee** t232 = base231->_M_finish;
  struct std___Vector_base_Employee____std__allocator_Employee____* base233 = (struct std___Vector_base_Employee____std__allocator_Employee____*)((char *)t229 + 0);
  struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data* base234 = (struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data*)((char *)&(base233->_M_impl) + 0);
  struct Employee** t235 = base234->_M_start;
  long diff236 = t232 - t235;
  __dif228 = diff236;
    long t237 = __dif228;
    long c238 = 0;
    _Bool c239 = ((t237 < c238)) ? 1 : 0;
    if (c239) {
      __builtin_unreachable();
    }
  long t240 = __dif228;
  unsigned long cast241 = (unsigned long)t240;
  __retval227 = cast241;
  unsigned long t242 = __retval227;
  return t242;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__3(int v243, int v244) {
bb245:
  int __a246;
  int __b247;
  int __retval248;
  __a246 = v243;
  __b247 = v244;
  int t249 = __a246;
  int t250 = __b247;
  int b251 = t249 | t250;
  __retval248 = b251;
  int t252 = __retval248;
  return t252;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v253) {
bb254:
  struct std__basic_ios_char__std__char_traits_char__* this255;
  int __retval256;
  this255 = v253;
  struct std__basic_ios_char__std__char_traits_char__* t257 = this255;
  struct std__ios_base* base258 = (struct std__ios_base*)((char *)t257 + 0);
  int t259 = base258->_M_streambuf_state;
  __retval256 = t259;
  int t260 = __retval256;
  return t260;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v261, int v262) {
bb263:
  struct std__basic_ios_char__std__char_traits_char__* this264;
  int __state265;
  this264 = v261;
  __state265 = v262;
  struct std__basic_ios_char__std__char_traits_char__* t266 = this264;
  int r267 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t266);
  int t268 = __state265;
  int r269 = std__operator__3(r267, t268);
  std__basic_ios_char__std__char_traits_char_____clear(t266, r269);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v270, char* v271) {
bb272:
  struct std__basic_ostream_char__std__char_traits_char__* __out273;
  char* __s274;
  struct std__basic_ostream_char__std__char_traits_char__* __retval275;
  __out273 = v270;
  __s274 = v271;
    char* t276 = __s274;
    _Bool cast277 = (_Bool)t276;
    _Bool u278 = !cast277;
    if (u278) {
      struct std__basic_ostream_char__std__char_traits_char__* t279 = __out273;
      void** v280 = (void**)t279;
      void* v281 = *((void**)v280);
      unsigned char* cast282 = (unsigned char*)v281;
      long c283 = -24;
      unsigned char* ptr284 = &(cast282)[c283];
      long* cast285 = (long*)ptr284;
      long t286 = *cast285;
      unsigned char* cast287 = (unsigned char*)t279;
      unsigned char* ptr288 = &(cast287)[t286];
      struct std__basic_ostream_char__std__char_traits_char__* cast289 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr288;
      struct std__basic_ios_char__std__char_traits_char__* cast290 = (struct std__basic_ios_char__std__char_traits_char__*)cast289;
      int t291 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast290, t291);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t292 = __out273;
      char* t293 = __s274;
      char* t294 = __s274;
      unsigned long r295 = std__char_traits_char___length(t294);
      long cast296 = (long)r295;
      struct std__basic_ostream_char__std__char_traits_char__* r297 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t292, t293, cast296);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t298 = __out273;
  __retval275 = t298;
  struct std__basic_ostream_char__std__char_traits_char__* t299 = __retval275;
  return t299;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v300, double v301) {
bb302:
  struct std__basic_ostream_char__std__char_traits_char__* this303;
  double __f304;
  struct std__basic_ostream_char__std__char_traits_char__* __retval305;
  this303 = v300;
  __f304 = v301;
  struct std__basic_ostream_char__std__char_traits_char__* t306 = this303;
  double t307 = __f304;
  struct std__basic_ostream_char__std__char_traits_char__* r308 = std__ostream__std__ostream___M_insert_double_(t306, t307);
  __retval305 = r308;
  struct std__basic_ostream_char__std__char_traits_char__* t309 = __retval305;
  return t309;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v310, void* v311) {
bb312:
  struct std__basic_ostream_char__std__char_traits_char__* this313;
  void* __pf314;
  struct std__basic_ostream_char__std__char_traits_char__* __retval315;
  this313 = v310;
  __pf314 = v311;
  struct std__basic_ostream_char__std__char_traits_char__* t316 = this313;
  void* t317 = __pf314;
  struct std__basic_ostream_char__std__char_traits_char__* r318 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t317)(t316);
  __retval315 = r318;
  struct std__basic_ostream_char__std__char_traits_char__* t319 = __retval315;
  return t319;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v320) {
bb321:
  struct std__basic_ostream_char__std__char_traits_char__* __os322;
  struct std__basic_ostream_char__std__char_traits_char__* __retval323;
  __os322 = v320;
  struct std__basic_ostream_char__std__char_traits_char__* t324 = __os322;
  struct std__basic_ostream_char__std__char_traits_char__* r325 = std__ostream__flush(t324);
  __retval323 = r325;
  struct std__basic_ostream_char__std__char_traits_char__* t326 = __retval323;
  return t326;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v327) {
bb328:
  struct std__ctype_char_* __f329;
  struct std__ctype_char_* __retval330;
  __f329 = v327;
    struct std__ctype_char_* t331 = __f329;
    _Bool cast332 = (_Bool)t331;
    _Bool u333 = !cast332;
    if (u333) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t334 = __f329;
  __retval330 = t334;
  struct std__ctype_char_* t335 = __retval330;
  return t335;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v336, char v337) {
bb338:
  struct std__ctype_char_* this339;
  char __c340;
  char __retval341;
  this339 = v336;
  __c340 = v337;
  struct std__ctype_char_* t342 = this339;
    char t343 = t342->_M_widen_ok;
    _Bool cast344 = (_Bool)t343;
    if (cast344) {
      char t345 = __c340;
      unsigned char cast346 = (unsigned char)t345;
      unsigned long cast347 = (unsigned long)cast346;
      char t348 = t342->_M_widen[cast347];
      __retval341 = t348;
      char t349 = __retval341;
      return t349;
    }
  std__ctype_char____M_widen_init___const(t342);
  char t350 = __c340;
  void** v351 = (void**)t342;
  void* v352 = *((void**)v351);
  char vcall355 = (char)__VERIFIER_virtual_call_char_char(t342, 6, t350);
  __retval341 = vcall355;
  char t356 = __retval341;
  return t356;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v357, char v358) {
bb359:
  struct std__basic_ios_char__std__char_traits_char__* this360;
  char __c361;
  char __retval362;
  this360 = v357;
  __c361 = v358;
  struct std__basic_ios_char__std__char_traits_char__* t363 = this360;
  struct std__ctype_char_* t364 = t363->_M_ctype;
  struct std__ctype_char_* r365 = std__ctype_char__const__std____check_facet_std__ctype_char___(t364);
  char t366 = __c361;
  char r367 = std__ctype_char___widen_char__const(r365, t366);
  __retval362 = r367;
  char t368 = __retval362;
  return t368;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v369) {
bb370:
  struct std__basic_ostream_char__std__char_traits_char__* __os371;
  struct std__basic_ostream_char__std__char_traits_char__* __retval372;
  __os371 = v369;
  struct std__basic_ostream_char__std__char_traits_char__* t373 = __os371;
  struct std__basic_ostream_char__std__char_traits_char__* t374 = __os371;
  void** v375 = (void**)t374;
  void* v376 = *((void**)v375);
  unsigned char* cast377 = (unsigned char*)v376;
  long c378 = -24;
  unsigned char* ptr379 = &(cast377)[c378];
  long* cast380 = (long*)ptr379;
  long t381 = *cast380;
  unsigned char* cast382 = (unsigned char*)t374;
  unsigned char* ptr383 = &(cast382)[t381];
  struct std__basic_ostream_char__std__char_traits_char__* cast384 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr383;
  struct std__basic_ios_char__std__char_traits_char__* cast385 = (struct std__basic_ios_char__std__char_traits_char__*)cast384;
  char c386 = 10;
  char r387 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast385, c386);
  struct std__basic_ostream_char__std__char_traits_char__* r388 = std__ostream__put(t373, r387);
  struct std__basic_ostream_char__std__char_traits_char__* r389 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r388);
  __retval372 = r389;
  struct std__basic_ostream_char__std__char_traits_char__* t390 = __retval372;
  return t390;
}

// function: _ZNKSt9type_info4nameEv
char* std__type_info__name___const(struct std__type_info* v391) {
bb392:
  struct std__type_info* this393;
  char* __retval394;
  this393 = v391;
  struct std__type_info* t395 = this393;
  long c396 = 0;
  char* t397 = t395->__name;
  char* ptr398 = &(t397)[c396];
  char t399 = *ptr398;
  int cast400 = (int)t399;
  int c401 = 42;
  _Bool c402 = ((cast400 == c401)) ? 1 : 0;
  char* ternary403;
  if (c402) {
    char* t404 = t395->__name;
    int c405 = 1;
    char* ptr406 = &(t404)[c405];
    ternary403 = (char*)ptr406;
  } else {
    char* t407 = t395->__name;
    ternary403 = (char*)t407;
  }
  __retval394 = ternary403;
  char* t408 = __retval394;
  return t408;
}

// function: _ZN8EmployeeD2Ev
void Employee___Employee(struct Employee* v409) {
bb410:
  struct Employee* this411;
  this411 = v409;
  struct Employee* t412 = this411;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&t412->socialSecurityNumber);
      }
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&t412->lastName);
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&t412->firstName);
  }
  return;
}

// function: _ZNSt6vectorIP8EmployeeSaIS1_EED2Ev
void std__vector_Employee___std__allocator_Employee_______vector(struct std__vector_Employee____std__allocator_Employee____* v413) {
bb414:
  struct std__vector_Employee____std__allocator_Employee____* this415;
  this415 = v413;
  struct std__vector_Employee____std__allocator_Employee____* t416 = this415;
    struct std___Vector_base_Employee____std__allocator_Employee____* base417 = (struct std___Vector_base_Employee____std__allocator_Employee____*)((char *)t416 + 0);
    struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data* base418 = (struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data*)((char *)&(base417->_M_impl) + 0);
    struct Employee** t419 = base418->_M_start;
    struct std___Vector_base_Employee____std__allocator_Employee____* base420 = (struct std___Vector_base_Employee____std__allocator_Employee____*)((char *)t416 + 0);
    struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data* base421 = (struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data*)((char *)&(base420->_M_impl) + 0);
    struct Employee** t422 = base421->_M_finish;
    struct std___Vector_base_Employee____std__allocator_Employee____* base423 = (struct std___Vector_base_Employee____std__allocator_Employee____*)((char *)t416 + 0);
    struct std__allocator_Employee___* r424 = std___Vector_base_Employee___std__allocator_Employee_______M_get_Tp_allocator(base423);
    void_std___Destroy_Employee____Employee__(t419, t422, r424);
  {
    struct std___Vector_base_Employee____std__allocator_Employee____* base425 = (struct std___Vector_base_Employee____std__allocator_Employee____*)((char *)t416 + 0);
    std___Vector_base_Employee___std__allocator_Employee________Vector_base(base425);
  }
  return;
}

// function: main
int main() {
bb426:
  int __retval427;
  struct std___Setprecision agg_tmp0428;
  struct std__vector_Employee____std__allocator_Employee____ employees429;
  struct std__allocator_Employee___ ref_tmp0430;
  struct SalariedEmployee* __new_result431;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp1432;
  struct std__allocator_char_ ref_tmp2433;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp3434;
  struct std__allocator_char_ ref_tmp4435;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp5436;
  struct std__allocator_char_ ref_tmp6437;
  _Bool cleanup_isactive438;
  struct Employee** tmp_exprcleanup439;
  struct CommissionEmployee* __new_result440;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp7441;
  struct std__allocator_char_ ref_tmp8442;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp9443;
  struct std__allocator_char_ ref_tmp10444;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp11445;
  struct std__allocator_char_ ref_tmp12446;
  _Bool cleanup_isactive447;
  struct Employee** tmp_exprcleanup448;
  struct BasePlusCommissionEmployee* __new_result449;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp13450;
  struct std__allocator_char_ ref_tmp14451;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp15452;
  struct std__allocator_char_ ref_tmp16453;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp17454;
  struct std__allocator_char_ ref_tmp18455;
  _Bool cleanup_isactive456;
  struct Employee** tmp_exprcleanup457;
  struct HourlyEmployee* __new_result458;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp19459;
  struct std__allocator_char_ ref_tmp20460;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp21461;
  struct std__allocator_char_ ref_tmp22462;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp23463;
  struct std__allocator_char_ ref_tmp24464;
  _Bool cleanup_isactive465;
  struct Employee** tmp_exprcleanup466;
  int c467 = 0;
  __retval427 = c467;
  struct std__basic_ostream_char__std__char_traits_char__* r468 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__fixed);
  int c469 = 2;
  struct std___Setprecision r470 = std__setprecision(c469);
  agg_tmp0428 = r470;
  struct std___Setprecision t471 = agg_tmp0428;
  struct std__basic_ostream_char__std__char_traits_char__* r472 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r468, t471);
  unsigned long c473 = 4;
  std__allocator_Employee____allocator_2(&ref_tmp0430);
    std__vector_Employee___std__allocator_Employee______vector(&employees429, c473, &ref_tmp0430);
  {
    std__allocator_Employee_____allocator(&ref_tmp0430);
  }
    unsigned long c474 = 112;
    void* r475 = operator_new(c474);
      _Bool c476 = 1;
      cleanup_isactive438 = c476;
      struct SalariedEmployee* cast477 = (struct SalariedEmployee*)r475;
      __new_result431 = cast477;
      char* cast478 = (char*)&(_str);
      std__allocator_char___allocator_2(&ref_tmp2433);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp1432, cast478, &ref_tmp2433);
          char* cast479 = (char*)&(_str_1);
          std__allocator_char___allocator_2(&ref_tmp4435);
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp3434, cast479, &ref_tmp4435);
              char* cast480 = (char*)&(_str_2);
              std__allocator_char___allocator_2(&ref_tmp6437);
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp5436, cast480, &ref_tmp6437);
                  double c481 = 0x1.9p9;
                  SalariedEmployee__SalariedEmployee(cast477, &ref_tmp1432, &ref_tmp3434, &ref_tmp5436, c481);
                  _Bool c482 = 0;
                  cleanup_isactive438 = c482;
                  struct SalariedEmployee* t483 = __new_result431;
                  struct Employee* base484 = (struct Employee*)((char *)t483 + 0);
                  unsigned long c485 = 0;
                  struct Employee** r486 = std__vector_Employee___std__allocator_Employee______operator__(&employees429, c485);
                  *r486 = base484;
                  tmp_exprcleanup439 = r486;
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp5436);
                }
              {
                std__allocator_char____allocator(&ref_tmp6437);
              }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp3434);
            }
          {
            std__allocator_char____allocator(&ref_tmp4435);
          }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1432);
        }
      {
        std__allocator_char____allocator(&ref_tmp2433);
      }
    struct Employee** t487 = tmp_exprcleanup439;
    unsigned long c488 = 120;
    void* r489 = operator_new(c488);
      _Bool c490 = 1;
      cleanup_isactive447 = c490;
      struct CommissionEmployee* cast491 = (struct CommissionEmployee*)r489;
      __new_result440 = cast491;
      char* cast492 = (char*)&(_str_3);
      std__allocator_char___allocator_2(&ref_tmp8442);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp7441, cast492, &ref_tmp8442);
          char* cast493 = (char*)&(_str_4);
          std__allocator_char___allocator_2(&ref_tmp10444);
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp9443, cast493, &ref_tmp10444);
              char* cast494 = (char*)&(_str_5);
              std__allocator_char___allocator_2(&ref_tmp12446);
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp11445, cast494, &ref_tmp12446);
                  int c495 = 10000;
                  double cast496 = (double)c495;
                  double c497 = 0x1.eb851eb851eb8p-5;
                  CommissionEmployee__CommissionEmployee(cast491, &ref_tmp7441, &ref_tmp9443, &ref_tmp11445, cast496, c497);
                  _Bool c498 = 0;
                  cleanup_isactive447 = c498;
                  struct CommissionEmployee* t499 = __new_result440;
                  struct Employee* base500 = (struct Employee*)((char *)t499 + 0);
                  unsigned long c501 = 1;
                  struct Employee** r502 = std__vector_Employee___std__allocator_Employee______operator__(&employees429, c501);
                  *r502 = base500;
                  tmp_exprcleanup448 = r502;
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp11445);
                }
              {
                std__allocator_char____allocator(&ref_tmp12446);
              }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp9443);
            }
          {
            std__allocator_char____allocator(&ref_tmp10444);
          }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp7441);
        }
      {
        std__allocator_char____allocator(&ref_tmp8442);
      }
    struct Employee** t503 = tmp_exprcleanup448;
    unsigned long c504 = 128;
    void* r505 = operator_new(c504);
      _Bool c506 = 1;
      cleanup_isactive456 = c506;
      struct BasePlusCommissionEmployee* cast507 = (struct BasePlusCommissionEmployee*)r505;
      __new_result449 = cast507;
      char* cast508 = (char*)&(_str_6);
      std__allocator_char___allocator_2(&ref_tmp14451);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp13450, cast508, &ref_tmp14451);
          char* cast509 = (char*)&(_str_7);
          std__allocator_char___allocator_2(&ref_tmp16453);
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp15452, cast509, &ref_tmp16453);
              char* cast510 = (char*)&(_str_8);
              std__allocator_char___allocator_2(&ref_tmp18455);
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp17454, cast510, &ref_tmp18455);
                  int c511 = 300;
                  double cast512 = (double)c511;
                  int c513 = 5000;
                  double cast514 = (double)c513;
                  double c515 = 0x1.47ae147ae147bp-5;
                  BasePlusCommissionEmployee__BasePlusCommissionEmployee(cast507, &ref_tmp13450, &ref_tmp15452, &ref_tmp17454, cast512, cast514, c515);
                  _Bool c516 = 0;
                  cleanup_isactive456 = c516;
                  struct BasePlusCommissionEmployee* t517 = __new_result449;
                  struct Employee* base518 = (struct Employee*)((char *)t517 + 0);
                  unsigned long c519 = 2;
                  struct Employee** r520 = std__vector_Employee___std__allocator_Employee______operator__(&employees429, c519);
                  *r520 = base518;
                  tmp_exprcleanup457 = r520;
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp17454);
                }
              {
                std__allocator_char____allocator(&ref_tmp18455);
              }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp15452);
            }
          {
            std__allocator_char____allocator(&ref_tmp16453);
          }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp13450);
        }
      {
        std__allocator_char____allocator(&ref_tmp14451);
      }
    struct Employee** t521 = tmp_exprcleanup457;
    unsigned long c522 = 120;
    void* r523 = operator_new(c522);
      _Bool c524 = 1;
      cleanup_isactive465 = c524;
      struct HourlyEmployee* cast525 = (struct HourlyEmployee*)r523;
      __new_result458 = cast525;
      char* cast526 = (char*)&(_str_9);
      std__allocator_char___allocator_2(&ref_tmp20460);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp19459, cast526, &ref_tmp20460);
          char* cast527 = (char*)&(_str_10);
          std__allocator_char___allocator_2(&ref_tmp22462);
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp21461, cast527, &ref_tmp22462);
              char* cast528 = (char*)&(_str_11);
              std__allocator_char___allocator_2(&ref_tmp24464);
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp23463, cast528, &ref_tmp24464);
                  double c529 = 0x1.0cp4;
                  int c530 = 40;
                  double cast531 = (double)c530;
                  HourlyEmployee__HourlyEmployee(cast525, &ref_tmp19459, &ref_tmp21461, &ref_tmp23463, c529, cast531);
                  _Bool c532 = 0;
                  cleanup_isactive465 = c532;
                  struct HourlyEmployee* t533 = __new_result458;
                  struct Employee* base534 = (struct Employee*)((char *)t533 + 0);
                  unsigned long c535 = 3;
                  struct Employee** r536 = std__vector_Employee___std__allocator_Employee______operator__(&employees429, c535);
                  *r536 = base534;
                  tmp_exprcleanup466 = r536;
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp23463);
                }
              {
                std__allocator_char____allocator(&ref_tmp24464);
              }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp21461);
            }
          {
            std__allocator_char____allocator(&ref_tmp22462);
          }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp19459);
        }
      {
        std__allocator_char____allocator(&ref_tmp20460);
      }
    struct Employee** t537 = tmp_exprcleanup466;
      int i538;
      int c539 = 0;
      i538 = c539;
      while (1) {
        int t541 = i538;
        unsigned long cast542 = (unsigned long)t541;
        unsigned long r543 = std__vector_Employee___std__allocator_Employee______size___const(&employees429);
        _Bool c544 = ((cast542 < r543)) ? 1 : 0;
        if (!c544) break;
          struct BasePlusCommissionEmployee* commissionPtr545;
          int t546 = i538;
          unsigned long cast547 = (unsigned long)t546;
          struct Employee** r548 = std__vector_Employee___std__allocator_Employee______operator__(&employees429, cast547);
          struct Employee* t549 = *r548;
          void** v550 = (void**)t549;
          void* v551 = *((void**)v550);
          __VERIFIER_virtual_call_void(t549, 1);
          int t554 = i538;
          unsigned long cast555 = (unsigned long)t554;
          struct Employee** r556 = std__vector_Employee___std__allocator_Employee______operator__(&employees429, cast555);
          struct Employee* t557 = *r556;
          _Bool cast558 = (_Bool)t557;
          struct BasePlusCommissionEmployee* ternary559;
          if (cast558) {
            void* cast560 = (void*)t557;
            unsigned char* c561 = _ZTI8Employee;
            unsigned char* c562 = _ZTI26BasePlusCommissionEmployee;
            long c563 = 0;
            void* r564 = __dynamic_cast(cast560, c561, c562, c563);
            struct BasePlusCommissionEmployee* cast565 = (struct BasePlusCommissionEmployee*)r564;
            ternary559 = (struct BasePlusCommissionEmployee*)cast565;
          } else {
            struct BasePlusCommissionEmployee* c566 = ((void*)0);
            ternary559 = (struct BasePlusCommissionEmployee*)c566;
          }
          commissionPtr545 = ternary559;
            struct BasePlusCommissionEmployee* t567 = commissionPtr545;
            struct BasePlusCommissionEmployee* c568 = ((void*)0);
            _Bool c569 = ((t567 != c568)) ? 1 : 0;
            if (c569) {
              char* cast570 = (char*)&(_str_12);
              struct std__basic_ostream_char__std__char_traits_char__* r571 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast570);
              struct BasePlusCommissionEmployee* t572 = commissionPtr545;
              double r573 = BasePlusCommissionEmployee__getBaseSalary___const(t572);
              struct std__basic_ostream_char__std__char_traits_char__* r574 = std__ostream__operator__(r571, r573);
              struct std__basic_ostream_char__std__char_traits_char__* r575 = std__ostream__operator___std__ostream_____(r574, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
              struct BasePlusCommissionEmployee* t576 = commissionPtr545;
              double c577 = 0x1.199999999999ap0;
              struct BasePlusCommissionEmployee* t578 = commissionPtr545;
              double r579 = BasePlusCommissionEmployee__getBaseSalary___const(t578);
              double b580 = c577 * r579;
              BasePlusCommissionEmployee__setBaseSalary(t576, b580);
              char* cast581 = (char*)&(_str_13);
              struct std__basic_ostream_char__std__char_traits_char__* r582 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast581);
              struct BasePlusCommissionEmployee* t583 = commissionPtr545;
              double r584 = BasePlusCommissionEmployee__getBaseSalary___const(t583);
              struct std__basic_ostream_char__std__char_traits_char__* r585 = std__ostream__operator__(r582, r584);
              struct std__basic_ostream_char__std__char_traits_char__* r586 = std__ostream__operator___std__ostream_____(r585, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            }
          char* cast587 = (char*)&(_str_14);
          struct std__basic_ostream_char__std__char_traits_char__* r588 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast587);
          int t589 = i538;
          unsigned long cast590 = (unsigned long)t589;
          struct Employee** r591 = std__vector_Employee___std__allocator_Employee______operator__(&employees429, cast590);
          struct Employee* t592 = *r591;
          void** v593 = (void**)t592;
          void* v594 = *((void**)v593);
          double vcall597 = (double)__VERIFIER_virtual_call_double(t592, 0);
          struct std__basic_ostream_char__std__char_traits_char__* r598 = std__ostream__operator__(r588, vcall597);
          struct std__basic_ostream_char__std__char_traits_char__* r599 = std__ostream__operator___std__ostream_____(r598, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      for_step540: ;
        int t600 = i538;
        int u601 = t600 + 1;
        i538 = u601;
      }
      int j602;
      int c603 = 0;
      j602 = c603;
      while (1) {
        int t605 = j602;
        unsigned long cast606 = (unsigned long)t605;
        unsigned long r607 = std__vector_Employee___std__allocator_Employee______size___const(&employees429);
        _Bool c608 = ((cast606 < r607)) ? 1 : 0;
        if (!c608) break;
          char* cast609 = (char*)&(_str_15);
          struct std__basic_ostream_char__std__char_traits_char__* r610 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast609);
          int t611 = j602;
          unsigned long cast612 = (unsigned long)t611;
          struct Employee** r613 = std__vector_Employee___std__allocator_Employee______operator__(&employees429, cast612);
          struct Employee* t614 = *r613;
          struct Employee* c615 = ((void*)0);
          _Bool c616 = ((t614 == c615)) ? 1 : 0;
          if (c616) {
            __cxa_bad_typeid();
            __builtin_unreachable();
          }
          void** v617 = (void**)t614;
          void* v618 = *((void**)v617);
          long c619 = -1;
          struct std__type_info** cast620 = (struct std__type_info**)v618;
          struct std__type_info** ptr621 = &(cast620)[c619];
          struct std__type_info* t622 = *ptr621;
          char* r623 = std__type_info__name___const(t622);
          struct std__basic_ostream_char__std__char_traits_char__* r624 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r610, r623);
          int t625 = j602;
          unsigned long cast626 = (unsigned long)t625;
          struct Employee** r627 = std__vector_Employee___std__allocator_Employee______operator__(&employees429, cast626);
          struct Employee* t628 = *r627;
          struct Employee* c629 = ((void*)0);
          _Bool c630 = ((t628 != c629)) ? 1 : 0;
          if (c630) {
              Employee___Employee(t628);
            {
              void* cast631 = (void*)t628;
              unsigned long c632 = 104;
              operator_delete_2(cast631, c632);
            }
          }
      for_step604: ;
        int t633 = j602;
        int u634 = t633 + 1;
        j602 = u634;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r635 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c636 = 0;
    __retval427 = c636;
    int t637 = __retval427;
    int ret_val638 = t637;
    {
      std__vector_Employee___std__allocator_Employee_______vector(&employees429);
    }
    return ret_val638;
  int t639 = __retval427;
  return t639;
}

// function: _ZNSt15__new_allocatorIP8EmployeeEC2Ev
void std____new_allocator_Employee______new_allocator_2(struct std____new_allocator_Employee___* v640) {
bb641:
  struct std____new_allocator_Employee___* this642;
  this642 = v640;
  struct std____new_allocator_Employee___* t643 = this642;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v644, unsigned long* v645) {
bb646:
  unsigned long* __a647;
  unsigned long* __b648;
  unsigned long* __retval649;
  __a647 = v644;
  __b648 = v645;
    unsigned long* t650 = __b648;
    unsigned long t651 = *t650;
    unsigned long* t652 = __a647;
    unsigned long t653 = *t652;
    _Bool c654 = ((t651 < t653)) ? 1 : 0;
    if (c654) {
      unsigned long* t655 = __b648;
      __retval649 = t655;
      unsigned long* t656 = __retval649;
      return t656;
    }
  unsigned long* t657 = __a647;
  __retval649 = t657;
  unsigned long* t658 = __retval649;
  return t658;
}

// function: _ZNSt6vectorIP8EmployeeSaIS1_EE11_S_max_sizeERKS2_
unsigned long std__vector_Employee___std__allocator_Employee_______S_max_size(struct std__allocator_Employee___* v659) {
bb660:
  struct std__allocator_Employee___* __a661;
  unsigned long __retval662;
  unsigned long __diffmax663;
  unsigned long __allocmax664;
  __a661 = v659;
  unsigned long c665 = 1152921504606846975;
  __diffmax663 = c665;
  unsigned long c666 = 2305843009213693951;
  __allocmax664 = c666;
  unsigned long* r667 = unsigned_long_const__std__min_unsigned_long_(&__diffmax663, &__allocmax664);
  unsigned long t668 = *r667;
  __retval662 = t668;
  unsigned long t669 = __retval662;
  return t669;
}

// function: _ZNSaIP8EmployeeEC2ERKS1_
void std__allocator_Employee____allocator(struct std__allocator_Employee___* v670, struct std__allocator_Employee___* v671) {
bb672:
  struct std__allocator_Employee___* this673;
  struct std__allocator_Employee___* __a674;
  this673 = v670;
  __a674 = v671;
  struct std__allocator_Employee___* t675 = this673;
  struct std____new_allocator_Employee___* base676 = (struct std____new_allocator_Employee___*)((char *)t675 + 0);
  struct std__allocator_Employee___* t677 = __a674;
  struct std____new_allocator_Employee___* base678 = (struct std____new_allocator_Employee___*)((char *)t677 + 0);
  std____new_allocator_Employee______new_allocator(base676, base678);
  return;
}

// function: _ZNSt6vectorIP8EmployeeSaIS1_EE17_S_check_init_lenEmRKS2_
unsigned long std__vector_Employee___std__allocator_Employee_______S_check_init_len(unsigned long v679, struct std__allocator_Employee___* v680) {
bb681:
  unsigned long __n682;
  struct std__allocator_Employee___* __a683;
  unsigned long __retval684;
  __n682 = v679;
  __a683 = v680;
    struct std__allocator_Employee___ ref_tmp0685;
    _Bool tmp_exprcleanup686;
    unsigned long t687 = __n682;
    struct std__allocator_Employee___* t688 = __a683;
    std__allocator_Employee____allocator(&ref_tmp0685, t688);
      unsigned long r689 = std__vector_Employee___std__allocator_Employee_______S_max_size(&ref_tmp0685);
      _Bool c690 = ((t687 > r689)) ? 1 : 0;
      tmp_exprcleanup686 = c690;
    {
      std__allocator_Employee_____allocator(&ref_tmp0685);
    }
    _Bool t691 = tmp_exprcleanup686;
    if (t691) {
      char* cast692 = (char*)&(_str_16);
      std____throw_length_error(cast692);
    }
  unsigned long t693 = __n682;
  __retval684 = t693;
  unsigned long t694 = __retval684;
  return t694;
}

// function: _ZNSt12_Vector_baseIP8EmployeeSaIS1_EE12_Vector_implC2ERKS2_
void std___Vector_base_Employee___std__allocator_Employee_______Vector_impl___Vector_impl(struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl* v695, struct std__allocator_Employee___* v696) {
bb697:
  struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl* this698;
  struct std__allocator_Employee___* __a699;
  this698 = v695;
  __a699 = v696;
  struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl* t700 = this698;
  struct std__allocator_Employee___* base701 = (struct std__allocator_Employee___*)((char *)t700 + 0);
  struct std__allocator_Employee___* t702 = __a699;
  std__allocator_Employee____allocator(base701, t702);
    struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data* base703 = (struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data*)((char *)t700 + 0);
    std___Vector_base_Employee___std__allocator_Employee_______Vector_impl_data___Vector_impl_data(base703);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb704:
  _Bool __retval705;
    _Bool c706 = 0;
    __retval705 = c706;
    _Bool t707 = __retval705;
    return t707;
  abort();
}

// function: _ZNKSt15__new_allocatorIP8EmployeeE11_M_max_sizeEv
unsigned long std____new_allocator_Employee_____M_max_size___const(struct std____new_allocator_Employee___* v708) {
bb709:
  struct std____new_allocator_Employee___* this710;
  unsigned long __retval711;
  this710 = v708;
  struct std____new_allocator_Employee___* t712 = this710;
  unsigned long c713 = 9223372036854775807;
  unsigned long c714 = 8;
  unsigned long b715 = c713 / c714;
  __retval711 = b715;
  unsigned long t716 = __retval711;
  return t716;
}

// function: _ZNSt15__new_allocatorIP8EmployeeE8allocateEmPKv
struct Employee** std____new_allocator_Employee____allocate(struct std____new_allocator_Employee___* v717, unsigned long v718, void* v719) {
bb720:
  struct std____new_allocator_Employee___* this721;
  unsigned long __n722;
  void* unnamed723;
  struct Employee** __retval724;
  this721 = v717;
  __n722 = v718;
  unnamed723 = v719;
  struct std____new_allocator_Employee___* t725 = this721;
    unsigned long t726 = __n722;
    unsigned long r727 = std____new_allocator_Employee_____M_max_size___const(t725);
    _Bool c728 = ((t726 > r727)) ? 1 : 0;
    if (c728) {
        unsigned long t729 = __n722;
        unsigned long c730 = -1;
        unsigned long c731 = 8;
        unsigned long b732 = c730 / c731;
        _Bool c733 = ((t729 > b732)) ? 1 : 0;
        if (c733) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c734 = 8;
    unsigned long c735 = 16;
    _Bool c736 = ((c734 > c735)) ? 1 : 0;
    if (c736) {
      unsigned long __al737;
      unsigned long c738 = 8;
      __al737 = c738;
      unsigned long t739 = __n722;
      unsigned long c740 = 8;
      unsigned long b741 = t739 * c740;
      unsigned long t742 = __al737;
      void* r743 = operator_new_2(b741, t742);
      struct Employee** cast744 = (struct Employee**)r743;
      __retval724 = cast744;
      struct Employee** t745 = __retval724;
      return t745;
    }
  unsigned long t746 = __n722;
  unsigned long c747 = 8;
  unsigned long b748 = t746 * c747;
  void* r749 = operator_new(b748);
  struct Employee** cast750 = (struct Employee**)r749;
  __retval724 = cast750;
  struct Employee** t751 = __retval724;
  return t751;
}

// function: _ZNSaIP8EmployeeE8allocateEm
struct Employee** std__allocator_Employee____allocate(struct std__allocator_Employee___* v752, unsigned long v753) {
bb754:
  struct std__allocator_Employee___* this755;
  unsigned long __n756;
  struct Employee** __retval757;
  this755 = v752;
  __n756 = v753;
  struct std__allocator_Employee___* t758 = this755;
    _Bool r759 = std____is_constant_evaluated();
    if (r759) {
        unsigned long t760 = __n756;
        unsigned long c761 = 8;
        unsigned long ovr762;
        _Bool ovf763 = __builtin_mul_overflow(t760, c761, &ovr762);
        __n756 = ovr762;
        if (ovf763) {
          std____throw_bad_array_new_length();
        }
      unsigned long t764 = __n756;
      void* r765 = operator_new(t764);
      struct Employee** cast766 = (struct Employee**)r765;
      __retval757 = cast766;
      struct Employee** t767 = __retval757;
      return t767;
    }
  struct std____new_allocator_Employee___* base768 = (struct std____new_allocator_Employee___*)((char *)t758 + 0);
  unsigned long t769 = __n756;
  void* c770 = ((void*)0);
  struct Employee** r771 = std____new_allocator_Employee____allocate(base768, t769, c770);
  __retval757 = r771;
  struct Employee** t772 = __retval757;
  return t772;
}

// function: _ZNSt16allocator_traitsISaIP8EmployeeEE8allocateERS2_m
struct Employee** std__allocator_traits_std__allocator_Employee______allocate(struct std__allocator_Employee___* v773, unsigned long v774) {
bb775:
  struct std__allocator_Employee___* __a776;
  unsigned long __n777;
  struct Employee** __retval778;
  __a776 = v773;
  __n777 = v774;
  struct std__allocator_Employee___* t779 = __a776;
  unsigned long t780 = __n777;
  struct Employee** r781 = std__allocator_Employee____allocate(t779, t780);
  __retval778 = r781;
  struct Employee** t782 = __retval778;
  return t782;
}

// function: _ZNSt12_Vector_baseIP8EmployeeSaIS1_EE11_M_allocateEm
struct Employee** std___Vector_base_Employee___std__allocator_Employee_______M_allocate(struct std___Vector_base_Employee____std__allocator_Employee____* v783, unsigned long v784) {
bb785:
  struct std___Vector_base_Employee____std__allocator_Employee____* this786;
  unsigned long __n787;
  struct Employee** __retval788;
  this786 = v783;
  __n787 = v784;
  struct std___Vector_base_Employee____std__allocator_Employee____* t789 = this786;
  unsigned long t790 = __n787;
  unsigned long c791 = 0;
  _Bool c792 = ((t790 != c791)) ? 1 : 0;
  struct Employee** ternary793;
  if (c792) {
    struct std__allocator_Employee___* base794 = (struct std__allocator_Employee___*)((char *)&(t789->_M_impl) + 0);
    unsigned long t795 = __n787;
    struct Employee** r796 = std__allocator_traits_std__allocator_Employee______allocate(base794, t795);
    ternary793 = (struct Employee**)r796;
  } else {
    struct Employee** c797 = ((void*)0);
    ternary793 = (struct Employee**)c797;
  }
  __retval788 = ternary793;
  struct Employee** t798 = __retval788;
  return t798;
}

// function: _ZNSt12_Vector_baseIP8EmployeeSaIS1_EE17_M_create_storageEm
void std___Vector_base_Employee___std__allocator_Employee_______M_create_storage(struct std___Vector_base_Employee____std__allocator_Employee____* v799, unsigned long v800) {
bb801:
  struct std___Vector_base_Employee____std__allocator_Employee____* this802;
  unsigned long __n803;
  this802 = v799;
  __n803 = v800;
  struct std___Vector_base_Employee____std__allocator_Employee____* t804 = this802;
  unsigned long t805 = __n803;
  struct Employee** r806 = std___Vector_base_Employee___std__allocator_Employee_______M_allocate(t804, t805);
  struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data* base807 = (struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data*)((char *)&(t804->_M_impl) + 0);
  base807->_M_start = r806;
  struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data* base808 = (struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data*)((char *)&(t804->_M_impl) + 0);
  struct Employee** t809 = base808->_M_start;
  struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data* base810 = (struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data*)((char *)&(t804->_M_impl) + 0);
  base810->_M_finish = t809;
  struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data* base811 = (struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data*)((char *)&(t804->_M_impl) + 0);
  struct Employee** t812 = base811->_M_start;
  unsigned long t813 = __n803;
  struct Employee** ptr814 = &(t812)[t813];
  struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data* base815 = (struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data*)((char *)&(t804->_M_impl) + 0);
  base815->_M_end_of_storage = ptr814;
  return;
}

// function: _ZNSt12_Vector_baseIP8EmployeeSaIS1_EE12_Vector_implD2Ev
void std___Vector_base_Employee___std__allocator_Employee_______Vector_impl____Vector_impl(struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl* v816) {
bb817:
  struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl* this818;
  this818 = v816;
  struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl* t819 = this818;
  {
    struct std__allocator_Employee___* base820 = (struct std__allocator_Employee___*)((char *)t819 + 0);
    std__allocator_Employee_____allocator(base820);
  }
  return;
}

// function: _ZNSt12_Vector_baseIP8EmployeeSaIS1_EEC2EmRKS2_
void std___Vector_base_Employee___std__allocator_Employee_______Vector_base(struct std___Vector_base_Employee____std__allocator_Employee____* v821, unsigned long v822, struct std__allocator_Employee___* v823) {
bb824:
  struct std___Vector_base_Employee____std__allocator_Employee____* this825;
  unsigned long __n826;
  struct std__allocator_Employee___* __a827;
  this825 = v821;
  __n826 = v822;
  __a827 = v823;
  struct std___Vector_base_Employee____std__allocator_Employee____* t828 = this825;
  struct std__allocator_Employee___* t829 = __a827;
  std___Vector_base_Employee___std__allocator_Employee_______Vector_impl___Vector_impl(&t828->_M_impl, t829);
    unsigned long t830 = __n826;
    std___Vector_base_Employee___std__allocator_Employee_______M_create_storage(t828, t830);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb831:
  _Bool __retval832;
    _Bool c833 = 0;
    __retval832 = c833;
    _Bool t834 = __retval832;
    return t834;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPP8EmployeevEC2ERS2_
void std___UninitDestroyGuard_Employee____void____UninitDestroyGuard(struct std___UninitDestroyGuard_Employee_____void_* v835, struct Employee*** v836) {
bb837:
  struct std___UninitDestroyGuard_Employee_____void_* this838;
  struct Employee*** __first839;
  this838 = v835;
  __first839 = v836;
  struct std___UninitDestroyGuard_Employee_____void_* t840 = this838;
  struct Employee*** t841 = __first839;
  struct Employee** t842 = *t841;
  t840->_M_first = t842;
  struct Employee*** t843 = __first839;
  t840->_M_cur = t843;
  return;
}

// function: _ZSt12construct_atIP8EmployeeJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
struct Employee** _ZSt12construct_atIP8EmployeeJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(struct Employee** v844) {
bb845:
  struct Employee** __location846;
  struct Employee** __retval847;
  void* __loc848;
  __location846 = v844;
  struct Employee** t849 = __location846;
  void* cast850 = (void*)t849;
  __loc848 = cast850;
    void* t851 = __loc848;
    struct Employee** cast852 = (struct Employee**)t851;
    struct Employee* c853 = ((void*)0);
    *cast852 = c853;
    __retval847 = cast852;
    struct Employee** t854 = __retval847;
    return t854;
  abort();
}

// function: _ZSt10_ConstructIP8EmployeeJEEvPT_DpOT0_
void void_std___Construct_Employee__(struct Employee** v855) {
bb856:
  struct Employee** __p857;
  __p857 = v855;
    _Bool r858 = std____is_constant_evaluated();
    if (r858) {
      struct Employee** t859 = __p857;
      struct Employee** r860 = _ZSt12construct_atIP8EmployeeJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t859);
      return;
    }
  struct Employee** t861 = __p857;
  void* cast862 = (void*)t861;
  struct Employee** cast863 = (struct Employee**)cast862;
  struct Employee* c864 = ((void*)0);
  *cast863 = c864;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPP8EmployeevE7releaseEv
void std___UninitDestroyGuard_Employee____void___release(struct std___UninitDestroyGuard_Employee_____void_* v865) {
bb866:
  struct std___UninitDestroyGuard_Employee_____void_* this867;
  this867 = v865;
  struct std___UninitDestroyGuard_Employee_____void_* t868 = this867;
  struct Employee*** c869 = ((void*)0);
  t868->_M_cur = c869;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPP8EmployeevED2Ev
void std___UninitDestroyGuard_Employee____void_____UninitDestroyGuard(struct std___UninitDestroyGuard_Employee_____void_* v870) {
bb871:
  struct std___UninitDestroyGuard_Employee_____void_* this872;
  this872 = v870;
  struct std___UninitDestroyGuard_Employee_____void_* t873 = this872;
    struct Employee*** t874 = t873->_M_cur;
    struct Employee*** c875 = ((void*)0);
    _Bool c876 = ((t874 != c875)) ? 1 : 0;
    if (c876) {
      struct Employee** t877 = t873->_M_first;
      struct Employee*** t878 = t873->_M_cur;
      struct Employee** t879 = *t878;
      void_std___Destroy_Employee___(t877, t879);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPP8EmployeemEET_S5_T0_
struct Employee** Employee___std____uninitialized_default_n_1_false_____uninit_default_n_Employee____unsigned_long_(struct Employee** v880, unsigned long v881) {
bb882:
  struct Employee** __first883;
  unsigned long __n884;
  struct Employee** __retval885;
  struct std___UninitDestroyGuard_Employee_____void_ __guard886;
  __first883 = v880;
  __n884 = v881;
  std___UninitDestroyGuard_Employee____void____UninitDestroyGuard(&__guard886, &__first883);
      while (1) {
        unsigned long t888 = __n884;
        unsigned long c889 = 0;
        _Bool c890 = ((t888 > c889)) ? 1 : 0;
        if (!c890) break;
        struct Employee** t891 = __first883;
        void_std___Construct_Employee__(t891);
      for_step887: ;
        unsigned long t892 = __n884;
        unsigned long u893 = t892 - 1;
        __n884 = u893;
        struct Employee** t894 = __first883;
        int c895 = 1;
        struct Employee** ptr896 = &(t894)[c895];
        __first883 = ptr896;
      }
    std___UninitDestroyGuard_Employee____void___release(&__guard886);
    struct Employee** t897 = __first883;
    __retval885 = t897;
    struct Employee** t898 = __retval885;
    struct Employee** ret_val899 = t898;
    {
      std___UninitDestroyGuard_Employee____void_____UninitDestroyGuard(&__guard886);
    }
    return ret_val899;
  abort();
}

// function: _ZSt9__fill_a1IPP8EmployeeS1_EvT_S3_RKT0_
void void_std____fill_a1_Employee____Employee__(struct Employee** v900, struct Employee** v901, struct Employee** v902) {
bb903:
  struct Employee** __first904;
  struct Employee** __last905;
  struct Employee** __value906;
  _Bool __load_outside_loop907;
  struct Employee* __val908;
  __first904 = v900;
  __last905 = v901;
  __value906 = v902;
  _Bool c909 = 1;
  __load_outside_loop907 = c909;
  struct Employee** t910 = __value906;
  struct Employee* t911 = *t910;
  __val908 = t911;
    while (1) {
      struct Employee** t913 = __first904;
      struct Employee** t914 = __last905;
      _Bool c915 = ((t913 != t914)) ? 1 : 0;
      if (!c915) break;
      struct Employee* t916 = __val908;
      struct Employee** t917 = __first904;
      *t917 = t916;
    for_step912: ;
      struct Employee** t918 = __first904;
      int c919 = 1;
      struct Employee** ptr920 = &(t918)[c919];
      __first904 = ptr920;
    }
  return;
}

// function: _ZSt8__fill_aIPP8EmployeeS1_EvT_S3_RKT0_
void void_std____fill_a_Employee____Employee__(struct Employee** v921, struct Employee** v922, struct Employee** v923) {
bb924:
  struct Employee** __first925;
  struct Employee** __last926;
  struct Employee** __value927;
  __first925 = v921;
  __last926 = v922;
  __value927 = v923;
  struct Employee** t928 = __first925;
  struct Employee** t929 = __last926;
  struct Employee** t930 = __value927;
  void_std____fill_a1_Employee____Employee__(t928, t929, t930);
  return;
}

// function: _ZSt10__fill_n_aIPP8EmployeemS1_ET_S3_T0_RKT1_St26random_access_iterator_tag
struct Employee** Employee___std____fill_n_a_Employee____unsigned_long__Employee__(struct Employee** v931, unsigned long v932, struct Employee** v933, struct std__random_access_iterator_tag v934) {
bb935:
  struct Employee** __first936;
  unsigned long __n937;
  struct Employee** __value938;
  struct std__random_access_iterator_tag unnamed939;
  struct Employee** __retval940;
  __first936 = v931;
  __n937 = v932;
  __value938 = v933;
  unnamed939 = v934;
    unsigned long t941 = __n937;
    unsigned long c942 = 0;
    _Bool c943 = ((t941 <= c942)) ? 1 : 0;
    if (c943) {
      struct Employee** t944 = __first936;
      __retval940 = t944;
      struct Employee** t945 = __retval940;
      return t945;
    }
  struct Employee** t946 = __first936;
  struct Employee** t947 = __first936;
  unsigned long t948 = __n937;
  struct Employee** ptr949 = &(t947)[t948];
  struct Employee** t950 = __value938;
  void_std____fill_a_Employee____Employee__(t946, ptr949, t950);
  struct Employee** t951 = __first936;
  unsigned long t952 = __n937;
  struct Employee** ptr953 = &(t951)[t952];
  __retval940 = ptr953;
  struct Employee** t954 = __retval940;
  return t954;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v955) {
bb956:
  unsigned long __n957;
  unsigned long __retval958;
  __n957 = v955;
  unsigned long t959 = __n957;
  __retval958 = t959;
  unsigned long t960 = __retval958;
  return t960;
}

// function: _ZSt19__iterator_categoryIPP8EmployeeENSt15iterator_traitsIT_E17iterator_categoryERKS4_
struct std__random_access_iterator_tag std__iterator_traits_Employee_____iterator_category_std____iterator_category_Employee___(struct Employee*** v961) {
bb962:
  struct Employee*** unnamed963;
  struct std__random_access_iterator_tag __retval964;
  unnamed963 = v961;
  struct std__random_access_iterator_tag t965 = __retval964;
  return t965;
}

// function: _ZSt6fill_nIPP8EmployeemS1_ET_S3_T0_RKT1_
struct Employee** Employee___std__fill_n_Employee____unsigned_long__Employee__(struct Employee** v966, unsigned long v967, struct Employee** v968) {
bb969:
  struct Employee** __first970;
  unsigned long __n971;
  struct Employee** __value972;
  struct Employee** __retval973;
  struct std__random_access_iterator_tag agg_tmp0974;
  __first970 = v966;
  __n971 = v967;
  __value972 = v968;
  struct Employee** t975 = __first970;
  unsigned long t976 = __n971;
  unsigned long r977 = std____size_to_integer(t976);
  struct Employee** t978 = __value972;
  struct std__random_access_iterator_tag r979 = std__iterator_traits_Employee_____iterator_category_std____iterator_category_Employee___(&__first970);
  agg_tmp0974 = r979;
  struct std__random_access_iterator_tag t980 = agg_tmp0974;
  struct Employee** r981 = Employee___std____fill_n_a_Employee____unsigned_long__Employee__(t975, r977, t978, t980);
  __retval973 = r981;
  struct Employee** t982 = __retval973;
  return t982;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPP8EmployeemEET_S5_T0_
struct Employee** Employee___std____uninitialized_default_n_1_true_____uninit_default_n_Employee____unsigned_long_(struct Employee** v983, unsigned long v984) {
bb985:
  struct Employee** __first986;
  unsigned long __n987;
  struct Employee** __retval988;
  __first986 = v983;
  __n987 = v984;
    unsigned long t989 = __n987;
    unsigned long c990 = 0;
    _Bool c991 = ((t989 > c990)) ? 1 : 0;
    if (c991) {
      struct Employee** __val992;
      struct Employee** t993 = __first986;
      __val992 = t993;
      struct Employee** t994 = __val992;
      void_std___Construct_Employee__(t994);
      struct Employee** t995 = __first986;
      int c996 = 1;
      struct Employee** ptr997 = &(t995)[c996];
      __first986 = ptr997;
      struct Employee** t998 = __first986;
      unsigned long t999 = __n987;
      unsigned long c1000 = 1;
      unsigned long b1001 = t999 - c1000;
      struct Employee** t1002 = __val992;
      struct Employee** r1003 = Employee___std__fill_n_Employee____unsigned_long__Employee__(t998, b1001, t1002);
      __first986 = r1003;
    }
  struct Employee** t1004 = __first986;
  __retval988 = t1004;
  struct Employee** t1005 = __retval988;
  return t1005;
}

// function: _ZSt25__uninitialized_default_nIPP8EmployeemET_S3_T0_
struct Employee** Employee___std____uninitialized_default_n_Employee____unsigned_long_(struct Employee** v1006, unsigned long v1007) {
bb1008:
  struct Employee** __first1009;
  unsigned long __n1010;
  struct Employee** __retval1011;
  _Bool __can_fill1012;
  __first1009 = v1006;
  __n1010 = v1007;
    _Bool r1013 = std__is_constant_evaluated();
    if (r1013) {
      struct Employee** t1014 = __first1009;
      unsigned long t1015 = __n1010;
      struct Employee** r1016 = Employee___std____uninitialized_default_n_1_false_____uninit_default_n_Employee____unsigned_long_(t1014, t1015);
      __retval1011 = r1016;
      struct Employee** t1017 = __retval1011;
      return t1017;
    }
  _Bool c1018 = 1;
  __can_fill1012 = c1018;
  struct Employee** t1019 = __first1009;
  unsigned long t1020 = __n1010;
  struct Employee** r1021 = Employee___std____uninitialized_default_n_1_true_____uninit_default_n_Employee____unsigned_long_(t1019, t1020);
  __retval1011 = r1021;
  struct Employee** t1022 = __retval1011;
  return t1022;
}

// function: _ZSt27__uninitialized_default_n_aIPP8EmployeemS1_ET_S3_T0_RSaIT1_E
struct Employee** Employee___std____uninitialized_default_n_a_Employee____unsigned_long__Employee__(struct Employee** v1023, unsigned long v1024, struct std__allocator_Employee___* v1025) {
bb1026:
  struct Employee** __first1027;
  unsigned long __n1028;
  struct std__allocator_Employee___* unnamed1029;
  struct Employee** __retval1030;
  __first1027 = v1023;
  __n1028 = v1024;
  unnamed1029 = v1025;
  struct Employee** t1031 = __first1027;
  unsigned long t1032 = __n1028;
  struct Employee** r1033 = Employee___std____uninitialized_default_n_Employee____unsigned_long_(t1031, t1032);
  __retval1030 = r1033;
  struct Employee** t1034 = __retval1030;
  return t1034;
}

// function: _ZNSt12_Vector_baseIP8EmployeeSaIS1_EE19_M_get_Tp_allocatorEv
struct std__allocator_Employee___* std___Vector_base_Employee___std__allocator_Employee_______M_get_Tp_allocator(struct std___Vector_base_Employee____std__allocator_Employee____* v1035) {
bb1036:
  struct std___Vector_base_Employee____std__allocator_Employee____* this1037;
  struct std__allocator_Employee___* __retval1038;
  this1037 = v1035;
  struct std___Vector_base_Employee____std__allocator_Employee____* t1039 = this1037;
  struct std__allocator_Employee___* base1040 = (struct std__allocator_Employee___*)((char *)&(t1039->_M_impl) + 0);
  __retval1038 = base1040;
  struct std__allocator_Employee___* t1041 = __retval1038;
  return t1041;
}

// function: _ZNSt6vectorIP8EmployeeSaIS1_EE21_M_default_initializeEm
void std__vector_Employee___std__allocator_Employee_______M_default_initialize(struct std__vector_Employee____std__allocator_Employee____* v1042, unsigned long v1043) {
bb1044:
  struct std__vector_Employee____std__allocator_Employee____* this1045;
  unsigned long __n1046;
  this1045 = v1042;
  __n1046 = v1043;
  struct std__vector_Employee____std__allocator_Employee____* t1047 = this1045;
  struct std___Vector_base_Employee____std__allocator_Employee____* base1048 = (struct std___Vector_base_Employee____std__allocator_Employee____*)((char *)t1047 + 0);
  struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data* base1049 = (struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data*)((char *)&(base1048->_M_impl) + 0);
  struct Employee** t1050 = base1049->_M_start;
  unsigned long t1051 = __n1046;
  struct std___Vector_base_Employee____std__allocator_Employee____* base1052 = (struct std___Vector_base_Employee____std__allocator_Employee____*)((char *)t1047 + 0);
  struct std__allocator_Employee___* r1053 = std___Vector_base_Employee___std__allocator_Employee_______M_get_Tp_allocator(base1052);
  struct Employee** r1054 = Employee___std____uninitialized_default_n_a_Employee____unsigned_long__Employee__(t1050, t1051, r1053);
  struct std___Vector_base_Employee____std__allocator_Employee____* base1055 = (struct std___Vector_base_Employee____std__allocator_Employee____*)((char *)t1047 + 0);
  struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data* base1056 = (struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data*)((char *)&(base1055->_M_impl) + 0);
  base1056->_M_finish = r1054;
  return;
}

// function: _ZNSt15__new_allocatorIP8EmployeeE10deallocateEPS1_m
void std____new_allocator_Employee____deallocate(struct std____new_allocator_Employee___* v1057, struct Employee** v1058, unsigned long v1059) {
bb1060:
  struct std____new_allocator_Employee___* this1061;
  struct Employee** __p1062;
  unsigned long __n1063;
  this1061 = v1057;
  __p1062 = v1058;
  __n1063 = v1059;
  struct std____new_allocator_Employee___* t1064 = this1061;
    unsigned long c1065 = 8;
    unsigned long c1066 = 16;
    _Bool c1067 = ((c1065 > c1066)) ? 1 : 0;
    if (c1067) {
      struct Employee** t1068 = __p1062;
      void* cast1069 = (void*)t1068;
      unsigned long t1070 = __n1063;
      unsigned long c1071 = 8;
      unsigned long b1072 = t1070 * c1071;
      unsigned long c1073 = 8;
      operator_delete_3(cast1069, b1072, c1073);
      return;
    }
  struct Employee** t1074 = __p1062;
  void* cast1075 = (void*)t1074;
  unsigned long t1076 = __n1063;
  unsigned long c1077 = 8;
  unsigned long b1078 = t1076 * c1077;
  operator_delete_2(cast1075, b1078);
  return;
}

// function: _ZNSaIP8EmployeeE10deallocateEPS0_m
void std__allocator_Employee____deallocate(struct std__allocator_Employee___* v1079, struct Employee** v1080, unsigned long v1081) {
bb1082:
  struct std__allocator_Employee___* this1083;
  struct Employee** __p1084;
  unsigned long __n1085;
  this1083 = v1079;
  __p1084 = v1080;
  __n1085 = v1081;
  struct std__allocator_Employee___* t1086 = this1083;
    _Bool r1087 = std____is_constant_evaluated();
    if (r1087) {
      struct Employee** t1088 = __p1084;
      void* cast1089 = (void*)t1088;
      operator_delete(cast1089);
      return;
    }
  struct std____new_allocator_Employee___* base1090 = (struct std____new_allocator_Employee___*)((char *)t1086 + 0);
  struct Employee** t1091 = __p1084;
  unsigned long t1092 = __n1085;
  std____new_allocator_Employee____deallocate(base1090, t1091, t1092);
  return;
}

// function: _ZNSt16allocator_traitsISaIP8EmployeeEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_Employee______deallocate(struct std__allocator_Employee___* v1093, struct Employee** v1094, unsigned long v1095) {
bb1096:
  struct std__allocator_Employee___* __a1097;
  struct Employee** __p1098;
  unsigned long __n1099;
  __a1097 = v1093;
  __p1098 = v1094;
  __n1099 = v1095;
  struct std__allocator_Employee___* t1100 = __a1097;
  struct Employee** t1101 = __p1098;
  unsigned long t1102 = __n1099;
  std__allocator_Employee____deallocate(t1100, t1101, t1102);
  return;
}

// function: _ZNSt12_Vector_baseIP8EmployeeSaIS1_EE13_M_deallocateEPS1_m
void std___Vector_base_Employee___std__allocator_Employee_______M_deallocate(struct std___Vector_base_Employee____std__allocator_Employee____* v1103, struct Employee** v1104, unsigned long v1105) {
bb1106:
  struct std___Vector_base_Employee____std__allocator_Employee____* this1107;
  struct Employee** __p1108;
  unsigned long __n1109;
  this1107 = v1103;
  __p1108 = v1104;
  __n1109 = v1105;
  struct std___Vector_base_Employee____std__allocator_Employee____* t1110 = this1107;
    struct Employee** t1111 = __p1108;
    _Bool cast1112 = (_Bool)t1111;
    if (cast1112) {
      struct std__allocator_Employee___* base1113 = (struct std__allocator_Employee___*)((char *)&(t1110->_M_impl) + 0);
      struct Employee** t1114 = __p1108;
      unsigned long t1115 = __n1109;
      std__allocator_traits_std__allocator_Employee______deallocate(base1113, t1114, t1115);
    }
  return;
}

// function: _ZNSt12_Vector_baseIP8EmployeeSaIS1_EED2Ev
void std___Vector_base_Employee___std__allocator_Employee________Vector_base(struct std___Vector_base_Employee____std__allocator_Employee____* v1116) {
bb1117:
  struct std___Vector_base_Employee____std__allocator_Employee____* this1118;
  this1118 = v1116;
  struct std___Vector_base_Employee____std__allocator_Employee____* t1119 = this1118;
    struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data* base1120 = (struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data*)((char *)&(t1119->_M_impl) + 0);
    struct Employee** t1121 = base1120->_M_start;
    struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data* base1122 = (struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data*)((char *)&(t1119->_M_impl) + 0);
    struct Employee** t1123 = base1122->_M_end_of_storage;
    struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data* base1124 = (struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data*)((char *)&(t1119->_M_impl) + 0);
    struct Employee** t1125 = base1124->_M_start;
    long diff1126 = t1123 - t1125;
    unsigned long cast1127 = (unsigned long)diff1126;
    std___Vector_base_Employee___std__allocator_Employee_______M_deallocate(t1119, t1121, cast1127);
  {
    std___Vector_base_Employee___std__allocator_Employee_______Vector_impl____Vector_impl(&t1119->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIP8EmployeeEC2ERKS2_
void std____new_allocator_Employee______new_allocator(struct std____new_allocator_Employee___* v1128, struct std____new_allocator_Employee___* v1129) {
bb1130:
  struct std____new_allocator_Employee___* this1131;
  struct std____new_allocator_Employee___* unnamed1132;
  this1131 = v1128;
  unnamed1132 = v1129;
  struct std____new_allocator_Employee___* t1133 = this1131;
  return;
}

// function: _ZNSt12_Vector_baseIP8EmployeeSaIS1_EE17_Vector_impl_dataC2Ev
void std___Vector_base_Employee___std__allocator_Employee_______Vector_impl_data___Vector_impl_data(struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data* v1134) {
bb1135:
  struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data* this1136;
  this1136 = v1134;
  struct std___Vector_base_Employee____std__allocator_Employee_______Vector_impl_data* t1137 = this1136;
  struct Employee** c1138 = ((void*)0);
  t1137->_M_start = c1138;
  struct Employee** c1139 = ((void*)0);
  t1137->_M_finish = c1139;
  struct Employee** c1140 = ((void*)0);
  t1137->_M_end_of_storage = c1140;
  return;
}

// function: _ZSt10destroy_atIP8EmployeeEvPT_
void void_std__destroy_at_Employee__(struct Employee** v1141) {
bb1142:
  struct Employee** __location1143;
  __location1143 = v1141;
  return;
}

// function: _ZSt8_DestroyIPP8EmployeeEvT_S3_
void void_std___Destroy_Employee___(struct Employee** v1144, struct Employee** v1145) {
bb1146:
  struct Employee** __first1147;
  struct Employee** __last1148;
  __first1147 = v1144;
  __last1148 = v1145;
      _Bool r1149 = std____is_constant_evaluated();
      if (r1149) {
          while (1) {
            struct Employee** t1151 = __first1147;
            struct Employee** t1152 = __last1148;
            _Bool c1153 = ((t1151 != t1152)) ? 1 : 0;
            if (!c1153) break;
            struct Employee** t1154 = __first1147;
            void_std__destroy_at_Employee__(t1154);
          for_step1150: ;
            struct Employee** t1155 = __first1147;
            int c1156 = 1;
            struct Employee** ptr1157 = &(t1155)[c1156];
            __first1147 = ptr1157;
          }
      }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1158) {
bb1159:
  struct std____new_allocator_char_* this1160;
  this1160 = v1158;
  struct std____new_allocator_char_* t1161 = this1160;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1162) {
bb1163:
  char* __r1164;
  char* __retval1165;
  __r1164 = v1162;
  char* t1166 = __r1164;
  __retval1165 = t1166;
  char* t1167 = __retval1165;
  return t1167;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1168) {
bb1169:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1170;
  char* __retval1171;
  this1170 = v1168;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1172 = this1170;
  char* cast1173 = (char*)&(t1172->field2._M_local_buf);
  char* r1174 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1173);
  __retval1171 = r1174;
  char* t1175 = __retval1171;
  return t1175;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1176, char* v1177, struct std__allocator_char_* v1178) {
bb1179:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1180;
  char* __dat1181;
  struct std__allocator_char_* __a1182;
  this1180 = v1176;
  __dat1181 = v1177;
  __a1182 = v1178;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1183 = this1180;
  struct std__allocator_char_* base1184 = (struct std__allocator_char_*)((char *)t1183 + 0);
  struct std__allocator_char_* t1185 = __a1182;
  std__allocator_char___allocator(base1184, t1185);
    char* t1186 = __dat1181;
    t1183->_M_p = t1186;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1187, char* v1188) {
bb1189:
  char* __c11190;
  char* __c21191;
  _Bool __retval1192;
  __c11190 = v1187;
  __c21191 = v1188;
  char* t1193 = __c11190;
  char t1194 = *t1193;
  int cast1195 = (int)t1194;
  char* t1196 = __c21191;
  char t1197 = *t1196;
  int cast1198 = (int)t1197;
  _Bool c1199 = ((cast1195 == cast1198)) ? 1 : 0;
  __retval1192 = c1199;
  _Bool t1200 = __retval1192;
  return t1200;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1201) {
bb1202:
  char* __p1203;
  unsigned long __retval1204;
  unsigned long __i1205;
  __p1203 = v1201;
  unsigned long c1206 = 0;
  __i1205 = c1206;
    char ref_tmp01207;
    while (1) {
      unsigned long t1208 = __i1205;
      char* t1209 = __p1203;
      char* ptr1210 = &(t1209)[t1208];
      char c1211 = 0;
      ref_tmp01207 = c1211;
      _Bool r1212 = __gnu_cxx__char_traits_char___eq(ptr1210, &ref_tmp01207);
      _Bool u1213 = !r1212;
      if (!u1213) break;
      unsigned long t1214 = __i1205;
      unsigned long u1215 = t1214 + 1;
      __i1205 = u1215;
    }
  unsigned long t1216 = __i1205;
  __retval1204 = t1216;
  unsigned long t1217 = __retval1204;
  return t1217;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1218) {
bb1219:
  char* __s1220;
  unsigned long __retval1221;
  __s1220 = v1218;
    _Bool r1222 = std____is_constant_evaluated();
    if (r1222) {
      char* t1223 = __s1220;
      unsigned long r1224 = __gnu_cxx__char_traits_char___length(t1223);
      __retval1221 = r1224;
      unsigned long t1225 = __retval1221;
      return t1225;
    }
  char* t1226 = __s1220;
  unsigned long r1227 = strlen(t1226);
  __retval1221 = r1227;
  unsigned long t1228 = __retval1221;
  return t1228;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1229, char* v1230, struct std__random_access_iterator_tag v1231) {
bb1232:
  char* __first1233;
  char* __last1234;
  struct std__random_access_iterator_tag unnamed1235;
  long __retval1236;
  __first1233 = v1229;
  __last1234 = v1230;
  unnamed1235 = v1231;
  char* t1237 = __last1234;
  char* t1238 = __first1233;
  long diff1239 = t1237 - t1238;
  __retval1236 = diff1239;
  long t1240 = __retval1236;
  return t1240;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1241) {
bb1242:
  char** unnamed1243;
  struct std__random_access_iterator_tag __retval1244;
  unnamed1243 = v1241;
  struct std__random_access_iterator_tag t1245 = __retval1244;
  return t1245;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1246, char* v1247) {
bb1248:
  char* __first1249;
  char* __last1250;
  long __retval1251;
  struct std__random_access_iterator_tag agg_tmp01252;
  __first1249 = v1246;
  __last1250 = v1247;
  char* t1253 = __first1249;
  char* t1254 = __last1250;
  struct std__random_access_iterator_tag r1255 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1249);
  agg_tmp01252 = r1255;
  struct std__random_access_iterator_tag t1256 = agg_tmp01252;
  long r1257 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1253, t1254, t1256);
  __retval1251 = r1257;
  long t1258 = __retval1251;
  return t1258;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1259, char* v1260) {
bb1261:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1262;
  char* __p1263;
  this1262 = v1259;
  __p1263 = v1260;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1264 = this1262;
  char* t1265 = __p1263;
  t1264->_M_dataplus._M_p = t1265;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1266) {
bb1267:
  struct std__allocator_char_* __a1268;
  unsigned long __retval1269;
  __a1268 = v1266;
  unsigned long c1270 = -1;
  unsigned long c1271 = 1;
  unsigned long b1272 = c1270 / c1271;
  __retval1269 = b1272;
  unsigned long t1273 = __retval1269;
  return t1273;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1274) {
bb1275:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1276;
  struct std__allocator_char_* __retval1277;
  this1276 = v1274;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1278 = this1276;
  struct std__allocator_char_* base1279 = (struct std__allocator_char_*)((char *)&(t1278->_M_dataplus) + 0);
  __retval1277 = base1279;
  struct std__allocator_char_* t1280 = __retval1277;
  return t1280;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1281) {
bb1282:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1283;
  unsigned long __retval1284;
  unsigned long __diffmax1285;
  unsigned long __allocmax1286;
  this1283 = v1281;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1287 = this1283;
  unsigned long c1288 = 9223372036854775807;
  __diffmax1285 = c1288;
  struct std__allocator_char_* r1289 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1287);
  unsigned long r1290 = std__allocator_traits_std__allocator_char_____max_size(r1289);
  __allocmax1286 = r1290;
  unsigned long* r1291 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1285, &__allocmax1286);
  unsigned long t1292 = *r1291;
  unsigned long c1293 = 1;
  unsigned long b1294 = t1292 - c1293;
  __retval1284 = b1294;
  unsigned long t1295 = __retval1284;
  return t1295;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1296) {
bb1297:
  struct std____new_allocator_char_* this1298;
  unsigned long __retval1299;
  this1298 = v1296;
  struct std____new_allocator_char_* t1300 = this1298;
  unsigned long c1301 = 9223372036854775807;
  unsigned long c1302 = 1;
  unsigned long b1303 = c1301 / c1302;
  __retval1299 = b1303;
  unsigned long t1304 = __retval1299;
  return t1304;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1305, unsigned long v1306, void* v1307) {
bb1308:
  struct std____new_allocator_char_* this1309;
  unsigned long __n1310;
  void* unnamed1311;
  char* __retval1312;
  this1309 = v1305;
  __n1310 = v1306;
  unnamed1311 = v1307;
  struct std____new_allocator_char_* t1313 = this1309;
    unsigned long t1314 = __n1310;
    unsigned long r1315 = std____new_allocator_char____M_max_size___const(t1313);
    _Bool c1316 = ((t1314 > r1315)) ? 1 : 0;
    if (c1316) {
        unsigned long t1317 = __n1310;
        unsigned long c1318 = -1;
        unsigned long c1319 = 1;
        unsigned long b1320 = c1318 / c1319;
        _Bool c1321 = ((t1317 > b1320)) ? 1 : 0;
        if (c1321) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1322 = 1;
    unsigned long c1323 = 16;
    _Bool c1324 = ((c1322 > c1323)) ? 1 : 0;
    if (c1324) {
      unsigned long __al1325;
      unsigned long c1326 = 1;
      __al1325 = c1326;
      unsigned long t1327 = __n1310;
      unsigned long c1328 = 1;
      unsigned long b1329 = t1327 * c1328;
      unsigned long t1330 = __al1325;
      void* r1331 = operator_new_2(b1329, t1330);
      char* cast1332 = (char*)r1331;
      __retval1312 = cast1332;
      char* t1333 = __retval1312;
      return t1333;
    }
  unsigned long t1334 = __n1310;
  unsigned long c1335 = 1;
  unsigned long b1336 = t1334 * c1335;
  void* r1337 = operator_new(b1336);
  char* cast1338 = (char*)r1337;
  __retval1312 = cast1338;
  char* t1339 = __retval1312;
  return t1339;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1340, unsigned long v1341) {
bb1342:
  struct std__allocator_char_* this1343;
  unsigned long __n1344;
  char* __retval1345;
  this1343 = v1340;
  __n1344 = v1341;
  struct std__allocator_char_* t1346 = this1343;
    _Bool r1347 = std____is_constant_evaluated();
    if (r1347) {
        unsigned long t1348 = __n1344;
        unsigned long c1349 = 1;
        unsigned long ovr1350;
        _Bool ovf1351 = __builtin_mul_overflow(t1348, c1349, &ovr1350);
        __n1344 = ovr1350;
        if (ovf1351) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1352 = __n1344;
      void* r1353 = operator_new(t1352);
      char* cast1354 = (char*)r1353;
      __retval1345 = cast1354;
      char* t1355 = __retval1345;
      return t1355;
    }
  struct std____new_allocator_char_* base1356 = (struct std____new_allocator_char_*)((char *)t1346 + 0);
  unsigned long t1357 = __n1344;
  void* c1358 = ((void*)0);
  char* r1359 = std____new_allocator_char___allocate(base1356, t1357, c1358);
  __retval1345 = r1359;
  char* t1360 = __retval1345;
  return t1360;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1361, unsigned long v1362) {
bb1363:
  struct std__allocator_char_* __a1364;
  unsigned long __n1365;
  char* __retval1366;
  __a1364 = v1361;
  __n1365 = v1362;
  struct std__allocator_char_* t1367 = __a1364;
  unsigned long t1368 = __n1365;
  char* r1369 = std__allocator_char___allocate(t1367, t1368);
  __retval1366 = r1369;
  char* t1370 = __retval1366;
  return t1370;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1371, unsigned long v1372) {
bb1373:
  struct std__allocator_char_* __a1374;
  unsigned long __n1375;
  char* __retval1376;
  char* __p1377;
  __a1374 = v1371;
  __n1375 = v1372;
  struct std__allocator_char_* t1378 = __a1374;
  unsigned long t1379 = __n1375;
  char* r1380 = std__allocator_traits_std__allocator_char_____allocate(t1378, t1379);
  __p1377 = r1380;
  char* t1381 = __p1377;
  __retval1376 = t1381;
  char* t1382 = __retval1376;
  return t1382;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1383) {
bb1384:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1385;
  struct std__allocator_char_* __retval1386;
  this1385 = v1383;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1387 = this1385;
  struct std__allocator_char_* base1388 = (struct std__allocator_char_*)((char *)&(t1387->_M_dataplus) + 0);
  __retval1386 = base1388;
  struct std__allocator_char_* t1389 = __retval1386;
  return t1389;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1390, unsigned long* v1391, unsigned long v1392) {
bb1393:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1394;
  unsigned long* __capacity1395;
  unsigned long __old_capacity1396;
  char* __retval1397;
  this1394 = v1390;
  __capacity1395 = v1391;
  __old_capacity1396 = v1392;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1398 = this1394;
    unsigned long* t1399 = __capacity1395;
    unsigned long t1400 = *t1399;
    unsigned long r1401 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1398);
    _Bool c1402 = ((t1400 > r1401)) ? 1 : 0;
    if (c1402) {
      char* cast1403 = (char*)&(_str_18);
      std____throw_length_error(cast1403);
    }
    unsigned long* t1404 = __capacity1395;
    unsigned long t1405 = *t1404;
    unsigned long t1406 = __old_capacity1396;
    _Bool c1407 = ((t1405 > t1406)) ? 1 : 0;
    _Bool ternary1408;
    if (c1407) {
      unsigned long* t1409 = __capacity1395;
      unsigned long t1410 = *t1409;
      unsigned long c1411 = 2;
      unsigned long t1412 = __old_capacity1396;
      unsigned long b1413 = c1411 * t1412;
      _Bool c1414 = ((t1410 < b1413)) ? 1 : 0;
      ternary1408 = (_Bool)c1414;
    } else {
      _Bool c1415 = 0;
      ternary1408 = (_Bool)c1415;
    }
    if (ternary1408) {
      unsigned long c1416 = 2;
      unsigned long t1417 = __old_capacity1396;
      unsigned long b1418 = c1416 * t1417;
      unsigned long* t1419 = __capacity1395;
      *t1419 = b1418;
        unsigned long* t1420 = __capacity1395;
        unsigned long t1421 = *t1420;
        unsigned long r1422 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1398);
        _Bool c1423 = ((t1421 > r1422)) ? 1 : 0;
        if (c1423) {
          unsigned long r1424 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1398);
          unsigned long* t1425 = __capacity1395;
          *t1425 = r1424;
        }
    }
  struct std__allocator_char_* r1426 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1398);
  unsigned long* t1427 = __capacity1395;
  unsigned long t1428 = *t1427;
  unsigned long c1429 = 1;
  unsigned long b1430 = t1428 + c1429;
  char* r1431 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1426, b1430);
  __retval1397 = r1431;
  char* t1432 = __retval1397;
  return t1432;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1433, unsigned long v1434) {
bb1435:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1436;
  unsigned long __capacity1437;
  this1436 = v1433;
  __capacity1437 = v1434;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1438 = this1436;
  unsigned long t1439 = __capacity1437;
  t1438->field2._M_allocated_capacity = t1439;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1440) {
bb1441:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1442;
  this1442 = v1440;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1443 = this1442;
    _Bool r1444 = std__is_constant_evaluated();
    if (r1444) {
        unsigned long __i1445;
        unsigned long c1446 = 0;
        __i1445 = c1446;
        while (1) {
          unsigned long t1448 = __i1445;
          unsigned long c1449 = 15;
          _Bool c1450 = ((t1448 <= c1449)) ? 1 : 0;
          if (!c1450) break;
          char c1451 = 0;
          unsigned long t1452 = __i1445;
          t1443->field2._M_local_buf[t1452] = c1451;
        for_step1447: ;
          unsigned long t1453 = __i1445;
          unsigned long u1454 = t1453 + 1;
          __i1445 = u1454;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1455, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1456) {
bb1457:
  struct _Guard* this1458;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1459;
  this1458 = v1455;
  __s1459 = v1456;
  struct _Guard* t1460 = this1458;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1461 = __s1459;
  t1460->_M_guarded = t1461;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1462, char* v1463) {
bb1464:
  char* __location1465;
  char* __args1466;
  char* __retval1467;
  void* __loc1468;
  __location1465 = v1462;
  __args1466 = v1463;
  char* t1469 = __location1465;
  void* cast1470 = (void*)t1469;
  __loc1468 = cast1470;
    void* t1471 = __loc1468;
    char* cast1472 = (char*)t1471;
    char* t1473 = __args1466;
    char t1474 = *t1473;
    *cast1472 = t1474;
    __retval1467 = cast1472;
    char* t1475 = __retval1467;
    return t1475;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1476, char* v1477) {
bb1478:
  char* __c11479;
  char* __c21480;
  __c11479 = v1476;
  __c21480 = v1477;
    _Bool r1481 = std____is_constant_evaluated();
    if (r1481) {
      char* t1482 = __c11479;
      char* t1483 = __c21480;
      char* r1484 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1482, t1483);
    } else {
      char* t1485 = __c21480;
      char t1486 = *t1485;
      char* t1487 = __c11479;
      *t1487 = t1486;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1488, char* v1489, unsigned long v1490) {
bb1491:
  char* __s11492;
  char* __s21493;
  unsigned long __n1494;
  char* __retval1495;
  __s11492 = v1488;
  __s21493 = v1489;
  __n1494 = v1490;
    unsigned long t1496 = __n1494;
    unsigned long c1497 = 0;
    _Bool c1498 = ((t1496 == c1497)) ? 1 : 0;
    if (c1498) {
      char* t1499 = __s11492;
      __retval1495 = t1499;
      char* t1500 = __retval1495;
      return t1500;
    }
    _Bool r1501 = std____is_constant_evaluated();
    if (r1501) {
        unsigned long __i1502;
        unsigned long c1503 = 0;
        __i1502 = c1503;
        while (1) {
          unsigned long t1505 = __i1502;
          unsigned long t1506 = __n1494;
          _Bool c1507 = ((t1505 < t1506)) ? 1 : 0;
          if (!c1507) break;
          char* t1508 = __s11492;
          unsigned long t1509 = __i1502;
          char* ptr1510 = &(t1508)[t1509];
          unsigned long t1511 = __i1502;
          char* t1512 = __s21493;
          char* ptr1513 = &(t1512)[t1511];
          char* r1514 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1510, ptr1513);
        for_step1504: ;
          unsigned long t1515 = __i1502;
          unsigned long u1516 = t1515 + 1;
          __i1502 = u1516;
        }
      char* t1517 = __s11492;
      __retval1495 = t1517;
      char* t1518 = __retval1495;
      return t1518;
    }
  char* t1519 = __s11492;
  void* cast1520 = (void*)t1519;
  char* t1521 = __s21493;
  void* cast1522 = (void*)t1521;
  unsigned long t1523 = __n1494;
  unsigned long c1524 = 1;
  unsigned long b1525 = t1523 * c1524;
  void* r1526 = memcpy(cast1520, cast1522, b1525);
  char* t1527 = __s11492;
  __retval1495 = t1527;
  char* t1528 = __retval1495;
  return t1528;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1529, char* v1530, unsigned long v1531) {
bb1532:
  char* __s11533;
  char* __s21534;
  unsigned long __n1535;
  char* __retval1536;
  __s11533 = v1529;
  __s21534 = v1530;
  __n1535 = v1531;
    unsigned long t1537 = __n1535;
    unsigned long c1538 = 0;
    _Bool c1539 = ((t1537 == c1538)) ? 1 : 0;
    if (c1539) {
      char* t1540 = __s11533;
      __retval1536 = t1540;
      char* t1541 = __retval1536;
      return t1541;
    }
    _Bool r1542 = std____is_constant_evaluated();
    if (r1542) {
      char* t1543 = __s11533;
      char* t1544 = __s21534;
      unsigned long t1545 = __n1535;
      char* r1546 = __gnu_cxx__char_traits_char___copy(t1543, t1544, t1545);
      __retval1536 = r1546;
      char* t1547 = __retval1536;
      return t1547;
    }
  char* t1548 = __s11533;
  void* cast1549 = (void*)t1548;
  char* t1550 = __s21534;
  void* cast1551 = (void*)t1550;
  unsigned long t1552 = __n1535;
  void* r1553 = memcpy(cast1549, cast1551, t1552);
  char* cast1554 = (char*)r1553;
  __retval1536 = cast1554;
  char* t1555 = __retval1536;
  return t1555;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1556, char* v1557, unsigned long v1558) {
bb1559:
  char* __d1560;
  char* __s1561;
  unsigned long __n1562;
  __d1560 = v1556;
  __s1561 = v1557;
  __n1562 = v1558;
    unsigned long t1563 = __n1562;
    unsigned long c1564 = 1;
    _Bool c1565 = ((t1563 == c1564)) ? 1 : 0;
    if (c1565) {
      char* t1566 = __d1560;
      char* t1567 = __s1561;
      std__char_traits_char___assign(t1566, t1567);
    } else {
      char* t1568 = __d1560;
      char* t1569 = __s1561;
      unsigned long t1570 = __n1562;
      char* r1571 = std__char_traits_char___copy(t1568, t1569, t1570);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1572) {
bb1573:
  char* __it1574;
  char* __retval1575;
  __it1574 = v1572;
  char* t1576 = __it1574;
  __retval1575 = t1576;
  char* t1577 = __retval1575;
  return t1577;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1578, char* v1579, char* v1580) {
bb1581:
  char* __p1582;
  char* __k11583;
  char* __k21584;
  __p1582 = v1578;
  __k11583 = v1579;
  __k21584 = v1580;
    char* t1585 = __p1582;
    char* t1586 = __k11583;
    char* r1587 = char_const__std____niter_base_char_const__(t1586);
    char* t1588 = __k21584;
    char* t1589 = __k11583;
    long diff1590 = t1588 - t1589;
    unsigned long cast1591 = (unsigned long)diff1590;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1585, r1587, cast1591);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1592) {
bb1593:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1594;
  char* __retval1595;
  this1594 = v1592;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1596 = this1594;
  char* t1597 = t1596->_M_dataplus._M_p;
  __retval1595 = t1597;
  char* t1598 = __retval1595;
  return t1598;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1599, unsigned long v1600) {
bb1601:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1602;
  unsigned long __length1603;
  this1602 = v1599;
  __length1603 = v1600;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1604 = this1602;
  unsigned long t1605 = __length1603;
  t1604->_M_string_length = t1605;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1606, unsigned long v1607) {
bb1608:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1609;
  unsigned long __n1610;
  char ref_tmp01611;
  this1609 = v1606;
  __n1610 = v1607;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1612 = this1609;
  unsigned long t1613 = __n1610;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1612, t1613);
  unsigned long t1614 = __n1610;
  char* r1615 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1612);
  char* ptr1616 = &(r1615)[t1614];
  char c1617 = 0;
  ref_tmp01611 = c1617;
  std__char_traits_char___assign(ptr1616, &ref_tmp01611);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1618) {
bb1619:
  struct _Guard* this1620;
  this1620 = v1618;
  struct _Guard* t1621 = this1620;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1622 = t1621->_M_guarded;
    _Bool cast1623 = (_Bool)t1622;
    if (cast1623) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1624 = t1621->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1624);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1625, char* v1626, char* v1627, struct std__forward_iterator_tag v1628) {
bb1629:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1630;
  char* __beg1631;
  char* __end1632;
  struct std__forward_iterator_tag unnamed1633;
  unsigned long __dnew1634;
  struct _Guard __guard1635;
  this1630 = v1625;
  __beg1631 = v1626;
  __end1632 = v1627;
  unnamed1633 = v1628;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1636 = this1630;
  char* t1637 = __beg1631;
  char* t1638 = __end1632;
  long r1639 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1637, t1638);
  unsigned long cast1640 = (unsigned long)r1639;
  __dnew1634 = cast1640;
    unsigned long t1641 = __dnew1634;
    unsigned long c1642 = 15;
    _Bool c1643 = ((t1641 > c1642)) ? 1 : 0;
    if (c1643) {
      unsigned long c1644 = 0;
      char* r1645 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1636, &__dnew1634, c1644);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1636, r1645);
      unsigned long t1646 = __dnew1634;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1636, t1646);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1636);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1635, t1636);
    char* r1647 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1636);
    char* t1648 = __beg1631;
    char* t1649 = __end1632;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1647, t1648, t1649);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1650 = ((void*)0);
    __guard1635._M_guarded = c1650;
    unsigned long t1651 = __dnew1634;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1636, t1651);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1635);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1652) {
bb1653:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1654;
  this1654 = v1652;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1655 = this1654;
  {
    struct std__allocator_char_* base1656 = (struct std__allocator_char_*)((char *)t1655 + 0);
    std__allocator_char____allocator(base1656);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1657, struct std____new_allocator_char_* v1658) {
bb1659:
  struct std____new_allocator_char_* this1660;
  struct std____new_allocator_char_* unnamed1661;
  this1660 = v1657;
  unnamed1661 = v1658;
  struct std____new_allocator_char_* t1662 = this1660;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1663, struct std__allocator_char_* v1664) {
bb1665:
  struct std__allocator_char_* this1666;
  struct std__allocator_char_* __a1667;
  this1666 = v1663;
  __a1667 = v1664;
  struct std__allocator_char_* t1668 = this1666;
  struct std____new_allocator_char_* base1669 = (struct std____new_allocator_char_*)((char *)t1668 + 0);
  struct std__allocator_char_* t1670 = __a1667;
  struct std____new_allocator_char_* base1671 = (struct std____new_allocator_char_*)((char *)t1670 + 0);
  std____new_allocator_char_____new_allocator(base1669, base1671);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1672) {
bb1673:
  char* __r1674;
  char* __retval1675;
  __r1674 = v1672;
  char* t1676 = __r1674;
  __retval1675 = t1676;
  char* t1677 = __retval1675;
  return t1677;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1678) {
bb1679:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1680;
  char* __retval1681;
  this1680 = v1678;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1682 = this1680;
  char* cast1683 = (char*)&(t1682->field2._M_local_buf);
  char* r1684 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1683);
  __retval1681 = r1684;
  char* t1685 = __retval1681;
  return t1685;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1686) {
bb1687:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1688;
  _Bool __retval1689;
  this1688 = v1686;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1690 = this1688;
    char* r1691 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1690);
    char* r1692 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1690);
    _Bool c1693 = ((r1691 == r1692)) ? 1 : 0;
    if (c1693) {
        unsigned long t1694 = t1690->_M_string_length;
        unsigned long c1695 = 15;
        _Bool c1696 = ((t1694 > c1695)) ? 1 : 0;
        if (c1696) {
          __builtin_unreachable();
        }
      _Bool c1697 = 1;
      __retval1689 = c1697;
      _Bool t1698 = __retval1689;
      return t1698;
    }
  _Bool c1699 = 0;
  __retval1689 = c1699;
  _Bool t1700 = __retval1689;
  return t1700;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1701, char* v1702, unsigned long v1703) {
bb1704:
  struct std____new_allocator_char_* this1705;
  char* __p1706;
  unsigned long __n1707;
  this1705 = v1701;
  __p1706 = v1702;
  __n1707 = v1703;
  struct std____new_allocator_char_* t1708 = this1705;
    unsigned long c1709 = 1;
    unsigned long c1710 = 16;
    _Bool c1711 = ((c1709 > c1710)) ? 1 : 0;
    if (c1711) {
      char* t1712 = __p1706;
      void* cast1713 = (void*)t1712;
      unsigned long t1714 = __n1707;
      unsigned long c1715 = 1;
      unsigned long b1716 = t1714 * c1715;
      unsigned long c1717 = 1;
      operator_delete_3(cast1713, b1716, c1717);
      return;
    }
  char* t1718 = __p1706;
  void* cast1719 = (void*)t1718;
  unsigned long t1720 = __n1707;
  unsigned long c1721 = 1;
  unsigned long b1722 = t1720 * c1721;
  operator_delete_2(cast1719, b1722);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1723, char* v1724, unsigned long v1725) {
bb1726:
  struct std__allocator_char_* this1727;
  char* __p1728;
  unsigned long __n1729;
  this1727 = v1723;
  __p1728 = v1724;
  __n1729 = v1725;
  struct std__allocator_char_* t1730 = this1727;
    _Bool r1731 = std____is_constant_evaluated();
    if (r1731) {
      char* t1732 = __p1728;
      void* cast1733 = (void*)t1732;
      operator_delete(cast1733);
      return;
    }
  struct std____new_allocator_char_* base1734 = (struct std____new_allocator_char_*)((char *)t1730 + 0);
  char* t1735 = __p1728;
  unsigned long t1736 = __n1729;
  std____new_allocator_char___deallocate(base1734, t1735, t1736);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1737, char* v1738, unsigned long v1739) {
bb1740:
  struct std__allocator_char_* __a1741;
  char* __p1742;
  unsigned long __n1743;
  __a1741 = v1737;
  __p1742 = v1738;
  __n1743 = v1739;
  struct std__allocator_char_* t1744 = __a1741;
  char* t1745 = __p1742;
  unsigned long t1746 = __n1743;
  std__allocator_char___deallocate(t1744, t1745, t1746);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1747, unsigned long v1748) {
bb1749:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1750;
  unsigned long __size1751;
  this1750 = v1747;
  __size1751 = v1748;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1752 = this1750;
  struct std__allocator_char_* r1753 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1752);
  char* r1754 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1752);
  unsigned long t1755 = __size1751;
  unsigned long c1756 = 1;
  unsigned long b1757 = t1755 + c1756;
  std__allocator_traits_std__allocator_char_____deallocate(r1753, r1754, b1757);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1758) {
bb1759:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1760;
  this1760 = v1758;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1761 = this1760;
    _Bool r1762 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1761);
    _Bool u1763 = !r1762;
    if (u1763) {
      unsigned long t1764 = t1761->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1761, t1764);
    }
  return;
}

// function: _ZSt8_DestroyIPP8EmployeeS1_EvT_S3_RSaIT0_E
void void_std___Destroy_Employee____Employee__(struct Employee** v1765, struct Employee** v1766, struct std__allocator_Employee___* v1767) {
bb1768:
  struct Employee** __first1769;
  struct Employee** __last1770;
  struct std__allocator_Employee___* unnamed1771;
  __first1769 = v1765;
  __last1770 = v1766;
  unnamed1771 = v1767;
  struct Employee** t1772 = __first1769;
  struct Employee** t1773 = __last1770;
  void_std___Destroy_Employee___(t1772, t1773);
  return;
}

