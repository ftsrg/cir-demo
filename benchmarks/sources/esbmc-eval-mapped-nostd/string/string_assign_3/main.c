extern void abort(void);
// Struct definitions (auto-parsed)
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_const_char___ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
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

char _str[43] = "The quick brown fox jumps over a lazy dog.";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[18] = "pangrams are cool";
char _str_2[8] = "pangram";
char _str_3[17] = "str == \"pangram\"";
char _str_4[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_assign_3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_5[50] = "basic_string: construction from null is not valid";
char _str_6[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_7[21] = "basic_string::assign";
char _str_8[25] = "basic_string::_M_replace";
char _str_9[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign();
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal();
_Bool std__operator__(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_copy_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* p0, char* p1, char* p2);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void __gnu_cxx__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, char* p3, unsigned long p4, unsigned long p5);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, unsigned long p2, unsigned long p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
int main();
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std____is_constant_evaluated();
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign(char* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
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
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_length_error(char* p0);
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
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
char* char_const__std____niter_base_char_const__(char* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* p0, char* p1, char* p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, char* p2, struct std__forward_iterator_tag p3);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);

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

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v7) {
bb8: ;
  struct std__allocator_char_* this9;
  this9 = v7;
  struct std__allocator_char_* t10 = this9;
  struct std____new_allocator_char_* base11 = (struct std____new_allocator_char_*)((char *)t10 + 0);
  std____new_allocator_char_____new_allocator_2(base11);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v12, char* v13, struct std__allocator_char_* v14) {
bb15: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this16;
  char* __s17;
  struct std__allocator_char_* __a18;
  char* __end19;
  struct std__forward_iterator_tag agg_tmp020;
  this16 = v12;
  __s17 = v13;
  __a18 = v14;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t21 = this16;
  char* r22 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t21);
  struct std__allocator_char_* t23 = __a18;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t21->_M_dataplus, r22, t23);
      char* t24 = __s17;
      char* c25 = ((void*)0);
      _Bool c26 = ((t24 == c25)) ? 1 : 0;
      if (c26) {
        char* cast27 = (char*)&(_str_5);
        std____throw_logic_error(cast27);
      }
    char* t28 = __s17;
    char* t29 = __s17;
    unsigned long r30 = std__char_traits_char___length(t29);
    char* ptr31 = &(t28)[r30];
    __end19 = ptr31;
    char* t32 = __s17;
    char* t33 = __end19;
    struct std__forward_iterator_tag t34 = agg_tmp020;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t21, t32, t33, t34);
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v35) {
bb36: ;
  struct std__allocator_char_* this37;
  this37 = v35;
  struct std__allocator_char_* t38 = this37;
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_copy_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign() {
bb39: ;
  _Bool __retval40;
  _Bool t41 = _ZNSt17integral_constantIbLb0EE5valueE;
  __retval40 = t41;
  _Bool t42 = __retval40;
  return t42;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE15_S_always_equalEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal() {
bb43: ;
  _Bool __retval44;
  _Bool t45 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval44 = t45;
  _Bool t46 = __retval44;
  return t46;
}

// function: _ZSteqRKSaIcES1_
_Bool std__operator__(struct std__allocator_char_* v47, struct std__allocator_char_* v48) {
bb49: ;
  struct std__allocator_char_* unnamed50;
  struct std__allocator_char_* unnamed51;
  _Bool __retval52;
  unnamed50 = v47;
  unnamed51 = v48;
  _Bool c53 = 1;
  __retval52 = c53;
  _Bool t54 = __retval52;
  return t54;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v55) {
bb56: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this57;
  unsigned long __retval58;
  unsigned long __sz59;
  this57 = v55;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t60 = this57;
  unsigned long t61 = t60->_M_string_length;
  __sz59 = t61;
    unsigned long t62 = __sz59;
    unsigned long r63 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t60);
    _Bool c64 = ((t62 > r63)) ? 1 : 0;
    if (c64) {
      __builtin_unreachable();
    }
  unsigned long t65 = __sz59;
  __retval58 = t65;
  unsigned long t66 = __retval58;
  return t66;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v67) {
bb68: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this69;
  char* __retval70;
  this69 = v67;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t71 = this69;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t71);
  char* r72 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t71);
  __retval70 = r72;
  char* t73 = __retval70;
  return t73;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v74, struct std__allocator_char_* v75) {
bb76: ;
  struct std__allocator_char_* this77;
  struct std__allocator_char_* __a78;
  this77 = v74;
  __a78 = v75;
  struct std__allocator_char_* t79 = this77;
  struct std____new_allocator_char_* base80 = (struct std____new_allocator_char_*)((char *)t79 + 0);
  struct std__allocator_char_* t81 = __a78;
  struct std____new_allocator_char_* base82 = (struct std____new_allocator_char_*)((char *)t81 + 0);
  std____new_allocator_char_____new_allocator(base80, base82);
  return;
}

