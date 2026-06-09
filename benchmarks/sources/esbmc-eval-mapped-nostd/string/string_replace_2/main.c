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
char _str_6[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_replace_2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_7[27] = "this is an example phrase.";
char _str_8[36] = "str == \"this is an example phrase.\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_9[50] = "basic_string: construction from null is not valid";
char _str_10[24] = "basic_string::_M_create";
char _str_11[22] = "basic_string::replace";
char _str_12[25] = "basic_string::_M_replace";
char _str_13[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
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
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3, unsigned long p4, unsigned long p5);
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
        char* cast20 = (char*)&(_str_9);
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v47, unsigned long v48, unsigned long v49, char* v50) {
bb51:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this52;
  unsigned long __n153;
  unsigned long __n254;
  char* __s55;
  this52 = v47;
  __n153 = v48;
  __n254 = v49;
  __s55 = v50;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t56 = this52;
    unsigned long r57 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t56);
    unsigned long r58 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t56);
    unsigned long t59 = __n153;
    unsigned long b60 = r58 - t59;
    unsigned long b61 = r57 - b60;
    unsigned long t62 = __n254;
    _Bool c63 = ((b61 < t62)) ? 1 : 0;
    if (c63) {
      char* t64 = __s55;
      std____throw_length_error(t64);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v65) {
bb66:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this67;
  unsigned long __retval68;
  unsigned long __sz69;
  this67 = v65;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t70 = this67;
  _Bool r71 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t70);
  unsigned long ternary72;
  if (r71) {
    unsigned long c73 = 15;
    ternary72 = (unsigned long)c73;
  } else {
    unsigned long t74 = t70->field2._M_allocated_capacity;
    ternary72 = (unsigned long)t74;
  }
  __sz69 = ternary72;
    unsigned long t75 = __sz69;
    unsigned long c76 = 15;
    _Bool c77 = ((t75 < c76)) ? 1 : 0;
    _Bool ternary78;
    if (c77) {
      _Bool c79 = 1;
      ternary78 = (_Bool)c79;
    } else {
      unsigned long t80 = __sz69;
      unsigned long r81 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t70);
      _Bool c82 = ((t80 > r81)) ? 1 : 0;
      ternary78 = (_Bool)c82;
    }
    if (ternary78) {
      __builtin_unreachable();
    }
  unsigned long t83 = __sz69;
  __retval68 = t83;
  unsigned long t84 = __retval68;
  return t84;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v85, char* v86, char* v87) {
bb88:
  struct std__less_const_char___* this89;
  char* __x90;
  char* __y91;
  _Bool __retval92;
  this89 = v85;
  __x90 = v86;
  __y91 = v87;
  struct std__less_const_char___* t93 = this89;
    _Bool r94 = std____is_constant_evaluated();
    if (r94) {
      char* t95 = __x90;
      char* t96 = __y91;
      _Bool c97 = ((t95 < t96)) ? 1 : 0;
      __retval92 = c97;
      _Bool t98 = __retval92;
      return t98;
    }
  char* t99 = __x90;
  unsigned long cast100 = (unsigned long)t99;
  char* t101 = __y91;
  unsigned long cast102 = (unsigned long)t101;
  _Bool c103 = ((cast100 < cast102)) ? 1 : 0;
  __retval92 = c103;
  _Bool t104 = __retval92;
  return t104;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v105, char* v106) {
bb107:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this108;
  char* __s109;
  _Bool __retval110;
  struct std__less_const_char___ ref_tmp0111;
  this108 = v105;
  __s109 = v106;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t112 = this108;
  char* t113 = __s109;
  char* r114 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t112);
  _Bool r115 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0111, t113, r114);
  _Bool ternary116;
  if (r115) {
    _Bool c117 = 1;
    ternary116 = (_Bool)c117;
  } else {
    struct std__less_const_char___ ref_tmp1118;
    char* r119 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t112);
    unsigned long r120 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t112);
    char* ptr121 = &(r119)[r120];
    char* t122 = __s109;
    _Bool r123 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1118, ptr121, t122);
    ternary116 = (_Bool)r123;
  }
  __retval110 = ternary116;
  _Bool t124 = __retval110;
  return t124;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v125, char* v126) {
bb127:
  char* __c1128;
  char* __c2129;
  __c1128 = v125;
  __c2129 = v126;
    _Bool r130 = std____is_constant_evaluated();
    if (r130) {
      char* t131 = __c1128;
      char* t132 = __c2129;
      char* r133 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t131, t132);
    } else {
      char* t134 = __c2129;
      char t135 = *t134;
      char* t136 = __c1128;
      *t136 = t135;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v137, char* v138, unsigned long v139) {
bb140:
  char* __s1141;
  char* __s2142;
  unsigned long __n143;
  char* __retval144;
  __s1141 = v137;
  __s2142 = v138;
  __n143 = v139;
    unsigned long t145 = __n143;
    unsigned long c146 = 0;
    _Bool c147 = ((t145 == c146)) ? 1 : 0;
    if (c147) {
      char* t148 = __s1141;
      __retval144 = t148;
      char* t149 = __retval144;
      return t149;
    }
    _Bool r150 = std____is_constant_evaluated();
    if (r150) {
        char* t151 = __s2142;
        char* t152 = __s1141;
        _Bool c153 = ((t151 < t152)) ? 1 : 0;
        _Bool isconst154 = 0;
        _Bool ternary155;
        if (isconst154) {
          char* t156 = __s1141;
          char* t157 = __s2142;
          _Bool c158 = ((t156 > t157)) ? 1 : 0;
          ternary155 = (_Bool)c158;
        } else {
          _Bool c159 = 0;
          ternary155 = (_Bool)c159;
        }
        _Bool ternary160;
        if (ternary155) {
          char* t161 = __s1141;
          char* t162 = __s2142;
          unsigned long t163 = __n143;
          char* ptr164 = &(t162)[t163];
          _Bool c165 = ((t161 < ptr164)) ? 1 : 0;
          ternary160 = (_Bool)c165;
        } else {
          _Bool c166 = 0;
          ternary160 = (_Bool)c166;
        }
        if (ternary160) {
            do {
                unsigned long t167 = __n143;
                unsigned long u168 = t167 - 1;
                __n143 = u168;
                unsigned long t169 = __n143;
                char* t170 = __s1141;
                char* ptr171 = &(t170)[t169];
                unsigned long t172 = __n143;
                char* t173 = __s2142;
                char* ptr174 = &(t173)[t172];
                __gnu_cxx__char_traits_char___assign(ptr171, ptr174);
              unsigned long t175 = __n143;
              unsigned long c176 = 0;
              _Bool c177 = ((t175 > c176)) ? 1 : 0;
              if (!c177) break;
            } while (1);
        } else {
          char* t178 = __s1141;
          char* t179 = __s2142;
          unsigned long t180 = __n143;
          char* r181 = __gnu_cxx__char_traits_char___copy(t178, t179, t180);
        }
      char* t182 = __s1141;
      __retval144 = t182;
      char* t183 = __retval144;
      return t183;
    }
  char* t184 = __s1141;
  void* cast185 = (void*)t184;
  char* t186 = __s2142;
  void* cast187 = (void*)t186;
  unsigned long t188 = __n143;
  unsigned long c189 = 1;
  unsigned long b190 = t188 * c189;
  void* r191 = memmove(cast185, cast187, b190);
  char* t192 = __s1141;
  __retval144 = t192;
  char* t193 = __retval144;
  return t193;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v194, char* v195, unsigned long v196) {
bb197:
  char* __s1198;
  char* __s2199;
  unsigned long __n200;
  char* __retval201;
  __s1198 = v194;
  __s2199 = v195;
  __n200 = v196;
    unsigned long t202 = __n200;
    unsigned long c203 = 0;
    _Bool c204 = ((t202 == c203)) ? 1 : 0;
    if (c204) {
      char* t205 = __s1198;
      __retval201 = t205;
      char* t206 = __retval201;
      return t206;
    }
    _Bool r207 = std____is_constant_evaluated();
    if (r207) {
      char* t208 = __s1198;
      char* t209 = __s2199;
      unsigned long t210 = __n200;
      char* r211 = __gnu_cxx__char_traits_char___move(t208, t209, t210);
      __retval201 = r211;
      char* t212 = __retval201;
      return t212;
    }
  char* t213 = __s1198;
  void* cast214 = (void*)t213;
  char* t215 = __s2199;
  void* cast216 = (void*)t215;
  unsigned long t217 = __n200;
  void* r218 = memmove(cast214, cast216, t217);
  char* cast219 = (char*)r218;
  __retval201 = cast219;
  char* t220 = __retval201;
  return t220;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v221, char* v222, unsigned long v223) {
bb224:
  char* __d225;
  char* __s226;
  unsigned long __n227;
  __d225 = v221;
  __s226 = v222;
  __n227 = v223;
    unsigned long t228 = __n227;
    unsigned long c229 = 1;
    _Bool c230 = ((t228 == c229)) ? 1 : 0;
    if (c230) {
      char* t231 = __d225;
      char* t232 = __s226;
      std__char_traits_char___assign(t231, t232);
    } else {
      char* t233 = __d225;
      char* t234 = __s226;
      unsigned long t235 = __n227;
      char* r236 = std__char_traits_char___move(t233, t234, t235);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v237, char* v238, unsigned long v239, char* v240, unsigned long v241, unsigned long v242) {
bb243:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this244;
  char* __p245;
  unsigned long __len1246;
  char* __s247;
  unsigned long __len2248;
  unsigned long __how_much249;
  this244 = v237;
  __p245 = v238;
  __len1246 = v239;
  __s247 = v240;
  __len2248 = v241;
  __how_much249 = v242;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t250 = this244;
    unsigned long t251 = __len2248;
    _Bool cast252 = (_Bool)t251;
    _Bool ternary253;
    if (cast252) {
      unsigned long t254 = __len2248;
      unsigned long t255 = __len1246;
      _Bool c256 = ((t254 <= t255)) ? 1 : 0;
      ternary253 = (_Bool)c256;
    } else {
      _Bool c257 = 0;
      ternary253 = (_Bool)c257;
    }
    if (ternary253) {
      char* t258 = __p245;
      char* t259 = __s247;
      unsigned long t260 = __len2248;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t258, t259, t260);
    }
    unsigned long t261 = __how_much249;
    _Bool cast262 = (_Bool)t261;
    _Bool ternary263;
    if (cast262) {
      unsigned long t264 = __len1246;
      unsigned long t265 = __len2248;
      _Bool c266 = ((t264 != t265)) ? 1 : 0;
      ternary263 = (_Bool)c266;
    } else {
      _Bool c267 = 0;
      ternary263 = (_Bool)c267;
    }
    if (ternary263) {
      char* t268 = __p245;
      unsigned long t269 = __len2248;
      char* ptr270 = &(t268)[t269];
      char* t271 = __p245;
      unsigned long t272 = __len1246;
      char* ptr273 = &(t271)[t272];
      unsigned long t274 = __how_much249;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr270, ptr273, t274);
    }
    unsigned long t275 = __len2248;
    unsigned long t276 = __len1246;
    _Bool c277 = ((t275 > t276)) ? 1 : 0;
    if (c277) {
        char* t278 = __s247;
        unsigned long t279 = __len2248;
        char* ptr280 = &(t278)[t279];
        char* t281 = __p245;
        unsigned long t282 = __len1246;
        char* ptr283 = &(t281)[t282];
        _Bool c284 = ((ptr280 <= ptr283)) ? 1 : 0;
        if (c284) {
          char* t285 = __p245;
          char* t286 = __s247;
          unsigned long t287 = __len2248;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t285, t286, t287);
        } else {
            char* t288 = __s247;
            char* t289 = __p245;
            unsigned long t290 = __len1246;
            char* ptr291 = &(t289)[t290];
            _Bool c292 = ((t288 >= ptr291)) ? 1 : 0;
            if (c292) {
              unsigned long __poff293;
              char* t294 = __s247;
              char* t295 = __p245;
              long diff296 = t294 - t295;
              unsigned long cast297 = (unsigned long)diff296;
              unsigned long t298 = __len2248;
              unsigned long t299 = __len1246;
              unsigned long b300 = t298 - t299;
              unsigned long b301 = cast297 + b300;
              __poff293 = b301;
              char* t302 = __p245;
              char* t303 = __p245;
              unsigned long t304 = __poff293;
              char* ptr305 = &(t303)[t304];
              unsigned long t306 = __len2248;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t302, ptr305, t306);
            } else {
              unsigned long __nleft307;
              char* t308 = __p245;
              unsigned long t309 = __len1246;
              char* ptr310 = &(t308)[t309];
              char* t311 = __s247;
              long diff312 = ptr310 - t311;
              unsigned long cast313 = (unsigned long)diff312;
              __nleft307 = cast313;
              char* t314 = __p245;
              char* t315 = __s247;
              unsigned long t316 = __nleft307;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t314, t315, t316);
              char* t317 = __p245;
              unsigned long t318 = __nleft307;
              char* ptr319 = &(t317)[t318];
              char* t320 = __p245;
              unsigned long t321 = __len2248;
              char* ptr322 = &(t320)[t321];
              unsigned long t323 = __len2248;
              unsigned long t324 = __nleft307;
              unsigned long b325 = t323 - t324;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr319, ptr322, b325);
            }
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v326, unsigned long v327, unsigned long v328, char* v329, unsigned long v330) {
bb331:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this332;
  unsigned long __pos333;
  unsigned long __len1334;
  char* __s335;
  unsigned long __len2336;
  unsigned long __how_much337;
  unsigned long __new_capacity338;
  char* __r339;
  this332 = v326;
  __pos333 = v327;
  __len1334 = v328;
  __s335 = v329;
  __len2336 = v330;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t340 = this332;
  unsigned long r341 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t340);
  unsigned long t342 = __pos333;
  unsigned long b343 = r341 - t342;
  unsigned long t344 = __len1334;
  unsigned long b345 = b343 - t344;
  __how_much337 = b345;
  unsigned long r346 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t340);
  unsigned long t347 = __len2336;
  unsigned long b348 = r346 + t347;
  unsigned long t349 = __len1334;
  unsigned long b350 = b348 - t349;
  __new_capacity338 = b350;
  unsigned long r351 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t340);
  char* r352 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t340, &__new_capacity338, r351);
  __r339 = r352;
    unsigned long t353 = __pos333;
    _Bool cast354 = (_Bool)t353;
    if (cast354) {
      char* t355 = __r339;
      char* r356 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t340);
      unsigned long t357 = __pos333;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t355, r356, t357);
    }
    char* t358 = __s335;
    _Bool cast359 = (_Bool)t358;
    _Bool ternary360;
    if (cast359) {
      unsigned long t361 = __len2336;
      _Bool cast362 = (_Bool)t361;
      ternary360 = (_Bool)cast362;
    } else {
      _Bool c363 = 0;
      ternary360 = (_Bool)c363;
    }
    if (ternary360) {
      char* t364 = __r339;
      unsigned long t365 = __pos333;
      char* ptr366 = &(t364)[t365];
      char* t367 = __s335;
      unsigned long t368 = __len2336;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr366, t367, t368);
    }
    unsigned long t369 = __how_much337;
    _Bool cast370 = (_Bool)t369;
    if (cast370) {
      char* t371 = __r339;
      unsigned long t372 = __pos333;
      char* ptr373 = &(t371)[t372];
      unsigned long t374 = __len2336;
      char* ptr375 = &(ptr373)[t374];
      char* r376 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t340);
      unsigned long t377 = __pos333;
      char* ptr378 = &(r376)[t377];
      unsigned long t379 = __len1334;
      char* ptr380 = &(ptr378)[t379];
      unsigned long t381 = __how_much337;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr375, ptr380, t381);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t340);
  char* t382 = __r339;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t340, t382);
  unsigned long t383 = __new_capacity338;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t340, t383);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v384, unsigned long v385, unsigned long v386, char* v387, unsigned long v388) {
bb389:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this390;
  unsigned long __pos391;
  unsigned long __len1392;
  char* __s393;
  unsigned long __len2394;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval395;
  unsigned long __old_size396;
  unsigned long __new_size397;
  this390 = v384;
  __pos391 = v385;
  __len1392 = v386;
  __s393 = v387;
  __len2394 = v388;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t398 = this390;
  unsigned long t399 = __len1392;
  unsigned long t400 = __len2394;
  char* cast401 = (char*)&(_str_12);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t398, t399, t400, cast401);
  unsigned long r402 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t398);
  __old_size396 = r402;
  unsigned long t403 = __old_size396;
  unsigned long t404 = __len2394;
  unsigned long b405 = t403 + t404;
  unsigned long t406 = __len1392;
  unsigned long b407 = b405 - t406;
  __new_size397 = b407;
    unsigned long t408 = __new_size397;
    unsigned long r409 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t398);
    _Bool c410 = ((t408 <= r409)) ? 1 : 0;
    if (c410) {
      char* __p411;
      unsigned long __how_much412;
      char* r413 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t398);
      unsigned long t414 = __pos391;
      char* ptr415 = &(r413)[t414];
      __p411 = ptr415;
      unsigned long t416 = __old_size396;
      unsigned long t417 = __pos391;
      unsigned long b418 = t416 - t417;
      unsigned long t419 = __len1392;
      unsigned long b420 = b418 - t419;
      __how_much412 = b420;
        _Bool r421 = std__is_constant_evaluated();
        if (r421) {
          char* __newp422;
          struct std__allocator_char_* r423 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t398);
          unsigned long t424 = __new_size397;
          char* r425 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r423, t424);
          __newp422 = r425;
          char* t426 = __newp422;
          char* r427 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t398);
          unsigned long t428 = __pos391;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t426, r427, t428);
          char* t429 = __newp422;
          unsigned long t430 = __pos391;
          char* ptr431 = &(t429)[t430];
          char* t432 = __s393;
          unsigned long t433 = __len2394;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr431, t432, t433);
          char* t434 = __newp422;
          unsigned long t435 = __pos391;
          char* ptr436 = &(t434)[t435];
          unsigned long t437 = __len2394;
          char* ptr438 = &(ptr436)[t437];
          char* t439 = __p411;
          unsigned long t440 = __len1392;
          char* ptr441 = &(t439)[t440];
          unsigned long t442 = __how_much412;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr438, ptr441, t442);
          char* r443 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t398);
          char* t444 = __newp422;
          unsigned long t445 = __new_size397;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r443, t444, t445);
          struct std__allocator_char_* r446 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t398);
          char* t447 = __newp422;
          unsigned long t448 = __new_size397;
          std__allocator_char___deallocate(r446, t447, t448);
        } else {
            char* t449 = __s393;
            _Bool r450 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t398, t449);
            if (r450) {
                unsigned long t451 = __how_much412;
                _Bool cast452 = (_Bool)t451;
                _Bool ternary453;
                if (cast452) {
                  unsigned long t454 = __len1392;
                  unsigned long t455 = __len2394;
                  _Bool c456 = ((t454 != t455)) ? 1 : 0;
                  ternary453 = (_Bool)c456;
                } else {
                  _Bool c457 = 0;
                  ternary453 = (_Bool)c457;
                }
                if (ternary453) {
                  char* t458 = __p411;
                  unsigned long t459 = __len2394;
                  char* ptr460 = &(t458)[t459];
                  char* t461 = __p411;
                  unsigned long t462 = __len1392;
                  char* ptr463 = &(t461)[t462];
                  unsigned long t464 = __how_much412;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr460, ptr463, t464);
                }
                unsigned long t465 = __len2394;
                _Bool cast466 = (_Bool)t465;
                if (cast466) {
                  char* t467 = __p411;
                  char* t468 = __s393;
                  unsigned long t469 = __len2394;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t467, t468, t469);
                }
            } else {
              char* t470 = __p411;
              unsigned long t471 = __len1392;
              char* t472 = __s393;
              unsigned long t473 = __len2394;
              unsigned long t474 = __how_much412;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t398, t470, t471, t472, t473, t474);
            }
        }
    } else {
      unsigned long t475 = __pos391;
      unsigned long t476 = __len1392;
      char* t477 = __s393;
      unsigned long t478 = __len2394;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t398, t475, t476, t477, t478);
    }
  unsigned long t479 = __new_size397;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t398, t479);
  __retval395 = t398;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t480 = __retval395;
  return t480;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v481, unsigned long v482, char* v483) {
bb484:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this485;
  unsigned long __pos486;
  char* __s487;
  unsigned long __retval488;
  this485 = v481;
  __pos486 = v482;
  __s487 = v483;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t489 = this485;
    unsigned long t490 = __pos486;
    unsigned long r491 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t489);
    _Bool c492 = ((t490 > r491)) ? 1 : 0;
    if (c492) {
      char* cast493 = (char*)&(_str_13);
      char* t494 = __s487;
      unsigned long t495 = __pos486;
      unsigned long r496 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t489);
      std____throw_out_of_range_fmt(cast493, t494, t495, r496);
    }
  unsigned long t497 = __pos486;
  __retval488 = t497;
  unsigned long t498 = __retval488;
  return t498;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v499, unsigned long v500, unsigned long v501) {
bb502:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this503;
  unsigned long __pos504;
  unsigned long __off505;
  unsigned long __retval506;
  _Bool __testoff507;
  this503 = v499;
  __pos504 = v500;
  __off505 = v501;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t508 = this503;
  unsigned long t509 = __off505;
  unsigned long r510 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t508);
  unsigned long t511 = __pos504;
  unsigned long b512 = r510 - t511;
  _Bool c513 = ((t509 < b512)) ? 1 : 0;
  __testoff507 = c513;
  _Bool t514 = __testoff507;
  unsigned long ternary515;
  if (t514) {
    unsigned long t516 = __off505;
    ternary515 = (unsigned long)t516;
  } else {
    unsigned long r517 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t508);
    unsigned long t518 = __pos504;
    unsigned long b519 = r517 - t518;
    ternary515 = (unsigned long)b519;
  }
  __retval506 = ternary515;
  unsigned long t520 = __retval506;
  return t520;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v521, unsigned long v522, unsigned long v523, char* v524, unsigned long v525) {
bb526:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this527;
  unsigned long __pos528;
  unsigned long __n1529;
  char* __s530;
  unsigned long __n2531;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval532;
  this527 = v521;
  __pos528 = v522;
  __n1529 = v523;
  __s530 = v524;
  __n2531 = v525;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t533 = this527;
  unsigned long t534 = __pos528;
  char* cast535 = (char*)&(_str_11);
  unsigned long r536 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t533, t534, cast535);
  unsigned long t537 = __pos528;
  unsigned long t538 = __n1529;
  unsigned long r539 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t533, t537, t538);
  char* t540 = __s530;
  unsigned long t541 = __n2531;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r542 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t533, r536, r539, t540, t541);
  __retval532 = r542;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t543 = __retval532;
  return t543;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmRKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v544, unsigned long v545, unsigned long v546, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v547) {
bb548:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this549;
  unsigned long __pos550;
  unsigned long __n551;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str552;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval553;
  this549 = v544;
  __pos550 = v545;
  __n551 = v546;
  __str552 = v547;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t554 = this549;
  unsigned long t555 = __pos550;
  unsigned long t556 = __n551;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t557 = __str552;
  char* r558 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t557);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t559 = __str552;
  unsigned long r560 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t559);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r561 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(t554, t555, t556, r558, r560);
  __retval553 = r561;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t562 = __retval553;
  return t562;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v563, char* v564) {
bb565:
  char* __c1566;
  char* __c2567;
  _Bool __retval568;
  __c1566 = v563;
  __c2567 = v564;
  char* t569 = __c1566;
  char t570 = *t569;
  unsigned char cast571 = (unsigned char)t570;
  int cast572 = (int)cast571;
  char* t573 = __c2567;
  char t574 = *t573;
  unsigned char cast575 = (unsigned char)t574;
  int cast576 = (int)cast575;
  _Bool c577 = ((cast572 < cast576)) ? 1 : 0;
  __retval568 = c577;
  _Bool t578 = __retval568;
  return t578;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v579, char* v580, unsigned long v581) {
bb582:
  char* __s1583;
  char* __s2584;
  unsigned long __n585;
  int __retval586;
  __s1583 = v579;
  __s2584 = v580;
  __n585 = v581;
    unsigned long t587 = __n585;
    unsigned long c588 = 0;
    _Bool c589 = ((t587 == c588)) ? 1 : 0;
    if (c589) {
      int c590 = 0;
      __retval586 = c590;
      int t591 = __retval586;
      return t591;
    }
    _Bool r592 = std____is_constant_evaluated();
    if (r592) {
        unsigned long __i593;
        unsigned long c594 = 0;
        __i593 = c594;
        while (1) {
          unsigned long t596 = __i593;
          unsigned long t597 = __n585;
          _Bool c598 = ((t596 < t597)) ? 1 : 0;
          if (!c598) break;
            unsigned long t599 = __i593;
            char* t600 = __s1583;
            char* ptr601 = &(t600)[t599];
            unsigned long t602 = __i593;
            char* t603 = __s2584;
            char* ptr604 = &(t603)[t602];
            _Bool r605 = std__char_traits_char___lt(ptr601, ptr604);
            if (r605) {
              int c606 = -1;
              __retval586 = c606;
              int t607 = __retval586;
              int ret_val608 = t607;
              return ret_val608;
            } else {
                unsigned long t609 = __i593;
                char* t610 = __s2584;
                char* ptr611 = &(t610)[t609];
                unsigned long t612 = __i593;
                char* t613 = __s1583;
                char* ptr614 = &(t613)[t612];
                _Bool r615 = std__char_traits_char___lt(ptr611, ptr614);
                if (r615) {
                  int c616 = 1;
                  __retval586 = c616;
                  int t617 = __retval586;
                  int ret_val618 = t617;
                  return ret_val618;
                }
            }
        for_step595: ;
          unsigned long t619 = __i593;
          unsigned long u620 = t619 + 1;
          __i593 = u620;
        }
      int c621 = 0;
      __retval586 = c621;
      int t622 = __retval586;
      return t622;
    }
  char* t623 = __s1583;
  void* cast624 = (void*)t623;
  char* t625 = __s2584;
  void* cast626 = (void*)t625;
  unsigned long t627 = __n585;
  int r628 = memcmp(cast624, cast626, t627);
  __retval586 = r628;
  int t629 = __retval586;
  return t629;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v630) {
bb631:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this632;
  char* __retval633;
  this632 = v630;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t634 = this632;
  char* r635 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t634);
  __retval633 = r635;
  char* t636 = __retval633;
  return t636;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v637, char* v638) {
bb639:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs640;
  char* __rhs641;
  _Bool __retval642;
  __lhs640 = v637;
  __rhs641 = v638;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t643 = __lhs640;
  unsigned long r644 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t643);
  char* t645 = __rhs641;
  unsigned long r646 = std__char_traits_char___length(t645);
  _Bool c647 = ((r644 == r646)) ? 1 : 0;
  _Bool ternary648;
  if (c647) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t649 = __lhs640;
    char* r650 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t649);
    char* t651 = __rhs641;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t652 = __lhs640;
    unsigned long r653 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t652);
    int r654 = std__char_traits_char___compare(r650, t651, r653);
    _Bool cast655 = (_Bool)r654;
    _Bool u656 = !cast655;
    ternary648 = (_Bool)u656;
  } else {
    _Bool c657 = 0;
    ternary648 = (_Bool)c657;
  }
  __retval642 = ternary648;
  _Bool t658 = __retval642;
  return t658;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmRKS4_mm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v659, unsigned long v660, unsigned long v661, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v662, unsigned long v663, unsigned long v664) {
bb665:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this666;
  unsigned long __pos1667;
  unsigned long __n1668;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str669;
  unsigned long __pos2670;
  unsigned long __n2671;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval672;
  this666 = v659;
  __pos1667 = v660;
  __n1668 = v661;
  __str669 = v662;
  __pos2670 = v663;
  __n2671 = v664;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t673 = this666;
  unsigned long t674 = __pos1667;
  unsigned long t675 = __n1668;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t676 = __str669;
  char* r677 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t676);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t678 = __str669;
  unsigned long t679 = __pos2670;
  char* cast680 = (char*)&(_str_11);
  unsigned long r681 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t678, t679, cast680);
  char* ptr682 = &(r677)[r681];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t683 = __str669;
  unsigned long t684 = __pos2670;
  unsigned long t685 = __n2671;
  unsigned long r686 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t683, t684, t685);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r687 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(t673, t674, t675, ptr682, r686);
  __retval672 = r687;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t688 = __retval672;
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
            struct std__basic_ostream_char__std__char_traits_char__* r824 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str798);
            struct std__basic_ostream_char__std__char_traits_char__* r825 = std__ostream__operator___std__ostream_____(r824, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            int c826 = 0;
            __retval789 = c826;
            int t827 = __retval789;
            int ret_val828 = t827;
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
            return ret_val828;
  int t829 = __retval789;
  return t829;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v830) {
bb831:
  struct std____new_allocator_char_* this832;
  this832 = v830;
  struct std____new_allocator_char_* t833 = this832;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v834) {
bb835:
  char* __r836;
  char* __retval837;
  __r836 = v834;
  char* t838 = __r836;
  __retval837 = t838;
  char* t839 = __retval837;
  return t839;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v840) {
bb841:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this842;
  char* __retval843;
  this842 = v840;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t844 = this842;
  char* cast845 = (char*)&(t844->field2._M_local_buf);
  char* r846 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast845);
  __retval843 = r846;
  char* t847 = __retval843;
  return t847;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v848, char* v849, struct std__allocator_char_* v850) {
bb851:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this852;
  char* __dat853;
  struct std__allocator_char_* __a854;
  this852 = v848;
  __dat853 = v849;
  __a854 = v850;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t855 = this852;
  struct std__allocator_char_* base856 = (struct std__allocator_char_*)((char *)t855 + 0);
  struct std__allocator_char_* t857 = __a854;
  std__allocator_char___allocator(base856, t857);
    char* t858 = __dat853;
    t855->_M_p = t858;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb859:
  _Bool __retval860;
    _Bool c861 = 0;
    __retval860 = c861;
    _Bool t862 = __retval860;
    return t862;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v863, char* v864) {
bb865:
  char* __c1866;
  char* __c2867;
  _Bool __retval868;
  __c1866 = v863;
  __c2867 = v864;
  char* t869 = __c1866;
  char t870 = *t869;
  int cast871 = (int)t870;
  char* t872 = __c2867;
  char t873 = *t872;
  int cast874 = (int)t873;
  _Bool c875 = ((cast871 == cast874)) ? 1 : 0;
  __retval868 = c875;
  _Bool t876 = __retval868;
  return t876;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v877) {
bb878:
  char* __p879;
  unsigned long __retval880;
  unsigned long __i881;
  __p879 = v877;
  unsigned long c882 = 0;
  __i881 = c882;
    char ref_tmp0883;
    while (1) {
      unsigned long t884 = __i881;
      char* t885 = __p879;
      char* ptr886 = &(t885)[t884];
      char c887 = 0;
      ref_tmp0883 = c887;
      _Bool r888 = __gnu_cxx__char_traits_char___eq(ptr886, &ref_tmp0883);
      _Bool u889 = !r888;
      if (!u889) break;
      unsigned long t890 = __i881;
      unsigned long u891 = t890 + 1;
      __i881 = u891;
    }
  unsigned long t892 = __i881;
  __retval880 = t892;
  unsigned long t893 = __retval880;
  return t893;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v894) {
bb895:
  char* __s896;
  unsigned long __retval897;
  __s896 = v894;
    _Bool r898 = std____is_constant_evaluated();
    if (r898) {
      char* t899 = __s896;
      unsigned long r900 = __gnu_cxx__char_traits_char___length(t899);
      __retval897 = r900;
      unsigned long t901 = __retval897;
      return t901;
    }
  char* t902 = __s896;
  unsigned long r903 = strlen(t902);
  __retval897 = r903;
  unsigned long t904 = __retval897;
  return t904;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v905, char* v906, struct std__random_access_iterator_tag v907) {
bb908:
  char* __first909;
  char* __last910;
  struct std__random_access_iterator_tag unnamed911;
  long __retval912;
  __first909 = v905;
  __last910 = v906;
  unnamed911 = v907;
  char* t913 = __last910;
  char* t914 = __first909;
  long diff915 = t913 - t914;
  __retval912 = diff915;
  long t916 = __retval912;
  return t916;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v917) {
bb918:
  char** unnamed919;
  struct std__random_access_iterator_tag __retval920;
  unnamed919 = v917;
  struct std__random_access_iterator_tag t921 = __retval920;
  return t921;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v922, char* v923) {
bb924:
  char* __first925;
  char* __last926;
  long __retval927;
  struct std__random_access_iterator_tag agg_tmp0928;
  __first925 = v922;
  __last926 = v923;
  char* t929 = __first925;
  char* t930 = __last926;
  struct std__random_access_iterator_tag r931 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first925);
  agg_tmp0928 = r931;
  struct std__random_access_iterator_tag t932 = agg_tmp0928;
  long r933 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t929, t930, t932);
  __retval927 = r933;
  long t934 = __retval927;
  return t934;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v935, char* v936) {
bb937:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this938;
  char* __p939;
  this938 = v935;
  __p939 = v936;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t940 = this938;
  char* t941 = __p939;
  t940->_M_dataplus._M_p = t941;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v942) {
bb943:
  struct std__allocator_char_* __a944;
  unsigned long __retval945;
  __a944 = v942;
  unsigned long c946 = -1;
  unsigned long c947 = 1;
  unsigned long b948 = c946 / c947;
  __retval945 = b948;
  unsigned long t949 = __retval945;
  return t949;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v950) {
bb951:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this952;
  struct std__allocator_char_* __retval953;
  this952 = v950;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t954 = this952;
  struct std__allocator_char_* base955 = (struct std__allocator_char_*)((char *)&(t954->_M_dataplus) + 0);
  __retval953 = base955;
  struct std__allocator_char_* t956 = __retval953;
  return t956;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v957, unsigned long* v958) {
bb959:
  unsigned long* __a960;
  unsigned long* __b961;
  unsigned long* __retval962;
  __a960 = v957;
  __b961 = v958;
    unsigned long* t963 = __b961;
    unsigned long t964 = *t963;
    unsigned long* t965 = __a960;
    unsigned long t966 = *t965;
    _Bool c967 = ((t964 < t966)) ? 1 : 0;
    if (c967) {
      unsigned long* t968 = __b961;
      __retval962 = t968;
      unsigned long* t969 = __retval962;
      return t969;
    }
  unsigned long* t970 = __a960;
  __retval962 = t970;
  unsigned long* t971 = __retval962;
  return t971;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v972) {
bb973:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this974;
  unsigned long __retval975;
  unsigned long __diffmax976;
  unsigned long __allocmax977;
  this974 = v972;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t978 = this974;
  unsigned long c979 = 9223372036854775807;
  __diffmax976 = c979;
  struct std__allocator_char_* r980 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t978);
  unsigned long r981 = std__allocator_traits_std__allocator_char_____max_size(r980);
  __allocmax977 = r981;
  unsigned long* r982 = unsigned_long_const__std__min_unsigned_long_(&__diffmax976, &__allocmax977);
  unsigned long t983 = *r982;
  unsigned long c984 = 1;
  unsigned long b985 = t983 - c984;
  __retval975 = b985;
  unsigned long t986 = __retval975;
  return t986;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v987) {
bb988:
  struct std____new_allocator_char_* this989;
  unsigned long __retval990;
  this989 = v987;
  struct std____new_allocator_char_* t991 = this989;
  unsigned long c992 = 9223372036854775807;
  unsigned long c993 = 1;
  unsigned long b994 = c992 / c993;
  __retval990 = b994;
  unsigned long t995 = __retval990;
  return t995;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v996, unsigned long v997, void* v998) {
bb999:
  struct std____new_allocator_char_* this1000;
  unsigned long __n1001;
  void* unnamed1002;
  char* __retval1003;
  this1000 = v996;
  __n1001 = v997;
  unnamed1002 = v998;
  struct std____new_allocator_char_* t1004 = this1000;
    unsigned long t1005 = __n1001;
    unsigned long r1006 = std____new_allocator_char____M_max_size___const(t1004);
    _Bool c1007 = ((t1005 > r1006)) ? 1 : 0;
    if (c1007) {
        unsigned long t1008 = __n1001;
        unsigned long c1009 = -1;
        unsigned long c1010 = 1;
        unsigned long b1011 = c1009 / c1010;
        _Bool c1012 = ((t1008 > b1011)) ? 1 : 0;
        if (c1012) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1013 = 1;
    unsigned long c1014 = 16;
    _Bool c1015 = ((c1013 > c1014)) ? 1 : 0;
    if (c1015) {
      unsigned long __al1016;
      unsigned long c1017 = 1;
      __al1016 = c1017;
      unsigned long t1018 = __n1001;
      unsigned long c1019 = 1;
      unsigned long b1020 = t1018 * c1019;
      unsigned long t1021 = __al1016;
      void* r1022 = operator_new_2(b1020, t1021);
      char* cast1023 = (char*)r1022;
      __retval1003 = cast1023;
      char* t1024 = __retval1003;
      return t1024;
    }
  unsigned long t1025 = __n1001;
  unsigned long c1026 = 1;
  unsigned long b1027 = t1025 * c1026;
  void* r1028 = operator_new(b1027);
  char* cast1029 = (char*)r1028;
  __retval1003 = cast1029;
  char* t1030 = __retval1003;
  return t1030;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1031, unsigned long v1032) {
bb1033:
  struct std__allocator_char_* this1034;
  unsigned long __n1035;
  char* __retval1036;
  this1034 = v1031;
  __n1035 = v1032;
  struct std__allocator_char_* t1037 = this1034;
    _Bool r1038 = std____is_constant_evaluated();
    if (r1038) {
        unsigned long t1039 = __n1035;
        unsigned long c1040 = 1;
        unsigned long ovr1041;
        _Bool ovf1042 = __builtin_mul_overflow(t1039, c1040, &ovr1041);
        __n1035 = ovr1041;
        if (ovf1042) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1043 = __n1035;
      void* r1044 = operator_new(t1043);
      char* cast1045 = (char*)r1044;
      __retval1036 = cast1045;
      char* t1046 = __retval1036;
      return t1046;
    }
  struct std____new_allocator_char_* base1047 = (struct std____new_allocator_char_*)((char *)t1037 + 0);
  unsigned long t1048 = __n1035;
  void* c1049 = ((void*)0);
  char* r1050 = std____new_allocator_char___allocate(base1047, t1048, c1049);
  __retval1036 = r1050;
  char* t1051 = __retval1036;
  return t1051;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1052, unsigned long v1053) {
bb1054:
  struct std__allocator_char_* __a1055;
  unsigned long __n1056;
  char* __retval1057;
  __a1055 = v1052;
  __n1056 = v1053;
  struct std__allocator_char_* t1058 = __a1055;
  unsigned long t1059 = __n1056;
  char* r1060 = std__allocator_char___allocate(t1058, t1059);
  __retval1057 = r1060;
  char* t1061 = __retval1057;
  return t1061;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1062, unsigned long v1063) {
bb1064:
  struct std__allocator_char_* __a1065;
  unsigned long __n1066;
  char* __retval1067;
  char* __p1068;
  __a1065 = v1062;
  __n1066 = v1063;
  struct std__allocator_char_* t1069 = __a1065;
  unsigned long t1070 = __n1066;
  char* r1071 = std__allocator_traits_std__allocator_char_____allocate(t1069, t1070);
  __p1068 = r1071;
  char* t1072 = __p1068;
  __retval1067 = t1072;
  char* t1073 = __retval1067;
  return t1073;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1074) {
bb1075:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1076;
  struct std__allocator_char_* __retval1077;
  this1076 = v1074;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1078 = this1076;
  struct std__allocator_char_* base1079 = (struct std__allocator_char_*)((char *)&(t1078->_M_dataplus) + 0);
  __retval1077 = base1079;
  struct std__allocator_char_* t1080 = __retval1077;
  return t1080;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1081, unsigned long* v1082, unsigned long v1083) {
bb1084:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1085;
  unsigned long* __capacity1086;
  unsigned long __old_capacity1087;
  char* __retval1088;
  this1085 = v1081;
  __capacity1086 = v1082;
  __old_capacity1087 = v1083;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1089 = this1085;
    unsigned long* t1090 = __capacity1086;
    unsigned long t1091 = *t1090;
    unsigned long r1092 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1089);
    _Bool c1093 = ((t1091 > r1092)) ? 1 : 0;
    if (c1093) {
      char* cast1094 = (char*)&(_str_10);
      std____throw_length_error(cast1094);
    }
    unsigned long* t1095 = __capacity1086;
    unsigned long t1096 = *t1095;
    unsigned long t1097 = __old_capacity1087;
    _Bool c1098 = ((t1096 > t1097)) ? 1 : 0;
    _Bool ternary1099;
    if (c1098) {
      unsigned long* t1100 = __capacity1086;
      unsigned long t1101 = *t1100;
      unsigned long c1102 = 2;
      unsigned long t1103 = __old_capacity1087;
      unsigned long b1104 = c1102 * t1103;
      _Bool c1105 = ((t1101 < b1104)) ? 1 : 0;
      ternary1099 = (_Bool)c1105;
    } else {
      _Bool c1106 = 0;
      ternary1099 = (_Bool)c1106;
    }
    if (ternary1099) {
      unsigned long c1107 = 2;
      unsigned long t1108 = __old_capacity1087;
      unsigned long b1109 = c1107 * t1108;
      unsigned long* t1110 = __capacity1086;
      *t1110 = b1109;
        unsigned long* t1111 = __capacity1086;
        unsigned long t1112 = *t1111;
        unsigned long r1113 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1089);
        _Bool c1114 = ((t1112 > r1113)) ? 1 : 0;
        if (c1114) {
          unsigned long r1115 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1089);
          unsigned long* t1116 = __capacity1086;
          *t1116 = r1115;
        }
    }
  struct std__allocator_char_* r1117 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1089);
  unsigned long* t1118 = __capacity1086;
  unsigned long t1119 = *t1118;
  unsigned long c1120 = 1;
  unsigned long b1121 = t1119 + c1120;
  char* r1122 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1117, b1121);
  __retval1088 = r1122;
  char* t1123 = __retval1088;
  return t1123;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1124, unsigned long v1125) {
bb1126:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1127;
  unsigned long __capacity1128;
  this1127 = v1124;
  __capacity1128 = v1125;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1129 = this1127;
  unsigned long t1130 = __capacity1128;
  t1129->field2._M_allocated_capacity = t1130;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1131:
  _Bool __retval1132;
    _Bool c1133 = 0;
    __retval1132 = c1133;
    _Bool t1134 = __retval1132;
    return t1134;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1135) {
bb1136:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1137;
  this1137 = v1135;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1138 = this1137;
    _Bool r1139 = std__is_constant_evaluated();
    if (r1139) {
        unsigned long __i1140;
        unsigned long c1141 = 0;
        __i1140 = c1141;
        while (1) {
          unsigned long t1143 = __i1140;
          unsigned long c1144 = 15;
          _Bool c1145 = ((t1143 <= c1144)) ? 1 : 0;
          if (!c1145) break;
          char c1146 = 0;
          unsigned long t1147 = __i1140;
          t1138->field2._M_local_buf[t1147] = c1146;
        for_step1142: ;
          unsigned long t1148 = __i1140;
          unsigned long u1149 = t1148 + 1;
          __i1140 = u1149;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1150, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1151) {
bb1152:
  struct _Guard* this1153;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1154;
  this1153 = v1150;
  __s1154 = v1151;
  struct _Guard* t1155 = this1153;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1156 = __s1154;
  t1155->_M_guarded = t1156;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1157, char* v1158) {
bb1159:
  char* __location1160;
  char* __args1161;
  char* __retval1162;
  void* __loc1163;
  __location1160 = v1157;
  __args1161 = v1158;
  char* t1164 = __location1160;
  void* cast1165 = (void*)t1164;
  __loc1163 = cast1165;
    void* t1166 = __loc1163;
    char* cast1167 = (char*)t1166;
    char* t1168 = __args1161;
    char t1169 = *t1168;
    *cast1167 = t1169;
    __retval1162 = cast1167;
    char* t1170 = __retval1162;
    return t1170;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1171, char* v1172) {
bb1173:
  char* __c11174;
  char* __c21175;
  __c11174 = v1171;
  __c21175 = v1172;
    _Bool r1176 = std____is_constant_evaluated();
    if (r1176) {
      char* t1177 = __c11174;
      char* t1178 = __c21175;
      char* r1179 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1177, t1178);
    } else {
      char* t1180 = __c21175;
      char t1181 = *t1180;
      char* t1182 = __c11174;
      *t1182 = t1181;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1183, char* v1184, unsigned long v1185) {
bb1186:
  char* __s11187;
  char* __s21188;
  unsigned long __n1189;
  char* __retval1190;
  __s11187 = v1183;
  __s21188 = v1184;
  __n1189 = v1185;
    unsigned long t1191 = __n1189;
    unsigned long c1192 = 0;
    _Bool c1193 = ((t1191 == c1192)) ? 1 : 0;
    if (c1193) {
      char* t1194 = __s11187;
      __retval1190 = t1194;
      char* t1195 = __retval1190;
      return t1195;
    }
    _Bool r1196 = std____is_constant_evaluated();
    if (r1196) {
        unsigned long __i1197;
        unsigned long c1198 = 0;
        __i1197 = c1198;
        while (1) {
          unsigned long t1200 = __i1197;
          unsigned long t1201 = __n1189;
          _Bool c1202 = ((t1200 < t1201)) ? 1 : 0;
          if (!c1202) break;
          char* t1203 = __s11187;
          unsigned long t1204 = __i1197;
          char* ptr1205 = &(t1203)[t1204];
          unsigned long t1206 = __i1197;
          char* t1207 = __s21188;
          char* ptr1208 = &(t1207)[t1206];
          char* r1209 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1205, ptr1208);
        for_step1199: ;
          unsigned long t1210 = __i1197;
          unsigned long u1211 = t1210 + 1;
          __i1197 = u1211;
        }
      char* t1212 = __s11187;
      __retval1190 = t1212;
      char* t1213 = __retval1190;
      return t1213;
    }
  char* t1214 = __s11187;
  void* cast1215 = (void*)t1214;
  char* t1216 = __s21188;
  void* cast1217 = (void*)t1216;
  unsigned long t1218 = __n1189;
  unsigned long c1219 = 1;
  unsigned long b1220 = t1218 * c1219;
  void* r1221 = memcpy(cast1215, cast1217, b1220);
  char* t1222 = __s11187;
  __retval1190 = t1222;
  char* t1223 = __retval1190;
  return t1223;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1224, char* v1225, unsigned long v1226) {
bb1227:
  char* __s11228;
  char* __s21229;
  unsigned long __n1230;
  char* __retval1231;
  __s11228 = v1224;
  __s21229 = v1225;
  __n1230 = v1226;
    unsigned long t1232 = __n1230;
    unsigned long c1233 = 0;
    _Bool c1234 = ((t1232 == c1233)) ? 1 : 0;
    if (c1234) {
      char* t1235 = __s11228;
      __retval1231 = t1235;
      char* t1236 = __retval1231;
      return t1236;
    }
    _Bool r1237 = std____is_constant_evaluated();
    if (r1237) {
      char* t1238 = __s11228;
      char* t1239 = __s21229;
      unsigned long t1240 = __n1230;
      char* r1241 = __gnu_cxx__char_traits_char___copy(t1238, t1239, t1240);
      __retval1231 = r1241;
      char* t1242 = __retval1231;
      return t1242;
    }
  char* t1243 = __s11228;
  void* cast1244 = (void*)t1243;
  char* t1245 = __s21229;
  void* cast1246 = (void*)t1245;
  unsigned long t1247 = __n1230;
  void* r1248 = memcpy(cast1244, cast1246, t1247);
  char* cast1249 = (char*)r1248;
  __retval1231 = cast1249;
  char* t1250 = __retval1231;
  return t1250;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1251, char* v1252, unsigned long v1253) {
bb1254:
  char* __d1255;
  char* __s1256;
  unsigned long __n1257;
  __d1255 = v1251;
  __s1256 = v1252;
  __n1257 = v1253;
    unsigned long t1258 = __n1257;
    unsigned long c1259 = 1;
    _Bool c1260 = ((t1258 == c1259)) ? 1 : 0;
    if (c1260) {
      char* t1261 = __d1255;
      char* t1262 = __s1256;
      std__char_traits_char___assign(t1261, t1262);
    } else {
      char* t1263 = __d1255;
      char* t1264 = __s1256;
      unsigned long t1265 = __n1257;
      char* r1266 = std__char_traits_char___copy(t1263, t1264, t1265);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1267) {
bb1268:
  char* __it1269;
  char* __retval1270;
  __it1269 = v1267;
  char* t1271 = __it1269;
  __retval1270 = t1271;
  char* t1272 = __retval1270;
  return t1272;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1273, char* v1274, char* v1275) {
bb1276:
  char* __p1277;
  char* __k11278;
  char* __k21279;
  __p1277 = v1273;
  __k11278 = v1274;
  __k21279 = v1275;
    char* t1280 = __p1277;
    char* t1281 = __k11278;
    char* r1282 = char_const__std____niter_base_char_const__(t1281);
    char* t1283 = __k21279;
    char* t1284 = __k11278;
    long diff1285 = t1283 - t1284;
    unsigned long cast1286 = (unsigned long)diff1285;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1280, r1282, cast1286);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1287) {
bb1288:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1289;
  char* __retval1290;
  this1289 = v1287;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1291 = this1289;
  char* t1292 = t1291->_M_dataplus._M_p;
  __retval1290 = t1292;
  char* t1293 = __retval1290;
  return t1293;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1294, unsigned long v1295) {
bb1296:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1297;
  unsigned long __length1298;
  this1297 = v1294;
  __length1298 = v1295;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1299 = this1297;
  unsigned long t1300 = __length1298;
  t1299->_M_string_length = t1300;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1301, unsigned long v1302) {
bb1303:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1304;
  unsigned long __n1305;
  char ref_tmp01306;
  this1304 = v1301;
  __n1305 = v1302;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1307 = this1304;
  unsigned long t1308 = __n1305;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1307, t1308);
  unsigned long t1309 = __n1305;
  char* r1310 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1307);
  char* ptr1311 = &(r1310)[t1309];
  char c1312 = 0;
  ref_tmp01306 = c1312;
  std__char_traits_char___assign(ptr1311, &ref_tmp01306);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1313) {
bb1314:
  struct _Guard* this1315;
  this1315 = v1313;
  struct _Guard* t1316 = this1315;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1317 = t1316->_M_guarded;
    _Bool cast1318 = (_Bool)t1317;
    if (cast1318) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1319 = t1316->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1319);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1320, char* v1321, char* v1322, struct std__forward_iterator_tag v1323) {
bb1324:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1325;
  char* __beg1326;
  char* __end1327;
  struct std__forward_iterator_tag unnamed1328;
  unsigned long __dnew1329;
  struct _Guard __guard1330;
  this1325 = v1320;
  __beg1326 = v1321;
  __end1327 = v1322;
  unnamed1328 = v1323;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1331 = this1325;
  char* t1332 = __beg1326;
  char* t1333 = __end1327;
  long r1334 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1332, t1333);
  unsigned long cast1335 = (unsigned long)r1334;
  __dnew1329 = cast1335;
    unsigned long t1336 = __dnew1329;
    unsigned long c1337 = 15;
    _Bool c1338 = ((t1336 > c1337)) ? 1 : 0;
    if (c1338) {
      unsigned long c1339 = 0;
      char* r1340 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1331, &__dnew1329, c1339);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1331, r1340);
      unsigned long t1341 = __dnew1329;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1331, t1341);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1331);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1330, t1331);
    char* r1342 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1331);
    char* t1343 = __beg1326;
    char* t1344 = __end1327;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1342, t1343, t1344);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1345 = ((void*)0);
    __guard1330._M_guarded = c1345;
    unsigned long t1346 = __dnew1329;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1331, t1346);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1330);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1347) {
bb1348:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1349;
  this1349 = v1347;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1350 = this1349;
  {
    struct std__allocator_char_* base1351 = (struct std__allocator_char_*)((char *)t1350 + 0);
    std__allocator_char____allocator(base1351);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1352, struct std____new_allocator_char_* v1353) {
bb1354:
  struct std____new_allocator_char_* this1355;
  struct std____new_allocator_char_* unnamed1356;
  this1355 = v1352;
  unnamed1356 = v1353;
  struct std____new_allocator_char_* t1357 = this1355;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1358) {
bb1359:
  char* __r1360;
  char* __retval1361;
  __r1360 = v1358;
  char* t1362 = __r1360;
  __retval1361 = t1362;
  char* t1363 = __retval1361;
  return t1363;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1364) {
bb1365:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1366;
  char* __retval1367;
  this1366 = v1364;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1368 = this1366;
  char* cast1369 = (char*)&(t1368->field2._M_local_buf);
  char* r1370 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1369);
  __retval1367 = r1370;
  char* t1371 = __retval1367;
  return t1371;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1372) {
bb1373:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1374;
  _Bool __retval1375;
  this1374 = v1372;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1376 = this1374;
    char* r1377 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1376);
    char* r1378 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1376);
    _Bool c1379 = ((r1377 == r1378)) ? 1 : 0;
    if (c1379) {
        unsigned long t1380 = t1376->_M_string_length;
        unsigned long c1381 = 15;
        _Bool c1382 = ((t1380 > c1381)) ? 1 : 0;
        if (c1382) {
          __builtin_unreachable();
        }
      _Bool c1383 = 1;
      __retval1375 = c1383;
      _Bool t1384 = __retval1375;
      return t1384;
    }
  _Bool c1385 = 0;
  __retval1375 = c1385;
  _Bool t1386 = __retval1375;
  return t1386;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1387, char* v1388, unsigned long v1389) {
bb1390:
  struct std____new_allocator_char_* this1391;
  char* __p1392;
  unsigned long __n1393;
  this1391 = v1387;
  __p1392 = v1388;
  __n1393 = v1389;
  struct std____new_allocator_char_* t1394 = this1391;
    unsigned long c1395 = 1;
    unsigned long c1396 = 16;
    _Bool c1397 = ((c1395 > c1396)) ? 1 : 0;
    if (c1397) {
      char* t1398 = __p1392;
      void* cast1399 = (void*)t1398;
      unsigned long t1400 = __n1393;
      unsigned long c1401 = 1;
      unsigned long b1402 = t1400 * c1401;
      unsigned long c1403 = 1;
      operator_delete_3(cast1399, b1402, c1403);
      return;
    }
  char* t1404 = __p1392;
  void* cast1405 = (void*)t1404;
  unsigned long t1406 = __n1393;
  unsigned long c1407 = 1;
  unsigned long b1408 = t1406 * c1407;
  operator_delete_2(cast1405, b1408);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1409, char* v1410, unsigned long v1411) {
bb1412:
  struct std__allocator_char_* this1413;
  char* __p1414;
  unsigned long __n1415;
  this1413 = v1409;
  __p1414 = v1410;
  __n1415 = v1411;
  struct std__allocator_char_* t1416 = this1413;
    _Bool r1417 = std____is_constant_evaluated();
    if (r1417) {
      char* t1418 = __p1414;
      void* cast1419 = (void*)t1418;
      operator_delete(cast1419);
      return;
    }
  struct std____new_allocator_char_* base1420 = (struct std____new_allocator_char_*)((char *)t1416 + 0);
  char* t1421 = __p1414;
  unsigned long t1422 = __n1415;
  std____new_allocator_char___deallocate(base1420, t1421, t1422);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1423, char* v1424, unsigned long v1425) {
bb1426:
  struct std__allocator_char_* __a1427;
  char* __p1428;
  unsigned long __n1429;
  __a1427 = v1423;
  __p1428 = v1424;
  __n1429 = v1425;
  struct std__allocator_char_* t1430 = __a1427;
  char* t1431 = __p1428;
  unsigned long t1432 = __n1429;
  std__allocator_char___deallocate(t1430, t1431, t1432);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1433, unsigned long v1434) {
bb1435:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1436;
  unsigned long __size1437;
  this1436 = v1433;
  __size1437 = v1434;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1438 = this1436;
  struct std__allocator_char_* r1439 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1438);
  char* r1440 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1438);
  unsigned long t1441 = __size1437;
  unsigned long c1442 = 1;
  unsigned long b1443 = t1441 + c1442;
  std__allocator_traits_std__allocator_char_____deallocate(r1439, r1440, b1443);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1444) {
bb1445:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1446;
  this1446 = v1444;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1447 = this1446;
    _Bool r1448 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1447);
    _Bool u1449 = !r1448;
    if (u1449) {
      unsigned long t1450 = t1447->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1447, t1450);
    }
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1451, struct std__allocator_char_* v1452) {
bb1453:
  struct std__allocator_char_* this1454;
  struct std__allocator_char_* __a1455;
  this1454 = v1451;
  __a1455 = v1452;
  struct std__allocator_char_* t1456 = this1454;
  struct std____new_allocator_char_* base1457 = (struct std____new_allocator_char_*)((char *)t1456 + 0);
  struct std__allocator_char_* t1458 = __a1455;
  struct std____new_allocator_char_* base1459 = (struct std____new_allocator_char_*)((char *)t1458 + 0);
  std____new_allocator_char_____new_allocator(base1457, base1459);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v1460) {
bb1461:
  struct std__allocator_char_* __rhs1462;
  struct std__allocator_char_ __retval1463;
  __rhs1462 = v1460;
  struct std__allocator_char_* t1464 = __rhs1462;
  std__allocator_char___allocator(&__retval1463, t1464);
  struct std__allocator_char_ t1465 = __retval1463;
  return t1465;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v1466) {
bb1467:
  struct std__allocator_char_* __a1468;
  struct std__allocator_char_ __retval1469;
  __a1468 = v1466;
  struct std__allocator_char_* t1470 = __a1468;
  struct std__allocator_char_ r1471 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t1470);
  __retval1469 = r1471;
  struct std__allocator_char_ t1472 = __retval1469;
  return t1472;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1473, char* v1474, struct std__allocator_char_* v1475) {
bb1476:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1477;
  char* __dat1478;
  struct std__allocator_char_* __a1479;
  this1477 = v1473;
  __dat1478 = v1474;
  __a1479 = v1475;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1480 = this1477;
  struct std__allocator_char_* base1481 = (struct std__allocator_char_*)((char *)t1480 + 0);
  struct std__allocator_char_* t1482 = __a1479;
  std__allocator_char___allocator(base1481, t1482);
    char* t1483 = __dat1478;
    t1480->_M_p = t1483;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructILb1EEEvPKcm
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1484, char* v1485, unsigned long v1486) {
bb1487:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1488;
  char* __str1489;
  unsigned long __n1490;
  this1488 = v1484;
  __str1489 = v1485;
  __n1490 = v1486;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1491 = this1488;
    unsigned long t1492 = __n1490;
    unsigned long c1493 = 15;
    _Bool c1494 = ((t1492 > c1493)) ? 1 : 0;
    if (c1494) {
      unsigned long c1495 = 0;
      char* r1496 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1491, &__n1490, c1495);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1491, r1496);
      unsigned long t1497 = __n1490;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1491, t1497);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1491);
    }
    unsigned long t1498 = __n1490;
    _Bool cast1499 = (_Bool)t1498;
    _Bool ternary1500;
    if (cast1499) {
      _Bool c1501 = 1;
      ternary1500 = (_Bool)c1501;
    } else {
      _Bool c1502 = 1;
      ternary1500 = (_Bool)c1502;
    }
    if (ternary1500) {
      char* r1503 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1491);
      char* t1504 = __str1489;
      unsigned long t1505 = __n1490;
      _Bool c1506 = 1;
      unsigned long cast1507 = (unsigned long)c1506;
      unsigned long b1508 = t1505 + cast1507;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1503, t1504, b1508);
    }
  unsigned long t1509 = __n1490;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1491, t1509);
    _Bool c1510 = 0;
    if (c1510) {
      char ref_tmp01511;
      unsigned long t1512 = __n1490;
      char* r1513 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1491);
      char* ptr1514 = &(r1513)[t1512];
      char c1515 = 0;
      ref_tmp01511 = c1515;
      std__char_traits_char___assign(ptr1514, &ref_tmp01511);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1516) {
bb1517:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1518;
  unsigned long __retval1519;
  unsigned long __sz1520;
  this1518 = v1516;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1521 = this1518;
  unsigned long t1522 = t1521->_M_string_length;
  __sz1520 = t1522;
    unsigned long t1523 = __sz1520;
    unsigned long r1524 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1521);
    _Bool c1525 = ((t1523 > r1524)) ? 1 : 0;
    if (c1525) {
      __builtin_unreachable();
    }
  unsigned long t1526 = __sz1520;
  __retval1519 = t1526;
  unsigned long t1527 = __retval1519;
  return t1527;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1528) {
bb1529:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1530;
  unsigned long __retval1531;
  this1530 = v1528;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1532 = this1530;
  unsigned long r1533 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1532);
  __retval1531 = r1533;
  unsigned long t1534 = __retval1531;
  return t1534;
}

