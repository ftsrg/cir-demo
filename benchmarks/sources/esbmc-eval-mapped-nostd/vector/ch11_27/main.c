extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[16] = "first contains:";
char _str_1[2] = " ";
char _str_2[18] = "\nsecond contains:";
char _str_3[49] = "cannot create std::vector larger than max_size()";
char _str_4[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_5[9] = "__n >= 0";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
char _str_6[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4swapERS1_[93] = "void std::vector<int>::swap(vector<_Tp, _Alloc> &) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[104] = "_Alloc_traits::propagate_on_container_swap::value || _M_get_Tp_allocator() == __x._M_get_Tp_allocator()";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_8[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
_Bool std__operator__(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_swap_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p1);
void void_std____alloc_on_swap_std__allocator_int___(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void __gnu_cxx____alloc_traits_std__allocator_int___int____S_on_swap(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void std__vector_int__std__allocator_int_____swap(struct std__vector_int__std__allocator_int__* p0, struct std__vector_int__std__allocator_int__* p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
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
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
int main();
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
extern void std____throw_length_error(char* p0);
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long p0, struct std__allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0, struct std__allocator_int_* p1);
_Bool std____is_constant_evaluated();
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* p0, unsigned long p1, void* p2);
int* std__allocator_int___allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std___Construct_int__int_const__(int* p0, int* p1);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0, struct std____new_allocator_int_* p1);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v0) {
bb1:
  struct std__allocator_int_* this2;
  this2 = v0;
  struct std__allocator_int_* t3 = this2;
  struct std____new_allocator_int_* base4 = (struct std____new_allocator_int_*)((char *)t3 + 0);
  std____new_allocator_int_____new_allocator_2(base4);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKiRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v5, unsigned long v6, int* v7, struct std__allocator_int_* v8) {
bb9:
  struct std__vector_int__std__allocator_int__* this10;
  unsigned long __n11;
  int* __value12;
  struct std__allocator_int_* __a13;
  this10 = v5;
  __n11 = v6;
  __value12 = v7;
  __a13 = v8;
  struct std__vector_int__std__allocator_int__* t14 = this10;
  struct std___Vector_base_int__std__allocator_int__* base15 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t14 + 0);
  unsigned long t16 = __n11;
  struct std__allocator_int_* t17 = __a13;
  unsigned long r18 = std__vector_int__std__allocator_int______S_check_init_len(t16, t17);
  struct std__allocator_int_* t19 = __a13;
  std___Vector_base_int__std__allocator_int______Vector_base(base15, r18, t19);
    unsigned long t20 = __n11;
    int* t21 = __value12;
    std__vector_int__std__allocator_int______M_fill_initialize(t14, t20, t21);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v22) {
bb23:
  struct std__allocator_int_* this24;
  this24 = v22;
  struct std__allocator_int_* t25 = this24;
  return;
}

// function: _ZSteqRKSaIiES1_
_Bool std__operator__(struct std__allocator_int_* v26, struct std__allocator_int_* v27) {
bb28:
  struct std__allocator_int_* unnamed29;
  struct std__allocator_int_* unnamed30;
  _Bool __retval31;
  unnamed29 = v26;
  unnamed30 = v27;
  _Bool c32 = 1;
  __retval31 = c32;
  _Bool t33 = __retval31;
  return t33;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v34) {
bb35:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this36;
  this36 = v34;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t37 = this36;
  int* c38 = ((void*)0);
  t37->_M_start = c38;
  int* c39 = ((void*)0);
  t37->_M_finish = c39;
  int* c40 = ((void*)0);
  t37->_M_end_of_storage = c40;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_data12_M_copy_dataERKS2_
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v41, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v42) {
bb43:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this44;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* __x45;
  this44 = v41;
  __x45 = v42;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t46 = this44;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t47 = __x45;
  int* t48 = t47->_M_start;
  t46->_M_start = t48;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t49 = __x45;
  int* t50 = t49->_M_finish;
  t46->_M_finish = t50;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t51 = __x45;
  int* t52 = t51->_M_end_of_storage;
  t46->_M_end_of_storage = t52;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_data12_M_swap_dataERS2_
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_swap_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v53, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v54) {
bb55:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this56;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* __x57;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __tmp58;
  this56 = v53;
  __x57 = v54;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t59 = this56;
  std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(&__tmp58);
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(&__tmp58, t59);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t60 = __x57;
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(t59, t60);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t61 = __x57;
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(t61, &__tmp58);
  return;
}

