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

char _str[3] = "Te";
char _str_1[3] = "st";
char _str_2[8] = "Testing";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[12] = "T == S + S1";
char _str_4[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_constructor_8/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_5[50] = "basic_string: construction from null is not valid";
char _str_6[24] = "basic_string::_M_create";
char _str_7[21] = "basic_string::append";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, struct std__allocator_char_* p3);
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
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* p0);
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std__allocator_char_* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* p0, unsigned long p1, char* p2, unsigned long p3, struct std__allocator_char_* p4);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
int main();
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
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
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t14->_M_dataplus, r15, t16);
      char* t17 = __s10;
      char* c18 = ((void*)0);
      _Bool c19 = ((t17 == c18)) ? 1 : 0;
      if (c19) {
        char* cast20 = (char*)&(_str_5);
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

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EPKcmRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v32, char* v33, unsigned long v34, struct std__allocator_char_* v35) {
bb36:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this37;
  char* __s38;
  unsigned long __n39;
  struct std__allocator_char_* __a40;
  struct std__forward_iterator_tag agg_tmp041;
  this37 = v32;
  __s38 = v33;
  __n39 = v34;
  __a40 = v35;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t42 = this37;
  char* r43 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t42);
  struct std__allocator_char_* t44 = __a40;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t42->_M_dataplus, r43, t44);
      char* t45 = __s38;
      char* c46 = ((void*)0);
      _Bool c47 = ((t45 == c46)) ? 1 : 0;
      _Bool ternary48;
      if (c47) {
        unsigned long t49 = __n39;
        unsigned long c50 = 0;
        _Bool c51 = ((t49 > c50)) ? 1 : 0;
        ternary48 = (_Bool)c51;
      } else {
        _Bool c52 = 0;
        ternary48 = (_Bool)c52;
      }
      if (ternary48) {
        char* cast53 = (char*)&(_str_5);
        std____throw_logic_error(cast53);
      }
    char* t54 = __s38;
    char* t55 = __s38;
    unsigned long t56 = __n39;
    char* ptr57 = &(t55)[t56];
    struct std__forward_iterator_tag t58 = agg_tmp041;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t42, t54, ptr57, t58);
  return;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v59, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v60) {
bb61:
  struct std__basic_ostream_char__std__char_traits_char__* __os62;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str63;
  struct std__basic_ostream_char__std__char_traits_char__* __retval64;
  __os62 = v59;
  __str63 = v60;
  struct std__basic_ostream_char__std__char_traits_char__* t65 = __os62;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t66 = __str63;
  char* r67 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t66);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t68 = __str63;
  unsigned long r69 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t68);
  long cast70 = (long)r69;
  struct std__basic_ostream_char__std__char_traits_char__* r71 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t65, r67, cast70);
  __retval64 = r71;
  struct std__basic_ostream_char__std__char_traits_char__* t72 = __retval64;
  return t72;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v73, void* v74) {
bb75:
  struct std__basic_ostream_char__std__char_traits_char__* this76;
  void* __pf77;
  struct std__basic_ostream_char__std__char_traits_char__* __retval78;
  this76 = v73;
  __pf77 = v74;
  struct std__basic_ostream_char__std__char_traits_char__* t79 = this76;
  void* t80 = __pf77;
  struct std__basic_ostream_char__std__char_traits_char__* r81 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t80)(t79);
  __retval78 = r81;
  struct std__basic_ostream_char__std__char_traits_char__* t82 = __retval78;
  return t82;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v83) {
bb84:
  struct std__basic_ostream_char__std__char_traits_char__* __os85;
  struct std__basic_ostream_char__std__char_traits_char__* __retval86;
  __os85 = v83;
  struct std__basic_ostream_char__std__char_traits_char__* t87 = __os85;
  struct std__basic_ostream_char__std__char_traits_char__* r88 = std__ostream__flush(t87);
  __retval86 = r88;
  struct std__basic_ostream_char__std__char_traits_char__* t89 = __retval86;
  return t89;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v90) {
bb91:
  struct std__ctype_char_* __f92;
  struct std__ctype_char_* __retval93;
  __f92 = v90;
    struct std__ctype_char_* t94 = __f92;
    _Bool cast95 = (_Bool)t94;
    _Bool u96 = !cast95;
    if (u96) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t97 = __f92;
  __retval93 = t97;
  struct std__ctype_char_* t98 = __retval93;
  return t98;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v99, char v100) {
bb101:
  struct std__ctype_char_* this102;
  char __c103;
  char __retval104;
  this102 = v99;
  __c103 = v100;
  struct std__ctype_char_* t105 = this102;
    char t106 = t105->_M_widen_ok;
    _Bool cast107 = (_Bool)t106;
    if (cast107) {
      char t108 = __c103;
      unsigned char cast109 = (unsigned char)t108;
      unsigned long cast110 = (unsigned long)cast109;
      char t111 = t105->_M_widen[cast110];
      __retval104 = t111;
      char t112 = __retval104;
      return t112;
    }
  std__ctype_char____M_widen_init___const(t105);
  char t113 = __c103;
  void** v114 = (void**)t105;
  void* v115 = *((void**)v114);
  char vcall118 = (char)__VERIFIER_virtual_call_char_char(t105, 6, t113);
  __retval104 = vcall118;
  char t119 = __retval104;
  return t119;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v120, char v121) {
bb122:
  struct std__basic_ios_char__std__char_traits_char__* this123;
  char __c124;
  char __retval125;
  this123 = v120;
  __c124 = v121;
  struct std__basic_ios_char__std__char_traits_char__* t126 = this123;
  struct std__ctype_char_* t127 = t126->_M_ctype;
  struct std__ctype_char_* r128 = std__ctype_char__const__std____check_facet_std__ctype_char___(t127);
  char t129 = __c124;
  char r130 = std__ctype_char___widen_char__const(r128, t129);
  __retval125 = r130;
  char t131 = __retval125;
  return t131;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v132) {
bb133:
  struct std__basic_ostream_char__std__char_traits_char__* __os134;
  struct std__basic_ostream_char__std__char_traits_char__* __retval135;
  __os134 = v132;
  struct std__basic_ostream_char__std__char_traits_char__* t136 = __os134;
  struct std__basic_ostream_char__std__char_traits_char__* t137 = __os134;
  void** v138 = (void**)t137;
  void* v139 = *((void**)v138);
  unsigned char* cast140 = (unsigned char*)v139;
  long c141 = -24;
  unsigned char* ptr142 = &(cast140)[c141];
  long* cast143 = (long*)ptr142;
  long t144 = *cast143;
  unsigned char* cast145 = (unsigned char*)t137;
  unsigned char* ptr146 = &(cast145)[t144];
  struct std__basic_ostream_char__std__char_traits_char__* cast147 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr146;
  struct std__basic_ios_char__std__char_traits_char__* cast148 = (struct std__basic_ios_char__std__char_traits_char__*)cast147;
  char c149 = 10;
  char r150 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast148, c149);
  struct std__basic_ostream_char__std__char_traits_char__* r151 = std__ostream__put(t136, r150);
  struct std__basic_ostream_char__std__char_traits_char__* r152 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r151);
  __retval135 = r152;
  struct std__basic_ostream_char__std__char_traits_char__* t153 = __retval135;
  return t153;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v154) {
bb155:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this156;
  unsigned long __retval157;
  unsigned long __sz158;
  this156 = v154;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t159 = this156;
  unsigned long t160 = t159->_M_string_length;
  __sz158 = t160;
    unsigned long t161 = __sz158;
    unsigned long r162 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t159);
    _Bool c163 = ((t161 > r162)) ? 1 : 0;
    if (c163) {
      __builtin_unreachable();
    }
  unsigned long t164 = __sz158;
  __retval157 = t164;
  unsigned long t165 = __retval157;
  return t165;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v166, char* v167) {
bb168:
  char* __c1169;
  char* __c2170;
  _Bool __retval171;
  __c1169 = v166;
  __c2170 = v167;
  char* t172 = __c1169;
  char t173 = *t172;
  unsigned char cast174 = (unsigned char)t173;
  int cast175 = (int)cast174;
  char* t176 = __c2170;
  char t177 = *t176;
  unsigned char cast178 = (unsigned char)t177;
  int cast179 = (int)cast178;
  _Bool c180 = ((cast175 < cast179)) ? 1 : 0;
  __retval171 = c180;
  _Bool t181 = __retval171;
  return t181;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v182, char* v183, unsigned long v184) {
bb185:
  char* __s1186;
  char* __s2187;
  unsigned long __n188;
  int __retval189;
  __s1186 = v182;
  __s2187 = v183;
  __n188 = v184;
    unsigned long t190 = __n188;
    unsigned long c191 = 0;
    _Bool c192 = ((t190 == c191)) ? 1 : 0;
    if (c192) {
      int c193 = 0;
      __retval189 = c193;
      int t194 = __retval189;
      return t194;
    }
    _Bool r195 = std____is_constant_evaluated();
    if (r195) {
        unsigned long __i196;
        unsigned long c197 = 0;
        __i196 = c197;
        while (1) {
          unsigned long t199 = __i196;
          unsigned long t200 = __n188;
          _Bool c201 = ((t199 < t200)) ? 1 : 0;
          if (!c201) break;
            unsigned long t202 = __i196;
            char* t203 = __s1186;
            char* ptr204 = &(t203)[t202];
            unsigned long t205 = __i196;
            char* t206 = __s2187;
            char* ptr207 = &(t206)[t205];
            _Bool r208 = std__char_traits_char___lt(ptr204, ptr207);
            if (r208) {
              int c209 = -1;
              __retval189 = c209;
              int t210 = __retval189;
              int ret_val211 = t210;
              return ret_val211;
            } else {
                unsigned long t212 = __i196;
                char* t213 = __s2187;
                char* ptr214 = &(t213)[t212];
                unsigned long t215 = __i196;
                char* t216 = __s1186;
                char* ptr217 = &(t216)[t215];
                _Bool r218 = std__char_traits_char___lt(ptr214, ptr217);
                if (r218) {
                  int c219 = 1;
                  __retval189 = c219;
                  int t220 = __retval189;
                  int ret_val221 = t220;
                  return ret_val221;
                }
            }
        for_step198: ;
          unsigned long t222 = __i196;
          unsigned long u223 = t222 + 1;
          __i196 = u223;
        }
      int c224 = 0;
      __retval189 = c224;
      int t225 = __retval189;
      return t225;
    }
  char* t226 = __s1186;
  void* cast227 = (void*)t226;
  char* t228 = __s2187;
  void* cast229 = (void*)t228;
  unsigned long t230 = __n188;
  int r231 = memcmp(cast227, cast229, t230);
  __retval189 = r231;
  int t232 = __retval189;
  return t232;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v233) {
bb234:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this235;
  char* __retval236;
  this235 = v233;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t237 = this235;
  char* r238 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t237);
  __retval236 = r238;
  char* t239 = __retval236;
  return t239;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EESA_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v240, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v241) {
bb242:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs243;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs244;
  _Bool __retval245;
  __lhs243 = v240;
  __rhs244 = v241;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t246 = __lhs243;
  unsigned long r247 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t246);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t248 = __rhs244;
  unsigned long r249 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t248);
  _Bool c250 = ((r247 == r249)) ? 1 : 0;
  _Bool ternary251;
  if (c250) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t252 = __lhs243;
    char* r253 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t252);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t254 = __rhs244;
    char* r255 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t254);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t256 = __lhs243;
    unsigned long r257 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t256);
    int r258 = std__char_traits_char___compare(r253, r255, r257);
    _Bool cast259 = (_Bool)r258;
    _Bool u260 = !cast259;
    ternary251 = (_Bool)u260;
  } else {
    _Bool c261 = 0;
    ternary251 = (_Bool)c261;
  }
  __retval245 = ternary251;
  _Bool t262 = __retval245;
  return t262;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v263, struct std__allocator_char_* v264) {
bb265:
  struct std__allocator_char_* this266;
  struct std__allocator_char_* __a267;
  this266 = v263;
  __a267 = v264;
  struct std__allocator_char_* t268 = this266;
  struct std____new_allocator_char_* base269 = (struct std____new_allocator_char_*)((char *)t268 + 0);
  struct std__allocator_char_* t270 = __a267;
  struct std____new_allocator_char_* base271 = (struct std____new_allocator_char_*)((char *)t270 + 0);
  std____new_allocator_char_____new_allocator(base269, base271);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v272) {
bb273:
  struct std__allocator_char_* __rhs274;
  struct std__allocator_char_ __retval275;
  __rhs274 = v272;
  struct std__allocator_char_* t276 = __rhs274;
  std__allocator_char___allocator(&__retval275, t276);
  struct std__allocator_char_ t277 = __retval275;
  return t277;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v278) {
bb279:
  struct std__allocator_char_* __a280;
  struct std__allocator_char_ __retval281;
  __a280 = v278;
  struct std__allocator_char_* t282 = __a280;
  struct std__allocator_char_ r283 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t282);
  __retval281 = r283;
  struct std__allocator_char_ t284 = __retval281;
  return t284;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v285, struct std__allocator_char_* v286) {
bb287:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this288;
  struct std__allocator_char_* __a289;
  this288 = v285;
  __a289 = v286;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t290 = this288;
  char* r291 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t290);
  struct std__allocator_char_* t292 = __a289;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t290->_M_dataplus, r291, t292);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t290);
    unsigned long c293 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t290, c293);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v294) {
bb295:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this296;
  unsigned long __retval297;
  unsigned long __sz298;
  this296 = v294;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t299 = this296;
  _Bool r300 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t299);
  unsigned long ternary301;
  if (r300) {
    unsigned long c302 = 15;
    ternary301 = (unsigned long)c302;
  } else {
    unsigned long t303 = t299->field2._M_allocated_capacity;
    ternary301 = (unsigned long)t303;
  }
  __sz298 = ternary301;
    unsigned long t304 = __sz298;
    unsigned long c305 = 15;
    _Bool c306 = ((t304 < c305)) ? 1 : 0;
    _Bool ternary307;
    if (c306) {
      _Bool c308 = 1;
      ternary307 = (_Bool)c308;
    } else {
      unsigned long t309 = __sz298;
      unsigned long r310 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t299);
      _Bool c311 = ((t309 > r310)) ? 1 : 0;
      ternary307 = (_Bool)c311;
    }
    if (ternary307) {
      __builtin_unreachable();
    }
  unsigned long t312 = __sz298;
  __retval297 = t312;
  unsigned long t313 = __retval297;
  return t313;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v314) {
bb315:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this316;
  unsigned long __retval317;
  this316 = v314;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t318 = this316;
  unsigned long r319 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t318);
  __retval317 = r319;
  unsigned long t320 = __retval317;
  return t320;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7reserveEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v321, unsigned long v322) {
bb323:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this324;
  unsigned long __res325;
  unsigned long __capacity326;
  char* __tmp327;
  this324 = v321;
  __res325 = v322;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t328 = this324;
  unsigned long r329 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t328);
  __capacity326 = r329;
    unsigned long t330 = __res325;
    unsigned long t331 = __capacity326;
    _Bool c332 = ((t330 <= t331)) ? 1 : 0;
    if (c332) {
      return;
    }
  unsigned long t333 = __capacity326;
  char* r334 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t328, &__res325, t333);
  __tmp327 = r334;
  char* t335 = __tmp327;
  char* r336 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t328);
  unsigned long r337 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t328);
  unsigned long c338 = 1;
  unsigned long b339 = r337 + c338;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t335, r336, b339);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t328);
  char* t340 = __tmp327;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t328, t340);
  unsigned long t341 = __res325;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t328, t341);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v342, unsigned long v343, unsigned long v344, char* v345) {
bb346:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this347;
  unsigned long __n1348;
  unsigned long __n2349;
  char* __s350;
  this347 = v342;
  __n1348 = v343;
  __n2349 = v344;
  __s350 = v345;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t351 = this347;
    unsigned long r352 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t351);
    unsigned long r353 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t351);
    unsigned long t354 = __n1348;
    unsigned long b355 = r353 - t354;
    unsigned long b356 = r352 - b355;
    unsigned long t357 = __n2349;
    _Bool c358 = ((b356 < t357)) ? 1 : 0;
    if (c358) {
      char* t359 = __s350;
      std____throw_length_error(t359);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v360, unsigned long v361, unsigned long v362, char* v363, unsigned long v364) {
bb365:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this366;
  unsigned long __pos367;
  unsigned long __len1368;
  char* __s369;
  unsigned long __len2370;
  unsigned long __how_much371;
  unsigned long __new_capacity372;
  char* __r373;
  this366 = v360;
  __pos367 = v361;
  __len1368 = v362;
  __s369 = v363;
  __len2370 = v364;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t374 = this366;
  unsigned long r375 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t374);
  unsigned long t376 = __pos367;
  unsigned long b377 = r375 - t376;
  unsigned long t378 = __len1368;
  unsigned long b379 = b377 - t378;
  __how_much371 = b379;
  unsigned long r380 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t374);
  unsigned long t381 = __len2370;
  unsigned long b382 = r380 + t381;
  unsigned long t383 = __len1368;
  unsigned long b384 = b382 - t383;
  __new_capacity372 = b384;
  unsigned long r385 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t374);
  char* r386 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t374, &__new_capacity372, r385);
  __r373 = r386;
    unsigned long t387 = __pos367;
    _Bool cast388 = (_Bool)t387;
    if (cast388) {
      char* t389 = __r373;
      char* r390 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t374);
      unsigned long t391 = __pos367;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t389, r390, t391);
    }
    char* t392 = __s369;
    _Bool cast393 = (_Bool)t392;
    _Bool ternary394;
    if (cast393) {
      unsigned long t395 = __len2370;
      _Bool cast396 = (_Bool)t395;
      ternary394 = (_Bool)cast396;
    } else {
      _Bool c397 = 0;
      ternary394 = (_Bool)c397;
    }
    if (ternary394) {
      char* t398 = __r373;
      unsigned long t399 = __pos367;
      char* ptr400 = &(t398)[t399];
      char* t401 = __s369;
      unsigned long t402 = __len2370;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr400, t401, t402);
    }
    unsigned long t403 = __how_much371;
    _Bool cast404 = (_Bool)t403;
    if (cast404) {
      char* t405 = __r373;
      unsigned long t406 = __pos367;
      char* ptr407 = &(t405)[t406];
      unsigned long t408 = __len2370;
      char* ptr409 = &(ptr407)[t408];
      char* r410 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t374);
      unsigned long t411 = __pos367;
      char* ptr412 = &(r410)[t411];
      unsigned long t413 = __len1368;
      char* ptr414 = &(ptr412)[t413];
      unsigned long t415 = __how_much371;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr409, ptr414, t415);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t374);
  char* t416 = __r373;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t374, t416);
  unsigned long t417 = __new_capacity372;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t374, t417);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v418, char* v419, unsigned long v420) {
bb421:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this422;
  char* __s423;
  unsigned long __n424;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval425;
  unsigned long __len426;
  this422 = v418;
  __s423 = v419;
  __n424 = v420;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t427 = this422;
  unsigned long t428 = __n424;
  unsigned long r429 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t427);
  unsigned long b430 = t428 + r429;
  __len426 = b430;
    unsigned long t431 = __len426;
    unsigned long r432 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t427);
    _Bool c433 = ((t431 <= r432)) ? 1 : 0;
    if (c433) {
        unsigned long t434 = __n424;
        _Bool cast435 = (_Bool)t434;
        if (cast435) {
          char* r436 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t427);
          unsigned long r437 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t427);
          char* ptr438 = &(r436)[r437];
          char* t439 = __s423;
          unsigned long t440 = __n424;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr438, t439, t440);
        }
    } else {
      unsigned long r441 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t427);
      unsigned long c442 = 0;
      char* t443 = __s423;
      unsigned long t444 = __n424;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t427, r441, c442, t443, t444);
    }
  unsigned long t445 = __len426;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t427, t445);
  __retval425 = t427;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t446 = __retval425;
  return t446;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v447, char* v448, unsigned long v449) {
bb450:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this451;
  char* __s452;
  unsigned long __n453;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval454;
  this451 = v447;
  __s452 = v448;
  __n453 = v449;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t455 = this451;
  unsigned long c456 = 0;
  unsigned long t457 = __n453;
  char* cast458 = (char*)&(_str_7);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t455, c456, t457, cast458);
  char* t459 = __s452;
  unsigned long t460 = __n453;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r461 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t455, t459, t460);
  __retval454 = r461;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t462 = __retval454;
  return t462;
}

