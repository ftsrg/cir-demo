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
char _str_6[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_replace_11_bug/main.cpp";
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v47, unsigned long v48, unsigned long v49, char* v50) {
bb51: ;
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
bb66: ;
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
bb88: ;
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
bb107: ;
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
bb127: ;
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
bb140: ;
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
bb197: ;
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
bb224: ;
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
bb243: ;
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
bb331: ;
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
bb389: ;
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
bb484: ;
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
bb502: ;
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
bb526: ;
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
bb548: ;
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
bb565: ;
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
bb582: ;
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
bb631: ;
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
bb639: ;
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
bb661: ;
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
bb675: ;
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
bb684: ;
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
bb691: ;
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
bb701: ;
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
bb722: ;
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
bb733: ;
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
bb755: ;
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
bb758: ;
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
            _Bool u779 = !r778;
            if (u779) {
            } else {
              char* cast780 = (char*)&(_str_5);
              char* c781 = (char*)_str_6;
              unsigned int c782 = 28;
              char* cast783 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast780, c781, c782, cast783);
            }
            struct std__basic_ostream_char__std__char_traits_char__* r784 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str768);
            struct std__basic_ostream_char__std__char_traits_char__* r785 = std__ostream__operator___std__ostream_____(r784, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            int c786 = 0;
            __retval759 = c786;
            int t787 = __retval759;
            int ret_val788 = t787;
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
            return ret_val788;
  int t789 = __retval759;
  return t789;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v790) {
bb791: ;
  struct std____new_allocator_char_* this792;
  this792 = v790;
  struct std____new_allocator_char_* t793 = this792;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v794) {
bb795: ;
  char* __r796;
  char* __retval797;
  __r796 = v794;
  char* t798 = __r796;
  __retval797 = t798;
  char* t799 = __retval797;
  return t799;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v800) {
bb801: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this802;
  char* __retval803;
  this802 = v800;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t804 = this802;
  char* cast805 = (char*)&(t804->field2._M_local_buf);
  char* r806 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast805);
  __retval803 = r806;
  char* t807 = __retval803;
  return t807;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v808, char* v809, struct std__allocator_char_* v810) {
bb811: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this812;
  char* __dat813;
  struct std__allocator_char_* __a814;
  this812 = v808;
  __dat813 = v809;
  __a814 = v810;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t815 = this812;
  struct std__allocator_char_* base816 = (struct std__allocator_char_*)((char *)t815 + 0);
  struct std__allocator_char_* t817 = __a814;
  std__allocator_char___allocator(base816, t817);
    char* t818 = __dat813;
    t815->_M_p = t818;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb819: ;
  _Bool __retval820;
    _Bool c821 = 0;
    __retval820 = c821;
    _Bool t822 = __retval820;
    return t822;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v823, char* v824) {
bb825: ;
  char* __c1826;
  char* __c2827;
  _Bool __retval828;
  __c1826 = v823;
  __c2827 = v824;
  char* t829 = __c1826;
  char t830 = *t829;
  int cast831 = (int)t830;
  char* t832 = __c2827;
  char t833 = *t832;
  int cast834 = (int)t833;
  _Bool c835 = ((cast831 == cast834)) ? 1 : 0;
  __retval828 = c835;
  _Bool t836 = __retval828;
  return t836;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v837) {
bb838: ;
  char* __p839;
  unsigned long __retval840;
  unsigned long __i841;
  __p839 = v837;
  unsigned long c842 = 0;
  __i841 = c842;
    char ref_tmp0843;
    while (1) {
      unsigned long t844 = __i841;
      char* t845 = __p839;
      char* ptr846 = &(t845)[t844];
      char c847 = 0;
      ref_tmp0843 = c847;
      _Bool r848 = __gnu_cxx__char_traits_char___eq(ptr846, &ref_tmp0843);
      _Bool u849 = !r848;
      if (!u849) break;
      unsigned long t850 = __i841;
      unsigned long u851 = t850 + 1;
      __i841 = u851;
    }
  unsigned long t852 = __i841;
  __retval840 = t852;
  unsigned long t853 = __retval840;
  return t853;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v854) {
bb855: ;
  char* __s856;
  unsigned long __retval857;
  __s856 = v854;
    _Bool r858 = std____is_constant_evaluated();
    if (r858) {
      char* t859 = __s856;
      unsigned long r860 = __gnu_cxx__char_traits_char___length(t859);
      __retval857 = r860;
      unsigned long t861 = __retval857;
      return t861;
    }
  char* t862 = __s856;
  unsigned long r863 = strlen(t862);
  __retval857 = r863;
  unsigned long t864 = __retval857;
  return t864;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v865, char* v866, struct std__random_access_iterator_tag v867) {
bb868: ;
  char* __first869;
  char* __last870;
  struct std__random_access_iterator_tag unnamed871;
  long __retval872;
  __first869 = v865;
  __last870 = v866;
  unnamed871 = v867;
  char* t873 = __last870;
  char* t874 = __first869;
  long diff875 = t873 - t874;
  __retval872 = diff875;
  long t876 = __retval872;
  return t876;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v877) {
bb878: ;
  char** unnamed879;
  struct std__random_access_iterator_tag __retval880;
  unnamed879 = v877;
  struct std__random_access_iterator_tag t881 = __retval880;
  return t881;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v882, char* v883) {
bb884: ;
  char* __first885;
  char* __last886;
  long __retval887;
  struct std__random_access_iterator_tag agg_tmp0888;
  __first885 = v882;
  __last886 = v883;
  char* t889 = __first885;
  char* t890 = __last886;
  struct std__random_access_iterator_tag r891 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first885);
  agg_tmp0888 = r891;
  struct std__random_access_iterator_tag t892 = agg_tmp0888;
  long r893 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t889, t890, t892);
  __retval887 = r893;
  long t894 = __retval887;
  return t894;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v895, char* v896) {
bb897: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this898;
  char* __p899;
  this898 = v895;
  __p899 = v896;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t900 = this898;
  char* t901 = __p899;
  t900->_M_dataplus._M_p = t901;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v902) {
bb903: ;
  struct std__allocator_char_* __a904;
  unsigned long __retval905;
  __a904 = v902;
  unsigned long c906 = -1;
  unsigned long c907 = 1;
  unsigned long b908 = c906 / c907;
  __retval905 = b908;
  unsigned long t909 = __retval905;
  return t909;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v910) {
bb911: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this912;
  struct std__allocator_char_* __retval913;
  this912 = v910;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t914 = this912;
  struct std__allocator_char_* base915 = (struct std__allocator_char_*)((char *)&(t914->_M_dataplus) + 0);
  __retval913 = base915;
  struct std__allocator_char_* t916 = __retval913;
  return t916;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v917, unsigned long* v918) {
bb919: ;
  unsigned long* __a920;
  unsigned long* __b921;
  unsigned long* __retval922;
  __a920 = v917;
  __b921 = v918;
    unsigned long* t923 = __b921;
    unsigned long t924 = *t923;
    unsigned long* t925 = __a920;
    unsigned long t926 = *t925;
    _Bool c927 = ((t924 < t926)) ? 1 : 0;
    if (c927) {
      unsigned long* t928 = __b921;
      __retval922 = t928;
      unsigned long* t929 = __retval922;
      return t929;
    }
  unsigned long* t930 = __a920;
  __retval922 = t930;
  unsigned long* t931 = __retval922;
  return t931;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v932) {
bb933: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this934;
  unsigned long __retval935;
  unsigned long __diffmax936;
  unsigned long __allocmax937;
  this934 = v932;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t938 = this934;
  unsigned long c939 = 9223372036854775807;
  __diffmax936 = c939;
  struct std__allocator_char_* r940 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t938);
  unsigned long r941 = std__allocator_traits_std__allocator_char_____max_size(r940);
  __allocmax937 = r941;
  unsigned long* r942 = unsigned_long_const__std__min_unsigned_long_(&__diffmax936, &__allocmax937);
  unsigned long t943 = *r942;
  unsigned long c944 = 1;
  unsigned long b945 = t943 - c944;
  __retval935 = b945;
  unsigned long t946 = __retval935;
  return t946;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v947) {
bb948: ;
  struct std____new_allocator_char_* this949;
  unsigned long __retval950;
  this949 = v947;
  struct std____new_allocator_char_* t951 = this949;
  unsigned long c952 = 9223372036854775807;
  unsigned long c953 = 1;
  unsigned long b954 = c952 / c953;
  __retval950 = b954;
  unsigned long t955 = __retval950;
  return t955;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v956, unsigned long v957, void* v958) {
bb959: ;
  struct std____new_allocator_char_* this960;
  unsigned long __n961;
  void* unnamed962;
  char* __retval963;
  this960 = v956;
  __n961 = v957;
  unnamed962 = v958;
  struct std____new_allocator_char_* t964 = this960;
    unsigned long t965 = __n961;
    unsigned long r966 = std____new_allocator_char____M_max_size___const(t964);
    _Bool c967 = ((t965 > r966)) ? 1 : 0;
    if (c967) {
        unsigned long t968 = __n961;
        unsigned long c969 = -1;
        unsigned long c970 = 1;
        unsigned long b971 = c969 / c970;
        _Bool c972 = ((t968 > b971)) ? 1 : 0;
        if (c972) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c973 = 1;
    unsigned long c974 = 16;
    _Bool c975 = ((c973 > c974)) ? 1 : 0;
    if (c975) {
      unsigned long __al976;
      unsigned long c977 = 1;
      __al976 = c977;
      unsigned long t978 = __n961;
      unsigned long c979 = 1;
      unsigned long b980 = t978 * c979;
      unsigned long t981 = __al976;
      void* r982 = operator_new_2(b980, t981);
      char* cast983 = (char*)r982;
      __retval963 = cast983;
      char* t984 = __retval963;
      return t984;
    }
  unsigned long t985 = __n961;
  unsigned long c986 = 1;
  unsigned long b987 = t985 * c986;
  void* r988 = operator_new(b987);
  char* cast989 = (char*)r988;
  __retval963 = cast989;
  char* t990 = __retval963;
  return t990;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v991, unsigned long v992) {
bb993: ;
  struct std__allocator_char_* this994;
  unsigned long __n995;
  char* __retval996;
  this994 = v991;
  __n995 = v992;
  struct std__allocator_char_* t997 = this994;
    _Bool r998 = std____is_constant_evaluated();
    if (r998) {
        unsigned long t999 = __n995;
        unsigned long c1000 = 1;
        unsigned long ovr1001;
        _Bool ovf1002 = __builtin_mul_overflow(t999, c1000, &ovr1001);
        __n995 = ovr1001;
        if (ovf1002) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1003 = __n995;
      void* r1004 = operator_new(t1003);
      char* cast1005 = (char*)r1004;
      __retval996 = cast1005;
      char* t1006 = __retval996;
      return t1006;
    }
  struct std____new_allocator_char_* base1007 = (struct std____new_allocator_char_*)((char *)t997 + 0);
  unsigned long t1008 = __n995;
  void* c1009 = ((void*)0);
  char* r1010 = std____new_allocator_char___allocate(base1007, t1008, c1009);
  __retval996 = r1010;
  char* t1011 = __retval996;
  return t1011;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1012, unsigned long v1013) {
bb1014: ;
  struct std__allocator_char_* __a1015;
  unsigned long __n1016;
  char* __retval1017;
  __a1015 = v1012;
  __n1016 = v1013;
  struct std__allocator_char_* t1018 = __a1015;
  unsigned long t1019 = __n1016;
  char* r1020 = std__allocator_char___allocate(t1018, t1019);
  __retval1017 = r1020;
  char* t1021 = __retval1017;
  return t1021;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1022, unsigned long v1023) {
bb1024: ;
  struct std__allocator_char_* __a1025;
  unsigned long __n1026;
  char* __retval1027;
  char* __p1028;
  __a1025 = v1022;
  __n1026 = v1023;
  struct std__allocator_char_* t1029 = __a1025;
  unsigned long t1030 = __n1026;
  char* r1031 = std__allocator_traits_std__allocator_char_____allocate(t1029, t1030);
  __p1028 = r1031;
  char* t1032 = __p1028;
  __retval1027 = t1032;
  char* t1033 = __retval1027;
  return t1033;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1034) {
bb1035: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1036;
  struct std__allocator_char_* __retval1037;
  this1036 = v1034;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1038 = this1036;
  struct std__allocator_char_* base1039 = (struct std__allocator_char_*)((char *)&(t1038->_M_dataplus) + 0);
  __retval1037 = base1039;
  struct std__allocator_char_* t1040 = __retval1037;
  return t1040;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1041, unsigned long* v1042, unsigned long v1043) {
bb1044: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1045;
  unsigned long* __capacity1046;
  unsigned long __old_capacity1047;
  char* __retval1048;
  this1045 = v1041;
  __capacity1046 = v1042;
  __old_capacity1047 = v1043;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1049 = this1045;
    unsigned long* t1050 = __capacity1046;
    unsigned long t1051 = *t1050;
    unsigned long r1052 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1049);
    _Bool c1053 = ((t1051 > r1052)) ? 1 : 0;
    if (c1053) {
      char* cast1054 = (char*)&(_str_8);
      std____throw_length_error(cast1054);
    }
    unsigned long* t1055 = __capacity1046;
    unsigned long t1056 = *t1055;
    unsigned long t1057 = __old_capacity1047;
    _Bool c1058 = ((t1056 > t1057)) ? 1 : 0;
    _Bool ternary1059;
    if (c1058) {
      unsigned long* t1060 = __capacity1046;
      unsigned long t1061 = *t1060;
      unsigned long c1062 = 2;
      unsigned long t1063 = __old_capacity1047;
      unsigned long b1064 = c1062 * t1063;
      _Bool c1065 = ((t1061 < b1064)) ? 1 : 0;
      ternary1059 = (_Bool)c1065;
    } else {
      _Bool c1066 = 0;
      ternary1059 = (_Bool)c1066;
    }
    if (ternary1059) {
      unsigned long c1067 = 2;
      unsigned long t1068 = __old_capacity1047;
      unsigned long b1069 = c1067 * t1068;
      unsigned long* t1070 = __capacity1046;
      *t1070 = b1069;
        unsigned long* t1071 = __capacity1046;
        unsigned long t1072 = *t1071;
        unsigned long r1073 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1049);
        _Bool c1074 = ((t1072 > r1073)) ? 1 : 0;
        if (c1074) {
          unsigned long r1075 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1049);
          unsigned long* t1076 = __capacity1046;
          *t1076 = r1075;
        }
    }
  struct std__allocator_char_* r1077 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1049);
  unsigned long* t1078 = __capacity1046;
  unsigned long t1079 = *t1078;
  unsigned long c1080 = 1;
  unsigned long b1081 = t1079 + c1080;
  char* r1082 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1077, b1081);
  __retval1048 = r1082;
  char* t1083 = __retval1048;
  return t1083;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1084, unsigned long v1085) {
bb1086: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1087;
  unsigned long __capacity1088;
  this1087 = v1084;
  __capacity1088 = v1085;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1089 = this1087;
  unsigned long t1090 = __capacity1088;
  t1089->field2._M_allocated_capacity = t1090;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1091: ;
  _Bool __retval1092;
    _Bool c1093 = 0;
    __retval1092 = c1093;
    _Bool t1094 = __retval1092;
    return t1094;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1095) {
bb1096: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1097;
  this1097 = v1095;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1098 = this1097;
    _Bool r1099 = std__is_constant_evaluated();
    if (r1099) {
        unsigned long __i1100;
        unsigned long c1101 = 0;
        __i1100 = c1101;
        while (1) {
          unsigned long t1103 = __i1100;
          unsigned long c1104 = 15;
          _Bool c1105 = ((t1103 <= c1104)) ? 1 : 0;
          if (!c1105) break;
          char c1106 = 0;
          unsigned long t1107 = __i1100;
          t1098->field2._M_local_buf[t1107] = c1106;
        for_step1102: ;
          unsigned long t1108 = __i1100;
          unsigned long u1109 = t1108 + 1;
          __i1100 = u1109;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1110, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1111) {
bb1112: ;
  struct _Guard* this1113;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1114;
  this1113 = v1110;
  __s1114 = v1111;
  struct _Guard* t1115 = this1113;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1116 = __s1114;
  t1115->_M_guarded = t1116;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1117, char* v1118) {
bb1119: ;
  char* __location1120;
  char* __args1121;
  char* __retval1122;
  void* __loc1123;
  __location1120 = v1117;
  __args1121 = v1118;
  char* t1124 = __location1120;
  void* cast1125 = (void*)t1124;
  __loc1123 = cast1125;
    void* t1126 = __loc1123;
    char* cast1127 = (char*)t1126;
    char* t1128 = __args1121;
    char t1129 = *t1128;
    *cast1127 = t1129;
    __retval1122 = cast1127;
    char* t1130 = __retval1122;
    return t1130;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1131, char* v1132) {
bb1133: ;
  char* __c11134;
  char* __c21135;
  __c11134 = v1131;
  __c21135 = v1132;
    _Bool r1136 = std____is_constant_evaluated();
    if (r1136) {
      char* t1137 = __c11134;
      char* t1138 = __c21135;
      char* r1139 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1137, t1138);
    } else {
      char* t1140 = __c21135;
      char t1141 = *t1140;
      char* t1142 = __c11134;
      *t1142 = t1141;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1143, char* v1144, unsigned long v1145) {
bb1146: ;
  char* __s11147;
  char* __s21148;
  unsigned long __n1149;
  char* __retval1150;
  __s11147 = v1143;
  __s21148 = v1144;
  __n1149 = v1145;
    unsigned long t1151 = __n1149;
    unsigned long c1152 = 0;
    _Bool c1153 = ((t1151 == c1152)) ? 1 : 0;
    if (c1153) {
      char* t1154 = __s11147;
      __retval1150 = t1154;
      char* t1155 = __retval1150;
      return t1155;
    }
    _Bool r1156 = std____is_constant_evaluated();
    if (r1156) {
        unsigned long __i1157;
        unsigned long c1158 = 0;
        __i1157 = c1158;
        while (1) {
          unsigned long t1160 = __i1157;
          unsigned long t1161 = __n1149;
          _Bool c1162 = ((t1160 < t1161)) ? 1 : 0;
          if (!c1162) break;
          char* t1163 = __s11147;
          unsigned long t1164 = __i1157;
          char* ptr1165 = &(t1163)[t1164];
          unsigned long t1166 = __i1157;
          char* t1167 = __s21148;
          char* ptr1168 = &(t1167)[t1166];
          char* r1169 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1165, ptr1168);
        for_step1159: ;
          unsigned long t1170 = __i1157;
          unsigned long u1171 = t1170 + 1;
          __i1157 = u1171;
        }
      char* t1172 = __s11147;
      __retval1150 = t1172;
      char* t1173 = __retval1150;
      return t1173;
    }
  char* t1174 = __s11147;
  void* cast1175 = (void*)t1174;
  char* t1176 = __s21148;
  void* cast1177 = (void*)t1176;
  unsigned long t1178 = __n1149;
  unsigned long c1179 = 1;
  unsigned long b1180 = t1178 * c1179;
  void* r1181 = memcpy(cast1175, cast1177, b1180);
  char* t1182 = __s11147;
  __retval1150 = t1182;
  char* t1183 = __retval1150;
  return t1183;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1184, char* v1185, unsigned long v1186) {
bb1187: ;
  char* __s11188;
  char* __s21189;
  unsigned long __n1190;
  char* __retval1191;
  __s11188 = v1184;
  __s21189 = v1185;
  __n1190 = v1186;
    unsigned long t1192 = __n1190;
    unsigned long c1193 = 0;
    _Bool c1194 = ((t1192 == c1193)) ? 1 : 0;
    if (c1194) {
      char* t1195 = __s11188;
      __retval1191 = t1195;
      char* t1196 = __retval1191;
      return t1196;
    }
    _Bool r1197 = std____is_constant_evaluated();
    if (r1197) {
      char* t1198 = __s11188;
      char* t1199 = __s21189;
      unsigned long t1200 = __n1190;
      char* r1201 = __gnu_cxx__char_traits_char___copy(t1198, t1199, t1200);
      __retval1191 = r1201;
      char* t1202 = __retval1191;
      return t1202;
    }
  char* t1203 = __s11188;
  void* cast1204 = (void*)t1203;
  char* t1205 = __s21189;
  void* cast1206 = (void*)t1205;
  unsigned long t1207 = __n1190;
  void* r1208 = memcpy(cast1204, cast1206, t1207);
  char* cast1209 = (char*)r1208;
  __retval1191 = cast1209;
  char* t1210 = __retval1191;
  return t1210;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1211, char* v1212, unsigned long v1213) {
bb1214: ;
  char* __d1215;
  char* __s1216;
  unsigned long __n1217;
  __d1215 = v1211;
  __s1216 = v1212;
  __n1217 = v1213;
    unsigned long t1218 = __n1217;
    unsigned long c1219 = 1;
    _Bool c1220 = ((t1218 == c1219)) ? 1 : 0;
    if (c1220) {
      char* t1221 = __d1215;
      char* t1222 = __s1216;
      std__char_traits_char___assign(t1221, t1222);
    } else {
      char* t1223 = __d1215;
      char* t1224 = __s1216;
      unsigned long t1225 = __n1217;
      char* r1226 = std__char_traits_char___copy(t1223, t1224, t1225);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1227) {
bb1228: ;
  char* __it1229;
  char* __retval1230;
  __it1229 = v1227;
  char* t1231 = __it1229;
  __retval1230 = t1231;
  char* t1232 = __retval1230;
  return t1232;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1233, char* v1234, char* v1235) {
bb1236: ;
  char* __p1237;
  char* __k11238;
  char* __k21239;
  __p1237 = v1233;
  __k11238 = v1234;
  __k21239 = v1235;
    char* t1240 = __p1237;
    char* t1241 = __k11238;
    char* r1242 = char_const__std____niter_base_char_const__(t1241);
    char* t1243 = __k21239;
    char* t1244 = __k11238;
    long diff1245 = t1243 - t1244;
    unsigned long cast1246 = (unsigned long)diff1245;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1240, r1242, cast1246);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1247) {
bb1248: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1249;
  char* __retval1250;
  this1249 = v1247;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1251 = this1249;
  char* t1252 = t1251->_M_dataplus._M_p;
  __retval1250 = t1252;
  char* t1253 = __retval1250;
  return t1253;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1254, unsigned long v1255) {
bb1256: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1257;
  unsigned long __length1258;
  this1257 = v1254;
  __length1258 = v1255;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1259 = this1257;
  unsigned long t1260 = __length1258;
  t1259->_M_string_length = t1260;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1261, unsigned long v1262) {
bb1263: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1264;
  unsigned long __n1265;
  char ref_tmp01266;
  this1264 = v1261;
  __n1265 = v1262;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1267 = this1264;
  unsigned long t1268 = __n1265;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1267, t1268);
  unsigned long t1269 = __n1265;
  char* r1270 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1267);
  char* ptr1271 = &(r1270)[t1269];
  char c1272 = 0;
  ref_tmp01266 = c1272;
  std__char_traits_char___assign(ptr1271, &ref_tmp01266);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1273) {
bb1274: ;
  struct _Guard* this1275;
  this1275 = v1273;
  struct _Guard* t1276 = this1275;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1277 = t1276->_M_guarded;
    _Bool cast1278 = (_Bool)t1277;
    if (cast1278) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1279 = t1276->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1279);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1280, char* v1281, char* v1282, struct std__forward_iterator_tag v1283) {
bb1284: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1285;
  char* __beg1286;
  char* __end1287;
  struct std__forward_iterator_tag unnamed1288;
  unsigned long __dnew1289;
  struct _Guard __guard1290;
  this1285 = v1280;
  __beg1286 = v1281;
  __end1287 = v1282;
  unnamed1288 = v1283;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1291 = this1285;
  char* t1292 = __beg1286;
  char* t1293 = __end1287;
  long r1294 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1292, t1293);
  unsigned long cast1295 = (unsigned long)r1294;
  __dnew1289 = cast1295;
    unsigned long t1296 = __dnew1289;
    unsigned long c1297 = 15;
    _Bool c1298 = ((t1296 > c1297)) ? 1 : 0;
    if (c1298) {
      unsigned long c1299 = 0;
      char* r1300 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1291, &__dnew1289, c1299);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1291, r1300);
      unsigned long t1301 = __dnew1289;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1291, t1301);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1291);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1290, t1291);
    char* r1302 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1291);
    char* t1303 = __beg1286;
    char* t1304 = __end1287;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1302, t1303, t1304);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1305 = ((void*)0);
    __guard1290._M_guarded = c1305;
    unsigned long t1306 = __dnew1289;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1291, t1306);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1290);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1307) {
bb1308: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1309;
  this1309 = v1307;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1310 = this1309;
  {
    struct std__allocator_char_* base1311 = (struct std__allocator_char_*)((char *)t1310 + 0);
    std__allocator_char____allocator(base1311);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1312, struct std____new_allocator_char_* v1313) {
bb1314: ;
  struct std____new_allocator_char_* this1315;
  struct std____new_allocator_char_* unnamed1316;
  this1315 = v1312;
  unnamed1316 = v1313;
  struct std____new_allocator_char_* t1317 = this1315;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1318) {
bb1319: ;
  char* __r1320;
  char* __retval1321;
  __r1320 = v1318;
  char* t1322 = __r1320;
  __retval1321 = t1322;
  char* t1323 = __retval1321;
  return t1323;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1324) {
bb1325: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1326;
  char* __retval1327;
  this1326 = v1324;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1328 = this1326;
  char* cast1329 = (char*)&(t1328->field2._M_local_buf);
  char* r1330 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1329);
  __retval1327 = r1330;
  char* t1331 = __retval1327;
  return t1331;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1332) {
bb1333: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1334;
  _Bool __retval1335;
  this1334 = v1332;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1336 = this1334;
    char* r1337 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1336);
    char* r1338 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1336);
    _Bool c1339 = ((r1337 == r1338)) ? 1 : 0;
    if (c1339) {
        unsigned long t1340 = t1336->_M_string_length;
        unsigned long c1341 = 15;
        _Bool c1342 = ((t1340 > c1341)) ? 1 : 0;
        if (c1342) {
          __builtin_unreachable();
        }
      _Bool c1343 = 1;
      __retval1335 = c1343;
      _Bool t1344 = __retval1335;
      return t1344;
    }
  _Bool c1345 = 0;
  __retval1335 = c1345;
  _Bool t1346 = __retval1335;
  return t1346;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1347, char* v1348, unsigned long v1349) {
bb1350: ;
  struct std____new_allocator_char_* this1351;
  char* __p1352;
  unsigned long __n1353;
  this1351 = v1347;
  __p1352 = v1348;
  __n1353 = v1349;
  struct std____new_allocator_char_* t1354 = this1351;
    unsigned long c1355 = 1;
    unsigned long c1356 = 16;
    _Bool c1357 = ((c1355 > c1356)) ? 1 : 0;
    if (c1357) {
      char* t1358 = __p1352;
      void* cast1359 = (void*)t1358;
      unsigned long t1360 = __n1353;
      unsigned long c1361 = 1;
      unsigned long b1362 = t1360 * c1361;
      unsigned long c1363 = 1;
      operator_delete_3(cast1359, b1362, c1363);
      return;
    }
  char* t1364 = __p1352;
  void* cast1365 = (void*)t1364;
  unsigned long t1366 = __n1353;
  unsigned long c1367 = 1;
  unsigned long b1368 = t1366 * c1367;
  operator_delete_2(cast1365, b1368);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1369, char* v1370, unsigned long v1371) {
bb1372: ;
  struct std__allocator_char_* this1373;
  char* __p1374;
  unsigned long __n1375;
  this1373 = v1369;
  __p1374 = v1370;
  __n1375 = v1371;
  struct std__allocator_char_* t1376 = this1373;
    _Bool r1377 = std____is_constant_evaluated();
    if (r1377) {
      char* t1378 = __p1374;
      void* cast1379 = (void*)t1378;
      operator_delete(cast1379);
      return;
    }
  struct std____new_allocator_char_* base1380 = (struct std____new_allocator_char_*)((char *)t1376 + 0);
  char* t1381 = __p1374;
  unsigned long t1382 = __n1375;
  std____new_allocator_char___deallocate(base1380, t1381, t1382);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1383, char* v1384, unsigned long v1385) {
bb1386: ;
  struct std__allocator_char_* __a1387;
  char* __p1388;
  unsigned long __n1389;
  __a1387 = v1383;
  __p1388 = v1384;
  __n1389 = v1385;
  struct std__allocator_char_* t1390 = __a1387;
  char* t1391 = __p1388;
  unsigned long t1392 = __n1389;
  std__allocator_char___deallocate(t1390, t1391, t1392);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1393, unsigned long v1394) {
bb1395: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1396;
  unsigned long __size1397;
  this1396 = v1393;
  __size1397 = v1394;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1398 = this1396;
  struct std__allocator_char_* r1399 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1398);
  char* r1400 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1398);
  unsigned long t1401 = __size1397;
  unsigned long c1402 = 1;
  unsigned long b1403 = t1401 + c1402;
  std__allocator_traits_std__allocator_char_____deallocate(r1399, r1400, b1403);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1404) {
bb1405: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1406;
  this1406 = v1404;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1407 = this1406;
    _Bool r1408 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1407);
    _Bool u1409 = !r1408;
    if (u1409) {
      unsigned long t1410 = t1407->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1407, t1410);
    }
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1411, struct std__allocator_char_* v1412) {
bb1413: ;
  struct std__allocator_char_* this1414;
  struct std__allocator_char_* __a1415;
  this1414 = v1411;
  __a1415 = v1412;
  struct std__allocator_char_* t1416 = this1414;
  struct std____new_allocator_char_* base1417 = (struct std____new_allocator_char_*)((char *)t1416 + 0);
  struct std__allocator_char_* t1418 = __a1415;
  struct std____new_allocator_char_* base1419 = (struct std____new_allocator_char_*)((char *)t1418 + 0);
  std____new_allocator_char_____new_allocator(base1417, base1419);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v1420) {
bb1421: ;
  struct std__allocator_char_* __rhs1422;
  struct std__allocator_char_ __retval1423;
  __rhs1422 = v1420;
  struct std__allocator_char_* t1424 = __rhs1422;
  std__allocator_char___allocator(&__retval1423, t1424);
  struct std__allocator_char_ t1425 = __retval1423;
  return t1425;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v1426) {
bb1427: ;
  struct std__allocator_char_* __a1428;
  struct std__allocator_char_ __retval1429;
  __a1428 = v1426;
  struct std__allocator_char_* t1430 = __a1428;
  struct std__allocator_char_ r1431 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t1430);
  __retval1429 = r1431;
  struct std__allocator_char_ t1432 = __retval1429;
  return t1432;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1433, char* v1434, struct std__allocator_char_* v1435) {
bb1436: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1437;
  char* __dat1438;
  struct std__allocator_char_* __a1439;
  this1437 = v1433;
  __dat1438 = v1434;
  __a1439 = v1435;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1440 = this1437;
  struct std__allocator_char_* base1441 = (struct std__allocator_char_*)((char *)t1440 + 0);
  struct std__allocator_char_* t1442 = __a1439;
  std__allocator_char___allocator(base1441, t1442);
    char* t1443 = __dat1438;
    t1440->_M_p = t1443;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructILb1EEEvPKcm
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1444, char* v1445, unsigned long v1446) {
bb1447: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1448;
  char* __str1449;
  unsigned long __n1450;
  this1448 = v1444;
  __str1449 = v1445;
  __n1450 = v1446;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1451 = this1448;
    unsigned long t1452 = __n1450;
    unsigned long c1453 = 15;
    _Bool c1454 = ((t1452 > c1453)) ? 1 : 0;
    if (c1454) {
      unsigned long c1455 = 0;
      char* r1456 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1451, &__n1450, c1455);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1451, r1456);
      unsigned long t1457 = __n1450;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1451, t1457);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1451);
    }
    unsigned long t1458 = __n1450;
    _Bool cast1459 = (_Bool)t1458;
    _Bool ternary1460;
    if (cast1459) {
      _Bool c1461 = 1;
      ternary1460 = (_Bool)c1461;
    } else {
      _Bool c1462 = 1;
      ternary1460 = (_Bool)c1462;
    }
    if (ternary1460) {
      char* r1463 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1451);
      char* t1464 = __str1449;
      unsigned long t1465 = __n1450;
      _Bool c1466 = 1;
      unsigned long cast1467 = (unsigned long)c1466;
      unsigned long b1468 = t1465 + cast1467;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1463, t1464, b1468);
    }
  unsigned long t1469 = __n1450;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1451, t1469);
    _Bool c1470 = 0;
    if (c1470) {
      char ref_tmp01471;
      unsigned long t1472 = __n1450;
      char* r1473 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1451);
      char* ptr1474 = &(r1473)[t1472];
      char c1475 = 0;
      ref_tmp01471 = c1475;
      std__char_traits_char___assign(ptr1474, &ref_tmp01471);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1476) {
bb1477: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1478;
  unsigned long __retval1479;
  unsigned long __sz1480;
  this1478 = v1476;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1481 = this1478;
  unsigned long t1482 = t1481->_M_string_length;
  __sz1480 = t1482;
    unsigned long t1483 = __sz1480;
    unsigned long r1484 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1481);
    _Bool c1485 = ((t1483 > r1484)) ? 1 : 0;
    if (c1485) {
      __builtin_unreachable();
    }
  unsigned long t1486 = __sz1480;
  __retval1479 = t1486;
  unsigned long t1487 = __retval1479;
  return t1487;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1488) {
bb1489: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1490;
  unsigned long __retval1491;
  this1490 = v1488;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1492 = this1490;
  unsigned long r1493 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1492);
  __retval1491 = r1493;
  unsigned long t1494 = __retval1491;
  return t1494;
}

