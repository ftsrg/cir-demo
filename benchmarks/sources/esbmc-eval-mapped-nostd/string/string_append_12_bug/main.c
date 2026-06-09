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

char _str[9] = "Writing ";
char _str_1[25] = "print 10 and then 5 more";
char _str_2[11] = "..........";
char _str_3[20] = "str != \"..........\"";
char _str_4[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_append_12_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[50] = "basic_string: construction from null is not valid";
char _str_6[24] = "basic_string::_M_create";
char _str_7[29] = "basic_string::_M_replace_aux";
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void __gnu_cxx__char_traits_char___assign_2(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___assign(char* p0, unsigned long p1, char p2);
extern void* memset(void* p0, int p1, unsigned long p2);
char* std__char_traits_char___assign(char* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* p0, unsigned long p1, char p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, unsigned long p3, char p4);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char p2);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std____is_constant_evaluated();
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign_2(char* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
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
bb1:
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
bb8:
  struct std__allocator_char_* this9;
  this9 = v7;
  struct std__allocator_char_* t10 = this9;
  struct std____new_allocator_char_* base11 = (struct std____new_allocator_char_*)((char *)t10 + 0);
  std____new_allocator_char_____new_allocator_2(base11);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v12, char* v13, struct std__allocator_char_* v14) {
bb15:
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
bb36:
  struct std__allocator_char_* this37;
  this37 = v35;
  struct std__allocator_char_* t38 = this37;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v39, unsigned long v40, unsigned long v41, char* v42) {
bb43:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this44;
  unsigned long __n145;
  unsigned long __n246;
  char* __s47;
  this44 = v39;
  __n145 = v40;
  __n246 = v41;
  __s47 = v42;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t48 = this44;
    unsigned long r49 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t48);
    unsigned long r50 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t48);
    unsigned long t51 = __n145;
    unsigned long b52 = r50 - t51;
    unsigned long b53 = r49 - b52;
    unsigned long t54 = __n246;
    _Bool c55 = ((b53 < t54)) ? 1 : 0;
    if (c55) {
      char* t56 = __s47;
      std____throw_length_error(t56);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v57) {
bb58:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this59;
  unsigned long __retval60;
  unsigned long __sz61;
  this59 = v57;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t62 = this59;
  _Bool r63 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t62);
  unsigned long ternary64;
  if (r63) {
    unsigned long c65 = 15;
    ternary64 = (unsigned long)c65;
  } else {
    unsigned long t66 = t62->field2._M_allocated_capacity;
    ternary64 = (unsigned long)t66;
  }
  __sz61 = ternary64;
    unsigned long t67 = __sz61;
    unsigned long c68 = 15;
    _Bool c69 = ((t67 < c68)) ? 1 : 0;
    _Bool ternary70;
    if (c69) {
      _Bool c71 = 1;
      ternary70 = (_Bool)c71;
    } else {
      unsigned long t72 = __sz61;
      unsigned long r73 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t62);
      _Bool c74 = ((t72 > r73)) ? 1 : 0;
      ternary70 = (_Bool)c74;
    }
    if (ternary70) {
      __builtin_unreachable();
    }
  unsigned long t75 = __sz61;
  __retval60 = t75;
  unsigned long t76 = __retval60;
  return t76;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign_2(char* v77, char* v78) {
bb79:
  char* __c180;
  char* __c281;
  __c180 = v77;
  __c281 = v78;
    _Bool r82 = std____is_constant_evaluated();
    if (r82) {
      char* t83 = __c180;
      char* t84 = __c281;
      char* r85 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t83, t84);
    } else {
      char* t86 = __c281;
      char t87 = *t86;
      char* t88 = __c180;
      *t88 = t87;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v89, char* v90, unsigned long v91) {
bb92:
  char* __s193;
  char* __s294;
  unsigned long __n95;
  char* __retval96;
  __s193 = v89;
  __s294 = v90;
  __n95 = v91;
    unsigned long t97 = __n95;
    unsigned long c98 = 0;
    _Bool c99 = ((t97 == c98)) ? 1 : 0;
    if (c99) {
      char* t100 = __s193;
      __retval96 = t100;
      char* t101 = __retval96;
      return t101;
    }
    _Bool r102 = std____is_constant_evaluated();
    if (r102) {
        char* t103 = __s294;
        char* t104 = __s193;
        _Bool c105 = ((t103 < t104)) ? 1 : 0;
        _Bool isconst106 = 0;
        _Bool ternary107;
        if (isconst106) {
          char* t108 = __s193;
          char* t109 = __s294;
          _Bool c110 = ((t108 > t109)) ? 1 : 0;
          ternary107 = (_Bool)c110;
        } else {
          _Bool c111 = 0;
          ternary107 = (_Bool)c111;
        }
        _Bool ternary112;
        if (ternary107) {
          char* t113 = __s193;
          char* t114 = __s294;
          unsigned long t115 = __n95;
          char* ptr116 = &(t114)[t115];
          _Bool c117 = ((t113 < ptr116)) ? 1 : 0;
          ternary112 = (_Bool)c117;
        } else {
          _Bool c118 = 0;
          ternary112 = (_Bool)c118;
        }
        if (ternary112) {
            do {
                unsigned long t119 = __n95;
                unsigned long u120 = t119 - 1;
                __n95 = u120;
                unsigned long t121 = __n95;
                char* t122 = __s193;
                char* ptr123 = &(t122)[t121];
                unsigned long t124 = __n95;
                char* t125 = __s294;
                char* ptr126 = &(t125)[t124];
                __gnu_cxx__char_traits_char___assign_2(ptr123, ptr126);
              unsigned long t127 = __n95;
              unsigned long c128 = 0;
              _Bool c129 = ((t127 > c128)) ? 1 : 0;
              if (!c129) break;
            } while (1);
        } else {
          char* t130 = __s193;
          char* t131 = __s294;
          unsigned long t132 = __n95;
          char* r133 = __gnu_cxx__char_traits_char___copy(t130, t131, t132);
        }
      char* t134 = __s193;
      __retval96 = t134;
      char* t135 = __retval96;
      return t135;
    }
  char* t136 = __s193;
  void* cast137 = (void*)t136;
  char* t138 = __s294;
  void* cast139 = (void*)t138;
  unsigned long t140 = __n95;
  unsigned long c141 = 1;
  unsigned long b142 = t140 * c141;
  void* r143 = memmove(cast137, cast139, b142);
  char* t144 = __s193;
  __retval96 = t144;
  char* t145 = __retval96;
  return t145;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v146, char* v147, unsigned long v148) {
bb149:
  char* __s1150;
  char* __s2151;
  unsigned long __n152;
  char* __retval153;
  __s1150 = v146;
  __s2151 = v147;
  __n152 = v148;
    unsigned long t154 = __n152;
    unsigned long c155 = 0;
    _Bool c156 = ((t154 == c155)) ? 1 : 0;
    if (c156) {
      char* t157 = __s1150;
      __retval153 = t157;
      char* t158 = __retval153;
      return t158;
    }
    _Bool r159 = std____is_constant_evaluated();
    if (r159) {
      char* t160 = __s1150;
      char* t161 = __s2151;
      unsigned long t162 = __n152;
      char* r163 = __gnu_cxx__char_traits_char___move(t160, t161, t162);
      __retval153 = r163;
      char* t164 = __retval153;
      return t164;
    }
  char* t165 = __s1150;
  void* cast166 = (void*)t165;
  char* t167 = __s2151;
  void* cast168 = (void*)t167;
  unsigned long t169 = __n152;
  void* r170 = memmove(cast166, cast168, t169);
  char* cast171 = (char*)r170;
  __retval153 = cast171;
  char* t172 = __retval153;
  return t172;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v173, char* v174, unsigned long v175) {
bb176:
  char* __d177;
  char* __s178;
  unsigned long __n179;
  __d177 = v173;
  __s178 = v174;
  __n179 = v175;
    unsigned long t180 = __n179;
    unsigned long c181 = 1;
    _Bool c182 = ((t180 == c181)) ? 1 : 0;
    if (c182) {
      char* t183 = __d177;
      char* t184 = __s178;
      std__char_traits_char___assign_2(t183, t184);
    } else {
      char* t185 = __d177;
      char* t186 = __s178;
      unsigned long t187 = __n179;
      char* r188 = std__char_traits_char___move(t185, t186, t187);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v189) {
bb190:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this191;
  unsigned long __retval192;
  this191 = v189;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t193 = this191;
  unsigned long r194 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t193);
  __retval192 = r194;
  unsigned long t195 = __retval192;
  return t195;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v196, unsigned long v197, unsigned long v198, char* v199, unsigned long v200) {
bb201:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this202;
  unsigned long __pos203;
  unsigned long __len1204;
  char* __s205;
  unsigned long __len2206;
  unsigned long __how_much207;
  unsigned long __new_capacity208;
  char* __r209;
  this202 = v196;
  __pos203 = v197;
  __len1204 = v198;
  __s205 = v199;
  __len2206 = v200;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t210 = this202;
  unsigned long r211 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t210);
  unsigned long t212 = __pos203;
  unsigned long b213 = r211 - t212;
  unsigned long t214 = __len1204;
  unsigned long b215 = b213 - t214;
  __how_much207 = b215;
  unsigned long r216 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t210);
  unsigned long t217 = __len2206;
  unsigned long b218 = r216 + t217;
  unsigned long t219 = __len1204;
  unsigned long b220 = b218 - t219;
  __new_capacity208 = b220;
  unsigned long r221 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t210);
  char* r222 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t210, &__new_capacity208, r221);
  __r209 = r222;
    unsigned long t223 = __pos203;
    _Bool cast224 = (_Bool)t223;
    if (cast224) {
      char* t225 = __r209;
      char* r226 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t210);
      unsigned long t227 = __pos203;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t225, r226, t227);
    }
    char* t228 = __s205;
    _Bool cast229 = (_Bool)t228;
    _Bool ternary230;
    if (cast229) {
      unsigned long t231 = __len2206;
      _Bool cast232 = (_Bool)t231;
      ternary230 = (_Bool)cast232;
    } else {
      _Bool c233 = 0;
      ternary230 = (_Bool)c233;
    }
    if (ternary230) {
      char* t234 = __r209;
      unsigned long t235 = __pos203;
      char* ptr236 = &(t234)[t235];
      char* t237 = __s205;
      unsigned long t238 = __len2206;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr236, t237, t238);
    }
    unsigned long t239 = __how_much207;
    _Bool cast240 = (_Bool)t239;
    if (cast240) {
      char* t241 = __r209;
      unsigned long t242 = __pos203;
      char* ptr243 = &(t241)[t242];
      unsigned long t244 = __len2206;
      char* ptr245 = &(ptr243)[t244];
      char* r246 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t210);
      unsigned long t247 = __pos203;
      char* ptr248 = &(r246)[t247];
      unsigned long t249 = __len1204;
      char* ptr250 = &(ptr248)[t249];
      unsigned long t251 = __how_much207;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr245, ptr250, t251);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t210);
  char* t252 = __r209;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t210, t252);
  unsigned long t253 = __new_capacity208;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t210, t253);
  return;
}