// function: _ZSt12__str_concatINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEET_PKNS6_10value_typeENS6_9size_typeES9_SA_RKNS6_14allocator_typeE
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* v463, unsigned long v464, char* v465, unsigned long v466, struct std__allocator_char_* v467) {
bb468:
  char* __lhs469;
  unsigned long __lhs_len470;
  char* __rhs471;
  unsigned long __rhs_len472;
  struct std__allocator_char_* __a473;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval474;
  _Bool nrvo475;
  struct std__allocator_char_ ref_tmp0476;
  __lhs469 = v463;
  __lhs_len470 = v464;
  __rhs471 = v465;
  __rhs_len472 = v466;
  __a473 = v467;
  _Bool c477 = 0;
  nrvo475 = c477;
  struct std__allocator_char_* t478 = __a473;
  struct std__allocator_char_ r479 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(t478);
  ref_tmp0476 = r479;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(&__retval474, &ref_tmp0476);
  {
    std__allocator_char____allocator(&ref_tmp0476);
  }
    unsigned long t480 = __lhs_len470;
    unsigned long t481 = __rhs_len472;
    unsigned long b482 = t480 + t481;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(&__retval474, b482);
    char* t483 = __lhs469;
    unsigned long t484 = __lhs_len470;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r485 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(&__retval474, t483, t484);
    char* t486 = __rhs471;
    unsigned long t487 = __rhs_len472;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r488 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(&__retval474, t486, t487);
    _Bool c489 = 1;
    nrvo475 = c489;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t490 = __retval474;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ret_val491 = t490;
    {
      _Bool t492 = nrvo475;
      _Bool u493 = !t492;
      if (u493) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&__retval474);
      }
    }
    return ret_val491;
  abort();
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5c_strEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v494) {
bb495:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this496;
  char* __retval497;
  this496 = v494;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t498 = this496;
  char* r499 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t498);
  __retval497 = r499;
  char* t500 = __retval497;
  return t500;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13get_allocatorEv
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v501) {
bb502:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this503;
  struct std__allocator_char_ __retval504;
  this503 = v501;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t505 = this503;
  struct std__allocator_char_* r506 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t505);
  std__allocator_char___allocator(&__retval504, r506);
  struct std__allocator_char_ t507 = __retval504;
  return t507;
}

