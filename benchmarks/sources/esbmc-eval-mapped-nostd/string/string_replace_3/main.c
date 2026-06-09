extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

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

char _str[23] = "this is a test string.";
char _str_1[10] = "n example";
char _str_2[14] = "sample phrase";
char _str_3[8] = "useful.";
char _str_4[27] = "this is an example string.";
char _str_5[36] = "str == \"this is an example string.\"";
char _str_6[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_replace_3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_7[27] = "this is an example phrase.";
char _str_8[36] = "str == \"this is an example phrase.\"";
char _str_9[9] = "just all";
char _str_10[23] = "this is just a phrase.";
char _str_11[32] = "str == \"this is just a phrase.\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_12[50] = "basic_string: construction from null is not valid";
char _str_13[24] = "basic_string::_M_create";
char _str_14[22] = "basic_string::replace";
char _str_15[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_16[25] = "basic_string::_M_replace";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3, unsigned long p4, unsigned long p5);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
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
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v0) {
bb1:
  struct std__allocator_char_* this2;
  this2 = v0;
  struct std__allocator_char_* t3 = this2;
  struct std____new_allocator_char_* base4 = (struct std____new_allocator_char_*)((char *)t3 + 0);
  std____new_allocator_char_____new_allocator_2(base4);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v5, char* v6, struct std__allocator_char_* v7) {
bb8:
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
        char* cast20 = (char*)&(_str_12);
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
bb29:
  struct std__allocator_char_* this30;
  this30 = v28;
  struct std__allocator_char_* t31 = this30;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v32, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v33) {
bb34:
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

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmRKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v47, unsigned long v48, unsigned long v49, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v50) {
bb51:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this52;
  unsigned long __pos53;
  unsigned long __n54;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str55;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval56;
  this52 = v47;
  __pos53 = v48;
  __n54 = v49;
  __str55 = v50;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t57 = this52;
  unsigned long t58 = __pos53;
  unsigned long t59 = __n54;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t60 = __str55;
  char* r61 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t60);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t62 = __str55;
  unsigned long r63 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t62);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r64 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(t57, t58, t59, r61, r63);
  __retval56 = r64;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t65 = __retval56;
  return t65;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v66, char* v67) {
bb68:
  char* __c169;
  char* __c270;
  _Bool __retval71;
  __c169 = v66;
  __c270 = v67;
  char* t72 = __c169;
  char t73 = *t72;
  unsigned char cast74 = (unsigned char)t73;
  int cast75 = (int)cast74;
  char* t76 = __c270;
  char t77 = *t76;
  unsigned char cast78 = (unsigned char)t77;
  int cast79 = (int)cast78;
  _Bool c80 = ((cast75 < cast79)) ? 1 : 0;
  __retval71 = c80;
  _Bool t81 = __retval71;
  return t81;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v82, char* v83, unsigned long v84) {
bb85:
  char* __s186;
  char* __s287;
  unsigned long __n88;
  int __retval89;
  __s186 = v82;
  __s287 = v83;
  __n88 = v84;
    unsigned long t90 = __n88;
    unsigned long c91 = 0;
    _Bool c92 = ((t90 == c91)) ? 1 : 0;
    if (c92) {
      int c93 = 0;
      __retval89 = c93;
      int t94 = __retval89;
      return t94;
    }
    _Bool r95 = std____is_constant_evaluated();
    if (r95) {
        unsigned long __i96;
        unsigned long c97 = 0;
        __i96 = c97;
        while (1) {
          unsigned long t99 = __i96;
          unsigned long t100 = __n88;
          _Bool c101 = ((t99 < t100)) ? 1 : 0;
          if (!c101) break;
            unsigned long t102 = __i96;
            char* t103 = __s186;
            char* ptr104 = &(t103)[t102];
            unsigned long t105 = __i96;
            char* t106 = __s287;
            char* ptr107 = &(t106)[t105];
            _Bool r108 = std__char_traits_char___lt(ptr104, ptr107);
            if (r108) {
              int c109 = -1;
              __retval89 = c109;
              int t110 = __retval89;
              int ret_val111 = t110;
              return ret_val111;
            } else {
                unsigned long t112 = __i96;
                char* t113 = __s287;
                char* ptr114 = &(t113)[t112];
                unsigned long t115 = __i96;
                char* t116 = __s186;
                char* ptr117 = &(t116)[t115];
                _Bool r118 = std__char_traits_char___lt(ptr114, ptr117);
                if (r118) {
                  int c119 = 1;
                  __retval89 = c119;
                  int t120 = __retval89;
                  int ret_val121 = t120;
                  return ret_val121;
                }
            }
        for_step98: ;
          unsigned long t122 = __i96;
          unsigned long u123 = t122 + 1;
          __i96 = u123;
        }
      int c124 = 0;
      __retval89 = c124;
      int t125 = __retval89;
      return t125;
    }
  char* t126 = __s186;
  void* cast127 = (void*)t126;
  char* t128 = __s287;
  void* cast129 = (void*)t128;
  unsigned long t130 = __n88;
  int r131 = memcmp(cast127, cast129, t130);
  __retval89 = r131;
  int t132 = __retval89;
  return t132;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v133) {
bb134:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this135;
  char* __retval136;
  this135 = v133;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t137 = this135;
  char* r138 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t137);
  __retval136 = r138;
  char* t139 = __retval136;
  return t139;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v140, char* v141) {
bb142:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs143;
  char* __rhs144;
  _Bool __retval145;
  __lhs143 = v140;
  __rhs144 = v141;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t146 = __lhs143;
  unsigned long r147 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t146);
  char* t148 = __rhs144;
  unsigned long r149 = std__char_traits_char___length(t148);
  _Bool c150 = ((r147 == r149)) ? 1 : 0;
  _Bool ternary151;
  if (c150) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t152 = __lhs143;
    char* r153 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t152);
    char* t154 = __rhs144;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t155 = __lhs143;
    unsigned long r156 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t155);
    int r157 = std__char_traits_char___compare(r153, t154, r156);
    _Bool cast158 = (_Bool)r157;
    _Bool u159 = !cast158;
    ternary151 = (_Bool)u159;
  } else {
    _Bool c160 = 0;
    ternary151 = (_Bool)c160;
  }
  __retval145 = ternary151;
  _Bool t161 = __retval145;
  return t161;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v162, unsigned long v163, char* v164) {
bb165:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this166;
  unsigned long __pos167;
  char* __s168;
  unsigned long __retval169;
  this166 = v162;
  __pos167 = v163;
  __s168 = v164;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t170 = this166;
    unsigned long t171 = __pos167;
    unsigned long r172 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t170);
    _Bool c173 = ((t171 > r172)) ? 1 : 0;
    if (c173) {
      char* cast174 = (char*)&(_str_15);
      char* t175 = __s168;
      unsigned long t176 = __pos167;
      unsigned long r177 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t170);
      std____throw_out_of_range_fmt(cast174, t175, t176, r177);
    }
  unsigned long t178 = __pos167;
  __retval169 = t178;
  unsigned long t179 = __retval169;
  return t179;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v180, unsigned long v181, unsigned long v182) {
bb183:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this184;
  unsigned long __pos185;
  unsigned long __off186;
  unsigned long __retval187;
  _Bool __testoff188;
  this184 = v180;
  __pos185 = v181;
  __off186 = v182;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t189 = this184;
  unsigned long t190 = __off186;
  unsigned long r191 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t189);
  unsigned long t192 = __pos185;
  unsigned long b193 = r191 - t192;
  _Bool c194 = ((t190 < b193)) ? 1 : 0;
  __testoff188 = c194;
  _Bool t195 = __testoff188;
  unsigned long ternary196;
  if (t195) {
    unsigned long t197 = __off186;
    ternary196 = (unsigned long)t197;
  } else {
    unsigned long r198 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t189);
    unsigned long t199 = __pos185;
    unsigned long b200 = r198 - t199;
    ternary196 = (unsigned long)b200;
  }
  __retval187 = ternary196;
  unsigned long t201 = __retval187;
  return t201;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmRKS4_mm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v202, unsigned long v203, unsigned long v204, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v205, unsigned long v206, unsigned long v207) {
bb208:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this209;
  unsigned long __pos1210;
  unsigned long __n1211;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str212;
  unsigned long __pos2213;
  unsigned long __n2214;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval215;
  this209 = v202;
  __pos1210 = v203;
  __n1211 = v204;
  __str212 = v205;
  __pos2213 = v206;
  __n2214 = v207;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t216 = this209;
  unsigned long t217 = __pos1210;
  unsigned long t218 = __n1211;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t219 = __str212;
  char* r220 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t219);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t221 = __str212;
  unsigned long t222 = __pos2213;
  char* cast223 = (char*)&(_str_14);
  unsigned long r224 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t221, t222, cast223);
  char* ptr225 = &(r220)[r224];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t226 = __str212;
  unsigned long t227 = __pos2213;
  unsigned long t228 = __n2214;
  unsigned long r229 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t226, t227, t228);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r230 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(t216, t217, t218, ptr225, r229);
  __retval215 = r230;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t231 = __retval215;
  return t231;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v232, unsigned long v233, unsigned long v234, char* v235) {
bb236:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this237;
  unsigned long __n1238;
  unsigned long __n2239;
  char* __s240;
  this237 = v232;
  __n1238 = v233;
  __n2239 = v234;
  __s240 = v235;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t241 = this237;
    unsigned long r242 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t241);
    unsigned long r243 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t241);
    unsigned long t244 = __n1238;
    unsigned long b245 = r243 - t244;
    unsigned long b246 = r242 - b245;
    unsigned long t247 = __n2239;
    _Bool c248 = ((b246 < t247)) ? 1 : 0;
    if (c248) {
      char* t249 = __s240;
      std____throw_length_error(t249);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v250) {
bb251:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this252;
  unsigned long __retval253;
  unsigned long __sz254;
  this252 = v250;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t255 = this252;
  _Bool r256 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t255);
  unsigned long ternary257;
  if (r256) {
    unsigned long c258 = 15;
    ternary257 = (unsigned long)c258;
  } else {
    unsigned long t259 = t255->field2._M_allocated_capacity;
    ternary257 = (unsigned long)t259;
  }
  __sz254 = ternary257;
    unsigned long t260 = __sz254;
    unsigned long c261 = 15;
    _Bool c262 = ((t260 < c261)) ? 1 : 0;
    _Bool ternary263;
    if (c262) {
      _Bool c264 = 1;
      ternary263 = (_Bool)c264;
    } else {
      unsigned long t265 = __sz254;
      unsigned long r266 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t255);
      _Bool c267 = ((t265 > r266)) ? 1 : 0;
      ternary263 = (_Bool)c267;
    }
    if (ternary263) {
      __builtin_unreachable();
    }
  unsigned long t268 = __sz254;
  __retval253 = t268;
  unsigned long t269 = __retval253;
  return t269;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v270, char* v271, char* v272) {
bb273:
  struct std__less_const_char___* this274;
  char* __x275;
  char* __y276;
  _Bool __retval277;
  this274 = v270;
  __x275 = v271;
  __y276 = v272;
  struct std__less_const_char___* t278 = this274;
    _Bool r279 = std____is_constant_evaluated();
    if (r279) {
      char* t280 = __x275;
      char* t281 = __y276;
      _Bool c282 = ((t280 < t281)) ? 1 : 0;
      __retval277 = c282;
      _Bool t283 = __retval277;
      return t283;
    }
  char* t284 = __x275;
  unsigned long cast285 = (unsigned long)t284;
  char* t286 = __y276;
  unsigned long cast287 = (unsigned long)t286;
  _Bool c288 = ((cast285 < cast287)) ? 1 : 0;
  __retval277 = c288;
  _Bool t289 = __retval277;
  return t289;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v290, char* v291) {
bb292:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this293;
  char* __s294;
  _Bool __retval295;
  struct std__less_const_char___ ref_tmp0296;
  this293 = v290;
  __s294 = v291;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t297 = this293;
  char* t298 = __s294;
  char* r299 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t297);
  _Bool r300 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0296, t298, r299);
  _Bool ternary301;
  if (r300) {
    _Bool c302 = 1;
    ternary301 = (_Bool)c302;
  } else {
    struct std__less_const_char___ ref_tmp1303;
    char* r304 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t297);
    unsigned long r305 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t297);
    char* ptr306 = &(r304)[r305];
    char* t307 = __s294;
    _Bool r308 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1303, ptr306, t307);
    ternary301 = (_Bool)r308;
  }
  __retval295 = ternary301;
  _Bool t309 = __retval295;
  return t309;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v310, char* v311) {
bb312:
  char* __c1313;
  char* __c2314;
  __c1313 = v310;
  __c2314 = v311;
    _Bool r315 = std____is_constant_evaluated();
    if (r315) {
      char* t316 = __c1313;
      char* t317 = __c2314;
      char* r318 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t316, t317);
    } else {
      char* t319 = __c2314;
      char t320 = *t319;
      char* t321 = __c1313;
      *t321 = t320;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v322, char* v323, unsigned long v324) {
bb325:
  char* __s1326;
  char* __s2327;
  unsigned long __n328;
  char* __retval329;
  __s1326 = v322;
  __s2327 = v323;
  __n328 = v324;
    unsigned long t330 = __n328;
    unsigned long c331 = 0;
    _Bool c332 = ((t330 == c331)) ? 1 : 0;
    if (c332) {
      char* t333 = __s1326;
      __retval329 = t333;
      char* t334 = __retval329;
      return t334;
    }
    _Bool r335 = std____is_constant_evaluated();
    if (r335) {
        char* t336 = __s2327;
        char* t337 = __s1326;
        _Bool c338 = ((t336 < t337)) ? 1 : 0;
        _Bool isconst339 = 0;
        _Bool ternary340;
        if (isconst339) {
          char* t341 = __s1326;
          char* t342 = __s2327;
          _Bool c343 = ((t341 > t342)) ? 1 : 0;
          ternary340 = (_Bool)c343;
        } else {
          _Bool c344 = 0;
          ternary340 = (_Bool)c344;
        }
        _Bool ternary345;
        if (ternary340) {
          char* t346 = __s1326;
          char* t347 = __s2327;
          unsigned long t348 = __n328;
          char* ptr349 = &(t347)[t348];
          _Bool c350 = ((t346 < ptr349)) ? 1 : 0;
          ternary345 = (_Bool)c350;
        } else {
          _Bool c351 = 0;
          ternary345 = (_Bool)c351;
        }
        if (ternary345) {
            do {
                unsigned long t352 = __n328;
                unsigned long u353 = t352 - 1;
                __n328 = u353;
                unsigned long t354 = __n328;
                char* t355 = __s1326;
                char* ptr356 = &(t355)[t354];
                unsigned long t357 = __n328;
                char* t358 = __s2327;
                char* ptr359 = &(t358)[t357];
                __gnu_cxx__char_traits_char___assign(ptr356, ptr359);
              unsigned long t360 = __n328;
              unsigned long c361 = 0;
              _Bool c362 = ((t360 > c361)) ? 1 : 0;
              if (!c362) break;
            } while (1);
        } else {
          char* t363 = __s1326;
          char* t364 = __s2327;
          unsigned long t365 = __n328;
          char* r366 = __gnu_cxx__char_traits_char___copy(t363, t364, t365);
        }
      char* t367 = __s1326;
      __retval329 = t367;
      char* t368 = __retval329;
      return t368;
    }
  char* t369 = __s1326;
  void* cast370 = (void*)t369;
  char* t371 = __s2327;
  void* cast372 = (void*)t371;
  unsigned long t373 = __n328;
  unsigned long c374 = 1;
  unsigned long b375 = t373 * c374;
  void* r376 = memmove(cast370, cast372, b375);
  char* t377 = __s1326;
  __retval329 = t377;
  char* t378 = __retval329;
  return t378;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v379, char* v380, unsigned long v381) {
bb382:
  char* __s1383;
  char* __s2384;
  unsigned long __n385;
  char* __retval386;
  __s1383 = v379;
  __s2384 = v380;
  __n385 = v381;
    unsigned long t387 = __n385;
    unsigned long c388 = 0;
    _Bool c389 = ((t387 == c388)) ? 1 : 0;
    if (c389) {
      char* t390 = __s1383;
      __retval386 = t390;
      char* t391 = __retval386;
      return t391;
    }
    _Bool r392 = std____is_constant_evaluated();
    if (r392) {
      char* t393 = __s1383;
      char* t394 = __s2384;
      unsigned long t395 = __n385;
      char* r396 = __gnu_cxx__char_traits_char___move(t393, t394, t395);
      __retval386 = r396;
      char* t397 = __retval386;
      return t397;
    }
  char* t398 = __s1383;
  void* cast399 = (void*)t398;
  char* t400 = __s2384;
  void* cast401 = (void*)t400;
  unsigned long t402 = __n385;
  void* r403 = memmove(cast399, cast401, t402);
  char* cast404 = (char*)r403;
  __retval386 = cast404;
  char* t405 = __retval386;
  return t405;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v406, char* v407, unsigned long v408) {
bb409:
  char* __d410;
  char* __s411;
  unsigned long __n412;
  __d410 = v406;
  __s411 = v407;
  __n412 = v408;
    unsigned long t413 = __n412;
    unsigned long c414 = 1;
    _Bool c415 = ((t413 == c414)) ? 1 : 0;
    if (c415) {
      char* t416 = __d410;
      char* t417 = __s411;
      std__char_traits_char___assign(t416, t417);
    } else {
      char* t418 = __d410;
      char* t419 = __s411;
      unsigned long t420 = __n412;
      char* r421 = std__char_traits_char___move(t418, t419, t420);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v422, char* v423, unsigned long v424, char* v425, unsigned long v426, unsigned long v427) {
bb428:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this429;
  char* __p430;
  unsigned long __len1431;
  char* __s432;
  unsigned long __len2433;
  unsigned long __how_much434;
  this429 = v422;
  __p430 = v423;
  __len1431 = v424;
  __s432 = v425;
  __len2433 = v426;
  __how_much434 = v427;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t435 = this429;
    unsigned long t436 = __len2433;
    _Bool cast437 = (_Bool)t436;
    _Bool ternary438;
    if (cast437) {
      unsigned long t439 = __len2433;
      unsigned long t440 = __len1431;
      _Bool c441 = ((t439 <= t440)) ? 1 : 0;
      ternary438 = (_Bool)c441;
    } else {
      _Bool c442 = 0;
      ternary438 = (_Bool)c442;
    }
    if (ternary438) {
      char* t443 = __p430;
      char* t444 = __s432;
      unsigned long t445 = __len2433;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t443, t444, t445);
    }
    unsigned long t446 = __how_much434;
    _Bool cast447 = (_Bool)t446;
    _Bool ternary448;
    if (cast447) {
      unsigned long t449 = __len1431;
      unsigned long t450 = __len2433;
      _Bool c451 = ((t449 != t450)) ? 1 : 0;
      ternary448 = (_Bool)c451;
    } else {
      _Bool c452 = 0;
      ternary448 = (_Bool)c452;
    }
    if (ternary448) {
      char* t453 = __p430;
      unsigned long t454 = __len2433;
      char* ptr455 = &(t453)[t454];
      char* t456 = __p430;
      unsigned long t457 = __len1431;
      char* ptr458 = &(t456)[t457];
      unsigned long t459 = __how_much434;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr455, ptr458, t459);
    }
    unsigned long t460 = __len2433;
    unsigned long t461 = __len1431;
    _Bool c462 = ((t460 > t461)) ? 1 : 0;
    if (c462) {
        char* t463 = __s432;
        unsigned long t464 = __len2433;
        char* ptr465 = &(t463)[t464];
        char* t466 = __p430;
        unsigned long t467 = __len1431;
        char* ptr468 = &(t466)[t467];
        _Bool c469 = ((ptr465 <= ptr468)) ? 1 : 0;
        if (c469) {
          char* t470 = __p430;
          char* t471 = __s432;
          unsigned long t472 = __len2433;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t470, t471, t472);
        } else {
            char* t473 = __s432;
            char* t474 = __p430;
            unsigned long t475 = __len1431;
            char* ptr476 = &(t474)[t475];
            _Bool c477 = ((t473 >= ptr476)) ? 1 : 0;
            if (c477) {
              unsigned long __poff478;
              char* t479 = __s432;
              char* t480 = __p430;
              long diff481 = t479 - t480;
              unsigned long cast482 = (unsigned long)diff481;
              unsigned long t483 = __len2433;
              unsigned long t484 = __len1431;
              unsigned long b485 = t483 - t484;
              unsigned long b486 = cast482 + b485;
              __poff478 = b486;
              char* t487 = __p430;
              char* t488 = __p430;
              unsigned long t489 = __poff478;
              char* ptr490 = &(t488)[t489];
              unsigned long t491 = __len2433;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t487, ptr490, t491);
            } else {
              unsigned long __nleft492;
              char* t493 = __p430;
              unsigned long t494 = __len1431;
              char* ptr495 = &(t493)[t494];
              char* t496 = __s432;
              long diff497 = ptr495 - t496;
              unsigned long cast498 = (unsigned long)diff497;
              __nleft492 = cast498;
              char* t499 = __p430;
              char* t500 = __s432;
              unsigned long t501 = __nleft492;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t499, t500, t501);
              char* t502 = __p430;
              unsigned long t503 = __nleft492;
              char* ptr504 = &(t502)[t503];
              char* t505 = __p430;
              unsigned long t506 = __len2433;
              char* ptr507 = &(t505)[t506];
              unsigned long t508 = __len2433;
              unsigned long t509 = __nleft492;
              unsigned long b510 = t508 - t509;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr504, ptr507, b510);
            }
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v511, unsigned long v512, unsigned long v513, char* v514, unsigned long v515) {
bb516:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this517;
  unsigned long __pos518;
  unsigned long __len1519;
  char* __s520;
  unsigned long __len2521;
  unsigned long __how_much522;
  unsigned long __new_capacity523;
  char* __r524;
  this517 = v511;
  __pos518 = v512;
  __len1519 = v513;
  __s520 = v514;
  __len2521 = v515;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t525 = this517;
  unsigned long r526 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t525);
  unsigned long t527 = __pos518;
  unsigned long b528 = r526 - t527;
  unsigned long t529 = __len1519;
  unsigned long b530 = b528 - t529;
  __how_much522 = b530;
  unsigned long r531 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t525);
  unsigned long t532 = __len2521;
  unsigned long b533 = r531 + t532;
  unsigned long t534 = __len1519;
  unsigned long b535 = b533 - t534;
  __new_capacity523 = b535;
  unsigned long r536 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t525);
  char* r537 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t525, &__new_capacity523, r536);
  __r524 = r537;
    unsigned long t538 = __pos518;
    _Bool cast539 = (_Bool)t538;
    if (cast539) {
      char* t540 = __r524;
      char* r541 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t525);
      unsigned long t542 = __pos518;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t540, r541, t542);
    }
    char* t543 = __s520;
    _Bool cast544 = (_Bool)t543;
    _Bool ternary545;
    if (cast544) {
      unsigned long t546 = __len2521;
      _Bool cast547 = (_Bool)t546;
      ternary545 = (_Bool)cast547;
    } else {
      _Bool c548 = 0;
      ternary545 = (_Bool)c548;
    }
    if (ternary545) {
      char* t549 = __r524;
      unsigned long t550 = __pos518;
      char* ptr551 = &(t549)[t550];
      char* t552 = __s520;
      unsigned long t553 = __len2521;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr551, t552, t553);
    }
    unsigned long t554 = __how_much522;
    _Bool cast555 = (_Bool)t554;
    if (cast555) {
      char* t556 = __r524;
      unsigned long t557 = __pos518;
      char* ptr558 = &(t556)[t557];
      unsigned long t559 = __len2521;
      char* ptr560 = &(ptr558)[t559];
      char* r561 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t525);
      unsigned long t562 = __pos518;
      char* ptr563 = &(r561)[t562];
      unsigned long t564 = __len1519;
      char* ptr565 = &(ptr563)[t564];
      unsigned long t566 = __how_much522;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr560, ptr565, t566);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t525);
  char* t567 = __r524;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t525, t567);
  unsigned long t568 = __new_capacity523;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t525, t568);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v569, unsigned long v570, unsigned long v571, char* v572, unsigned long v573) {
bb574:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this575;
  unsigned long __pos576;
  unsigned long __len1577;
  char* __s578;
  unsigned long __len2579;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval580;
  unsigned long __old_size581;
  unsigned long __new_size582;
  this575 = v569;
  __pos576 = v570;
  __len1577 = v571;
  __s578 = v572;
  __len2579 = v573;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t583 = this575;
  unsigned long t584 = __len1577;
  unsigned long t585 = __len2579;
  char* cast586 = (char*)&(_str_16);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t583, t584, t585, cast586);
  unsigned long r587 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t583);
  __old_size581 = r587;
  unsigned long t588 = __old_size581;
  unsigned long t589 = __len2579;
  unsigned long b590 = t588 + t589;
  unsigned long t591 = __len1577;
  unsigned long b592 = b590 - t591;
  __new_size582 = b592;
    unsigned long t593 = __new_size582;
    unsigned long r594 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t583);
    _Bool c595 = ((t593 <= r594)) ? 1 : 0;
    if (c595) {
      char* __p596;
      unsigned long __how_much597;
      char* r598 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t583);
      unsigned long t599 = __pos576;
      char* ptr600 = &(r598)[t599];
      __p596 = ptr600;
      unsigned long t601 = __old_size581;
      unsigned long t602 = __pos576;
      unsigned long b603 = t601 - t602;
      unsigned long t604 = __len1577;
      unsigned long b605 = b603 - t604;
      __how_much597 = b605;
        _Bool r606 = std__is_constant_evaluated();
        if (r606) {
          char* __newp607;
          struct std__allocator_char_* r608 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t583);
          unsigned long t609 = __new_size582;
          char* r610 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r608, t609);
          __newp607 = r610;
          char* t611 = __newp607;
          char* r612 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t583);
          unsigned long t613 = __pos576;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t611, r612, t613);
          char* t614 = __newp607;
          unsigned long t615 = __pos576;
          char* ptr616 = &(t614)[t615];
          char* t617 = __s578;
          unsigned long t618 = __len2579;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr616, t617, t618);
          char* t619 = __newp607;
          unsigned long t620 = __pos576;
          char* ptr621 = &(t619)[t620];
          unsigned long t622 = __len2579;
          char* ptr623 = &(ptr621)[t622];
          char* t624 = __p596;
          unsigned long t625 = __len1577;
          char* ptr626 = &(t624)[t625];
          unsigned long t627 = __how_much597;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr623, ptr626, t627);
          char* r628 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t583);
          char* t629 = __newp607;
          unsigned long t630 = __new_size582;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r628, t629, t630);
          struct std__allocator_char_* r631 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t583);
          char* t632 = __newp607;
          unsigned long t633 = __new_size582;
          std__allocator_char___deallocate(r631, t632, t633);
        } else {
            char* t634 = __s578;
            _Bool r635 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t583, t634);
            if (r635) {
                unsigned long t636 = __how_much597;
                _Bool cast637 = (_Bool)t636;
                _Bool ternary638;
                if (cast637) {
                  unsigned long t639 = __len1577;
                  unsigned long t640 = __len2579;
                  _Bool c641 = ((t639 != t640)) ? 1 : 0;
                  ternary638 = (_Bool)c641;
                } else {
                  _Bool c642 = 0;
                  ternary638 = (_Bool)c642;
                }
                if (ternary638) {
                  char* t643 = __p596;
                  unsigned long t644 = __len2579;
                  char* ptr645 = &(t643)[t644];
                  char* t646 = __p596;
                  unsigned long t647 = __len1577;
                  char* ptr648 = &(t646)[t647];
                  unsigned long t649 = __how_much597;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr645, ptr648, t649);
                }
                unsigned long t650 = __len2579;
                _Bool cast651 = (_Bool)t650;
                if (cast651) {
                  char* t652 = __p596;
                  char* t653 = __s578;
                  unsigned long t654 = __len2579;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t652, t653, t654);
                }
            } else {
              char* t655 = __p596;
              unsigned long t656 = __len1577;
              char* t657 = __s578;
              unsigned long t658 = __len2579;
              unsigned long t659 = __how_much597;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t583, t655, t656, t657, t658, t659);
            }
        }
    } else {
      unsigned long t660 = __pos576;
      unsigned long t661 = __len1577;
      char* t662 = __s578;
      unsigned long t663 = __len2579;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t583, t660, t661, t662, t663);
    }
  unsigned long t664 = __new_size582;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t583, t664);
  __retval580 = t583;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t665 = __retval580;
  return t665;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v666, unsigned long v667, unsigned long v668, char* v669, unsigned long v670) {
bb671:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this672;
  unsigned long __pos673;
  unsigned long __n1674;
  char* __s675;
  unsigned long __n2676;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval677;
  this672 = v666;
  __pos673 = v667;
  __n1674 = v668;
  __s675 = v669;
  __n2676 = v670;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t678 = this672;
  unsigned long t679 = __pos673;
  char* cast680 = (char*)&(_str_14);
  unsigned long r681 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t678, t679, cast680);
  unsigned long t682 = __pos673;
  unsigned long t683 = __n1674;
  unsigned long r684 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t678, t682, t683);
  char* t685 = __s675;
  unsigned long t686 = __n2676;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r687 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t678, r681, r684, t685, t686);
  __retval677 = r687;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t688 = __retval677;
  return t688;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v689, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v690) {
bb691:
  struct std__basic_ostream_char__std__char_traits_char__* __os692;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str693;
  struct std__basic_ostream_char__std__char_traits_char__* __retval694;
  __os692 = v689;
  __str693 = v690;
  struct std__basic_ostream_char__std__char_traits_char__* t695 = __os692;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t696 = __str693;
  char* r697 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t696);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t698 = __str693;
  unsigned long r699 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t698);
  long cast700 = (long)r699;
  struct std__basic_ostream_char__std__char_traits_char__* r701 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t695, r697, cast700);
  __retval694 = r701;
  struct std__basic_ostream_char__std__char_traits_char__* t702 = __retval694;
  return t702;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v703, void* v704) {
bb705:
  struct std__basic_ostream_char__std__char_traits_char__* this706;
  void* __pf707;
  struct std__basic_ostream_char__std__char_traits_char__* __retval708;
  this706 = v703;
  __pf707 = v704;
  struct std__basic_ostream_char__std__char_traits_char__* t709 = this706;
  void* t710 = __pf707;
  struct std__basic_ostream_char__std__char_traits_char__* r711 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t710)(t709);
  __retval708 = r711;
  struct std__basic_ostream_char__std__char_traits_char__* t712 = __retval708;
  return t712;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v713) {
bb714:
  struct std__basic_ostream_char__std__char_traits_char__* __os715;
  struct std__basic_ostream_char__std__char_traits_char__* __retval716;
  __os715 = v713;
  struct std__basic_ostream_char__std__char_traits_char__* t717 = __os715;
  struct std__basic_ostream_char__std__char_traits_char__* r718 = std__ostream__flush(t717);
  __retval716 = r718;
  struct std__basic_ostream_char__std__char_traits_char__* t719 = __retval716;
  return t719;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v720) {
bb721:
  struct std__ctype_char_* __f722;
  struct std__ctype_char_* __retval723;
  __f722 = v720;
    struct std__ctype_char_* t724 = __f722;
    _Bool cast725 = (_Bool)t724;
    _Bool u726 = !cast725;
    if (u726) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t727 = __f722;
  __retval723 = t727;
  struct std__ctype_char_* t728 = __retval723;
  return t728;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v729, char v730) {
bb731:
  struct std__ctype_char_* this732;
  char __c733;
  char __retval734;
  this732 = v729;
  __c733 = v730;
  struct std__ctype_char_* t735 = this732;
    char t736 = t735->_M_widen_ok;
    _Bool cast737 = (_Bool)t736;
    if (cast737) {
      char t738 = __c733;
      unsigned char cast739 = (unsigned char)t738;
      unsigned long cast740 = (unsigned long)cast739;
      char t741 = t735->_M_widen[cast740];
      __retval734 = t741;
      char t742 = __retval734;
      return t742;
    }
  std__ctype_char____M_widen_init___const(t735);
  char t743 = __c733;
  void** v744 = (void**)t735;
  void* v745 = *((void**)v744);
  char vcall748 = (char)__VERIFIER_virtual_call_char_char(t735, 6, t743);
  __retval734 = vcall748;
  char t749 = __retval734;
  return t749;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v750, char v751) {
bb752:
  struct std__basic_ios_char__std__char_traits_char__* this753;
  char __c754;
  char __retval755;
  this753 = v750;
  __c754 = v751;
  struct std__basic_ios_char__std__char_traits_char__* t756 = this753;
  struct std__ctype_char_* t757 = t756->_M_ctype;
  struct std__ctype_char_* r758 = std__ctype_char__const__std____check_facet_std__ctype_char___(t757);
  char t759 = __c754;
  char r760 = std__ctype_char___widen_char__const(r758, t759);
  __retval755 = r760;
  char t761 = __retval755;
  return t761;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v762) {
bb763:
  struct std__basic_ostream_char__std__char_traits_char__* __os764;
  struct std__basic_ostream_char__std__char_traits_char__* __retval765;
  __os764 = v762;
  struct std__basic_ostream_char__std__char_traits_char__* t766 = __os764;
  struct std__basic_ostream_char__std__char_traits_char__* t767 = __os764;
  void** v768 = (void**)t767;
  void* v769 = *((void**)v768);
  unsigned char* cast770 = (unsigned char*)v769;
  long c771 = -24;
  unsigned char* ptr772 = &(cast770)[c771];
  long* cast773 = (long*)ptr772;
  long t774 = *cast773;
  unsigned char* cast775 = (unsigned char*)t767;
  unsigned char* ptr776 = &(cast775)[t774];
  struct std__basic_ostream_char__std__char_traits_char__* cast777 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr776;
  struct std__basic_ios_char__std__char_traits_char__* cast778 = (struct std__basic_ios_char__std__char_traits_char__*)cast777;
  char c779 = 10;
  char r780 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast778, c779);
  struct std__basic_ostream_char__std__char_traits_char__* r781 = std__ostream__put(t766, r780);
  struct std__basic_ostream_char__std__char_traits_char__* r782 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r781);
  __retval765 = r782;
  struct std__basic_ostream_char__std__char_traits_char__* t783 = __retval765;
  return t783;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v784) {
bb785:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this786;
  this786 = v784;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t787 = this786;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t787);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t787->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb788:
  int __retval789;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ base790;
  struct std__allocator_char_ ref_tmp0791;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2792;
  struct std__allocator_char_ ref_tmp1793;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3794;
  struct std__allocator_char_ ref_tmp2795;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str4796;
  struct std__allocator_char_ ref_tmp3797;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str798;
  int c799 = 0;
  __retval789 = c799;
  char* cast800 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0791);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&base790, cast800, &ref_tmp0791);
  {
    std__allocator_char____allocator(&ref_tmp0791);
  }
    char* cast801 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp1793);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str2792, cast801, &ref_tmp1793);
    {
      std__allocator_char____allocator(&ref_tmp1793);
    }
      char* cast802 = (char*)&(_str_2);
      std__allocator_char___allocator_2(&ref_tmp2795);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str3794, cast802, &ref_tmp2795);
      {
        std__allocator_char____allocator(&ref_tmp2795);
      }
        char* cast803 = (char*)&(_str_3);
        std__allocator_char___allocator_2(&ref_tmp3797);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str4796, cast803, &ref_tmp3797);
        {
          std__allocator_char____allocator(&ref_tmp3797);
        }
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&str798, &base790);
            unsigned long c804 = 9;
            unsigned long c805 = 5;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r806 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(&str798, c804, c805, &str2792);
            char* cast807 = (char*)&(_str_4);
            _Bool r808 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str798, cast807);
            if (r808) {
            } else {
              char* cast809 = (char*)&(_str_5);
              char* c810 = _str_6;
              unsigned int c811 = 27;
              char* cast812 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast809, c810, c811, cast812);
            }
            unsigned long c813 = 19;
            unsigned long c814 = 6;
            unsigned long c815 = 7;
            unsigned long c816 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r817 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(&str798, c813, c814, &str3794, c815, c816);
            char* cast818 = (char*)&(_str_7);
            _Bool r819 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str798, cast818);
            if (r819) {
            } else {
              char* cast820 = (char*)&(_str_8);
              char* c821 = _str_6;
              unsigned int c822 = 30;
              char* cast823 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast820, c821, c822, cast823);
            }
            unsigned long c824 = 8;
            unsigned long c825 = 10;
            char* cast826 = (char*)&(_str_9);
            unsigned long c827 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r828 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(&str798, c824, c825, cast826, c827);
            char* cast829 = (char*)&(_str_10);
            _Bool r830 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str798, cast829);
            if (r830) {
            } else {
              char* cast831 = (char*)&(_str_11);
              char* c832 = _str_6;
              unsigned int c833 = 33;
              char* cast834 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast831, c832, c833, cast834);
            }
            struct std__basic_ostream_char__std__char_traits_char__* r835 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str798);
            struct std__basic_ostream_char__std__char_traits_char__* r836 = std__ostream__operator___std__ostream_____(r835, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            int c837 = 0;
            __retval789 = c837;
            int t838 = __retval789;
            int ret_val839 = t838;
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str798);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str4796);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str3794);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2792);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&base790);
            }
            return ret_val839;
  int t840 = __retval789;
  return t840;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v841) {
bb842:
  struct std____new_allocator_char_* this843;
  this843 = v841;
  struct std____new_allocator_char_* t844 = this843;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v845) {
bb846:
  char* __r847;
  char* __retval848;
  __r847 = v845;
  char* t849 = __r847;
  __retval848 = t849;
  char* t850 = __retval848;
  return t850;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v851) {
bb852:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this853;
  char* __retval854;
  this853 = v851;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t855 = this853;
  char* cast856 = (char*)&(t855->field2._M_local_buf);
  char* r857 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast856);
  __retval854 = r857;
  char* t858 = __retval854;
  return t858;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v859, char* v860, struct std__allocator_char_* v861) {
bb862:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this863;
  char* __dat864;
  struct std__allocator_char_* __a865;
  this863 = v859;
  __dat864 = v860;
  __a865 = v861;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t866 = this863;
  struct std__allocator_char_* base867 = (struct std__allocator_char_*)((char *)t866 + 0);
  struct std__allocator_char_* t868 = __a865;
  std__allocator_char___allocator(base867, t868);
    char* t869 = __dat864;
    t866->_M_p = t869;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb870:
  _Bool __retval871;
    _Bool c872 = 0;
    __retval871 = c872;
    _Bool t873 = __retval871;
    return t873;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v874, char* v875) {
bb876:
  char* __c1877;
  char* __c2878;
  _Bool __retval879;
  __c1877 = v874;
  __c2878 = v875;
  char* t880 = __c1877;
  char t881 = *t880;
  int cast882 = (int)t881;
  char* t883 = __c2878;
  char t884 = *t883;
  int cast885 = (int)t884;
  _Bool c886 = ((cast882 == cast885)) ? 1 : 0;
  __retval879 = c886;
  _Bool t887 = __retval879;
  return t887;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v888) {
bb889:
  char* __p890;
  unsigned long __retval891;
  unsigned long __i892;
  __p890 = v888;
  unsigned long c893 = 0;
  __i892 = c893;
    char ref_tmp0894;
    while (1) {
      unsigned long t895 = __i892;
      char* t896 = __p890;
      char* ptr897 = &(t896)[t895];
      char c898 = 0;
      ref_tmp0894 = c898;
      _Bool r899 = __gnu_cxx__char_traits_char___eq(ptr897, &ref_tmp0894);
      _Bool u900 = !r899;
      if (!u900) break;
      unsigned long t901 = __i892;
      unsigned long u902 = t901 + 1;
      __i892 = u902;
    }
  unsigned long t903 = __i892;
  __retval891 = t903;
  unsigned long t904 = __retval891;
  return t904;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v905) {
bb906:
  char* __s907;
  unsigned long __retval908;
  __s907 = v905;
    _Bool r909 = std____is_constant_evaluated();
    if (r909) {
      char* t910 = __s907;
      unsigned long r911 = __gnu_cxx__char_traits_char___length(t910);
      __retval908 = r911;
      unsigned long t912 = __retval908;
      return t912;
    }
  char* t913 = __s907;
  unsigned long r914 = strlen(t913);
  __retval908 = r914;
  unsigned long t915 = __retval908;
  return t915;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v916, char* v917, struct std__random_access_iterator_tag v918) {
bb919:
  char* __first920;
  char* __last921;
  struct std__random_access_iterator_tag unnamed922;
  long __retval923;
  __first920 = v916;
  __last921 = v917;
  unnamed922 = v918;
  char* t924 = __last921;
  char* t925 = __first920;
  long diff926 = t924 - t925;
  __retval923 = diff926;
  long t927 = __retval923;
  return t927;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v928) {
bb929:
  char** unnamed930;
  struct std__random_access_iterator_tag __retval931;
  unnamed930 = v928;
  struct std__random_access_iterator_tag t932 = __retval931;
  return t932;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v933, char* v934) {
bb935:
  char* __first936;
  char* __last937;
  long __retval938;
  struct std__random_access_iterator_tag agg_tmp0939;
  __first936 = v933;
  __last937 = v934;
  char* t940 = __first936;
  char* t941 = __last937;
  struct std__random_access_iterator_tag r942 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first936);
  agg_tmp0939 = r942;
  struct std__random_access_iterator_tag t943 = agg_tmp0939;
  long r944 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t940, t941, t943);
  __retval938 = r944;
  long t945 = __retval938;
  return t945;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v946, char* v947) {
bb948:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this949;
  char* __p950;
  this949 = v946;
  __p950 = v947;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t951 = this949;
  char* t952 = __p950;
  t951->_M_dataplus._M_p = t952;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v953) {
bb954:
  struct std__allocator_char_* __a955;
  unsigned long __retval956;
  __a955 = v953;
  unsigned long c957 = -1;
  unsigned long c958 = 1;
  unsigned long b959 = c957 / c958;
  __retval956 = b959;
  unsigned long t960 = __retval956;
  return t960;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v961) {
bb962:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this963;
  struct std__allocator_char_* __retval964;
  this963 = v961;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t965 = this963;
  struct std__allocator_char_* base966 = (struct std__allocator_char_*)((char *)&(t965->_M_dataplus) + 0);
  __retval964 = base966;
  struct std__allocator_char_* t967 = __retval964;
  return t967;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v968, unsigned long* v969) {
bb970:
  unsigned long* __a971;
  unsigned long* __b972;
  unsigned long* __retval973;
  __a971 = v968;
  __b972 = v969;
    unsigned long* t974 = __b972;
    unsigned long t975 = *t974;
    unsigned long* t976 = __a971;
    unsigned long t977 = *t976;
    _Bool c978 = ((t975 < t977)) ? 1 : 0;
    if (c978) {
      unsigned long* t979 = __b972;
      __retval973 = t979;
      unsigned long* t980 = __retval973;
      return t980;
    }
  unsigned long* t981 = __a971;
  __retval973 = t981;
  unsigned long* t982 = __retval973;
  return t982;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v983) {
bb984:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this985;
  unsigned long __retval986;
  unsigned long __diffmax987;
  unsigned long __allocmax988;
  this985 = v983;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t989 = this985;
  unsigned long c990 = 9223372036854775807;
  __diffmax987 = c990;
  struct std__allocator_char_* r991 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t989);
  unsigned long r992 = std__allocator_traits_std__allocator_char_____max_size(r991);
  __allocmax988 = r992;
  unsigned long* r993 = unsigned_long_const__std__min_unsigned_long_(&__diffmax987, &__allocmax988);
  unsigned long t994 = *r993;
  unsigned long c995 = 1;
  unsigned long b996 = t994 - c995;
  __retval986 = b996;
  unsigned long t997 = __retval986;
  return t997;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v998) {
bb999:
  struct std____new_allocator_char_* this1000;
  unsigned long __retval1001;
  this1000 = v998;
  struct std____new_allocator_char_* t1002 = this1000;
  unsigned long c1003 = 9223372036854775807;
  unsigned long c1004 = 1;
  unsigned long b1005 = c1003 / c1004;
  __retval1001 = b1005;
  unsigned long t1006 = __retval1001;
  return t1006;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1007, unsigned long v1008, void* v1009) {
bb1010:
  struct std____new_allocator_char_* this1011;
  unsigned long __n1012;
  void* unnamed1013;
  char* __retval1014;
  this1011 = v1007;
  __n1012 = v1008;
  unnamed1013 = v1009;
  struct std____new_allocator_char_* t1015 = this1011;
    unsigned long t1016 = __n1012;
    unsigned long r1017 = std____new_allocator_char____M_max_size___const(t1015);
    _Bool c1018 = ((t1016 > r1017)) ? 1 : 0;
    if (c1018) {
        unsigned long t1019 = __n1012;
        unsigned long c1020 = -1;
        unsigned long c1021 = 1;
        unsigned long b1022 = c1020 / c1021;
        _Bool c1023 = ((t1019 > b1022)) ? 1 : 0;
        if (c1023) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1024 = 1;
    unsigned long c1025 = 16;
    _Bool c1026 = ((c1024 > c1025)) ? 1 : 0;
    if (c1026) {
      unsigned long __al1027;
      unsigned long c1028 = 1;
      __al1027 = c1028;
      unsigned long t1029 = __n1012;
      unsigned long c1030 = 1;
      unsigned long b1031 = t1029 * c1030;
      unsigned long t1032 = __al1027;
      void* r1033 = operator_new_2(b1031, t1032);
      char* cast1034 = (char*)r1033;
      __retval1014 = cast1034;
      char* t1035 = __retval1014;
      return t1035;
    }
  unsigned long t1036 = __n1012;
  unsigned long c1037 = 1;
  unsigned long b1038 = t1036 * c1037;
  void* r1039 = operator_new(b1038);
  char* cast1040 = (char*)r1039;
  __retval1014 = cast1040;
  char* t1041 = __retval1014;
  return t1041;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1042, unsigned long v1043) {
bb1044:
  struct std__allocator_char_* this1045;
  unsigned long __n1046;
  char* __retval1047;
  this1045 = v1042;
  __n1046 = v1043;
  struct std__allocator_char_* t1048 = this1045;
    _Bool r1049 = std____is_constant_evaluated();
    if (r1049) {
        unsigned long t1050 = __n1046;
        unsigned long c1051 = 1;
        unsigned long ovr1052;
        _Bool ovf1053 = __builtin_mul_overflow(t1050, c1051, &ovr1052);
        __n1046 = ovr1052;
        if (ovf1053) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1054 = __n1046;
      void* r1055 = operator_new(t1054);
      char* cast1056 = (char*)r1055;
      __retval1047 = cast1056;
      char* t1057 = __retval1047;
      return t1057;
    }
  struct std____new_allocator_char_* base1058 = (struct std____new_allocator_char_*)((char *)t1048 + 0);
  unsigned long t1059 = __n1046;
  void* c1060 = ((void*)0);
  char* r1061 = std____new_allocator_char___allocate(base1058, t1059, c1060);
  __retval1047 = r1061;
  char* t1062 = __retval1047;
  return t1062;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1063, unsigned long v1064) {
bb1065:
  struct std__allocator_char_* __a1066;
  unsigned long __n1067;
  char* __retval1068;
  __a1066 = v1063;
  __n1067 = v1064;
  struct std__allocator_char_* t1069 = __a1066;
  unsigned long t1070 = __n1067;
  char* r1071 = std__allocator_char___allocate(t1069, t1070);
  __retval1068 = r1071;
  char* t1072 = __retval1068;
  return t1072;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1073, unsigned long v1074) {
bb1075:
  struct std__allocator_char_* __a1076;
  unsigned long __n1077;
  char* __retval1078;
  char* __p1079;
  __a1076 = v1073;
  __n1077 = v1074;
  struct std__allocator_char_* t1080 = __a1076;
  unsigned long t1081 = __n1077;
  char* r1082 = std__allocator_traits_std__allocator_char_____allocate(t1080, t1081);
  __p1079 = r1082;
  char* t1083 = __p1079;
  __retval1078 = t1083;
  char* t1084 = __retval1078;
  return t1084;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1085) {
bb1086:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1087;
  struct std__allocator_char_* __retval1088;
  this1087 = v1085;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1089 = this1087;
  struct std__allocator_char_* base1090 = (struct std__allocator_char_*)((char *)&(t1089->_M_dataplus) + 0);
  __retval1088 = base1090;
  struct std__allocator_char_* t1091 = __retval1088;
  return t1091;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1092, unsigned long* v1093, unsigned long v1094) {
bb1095:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1096;
  unsigned long* __capacity1097;
  unsigned long __old_capacity1098;
  char* __retval1099;
  this1096 = v1092;
  __capacity1097 = v1093;
  __old_capacity1098 = v1094;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1100 = this1096;
    unsigned long* t1101 = __capacity1097;
    unsigned long t1102 = *t1101;
    unsigned long r1103 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1100);
    _Bool c1104 = ((t1102 > r1103)) ? 1 : 0;
    if (c1104) {
      char* cast1105 = (char*)&(_str_13);
      std____throw_length_error(cast1105);
    }
    unsigned long* t1106 = __capacity1097;
    unsigned long t1107 = *t1106;
    unsigned long t1108 = __old_capacity1098;
    _Bool c1109 = ((t1107 > t1108)) ? 1 : 0;
    _Bool ternary1110;
    if (c1109) {
      unsigned long* t1111 = __capacity1097;
      unsigned long t1112 = *t1111;
      unsigned long c1113 = 2;
      unsigned long t1114 = __old_capacity1098;
      unsigned long b1115 = c1113 * t1114;
      _Bool c1116 = ((t1112 < b1115)) ? 1 : 0;
      ternary1110 = (_Bool)c1116;
    } else {
      _Bool c1117 = 0;
      ternary1110 = (_Bool)c1117;
    }
    if (ternary1110) {
      unsigned long c1118 = 2;
      unsigned long t1119 = __old_capacity1098;
      unsigned long b1120 = c1118 * t1119;
      unsigned long* t1121 = __capacity1097;
      *t1121 = b1120;
        unsigned long* t1122 = __capacity1097;
        unsigned long t1123 = *t1122;
        unsigned long r1124 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1100);
        _Bool c1125 = ((t1123 > r1124)) ? 1 : 0;
        if (c1125) {
          unsigned long r1126 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1100);
          unsigned long* t1127 = __capacity1097;
          *t1127 = r1126;
        }
    }
  struct std__allocator_char_* r1128 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1100);
  unsigned long* t1129 = __capacity1097;
  unsigned long t1130 = *t1129;
  unsigned long c1131 = 1;
  unsigned long b1132 = t1130 + c1131;
  char* r1133 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1128, b1132);
  __retval1099 = r1133;
  char* t1134 = __retval1099;
  return t1134;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1135, unsigned long v1136) {
bb1137:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1138;
  unsigned long __capacity1139;
  this1138 = v1135;
  __capacity1139 = v1136;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1140 = this1138;
  unsigned long t1141 = __capacity1139;
  t1140->field2._M_allocated_capacity = t1141;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1142:
  _Bool __retval1143;
    _Bool c1144 = 0;
    __retval1143 = c1144;
    _Bool t1145 = __retval1143;
    return t1145;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1146) {
bb1147:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1148;
  this1148 = v1146;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1149 = this1148;
    _Bool r1150 = std__is_constant_evaluated();
    if (r1150) {
        unsigned long __i1151;
        unsigned long c1152 = 0;
        __i1151 = c1152;
        while (1) {
          unsigned long t1154 = __i1151;
          unsigned long c1155 = 15;
          _Bool c1156 = ((t1154 <= c1155)) ? 1 : 0;
          if (!c1156) break;
          char c1157 = 0;
          unsigned long t1158 = __i1151;
          t1149->field2._M_local_buf[t1158] = c1157;
        for_step1153: ;
          unsigned long t1159 = __i1151;
          unsigned long u1160 = t1159 + 1;
          __i1151 = u1160;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1161, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1162) {
bb1163:
  struct _Guard* this1164;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1165;
  this1164 = v1161;
  __s1165 = v1162;
  struct _Guard* t1166 = this1164;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1167 = __s1165;
  t1166->_M_guarded = t1167;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1168, char* v1169) {
bb1170:
  char* __location1171;
  char* __args1172;
  char* __retval1173;
  void* __loc1174;
  __location1171 = v1168;
  __args1172 = v1169;
  char* t1175 = __location1171;
  void* cast1176 = (void*)t1175;
  __loc1174 = cast1176;
    void* t1177 = __loc1174;
    char* cast1178 = (char*)t1177;
    char* t1179 = __args1172;
    char t1180 = *t1179;
    *cast1178 = t1180;
    __retval1173 = cast1178;
    char* t1181 = __retval1173;
    return t1181;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1182, char* v1183) {
bb1184:
  char* __c11185;
  char* __c21186;
  __c11185 = v1182;
  __c21186 = v1183;
    _Bool r1187 = std____is_constant_evaluated();
    if (r1187) {
      char* t1188 = __c11185;
      char* t1189 = __c21186;
      char* r1190 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1188, t1189);
    } else {
      char* t1191 = __c21186;
      char t1192 = *t1191;
      char* t1193 = __c11185;
      *t1193 = t1192;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1194, char* v1195, unsigned long v1196) {
bb1197:
  char* __s11198;
  char* __s21199;
  unsigned long __n1200;
  char* __retval1201;
  __s11198 = v1194;
  __s21199 = v1195;
  __n1200 = v1196;
    unsigned long t1202 = __n1200;
    unsigned long c1203 = 0;
    _Bool c1204 = ((t1202 == c1203)) ? 1 : 0;
    if (c1204) {
      char* t1205 = __s11198;
      __retval1201 = t1205;
      char* t1206 = __retval1201;
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
          char* t1214 = __s11198;
          unsigned long t1215 = __i1208;
          char* ptr1216 = &(t1214)[t1215];
          unsigned long t1217 = __i1208;
          char* t1218 = __s21199;
          char* ptr1219 = &(t1218)[t1217];
          char* r1220 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1216, ptr1219);
        for_step1210: ;
          unsigned long t1221 = __i1208;
          unsigned long u1222 = t1221 + 1;
          __i1208 = u1222;
        }
      char* t1223 = __s11198;
      __retval1201 = t1223;
      char* t1224 = __retval1201;
      return t1224;
    }
  char* t1225 = __s11198;
  void* cast1226 = (void*)t1225;
  char* t1227 = __s21199;
  void* cast1228 = (void*)t1227;
  unsigned long t1229 = __n1200;
  unsigned long c1230 = 1;
  unsigned long b1231 = t1229 * c1230;
  void* r1232 = memcpy(cast1226, cast1228, b1231);
  char* t1233 = __s11198;
  __retval1201 = t1233;
  char* t1234 = __retval1201;
  return t1234;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1235, char* v1236, unsigned long v1237) {
bb1238:
  char* __s11239;
  char* __s21240;
  unsigned long __n1241;
  char* __retval1242;
  __s11239 = v1235;
  __s21240 = v1236;
  __n1241 = v1237;
    unsigned long t1243 = __n1241;
    unsigned long c1244 = 0;
    _Bool c1245 = ((t1243 == c1244)) ? 1 : 0;
    if (c1245) {
      char* t1246 = __s11239;
      __retval1242 = t1246;
      char* t1247 = __retval1242;
      return t1247;
    }
    _Bool r1248 = std____is_constant_evaluated();
    if (r1248) {
      char* t1249 = __s11239;
      char* t1250 = __s21240;
      unsigned long t1251 = __n1241;
      char* r1252 = __gnu_cxx__char_traits_char___copy(t1249, t1250, t1251);
      __retval1242 = r1252;
      char* t1253 = __retval1242;
      return t1253;
    }
  char* t1254 = __s11239;
  void* cast1255 = (void*)t1254;
  char* t1256 = __s21240;
  void* cast1257 = (void*)t1256;
  unsigned long t1258 = __n1241;
  void* r1259 = memcpy(cast1255, cast1257, t1258);
  char* cast1260 = (char*)r1259;
  __retval1242 = cast1260;
  char* t1261 = __retval1242;
  return t1261;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1262, char* v1263, unsigned long v1264) {
bb1265:
  char* __d1266;
  char* __s1267;
  unsigned long __n1268;
  __d1266 = v1262;
  __s1267 = v1263;
  __n1268 = v1264;
    unsigned long t1269 = __n1268;
    unsigned long c1270 = 1;
    _Bool c1271 = ((t1269 == c1270)) ? 1 : 0;
    if (c1271) {
      char* t1272 = __d1266;
      char* t1273 = __s1267;
      std__char_traits_char___assign(t1272, t1273);
    } else {
      char* t1274 = __d1266;
      char* t1275 = __s1267;
      unsigned long t1276 = __n1268;
      char* r1277 = std__char_traits_char___copy(t1274, t1275, t1276);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1278) {
bb1279:
  char* __it1280;
  char* __retval1281;
  __it1280 = v1278;
  char* t1282 = __it1280;
  __retval1281 = t1282;
  char* t1283 = __retval1281;
  return t1283;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1284, char* v1285, char* v1286) {
bb1287:
  char* __p1288;
  char* __k11289;
  char* __k21290;
  __p1288 = v1284;
  __k11289 = v1285;
  __k21290 = v1286;
    char* t1291 = __p1288;
    char* t1292 = __k11289;
    char* r1293 = char_const__std____niter_base_char_const__(t1292);
    char* t1294 = __k21290;
    char* t1295 = __k11289;
    long diff1296 = t1294 - t1295;
    unsigned long cast1297 = (unsigned long)diff1296;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1291, r1293, cast1297);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1298) {
bb1299:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1300;
  char* __retval1301;
  this1300 = v1298;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1302 = this1300;
  char* t1303 = t1302->_M_dataplus._M_p;
  __retval1301 = t1303;
  char* t1304 = __retval1301;
  return t1304;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1305, unsigned long v1306) {
bb1307:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1308;
  unsigned long __length1309;
  this1308 = v1305;
  __length1309 = v1306;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1310 = this1308;
  unsigned long t1311 = __length1309;
  t1310->_M_string_length = t1311;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1312, unsigned long v1313) {
bb1314:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1315;
  unsigned long __n1316;
  char ref_tmp01317;
  this1315 = v1312;
  __n1316 = v1313;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1318 = this1315;
  unsigned long t1319 = __n1316;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1318, t1319);
  unsigned long t1320 = __n1316;
  char* r1321 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1318);
  char* ptr1322 = &(r1321)[t1320];
  char c1323 = 0;
  ref_tmp01317 = c1323;
  std__char_traits_char___assign(ptr1322, &ref_tmp01317);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1324) {
bb1325:
  struct _Guard* this1326;
  this1326 = v1324;
  struct _Guard* t1327 = this1326;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1328 = t1327->_M_guarded;
    _Bool cast1329 = (_Bool)t1328;
    if (cast1329) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1330 = t1327->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1330);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1331, char* v1332, char* v1333, struct std__forward_iterator_tag v1334) {
bb1335:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1336;
  char* __beg1337;
  char* __end1338;
  struct std__forward_iterator_tag unnamed1339;
  unsigned long __dnew1340;
  struct _Guard __guard1341;
  this1336 = v1331;
  __beg1337 = v1332;
  __end1338 = v1333;
  unnamed1339 = v1334;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1342 = this1336;
  char* t1343 = __beg1337;
  char* t1344 = __end1338;
  long r1345 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1343, t1344);
  unsigned long cast1346 = (unsigned long)r1345;
  __dnew1340 = cast1346;
    unsigned long t1347 = __dnew1340;
    unsigned long c1348 = 15;
    _Bool c1349 = ((t1347 > c1348)) ? 1 : 0;
    if (c1349) {
      unsigned long c1350 = 0;
      char* r1351 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1342, &__dnew1340, c1350);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1342, r1351);
      unsigned long t1352 = __dnew1340;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1342, t1352);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1342);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1341, t1342);
    char* r1353 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1342);
    char* t1354 = __beg1337;
    char* t1355 = __end1338;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1353, t1354, t1355);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1356 = ((void*)0);
    __guard1341._M_guarded = c1356;
    unsigned long t1357 = __dnew1340;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1342, t1357);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1341);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1358) {
bb1359:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1360;
  this1360 = v1358;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1361 = this1360;
  {
    struct std__allocator_char_* base1362 = (struct std__allocator_char_*)((char *)t1361 + 0);
    std__allocator_char____allocator(base1362);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1363, struct std____new_allocator_char_* v1364) {
bb1365:
  struct std____new_allocator_char_* this1366;
  struct std____new_allocator_char_* unnamed1367;
  this1366 = v1363;
  unnamed1367 = v1364;
  struct std____new_allocator_char_* t1368 = this1366;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1369) {
bb1370:
  char* __r1371;
  char* __retval1372;
  __r1371 = v1369;
  char* t1373 = __r1371;
  __retval1372 = t1373;
  char* t1374 = __retval1372;
  return t1374;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1375) {
bb1376:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1377;
  char* __retval1378;
  this1377 = v1375;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1379 = this1377;
  char* cast1380 = (char*)&(t1379->field2._M_local_buf);
  char* r1381 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1380);
  __retval1378 = r1381;
  char* t1382 = __retval1378;
  return t1382;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1383) {
bb1384:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1385;
  _Bool __retval1386;
  this1385 = v1383;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1387 = this1385;
    char* r1388 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1387);
    char* r1389 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1387);
    _Bool c1390 = ((r1388 == r1389)) ? 1 : 0;
    if (c1390) {
        unsigned long t1391 = t1387->_M_string_length;
        unsigned long c1392 = 15;
        _Bool c1393 = ((t1391 > c1392)) ? 1 : 0;
        if (c1393) {
          __builtin_unreachable();
        }
      _Bool c1394 = 1;
      __retval1386 = c1394;
      _Bool t1395 = __retval1386;
      return t1395;
    }
  _Bool c1396 = 0;
  __retval1386 = c1396;
  _Bool t1397 = __retval1386;
  return t1397;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1398, char* v1399, unsigned long v1400) {
bb1401:
  struct std____new_allocator_char_* this1402;
  char* __p1403;
  unsigned long __n1404;
  this1402 = v1398;
  __p1403 = v1399;
  __n1404 = v1400;
  struct std____new_allocator_char_* t1405 = this1402;
    unsigned long c1406 = 1;
    unsigned long c1407 = 16;
    _Bool c1408 = ((c1406 > c1407)) ? 1 : 0;
    if (c1408) {
      char* t1409 = __p1403;
      void* cast1410 = (void*)t1409;
      unsigned long t1411 = __n1404;
      unsigned long c1412 = 1;
      unsigned long b1413 = t1411 * c1412;
      unsigned long c1414 = 1;
      operator_delete_3(cast1410, b1413, c1414);
      return;
    }
  char* t1415 = __p1403;
  void* cast1416 = (void*)t1415;
  unsigned long t1417 = __n1404;
  unsigned long c1418 = 1;
  unsigned long b1419 = t1417 * c1418;
  operator_delete_2(cast1416, b1419);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1420, char* v1421, unsigned long v1422) {
bb1423:
  struct std__allocator_char_* this1424;
  char* __p1425;
  unsigned long __n1426;
  this1424 = v1420;
  __p1425 = v1421;
  __n1426 = v1422;
  struct std__allocator_char_* t1427 = this1424;
    _Bool r1428 = std____is_constant_evaluated();
    if (r1428) {
      char* t1429 = __p1425;
      void* cast1430 = (void*)t1429;
      operator_delete(cast1430);
      return;
    }
  struct std____new_allocator_char_* base1431 = (struct std____new_allocator_char_*)((char *)t1427 + 0);
  char* t1432 = __p1425;
  unsigned long t1433 = __n1426;
  std____new_allocator_char___deallocate(base1431, t1432, t1433);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1434, char* v1435, unsigned long v1436) {
bb1437:
  struct std__allocator_char_* __a1438;
  char* __p1439;
  unsigned long __n1440;
  __a1438 = v1434;
  __p1439 = v1435;
  __n1440 = v1436;
  struct std__allocator_char_* t1441 = __a1438;
  char* t1442 = __p1439;
  unsigned long t1443 = __n1440;
  std__allocator_char___deallocate(t1441, t1442, t1443);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1444, unsigned long v1445) {
bb1446:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1447;
  unsigned long __size1448;
  this1447 = v1444;
  __size1448 = v1445;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1449 = this1447;
  struct std__allocator_char_* r1450 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1449);
  char* r1451 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1449);
  unsigned long t1452 = __size1448;
  unsigned long c1453 = 1;
  unsigned long b1454 = t1452 + c1453;
  std__allocator_traits_std__allocator_char_____deallocate(r1450, r1451, b1454);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1455) {
bb1456:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1457;
  this1457 = v1455;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1458 = this1457;
    _Bool r1459 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1458);
    _Bool u1460 = !r1459;
    if (u1460) {
      unsigned long t1461 = t1458->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1458, t1461);
    }
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1462, struct std__allocator_char_* v1463) {
bb1464:
  struct std__allocator_char_* this1465;
  struct std__allocator_char_* __a1466;
  this1465 = v1462;
  __a1466 = v1463;
  struct std__allocator_char_* t1467 = this1465;
  struct std____new_allocator_char_* base1468 = (struct std____new_allocator_char_*)((char *)t1467 + 0);
  struct std__allocator_char_* t1469 = __a1466;
  struct std____new_allocator_char_* base1470 = (struct std____new_allocator_char_*)((char *)t1469 + 0);
  std____new_allocator_char_____new_allocator(base1468, base1470);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v1471) {
bb1472:
  struct std__allocator_char_* __rhs1473;
  struct std__allocator_char_ __retval1474;
  __rhs1473 = v1471;
  struct std__allocator_char_* t1475 = __rhs1473;
  std__allocator_char___allocator(&__retval1474, t1475);
  struct std__allocator_char_ t1476 = __retval1474;
  return t1476;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v1477) {
bb1478:
  struct std__allocator_char_* __a1479;
  struct std__allocator_char_ __retval1480;
  __a1479 = v1477;
  struct std__allocator_char_* t1481 = __a1479;
  struct std__allocator_char_ r1482 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t1481);
  __retval1480 = r1482;
  struct std__allocator_char_ t1483 = __retval1480;
  return t1483;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1484, char* v1485, struct std__allocator_char_* v1486) {
bb1487:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1488;
  char* __dat1489;
  struct std__allocator_char_* __a1490;
  this1488 = v1484;
  __dat1489 = v1485;
  __a1490 = v1486;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1491 = this1488;
  struct std__allocator_char_* base1492 = (struct std__allocator_char_*)((char *)t1491 + 0);
  struct std__allocator_char_* t1493 = __a1490;
  std__allocator_char___allocator(base1492, t1493);
    char* t1494 = __dat1489;
    t1491->_M_p = t1494;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructILb1EEEvPKcm
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1495, char* v1496, unsigned long v1497) {
bb1498:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1499;
  char* __str1500;
  unsigned long __n1501;
  this1499 = v1495;
  __str1500 = v1496;
  __n1501 = v1497;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1502 = this1499;
    unsigned long t1503 = __n1501;
    unsigned long c1504 = 15;
    _Bool c1505 = ((t1503 > c1504)) ? 1 : 0;
    if (c1505) {
      unsigned long c1506 = 0;
      char* r1507 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1502, &__n1501, c1506);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1502, r1507);
      unsigned long t1508 = __n1501;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1502, t1508);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1502);
    }
    unsigned long t1509 = __n1501;
    _Bool cast1510 = (_Bool)t1509;
    _Bool ternary1511;
    if (cast1510) {
      _Bool c1512 = 1;
      ternary1511 = (_Bool)c1512;
    } else {
      _Bool c1513 = 1;
      ternary1511 = (_Bool)c1513;
    }
    if (ternary1511) {
      char* r1514 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1502);
      char* t1515 = __str1500;
      unsigned long t1516 = __n1501;
      _Bool c1517 = 1;
      unsigned long cast1518 = (unsigned long)c1517;
      unsigned long b1519 = t1516 + cast1518;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1514, t1515, b1519);
    }
  unsigned long t1520 = __n1501;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1502, t1520);
    _Bool c1521 = 0;
    if (c1521) {
      char ref_tmp01522;
      unsigned long t1523 = __n1501;
      char* r1524 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1502);
      char* ptr1525 = &(r1524)[t1523];
      char c1526 = 0;
      ref_tmp01522 = c1526;
      std__char_traits_char___assign(ptr1525, &ref_tmp01522);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1527) {
bb1528:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1529;
  unsigned long __retval1530;
  unsigned long __sz1531;
  this1529 = v1527;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1532 = this1529;
  unsigned long t1533 = t1532->_M_string_length;
  __sz1531 = t1533;
    unsigned long t1534 = __sz1531;
    unsigned long r1535 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1532);
    _Bool c1536 = ((t1534 > r1535)) ? 1 : 0;
    if (c1536) {
      __builtin_unreachable();
    }
  unsigned long t1537 = __sz1531;
  __retval1530 = t1537;
  unsigned long t1538 = __retval1530;
  return t1538;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1539) {
bb1540:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1541;
  unsigned long __retval1542;
  this1541 = v1539;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1543 = this1541;
  unsigned long r1544 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1543);
  __retval1542 = r1544;
  unsigned long t1545 = __retval1542;
  return t1545;
}

