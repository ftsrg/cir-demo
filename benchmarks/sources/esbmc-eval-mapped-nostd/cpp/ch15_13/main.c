extern void abort(void);
// Struct definitions (auto-parsed)
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
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
struct std__strong_ordering { char _M_value; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
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

struct std____cmp_cat____unspec __const_main_agg_tmp1;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[34] = "Testing the comparison functions.";
char _str_1[6] = "Hello";
char _str_2[8] = "stinger";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[10] = "string1: ";
char _str_4[11] = "\nstring2: ";
char _str_5[11] = "\nstring3: ";
char _str_6[11] = "\nstring4: ";
char _str_7[3] = "\n\n";
char _str_8[19] = "string1 == string2";
char _str_9[99] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch15_13/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_10[20] = "string1 == string4\n";
char _str_11[19] = "string1 > string4\n";
char _str_12[19] = "string1 < string4\n";
char _str_13[33] = "string1.compare( string2 ) == 0\n";
char _str_14[32] = "string1.compare( string2 ) > 0\n";
char _str_15[32] = "string1.compare( string2 ) < 0\n";
char _str_16[45] = "string1.compare( 2, 5, string3, 0, 5 ) == 0\n";
char _str_17[44] = "string1.compare( 2, 5, string3, 0, 5 ) > 0\n";
char _str_18[44] = "string1.compare( 2, 5, string3, 0, 5 ) < 0\n";
char _str_19[39] = "string4.compare( 0, string2.length(), ";
char _str_20[15] = "string2 ) == 0";
char _str_21[14] = "string2 ) > 0";
char _str_22[14] = "string2 ) < 0";
char _str_23[38] = "string2.compare( 0, 3, string4 ) == 0";
char _str_24[37] = "string2.compare( 0, 3, string4 ) > 0";
char _str_25[37] = "string2.compare( 0, 3, string4 ) < 0";
char _str_26[50] = "basic_string: construction from null is not valid";
char _str_27[24] = "basic_string::_M_create";
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__maxE __attribute__((aligned(4))) = 2147483647;
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__minE __attribute__((aligned(4))) = -2147483648;
char _str_28[22] = "basic_string::compare";
char _str_29[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__2(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
_Bool std__operator_(struct std__strong_ordering p0, struct std____cmp_cat____unspec p1);
struct std__strong_ordering auto_std____detail____char_traits_cmp_cat_std__char_traits_char___(int p0);
struct std__strong_ordering decltype_____detail____char_traits_cmp_cat_std__char_traits_char_____0___std__operator____char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
int std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_compare(unsigned long p0, unsigned long p1);
int std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
int std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_unsigned_long__unsigned_long__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3, unsigned long p4, unsigned long p5);
int std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_unsigned_long__unsigned_long__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
extern void std____throw_logic_error(char* p0);
_Bool std____is_constant_evaluated();
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
_Bool std__is_constant_evaluated();
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
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* p0);
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v0) {
bb1: ;
  struct std__allocator_char_* this2;
  this2 = v0;
  struct std__allocator_char_* t3 = this2;
  struct std____new_allocator_char_* base4 = (struct std____new_allocator_char_*)((char *)t3 + 0);
  std____new_allocator_char_____new_allocator_2(base4);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v5, char* v6, struct std__allocator_char_* v7) {
bb8: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this9;
  char* __s10;
  struct std__allocator_char_* __a11;
  char* __end12;
  struct std__forward_iterator_tag agg_tmp013;
  this9 = v5;
  __s10 = v6;
  __a11 = v7;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t14 = this9;
  char* r15 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t14);
  struct std__allocator_char_* t16 = __a11;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t14->_M_dataplus, r15, t16);
      char* t17 = __s10;
      char* c18 = ((void*)0);
      _Bool c19 = ((t17 == c18)) ? 1 : 0;
      if (c19) {
        char* cast20 = (char*)&(_str_26);
        std____throw_logic_error(cast20);
      }
    char* t21 = __s10;
    char* t22 = __s10;
    unsigned long r23 = std__char_traits_char___length(t22);
    char* ptr24 = &(t21)[r23];
    __end12 = ptr24;
    char* t25 = __s10;
    char* t26 = __end12;
    struct std__forward_iterator_tag t27 = agg_tmp013;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t14, t25, t26, t27);
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v28) {
bb29: ;
  struct std__allocator_char_* this30;
  this30 = v28;
  struct std__allocator_char_* t31 = this30;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v32, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v33) {
bb34: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this35;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str36;
  struct std__allocator_char_ ref_tmp037;
  this35 = v32;
  __str36 = v33;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t38 = this35;
  char* r39 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t38);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t40 = __str36;
  struct std__allocator_char_* r41 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t40);
  struct std__allocator_char_ r42 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(r41);
  ref_tmp037 = r42;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t38->_M_dataplus, r39, &ref_tmp037);
  {
    std__allocator_char____allocator(&ref_tmp037);
  }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t43 = __str36;
    char* r44 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t43);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t45 = __str36;
    unsigned long r46 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t45);
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(t38, r44, r46);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v47, int v48) {
bb49: ;
  int __a50;
  int __b51;
  int __retval52;
  __a50 = v47;
  __b51 = v48;
  int t53 = __a50;
  int t54 = __b51;
  int b55 = t53 | t54;
  __retval52 = b55;
  int t56 = __retval52;
  return t56;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v57) {
bb58: ;
  struct std__basic_ios_char__std__char_traits_char__* this59;
  int __retval60;
  this59 = v57;
  struct std__basic_ios_char__std__char_traits_char__* t61 = this59;
  struct std__ios_base* base62 = (struct std__ios_base*)((char *)t61 + 0);
  int t63 = base62->_M_streambuf_state;
  __retval60 = t63;
  int t64 = __retval60;
  return t64;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v65, int v66) {
bb67: ;
  struct std__basic_ios_char__std__char_traits_char__* this68;
  int __state69;
  this68 = v65;
  __state69 = v66;
  struct std__basic_ios_char__std__char_traits_char__* t70 = this68;
  int r71 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t70);
  int t72 = __state69;
  int r73 = std__operator__2(r71, t72);
  std__basic_ios_char__std__char_traits_char_____clear(t70, r73);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v74, char* v75) {
bb76: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out77;
  char* __s78;
  struct std__basic_ostream_char__std__char_traits_char__* __retval79;
  __out77 = v74;
  __s78 = v75;
    char* t80 = __s78;
    _Bool cast81 = (_Bool)t80;
    _Bool u82 = !cast81;
    if (u82) {
      struct std__basic_ostream_char__std__char_traits_char__* t83 = __out77;
      void** v84 = (void**)t83;
      void* v85 = *((void**)v84);
      unsigned char* cast86 = (unsigned char*)v85;
      long c87 = -24;
      unsigned char* ptr88 = &(cast86)[c87];
      long* cast89 = (long*)ptr88;
      long t90 = *cast89;
      unsigned char* cast91 = (unsigned char*)t83;
      unsigned char* ptr92 = &(cast91)[t90];
      struct std__basic_ostream_char__std__char_traits_char__* cast93 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr92;
      struct std__basic_ios_char__std__char_traits_char__* cast94 = (struct std__basic_ios_char__std__char_traits_char__*)cast93;
      int t95 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast94, t95);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t96 = __out77;
      char* t97 = __s78;
      char* t98 = __s78;
      unsigned long r99 = std__char_traits_char___length(t98);
      long cast100 = (long)r99;
      struct std__basic_ostream_char__std__char_traits_char__* r101 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t96, t97, cast100);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __out77;
  __retval79 = t102;
  struct std__basic_ostream_char__std__char_traits_char__* t103 = __retval79;
  return t103;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v104, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v105) {
bb106: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os107;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str108;
  struct std__basic_ostream_char__std__char_traits_char__* __retval109;
  __os107 = v104;
  __str108 = v105;
  struct std__basic_ostream_char__std__char_traits_char__* t110 = __os107;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t111 = __str108;
  char* r112 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t111);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t113 = __str108;
  unsigned long r114 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t113);
  long cast115 = (long)r114;
  struct std__basic_ostream_char__std__char_traits_char__* r116 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t110, r112, cast115);
  __retval109 = r116;
  struct std__basic_ostream_char__std__char_traits_char__* t117 = __retval109;
  return t117;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v118) {
bb119: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this120;
  unsigned long __retval121;
  unsigned long __sz122;
  this120 = v118;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t123 = this120;
  unsigned long t124 = t123->_M_string_length;
  __sz122 = t124;
    unsigned long t125 = __sz122;
    unsigned long r126 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t123);
    _Bool c127 = ((t125 > r126)) ? 1 : 0;
    if (c127) {
      __builtin_unreachable();
    }
  unsigned long t128 = __sz122;
  __retval121 = t128;
  unsigned long t129 = __retval121;
  return t129;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v130, char* v131) {
bb132: ;
  char* __c1133;
  char* __c2134;
  _Bool __retval135;
  __c1133 = v130;
  __c2134 = v131;
  char* t136 = __c1133;
  char t137 = *t136;
  unsigned char cast138 = (unsigned char)t137;
  int cast139 = (int)cast138;
  char* t140 = __c2134;
  char t141 = *t140;
  unsigned char cast142 = (unsigned char)t141;
  int cast143 = (int)cast142;
  _Bool c144 = ((cast139 < cast143)) ? 1 : 0;
  __retval135 = c144;
  _Bool t145 = __retval135;
  return t145;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v146, char* v147, unsigned long v148) {
bb149: ;
  char* __s1150;
  char* __s2151;
  unsigned long __n152;
  int __retval153;
  __s1150 = v146;
  __s2151 = v147;
  __n152 = v148;
    unsigned long t154 = __n152;
    unsigned long c155 = 0;
    _Bool c156 = ((t154 == c155)) ? 1 : 0;
    if (c156) {
      int c157 = 0;
      __retval153 = c157;
      int t158 = __retval153;
      return t158;
    }
    _Bool r159 = std____is_constant_evaluated();
    if (r159) {
        unsigned long __i160;
        unsigned long c161 = 0;
        __i160 = c161;
        while (1) {
          unsigned long t163 = __i160;
          unsigned long t164 = __n152;
          _Bool c165 = ((t163 < t164)) ? 1 : 0;
          if (!c165) break;
            unsigned long t166 = __i160;
            char* t167 = __s1150;
            char* ptr168 = &(t167)[t166];
            unsigned long t169 = __i160;
            char* t170 = __s2151;
            char* ptr171 = &(t170)[t169];
            _Bool r172 = std__char_traits_char___lt(ptr168, ptr171);
            if (r172) {
              int c173 = -1;
              __retval153 = c173;
              int t174 = __retval153;
              int ret_val175 = t174;
              return ret_val175;
            } else {
                unsigned long t176 = __i160;
                char* t177 = __s2151;
                char* ptr178 = &(t177)[t176];
                unsigned long t179 = __i160;
                char* t180 = __s1150;
                char* ptr181 = &(t180)[t179];
                _Bool r182 = std__char_traits_char___lt(ptr178, ptr181);
                if (r182) {
                  int c183 = 1;
                  __retval153 = c183;
                  int t184 = __retval153;
                  int ret_val185 = t184;
                  return ret_val185;
                }
            }
        for_step162: ;
          unsigned long t186 = __i160;
          unsigned long u187 = t186 + 1;
          __i160 = u187;
        }
      int c188 = 0;
      __retval153 = c188;
      int t189 = __retval153;
      return t189;
    }
  char* t190 = __s1150;
  void* cast191 = (void*)t190;
  char* t192 = __s2151;
  void* cast193 = (void*)t192;
  unsigned long t194 = __n152;
  int r195 = memcmp(cast191, cast193, t194);
  __retval153 = r195;
  int t196 = __retval153;
  return t196;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v197) {
bb198: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this199;
  char* __retval200;
  this199 = v197;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t201 = this199;
  char* r202 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t201);
  __retval200 = r202;
  char* t203 = __retval200;
  return t203;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EESA_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v204, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v205) {
bb206: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs207;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs208;
  _Bool __retval209;
  __lhs207 = v204;
  __rhs208 = v205;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t210 = __lhs207;
  unsigned long r211 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t210);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t212 = __rhs208;
  unsigned long r213 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t212);
  _Bool c214 = ((r211 == r213)) ? 1 : 0;
  _Bool ternary215;
  if (c214) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t216 = __lhs207;
    char* r217 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t216);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t218 = __rhs208;
    char* r219 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t218);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t220 = __lhs207;
    unsigned long r221 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t220);
    int r222 = std__char_traits_char___compare(r217, r219, r221);
    _Bool cast223 = (_Bool)r222;
    _Bool u224 = !cast223;
    ternary215 = (_Bool)u224;
  } else {
    _Bool c225 = 0;
    ternary215 = (_Bool)c225;
  }
  __retval209 = ternary215;
  _Bool t226 = __retval209;
  return t226;
}

