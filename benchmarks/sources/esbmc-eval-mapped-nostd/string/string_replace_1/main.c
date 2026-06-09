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
char _str_6[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_replace_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_7[50] = "basic_string: construction from null is not valid";
char _str_8[24] = "basic_string::_M_create";
char _str_9[22] = "basic_string::replace";
char _str_10[25] = "basic_string::_M_replace";
char _str_11[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
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
        char* cast20 = (char*)&(_str_7);
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
  char* cast401 = (char*)&(_str_10);
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
      char* cast493 = (char*)&(_str_11);
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
  char* cast535 = (char*)&(_str_9);
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

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v659, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v660) {
bb661:
  struct std__basic_ostream_char__std__char_traits_char__* __os662;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str663;
  struct std__basic_ostream_char__std__char_traits_char__* __retval664;
  __os662 = v659;
  __str663 = v660;
  struct std__basic_ostream_char__std__char_traits_char__* t665 = __os662;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t666 = __str663;
  char* r667 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t666);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t668 = __str663;
  unsigned long r669 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t668);
  long cast670 = (long)r669;
  struct std__basic_ostream_char__std__char_traits_char__* r671 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t665, r667, cast670);
  __retval664 = r671;
  struct std__basic_ostream_char__std__char_traits_char__* t672 = __retval664;
  return t672;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v673, void* v674) {
bb675:
  struct std__basic_ostream_char__std__char_traits_char__* this676;
  void* __pf677;
  struct std__basic_ostream_char__std__char_traits_char__* __retval678;
  this676 = v673;
  __pf677 = v674;
  struct std__basic_ostream_char__std__char_traits_char__* t679 = this676;
  void* t680 = __pf677;
  struct std__basic_ostream_char__std__char_traits_char__* r681 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t680)(t679);
  __retval678 = r681;
  struct std__basic_ostream_char__std__char_traits_char__* t682 = __retval678;
  return t682;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v683) {
bb684:
  struct std__basic_ostream_char__std__char_traits_char__* __os685;
  struct std__basic_ostream_char__std__char_traits_char__* __retval686;
  __os685 = v683;
  struct std__basic_ostream_char__std__char_traits_char__* t687 = __os685;
  struct std__basic_ostream_char__std__char_traits_char__* r688 = std__ostream__flush(t687);
  __retval686 = r688;
  struct std__basic_ostream_char__std__char_traits_char__* t689 = __retval686;
  return t689;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v690) {
bb691:
  struct std__ctype_char_* __f692;
  struct std__ctype_char_* __retval693;
  __f692 = v690;
    struct std__ctype_char_* t694 = __f692;
    _Bool cast695 = (_Bool)t694;
    _Bool u696 = !cast695;
    if (u696) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t697 = __f692;
  __retval693 = t697;
  struct std__ctype_char_* t698 = __retval693;
  return t698;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v699, char v700) {
bb701:
  struct std__ctype_char_* this702;
  char __c703;
  char __retval704;
  this702 = v699;
  __c703 = v700;
  struct std__ctype_char_* t705 = this702;
    char t706 = t705->_M_widen_ok;
    _Bool cast707 = (_Bool)t706;
    if (cast707) {
      char t708 = __c703;
      unsigned char cast709 = (unsigned char)t708;
      unsigned long cast710 = (unsigned long)cast709;
      char t711 = t705->_M_widen[cast710];
      __retval704 = t711;
      char t712 = __retval704;
      return t712;
    }
  std__ctype_char____M_widen_init___const(t705);
  char t713 = __c703;
  void** v714 = (void**)t705;
  void* v715 = *((void**)v714);
  char vcall718 = (char)__VERIFIER_virtual_call_char_char(t705, 6, t713);
  __retval704 = vcall718;
  char t719 = __retval704;
  return t719;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v720, char v721) {
bb722:
  struct std__basic_ios_char__std__char_traits_char__* this723;
  char __c724;
  char __retval725;
  this723 = v720;
  __c724 = v721;
  struct std__basic_ios_char__std__char_traits_char__* t726 = this723;
  struct std__ctype_char_* t727 = t726->_M_ctype;
  struct std__ctype_char_* r728 = std__ctype_char__const__std____check_facet_std__ctype_char___(t727);
  char t729 = __c724;
  char r730 = std__ctype_char___widen_char__const(r728, t729);
  __retval725 = r730;
  char t731 = __retval725;
  return t731;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v732) {
bb733:
  struct std__basic_ostream_char__std__char_traits_char__* __os734;
  struct std__basic_ostream_char__std__char_traits_char__* __retval735;
  __os734 = v732;
  struct std__basic_ostream_char__std__char_traits_char__* t736 = __os734;
  struct std__basic_ostream_char__std__char_traits_char__* t737 = __os734;
  void** v738 = (void**)t737;
  void* v739 = *((void**)v738);
  unsigned char* cast740 = (unsigned char*)v739;
  long c741 = -24;
  unsigned char* ptr742 = &(cast740)[c741];
  long* cast743 = (long*)ptr742;
  long t744 = *cast743;
  unsigned char* cast745 = (unsigned char*)t737;
  unsigned char* ptr746 = &(cast745)[t744];
  struct std__basic_ostream_char__std__char_traits_char__* cast747 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr746;
  struct std__basic_ios_char__std__char_traits_char__* cast748 = (struct std__basic_ios_char__std__char_traits_char__*)cast747;
  char c749 = 10;
  char r750 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast748, c749);
  struct std__basic_ostream_char__std__char_traits_char__* r751 = std__ostream__put(t736, r750);
  struct std__basic_ostream_char__std__char_traits_char__* r752 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r751);
  __retval735 = r752;
  struct std__basic_ostream_char__std__char_traits_char__* t753 = __retval735;
  return t753;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v754) {
bb755:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this756;
  this756 = v754;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t757 = this756;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t757);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t757->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb758:
  int __retval759;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ base760;
  struct std__allocator_char_ ref_tmp0761;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2762;
  struct std__allocator_char_ ref_tmp1763;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3764;
  struct std__allocator_char_ ref_tmp2765;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str4766;
  struct std__allocator_char_ ref_tmp3767;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str768;
  int c769 = 0;
  __retval759 = c769;
  char* cast770 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0761);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&base760, cast770, &ref_tmp0761);
  {
    std__allocator_char____allocator(&ref_tmp0761);
  }
    char* cast771 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp1763);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str2762, cast771, &ref_tmp1763);
    {
      std__allocator_char____allocator(&ref_tmp1763);
    }
      char* cast772 = (char*)&(_str_2);
      std__allocator_char___allocator_2(&ref_tmp2765);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str3764, cast772, &ref_tmp2765);
      {
        std__allocator_char____allocator(&ref_tmp2765);
      }
        char* cast773 = (char*)&(_str_3);
        std__allocator_char___allocator_2(&ref_tmp3767);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str4766, cast773, &ref_tmp3767);
        {
          std__allocator_char____allocator(&ref_tmp3767);
        }
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&str768, &base760);
            unsigned long c774 = 9;
            unsigned long c775 = 5;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r776 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(&str768, c774, c775, &str2762);
            char* cast777 = (char*)&(_str_4);
            _Bool r778 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str768, cast777);
            if (r778) {
            } else {
              char* cast779 = (char*)&(_str_5);
              char* c780 = _str_6;
              unsigned int c781 = 27;
              char* cast782 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast779, c780, c781, cast782);
            }
            struct std__basic_ostream_char__std__char_traits_char__* r783 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str768);
            struct std__basic_ostream_char__std__char_traits_char__* r784 = std__ostream__operator___std__ostream_____(r783, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            int c785 = 0;
            __retval759 = c785;
            int t786 = __retval759;
            int ret_val787 = t786;
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str768);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str4766);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str3764);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2762);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&base760);
            }
            return ret_val787;
  int t788 = __retval759;
  return t788;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v789) {
bb790:
  struct std____new_allocator_char_* this791;
  this791 = v789;
  struct std____new_allocator_char_* t792 = this791;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v793) {
bb794:
  char* __r795;
  char* __retval796;
  __r795 = v793;
  char* t797 = __r795;
  __retval796 = t797;
  char* t798 = __retval796;
  return t798;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v799) {
bb800:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this801;
  char* __retval802;
  this801 = v799;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t803 = this801;
  char* cast804 = (char*)&(t803->field2._M_local_buf);
  char* r805 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast804);
  __retval802 = r805;
  char* t806 = __retval802;
  return t806;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v807, char* v808, struct std__allocator_char_* v809) {
bb810:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this811;
  char* __dat812;
  struct std__allocator_char_* __a813;
  this811 = v807;
  __dat812 = v808;
  __a813 = v809;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t814 = this811;
  struct std__allocator_char_* base815 = (struct std__allocator_char_*)((char *)t814 + 0);
  struct std__allocator_char_* t816 = __a813;
  std__allocator_char___allocator(base815, t816);
    char* t817 = __dat812;
    t814->_M_p = t817;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb818:
  _Bool __retval819;
    _Bool c820 = 0;
    __retval819 = c820;
    _Bool t821 = __retval819;
    return t821;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v822, char* v823) {
bb824:
  char* __c1825;
  char* __c2826;
  _Bool __retval827;
  __c1825 = v822;
  __c2826 = v823;
  char* t828 = __c1825;
  char t829 = *t828;
  int cast830 = (int)t829;
  char* t831 = __c2826;
  char t832 = *t831;
  int cast833 = (int)t832;
  _Bool c834 = ((cast830 == cast833)) ? 1 : 0;
  __retval827 = c834;
  _Bool t835 = __retval827;
  return t835;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v836) {
bb837:
  char* __p838;
  unsigned long __retval839;
  unsigned long __i840;
  __p838 = v836;
  unsigned long c841 = 0;
  __i840 = c841;
    char ref_tmp0842;
    while (1) {
      unsigned long t843 = __i840;
      char* t844 = __p838;
      char* ptr845 = &(t844)[t843];
      char c846 = 0;
      ref_tmp0842 = c846;
      _Bool r847 = __gnu_cxx__char_traits_char___eq(ptr845, &ref_tmp0842);
      _Bool u848 = !r847;
      if (!u848) break;
      unsigned long t849 = __i840;
      unsigned long u850 = t849 + 1;
      __i840 = u850;
    }
  unsigned long t851 = __i840;
  __retval839 = t851;
  unsigned long t852 = __retval839;
  return t852;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v853) {
bb854:
  char* __s855;
  unsigned long __retval856;
  __s855 = v853;
    _Bool r857 = std____is_constant_evaluated();
    if (r857) {
      char* t858 = __s855;
      unsigned long r859 = __gnu_cxx__char_traits_char___length(t858);
      __retval856 = r859;
      unsigned long t860 = __retval856;
      return t860;
    }
  char* t861 = __s855;
  unsigned long r862 = strlen(t861);
  __retval856 = r862;
  unsigned long t863 = __retval856;
  return t863;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v864, char* v865, struct std__random_access_iterator_tag v866) {
bb867:
  char* __first868;
  char* __last869;
  struct std__random_access_iterator_tag unnamed870;
  long __retval871;
  __first868 = v864;
  __last869 = v865;
  unnamed870 = v866;
  char* t872 = __last869;
  char* t873 = __first868;
  long diff874 = t872 - t873;
  __retval871 = diff874;
  long t875 = __retval871;
  return t875;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v876) {
bb877:
  char** unnamed878;
  struct std__random_access_iterator_tag __retval879;
  unnamed878 = v876;
  struct std__random_access_iterator_tag t880 = __retval879;
  return t880;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v881, char* v882) {
bb883:
  char* __first884;
  char* __last885;
  long __retval886;
  struct std__random_access_iterator_tag agg_tmp0887;
  __first884 = v881;
  __last885 = v882;
  char* t888 = __first884;
  char* t889 = __last885;
  struct std__random_access_iterator_tag r890 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first884);
  agg_tmp0887 = r890;
  struct std__random_access_iterator_tag t891 = agg_tmp0887;
  long r892 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t888, t889, t891);
  __retval886 = r892;
  long t893 = __retval886;
  return t893;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v894, char* v895) {
bb896:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this897;
  char* __p898;
  this897 = v894;
  __p898 = v895;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t899 = this897;
  char* t900 = __p898;
  t899->_M_dataplus._M_p = t900;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v901) {
bb902:
  struct std__allocator_char_* __a903;
  unsigned long __retval904;
  __a903 = v901;
  unsigned long c905 = -1;
  unsigned long c906 = 1;
  unsigned long b907 = c905 / c906;
  __retval904 = b907;
  unsigned long t908 = __retval904;
  return t908;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v909) {
bb910:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this911;
  struct std__allocator_char_* __retval912;
  this911 = v909;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t913 = this911;
  struct std__allocator_char_* base914 = (struct std__allocator_char_*)((char *)&(t913->_M_dataplus) + 0);
  __retval912 = base914;
  struct std__allocator_char_* t915 = __retval912;
  return t915;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v916, unsigned long* v917) {
bb918:
  unsigned long* __a919;
  unsigned long* __b920;
  unsigned long* __retval921;
  __a919 = v916;
  __b920 = v917;
    unsigned long* t922 = __b920;
    unsigned long t923 = *t922;
    unsigned long* t924 = __a919;
    unsigned long t925 = *t924;
    _Bool c926 = ((t923 < t925)) ? 1 : 0;
    if (c926) {
      unsigned long* t927 = __b920;
      __retval921 = t927;
      unsigned long* t928 = __retval921;
      return t928;
    }
  unsigned long* t929 = __a919;
  __retval921 = t929;
  unsigned long* t930 = __retval921;
  return t930;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v931) {
bb932:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this933;
  unsigned long __retval934;
  unsigned long __diffmax935;
  unsigned long __allocmax936;
  this933 = v931;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t937 = this933;
  unsigned long c938 = 9223372036854775807;
  __diffmax935 = c938;
  struct std__allocator_char_* r939 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t937);
  unsigned long r940 = std__allocator_traits_std__allocator_char_____max_size(r939);
  __allocmax936 = r940;
  unsigned long* r941 = unsigned_long_const__std__min_unsigned_long_(&__diffmax935, &__allocmax936);
  unsigned long t942 = *r941;
  unsigned long c943 = 1;
  unsigned long b944 = t942 - c943;
  __retval934 = b944;
  unsigned long t945 = __retval934;
  return t945;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v946) {
bb947:
  struct std____new_allocator_char_* this948;
  unsigned long __retval949;
  this948 = v946;
  struct std____new_allocator_char_* t950 = this948;
  unsigned long c951 = 9223372036854775807;
  unsigned long c952 = 1;
  unsigned long b953 = c951 / c952;
  __retval949 = b953;
  unsigned long t954 = __retval949;
  return t954;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v955, unsigned long v956, void* v957) {
bb958:
  struct std____new_allocator_char_* this959;
  unsigned long __n960;
  void* unnamed961;
  char* __retval962;
  this959 = v955;
  __n960 = v956;
  unnamed961 = v957;
  struct std____new_allocator_char_* t963 = this959;
    unsigned long t964 = __n960;
    unsigned long r965 = std____new_allocator_char____M_max_size___const(t963);
    _Bool c966 = ((t964 > r965)) ? 1 : 0;
    if (c966) {
        unsigned long t967 = __n960;
        unsigned long c968 = -1;
        unsigned long c969 = 1;
        unsigned long b970 = c968 / c969;
        _Bool c971 = ((t967 > b970)) ? 1 : 0;
        if (c971) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c972 = 1;
    unsigned long c973 = 16;
    _Bool c974 = ((c972 > c973)) ? 1 : 0;
    if (c974) {
      unsigned long __al975;
      unsigned long c976 = 1;
      __al975 = c976;
      unsigned long t977 = __n960;
      unsigned long c978 = 1;
      unsigned long b979 = t977 * c978;
      unsigned long t980 = __al975;
      void* r981 = operator_new_2(b979, t980);
      char* cast982 = (char*)r981;
      __retval962 = cast982;
      char* t983 = __retval962;
      return t983;
    }
  unsigned long t984 = __n960;
  unsigned long c985 = 1;
  unsigned long b986 = t984 * c985;
  void* r987 = operator_new(b986);
  char* cast988 = (char*)r987;
  __retval962 = cast988;
  char* t989 = __retval962;
  return t989;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v990, unsigned long v991) {
bb992:
  struct std__allocator_char_* this993;
  unsigned long __n994;
  char* __retval995;
  this993 = v990;
  __n994 = v991;
  struct std__allocator_char_* t996 = this993;
    _Bool r997 = std____is_constant_evaluated();
    if (r997) {
        unsigned long t998 = __n994;
        unsigned long c999 = 1;
        unsigned long ovr1000;
        _Bool ovf1001 = __builtin_mul_overflow(t998, c999, &ovr1000);
        __n994 = ovr1000;
        if (ovf1001) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1002 = __n994;
      void* r1003 = operator_new(t1002);
      char* cast1004 = (char*)r1003;
      __retval995 = cast1004;
      char* t1005 = __retval995;
      return t1005;
    }
  struct std____new_allocator_char_* base1006 = (struct std____new_allocator_char_*)((char *)t996 + 0);
  unsigned long t1007 = __n994;
  void* c1008 = ((void*)0);
  char* r1009 = std____new_allocator_char___allocate(base1006, t1007, c1008);
  __retval995 = r1009;
  char* t1010 = __retval995;
  return t1010;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1011, unsigned long v1012) {
bb1013:
  struct std__allocator_char_* __a1014;
  unsigned long __n1015;
  char* __retval1016;
  __a1014 = v1011;
  __n1015 = v1012;
  struct std__allocator_char_* t1017 = __a1014;
  unsigned long t1018 = __n1015;
  char* r1019 = std__allocator_char___allocate(t1017, t1018);
  __retval1016 = r1019;
  char* t1020 = __retval1016;
  return t1020;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1021, unsigned long v1022) {
bb1023:
  struct std__allocator_char_* __a1024;
  unsigned long __n1025;
  char* __retval1026;
  char* __p1027;
  __a1024 = v1021;
  __n1025 = v1022;
  struct std__allocator_char_* t1028 = __a1024;
  unsigned long t1029 = __n1025;
  char* r1030 = std__allocator_traits_std__allocator_char_____allocate(t1028, t1029);
  __p1027 = r1030;
  char* t1031 = __p1027;
  __retval1026 = t1031;
  char* t1032 = __retval1026;
  return t1032;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1033) {
bb1034:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1035;
  struct std__allocator_char_* __retval1036;
  this1035 = v1033;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1037 = this1035;
  struct std__allocator_char_* base1038 = (struct std__allocator_char_*)((char *)&(t1037->_M_dataplus) + 0);
  __retval1036 = base1038;
  struct std__allocator_char_* t1039 = __retval1036;
  return t1039;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1040, unsigned long* v1041, unsigned long v1042) {
bb1043:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1044;
  unsigned long* __capacity1045;
  unsigned long __old_capacity1046;
  char* __retval1047;
  this1044 = v1040;
  __capacity1045 = v1041;
  __old_capacity1046 = v1042;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1048 = this1044;
    unsigned long* t1049 = __capacity1045;
    unsigned long t1050 = *t1049;
    unsigned long r1051 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1048);
    _Bool c1052 = ((t1050 > r1051)) ? 1 : 0;
    if (c1052) {
      char* cast1053 = (char*)&(_str_8);
      std____throw_length_error(cast1053);
    }
    unsigned long* t1054 = __capacity1045;
    unsigned long t1055 = *t1054;
    unsigned long t1056 = __old_capacity1046;
    _Bool c1057 = ((t1055 > t1056)) ? 1 : 0;
    _Bool ternary1058;
    if (c1057) {
      unsigned long* t1059 = __capacity1045;
      unsigned long t1060 = *t1059;
      unsigned long c1061 = 2;
      unsigned long t1062 = __old_capacity1046;
      unsigned long b1063 = c1061 * t1062;
      _Bool c1064 = ((t1060 < b1063)) ? 1 : 0;
      ternary1058 = (_Bool)c1064;
    } else {
      _Bool c1065 = 0;
      ternary1058 = (_Bool)c1065;
    }
    if (ternary1058) {
      unsigned long c1066 = 2;
      unsigned long t1067 = __old_capacity1046;
      unsigned long b1068 = c1066 * t1067;
      unsigned long* t1069 = __capacity1045;
      *t1069 = b1068;
        unsigned long* t1070 = __capacity1045;
        unsigned long t1071 = *t1070;
        unsigned long r1072 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1048);
        _Bool c1073 = ((t1071 > r1072)) ? 1 : 0;
        if (c1073) {
          unsigned long r1074 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1048);
          unsigned long* t1075 = __capacity1045;
          *t1075 = r1074;
        }
    }
  struct std__allocator_char_* r1076 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1048);
  unsigned long* t1077 = __capacity1045;
  unsigned long t1078 = *t1077;
  unsigned long c1079 = 1;
  unsigned long b1080 = t1078 + c1079;
  char* r1081 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1076, b1080);
  __retval1047 = r1081;
  char* t1082 = __retval1047;
  return t1082;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1083, unsigned long v1084) {
bb1085:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1086;
  unsigned long __capacity1087;
  this1086 = v1083;
  __capacity1087 = v1084;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1088 = this1086;
  unsigned long t1089 = __capacity1087;
  t1088->field2._M_allocated_capacity = t1089;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1090:
  _Bool __retval1091;
    _Bool c1092 = 0;
    __retval1091 = c1092;
    _Bool t1093 = __retval1091;
    return t1093;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1094) {
bb1095:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1096;
  this1096 = v1094;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1097 = this1096;
    _Bool r1098 = std__is_constant_evaluated();
    if (r1098) {
        unsigned long __i1099;
        unsigned long c1100 = 0;
        __i1099 = c1100;
        while (1) {
          unsigned long t1102 = __i1099;
          unsigned long c1103 = 15;
          _Bool c1104 = ((t1102 <= c1103)) ? 1 : 0;
          if (!c1104) break;
          char c1105 = 0;
          unsigned long t1106 = __i1099;
          t1097->field2._M_local_buf[t1106] = c1105;
        for_step1101: ;
          unsigned long t1107 = __i1099;
          unsigned long u1108 = t1107 + 1;
          __i1099 = u1108;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1109, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1110) {
bb1111:
  struct _Guard* this1112;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1113;
  this1112 = v1109;
  __s1113 = v1110;
  struct _Guard* t1114 = this1112;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1115 = __s1113;
  t1114->_M_guarded = t1115;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1116, char* v1117) {
bb1118:
  char* __location1119;
  char* __args1120;
  char* __retval1121;
  void* __loc1122;
  __location1119 = v1116;
  __args1120 = v1117;
  char* t1123 = __location1119;
  void* cast1124 = (void*)t1123;
  __loc1122 = cast1124;
    void* t1125 = __loc1122;
    char* cast1126 = (char*)t1125;
    char* t1127 = __args1120;
    char t1128 = *t1127;
    *cast1126 = t1128;
    __retval1121 = cast1126;
    char* t1129 = __retval1121;
    return t1129;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1130, char* v1131) {
bb1132:
  char* __c11133;
  char* __c21134;
  __c11133 = v1130;
  __c21134 = v1131;
    _Bool r1135 = std____is_constant_evaluated();
    if (r1135) {
      char* t1136 = __c11133;
      char* t1137 = __c21134;
      char* r1138 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1136, t1137);
    } else {
      char* t1139 = __c21134;
      char t1140 = *t1139;
      char* t1141 = __c11133;
      *t1141 = t1140;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1142, char* v1143, unsigned long v1144) {
bb1145:
  char* __s11146;
  char* __s21147;
  unsigned long __n1148;
  char* __retval1149;
  __s11146 = v1142;
  __s21147 = v1143;
  __n1148 = v1144;
    unsigned long t1150 = __n1148;
    unsigned long c1151 = 0;
    _Bool c1152 = ((t1150 == c1151)) ? 1 : 0;
    if (c1152) {
      char* t1153 = __s11146;
      __retval1149 = t1153;
      char* t1154 = __retval1149;
      return t1154;
    }
    _Bool r1155 = std____is_constant_evaluated();
    if (r1155) {
        unsigned long __i1156;
        unsigned long c1157 = 0;
        __i1156 = c1157;
        while (1) {
          unsigned long t1159 = __i1156;
          unsigned long t1160 = __n1148;
          _Bool c1161 = ((t1159 < t1160)) ? 1 : 0;
          if (!c1161) break;
          char* t1162 = __s11146;
          unsigned long t1163 = __i1156;
          char* ptr1164 = &(t1162)[t1163];
          unsigned long t1165 = __i1156;
          char* t1166 = __s21147;
          char* ptr1167 = &(t1166)[t1165];
          char* r1168 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1164, ptr1167);
        for_step1158: ;
          unsigned long t1169 = __i1156;
          unsigned long u1170 = t1169 + 1;
          __i1156 = u1170;
        }
      char* t1171 = __s11146;
      __retval1149 = t1171;
      char* t1172 = __retval1149;
      return t1172;
    }
  char* t1173 = __s11146;
  void* cast1174 = (void*)t1173;
  char* t1175 = __s21147;
  void* cast1176 = (void*)t1175;
  unsigned long t1177 = __n1148;
  unsigned long c1178 = 1;
  unsigned long b1179 = t1177 * c1178;
  void* r1180 = memcpy(cast1174, cast1176, b1179);
  char* t1181 = __s11146;
  __retval1149 = t1181;
  char* t1182 = __retval1149;
  return t1182;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1183, char* v1184, unsigned long v1185) {
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
      char* t1197 = __s11187;
      char* t1198 = __s21188;
      unsigned long t1199 = __n1189;
      char* r1200 = __gnu_cxx__char_traits_char___copy(t1197, t1198, t1199);
      __retval1190 = r1200;
      char* t1201 = __retval1190;
      return t1201;
    }
  char* t1202 = __s11187;
  void* cast1203 = (void*)t1202;
  char* t1204 = __s21188;
  void* cast1205 = (void*)t1204;
  unsigned long t1206 = __n1189;
  void* r1207 = memcpy(cast1203, cast1205, t1206);
  char* cast1208 = (char*)r1207;
  __retval1190 = cast1208;
  char* t1209 = __retval1190;
  return t1209;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1210, char* v1211, unsigned long v1212) {
bb1213:
  char* __d1214;
  char* __s1215;
  unsigned long __n1216;
  __d1214 = v1210;
  __s1215 = v1211;
  __n1216 = v1212;
    unsigned long t1217 = __n1216;
    unsigned long c1218 = 1;
    _Bool c1219 = ((t1217 == c1218)) ? 1 : 0;
    if (c1219) {
      char* t1220 = __d1214;
      char* t1221 = __s1215;
      std__char_traits_char___assign(t1220, t1221);
    } else {
      char* t1222 = __d1214;
      char* t1223 = __s1215;
      unsigned long t1224 = __n1216;
      char* r1225 = std__char_traits_char___copy(t1222, t1223, t1224);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1226) {
bb1227:
  char* __it1228;
  char* __retval1229;
  __it1228 = v1226;
  char* t1230 = __it1228;
  __retval1229 = t1230;
  char* t1231 = __retval1229;
  return t1231;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1232, char* v1233, char* v1234) {
bb1235:
  char* __p1236;
  char* __k11237;
  char* __k21238;
  __p1236 = v1232;
  __k11237 = v1233;
  __k21238 = v1234;
    char* t1239 = __p1236;
    char* t1240 = __k11237;
    char* r1241 = char_const__std____niter_base_char_const__(t1240);
    char* t1242 = __k21238;
    char* t1243 = __k11237;
    long diff1244 = t1242 - t1243;
    unsigned long cast1245 = (unsigned long)diff1244;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1239, r1241, cast1245);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1246) {
bb1247:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1248;
  char* __retval1249;
  this1248 = v1246;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1250 = this1248;
  char* t1251 = t1250->_M_dataplus._M_p;
  __retval1249 = t1251;
  char* t1252 = __retval1249;
  return t1252;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1253, unsigned long v1254) {
bb1255:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1256;
  unsigned long __length1257;
  this1256 = v1253;
  __length1257 = v1254;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1258 = this1256;
  unsigned long t1259 = __length1257;
  t1258->_M_string_length = t1259;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1260, unsigned long v1261) {
bb1262:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1263;
  unsigned long __n1264;
  char ref_tmp01265;
  this1263 = v1260;
  __n1264 = v1261;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1266 = this1263;
  unsigned long t1267 = __n1264;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1266, t1267);
  unsigned long t1268 = __n1264;
  char* r1269 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1266);
  char* ptr1270 = &(r1269)[t1268];
  char c1271 = 0;
  ref_tmp01265 = c1271;
  std__char_traits_char___assign(ptr1270, &ref_tmp01265);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1272) {
bb1273:
  struct _Guard* this1274;
  this1274 = v1272;
  struct _Guard* t1275 = this1274;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1276 = t1275->_M_guarded;
    _Bool cast1277 = (_Bool)t1276;
    if (cast1277) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1278 = t1275->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1278);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1279, char* v1280, char* v1281, struct std__forward_iterator_tag v1282) {
bb1283:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1284;
  char* __beg1285;
  char* __end1286;
  struct std__forward_iterator_tag unnamed1287;
  unsigned long __dnew1288;
  struct _Guard __guard1289;
  this1284 = v1279;
  __beg1285 = v1280;
  __end1286 = v1281;
  unnamed1287 = v1282;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1290 = this1284;
  char* t1291 = __beg1285;
  char* t1292 = __end1286;
  long r1293 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1291, t1292);
  unsigned long cast1294 = (unsigned long)r1293;
  __dnew1288 = cast1294;
    unsigned long t1295 = __dnew1288;
    unsigned long c1296 = 15;
    _Bool c1297 = ((t1295 > c1296)) ? 1 : 0;
    if (c1297) {
      unsigned long c1298 = 0;
      char* r1299 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1290, &__dnew1288, c1298);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1290, r1299);
      unsigned long t1300 = __dnew1288;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1290, t1300);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1290);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1289, t1290);
    char* r1301 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1290);
    char* t1302 = __beg1285;
    char* t1303 = __end1286;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1301, t1302, t1303);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1304 = ((void*)0);
    __guard1289._M_guarded = c1304;
    unsigned long t1305 = __dnew1288;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1290, t1305);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1289);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1306) {
bb1307:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1308;
  this1308 = v1306;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1309 = this1308;
  {
    struct std__allocator_char_* base1310 = (struct std__allocator_char_*)((char *)t1309 + 0);
    std__allocator_char____allocator(base1310);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1311, struct std____new_allocator_char_* v1312) {
bb1313:
  struct std____new_allocator_char_* this1314;
  struct std____new_allocator_char_* unnamed1315;
  this1314 = v1311;
  unnamed1315 = v1312;
  struct std____new_allocator_char_* t1316 = this1314;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1317) {
bb1318:
  char* __r1319;
  char* __retval1320;
  __r1319 = v1317;
  char* t1321 = __r1319;
  __retval1320 = t1321;
  char* t1322 = __retval1320;
  return t1322;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1323) {
bb1324:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1325;
  char* __retval1326;
  this1325 = v1323;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1327 = this1325;
  char* cast1328 = (char*)&(t1327->field2._M_local_buf);
  char* r1329 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1328);
  __retval1326 = r1329;
  char* t1330 = __retval1326;
  return t1330;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1331) {
bb1332:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1333;
  _Bool __retval1334;
  this1333 = v1331;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1335 = this1333;
    char* r1336 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1335);
    char* r1337 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1335);
    _Bool c1338 = ((r1336 == r1337)) ? 1 : 0;
    if (c1338) {
        unsigned long t1339 = t1335->_M_string_length;
        unsigned long c1340 = 15;
        _Bool c1341 = ((t1339 > c1340)) ? 1 : 0;
        if (c1341) {
          __builtin_unreachable();
        }
      _Bool c1342 = 1;
      __retval1334 = c1342;
      _Bool t1343 = __retval1334;
      return t1343;
    }
  _Bool c1344 = 0;
  __retval1334 = c1344;
  _Bool t1345 = __retval1334;
  return t1345;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1346, char* v1347, unsigned long v1348) {
bb1349:
  struct std____new_allocator_char_* this1350;
  char* __p1351;
  unsigned long __n1352;
  this1350 = v1346;
  __p1351 = v1347;
  __n1352 = v1348;
  struct std____new_allocator_char_* t1353 = this1350;
    unsigned long c1354 = 1;
    unsigned long c1355 = 16;
    _Bool c1356 = ((c1354 > c1355)) ? 1 : 0;
    if (c1356) {
      char* t1357 = __p1351;
      void* cast1358 = (void*)t1357;
      unsigned long t1359 = __n1352;
      unsigned long c1360 = 1;
      unsigned long b1361 = t1359 * c1360;
      unsigned long c1362 = 1;
      operator_delete_3(cast1358, b1361, c1362);
      return;
    }
  char* t1363 = __p1351;
  void* cast1364 = (void*)t1363;
  unsigned long t1365 = __n1352;
  unsigned long c1366 = 1;
  unsigned long b1367 = t1365 * c1366;
  operator_delete_2(cast1364, b1367);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1368, char* v1369, unsigned long v1370) {
bb1371:
  struct std__allocator_char_* this1372;
  char* __p1373;
  unsigned long __n1374;
  this1372 = v1368;
  __p1373 = v1369;
  __n1374 = v1370;
  struct std__allocator_char_* t1375 = this1372;
    _Bool r1376 = std____is_constant_evaluated();
    if (r1376) {
      char* t1377 = __p1373;
      void* cast1378 = (void*)t1377;
      operator_delete(cast1378);
      return;
    }
  struct std____new_allocator_char_* base1379 = (struct std____new_allocator_char_*)((char *)t1375 + 0);
  char* t1380 = __p1373;
  unsigned long t1381 = __n1374;
  std____new_allocator_char___deallocate(base1379, t1380, t1381);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1382, char* v1383, unsigned long v1384) {
bb1385:
  struct std__allocator_char_* __a1386;
  char* __p1387;
  unsigned long __n1388;
  __a1386 = v1382;
  __p1387 = v1383;
  __n1388 = v1384;
  struct std__allocator_char_* t1389 = __a1386;
  char* t1390 = __p1387;
  unsigned long t1391 = __n1388;
  std__allocator_char___deallocate(t1389, t1390, t1391);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1392, unsigned long v1393) {
bb1394:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1395;
  unsigned long __size1396;
  this1395 = v1392;
  __size1396 = v1393;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1397 = this1395;
  struct std__allocator_char_* r1398 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1397);
  char* r1399 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1397);
  unsigned long t1400 = __size1396;
  unsigned long c1401 = 1;
  unsigned long b1402 = t1400 + c1401;
  std__allocator_traits_std__allocator_char_____deallocate(r1398, r1399, b1402);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1403) {
bb1404:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1405;
  this1405 = v1403;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1406 = this1405;
    _Bool r1407 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1406);
    _Bool u1408 = !r1407;
    if (u1408) {
      unsigned long t1409 = t1406->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1406, t1409);
    }
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1410, struct std__allocator_char_* v1411) {
bb1412:
  struct std__allocator_char_* this1413;
  struct std__allocator_char_* __a1414;
  this1413 = v1410;
  __a1414 = v1411;
  struct std__allocator_char_* t1415 = this1413;
  struct std____new_allocator_char_* base1416 = (struct std____new_allocator_char_*)((char *)t1415 + 0);
  struct std__allocator_char_* t1417 = __a1414;
  struct std____new_allocator_char_* base1418 = (struct std____new_allocator_char_*)((char *)t1417 + 0);
  std____new_allocator_char_____new_allocator(base1416, base1418);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v1419) {
bb1420:
  struct std__allocator_char_* __rhs1421;
  struct std__allocator_char_ __retval1422;
  __rhs1421 = v1419;
  struct std__allocator_char_* t1423 = __rhs1421;
  std__allocator_char___allocator(&__retval1422, t1423);
  struct std__allocator_char_ t1424 = __retval1422;
  return t1424;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v1425) {
bb1426:
  struct std__allocator_char_* __a1427;
  struct std__allocator_char_ __retval1428;
  __a1427 = v1425;
  struct std__allocator_char_* t1429 = __a1427;
  struct std__allocator_char_ r1430 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t1429);
  __retval1428 = r1430;
  struct std__allocator_char_ t1431 = __retval1428;
  return t1431;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1432, char* v1433, struct std__allocator_char_* v1434) {
bb1435:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1436;
  char* __dat1437;
  struct std__allocator_char_* __a1438;
  this1436 = v1432;
  __dat1437 = v1433;
  __a1438 = v1434;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1439 = this1436;
  struct std__allocator_char_* base1440 = (struct std__allocator_char_*)((char *)t1439 + 0);
  struct std__allocator_char_* t1441 = __a1438;
  std__allocator_char___allocator(base1440, t1441);
    char* t1442 = __dat1437;
    t1439->_M_p = t1442;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructILb1EEEvPKcm
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1443, char* v1444, unsigned long v1445) {
bb1446:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1447;
  char* __str1448;
  unsigned long __n1449;
  this1447 = v1443;
  __str1448 = v1444;
  __n1449 = v1445;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1450 = this1447;
    unsigned long t1451 = __n1449;
    unsigned long c1452 = 15;
    _Bool c1453 = ((t1451 > c1452)) ? 1 : 0;
    if (c1453) {
      unsigned long c1454 = 0;
      char* r1455 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1450, &__n1449, c1454);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1450, r1455);
      unsigned long t1456 = __n1449;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1450, t1456);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1450);
    }
    unsigned long t1457 = __n1449;
    _Bool cast1458 = (_Bool)t1457;
    _Bool ternary1459;
    if (cast1458) {
      _Bool c1460 = 1;
      ternary1459 = (_Bool)c1460;
    } else {
      _Bool c1461 = 1;
      ternary1459 = (_Bool)c1461;
    }
    if (ternary1459) {
      char* r1462 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1450);
      char* t1463 = __str1448;
      unsigned long t1464 = __n1449;
      _Bool c1465 = 1;
      unsigned long cast1466 = (unsigned long)c1465;
      unsigned long b1467 = t1464 + cast1466;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1462, t1463, b1467);
    }
  unsigned long t1468 = __n1449;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1450, t1468);
    _Bool c1469 = 0;
    if (c1469) {
      char ref_tmp01470;
      unsigned long t1471 = __n1449;
      char* r1472 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1450);
      char* ptr1473 = &(r1472)[t1471];
      char c1474 = 0;
      ref_tmp01470 = c1474;
      std__char_traits_char___assign(ptr1473, &ref_tmp01470);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1475) {
bb1476:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1477;
  unsigned long __retval1478;
  unsigned long __sz1479;
  this1477 = v1475;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1480 = this1477;
  unsigned long t1481 = t1480->_M_string_length;
  __sz1479 = t1481;
    unsigned long t1482 = __sz1479;
    unsigned long r1483 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1480);
    _Bool c1484 = ((t1482 > r1483)) ? 1 : 0;
    if (c1484) {
      __builtin_unreachable();
    }
  unsigned long t1485 = __sz1479;
  __retval1478 = t1485;
  unsigned long t1486 = __retval1478;
  return t1486;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1487) {
bb1488:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1489;
  unsigned long __retval1490;
  this1489 = v1487;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1491 = this1489;
  unsigned long r1492 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1491);
  __retval1490 = r1492;
  unsigned long t1493 = __retval1490;
  return t1493;
}

