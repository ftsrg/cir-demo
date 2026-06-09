extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

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
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____new_allocator_int___ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[18] = "mydeque contains:";
char _str_1[18] = "mydeque[i] == 9-i";
char _str_2[117] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_operator_brackets/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[48] = "cannot create std::deque larger than max_size()";
char _str_4[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm[91] = "reference std::deque<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
long std__operator_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* p0);
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* p0, long p1);
struct std___Deque_iterator_int__int____int___ std__operator__3(struct std___Deque_iterator_int__int____int___* p0, long p1);
int* std___Deque_iterator_int__int___int____operator___long__const(struct std___Deque_iterator_int__int____int___* p0, long p1);
int* std__deque_int__std__allocator_int_____operator__(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__2(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* p0);
int main();
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
extern void std____throw_length_error(char* p0);
unsigned long std__deque_int__std__allocator_int______S_check_init_len(unsigned long p0, struct std__allocator_int_* p1);
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0, struct std__allocator_int_* p1);
unsigned long std____deque_buf_size(unsigned long p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* p0);
void std__allocator_int____allocator_int_(struct std__allocator_int___* p0, struct std__allocator_int_* p1);
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* p0, unsigned long p1, void* p2);
int** std__allocator_int____allocate(struct std__allocator_int___* p0, unsigned long p1);
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* p0, unsigned long p1);
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* p0, unsigned long p1);
extern int __gxx_personality_v0();
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* p0);
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* p0, unsigned long p1, void* p2);
int* std__allocator_int___allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* p0);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* p0, int* p1);
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, int** p2);
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, int** p2);
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* p0, int** p1, unsigned long p2);
void std__allocator_int____deallocate(struct std__allocator_int___* p0, int** p1, unsigned long p2);
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* p0, int** p1, unsigned long p2);
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, unsigned long p2);
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size();
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* p0, int** p1);
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0);
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0, struct std__allocator_int_* p1, unsigned long p2);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0);
void void_std___Construct_int_(int* p0);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
void void_std____uninitialized_default_1_false_____uninit_default_int__(int* p0, int* p1);
void void_std____fill_a1_int___int_(int* p0, int* p1, int* p2);
void void_std____fill_a_int___int_(int* p0, int* p1, int* p2);
void void_std__fill_int___int_(int* p0, int* p1, int* p2);
void void_std____uninitialized_default_1_true_____uninit_default_int__(int* p0, int* p1);
void void_std____uninitialized_default_int__(int* p0, int* p1);
void void_std____uninitialized_default_a_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
unsigned long std__deque_int__std__allocator_int______S_buffer_size();
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* p0);
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* p0);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___2(struct std___Deque_iterator_int__int____int___* p0);
void void_std___Destroy_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1);
void void_std___Destroy_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std__allocator_int_* p2);
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* p0, int* p1, int** p2);
void std__deque_int__std__allocator_int______M_default_initialize(struct std__deque_int__std__allocator_int__* p0);
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0, struct std____new_allocator_int_* p1);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void std___Deque_iterator_int__int___int_____Deque_iterator_3(struct std___Deque_iterator_int__int____int___* p0);
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p0);
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* p0);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__allocator_int_* p3);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* p0);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* p0);

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

// function: _ZNSt5dequeIiSaIiEEC2EmRKS0_
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* v5, unsigned long v6, struct std__allocator_int_* v7) {
bb8:
  struct std__deque_int__std__allocator_int__* this9;
  unsigned long __n10;
  struct std__allocator_int_* __a11;
  this9 = v5;
  __n10 = v6;
  __a11 = v7;
  struct std__deque_int__std__allocator_int__* t12 = this9;
  struct std___Deque_base_int__std__allocator_int__* base13 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t12 + 0);
  struct std__allocator_int_* t14 = __a11;
  unsigned long t15 = __n10;
  struct std__allocator_int_* t16 = __a11;
  unsigned long r17 = std__deque_int__std__allocator_int______S_check_init_len(t15, t16);
  if (__cir_exc_active) {
    return;
  }
  std___Deque_base_int__std__allocator_int______Deque_base(base13, t14, r17);
  if (__cir_exc_active) {
    return;
  }
    std__deque_int__std__allocator_int______M_default_initialize(t12);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base18 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t12 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base18);
      }
      return;
    }
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v19) {
bb20:
  struct std__allocator_int_* this21;
  this21 = v19;
  struct std__allocator_int_* t22 = this21;
  return;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiES4_
long std__operator_(struct std___Deque_iterator_int__int____int___* v23, struct std___Deque_iterator_int__int____int___* v24) {
bb25:
  struct std___Deque_iterator_int__int____int___* __x26;
  struct std___Deque_iterator_int__int____int___* __y27;
  long __retval28;
  __x26 = v23;
  __y27 = v24;
  unsigned long r29 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast30 = (long)r29;
  struct std___Deque_iterator_int__int____int___* t31 = __x26;
  int** t32 = t31->_M_node;
  struct std___Deque_iterator_int__int____int___* t33 = __y27;
  int** t34 = t33->_M_node;
  long diff35 = t32 - t34;
  struct std___Deque_iterator_int__int____int___* t36 = __x26;
  int** t37 = t36->_M_node;
  _Bool cast38 = (_Bool)t37;
  long cast39 = (long)cast38;
  long b40 = diff35 - cast39;
  long b41 = cast30 * b40;
  struct std___Deque_iterator_int__int____int___* t42 = __x26;
  int* t43 = t42->_M_cur;
  struct std___Deque_iterator_int__int____int___* t44 = __x26;
  int* t45 = t44->_M_first;
  long diff46 = t43 - t45;
  long b47 = b41 + diff46;
  struct std___Deque_iterator_int__int____int___* t48 = __y27;
  int* t49 = t48->_M_last;
  struct std___Deque_iterator_int__int____int___* t50 = __y27;
  int* t51 = t50->_M_cur;
  long diff52 = t49 - t51;
  long b53 = b47 + diff52;
  __retval28 = b53;
  long t54 = __retval28;
  return t54;
}

// function: _ZNKSt5dequeIiSaIiEE8max_sizeEv
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* v55) {
bb56:
  struct std__deque_int__std__allocator_int__* this57;
  unsigned long __retval58;
  this57 = v55;
  struct std__deque_int__std__allocator_int__* t59 = this57;
  struct std___Deque_base_int__std__allocator_int__* base60 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t59 + 0);
  struct std__allocator_int_* r61 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(base60);
  unsigned long r62 = std__deque_int__std__allocator_int______S_max_size(r61);
  __retval58 = r62;
  unsigned long t63 = __retval58;
  return t63;
}

// function: _ZNKSt5dequeIiSaIiEE4sizeEv
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* v64) {
bb65:
  struct std__deque_int__std__allocator_int__* this66;
  unsigned long __retval67;
  unsigned long __sz68;
  this66 = v64;
  struct std__deque_int__std__allocator_int__* t69 = this66;
  struct std___Deque_base_int__std__allocator_int__* base70 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t69 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base71 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base70->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base72 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t69 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base73 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base72->_M_impl) + 0);
  long r74 = std__operator_(&base71->_M_finish, &base73->_M_start);
  unsigned long cast75 = (unsigned long)r74;
  __sz68 = cast75;
    unsigned long t76 = __sz68;
    unsigned long r77 = std__deque_int__std__allocator_int_____max_size___const(t69);
    _Bool c78 = ((t76 > r77)) ? 1 : 0;
    if (c78) {
      __builtin_unreachable();
    }
  unsigned long t79 = __sz68;
  __retval67 = t79;
  unsigned long t80 = __retval67;
  return t80;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEpLEl
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* v81, long v82) {
bb83:
  struct std___Deque_iterator_int__int____int___* this84;
  long __n85;
  struct std___Deque_iterator_int__int____int___* __retval86;
  long __offset87;
  this84 = v81;
  __n85 = v82;
  struct std___Deque_iterator_int__int____int___* t88 = this84;
  long t89 = __n85;
  int* t90 = t88->_M_cur;
  int* t91 = t88->_M_first;
  long diff92 = t90 - t91;
  long b93 = t89 + diff92;
  __offset87 = b93;
    long t94 = __offset87;
    long c95 = 0;
    _Bool c96 = ((t94 >= c95)) ? 1 : 0;
    _Bool ternary97;
    if (c96) {
      long t98 = __offset87;
      unsigned long r99 = std___Deque_iterator_int__int___int_____S_buffer_size();
      long cast100 = (long)r99;
      _Bool c101 = ((t98 < cast100)) ? 1 : 0;
      ternary97 = (_Bool)c101;
    } else {
      _Bool c102 = 0;
      ternary97 = (_Bool)c102;
    }
    if (ternary97) {
      long t103 = __n85;
      int* t104 = t88->_M_cur;
      int* ptr105 = &(t104)[t103];
      t88->_M_cur = ptr105;
    } else {
      long __node_offset106;
      long t107 = __offset87;
      long c108 = 0;
      _Bool c109 = ((t107 > c108)) ? 1 : 0;
      long ternary110;
      if (c109) {
        long t111 = __offset87;
        unsigned long r112 = std___Deque_iterator_int__int___int_____S_buffer_size();
        long cast113 = (long)r112;
        long b114 = t111 / cast113;
        ternary110 = (long)b114;
      } else {
        long t115 = __offset87;
        long u116 = -t115;
        long c117 = 1;
        long b118 = u116 - c117;
        unsigned long cast119 = (unsigned long)b118;
        unsigned long r120 = std___Deque_iterator_int__int___int_____S_buffer_size();
        unsigned long b121 = cast119 / r120;
        long cast122 = (long)b121;
        long u123 = -cast122;
        long c124 = 1;
        long b125 = u123 - c124;
        ternary110 = (long)b125;
      }
      __node_offset106 = ternary110;
      int** t126 = t88->_M_node;
      long t127 = __node_offset106;
      int** ptr128 = &(t126)[t127];
      std___Deque_iterator_int__int___int_____M_set_node(t88, ptr128);
      int* t129 = t88->_M_first;
      long t130 = __offset87;
      long t131 = __node_offset106;
      unsigned long r132 = std___Deque_iterator_int__int___int_____S_buffer_size();
      long cast133 = (long)r132;
      long b134 = t131 * cast133;
      long b135 = t130 - b134;
      int* ptr136 = &(t129)[b135];
      t88->_M_cur = ptr136;
    }
  __retval86 = t88;
  struct std___Deque_iterator_int__int____int___* t137 = __retval86;
  return t137;
}