// function: _ZStgtSt15strong_orderingNSt9__cmp_cat8__unspecE
_Bool std__operator_(struct std__strong_ordering v227, struct std____cmp_cat____unspec v228) {
bb229: ;
  struct std__strong_ordering __v230;
  struct std____cmp_cat____unspec unnamed231;
  _Bool __retval232;
  __v230 = v227;
  unnamed231 = v228;
  char t233 = __v230._M_value;
  int cast234 = (int)t233;
  int c235 = 0;
  _Bool c236 = ((cast234 > c235)) ? 1 : 0;
  __retval232 = c236;
  _Bool t237 = __retval232;
  return t237;
}

// function: _ZNSt8__detail21__char_traits_cmp_catISt11char_traitsIcEEEDai
struct std__strong_ordering auto_std____detail____char_traits_cmp_cat_std__char_traits_char___(int v238) {
bb239: ;
  int __cmp240;
  struct std__strong_ordering __retval241;
  __cmp240 = v238;
    int t242 = __cmp240;
    int c243 = 0;
    char c244 = -1;
    char c245 = 0;
    char c246 = 1;
    _Bool c247 = ((t242 < c243)) ? 1 : 0;
    char sel248 = c247 ? c244 : c246;
    _Bool c249 = ((t242 == c243)) ? 1 : 0;
    char sel250 = c249 ? c245 : sel248;
    __retval241._M_value = sel250;
    struct std__strong_ordering t251 = __retval241;
    return t251;
  abort();
}