// function: _ZSt15__alloc_on_swapISaIiEEvRT_S2_
void void_std____alloc_on_swap_std__allocator_int___(struct std__allocator_int_* v62, struct std__allocator_int_* v63) {
bb64:
  struct std__allocator_int_* __one65;
  struct std__allocator_int_* __two66;
  __one65 = v62;
  __two66 = v63;
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIiEiE10_S_on_swapERS1_S3_
void __gnu_cxx____alloc_traits_std__allocator_int___int____S_on_swap(struct std__allocator_int_* v67, struct std__allocator_int_* v68) {
bb69:
  struct std__allocator_int_* __a70;
  struct std__allocator_int_* __b71;
  __a70 = v67;
  __b71 = v68;
  struct std__allocator_int_* t72 = __a70;
  struct std__allocator_int_* t73 = __b71;
  void_std____alloc_on_swap_std__allocator_int___(t72, t73);
  return;
}

// function: _ZNSt6vectorIiSaIiEE4swapERS1_
void std__vector_int__std__allocator_int_____swap(struct std__vector_int__std__allocator_int__* v74, struct std__vector_int__std__allocator_int__* v75) {
bb76:
  struct std__vector_int__std__allocator_int__* this77;
  struct std__vector_int__std__allocator_int__* __x78;
  this77 = v74;
  __x78 = v75;
  struct std__vector_int__std__allocator_int__* t79 = this77;
    do {
          _Bool t80 = _ZNSt17integral_constantIbLb0EE5valueE;
          _Bool ternary81;
          if (t80) {
            _Bool c82 = 1;
            ternary81 = (_Bool)c82;
          } else {
            struct std___Vector_base_int__std__allocator_int__* base83 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t79 + 0);
            struct std__allocator_int_* r84 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base83);
            struct std__vector_int__std__allocator_int__* t85 = __x78;
            struct std___Vector_base_int__std__allocator_int__* base86 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t85 + 0);
            struct std__allocator_int_* r87 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base86);
            _Bool r88 = std__operator__(r84, r87);
            ternary81 = (_Bool)r88;
          }
          _Bool u89 = !ternary81;
          if (u89) {
            char* cast90 = (char*)&(_str_6);
            int c91 = 1848;
            char* cast92 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4swapERS1_);
            char* cast93 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast90, c91, cast92, cast93);
          }
      _Bool c94 = 0;
      if (!c94) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base95 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t79 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base96 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base95->_M_impl) + 0);
  struct std__vector_int__std__allocator_int__* t97 = __x78;
  struct std___Vector_base_int__std__allocator_int__* base98 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t97 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base99 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base98->_M_impl) + 0);
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_swap_data(base96, base99);
  struct std___Vector_base_int__std__allocator_int__* base100 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t79 + 0);
  struct std__allocator_int_* r101 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base100);
  struct std__vector_int__std__allocator_int__* t102 = __x78;
  struct std___Vector_base_int__std__allocator_int__* base103 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t102 + 0);
  struct std__allocator_int_* r104 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base103);
  __gnu_cxx____alloc_traits_std__allocator_int___int____S_on_swap(r101, r104);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v105, int v106) {
bb107:
  int __a108;
  int __b109;
  int __retval110;
  __a108 = v105;
  __b109 = v106;
  int t111 = __a108;
  int t112 = __b109;
  int b113 = t111 | t112;
  __retval110 = b113;
  int t114 = __retval110;
  return t114;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v115) {
bb116:
  struct std__basic_ios_char__std__char_traits_char__* this117;
  int __retval118;
  this117 = v115;
  struct std__basic_ios_char__std__char_traits_char__* t119 = this117;
  struct std__ios_base* base120 = (struct std__ios_base*)((char *)t119 + 0);
  int t121 = base120->_M_streambuf_state;
  __retval118 = t121;
  int t122 = __retval118;
  return t122;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v123, int v124) {
bb125:
  struct std__basic_ios_char__std__char_traits_char__* this126;
  int __state127;
  this126 = v123;
  __state127 = v124;
  struct std__basic_ios_char__std__char_traits_char__* t128 = this126;
  int r129 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t128);
  int t130 = __state127;
  int r131 = std__operator_(r129, t130);
  std__basic_ios_char__std__char_traits_char_____clear(t128, r131);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v132, char* v133) {
bb134:
  char* __c1135;
  char* __c2136;
  _Bool __retval137;
  __c1135 = v132;
  __c2136 = v133;
  char* t138 = __c1135;
  char t139 = *t138;
  int cast140 = (int)t139;
  char* t141 = __c2136;
  char t142 = *t141;
  int cast143 = (int)t142;
  _Bool c144 = ((cast140 == cast143)) ? 1 : 0;
  __retval137 = c144;
  _Bool t145 = __retval137;
  return t145;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v146) {
bb147:
  char* __p148;
  unsigned long __retval149;
  unsigned long __i150;
  __p148 = v146;
  unsigned long c151 = 0;
  __i150 = c151;
    char ref_tmp0152;
    while (1) {
      unsigned long t153 = __i150;
      char* t154 = __p148;
      char* ptr155 = &(t154)[t153];
      char c156 = 0;
      ref_tmp0152 = c156;
      _Bool r157 = __gnu_cxx__char_traits_char___eq(ptr155, &ref_tmp0152);
      _Bool u158 = !r157;
      if (!u158) break;
      unsigned long t159 = __i150;
      unsigned long u160 = t159 + 1;
      __i150 = u160;
    }
  unsigned long t161 = __i150;
  __retval149 = t161;
  unsigned long t162 = __retval149;
  return t162;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v163) {
bb164:
  char* __s165;
  unsigned long __retval166;
  __s165 = v163;
    _Bool r167 = std____is_constant_evaluated();
    if (r167) {
      char* t168 = __s165;
      unsigned long r169 = __gnu_cxx__char_traits_char___length(t168);
      __retval166 = r169;
      unsigned long t170 = __retval166;
      return t170;
    }
  char* t171 = __s165;
  unsigned long r172 = strlen(t171);
  __retval166 = r172;
  unsigned long t173 = __retval166;
  return t173;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v174, char* v175) {
bb176:
  struct std__basic_ostream_char__std__char_traits_char__* __out177;
  char* __s178;
  struct std__basic_ostream_char__std__char_traits_char__* __retval179;
  __out177 = v174;
  __s178 = v175;
    char* t180 = __s178;
    _Bool cast181 = (_Bool)t180;
    _Bool u182 = !cast181;
    if (u182) {
      struct std__basic_ostream_char__std__char_traits_char__* t183 = __out177;
      void** v184 = (void**)t183;
      void* v185 = *((void**)v184);
      unsigned char* cast186 = (unsigned char*)v185;
      long c187 = -24;
      unsigned char* ptr188 = &(cast186)[c187];
      long* cast189 = (long*)ptr188;
      long t190 = *cast189;
      unsigned char* cast191 = (unsigned char*)t183;
      unsigned char* ptr192 = &(cast191)[t190];
      struct std__basic_ostream_char__std__char_traits_char__* cast193 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr192;
      struct std__basic_ios_char__std__char_traits_char__* cast194 = (struct std__basic_ios_char__std__char_traits_char__*)cast193;
      int t195 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast194, t195);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t196 = __out177;
      char* t197 = __s178;
      char* t198 = __s178;
      unsigned long r199 = std__char_traits_char___length(t198);
      long cast200 = (long)r199;
      struct std__basic_ostream_char__std__char_traits_char__* r201 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t196, t197, cast200);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t202 = __out177;
  __retval179 = t202;
  struct std__basic_ostream_char__std__char_traits_char__* t203 = __retval179;
  return t203;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v204) {
bb205:
  struct std__vector_int__std__allocator_int__* this206;
  unsigned long __retval207;
  long __dif208;
  this206 = v204;
  struct std__vector_int__std__allocator_int__* t209 = this206;
  struct std___Vector_base_int__std__allocator_int__* base210 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t209 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base211 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base210->_M_impl) + 0);
  int* t212 = base211->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base213 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t209 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base214 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base213->_M_impl) + 0);
  int* t215 = base214->_M_start;
  long diff216 = t212 - t215;
  __dif208 = diff216;
    long t217 = __dif208;
    long c218 = 0;
    _Bool c219 = ((t217 < c218)) ? 1 : 0;
    if (c219) {
      __builtin_unreachable();
    }
  long t220 = __dif208;
  unsigned long cast221 = (unsigned long)t220;
  __retval207 = cast221;
  unsigned long t222 = __retval207;
  return t222;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v223, unsigned long v224) {
bb225:
  struct std__vector_int__std__allocator_int__* this226;
  unsigned long __n227;
  int* __retval228;
  this226 = v223;
  __n227 = v224;
  struct std__vector_int__std__allocator_int__* t229 = this226;
    do {
          unsigned long t230 = __n227;
          unsigned long r231 = std__vector_int__std__allocator_int_____size___const(t229);
          _Bool c232 = ((t230 < r231)) ? 1 : 0;
          _Bool u233 = !c232;
          if (u233) {
            char* cast234 = (char*)&(_str_6);
            int c235 = 1263;
            char* cast236 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast237 = (char*)&(_str_8);
            std____glibcxx_assert_fail(cast234, c235, cast236, cast237);
          }
      _Bool c238 = 0;
      if (!c238) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base239 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t229 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base240 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base239->_M_impl) + 0);
  int* t241 = base240->_M_start;
  unsigned long t242 = __n227;
  int* ptr243 = &(t241)[t242];
  __retval228 = ptr243;
  int* t244 = __retval228;
  return t244;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v245, void* v246) {
bb247:
  struct std__basic_ostream_char__std__char_traits_char__* this248;
  void* __pf249;
  struct std__basic_ostream_char__std__char_traits_char__* __retval250;
  this248 = v245;
  __pf249 = v246;
  struct std__basic_ostream_char__std__char_traits_char__* t251 = this248;
  void* t252 = __pf249;
  struct std__basic_ostream_char__std__char_traits_char__* r253 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t252)(t251);
  __retval250 = r253;
  struct std__basic_ostream_char__std__char_traits_char__* t254 = __retval250;
  return t254;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v255) {
bb256:
  struct std__basic_ostream_char__std__char_traits_char__* __os257;
  struct std__basic_ostream_char__std__char_traits_char__* __retval258;
  __os257 = v255;
  struct std__basic_ostream_char__std__char_traits_char__* t259 = __os257;
  struct std__basic_ostream_char__std__char_traits_char__* r260 = std__ostream__flush(t259);
  __retval258 = r260;
  struct std__basic_ostream_char__std__char_traits_char__* t261 = __retval258;
  return t261;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v262) {
bb263:
  struct std__ctype_char_* __f264;
  struct std__ctype_char_* __retval265;
  __f264 = v262;
    struct std__ctype_char_* t266 = __f264;
    _Bool cast267 = (_Bool)t266;
    _Bool u268 = !cast267;
    if (u268) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t269 = __f264;
  __retval265 = t269;
  struct std__ctype_char_* t270 = __retval265;
  return t270;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v271, char v272) {
bb273:
  struct std__ctype_char_* this274;
  char __c275;
  char __retval276;
  this274 = v271;
  __c275 = v272;
  struct std__ctype_char_* t277 = this274;
    char t278 = t277->_M_widen_ok;
    _Bool cast279 = (_Bool)t278;
    if (cast279) {
      char t280 = __c275;
      unsigned char cast281 = (unsigned char)t280;
      unsigned long cast282 = (unsigned long)cast281;
      char t283 = t277->_M_widen[cast282];
      __retval276 = t283;
      char t284 = __retval276;
      return t284;
    }
  std__ctype_char____M_widen_init___const(t277);
  char t285 = __c275;
  void** v286 = (void**)t277;
  void* v287 = *((void**)v286);
  char vcall290 = (char)__VERIFIER_virtual_call_char_char(t277, 6, t285);
  __retval276 = vcall290;
  char t291 = __retval276;
  return t291;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v292, char v293) {
bb294:
  struct std__basic_ios_char__std__char_traits_char__* this295;
  char __c296;
  char __retval297;
  this295 = v292;
  __c296 = v293;
  struct std__basic_ios_char__std__char_traits_char__* t298 = this295;
  struct std__ctype_char_* t299 = t298->_M_ctype;
  struct std__ctype_char_* r300 = std__ctype_char__const__std____check_facet_std__ctype_char___(t299);
  char t301 = __c296;
  char r302 = std__ctype_char___widen_char__const(r300, t301);
  __retval297 = r302;
  char t303 = __retval297;
  return t303;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v304) {
bb305:
  struct std__basic_ostream_char__std__char_traits_char__* __os306;
  struct std__basic_ostream_char__std__char_traits_char__* __retval307;
  __os306 = v304;
  struct std__basic_ostream_char__std__char_traits_char__* t308 = __os306;
  struct std__basic_ostream_char__std__char_traits_char__* t309 = __os306;
  void** v310 = (void**)t309;
  void* v311 = *((void**)v310);
  unsigned char* cast312 = (unsigned char*)v311;
  long c313 = -24;
  unsigned char* ptr314 = &(cast312)[c313];
  long* cast315 = (long*)ptr314;
  long t316 = *cast315;
  unsigned char* cast317 = (unsigned char*)t309;
  unsigned char* ptr318 = &(cast317)[t316];
  struct std__basic_ostream_char__std__char_traits_char__* cast319 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr318;
  struct std__basic_ios_char__std__char_traits_char__* cast320 = (struct std__basic_ios_char__std__char_traits_char__*)cast319;
  char c321 = 10;
  char r322 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast320, c321);
  struct std__basic_ostream_char__std__char_traits_char__* r323 = std__ostream__put(t308, r322);
  struct std__basic_ostream_char__std__char_traits_char__* r324 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r323);
  __retval307 = r324;
  struct std__basic_ostream_char__std__char_traits_char__* t325 = __retval307;
  return t325;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v326) {
bb327:
  struct std__vector_int__std__allocator_int__* this328;
  this328 = v326;
  struct std__vector_int__std__allocator_int__* t329 = this328;
    struct std___Vector_base_int__std__allocator_int__* base330 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t329 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base331 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base330->_M_impl) + 0);
    int* t332 = base331->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base333 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t329 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base334 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base333->_M_impl) + 0);
    int* t335 = base334->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base336 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t329 + 0);
    struct std__allocator_int_* r337 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base336);
    void_std___Destroy_int___int_(t332, t335, r337);
  {
    struct std___Vector_base_int__std__allocator_int__* base338 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t329 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base338);
  }
  return;
}