// function: _ZStplRKSt15_Deque_iteratorIiRiPiEl
struct std___Deque_iterator_int__int____int___ std__operator__3(struct std___Deque_iterator_int__int____int___* v138, long v139) {
bb140:
  struct std___Deque_iterator_int__int____int___* __x141;
  long __n142;
  struct std___Deque_iterator_int__int____int___ __retval143;
  __x141 = v138;
  __n142 = v139;
  struct std___Deque_iterator_int__int____int___* t144 = __x141;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval143, t144);
  long t145 = __n142;
  struct std___Deque_iterator_int__int____int___* r146 = std___Deque_iterator_int__int___int____operator__(&__retval143, t145);
  struct std___Deque_iterator_int__int____int___ t147 = __retval143;
  return t147;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEixEl
int* std___Deque_iterator_int__int___int____operator___long__const(struct std___Deque_iterator_int__int____int___* v148, long v149) {
bb150:
  struct std___Deque_iterator_int__int____int___* this151;
  long __n152;
  int* __retval153;
  struct std___Deque_iterator_int__int____int___ ref_tmp0154;
  this151 = v148;
  __n152 = v149;
  struct std___Deque_iterator_int__int____int___* t155 = this151;
  long t156 = __n152;
  struct std___Deque_iterator_int__int____int___ r157 = std__operator__3(t155, t156);
  ref_tmp0154 = r157;
  int* r158 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp0154);
  __retval153 = r158;
  int* t159 = __retval153;
  return t159;
}

// function: _ZNSt5dequeIiSaIiEEixEm
int* std__deque_int__std__allocator_int_____operator__(struct std__deque_int__std__allocator_int__* v160, unsigned long v161) {
bb162:
  struct std__deque_int__std__allocator_int__* this163;
  unsigned long __n164;
  int* __retval165;
  this163 = v160;
  __n164 = v161;
  struct std__deque_int__std__allocator_int__* t166 = this163;
    do {
          unsigned long t167 = __n164;
          unsigned long r168 = std__deque_int__std__allocator_int_____size___const(t166);
          _Bool c169 = ((t167 < r168)) ? 1 : 0;
          _Bool u170 = !c169;
          if (u170) {
            char* cast171 = (char*)&(_str_4);
            int c172 = 1433;
            char* cast173 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm);
            char* cast174 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast171, c172, cast173, cast174);
          }
      _Bool c175 = 0;
      if (!c175) break;
    } while (1);
  struct std___Deque_base_int__std__allocator_int__* base176 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t166 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base177 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base176->_M_impl) + 0);
  unsigned long t178 = __n164;
  long cast179 = (long)t178;
  int* r180 = std___Deque_iterator_int__int___int____operator___long__const(&base177->_M_start, cast179);
  __retval165 = r180;
  int* t181 = __retval165;
  return t181;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v182, int v183) {
bb184:
  int __a185;
  int __b186;
  int __retval187;
  __a185 = v182;
  __b186 = v183;
  int t188 = __a185;
  int t189 = __b186;
  int b190 = t188 | t189;
  __retval187 = b190;
  int t191 = __retval187;
  return t191;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v192) {
bb193:
  struct std__basic_ios_char__std__char_traits_char__* this194;
  int __retval195;
  this194 = v192;
  struct std__basic_ios_char__std__char_traits_char__* t196 = this194;
  struct std__ios_base* base197 = (struct std__ios_base*)((char *)t196 + 0);
  int t198 = base197->_M_streambuf_state;
  __retval195 = t198;
  int t199 = __retval195;
  return t199;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v200, int v201) {
bb202:
  struct std__basic_ios_char__std__char_traits_char__* this203;
  int __state204;
  this203 = v200;
  __state204 = v201;
  struct std__basic_ios_char__std__char_traits_char__* t205 = this203;
  int r206 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t205);
  if (__cir_exc_active) {
    return;
  }
  int t207 = __state204;
  int r208 = std__operator__2(r206, t207);
  std__basic_ios_char__std__char_traits_char_____clear(t205, r208);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v209, char* v210) {
bb211:
  char* __c1212;
  char* __c2213;
  _Bool __retval214;
  __c1212 = v209;
  __c2213 = v210;
  char* t215 = __c1212;
  char t216 = *t215;
  int cast217 = (int)t216;
  char* t218 = __c2213;
  char t219 = *t218;
  int cast220 = (int)t219;
  _Bool c221 = ((cast217 == cast220)) ? 1 : 0;
  __retval214 = c221;
  _Bool t222 = __retval214;
  return t222;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v223) {
bb224:
  char* __p225;
  unsigned long __retval226;
  unsigned long __i227;
  __p225 = v223;
  unsigned long c228 = 0;
  __i227 = c228;
    char ref_tmp0229;
    while (1) {
      unsigned long t230 = __i227;
      char* t231 = __p225;
      char* ptr232 = &(t231)[t230];
      char c233 = 0;
      ref_tmp0229 = c233;
      _Bool r234 = __gnu_cxx__char_traits_char___eq(ptr232, &ref_tmp0229);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u235 = !r234;
      if (!u235) break;
      unsigned long t236 = __i227;
      unsigned long u237 = t236 + 1;
      __i227 = u237;
    }
  unsigned long t238 = __i227;
  __retval226 = t238;
  unsigned long t239 = __retval226;
  return t239;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v240) {
bb241:
  char* __s242;
  unsigned long __retval243;
  __s242 = v240;
    _Bool r244 = std____is_constant_evaluated();
    if (r244) {
      char* t245 = __s242;
      unsigned long r246 = __gnu_cxx__char_traits_char___length(t245);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval243 = r246;
      unsigned long t247 = __retval243;
      return t247;
    }
  char* t248 = __s242;
  unsigned long r249 = strlen(t248);
  __retval243 = r249;
  unsigned long t250 = __retval243;
  return t250;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v251, char* v252) {
bb253:
  struct std__basic_ostream_char__std__char_traits_char__* __out254;
  char* __s255;
  struct std__basic_ostream_char__std__char_traits_char__* __retval256;
  __out254 = v251;
  __s255 = v252;
    char* t257 = __s255;
    _Bool cast258 = (_Bool)t257;
    _Bool u259 = !cast258;
    if (u259) {
      struct std__basic_ostream_char__std__char_traits_char__* t260 = __out254;
      void** v261 = (void**)t260;
      void* v262 = *((void**)v261);
      unsigned char* cast263 = (unsigned char*)v262;
      long c264 = -24;
      unsigned char* ptr265 = &(cast263)[c264];
      long* cast266 = (long*)ptr265;
      long t267 = *cast266;
      unsigned char* cast268 = (unsigned char*)t260;
      unsigned char* ptr269 = &(cast268)[t267];
      struct std__basic_ostream_char__std__char_traits_char__* cast270 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr269;
      struct std__basic_ios_char__std__char_traits_char__* cast271 = (struct std__basic_ios_char__std__char_traits_char__*)cast270;
      int t272 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast271, t272);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t273 = __out254;
      char* t274 = __s255;
      char* t275 = __s255;
      unsigned long r276 = std__char_traits_char___length(t275);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast277 = (long)r276;
      struct std__basic_ostream_char__std__char_traits_char__* r278 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t273, t274, cast277);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t279 = __out254;
  __retval256 = t279;
  struct std__basic_ostream_char__std__char_traits_char__* t280 = __retval256;
  return t280;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v281, void* v282) {
bb283:
  struct std__basic_ostream_char__std__char_traits_char__* this284;
  void* __pf285;
  struct std__basic_ostream_char__std__char_traits_char__* __retval286;
  this284 = v281;
  __pf285 = v282;
  struct std__basic_ostream_char__std__char_traits_char__* t287 = this284;
  void* t288 = __pf285;
  struct std__basic_ostream_char__std__char_traits_char__* r289 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t288)(t287);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval286 = r289;
  struct std__basic_ostream_char__std__char_traits_char__* t290 = __retval286;
  return t290;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v291) {
bb292:
  struct std__basic_ostream_char__std__char_traits_char__* __os293;
  struct std__basic_ostream_char__std__char_traits_char__* __retval294;
  __os293 = v291;
  struct std__basic_ostream_char__std__char_traits_char__* t295 = __os293;
  struct std__basic_ostream_char__std__char_traits_char__* r296 = std__ostream__flush(t295);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval294 = r296;
  struct std__basic_ostream_char__std__char_traits_char__* t297 = __retval294;
  return t297;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v298) {
bb299:
  struct std__ctype_char_* __f300;
  struct std__ctype_char_* __retval301;
  __f300 = v298;
    struct std__ctype_char_* t302 = __f300;
    _Bool cast303 = (_Bool)t302;
    _Bool u304 = !cast303;
    if (u304) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t305 = __f300;
  __retval301 = t305;
  struct std__ctype_char_* t306 = __retval301;
  return t306;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v307, char v308) {
bb309:
  struct std__ctype_char_* this310;
  char __c311;
  char __retval312;
  this310 = v307;
  __c311 = v308;
  struct std__ctype_char_* t313 = this310;
    char t314 = t313->_M_widen_ok;
    _Bool cast315 = (_Bool)t314;
    if (cast315) {
      char t316 = __c311;
      unsigned char cast317 = (unsigned char)t316;
      unsigned long cast318 = (unsigned long)cast317;
      char t319 = t313->_M_widen[cast318];
      __retval312 = t319;
      char t320 = __retval312;
      return t320;
    }
  std__ctype_char____M_widen_init___const(t313);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t321 = __c311;
  void** v322 = (void**)t313;
  void* v323 = *((void**)v322);
  char vcall326 = (char)__VERIFIER_virtual_call_char_char(t313, 6, t321);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval312 = vcall326;
  char t327 = __retval312;
  return t327;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v328, char v329) {
bb330:
  struct std__basic_ios_char__std__char_traits_char__* this331;
  char __c332;
  char __retval333;
  this331 = v328;
  __c332 = v329;
  struct std__basic_ios_char__std__char_traits_char__* t334 = this331;
  struct std__ctype_char_* t335 = t334->_M_ctype;
  struct std__ctype_char_* r336 = std__ctype_char__const__std____check_facet_std__ctype_char___(t335);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t337 = __c332;
  char r338 = std__ctype_char___widen_char__const(r336, t337);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval333 = r338;
  char t339 = __retval333;
  return t339;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v340) {
bb341:
  struct std__basic_ostream_char__std__char_traits_char__* __os342;
  struct std__basic_ostream_char__std__char_traits_char__* __retval343;
  __os342 = v340;
  struct std__basic_ostream_char__std__char_traits_char__* t344 = __os342;
  struct std__basic_ostream_char__std__char_traits_char__* t345 = __os342;
  void** v346 = (void**)t345;
  void* v347 = *((void**)v346);
  unsigned char* cast348 = (unsigned char*)v347;
  long c349 = -24;
  unsigned char* ptr350 = &(cast348)[c349];
  long* cast351 = (long*)ptr350;
  long t352 = *cast351;
  unsigned char* cast353 = (unsigned char*)t345;
  unsigned char* ptr354 = &(cast353)[t352];
  struct std__basic_ostream_char__std__char_traits_char__* cast355 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr354;
  struct std__basic_ios_char__std__char_traits_char__* cast356 = (struct std__basic_ios_char__std__char_traits_char__*)cast355;
  char c357 = 10;
  char r358 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast356, c357);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r359 = std__ostream__put(t344, r358);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r360 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r359);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval343 = r360;
  struct std__basic_ostream_char__std__char_traits_char__* t361 = __retval343;
  return t361;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v362) {
bb363:
  struct std__deque_int__std__allocator_int__* this364;
  struct std___Deque_iterator_int__int____int___ agg_tmp0365;
  struct std___Deque_iterator_int__int____int___ agg_tmp1366;
  this364 = v362;
  struct std__deque_int__std__allocator_int__* t367 = this364;
    struct std___Deque_iterator_int__int____int___ r368 = std__deque_int__std__allocator_int_____begin(t367);
    agg_tmp0365 = r368;
    struct std___Deque_iterator_int__int____int___ r369 = std__deque_int__std__allocator_int_____end(t367);
    agg_tmp1366 = r369;
    struct std___Deque_base_int__std__allocator_int__* base370 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t367 + 0);
    struct std__allocator_int_* r371 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base370);
    struct std___Deque_iterator_int__int____int___ t372 = agg_tmp0365;
    struct std___Deque_iterator_int__int____int___ t373 = agg_tmp1366;
    std__deque_int__std__allocator_int______M_destroy_data(t367, t372, t373, r371);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base374 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t367 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base374);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base375 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t367 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base375);
  }
  return;
}