// function: _ZStssIcSt11char_traitsIcESaIcEEDTclsr8__detailE21__char_traits_cmp_catIT0_ELi0EEERKNSt7__cxx1112basic_stringIT_S3_T1_EESB_
struct std__strong_ordering decltype_____detail____char_traits_cmp_cat_std__char_traits_char_____0___std__operator____char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v252, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v253) {
bb254: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs255;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs256;
  struct std__strong_ordering __retval257;
  __lhs255 = v252;
  __rhs256 = v253;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t258 = __lhs255;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t259 = __rhs256;
  int r260 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___const(t258, t259);
  struct std__strong_ordering r261 = auto_std____detail____char_traits_cmp_cat_std__char_traits_char___(r260);
  __retval257 = r261;
  struct std__strong_ordering t262 = __retval257;
  return t262;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_S_compareEmm
int std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_compare(unsigned long v263, unsigned long v264) {
bb265: ;
  unsigned long __n1266;
  unsigned long __n2267;
  int __retval268;
  long __d269;
  __n1266 = v263;
  __n2267 = v264;
  unsigned long t270 = __n1266;
  unsigned long t271 = __n2267;
  unsigned long b272 = t270 - t271;
  long cast273 = (long)b272;
  __d269 = cast273;
    long t274 = __d269;
    int t275 = _ZN9__gnu_cxx24__numeric_traits_integerIiE5__maxE;
    long cast276 = (long)t275;
    _Bool c277 = ((t274 > cast276)) ? 1 : 0;
    if (c277) {
      int t278 = _ZN9__gnu_cxx24__numeric_traits_integerIiE5__maxE;
      __retval268 = t278;
      int t279 = __retval268;
      return t279;
    } else {
        long t280 = __d269;
        int t281 = _ZN9__gnu_cxx24__numeric_traits_integerIiE5__minE;
        long cast282 = (long)t281;
        _Bool c283 = ((t280 < cast282)) ? 1 : 0;
        if (c283) {
          int t284 = _ZN9__gnu_cxx24__numeric_traits_integerIiE5__minE;
          __retval268 = t284;
          int t285 = __retval268;
          return t285;
        } else {
          long t286 = __d269;
          int cast287 = (int)t286;
          __retval268 = cast287;
          int t288 = __retval268;
          return t288;
        }
    }
  abort();
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7compareERKS4_
int std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v289, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v290) {
bb291: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this292;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str293;
  int __retval294;
  unsigned long __size295;
  unsigned long __osize296;
  unsigned long __len297;
  int __r298;
  this292 = v289;
  __str293 = v290;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t299 = this292;
  unsigned long r300 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t299);
  __size295 = r300;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t301 = __str293;
  unsigned long r302 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t301);
  __osize296 = r302;
  unsigned long* r303 = unsigned_long_const__std__min_unsigned_long_(&__size295, &__osize296);
  unsigned long t304 = *r303;
  __len297 = t304;
  char* r305 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t299);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t306 = __str293;
  char* r307 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t306);
  unsigned long t308 = __len297;
  int r309 = std__char_traits_char___compare(r305, r307, t308);
  __r298 = r309;
    int t310 = __r298;
    _Bool cast311 = (_Bool)t310;
    _Bool u312 = !cast311;
    if (u312) {
      unsigned long t313 = __size295;
      unsigned long t314 = __osize296;
      int r315 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_compare(t313, t314);
      __r298 = r315;
    }
  int t316 = __r298;
  __retval294 = t316;
  int t317 = __retval294;
  return t317;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v318, unsigned long v319, char* v320) {
bb321: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this322;
  unsigned long __pos323;
  char* __s324;
  unsigned long __retval325;
  this322 = v318;
  __pos323 = v319;
  __s324 = v320;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t326 = this322;
    unsigned long t327 = __pos323;
    unsigned long r328 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t326);
    _Bool c329 = ((t327 > r328)) ? 1 : 0;
    if (c329) {
      char* cast330 = (char*)&(_str_29);
      char* t331 = __s324;
      unsigned long t332 = __pos323;
      unsigned long r333 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t326);
      std____throw_out_of_range_fmt(cast330, t331, t332, r333);
    }
  unsigned long t334 = __pos323;
  __retval325 = t334;
  unsigned long t335 = __retval325;
  return t335;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v336, unsigned long v337, unsigned long v338) {
bb339: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this340;
  unsigned long __pos341;
  unsigned long __off342;
  unsigned long __retval343;
  _Bool __testoff344;
  this340 = v336;
  __pos341 = v337;
  __off342 = v338;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t345 = this340;
  unsigned long t346 = __off342;
  unsigned long r347 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t345);
  unsigned long t348 = __pos341;
  unsigned long b349 = r347 - t348;
  _Bool c350 = ((t346 < b349)) ? 1 : 0;
  __testoff344 = c350;
  _Bool t351 = __testoff344;
  unsigned long ternary352;
  if (t351) {
    unsigned long t353 = __off342;
    ternary352 = (unsigned long)t353;
  } else {
    unsigned long r354 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t345);
    unsigned long t355 = __pos341;
    unsigned long b356 = r354 - t355;
    ternary352 = (unsigned long)b356;
  }
  __retval343 = ternary352;
  unsigned long t357 = __retval343;
  return t357;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7compareEmmRKS4_mm
int std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_unsigned_long__unsigned_long__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v358, unsigned long v359, unsigned long v360, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v361, unsigned long v362, unsigned long v363) {
bb364: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this365;
  unsigned long __pos1366;
  unsigned long __n1367;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str368;
  unsigned long __pos2369;
  unsigned long __n2370;
  int __retval371;
  unsigned long __len372;
  int __r373;
  this365 = v358;
  __pos1366 = v359;
  __n1367 = v360;
  __str368 = v361;
  __pos2369 = v362;
  __n2370 = v363;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t374 = this365;
  unsigned long t375 = __pos1366;
  char* cast376 = (char*)&(_str_28);
  unsigned long r377 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t374, t375, cast376);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t378 = __str368;
  unsigned long t379 = __pos2369;
  char* cast380 = (char*)&(_str_28);
  unsigned long r381 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t378, t379, cast380);
  unsigned long t382 = __pos1366;
  unsigned long t383 = __n1367;
  unsigned long r384 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t374, t382, t383);
  __n1367 = r384;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t385 = __str368;
  unsigned long t386 = __pos2369;
  unsigned long t387 = __n2370;
  unsigned long r388 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t385, t386, t387);
  __n2370 = r388;
  unsigned long* r389 = unsigned_long_const__std__min_unsigned_long_(&__n1367, &__n2370);
  unsigned long t390 = *r389;
  __len372 = t390;
  char* r391 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t374);
  unsigned long t392 = __pos1366;
  char* ptr393 = &(r391)[t392];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t394 = __str368;
  char* r395 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t394);
  unsigned long t396 = __pos2369;
  char* ptr397 = &(r395)[t396];
  unsigned long t398 = __len372;
  int r399 = std__char_traits_char___compare(ptr393, ptr397, t398);
  __r373 = r399;
    int t400 = __r373;
    _Bool cast401 = (_Bool)t400;
    _Bool u402 = !cast401;
    if (u402) {
      unsigned long t403 = __n1367;
      unsigned long t404 = __n2370;
      int r405 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_compare(t403, t404);
      __r373 = r405;
    }
  int t406 = __r373;
  __retval371 = t406;
  int t407 = __retval371;
  return t407;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7compareEmmRKS4_