// function: _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* v254, char* v255) {
bb256:
  char* __location257;
  char* __args258;
  char* __retval259;
  void* __loc260;
  __location257 = v254;
  __args258 = v255;
  char* t261 = __location257;
  void* cast262 = (void*)t261;
  __loc260 = cast262;
    void* t263 = __loc260;
    char* cast264 = (char*)t263;
    char* t265 = __args258;
    char t266 = *t265;
    *cast264 = t266;
    __retval259 = cast264;
    char* t267 = __retval259;
    return t267;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignEPcmc
char* __gnu_cxx__char_traits_char___assign(char* v268, unsigned long v269, char v270) {
bb271:
  char* __s272;
  unsigned long __n273;
  char __a274;
  char* __retval275;
  __s272 = v268;
  __n273 = v269;
  __a274 = v270;
    _Bool r276 = std____is_constant_evaluated();
    if (r276) {
        unsigned long __i277;
        unsigned long c278 = 0;
        __i277 = c278;
        while (1) {
          unsigned long t280 = __i277;
          unsigned long t281 = __n273;
          _Bool c282 = ((t280 < t281)) ? 1 : 0;
          if (!c282) break;
          char* t283 = __s272;
          unsigned long t284 = __i277;
          char* ptr285 = &(t283)[t284];
          char* r286 = _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(ptr285, &__a274);
        for_step279: ;
          unsigned long t287 = __i277;
          unsigned long u288 = t287 + 1;
          __i277 = u288;
        }
      char* t289 = __s272;
      __retval275 = t289;
      char* t290 = __retval275;
      return t290;
    }
      unsigned long t291 = __n273;
      _Bool cast292 = (_Bool)t291;
      if (cast292) {
        unsigned char __c293;
        void* cast294 = (void*)&(__c293);
        void* cast295 = (void*)&(__a274);
        unsigned long c296 = 1;
        void* r297 = memcpy(cast294, cast295, c296);
        char* t298 = __s272;
        void* cast299 = (void*)t298;
        unsigned char t300 = __c293;
        int cast301 = (int)t300;
        unsigned long t302 = __n273;
        void* r303 = memset(cast299, cast301, t302);
      }
  char* t304 = __s272;
  __retval275 = t304;
  char* t305 = __retval275;
  return t305;
}