// function: main
int main() {
bb376:
  int __retval377;
  struct std__deque_int__std__allocator_int__ mydeque378;
  struct std__allocator_int_ ref_tmp0379;
  unsigned int i380;
  unsigned long sz381;
  int c382 = 0;
  __retval377 = c382;
  unsigned long c383 = 10;
  std__allocator_int___allocator_2(&ref_tmp0379);
    std__deque_int__std__allocator_int_____deque(&mydeque378, c383, &ref_tmp0379);
    if (__cir_exc_active) {
      {
        std__allocator_int____allocator(&ref_tmp0379);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  {
    std__allocator_int____allocator(&ref_tmp0379);
  }
    unsigned long r384 = std__deque_int__std__allocator_int_____size___const(&mydeque378);
    sz381 = r384;
      unsigned int c385 = 0;
      i380 = c385;
      while (1) {
        unsigned int t387 = i380;
        unsigned long cast388 = (unsigned long)t387;
        unsigned long t389 = sz381;
        _Bool c390 = ((cast388 < t389)) ? 1 : 0;
        if (!c390) break;
        unsigned int t391 = i380;
        int cast392 = (int)t391;
        unsigned int t393 = i380;
        unsigned long cast394 = (unsigned long)t393;
        int* r395 = std__deque_int__std__allocator_int_____operator__(&mydeque378, cast394);
        *r395 = cast392;
      for_step386: ;
        unsigned int t396 = i380;
        unsigned int u397 = t396 + 1;
        i380 = u397;
      }
      unsigned int c398 = 0;
      i380 = c398;
      while (1) {
        unsigned int t400 = i380;
        unsigned long cast401 = (unsigned long)t400;
        unsigned long t402 = sz381;
        unsigned long c403 = 2;
        unsigned long b404 = t402 / c403;
        _Bool c405 = ((cast401 < b404)) ? 1 : 0;
        if (!c405) break;
          int temp406;
          unsigned long t407 = sz381;
          unsigned long c408 = 1;
          unsigned long b409 = t407 - c408;
          unsigned int t410 = i380;
          unsigned long cast411 = (unsigned long)t410;
          unsigned long b412 = b409 - cast411;
          int* r413 = std__deque_int__std__allocator_int_____operator__(&mydeque378, b412);
          int t414 = *r413;
          temp406 = t414;
          unsigned int t415 = i380;
          unsigned long cast416 = (unsigned long)t415;
          int* r417 = std__deque_int__std__allocator_int_____operator__(&mydeque378, cast416);
          int t418 = *r417;
          unsigned long t419 = sz381;
          unsigned long c420 = 1;
          unsigned long b421 = t419 - c420;
          unsigned int t422 = i380;
          unsigned long cast423 = (unsigned long)t422;
          unsigned long b424 = b421 - cast423;
          int* r425 = std__deque_int__std__allocator_int_____operator__(&mydeque378, b424);
          *r425 = t418;
          int t426 = temp406;
          unsigned int t427 = i380;
          unsigned long cast428 = (unsigned long)t427;
          int* r429 = std__deque_int__std__allocator_int_____operator__(&mydeque378, cast428);
          *r429 = t426;
      for_step399: ;
        unsigned int t430 = i380;
        unsigned int u431 = t430 + 1;
        i380 = u431;
      }
    char* cast432 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r433 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast432);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque378);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      unsigned int c434 = 0;
      i380 = c434;
      while (1) {
        unsigned int t436 = i380;
        unsigned long cast437 = (unsigned long)t436;
        unsigned long t438 = sz381;
        _Bool c439 = ((cast437 < t438)) ? 1 : 0;
        if (!c439) break;
        unsigned int t440 = i380;
        unsigned long cast441 = (unsigned long)t440;
        int* r442 = std__deque_int__std__allocator_int_____operator__(&mydeque378, cast441);
        int t443 = *r442;
        unsigned int cast444 = (unsigned int)t443;
        unsigned int c445 = 9;
        unsigned int t446 = i380;
        unsigned int b447 = c445 - t446;
        _Bool c448 = ((cast444 == b447)) ? 1 : 0;
        if (c448) {
        } else {
          char* cast449 = (char*)&(_str_1);
          char* c450 = _str_2;
          unsigned int c451 = 35;
          char* cast452 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast449, c450, c451, cast452);
        }
      for_step435: ;
        unsigned int t453 = i380;
        unsigned int u454 = t453 + 1;
        i380 = u454;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r455 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque378);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c456 = 0;
    __retval377 = c456;
    int t457 = __retval377;
    int ret_val458 = t457;
    {
      std__deque_int__std__allocator_int______deque(&mydeque378);
    }
    return ret_val458;
  int t459 = __retval377;
  return t459;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v460) {
bb461:
  struct std____new_allocator_int_* this462;
  this462 = v460;
  struct std____new_allocator_int_* t463 = this462;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v464, unsigned long* v465) {
bb466:
  unsigned long* __a467;
  unsigned long* __b468;
  unsigned long* __retval469;
  __a467 = v464;
  __b468 = v465;
    unsigned long* t470 = __b468;
    unsigned long t471 = *t470;
    unsigned long* t472 = __a467;
    unsigned long t473 = *t472;
    _Bool c474 = ((t471 < t473)) ? 1 : 0;
    if (c474) {
      unsigned long* t475 = __b468;
      __retval469 = t475;
      unsigned long* t476 = __retval469;
      return t476;
    }
  unsigned long* t477 = __a467;
  __retval469 = t477;
  unsigned long* t478 = __retval469;
  return t478;
}

// function: _ZNSt5dequeIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* v479) {
bb480:
  struct std__allocator_int_* __a481;
  unsigned long __retval482;
  unsigned long __diffmax483;
  unsigned long __allocmax484;
  __a481 = v479;
  unsigned long c485 = 9223372036854775807;
  __diffmax483 = c485;
  unsigned long c486 = 4611686018427387903;
  __allocmax484 = c486;
  unsigned long* r487 = unsigned_long_const__std__min_unsigned_long_(&__diffmax483, &__allocmax484);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t488 = *r487;
  __retval482 = t488;
  unsigned long t489 = __retval482;
  return t489;
}

// function: _ZNSt5dequeIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__deque_int__std__allocator_int______S_check_init_len(unsigned long v490, struct std__allocator_int_* v491) {
bb492:
  unsigned long __n493;
  struct std__allocator_int_* __a494;
  unsigned long __retval495;
  __n493 = v490;
  __a494 = v491;
    unsigned long t496 = __n493;
    struct std__allocator_int_* t497 = __a494;
    unsigned long r498 = std__deque_int__std__allocator_int______S_max_size(t497);
    _Bool c499 = ((t496 > r498)) ? 1 : 0;
    if (c499) {
      char* cast500 = (char*)&(_str_3);
      std____throw_length_error(cast500);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long t501 = __n493;
  __retval495 = t501;
  unsigned long t502 = __retval495;
  return t502;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2ERKS0_
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v503, struct std__allocator_int_* v504) {
bb505:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this506;
  struct std__allocator_int_* __a507;
  this506 = v503;
  __a507 = v504;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t508 = this506;
  struct std__allocator_int_* base509 = (struct std__allocator_int_*)((char *)t508 + 0);
  struct std__allocator_int_* t510 = __a507;
  std__allocator_int___allocator(base509, t510);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base511 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t508 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base511);
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v512) {
bb513:
  unsigned long __size514;
  unsigned long __retval515;
  __size514 = v512;
  unsigned long t516 = __size514;
  unsigned long c517 = 512;
  _Bool c518 = ((t516 < c517)) ? 1 : 0;
  unsigned long ternary519;
  if (c518) {
    unsigned long c520 = 512;
    unsigned long t521 = __size514;
    unsigned long b522 = c520 / t521;
    ternary519 = (unsigned long)b522;
  } else {
    unsigned long c523 = 1;
    ternary519 = (unsigned long)c523;
  }
  __retval515 = ternary519;
  unsigned long t524 = __retval515;
  return t524;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v525, unsigned long* v526) {
bb527:
  unsigned long* __a528;
  unsigned long* __b529;
  unsigned long* __retval530;
  __a528 = v525;
  __b529 = v526;
    unsigned long* t531 = __a528;
    unsigned long t532 = *t531;
    unsigned long* t533 = __b529;
    unsigned long t534 = *t533;
    _Bool c535 = ((t532 < t534)) ? 1 : 0;
    if (c535) {
      unsigned long* t536 = __b529;
      __retval530 = t536;
      unsigned long* t537 = __retval530;
      return t537;
    }
  unsigned long* t538 = __a528;
  __retval530 = t538;
  unsigned long* t539 = __retval530;
  return t539;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v540) {
bb541:
  struct std___Deque_base_int__std__allocator_int__* this542;
  struct std__allocator_int_* __retval543;
  this542 = v540;
  struct std___Deque_base_int__std__allocator_int__* t544 = this542;
  struct std__allocator_int_* base545 = (struct std__allocator_int_*)((char *)&(t544->_M_impl) + 0);
  __retval543 = base545;
  struct std__allocator_int_* t546 = __retval543;
  return t546;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v547, struct std__allocator_int_* v548) {
bb549:
  struct std__allocator_int___* this550;
  struct std__allocator_int_* unnamed551;
  this550 = v547;
  unnamed551 = v548;
  struct std__allocator_int___* t552 = this550;
  struct std____new_allocator_int___* base553 = (struct std____new_allocator_int___*)((char *)t552 + 0);
  std____new_allocator_int______new_allocator(base553);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v554) {
bb555:
  struct std___Deque_base_int__std__allocator_int__* this556;
  struct std__allocator_int___ __retval557;
  this556 = v554;
  struct std___Deque_base_int__std__allocator_int__* t558 = this556;
  struct std__allocator_int_* r559 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t558);
  std__allocator_int____allocator_int_(&__retval557, r559);
  struct std__allocator_int___ t560 = __retval557;
  return t560;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb561:
  _Bool __retval562;
    _Bool c563 = 0;
    __retval562 = c563;
    _Bool t564 = __retval562;
    return t564;
  abort();
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v565) {
bb566:
  struct std____new_allocator_int___* this567;
  unsigned long __retval568;
  this567 = v565;
  struct std____new_allocator_int___* t569 = this567;
  unsigned long c570 = 9223372036854775807;
  unsigned long c571 = 8;
  unsigned long b572 = c570 / c571;
  __retval568 = b572;
  unsigned long t573 = __retval568;
  return t573;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v574, unsigned long v575, void* v576) {
bb577:
  struct std____new_allocator_int___* this578;
  unsigned long __n579;
  void* unnamed580;
  int** __retval581;
  this578 = v574;
  __n579 = v575;
  unnamed580 = v576;
  struct std____new_allocator_int___* t582 = this578;
    unsigned long t583 = __n579;
    unsigned long r584 = std____new_allocator_int_____M_max_size___const(t582);
    _Bool c585 = ((t583 > r584)) ? 1 : 0;
    if (c585) {
        unsigned long t586 = __n579;
        unsigned long c587 = -1;
        unsigned long c588 = 8;
        unsigned long b589 = c587 / c588;
        _Bool c590 = ((t586 > b589)) ? 1 : 0;
        if (c590) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c591 = 8;
    unsigned long c592 = 16;
    _Bool c593 = ((c591 > c592)) ? 1 : 0;
    if (c593) {
      unsigned long __al594;
      unsigned long c595 = 8;
      __al594 = c595;
      unsigned long t596 = __n579;
      unsigned long c597 = 8;
      unsigned long b598 = t596 * c597;
      unsigned long t599 = __al594;
      void* r600 = operator_new_2(b598, t599);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast601 = (int**)r600;
      __retval581 = cast601;
      int** t602 = __retval581;
      return t602;
    }
  unsigned long t603 = __n579;
  unsigned long c604 = 8;
  unsigned long b605 = t603 * c604;
  void* r606 = operator_new(b605);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast607 = (int**)r606;
  __retval581 = cast607;
  int** t608 = __retval581;
  return t608;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v609, unsigned long v610) {
bb611:
  struct std__allocator_int___* this612;
  unsigned long __n613;
  int** __retval614;
  this612 = v609;
  __n613 = v610;
  struct std__allocator_int___* t615 = this612;
    _Bool r616 = std____is_constant_evaluated();
    if (r616) {
        unsigned long t617 = __n613;
        unsigned long c618 = 8;
        unsigned long ovr619;
        _Bool ovf620 = __builtin_mul_overflow(t617, c618, &ovr619);
        __n613 = ovr619;
        if (ovf620) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t621 = __n613;
      void* r622 = operator_new(t621);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast623 = (int**)r622;
      __retval614 = cast623;
      int** t624 = __retval614;
      return t624;
    }
  struct std____new_allocator_int___* base625 = (struct std____new_allocator_int___*)((char *)t615 + 0);
  unsigned long t626 = __n613;
  void* c627 = ((void*)0);
  int** r628 = std____new_allocator_int____allocate(base625, t626, c627);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval614 = r628;
  int** t629 = __retval614;
  return t629;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v630, unsigned long v631) {
bb632:
  struct std__allocator_int___* __a633;
  unsigned long __n634;
  int** __retval635;
  __a633 = v630;
  __n634 = v631;
  struct std__allocator_int___* t636 = __a633;
  unsigned long t637 = __n634;
  int** r638 = std__allocator_int____allocate(t636, t637);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval635 = r638;
  int** t639 = __retval635;
  return t639;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v640, unsigned long v641) {
bb642:
  struct std___Deque_base_int__std__allocator_int__* this643;
  unsigned long __n644;
  int** __retval645;
  struct std__allocator_int___ __map_alloc646;
  this643 = v640;
  __n644 = v641;
  struct std___Deque_base_int__std__allocator_int__* t647 = this643;
  struct std__allocator_int___ r648 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t647);
  __map_alloc646 = r648;
  unsigned long t649 = __n644;
  int** r650 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc646, t649);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval645 = r650;
  int** t651 = __retval645;
  return t651;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v652) {
bb653:
  struct std____new_allocator_int_* this654;
  unsigned long __retval655;
  this654 = v652;
  struct std____new_allocator_int_* t656 = this654;
  unsigned long c657 = 9223372036854775807;
  unsigned long c658 = 4;
  unsigned long b659 = c657 / c658;
  __retval655 = b659;
  unsigned long t660 = __retval655;
  return t660;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v661, unsigned long v662, void* v663) {
bb664:
  struct std____new_allocator_int_* this665;
  unsigned long __n666;
  void* unnamed667;
  int* __retval668;
  this665 = v661;
  __n666 = v662;
  unnamed667 = v663;
  struct std____new_allocator_int_* t669 = this665;
    unsigned long t670 = __n666;
    unsigned long r671 = std____new_allocator_int____M_max_size___const(t669);
    _Bool c672 = ((t670 > r671)) ? 1 : 0;
    if (c672) {
        unsigned long t673 = __n666;
        unsigned long c674 = -1;
        unsigned long c675 = 4;
        unsigned long b676 = c674 / c675;
        _Bool c677 = ((t673 > b676)) ? 1 : 0;
        if (c677) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c678 = 4;
    unsigned long c679 = 16;
    _Bool c680 = ((c678 > c679)) ? 1 : 0;
    if (c680) {
      unsigned long __al681;
      unsigned long c682 = 4;
      __al681 = c682;
      unsigned long t683 = __n666;
      unsigned long c684 = 4;
      unsigned long b685 = t683 * c684;
      unsigned long t686 = __al681;
      void* r687 = operator_new_2(b685, t686);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast688 = (int*)r687;
      __retval668 = cast688;
      int* t689 = __retval668;
      return t689;
    }
  unsigned long t690 = __n666;
  unsigned long c691 = 4;
  unsigned long b692 = t690 * c691;
  void* r693 = operator_new(b692);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast694 = (int*)r693;
  __retval668 = cast694;
  int* t695 = __retval668;
  return t695;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v696, unsigned long v697) {
bb698:
  struct std__allocator_int_* this699;
  unsigned long __n700;
  int* __retval701;
  this699 = v696;
  __n700 = v697;
  struct std__allocator_int_* t702 = this699;
    _Bool r703 = std____is_constant_evaluated();
    if (r703) {
        unsigned long t704 = __n700;
        unsigned long c705 = 4;
        unsigned long ovr706;
        _Bool ovf707 = __builtin_mul_overflow(t704, c705, &ovr706);
        __n700 = ovr706;
        if (ovf707) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t708 = __n700;
      void* r709 = operator_new(t708);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast710 = (int*)r709;
      __retval701 = cast710;
      int* t711 = __retval701;
      return t711;
    }
  struct std____new_allocator_int_* base712 = (struct std____new_allocator_int_*)((char *)t702 + 0);
  unsigned long t713 = __n700;
  void* c714 = ((void*)0);
  int* r715 = std____new_allocator_int___allocate(base712, t713, c714);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval701 = r715;
  int* t716 = __retval701;
  return t716;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v717, unsigned long v718) {
bb719:
  struct std__allocator_int_* __a720;
  unsigned long __n721;
  int* __retval722;
  __a720 = v717;
  __n721 = v718;
  struct std__allocator_int_* t723 = __a720;
  unsigned long t724 = __n721;
  int* r725 = std__allocator_int___allocate(t723, t724);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval722 = r725;
  int* t726 = __retval722;
  return t726;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v727) {
bb728:
  struct std___Deque_base_int__std__allocator_int__* this729;
  int* __retval730;
  this729 = v727;
  struct std___Deque_base_int__std__allocator_int__* t731 = this729;
  struct std__allocator_int_* base732 = (struct std__allocator_int_*)((char *)&(t731->_M_impl) + 0);
  unsigned long c733 = 4;
  unsigned long r734 = std____deque_buf_size(c733);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r735 = std__allocator_traits_std__allocator_int_____allocate(base732, r734);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval730 = r735;
  int* t736 = __retval730;
  return t736;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v737, int* v738, unsigned long v739) {
bb740:
  struct std____new_allocator_int_* this741;
  int* __p742;
  unsigned long __n743;
  this741 = v737;
  __p742 = v738;
  __n743 = v739;
  struct std____new_allocator_int_* t744 = this741;
    unsigned long c745 = 4;
    unsigned long c746 = 16;
    _Bool c747 = ((c745 > c746)) ? 1 : 0;
    if (c747) {
      int* t748 = __p742;
      void* cast749 = (void*)t748;
      unsigned long t750 = __n743;
      unsigned long c751 = 4;
      unsigned long b752 = t750 * c751;
      unsigned long c753 = 4;
      operator_delete_3(cast749, b752, c753);
      return;
    }
  int* t754 = __p742;
  void* cast755 = (void*)t754;
  unsigned long t756 = __n743;
  unsigned long c757 = 4;
  unsigned long b758 = t756 * c757;
  operator_delete_2(cast755, b758);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v759, int* v760, unsigned long v761) {
bb762:
  struct std__allocator_int_* this763;
  int* __p764;
  unsigned long __n765;
  this763 = v759;
  __p764 = v760;
  __n765 = v761;
  struct std__allocator_int_* t766 = this763;
    _Bool r767 = std____is_constant_evaluated();
    if (r767) {
      int* t768 = __p764;
      void* cast769 = (void*)t768;
      operator_delete(cast769);
      return;
    }
  struct std____new_allocator_int_* base770 = (struct std____new_allocator_int_*)((char *)t766 + 0);
  int* t771 = __p764;
  unsigned long t772 = __n765;
  std____new_allocator_int___deallocate(base770, t771, t772);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v773, int* v774, unsigned long v775) {
bb776:
  struct std__allocator_int_* __a777;
  int* __p778;
  unsigned long __n779;
  __a777 = v773;
  __p778 = v774;
  __n779 = v775;
  struct std__allocator_int_* t780 = __a777;
  int* t781 = __p778;
  unsigned long t782 = __n779;
  std__allocator_int___deallocate(t780, t781, t782);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v783, int* v784) {
bb785:
  struct std___Deque_base_int__std__allocator_int__* this786;
  int* __p787;
  this786 = v783;
  __p787 = v784;
  struct std___Deque_base_int__std__allocator_int__* t788 = this786;
  struct std__allocator_int_* base789 = (struct std__allocator_int_*)((char *)&(t788->_M_impl) + 0);
  int* t790 = __p787;
  unsigned long c791 = 4;
  unsigned long r792 = std____deque_buf_size(c791);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base789, t790, r792);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v793, int** v794, int** v795) {
bb796:
  struct std___Deque_base_int__std__allocator_int__* this797;
  int** __nstart798;
  int** __nfinish799;
  this797 = v793;
  __nstart798 = v794;
  __nfinish799 = v795;
  struct std___Deque_base_int__std__allocator_int__* t800 = this797;
    int** __n801;
    int** t802 = __nstart798;
    __n801 = t802;
    while (1) {
      int** t804 = __n801;
      int** t805 = __nfinish799;
      _Bool c806 = ((t804 < t805)) ? 1 : 0;
      if (!c806) break;
      int** t807 = __n801;
      int* t808 = *t807;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t800, t808);
    for_step803: ;
      int** t809 = __n801;
      int c810 = 1;
      int** ptr811 = &(t809)[c810];
      __n801 = ptr811;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v812, int** v813, int** v814) {
bb815:
  struct std___Deque_base_int__std__allocator_int__* this816;
  int** __nstart817;
  int** __nfinish818;
  int** __cur819;
  this816 = v812;
  __nstart817 = v813;
  __nfinish818 = v814;
  struct std___Deque_base_int__std__allocator_int__* t820 = this816;
        int** t822 = __nstart817;
        __cur819 = t822;
        while (1) {
          int** t824 = __cur819;
          int** t825 = __nfinish818;
          _Bool c826 = ((t824 < t825)) ? 1 : 0;
          if (!c826) break;
          int* r827 = std___Deque_base_int__std__allocator_int______M_allocate_node(t820);
          if (__cir_exc_active) {
            goto cir_try_dispatch821;
          }
          int** t828 = __cur819;
          *t828 = r827;
        for_step823: ;
          int** t829 = __cur819;
          int c830 = 1;
          int** ptr831 = &(t829)[c830];
          __cur819 = ptr831;
        }
    cir_try_dispatch821: ;
    if (__cir_exc_active) {
    {
      int ca_tok832 = 0;
      void* ca_exn833 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t834 = __nstart817;
        int** t835 = __cur819;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t820, t834, t835);
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  return;
}

// function: _ZNSt15__new_allocatorIPiE10deallocateEPS0_m
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v836, int** v837, unsigned long v838) {
bb839:
  struct std____new_allocator_int___* this840;
  int** __p841;
  unsigned long __n842;
  this840 = v836;
  __p841 = v837;
  __n842 = v838;
  struct std____new_allocator_int___* t843 = this840;
    unsigned long c844 = 8;
    unsigned long c845 = 16;
    _Bool c846 = ((c844 > c845)) ? 1 : 0;
    if (c846) {
      int** t847 = __p841;
      void* cast848 = (void*)t847;
      unsigned long t849 = __n842;
      unsigned long c850 = 8;
      unsigned long b851 = t849 * c850;
      unsigned long c852 = 8;
      operator_delete_3(cast848, b851, c852);
      return;
    }
  int** t853 = __p841;
  void* cast854 = (void*)t853;
  unsigned long t855 = __n842;
  unsigned long c856 = 8;
  unsigned long b857 = t855 * c856;
  operator_delete_2(cast854, b857);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v858, int** v859, unsigned long v860) {
bb861:
  struct std__allocator_int___* this862;
  int** __p863;
  unsigned long __n864;
  this862 = v858;
  __p863 = v859;
  __n864 = v860;
  struct std__allocator_int___* t865 = this862;
    _Bool r866 = std____is_constant_evaluated();
    if (r866) {
      int** t867 = __p863;
      void* cast868 = (void*)t867;
      operator_delete(cast868);
      return;
    }
  struct std____new_allocator_int___* base869 = (struct std____new_allocator_int___*)((char *)t865 + 0);
  int** t870 = __p863;
  unsigned long t871 = __n864;
  std____new_allocator_int____deallocate(base869, t870, t871);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v872, int** v873, unsigned long v874) {
bb875:
  struct std__allocator_int___* __a876;
  int** __p877;
  unsigned long __n878;
  __a876 = v872;
  __p877 = v873;
  __n878 = v874;
  struct std__allocator_int___* t879 = __a876;
  int** t880 = __p877;
  unsigned long t881 = __n878;
  std__allocator_int____deallocate(t879, t880, t881);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v882, int** v883, unsigned long v884) {
bb885:
  struct std___Deque_base_int__std__allocator_int__* this886;
  int** __p887;
  unsigned long __n888;
  struct std__allocator_int___ __map_alloc889;
  this886 = v882;
  __p887 = v883;
  __n888 = v884;
  struct std___Deque_base_int__std__allocator_int__* t890 = this886;
  struct std__allocator_int___ r891 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t890);
  __map_alloc889 = r891;
  int** t892 = __p887;
  unsigned long t893 = __n888;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc889, t892, t893);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size() {
bb894:
  unsigned long __retval895;
  unsigned long c896 = 4;
  unsigned long r897 = std____deque_buf_size(c896);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval895 = r897;
  unsigned long t898 = __retval895;
  return t898;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v899, int** v900) {
bb901:
  struct std___Deque_iterator_int__int____int___* this902;
  int** __new_node903;
  this902 = v899;
  __new_node903 = v900;
  struct std___Deque_iterator_int__int____int___* t904 = this902;
  int** t905 = __new_node903;
  t904->_M_node = t905;
  int** t906 = __new_node903;
  int* t907 = *t906;
  t904->_M_first = t907;
  int* t908 = t904->_M_first;
  unsigned long r909 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast910 = (long)r909;
  int* ptr911 = &(t908)[cast910];
  t904->_M_last = ptr911;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v912, unsigned long v913) {
bb914:
  struct std___Deque_base_int__std__allocator_int__* this915;
  unsigned long __num_elements916;
  unsigned long __num_nodes917;
  unsigned long ref_tmp0918;
  unsigned long ref_tmp1919;
  int** __nstart920;
  int** __nfinish921;
  this915 = v912;
  __num_elements916 = v913;
  struct std___Deque_base_int__std__allocator_int__* t922 = this915;
  unsigned long t923 = __num_elements916;
  unsigned long c924 = 4;
  unsigned long r925 = std____deque_buf_size(c924);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b926 = t923 / r925;
  unsigned long c927 = 1;
  unsigned long b928 = b926 + c927;
  __num_nodes917 = b928;
  unsigned long c929 = 8;
  ref_tmp0918 = c929;
  unsigned long t930 = __num_nodes917;
  unsigned long c931 = 2;
  unsigned long b932 = t930 + c931;
  ref_tmp1919 = b932;
  unsigned long* r933 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0918, &ref_tmp1919);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t934 = *r933;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base935 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t922->_M_impl) + 0);
  base935->_M_map_size = t934;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base936 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t922->_M_impl) + 0);
  unsigned long t937 = base936->_M_map_size;
  int** r938 = std___Deque_base_int__std__allocator_int______M_allocate_map(t922, t937);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base939 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t922->_M_impl) + 0);
  base939->_M_map = r938;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base940 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t922->_M_impl) + 0);
  int** t941 = base940->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base942 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t922->_M_impl) + 0);
  unsigned long t943 = base942->_M_map_size;
  unsigned long t944 = __num_nodes917;
  unsigned long b945 = t943 - t944;
  unsigned long c946 = 2;
  unsigned long b947 = b945 / c946;
  int** ptr948 = &(t941)[b947];
  __nstart920 = ptr948;
  int** t949 = __nstart920;
  unsigned long t950 = __num_nodes917;
  int** ptr951 = &(t949)[t950];
  __nfinish921 = ptr951;
      int** t953 = __nstart920;
      int** t954 = __nfinish921;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t922, t953, t954);
      if (__cir_exc_active) {
        goto cir_try_dispatch952;
      }
    cir_try_dispatch952: ;
    if (__cir_exc_active) {
    {
      int ca_tok955 = 0;
      void* ca_exn956 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base957 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t922->_M_impl) + 0);
        int** t958 = base957->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base959 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t922->_M_impl) + 0);
        unsigned long t960 = base959->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t922, t958, t960);
        int** c961 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base962 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t922->_M_impl) + 0);
        base962->_M_map = c961;
        unsigned long c963 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base964 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t922->_M_impl) + 0);
        base964->_M_map_size = c963;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base965 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t922->_M_impl) + 0);
  int** t966 = __nstart920;
  std___Deque_iterator_int__int___int_____M_set_node(&base965->_M_start, t966);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base967 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t922->_M_impl) + 0);
  int** t968 = __nfinish921;
  int c969 = -1;
  int** ptr970 = &(t968)[c969];
  std___Deque_iterator_int__int___int_____M_set_node(&base967->_M_finish, ptr970);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base971 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t922->_M_impl) + 0);
  int* t972 = base971->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base973 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t922->_M_impl) + 0);
  base973->_M_start._M_cur = t972;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base974 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t922->_M_impl) + 0);
  int* t975 = base974->_M_finish._M_first;
  unsigned long t976 = __num_elements916;
  unsigned long c977 = 4;
  unsigned long r978 = std____deque_buf_size(c977);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b979 = t976 % r978;
  int* ptr980 = &(t975)[b979];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base981 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t922->_M_impl) + 0);
  base981->_M_finish._M_cur = ptr980;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v982) {
bb983:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this984;
  this984 = v982;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t985 = this984;
  {
    struct std__allocator_int_* base986 = (struct std__allocator_int_*)((char *)t985 + 0);
    std__allocator_int____allocator(base986);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2ERKS0_m
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v987, struct std__allocator_int_* v988, unsigned long v989) {
bb990:
  struct std___Deque_base_int__std__allocator_int__* this991;
  struct std__allocator_int_* __a992;
  unsigned long __num_elements993;
  this991 = v987;
  __a992 = v988;
  __num_elements993 = v989;
  struct std___Deque_base_int__std__allocator_int__* t994 = this991;
  struct std__allocator_int_* t995 = __a992;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t994->_M_impl, t995);
    unsigned long t996 = __num_elements993;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t994, t996);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t994->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb997:
  _Bool __retval998;
    _Bool c999 = 0;
    __retval998 = c999;
    _Bool t1000 = __retval998;
    return t1000;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1001, int** v1002) {
bb1003:
  struct std___UninitDestroyGuard_int____void_* this1004;
  int** __first1005;
  this1004 = v1001;
  __first1005 = v1002;
  struct std___UninitDestroyGuard_int____void_* t1006 = this1004;
  int** t1007 = __first1005;
  int* t1008 = *t1007;
  t1006->_M_first = t1008;
  int** t1009 = __first1005;
  t1006->_M_cur = t1009;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v1010) {
bb1011:
  int* __location1012;
  int* __retval1013;
  void* __loc1014;
  __location1012 = v1010;
  int* t1015 = __location1012;
  void* cast1016 = (void*)t1015;
  __loc1014 = cast1016;
    void* t1017 = __loc1014;
    int* cast1018 = (int*)t1017;
    int c1019 = 0;
    *cast1018 = c1019;
    __retval1013 = cast1018;
    int* t1020 = __retval1013;
    return t1020;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v1021) {
bb1022:
  int* __p1023;
  __p1023 = v1021;
    _Bool r1024 = std____is_constant_evaluated();
    if (r1024) {
      int* t1025 = __p1023;
      int* r1026 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t1025);
      return;
    }
  int* t1027 = __p1023;
  void* cast1028 = (void*)t1027;
  int* cast1029 = (int*)cast1028;
  int c1030 = 0;
  *cast1029 = c1030;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1031) {
bb1032:
  struct std___UninitDestroyGuard_int____void_* this1033;
  this1033 = v1031;
  struct std___UninitDestroyGuard_int____void_* t1034 = this1033;
  int** c1035 = ((void*)0);
  t1034->_M_cur = c1035;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1036) {
bb1037:
  struct std___UninitDestroyGuard_int____void_* this1038;
  this1038 = v1036;
  struct std___UninitDestroyGuard_int____void_* t1039 = this1038;
    int** t1040 = t1039->_M_cur;
    int** c1041 = ((void*)0);
    _Bool c1042 = ((t1040 != c1041)) ? 1 : 0;
    if (c1042) {
      int* t1043 = t1039->_M_first;
      int** t1044 = t1039->_M_cur;
      int* t1045 = *t1044;
      void_std___Destroy_int__(t1043, t1045);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt25__uninitialized_default_1ILb0EE16__uninit_defaultIPiEEvT_S3_
void void_std____uninitialized_default_1_false_____uninit_default_int__(int* v1046, int* v1047) {
bb1048:
  int* __first1049;
  int* __last1050;
  struct std___UninitDestroyGuard_int____void_ __guard1051;
  __first1049 = v1046;
  __last1050 = v1047;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1051, &__first1049);
  if (__cir_exc_active) {
    return;
  }
      while (1) {
        int* t1053 = __first1049;
        int* t1054 = __last1050;
        _Bool c1055 = ((t1053 != t1054)) ? 1 : 0;
        if (!c1055) break;
        int* t1056 = __first1049;
        void_std___Construct_int_(t1056);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1051);
          }
          return;
        }
      for_step1052: ;
        int* t1057 = __first1049;
        int c1058 = 1;
        int* ptr1059 = &(t1057)[c1058];
        __first1049 = ptr1059;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1051);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1051);
      }
      return;
    }
  {
    std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1051);
  }
  return;
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v1060, int* v1061, int* v1062) {
bb1063:
  int* __first1064;
  int* __last1065;
  int* __value1066;
  _Bool __load_outside_loop1067;
  int __val1068;
  __first1064 = v1060;
  __last1065 = v1061;
  __value1066 = v1062;
  _Bool c1069 = 1;
  __load_outside_loop1067 = c1069;
  int* t1070 = __value1066;
  int t1071 = *t1070;
  __val1068 = t1071;
    while (1) {
      int* t1073 = __first1064;
      int* t1074 = __last1065;
      _Bool c1075 = ((t1073 != t1074)) ? 1 : 0;
      if (!c1075) break;
      int t1076 = __val1068;
      int* t1077 = __first1064;
      *t1077 = t1076;
    for_step1072: ;
      int* t1078 = __first1064;
      int c1079 = 1;
      int* ptr1080 = &(t1078)[c1079];
      __first1064 = ptr1080;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v1081, int* v1082, int* v1083) {
bb1084:
  int* __first1085;
  int* __last1086;
  int* __value1087;
  __first1085 = v1081;
  __last1086 = v1082;
  __value1087 = v1083;
  int* t1088 = __first1085;
  int* t1089 = __last1086;
  int* t1090 = __value1087;
  void_std____fill_a1_int___int_(t1088, t1089, t1090);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt4fillIPiiEvT_S1_RKT0_
void void_std__fill_int___int_(int* v1091, int* v1092, int* v1093) {
bb1094:
  int* __first1095;
  int* __last1096;
  int* __value1097;
  __first1095 = v1091;
  __last1096 = v1092;
  __value1097 = v1093;
  int* t1098 = __first1095;
  int* t1099 = __last1096;
  int* t1100 = __value1097;
  void_std____fill_a_int___int_(t1098, t1099, t1100);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt25__uninitialized_default_1ILb1EE16__uninit_defaultIPiEEvT_S3_
void void_std____uninitialized_default_1_true_____uninit_default_int__(int* v1101, int* v1102) {
bb1103:
  int* __first1104;
  int* __last1105;
  int* __val1106;
  __first1104 = v1101;
  __last1105 = v1102;
    int* t1107 = __first1104;
    int* t1108 = __last1105;
    _Bool c1109 = ((t1107 == t1108)) ? 1 : 0;
    if (c1109) {
      return;
    }
  int* t1110 = __first1104;
  __val1106 = t1110;
  int* t1111 = __val1106;
  void_std___Construct_int_(t1111);
  if (__cir_exc_active) {
    return;
  }
    int* t1112 = __first1104;
    int c1113 = 1;
    int* ptr1114 = &(t1112)[c1113];
    __first1104 = ptr1114;
    int* t1115 = __last1105;
    _Bool c1116 = ((ptr1114 != t1115)) ? 1 : 0;
    if (c1116) {
      int* t1117 = __first1104;
      int* t1118 = __last1105;
      int* t1119 = __val1106;
      void_std__fill_int___int_(t1117, t1118, t1119);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt23__uninitialized_defaultIPiEvT_S1_
void void_std____uninitialized_default_int__(int* v1120, int* v1121) {
bb1122:
  int* __first1123;
  int* __last1124;
  _Bool __assignable1125;
  __first1123 = v1120;
  __last1124 = v1121;
    _Bool r1126 = std__is_constant_evaluated();
    if (r1126) {
      int* t1127 = __first1123;
      int* t1128 = __last1124;
      void_std____uninitialized_default_1_false_____uninit_default_int__(t1127, t1128);
      if (__cir_exc_active) {
        return;
      }
      return;
    }
  _Bool c1129 = 1;
  __assignable1125 = c1129;
  int* t1130 = __first1123;
  int* t1131 = __last1124;
  void_std____uninitialized_default_1_true_____uninit_default_int__(t1130, t1131);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt25__uninitialized_default_aIPiiEvT_S1_RSaIT0_E
void void_std____uninitialized_default_a_int___int_(int* v1132, int* v1133, struct std__allocator_int_* v1134) {
bb1135:
  int* __first1136;
  int* __last1137;
  struct std__allocator_int_* unnamed1138;
  __first1136 = v1132;
  __last1137 = v1133;
  unnamed1138 = v1134;
  int* t1139 = __first1136;
  int* t1140 = __last1137;
  void_std____uninitialized_default_int__(t1139, t1140);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb1141:
  unsigned long __retval1142;
  unsigned long c1143 = 4;
  unsigned long r1144 = std____deque_buf_size(c1143);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1142 = r1144;
  unsigned long t1145 = __retval1142;
  return t1145;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v1146) {
bb1147:
  struct std___Deque_base_int__std__allocator_int__* this1148;
  struct std__allocator_int_* __retval1149;
  this1148 = v1146;
  struct std___Deque_base_int__std__allocator_int__* t1150 = this1148;
  struct std__allocator_int_* base1151 = (struct std__allocator_int_*)((char *)&(t1150->_M_impl) + 0);
  __retval1149 = base1151;
  struct std__allocator_int_* t1152 = __retval1149;
  return t1152;
}

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* v1153, struct std___Deque_iterator_int__int____int___* v1154) {
bb1155:
  struct std___Deque_iterator_int__int____int___* __x1156;
  struct std___Deque_iterator_int__int____int___* __y1157;
  _Bool __retval1158;
  __x1156 = v1153;
  __y1157 = v1154;
  struct std___Deque_iterator_int__int____int___* t1159 = __x1156;
  int* t1160 = t1159->_M_cur;
  struct std___Deque_iterator_int__int____int___* t1161 = __y1157;
  int* t1162 = t1161->_M_cur;
  _Bool c1163 = ((t1160 == t1162)) ? 1 : 0;
  __retval1158 = c1163;
  _Bool t1164 = __retval1158;
  return t1164;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v1165) {
bb1166:
  struct std___Deque_iterator_int__int____int___* this1167;
  int* __retval1168;
  this1167 = v1165;
  struct std___Deque_iterator_int__int____int___* t1169 = this1167;
  int* t1170 = t1169->_M_cur;
  __retval1168 = t1170;
  int* t1171 = __retval1168;
  return t1171;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEppEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___2(struct std___Deque_iterator_int__int____int___* v1172) {
bb1173:
  struct std___Deque_iterator_int__int____int___* this1174;
  struct std___Deque_iterator_int__int____int___* __retval1175;
  this1174 = v1172;
  struct std___Deque_iterator_int__int____int___* t1176 = this1174;
  int* t1177 = t1176->_M_cur;
  int c1178 = 1;
  int* ptr1179 = &(t1177)[c1178];
  t1176->_M_cur = ptr1179;
    int* t1180 = t1176->_M_cur;
    int* t1181 = t1176->_M_last;
    _Bool c1182 = ((t1180 == t1181)) ? 1 : 0;
    if (c1182) {
      int** t1183 = t1176->_M_node;
      int c1184 = 1;
      int** ptr1185 = &(t1183)[c1184];
      std___Deque_iterator_int__int___int_____M_set_node(t1176, ptr1185);
      int* t1186 = t1176->_M_first;
      t1176->_M_cur = t1186;
    }
  __retval1175 = t1176;
  struct std___Deque_iterator_int__int____int___* t1187 = __retval1175;
  return t1187;
}

// function: _ZSt8_DestroyISt15_Deque_iteratorIiRiPiEEvT_S4_
void void_std___Destroy_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1188, struct std___Deque_iterator_int__int____int___ v1189) {
bb1190:
  struct std___Deque_iterator_int__int____int___ __first1191;
  struct std___Deque_iterator_int__int____int___ __last1192;
  __first1191 = v1188;
  __last1192 = v1189;
      _Bool r1193 = std____is_constant_evaluated();
      if (r1193) {
          while (1) {
            _Bool r1195 = std__operator__(&__first1191, &__last1192);
            _Bool u1196 = !r1195;
            if (!u1196) break;
            int* r1197 = std___Deque_iterator_int__int___int____operator____const(&__first1191);
            void_std__destroy_at_int_(r1197);
            if (__cir_exc_active) {
              return;
            }
          for_step1194: ;
            struct std___Deque_iterator_int__int____int___* r1198 = std___Deque_iterator_int__int___int____operator___2(&__first1191);
          }
      }
  return;
}

// function: _ZSt8_DestroyISt15_Deque_iteratorIiRiPiEiEvT_S4_RSaIT0_E
void void_std___Destroy_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ v1199, struct std___Deque_iterator_int__int____int___ v1200, struct std__allocator_int_* v1201) {
bb1202:
  struct std___Deque_iterator_int__int____int___ __first1203;
  struct std___Deque_iterator_int__int____int___ __last1204;
  struct std__allocator_int_* unnamed1205;
  struct std___Deque_iterator_int__int____int___ agg_tmp01206;
  struct std___Deque_iterator_int__int____int___ agg_tmp11207;
  __first1203 = v1199;
  __last1204 = v1200;
  unnamed1205 = v1201;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01206, &__first1203);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11207, &__last1204);
  struct std___Deque_iterator_int__int____int___ t1208 = agg_tmp01206;
  struct std___Deque_iterator_int__int____int___ t1209 = agg_tmp11207;
  void_std___Destroy_std___Deque_iterator_int__int___int____(t1208, t1209);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v1210, struct std___Deque_iterator_int__int____int___* v1211) {
bb1212:
  struct std___Deque_iterator_int__int____int___* this1213;
  struct std___Deque_iterator_int__int____int___* __x1214;
  this1213 = v1210;
  __x1214 = v1211;
  struct std___Deque_iterator_int__int____int___* t1215 = this1213;
  struct std___Deque_iterator_int__int____int___* t1216 = __x1214;
  int* t1217 = t1216->_M_cur;
  t1215->_M_cur = t1217;
  struct std___Deque_iterator_int__int____int___* t1218 = __x1214;
  int* t1219 = t1218->_M_first;
  t1215->_M_first = t1219;
  struct std___Deque_iterator_int__int____int___* t1220 = __x1214;
  int* t1221 = t1220->_M_last;
  t1215->_M_last = t1221;
  struct std___Deque_iterator_int__int____int___* t1222 = __x1214;
  int** t1223 = t1222->_M_node;
  t1215->_M_node = t1223;
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ES1_PS1_
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1224, int* v1225, int** v1226) {
bb1227:
  struct std___Deque_iterator_int__int____int___* this1228;
  int* __x1229;
  int** __y1230;
  this1228 = v1224;
  __x1229 = v1225;
  __y1230 = v1226;
  struct std___Deque_iterator_int__int____int___* t1231 = this1228;
  int* t1232 = __x1229;
  t1231->_M_cur = t1232;
  int** t1233 = __y1230;
  int* t1234 = *t1233;
  t1231->_M_first = t1234;
  int** t1235 = __y1230;
  int* t1236 = *t1235;
  unsigned long r1237 = std___Deque_iterator_int__int___int_____S_buffer_size();
  int* ptr1238 = &(t1236)[r1237];
  t1231->_M_last = ptr1238;
  int** t1239 = __y1230;
  t1231->_M_node = t1239;
  return;
}

// function: _ZNSt5dequeIiSaIiEE21_M_default_initializeEv
void std__deque_int__std__allocator_int______M_default_initialize(struct std__deque_int__std__allocator_int__* v1240) {
bb1241:
  struct std__deque_int__std__allocator_int__* this1242;
  int** __cur1243;
  this1242 = v1240;
  struct std__deque_int__std__allocator_int__* t1244 = this1242;
    struct std___Deque_iterator_int__int____int___ agg_tmp01245;
    struct std___Deque_iterator_int__int____int___ agg_tmp11246;
        struct std___Deque_base_int__std__allocator_int__* base1248 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1244 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1249 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1248->_M_impl) + 0);
        int** t1250 = base1249->_M_start._M_node;
        __cur1243 = t1250;
        while (1) {
          int** t1252 = __cur1243;
          struct std___Deque_base_int__std__allocator_int__* base1253 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1244 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1254 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1253->_M_impl) + 0);
          int** t1255 = base1254->_M_finish._M_node;
          _Bool c1256 = ((t1252 < t1255)) ? 1 : 0;
          if (!c1256) break;
          int** t1257 = __cur1243;
          int* t1258 = *t1257;
          int** t1259 = __cur1243;
          int* t1260 = *t1259;
          unsigned long r1261 = std__deque_int__std__allocator_int______S_buffer_size();
          int* ptr1262 = &(t1260)[r1261];
          struct std___Deque_base_int__std__allocator_int__* base1263 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1244 + 0);
          struct std__allocator_int_* r1264 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1263);
          void_std____uninitialized_default_a_int___int_(t1258, ptr1262, r1264);
          if (__cir_exc_active) {
            goto cir_try_dispatch1247;
          }
        for_step1251: ;
          int** t1265 = __cur1243;
          int c1266 = 1;
          int** ptr1267 = &(t1265)[c1266];
          __cur1243 = ptr1267;
        }
      struct std___Deque_base_int__std__allocator_int__* base1268 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1244 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1269 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1268->_M_impl) + 0);
      int* t1270 = base1269->_M_finish._M_first;
      struct std___Deque_base_int__std__allocator_int__* base1271 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1244 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1272 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1271->_M_impl) + 0);
      int* t1273 = base1272->_M_finish._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1274 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1244 + 0);
      struct std__allocator_int_* r1275 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1274);
      void_std____uninitialized_default_a_int___int_(t1270, t1273, r1275);
      if (__cir_exc_active) {
        goto cir_try_dispatch1247;
      }
    cir_try_dispatch1247: ;
    if (__cir_exc_active) {
    {
      int ca_tok1276 = 0;
      void* ca_exn1277 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base1278 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1244 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1279 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1278->_M_impl) + 0);
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01245, &base1279->_M_start);
        int** t1280 = __cur1243;
        int* t1281 = *t1280;
        int** t1282 = __cur1243;
        std___Deque_iterator_int__int___int_____Deque_iterator_2(&agg_tmp11246, t1281, t1282);
        struct std___Deque_base_int__std__allocator_int__* base1283 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1244 + 0);
        struct std__allocator_int_* r1284 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1283);
        struct std___Deque_iterator_int__int____int___ t1285 = agg_tmp01245;
        struct std___Deque_iterator_int__int____int___ t1286 = agg_tmp11246;
        void_std___Destroy_std___Deque_iterator_int__int___int____int_(t1285, t1286, r1284);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          return;
        }
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1287) {
bb1288:
  struct std___Deque_base_int__std__allocator_int__* this1289;
  this1289 = v1287;
  struct std___Deque_base_int__std__allocator_int__* t1290 = this1289;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1291 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1290->_M_impl) + 0);
      int** t1292 = base1291->_M_map;
      _Bool cast1293 = (_Bool)t1292;
      if (cast1293) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1294 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1290->_M_impl) + 0);
        int** t1295 = base1294->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1296 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1290->_M_impl) + 0);
        int** t1297 = base1296->_M_finish._M_node;
        int c1298 = 1;
        int** ptr1299 = &(t1297)[c1298];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1290, t1295, ptr1299);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1300 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1290->_M_impl) + 0);
        int** t1301 = base1300->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1302 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1290->_M_impl) + 0);
        unsigned long t1303 = base1302->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1290, t1301, t1303);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1290->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1304, struct std____new_allocator_int_* v1305) {
bb1306:
  struct std____new_allocator_int_* this1307;
  struct std____new_allocator_int_* unnamed1308;
  this1307 = v1304;
  unnamed1308 = v1305;
  struct std____new_allocator_int_* t1309 = this1307;
  return;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1310, struct std__allocator_int_* v1311) {
bb1312:
  struct std__allocator_int_* this1313;
  struct std__allocator_int_* __a1314;
  this1313 = v1310;
  __a1314 = v1311;
  struct std__allocator_int_* t1315 = this1313;
  struct std____new_allocator_int_* base1316 = (struct std____new_allocator_int_*)((char *)t1315 + 0);
  struct std__allocator_int_* t1317 = __a1314;
  struct std____new_allocator_int_* base1318 = (struct std____new_allocator_int_*)((char *)t1317 + 0);
  std____new_allocator_int_____new_allocator(base1316, base1318);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_3(struct std___Deque_iterator_int__int____int___* v1319) {
bb1320:
  struct std___Deque_iterator_int__int____int___* this1321;
  this1321 = v1319;
  struct std___Deque_iterator_int__int____int___* t1322 = this1321;
  int* c1323 = ((void*)0);
  t1322->_M_cur = c1323;
  int* c1324 = ((void*)0);
  t1322->_M_first = c1324;
  int* c1325 = ((void*)0);
  t1322->_M_last = c1325;
  int** c1326 = ((void*)0);
  t1322->_M_node = c1326;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1327) {
bb1328:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1329;
  this1329 = v1327;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1330 = this1329;
  int** c1331 = ((void*)0);
  t1330->_M_map = c1331;
  unsigned long c1332 = 0;
  t1330->_M_map_size = c1332;
  std___Deque_iterator_int__int___int_____Deque_iterator_3(&t1330->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_3(&t1330->_M_finish);
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1333) {
bb1334:
  struct std____new_allocator_int___* this1335;
  this1335 = v1333;
  struct std____new_allocator_int___* t1336 = this1335;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1337) {
bb1338:
  int* __location1339;
  __location1339 = v1337;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1340, int* v1341) {
bb1342:
  int* __first1343;
  int* __last1344;
  __first1343 = v1340;
  __last1344 = v1341;
      _Bool r1345 = std____is_constant_evaluated();
      if (r1345) {
          while (1) {
            int* t1347 = __first1343;
            int* t1348 = __last1344;
            _Bool c1349 = ((t1347 != t1348)) ? 1 : 0;
            if (!c1349) break;
            int* t1350 = __first1343;
            void_std__destroy_at_int_(t1350);
            if (__cir_exc_active) {
              return;
            }
          for_step1346: ;
            int* t1351 = __first1343;
            int c1352 = 1;
            int* ptr1353 = &(t1351)[c1352];
            __first1343 = ptr1353;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1354, int* v1355, struct std__allocator_int_* v1356) {
bb1357:
  int* __first1358;
  int* __last1359;
  struct std__allocator_int_* unnamed1360;
  __first1358 = v1354;
  __last1359 = v1355;
  unnamed1360 = v1356;
  int* t1361 = __first1358;
  int* t1362 = __last1359;
  void_std___Destroy_int__(t1361, t1362);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v1363, struct std___Deque_iterator_int__int____int___ v1364, struct std___Deque_iterator_int__int____int___ v1365) {
bb1366:
  struct std__deque_int__std__allocator_int__* this1367;
  struct std___Deque_iterator_int__int____int___ __first1368;
  struct std___Deque_iterator_int__int____int___ __last1369;
  this1367 = v1363;
  __first1368 = v1364;
  __last1369 = v1365;
  struct std__deque_int__std__allocator_int__* t1370 = this1367;
    int** __node1371;
    int** t1372 = __first1368._M_node;
    int c1373 = 1;
    int** ptr1374 = &(t1372)[c1373];
    __node1371 = ptr1374;
    while (1) {
      int** t1376 = __node1371;
      int** t1377 = __last1369._M_node;
      _Bool c1378 = ((t1376 < t1377)) ? 1 : 0;
      if (!c1378) break;
      int** t1379 = __node1371;
      int* t1380 = *t1379;
      int** t1381 = __node1371;
      int* t1382 = *t1381;
      unsigned long r1383 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr1384 = &(t1382)[r1383];
      struct std___Deque_base_int__std__allocator_int__* base1385 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1370 + 0);
      struct std__allocator_int_* r1386 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1385);
      void_std___Destroy_int___int_(t1380, ptr1384, r1386);
      if (__cir_exc_active) {
        return;
      }
    for_step1375: ;
      int** t1387 = __node1371;
      int c1388 = 1;
      int** ptr1389 = &(t1387)[c1388];
      __node1371 = ptr1389;
    }
    int** t1390 = __first1368._M_node;
    int** t1391 = __last1369._M_node;
    _Bool c1392 = ((t1390 != t1391)) ? 1 : 0;
    if (c1392) {
      int* t1393 = __first1368._M_cur;
      int* t1394 = __first1368._M_last;
      struct std___Deque_base_int__std__allocator_int__* base1395 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1370 + 0);
      struct std__allocator_int_* r1396 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1395);
      void_std___Destroy_int___int_(t1393, t1394, r1396);
      if (__cir_exc_active) {
        return;
      }
      int* t1397 = __last1369._M_first;
      int* t1398 = __last1369._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1399 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1370 + 0);
      struct std__allocator_int_* r1400 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1399);
      void_std___Destroy_int___int_(t1397, t1398, r1400);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t1401 = __first1368._M_cur;
      int* t1402 = __last1369._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1403 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1370 + 0);
      struct std__allocator_int_* r1404 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1403);
      void_std___Destroy_int___int_(t1401, t1402, r1404);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v1405, struct std___Deque_iterator_int__int____int___ v1406, struct std___Deque_iterator_int__int____int___ v1407, struct std__allocator_int_* v1408) {
bb1409:
  struct std__deque_int__std__allocator_int__* this1410;
  struct std___Deque_iterator_int__int____int___ __first1411;
  struct std___Deque_iterator_int__int____int___ __last1412;
  struct std__allocator_int_* unnamed1413;
  this1410 = v1405;
  __first1411 = v1406;
  __last1412 = v1407;
  unnamed1413 = v1408;
  struct std__deque_int__std__allocator_int__* t1414 = this1410;
    _Bool c1415 = 0;
    if (c1415) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01416;
      struct std___Deque_iterator_int__int____int___ agg_tmp11417;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01416, &__first1411);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11417, &__last1412);
      struct std___Deque_iterator_int__int____int___ t1418 = agg_tmp01416;
      struct std___Deque_iterator_int__int____int___ t1419 = agg_tmp11417;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t1414, t1418, t1419);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v1420) {
bb1421:
  struct std__deque_int__std__allocator_int__* this1422;
  struct std___Deque_iterator_int__int____int___ __retval1423;
  this1422 = v1420;
  struct std__deque_int__std__allocator_int__* t1424 = this1422;
  struct std___Deque_base_int__std__allocator_int__* base1425 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1424 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1426 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1425->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1423, &base1426->_M_start);
  struct std___Deque_iterator_int__int____int___ t1427 = __retval1423;
  return t1427;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v1428) {
bb1429:
  struct std__deque_int__std__allocator_int__* this1430;
  struct std___Deque_iterator_int__int____int___ __retval1431;
  this1430 = v1428;
  struct std__deque_int__std__allocator_int__* t1432 = this1430;
  struct std___Deque_base_int__std__allocator_int__* base1433 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1432 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1434 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1433->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1431, &base1434->_M_finish);
  struct std___Deque_iterator_int__int____int___ t1435 = __retval1431;
  return t1435;
}