// function: _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v508, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v509) {
bb510:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs511;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs512;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval513;
  struct std__allocator_char_ ref_tmp0514;
  __lhs511 = v508;
  __rhs512 = v509;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t515 = __lhs511;
  char* r516 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(t515);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t517 = __lhs511;
  unsigned long r518 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t517);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t519 = __rhs512;
  char* r520 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(t519);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t521 = __rhs512;
  unsigned long r522 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t521);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t523 = __lhs511;
  struct std__allocator_char_ r524 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(t523);
  ref_tmp0514 = r524;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r525 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(r516, r518, r520, r522, &ref_tmp0514);
    __retval513 = r525;
  {
    std__allocator_char____allocator(&ref_tmp0514);
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t526 = __retval513;
  return t526;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v527) {
bb528:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this529;
  this529 = v527;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t530 = this529;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t530);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t530->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb531:
  int __retval532;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ S533;
  struct std__allocator_char_ ref_tmp0534;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ S1535;
  struct std__allocator_char_ ref_tmp1536;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ T537;
  struct std__allocator_char_ ref_tmp2538;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp3539;
  int c540 = 0;
  __retval532 = c540;
  char* cast541 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0534);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&S533, cast541, &ref_tmp0534);
  {
    std__allocator_char____allocator(&ref_tmp0534);
  }
    char* cast542 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp1536);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&S1535, cast542, &ref_tmp1536);
    {
      std__allocator_char____allocator(&ref_tmp1536);
    }
      char* cast543 = (char*)&(_str_2);
      unsigned long c544 = 4;
      std__allocator_char___allocator_2(&ref_tmp2538);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&T537, cast543, c544, &ref_tmp2538);
      {
        std__allocator_char____allocator(&ref_tmp2538);
      }
        struct std__basic_ostream_char__std__char_traits_char__* r545 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &S533);
        struct std__basic_ostream_char__std__char_traits_char__* r546 = std__ostream__operator___std__ostream_____(r545, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        struct std__basic_ostream_char__std__char_traits_char__* r547 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r546, &S1535);
        struct std__basic_ostream_char__std__char_traits_char__* r548 = std__ostream__operator___std__ostream_____(r547, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        struct std__basic_ostream_char__std__char_traits_char__* r549 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r548, &T537);
        struct std__basic_ostream_char__std__char_traits_char__* r550 = std__ostream__operator___std__ostream_____(r549, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r551 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(&S533, &S1535);
        ref_tmp3539 = r551;
          _Bool r552 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&T537, &ref_tmp3539);
          if (r552) {
          } else {
            char* cast553 = (char*)&(_str_3);
            char* c554 = _str_4;
            unsigned int c555 = 20;
            char* cast556 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast553, c554, c555, cast556);
          }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp3539);
        }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&T537);
      }
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&S1535);
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&S533);
  }
  int t557 = __retval532;
  return t557;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v558) {
bb559:
  struct std____new_allocator_char_* this560;
  this560 = v558;
  struct std____new_allocator_char_* t561 = this560;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v562) {
bb563:
  char* __r564;
  char* __retval565;
  __r564 = v562;
  char* t566 = __r564;
  __retval565 = t566;
  char* t567 = __retval565;
  return t567;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v568) {
bb569:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this570;
  char* __retval571;
  this570 = v568;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t572 = this570;
  char* cast573 = (char*)&(t572->field2._M_local_buf);
  char* r574 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast573);
  __retval571 = r574;
  char* t575 = __retval571;
  return t575;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v576, char* v577, struct std__allocator_char_* v578) {
bb579:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this580;
  char* __dat581;
  struct std__allocator_char_* __a582;
  this580 = v576;
  __dat581 = v577;
  __a582 = v578;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t583 = this580;
  struct std__allocator_char_* base584 = (struct std__allocator_char_*)((char *)t583 + 0);
  struct std__allocator_char_* t585 = __a582;
  std__allocator_char___allocator(base584, t585);
    char* t586 = __dat581;
    t583->_M_p = t586;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb587:
  _Bool __retval588;
    _Bool c589 = 0;
    __retval588 = c589;
    _Bool t590 = __retval588;
    return t590;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v591, char* v592) {
bb593:
  char* __c1594;
  char* __c2595;
  _Bool __retval596;
  __c1594 = v591;
  __c2595 = v592;
  char* t597 = __c1594;
  char t598 = *t597;
  int cast599 = (int)t598;
  char* t600 = __c2595;
  char t601 = *t600;
  int cast602 = (int)t601;
  _Bool c603 = ((cast599 == cast602)) ? 1 : 0;
  __retval596 = c603;
  _Bool t604 = __retval596;
  return t604;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v605) {
bb606:
  char* __p607;
  unsigned long __retval608;
  unsigned long __i609;
  __p607 = v605;
  unsigned long c610 = 0;
  __i609 = c610;
    char ref_tmp0611;
    while (1) {
      unsigned long t612 = __i609;
      char* t613 = __p607;
      char* ptr614 = &(t613)[t612];
      char c615 = 0;
      ref_tmp0611 = c615;
      _Bool r616 = __gnu_cxx__char_traits_char___eq(ptr614, &ref_tmp0611);
      _Bool u617 = !r616;
      if (!u617) break;
      unsigned long t618 = __i609;
      unsigned long u619 = t618 + 1;
      __i609 = u619;
    }
  unsigned long t620 = __i609;
  __retval608 = t620;
  unsigned long t621 = __retval608;
  return t621;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v622) {
bb623:
  char* __s624;
  unsigned long __retval625;
  __s624 = v622;
    _Bool r626 = std____is_constant_evaluated();
    if (r626) {
      char* t627 = __s624;
      unsigned long r628 = __gnu_cxx__char_traits_char___length(t627);
      __retval625 = r628;
      unsigned long t629 = __retval625;
      return t629;
    }
  char* t630 = __s624;
  unsigned long r631 = strlen(t630);
  __retval625 = r631;
  unsigned long t632 = __retval625;
  return t632;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v633, char* v634, struct std__random_access_iterator_tag v635) {
bb636:
  char* __first637;
  char* __last638;
  struct std__random_access_iterator_tag unnamed639;
  long __retval640;
  __first637 = v633;
  __last638 = v634;
  unnamed639 = v635;
  char* t641 = __last638;
  char* t642 = __first637;
  long diff643 = t641 - t642;
  __retval640 = diff643;
  long t644 = __retval640;
  return t644;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v645) {
bb646:
  char** unnamed647;
  struct std__random_access_iterator_tag __retval648;
  unnamed647 = v645;
  struct std__random_access_iterator_tag t649 = __retval648;
  return t649;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v650, char* v651) {
bb652:
  char* __first653;
  char* __last654;
  long __retval655;
  struct std__random_access_iterator_tag agg_tmp0656;
  __first653 = v650;
  __last654 = v651;
  char* t657 = __first653;
  char* t658 = __last654;
  struct std__random_access_iterator_tag r659 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first653);
  agg_tmp0656 = r659;
  struct std__random_access_iterator_tag t660 = agg_tmp0656;
  long r661 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t657, t658, t660);
  __retval655 = r661;
  long t662 = __retval655;
  return t662;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v663, char* v664) {
bb665:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this666;
  char* __p667;
  this666 = v663;
  __p667 = v664;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t668 = this666;
  char* t669 = __p667;
  t668->_M_dataplus._M_p = t669;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v670) {
bb671:
  struct std__allocator_char_* __a672;
  unsigned long __retval673;
  __a672 = v670;
  unsigned long c674 = -1;
  unsigned long c675 = 1;
  unsigned long b676 = c674 / c675;
  __retval673 = b676;
  unsigned long t677 = __retval673;
  return t677;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v678) {
bb679:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this680;
  struct std__allocator_char_* __retval681;
  this680 = v678;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t682 = this680;
  struct std__allocator_char_* base683 = (struct std__allocator_char_*)((char *)&(t682->_M_dataplus) + 0);
  __retval681 = base683;
  struct std__allocator_char_* t684 = __retval681;
  return t684;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v685, unsigned long* v686) {
bb687:
  unsigned long* __a688;
  unsigned long* __b689;
  unsigned long* __retval690;
  __a688 = v685;
  __b689 = v686;
    unsigned long* t691 = __b689;
    unsigned long t692 = *t691;
    unsigned long* t693 = __a688;
    unsigned long t694 = *t693;
    _Bool c695 = ((t692 < t694)) ? 1 : 0;
    if (c695) {
      unsigned long* t696 = __b689;
      __retval690 = t696;
      unsigned long* t697 = __retval690;
      return t697;
    }
  unsigned long* t698 = __a688;
  __retval690 = t698;
  unsigned long* t699 = __retval690;
  return t699;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v700) {
bb701:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this702;
  unsigned long __retval703;
  unsigned long __diffmax704;
  unsigned long __allocmax705;
  this702 = v700;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t706 = this702;
  unsigned long c707 = 9223372036854775807;
  __diffmax704 = c707;
  struct std__allocator_char_* r708 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t706);
  unsigned long r709 = std__allocator_traits_std__allocator_char_____max_size(r708);
  __allocmax705 = r709;
  unsigned long* r710 = unsigned_long_const__std__min_unsigned_long_(&__diffmax704, &__allocmax705);
  unsigned long t711 = *r710;
  unsigned long c712 = 1;
  unsigned long b713 = t711 - c712;
  __retval703 = b713;
  unsigned long t714 = __retval703;
  return t714;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v715) {
bb716:
  struct std____new_allocator_char_* this717;
  unsigned long __retval718;
  this717 = v715;
  struct std____new_allocator_char_* t719 = this717;
  unsigned long c720 = 9223372036854775807;
  unsigned long c721 = 1;
  unsigned long b722 = c720 / c721;
  __retval718 = b722;
  unsigned long t723 = __retval718;
  return t723;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v724, unsigned long v725, void* v726) {
bb727:
  struct std____new_allocator_char_* this728;
  unsigned long __n729;
  void* unnamed730;
  char* __retval731;
  this728 = v724;
  __n729 = v725;
  unnamed730 = v726;
  struct std____new_allocator_char_* t732 = this728;
    unsigned long t733 = __n729;
    unsigned long r734 = std____new_allocator_char____M_max_size___const(t732);
    _Bool c735 = ((t733 > r734)) ? 1 : 0;
    if (c735) {
        unsigned long t736 = __n729;
        unsigned long c737 = -1;
        unsigned long c738 = 1;
        unsigned long b739 = c737 / c738;
        _Bool c740 = ((t736 > b739)) ? 1 : 0;
        if (c740) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c741 = 1;
    unsigned long c742 = 16;
    _Bool c743 = ((c741 > c742)) ? 1 : 0;
    if (c743) {
      unsigned long __al744;
      unsigned long c745 = 1;
      __al744 = c745;
      unsigned long t746 = __n729;
      unsigned long c747 = 1;
      unsigned long b748 = t746 * c747;
      unsigned long t749 = __al744;
      void* r750 = operator_new_2(b748, t749);
      char* cast751 = (char*)r750;
      __retval731 = cast751;
      char* t752 = __retval731;
      return t752;
    }
  unsigned long t753 = __n729;
  unsigned long c754 = 1;
  unsigned long b755 = t753 * c754;
  void* r756 = operator_new(b755);
  char* cast757 = (char*)r756;
  __retval731 = cast757;
  char* t758 = __retval731;
  return t758;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v759, unsigned long v760) {
bb761:
  struct std__allocator_char_* this762;
  unsigned long __n763;
  char* __retval764;
  this762 = v759;
  __n763 = v760;
  struct std__allocator_char_* t765 = this762;
    _Bool r766 = std____is_constant_evaluated();
    if (r766) {
        unsigned long t767 = __n763;
        unsigned long c768 = 1;
        unsigned long ovr769;
        _Bool ovf770 = __builtin_mul_overflow(t767, c768, &ovr769);
        __n763 = ovr769;
        if (ovf770) {
          std____throw_bad_array_new_length();
        }
      unsigned long t771 = __n763;
      void* r772 = operator_new(t771);
      char* cast773 = (char*)r772;
      __retval764 = cast773;
      char* t774 = __retval764;
      return t774;
    }
  struct std____new_allocator_char_* base775 = (struct std____new_allocator_char_*)((char *)t765 + 0);
  unsigned long t776 = __n763;
  void* c777 = ((void*)0);
  char* r778 = std____new_allocator_char___allocate(base775, t776, c777);
  __retval764 = r778;
  char* t779 = __retval764;
  return t779;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v780, unsigned long v781) {
bb782:
  struct std__allocator_char_* __a783;
  unsigned long __n784;
  char* __retval785;
  __a783 = v780;
  __n784 = v781;
  struct std__allocator_char_* t786 = __a783;
  unsigned long t787 = __n784;
  char* r788 = std__allocator_char___allocate(t786, t787);
  __retval785 = r788;
  char* t789 = __retval785;
  return t789;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v790, unsigned long v791) {
bb792:
  struct std__allocator_char_* __a793;
  unsigned long __n794;
  char* __retval795;
  char* __p796;
  __a793 = v790;
  __n794 = v791;
  struct std__allocator_char_* t797 = __a793;
  unsigned long t798 = __n794;
  char* r799 = std__allocator_traits_std__allocator_char_____allocate(t797, t798);
  __p796 = r799;
  char* t800 = __p796;
  __retval795 = t800;
  char* t801 = __retval795;
  return t801;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v802) {
bb803:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this804;
  struct std__allocator_char_* __retval805;
  this804 = v802;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t806 = this804;
  struct std__allocator_char_* base807 = (struct std__allocator_char_*)((char *)&(t806->_M_dataplus) + 0);
  __retval805 = base807;
  struct std__allocator_char_* t808 = __retval805;
  return t808;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v809, unsigned long* v810, unsigned long v811) {
bb812:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this813;
  unsigned long* __capacity814;
  unsigned long __old_capacity815;
  char* __retval816;
  this813 = v809;
  __capacity814 = v810;
  __old_capacity815 = v811;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t817 = this813;
    unsigned long* t818 = __capacity814;
    unsigned long t819 = *t818;
    unsigned long r820 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t817);
    _Bool c821 = ((t819 > r820)) ? 1 : 0;
    if (c821) {
      char* cast822 = (char*)&(_str_6);
      std____throw_length_error(cast822);
    }
    unsigned long* t823 = __capacity814;
    unsigned long t824 = *t823;
    unsigned long t825 = __old_capacity815;
    _Bool c826 = ((t824 > t825)) ? 1 : 0;
    _Bool ternary827;
    if (c826) {
      unsigned long* t828 = __capacity814;
      unsigned long t829 = *t828;
      unsigned long c830 = 2;
      unsigned long t831 = __old_capacity815;
      unsigned long b832 = c830 * t831;
      _Bool c833 = ((t829 < b832)) ? 1 : 0;
      ternary827 = (_Bool)c833;
    } else {
      _Bool c834 = 0;
      ternary827 = (_Bool)c834;
    }
    if (ternary827) {
      unsigned long c835 = 2;
      unsigned long t836 = __old_capacity815;
      unsigned long b837 = c835 * t836;
      unsigned long* t838 = __capacity814;
      *t838 = b837;
        unsigned long* t839 = __capacity814;
        unsigned long t840 = *t839;
        unsigned long r841 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t817);
        _Bool c842 = ((t840 > r841)) ? 1 : 0;
        if (c842) {
          unsigned long r843 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t817);
          unsigned long* t844 = __capacity814;
          *t844 = r843;
        }
    }
  struct std__allocator_char_* r845 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t817);
  unsigned long* t846 = __capacity814;
  unsigned long t847 = *t846;
  unsigned long c848 = 1;
  unsigned long b849 = t847 + c848;
  char* r850 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r845, b849);
  __retval816 = r850;
  char* t851 = __retval816;
  return t851;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v852, unsigned long v853) {
bb854:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this855;
  unsigned long __capacity856;
  this855 = v852;
  __capacity856 = v853;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t857 = this855;
  unsigned long t858 = __capacity856;
  t857->field2._M_allocated_capacity = t858;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb859:
  _Bool __retval860;
    _Bool c861 = 0;
    __retval860 = c861;
    _Bool t862 = __retval860;
    return t862;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v863) {
bb864:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this865;
  this865 = v863;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t866 = this865;
    _Bool r867 = std__is_constant_evaluated();
    if (r867) {
        unsigned long __i868;
        unsigned long c869 = 0;
        __i868 = c869;
        while (1) {
          unsigned long t871 = __i868;
          unsigned long c872 = 15;
          _Bool c873 = ((t871 <= c872)) ? 1 : 0;
          if (!c873) break;
          char c874 = 0;
          unsigned long t875 = __i868;
          t866->field2._M_local_buf[t875] = c874;
        for_step870: ;
          unsigned long t876 = __i868;
          unsigned long u877 = t876 + 1;
          __i868 = u877;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v878, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v879) {
bb880:
  struct _Guard* this881;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s882;
  this881 = v878;
  __s882 = v879;
  struct _Guard* t883 = this881;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t884 = __s882;
  t883->_M_guarded = t884;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v885, char* v886) {
bb887:
  char* __location888;
  char* __args889;
  char* __retval890;
  void* __loc891;
  __location888 = v885;
  __args889 = v886;
  char* t892 = __location888;
  void* cast893 = (void*)t892;
  __loc891 = cast893;
    void* t894 = __loc891;
    char* cast895 = (char*)t894;
    char* t896 = __args889;
    char t897 = *t896;
    *cast895 = t897;
    __retval890 = cast895;
    char* t898 = __retval890;
    return t898;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v899, char* v900) {
bb901:
  char* __c1902;
  char* __c2903;
  __c1902 = v899;
  __c2903 = v900;
    _Bool r904 = std____is_constant_evaluated();
    if (r904) {
      char* t905 = __c1902;
      char* t906 = __c2903;
      char* r907 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t905, t906);
    } else {
      char* t908 = __c2903;
      char t909 = *t908;
      char* t910 = __c1902;
      *t910 = t909;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v911, char* v912, unsigned long v913) {
bb914:
  char* __s1915;
  char* __s2916;
  unsigned long __n917;
  char* __retval918;
  __s1915 = v911;
  __s2916 = v912;
  __n917 = v913;
    unsigned long t919 = __n917;
    unsigned long c920 = 0;
    _Bool c921 = ((t919 == c920)) ? 1 : 0;
    if (c921) {
      char* t922 = __s1915;
      __retval918 = t922;
      char* t923 = __retval918;
      return t923;
    }
    _Bool r924 = std____is_constant_evaluated();
    if (r924) {
        unsigned long __i925;
        unsigned long c926 = 0;
        __i925 = c926;
        while (1) {
          unsigned long t928 = __i925;
          unsigned long t929 = __n917;
          _Bool c930 = ((t928 < t929)) ? 1 : 0;
          if (!c930) break;
          char* t931 = __s1915;
          unsigned long t932 = __i925;
          char* ptr933 = &(t931)[t932];
          unsigned long t934 = __i925;
          char* t935 = __s2916;
          char* ptr936 = &(t935)[t934];
          char* r937 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr933, ptr936);
        for_step927: ;
          unsigned long t938 = __i925;
          unsigned long u939 = t938 + 1;
          __i925 = u939;
        }
      char* t940 = __s1915;
      __retval918 = t940;
      char* t941 = __retval918;
      return t941;
    }
  char* t942 = __s1915;
  void* cast943 = (void*)t942;
  char* t944 = __s2916;
  void* cast945 = (void*)t944;
  unsigned long t946 = __n917;
  unsigned long c947 = 1;
  unsigned long b948 = t946 * c947;
  void* r949 = memcpy(cast943, cast945, b948);
  char* t950 = __s1915;
  __retval918 = t950;
  char* t951 = __retval918;
  return t951;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v952, char* v953, unsigned long v954) {
bb955:
  char* __s1956;
  char* __s2957;
  unsigned long __n958;
  char* __retval959;
  __s1956 = v952;
  __s2957 = v953;
  __n958 = v954;
    unsigned long t960 = __n958;
    unsigned long c961 = 0;
    _Bool c962 = ((t960 == c961)) ? 1 : 0;
    if (c962) {
      char* t963 = __s1956;
      __retval959 = t963;
      char* t964 = __retval959;
      return t964;
    }
    _Bool r965 = std____is_constant_evaluated();
    if (r965) {
      char* t966 = __s1956;
      char* t967 = __s2957;
      unsigned long t968 = __n958;
      char* r969 = __gnu_cxx__char_traits_char___copy(t966, t967, t968);
      __retval959 = r969;
      char* t970 = __retval959;
      return t970;
    }
  char* t971 = __s1956;
  void* cast972 = (void*)t971;
  char* t973 = __s2957;
  void* cast974 = (void*)t973;
  unsigned long t975 = __n958;
  void* r976 = memcpy(cast972, cast974, t975);
  char* cast977 = (char*)r976;
  __retval959 = cast977;
  char* t978 = __retval959;
  return t978;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v979, char* v980, unsigned long v981) {
bb982:
  char* __d983;
  char* __s984;
  unsigned long __n985;
  __d983 = v979;
  __s984 = v980;
  __n985 = v981;
    unsigned long t986 = __n985;
    unsigned long c987 = 1;
    _Bool c988 = ((t986 == c987)) ? 1 : 0;
    if (c988) {
      char* t989 = __d983;
      char* t990 = __s984;
      std__char_traits_char___assign(t989, t990);
    } else {
      char* t991 = __d983;
      char* t992 = __s984;
      unsigned long t993 = __n985;
      char* r994 = std__char_traits_char___copy(t991, t992, t993);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v995) {
bb996:
  char* __it997;
  char* __retval998;
  __it997 = v995;
  char* t999 = __it997;
  __retval998 = t999;
  char* t1000 = __retval998;
  return t1000;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1001, char* v1002, char* v1003) {
bb1004:
  char* __p1005;
  char* __k11006;
  char* __k21007;
  __p1005 = v1001;
  __k11006 = v1002;
  __k21007 = v1003;
    char* t1008 = __p1005;
    char* t1009 = __k11006;
    char* r1010 = char_const__std____niter_base_char_const__(t1009);
    char* t1011 = __k21007;
    char* t1012 = __k11006;
    long diff1013 = t1011 - t1012;
    unsigned long cast1014 = (unsigned long)diff1013;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1008, r1010, cast1014);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1015) {
bb1016:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1017;
  char* __retval1018;
  this1017 = v1015;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1019 = this1017;
  char* t1020 = t1019->_M_dataplus._M_p;
  __retval1018 = t1020;
  char* t1021 = __retval1018;
  return t1021;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1022, unsigned long v1023) {
bb1024:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1025;
  unsigned long __length1026;
  this1025 = v1022;
  __length1026 = v1023;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1027 = this1025;
  unsigned long t1028 = __length1026;
  t1027->_M_string_length = t1028;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1029, unsigned long v1030) {
bb1031:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1032;
  unsigned long __n1033;
  char ref_tmp01034;
  this1032 = v1029;
  __n1033 = v1030;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1035 = this1032;
  unsigned long t1036 = __n1033;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1035, t1036);
  unsigned long t1037 = __n1033;
  char* r1038 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1035);
  char* ptr1039 = &(r1038)[t1037];
  char c1040 = 0;
  ref_tmp01034 = c1040;
  std__char_traits_char___assign(ptr1039, &ref_tmp01034);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1041) {
bb1042:
  struct _Guard* this1043;
  this1043 = v1041;
  struct _Guard* t1044 = this1043;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1045 = t1044->_M_guarded;
    _Bool cast1046 = (_Bool)t1045;
    if (cast1046) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1047 = t1044->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1047);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1048, char* v1049, char* v1050, struct std__forward_iterator_tag v1051) {
bb1052:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1053;
  char* __beg1054;
  char* __end1055;
  struct std__forward_iterator_tag unnamed1056;
  unsigned long __dnew1057;
  struct _Guard __guard1058;
  this1053 = v1048;
  __beg1054 = v1049;
  __end1055 = v1050;
  unnamed1056 = v1051;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1059 = this1053;
  char* t1060 = __beg1054;
  char* t1061 = __end1055;
  long r1062 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1060, t1061);
  unsigned long cast1063 = (unsigned long)r1062;
  __dnew1057 = cast1063;
    unsigned long t1064 = __dnew1057;
    unsigned long c1065 = 15;
    _Bool c1066 = ((t1064 > c1065)) ? 1 : 0;
    if (c1066) {
      unsigned long c1067 = 0;
      char* r1068 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1059, &__dnew1057, c1067);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1059, r1068);
      unsigned long t1069 = __dnew1057;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1059, t1069);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1059);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1058, t1059);
    char* r1070 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1059);
    char* t1071 = __beg1054;
    char* t1072 = __end1055;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1070, t1071, t1072);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1073 = ((void*)0);
    __guard1058._M_guarded = c1073;
    unsigned long t1074 = __dnew1057;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1059, t1074);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1058);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1075) {
bb1076:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1077;
  this1077 = v1075;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1078 = this1077;
  {
    struct std__allocator_char_* base1079 = (struct std__allocator_char_*)((char *)t1078 + 0);
    std__allocator_char____allocator(base1079);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1080, struct std____new_allocator_char_* v1081) {
bb1082:
  struct std____new_allocator_char_* this1083;
  struct std____new_allocator_char_* unnamed1084;
  this1083 = v1080;
  unnamed1084 = v1081;
  struct std____new_allocator_char_* t1085 = this1083;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1086) {
bb1087:
  char* __r1088;
  char* __retval1089;
  __r1088 = v1086;
  char* t1090 = __r1088;
  __retval1089 = t1090;
  char* t1091 = __retval1089;
  return t1091;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1092) {
bb1093:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1094;
  char* __retval1095;
  this1094 = v1092;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1096 = this1094;
  char* cast1097 = (char*)&(t1096->field2._M_local_buf);
  char* r1098 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1097);
  __retval1095 = r1098;
  char* t1099 = __retval1095;
  return t1099;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1100) {
bb1101:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1102;
  _Bool __retval1103;
  this1102 = v1100;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1104 = this1102;
    char* r1105 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1104);
    char* r1106 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1104);
    _Bool c1107 = ((r1105 == r1106)) ? 1 : 0;
    if (c1107) {
        unsigned long t1108 = t1104->_M_string_length;
        unsigned long c1109 = 15;
        _Bool c1110 = ((t1108 > c1109)) ? 1 : 0;
        if (c1110) {
          __builtin_unreachable();
        }
      _Bool c1111 = 1;
      __retval1103 = c1111;
      _Bool t1112 = __retval1103;
      return t1112;
    }
  _Bool c1113 = 0;
  __retval1103 = c1113;
  _Bool t1114 = __retval1103;
  return t1114;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1115, char* v1116, unsigned long v1117) {
bb1118:
  struct std____new_allocator_char_* this1119;
  char* __p1120;
  unsigned long __n1121;
  this1119 = v1115;
  __p1120 = v1116;
  __n1121 = v1117;
  struct std____new_allocator_char_* t1122 = this1119;
    unsigned long c1123 = 1;
    unsigned long c1124 = 16;
    _Bool c1125 = ((c1123 > c1124)) ? 1 : 0;
    if (c1125) {
      char* t1126 = __p1120;
      void* cast1127 = (void*)t1126;
      unsigned long t1128 = __n1121;
      unsigned long c1129 = 1;
      unsigned long b1130 = t1128 * c1129;
      unsigned long c1131 = 1;
      operator_delete_3(cast1127, b1130, c1131);
      return;
    }
  char* t1132 = __p1120;
  void* cast1133 = (void*)t1132;
  unsigned long t1134 = __n1121;
  unsigned long c1135 = 1;
  unsigned long b1136 = t1134 * c1135;
  operator_delete_2(cast1133, b1136);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1137, char* v1138, unsigned long v1139) {
bb1140:
  struct std__allocator_char_* this1141;
  char* __p1142;
  unsigned long __n1143;
  this1141 = v1137;
  __p1142 = v1138;
  __n1143 = v1139;
  struct std__allocator_char_* t1144 = this1141;
    _Bool r1145 = std____is_constant_evaluated();
    if (r1145) {
      char* t1146 = __p1142;
      void* cast1147 = (void*)t1146;
      operator_delete(cast1147);
      return;
    }
  struct std____new_allocator_char_* base1148 = (struct std____new_allocator_char_*)((char *)t1144 + 0);
  char* t1149 = __p1142;
  unsigned long t1150 = __n1143;
  std____new_allocator_char___deallocate(base1148, t1149, t1150);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1151, char* v1152, unsigned long v1153) {
bb1154:
  struct std__allocator_char_* __a1155;
  char* __p1156;
  unsigned long __n1157;
  __a1155 = v1151;
  __p1156 = v1152;
  __n1157 = v1153;
  struct std__allocator_char_* t1158 = __a1155;
  char* t1159 = __p1156;
  unsigned long t1160 = __n1157;
  std__allocator_char___deallocate(t1158, t1159, t1160);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1161, unsigned long v1162) {
bb1163:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1164;
  unsigned long __size1165;
  this1164 = v1161;
  __size1165 = v1162;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1166 = this1164;
  struct std__allocator_char_* r1167 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1166);
  char* r1168 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1166);
  unsigned long t1169 = __size1165;
  unsigned long c1170 = 1;
  unsigned long b1171 = t1169 + c1170;
  std__allocator_traits_std__allocator_char_____deallocate(r1167, r1168, b1171);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1172) {
bb1173:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1174;
  this1174 = v1172;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1175 = this1174;
    _Bool r1176 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1175);
    _Bool u1177 = !r1176;
    if (u1177) {
      unsigned long t1178 = t1175->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1175, t1178);
    }
  return;
}