// function: _ZSt15__alloc_on_copyISaIcEEvRT_RKS1_
void void_std____alloc_on_copy_std__allocator_char___(struct std__allocator_char_* v83, struct std__allocator_char_* v84) {
bb85: ;
  struct std__allocator_char_* __one86;
  struct std__allocator_char_* __two87;
  __one86 = v83;
  __two87 = v84;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v88) {
bb89: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this90;
  unsigned long __retval91;
  this90 = v88;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t92 = this90;
  unsigned long r93 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t92);
  __retval91 = r93;
  unsigned long t94 = __retval91;
  return t94;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v95) {
bb96: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this97;
  unsigned long __retval98;
  unsigned long __sz99;
  this97 = v95;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t100 = this97;
  _Bool r101 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t100);
  unsigned long ternary102;
  if (r101) {
    unsigned long c103 = 15;
    ternary102 = (unsigned long)c103;
  } else {
    unsigned long t104 = t100->field2._M_allocated_capacity;
    ternary102 = (unsigned long)t104;
  }
  __sz99 = ternary102;
    unsigned long t105 = __sz99;
    unsigned long c106 = 15;
    _Bool c107 = ((t105 < c106)) ? 1 : 0;
    _Bool ternary108;
    if (c107) {
      _Bool c109 = 1;
      ternary108 = (_Bool)c109;
    } else {
      unsigned long t110 = __sz99;
      unsigned long r111 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t100);
      _Bool c112 = ((t110 > r111)) ? 1 : 0;
      ternary108 = (_Bool)c112;
    }
    if (ternary108) {
      __builtin_unreachable();
    }
  unsigned long t113 = __sz99;
  __retval98 = t113;
  unsigned long t114 = __retval98;
  return t114;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v115, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v116) {
bb117: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this118;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str119;
  this118 = v115;
  __str119 = v116;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t120 = this118;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t121 = __str119;
    _Bool c122 = ((t120 != t121)) ? 1 : 0;
    if (c122) {
      unsigned long __rsize123;
      unsigned long __capacity124;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t125 = __str119;
      unsigned long r126 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t125);
      __rsize123 = r126;
      unsigned long r127 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t120);
      __capacity124 = r127;
        unsigned long t128 = __rsize123;
        unsigned long t129 = __capacity124;
        _Bool c130 = ((t128 > t129)) ? 1 : 0;
        if (c130) {
          unsigned long __new_capacity131;
          char* __tmp132;
          unsigned long t133 = __rsize123;
          __new_capacity131 = t133;
          unsigned long t134 = __capacity124;
          char* r135 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t120, &__new_capacity131, t134);
          __tmp132 = r135;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t120);
          char* t136 = __tmp132;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t120, t136);
          unsigned long t137 = __new_capacity131;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t120, t137);
        }
        unsigned long t138 = __rsize123;
        _Bool cast139 = (_Bool)t138;
        if (cast139) {
          char* r140 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t120);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t141 = __str119;
          char* r142 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t141);
          unsigned long t143 = __rsize123;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r140, r142, t143);
        }
      unsigned long t144 = __rsize123;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t120, t144);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v145, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v146) {
bb147: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this148;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str149;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval150;
  this148 = v145;
  __str149 = v146;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t151 = this148;
    _Bool r152 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign();
    if (r152) {
        _Bool r153 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal();
        _Bool u154 = !r153;
        _Bool ternary155;
        if (u154) {
          _Bool r156 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t151);
          _Bool u157 = !r156;
          ternary155 = (_Bool)u157;
        } else {
          _Bool c158 = 0;
          ternary155 = (_Bool)c158;
        }
        _Bool ternary159;
        if (ternary155) {
          struct std__allocator_char_* r160 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t151);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t161 = __str149;
          struct std__allocator_char_* r162 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t161);
          _Bool r163 = std__operator__(r160, r162);
          _Bool u164 = !r163;
          ternary159 = (_Bool)u164;
        } else {
          _Bool c165 = 0;
          ternary159 = (_Bool)c165;
        }
        if (ternary159) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t166 = __str149;
            unsigned long r167 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t166);
            unsigned long c168 = 15;
            _Bool c169 = ((r167 <= c168)) ? 1 : 0;
            if (c169) {
              unsigned long t170 = t151->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t151, t170);
              char* r171 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t151);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t151, r171);
              unsigned long c172 = 0;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t151, c172);
            } else {
              unsigned long __len173;
              struct std__allocator_char_ __alloc174;
              char* __ptr175;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t176 = __str149;
              unsigned long r177 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t176);
              __len173 = r177;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t178 = __str149;
              struct std__allocator_char_* r179 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t178);
              std__allocator_char___allocator(&__alloc174, r179);
              unsigned long t180 = __len173;
              unsigned long c181 = 1;
              unsigned long b182 = t180 + c181;
              char* r183 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(&__alloc174, b182);
              __ptr175 = r183;
              unsigned long t184 = t151->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t151, t184);
              char* t185 = __ptr175;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t151, t185);
              unsigned long t186 = __len173;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t151, t186);
              unsigned long t187 = __len173;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t151, t187);
            }
        }
      struct std__allocator_char_* r188 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t151);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t189 = __str149;
      struct std__allocator_char_* r190 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t189);
      void_std____alloc_on_copy_std__allocator_char___(r188, r190);
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t191 = __str149;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t151, t191);
  __retval150 = t151;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t192 = __retval150;
  return t192;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v193, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v194) {
bb195: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os196;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str197;
  struct std__basic_ostream_char__std__char_traits_char__* __retval198;
  __os196 = v193;
  __str197 = v194;
  struct std__basic_ostream_char__std__char_traits_char__* t199 = __os196;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t200 = __str197;
  char* r201 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t200);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t202 = __str197;
  unsigned long r203 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t202);
  long cast204 = (long)r203;
  struct std__basic_ostream_char__std__char_traits_char__* r205 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t199, r201, cast204);
  __retval198 = r205;
  struct std__basic_ostream_char__std__char_traits_char__* t206 = __retval198;
  return t206;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v207, void* v208) {
bb209: ;
  struct std__basic_ostream_char__std__char_traits_char__* this210;
  void* __pf211;
  struct std__basic_ostream_char__std__char_traits_char__* __retval212;
  this210 = v207;
  __pf211 = v208;
  struct std__basic_ostream_char__std__char_traits_char__* t213 = this210;
  void* t214 = __pf211;
  struct std__basic_ostream_char__std__char_traits_char__* r215 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t214)(t213);
  __retval212 = r215;
  struct std__basic_ostream_char__std__char_traits_char__* t216 = __retval212;
  return t216;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v217) {
bb218: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os219;
  struct std__basic_ostream_char__std__char_traits_char__* __retval220;
  __os219 = v217;
  struct std__basic_ostream_char__std__char_traits_char__* t221 = __os219;
  struct std__basic_ostream_char__std__char_traits_char__* r222 = std__ostream__flush(t221);
  __retval220 = r222;
  struct std__basic_ostream_char__std__char_traits_char__* t223 = __retval220;
  return t223;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v224) {
bb225: ;
  struct std__ctype_char_* __f226;
  struct std__ctype_char_* __retval227;
  __f226 = v224;
    struct std__ctype_char_* t228 = __f226;
    _Bool cast229 = (_Bool)t228;
    _Bool u230 = !cast229;
    if (u230) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t231 = __f226;
  __retval227 = t231;
  struct std__ctype_char_* t232 = __retval227;
  return t232;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v233, char v234) {
bb235: ;
  struct std__ctype_char_* this236;
  char __c237;
  char __retval238;
  this236 = v233;
  __c237 = v234;
  struct std__ctype_char_* t239 = this236;
    char t240 = t239->_M_widen_ok;
    _Bool cast241 = (_Bool)t240;
    if (cast241) {
      char t242 = __c237;
      unsigned char cast243 = (unsigned char)t242;
      unsigned long cast244 = (unsigned long)cast243;
      char t245 = t239->_M_widen[cast244];
      __retval238 = t245;
      char t246 = __retval238;
      return t246;
    }
  std__ctype_char____M_widen_init___const(t239);
  char t247 = __c237;
  void** v248 = (void**)t239;
  void* v249 = *((void**)v248);
  char vcall252 = (char)__VERIFIER_virtual_call_char_char(t239, 6, t247);
  __retval238 = vcall252;
  char t253 = __retval238;
  return t253;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v254, char v255) {
bb256: ;
  struct std__basic_ios_char__std__char_traits_char__* this257;
  char __c258;
  char __retval259;
  this257 = v254;
  __c258 = v255;
  struct std__basic_ios_char__std__char_traits_char__* t260 = this257;
  struct std__ctype_char_* t261 = t260->_M_ctype;
  struct std__ctype_char_* r262 = std__ctype_char__const__std____check_facet_std__ctype_char___(t261);
  char t263 = __c258;
  char r264 = std__ctype_char___widen_char__const(r262, t263);
  __retval259 = r264;
  char t265 = __retval259;
  return t265;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v266) {
bb267: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os268;
  struct std__basic_ostream_char__std__char_traits_char__* __retval269;
  __os268 = v266;
  struct std__basic_ostream_char__std__char_traits_char__* t270 = __os268;
  struct std__basic_ostream_char__std__char_traits_char__* t271 = __os268;
  void** v272 = (void**)t271;
  void* v273 = *((void**)v272);
  unsigned char* cast274 = (unsigned char*)v273;
  long c275 = -24;
  unsigned char* ptr276 = &(cast274)[c275];
  long* cast277 = (long*)ptr276;
  long t278 = *cast277;
  unsigned char* cast279 = (unsigned char*)t271;
  unsigned char* ptr280 = &(cast279)[t278];
  struct std__basic_ostream_char__std__char_traits_char__* cast281 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr280;
  struct std__basic_ios_char__std__char_traits_char__* cast282 = (struct std__basic_ios_char__std__char_traits_char__*)cast281;
  char c283 = 10;
  char r284 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast282, c283);
  struct std__basic_ostream_char__std__char_traits_char__* r285 = std__ostream__put(t270, r284);
  struct std__basic_ostream_char__std__char_traits_char__* r286 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r285);
  __retval269 = r286;
  struct std__basic_ostream_char__std__char_traits_char__* t287 = __retval269;
  return t287;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v288, unsigned long v289, unsigned long v290, char* v291) {
bb292: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this293;
  unsigned long __n1294;
  unsigned long __n2295;
  char* __s296;
  this293 = v288;
  __n1294 = v289;
  __n2295 = v290;
  __s296 = v291;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t297 = this293;
    unsigned long r298 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t297);
    unsigned long r299 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t297);
    unsigned long t300 = __n1294;
    unsigned long b301 = r299 - t300;
    unsigned long b302 = r298 - b301;
    unsigned long t303 = __n2295;
    _Bool c304 = ((b302 < t303)) ? 1 : 0;
    if (c304) {
      char* t305 = __s296;
      std____throw_length_error(t305);
    }
  return;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v306, char* v307, char* v308) {
bb309: ;
  struct std__less_const_char___* this310;
  char* __x311;
  char* __y312;
  _Bool __retval313;
  this310 = v306;
  __x311 = v307;
  __y312 = v308;
  struct std__less_const_char___* t314 = this310;
    _Bool r315 = std____is_constant_evaluated();
    if (r315) {
      char* t316 = __x311;
      char* t317 = __y312;
      _Bool c318 = ((t316 < t317)) ? 1 : 0;
      __retval313 = c318;
      _Bool t319 = __retval313;
      return t319;
    }
  char* t320 = __x311;
  unsigned long cast321 = (unsigned long)t320;
  char* t322 = __y312;
  unsigned long cast323 = (unsigned long)t322;
  _Bool c324 = ((cast321 < cast323)) ? 1 : 0;
  __retval313 = c324;
  _Bool t325 = __retval313;
  return t325;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v326, char* v327) {
bb328: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this329;
  char* __s330;
  _Bool __retval331;
  struct std__less_const_char___ ref_tmp0332;
  this329 = v326;
  __s330 = v327;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t333 = this329;
  char* t334 = __s330;
  char* r335 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t333);
  _Bool r336 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0332, t334, r335);
  _Bool ternary337;
  if (r336) {
    _Bool c338 = 1;
    ternary337 = (_Bool)c338;
  } else {
    struct std__less_const_char___ ref_tmp1339;
    char* r340 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t333);
    unsigned long r341 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t333);
    char* ptr342 = &(r340)[r341];
    char* t343 = __s330;
    _Bool r344 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1339, ptr342, t343);
    ternary337 = (_Bool)r344;
  }
  __retval331 = ternary337;
  _Bool t345 = __retval331;
  return t345;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v346, char* v347) {
bb348: ;
  char* __c1349;
  char* __c2350;
  __c1349 = v346;
  __c2350 = v347;
    _Bool r351 = std____is_constant_evaluated();
    if (r351) {
      char* t352 = __c1349;
      char* t353 = __c2350;
      char* r354 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t352, t353);
    } else {
      char* t355 = __c2350;
      char t356 = *t355;
      char* t357 = __c1349;
      *t357 = t356;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v358, char* v359, unsigned long v360) {
bb361: ;
  char* __s1362;
  char* __s2363;
  unsigned long __n364;
  char* __retval365;
  __s1362 = v358;
  __s2363 = v359;
  __n364 = v360;
    unsigned long t366 = __n364;
    unsigned long c367 = 0;
    _Bool c368 = ((t366 == c367)) ? 1 : 0;
    if (c368) {
      char* t369 = __s1362;
      __retval365 = t369;
      char* t370 = __retval365;
      return t370;
    }
    _Bool r371 = std____is_constant_evaluated();
    if (r371) {
        char* t372 = __s2363;
        char* t373 = __s1362;
        _Bool c374 = ((t372 < t373)) ? 1 : 0;
        _Bool isconst375 = 0;
        _Bool ternary376;
        if (isconst375) {
          char* t377 = __s1362;
          char* t378 = __s2363;
          _Bool c379 = ((t377 > t378)) ? 1 : 0;
          ternary376 = (_Bool)c379;
        } else {
          _Bool c380 = 0;
          ternary376 = (_Bool)c380;
        }
        _Bool ternary381;
        if (ternary376) {
          char* t382 = __s1362;
          char* t383 = __s2363;
          unsigned long t384 = __n364;
          char* ptr385 = &(t383)[t384];
          _Bool c386 = ((t382 < ptr385)) ? 1 : 0;
          ternary381 = (_Bool)c386;
        } else {
          _Bool c387 = 0;
          ternary381 = (_Bool)c387;
        }
        if (ternary381) {
            do {
                unsigned long t388 = __n364;
                unsigned long u389 = t388 - 1;
                __n364 = u389;
                unsigned long t390 = __n364;
                char* t391 = __s1362;
                char* ptr392 = &(t391)[t390];
                unsigned long t393 = __n364;
                char* t394 = __s2363;
                char* ptr395 = &(t394)[t393];
                __gnu_cxx__char_traits_char___assign(ptr392, ptr395);
              unsigned long t396 = __n364;
              unsigned long c397 = 0;
              _Bool c398 = ((t396 > c397)) ? 1 : 0;
              if (!c398) break;
            } while (1);
        } else {
          char* t399 = __s1362;
          char* t400 = __s2363;
          unsigned long t401 = __n364;
          char* r402 = __gnu_cxx__char_traits_char___copy(t399, t400, t401);
        }
      char* t403 = __s1362;
      __retval365 = t403;
      char* t404 = __retval365;
      return t404;
    }
  char* t405 = __s1362;
  void* cast406 = (void*)t405;
  char* t407 = __s2363;
  void* cast408 = (void*)t407;
  unsigned long t409 = __n364;
  unsigned long c410 = 1;
  unsigned long b411 = t409 * c410;
  void* r412 = memmove(cast406, cast408, b411);
  char* t413 = __s1362;
  __retval365 = t413;
  char* t414 = __retval365;
  return t414;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v415, char* v416, unsigned long v417) {
bb418: ;
  char* __s1419;
  char* __s2420;
  unsigned long __n421;
  char* __retval422;
  __s1419 = v415;
  __s2420 = v416;
  __n421 = v417;
    unsigned long t423 = __n421;
    unsigned long c424 = 0;
    _Bool c425 = ((t423 == c424)) ? 1 : 0;
    if (c425) {
      char* t426 = __s1419;
      __retval422 = t426;
      char* t427 = __retval422;
      return t427;
    }
    _Bool r428 = std____is_constant_evaluated();
    if (r428) {
      char* t429 = __s1419;
      char* t430 = __s2420;
      unsigned long t431 = __n421;
      char* r432 = __gnu_cxx__char_traits_char___move(t429, t430, t431);
      __retval422 = r432;
      char* t433 = __retval422;
      return t433;
    }
  char* t434 = __s1419;
  void* cast435 = (void*)t434;
  char* t436 = __s2420;
  void* cast437 = (void*)t436;
  unsigned long t438 = __n421;
  void* r439 = memmove(cast435, cast437, t438);
  char* cast440 = (char*)r439;
  __retval422 = cast440;
  char* t441 = __retval422;
  return t441;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v442, char* v443, unsigned long v444) {
bb445: ;
  char* __d446;
  char* __s447;
  unsigned long __n448;
  __d446 = v442;
  __s447 = v443;
  __n448 = v444;
    unsigned long t449 = __n448;
    unsigned long c450 = 1;
    _Bool c451 = ((t449 == c450)) ? 1 : 0;
    if (c451) {
      char* t452 = __d446;
      char* t453 = __s447;
      std__char_traits_char___assign(t452, t453);
    } else {
      char* t454 = __d446;
      char* t455 = __s447;
      unsigned long t456 = __n448;
      char* r457 = std__char_traits_char___move(t454, t455, t456);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v458, char* v459, unsigned long v460, char* v461, unsigned long v462, unsigned long v463) {
bb464: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this465;
  char* __p466;
  unsigned long __len1467;
  char* __s468;
  unsigned long __len2469;
  unsigned long __how_much470;
  this465 = v458;
  __p466 = v459;
  __len1467 = v460;
  __s468 = v461;
  __len2469 = v462;
  __how_much470 = v463;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t471 = this465;
    unsigned long t472 = __len2469;
    _Bool cast473 = (_Bool)t472;
    _Bool ternary474;
    if (cast473) {
      unsigned long t475 = __len2469;
      unsigned long t476 = __len1467;
      _Bool c477 = ((t475 <= t476)) ? 1 : 0;
      ternary474 = (_Bool)c477;
    } else {
      _Bool c478 = 0;
      ternary474 = (_Bool)c478;
    }
    if (ternary474) {
      char* t479 = __p466;
      char* t480 = __s468;
      unsigned long t481 = __len2469;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t479, t480, t481);
    }
    unsigned long t482 = __how_much470;
    _Bool cast483 = (_Bool)t482;
    _Bool ternary484;
    if (cast483) {
      unsigned long t485 = __len1467;
      unsigned long t486 = __len2469;
      _Bool c487 = ((t485 != t486)) ? 1 : 0;
      ternary484 = (_Bool)c487;
    } else {
      _Bool c488 = 0;
      ternary484 = (_Bool)c488;
    }
    if (ternary484) {
      char* t489 = __p466;
      unsigned long t490 = __len2469;
      char* ptr491 = &(t489)[t490];
      char* t492 = __p466;
      unsigned long t493 = __len1467;
      char* ptr494 = &(t492)[t493];
      unsigned long t495 = __how_much470;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr491, ptr494, t495);
    }
    unsigned long t496 = __len2469;
    unsigned long t497 = __len1467;
    _Bool c498 = ((t496 > t497)) ? 1 : 0;
    if (c498) {
        char* t499 = __s468;
        unsigned long t500 = __len2469;
        char* ptr501 = &(t499)[t500];
        char* t502 = __p466;
        unsigned long t503 = __len1467;
        char* ptr504 = &(t502)[t503];
        _Bool c505 = ((ptr501 <= ptr504)) ? 1 : 0;
        if (c505) {
          char* t506 = __p466;
          char* t507 = __s468;
          unsigned long t508 = __len2469;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t506, t507, t508);
        } else {
            char* t509 = __s468;
            char* t510 = __p466;
            unsigned long t511 = __len1467;
            char* ptr512 = &(t510)[t511];
            _Bool c513 = ((t509 >= ptr512)) ? 1 : 0;
            if (c513) {
              unsigned long __poff514;
              char* t515 = __s468;
              char* t516 = __p466;
              long diff517 = t515 - t516;
              unsigned long cast518 = (unsigned long)diff517;
              unsigned long t519 = __len2469;
              unsigned long t520 = __len1467;
              unsigned long b521 = t519 - t520;
              unsigned long b522 = cast518 + b521;
              __poff514 = b522;
              char* t523 = __p466;
              char* t524 = __p466;
              unsigned long t525 = __poff514;
              char* ptr526 = &(t524)[t525];
              unsigned long t527 = __len2469;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t523, ptr526, t527);
            } else {
              unsigned long __nleft528;
              char* t529 = __p466;
              unsigned long t530 = __len1467;
              char* ptr531 = &(t529)[t530];
              char* t532 = __s468;
              long diff533 = ptr531 - t532;
              unsigned long cast534 = (unsigned long)diff533;
              __nleft528 = cast534;
              char* t535 = __p466;
              char* t536 = __s468;
              unsigned long t537 = __nleft528;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t535, t536, t537);
              char* t538 = __p466;
              unsigned long t539 = __nleft528;
              char* ptr540 = &(t538)[t539];
              char* t541 = __p466;
              unsigned long t542 = __len2469;
              char* ptr543 = &(t541)[t542];
              unsigned long t544 = __len2469;
              unsigned long t545 = __nleft528;
              unsigned long b546 = t544 - t545;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr540, ptr543, b546);
            }
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v547, unsigned long v548, unsigned long v549, char* v550, unsigned long v551) {
bb552: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this553;
  unsigned long __pos554;
  unsigned long __len1555;
  char* __s556;
  unsigned long __len2557;
  unsigned long __how_much558;
  unsigned long __new_capacity559;
  char* __r560;
  this553 = v547;
  __pos554 = v548;
  __len1555 = v549;
  __s556 = v550;
  __len2557 = v551;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t561 = this553;
  unsigned long r562 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t561);
  unsigned long t563 = __pos554;
  unsigned long b564 = r562 - t563;
  unsigned long t565 = __len1555;
  unsigned long b566 = b564 - t565;
  __how_much558 = b566;
  unsigned long r567 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t561);
  unsigned long t568 = __len2557;
  unsigned long b569 = r567 + t568;
  unsigned long t570 = __len1555;
  unsigned long b571 = b569 - t570;
  __new_capacity559 = b571;
  unsigned long r572 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t561);
  char* r573 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t561, &__new_capacity559, r572);
  __r560 = r573;
    unsigned long t574 = __pos554;
    _Bool cast575 = (_Bool)t574;
    if (cast575) {
      char* t576 = __r560;
      char* r577 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t561);
      unsigned long t578 = __pos554;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t576, r577, t578);
    }
    char* t579 = __s556;
    _Bool cast580 = (_Bool)t579;
    _Bool ternary581;
    if (cast580) {
      unsigned long t582 = __len2557;
      _Bool cast583 = (_Bool)t582;
      ternary581 = (_Bool)cast583;
    } else {
      _Bool c584 = 0;
      ternary581 = (_Bool)c584;
    }
    if (ternary581) {
      char* t585 = __r560;
      unsigned long t586 = __pos554;
      char* ptr587 = &(t585)[t586];
      char* t588 = __s556;
      unsigned long t589 = __len2557;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr587, t588, t589);
    }
    unsigned long t590 = __how_much558;
    _Bool cast591 = (_Bool)t590;
    if (cast591) {
      char* t592 = __r560;
      unsigned long t593 = __pos554;
      char* ptr594 = &(t592)[t593];
      unsigned long t595 = __len2557;
      char* ptr596 = &(ptr594)[t595];
      char* r597 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t561);
      unsigned long t598 = __pos554;
      char* ptr599 = &(r597)[t598];
      unsigned long t600 = __len1555;
      char* ptr601 = &(ptr599)[t600];
      unsigned long t602 = __how_much558;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr596, ptr601, t602);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t561);
  char* t603 = __r560;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t561, t603);
  unsigned long t604 = __new_capacity559;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t561, t604);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v605, unsigned long v606, unsigned long v607, char* v608, unsigned long v609) {
bb610: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this611;
  unsigned long __pos612;
  unsigned long __len1613;
  char* __s614;
  unsigned long __len2615;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval616;
  unsigned long __old_size617;
  unsigned long __new_size618;
  this611 = v605;
  __pos612 = v606;
  __len1613 = v607;
  __s614 = v608;
  __len2615 = v609;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t619 = this611;
  unsigned long t620 = __len1613;
  unsigned long t621 = __len2615;
  char* cast622 = (char*)&(_str_8);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t619, t620, t621, cast622);
  unsigned long r623 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t619);
  __old_size617 = r623;
  unsigned long t624 = __old_size617;
  unsigned long t625 = __len2615;
  unsigned long b626 = t624 + t625;
  unsigned long t627 = __len1613;
  unsigned long b628 = b626 - t627;
  __new_size618 = b628;
    unsigned long t629 = __new_size618;
    unsigned long r630 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t619);
    _Bool c631 = ((t629 <= r630)) ? 1 : 0;
    if (c631) {
      char* __p632;
      unsigned long __how_much633;
      char* r634 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t619);
      unsigned long t635 = __pos612;
      char* ptr636 = &(r634)[t635];
      __p632 = ptr636;
      unsigned long t637 = __old_size617;
      unsigned long t638 = __pos612;
      unsigned long b639 = t637 - t638;
      unsigned long t640 = __len1613;
      unsigned long b641 = b639 - t640;
      __how_much633 = b641;
        _Bool r642 = std__is_constant_evaluated();
        if (r642) {
          char* __newp643;
          struct std__allocator_char_* r644 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t619);
          unsigned long t645 = __new_size618;
          char* r646 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r644, t645);
          __newp643 = r646;
          char* t647 = __newp643;
          char* r648 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t619);
          unsigned long t649 = __pos612;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t647, r648, t649);
          char* t650 = __newp643;
          unsigned long t651 = __pos612;
          char* ptr652 = &(t650)[t651];
          char* t653 = __s614;
          unsigned long t654 = __len2615;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr652, t653, t654);
          char* t655 = __newp643;
          unsigned long t656 = __pos612;
          char* ptr657 = &(t655)[t656];
          unsigned long t658 = __len2615;
          char* ptr659 = &(ptr657)[t658];
          char* t660 = __p632;
          unsigned long t661 = __len1613;
          char* ptr662 = &(t660)[t661];
          unsigned long t663 = __how_much633;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr659, ptr662, t663);
          char* r664 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t619);
          char* t665 = __newp643;
          unsigned long t666 = __new_size618;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r664, t665, t666);
          struct std__allocator_char_* r667 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t619);
          char* t668 = __newp643;
          unsigned long t669 = __new_size618;
          std__allocator_char___deallocate(r667, t668, t669);
        } else {
            char* t670 = __s614;
            _Bool r671 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t619, t670);
            if (r671) {
                unsigned long t672 = __how_much633;
                _Bool cast673 = (_Bool)t672;
                _Bool ternary674;
                if (cast673) {
                  unsigned long t675 = __len1613;
                  unsigned long t676 = __len2615;
                  _Bool c677 = ((t675 != t676)) ? 1 : 0;
                  ternary674 = (_Bool)c677;
                } else {
                  _Bool c678 = 0;
                  ternary674 = (_Bool)c678;
                }
                if (ternary674) {
                  char* t679 = __p632;
                  unsigned long t680 = __len2615;
                  char* ptr681 = &(t679)[t680];
                  char* t682 = __p632;
                  unsigned long t683 = __len1613;
                  char* ptr684 = &(t682)[t683];
                  unsigned long t685 = __how_much633;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr681, ptr684, t685);
                }
                unsigned long t686 = __len2615;
                _Bool cast687 = (_Bool)t686;
                if (cast687) {
                  char* t688 = __p632;
                  char* t689 = __s614;
                  unsigned long t690 = __len2615;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t688, t689, t690);
                }
            } else {
              char* t691 = __p632;
              unsigned long t692 = __len1613;
              char* t693 = __s614;
              unsigned long t694 = __len2615;
              unsigned long t695 = __how_much633;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t619, t691, t692, t693, t694, t695);
            }
        }
    } else {
      unsigned long t696 = __pos612;
      unsigned long t697 = __len1613;
      char* t698 = __s614;
      unsigned long t699 = __len2615;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t619, t696, t697, t698, t699);
    }
  unsigned long t700 = __new_size618;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t619, t700);
  __retval616 = t619;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t701 = __retval616;
  return t701;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v702, unsigned long v703, char* v704) {
bb705: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this706;
  unsigned long __pos707;
  char* __s708;
  unsigned long __retval709;
  this706 = v702;
  __pos707 = v703;
  __s708 = v704;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t710 = this706;
    unsigned long t711 = __pos707;
    unsigned long r712 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t710);
    _Bool c713 = ((t711 > r712)) ? 1 : 0;
    if (c713) {
      char* cast714 = (char*)&(_str_9);
      char* t715 = __s708;
      unsigned long t716 = __pos707;
      unsigned long r717 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t710);
      std____throw_out_of_range_fmt(cast714, t715, t716, r717);
    }
  unsigned long t718 = __pos707;
  __retval709 = t718;
  unsigned long t719 = __retval709;
  return t719;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v720, unsigned long v721, unsigned long v722) {
bb723: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this724;
  unsigned long __pos725;
  unsigned long __off726;
  unsigned long __retval727;
  _Bool __testoff728;
  this724 = v720;
  __pos725 = v721;
  __off726 = v722;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t729 = this724;
  unsigned long t730 = __off726;
  unsigned long r731 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t729);
  unsigned long t732 = __pos725;
  unsigned long b733 = r731 - t732;
  _Bool c734 = ((t730 < b733)) ? 1 : 0;
  __testoff728 = c734;
  _Bool t735 = __testoff728;
  unsigned long ternary736;
  if (t735) {
    unsigned long t737 = __off726;
    ternary736 = (unsigned long)t737;
  } else {
    unsigned long r738 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t729);
    unsigned long t739 = __pos725;
    unsigned long b740 = r738 - t739;
    ternary736 = (unsigned long)b740;
  }
  __retval727 = ternary736;
  unsigned long t741 = __retval727;
  return t741;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignERKS4_mm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v742, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v743, unsigned long v744, unsigned long v745) {
bb746: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this747;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str748;
  unsigned long __pos749;
  unsigned long __n750;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval751;
  this747 = v742;
  __str748 = v743;
  __pos749 = v744;
  __n750 = v745;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t752 = this747;
  unsigned long c753 = 0;
  unsigned long r754 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t752);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t755 = __str748;
  char* r756 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t755);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t757 = __str748;
  unsigned long t758 = __pos749;
  char* cast759 = (char*)&(_str_7);
  unsigned long r760 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t757, t758, cast759);
  char* ptr761 = &(r756)[r760];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t762 = __str748;
  unsigned long t763 = __pos749;
  unsigned long t764 = __n750;
  unsigned long r765 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t762, t763, t764);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r766 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t752, c753, r754, ptr761, r765);
  __retval751 = r766;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t767 = __retval751;
  return t767;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v768, char* v769, unsigned long v770) {
bb771: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this772;
  char* __s773;
  unsigned long __n774;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval775;
  this772 = v768;
  __s773 = v769;
  __n774 = v770;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t776 = this772;
  unsigned long c777 = 0;
  unsigned long r778 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t776);
  char* t779 = __s773;
  unsigned long t780 = __n774;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r781 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t776, c777, r778, t779, t780);
  __retval775 = r781;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t782 = __retval775;
  return t782;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v783, char* v784) {
bb785: ;
  char* __c1786;
  char* __c2787;
  _Bool __retval788;
  __c1786 = v783;
  __c2787 = v784;
  char* t789 = __c1786;
  char t790 = *t789;
  unsigned char cast791 = (unsigned char)t790;
  int cast792 = (int)cast791;
  char* t793 = __c2787;
  char t794 = *t793;
  unsigned char cast795 = (unsigned char)t794;
  int cast796 = (int)cast795;
  _Bool c797 = ((cast792 < cast796)) ? 1 : 0;
  __retval788 = c797;
  _Bool t798 = __retval788;
  return t798;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v799, char* v800, unsigned long v801) {
bb802: ;
  char* __s1803;
  char* __s2804;
  unsigned long __n805;
  int __retval806;
  __s1803 = v799;
  __s2804 = v800;
  __n805 = v801;
    unsigned long t807 = __n805;
    unsigned long c808 = 0;
    _Bool c809 = ((t807 == c808)) ? 1 : 0;
    if (c809) {
      int c810 = 0;
      __retval806 = c810;
      int t811 = __retval806;
      return t811;
    }
    _Bool r812 = std____is_constant_evaluated();
    if (r812) {
        unsigned long __i813;
        unsigned long c814 = 0;
        __i813 = c814;
        while (1) {
          unsigned long t816 = __i813;
          unsigned long t817 = __n805;
          _Bool c818 = ((t816 < t817)) ? 1 : 0;
          if (!c818) break;
            unsigned long t819 = __i813;
            char* t820 = __s1803;
            char* ptr821 = &(t820)[t819];
            unsigned long t822 = __i813;
            char* t823 = __s2804;
            char* ptr824 = &(t823)[t822];
            _Bool r825 = std__char_traits_char___lt(ptr821, ptr824);
            if (r825) {
              int c826 = -1;
              __retval806 = c826;
              int t827 = __retval806;
              int ret_val828 = t827;
              return ret_val828;
            } else {
                unsigned long t829 = __i813;
                char* t830 = __s2804;
                char* ptr831 = &(t830)[t829];
                unsigned long t832 = __i813;
                char* t833 = __s1803;
                char* ptr834 = &(t833)[t832];
                _Bool r835 = std__char_traits_char___lt(ptr831, ptr834);
                if (r835) {
                  int c836 = 1;
                  __retval806 = c836;
                  int t837 = __retval806;
                  int ret_val838 = t837;
                  return ret_val838;
                }
            }
        for_step815: ;
          unsigned long t839 = __i813;
          unsigned long u840 = t839 + 1;
          __i813 = u840;
        }
      int c841 = 0;
      __retval806 = c841;
      int t842 = __retval806;
      return t842;
    }
  char* t843 = __s1803;
  void* cast844 = (void*)t843;
  char* t845 = __s2804;
  void* cast846 = (void*)t845;
  unsigned long t847 = __n805;
  int r848 = memcmp(cast844, cast846, t847);
  __retval806 = r848;
  int t849 = __retval806;
  return t849;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v850) {
bb851: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this852;
  char* __retval853;
  this852 = v850;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t854 = this852;
  char* r855 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t854);
  __retval853 = r855;
  char* t856 = __retval853;
  return t856;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v857, char* v858) {
bb859: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs860;
  char* __rhs861;
  _Bool __retval862;
  __lhs860 = v857;
  __rhs861 = v858;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t863 = __lhs860;
  unsigned long r864 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t863);
  char* t865 = __rhs861;
  unsigned long r866 = std__char_traits_char___length(t865);
  _Bool c867 = ((r864 == r866)) ? 1 : 0;
  _Bool ternary868;
  if (c867) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t869 = __lhs860;
    char* r870 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t869);
    char* t871 = __rhs861;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t872 = __lhs860;
    unsigned long r873 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t872);
    int r874 = std__char_traits_char___compare(r870, t871, r873);
    _Bool cast875 = (_Bool)r874;
    _Bool u876 = !cast875;
    ternary868 = (_Bool)u876;
  } else {
    _Bool c877 = 0;
    ternary868 = (_Bool)c877;
  }
  __retval862 = ternary868;
  _Bool t878 = __retval862;
  return t878;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v879) {
bb880: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this881;
  this881 = v879;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t882 = this881;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t882);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t882->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb883: ;
  int __retval884;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str885;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ base886;
  struct std__allocator_char_ ref_tmp0887;
  int c888 = 0;
  __retval884 = c888;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str885);
    char* cast889 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp0887);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&base886, cast889, &ref_tmp0887);
    {
      std__allocator_char____allocator(&ref_tmp0887);
    }
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r890 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_2(&str885, &base886);
      struct std__basic_ostream_char__std__char_traits_char__* r891 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str885);
      struct std__basic_ostream_char__std__char_traits_char__* r892 = std__ostream__operator___std__ostream_____(r891, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      unsigned long c893 = 10;
      unsigned long c894 = 9;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r895 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_3(&str885, &base886, c893, c894);
      struct std__basic_ostream_char__std__char_traits_char__* r896 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str885);
      struct std__basic_ostream_char__std__char_traits_char__* r897 = std__ostream__operator___std__ostream_____(r896, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      char* cast898 = (char*)&(_str_1);
      unsigned long c899 = 7;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r900 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(&str885, cast898, c899);
      struct std__basic_ostream_char__std__char_traits_char__* r901 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str885);
      struct std__basic_ostream_char__std__char_traits_char__* r902 = std__ostream__operator___std__ostream_____(r901, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      char* cast903 = (char*)&(_str_2);
      _Bool r904 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str885, cast903);
      if (r904) {
      } else {
        char* cast905 = (char*)&(_str_3);
        char* c906 = (char*)_str_4;
        unsigned int c907 = 31;
        char* cast908 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast905, c906, c907, cast908);
      }
      int c909 = 0;
      __retval884 = c909;
      int t910 = __retval884;
      int ret_val911 = t910;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&base886);
      }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str885);
      }
      return ret_val911;
  int t912 = __retval884;
  return t912;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v913) {
bb914: ;
  char* __r915;
  char* __retval916;
  __r915 = v913;
  char* t917 = __r915;
  __retval916 = t917;
  char* t918 = __retval916;
  return t918;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v919) {
bb920: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this921;
  char* __retval922;
  this921 = v919;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t923 = this921;
  char* cast924 = (char*)&(t923->field2._M_local_buf);
  char* r925 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast924);
  __retval922 = r925;
  char* t926 = __retval922;
  return t926;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v927, char* v928, struct std__allocator_char_* v929) {
bb930: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this931;
  char* __dat932;
  struct std__allocator_char_* __a933;
  this931 = v927;
  __dat932 = v928;
  __a933 = v929;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t934 = this931;
  struct std__allocator_char_* base935 = (struct std__allocator_char_*)((char *)t934 + 0);
  struct std__allocator_char_* t936 = __a933;
  std__allocator_char___allocator(base935, t936);
    char* t937 = __dat932;
    t934->_M_p = t937;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb938: ;
  _Bool __retval939;
    _Bool c940 = 0;
    __retval939 = c940;
    _Bool t941 = __retval939;
    return t941;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v942) {
bb943: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this944;
  this944 = v942;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t945 = this944;
    _Bool r946 = std__is_constant_evaluated();
    if (r946) {
        unsigned long __i947;
        unsigned long c948 = 0;
        __i947 = c948;
        while (1) {
          unsigned long t950 = __i947;
          unsigned long c951 = 15;
          _Bool c952 = ((t950 <= c951)) ? 1 : 0;
          if (!c952) break;
          char c953 = 0;
          unsigned long t954 = __i947;
          t945->field2._M_local_buf[t954] = c953;
        for_step949: ;
          unsigned long t955 = __i947;
          unsigned long u956 = t955 + 1;
          __i947 = u956;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v957, unsigned long v958) {
bb959: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this960;
  unsigned long __length961;
  this960 = v957;
  __length961 = v958;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t962 = this960;
  unsigned long t963 = __length961;
  t962->_M_string_length = t963;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb964: ;
  _Bool __retval965;
    _Bool c966 = 0;
    __retval965 = c966;
    _Bool t967 = __retval965;
    return t967;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v968, char* v969) {
bb970: ;
  char* __location971;
  char* __args972;
  char* __retval973;
  void* __loc974;
  __location971 = v968;
  __args972 = v969;
  char* t975 = __location971;
  void* cast976 = (void*)t975;
  __loc974 = cast976;
    void* t977 = __loc974;
    char* cast978 = (char*)t977;
    char* t979 = __args972;
    char t980 = *t979;
    *cast978 = t980;
    __retval973 = cast978;
    char* t981 = __retval973;
    return t981;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v982, char* v983) {
bb984: ;
  char* __c1985;
  char* __c2986;
  __c1985 = v982;
  __c2986 = v983;
    _Bool r987 = std____is_constant_evaluated();
    if (r987) {
      char* t988 = __c1985;
      char* t989 = __c2986;
      char* r990 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t988, t989);
    } else {
      char* t991 = __c2986;
      char t992 = *t991;
      char* t993 = __c1985;
      *t993 = t992;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v994) {
bb995: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this996;
  char* __retval997;
  this996 = v994;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t998 = this996;
  char* t999 = t998->_M_dataplus._M_p;
  __retval997 = t999;
  char* t1000 = __retval997;
  return t1000;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1001, unsigned long v1002) {
bb1003: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1004;
  unsigned long __n1005;
  char ref_tmp01006;
  this1004 = v1001;
  __n1005 = v1002;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1007 = this1004;
  unsigned long t1008 = __n1005;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1007, t1008);
  unsigned long t1009 = __n1005;
  char* r1010 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1007);
  char* ptr1011 = &(r1010)[t1009];
  char c1012 = 0;
  ref_tmp01006 = c1012;
  std__char_traits_char___assign(ptr1011, &ref_tmp01006);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1013) {
bb1014: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1015;
  this1015 = v1013;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1016 = this1015;
  {
    struct std__allocator_char_* base1017 = (struct std__allocator_char_*)((char *)t1016 + 0);
    std__allocator_char____allocator(base1017);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1018, struct std____new_allocator_char_* v1019) {
bb1020: ;
  struct std____new_allocator_char_* this1021;
  struct std____new_allocator_char_* unnamed1022;
  this1021 = v1018;
  unnamed1022 = v1019;
  struct std____new_allocator_char_* t1023 = this1021;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1024) {
bb1025: ;
  struct std____new_allocator_char_* this1026;
  this1026 = v1024;
  struct std____new_allocator_char_* t1027 = this1026;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1028, char* v1029, struct std__allocator_char_* v1030) {
bb1031: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1032;
  char* __dat1033;
  struct std__allocator_char_* __a1034;
  this1032 = v1028;
  __dat1033 = v1029;
  __a1034 = v1030;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1035 = this1032;
  struct std__allocator_char_* base1036 = (struct std__allocator_char_*)((char *)t1035 + 0);
  struct std__allocator_char_* t1037 = __a1034;
  std__allocator_char___allocator(base1036, t1037);
    char* t1038 = __dat1033;
    t1035->_M_p = t1038;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1039, char* v1040) {
bb1041: ;
  char* __c11042;
  char* __c21043;
  _Bool __retval1044;
  __c11042 = v1039;
  __c21043 = v1040;
  char* t1045 = __c11042;
  char t1046 = *t1045;
  int cast1047 = (int)t1046;
  char* t1048 = __c21043;
  char t1049 = *t1048;
  int cast1050 = (int)t1049;
  _Bool c1051 = ((cast1047 == cast1050)) ? 1 : 0;
  __retval1044 = c1051;
  _Bool t1052 = __retval1044;
  return t1052;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1053) {
bb1054: ;
  char* __p1055;
  unsigned long __retval1056;
  unsigned long __i1057;
  __p1055 = v1053;
  unsigned long c1058 = 0;
  __i1057 = c1058;
    char ref_tmp01059;
    while (1) {
      unsigned long t1060 = __i1057;
      char* t1061 = __p1055;
      char* ptr1062 = &(t1061)[t1060];
      char c1063 = 0;
      ref_tmp01059 = c1063;
      _Bool r1064 = __gnu_cxx__char_traits_char___eq(ptr1062, &ref_tmp01059);
      _Bool u1065 = !r1064;
      if (!u1065) break;
      unsigned long t1066 = __i1057;
      unsigned long u1067 = t1066 + 1;
      __i1057 = u1067;
    }
  unsigned long t1068 = __i1057;
  __retval1056 = t1068;
  unsigned long t1069 = __retval1056;
  return t1069;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1070) {
bb1071: ;
  char* __s1072;
  unsigned long __retval1073;
  __s1072 = v1070;
    _Bool r1074 = std____is_constant_evaluated();
    if (r1074) {
      char* t1075 = __s1072;
      unsigned long r1076 = __gnu_cxx__char_traits_char___length(t1075);
      __retval1073 = r1076;
      unsigned long t1077 = __retval1073;
      return t1077;
    }
  char* t1078 = __s1072;
  unsigned long r1079 = strlen(t1078);
  __retval1073 = r1079;
  unsigned long t1080 = __retval1073;
  return t1080;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1081, char* v1082, struct std__random_access_iterator_tag v1083) {
bb1084: ;
  char* __first1085;
  char* __last1086;
  struct std__random_access_iterator_tag unnamed1087;
  long __retval1088;
  __first1085 = v1081;
  __last1086 = v1082;
  unnamed1087 = v1083;
  char* t1089 = __last1086;
  char* t1090 = __first1085;
  long diff1091 = t1089 - t1090;
  __retval1088 = diff1091;
  long t1092 = __retval1088;
  return t1092;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1093) {
bb1094: ;
  char** unnamed1095;
  struct std__random_access_iterator_tag __retval1096;
  unnamed1095 = v1093;
  struct std__random_access_iterator_tag t1097 = __retval1096;
  return t1097;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1098, char* v1099) {
bb1100: ;
  char* __first1101;
  char* __last1102;
  long __retval1103;
  struct std__random_access_iterator_tag agg_tmp01104;
  __first1101 = v1098;
  __last1102 = v1099;
  char* t1105 = __first1101;
  char* t1106 = __last1102;
  struct std__random_access_iterator_tag r1107 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1101);
  agg_tmp01104 = r1107;
  struct std__random_access_iterator_tag t1108 = agg_tmp01104;
  long r1109 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1105, t1106, t1108);
  __retval1103 = r1109;
  long t1110 = __retval1103;
  return t1110;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1111, char* v1112) {
bb1113: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1114;
  char* __p1115;
  this1114 = v1111;
  __p1115 = v1112;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1116 = this1114;
  char* t1117 = __p1115;
  t1116->_M_dataplus._M_p = t1117;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1118) {
bb1119: ;
  struct std__allocator_char_* __a1120;
  unsigned long __retval1121;
  __a1120 = v1118;
  unsigned long c1122 = -1;
  unsigned long c1123 = 1;
  unsigned long b1124 = c1122 / c1123;
  __retval1121 = b1124;
  unsigned long t1125 = __retval1121;
  return t1125;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1126) {
bb1127: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1128;
  struct std__allocator_char_* __retval1129;
  this1128 = v1126;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1130 = this1128;
  struct std__allocator_char_* base1131 = (struct std__allocator_char_*)((char *)&(t1130->_M_dataplus) + 0);
  __retval1129 = base1131;
  struct std__allocator_char_* t1132 = __retval1129;
  return t1132;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1133, unsigned long* v1134) {
bb1135: ;
  unsigned long* __a1136;
  unsigned long* __b1137;
  unsigned long* __retval1138;
  __a1136 = v1133;
  __b1137 = v1134;
    unsigned long* t1139 = __b1137;
    unsigned long t1140 = *t1139;
    unsigned long* t1141 = __a1136;
    unsigned long t1142 = *t1141;
    _Bool c1143 = ((t1140 < t1142)) ? 1 : 0;
    if (c1143) {
      unsigned long* t1144 = __b1137;
      __retval1138 = t1144;
      unsigned long* t1145 = __retval1138;
      return t1145;
    }
  unsigned long* t1146 = __a1136;
  __retval1138 = t1146;
  unsigned long* t1147 = __retval1138;
  return t1147;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1148) {
bb1149: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1150;
  unsigned long __retval1151;
  unsigned long __diffmax1152;
  unsigned long __allocmax1153;
  this1150 = v1148;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1154 = this1150;
  unsigned long c1155 = 9223372036854775807;
  __diffmax1152 = c1155;
  struct std__allocator_char_* r1156 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1154);
  unsigned long r1157 = std__allocator_traits_std__allocator_char_____max_size(r1156);
  __allocmax1153 = r1157;
  unsigned long* r1158 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1152, &__allocmax1153);
  unsigned long t1159 = *r1158;
  unsigned long c1160 = 1;
  unsigned long b1161 = t1159 - c1160;
  __retval1151 = b1161;
  unsigned long t1162 = __retval1151;
  return t1162;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1163) {
bb1164: ;
  struct std____new_allocator_char_* this1165;
  unsigned long __retval1166;
  this1165 = v1163;
  struct std____new_allocator_char_* t1167 = this1165;
  unsigned long c1168 = 9223372036854775807;
  unsigned long c1169 = 1;
  unsigned long b1170 = c1168 / c1169;
  __retval1166 = b1170;
  unsigned long t1171 = __retval1166;
  return t1171;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1172, unsigned long v1173, void* v1174) {
bb1175: ;
  struct std____new_allocator_char_* this1176;
  unsigned long __n1177;
  void* unnamed1178;
  char* __retval1179;
  this1176 = v1172;
  __n1177 = v1173;
  unnamed1178 = v1174;
  struct std____new_allocator_char_* t1180 = this1176;
    unsigned long t1181 = __n1177;
    unsigned long r1182 = std____new_allocator_char____M_max_size___const(t1180);
    _Bool c1183 = ((t1181 > r1182)) ? 1 : 0;
    if (c1183) {
        unsigned long t1184 = __n1177;
        unsigned long c1185 = -1;
        unsigned long c1186 = 1;
        unsigned long b1187 = c1185 / c1186;
        _Bool c1188 = ((t1184 > b1187)) ? 1 : 0;
        if (c1188) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1189 = 1;
    unsigned long c1190 = 16;
    _Bool c1191 = ((c1189 > c1190)) ? 1 : 0;
    if (c1191) {
      unsigned long __al1192;
      unsigned long c1193 = 1;
      __al1192 = c1193;
      unsigned long t1194 = __n1177;
      unsigned long c1195 = 1;
      unsigned long b1196 = t1194 * c1195;
      unsigned long t1197 = __al1192;
      void* r1198 = operator_new_2(b1196, t1197);
      char* cast1199 = (char*)r1198;
      __retval1179 = cast1199;
      char* t1200 = __retval1179;
      return t1200;
    }
  unsigned long t1201 = __n1177;
  unsigned long c1202 = 1;
  unsigned long b1203 = t1201 * c1202;
  void* r1204 = operator_new(b1203);
  char* cast1205 = (char*)r1204;
  __retval1179 = cast1205;
  char* t1206 = __retval1179;
  return t1206;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1207, unsigned long v1208) {
bb1209: ;
  struct std__allocator_char_* this1210;
  unsigned long __n1211;
  char* __retval1212;
  this1210 = v1207;
  __n1211 = v1208;
  struct std__allocator_char_* t1213 = this1210;
    _Bool r1214 = std____is_constant_evaluated();
    if (r1214) {
        unsigned long t1215 = __n1211;
        unsigned long c1216 = 1;
        unsigned long ovr1217;
        _Bool ovf1218 = __builtin_mul_overflow(t1215, c1216, &ovr1217);
        __n1211 = ovr1217;
        if (ovf1218) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1219 = __n1211;
      void* r1220 = operator_new(t1219);
      char* cast1221 = (char*)r1220;
      __retval1212 = cast1221;
      char* t1222 = __retval1212;
      return t1222;
    }
  struct std____new_allocator_char_* base1223 = (struct std____new_allocator_char_*)((char *)t1213 + 0);
  unsigned long t1224 = __n1211;
  void* c1225 = ((void*)0);
  char* r1226 = std____new_allocator_char___allocate(base1223, t1224, c1225);
  __retval1212 = r1226;
  char* t1227 = __retval1212;
  return t1227;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1228, unsigned long v1229) {
bb1230: ;
  struct std__allocator_char_* __a1231;
  unsigned long __n1232;
  char* __retval1233;
  __a1231 = v1228;
  __n1232 = v1229;
  struct std__allocator_char_* t1234 = __a1231;
  unsigned long t1235 = __n1232;
  char* r1236 = std__allocator_char___allocate(t1234, t1235);
  __retval1233 = r1236;
  char* t1237 = __retval1233;
  return t1237;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1238, unsigned long v1239) {
bb1240: ;
  struct std__allocator_char_* __a1241;
  unsigned long __n1242;
  char* __retval1243;
  char* __p1244;
  __a1241 = v1238;
  __n1242 = v1239;
  struct std__allocator_char_* t1245 = __a1241;
  unsigned long t1246 = __n1242;
  char* r1247 = std__allocator_traits_std__allocator_char_____allocate(t1245, t1246);
  __p1244 = r1247;
  char* t1248 = __p1244;
  __retval1243 = t1248;
  char* t1249 = __retval1243;
  return t1249;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1250) {
bb1251: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1252;
  struct std__allocator_char_* __retval1253;
  this1252 = v1250;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1254 = this1252;
  struct std__allocator_char_* base1255 = (struct std__allocator_char_*)((char *)&(t1254->_M_dataplus) + 0);
  __retval1253 = base1255;
  struct std__allocator_char_* t1256 = __retval1253;
  return t1256;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1257, unsigned long* v1258, unsigned long v1259) {
bb1260: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1261;
  unsigned long* __capacity1262;
  unsigned long __old_capacity1263;
  char* __retval1264;
  this1261 = v1257;
  __capacity1262 = v1258;
  __old_capacity1263 = v1259;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1265 = this1261;
    unsigned long* t1266 = __capacity1262;
    unsigned long t1267 = *t1266;
    unsigned long r1268 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1265);
    _Bool c1269 = ((t1267 > r1268)) ? 1 : 0;
    if (c1269) {
      char* cast1270 = (char*)&(_str_6);
      std____throw_length_error(cast1270);
    }
    unsigned long* t1271 = __capacity1262;
    unsigned long t1272 = *t1271;
    unsigned long t1273 = __old_capacity1263;
    _Bool c1274 = ((t1272 > t1273)) ? 1 : 0;
    _Bool ternary1275;
    if (c1274) {
      unsigned long* t1276 = __capacity1262;
      unsigned long t1277 = *t1276;
      unsigned long c1278 = 2;
      unsigned long t1279 = __old_capacity1263;
      unsigned long b1280 = c1278 * t1279;
      _Bool c1281 = ((t1277 < b1280)) ? 1 : 0;
      ternary1275 = (_Bool)c1281;
    } else {
      _Bool c1282 = 0;
      ternary1275 = (_Bool)c1282;
    }
    if (ternary1275) {
      unsigned long c1283 = 2;
      unsigned long t1284 = __old_capacity1263;
      unsigned long b1285 = c1283 * t1284;
      unsigned long* t1286 = __capacity1262;
      *t1286 = b1285;
        unsigned long* t1287 = __capacity1262;
        unsigned long t1288 = *t1287;
        unsigned long r1289 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1265);
        _Bool c1290 = ((t1288 > r1289)) ? 1 : 0;
        if (c1290) {
          unsigned long r1291 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1265);
          unsigned long* t1292 = __capacity1262;
          *t1292 = r1291;
        }
    }
  struct std__allocator_char_* r1293 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1265);
  unsigned long* t1294 = __capacity1262;
  unsigned long t1295 = *t1294;
  unsigned long c1296 = 1;
  unsigned long b1297 = t1295 + c1296;
  char* r1298 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1293, b1297);
  __retval1264 = r1298;
  char* t1299 = __retval1264;
  return t1299;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1300, unsigned long v1301) {
bb1302: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1303;
  unsigned long __capacity1304;
  this1303 = v1300;
  __capacity1304 = v1301;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1305 = this1303;
  unsigned long t1306 = __capacity1304;
  t1305->field2._M_allocated_capacity = t1306;
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1307, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1308) {
bb1309: ;
  struct _Guard* this1310;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1311;
  this1310 = v1307;
  __s1311 = v1308;
  struct _Guard* t1312 = this1310;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1313 = __s1311;
  t1312->_M_guarded = t1313;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1314, char* v1315, unsigned long v1316) {
bb1317: ;
  char* __s11318;
  char* __s21319;
  unsigned long __n1320;
  char* __retval1321;
  __s11318 = v1314;
  __s21319 = v1315;
  __n1320 = v1316;
    unsigned long t1322 = __n1320;
    unsigned long c1323 = 0;
    _Bool c1324 = ((t1322 == c1323)) ? 1 : 0;
    if (c1324) {
      char* t1325 = __s11318;
      __retval1321 = t1325;
      char* t1326 = __retval1321;
      return t1326;
    }
    _Bool r1327 = std____is_constant_evaluated();
    if (r1327) {
        unsigned long __i1328;
        unsigned long c1329 = 0;
        __i1328 = c1329;
        while (1) {
          unsigned long t1331 = __i1328;
          unsigned long t1332 = __n1320;
          _Bool c1333 = ((t1331 < t1332)) ? 1 : 0;
          if (!c1333) break;
          char* t1334 = __s11318;
          unsigned long t1335 = __i1328;
          char* ptr1336 = &(t1334)[t1335];
          unsigned long t1337 = __i1328;
          char* t1338 = __s21319;
          char* ptr1339 = &(t1338)[t1337];
          char* r1340 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1336, ptr1339);
        for_step1330: ;
          unsigned long t1341 = __i1328;
          unsigned long u1342 = t1341 + 1;
          __i1328 = u1342;
        }
      char* t1343 = __s11318;
      __retval1321 = t1343;
      char* t1344 = __retval1321;
      return t1344;
    }
  char* t1345 = __s11318;
  void* cast1346 = (void*)t1345;
  char* t1347 = __s21319;
  void* cast1348 = (void*)t1347;
  unsigned long t1349 = __n1320;
  unsigned long c1350 = 1;
  unsigned long b1351 = t1349 * c1350;
  void* r1352 = memcpy(cast1346, cast1348, b1351);
  char* t1353 = __s11318;
  __retval1321 = t1353;
  char* t1354 = __retval1321;
  return t1354;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1355, char* v1356, unsigned long v1357) {
bb1358: ;
  char* __s11359;
  char* __s21360;
  unsigned long __n1361;
  char* __retval1362;
  __s11359 = v1355;
  __s21360 = v1356;
  __n1361 = v1357;
    unsigned long t1363 = __n1361;
    unsigned long c1364 = 0;
    _Bool c1365 = ((t1363 == c1364)) ? 1 : 0;
    if (c1365) {
      char* t1366 = __s11359;
      __retval1362 = t1366;
      char* t1367 = __retval1362;
      return t1367;
    }
    _Bool r1368 = std____is_constant_evaluated();
    if (r1368) {
      char* t1369 = __s11359;
      char* t1370 = __s21360;
      unsigned long t1371 = __n1361;
      char* r1372 = __gnu_cxx__char_traits_char___copy(t1369, t1370, t1371);
      __retval1362 = r1372;
      char* t1373 = __retval1362;
      return t1373;
    }
  char* t1374 = __s11359;
  void* cast1375 = (void*)t1374;
  char* t1376 = __s21360;
  void* cast1377 = (void*)t1376;
  unsigned long t1378 = __n1361;
  void* r1379 = memcpy(cast1375, cast1377, t1378);
  char* cast1380 = (char*)r1379;
  __retval1362 = cast1380;
  char* t1381 = __retval1362;
  return t1381;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1382, char* v1383, unsigned long v1384) {
bb1385: ;
  char* __d1386;
  char* __s1387;
  unsigned long __n1388;
  __d1386 = v1382;
  __s1387 = v1383;
  __n1388 = v1384;
    unsigned long t1389 = __n1388;
    unsigned long c1390 = 1;
    _Bool c1391 = ((t1389 == c1390)) ? 1 : 0;
    if (c1391) {
      char* t1392 = __d1386;
      char* t1393 = __s1387;
      std__char_traits_char___assign(t1392, t1393);
    } else {
      char* t1394 = __d1386;
      char* t1395 = __s1387;
      unsigned long t1396 = __n1388;
      char* r1397 = std__char_traits_char___copy(t1394, t1395, t1396);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1398) {
bb1399: ;
  char* __it1400;
  char* __retval1401;
  __it1400 = v1398;
  char* t1402 = __it1400;
  __retval1401 = t1402;
  char* t1403 = __retval1401;
  return t1403;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1404, char* v1405, char* v1406) {
bb1407: ;
  char* __p1408;
  char* __k11409;
  char* __k21410;
  __p1408 = v1404;
  __k11409 = v1405;
  __k21410 = v1406;
    char* t1411 = __p1408;
    char* t1412 = __k11409;
    char* r1413 = char_const__std____niter_base_char_const__(t1412);
    char* t1414 = __k21410;
    char* t1415 = __k11409;
    long diff1416 = t1414 - t1415;
    unsigned long cast1417 = (unsigned long)diff1416;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1411, r1413, cast1417);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1418) {
bb1419: ;
  struct _Guard* this1420;
  this1420 = v1418;
  struct _Guard* t1421 = this1420;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1422 = t1421->_M_guarded;
    _Bool cast1423 = (_Bool)t1422;
    if (cast1423) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1424 = t1421->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1424);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1425, char* v1426, char* v1427, struct std__forward_iterator_tag v1428) {
bb1429: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1430;
  char* __beg1431;
  char* __end1432;
  struct std__forward_iterator_tag unnamed1433;
  unsigned long __dnew1434;
  struct _Guard __guard1435;
  this1430 = v1425;
  __beg1431 = v1426;
  __end1432 = v1427;
  unnamed1433 = v1428;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1436 = this1430;
  char* t1437 = __beg1431;
  char* t1438 = __end1432;
  long r1439 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1437, t1438);
  unsigned long cast1440 = (unsigned long)r1439;
  __dnew1434 = cast1440;
    unsigned long t1441 = __dnew1434;
    unsigned long c1442 = 15;
    _Bool c1443 = ((t1441 > c1442)) ? 1 : 0;
    if (c1443) {
      unsigned long c1444 = 0;
      char* r1445 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1436, &__dnew1434, c1444);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1436, r1445);
      unsigned long t1446 = __dnew1434;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1436, t1446);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1436);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1435, t1436);
    char* r1447 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1436);
    char* t1448 = __beg1431;
    char* t1449 = __end1432;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1447, t1448, t1449);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1450 = ((void*)0);
    __guard1435._M_guarded = c1450;
    unsigned long t1451 = __dnew1434;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1436, t1451);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1435);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1452) {
bb1453: ;
  char* __r1454;
  char* __retval1455;
  __r1454 = v1452;
  char* t1456 = __r1454;
  __retval1455 = t1456;
  char* t1457 = __retval1455;
  return t1457;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1458) {
bb1459: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1460;
  char* __retval1461;
  this1460 = v1458;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1462 = this1460;
  char* cast1463 = (char*)&(t1462->field2._M_local_buf);
  char* r1464 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1463);
  __retval1461 = r1464;
  char* t1465 = __retval1461;
  return t1465;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1466) {
bb1467: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1468;
  _Bool __retval1469;
  this1468 = v1466;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1470 = this1468;
    char* r1471 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1470);
    char* r1472 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1470);
    _Bool c1473 = ((r1471 == r1472)) ? 1 : 0;
    if (c1473) {
        unsigned long t1474 = t1470->_M_string_length;
        unsigned long c1475 = 15;
        _Bool c1476 = ((t1474 > c1475)) ? 1 : 0;
        if (c1476) {
          __builtin_unreachable();
        }
      _Bool c1477 = 1;
      __retval1469 = c1477;
      _Bool t1478 = __retval1469;
      return t1478;
    }
  _Bool c1479 = 0;
  __retval1469 = c1479;
  _Bool t1480 = __retval1469;
  return t1480;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1481, char* v1482, unsigned long v1483) {
bb1484: ;
  struct std____new_allocator_char_* this1485;
  char* __p1486;
  unsigned long __n1487;
  this1485 = v1481;
  __p1486 = v1482;
  __n1487 = v1483;
  struct std____new_allocator_char_* t1488 = this1485;
    unsigned long c1489 = 1;
    unsigned long c1490 = 16;
    _Bool c1491 = ((c1489 > c1490)) ? 1 : 0;
    if (c1491) {
      char* t1492 = __p1486;
      void* cast1493 = (void*)t1492;
      unsigned long t1494 = __n1487;
      unsigned long c1495 = 1;
      unsigned long b1496 = t1494 * c1495;
      unsigned long c1497 = 1;
      operator_delete_3(cast1493, b1496, c1497);
      return;
    }
  char* t1498 = __p1486;
  void* cast1499 = (void*)t1498;
  unsigned long t1500 = __n1487;
  unsigned long c1501 = 1;
  unsigned long b1502 = t1500 * c1501;
  operator_delete_2(cast1499, b1502);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1503, char* v1504, unsigned long v1505) {
bb1506: ;
  struct std__allocator_char_* this1507;
  char* __p1508;
  unsigned long __n1509;
  this1507 = v1503;
  __p1508 = v1504;
  __n1509 = v1505;
  struct std__allocator_char_* t1510 = this1507;
    _Bool r1511 = std____is_constant_evaluated();
    if (r1511) {
      char* t1512 = __p1508;
      void* cast1513 = (void*)t1512;
      operator_delete(cast1513);
      return;
    }
  struct std____new_allocator_char_* base1514 = (struct std____new_allocator_char_*)((char *)t1510 + 0);
  char* t1515 = __p1508;
  unsigned long t1516 = __n1509;
  std____new_allocator_char___deallocate(base1514, t1515, t1516);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1517, char* v1518, unsigned long v1519) {
bb1520: ;
  struct std__allocator_char_* __a1521;
  char* __p1522;
  unsigned long __n1523;
  __a1521 = v1517;
  __p1522 = v1518;
  __n1523 = v1519;
  struct std__allocator_char_* t1524 = __a1521;
  char* t1525 = __p1522;
  unsigned long t1526 = __n1523;
  std__allocator_char___deallocate(t1524, t1525, t1526);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1527, unsigned long v1528) {
bb1529: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1530;
  unsigned long __size1531;
  this1530 = v1527;
  __size1531 = v1528;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1532 = this1530;
  struct std__allocator_char_* r1533 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1532);
  char* r1534 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1532);
  unsigned long t1535 = __size1531;
  unsigned long c1536 = 1;
  unsigned long b1537 = t1535 + c1536;
  std__allocator_traits_std__allocator_char_____deallocate(r1533, r1534, b1537);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1538) {
bb1539: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1540;
  this1540 = v1538;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1541 = this1540;
    _Bool r1542 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1541);
    _Bool u1543 = !r1542;
    if (u1543) {
      unsigned long t1544 = t1541->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1541, t1544);
    }
  return;
}