// function: _ZNSt11char_traitsIcE6assignEPcmc
char* std__char_traits_char___assign(char* v306, unsigned long v307, char v308) {
bb309:
  char* __s310;
  unsigned long __n311;
  char __a312;
  char* __retval313;
  __s310 = v306;
  __n311 = v307;
  __a312 = v308;
    unsigned long t314 = __n311;
    unsigned long c315 = 0;
    _Bool c316 = ((t314 == c315)) ? 1 : 0;
    if (c316) {
      char* t317 = __s310;
      __retval313 = t317;
      char* t318 = __retval313;
      return t318;
    }
    _Bool r319 = std____is_constant_evaluated();
    if (r319) {
      char* t320 = __s310;
      unsigned long t321 = __n311;
      char t322 = __a312;
      char* r323 = __gnu_cxx__char_traits_char___assign(t320, t321, t322);
      __retval313 = r323;
      char* t324 = __retval313;
      return t324;
    }
  char* t325 = __s310;
  void* cast326 = (void*)t325;
  char t327 = __a312;
  int cast328 = (int)t327;
  unsigned long t329 = __n311;
  void* r330 = memset(cast326, cast328, t329);
  char* cast331 = (char*)r330;
  __retval313 = cast331;
  char* t332 = __retval313;
  return t332;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_S_assignEPcmc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* v333, unsigned long v334, char v335) {
bb336:
  char* __d337;
  unsigned long __n338;
  char __c339;
  __d337 = v333;
  __n338 = v334;
  __c339 = v335;
    unsigned long t340 = __n338;
    unsigned long c341 = 1;
    _Bool c342 = ((t340 == c341)) ? 1 : 0;
    if (c342) {
      char* t343 = __d337;
      std__char_traits_char___assign_2(t343, &__c339);
    } else {
      char* t344 = __d337;
      unsigned long t345 = __n338;
      char t346 = __c339;
      char* r347 = std__char_traits_char___assign(t344, t345, t346);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE14_M_replace_auxEmmmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v348, unsigned long v349, unsigned long v350, unsigned long v351, char v352) {
bb353:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this354;
  unsigned long __pos1355;
  unsigned long __n1356;
  unsigned long __n2357;
  char __c358;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval359;
  unsigned long __old_size360;
  unsigned long __new_size361;
  this354 = v348;
  __pos1355 = v349;
  __n1356 = v350;
  __n2357 = v351;
  __c358 = v352;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t362 = this354;
  unsigned long t363 = __n1356;
  unsigned long t364 = __n2357;
  char* cast365 = (char*)&(_str_7);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t362, t363, t364, cast365);
  unsigned long r366 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t362);
  __old_size360 = r366;
  unsigned long t367 = __old_size360;
  unsigned long t368 = __n2357;
  unsigned long b369 = t367 + t368;
  unsigned long t370 = __n1356;
  unsigned long b371 = b369 - t370;
  __new_size361 = b371;
    unsigned long t372 = __new_size361;
    unsigned long r373 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t362);
    _Bool c374 = ((t372 <= r373)) ? 1 : 0;
    if (c374) {
      char* __p375;
      unsigned long __how_much376;
      char* r377 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t362);
      unsigned long t378 = __pos1355;
      char* ptr379 = &(r377)[t378];
      __p375 = ptr379;
      unsigned long t380 = __old_size360;
      unsigned long t381 = __pos1355;
      unsigned long b382 = t380 - t381;
      unsigned long t383 = __n1356;
      unsigned long b384 = b382 - t383;
      __how_much376 = b384;
        unsigned long t385 = __how_much376;
        _Bool cast386 = (_Bool)t385;
        _Bool ternary387;
        if (cast386) {
          unsigned long t388 = __n1356;
          unsigned long t389 = __n2357;
          _Bool c390 = ((t388 != t389)) ? 1 : 0;
          ternary387 = (_Bool)c390;
        } else {
          _Bool c391 = 0;
          ternary387 = (_Bool)c391;
        }
        if (ternary387) {
          char* t392 = __p375;
          unsigned long t393 = __n2357;
          char* ptr394 = &(t392)[t393];
          char* t395 = __p375;
          unsigned long t396 = __n1356;
          char* ptr397 = &(t395)[t396];
          unsigned long t398 = __how_much376;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr394, ptr397, t398);
        }
    } else {
      unsigned long t399 = __pos1355;
      unsigned long t400 = __n1356;
      char* c401 = ((void*)0);
      unsigned long t402 = __n2357;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t362, t399, t400, c401, t402);
    }
    unsigned long t403 = __n2357;
    _Bool cast404 = (_Bool)t403;
    if (cast404) {
      char* r405 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t362);
      unsigned long t406 = __pos1355;
      char* ptr407 = &(r405)[t406];
      unsigned long t408 = __n2357;
      char t409 = __c358;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(ptr407, t408, t409);
    }
  unsigned long t410 = __new_size361;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t362, t410);
  __retval359 = t362;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t411 = __retval359;
  return t411;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v412) {
bb413:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this414;
  unsigned long __retval415;
  unsigned long __sz416;
  this414 = v412;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t417 = this414;
  unsigned long t418 = t417->_M_string_length;
  __sz416 = t418;
    unsigned long t419 = __sz416;
    unsigned long r420 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t417);
    _Bool c421 = ((t419 > r420)) ? 1 : 0;
    if (c421) {
      __builtin_unreachable();
    }
  unsigned long t422 = __sz416;
  __retval415 = t422;
  unsigned long t423 = __retval415;
  return t423;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v424, unsigned long v425, char v426) {
bb427:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this428;
  unsigned long __n429;
  char __c430;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval431;
  this428 = v424;
  __n429 = v425;
  __c430 = v426;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t432 = this428;
  unsigned long r433 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t432);
  unsigned long c434 = 0;
  unsigned long t435 = __n429;
  char t436 = __c430;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r437 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(t432, r433, c434, t435, t436);
  __retval431 = r437;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t438 = __retval431;
  return t438;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v439, char* v440) {
bb441:
  char* __c1442;
  char* __c2443;
  _Bool __retval444;
  __c1442 = v439;
  __c2443 = v440;
  char* t445 = __c1442;
  char t446 = *t445;
  unsigned char cast447 = (unsigned char)t446;
  int cast448 = (int)cast447;
  char* t449 = __c2443;
  char t450 = *t449;
  unsigned char cast451 = (unsigned char)t450;
  int cast452 = (int)cast451;
  _Bool c453 = ((cast448 < cast452)) ? 1 : 0;
  __retval444 = c453;
  _Bool t454 = __retval444;
  return t454;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v455, char* v456, unsigned long v457) {
bb458:
  char* __s1459;
  char* __s2460;
  unsigned long __n461;
  int __retval462;
  __s1459 = v455;
  __s2460 = v456;
  __n461 = v457;
    unsigned long t463 = __n461;
    unsigned long c464 = 0;
    _Bool c465 = ((t463 == c464)) ? 1 : 0;
    if (c465) {
      int c466 = 0;
      __retval462 = c466;
      int t467 = __retval462;
      return t467;
    }
    _Bool r468 = std____is_constant_evaluated();
    if (r468) {
        unsigned long __i469;
        unsigned long c470 = 0;
        __i469 = c470;
        while (1) {
          unsigned long t472 = __i469;
          unsigned long t473 = __n461;
          _Bool c474 = ((t472 < t473)) ? 1 : 0;
          if (!c474) break;
            unsigned long t475 = __i469;
            char* t476 = __s1459;
            char* ptr477 = &(t476)[t475];
            unsigned long t478 = __i469;
            char* t479 = __s2460;
            char* ptr480 = &(t479)[t478];
            _Bool r481 = std__char_traits_char___lt(ptr477, ptr480);
            if (r481) {
              int c482 = -1;
              __retval462 = c482;
              int t483 = __retval462;
              int ret_val484 = t483;
              return ret_val484;
            } else {
                unsigned long t485 = __i469;
                char* t486 = __s2460;
                char* ptr487 = &(t486)[t485];
                unsigned long t488 = __i469;
                char* t489 = __s1459;
                char* ptr490 = &(t489)[t488];
                _Bool r491 = std__char_traits_char___lt(ptr487, ptr490);
                if (r491) {
                  int c492 = 1;
                  __retval462 = c492;
                  int t493 = __retval462;
                  int ret_val494 = t493;
                  return ret_val494;
                }
            }
        for_step471: ;
          unsigned long t495 = __i469;
          unsigned long u496 = t495 + 1;
          __i469 = u496;
        }
      int c497 = 0;
      __retval462 = c497;
      int t498 = __retval462;
      return t498;
    }
  char* t499 = __s1459;
  void* cast500 = (void*)t499;
  char* t501 = __s2460;
  void* cast502 = (void*)t501;
  unsigned long t503 = __n461;
  int r504 = memcmp(cast500, cast502, t503);
  __retval462 = r504;
  int t505 = __retval462;
  return t505;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v506) {
bb507:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this508;
  char* __retval509;
  this508 = v506;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t510 = this508;
  char* r511 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t510);
  __retval509 = r511;
  char* t512 = __retval509;
  return t512;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v513, char* v514) {
bb515:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs516;
  char* __rhs517;
  _Bool __retval518;
  __lhs516 = v513;
  __rhs517 = v514;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t519 = __lhs516;
  unsigned long r520 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t519);
  char* t521 = __rhs517;
  unsigned long r522 = std__char_traits_char___length(t521);
  _Bool c523 = ((r520 == r522)) ? 1 : 0;
  _Bool ternary524;
  if (c523) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t525 = __lhs516;
    char* r526 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t525);
    char* t527 = __rhs517;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t528 = __lhs516;
    unsigned long r529 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t528);
    int r530 = std__char_traits_char___compare(r526, t527, r529);
    _Bool cast531 = (_Bool)r530;
    _Bool u532 = !cast531;
    ternary524 = (_Bool)u532;
  } else {
    _Bool c533 = 0;
    ternary524 = (_Bool)c533;
  }
  __retval518 = ternary524;
  _Bool t534 = __retval518;
  return t534;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v535, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v536) {
bb537:
  struct std__basic_ostream_char__std__char_traits_char__* __os538;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str539;
  struct std__basic_ostream_char__std__char_traits_char__* __retval540;
  __os538 = v535;
  __str539 = v536;
  struct std__basic_ostream_char__std__char_traits_char__* t541 = __os538;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t542 = __str539;
  char* r543 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t542);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t544 = __str539;
  unsigned long r545 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t544);
  long cast546 = (long)r545;
  struct std__basic_ostream_char__std__char_traits_char__* r547 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t541, r543, cast546);
  __retval540 = r547;
  struct std__basic_ostream_char__std__char_traits_char__* t548 = __retval540;
  return t548;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v549, void* v550) {
bb551:
  struct std__basic_ostream_char__std__char_traits_char__* this552;
  void* __pf553;
  struct std__basic_ostream_char__std__char_traits_char__* __retval554;
  this552 = v549;
  __pf553 = v550;
  struct std__basic_ostream_char__std__char_traits_char__* t555 = this552;
  void* t556 = __pf553;
  struct std__basic_ostream_char__std__char_traits_char__* r557 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t556)(t555);
  __retval554 = r557;
  struct std__basic_ostream_char__std__char_traits_char__* t558 = __retval554;
  return t558;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v559) {
bb560:
  struct std__basic_ostream_char__std__char_traits_char__* __os561;
  struct std__basic_ostream_char__std__char_traits_char__* __retval562;
  __os561 = v559;
  struct std__basic_ostream_char__std__char_traits_char__* t563 = __os561;
  struct std__basic_ostream_char__std__char_traits_char__* r564 = std__ostream__flush(t563);
  __retval562 = r564;
  struct std__basic_ostream_char__std__char_traits_char__* t565 = __retval562;
  return t565;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v566) {
bb567:
  struct std__ctype_char_* __f568;
  struct std__ctype_char_* __retval569;
  __f568 = v566;
    struct std__ctype_char_* t570 = __f568;
    _Bool cast571 = (_Bool)t570;
    _Bool u572 = !cast571;
    if (u572) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t573 = __f568;
  __retval569 = t573;
  struct std__ctype_char_* t574 = __retval569;
  return t574;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v575, char v576) {
bb577:
  struct std__ctype_char_* this578;
  char __c579;
  char __retval580;
  this578 = v575;
  __c579 = v576;
  struct std__ctype_char_* t581 = this578;
    char t582 = t581->_M_widen_ok;
    _Bool cast583 = (_Bool)t582;
    if (cast583) {
      char t584 = __c579;
      unsigned char cast585 = (unsigned char)t584;
      unsigned long cast586 = (unsigned long)cast585;
      char t587 = t581->_M_widen[cast586];
      __retval580 = t587;
      char t588 = __retval580;
      return t588;
    }
  std__ctype_char____M_widen_init___const(t581);
  char t589 = __c579;
  void** v590 = (void**)t581;
  void* v591 = *((void**)v590);
  char vcall594 = (char)__VERIFIER_virtual_call_char_char(t581, 6, t589);
  __retval580 = vcall594;
  char t595 = __retval580;
  return t595;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v596, char v597) {
bb598:
  struct std__basic_ios_char__std__char_traits_char__* this599;
  char __c600;
  char __retval601;
  this599 = v596;
  __c600 = v597;
  struct std__basic_ios_char__std__char_traits_char__* t602 = this599;
  struct std__ctype_char_* t603 = t602->_M_ctype;
  struct std__ctype_char_* r604 = std__ctype_char__const__std____check_facet_std__ctype_char___(t603);
  char t605 = __c600;
  char r606 = std__ctype_char___widen_char__const(r604, t605);
  __retval601 = r606;
  char t607 = __retval601;
  return t607;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v608) {
bb609:
  struct std__basic_ostream_char__std__char_traits_char__* __os610;
  struct std__basic_ostream_char__std__char_traits_char__* __retval611;
  __os610 = v608;
  struct std__basic_ostream_char__std__char_traits_char__* t612 = __os610;
  struct std__basic_ostream_char__std__char_traits_char__* t613 = __os610;
  void** v614 = (void**)t613;
  void* v615 = *((void**)v614);
  unsigned char* cast616 = (unsigned char*)v615;
  long c617 = -24;
  unsigned char* ptr618 = &(cast616)[c617];
  long* cast619 = (long*)ptr618;
  long t620 = *cast619;
  unsigned char* cast621 = (unsigned char*)t613;
  unsigned char* ptr622 = &(cast621)[t620];
  struct std__basic_ostream_char__std__char_traits_char__* cast623 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr622;
  struct std__basic_ios_char__std__char_traits_char__* cast624 = (struct std__basic_ios_char__std__char_traits_char__*)cast623;
  char c625 = 10;
  char r626 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast624, c625);
  struct std__basic_ostream_char__std__char_traits_char__* r627 = std__ostream__put(t612, r626);
  struct std__basic_ostream_char__std__char_traits_char__* r628 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r627);
  __retval611 = r628;
  struct std__basic_ostream_char__std__char_traits_char__* t629 = __retval611;
  return t629;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v630) {
bb631:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this632;
  this632 = v630;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t633 = this632;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t633);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t633->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb634:
  int __retval635;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str636;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2637;
  struct std__allocator_char_ ref_tmp0638;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3639;
  struct std__allocator_char_ ref_tmp1640;
  int c641 = 0;
  __retval635 = c641;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str636);
    char* cast642 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp0638);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str2637, cast642, &ref_tmp0638);
    {
      std__allocator_char____allocator(&ref_tmp0638);
    }
      char* cast643 = (char*)&(_str_1);
      std__allocator_char___allocator_2(&ref_tmp1640);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str3639, cast643, &ref_tmp1640);
      {
        std__allocator_char____allocator(&ref_tmp1640);
      }
        unsigned long c644 = 10;
        char c645 = 46;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r646 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(&str636, c644, c645);
        char* cast647 = (char*)&(_str_2);
        _Bool r648 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str636, cast647);
        _Bool u649 = !r648;
        if (u649) {
        } else {
          char* cast650 = (char*)&(_str_3);
          char* c651 = _str_4;
          unsigned int c652 = 21;
          char* cast653 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast650, c651, c652, cast653);
        }
        struct std__basic_ostream_char__std__char_traits_char__* r654 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str636);
        struct std__basic_ostream_char__std__char_traits_char__* r655 = std__ostream__operator___std__ostream_____(r654, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int c656 = 0;
        __retval635 = c656;
        int t657 = __retval635;
        int ret_val658 = t657;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str3639);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2637);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str636);
        }
        return ret_val658;
  int t659 = __retval635;
  return t659;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v660) {
bb661:
  char* __r662;
  char* __retval663;
  __r662 = v660;
  char* t664 = __r662;
  __retval663 = t664;
  char* t665 = __retval663;
  return t665;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v666) {
bb667:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this668;
  char* __retval669;
  this668 = v666;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t670 = this668;
  char* cast671 = (char*)&(t670->field2._M_local_buf);
  char* r672 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast671);
  __retval669 = r672;
  char* t673 = __retval669;
  return t673;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v674, char* v675, struct std__allocator_char_* v676) {
bb677:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this678;
  char* __dat679;
  struct std__allocator_char_* __a680;
  this678 = v674;
  __dat679 = v675;
  __a680 = v676;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t681 = this678;
  struct std__allocator_char_* base682 = (struct std__allocator_char_*)((char *)t681 + 0);
  struct std__allocator_char_* t683 = __a680;
  std__allocator_char___allocator(base682, t683);
    char* t684 = __dat679;
    t681->_M_p = t684;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb685:
  _Bool __retval686;
    _Bool c687 = 0;
    __retval686 = c687;
    _Bool t688 = __retval686;
    return t688;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v689) {
bb690:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this691;
  this691 = v689;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t692 = this691;
    _Bool r693 = std__is_constant_evaluated();
    if (r693) {
        unsigned long __i694;
        unsigned long c695 = 0;
        __i694 = c695;
        while (1) {
          unsigned long t697 = __i694;
          unsigned long c698 = 15;
          _Bool c699 = ((t697 <= c698)) ? 1 : 0;
          if (!c699) break;
          char c700 = 0;
          unsigned long t701 = __i694;
          t692->field2._M_local_buf[t701] = c700;
        for_step696: ;
          unsigned long t702 = __i694;
          unsigned long u703 = t702 + 1;
          __i694 = u703;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v704, unsigned long v705) {
bb706:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this707;
  unsigned long __length708;
  this707 = v704;
  __length708 = v705;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t709 = this707;
  unsigned long t710 = __length708;
  t709->_M_string_length = t710;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb711:
  _Bool __retval712;
    _Bool c713 = 0;
    __retval712 = c713;
    _Bool t714 = __retval712;
    return t714;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v715, char* v716) {
bb717:
  char* __location718;
  char* __args719;
  char* __retval720;
  void* __loc721;
  __location718 = v715;
  __args719 = v716;
  char* t722 = __location718;
  void* cast723 = (void*)t722;
  __loc721 = cast723;
    void* t724 = __loc721;
    char* cast725 = (char*)t724;
    char* t726 = __args719;
    char t727 = *t726;
    *cast725 = t727;
    __retval720 = cast725;
    char* t728 = __retval720;
    return t728;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign_2(char* v729, char* v730) {
bb731:
  char* __c1732;
  char* __c2733;
  __c1732 = v729;
  __c2733 = v730;
    _Bool r734 = std____is_constant_evaluated();
    if (r734) {
      char* t735 = __c1732;
      char* t736 = __c2733;
      char* r737 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t735, t736);
    } else {
      char* t738 = __c2733;
      char t739 = *t738;
      char* t740 = __c1732;
      *t740 = t739;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v741) {
bb742:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this743;
  char* __retval744;
  this743 = v741;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t745 = this743;
  char* t746 = t745->_M_dataplus._M_p;
  __retval744 = t746;
  char* t747 = __retval744;
  return t747;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v748, unsigned long v749) {
bb750:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this751;
  unsigned long __n752;
  char ref_tmp0753;
  this751 = v748;
  __n752 = v749;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t754 = this751;
  unsigned long t755 = __n752;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t754, t755);
  unsigned long t756 = __n752;
  char* r757 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t754);
  char* ptr758 = &(r757)[t756];
  char c759 = 0;
  ref_tmp0753 = c759;
  std__char_traits_char___assign_2(ptr758, &ref_tmp0753);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v760) {
bb761:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this762;
  this762 = v760;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t763 = this762;
  {
    struct std__allocator_char_* base764 = (struct std__allocator_char_*)((char *)t763 + 0);
    std__allocator_char____allocator(base764);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v765, struct std____new_allocator_char_* v766) {
bb767:
  struct std____new_allocator_char_* this768;
  struct std____new_allocator_char_* unnamed769;
  this768 = v765;
  unnamed769 = v766;
  struct std____new_allocator_char_* t770 = this768;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v771, struct std__allocator_char_* v772) {
bb773:
  struct std__allocator_char_* this774;
  struct std__allocator_char_* __a775;
  this774 = v771;
  __a775 = v772;
  struct std__allocator_char_* t776 = this774;
  struct std____new_allocator_char_* base777 = (struct std____new_allocator_char_*)((char *)t776 + 0);
  struct std__allocator_char_* t778 = __a775;
  struct std____new_allocator_char_* base779 = (struct std____new_allocator_char_*)((char *)t778 + 0);
  std____new_allocator_char_____new_allocator(base777, base779);
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v780) {
bb781:
  struct std____new_allocator_char_* this782;
  this782 = v780;
  struct std____new_allocator_char_* t783 = this782;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v784, char* v785, struct std__allocator_char_* v786) {
bb787:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this788;
  char* __dat789;
  struct std__allocator_char_* __a790;
  this788 = v784;
  __dat789 = v785;
  __a790 = v786;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t791 = this788;
  struct std__allocator_char_* base792 = (struct std__allocator_char_*)((char *)t791 + 0);
  struct std__allocator_char_* t793 = __a790;
  std__allocator_char___allocator(base792, t793);
    char* t794 = __dat789;
    t791->_M_p = t794;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v795, char* v796) {
bb797:
  char* __c1798;
  char* __c2799;
  _Bool __retval800;
  __c1798 = v795;
  __c2799 = v796;
  char* t801 = __c1798;
  char t802 = *t801;
  int cast803 = (int)t802;
  char* t804 = __c2799;
  char t805 = *t804;
  int cast806 = (int)t805;
  _Bool c807 = ((cast803 == cast806)) ? 1 : 0;
  __retval800 = c807;
  _Bool t808 = __retval800;
  return t808;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v809) {
bb810:
  char* __p811;
  unsigned long __retval812;
  unsigned long __i813;
  __p811 = v809;
  unsigned long c814 = 0;
  __i813 = c814;
    char ref_tmp0815;
    while (1) {
      unsigned long t816 = __i813;
      char* t817 = __p811;
      char* ptr818 = &(t817)[t816];
      char c819 = 0;
      ref_tmp0815 = c819;
      _Bool r820 = __gnu_cxx__char_traits_char___eq(ptr818, &ref_tmp0815);
      _Bool u821 = !r820;
      if (!u821) break;
      unsigned long t822 = __i813;
      unsigned long u823 = t822 + 1;
      __i813 = u823;
    }
  unsigned long t824 = __i813;
  __retval812 = t824;
  unsigned long t825 = __retval812;
  return t825;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v826) {
bb827:
  char* __s828;
  unsigned long __retval829;
  __s828 = v826;
    _Bool r830 = std____is_constant_evaluated();
    if (r830) {
      char* t831 = __s828;
      unsigned long r832 = __gnu_cxx__char_traits_char___length(t831);
      __retval829 = r832;
      unsigned long t833 = __retval829;
      return t833;
    }
  char* t834 = __s828;
  unsigned long r835 = strlen(t834);
  __retval829 = r835;
  unsigned long t836 = __retval829;
  return t836;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v837, char* v838, struct std__random_access_iterator_tag v839) {
bb840:
  char* __first841;
  char* __last842;
  struct std__random_access_iterator_tag unnamed843;
  long __retval844;
  __first841 = v837;
  __last842 = v838;
  unnamed843 = v839;
  char* t845 = __last842;
  char* t846 = __first841;
  long diff847 = t845 - t846;
  __retval844 = diff847;
  long t848 = __retval844;
  return t848;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v849) {
bb850:
  char** unnamed851;
  struct std__random_access_iterator_tag __retval852;
  unnamed851 = v849;
  struct std__random_access_iterator_tag t853 = __retval852;
  return t853;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v854, char* v855) {
bb856:
  char* __first857;
  char* __last858;
  long __retval859;
  struct std__random_access_iterator_tag agg_tmp0860;
  __first857 = v854;
  __last858 = v855;
  char* t861 = __first857;
  char* t862 = __last858;
  struct std__random_access_iterator_tag r863 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first857);
  agg_tmp0860 = r863;
  struct std__random_access_iterator_tag t864 = agg_tmp0860;
  long r865 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t861, t862, t864);
  __retval859 = r865;
  long t866 = __retval859;
  return t866;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v867, char* v868) {
bb869:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this870;
  char* __p871;
  this870 = v867;
  __p871 = v868;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t872 = this870;
  char* t873 = __p871;
  t872->_M_dataplus._M_p = t873;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v874) {
bb875:
  struct std__allocator_char_* __a876;
  unsigned long __retval877;
  __a876 = v874;
  unsigned long c878 = -1;
  unsigned long c879 = 1;
  unsigned long b880 = c878 / c879;
  __retval877 = b880;
  unsigned long t881 = __retval877;
  return t881;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v882) {
bb883:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this884;
  struct std__allocator_char_* __retval885;
  this884 = v882;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t886 = this884;
  struct std__allocator_char_* base887 = (struct std__allocator_char_*)((char *)&(t886->_M_dataplus) + 0);
  __retval885 = base887;
  struct std__allocator_char_* t888 = __retval885;
  return t888;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v889, unsigned long* v890) {
bb891:
  unsigned long* __a892;
  unsigned long* __b893;
  unsigned long* __retval894;
  __a892 = v889;
  __b893 = v890;
    unsigned long* t895 = __b893;
    unsigned long t896 = *t895;
    unsigned long* t897 = __a892;
    unsigned long t898 = *t897;
    _Bool c899 = ((t896 < t898)) ? 1 : 0;
    if (c899) {
      unsigned long* t900 = __b893;
      __retval894 = t900;
      unsigned long* t901 = __retval894;
      return t901;
    }
  unsigned long* t902 = __a892;
  __retval894 = t902;
  unsigned long* t903 = __retval894;
  return t903;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v904) {
bb905:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this906;
  unsigned long __retval907;
  unsigned long __diffmax908;
  unsigned long __allocmax909;
  this906 = v904;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t910 = this906;
  unsigned long c911 = 9223372036854775807;
  __diffmax908 = c911;
  struct std__allocator_char_* r912 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t910);
  unsigned long r913 = std__allocator_traits_std__allocator_char_____max_size(r912);
  __allocmax909 = r913;
  unsigned long* r914 = unsigned_long_const__std__min_unsigned_long_(&__diffmax908, &__allocmax909);
  unsigned long t915 = *r914;
  unsigned long c916 = 1;
  unsigned long b917 = t915 - c916;
  __retval907 = b917;
  unsigned long t918 = __retval907;
  return t918;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v919) {
bb920:
  struct std____new_allocator_char_* this921;
  unsigned long __retval922;
  this921 = v919;
  struct std____new_allocator_char_* t923 = this921;
  unsigned long c924 = 9223372036854775807;
  unsigned long c925 = 1;
  unsigned long b926 = c924 / c925;
  __retval922 = b926;
  unsigned long t927 = __retval922;
  return t927;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v928, unsigned long v929, void* v930) {
bb931:
  struct std____new_allocator_char_* this932;
  unsigned long __n933;
  void* unnamed934;
  char* __retval935;
  this932 = v928;
  __n933 = v929;
  unnamed934 = v930;
  struct std____new_allocator_char_* t936 = this932;
    unsigned long t937 = __n933;
    unsigned long r938 = std____new_allocator_char____M_max_size___const(t936);
    _Bool c939 = ((t937 > r938)) ? 1 : 0;
    if (c939) {
        unsigned long t940 = __n933;
        unsigned long c941 = -1;
        unsigned long c942 = 1;
        unsigned long b943 = c941 / c942;
        _Bool c944 = ((t940 > b943)) ? 1 : 0;
        if (c944) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c945 = 1;
    unsigned long c946 = 16;
    _Bool c947 = ((c945 > c946)) ? 1 : 0;
    if (c947) {
      unsigned long __al948;
      unsigned long c949 = 1;
      __al948 = c949;
      unsigned long t950 = __n933;
      unsigned long c951 = 1;
      unsigned long b952 = t950 * c951;
      unsigned long t953 = __al948;
      void* r954 = operator_new_2(b952, t953);
      char* cast955 = (char*)r954;
      __retval935 = cast955;
      char* t956 = __retval935;
      return t956;
    }
  unsigned long t957 = __n933;
  unsigned long c958 = 1;
  unsigned long b959 = t957 * c958;
  void* r960 = operator_new(b959);
  char* cast961 = (char*)r960;
  __retval935 = cast961;
  char* t962 = __retval935;
  return t962;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v963, unsigned long v964) {
bb965:
  struct std__allocator_char_* this966;
  unsigned long __n967;
  char* __retval968;
  this966 = v963;
  __n967 = v964;
  struct std__allocator_char_* t969 = this966;
    _Bool r970 = std____is_constant_evaluated();
    if (r970) {
        unsigned long t971 = __n967;
        unsigned long c972 = 1;
        unsigned long ovr973;
        _Bool ovf974 = __builtin_mul_overflow(t971, c972, &ovr973);
        __n967 = ovr973;
        if (ovf974) {
          std____throw_bad_array_new_length();
        }
      unsigned long t975 = __n967;
      void* r976 = operator_new(t975);
      char* cast977 = (char*)r976;
      __retval968 = cast977;
      char* t978 = __retval968;
      return t978;
    }
  struct std____new_allocator_char_* base979 = (struct std____new_allocator_char_*)((char *)t969 + 0);
  unsigned long t980 = __n967;
  void* c981 = ((void*)0);
  char* r982 = std____new_allocator_char___allocate(base979, t980, c981);
  __retval968 = r982;
  char* t983 = __retval968;
  return t983;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v984, unsigned long v985) {
bb986:
  struct std__allocator_char_* __a987;
  unsigned long __n988;
  char* __retval989;
  __a987 = v984;
  __n988 = v985;
  struct std__allocator_char_* t990 = __a987;
  unsigned long t991 = __n988;
  char* r992 = std__allocator_char___allocate(t990, t991);
  __retval989 = r992;
  char* t993 = __retval989;
  return t993;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v994, unsigned long v995) {
bb996:
  struct std__allocator_char_* __a997;
  unsigned long __n998;
  char* __retval999;
  char* __p1000;
  __a997 = v994;
  __n998 = v995;
  struct std__allocator_char_* t1001 = __a997;
  unsigned long t1002 = __n998;
  char* r1003 = std__allocator_traits_std__allocator_char_____allocate(t1001, t1002);
  __p1000 = r1003;
  char* t1004 = __p1000;
  __retval999 = t1004;
  char* t1005 = __retval999;
  return t1005;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1006) {
bb1007:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1008;
  struct std__allocator_char_* __retval1009;
  this1008 = v1006;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1010 = this1008;
  struct std__allocator_char_* base1011 = (struct std__allocator_char_*)((char *)&(t1010->_M_dataplus) + 0);
  __retval1009 = base1011;
  struct std__allocator_char_* t1012 = __retval1009;
  return t1012;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1013, unsigned long* v1014, unsigned long v1015) {
bb1016:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1017;
  unsigned long* __capacity1018;
  unsigned long __old_capacity1019;
  char* __retval1020;
  this1017 = v1013;
  __capacity1018 = v1014;
  __old_capacity1019 = v1015;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1021 = this1017;
    unsigned long* t1022 = __capacity1018;
    unsigned long t1023 = *t1022;
    unsigned long r1024 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1021);
    _Bool c1025 = ((t1023 > r1024)) ? 1 : 0;
    if (c1025) {
      char* cast1026 = (char*)&(_str_6);
      std____throw_length_error(cast1026);
    }
    unsigned long* t1027 = __capacity1018;
    unsigned long t1028 = *t1027;
    unsigned long t1029 = __old_capacity1019;
    _Bool c1030 = ((t1028 > t1029)) ? 1 : 0;
    _Bool ternary1031;
    if (c1030) {
      unsigned long* t1032 = __capacity1018;
      unsigned long t1033 = *t1032;
      unsigned long c1034 = 2;
      unsigned long t1035 = __old_capacity1019;
      unsigned long b1036 = c1034 * t1035;
      _Bool c1037 = ((t1033 < b1036)) ? 1 : 0;
      ternary1031 = (_Bool)c1037;
    } else {
      _Bool c1038 = 0;
      ternary1031 = (_Bool)c1038;
    }
    if (ternary1031) {
      unsigned long c1039 = 2;
      unsigned long t1040 = __old_capacity1019;
      unsigned long b1041 = c1039 * t1040;
      unsigned long* t1042 = __capacity1018;
      *t1042 = b1041;
        unsigned long* t1043 = __capacity1018;
        unsigned long t1044 = *t1043;
        unsigned long r1045 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1021);
        _Bool c1046 = ((t1044 > r1045)) ? 1 : 0;
        if (c1046) {
          unsigned long r1047 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1021);
          unsigned long* t1048 = __capacity1018;
          *t1048 = r1047;
        }
    }
  struct std__allocator_char_* r1049 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1021);
  unsigned long* t1050 = __capacity1018;
  unsigned long t1051 = *t1050;
  unsigned long c1052 = 1;
  unsigned long b1053 = t1051 + c1052;
  char* r1054 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1049, b1053);
  __retval1020 = r1054;
  char* t1055 = __retval1020;
  return t1055;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1056, unsigned long v1057) {
bb1058:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1059;
  unsigned long __capacity1060;
  this1059 = v1056;
  __capacity1060 = v1057;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1061 = this1059;
  unsigned long t1062 = __capacity1060;
  t1061->field2._M_allocated_capacity = t1062;
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1063, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1064) {
bb1065:
  struct _Guard* this1066;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1067;
  this1066 = v1063;
  __s1067 = v1064;
  struct _Guard* t1068 = this1066;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1069 = __s1067;
  t1068->_M_guarded = t1069;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1070, char* v1071, unsigned long v1072) {
bb1073:
  char* __s11074;
  char* __s21075;
  unsigned long __n1076;
  char* __retval1077;
  __s11074 = v1070;
  __s21075 = v1071;
  __n1076 = v1072;
    unsigned long t1078 = __n1076;
    unsigned long c1079 = 0;
    _Bool c1080 = ((t1078 == c1079)) ? 1 : 0;
    if (c1080) {
      char* t1081 = __s11074;
      __retval1077 = t1081;
      char* t1082 = __retval1077;
      return t1082;
    }
    _Bool r1083 = std____is_constant_evaluated();
    if (r1083) {
        unsigned long __i1084;
        unsigned long c1085 = 0;
        __i1084 = c1085;
        while (1) {
          unsigned long t1087 = __i1084;
          unsigned long t1088 = __n1076;
          _Bool c1089 = ((t1087 < t1088)) ? 1 : 0;
          if (!c1089) break;
          char* t1090 = __s11074;
          unsigned long t1091 = __i1084;
          char* ptr1092 = &(t1090)[t1091];
          unsigned long t1093 = __i1084;
          char* t1094 = __s21075;
          char* ptr1095 = &(t1094)[t1093];
          char* r1096 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1092, ptr1095);
        for_step1086: ;
          unsigned long t1097 = __i1084;
          unsigned long u1098 = t1097 + 1;
          __i1084 = u1098;
        }
      char* t1099 = __s11074;
      __retval1077 = t1099;
      char* t1100 = __retval1077;
      return t1100;
    }
  char* t1101 = __s11074;
  void* cast1102 = (void*)t1101;
  char* t1103 = __s21075;
  void* cast1104 = (void*)t1103;
  unsigned long t1105 = __n1076;
  unsigned long c1106 = 1;
  unsigned long b1107 = t1105 * c1106;
  void* r1108 = memcpy(cast1102, cast1104, b1107);
  char* t1109 = __s11074;
  __retval1077 = t1109;
  char* t1110 = __retval1077;
  return t1110;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1111, char* v1112, unsigned long v1113) {
bb1114:
  char* __s11115;
  char* __s21116;
  unsigned long __n1117;
  char* __retval1118;
  __s11115 = v1111;
  __s21116 = v1112;
  __n1117 = v1113;
    unsigned long t1119 = __n1117;
    unsigned long c1120 = 0;
    _Bool c1121 = ((t1119 == c1120)) ? 1 : 0;
    if (c1121) {
      char* t1122 = __s11115;
      __retval1118 = t1122;
      char* t1123 = __retval1118;
      return t1123;
    }
    _Bool r1124 = std____is_constant_evaluated();
    if (r1124) {
      char* t1125 = __s11115;
      char* t1126 = __s21116;
      unsigned long t1127 = __n1117;
      char* r1128 = __gnu_cxx__char_traits_char___copy(t1125, t1126, t1127);
      __retval1118 = r1128;
      char* t1129 = __retval1118;
      return t1129;
    }
  char* t1130 = __s11115;
  void* cast1131 = (void*)t1130;
  char* t1132 = __s21116;
  void* cast1133 = (void*)t1132;
  unsigned long t1134 = __n1117;
  void* r1135 = memcpy(cast1131, cast1133, t1134);
  char* cast1136 = (char*)r1135;
  __retval1118 = cast1136;
  char* t1137 = __retval1118;
  return t1137;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1138, char* v1139, unsigned long v1140) {
bb1141:
  char* __d1142;
  char* __s1143;
  unsigned long __n1144;
  __d1142 = v1138;
  __s1143 = v1139;
  __n1144 = v1140;
    unsigned long t1145 = __n1144;
    unsigned long c1146 = 1;
    _Bool c1147 = ((t1145 == c1146)) ? 1 : 0;
    if (c1147) {
      char* t1148 = __d1142;
      char* t1149 = __s1143;
      std__char_traits_char___assign_2(t1148, t1149);
    } else {
      char* t1150 = __d1142;
      char* t1151 = __s1143;
      unsigned long t1152 = __n1144;
      char* r1153 = std__char_traits_char___copy(t1150, t1151, t1152);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1154) {
bb1155:
  char* __it1156;
  char* __retval1157;
  __it1156 = v1154;
  char* t1158 = __it1156;
  __retval1157 = t1158;
  char* t1159 = __retval1157;
  return t1159;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1160, char* v1161, char* v1162) {
bb1163:
  char* __p1164;
  char* __k11165;
  char* __k21166;
  __p1164 = v1160;
  __k11165 = v1161;
  __k21166 = v1162;
    char* t1167 = __p1164;
    char* t1168 = __k11165;
    char* r1169 = char_const__std____niter_base_char_const__(t1168);
    char* t1170 = __k21166;
    char* t1171 = __k11165;
    long diff1172 = t1170 - t1171;
    unsigned long cast1173 = (unsigned long)diff1172;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1167, r1169, cast1173);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1174) {
bb1175:
  struct _Guard* this1176;
  this1176 = v1174;
  struct _Guard* t1177 = this1176;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1178 = t1177->_M_guarded;
    _Bool cast1179 = (_Bool)t1178;
    if (cast1179) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1180 = t1177->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1180);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1181, char* v1182, char* v1183, struct std__forward_iterator_tag v1184) {
bb1185:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1186;
  char* __beg1187;
  char* __end1188;
  struct std__forward_iterator_tag unnamed1189;
  unsigned long __dnew1190;
  struct _Guard __guard1191;
  this1186 = v1181;
  __beg1187 = v1182;
  __end1188 = v1183;
  unnamed1189 = v1184;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1192 = this1186;
  char* t1193 = __beg1187;
  char* t1194 = __end1188;
  long r1195 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1193, t1194);
  unsigned long cast1196 = (unsigned long)r1195;
  __dnew1190 = cast1196;
    unsigned long t1197 = __dnew1190;
    unsigned long c1198 = 15;
    _Bool c1199 = ((t1197 > c1198)) ? 1 : 0;
    if (c1199) {
      unsigned long c1200 = 0;
      char* r1201 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1192, &__dnew1190, c1200);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1192, r1201);
      unsigned long t1202 = __dnew1190;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1192, t1202);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1192);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1191, t1192);
    char* r1203 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1192);
    char* t1204 = __beg1187;
    char* t1205 = __end1188;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1203, t1204, t1205);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1206 = ((void*)0);
    __guard1191._M_guarded = c1206;
    unsigned long t1207 = __dnew1190;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1192, t1207);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1191);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1208) {
bb1209:
  char* __r1210;
  char* __retval1211;
  __r1210 = v1208;
  char* t1212 = __r1210;
  __retval1211 = t1212;
  char* t1213 = __retval1211;
  return t1213;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1214) {
bb1215:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1216;
  char* __retval1217;
  this1216 = v1214;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1218 = this1216;
  char* cast1219 = (char*)&(t1218->field2._M_local_buf);
  char* r1220 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1219);
  __retval1217 = r1220;
  char* t1221 = __retval1217;
  return t1221;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1222) {
bb1223:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1224;
  _Bool __retval1225;
  this1224 = v1222;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1226 = this1224;
    char* r1227 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1226);
    char* r1228 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1226);
    _Bool c1229 = ((r1227 == r1228)) ? 1 : 0;
    if (c1229) {
        unsigned long t1230 = t1226->_M_string_length;
        unsigned long c1231 = 15;
        _Bool c1232 = ((t1230 > c1231)) ? 1 : 0;
        if (c1232) {
          __builtin_unreachable();
        }
      _Bool c1233 = 1;
      __retval1225 = c1233;
      _Bool t1234 = __retval1225;
      return t1234;
    }
  _Bool c1235 = 0;
  __retval1225 = c1235;
  _Bool t1236 = __retval1225;
  return t1236;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1237, char* v1238, unsigned long v1239) {
bb1240:
  struct std____new_allocator_char_* this1241;
  char* __p1242;
  unsigned long __n1243;
  this1241 = v1237;
  __p1242 = v1238;
  __n1243 = v1239;
  struct std____new_allocator_char_* t1244 = this1241;
    unsigned long c1245 = 1;
    unsigned long c1246 = 16;
    _Bool c1247 = ((c1245 > c1246)) ? 1 : 0;
    if (c1247) {
      char* t1248 = __p1242;
      void* cast1249 = (void*)t1248;
      unsigned long t1250 = __n1243;
      unsigned long c1251 = 1;
      unsigned long b1252 = t1250 * c1251;
      unsigned long c1253 = 1;
      operator_delete_3(cast1249, b1252, c1253);
      return;
    }
  char* t1254 = __p1242;
  void* cast1255 = (void*)t1254;
  unsigned long t1256 = __n1243;
  unsigned long c1257 = 1;
  unsigned long b1258 = t1256 * c1257;
  operator_delete_2(cast1255, b1258);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1259, char* v1260, unsigned long v1261) {
bb1262:
  struct std__allocator_char_* this1263;
  char* __p1264;
  unsigned long __n1265;
  this1263 = v1259;
  __p1264 = v1260;
  __n1265 = v1261;
  struct std__allocator_char_* t1266 = this1263;
    _Bool r1267 = std____is_constant_evaluated();
    if (r1267) {
      char* t1268 = __p1264;
      void* cast1269 = (void*)t1268;
      operator_delete(cast1269);
      return;
    }
  struct std____new_allocator_char_* base1270 = (struct std____new_allocator_char_*)((char *)t1266 + 0);
  char* t1271 = __p1264;
  unsigned long t1272 = __n1265;
  std____new_allocator_char___deallocate(base1270, t1271, t1272);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1273, char* v1274, unsigned long v1275) {
bb1276:
  struct std__allocator_char_* __a1277;
  char* __p1278;
  unsigned long __n1279;
  __a1277 = v1273;
  __p1278 = v1274;
  __n1279 = v1275;
  struct std__allocator_char_* t1280 = __a1277;
  char* t1281 = __p1278;
  unsigned long t1282 = __n1279;
  std__allocator_char___deallocate(t1280, t1281, t1282);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1283, unsigned long v1284) {
bb1285:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1286;
  unsigned long __size1287;
  this1286 = v1283;
  __size1287 = v1284;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1288 = this1286;
  struct std__allocator_char_* r1289 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1288);
  char* r1290 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1288);
  unsigned long t1291 = __size1287;
  unsigned long c1292 = 1;
  unsigned long b1293 = t1291 + c1292;
  std__allocator_traits_std__allocator_char_____deallocate(r1289, r1290, b1293);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1294) {
bb1295:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1296;
  this1296 = v1294;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1297 = this1296;
    _Bool r1298 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1297);
    _Bool u1299 = !r1298;
    if (u1299) {
      unsigned long t1300 = t1297->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1297, t1300);
    }
  return;
}