int std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_unsigned_long__unsigned_long__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v408, unsigned long v409, unsigned long v410, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v411) {
bb412: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this413;
  unsigned long __pos414;
  unsigned long __n415;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str416;
  int __retval417;
  unsigned long __osize418;
  unsigned long __len419;
  int __r420;
  this413 = v408;
  __pos414 = v409;
  __n415 = v410;
  __str416 = v411;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t421 = this413;
  unsigned long t422 = __pos414;
  char* cast423 = (char*)&(_str_28);
  unsigned long r424 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t421, t422, cast423);
  unsigned long t425 = __pos414;
  unsigned long t426 = __n415;
  unsigned long r427 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t421, t425, t426);
  __n415 = r427;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t428 = __str416;
  unsigned long r429 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t428);
  __osize418 = r429;
  unsigned long* r430 = unsigned_long_const__std__min_unsigned_long_(&__n415, &__osize418);
  unsigned long t431 = *r430;
  __len419 = t431;
  char* r432 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t421);
  unsigned long t433 = __pos414;
  char* ptr434 = &(r432)[t433];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t435 = __str416;
  char* r436 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t435);
  unsigned long t437 = __len419;
  int r438 = std__char_traits_char___compare(ptr434, r436, t437);
  __r420 = r438;
    int t439 = __r420;
    _Bool cast440 = (_Bool)t439;
    _Bool u441 = !cast440;
    if (u441) {
      unsigned long t442 = __n415;
      unsigned long t443 = __osize418;
      int r444 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_compare(t442, t443);
      __r420 = r444;
    }
  int t445 = __r420;
  __retval417 = t445;
  int t446 = __retval417;
  return t446;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v447) {
bb448: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this449;
  unsigned long __retval450;
  this449 = v447;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t451 = this449;
  unsigned long r452 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t451);
  __retval450 = r452;
  unsigned long t453 = __retval450;
  return t453;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v454, void* v455) {
bb456: ;
  struct std__basic_ostream_char__std__char_traits_char__* this457;
  void* __pf458;
  struct std__basic_ostream_char__std__char_traits_char__* __retval459;
  this457 = v454;
  __pf458 = v455;
  struct std__basic_ostream_char__std__char_traits_char__* t460 = this457;
  void* t461 = __pf458;
  struct std__basic_ostream_char__std__char_traits_char__* r462 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t461)(t460);
  __retval459 = r462;
  struct std__basic_ostream_char__std__char_traits_char__* t463 = __retval459;
  return t463;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v464) {
bb465: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os466;
  struct std__basic_ostream_char__std__char_traits_char__* __retval467;
  __os466 = v464;
  struct std__basic_ostream_char__std__char_traits_char__* t468 = __os466;
  struct std__basic_ostream_char__std__char_traits_char__* r469 = std__ostream__flush(t468);
  __retval467 = r469;
  struct std__basic_ostream_char__std__char_traits_char__* t470 = __retval467;
  return t470;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v471) {
bb472: ;
  struct std__ctype_char_* __f473;
  struct std__ctype_char_* __retval474;
  __f473 = v471;
    struct std__ctype_char_* t475 = __f473;
    _Bool cast476 = (_Bool)t475;
    _Bool u477 = !cast476;
    if (u477) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t478 = __f473;
  __retval474 = t478;
  struct std__ctype_char_* t479 = __retval474;
  return t479;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v480, char v481) {
bb482: ;
  struct std__ctype_char_* this483;
  char __c484;
  char __retval485;
  this483 = v480;
  __c484 = v481;
  struct std__ctype_char_* t486 = this483;
    char t487 = t486->_M_widen_ok;
    _Bool cast488 = (_Bool)t487;
    if (cast488) {
      char t489 = __c484;
      unsigned char cast490 = (unsigned char)t489;
      unsigned long cast491 = (unsigned long)cast490;
      char t492 = t486->_M_widen[cast491];
      __retval485 = t492;
      char t493 = __retval485;
      return t493;
    }
  std__ctype_char____M_widen_init___const(t486);
  char t494 = __c484;
  void** v495 = (void**)t486;
  void* v496 = *((void**)v495);
  char vcall499 = (char)__VERIFIER_virtual_call_char_char(t486, 6, t494);
  __retval485 = vcall499;
  char t500 = __retval485;
  return t500;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v501, char v502) {
bb503: ;
  struct std__basic_ios_char__std__char_traits_char__* this504;
  char __c505;
  char __retval506;
  this504 = v501;
  __c505 = v502;
  struct std__basic_ios_char__std__char_traits_char__* t507 = this504;
  struct std__ctype_char_* t508 = t507->_M_ctype;
  struct std__ctype_char_* r509 = std__ctype_char__const__std____check_facet_std__ctype_char___(t508);
  char t510 = __c505;
  char r511 = std__ctype_char___widen_char__const(r509, t510);
  __retval506 = r511;
  char t512 = __retval506;
  return t512;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v513) {
bb514: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os515;
  struct std__basic_ostream_char__std__char_traits_char__* __retval516;
  __os515 = v513;
  struct std__basic_ostream_char__std__char_traits_char__* t517 = __os515;
  struct std__basic_ostream_char__std__char_traits_char__* t518 = __os515;
  void** v519 = (void**)t518;
  void* v520 = *((void**)v519);
  unsigned char* cast521 = (unsigned char*)v520;
  long c522 = -24;
  unsigned char* ptr523 = &(cast521)[c522];
  long* cast524 = (long*)ptr523;
  long t525 = *cast524;
  unsigned char* cast526 = (unsigned char*)t518;
  unsigned char* ptr527 = &(cast526)[t525];
  struct std__basic_ostream_char__std__char_traits_char__* cast528 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr527;
  struct std__basic_ios_char__std__char_traits_char__* cast529 = (struct std__basic_ios_char__std__char_traits_char__*)cast528;
  char c530 = 10;
  char r531 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast529, c530);
  struct std__basic_ostream_char__std__char_traits_char__* r532 = std__ostream__put(t517, r531);
  struct std__basic_ostream_char__std__char_traits_char__* r533 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r532);
  __retval516 = r533;
  struct std__basic_ostream_char__std__char_traits_char__* t534 = __retval516;
  return t534;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v535) {
bb536: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this537;
  this537 = v535;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t538 = this537;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t538);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t538->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb539: ;
  int __retval540;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string1541;
  struct std__allocator_char_ ref_tmp0542;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string2543;
  struct std__allocator_char_ ref_tmp1544;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string3545;
  struct std__allocator_char_ ref_tmp2546;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string4547;
  int result548;
  int c549 = 0;
  __retval540 = c549;
  char* cast550 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0542);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&string1541, cast550, &ref_tmp0542);
  {
    std__allocator_char____allocator(&ref_tmp0542);
  }
    char* cast551 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp1544);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&string2543, cast551, &ref_tmp1544);
    {
      std__allocator_char____allocator(&ref_tmp1544);
    }
      char* cast552 = (char*)&(_str_2);
      std__allocator_char___allocator_2(&ref_tmp2546);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&string3545, cast552, &ref_tmp2546);
      {
        std__allocator_char____allocator(&ref_tmp2546);
      }
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&string4547, &string2543);
          char* cast553 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* r554 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast553);
          struct std__basic_ostream_char__std__char_traits_char__* r555 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r554, &string1541);
          char* cast556 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* r557 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r555, cast556);
          struct std__basic_ostream_char__std__char_traits_char__* r558 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r557, &string2543);
          char* cast559 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* r560 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r558, cast559);
          struct std__basic_ostream_char__std__char_traits_char__* r561 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r560, &string3545);
          char* cast562 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* r563 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r561, cast562);
          struct std__basic_ostream_char__std__char_traits_char__* r564 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r563, &string4547);
          char* cast565 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* r566 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r564, cast565);
          _Bool r567 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&string1541, &string2543);
          if (r567) {
          } else {
            char* cast568 = (char*)&(_str_8);
            char* c569 = (char*)_str_9;
            unsigned int c570 = 31;
            char* cast571 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast568, c569, c570, cast571);
          }
            _Bool r572 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&string1541, &string4547);
            if (r572) {
              char* cast573 = (char*)&(_str_10);
              struct std__basic_ostream_char__std__char_traits_char__* r574 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast573);
            } else {
                struct std__strong_ordering agg_tmp0575;
                struct std____cmp_cat____unspec agg_tmp1576;
                struct std__strong_ordering r577 = decltype_____detail____char_traits_cmp_cat_std__char_traits_char_____0___std__operator____char__std__char_traits_char___std__allocator_char___(&string1541, &string4547);
                agg_tmp0575 = r577;
                agg_tmp1576 = *&__const_main_agg_tmp1; // copy
                struct std__strong_ordering t578 = agg_tmp0575;
                struct std____cmp_cat____unspec t579 = agg_tmp1576;
                _Bool r580 = std__operator_(t578, t579);
                if (r580) {
                  char* cast581 = (char*)&(_str_11);
                  struct std__basic_ostream_char__std__char_traits_char__* r582 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast581);
                } else {
                  char* cast583 = (char*)&(_str_12);
                  struct std__basic_ostream_char__std__char_traits_char__* r584 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast583);
                }
            }
          int r585 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___const(&string1541, &string2543);
          result548 = r585;
            int t586 = result548;
            int c587 = 0;
            _Bool c588 = ((t586 == c587)) ? 1 : 0;
            if (c588) {
              char* cast589 = (char*)&(_str_13);
              struct std__basic_ostream_char__std__char_traits_char__* r590 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast589);
            } else {
                int t591 = result548;
                int c592 = 0;
                _Bool c593 = ((t591 > c592)) ? 1 : 0;
                if (c593) {
                  char* cast594 = (char*)&(_str_14);
                  struct std__basic_ostream_char__std__char_traits_char__* r595 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast594);
                } else {
                  char* cast596 = (char*)&(_str_15);
                  struct std__basic_ostream_char__std__char_traits_char__* r597 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast596);
                }
            }
          unsigned long c598 = 2;
          unsigned long c599 = 5;
          unsigned long c600 = 0;
          unsigned long c601 = 5;
          int r602 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_unsigned_long__unsigned_long__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___unsigned_long__unsigned_long__const(&string1541, c598, c599, &string3545, c600, c601);
          result548 = r602;
            int t603 = result548;
            int c604 = 0;
            _Bool c605 = ((t603 == c604)) ? 1 : 0;
            if (c605) {
              char* cast606 = (char*)&(_str_16);
              struct std__basic_ostream_char__std__char_traits_char__* r607 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast606);
            } else {
                int t608 = result548;
                int c609 = 0;
                _Bool c610 = ((t608 > c609)) ? 1 : 0;
                if (c610) {
                  char* cast611 = (char*)&(_str_17);
                  struct std__basic_ostream_char__std__char_traits_char__* r612 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast611);
                } else {
                  char* cast613 = (char*)&(_str_18);
                  struct std__basic_ostream_char__std__char_traits_char__* r614 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast613);
                }
            }
          unsigned long c615 = 0;
          unsigned long r616 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(&string2543);
          int r617 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_unsigned_long__unsigned_long__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___const(&string4547, c615, r616, &string2543);
          result548 = r617;
            int t618 = result548;
            int c619 = 0;
            _Bool c620 = ((t618 == c619)) ? 1 : 0;
            if (c620) {
              char* cast621 = (char*)&(_str_19);
              struct std__basic_ostream_char__std__char_traits_char__* r622 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast621);
              char* cast623 = (char*)&(_str_20);
              struct std__basic_ostream_char__std__char_traits_char__* r624 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r622, cast623);
              struct std__basic_ostream_char__std__char_traits_char__* r625 = std__ostream__operator___std__ostream_____(r624, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            } else {
                int t626 = result548;
                int c627 = 0;
                _Bool c628 = ((t626 > c627)) ? 1 : 0;
                if (c628) {
                  char* cast629 = (char*)&(_str_19);
                  struct std__basic_ostream_char__std__char_traits_char__* r630 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast629);
                  char* cast631 = (char*)&(_str_21);
                  struct std__basic_ostream_char__std__char_traits_char__* r632 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r630, cast631);
                  struct std__basic_ostream_char__std__char_traits_char__* r633 = std__ostream__operator___std__ostream_____(r632, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
                } else {
                  char* cast634 = (char*)&(_str_19);
                  struct std__basic_ostream_char__std__char_traits_char__* r635 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast634);
                  char* cast636 = (char*)&(_str_22);
                  struct std__basic_ostream_char__std__char_traits_char__* r637 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r635, cast636);
                  struct std__basic_ostream_char__std__char_traits_char__* r638 = std__ostream__operator___std__ostream_____(r637, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
                }
            }
          unsigned long c639 = 0;
          unsigned long c640 = 3;
          int r641 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_unsigned_long__unsigned_long__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___const(&string2543, c639, c640, &string4547);
          result548 = r641;
            int t642 = result548;
            int c643 = 0;
            _Bool c644 = ((t642 == c643)) ? 1 : 0;
            if (c644) {
              char* cast645 = (char*)&(_str_23);
              struct std__basic_ostream_char__std__char_traits_char__* r646 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast645);
              struct std__basic_ostream_char__std__char_traits_char__* r647 = std__ostream__operator___std__ostream_____(r646, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            } else {
                int t648 = result548;
                int c649 = 0;
                _Bool c650 = ((t648 > c649)) ? 1 : 0;
                if (c650) {
                  char* cast651 = (char*)&(_str_24);
                  struct std__basic_ostream_char__std__char_traits_char__* r652 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast651);
                  struct std__basic_ostream_char__std__char_traits_char__* r653 = std__ostream__operator___std__ostream_____(r652, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
                } else {
                  char* cast654 = (char*)&(_str_25);
                  struct std__basic_ostream_char__std__char_traits_char__* r655 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast654);
                  struct std__basic_ostream_char__std__char_traits_char__* r656 = std__ostream__operator___std__ostream_____(r655, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
                }
            }
          int c657 = 0;
          __retval540 = c657;
          int t658 = __retval540;
          int ret_val659 = t658;
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string4547);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string3545);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string2543);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string1541);
          }
          return ret_val659;
  int t660 = __retval540;
  return t660;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v661) {
bb662: ;
  struct std____new_allocator_char_* this663;
  this663 = v661;
  struct std____new_allocator_char_* t664 = this663;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v665) {
bb666: ;
  char* __r667;
  char* __retval668;
  __r667 = v665;
  char* t669 = __r667;
  __retval668 = t669;
  char* t670 = __retval668;
  return t670;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v671) {
bb672: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this673;
  char* __retval674;
  this673 = v671;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t675 = this673;
  char* cast676 = (char*)&(t675->field2._M_local_buf);
  char* r677 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast676);
  __retval674 = r677;
  char* t678 = __retval674;
  return t678;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v679, char* v680, struct std__allocator_char_* v681) {
bb682: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this683;
  char* __dat684;
  struct std__allocator_char_* __a685;
  this683 = v679;
  __dat684 = v680;
  __a685 = v681;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t686 = this683;
  struct std__allocator_char_* base687 = (struct std__allocator_char_*)((char *)t686 + 0);
  struct std__allocator_char_* t688 = __a685;
  std__allocator_char___allocator(base687, t688);
    char* t689 = __dat684;
    t686->_M_p = t689;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb690: ;
  _Bool __retval691;
    _Bool c692 = 0;
    __retval691 = c692;
    _Bool t693 = __retval691;
    return t693;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v694, char* v695) {
bb696: ;
  char* __c1697;
  char* __c2698;
  _Bool __retval699;
  __c1697 = v694;
  __c2698 = v695;
  char* t700 = __c1697;
  char t701 = *t700;
  int cast702 = (int)t701;
  char* t703 = __c2698;
  char t704 = *t703;
  int cast705 = (int)t704;
  _Bool c706 = ((cast702 == cast705)) ? 1 : 0;
  __retval699 = c706;
  _Bool t707 = __retval699;
  return t707;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v708) {
bb709: ;
  char* __p710;
  unsigned long __retval711;
  unsigned long __i712;
  __p710 = v708;
  unsigned long c713 = 0;
  __i712 = c713;
    char ref_tmp0714;
    while (1) {
      unsigned long t715 = __i712;
      char* t716 = __p710;
      char* ptr717 = &(t716)[t715];
      char c718 = 0;
      ref_tmp0714 = c718;
      _Bool r719 = __gnu_cxx__char_traits_char___eq(ptr717, &ref_tmp0714);
      _Bool u720 = !r719;
      if (!u720) break;
      unsigned long t721 = __i712;
      unsigned long u722 = t721 + 1;
      __i712 = u722;
    }
  unsigned long t723 = __i712;
  __retval711 = t723;
  unsigned long t724 = __retval711;
  return t724;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v725) {
bb726: ;
  char* __s727;
  unsigned long __retval728;
  __s727 = v725;
    _Bool r729 = std____is_constant_evaluated();
    if (r729) {
      char* t730 = __s727;
      unsigned long r731 = __gnu_cxx__char_traits_char___length(t730);
      __retval728 = r731;
      unsigned long t732 = __retval728;
      return t732;
    }
  char* t733 = __s727;
  unsigned long r734 = strlen(t733);
  __retval728 = r734;
  unsigned long t735 = __retval728;
  return t735;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v736, char* v737, struct std__random_access_iterator_tag v738) {
bb739: ;
  char* __first740;
  char* __last741;
  struct std__random_access_iterator_tag unnamed742;
  long __retval743;
  __first740 = v736;
  __last741 = v737;
  unnamed742 = v738;
  char* t744 = __last741;
  char* t745 = __first740;
  long diff746 = t744 - t745;
  __retval743 = diff746;
  long t747 = __retval743;
  return t747;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v748) {
bb749: ;
  char** unnamed750;
  struct std__random_access_iterator_tag __retval751;
  unnamed750 = v748;
  struct std__random_access_iterator_tag t752 = __retval751;
  return t752;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v753, char* v754) {
bb755: ;
  char* __first756;
  char* __last757;
  long __retval758;
  struct std__random_access_iterator_tag agg_tmp0759;
  __first756 = v753;
  __last757 = v754;
  char* t760 = __first756;
  char* t761 = __last757;
  struct std__random_access_iterator_tag r762 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first756);
  agg_tmp0759 = r762;
  struct std__random_access_iterator_tag t763 = agg_tmp0759;
  long r764 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t760, t761, t763);
  __retval758 = r764;
  long t765 = __retval758;
  return t765;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v766, char* v767) {
bb768: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this769;
  char* __p770;
  this769 = v766;
  __p770 = v767;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t771 = this769;
  char* t772 = __p770;
  t771->_M_dataplus._M_p = t772;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v773) {
bb774: ;
  struct std__allocator_char_* __a775;
  unsigned long __retval776;
  __a775 = v773;
  unsigned long c777 = -1;
  unsigned long c778 = 1;
  unsigned long b779 = c777 / c778;
  __retval776 = b779;
  unsigned long t780 = __retval776;
  return t780;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v781) {
bb782: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this783;
  struct std__allocator_char_* __retval784;
  this783 = v781;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t785 = this783;
  struct std__allocator_char_* base786 = (struct std__allocator_char_*)((char *)&(t785->_M_dataplus) + 0);
  __retval784 = base786;
  struct std__allocator_char_* t787 = __retval784;
  return t787;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v788, unsigned long* v789) {
bb790: ;
  unsigned long* __a791;
  unsigned long* __b792;
  unsigned long* __retval793;
  __a791 = v788;
  __b792 = v789;
    unsigned long* t794 = __b792;
    unsigned long t795 = *t794;
    unsigned long* t796 = __a791;
    unsigned long t797 = *t796;
    _Bool c798 = ((t795 < t797)) ? 1 : 0;
    if (c798) {
      unsigned long* t799 = __b792;
      __retval793 = t799;
      unsigned long* t800 = __retval793;
      return t800;
    }
  unsigned long* t801 = __a791;
  __retval793 = t801;
  unsigned long* t802 = __retval793;
  return t802;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v803) {
bb804: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this805;
  unsigned long __retval806;
  unsigned long __diffmax807;
  unsigned long __allocmax808;
  this805 = v803;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t809 = this805;
  unsigned long c810 = 9223372036854775807;
  __diffmax807 = c810;
  struct std__allocator_char_* r811 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t809);
  unsigned long r812 = std__allocator_traits_std__allocator_char_____max_size(r811);
  __allocmax808 = r812;
  unsigned long* r813 = unsigned_long_const__std__min_unsigned_long_(&__diffmax807, &__allocmax808);
  unsigned long t814 = *r813;
  unsigned long c815 = 1;
  unsigned long b816 = t814 - c815;
  __retval806 = b816;
  unsigned long t817 = __retval806;
  return t817;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v818) {
bb819: ;
  struct std____new_allocator_char_* this820;
  unsigned long __retval821;
  this820 = v818;
  struct std____new_allocator_char_* t822 = this820;
  unsigned long c823 = 9223372036854775807;
  unsigned long c824 = 1;
  unsigned long b825 = c823 / c824;
  __retval821 = b825;
  unsigned long t826 = __retval821;
  return t826;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v827, unsigned long v828, void* v829) {
bb830: ;
  struct std____new_allocator_char_* this831;
  unsigned long __n832;
  void* unnamed833;
  char* __retval834;
  this831 = v827;
  __n832 = v828;
  unnamed833 = v829;
  struct std____new_allocator_char_* t835 = this831;
    unsigned long t836 = __n832;
    unsigned long r837 = std____new_allocator_char____M_max_size___const(t835);
    _Bool c838 = ((t836 > r837)) ? 1 : 0;
    if (c838) {
        unsigned long t839 = __n832;
        unsigned long c840 = -1;
        unsigned long c841 = 1;
        unsigned long b842 = c840 / c841;
        _Bool c843 = ((t839 > b842)) ? 1 : 0;
        if (c843) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c844 = 1;
    unsigned long c845 = 16;
    _Bool c846 = ((c844 > c845)) ? 1 : 0;
    if (c846) {
      unsigned long __al847;
      unsigned long c848 = 1;
      __al847 = c848;
      unsigned long t849 = __n832;
      unsigned long c850 = 1;
      unsigned long b851 = t849 * c850;
      unsigned long t852 = __al847;
      void* r853 = operator_new_2(b851, t852);
      char* cast854 = (char*)r853;
      __retval834 = cast854;
      char* t855 = __retval834;
      return t855;
    }
  unsigned long t856 = __n832;
  unsigned long c857 = 1;
  unsigned long b858 = t856 * c857;
  void* r859 = operator_new(b858);
  char* cast860 = (char*)r859;
  __retval834 = cast860;
  char* t861 = __retval834;
  return t861;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v862, unsigned long v863) {
bb864: ;
  struct std__allocator_char_* this865;
  unsigned long __n866;
  char* __retval867;
  this865 = v862;
  __n866 = v863;
  struct std__allocator_char_* t868 = this865;
    _Bool r869 = std____is_constant_evaluated();
    if (r869) {
        unsigned long t870 = __n866;
        unsigned long c871 = 1;
        unsigned long ovr872;
        _Bool ovf873 = __builtin_mul_overflow(t870, c871, &ovr872);
        __n866 = ovr872;
        if (ovf873) {
          std____throw_bad_array_new_length();
        }
      unsigned long t874 = __n866;
      void* r875 = operator_new(t874);
      char* cast876 = (char*)r875;
      __retval867 = cast876;
      char* t877 = __retval867;
      return t877;
    }
  struct std____new_allocator_char_* base878 = (struct std____new_allocator_char_*)((char *)t868 + 0);
  unsigned long t879 = __n866;
  void* c880 = ((void*)0);
  char* r881 = std____new_allocator_char___allocate(base878, t879, c880);
  __retval867 = r881;
  char* t882 = __retval867;
  return t882;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v883, unsigned long v884) {
bb885: ;
  struct std__allocator_char_* __a886;
  unsigned long __n887;
  char* __retval888;
  __a886 = v883;
  __n887 = v884;
  struct std__allocator_char_* t889 = __a886;
  unsigned long t890 = __n887;
  char* r891 = std__allocator_char___allocate(t889, t890);
  __retval888 = r891;
  char* t892 = __retval888;
  return t892;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v893, unsigned long v894) {
bb895: ;
  struct std__allocator_char_* __a896;
  unsigned long __n897;
  char* __retval898;
  char* __p899;
  __a896 = v893;
  __n897 = v894;
  struct std__allocator_char_* t900 = __a896;
  unsigned long t901 = __n897;
  char* r902 = std__allocator_traits_std__allocator_char_____allocate(t900, t901);
  __p899 = r902;
  char* t903 = __p899;
  __retval898 = t903;
  char* t904 = __retval898;
  return t904;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v905) {
bb906: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this907;
  struct std__allocator_char_* __retval908;
  this907 = v905;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t909 = this907;
  struct std__allocator_char_* base910 = (struct std__allocator_char_*)((char *)&(t909->_M_dataplus) + 0);
  __retval908 = base910;
  struct std__allocator_char_* t911 = __retval908;
  return t911;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v912, unsigned long* v913, unsigned long v914) {
bb915: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this916;
  unsigned long* __capacity917;
  unsigned long __old_capacity918;
  char* __retval919;
  this916 = v912;
  __capacity917 = v913;
  __old_capacity918 = v914;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t920 = this916;
    unsigned long* t921 = __capacity917;
    unsigned long t922 = *t921;
    unsigned long r923 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t920);
    _Bool c924 = ((t922 > r923)) ? 1 : 0;
    if (c924) {
      char* cast925 = (char*)&(_str_27);
      std____throw_length_error(cast925);
    }
    unsigned long* t926 = __capacity917;
    unsigned long t927 = *t926;
    unsigned long t928 = __old_capacity918;
    _Bool c929 = ((t927 > t928)) ? 1 : 0;
    _Bool ternary930;
    if (c929) {
      unsigned long* t931 = __capacity917;
      unsigned long t932 = *t931;
      unsigned long c933 = 2;
      unsigned long t934 = __old_capacity918;
      unsigned long b935 = c933 * t934;
      _Bool c936 = ((t932 < b935)) ? 1 : 0;
      ternary930 = (_Bool)c936;
    } else {
      _Bool c937 = 0;
      ternary930 = (_Bool)c937;
    }
    if (ternary930) {
      unsigned long c938 = 2;
      unsigned long t939 = __old_capacity918;
      unsigned long b940 = c938 * t939;
      unsigned long* t941 = __capacity917;
      *t941 = b940;
        unsigned long* t942 = __capacity917;
        unsigned long t943 = *t942;
        unsigned long r944 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t920);
        _Bool c945 = ((t943 > r944)) ? 1 : 0;
        if (c945) {
          unsigned long r946 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t920);
          unsigned long* t947 = __capacity917;
          *t947 = r946;
        }
    }
  struct std__allocator_char_* r948 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t920);
  unsigned long* t949 = __capacity917;
  unsigned long t950 = *t949;
  unsigned long c951 = 1;
  unsigned long b952 = t950 + c951;
  char* r953 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r948, b952);
  __retval919 = r953;
  char* t954 = __retval919;
  return t954;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v955, unsigned long v956) {
bb957: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this958;
  unsigned long __capacity959;
  this958 = v955;
  __capacity959 = v956;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t960 = this958;
  unsigned long t961 = __capacity959;
  t960->field2._M_allocated_capacity = t961;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb962: ;
  _Bool __retval963;
    _Bool c964 = 0;
    __retval963 = c964;
    _Bool t965 = __retval963;
    return t965;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v966) {
bb967: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this968;
  this968 = v966;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t969 = this968;
    _Bool r970 = std__is_constant_evaluated();
    if (r970) {
        unsigned long __i971;
        unsigned long c972 = 0;
        __i971 = c972;
        while (1) {
          unsigned long t974 = __i971;
          unsigned long c975 = 15;
          _Bool c976 = ((t974 <= c975)) ? 1 : 0;
          if (!c976) break;
          char c977 = 0;
          unsigned long t978 = __i971;
          t969->field2._M_local_buf[t978] = c977;
        for_step973: ;
          unsigned long t979 = __i971;
          unsigned long u980 = t979 + 1;
          __i971 = u980;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v981, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v982) {
bb983: ;
  struct _Guard* this984;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s985;
  this984 = v981;
  __s985 = v982;
  struct _Guard* t986 = this984;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t987 = __s985;
  t986->_M_guarded = t987;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v988, char* v989) {
bb990: ;
  char* __location991;
  char* __args992;
  char* __retval993;
  void* __loc994;
  __location991 = v988;
  __args992 = v989;
  char* t995 = __location991;
  void* cast996 = (void*)t995;
  __loc994 = cast996;
    void* t997 = __loc994;
    char* cast998 = (char*)t997;
    char* t999 = __args992;
    char t1000 = *t999;
    *cast998 = t1000;
    __retval993 = cast998;
    char* t1001 = __retval993;
    return t1001;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1002, char* v1003) {
bb1004: ;
  char* __c11005;
  char* __c21006;
  __c11005 = v1002;
  __c21006 = v1003;
    _Bool r1007 = std____is_constant_evaluated();
    if (r1007) {
      char* t1008 = __c11005;
      char* t1009 = __c21006;
      char* r1010 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1008, t1009);
    } else {
      char* t1011 = __c21006;
      char t1012 = *t1011;
      char* t1013 = __c11005;
      *t1013 = t1012;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1014, char* v1015, unsigned long v1016) {
bb1017: ;
  char* __s11018;
  char* __s21019;
  unsigned long __n1020;
  char* __retval1021;
  __s11018 = v1014;
  __s21019 = v1015;
  __n1020 = v1016;
    unsigned long t1022 = __n1020;
    unsigned long c1023 = 0;
    _Bool c1024 = ((t1022 == c1023)) ? 1 : 0;
    if (c1024) {
      char* t1025 = __s11018;
      __retval1021 = t1025;
      char* t1026 = __retval1021;
      return t1026;
    }
    _Bool r1027 = std____is_constant_evaluated();
    if (r1027) {
        unsigned long __i1028;
        unsigned long c1029 = 0;
        __i1028 = c1029;
        while (1) {
          unsigned long t1031 = __i1028;
          unsigned long t1032 = __n1020;
          _Bool c1033 = ((t1031 < t1032)) ? 1 : 0;
          if (!c1033) break;
          char* t1034 = __s11018;
          unsigned long t1035 = __i1028;
          char* ptr1036 = &(t1034)[t1035];
          unsigned long t1037 = __i1028;
          char* t1038 = __s21019;
          char* ptr1039 = &(t1038)[t1037];
          char* r1040 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1036, ptr1039);
        for_step1030: ;
          unsigned long t1041 = __i1028;
          unsigned long u1042 = t1041 + 1;
          __i1028 = u1042;
        }
      char* t1043 = __s11018;
      __retval1021 = t1043;
      char* t1044 = __retval1021;
      return t1044;
    }
  char* t1045 = __s11018;
  void* cast1046 = (void*)t1045;
  char* t1047 = __s21019;
  void* cast1048 = (void*)t1047;
  unsigned long t1049 = __n1020;
  unsigned long c1050 = 1;
  unsigned long b1051 = t1049 * c1050;
  void* r1052 = memcpy(cast1046, cast1048, b1051);
  char* t1053 = __s11018;
  __retval1021 = t1053;
  char* t1054 = __retval1021;
  return t1054;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1055, char* v1056, unsigned long v1057) {
bb1058: ;
  char* __s11059;
  char* __s21060;
  unsigned long __n1061;
  char* __retval1062;
  __s11059 = v1055;
  __s21060 = v1056;
  __n1061 = v1057;
    unsigned long t1063 = __n1061;
    unsigned long c1064 = 0;
    _Bool c1065 = ((t1063 == c1064)) ? 1 : 0;
    if (c1065) {
      char* t1066 = __s11059;
      __retval1062 = t1066;
      char* t1067 = __retval1062;
      return t1067;
    }
    _Bool r1068 = std____is_constant_evaluated();
    if (r1068) {
      char* t1069 = __s11059;
      char* t1070 = __s21060;
      unsigned long t1071 = __n1061;
      char* r1072 = __gnu_cxx__char_traits_char___copy(t1069, t1070, t1071);
      __retval1062 = r1072;
      char* t1073 = __retval1062;
      return t1073;
    }
  char* t1074 = __s11059;
  void* cast1075 = (void*)t1074;
  char* t1076 = __s21060;
  void* cast1077 = (void*)t1076;
  unsigned long t1078 = __n1061;
  void* r1079 = memcpy(cast1075, cast1077, t1078);
  char* cast1080 = (char*)r1079;
  __retval1062 = cast1080;
  char* t1081 = __retval1062;
  return t1081;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1082, char* v1083, unsigned long v1084) {
bb1085: ;
  char* __d1086;
  char* __s1087;
  unsigned long __n1088;
  __d1086 = v1082;
  __s1087 = v1083;
  __n1088 = v1084;
    unsigned long t1089 = __n1088;
    unsigned long c1090 = 1;
    _Bool c1091 = ((t1089 == c1090)) ? 1 : 0;
    if (c1091) {
      char* t1092 = __d1086;
      char* t1093 = __s1087;
      std__char_traits_char___assign(t1092, t1093);
    } else {
      char* t1094 = __d1086;
      char* t1095 = __s1087;
      unsigned long t1096 = __n1088;
      char* r1097 = std__char_traits_char___copy(t1094, t1095, t1096);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1098) {
bb1099: ;
  char* __it1100;
  char* __retval1101;
  __it1100 = v1098;
  char* t1102 = __it1100;
  __retval1101 = t1102;
  char* t1103 = __retval1101;
  return t1103;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1104, char* v1105, char* v1106) {
bb1107: ;
  char* __p1108;
  char* __k11109;
  char* __k21110;
  __p1108 = v1104;
  __k11109 = v1105;
  __k21110 = v1106;
    char* t1111 = __p1108;
    char* t1112 = __k11109;
    char* r1113 = char_const__std____niter_base_char_const__(t1112);
    char* t1114 = __k21110;
    char* t1115 = __k11109;
    long diff1116 = t1114 - t1115;
    unsigned long cast1117 = (unsigned long)diff1116;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1111, r1113, cast1117);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1118) {
bb1119: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1120;
  char* __retval1121;
  this1120 = v1118;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1122 = this1120;
  char* t1123 = t1122->_M_dataplus._M_p;
  __retval1121 = t1123;
  char* t1124 = __retval1121;
  return t1124;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1125, unsigned long v1126) {
bb1127: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1128;
  unsigned long __length1129;
  this1128 = v1125;
  __length1129 = v1126;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1130 = this1128;
  unsigned long t1131 = __length1129;
  t1130->_M_string_length = t1131;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1132, unsigned long v1133) {
bb1134: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1135;
  unsigned long __n1136;
  char ref_tmp01137;
  this1135 = v1132;
  __n1136 = v1133;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1138 = this1135;
  unsigned long t1139 = __n1136;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1138, t1139);
  unsigned long t1140 = __n1136;
  char* r1141 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1138);
  char* ptr1142 = &(r1141)[t1140];
  char c1143 = 0;
  ref_tmp01137 = c1143;
  std__char_traits_char___assign(ptr1142, &ref_tmp01137);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1144) {
bb1145: ;
  struct _Guard* this1146;
  this1146 = v1144;
  struct _Guard* t1147 = this1146;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1148 = t1147->_M_guarded;
    _Bool cast1149 = (_Bool)t1148;
    if (cast1149) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1150 = t1147->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1150);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1151, char* v1152, char* v1153, struct std__forward_iterator_tag v1154) {
bb1155: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1156;
  char* __beg1157;
  char* __end1158;
  struct std__forward_iterator_tag unnamed1159;
  unsigned long __dnew1160;
  struct _Guard __guard1161;
  this1156 = v1151;
  __beg1157 = v1152;
  __end1158 = v1153;
  unnamed1159 = v1154;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1162 = this1156;
  char* t1163 = __beg1157;
  char* t1164 = __end1158;
  long r1165 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1163, t1164);
  unsigned long cast1166 = (unsigned long)r1165;
  __dnew1160 = cast1166;
    unsigned long t1167 = __dnew1160;
    unsigned long c1168 = 15;
    _Bool c1169 = ((t1167 > c1168)) ? 1 : 0;
    if (c1169) {
      unsigned long c1170 = 0;
      char* r1171 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1162, &__dnew1160, c1170);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1162, r1171);
      unsigned long t1172 = __dnew1160;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1162, t1172);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1162);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1161, t1162);
    char* r1173 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1162);
    char* t1174 = __beg1157;
    char* t1175 = __end1158;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1173, t1174, t1175);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1176 = ((void*)0);
    __guard1161._M_guarded = c1176;
    unsigned long t1177 = __dnew1160;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1162, t1177);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1161);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1178) {
bb1179: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1180;
  this1180 = v1178;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1181 = this1180;
  {
    struct std__allocator_char_* base1182 = (struct std__allocator_char_*)((char *)t1181 + 0);
    std__allocator_char____allocator(base1182);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1183, struct std____new_allocator_char_* v1184) {
bb1185: ;
  struct std____new_allocator_char_* this1186;
  struct std____new_allocator_char_* unnamed1187;
  this1186 = v1183;
  unnamed1187 = v1184;
  struct std____new_allocator_char_* t1188 = this1186;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1189) {
bb1190: ;
  char* __r1191;
  char* __retval1192;
  __r1191 = v1189;
  char* t1193 = __r1191;
  __retval1192 = t1193;
  char* t1194 = __retval1192;
  return t1194;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1195) {
bb1196: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1197;
  char* __retval1198;
  this1197 = v1195;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1199 = this1197;
  char* cast1200 = (char*)&(t1199->field2._M_local_buf);
  char* r1201 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1200);
  __retval1198 = r1201;
  char* t1202 = __retval1198;
  return t1202;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1203) {
bb1204: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1205;
  _Bool __retval1206;
  this1205 = v1203;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1207 = this1205;
    char* r1208 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1207);
    char* r1209 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1207);
    _Bool c1210 = ((r1208 == r1209)) ? 1 : 0;
    if (c1210) {
        unsigned long t1211 = t1207->_M_string_length;
        unsigned long c1212 = 15;
        _Bool c1213 = ((t1211 > c1212)) ? 1 : 0;
        if (c1213) {
          __builtin_unreachable();
        }
      _Bool c1214 = 1;
      __retval1206 = c1214;
      _Bool t1215 = __retval1206;
      return t1215;
    }
  _Bool c1216 = 0;
  __retval1206 = c1216;
  _Bool t1217 = __retval1206;
  return t1217;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1218, char* v1219, unsigned long v1220) {
bb1221: ;
  struct std____new_allocator_char_* this1222;
  char* __p1223;
  unsigned long __n1224;
  this1222 = v1218;
  __p1223 = v1219;
  __n1224 = v1220;
  struct std____new_allocator_char_* t1225 = this1222;
    unsigned long c1226 = 1;
    unsigned long c1227 = 16;
    _Bool c1228 = ((c1226 > c1227)) ? 1 : 0;
    if (c1228) {
      char* t1229 = __p1223;
      void* cast1230 = (void*)t1229;
      unsigned long t1231 = __n1224;
      unsigned long c1232 = 1;
      unsigned long b1233 = t1231 * c1232;
      unsigned long c1234 = 1;
      operator_delete_3(cast1230, b1233, c1234);
      return;
    }
  char* t1235 = __p1223;
  void* cast1236 = (void*)t1235;
  unsigned long t1237 = __n1224;
  unsigned long c1238 = 1;
  unsigned long b1239 = t1237 * c1238;
  operator_delete_2(cast1236, b1239);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1240, char* v1241, unsigned long v1242) {
bb1243: ;
  struct std__allocator_char_* this1244;
  char* __p1245;
  unsigned long __n1246;
  this1244 = v1240;
  __p1245 = v1241;
  __n1246 = v1242;
  struct std__allocator_char_* t1247 = this1244;
    _Bool r1248 = std____is_constant_evaluated();
    if (r1248) {
      char* t1249 = __p1245;
      void* cast1250 = (void*)t1249;
      operator_delete(cast1250);
      return;
    }
  struct std____new_allocator_char_* base1251 = (struct std____new_allocator_char_*)((char *)t1247 + 0);
  char* t1252 = __p1245;
  unsigned long t1253 = __n1246;
  std____new_allocator_char___deallocate(base1251, t1252, t1253);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1254, char* v1255, unsigned long v1256) {
bb1257: ;
  struct std__allocator_char_* __a1258;
  char* __p1259;
  unsigned long __n1260;
  __a1258 = v1254;
  __p1259 = v1255;
  __n1260 = v1256;
  struct std__allocator_char_* t1261 = __a1258;
  char* t1262 = __p1259;
  unsigned long t1263 = __n1260;
  std__allocator_char___deallocate(t1261, t1262, t1263);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1264, unsigned long v1265) {
bb1266: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1267;
  unsigned long __size1268;
  this1267 = v1264;
  __size1268 = v1265;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1269 = this1267;
  struct std__allocator_char_* r1270 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1269);
  char* r1271 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1269);
  unsigned long t1272 = __size1268;
  unsigned long c1273 = 1;
  unsigned long b1274 = t1272 + c1273;
  std__allocator_traits_std__allocator_char_____deallocate(r1270, r1271, b1274);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1275) {
bb1276: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1277;
  this1277 = v1275;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1278 = this1277;
    _Bool r1279 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1278);
    _Bool u1280 = !r1279;
    if (u1280) {
      unsigned long t1281 = t1278->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1278, t1281);
    }
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1282, struct std__allocator_char_* v1283) {
bb1284: ;
  struct std__allocator_char_* this1285;
  struct std__allocator_char_* __a1286;
  this1285 = v1282;
  __a1286 = v1283;
  struct std__allocator_char_* t1287 = this1285;
  struct std____new_allocator_char_* base1288 = (struct std____new_allocator_char_*)((char *)t1287 + 0);
  struct std__allocator_char_* t1289 = __a1286;
  struct std____new_allocator_char_* base1290 = (struct std____new_allocator_char_*)((char *)t1289 + 0);
  std____new_allocator_char_____new_allocator(base1288, base1290);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v1291) {
bb1292: ;
  struct std__allocator_char_* __rhs1293;
  struct std__allocator_char_ __retval1294;
  __rhs1293 = v1291;
  struct std__allocator_char_* t1295 = __rhs1293;
  std__allocator_char___allocator(&__retval1294, t1295);
  struct std__allocator_char_ t1296 = __retval1294;
  return t1296;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v1297) {
bb1298: ;
  struct std__allocator_char_* __a1299;
  struct std__allocator_char_ __retval1300;
  __a1299 = v1297;
  struct std__allocator_char_* t1301 = __a1299;
  struct std__allocator_char_ r1302 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t1301);
  __retval1300 = r1302;
  struct std__allocator_char_ t1303 = __retval1300;
  return t1303;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1304, char* v1305, struct std__allocator_char_* v1306) {
bb1307: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1308;
  char* __dat1309;
  struct std__allocator_char_* __a1310;
  this1308 = v1304;
  __dat1309 = v1305;
  __a1310 = v1306;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1311 = this1308;
  struct std__allocator_char_* base1312 = (struct std__allocator_char_*)((char *)t1311 + 0);
  struct std__allocator_char_* t1313 = __a1310;
  std__allocator_char___allocator(base1312, t1313);
    char* t1314 = __dat1309;
    t1311->_M_p = t1314;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructILb1EEEvPKcm
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1315, char* v1316, unsigned long v1317) {
bb1318: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1319;
  char* __str1320;
  unsigned long __n1321;
  this1319 = v1315;
  __str1320 = v1316;
  __n1321 = v1317;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1322 = this1319;
    unsigned long t1323 = __n1321;
    unsigned long c1324 = 15;
    _Bool c1325 = ((t1323 > c1324)) ? 1 : 0;
    if (c1325) {
      unsigned long c1326 = 0;
      char* r1327 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1322, &__n1321, c1326);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1322, r1327);
      unsigned long t1328 = __n1321;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1322, t1328);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1322);
    }
    unsigned long t1329 = __n1321;
    _Bool cast1330 = (_Bool)t1329;
    _Bool ternary1331;
    if (cast1330) {
      _Bool c1332 = 1;
      ternary1331 = (_Bool)c1332;
    } else {
      _Bool c1333 = 1;
      ternary1331 = (_Bool)c1333;
    }
    if (ternary1331) {
      char* r1334 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1322);
      char* t1335 = __str1320;
      unsigned long t1336 = __n1321;
      _Bool c1337 = 1;
      unsigned long cast1338 = (unsigned long)c1337;
      unsigned long b1339 = t1336 + cast1338;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1334, t1335, b1339);
    }
  unsigned long t1340 = __n1321;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1322, t1340);
    _Bool c1341 = 0;
    if (c1341) {
      char ref_tmp01342;
      unsigned long t1343 = __n1321;
      char* r1344 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1322);
      char* ptr1345 = &(r1344)[t1343];
      char c1346 = 0;
      ref_tmp01342 = c1346;
      std__char_traits_char___assign(ptr1345, &ref_tmp01342);
    }
  return;
}

