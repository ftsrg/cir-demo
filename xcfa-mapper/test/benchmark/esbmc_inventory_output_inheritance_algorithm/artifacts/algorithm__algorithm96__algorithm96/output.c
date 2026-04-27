// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> { int* _M_current; };
struct __locale_struct { unsigned char __placeholder; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl { struct std3A3A_Vector_base3Cint2C_std3A3Aallocator3Cint3E3E3A3A_Vector_impl_data __field0; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data { int* _M_finish; int* _M_start; int* _M_end_of_storage; };
struct std::__new_allocator<int> { unsigned char __field0; };
struct std::allocator<int> { unsigned char __field0; };
struct std::basic_ios<char> { struct std3A3Aios_base __field0; char __field2; _Bool __field3; };
struct std::basic_ostream<char> { struct std3A3Abasic_ios3Cchar3E __field1; };
struct std::basic_streambuf<char> { struct std3A3Alocale __field7; };
struct std::ctype<char> { struct std3A3Alocale3A3Afacet2Ebase __field0; _Bool __field3; char __field8; char __field11; };
struct std::ios_base { long long __field1; long long __field2; int __field3; int __field4; int __field5; struct std3A3Aios_base3A3A_Words __field7; int __field9; struct std3A3Alocale __field11; };
struct std::ios_base::_Callback_list { int __field2; int __field3; };
struct std::ios_base::_Words { long long __field1; };
struct std::locale { unsigned char __placeholder; };
struct std::locale::_Impl { int __field0; unsigned long long __field2; };
struct std::locale::facet { int __field1; };
struct std::locale::facet_base { int __field1; };
struct std::num_get<char> { struct std3A3Alocale3A3Afacet2Ebase __field0; };
struct std::num_put<char> { struct std3A3Alocale3A3Afacet2Ebase __field0; };
struct std::vector<int> { struct std3A3A_Vector_base3Cint2C_std3A3Aallocator3Cint3E3E __field0; };
struct std::vector<int>::_Guard_alloc { int* _M_storage; unsigned long long _M_len; struct std::_Vector_base<int, std::allocator<int>>* _M_vect; };
struct std::_Vector_base<int, std::allocator<int>> { struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl _M_impl; };

void* p_myrandom = &_Z8myrandoml;
char _str_5[26];
char _str_6[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char _str_7[92];
char _str_8[19] = "__n < this->size()";
char _str[20] = "myvector[2] == NULL";
char _str_1[96] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm96/main.cpp";
char _str_2[11] = "int main()";
struct std::basic_ostream<char> _ZSt4cout;
char _str_3[19];
char _str_4[2] = " ";
// function: rand
int rand();

// function: _Z8myrandoml
long long myrandom(long long v0) {
bb1:
  long long i2;
  long long __retval3;
  i2 = v0;
  int r4 = rand();
  long long cast5 = (long long)r4;
  long long t6 = i2;
  long long b7 = cast5 % t6;
  __retval3 = b7;
  long long t8 = __retval3;
  return t8;
}

// function: srand
void srand(unsigned int);

// function: time
long long time(long long*);

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std::vector<int>* v9) {
bb10:
  struct std::vector<int>* this11;
  this11 = v9;
  struct std::vector<int>* t12 = this11;
  struct std::_Vector_base<int, std::allocator<int>>* base13 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t12 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base13);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev(struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* v14) {
bb15:
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* this16;
  this16 = v14;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* t17 = this16;
  int* c18 = NULL;
  t17->_M_current = c18;
  return;
}

// function: _ZNSt15__new_allocatorIiE9constructIiJRKiEEEvPT_DpOT0_
void void_std____new_allocator_int___construct_int__int_const__(struct std::__new_allocator<int>* v19, int* v20, int* v21) {
bb22:
  struct std::__new_allocator<int>* this23;
  int* __p24;
  int* __args25;
  this23 = v19;
  __p24 = v20;
  __args25 = v21;
  struct std::__new_allocator<int>* t26 = this23;
  unsigned long long c27 = 4;
  int* t28 = __p24;
  void* cast29 = (void*)t28;
  int* cast30 = (int*)cast29;
  int* t31 = __args25;
  int t32 = *t31;
  *cast30 = t32;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std::allocator<int>* v33, int* v34, int* v35) {
bb36:
  struct std::allocator<int>* __a37;
  int* __p38;
  int* __args39;
  __a37 = v33;
  __p38 = v34;
  __args39 = v35;
  struct std::allocator<int>* t40 = __a37;
  struct std::__new_allocator<int>* base41 = (struct std::__new_allocator<int>*)((char *)t40 + 0);
  int* t42 = __p38;
  int* t43 = __args39;
  void_std____new_allocator_int___construct_int__int_const__(base41, t42, t43);
  return;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long long std____new_allocator_int____M_max_size___const(struct std::__new_allocator<int>* v44) {
bb45:
  struct std::__new_allocator<int>* this46;
  unsigned long long __retval47;
  this46 = v44;
  struct std::__new_allocator<int>* t48 = this46;
  long long c49 = 9223372036854775807;
  unsigned long long cast50 = (unsigned long long)c49;
  unsigned long long c51 = 4;
  unsigned long long b52 = cast50 / c51;
  __retval47 = b52;
  unsigned long long t53 = __retval47;
  return t53;
}

// function: _ZNKSt15__new_allocatorIiE8max_sizeEv
unsigned long long std____new_allocator_int___max_size___const(struct std::__new_allocator<int>* v54) {
bb55:
  struct std::__new_allocator<int>* this56;
  unsigned long long __retval57;
  this56 = v54;
  struct std::__new_allocator<int>* t58 = this56;
  unsigned long long r59 = std____new_allocator_int____M_max_size___const(t58);
  __retval57 = r59;
  unsigned long long t60 = __retval57;
  return t60;
}

// function: _ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_
unsigned long long std__allocator_traits_std__allocator_int_____max_size(struct std::allocator<int>* v61) {
bb62:
  struct std::allocator<int>* __a63;
  unsigned long long __retval64;
  __a63 = v61;
  struct std::allocator<int>* t65 = __a63;
  struct std::__new_allocator<int>* base66 = (struct std::__new_allocator<int>*)((char *)t65 + 0);
  unsigned long long r67 = std____new_allocator_int___max_size___const(base66);
  __retval64 = r67;
  unsigned long long t68 = __retval64;
  return t68;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long long* unsigned_long_const__std__min_unsigned_long_(unsigned long long* v69, unsigned long long* v70) {
bb71:
  unsigned long long* __a76;
  unsigned long long* __b77;
  unsigned long long* __retval78;
  __a76 = v69;
  __b77 = v70;
  goto bb72;
bb72:
  unsigned long long* t79 = __b77;
  unsigned long long t80 = *t79;
  unsigned long long* t81 = __a76;
  unsigned long long t82 = *t81;
  _Bool c83 = (t80 < t82) ? 1 : 0;
  if (c83) goto bb73; else goto bb74;
bb73:
  unsigned long long* t84 = __b77;
  __retval78 = t84;
  unsigned long long* t85 = __retval78;
  return t85;
bb74:
  goto bb75;
bb75:
  unsigned long long* t86 = __a76;
  __retval78 = t86;
  unsigned long long* t87 = __retval78;
  return t87;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long long std__vector_int__std__allocator_int______S_max_size(struct std::allocator<int>* v88) {
bb89:
  struct std::allocator<int>* __a90;
  unsigned long long __retval91;
  unsigned long long __diffmax92;
  unsigned long long __allocmax93;
  __a90 = v88;
  unsigned long long c94 = 2305843009213693951;
  __diffmax92 = c94;
  struct std::allocator<int>* t95 = __a90;
  unsigned long long r96 = std__allocator_traits_std__allocator_int_____max_size(t95);
  __allocmax93 = r96;
  unsigned long long* r97 = unsigned_long_const__std__min_unsigned_long_(&__diffmax92, &__allocmax93);
  unsigned long long t98 = *r97;
  __retval91 = t98;
  unsigned long long t99 = __retval91;
  return t99;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std::allocator<int>* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std::_Vector_base<int, std::allocator<int>>* v100) {
bb101:
  struct std::_Vector_base<int, std::allocator<int>>* this102;
  struct std::allocator<int>* __retval103;
  this102 = v100;
  struct std::_Vector_base<int, std::allocator<int>>* t104 = this102;
  struct std::allocator<int>* base105 = (struct std::allocator<int>*)((char *)t104->_M_impl + 0);
  __retval103 = base105;
  struct std::allocator<int>* t106 = __retval103;
  return t106;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long long std__vector_int__std__allocator_int_____max_size___const(struct std::vector<int>* v107) {
bb108:
  struct std::vector<int>* this109;
  unsigned long long __retval110;
  this109 = v107;
  struct std::vector<int>* t111 = this109;
  struct std::_Vector_base<int, std::allocator<int>>* base112 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t111 + 0);
  struct std::allocator<int>* r113 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base112);
  unsigned long long r114 = std__vector_int__std__allocator_int______S_max_size(r113);
  __retval110 = r114;
  unsigned long long t115 = __retval110;
  return t115;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long long std__vector_int__std__allocator_int_____size___const(struct std::vector<int>* v116) {
bb117:
  struct std::vector<int>* this122;
  unsigned long long __retval123;
  long long __dif124;
  this122 = v116;
  struct std::vector<int>* t125 = this122;
  struct std::_Vector_base<int, std::allocator<int>>* base126 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t125 + 0);
  struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data* base127 = (struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data*)((char *)base126->_M_impl + 0);
  int* t128 = base127->_M_finish;
  struct std::_Vector_base<int, std::allocator<int>>* base129 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t125 + 0);
  struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data* base130 = (struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data*)((char *)base129->_M_impl + 0);
  int* t131 = base130->_M_start;
  long long diff132 = t128 - t131;
  __dif124 = diff132;
  goto bb118;
bb118:
  long long t133 = __dif124;
  int c134 = 0;
  long long cast135 = (long long)c134;
  _Bool c136 = (t133 < cast135) ? 1 : 0;
  if (c136) goto bb119; else goto bb120;
bb119:
