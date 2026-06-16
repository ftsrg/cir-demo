extern void abort(void);
// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_const_char___ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

char _str[14] = "Test string: ";
char _str_1[10] = "(n) in f(";
char _str_2[26] = "Test string: x(n) in f(n)";
char _str_3[36] = "str1 != \"Test string: x(n) in f(n)\"";
char _str_4[124] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_plus_eq_8_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[25] = "basic_string::_M_replace";
char _str_6[24] = "basic_string::_M_create";
char _str_7[29] = "basic_string::_M_replace_aux";
char _str_8[21] = "basic_string::append";
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_length_error(char* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* p0, unsigned long p1, void* p2);
char* std__allocator_char___allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* p0, unsigned long p1);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* p0, char* p1, char* p2);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void __gnu_cxx__char_traits_char___assign_2(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, char* p3, unsigned long p4, unsigned long p5);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___assign(char* p0, unsigned long p1, char p2);
extern void* memset(void* p0, int p1, unsigned long p2);
char* std__char_traits_char___assign(char* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* p0, unsigned long p1, char p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, unsigned long p3, char p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator___2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
int main();
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std____is_constant_evaluated();
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign_2(char* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v0) {
bb1: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2;
  struct std__allocator_char_ ref_tmp03;
  this2 = v0;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t4 = this2;
  char* r5 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t4);
  std__allocator_char___allocator_2(&ref_tmp03);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t4->_M_dataplus, r5, &ref_tmp03);
  {
    std__allocator_char____allocator(&ref_tmp03);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t4);
    unsigned long c6 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t4, c6);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v7) {
bb8: ;
  struct std__allocator_char_* __a9;
  unsigned long __retval10;
  __a9 = v7;
  unsigned long c11 = -1;
  unsigned long c12 = 1;
  unsigned long b13 = c11 / c12;
  __retval10 = b13;
  unsigned long t14 = __retval10;
  return t14;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v15) {
bb16: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this17;
  struct std__allocator_char_* __retval18;
  this17 = v15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t19 = this17;
  struct std__allocator_char_* base20 = (struct std__allocator_char_*)((char *)&(t19->_M_dataplus) + 0);
  __retval18 = base20;
  struct std__allocator_char_* t21 = __retval18;
  return t21;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v22, unsigned long* v23) {
bb24: ;
  unsigned long* __a25;
  unsigned long* __b26;
  unsigned long* __retval27;
  __a25 = v22;
  __b26 = v23;
    unsigned long* t28 = __b26;
    unsigned long t29 = *t28;
    unsigned long* t30 = __a25;
    unsigned long t31 = *t30;
    _Bool c32 = ((t29 < t31)) ? 1 : 0;
    if (c32) {
      unsigned long* t33 = __b26;
      __retval27 = t33;
      unsigned long* t34 = __retval27;
      return t34;
    }
  unsigned long* t35 = __a25;
  __retval27 = t35;
  unsigned long* t36 = __retval27;
  return t36;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v37) {
bb38: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this39;
  unsigned long __retval40;
  unsigned long __diffmax41;
  unsigned long __allocmax42;
  this39 = v37;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t43 = this39;
  unsigned long c44 = 9223372036854775807;
  __diffmax41 = c44;
  struct std__allocator_char_* r45 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t43);
  unsigned long r46 = std__allocator_traits_std__allocator_char_____max_size(r45);
  __allocmax42 = r46;
  unsigned long* r47 = unsigned_long_const__std__min_unsigned_long_(&__diffmax41, &__allocmax42);
  unsigned long t48 = *r47;
  unsigned long c49 = 1;
  unsigned long b50 = t48 - c49;
  __retval40 = b50;
  unsigned long t51 = __retval40;
  return t51;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v52, unsigned long v53, unsigned long v54, char* v55) {
bb56: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this57;
  unsigned long __n158;
  unsigned long __n259;
  char* __s60;
  this57 = v52;
  __n158 = v53;
  __n259 = v54;
  __s60 = v55;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t61 = this57;
    unsigned long r62 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t61);
    unsigned long r63 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t61);
    unsigned long t64 = __n158;
    unsigned long b65 = r63 - t64;
    unsigned long b66 = r62 - b65;
    unsigned long t67 = __n259;
    _Bool c68 = ((b66 < t67)) ? 1 : 0;
    if (c68) {
      char* t69 = __s60;
      std____throw_length_error(t69);
    }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v70) {
bb71: ;
  char* __r72;
  char* __retval73;
  __r72 = v70;
  char* t74 = __r72;
  __retval73 = t74;
  char* t75 = __retval73;
  return t75;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v76) {
bb77: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this78;
  char* __retval79;
  this78 = v76;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t80 = this78;
  char* cast81 = (char*)&(t80->field2._M_local_buf);
  char* r82 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast81);
  __retval79 = r82;
  char* t83 = __retval79;
  return t83;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v84) {
bb85: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this86;
  _Bool __retval87;
  this86 = v84;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t88 = this86;
    char* r89 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t88);
    char* r90 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t88);
    _Bool c91 = ((r89 == r90)) ? 1 : 0;
    if (c91) {
        unsigned long t92 = t88->_M_string_length;
        unsigned long c93 = 15;
        _Bool c94 = ((t92 > c93)) ? 1 : 0;
        if (c94) {
          __builtin_unreachable();
        }
      _Bool c95 = 1;
      __retval87 = c95;
      _Bool t96 = __retval87;
      return t96;
    }
  _Bool c97 = 0;
  __retval87 = c97;
  _Bool t98 = __retval87;
  return t98;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v99) {
bb100: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this101;
  unsigned long __retval102;
  unsigned long __sz103;
  this101 = v99;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t104 = this101;
  _Bool r105 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t104);
  unsigned long ternary106;
  if (r105) {
    unsigned long c107 = 15;
    ternary106 = (unsigned long)c107;
  } else {
    unsigned long t108 = t104->field2._M_allocated_capacity;
    ternary106 = (unsigned long)t108;
  }
  __sz103 = ternary106;
    unsigned long t109 = __sz103;
    unsigned long c110 = 15;
    _Bool c111 = ((t109 < c110)) ? 1 : 0;
    _Bool ternary112;
    if (c111) {
      _Bool c113 = 1;
      ternary112 = (_Bool)c113;
    } else {
      unsigned long t114 = __sz103;
      unsigned long r115 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t104);
      _Bool c116 = ((t114 > r115)) ? 1 : 0;
      ternary112 = (_Bool)c116;
    }
    if (ternary112) {
      __builtin_unreachable();
    }
  unsigned long t117 = __sz103;
  __retval102 = t117;
  unsigned long t118 = __retval102;
  return t118;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v119) {
bb120: ;
  struct std____new_allocator_char_* this121;
  unsigned long __retval122;
  this121 = v119;
  struct std____new_allocator_char_* t123 = this121;
  unsigned long c124 = 9223372036854775807;
  unsigned long c125 = 1;
  unsigned long b126 = c124 / c125;
  __retval122 = b126;
  unsigned long t127 = __retval122;
  return t127;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v128, unsigned long v129, void* v130) {
bb131: ;
  struct std____new_allocator_char_* this132;
  unsigned long __n133;
  void* unnamed134;
  char* __retval135;
  this132 = v128;
  __n133 = v129;
  unnamed134 = v130;
  struct std____new_allocator_char_* t136 = this132;
    unsigned long t137 = __n133;
    unsigned long r138 = std____new_allocator_char____M_max_size___const(t136);
    _Bool c139 = ((t137 > r138)) ? 1 : 0;
    if (c139) {
        unsigned long t140 = __n133;
        unsigned long c141 = -1;
        unsigned long c142 = 1;
        unsigned long b143 = c141 / c142;
        _Bool c144 = ((t140 > b143)) ? 1 : 0;
        if (c144) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c145 = 1;
    unsigned long c146 = 16;
    _Bool c147 = ((c145 > c146)) ? 1 : 0;
    if (c147) {
      unsigned long __al148;
      unsigned long c149 = 1;
      __al148 = c149;
      unsigned long t150 = __n133;
      unsigned long c151 = 1;
      unsigned long b152 = t150 * c151;
      unsigned long t153 = __al148;
      void* r154 = operator_new_2(b152, t153);
      char* cast155 = (char*)r154;
      __retval135 = cast155;
      char* t156 = __retval135;
      return t156;
    }
  unsigned long t157 = __n133;
  unsigned long c158 = 1;
  unsigned long b159 = t157 * c158;
  void* r160 = operator_new(b159);
  char* cast161 = (char*)r160;
  __retval135 = cast161;
  char* t162 = __retval135;
  return t162;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v163, unsigned long v164) {
bb165: ;
  struct std__allocator_char_* this166;
  unsigned long __n167;
  char* __retval168;
  this166 = v163;
  __n167 = v164;
  struct std__allocator_char_* t169 = this166;
    _Bool r170 = std____is_constant_evaluated();
    if (r170) {
        unsigned long t171 = __n167;
        unsigned long c172 = 1;
        unsigned long ovr173;
        _Bool ovf174 = __builtin_mul_overflow(t171, c172, &ovr173);
        __n167 = ovr173;
        if (ovf174) {
          std____throw_bad_array_new_length();
        }
      unsigned long t175 = __n167;
      void* r176 = operator_new(t175);
      char* cast177 = (char*)r176;
      __retval168 = cast177;
      char* t178 = __retval168;
      return t178;
    }
  struct std____new_allocator_char_* base179 = (struct std____new_allocator_char_*)((char *)t169 + 0);
  unsigned long t180 = __n167;
  void* c181 = ((void*)0);
  char* r182 = std____new_allocator_char___allocate(base179, t180, c181);
  __retval168 = r182;
  char* t183 = __retval168;
  return t183;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v184, unsigned long v185) {
bb186: ;
  struct std__allocator_char_* __a187;
  unsigned long __n188;
  char* __retval189;
  __a187 = v184;
  __n188 = v185;
  struct std__allocator_char_* t190 = __a187;
  unsigned long t191 = __n188;
  char* r192 = std__allocator_char___allocate(t190, t191);
  __retval189 = r192;
  char* t193 = __retval189;
  return t193;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v194, unsigned long v195) {
bb196: ;
  struct std__allocator_char_* __a197;
  unsigned long __n198;
  char* __retval199;
  char* __p200;
  __a197 = v194;
  __n198 = v195;
  struct std__allocator_char_* t201 = __a197;
  unsigned long t202 = __n198;
  char* r203 = std__allocator_traits_std__allocator_char_____allocate(t201, t202);
  __p200 = r203;
  char* t204 = __p200;
  __retval199 = t204;
  char* t205 = __retval199;
  return t205;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v206) {
bb207: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this208;
  struct std__allocator_char_* __retval209;
  this208 = v206;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t210 = this208;
  struct std__allocator_char_* base211 = (struct std__allocator_char_*)((char *)&(t210->_M_dataplus) + 0);
  __retval209 = base211;
  struct std__allocator_char_* t212 = __retval209;
  return t212;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v213, char* v214, unsigned long v215) {
bb216: ;
  char* __s1217;
  char* __s2218;
  unsigned long __n219;
  char* __retval220;
  __s1217 = v213;
  __s2218 = v214;
  __n219 = v215;
    unsigned long t221 = __n219;
    unsigned long c222 = 0;
    _Bool c223 = ((t221 == c222)) ? 1 : 0;
    if (c223) {
      char* t224 = __s1217;
      __retval220 = t224;
      char* t225 = __retval220;
      return t225;
    }
    _Bool r226 = std____is_constant_evaluated();
    if (r226) {
        unsigned long __i227;
        unsigned long c228 = 0;
        __i227 = c228;
        while (1) {
          unsigned long t230 = __i227;
          unsigned long t231 = __n219;
          _Bool c232 = ((t230 < t231)) ? 1 : 0;
          if (!c232) break;
          char* t233 = __s1217;
          unsigned long t234 = __i227;
          char* ptr235 = &(t233)[t234];
          unsigned long t236 = __i227;
          char* t237 = __s2218;
          char* ptr238 = &(t237)[t236];
          char* r239 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr235, ptr238);
        for_step229: ;
          unsigned long t240 = __i227;
          unsigned long u241 = t240 + 1;
          __i227 = u241;
        }
      char* t242 = __s1217;
      __retval220 = t242;
      char* t243 = __retval220;
      return t243;
    }
  char* t244 = __s1217;
  void* cast245 = (void*)t244;
  char* t246 = __s2218;
  void* cast247 = (void*)t246;
  unsigned long t248 = __n219;
  unsigned long c249 = 1;
  unsigned long b250 = t248 * c249;
  void* r251 = memcpy(cast245, cast247, b250);
  char* t252 = __s1217;
  __retval220 = t252;
  char* t253 = __retval220;
  return t253;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v254, char* v255, unsigned long v256) {
bb257: ;
  char* __s1258;
  char* __s2259;
  unsigned long __n260;
  char* __retval261;
  __s1258 = v254;
  __s2259 = v255;
  __n260 = v256;
    unsigned long t262 = __n260;
    unsigned long c263 = 0;
    _Bool c264 = ((t262 == c263)) ? 1 : 0;
    if (c264) {
      char* t265 = __s1258;
      __retval261 = t265;
      char* t266 = __retval261;
      return t266;
    }
    _Bool r267 = std____is_constant_evaluated();
    if (r267) {
      char* t268 = __s1258;
      char* t269 = __s2259;
      unsigned long t270 = __n260;
      char* r271 = __gnu_cxx__char_traits_char___copy(t268, t269, t270);
      __retval261 = r271;
      char* t272 = __retval261;
      return t272;
    }
  char* t273 = __s1258;
  void* cast274 = (void*)t273;
  char* t275 = __s2259;
  void* cast276 = (void*)t275;
  unsigned long t277 = __n260;
  void* r278 = memcpy(cast274, cast276, t277);
  char* cast279 = (char*)r278;
  __retval261 = cast279;
  char* t280 = __retval261;
  return t280;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v281, char* v282, unsigned long v283) {
bb284: ;
  char* __d285;
  char* __s286;
  unsigned long __n287;
  __d285 = v281;
  __s286 = v282;
  __n287 = v283;
    unsigned long t288 = __n287;
    unsigned long c289 = 1;
    _Bool c290 = ((t288 == c289)) ? 1 : 0;
    if (c290) {
      char* t291 = __d285;
      char* t292 = __s286;
      std__char_traits_char___assign_2(t291, t292);
    } else {
      char* t293 = __d285;
      char* t294 = __s286;
      unsigned long t295 = __n287;
      char* r296 = std__char_traits_char___copy(t293, t294, t295);
    }
  return;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v297, char* v298, unsigned long v299) {
bb300: ;
  struct std____new_allocator_char_* this301;
  char* __p302;
  unsigned long __n303;
  this301 = v297;
  __p302 = v298;
  __n303 = v299;
  struct std____new_allocator_char_* t304 = this301;
    unsigned long c305 = 1;
    unsigned long c306 = 16;
    _Bool c307 = ((c305 > c306)) ? 1 : 0;
    if (c307) {
      char* t308 = __p302;
      void* cast309 = (void*)t308;
      unsigned long t310 = __n303;
      unsigned long c311 = 1;
      unsigned long b312 = t310 * c311;
      unsigned long c313 = 1;
      operator_delete_3(cast309, b312, c313);
      return;
    }
  char* t314 = __p302;
  void* cast315 = (void*)t314;
  unsigned long t316 = __n303;
  unsigned long c317 = 1;
  unsigned long b318 = t316 * c317;
  operator_delete_2(cast315, b318);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v319, char* v320, unsigned long v321) {
bb322: ;
  struct std__allocator_char_* this323;
  char* __p324;
  unsigned long __n325;
  this323 = v319;
  __p324 = v320;
  __n325 = v321;
  struct std__allocator_char_* t326 = this323;
    _Bool r327 = std____is_constant_evaluated();
    if (r327) {
      char* t328 = __p324;
      void* cast329 = (void*)t328;
      operator_delete(cast329);
      return;
    }
  struct std____new_allocator_char_* base330 = (struct std____new_allocator_char_*)((char *)t326 + 0);
  char* t331 = __p324;
  unsigned long t332 = __n325;
  std____new_allocator_char___deallocate(base330, t331, t332);
  return;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v333, char* v334, char* v335) {
bb336: ;
  struct std__less_const_char___* this337;
  char* __x338;
  char* __y339;
  _Bool __retval340;
  this337 = v333;
  __x338 = v334;
  __y339 = v335;
  struct std__less_const_char___* t341 = this337;
    _Bool r342 = std____is_constant_evaluated();
    if (r342) {
      char* t343 = __x338;
      char* t344 = __y339;
      _Bool c345 = ((t343 < t344)) ? 1 : 0;
      __retval340 = c345;
      _Bool t346 = __retval340;
      return t346;
    }
  char* t347 = __x338;
  unsigned long cast348 = (unsigned long)t347;
  char* t349 = __y339;
  unsigned long cast350 = (unsigned long)t349;
  _Bool c351 = ((cast348 < cast350)) ? 1 : 0;
  __retval340 = c351;
  _Bool t352 = __retval340;
  return t352;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v353, char* v354) {
bb355: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this356;
  char* __s357;
  _Bool __retval358;
  struct std__less_const_char___ ref_tmp0359;
  this356 = v353;
  __s357 = v354;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t360 = this356;
  char* t361 = __s357;
  char* r362 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t360);
  _Bool r363 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0359, t361, r362);
  _Bool ternary364;
  if (r363) {
    _Bool c365 = 1;
    ternary364 = (_Bool)c365;
  } else {
    struct std__less_const_char___ ref_tmp1366;
    char* r367 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t360);
    unsigned long r368 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t360);
    char* ptr369 = &(r367)[r368];
    char* t370 = __s357;
    _Bool r371 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1366, ptr369, t370);
    ternary364 = (_Bool)r371;
  }
  __retval358 = ternary364;
  _Bool t372 = __retval358;
  return t372;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign_2(char* v373, char* v374) {
bb375: ;
  char* __c1376;
  char* __c2377;
  __c1376 = v373;
  __c2377 = v374;
    _Bool r378 = std____is_constant_evaluated();
    if (r378) {
      char* t379 = __c1376;
      char* t380 = __c2377;
      char* r381 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t379, t380);
    } else {
      char* t382 = __c2377;
      char t383 = *t382;
      char* t384 = __c1376;
      *t384 = t383;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v385, char* v386, unsigned long v387) {
bb388: ;
  char* __s1389;
  char* __s2390;
  unsigned long __n391;
  char* __retval392;
  __s1389 = v385;
  __s2390 = v386;
  __n391 = v387;
    unsigned long t393 = __n391;
    unsigned long c394 = 0;
    _Bool c395 = ((t393 == c394)) ? 1 : 0;
    if (c395) {
      char* t396 = __s1389;
      __retval392 = t396;
      char* t397 = __retval392;
      return t397;
    }
    _Bool r398 = std____is_constant_evaluated();
    if (r398) {
        char* t399 = __s2390;
        char* t400 = __s1389;
        _Bool c401 = ((t399 < t400)) ? 1 : 0;
        _Bool isconst402 = 0;
        _Bool ternary403;
        if (isconst402) {
          char* t404 = __s1389;
          char* t405 = __s2390;
          _Bool c406 = ((t404 > t405)) ? 1 : 0;
          ternary403 = (_Bool)c406;
        } else {
          _Bool c407 = 0;
          ternary403 = (_Bool)c407;
        }
        _Bool ternary408;
        if (ternary403) {
          char* t409 = __s1389;
          char* t410 = __s2390;
          unsigned long t411 = __n391;
          char* ptr412 = &(t410)[t411];
          _Bool c413 = ((t409 < ptr412)) ? 1 : 0;
          ternary408 = (_Bool)c413;
        } else {
          _Bool c414 = 0;
          ternary408 = (_Bool)c414;
        }
        if (ternary408) {
            do {
                unsigned long t415 = __n391;
                unsigned long u416 = t415 - 1;
                __n391 = u416;
                unsigned long t417 = __n391;
                char* t418 = __s1389;
                char* ptr419 = &(t418)[t417];
                unsigned long t420 = __n391;
                char* t421 = __s2390;
                char* ptr422 = &(t421)[t420];
                __gnu_cxx__char_traits_char___assign_2(ptr419, ptr422);
              unsigned long t423 = __n391;
              unsigned long c424 = 0;
              _Bool c425 = ((t423 > c424)) ? 1 : 0;
              if (!c425) break;
            } while (1);
        } else {
          char* t426 = __s1389;
          char* t427 = __s2390;
          unsigned long t428 = __n391;
          char* r429 = __gnu_cxx__char_traits_char___copy(t426, t427, t428);
        }
      char* t430 = __s1389;
      __retval392 = t430;
      char* t431 = __retval392;
      return t431;
    }
  char* t432 = __s1389;
  void* cast433 = (void*)t432;
  char* t434 = __s2390;
  void* cast435 = (void*)t434;
  unsigned long t436 = __n391;
  unsigned long c437 = 1;
  unsigned long b438 = t436 * c437;
  void* r439 = memmove(cast433, cast435, b438);
  char* t440 = __s1389;
  __retval392 = t440;
  char* t441 = __retval392;
  return t441;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v442, char* v443, unsigned long v444) {
bb445: ;
  char* __s1446;
  char* __s2447;
  unsigned long __n448;
  char* __retval449;
  __s1446 = v442;
  __s2447 = v443;
  __n448 = v444;
    unsigned long t450 = __n448;
    unsigned long c451 = 0;
    _Bool c452 = ((t450 == c451)) ? 1 : 0;
    if (c452) {
      char* t453 = __s1446;
      __retval449 = t453;
      char* t454 = __retval449;
      return t454;
    }
    _Bool r455 = std____is_constant_evaluated();
    if (r455) {
      char* t456 = __s1446;
      char* t457 = __s2447;
      unsigned long t458 = __n448;
      char* r459 = __gnu_cxx__char_traits_char___move(t456, t457, t458);
      __retval449 = r459;
      char* t460 = __retval449;
      return t460;
    }
  char* t461 = __s1446;
  void* cast462 = (void*)t461;
  char* t463 = __s2447;
  void* cast464 = (void*)t463;
  unsigned long t465 = __n448;
  void* r466 = memmove(cast462, cast464, t465);
  char* cast467 = (char*)r466;
  __retval449 = cast467;
  char* t468 = __retval449;
  return t468;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v469, char* v470, unsigned long v471) {
bb472: ;
  char* __d473;
  char* __s474;
  unsigned long __n475;
  __d473 = v469;
  __s474 = v470;
  __n475 = v471;
    unsigned long t476 = __n475;
    unsigned long c477 = 1;
    _Bool c478 = ((t476 == c477)) ? 1 : 0;
    if (c478) {
      char* t479 = __d473;
      char* t480 = __s474;
      std__char_traits_char___assign_2(t479, t480);
    } else {
      char* t481 = __d473;
      char* t482 = __s474;
      unsigned long t483 = __n475;
      char* r484 = std__char_traits_char___move(t481, t482, t483);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v485, char* v486, unsigned long v487, char* v488, unsigned long v489, unsigned long v490) {
bb491: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this492;
  char* __p493;
  unsigned long __len1494;
  char* __s495;
  unsigned long __len2496;
  unsigned long __how_much497;
  this492 = v485;
  __p493 = v486;
  __len1494 = v487;
  __s495 = v488;
  __len2496 = v489;
  __how_much497 = v490;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t498 = this492;
    unsigned long t499 = __len2496;
    _Bool cast500 = (_Bool)t499;
    _Bool ternary501;
    if (cast500) {
      unsigned long t502 = __len2496;
      unsigned long t503 = __len1494;
      _Bool c504 = ((t502 <= t503)) ? 1 : 0;
      ternary501 = (_Bool)c504;
    } else {
      _Bool c505 = 0;
      ternary501 = (_Bool)c505;
    }
    if (ternary501) {
      char* t506 = __p493;
      char* t507 = __s495;
      unsigned long t508 = __len2496;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t506, t507, t508);
    }
    unsigned long t509 = __how_much497;
    _Bool cast510 = (_Bool)t509;
    _Bool ternary511;
    if (cast510) {
      unsigned long t512 = __len1494;
      unsigned long t513 = __len2496;
      _Bool c514 = ((t512 != t513)) ? 1 : 0;
      ternary511 = (_Bool)c514;
    } else {
      _Bool c515 = 0;
      ternary511 = (_Bool)c515;
    }
    if (ternary511) {
      char* t516 = __p493;
      unsigned long t517 = __len2496;
      char* ptr518 = &(t516)[t517];
      char* t519 = __p493;
      unsigned long t520 = __len1494;
      char* ptr521 = &(t519)[t520];
      unsigned long t522 = __how_much497;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr518, ptr521, t522);
    }
    unsigned long t523 = __len2496;
    unsigned long t524 = __len1494;
    _Bool c525 = ((t523 > t524)) ? 1 : 0;
    if (c525) {
        char* t526 = __s495;
        unsigned long t527 = __len2496;
        char* ptr528 = &(t526)[t527];
        char* t529 = __p493;
        unsigned long t530 = __len1494;
        char* ptr531 = &(t529)[t530];
        _Bool c532 = ((ptr528 <= ptr531)) ? 1 : 0;
        if (c532) {
          char* t533 = __p493;
          char* t534 = __s495;
          unsigned long t535 = __len2496;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t533, t534, t535);
        } else {
            char* t536 = __s495;
            char* t537 = __p493;
            unsigned long t538 = __len1494;
            char* ptr539 = &(t537)[t538];
            _Bool c540 = ((t536 >= ptr539)) ? 1 : 0;
            if (c540) {
              unsigned long __poff541;
              char* t542 = __s495;
              char* t543 = __p493;
              long diff544 = t542 - t543;
              unsigned long cast545 = (unsigned long)diff544;
              unsigned long t546 = __len2496;
              unsigned long t547 = __len1494;
              unsigned long b548 = t546 - t547;
              unsigned long b549 = cast545 + b548;
              __poff541 = b549;
              char* t550 = __p493;
              char* t551 = __p493;
              unsigned long t552 = __poff541;
              char* ptr553 = &(t551)[t552];
              unsigned long t554 = __len2496;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t550, ptr553, t554);
            } else {
              unsigned long __nleft555;
              char* t556 = __p493;
              unsigned long t557 = __len1494;
              char* ptr558 = &(t556)[t557];
              char* t559 = __s495;
              long diff560 = ptr558 - t559;
              unsigned long cast561 = (unsigned long)diff560;
              __nleft555 = cast561;
              char* t562 = __p493;
              char* t563 = __s495;
              unsigned long t564 = __nleft555;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t562, t563, t564);
              char* t565 = __p493;
              unsigned long t566 = __nleft555;
              char* ptr567 = &(t565)[t566];
              char* t568 = __p493;
              unsigned long t569 = __len2496;
              char* ptr570 = &(t568)[t569];
              unsigned long t571 = __len2496;
              unsigned long t572 = __nleft555;
              unsigned long b573 = t571 - t572;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr567, ptr570, b573);
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v574) {
bb575: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this576;
  unsigned long __retval577;
  this576 = v574;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t578 = this576;
  unsigned long r579 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t578);
  __retval577 = r579;
  unsigned long t580 = __retval577;
  return t580;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v581, unsigned long* v582, unsigned long v583) {
bb584: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this585;
  unsigned long* __capacity586;
  unsigned long __old_capacity587;
  char* __retval588;
  this585 = v581;
  __capacity586 = v582;
  __old_capacity587 = v583;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t589 = this585;
    unsigned long* t590 = __capacity586;
    unsigned long t591 = *t590;
    unsigned long r592 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t589);
    _Bool c593 = ((t591 > r592)) ? 1 : 0;
    if (c593) {
      char* cast594 = (char*)&(_str_6);
      std____throw_length_error(cast594);
    }
    unsigned long* t595 = __capacity586;
    unsigned long t596 = *t595;
    unsigned long t597 = __old_capacity587;
    _Bool c598 = ((t596 > t597)) ? 1 : 0;
    _Bool ternary599;
    if (c598) {
      unsigned long* t600 = __capacity586;
      unsigned long t601 = *t600;
      unsigned long c602 = 2;
      unsigned long t603 = __old_capacity587;
      unsigned long b604 = c602 * t603;
      _Bool c605 = ((t601 < b604)) ? 1 : 0;
      ternary599 = (_Bool)c605;
    } else {
      _Bool c606 = 0;
      ternary599 = (_Bool)c606;
    }
    if (ternary599) {
      unsigned long c607 = 2;
      unsigned long t608 = __old_capacity587;
      unsigned long b609 = c607 * t608;
      unsigned long* t610 = __capacity586;
      *t610 = b609;
        unsigned long* t611 = __capacity586;
        unsigned long t612 = *t611;
        unsigned long r613 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t589);
        _Bool c614 = ((t612 > r613)) ? 1 : 0;
        if (c614) {
          unsigned long r615 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t589);
          unsigned long* t616 = __capacity586;
          *t616 = r615;
        }
    }
  struct std__allocator_char_* r617 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t589);
  unsigned long* t618 = __capacity586;
  unsigned long t619 = *t618;
  unsigned long c620 = 1;
  unsigned long b621 = t619 + c620;
  char* r622 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r617, b621);
  __retval588 = r622;
  char* t623 = __retval588;
  return t623;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v624, char* v625, unsigned long v626) {
bb627: ;
  struct std__allocator_char_* __a628;
  char* __p629;
  unsigned long __n630;
  __a628 = v624;
  __p629 = v625;
  __n630 = v626;
  struct std__allocator_char_* t631 = __a628;
  char* t632 = __p629;
  unsigned long t633 = __n630;
  std__allocator_char___deallocate(t631, t632, t633);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v634, unsigned long v635) {
bb636: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this637;
  unsigned long __size638;
  this637 = v634;
  __size638 = v635;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t639 = this637;
  struct std__allocator_char_* r640 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t639);
  char* r641 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t639);
  unsigned long t642 = __size638;
  unsigned long c643 = 1;
  unsigned long b644 = t642 + c643;
  std__allocator_traits_std__allocator_char_____deallocate(r640, r641, b644);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v645) {
bb646: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this647;
  this647 = v645;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t648 = this647;
    _Bool r649 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t648);
    _Bool u650 = !r649;
    if (u650) {
      unsigned long t651 = t648->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t648, t651);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v652, char* v653) {
bb654: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this655;
  char* __p656;
  this655 = v652;
  __p656 = v653;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t657 = this655;
  char* t658 = __p656;
  t657->_M_dataplus._M_p = t658;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v659, unsigned long v660) {
bb661: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this662;
  unsigned long __capacity663;
  this662 = v659;
  __capacity663 = v660;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t664 = this662;
  unsigned long t665 = __capacity663;
  t664->field2._M_allocated_capacity = t665;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v666, unsigned long v667, unsigned long v668, char* v669, unsigned long v670) {
bb671: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this672;
  unsigned long __pos673;
  unsigned long __len1674;
  char* __s675;
  unsigned long __len2676;
  unsigned long __how_much677;
  unsigned long __new_capacity678;
  char* __r679;
  this672 = v666;
  __pos673 = v667;
  __len1674 = v668;
  __s675 = v669;
  __len2676 = v670;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t680 = this672;
  unsigned long r681 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t680);
  unsigned long t682 = __pos673;
  unsigned long b683 = r681 - t682;
  unsigned long t684 = __len1674;
  unsigned long b685 = b683 - t684;
  __how_much677 = b685;
  unsigned long r686 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t680);
  unsigned long t687 = __len2676;
  unsigned long b688 = r686 + t687;
  unsigned long t689 = __len1674;
  unsigned long b690 = b688 - t689;
  __new_capacity678 = b690;
  unsigned long r691 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t680);
  char* r692 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t680, &__new_capacity678, r691);
  __r679 = r692;
    unsigned long t693 = __pos673;
    _Bool cast694 = (_Bool)t693;
    if (cast694) {
      char* t695 = __r679;
      char* r696 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t680);
      unsigned long t697 = __pos673;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t695, r696, t697);
    }
    char* t698 = __s675;
    _Bool cast699 = (_Bool)t698;
    _Bool ternary700;
    if (cast699) {
      unsigned long t701 = __len2676;
      _Bool cast702 = (_Bool)t701;
      ternary700 = (_Bool)cast702;
    } else {
      _Bool c703 = 0;
      ternary700 = (_Bool)c703;
    }
    if (ternary700) {
      char* t704 = __r679;
      unsigned long t705 = __pos673;
      char* ptr706 = &(t704)[t705];
      char* t707 = __s675;
      unsigned long t708 = __len2676;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr706, t707, t708);
    }
    unsigned long t709 = __how_much677;
    _Bool cast710 = (_Bool)t709;
    if (cast710) {
      char* t711 = __r679;
      unsigned long t712 = __pos673;
      char* ptr713 = &(t711)[t712];
      unsigned long t714 = __len2676;
      char* ptr715 = &(ptr713)[t714];
      char* r716 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t680);
      unsigned long t717 = __pos673;
      char* ptr718 = &(r716)[t717];
      unsigned long t719 = __len1674;
      char* ptr720 = &(ptr718)[t719];
      unsigned long t721 = __how_much677;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr715, ptr720, t721);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t680);
  char* t722 = __r679;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t680, t722);
  unsigned long t723 = __new_capacity678;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t680, t723);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v724, unsigned long v725, unsigned long v726, char* v727, unsigned long v728) {
bb729: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this730;
  unsigned long __pos731;
  unsigned long __len1732;
  char* __s733;
  unsigned long __len2734;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval735;
  unsigned long __old_size736;
  unsigned long __new_size737;
  this730 = v724;
  __pos731 = v725;
  __len1732 = v726;
  __s733 = v727;
  __len2734 = v728;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t738 = this730;
  unsigned long t739 = __len1732;
  unsigned long t740 = __len2734;
  char* cast741 = (char*)&(_str_5);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t738, t739, t740, cast741);
  unsigned long r742 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t738);
  __old_size736 = r742;
  unsigned long t743 = __old_size736;
  unsigned long t744 = __len2734;
  unsigned long b745 = t743 + t744;
  unsigned long t746 = __len1732;
  unsigned long b747 = b745 - t746;
  __new_size737 = b747;
    unsigned long t748 = __new_size737;
    unsigned long r749 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t738);
    _Bool c750 = ((t748 <= r749)) ? 1 : 0;
    if (c750) {
      char* __p751;
      unsigned long __how_much752;
      char* r753 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t738);
      unsigned long t754 = __pos731;
      char* ptr755 = &(r753)[t754];
      __p751 = ptr755;
      unsigned long t756 = __old_size736;
      unsigned long t757 = __pos731;
      unsigned long b758 = t756 - t757;
      unsigned long t759 = __len1732;
      unsigned long b760 = b758 - t759;
      __how_much752 = b760;
        _Bool r761 = std__is_constant_evaluated();
        if (r761) {
          char* __newp762;
          struct std__allocator_char_* r763 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t738);
          unsigned long t764 = __new_size737;
          char* r765 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r763, t764);
          __newp762 = r765;
          char* t766 = __newp762;
          char* r767 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t738);
          unsigned long t768 = __pos731;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t766, r767, t768);
          char* t769 = __newp762;
          unsigned long t770 = __pos731;
          char* ptr771 = &(t769)[t770];
          char* t772 = __s733;
          unsigned long t773 = __len2734;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr771, t772, t773);
          char* t774 = __newp762;
          unsigned long t775 = __pos731;
          char* ptr776 = &(t774)[t775];
          unsigned long t777 = __len2734;
          char* ptr778 = &(ptr776)[t777];
          char* t779 = __p751;
          unsigned long t780 = __len1732;
          char* ptr781 = &(t779)[t780];
          unsigned long t782 = __how_much752;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr778, ptr781, t782);
          char* r783 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t738);
          char* t784 = __newp762;
          unsigned long t785 = __new_size737;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r783, t784, t785);
          struct std__allocator_char_* r786 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t738);
          char* t787 = __newp762;
          unsigned long t788 = __new_size737;
          std__allocator_char___deallocate(r786, t787, t788);
        } else {
            char* t789 = __s733;
            _Bool r790 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t738, t789);
            if (r790) {
                unsigned long t791 = __how_much752;
                _Bool cast792 = (_Bool)t791;
                _Bool ternary793;
                if (cast792) {
                  unsigned long t794 = __len1732;
                  unsigned long t795 = __len2734;
                  _Bool c796 = ((t794 != t795)) ? 1 : 0;
                  ternary793 = (_Bool)c796;
                } else {
                  _Bool c797 = 0;
                  ternary793 = (_Bool)c797;
                }
                if (ternary793) {
                  char* t798 = __p751;
                  unsigned long t799 = __len2734;
                  char* ptr800 = &(t798)[t799];
                  char* t801 = __p751;
                  unsigned long t802 = __len1732;
                  char* ptr803 = &(t801)[t802];
                  unsigned long t804 = __how_much752;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr800, ptr803, t804);
                }
                unsigned long t805 = __len2734;
                _Bool cast806 = (_Bool)t805;
                if (cast806) {
                  char* t807 = __p751;
                  char* t808 = __s733;
                  unsigned long t809 = __len2734;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t807, t808, t809);
                }
            } else {
              char* t810 = __p751;
              unsigned long t811 = __len1732;
              char* t812 = __s733;
              unsigned long t813 = __len2734;
              unsigned long t814 = __how_much752;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t738, t810, t811, t812, t813, t814);
            }
        }
    } else {
      unsigned long t815 = __pos731;
      unsigned long t816 = __len1732;
      char* t817 = __s733;
      unsigned long t818 = __len2734;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t738, t815, t816, t817, t818);
    }
  unsigned long t819 = __new_size737;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t738, t819);
  __retval735 = t738;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t820 = __retval735;
  return t820;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v821) {
bb822: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this823;
  unsigned long __retval824;
  unsigned long __sz825;
  this823 = v821;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t826 = this823;
  unsigned long t827 = t826->_M_string_length;
  __sz825 = t827;
    unsigned long t828 = __sz825;
    unsigned long r829 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t826);
    _Bool c830 = ((t828 > r829)) ? 1 : 0;
    if (c830) {
      __builtin_unreachable();
    }
  unsigned long t831 = __sz825;
  __retval824 = t831;
  unsigned long t832 = __retval824;
  return t832;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v833, char* v834) {
bb835: ;
  char* __c1836;
  char* __c2837;
  _Bool __retval838;
  __c1836 = v833;
  __c2837 = v834;
  char* t839 = __c1836;
  char t840 = *t839;
  int cast841 = (int)t840;
  char* t842 = __c2837;
  char t843 = *t842;
  int cast844 = (int)t843;
  _Bool c845 = ((cast841 == cast844)) ? 1 : 0;
  __retval838 = c845;
  _Bool t846 = __retval838;
  return t846;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v847) {
bb848: ;
  char* __p849;
  unsigned long __retval850;
  unsigned long __i851;
  __p849 = v847;
  unsigned long c852 = 0;
  __i851 = c852;
    char ref_tmp0853;
    while (1) {
      unsigned long t854 = __i851;
      char* t855 = __p849;
      char* ptr856 = &(t855)[t854];
      char c857 = 0;
      ref_tmp0853 = c857;
      _Bool r858 = __gnu_cxx__char_traits_char___eq(ptr856, &ref_tmp0853);
      _Bool u859 = !r858;
      if (!u859) break;
      unsigned long t860 = __i851;
      unsigned long u861 = t860 + 1;
      __i851 = u861;
    }
  unsigned long t862 = __i851;
  __retval850 = t862;
  unsigned long t863 = __retval850;
  return t863;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v864) {
bb865: ;
  char* __s866;
  unsigned long __retval867;
  __s866 = v864;
    _Bool r868 = std____is_constant_evaluated();
    if (r868) {
      char* t869 = __s866;
      unsigned long r870 = __gnu_cxx__char_traits_char___length(t869);
      __retval867 = r870;
      unsigned long t871 = __retval867;
      return t871;
    }
  char* t872 = __s866;
  unsigned long r873 = strlen(t872);
  __retval867 = r873;
  unsigned long t874 = __retval867;
  return t874;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v875, char* v876) {
bb877: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this878;
  char* __s879;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval880;
  this878 = v875;
  __s879 = v876;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t881 = this878;
  unsigned long c882 = 0;
  unsigned long r883 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t881);
  char* t884 = __s879;
  char* t885 = __s879;
  unsigned long r886 = std__char_traits_char___length(t885);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r887 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t881, c882, r883, t884, r886);
  __retval880 = r887;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t888 = __retval880;
  return t888;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v889, char* v890) {
bb891: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this892;
  char* __s893;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval894;
  this892 = v889;
  __s893 = v890;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t895 = this892;
  char* t896 = __s893;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r897 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(t895, t896);
  __retval894 = r897;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t898 = __retval894;
  return t898;
}

// function: _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* v899, char* v900) {
bb901: ;
  char* __location902;
  char* __args903;
  char* __retval904;
  void* __loc905;
  __location902 = v899;
  __args903 = v900;
  char* t906 = __location902;
  void* cast907 = (void*)t906;
  __loc905 = cast907;
    void* t908 = __loc905;
    char* cast909 = (char*)t908;
    char* t910 = __args903;
    char t911 = *t910;
    *cast909 = t911;
    __retval904 = cast909;
    char* t912 = __retval904;
    return t912;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignEPcmc
char* __gnu_cxx__char_traits_char___assign(char* v913, unsigned long v914, char v915) {
bb916: ;
  char* __s917;
  unsigned long __n918;
  char __a919;
  char* __retval920;
  __s917 = v913;
  __n918 = v914;
  __a919 = v915;
    _Bool r921 = std____is_constant_evaluated();
    if (r921) {
        unsigned long __i922;
        unsigned long c923 = 0;
        __i922 = c923;
        while (1) {
          unsigned long t925 = __i922;
          unsigned long t926 = __n918;
          _Bool c927 = ((t925 < t926)) ? 1 : 0;
          if (!c927) break;
          char* t928 = __s917;
          unsigned long t929 = __i922;
          char* ptr930 = &(t928)[t929];
          char* r931 = _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(ptr930, &__a919);
        for_step924: ;
          unsigned long t932 = __i922;
          unsigned long u933 = t932 + 1;
          __i922 = u933;
        }
      char* t934 = __s917;
      __retval920 = t934;
      char* t935 = __retval920;
      return t935;
    }
      unsigned long t936 = __n918;
      _Bool cast937 = (_Bool)t936;
      if (cast937) {
        unsigned char __c938;
        void* cast939 = (void*)&(__c938);
        void* cast940 = (void*)&(__a919);
        unsigned long c941 = 1;
        void* r942 = memcpy(cast939, cast940, c941);
        char* t943 = __s917;
        void* cast944 = (void*)t943;
        unsigned char t945 = __c938;
        int cast946 = (int)t945;
        unsigned long t947 = __n918;
        void* r948 = memset(cast944, cast946, t947);
      }
  char* t949 = __s917;
  __retval920 = t949;
  char* t950 = __retval920;
  return t950;
}

// function: _ZNSt11char_traitsIcE6assignEPcmc
char* std__char_traits_char___assign(char* v951, unsigned long v952, char v953) {
bb954: ;
  char* __s955;
  unsigned long __n956;
  char __a957;
  char* __retval958;
  __s955 = v951;
  __n956 = v952;
  __a957 = v953;
    unsigned long t959 = __n956;
    unsigned long c960 = 0;
    _Bool c961 = ((t959 == c960)) ? 1 : 0;
    if (c961) {
      char* t962 = __s955;
      __retval958 = t962;
      char* t963 = __retval958;
      return t963;
    }
    _Bool r964 = std____is_constant_evaluated();
    if (r964) {
      char* t965 = __s955;
      unsigned long t966 = __n956;
      char t967 = __a957;
      char* r968 = __gnu_cxx__char_traits_char___assign(t965, t966, t967);
      __retval958 = r968;
      char* t969 = __retval958;
      return t969;
    }
  char* t970 = __s955;
  void* cast971 = (void*)t970;
  char t972 = __a957;
  int cast973 = (int)t972;
  unsigned long t974 = __n956;
  void* r975 = memset(cast971, cast973, t974);
  char* cast976 = (char*)r975;
  __retval958 = cast976;
  char* t977 = __retval958;
  return t977;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_S_assignEPcmc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* v978, unsigned long v979, char v980) {
bb981: ;
  char* __d982;
  unsigned long __n983;
  char __c984;
  __d982 = v978;
  __n983 = v979;
  __c984 = v980;
    unsigned long t985 = __n983;
    unsigned long c986 = 1;
    _Bool c987 = ((t985 == c986)) ? 1 : 0;
    if (c987) {
      char* t988 = __d982;
      std__char_traits_char___assign_2(t988, &__c984);
    } else {
      char* t989 = __d982;
      unsigned long t990 = __n983;
      char t991 = __c984;
      char* r992 = std__char_traits_char___assign(t989, t990, t991);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE14_M_replace_auxEmmmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v993, unsigned long v994, unsigned long v995, unsigned long v996, char v997) {
bb998: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this999;
  unsigned long __pos11000;
  unsigned long __n11001;
  unsigned long __n21002;
  char __c1003;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1004;
  unsigned long __old_size1005;
  unsigned long __new_size1006;
  this999 = v993;
  __pos11000 = v994;
  __n11001 = v995;
  __n21002 = v996;
  __c1003 = v997;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1007 = this999;
  unsigned long t1008 = __n11001;
  unsigned long t1009 = __n21002;
  char* cast1010 = (char*)&(_str_7);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t1007, t1008, t1009, cast1010);
  unsigned long r1011 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1007);
  __old_size1005 = r1011;
  unsigned long t1012 = __old_size1005;
  unsigned long t1013 = __n21002;
  unsigned long b1014 = t1012 + t1013;
  unsigned long t1015 = __n11001;
  unsigned long b1016 = b1014 - t1015;
  __new_size1006 = b1016;
    unsigned long t1017 = __new_size1006;
    unsigned long r1018 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1007);
    _Bool c1019 = ((t1017 <= r1018)) ? 1 : 0;
    if (c1019) {
      char* __p1020;
      unsigned long __how_much1021;
      char* r1022 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1007);
      unsigned long t1023 = __pos11000;
      char* ptr1024 = &(r1022)[t1023];
      __p1020 = ptr1024;
      unsigned long t1025 = __old_size1005;
      unsigned long t1026 = __pos11000;
      unsigned long b1027 = t1025 - t1026;
      unsigned long t1028 = __n11001;
      unsigned long b1029 = b1027 - t1028;
      __how_much1021 = b1029;
        unsigned long t1030 = __how_much1021;
        _Bool cast1031 = (_Bool)t1030;
        _Bool ternary1032;
        if (cast1031) {
          unsigned long t1033 = __n11001;
          unsigned long t1034 = __n21002;
          _Bool c1035 = ((t1033 != t1034)) ? 1 : 0;
          ternary1032 = (_Bool)c1035;
        } else {
          _Bool c1036 = 0;
          ternary1032 = (_Bool)c1036;
        }
        if (ternary1032) {
          char* t1037 = __p1020;
          unsigned long t1038 = __n21002;
          char* ptr1039 = &(t1037)[t1038];
          char* t1040 = __p1020;
          unsigned long t1041 = __n11001;
          char* ptr1042 = &(t1040)[t1041];
          unsigned long t1043 = __how_much1021;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr1039, ptr1042, t1043);
        }
    } else {
      unsigned long t1044 = __pos11000;
      unsigned long t1045 = __n11001;
      char* c1046 = ((void*)0);
      unsigned long t1047 = __n21002;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t1007, t1044, t1045, c1046, t1047);
    }
    unsigned long t1048 = __n21002;
    _Bool cast1049 = (_Bool)t1048;
    if (cast1049) {
      char* r1050 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1007);
      unsigned long t1051 = __pos11000;
      char* ptr1052 = &(r1050)[t1051];
      unsigned long t1053 = __n21002;
      char t1054 = __c1003;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(ptr1052, t1053, t1054);
    }
  unsigned long t1055 = __new_size1006;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1007, t1055);
  __retval1004 = t1007;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1056 = __retval1004;
  return t1056;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignEmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1057, unsigned long v1058, char v1059) {
bb1060: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1061;
  unsigned long __n1062;
  char __c1063;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1064;
  this1061 = v1057;
  __n1062 = v1058;
  __c1063 = v1059;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1065 = this1061;
  unsigned long c1066 = 0;
  unsigned long r1067 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1065);
  unsigned long t1068 = __n1062;
  char t1069 = __c1063;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1070 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(t1065, c1066, r1067, t1068, t1069);
  __retval1064 = r1070;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1071 = __retval1064;
  return t1071;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1072, char v1073) {
bb1074: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1075;
  char __c1076;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1077;
  this1075 = v1072;
  __c1076 = v1073;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1078 = this1075;
  unsigned long c1079 = 1;
  char t1080 = __c1076;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1081 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_2(t1078, c1079, t1080);
  __retval1077 = t1078;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1082 = __retval1077;
  return t1082;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1083, char* v1084, unsigned long v1085) {
bb1086: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1087;
  char* __s1088;
  unsigned long __n1089;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1090;
  unsigned long __len1091;
  this1087 = v1083;
  __s1088 = v1084;
  __n1089 = v1085;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1092 = this1087;
  unsigned long t1093 = __n1089;
  unsigned long r1094 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1092);
  unsigned long b1095 = t1093 + r1094;
  __len1091 = b1095;
    unsigned long t1096 = __len1091;
    unsigned long r1097 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1092);
    _Bool c1098 = ((t1096 <= r1097)) ? 1 : 0;
    if (c1098) {
        unsigned long t1099 = __n1089;
        _Bool cast1100 = (_Bool)t1099;
        if (cast1100) {
          char* r1101 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1092);
          unsigned long r1102 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1092);
          char* ptr1103 = &(r1101)[r1102];
          char* t1104 = __s1088;
          unsigned long t1105 = __n1089;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr1103, t1104, t1105);
        }
    } else {
      unsigned long r1106 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1092);
      unsigned long c1107 = 0;
      char* t1108 = __s1088;
      unsigned long t1109 = __n1089;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t1092, r1106, c1107, t1108, t1109);
    }
  unsigned long t1110 = __len1091;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1092, t1110);
  __retval1090 = t1092;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1111 = __retval1090;
  return t1111;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1112, char* v1113, unsigned long v1114) {
bb1115: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1116;
  char* __s1117;
  unsigned long __n1118;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1119;
  this1116 = v1112;
  __s1117 = v1113;
  __n1118 = v1114;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1120 = this1116;
  unsigned long c1121 = 0;
  unsigned long t1122 = __n1118;
  char* cast1123 = (char*)&(_str_8);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t1120, c1121, t1122, cast1123);
  char* t1124 = __s1117;
  unsigned long t1125 = __n1118;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1126 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t1120, t1124, t1125);
  __retval1119 = r1126;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1127 = __retval1119;
  return t1127;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1128, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1129) {
bb1130: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1131;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1132;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1133;
  this1131 = v1128;
  __str1132 = v1129;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1134 = this1131;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1135 = __str1132;
  char* r1136 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1135);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1137 = __str1132;
  unsigned long r1138 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1137);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1139 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(t1134, r1136, r1138);
  __retval1133 = r1139;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1140 = __retval1133;
  return t1140;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEpLERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator___2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1141, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1142) {
bb1143: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1144;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1145;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1146;
  this1144 = v1141;
  __str1145 = v1142;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1147 = this1144;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1148 = __str1145;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1149 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_3(t1147, t1148);
  __retval1146 = r1149;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1150 = __retval1146;
  return t1150;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1151, char* v1152) {
bb1153: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1154;
  char* __s1155;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1156;
  unsigned long __n1157;
  this1154 = v1151;
  __s1155 = v1152;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1158 = this1154;
  char* t1159 = __s1155;
  unsigned long r1160 = std__char_traits_char___length(t1159);
  __n1157 = r1160;
  unsigned long c1161 = 0;
  unsigned long t1162 = __n1157;
  char* cast1163 = (char*)&(_str_8);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t1158, c1161, t1162, cast1163);
  char* t1164 = __s1155;
  unsigned long t1165 = __n1157;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1166 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t1158, t1164, t1165);
  __retval1156 = r1166;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1167 = __retval1156;
  return t1167;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEpLEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1168, char* v1169) {
bb1170: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1171;
  char* __s1172;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1173;
  this1171 = v1168;
  __s1172 = v1169;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1174 = this1171;
  char* t1175 = __s1172;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1176 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(t1174, t1175);
  __retval1173 = r1176;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1177 = __retval1173;
  return t1177;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v1178, char* v1179) {
bb1180: ;
  char* __c11181;
  char* __c21182;
  _Bool __retval1183;
  __c11181 = v1178;
  __c21182 = v1179;
  char* t1184 = __c11181;
  char t1185 = *t1184;
  unsigned char cast1186 = (unsigned char)t1185;
  int cast1187 = (int)cast1186;
  char* t1188 = __c21182;
  char t1189 = *t1188;
  unsigned char cast1190 = (unsigned char)t1189;
  int cast1191 = (int)cast1190;
  _Bool c1192 = ((cast1187 < cast1191)) ? 1 : 0;
  __retval1183 = c1192;
  _Bool t1193 = __retval1183;
  return t1193;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v1194, char* v1195, unsigned long v1196) {
bb1197: ;
  char* __s11198;
  char* __s21199;
  unsigned long __n1200;
  int __retval1201;
  __s11198 = v1194;
  __s21199 = v1195;
  __n1200 = v1196;
    unsigned long t1202 = __n1200;
    unsigned long c1203 = 0;
    _Bool c1204 = ((t1202 == c1203)) ? 1 : 0;
    if (c1204) {
      int c1205 = 0;
      __retval1201 = c1205;
      int t1206 = __retval1201;
      return t1206;
    }
    _Bool r1207 = std____is_constant_evaluated();
    if (r1207) {
        unsigned long __i1208;
        unsigned long c1209 = 0;
        __i1208 = c1209;
        while (1) {
          unsigned long t1211 = __i1208;
          unsigned long t1212 = __n1200;
          _Bool c1213 = ((t1211 < t1212)) ? 1 : 0;
          if (!c1213) break;
            unsigned long t1214 = __i1208;
            char* t1215 = __s11198;
            char* ptr1216 = &(t1215)[t1214];
            unsigned long t1217 = __i1208;
            char* t1218 = __s21199;
            char* ptr1219 = &(t1218)[t1217];
            _Bool r1220 = std__char_traits_char___lt(ptr1216, ptr1219);
            if (r1220) {
              int c1221 = -1;
              __retval1201 = c1221;
              int t1222 = __retval1201;
              int ret_val1223 = t1222;
              return ret_val1223;
            } else {
                unsigned long t1224 = __i1208;
                char* t1225 = __s21199;
                char* ptr1226 = &(t1225)[t1224];
                unsigned long t1227 = __i1208;
                char* t1228 = __s11198;
                char* ptr1229 = &(t1228)[t1227];
                _Bool r1230 = std__char_traits_char___lt(ptr1226, ptr1229);
                if (r1230) {
                  int c1231 = 1;
                  __retval1201 = c1231;
                  int t1232 = __retval1201;
                  int ret_val1233 = t1232;
                  return ret_val1233;
                }
            }
        for_step1210: ;
          unsigned long t1234 = __i1208;
          unsigned long u1235 = t1234 + 1;
          __i1208 = u1235;
        }
      int c1236 = 0;
      __retval1201 = c1236;
      int t1237 = __retval1201;
      return t1237;
    }
  char* t1238 = __s11198;
  void* cast1239 = (void*)t1238;
  char* t1240 = __s21199;
  void* cast1241 = (void*)t1240;
  unsigned long t1242 = __n1200;
  int r1243 = memcmp(cast1239, cast1241, t1242);
  __retval1201 = r1243;
  int t1244 = __retval1201;
  return t1244;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1245) {
bb1246: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1247;
  char* __retval1248;
  this1247 = v1245;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1249 = this1247;
  char* r1250 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1249);
  __retval1248 = r1250;
  char* t1251 = __retval1248;
  return t1251;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1252, char* v1253) {
bb1254: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs1255;
  char* __rhs1256;
  _Bool __retval1257;
  __lhs1255 = v1252;
  __rhs1256 = v1253;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1258 = __lhs1255;
  unsigned long r1259 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1258);
  char* t1260 = __rhs1256;
  unsigned long r1261 = std__char_traits_char___length(t1260);
  _Bool c1262 = ((r1259 == r1261)) ? 1 : 0;
  _Bool ternary1263;
  if (c1262) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1264 = __lhs1255;
    char* r1265 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1264);
    char* t1266 = __rhs1256;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1267 = __lhs1255;
    unsigned long r1268 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1267);
    int r1269 = std__char_traits_char___compare(r1265, t1266, r1268);
    _Bool cast1270 = (_Bool)r1269;
    _Bool u1271 = !cast1270;
    ternary1263 = (_Bool)u1271;
  } else {
    _Bool c1272 = 0;
    ternary1263 = (_Bool)c1272;
  }
  __retval1257 = ternary1263;
  _Bool t1273 = __retval1257;
  return t1273;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v1274, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1275) {
bb1276: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1277;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1278;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1279;
  __os1277 = v1274;
  __str1278 = v1275;
  struct std__basic_ostream_char__std__char_traits_char__* t1280 = __os1277;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1281 = __str1278;
  char* r1282 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1281);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1283 = __str1278;
  unsigned long r1284 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1283);
  long cast1285 = (long)r1284;
  struct std__basic_ostream_char__std__char_traits_char__* r1286 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1280, r1282, cast1285);
  __retval1279 = r1286;
  struct std__basic_ostream_char__std__char_traits_char__* t1287 = __retval1279;
  return t1287;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1288, void* v1289) {
bb1290: ;
  struct std__basic_ostream_char__std__char_traits_char__* this1291;
  void* __pf1292;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1293;
  this1291 = v1288;
  __pf1292 = v1289;
  struct std__basic_ostream_char__std__char_traits_char__* t1294 = this1291;
  void* t1295 = __pf1292;
  struct std__basic_ostream_char__std__char_traits_char__* r1296 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1295)(t1294);
  __retval1293 = r1296;
  struct std__basic_ostream_char__std__char_traits_char__* t1297 = __retval1293;
  return t1297;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1298) {
bb1299: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1300;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1301;
  __os1300 = v1298;
  struct std__basic_ostream_char__std__char_traits_char__* t1302 = __os1300;
  struct std__basic_ostream_char__std__char_traits_char__* r1303 = std__ostream__flush(t1302);
  __retval1301 = r1303;
  struct std__basic_ostream_char__std__char_traits_char__* t1304 = __retval1301;
  return t1304;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1305) {
bb1306: ;
  struct std__ctype_char_* __f1307;
  struct std__ctype_char_* __retval1308;
  __f1307 = v1305;
    struct std__ctype_char_* t1309 = __f1307;
    _Bool cast1310 = (_Bool)t1309;
    _Bool u1311 = !cast1310;
    if (u1311) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1312 = __f1307;
  __retval1308 = t1312;
  struct std__ctype_char_* t1313 = __retval1308;
  return t1313;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1314, char v1315) {
bb1316: ;
  struct std__ctype_char_* this1317;
  char __c1318;
  char __retval1319;
  this1317 = v1314;
  __c1318 = v1315;
  struct std__ctype_char_* t1320 = this1317;
    char t1321 = t1320->_M_widen_ok;
    _Bool cast1322 = (_Bool)t1321;
    if (cast1322) {
      char t1323 = __c1318;
      unsigned char cast1324 = (unsigned char)t1323;
      unsigned long cast1325 = (unsigned long)cast1324;
      char t1326 = t1320->_M_widen[cast1325];
      __retval1319 = t1326;
      char t1327 = __retval1319;
      return t1327;
    }
  std__ctype_char____M_widen_init___const(t1320);
  char t1328 = __c1318;
  void** v1329 = (void**)t1320;
  void* v1330 = *((void**)v1329);
  char vcall1333 = (char)__VERIFIER_virtual_call_char_char(t1320, 6, t1328);
  __retval1319 = vcall1333;
  char t1334 = __retval1319;
  return t1334;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1335, char v1336) {
bb1337: ;
  struct std__basic_ios_char__std__char_traits_char__* this1338;
  char __c1339;
  char __retval1340;
  this1338 = v1335;
  __c1339 = v1336;
  struct std__basic_ios_char__std__char_traits_char__* t1341 = this1338;
  struct std__ctype_char_* t1342 = t1341->_M_ctype;
  struct std__ctype_char_* r1343 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1342);
  char t1344 = __c1339;
  char r1345 = std__ctype_char___widen_char__const(r1343, t1344);
  __retval1340 = r1345;
  char t1346 = __retval1340;
  return t1346;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1347) {
bb1348: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1349;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1350;
  __os1349 = v1347;
  struct std__basic_ostream_char__std__char_traits_char__* t1351 = __os1349;
  struct std__basic_ostream_char__std__char_traits_char__* t1352 = __os1349;
  void** v1353 = (void**)t1352;
  void* v1354 = *((void**)v1353);
  unsigned char* cast1355 = (unsigned char*)v1354;
  long c1356 = -24;
  unsigned char* ptr1357 = &(cast1355)[c1356];
  long* cast1358 = (long*)ptr1357;
  long t1359 = *cast1358;
  unsigned char* cast1360 = (unsigned char*)t1352;
  unsigned char* ptr1361 = &(cast1360)[t1359];
  struct std__basic_ostream_char__std__char_traits_char__* cast1362 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1361;
  struct std__basic_ios_char__std__char_traits_char__* cast1363 = (struct std__basic_ios_char__std__char_traits_char__*)cast1362;
  char c1364 = 10;
  char r1365 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1363, c1364);
  struct std__basic_ostream_char__std__char_traits_char__* r1366 = std__ostream__put(t1351, r1365);
  struct std__basic_ostream_char__std__char_traits_char__* r1367 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1366);
  __retval1350 = r1367;
  struct std__basic_ostream_char__std__char_traits_char__* t1368 = __retval1350;
  return t1368;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1369) {
bb1370: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1371;
  this1371 = v1369;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1372 = this1371;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1372);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1372->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb1373: ;
  int __retval1374;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str11375;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str21376;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str31377;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str41378;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str51379;
  int c1380 = 0;
  __retval1374 = c1380;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str11375);
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str21376);
      _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str31377);
        _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str41378);
          _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str51379);
            char* cast1381 = (char*)&(_str);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1382 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str11375, cast1381);
            char c1383 = 120;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1384 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(&str21376, c1383);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1385 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator___2(&str11375, &str21376);
            char* cast1386 = (char*)&(_str_1);
            int c1387 = 110;
            char* ptr1388 = &(cast1386)[c1387];
            int c1389 = 41;
            char* ptr1390 = &(ptr1388)[c1389];
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1391 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&str11375, ptr1390);
            char* cast1392 = (char*)&(_str_2);
            _Bool r1393 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str11375, cast1392);
            _Bool u1394 = !r1393;
            if (u1394) {
            } else {
              char* cast1395 = (char*)&(_str_3);
              char* c1396 = (char*)_str_4;
              unsigned int c1397 = 25;
              char* cast1398 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1395, c1396, c1397, cast1398);
            }
            struct std__basic_ostream_char__std__char_traits_char__* r1399 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str31377);
            struct std__basic_ostream_char__std__char_traits_char__* r1400 = std__ostream__operator___std__ostream_____(r1399, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            int c1401 = 0;
            __retval1374 = c1401;
            int t1402 = __retval1374;
            int ret_val1403 = t1402;
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str51379);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str41378);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str31377);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str21376);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str11375);
            }
            return ret_val1403;
  int t1404 = __retval1374;
  return t1404;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1405) {
bb1406: ;
  char* __r1407;
  char* __retval1408;
  __r1407 = v1405;
  char* t1409 = __r1407;
  __retval1408 = t1409;
  char* t1410 = __retval1408;
  return t1410;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1411) {
bb1412: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1413;
  char* __retval1414;
  this1413 = v1411;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1415 = this1413;
  char* cast1416 = (char*)&(t1415->field2._M_local_buf);
  char* r1417 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1416);
  __retval1414 = r1417;
  char* t1418 = __retval1414;
  return t1418;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v1419) {
bb1420: ;
  struct std__allocator_char_* this1421;
  this1421 = v1419;
  struct std__allocator_char_* t1422 = this1421;
  struct std____new_allocator_char_* base1423 = (struct std____new_allocator_char_*)((char *)t1422 + 0);
  std____new_allocator_char_____new_allocator_2(base1423);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1424, char* v1425, struct std__allocator_char_* v1426) {
bb1427: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1428;
  char* __dat1429;
  struct std__allocator_char_* __a1430;
  this1428 = v1424;
  __dat1429 = v1425;
  __a1430 = v1426;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1431 = this1428;
  struct std__allocator_char_* base1432 = (struct std__allocator_char_*)((char *)t1431 + 0);
  struct std__allocator_char_* t1433 = __a1430;
  std__allocator_char___allocator(base1432, t1433);
    char* t1434 = __dat1429;
    t1431->_M_p = t1434;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v1435) {
bb1436: ;
  struct std__allocator_char_* this1437;
  this1437 = v1435;
  struct std__allocator_char_* t1438 = this1437;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1439: ;
  _Bool __retval1440;
    _Bool c1441 = 0;
    __retval1440 = c1441;
    _Bool t1442 = __retval1440;
    return t1442;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1443) {
bb1444: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1445;
  this1445 = v1443;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1446 = this1445;
    _Bool r1447 = std__is_constant_evaluated();
    if (r1447) {
        unsigned long __i1448;
        unsigned long c1449 = 0;
        __i1448 = c1449;
        while (1) {
          unsigned long t1451 = __i1448;
          unsigned long c1452 = 15;
          _Bool c1453 = ((t1451 <= c1452)) ? 1 : 0;
          if (!c1453) break;
          char c1454 = 0;
          unsigned long t1455 = __i1448;
          t1446->field2._M_local_buf[t1455] = c1454;
        for_step1450: ;
          unsigned long t1456 = __i1448;
          unsigned long u1457 = t1456 + 1;
          __i1448 = u1457;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1458, unsigned long v1459) {
bb1460: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1461;
  unsigned long __length1462;
  this1461 = v1458;
  __length1462 = v1459;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1463 = this1461;
  unsigned long t1464 = __length1462;
  t1463->_M_string_length = t1464;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1465: ;
  _Bool __retval1466;
    _Bool c1467 = 0;
    __retval1466 = c1467;
    _Bool t1468 = __retval1466;
    return t1468;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1469, char* v1470) {
bb1471: ;
  char* __location1472;
  char* __args1473;
  char* __retval1474;
  void* __loc1475;
  __location1472 = v1469;
  __args1473 = v1470;
  char* t1476 = __location1472;
  void* cast1477 = (void*)t1476;
  __loc1475 = cast1477;
    void* t1478 = __loc1475;
    char* cast1479 = (char*)t1478;
    char* t1480 = __args1473;
    char t1481 = *t1480;
    *cast1479 = t1481;
    __retval1474 = cast1479;
    char* t1482 = __retval1474;
    return t1482;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign_2(char* v1483, char* v1484) {
bb1485: ;
  char* __c11486;
  char* __c21487;
  __c11486 = v1483;
  __c21487 = v1484;
    _Bool r1488 = std____is_constant_evaluated();
    if (r1488) {
      char* t1489 = __c11486;
      char* t1490 = __c21487;
      char* r1491 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1489, t1490);
    } else {
      char* t1492 = __c21487;
      char t1493 = *t1492;
      char* t1494 = __c11486;
      *t1494 = t1493;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1495) {
bb1496: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1497;
  char* __retval1498;
  this1497 = v1495;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1499 = this1497;
  char* t1500 = t1499->_M_dataplus._M_p;
  __retval1498 = t1500;
  char* t1501 = __retval1498;
  return t1501;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1502, unsigned long v1503) {
bb1504: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1505;
  unsigned long __n1506;
  char ref_tmp01507;
  this1505 = v1502;
  __n1506 = v1503;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1508 = this1505;
  unsigned long t1509 = __n1506;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1508, t1509);
  unsigned long t1510 = __n1506;
  char* r1511 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1508);
  char* ptr1512 = &(r1511)[t1510];
  char c1513 = 0;
  ref_tmp01507 = c1513;
  std__char_traits_char___assign_2(ptr1512, &ref_tmp01507);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1514) {
bb1515: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1516;
  this1516 = v1514;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1517 = this1516;
  {
    struct std__allocator_char_* base1518 = (struct std__allocator_char_*)((char *)t1517 + 0);
    std__allocator_char____allocator(base1518);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1519) {
bb1520: ;
  struct std____new_allocator_char_* this1521;
  this1521 = v1519;
  struct std____new_allocator_char_* t1522 = this1521;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1523, struct std____new_allocator_char_* v1524) {
bb1525: ;
  struct std____new_allocator_char_* this1526;
  struct std____new_allocator_char_* unnamed1527;
  this1526 = v1523;
  unnamed1527 = v1524;
  struct std____new_allocator_char_* t1528 = this1526;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1529, struct std__allocator_char_* v1530) {
bb1531: ;
  struct std__allocator_char_* this1532;
  struct std__allocator_char_* __a1533;
  this1532 = v1529;
  __a1533 = v1530;
  struct std__allocator_char_* t1534 = this1532;
  struct std____new_allocator_char_* base1535 = (struct std____new_allocator_char_*)((char *)t1534 + 0);
  struct std__allocator_char_* t1536 = __a1533;
  struct std____new_allocator_char_* base1537 = (struct std____new_allocator_char_*)((char *)t1536 + 0);
  std____new_allocator_char_____new_allocator(base1535, base1537);
  return;
}