// function: main
int main() {
bb339:
  int __retval340;
  unsigned int i341;
  struct std__vector_int__std__allocator_int__ first342;
  int ref_tmp0343;
  struct std__allocator_int_ ref_tmp1344;
  struct std__vector_int__std__allocator_int__ second345;
  int ref_tmp2346;
  struct std__allocator_int_ ref_tmp3347;
  int c348 = 0;
  __retval340 = c348;
  unsigned long c349 = 3;
  int c350 = 100;
  ref_tmp0343 = c350;
  std__allocator_int___allocator_2(&ref_tmp1344);
    std__vector_int__std__allocator_int_____vector(&first342, c349, &ref_tmp0343, &ref_tmp1344);
  {
    std__allocator_int____allocator(&ref_tmp1344);
  }
    unsigned long c351 = 5;
    int c352 = 200;
    ref_tmp2346 = c352;
    std__allocator_int___allocator_2(&ref_tmp3347);
      std__vector_int__std__allocator_int_____vector(&second345, c351, &ref_tmp2346, &ref_tmp3347);
    {
      std__allocator_int____allocator(&ref_tmp3347);
    }
      std__vector_int__std__allocator_int_____swap(&first342, &second345);
      char* cast353 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* r354 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast353);
        unsigned int c355 = 0;
        i341 = c355;
        while (1) {
          unsigned int t357 = i341;
          unsigned long cast358 = (unsigned long)t357;
          unsigned long r359 = std__vector_int__std__allocator_int_____size___const(&first342);
          _Bool c360 = ((cast358 < r359)) ? 1 : 0;
          if (!c360) break;
          char* cast361 = (char*)&(_str_1);
          struct std__basic_ostream_char__std__char_traits_char__* r362 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast361);
          unsigned int t363 = i341;
          unsigned long cast364 = (unsigned long)t363;
          int* r365 = std__vector_int__std__allocator_int_____operator__(&first342, cast364);
          int t366 = *r365;
          struct std__basic_ostream_char__std__char_traits_char__* r367 = std__ostream__operator__(r362, t366);
        for_step356: ;
          unsigned int t368 = i341;
          unsigned int u369 = t368 + 1;
          i341 = u369;
        }
      char* cast370 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* r371 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast370);
        unsigned int c372 = 0;
        i341 = c372;
        while (1) {
          unsigned int t374 = i341;
          unsigned long cast375 = (unsigned long)t374;
          unsigned long r376 = std__vector_int__std__allocator_int_____size___const(&second345);
          _Bool c377 = ((cast375 < r376)) ? 1 : 0;
          if (!c377) break;
          char* cast378 = (char*)&(_str_1);
          struct std__basic_ostream_char__std__char_traits_char__* r379 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast378);
          unsigned int t380 = i341;
          unsigned long cast381 = (unsigned long)t380;
          int* r382 = std__vector_int__std__allocator_int_____operator__(&second345, cast381);
          int t383 = *r382;
          struct std__basic_ostream_char__std__char_traits_char__* r384 = std__ostream__operator__(r379, t383);
        for_step373: ;
          unsigned int t385 = i341;
          unsigned int u386 = t385 + 1;
          i341 = u386;
        }
      struct std__basic_ostream_char__std__char_traits_char__* r387 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int c388 = 0;
      __retval340 = c388;
      int t389 = __retval340;
      int ret_val390 = t389;
      {
        std__vector_int__std__allocator_int______vector(&second345);
      }
      {
        std__vector_int__std__allocator_int______vector(&first342);
      }
      return ret_val390;
  int t391 = __retval340;
  return t391;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v392) {
bb393:
  struct std____new_allocator_int_* this394;
  this394 = v392;
  struct std____new_allocator_int_* t395 = this394;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v396, unsigned long* v397) {
bb398:
  unsigned long* __a399;
  unsigned long* __b400;
  unsigned long* __retval401;
  __a399 = v396;
  __b400 = v397;
    unsigned long* t402 = __b400;
    unsigned long t403 = *t402;
    unsigned long* t404 = __a399;
    unsigned long t405 = *t404;
    _Bool c406 = ((t403 < t405)) ? 1 : 0;
    if (c406) {
      unsigned long* t407 = __b400;
      __retval401 = t407;
      unsigned long* t408 = __retval401;
      return t408;
    }
  unsigned long* t409 = __a399;
  __retval401 = t409;
  unsigned long* t410 = __retval401;
  return t410;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v411) {
bb412:
  struct std__allocator_int_* __a413;
  unsigned long __retval414;
  unsigned long __diffmax415;
  unsigned long __allocmax416;
  __a413 = v411;
  unsigned long c417 = 2305843009213693951;
  __diffmax415 = c417;
  unsigned long c418 = 4611686018427387903;
  __allocmax416 = c418;
  unsigned long* r419 = unsigned_long_const__std__min_unsigned_long_(&__diffmax415, &__allocmax416);
  unsigned long t420 = *r419;
  __retval414 = t420;
  unsigned long t421 = __retval414;
  return t421;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v422, struct std__allocator_int_* v423) {
bb424:
  struct std__allocator_int_* this425;
  struct std__allocator_int_* __a426;
  this425 = v422;
  __a426 = v423;
  struct std__allocator_int_* t427 = this425;
  struct std____new_allocator_int_* base428 = (struct std____new_allocator_int_*)((char *)t427 + 0);
  struct std__allocator_int_* t429 = __a426;
  struct std____new_allocator_int_* base430 = (struct std____new_allocator_int_*)((char *)t429 + 0);
  std____new_allocator_int_____new_allocator(base428, base430);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v431, struct std__allocator_int_* v432) {
bb433:
  unsigned long __n434;
  struct std__allocator_int_* __a435;
  unsigned long __retval436;
  __n434 = v431;
  __a435 = v432;
    struct std__allocator_int_ ref_tmp0437;
    _Bool tmp_exprcleanup438;
    unsigned long t439 = __n434;
    struct std__allocator_int_* t440 = __a435;
    std__allocator_int___allocator(&ref_tmp0437, t440);
      unsigned long r441 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0437);
      _Bool c442 = ((t439 > r441)) ? 1 : 0;
      tmp_exprcleanup438 = c442;
    {
      std__allocator_int____allocator(&ref_tmp0437);
    }
    _Bool t443 = tmp_exprcleanup438;
    if (t443) {
      char* cast444 = (char*)&(_str_3);
      std____throw_length_error(cast444);
    }
  unsigned long t445 = __n434;
  __retval436 = t445;
  unsigned long t446 = __retval436;
  return t446;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v447, struct std__allocator_int_* v448) {
bb449:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this450;
  struct std__allocator_int_* __a451;
  this450 = v447;
  __a451 = v448;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t452 = this450;
  struct std__allocator_int_* base453 = (struct std__allocator_int_*)((char *)t452 + 0);
  struct std__allocator_int_* t454 = __a451;
  std__allocator_int___allocator(base453, t454);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base455 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t452 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base455);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb456:
  _Bool __retval457;
    _Bool c458 = 0;
    __retval457 = c458;
    _Bool t459 = __retval457;
    return t459;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v460) {
bb461:
  struct std____new_allocator_int_* this462;
  unsigned long __retval463;
  this462 = v460;
  struct std____new_allocator_int_* t464 = this462;
  unsigned long c465 = 9223372036854775807;
  unsigned long c466 = 4;
  unsigned long b467 = c465 / c466;
  __retval463 = b467;
  unsigned long t468 = __retval463;
  return t468;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v469, unsigned long v470, void* v471) {
bb472:
  struct std____new_allocator_int_* this473;
  unsigned long __n474;
  void* unnamed475;
  int* __retval476;
  this473 = v469;
  __n474 = v470;
  unnamed475 = v471;
  struct std____new_allocator_int_* t477 = this473;
    unsigned long t478 = __n474;
    unsigned long r479 = std____new_allocator_int____M_max_size___const(t477);
    _Bool c480 = ((t478 > r479)) ? 1 : 0;
    if (c480) {
        unsigned long t481 = __n474;
        unsigned long c482 = -1;
        unsigned long c483 = 4;
        unsigned long b484 = c482 / c483;
        _Bool c485 = ((t481 > b484)) ? 1 : 0;
        if (c485) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c486 = 4;
    unsigned long c487 = 16;
    _Bool c488 = ((c486 > c487)) ? 1 : 0;
    if (c488) {
      unsigned long __al489;
      unsigned long c490 = 4;
      __al489 = c490;
      unsigned long t491 = __n474;
      unsigned long c492 = 4;
      unsigned long b493 = t491 * c492;
      unsigned long t494 = __al489;
      void* r495 = operator_new_2(b493, t494);
      int* cast496 = (int*)r495;
      __retval476 = cast496;
      int* t497 = __retval476;
      return t497;
    }
  unsigned long t498 = __n474;
  unsigned long c499 = 4;
  unsigned long b500 = t498 * c499;
  void* r501 = operator_new(b500);
  int* cast502 = (int*)r501;
  __retval476 = cast502;
  int* t503 = __retval476;
  return t503;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v504, unsigned long v505) {
bb506:
  struct std__allocator_int_* this507;
  unsigned long __n508;
  int* __retval509;
  this507 = v504;
  __n508 = v505;
  struct std__allocator_int_* t510 = this507;
    _Bool r511 = std____is_constant_evaluated();
    if (r511) {
        unsigned long t512 = __n508;
        unsigned long c513 = 4;
        unsigned long ovr514;
        _Bool ovf515 = __builtin_mul_overflow(t512, c513, &ovr514);
        __n508 = ovr514;
        if (ovf515) {
          std____throw_bad_array_new_length();
        }
      unsigned long t516 = __n508;
      void* r517 = operator_new(t516);
      int* cast518 = (int*)r517;
      __retval509 = cast518;
      int* t519 = __retval509;
      return t519;
    }
  struct std____new_allocator_int_* base520 = (struct std____new_allocator_int_*)((char *)t510 + 0);
  unsigned long t521 = __n508;
  void* c522 = ((void*)0);
  int* r523 = std____new_allocator_int___allocate(base520, t521, c522);
  __retval509 = r523;
  int* t524 = __retval509;
  return t524;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v525, unsigned long v526) {
bb527:
  struct std__allocator_int_* __a528;
  unsigned long __n529;
  int* __retval530;
  __a528 = v525;
  __n529 = v526;
  struct std__allocator_int_* t531 = __a528;
  unsigned long t532 = __n529;
  int* r533 = std__allocator_int___allocate(t531, t532);
  __retval530 = r533;
  int* t534 = __retval530;
  return t534;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v535, unsigned long v536) {
bb537:
  struct std___Vector_base_int__std__allocator_int__* this538;
  unsigned long __n539;
  int* __retval540;
  this538 = v535;
  __n539 = v536;
  struct std___Vector_base_int__std__allocator_int__* t541 = this538;
  unsigned long t542 = __n539;
  unsigned long c543 = 0;
  _Bool c544 = ((t542 != c543)) ? 1 : 0;
  int* ternary545;
  if (c544) {
    struct std__allocator_int_* base546 = (struct std__allocator_int_*)((char *)&(t541->_M_impl) + 0);
    unsigned long t547 = __n539;
    int* r548 = std__allocator_traits_std__allocator_int_____allocate(base546, t547);
    ternary545 = (int*)r548;
  } else {
    int* c549 = ((void*)0);
    ternary545 = (int*)c549;
  }
  __retval540 = ternary545;
  int* t550 = __retval540;
  return t550;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v551, unsigned long v552) {
bb553:
  struct std___Vector_base_int__std__allocator_int__* this554;
  unsigned long __n555;
  this554 = v551;
  __n555 = v552;
  struct std___Vector_base_int__std__allocator_int__* t556 = this554;
  unsigned long t557 = __n555;
  int* r558 = std___Vector_base_int__std__allocator_int______M_allocate(t556, t557);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base559 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t556->_M_impl) + 0);
  base559->_M_start = r558;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base560 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t556->_M_impl) + 0);
  int* t561 = base560->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base562 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t556->_M_impl) + 0);
  base562->_M_finish = t561;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base563 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t556->_M_impl) + 0);
  int* t564 = base563->_M_start;
  unsigned long t565 = __n555;
  int* ptr566 = &(t564)[t565];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base567 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t556->_M_impl) + 0);
  base567->_M_end_of_storage = ptr566;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v568) {
bb569:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this570;
  this570 = v568;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t571 = this570;
  {
    struct std__allocator_int_* base572 = (struct std__allocator_int_*)((char *)t571 + 0);
    std__allocator_int____allocator(base572);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v573, unsigned long v574, struct std__allocator_int_* v575) {
bb576:
  struct std___Vector_base_int__std__allocator_int__* this577;
  unsigned long __n578;
  struct std__allocator_int_* __a579;
  this577 = v573;
  __n578 = v574;
  __a579 = v575;
  struct std___Vector_base_int__std__allocator_int__* t580 = this577;
  struct std__allocator_int_* t581 = __a579;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t580->_M_impl, t581);
    unsigned long t582 = __n578;
    std___Vector_base_int__std__allocator_int______M_create_storage(t580, t582);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb583:
  _Bool __retval584;
    _Bool c585 = 0;
    __retval584 = c585;
    _Bool t586 = __retval584;
    return t586;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v587, int** v588) {
bb589:
  struct std___UninitDestroyGuard_int____void_* this590;
  int** __first591;
  this590 = v587;
  __first591 = v588;
  struct std___UninitDestroyGuard_int____void_* t592 = this590;
  int** t593 = __first591;
  int* t594 = *t593;
  t592->_M_first = t594;
  int** t595 = __first591;
  t592->_M_cur = t595;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v596, int* v597) {
bb598:
  int* __location599;
  int* __args600;
  int* __retval601;
  void* __loc602;
  __location599 = v596;
  __args600 = v597;
  int* t603 = __location599;
  void* cast604 = (void*)t603;
  __loc602 = cast604;
    void* t605 = __loc602;
    int* cast606 = (int*)t605;
    int* t607 = __args600;
    int t608 = *t607;
    *cast606 = t608;
    __retval601 = cast606;
    int* t609 = __retval601;
    return t609;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v610, int* v611) {
bb612:
  int* __p613;
  int* __args614;
  __p613 = v610;
  __args614 = v611;
    _Bool r615 = std____is_constant_evaluated();
    if (r615) {
      int* t616 = __p613;
      int* t617 = __args614;
      int* r618 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t616, t617);
      return;
    }
  int* t619 = __p613;
  void* cast620 = (void*)t619;
  int* cast621 = (int*)cast620;
  int* t622 = __args614;
  int t623 = *t622;
  *cast621 = t623;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v624) {
bb625:
  struct std___UninitDestroyGuard_int____void_* this626;
  this626 = v624;
  struct std___UninitDestroyGuard_int____void_* t627 = this626;
  int** c628 = ((void*)0);
  t627->_M_cur = c628;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v629) {
bb630:
  struct std___UninitDestroyGuard_int____void_* this631;
  this631 = v629;
  struct std___UninitDestroyGuard_int____void_* t632 = this631;
    int** t633 = t632->_M_cur;
    int** c634 = ((void*)0);
    _Bool c635 = ((t633 != c634)) ? 1 : 0;
    if (c635) {
      int* t636 = t632->_M_first;
      int** t637 = t632->_M_cur;
      int* t638 = *t637;
      void_std___Destroy_int__(t636, t638);
    }
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v639, unsigned long v640, int* v641) {
bb642:
  int* __first643;
  unsigned long __n644;
  int* __x645;
  int* __retval646;
  struct std___UninitDestroyGuard_int____void_ __guard647;
  __first643 = v639;
  __n644 = v640;
  __x645 = v641;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard647, &__first643);
        do {
              unsigned long t648 = __n644;
              unsigned long c649 = 0;
              _Bool c650 = ((t648 >= c649)) ? 1 : 0;
              _Bool u651 = !c650;
              if (u651) {
                char* cast652 = (char*)&(_str_4);
                int c653 = 463;
                char* cast654 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast655 = (char*)&(_str_5);
                std____glibcxx_assert_fail(cast652, c653, cast654, cast655);
              }
          _Bool c656 = 0;
          if (!c656) break;
        } while (1);
      while (1) {
        unsigned long t658 = __n644;
        unsigned long u659 = t658 - 1;
        __n644 = u659;
        _Bool cast660 = (_Bool)t658;
        if (!cast660) break;
        int* t661 = __first643;
        int* t662 = __x645;
        void_std___Construct_int__int_const__(t661, t662);
      for_step657: ;
        int* t663 = __first643;
        int c664 = 1;
        int* ptr665 = &(t663)[c664];
        __first643 = ptr665;
      }
    std___UninitDestroyGuard_int___void___release(&__guard647);
    int* t666 = __first643;
    __retval646 = t666;
    int* t667 = __retval646;
    int* ret_val668 = t667;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard647);
    }
    return ret_val668;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v669, unsigned long v670, int* v671) {
bb672:
  int* __first673;
  unsigned long __n674;
  int* __x675;
  int* __retval676;
  __first673 = v669;
  __n674 = v670;
  __x675 = v671;
  int* t677 = __first673;
  unsigned long t678 = __n674;
  int* t679 = __x675;
  int* r680 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t677, t678, t679);
  __retval676 = r680;
  int* t681 = __retval676;
  return t681;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v682, unsigned long v683, int* v684, struct std__allocator_int_* v685) {
bb686:
  int* __first687;
  unsigned long __n688;
  int* __x689;
  struct std__allocator_int_* unnamed690;
  int* __retval691;
  __first687 = v682;
  __n688 = v683;
  __x689 = v684;
  unnamed690 = v685;
    _Bool r692 = std__is_constant_evaluated();
    if (r692) {
      int* t693 = __first687;
      unsigned long t694 = __n688;
      int* t695 = __x689;
      int* r696 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t693, t694, t695);
      __retval691 = r696;
      int* t697 = __retval691;
      return t697;
    }
  int* t698 = __first687;
  unsigned long t699 = __n688;
  int* t700 = __x689;
  int* r701 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t698, t699, t700);
  __retval691 = r701;
  int* t702 = __retval691;
  return t702;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v703) {
bb704:
  struct std___Vector_base_int__std__allocator_int__* this705;
  struct std__allocator_int_* __retval706;
  this705 = v703;
  struct std___Vector_base_int__std__allocator_int__* t707 = this705;
  struct std__allocator_int_* base708 = (struct std__allocator_int_*)((char *)&(t707->_M_impl) + 0);
  __retval706 = base708;
  struct std__allocator_int_* t709 = __retval706;
  return t709;
}

