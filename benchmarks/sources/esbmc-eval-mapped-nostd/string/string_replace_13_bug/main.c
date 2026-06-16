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

char _str[23] = "this is a test string.";
char _str_1[10] = "n example";
char _str_2[14] = "sample phrase";
char _str_3[8] = "useful.";
char _str_4[27] = "this is an example string.";
char _str_5[36] = "str != \"this is an example string.\"";
char _str_6[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_replace_13_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_7[27] = "this is an example phrase.";
char _str_8[36] = "str != \"this is an example phrase.\"";
char _str_9[9] = "just all";
char _str_10[23] = "this is just a phrase.";
char _str_11[32] = "str != \"this is just a phrase.\"";
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

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmRKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v47, unsigned long v48, unsigned long v49, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v50) {
bb51: ;
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
bb68: ;
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
bb85: ;
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
bb134: ;
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
bb142: ;
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
bb165: ;
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
bb183: ;
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
bb208: ;
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
bb236: ;
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
bb251: ;
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
bb273: ;
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
bb292: ;
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
bb312: ;
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
bb325: ;
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
bb382: ;
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
bb409: ;
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
bb428: ;
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
bb516: ;
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
bb574: ;
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
bb671: ;
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
bb691: ;
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
bb705: ;
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
bb714: ;
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
bb721: ;
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
bb731: ;
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
bb752: ;
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
bb763: ;
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
bb785: ;
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
bb788: ;
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
            _Bool u809 = !r808;
            if (u809) {
            } else {
              char* cast810 = (char*)&(_str_5);
              char* c811 = (char*)_str_6;
              unsigned int c812 = 28;
              char* cast813 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast810, c811, c812, cast813);
            }
            unsigned long c814 = 19;
            unsigned long c815 = 6;
            unsigned long c816 = 7;
            unsigned long c817 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r818 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(&str798, c814, c815, &str3794, c816, c817);
            char* cast819 = (char*)&(_str_7);
            _Bool r820 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str798, cast819);
            _Bool u821 = !r820;
            if (u821) {
            } else {
              char* cast822 = (char*)&(_str_8);
              char* c823 = (char*)_str_6;
              unsigned int c824 = 31;
              char* cast825 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast822, c823, c824, cast825);
            }
            unsigned long c826 = 8;
            unsigned long c827 = 10;
            char* cast828 = (char*)&(_str_9);
            unsigned long c829 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r830 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(&str798, c826, c827, cast828, c829);
            char* cast831 = (char*)&(_str_10);
            _Bool r832 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str798, cast831);
            _Bool u833 = !r832;
            if (u833) {
            } else {
              char* cast834 = (char*)&(_str_11);
              char* c835 = (char*)_str_6;
              unsigned int c836 = 34;
              char* cast837 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast834, c835, c836, cast837);
            }
            struct std__basic_ostream_char__std__char_traits_char__* r838 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str798);
            struct std__basic_ostream_char__std__char_traits_char__* r839 = std__ostream__operator___std__ostream_____(r838, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            int c840 = 0;
            __retval789 = c840;
            int t841 = __retval789;
            int ret_val842 = t841;
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
            return ret_val842;
  int t843 = __retval789;
  return t843;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v844) {
bb845: ;
  struct std____new_allocator_char_* this846;
  this846 = v844;
  struct std____new_allocator_char_* t847 = this846;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v848) {
bb849: ;
  char* __r850;
  char* __retval851;
  __r850 = v848;
  char* t852 = __r850;
  __retval851 = t852;
  char* t853 = __retval851;
  return t853;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v854) {
bb855: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this856;
  char* __retval857;
  this856 = v854;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t858 = this856;
  char* cast859 = (char*)&(t858->field2._M_local_buf);
  char* r860 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast859);
  __retval857 = r860;
  char* t861 = __retval857;
  return t861;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v862, char* v863, struct std__allocator_char_* v864) {
bb865: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this866;
  char* __dat867;
  struct std__allocator_char_* __a868;
  this866 = v862;
  __dat867 = v863;
  __a868 = v864;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t869 = this866;
  struct std__allocator_char_* base870 = (struct std__allocator_char_*)((char *)t869 + 0);
  struct std__allocator_char_* t871 = __a868;
  std__allocator_char___allocator(base870, t871);
    char* t872 = __dat867;
    t869->_M_p = t872;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb873: ;
  _Bool __retval874;
    _Bool c875 = 0;
    __retval874 = c875;
    _Bool t876 = __retval874;
    return t876;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v877, char* v878) {
bb879: ;
  char* __c1880;
  char* __c2881;
  _Bool __retval882;
  __c1880 = v877;
  __c2881 = v878;
  char* t883 = __c1880;
  char t884 = *t883;
  int cast885 = (int)t884;
  char* t886 = __c2881;
  char t887 = *t886;
  int cast888 = (int)t887;
  _Bool c889 = ((cast885 == cast888)) ? 1 : 0;
  __retval882 = c889;
  _Bool t890 = __retval882;
  return t890;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v891) {
bb892: ;
  char* __p893;
  unsigned long __retval894;
  unsigned long __i895;
  __p893 = v891;
  unsigned long c896 = 0;
  __i895 = c896;
    char ref_tmp0897;
    while (1) {
      unsigned long t898 = __i895;
      char* t899 = __p893;
      char* ptr900 = &(t899)[t898];
      char c901 = 0;
      ref_tmp0897 = c901;
      _Bool r902 = __gnu_cxx__char_traits_char___eq(ptr900, &ref_tmp0897);
      _Bool u903 = !r902;
      if (!u903) break;
      unsigned long t904 = __i895;
      unsigned long u905 = t904 + 1;
      __i895 = u905;
    }
  unsigned long t906 = __i895;
  __retval894 = t906;
  unsigned long t907 = __retval894;
  return t907;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v908) {
bb909: ;
  char* __s910;
  unsigned long __retval911;
  __s910 = v908;
    _Bool r912 = std____is_constant_evaluated();
    if (r912) {
      char* t913 = __s910;
      unsigned long r914 = __gnu_cxx__char_traits_char___length(t913);
      __retval911 = r914;
      unsigned long t915 = __retval911;
      return t915;
    }
  char* t916 = __s910;
  unsigned long r917 = strlen(t916);
  __retval911 = r917;
  unsigned long t918 = __retval911;
  return t918;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v919, char* v920, struct std__random_access_iterator_tag v921) {
bb922: ;
  char* __first923;
  char* __last924;
  struct std__random_access_iterator_tag unnamed925;
  long __retval926;
  __first923 = v919;
  __last924 = v920;
  unnamed925 = v921;
  char* t927 = __last924;
  char* t928 = __first923;
  long diff929 = t927 - t928;
  __retval926 = diff929;
  long t930 = __retval926;
  return t930;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v931) {
bb932: ;
  char** unnamed933;
  struct std__random_access_iterator_tag __retval934;
  unnamed933 = v931;
  struct std__random_access_iterator_tag t935 = __retval934;
  return t935;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v936, char* v937) {
bb938: ;
  char* __first939;
  char* __last940;
  long __retval941;
  struct std__random_access_iterator_tag agg_tmp0942;
  __first939 = v936;
  __last940 = v937;
  char* t943 = __first939;
  char* t944 = __last940;
  struct std__random_access_iterator_tag r945 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first939);
  agg_tmp0942 = r945;
  struct std__random_access_iterator_tag t946 = agg_tmp0942;
  long r947 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t943, t944, t946);
  __retval941 = r947;
  long t948 = __retval941;
  return t948;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v949, char* v950) {
bb951: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this952;
  char* __p953;
  this952 = v949;
  __p953 = v950;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t954 = this952;
  char* t955 = __p953;
  t954->_M_dataplus._M_p = t955;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v956) {
bb957: ;
  struct std__allocator_char_* __a958;
  unsigned long __retval959;
  __a958 = v956;
  unsigned long c960 = -1;
  unsigned long c961 = 1;
  unsigned long b962 = c960 / c961;
  __retval959 = b962;
  unsigned long t963 = __retval959;
  return t963;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v964) {
bb965: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this966;
  struct std__allocator_char_* __retval967;
  this966 = v964;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t968 = this966;
  struct std__allocator_char_* base969 = (struct std__allocator_char_*)((char *)&(t968->_M_dataplus) + 0);
  __retval967 = base969;
  struct std__allocator_char_* t970 = __retval967;
  return t970;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v971, unsigned long* v972) {
bb973: ;
  unsigned long* __a974;
  unsigned long* __b975;
  unsigned long* __retval976;
  __a974 = v971;
  __b975 = v972;
    unsigned long* t977 = __b975;
    unsigned long t978 = *t977;
    unsigned long* t979 = __a974;
    unsigned long t980 = *t979;
    _Bool c981 = ((t978 < t980)) ? 1 : 0;
    if (c981) {
      unsigned long* t982 = __b975;
      __retval976 = t982;
      unsigned long* t983 = __retval976;
      return t983;
    }
  unsigned long* t984 = __a974;
  __retval976 = t984;
  unsigned long* t985 = __retval976;
  return t985;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v986) {
bb987: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this988;
  unsigned long __retval989;
  unsigned long __diffmax990;
  unsigned long __allocmax991;
  this988 = v986;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t992 = this988;
  unsigned long c993 = 9223372036854775807;
  __diffmax990 = c993;
  struct std__allocator_char_* r994 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t992);
  unsigned long r995 = std__allocator_traits_std__allocator_char_____max_size(r994);
  __allocmax991 = r995;
  unsigned long* r996 = unsigned_long_const__std__min_unsigned_long_(&__diffmax990, &__allocmax991);
  unsigned long t997 = *r996;
  unsigned long c998 = 1;
  unsigned long b999 = t997 - c998;
  __retval989 = b999;
  unsigned long t1000 = __retval989;
  return t1000;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1001) {
bb1002: ;
  struct std____new_allocator_char_* this1003;
  unsigned long __retval1004;
  this1003 = v1001;
  struct std____new_allocator_char_* t1005 = this1003;
  unsigned long c1006 = 9223372036854775807;
  unsigned long c1007 = 1;
  unsigned long b1008 = c1006 / c1007;
  __retval1004 = b1008;
  unsigned long t1009 = __retval1004;
  return t1009;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1010, unsigned long v1011, void* v1012) {
bb1013: ;
  struct std____new_allocator_char_* this1014;
  unsigned long __n1015;
  void* unnamed1016;
  char* __retval1017;
  this1014 = v1010;
  __n1015 = v1011;
  unnamed1016 = v1012;
  struct std____new_allocator_char_* t1018 = this1014;
    unsigned long t1019 = __n1015;
    unsigned long r1020 = std____new_allocator_char____M_max_size___const(t1018);
    _Bool c1021 = ((t1019 > r1020)) ? 1 : 0;
    if (c1021) {
        unsigned long t1022 = __n1015;
        unsigned long c1023 = -1;
        unsigned long c1024 = 1;
        unsigned long b1025 = c1023 / c1024;
        _Bool c1026 = ((t1022 > b1025)) ? 1 : 0;
        if (c1026) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1027 = 1;
    unsigned long c1028 = 16;
    _Bool c1029 = ((c1027 > c1028)) ? 1 : 0;
    if (c1029) {
      unsigned long __al1030;
      unsigned long c1031 = 1;
      __al1030 = c1031;
      unsigned long t1032 = __n1015;
      unsigned long c1033 = 1;
      unsigned long b1034 = t1032 * c1033;
      unsigned long t1035 = __al1030;
      void* r1036 = operator_new_2(b1034, t1035);
      char* cast1037 = (char*)r1036;
      __retval1017 = cast1037;
      char* t1038 = __retval1017;
      return t1038;
    }
  unsigned long t1039 = __n1015;
  unsigned long c1040 = 1;
  unsigned long b1041 = t1039 * c1040;
  void* r1042 = operator_new(b1041);
  char* cast1043 = (char*)r1042;
  __retval1017 = cast1043;
  char* t1044 = __retval1017;
  return t1044;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1045, unsigned long v1046) {
bb1047: ;
  struct std__allocator_char_* this1048;
  unsigned long __n1049;
  char* __retval1050;
  this1048 = v1045;
  __n1049 = v1046;
  struct std__allocator_char_* t1051 = this1048;
    _Bool r1052 = std____is_constant_evaluated();
    if (r1052) {
        unsigned long t1053 = __n1049;
        unsigned long c1054 = 1;
        unsigned long ovr1055;
        _Bool ovf1056 = __builtin_mul_overflow(t1053, c1054, &ovr1055);
        __n1049 = ovr1055;
        if (ovf1056) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1057 = __n1049;
      void* r1058 = operator_new(t1057);
      char* cast1059 = (char*)r1058;
      __retval1050 = cast1059;
      char* t1060 = __retval1050;
      return t1060;
    }
  struct std____new_allocator_char_* base1061 = (struct std____new_allocator_char_*)((char *)t1051 + 0);
  unsigned long t1062 = __n1049;
  void* c1063 = ((void*)0);
  char* r1064 = std____new_allocator_char___allocate(base1061, t1062, c1063);
  __retval1050 = r1064;
  char* t1065 = __retval1050;
  return t1065;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1066, unsigned long v1067) {
bb1068: ;
  struct std__allocator_char_* __a1069;
  unsigned long __n1070;
  char* __retval1071;
  __a1069 = v1066;
  __n1070 = v1067;
  struct std__allocator_char_* t1072 = __a1069;
  unsigned long t1073 = __n1070;
  char* r1074 = std__allocator_char___allocate(t1072, t1073);
  __retval1071 = r1074;
  char* t1075 = __retval1071;
  return t1075;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1076, unsigned long v1077) {
bb1078: ;
  struct std__allocator_char_* __a1079;
  unsigned long __n1080;
  char* __retval1081;
  char* __p1082;
  __a1079 = v1076;
  __n1080 = v1077;
  struct std__allocator_char_* t1083 = __a1079;
  unsigned long t1084 = __n1080;
  char* r1085 = std__allocator_traits_std__allocator_char_____allocate(t1083, t1084);
  __p1082 = r1085;
  char* t1086 = __p1082;
  __retval1081 = t1086;
  char* t1087 = __retval1081;
  return t1087;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1088) {
bb1089: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1090;
  struct std__allocator_char_* __retval1091;
  this1090 = v1088;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1092 = this1090;
  struct std__allocator_char_* base1093 = (struct std__allocator_char_*)((char *)&(t1092->_M_dataplus) + 0);
  __retval1091 = base1093;
  struct std__allocator_char_* t1094 = __retval1091;
  return t1094;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1095, unsigned long* v1096, unsigned long v1097) {
bb1098: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1099;
  unsigned long* __capacity1100;
  unsigned long __old_capacity1101;
  char* __retval1102;
  this1099 = v1095;
  __capacity1100 = v1096;
  __old_capacity1101 = v1097;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1103 = this1099;
    unsigned long* t1104 = __capacity1100;
    unsigned long t1105 = *t1104;
    unsigned long r1106 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1103);
    _Bool c1107 = ((t1105 > r1106)) ? 1 : 0;
    if (c1107) {
      char* cast1108 = (char*)&(_str_13);
      std____throw_length_error(cast1108);
    }
    unsigned long* t1109 = __capacity1100;
    unsigned long t1110 = *t1109;
    unsigned long t1111 = __old_capacity1101;
    _Bool c1112 = ((t1110 > t1111)) ? 1 : 0;
    _Bool ternary1113;
    if (c1112) {
      unsigned long* t1114 = __capacity1100;
      unsigned long t1115 = *t1114;
      unsigned long c1116 = 2;
      unsigned long t1117 = __old_capacity1101;
      unsigned long b1118 = c1116 * t1117;
      _Bool c1119 = ((t1115 < b1118)) ? 1 : 0;
      ternary1113 = (_Bool)c1119;
    } else {
      _Bool c1120 = 0;
      ternary1113 = (_Bool)c1120;
    }
    if (ternary1113) {
      unsigned long c1121 = 2;
      unsigned long t1122 = __old_capacity1101;
      unsigned long b1123 = c1121 * t1122;
      unsigned long* t1124 = __capacity1100;
      *t1124 = b1123;
        unsigned long* t1125 = __capacity1100;
        unsigned long t1126 = *t1125;
        unsigned long r1127 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1103);
        _Bool c1128 = ((t1126 > r1127)) ? 1 : 0;
        if (c1128) {
          unsigned long r1129 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1103);
          unsigned long* t1130 = __capacity1100;
          *t1130 = r1129;
        }
    }
  struct std__allocator_char_* r1131 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1103);
  unsigned long* t1132 = __capacity1100;
  unsigned long t1133 = *t1132;
  unsigned long c1134 = 1;
  unsigned long b1135 = t1133 + c1134;
  char* r1136 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1131, b1135);
  __retval1102 = r1136;
  char* t1137 = __retval1102;
  return t1137;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1138, unsigned long v1139) {
bb1140: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1141;
  unsigned long __capacity1142;
  this1141 = v1138;
  __capacity1142 = v1139;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1143 = this1141;
  unsigned long t1144 = __capacity1142;
  t1143->field2._M_allocated_capacity = t1144;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1145: ;
  _Bool __retval1146;
    _Bool c1147 = 0;
    __retval1146 = c1147;
    _Bool t1148 = __retval1146;
    return t1148;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1149) {
bb1150: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1151;
  this1151 = v1149;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1152 = this1151;
    _Bool r1153 = std__is_constant_evaluated();
    if (r1153) {
        unsigned long __i1154;
        unsigned long c1155 = 0;
        __i1154 = c1155;
        while (1) {
          unsigned long t1157 = __i1154;
          unsigned long c1158 = 15;
          _Bool c1159 = ((t1157 <= c1158)) ? 1 : 0;
          if (!c1159) break;
          char c1160 = 0;
          unsigned long t1161 = __i1154;
          t1152->field2._M_local_buf[t1161] = c1160;
        for_step1156: ;
          unsigned long t1162 = __i1154;
          unsigned long u1163 = t1162 + 1;
          __i1154 = u1163;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1164, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1165) {
bb1166: ;
  struct _Guard* this1167;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1168;
  this1167 = v1164;
  __s1168 = v1165;
  struct _Guard* t1169 = this1167;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1170 = __s1168;
  t1169->_M_guarded = t1170;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1171, char* v1172) {
bb1173: ;
  char* __location1174;
  char* __args1175;
  char* __retval1176;
  void* __loc1177;
  __location1174 = v1171;
  __args1175 = v1172;
  char* t1178 = __location1174;
  void* cast1179 = (void*)t1178;
  __loc1177 = cast1179;
    void* t1180 = __loc1177;
    char* cast1181 = (char*)t1180;
    char* t1182 = __args1175;
    char t1183 = *t1182;
    *cast1181 = t1183;
    __retval1176 = cast1181;
    char* t1184 = __retval1176;
    return t1184;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1185, char* v1186) {
bb1187: ;
  char* __c11188;
  char* __c21189;
  __c11188 = v1185;
  __c21189 = v1186;
    _Bool r1190 = std____is_constant_evaluated();
    if (r1190) {
      char* t1191 = __c11188;
      char* t1192 = __c21189;
      char* r1193 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1191, t1192);
    } else {
      char* t1194 = __c21189;
      char t1195 = *t1194;
      char* t1196 = __c11188;
      *t1196 = t1195;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1197, char* v1198, unsigned long v1199) {
bb1200: ;
  char* __s11201;
  char* __s21202;
  unsigned long __n1203;
  char* __retval1204;
  __s11201 = v1197;
  __s21202 = v1198;
  __n1203 = v1199;
    unsigned long t1205 = __n1203;
    unsigned long c1206 = 0;
    _Bool c1207 = ((t1205 == c1206)) ? 1 : 0;
    if (c1207) {
      char* t1208 = __s11201;
      __retval1204 = t1208;
      char* t1209 = __retval1204;
      return t1209;
    }
    _Bool r1210 = std____is_constant_evaluated();
    if (r1210) {
        unsigned long __i1211;
        unsigned long c1212 = 0;
        __i1211 = c1212;
        while (1) {
          unsigned long t1214 = __i1211;
          unsigned long t1215 = __n1203;
          _Bool c1216 = ((t1214 < t1215)) ? 1 : 0;
          if (!c1216) break;
          char* t1217 = __s11201;
          unsigned long t1218 = __i1211;
          char* ptr1219 = &(t1217)[t1218];
          unsigned long t1220 = __i1211;
          char* t1221 = __s21202;
          char* ptr1222 = &(t1221)[t1220];
          char* r1223 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1219, ptr1222);
        for_step1213: ;
          unsigned long t1224 = __i1211;
          unsigned long u1225 = t1224 + 1;
          __i1211 = u1225;
        }
      char* t1226 = __s11201;
      __retval1204 = t1226;
      char* t1227 = __retval1204;
      return t1227;
    }
  char* t1228 = __s11201;
  void* cast1229 = (void*)t1228;
  char* t1230 = __s21202;
  void* cast1231 = (void*)t1230;
  unsigned long t1232 = __n1203;
  unsigned long c1233 = 1;
  unsigned long b1234 = t1232 * c1233;
  void* r1235 = memcpy(cast1229, cast1231, b1234);
  char* t1236 = __s11201;
  __retval1204 = t1236;
  char* t1237 = __retval1204;
  return t1237;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1238, char* v1239, unsigned long v1240) {
bb1241: ;
  char* __s11242;
  char* __s21243;
  unsigned long __n1244;
  char* __retval1245;
  __s11242 = v1238;
  __s21243 = v1239;
  __n1244 = v1240;
    unsigned long t1246 = __n1244;
    unsigned long c1247 = 0;
    _Bool c1248 = ((t1246 == c1247)) ? 1 : 0;
    if (c1248) {
      char* t1249 = __s11242;
      __retval1245 = t1249;
      char* t1250 = __retval1245;
      return t1250;
    }
    _Bool r1251 = std____is_constant_evaluated();
    if (r1251) {
      char* t1252 = __s11242;
      char* t1253 = __s21243;
      unsigned long t1254 = __n1244;
      char* r1255 = __gnu_cxx__char_traits_char___copy(t1252, t1253, t1254);
      __retval1245 = r1255;
      char* t1256 = __retval1245;
      return t1256;
    }
  char* t1257 = __s11242;
  void* cast1258 = (void*)t1257;
  char* t1259 = __s21243;
  void* cast1260 = (void*)t1259;
  unsigned long t1261 = __n1244;
  void* r1262 = memcpy(cast1258, cast1260, t1261);
  char* cast1263 = (char*)r1262;
  __retval1245 = cast1263;
  char* t1264 = __retval1245;
  return t1264;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1265, char* v1266, unsigned long v1267) {
bb1268: ;
  char* __d1269;
  char* __s1270;
  unsigned long __n1271;
  __d1269 = v1265;
  __s1270 = v1266;
  __n1271 = v1267;
    unsigned long t1272 = __n1271;
    unsigned long c1273 = 1;
    _Bool c1274 = ((t1272 == c1273)) ? 1 : 0;
    if (c1274) {
      char* t1275 = __d1269;
      char* t1276 = __s1270;
      std__char_traits_char___assign(t1275, t1276);
    } else {
      char* t1277 = __d1269;
      char* t1278 = __s1270;
      unsigned long t1279 = __n1271;
      char* r1280 = std__char_traits_char___copy(t1277, t1278, t1279);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1281) {
bb1282: ;
  char* __it1283;
  char* __retval1284;
  __it1283 = v1281;
  char* t1285 = __it1283;
  __retval1284 = t1285;
  char* t1286 = __retval1284;
  return t1286;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1287, char* v1288, char* v1289) {
bb1290: ;
  char* __p1291;
  char* __k11292;
  char* __k21293;
  __p1291 = v1287;
  __k11292 = v1288;
  __k21293 = v1289;
    char* t1294 = __p1291;
    char* t1295 = __k11292;
    char* r1296 = char_const__std____niter_base_char_const__(t1295);
    char* t1297 = __k21293;
    char* t1298 = __k11292;
    long diff1299 = t1297 - t1298;
    unsigned long cast1300 = (unsigned long)diff1299;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1294, r1296, cast1300);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1301) {
bb1302: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1303;
  char* __retval1304;
  this1303 = v1301;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1305 = this1303;
  char* t1306 = t1305->_M_dataplus._M_p;
  __retval1304 = t1306;
  char* t1307 = __retval1304;
  return t1307;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1308, unsigned long v1309) {
bb1310: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1311;
  unsigned long __length1312;
  this1311 = v1308;
  __length1312 = v1309;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1313 = this1311;
  unsigned long t1314 = __length1312;
  t1313->_M_string_length = t1314;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1315, unsigned long v1316) {
bb1317: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1318;
  unsigned long __n1319;
  char ref_tmp01320;
  this1318 = v1315;
  __n1319 = v1316;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1321 = this1318;
  unsigned long t1322 = __n1319;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1321, t1322);
  unsigned long t1323 = __n1319;
  char* r1324 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1321);
  char* ptr1325 = &(r1324)[t1323];
  char c1326 = 0;
  ref_tmp01320 = c1326;
  std__char_traits_char___assign(ptr1325, &ref_tmp01320);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1327) {
bb1328: ;
  struct _Guard* this1329;
  this1329 = v1327;
  struct _Guard* t1330 = this1329;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1331 = t1330->_M_guarded;
    _Bool cast1332 = (_Bool)t1331;
    if (cast1332) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1333 = t1330->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1333);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1334, char* v1335, char* v1336, struct std__forward_iterator_tag v1337) {
bb1338: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1339;
  char* __beg1340;
  char* __end1341;
  struct std__forward_iterator_tag unnamed1342;
  unsigned long __dnew1343;
  struct _Guard __guard1344;
  this1339 = v1334;
  __beg1340 = v1335;
  __end1341 = v1336;
  unnamed1342 = v1337;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1345 = this1339;
  char* t1346 = __beg1340;
  char* t1347 = __end1341;
  long r1348 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1346, t1347);
  unsigned long cast1349 = (unsigned long)r1348;
  __dnew1343 = cast1349;
    unsigned long t1350 = __dnew1343;
    unsigned long c1351 = 15;
    _Bool c1352 = ((t1350 > c1351)) ? 1 : 0;
    if (c1352) {
      unsigned long c1353 = 0;
      char* r1354 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1345, &__dnew1343, c1353);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1345, r1354);
      unsigned long t1355 = __dnew1343;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1345, t1355);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1345);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1344, t1345);
    char* r1356 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1345);
    char* t1357 = __beg1340;
    char* t1358 = __end1341;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1356, t1357, t1358);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1359 = ((void*)0);
    __guard1344._M_guarded = c1359;
    unsigned long t1360 = __dnew1343;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1345, t1360);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1344);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1361) {
bb1362: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1363;
  this1363 = v1361;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1364 = this1363;
  {
    struct std__allocator_char_* base1365 = (struct std__allocator_char_*)((char *)t1364 + 0);
    std__allocator_char____allocator(base1365);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1366, struct std____new_allocator_char_* v1367) {
bb1368: ;
  struct std____new_allocator_char_* this1369;
  struct std____new_allocator_char_* unnamed1370;
  this1369 = v1366;
  unnamed1370 = v1367;
  struct std____new_allocator_char_* t1371 = this1369;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1372) {
bb1373: ;
  char* __r1374;
  char* __retval1375;
  __r1374 = v1372;
  char* t1376 = __r1374;
  __retval1375 = t1376;
  char* t1377 = __retval1375;
  return t1377;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1378) {
bb1379: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1380;
  char* __retval1381;
  this1380 = v1378;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1382 = this1380;
  char* cast1383 = (char*)&(t1382->field2._M_local_buf);
  char* r1384 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1383);
  __retval1381 = r1384;
  char* t1385 = __retval1381;
  return t1385;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1386) {
bb1387: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1388;
  _Bool __retval1389;
  this1388 = v1386;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1390 = this1388;
    char* r1391 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1390);
    char* r1392 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1390);
    _Bool c1393 = ((r1391 == r1392)) ? 1 : 0;
    if (c1393) {
        unsigned long t1394 = t1390->_M_string_length;
        unsigned long c1395 = 15;
        _Bool c1396 = ((t1394 > c1395)) ? 1 : 0;
        if (c1396) {
          __builtin_unreachable();
        }
      _Bool c1397 = 1;
      __retval1389 = c1397;
      _Bool t1398 = __retval1389;
      return t1398;
    }
  _Bool c1399 = 0;
  __retval1389 = c1399;
  _Bool t1400 = __retval1389;
  return t1400;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1401, char* v1402, unsigned long v1403) {
bb1404: ;
  struct std____new_allocator_char_* this1405;
  char* __p1406;
  unsigned long __n1407;
  this1405 = v1401;
  __p1406 = v1402;
  __n1407 = v1403;
  struct std____new_allocator_char_* t1408 = this1405;
    unsigned long c1409 = 1;
    unsigned long c1410 = 16;
    _Bool c1411 = ((c1409 > c1410)) ? 1 : 0;
    if (c1411) {
      char* t1412 = __p1406;
      void* cast1413 = (void*)t1412;
      unsigned long t1414 = __n1407;
      unsigned long c1415 = 1;
      unsigned long b1416 = t1414 * c1415;
      unsigned long c1417 = 1;
      operator_delete_3(cast1413, b1416, c1417);
      return;
    }
  char* t1418 = __p1406;
  void* cast1419 = (void*)t1418;
  unsigned long t1420 = __n1407;
  unsigned long c1421 = 1;
  unsigned long b1422 = t1420 * c1421;
  operator_delete_2(cast1419, b1422);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1423, char* v1424, unsigned long v1425) {
bb1426: ;
  struct std__allocator_char_* this1427;
  char* __p1428;
  unsigned long __n1429;
  this1427 = v1423;
  __p1428 = v1424;
  __n1429 = v1425;
  struct std__allocator_char_* t1430 = this1427;
    _Bool r1431 = std____is_constant_evaluated();
    if (r1431) {
      char* t1432 = __p1428;
      void* cast1433 = (void*)t1432;
      operator_delete(cast1433);
      return;
    }
  struct std____new_allocator_char_* base1434 = (struct std____new_allocator_char_*)((char *)t1430 + 0);
  char* t1435 = __p1428;
  unsigned long t1436 = __n1429;
  std____new_allocator_char___deallocate(base1434, t1435, t1436);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1437, char* v1438, unsigned long v1439) {
bb1440: ;
  struct std__allocator_char_* __a1441;
  char* __p1442;
  unsigned long __n1443;
  __a1441 = v1437;
  __p1442 = v1438;
  __n1443 = v1439;
  struct std__allocator_char_* t1444 = __a1441;
  char* t1445 = __p1442;
  unsigned long t1446 = __n1443;
  std__allocator_char___deallocate(t1444, t1445, t1446);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1447, unsigned long v1448) {
bb1449: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1450;
  unsigned long __size1451;
  this1450 = v1447;
  __size1451 = v1448;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1452 = this1450;
  struct std__allocator_char_* r1453 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1452);
  char* r1454 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1452);
  unsigned long t1455 = __size1451;
  unsigned long c1456 = 1;
  unsigned long b1457 = t1455 + c1456;
  std__allocator_traits_std__allocator_char_____deallocate(r1453, r1454, b1457);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1458) {
bb1459: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1460;
  this1460 = v1458;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1461 = this1460;
    _Bool r1462 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1461);
    _Bool u1463 = !r1462;
    if (u1463) {
      unsigned long t1464 = t1461->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1461, t1464);
    }
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1465, struct std__allocator_char_* v1466) {
bb1467: ;
  struct std__allocator_char_* this1468;
  struct std__allocator_char_* __a1469;
  this1468 = v1465;
  __a1469 = v1466;
  struct std__allocator_char_* t1470 = this1468;
  struct std____new_allocator_char_* base1471 = (struct std____new_allocator_char_*)((char *)t1470 + 0);
  struct std__allocator_char_* t1472 = __a1469;
  struct std____new_allocator_char_* base1473 = (struct std____new_allocator_char_*)((char *)t1472 + 0);
  std____new_allocator_char_____new_allocator(base1471, base1473);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v1474) {
bb1475: ;
  struct std__allocator_char_* __rhs1476;
  struct std__allocator_char_ __retval1477;
  __rhs1476 = v1474;
  struct std__allocator_char_* t1478 = __rhs1476;
  std__allocator_char___allocator(&__retval1477, t1478);
  struct std__allocator_char_ t1479 = __retval1477;
  return t1479;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v1480) {
bb1481: ;
  struct std__allocator_char_* __a1482;
  struct std__allocator_char_ __retval1483;
  __a1482 = v1480;
  struct std__allocator_char_* t1484 = __a1482;
  struct std__allocator_char_ r1485 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t1484);
  __retval1483 = r1485;
  struct std__allocator_char_ t1486 = __retval1483;
  return t1486;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1487, char* v1488, struct std__allocator_char_* v1489) {
bb1490: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1491;
  char* __dat1492;
  struct std__allocator_char_* __a1493;
  this1491 = v1487;
  __dat1492 = v1488;
  __a1493 = v1489;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1494 = this1491;
  struct std__allocator_char_* base1495 = (struct std__allocator_char_*)((char *)t1494 + 0);
  struct std__allocator_char_* t1496 = __a1493;
  std__allocator_char___allocator(base1495, t1496);
    char* t1497 = __dat1492;
    t1494->_M_p = t1497;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructILb1EEEvPKcm
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1498, char* v1499, unsigned long v1500) {
bb1501: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1502;
  char* __str1503;
  unsigned long __n1504;
  this1502 = v1498;
  __str1503 = v1499;
  __n1504 = v1500;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1505 = this1502;
    unsigned long t1506 = __n1504;
    unsigned long c1507 = 15;
    _Bool c1508 = ((t1506 > c1507)) ? 1 : 0;
    if (c1508) {
      unsigned long c1509 = 0;
      char* r1510 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1505, &__n1504, c1509);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1505, r1510);
      unsigned long t1511 = __n1504;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1505, t1511);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1505);
    }
    unsigned long t1512 = __n1504;
    _Bool cast1513 = (_Bool)t1512;
    _Bool ternary1514;
    if (cast1513) {
      _Bool c1515 = 1;
      ternary1514 = (_Bool)c1515;
    } else {
      _Bool c1516 = 1;
      ternary1514 = (_Bool)c1516;
    }
    if (ternary1514) {
      char* r1517 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1505);
      char* t1518 = __str1503;
      unsigned long t1519 = __n1504;
      _Bool c1520 = 1;
      unsigned long cast1521 = (unsigned long)c1520;
      unsigned long b1522 = t1519 + cast1521;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1517, t1518, b1522);
    }
  unsigned long t1523 = __n1504;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1505, t1523);
    _Bool c1524 = 0;
    if (c1524) {
      char ref_tmp01525;
      unsigned long t1526 = __n1504;
      char* r1527 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1505);
      char* ptr1528 = &(r1527)[t1526];
      char c1529 = 0;
      ref_tmp01525 = c1529;
      std__char_traits_char___assign(ptr1528, &ref_tmp01525);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1530) {
bb1531: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1532;
  unsigned long __retval1533;
  unsigned long __sz1534;
  this1532 = v1530;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1535 = this1532;
  unsigned long t1536 = t1535->_M_string_length;
  __sz1534 = t1536;
    unsigned long t1537 = __sz1534;
    unsigned long r1538 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1535);
    _Bool c1539 = ((t1537 > r1538)) ? 1 : 0;
    if (c1539) {
      __builtin_unreachable();
    }
  unsigned long t1540 = __sz1534;
  __retval1533 = t1540;
  unsigned long t1541 = __retval1533;
  return t1541;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1542) {
bb1543: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1544;
  unsigned long __retval1545;
  this1544 = v1542;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1546 = this1544;
  unsigned long r1547 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1546);
  __retval1545 = r1547;
  unsigned long t1548 = __retval1545;
  return t1548;
}

