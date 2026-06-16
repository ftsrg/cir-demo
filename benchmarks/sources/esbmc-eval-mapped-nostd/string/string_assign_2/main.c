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
char _str_1[10] = "brown fox";
char _str_2[19] = "str == \"brown fox\"";
char _str_3[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_assign_2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[50] = "basic_string: construction from null is not valid";
char _str_5[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_6[21] = "basic_string::assign";
char _str_7[25] = "basic_string::_M_replace";
char _str_8[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, unsigned long p2, unsigned long p3);
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
        char* cast27 = (char*)&(_str_4);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v145, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v146) {
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
  char* cast622 = (char*)&(_str_7);
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
      char* cast714 = (char*)&(_str_8);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v742, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v743, unsigned long v744, unsigned long v745) {
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
  char* cast759 = (char*)&(_str_6);
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

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v768, char* v769) {
bb770: ;
  char* __c1771;
  char* __c2772;
  _Bool __retval773;
  __c1771 = v768;
  __c2772 = v769;
  char* t774 = __c1771;
  char t775 = *t774;
  unsigned char cast776 = (unsigned char)t775;
  int cast777 = (int)cast776;
  char* t778 = __c2772;
  char t779 = *t778;
  unsigned char cast780 = (unsigned char)t779;
  int cast781 = (int)cast780;
  _Bool c782 = ((cast777 < cast781)) ? 1 : 0;
  __retval773 = c782;
  _Bool t783 = __retval773;
  return t783;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v784, char* v785, unsigned long v786) {
bb787: ;
  char* __s1788;
  char* __s2789;
  unsigned long __n790;
  int __retval791;
  __s1788 = v784;
  __s2789 = v785;
  __n790 = v786;
    unsigned long t792 = __n790;
    unsigned long c793 = 0;
    _Bool c794 = ((t792 == c793)) ? 1 : 0;
    if (c794) {
      int c795 = 0;
      __retval791 = c795;
      int t796 = __retval791;
      return t796;
    }
    _Bool r797 = std____is_constant_evaluated();
    if (r797) {
        unsigned long __i798;
        unsigned long c799 = 0;
        __i798 = c799;
        while (1) {
          unsigned long t801 = __i798;
          unsigned long t802 = __n790;
          _Bool c803 = ((t801 < t802)) ? 1 : 0;
          if (!c803) break;
            unsigned long t804 = __i798;
            char* t805 = __s1788;
            char* ptr806 = &(t805)[t804];
            unsigned long t807 = __i798;
            char* t808 = __s2789;
            char* ptr809 = &(t808)[t807];
            _Bool r810 = std__char_traits_char___lt(ptr806, ptr809);
            if (r810) {
              int c811 = -1;
              __retval791 = c811;
              int t812 = __retval791;
              int ret_val813 = t812;
              return ret_val813;
            } else {
                unsigned long t814 = __i798;
                char* t815 = __s2789;
                char* ptr816 = &(t815)[t814];
                unsigned long t817 = __i798;
                char* t818 = __s1788;
                char* ptr819 = &(t818)[t817];
                _Bool r820 = std__char_traits_char___lt(ptr816, ptr819);
                if (r820) {
                  int c821 = 1;
                  __retval791 = c821;
                  int t822 = __retval791;
                  int ret_val823 = t822;
                  return ret_val823;
                }
            }
        for_step800: ;
          unsigned long t824 = __i798;
          unsigned long u825 = t824 + 1;
          __i798 = u825;
        }
      int c826 = 0;
      __retval791 = c826;
      int t827 = __retval791;
      return t827;
    }
  char* t828 = __s1788;
  void* cast829 = (void*)t828;
  char* t830 = __s2789;
  void* cast831 = (void*)t830;
  unsigned long t832 = __n790;
  int r833 = memcmp(cast829, cast831, t832);
  __retval791 = r833;
  int t834 = __retval791;
  return t834;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v835) {
bb836: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this837;
  char* __retval838;
  this837 = v835;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t839 = this837;
  char* r840 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t839);
  __retval838 = r840;
  char* t841 = __retval838;
  return t841;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v842, char* v843) {
bb844: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs845;
  char* __rhs846;
  _Bool __retval847;
  __lhs845 = v842;
  __rhs846 = v843;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t848 = __lhs845;
  unsigned long r849 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t848);
  char* t850 = __rhs846;
  unsigned long r851 = std__char_traits_char___length(t850);
  _Bool c852 = ((r849 == r851)) ? 1 : 0;
  _Bool ternary853;
  if (c852) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t854 = __lhs845;
    char* r855 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t854);
    char* t856 = __rhs846;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t857 = __lhs845;
    unsigned long r858 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t857);
    int r859 = std__char_traits_char___compare(r855, t856, r858);
    _Bool cast860 = (_Bool)r859;
    _Bool u861 = !cast860;
    ternary853 = (_Bool)u861;
  } else {
    _Bool c862 = 0;
    ternary853 = (_Bool)c862;
  }
  __retval847 = ternary853;
  _Bool t863 = __retval847;
  return t863;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v864) {
bb865: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this866;
  this866 = v864;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t867 = this866;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t867);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t867->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb868: ;
  int __retval869;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str870;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ base871;
  struct std__allocator_char_ ref_tmp0872;
  int c873 = 0;
  __retval869 = c873;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str870);
    char* cast874 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp0872);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&base871, cast874, &ref_tmp0872);
    {
      std__allocator_char____allocator(&ref_tmp0872);
    }
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r875 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(&str870, &base871);
      struct std__basic_ostream_char__std__char_traits_char__* r876 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str870);
      struct std__basic_ostream_char__std__char_traits_char__* r877 = std__ostream__operator___std__ostream_____(r876, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      unsigned long c878 = 10;
      unsigned long c879 = 9;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r880 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_2(&str870, &base871, c878, c879);
      struct std__basic_ostream_char__std__char_traits_char__* r881 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str870);
      struct std__basic_ostream_char__std__char_traits_char__* r882 = std__ostream__operator___std__ostream_____(r881, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      char* cast883 = (char*)&(_str_1);
      _Bool r884 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str870, cast883);
      if (r884) {
      } else {
        char* cast885 = (char*)&(_str_2);
        char* c886 = (char*)_str_3;
        unsigned int c887 = 27;
        char* cast888 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast885, c886, c887, cast888);
      }
      int c889 = 0;
      __retval869 = c889;
      int t890 = __retval869;
      int ret_val891 = t890;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&base871);
      }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str870);
      }
      return ret_val891;
  int t892 = __retval869;
  return t892;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v893) {
bb894: ;
  char* __r895;
  char* __retval896;
  __r895 = v893;
  char* t897 = __r895;
  __retval896 = t897;
  char* t898 = __retval896;
  return t898;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v899) {
bb900: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this901;
  char* __retval902;
  this901 = v899;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t903 = this901;
  char* cast904 = (char*)&(t903->field2._M_local_buf);
  char* r905 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast904);
  __retval902 = r905;
  char* t906 = __retval902;
  return t906;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v907, char* v908, struct std__allocator_char_* v909) {
bb910: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this911;
  char* __dat912;
  struct std__allocator_char_* __a913;
  this911 = v907;
  __dat912 = v908;
  __a913 = v909;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t914 = this911;
  struct std__allocator_char_* base915 = (struct std__allocator_char_*)((char *)t914 + 0);
  struct std__allocator_char_* t916 = __a913;
  std__allocator_char___allocator(base915, t916);
    char* t917 = __dat912;
    t914->_M_p = t917;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb918: ;
  _Bool __retval919;
    _Bool c920 = 0;
    __retval919 = c920;
    _Bool t921 = __retval919;
    return t921;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v922) {
bb923: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this924;
  this924 = v922;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t925 = this924;
    _Bool r926 = std__is_constant_evaluated();
    if (r926) {
        unsigned long __i927;
        unsigned long c928 = 0;
        __i927 = c928;
        while (1) {
          unsigned long t930 = __i927;
          unsigned long c931 = 15;
          _Bool c932 = ((t930 <= c931)) ? 1 : 0;
          if (!c932) break;
          char c933 = 0;
          unsigned long t934 = __i927;
          t925->field2._M_local_buf[t934] = c933;
        for_step929: ;
          unsigned long t935 = __i927;
          unsigned long u936 = t935 + 1;
          __i927 = u936;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v937, unsigned long v938) {
bb939: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this940;
  unsigned long __length941;
  this940 = v937;
  __length941 = v938;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t942 = this940;
  unsigned long t943 = __length941;
  t942->_M_string_length = t943;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb944: ;
  _Bool __retval945;
    _Bool c946 = 0;
    __retval945 = c946;
    _Bool t947 = __retval945;
    return t947;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v948, char* v949) {
bb950: ;
  char* __location951;
  char* __args952;
  char* __retval953;
  void* __loc954;
  __location951 = v948;
  __args952 = v949;
  char* t955 = __location951;
  void* cast956 = (void*)t955;
  __loc954 = cast956;
    void* t957 = __loc954;
    char* cast958 = (char*)t957;
    char* t959 = __args952;
    char t960 = *t959;
    *cast958 = t960;
    __retval953 = cast958;
    char* t961 = __retval953;
    return t961;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v962, char* v963) {
bb964: ;
  char* __c1965;
  char* __c2966;
  __c1965 = v962;
  __c2966 = v963;
    _Bool r967 = std____is_constant_evaluated();
    if (r967) {
      char* t968 = __c1965;
      char* t969 = __c2966;
      char* r970 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t968, t969);
    } else {
      char* t971 = __c2966;
      char t972 = *t971;
      char* t973 = __c1965;
      *t973 = t972;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v974) {
bb975: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this976;
  char* __retval977;
  this976 = v974;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t978 = this976;
  char* t979 = t978->_M_dataplus._M_p;
  __retval977 = t979;
  char* t980 = __retval977;
  return t980;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v981, unsigned long v982) {
bb983: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this984;
  unsigned long __n985;
  char ref_tmp0986;
  this984 = v981;
  __n985 = v982;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t987 = this984;
  unsigned long t988 = __n985;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t987, t988);
  unsigned long t989 = __n985;
  char* r990 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t987);
  char* ptr991 = &(r990)[t989];
  char c992 = 0;
  ref_tmp0986 = c992;
  std__char_traits_char___assign(ptr991, &ref_tmp0986);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v993) {
bb994: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this995;
  this995 = v993;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t996 = this995;
  {
    struct std__allocator_char_* base997 = (struct std__allocator_char_*)((char *)t996 + 0);
    std__allocator_char____allocator(base997);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v998, struct std____new_allocator_char_* v999) {
bb1000: ;
  struct std____new_allocator_char_* this1001;
  struct std____new_allocator_char_* unnamed1002;
  this1001 = v998;
  unnamed1002 = v999;
  struct std____new_allocator_char_* t1003 = this1001;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1004) {
bb1005: ;
  struct std____new_allocator_char_* this1006;
  this1006 = v1004;
  struct std____new_allocator_char_* t1007 = this1006;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1008, char* v1009, struct std__allocator_char_* v1010) {
bb1011: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1012;
  char* __dat1013;
  struct std__allocator_char_* __a1014;
  this1012 = v1008;
  __dat1013 = v1009;
  __a1014 = v1010;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1015 = this1012;
  struct std__allocator_char_* base1016 = (struct std__allocator_char_*)((char *)t1015 + 0);
  struct std__allocator_char_* t1017 = __a1014;
  std__allocator_char___allocator(base1016, t1017);
    char* t1018 = __dat1013;
    t1015->_M_p = t1018;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1019, char* v1020) {
bb1021: ;
  char* __c11022;
  char* __c21023;
  _Bool __retval1024;
  __c11022 = v1019;
  __c21023 = v1020;
  char* t1025 = __c11022;
  char t1026 = *t1025;
  int cast1027 = (int)t1026;
  char* t1028 = __c21023;
  char t1029 = *t1028;
  int cast1030 = (int)t1029;
  _Bool c1031 = ((cast1027 == cast1030)) ? 1 : 0;
  __retval1024 = c1031;
  _Bool t1032 = __retval1024;
  return t1032;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1033) {
bb1034: ;
  char* __p1035;
  unsigned long __retval1036;
  unsigned long __i1037;
  __p1035 = v1033;
  unsigned long c1038 = 0;
  __i1037 = c1038;
    char ref_tmp01039;
    while (1) {
      unsigned long t1040 = __i1037;
      char* t1041 = __p1035;
      char* ptr1042 = &(t1041)[t1040];
      char c1043 = 0;
      ref_tmp01039 = c1043;
      _Bool r1044 = __gnu_cxx__char_traits_char___eq(ptr1042, &ref_tmp01039);
      _Bool u1045 = !r1044;
      if (!u1045) break;
      unsigned long t1046 = __i1037;
      unsigned long u1047 = t1046 + 1;
      __i1037 = u1047;
    }
  unsigned long t1048 = __i1037;
  __retval1036 = t1048;
  unsigned long t1049 = __retval1036;
  return t1049;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1050) {
bb1051: ;
  char* __s1052;
  unsigned long __retval1053;
  __s1052 = v1050;
    _Bool r1054 = std____is_constant_evaluated();
    if (r1054) {
      char* t1055 = __s1052;
      unsigned long r1056 = __gnu_cxx__char_traits_char___length(t1055);
      __retval1053 = r1056;
      unsigned long t1057 = __retval1053;
      return t1057;
    }
  char* t1058 = __s1052;
  unsigned long r1059 = strlen(t1058);
  __retval1053 = r1059;
  unsigned long t1060 = __retval1053;
  return t1060;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1061, char* v1062, struct std__random_access_iterator_tag v1063) {
bb1064: ;
  char* __first1065;
  char* __last1066;
  struct std__random_access_iterator_tag unnamed1067;
  long __retval1068;
  __first1065 = v1061;
  __last1066 = v1062;
  unnamed1067 = v1063;
  char* t1069 = __last1066;
  char* t1070 = __first1065;
  long diff1071 = t1069 - t1070;
  __retval1068 = diff1071;
  long t1072 = __retval1068;
  return t1072;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1073) {
bb1074: ;
  char** unnamed1075;
  struct std__random_access_iterator_tag __retval1076;
  unnamed1075 = v1073;
  struct std__random_access_iterator_tag t1077 = __retval1076;
  return t1077;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1078, char* v1079) {
bb1080: ;
  char* __first1081;
  char* __last1082;
  long __retval1083;
  struct std__random_access_iterator_tag agg_tmp01084;
  __first1081 = v1078;
  __last1082 = v1079;
  char* t1085 = __first1081;
  char* t1086 = __last1082;
  struct std__random_access_iterator_tag r1087 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1081);
  agg_tmp01084 = r1087;
  struct std__random_access_iterator_tag t1088 = agg_tmp01084;
  long r1089 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1085, t1086, t1088);
  __retval1083 = r1089;
  long t1090 = __retval1083;
  return t1090;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1091, char* v1092) {
bb1093: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1094;
  char* __p1095;
  this1094 = v1091;
  __p1095 = v1092;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1096 = this1094;
  char* t1097 = __p1095;
  t1096->_M_dataplus._M_p = t1097;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1098) {
bb1099: ;
  struct std__allocator_char_* __a1100;
  unsigned long __retval1101;
  __a1100 = v1098;
  unsigned long c1102 = -1;
  unsigned long c1103 = 1;
  unsigned long b1104 = c1102 / c1103;
  __retval1101 = b1104;
  unsigned long t1105 = __retval1101;
  return t1105;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1106) {
bb1107: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1108;
  struct std__allocator_char_* __retval1109;
  this1108 = v1106;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1110 = this1108;
  struct std__allocator_char_* base1111 = (struct std__allocator_char_*)((char *)&(t1110->_M_dataplus) + 0);
  __retval1109 = base1111;
  struct std__allocator_char_* t1112 = __retval1109;
  return t1112;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1113, unsigned long* v1114) {
bb1115: ;
  unsigned long* __a1116;
  unsigned long* __b1117;
  unsigned long* __retval1118;
  __a1116 = v1113;
  __b1117 = v1114;
    unsigned long* t1119 = __b1117;
    unsigned long t1120 = *t1119;
    unsigned long* t1121 = __a1116;
    unsigned long t1122 = *t1121;
    _Bool c1123 = ((t1120 < t1122)) ? 1 : 0;
    if (c1123) {
      unsigned long* t1124 = __b1117;
      __retval1118 = t1124;
      unsigned long* t1125 = __retval1118;
      return t1125;
    }
  unsigned long* t1126 = __a1116;
  __retval1118 = t1126;
  unsigned long* t1127 = __retval1118;
  return t1127;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1128) {
bb1129: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1130;
  unsigned long __retval1131;
  unsigned long __diffmax1132;
  unsigned long __allocmax1133;
  this1130 = v1128;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1134 = this1130;
  unsigned long c1135 = 9223372036854775807;
  __diffmax1132 = c1135;
  struct std__allocator_char_* r1136 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1134);
  unsigned long r1137 = std__allocator_traits_std__allocator_char_____max_size(r1136);
  __allocmax1133 = r1137;
  unsigned long* r1138 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1132, &__allocmax1133);
  unsigned long t1139 = *r1138;
  unsigned long c1140 = 1;
  unsigned long b1141 = t1139 - c1140;
  __retval1131 = b1141;
  unsigned long t1142 = __retval1131;
  return t1142;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1143) {
bb1144: ;
  struct std____new_allocator_char_* this1145;
  unsigned long __retval1146;
  this1145 = v1143;
  struct std____new_allocator_char_* t1147 = this1145;
  unsigned long c1148 = 9223372036854775807;
  unsigned long c1149 = 1;
  unsigned long b1150 = c1148 / c1149;
  __retval1146 = b1150;
  unsigned long t1151 = __retval1146;
  return t1151;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1152, unsigned long v1153, void* v1154) {
bb1155: ;
  struct std____new_allocator_char_* this1156;
  unsigned long __n1157;
  void* unnamed1158;
  char* __retval1159;
  this1156 = v1152;
  __n1157 = v1153;
  unnamed1158 = v1154;
  struct std____new_allocator_char_* t1160 = this1156;
    unsigned long t1161 = __n1157;
    unsigned long r1162 = std____new_allocator_char____M_max_size___const(t1160);
    _Bool c1163 = ((t1161 > r1162)) ? 1 : 0;
    if (c1163) {
        unsigned long t1164 = __n1157;
        unsigned long c1165 = -1;
        unsigned long c1166 = 1;
        unsigned long b1167 = c1165 / c1166;
        _Bool c1168 = ((t1164 > b1167)) ? 1 : 0;
        if (c1168) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1169 = 1;
    unsigned long c1170 = 16;
    _Bool c1171 = ((c1169 > c1170)) ? 1 : 0;
    if (c1171) {
      unsigned long __al1172;
      unsigned long c1173 = 1;
      __al1172 = c1173;
      unsigned long t1174 = __n1157;
      unsigned long c1175 = 1;
      unsigned long b1176 = t1174 * c1175;
      unsigned long t1177 = __al1172;
      void* r1178 = operator_new_2(b1176, t1177);
      char* cast1179 = (char*)r1178;
      __retval1159 = cast1179;
      char* t1180 = __retval1159;
      return t1180;
    }
  unsigned long t1181 = __n1157;
  unsigned long c1182 = 1;
  unsigned long b1183 = t1181 * c1182;
  void* r1184 = operator_new(b1183);
  char* cast1185 = (char*)r1184;
  __retval1159 = cast1185;
  char* t1186 = __retval1159;
  return t1186;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1187, unsigned long v1188) {
bb1189: ;
  struct std__allocator_char_* this1190;
  unsigned long __n1191;
  char* __retval1192;
  this1190 = v1187;
  __n1191 = v1188;
  struct std__allocator_char_* t1193 = this1190;
    _Bool r1194 = std____is_constant_evaluated();
    if (r1194) {
        unsigned long t1195 = __n1191;
        unsigned long c1196 = 1;
        unsigned long ovr1197;
        _Bool ovf1198 = __builtin_mul_overflow(t1195, c1196, &ovr1197);
        __n1191 = ovr1197;
        if (ovf1198) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1199 = __n1191;
      void* r1200 = operator_new(t1199);
      char* cast1201 = (char*)r1200;
      __retval1192 = cast1201;
      char* t1202 = __retval1192;
      return t1202;
    }
  struct std____new_allocator_char_* base1203 = (struct std____new_allocator_char_*)((char *)t1193 + 0);
  unsigned long t1204 = __n1191;
  void* c1205 = ((void*)0);
  char* r1206 = std____new_allocator_char___allocate(base1203, t1204, c1205);
  __retval1192 = r1206;
  char* t1207 = __retval1192;
  return t1207;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1208, unsigned long v1209) {
bb1210: ;
  struct std__allocator_char_* __a1211;
  unsigned long __n1212;
  char* __retval1213;
  __a1211 = v1208;
  __n1212 = v1209;
  struct std__allocator_char_* t1214 = __a1211;
  unsigned long t1215 = __n1212;
  char* r1216 = std__allocator_char___allocate(t1214, t1215);
  __retval1213 = r1216;
  char* t1217 = __retval1213;
  return t1217;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1218, unsigned long v1219) {
bb1220: ;
  struct std__allocator_char_* __a1221;
  unsigned long __n1222;
  char* __retval1223;
  char* __p1224;
  __a1221 = v1218;
  __n1222 = v1219;
  struct std__allocator_char_* t1225 = __a1221;
  unsigned long t1226 = __n1222;
  char* r1227 = std__allocator_traits_std__allocator_char_____allocate(t1225, t1226);
  __p1224 = r1227;
  char* t1228 = __p1224;
  __retval1223 = t1228;
  char* t1229 = __retval1223;
  return t1229;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1230) {
bb1231: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1232;
  struct std__allocator_char_* __retval1233;
  this1232 = v1230;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1234 = this1232;
  struct std__allocator_char_* base1235 = (struct std__allocator_char_*)((char *)&(t1234->_M_dataplus) + 0);
  __retval1233 = base1235;
  struct std__allocator_char_* t1236 = __retval1233;
  return t1236;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1237, unsigned long* v1238, unsigned long v1239) {
bb1240: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1241;
  unsigned long* __capacity1242;
  unsigned long __old_capacity1243;
  char* __retval1244;
  this1241 = v1237;
  __capacity1242 = v1238;
  __old_capacity1243 = v1239;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1245 = this1241;
    unsigned long* t1246 = __capacity1242;
    unsigned long t1247 = *t1246;
    unsigned long r1248 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1245);
    _Bool c1249 = ((t1247 > r1248)) ? 1 : 0;
    if (c1249) {
      char* cast1250 = (char*)&(_str_5);
      std____throw_length_error(cast1250);
    }
    unsigned long* t1251 = __capacity1242;
    unsigned long t1252 = *t1251;
    unsigned long t1253 = __old_capacity1243;
    _Bool c1254 = ((t1252 > t1253)) ? 1 : 0;
    _Bool ternary1255;
    if (c1254) {
      unsigned long* t1256 = __capacity1242;
      unsigned long t1257 = *t1256;
      unsigned long c1258 = 2;
      unsigned long t1259 = __old_capacity1243;
      unsigned long b1260 = c1258 * t1259;
      _Bool c1261 = ((t1257 < b1260)) ? 1 : 0;
      ternary1255 = (_Bool)c1261;
    } else {
      _Bool c1262 = 0;
      ternary1255 = (_Bool)c1262;
    }
    if (ternary1255) {
      unsigned long c1263 = 2;
      unsigned long t1264 = __old_capacity1243;
      unsigned long b1265 = c1263 * t1264;
      unsigned long* t1266 = __capacity1242;
      *t1266 = b1265;
        unsigned long* t1267 = __capacity1242;
        unsigned long t1268 = *t1267;
        unsigned long r1269 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1245);
        _Bool c1270 = ((t1268 > r1269)) ? 1 : 0;
        if (c1270) {
          unsigned long r1271 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1245);
          unsigned long* t1272 = __capacity1242;
          *t1272 = r1271;
        }
    }
  struct std__allocator_char_* r1273 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1245);
  unsigned long* t1274 = __capacity1242;
  unsigned long t1275 = *t1274;
  unsigned long c1276 = 1;
  unsigned long b1277 = t1275 + c1276;
  char* r1278 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1273, b1277);
  __retval1244 = r1278;
  char* t1279 = __retval1244;
  return t1279;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1280, unsigned long v1281) {
bb1282: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1283;
  unsigned long __capacity1284;
  this1283 = v1280;
  __capacity1284 = v1281;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1285 = this1283;
  unsigned long t1286 = __capacity1284;
  t1285->field2._M_allocated_capacity = t1286;
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1287, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1288) {
bb1289: ;
  struct _Guard* this1290;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1291;
  this1290 = v1287;
  __s1291 = v1288;
  struct _Guard* t1292 = this1290;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1293 = __s1291;
  t1292->_M_guarded = t1293;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1294, char* v1295, unsigned long v1296) {
bb1297: ;
  char* __s11298;
  char* __s21299;
  unsigned long __n1300;
  char* __retval1301;
  __s11298 = v1294;
  __s21299 = v1295;
  __n1300 = v1296;
    unsigned long t1302 = __n1300;
    unsigned long c1303 = 0;
    _Bool c1304 = ((t1302 == c1303)) ? 1 : 0;
    if (c1304) {
      char* t1305 = __s11298;
      __retval1301 = t1305;
      char* t1306 = __retval1301;
      return t1306;
    }
    _Bool r1307 = std____is_constant_evaluated();
    if (r1307) {
        unsigned long __i1308;
        unsigned long c1309 = 0;
        __i1308 = c1309;
        while (1) {
          unsigned long t1311 = __i1308;
          unsigned long t1312 = __n1300;
          _Bool c1313 = ((t1311 < t1312)) ? 1 : 0;
          if (!c1313) break;
          char* t1314 = __s11298;
          unsigned long t1315 = __i1308;
          char* ptr1316 = &(t1314)[t1315];
          unsigned long t1317 = __i1308;
          char* t1318 = __s21299;
          char* ptr1319 = &(t1318)[t1317];
          char* r1320 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1316, ptr1319);
        for_step1310: ;
          unsigned long t1321 = __i1308;
          unsigned long u1322 = t1321 + 1;
          __i1308 = u1322;
        }
      char* t1323 = __s11298;
      __retval1301 = t1323;
      char* t1324 = __retval1301;
      return t1324;
    }
  char* t1325 = __s11298;
  void* cast1326 = (void*)t1325;
  char* t1327 = __s21299;
  void* cast1328 = (void*)t1327;
  unsigned long t1329 = __n1300;
  unsigned long c1330 = 1;
  unsigned long b1331 = t1329 * c1330;
  void* r1332 = memcpy(cast1326, cast1328, b1331);
  char* t1333 = __s11298;
  __retval1301 = t1333;
  char* t1334 = __retval1301;
  return t1334;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1335, char* v1336, unsigned long v1337) {
bb1338: ;
  char* __s11339;
  char* __s21340;
  unsigned long __n1341;
  char* __retval1342;
  __s11339 = v1335;
  __s21340 = v1336;
  __n1341 = v1337;
    unsigned long t1343 = __n1341;
    unsigned long c1344 = 0;
    _Bool c1345 = ((t1343 == c1344)) ? 1 : 0;
    if (c1345) {
      char* t1346 = __s11339;
      __retval1342 = t1346;
      char* t1347 = __retval1342;
      return t1347;
    }
    _Bool r1348 = std____is_constant_evaluated();
    if (r1348) {
      char* t1349 = __s11339;
      char* t1350 = __s21340;
      unsigned long t1351 = __n1341;
      char* r1352 = __gnu_cxx__char_traits_char___copy(t1349, t1350, t1351);
      __retval1342 = r1352;
      char* t1353 = __retval1342;
      return t1353;
    }
  char* t1354 = __s11339;
  void* cast1355 = (void*)t1354;
  char* t1356 = __s21340;
  void* cast1357 = (void*)t1356;
  unsigned long t1358 = __n1341;
  void* r1359 = memcpy(cast1355, cast1357, t1358);
  char* cast1360 = (char*)r1359;
  __retval1342 = cast1360;
  char* t1361 = __retval1342;
  return t1361;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1362, char* v1363, unsigned long v1364) {
bb1365: ;
  char* __d1366;
  char* __s1367;
  unsigned long __n1368;
  __d1366 = v1362;
  __s1367 = v1363;
  __n1368 = v1364;
    unsigned long t1369 = __n1368;
    unsigned long c1370 = 1;
    _Bool c1371 = ((t1369 == c1370)) ? 1 : 0;
    if (c1371) {
      char* t1372 = __d1366;
      char* t1373 = __s1367;
      std__char_traits_char___assign(t1372, t1373);
    } else {
      char* t1374 = __d1366;
      char* t1375 = __s1367;
      unsigned long t1376 = __n1368;
      char* r1377 = std__char_traits_char___copy(t1374, t1375, t1376);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1378) {
bb1379: ;
  char* __it1380;
  char* __retval1381;
  __it1380 = v1378;
  char* t1382 = __it1380;
  __retval1381 = t1382;
  char* t1383 = __retval1381;
  return t1383;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1384, char* v1385, char* v1386) {
bb1387: ;
  char* __p1388;
  char* __k11389;
  char* __k21390;
  __p1388 = v1384;
  __k11389 = v1385;
  __k21390 = v1386;
    char* t1391 = __p1388;
    char* t1392 = __k11389;
    char* r1393 = char_const__std____niter_base_char_const__(t1392);
    char* t1394 = __k21390;
    char* t1395 = __k11389;
    long diff1396 = t1394 - t1395;
    unsigned long cast1397 = (unsigned long)diff1396;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1391, r1393, cast1397);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1398) {
bb1399: ;
  struct _Guard* this1400;
  this1400 = v1398;
  struct _Guard* t1401 = this1400;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1402 = t1401->_M_guarded;
    _Bool cast1403 = (_Bool)t1402;
    if (cast1403) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1404 = t1401->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1404);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1405, char* v1406, char* v1407, struct std__forward_iterator_tag v1408) {
bb1409: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1410;
  char* __beg1411;
  char* __end1412;
  struct std__forward_iterator_tag unnamed1413;
  unsigned long __dnew1414;
  struct _Guard __guard1415;
  this1410 = v1405;
  __beg1411 = v1406;
  __end1412 = v1407;
  unnamed1413 = v1408;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1416 = this1410;
  char* t1417 = __beg1411;
  char* t1418 = __end1412;
  long r1419 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1417, t1418);
  unsigned long cast1420 = (unsigned long)r1419;
  __dnew1414 = cast1420;
    unsigned long t1421 = __dnew1414;
    unsigned long c1422 = 15;
    _Bool c1423 = ((t1421 > c1422)) ? 1 : 0;
    if (c1423) {
      unsigned long c1424 = 0;
      char* r1425 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1416, &__dnew1414, c1424);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1416, r1425);
      unsigned long t1426 = __dnew1414;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1416, t1426);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1416);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1415, t1416);
    char* r1427 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1416);
    char* t1428 = __beg1411;
    char* t1429 = __end1412;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1427, t1428, t1429);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1430 = ((void*)0);
    __guard1415._M_guarded = c1430;
    unsigned long t1431 = __dnew1414;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1416, t1431);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1415);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1432) {
bb1433: ;
  char* __r1434;
  char* __retval1435;
  __r1434 = v1432;
  char* t1436 = __r1434;
  __retval1435 = t1436;
  char* t1437 = __retval1435;
  return t1437;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1438) {
bb1439: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1440;
  char* __retval1441;
  this1440 = v1438;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1442 = this1440;
  char* cast1443 = (char*)&(t1442->field2._M_local_buf);
  char* r1444 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1443);
  __retval1441 = r1444;
  char* t1445 = __retval1441;
  return t1445;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1446) {
bb1447: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1448;
  _Bool __retval1449;
  this1448 = v1446;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1450 = this1448;
    char* r1451 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1450);
    char* r1452 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1450);
    _Bool c1453 = ((r1451 == r1452)) ? 1 : 0;
    if (c1453) {
        unsigned long t1454 = t1450->_M_string_length;
        unsigned long c1455 = 15;
        _Bool c1456 = ((t1454 > c1455)) ? 1 : 0;
        if (c1456) {
          __builtin_unreachable();
        }
      _Bool c1457 = 1;
      __retval1449 = c1457;
      _Bool t1458 = __retval1449;
      return t1458;
    }
  _Bool c1459 = 0;
  __retval1449 = c1459;
  _Bool t1460 = __retval1449;
  return t1460;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1461, char* v1462, unsigned long v1463) {
bb1464: ;
  struct std____new_allocator_char_* this1465;
  char* __p1466;
  unsigned long __n1467;
  this1465 = v1461;
  __p1466 = v1462;
  __n1467 = v1463;
  struct std____new_allocator_char_* t1468 = this1465;
    unsigned long c1469 = 1;
    unsigned long c1470 = 16;
    _Bool c1471 = ((c1469 > c1470)) ? 1 : 0;
    if (c1471) {
      char* t1472 = __p1466;
      void* cast1473 = (void*)t1472;
      unsigned long t1474 = __n1467;
      unsigned long c1475 = 1;
      unsigned long b1476 = t1474 * c1475;
      unsigned long c1477 = 1;
      operator_delete_3(cast1473, b1476, c1477);
      return;
    }
  char* t1478 = __p1466;
  void* cast1479 = (void*)t1478;
  unsigned long t1480 = __n1467;
  unsigned long c1481 = 1;
  unsigned long b1482 = t1480 * c1481;
  operator_delete_2(cast1479, b1482);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1483, char* v1484, unsigned long v1485) {
bb1486: ;
  struct std__allocator_char_* this1487;
  char* __p1488;
  unsigned long __n1489;
  this1487 = v1483;
  __p1488 = v1484;
  __n1489 = v1485;
  struct std__allocator_char_* t1490 = this1487;
    _Bool r1491 = std____is_constant_evaluated();
    if (r1491) {
      char* t1492 = __p1488;
      void* cast1493 = (void*)t1492;
      operator_delete(cast1493);
      return;
    }
  struct std____new_allocator_char_* base1494 = (struct std____new_allocator_char_*)((char *)t1490 + 0);
  char* t1495 = __p1488;
  unsigned long t1496 = __n1489;
  std____new_allocator_char___deallocate(base1494, t1495, t1496);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1497, char* v1498, unsigned long v1499) {
bb1500: ;
  struct std__allocator_char_* __a1501;
  char* __p1502;
  unsigned long __n1503;
  __a1501 = v1497;
  __p1502 = v1498;
  __n1503 = v1499;
  struct std__allocator_char_* t1504 = __a1501;
  char* t1505 = __p1502;
  unsigned long t1506 = __n1503;
  std__allocator_char___deallocate(t1504, t1505, t1506);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1507, unsigned long v1508) {
bb1509: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1510;
  unsigned long __size1511;
  this1510 = v1507;
  __size1511 = v1508;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1512 = this1510;
  struct std__allocator_char_* r1513 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1512);
  char* r1514 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1512);
  unsigned long t1515 = __size1511;
  unsigned long c1516 = 1;
  unsigned long b1517 = t1515 + c1516;
  std__allocator_traits_std__allocator_char_____deallocate(r1513, r1514, b1517);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1518) {
bb1519: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1520;
  this1520 = v1518;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1521 = this1520;
    _Bool r1522 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1521);
    _Bool u1523 = !r1522;
    if (u1523) {
      unsigned long t1524 = t1521->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1521, t1524);
    }
  return;
}