// function: _ZNSt6vectorIiSaIiEE18_M_fill_initializeEmRKi
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* v710, unsigned long v711, int* v712) {
bb713:
  struct std__vector_int__std__allocator_int__* this714;
  unsigned long __n715;
  int* __value716;
  this714 = v710;
  __n715 = v711;
  __value716 = v712;
  struct std__vector_int__std__allocator_int__* t717 = this714;
  struct std___Vector_base_int__std__allocator_int__* base718 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t717 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base719 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base718->_M_impl) + 0);
  int* t720 = base719->_M_start;
  unsigned long t721 = __n715;
  int* t722 = __value716;
  struct std___Vector_base_int__std__allocator_int__* base723 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t717 + 0);
  struct std__allocator_int_* r724 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base723);
  int* r725 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t720, t721, t722, r724);
  struct std___Vector_base_int__std__allocator_int__* base726 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t717 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base727 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base726->_M_impl) + 0);
  base727->_M_finish = r725;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v728, int* v729, unsigned long v730) {
bb731:
  struct std____new_allocator_int_* this732;
  int* __p733;
  unsigned long __n734;
  this732 = v728;
  __p733 = v729;
  __n734 = v730;
  struct std____new_allocator_int_* t735 = this732;
    unsigned long c736 = 4;
    unsigned long c737 = 16;
    _Bool c738 = ((c736 > c737)) ? 1 : 0;
    if (c738) {
      int* t739 = __p733;
      void* cast740 = (void*)t739;
      unsigned long t741 = __n734;
      unsigned long c742 = 4;
      unsigned long b743 = t741 * c742;
      unsigned long c744 = 4;
      operator_delete_3(cast740, b743, c744);
      return;
    }
  int* t745 = __p733;
  void* cast746 = (void*)t745;
  unsigned long t747 = __n734;
  unsigned long c748 = 4;
  unsigned long b749 = t747 * c748;
  operator_delete_2(cast746, b749);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v750, int* v751, unsigned long v752) {
bb753:
  struct std__allocator_int_* this754;
  int* __p755;
  unsigned long __n756;
  this754 = v750;
  __p755 = v751;
  __n756 = v752;
  struct std__allocator_int_* t757 = this754;
    _Bool r758 = std____is_constant_evaluated();
    if (r758) {
      int* t759 = __p755;
      void* cast760 = (void*)t759;
      operator_delete(cast760);
      return;
    }
  struct std____new_allocator_int_* base761 = (struct std____new_allocator_int_*)((char *)t757 + 0);
  int* t762 = __p755;
  unsigned long t763 = __n756;
  std____new_allocator_int___deallocate(base761, t762, t763);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v764, int* v765, unsigned long v766) {
bb767:
  struct std__allocator_int_* __a768;
  int* __p769;
  unsigned long __n770;
  __a768 = v764;
  __p769 = v765;
  __n770 = v766;
  struct std__allocator_int_* t771 = __a768;
  int* t772 = __p769;
  unsigned long t773 = __n770;
  std__allocator_int___deallocate(t771, t772, t773);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v774, int* v775, unsigned long v776) {
bb777:
  struct std___Vector_base_int__std__allocator_int__* this778;
  int* __p779;
  unsigned long __n780;
  this778 = v774;
  __p779 = v775;
  __n780 = v776;
  struct std___Vector_base_int__std__allocator_int__* t781 = this778;
    int* t782 = __p779;
    _Bool cast783 = (_Bool)t782;
    if (cast783) {
      struct std__allocator_int_* base784 = (struct std__allocator_int_*)((char *)&(t781->_M_impl) + 0);
      int* t785 = __p779;
      unsigned long t786 = __n780;
      std__allocator_traits_std__allocator_int_____deallocate(base784, t785, t786);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v787) {
bb788:
  struct std___Vector_base_int__std__allocator_int__* this789;
  this789 = v787;
  struct std___Vector_base_int__std__allocator_int__* t790 = this789;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base791 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t790->_M_impl) + 0);
    int* t792 = base791->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base793 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t790->_M_impl) + 0);
    int* t794 = base793->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base795 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t790->_M_impl) + 0);
    int* t796 = base795->_M_start;
    long diff797 = t794 - t796;
    unsigned long cast798 = (unsigned long)diff797;
    std___Vector_base_int__std__allocator_int______M_deallocate(t790, t792, cast798);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t790->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v799, struct std____new_allocator_int_* v800) {
bb801:
  struct std____new_allocator_int_* this802;
  struct std____new_allocator_int_* unnamed803;
  this802 = v799;
  unnamed803 = v800;
  struct std____new_allocator_int_* t804 = this802;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v805) {
bb806:
  int* __location807;
  __location807 = v805;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v808, int* v809) {
bb810:
  int* __first811;
  int* __last812;
  __first811 = v808;
  __last812 = v809;
      _Bool r813 = std____is_constant_evaluated();
      if (r813) {
          while (1) {
            int* t815 = __first811;
            int* t816 = __last812;
            _Bool c817 = ((t815 != t816)) ? 1 : 0;
            if (!c817) break;
            int* t818 = __first811;
            void_std__destroy_at_int_(t818);
          for_step814: ;
            int* t819 = __first811;
            int c820 = 1;
            int* ptr821 = &(t819)[c820];
            __first811 = ptr821;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v822, int* v823, struct std__allocator_int_* v824) {
bb825:
  int* __first826;
  int* __last827;
  struct std__allocator_int_* unnamed828;
  __first826 = v822;
  __last827 = v823;
  unnamed828 = v824;
  int* t829 = __first826;
  int* t830 = __last827;
  void_std___Destroy_int__(t829, t830);
  return;
}

