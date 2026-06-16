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

char _str[9] = "Writing ";
char _str_1[25] = "print 10 and then 5 more";
char _str_2[7] = "here: ";
char _str_3[16] = "str != \"here: \"";
char _str_4[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_append_11_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[50] = "basic_string: construction from null is not valid";
char _str_6[24] = "basic_string::_M_create";
char _str_7[21] = "basic_string::append";
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
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
void std__char_traits_char___assign(char* p0, char* p1);
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v39) {
bb40: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this41;
  unsigned long __retval42;
  unsigned long __sz43;
  this41 = v39;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t44 = this41;
  unsigned long t45 = t44->_M_string_length;
  __sz43 = t45;
    unsigned long t46 = __sz43;
    unsigned long r47 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t44);
    _Bool c48 = ((t46 > r47)) ? 1 : 0;
    if (c48) {
      __builtin_unreachable();
    }
  unsigned long t49 = __sz43;
  __retval42 = t49;
  unsigned long t50 = __retval42;
  return t50;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v51, unsigned long v52, unsigned long v53, char* v54) {
bb55: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this56;
  unsigned long __n157;
  unsigned long __n258;
  char* __s59;
  this56 = v51;
  __n157 = v52;
  __n258 = v53;
  __s59 = v54;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t60 = this56;
    unsigned long r61 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t60);
    unsigned long r62 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t60);
    unsigned long t63 = __n157;
    unsigned long b64 = r62 - t63;
    unsigned long b65 = r61 - b64;
    unsigned long t66 = __n258;
    _Bool c67 = ((b65 < t66)) ? 1 : 0;
    if (c67) {
      char* t68 = __s59;
      std____throw_length_error(t68);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v69) {
bb70: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this71;
  unsigned long __retval72;
  unsigned long __sz73;
  this71 = v69;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t74 = this71;
  _Bool r75 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t74);
  unsigned long ternary76;
  if (r75) {
    unsigned long c77 = 15;
    ternary76 = (unsigned long)c77;
  } else {
    unsigned long t78 = t74->field2._M_allocated_capacity;
    ternary76 = (unsigned long)t78;
  }
  __sz73 = ternary76;
    unsigned long t79 = __sz73;
    unsigned long c80 = 15;
    _Bool c81 = ((t79 < c80)) ? 1 : 0;
    _Bool ternary82;
    if (c81) {
      _Bool c83 = 1;
      ternary82 = (_Bool)c83;
    } else {
      unsigned long t84 = __sz73;
      unsigned long r85 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t74);
      _Bool c86 = ((t84 > r85)) ? 1 : 0;
      ternary82 = (_Bool)c86;
    }
    if (ternary82) {
      __builtin_unreachable();
    }
  unsigned long t87 = __sz73;
  __retval72 = t87;
  unsigned long t88 = __retval72;
  return t88;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v89) {
bb90: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this91;
  unsigned long __retval92;
  this91 = v89;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t93 = this91;
  unsigned long r94 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t93);
  __retval92 = r94;
  unsigned long t95 = __retval92;
  return t95;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v96, unsigned long v97, unsigned long v98, char* v99, unsigned long v100) {
bb101: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this102;
  unsigned long __pos103;
  unsigned long __len1104;
  char* __s105;
  unsigned long __len2106;
  unsigned long __how_much107;
  unsigned long __new_capacity108;
  char* __r109;
  this102 = v96;
  __pos103 = v97;
  __len1104 = v98;
  __s105 = v99;
  __len2106 = v100;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t110 = this102;
  unsigned long r111 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t110);
  unsigned long t112 = __pos103;
  unsigned long b113 = r111 - t112;
  unsigned long t114 = __len1104;
  unsigned long b115 = b113 - t114;
  __how_much107 = b115;
  unsigned long r116 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t110);
  unsigned long t117 = __len2106;
  unsigned long b118 = r116 + t117;
  unsigned long t119 = __len1104;
  unsigned long b120 = b118 - t119;
  __new_capacity108 = b120;
  unsigned long r121 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t110);
  char* r122 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t110, &__new_capacity108, r121);
  __r109 = r122;
    unsigned long t123 = __pos103;
    _Bool cast124 = (_Bool)t123;
    if (cast124) {
      char* t125 = __r109;
      char* r126 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t110);
      unsigned long t127 = __pos103;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t125, r126, t127);
    }
    char* t128 = __s105;
    _Bool cast129 = (_Bool)t128;
    _Bool ternary130;
    if (cast129) {
      unsigned long t131 = __len2106;
      _Bool cast132 = (_Bool)t131;
      ternary130 = (_Bool)cast132;
    } else {
      _Bool c133 = 0;
      ternary130 = (_Bool)c133;
    }
    if (ternary130) {
      char* t134 = __r109;
      unsigned long t135 = __pos103;
      char* ptr136 = &(t134)[t135];
      char* t137 = __s105;
      unsigned long t138 = __len2106;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr136, t137, t138);
    }
    unsigned long t139 = __how_much107;
    _Bool cast140 = (_Bool)t139;
    if (cast140) {
      char* t141 = __r109;
      unsigned long t142 = __pos103;
      char* ptr143 = &(t141)[t142];
      unsigned long t144 = __len2106;
      char* ptr145 = &(ptr143)[t144];
      char* r146 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t110);
      unsigned long t147 = __pos103;
      char* ptr148 = &(r146)[t147];
      unsigned long t149 = __len1104;
      char* ptr150 = &(ptr148)[t149];
      unsigned long t151 = __how_much107;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr145, ptr150, t151);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t110);
  char* t152 = __r109;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t110, t152);
  unsigned long t153 = __new_capacity108;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t110, t153);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v154, char* v155, unsigned long v156) {
bb157: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this158;
  char* __s159;
  unsigned long __n160;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval161;
  unsigned long __len162;
  this158 = v154;
  __s159 = v155;
  __n160 = v156;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t163 = this158;
  unsigned long t164 = __n160;
  unsigned long r165 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t163);
  unsigned long b166 = t164 + r165;
  __len162 = b166;
    unsigned long t167 = __len162;
    unsigned long r168 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t163);
    _Bool c169 = ((t167 <= r168)) ? 1 : 0;
    if (c169) {
        unsigned long t170 = __n160;
        _Bool cast171 = (_Bool)t170;
        if (cast171) {
          char* r172 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t163);
          unsigned long r173 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t163);
          char* ptr174 = &(r172)[r173];
          char* t175 = __s159;
          unsigned long t176 = __n160;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr174, t175, t176);
        }
    } else {
      unsigned long r177 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t163);
      unsigned long c178 = 0;
      char* t179 = __s159;
      unsigned long t180 = __n160;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t163, r177, c178, t179, t180);
    }
  unsigned long t181 = __len162;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t163, t181);
  __retval161 = t163;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t182 = __retval161;
  return t182;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v183, char* v184) {
bb185: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this186;
  char* __s187;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval188;
  unsigned long __n189;
  this186 = v183;
  __s187 = v184;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t190 = this186;
  char* t191 = __s187;
  unsigned long r192 = std__char_traits_char___length(t191);
  __n189 = r192;
  unsigned long c193 = 0;
  unsigned long t194 = __n189;
  char* cast195 = (char*)&(_str_7);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t190, c193, t194, cast195);
  char* t196 = __s187;
  unsigned long t197 = __n189;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r198 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t190, t196, t197);
  __retval188 = r198;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t199 = __retval188;
  return t199;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v200, char* v201) {
bb202: ;
  char* __c1203;
  char* __c2204;
  _Bool __retval205;
  __c1203 = v200;
  __c2204 = v201;
  char* t206 = __c1203;
  char t207 = *t206;
  unsigned char cast208 = (unsigned char)t207;
  int cast209 = (int)cast208;
  char* t210 = __c2204;
  char t211 = *t210;
  unsigned char cast212 = (unsigned char)t211;
  int cast213 = (int)cast212;
  _Bool c214 = ((cast209 < cast213)) ? 1 : 0;
  __retval205 = c214;
  _Bool t215 = __retval205;
  return t215;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v216, char* v217, unsigned long v218) {
bb219: ;
  char* __s1220;
  char* __s2221;
  unsigned long __n222;
  int __retval223;
  __s1220 = v216;
  __s2221 = v217;
  __n222 = v218;
    unsigned long t224 = __n222;
    unsigned long c225 = 0;
    _Bool c226 = ((t224 == c225)) ? 1 : 0;
    if (c226) {
      int c227 = 0;
      __retval223 = c227;
      int t228 = __retval223;
      return t228;
    }
    _Bool r229 = std____is_constant_evaluated();
    if (r229) {
        unsigned long __i230;
        unsigned long c231 = 0;
        __i230 = c231;
        while (1) {
          unsigned long t233 = __i230;
          unsigned long t234 = __n222;
          _Bool c235 = ((t233 < t234)) ? 1 : 0;
          if (!c235) break;
            unsigned long t236 = __i230;
            char* t237 = __s1220;
            char* ptr238 = &(t237)[t236];
            unsigned long t239 = __i230;
            char* t240 = __s2221;
            char* ptr241 = &(t240)[t239];
            _Bool r242 = std__char_traits_char___lt(ptr238, ptr241);
            if (r242) {
              int c243 = -1;
              __retval223 = c243;
              int t244 = __retval223;
              int ret_val245 = t244;
              return ret_val245;
            } else {
                unsigned long t246 = __i230;
                char* t247 = __s2221;
                char* ptr248 = &(t247)[t246];
                unsigned long t249 = __i230;
                char* t250 = __s1220;
                char* ptr251 = &(t250)[t249];
                _Bool r252 = std__char_traits_char___lt(ptr248, ptr251);
                if (r252) {
                  int c253 = 1;
                  __retval223 = c253;
                  int t254 = __retval223;
                  int ret_val255 = t254;
                  return ret_val255;
                }
            }
        for_step232: ;
          unsigned long t256 = __i230;
          unsigned long u257 = t256 + 1;
          __i230 = u257;
        }
      int c258 = 0;
      __retval223 = c258;
      int t259 = __retval223;
      return t259;
    }
  char* t260 = __s1220;
  void* cast261 = (void*)t260;
  char* t262 = __s2221;
  void* cast263 = (void*)t262;
  unsigned long t264 = __n222;
  int r265 = memcmp(cast261, cast263, t264);
  __retval223 = r265;
  int t266 = __retval223;
  return t266;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v267) {
bb268: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this269;
  char* __retval270;
  this269 = v267;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t271 = this269;
  char* r272 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t271);
  __retval270 = r272;
  char* t273 = __retval270;
  return t273;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v274, char* v275) {
bb276: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs277;
  char* __rhs278;
  _Bool __retval279;
  __lhs277 = v274;
  __rhs278 = v275;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t280 = __lhs277;
  unsigned long r281 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t280);
  char* t282 = __rhs278;
  unsigned long r283 = std__char_traits_char___length(t282);
  _Bool c284 = ((r281 == r283)) ? 1 : 0;
  _Bool ternary285;
  if (c284) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t286 = __lhs277;
    char* r287 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t286);
    char* t288 = __rhs278;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t289 = __lhs277;
    unsigned long r290 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t289);
    int r291 = std__char_traits_char___compare(r287, t288, r290);
    _Bool cast292 = (_Bool)r291;
    _Bool u293 = !cast292;
    ternary285 = (_Bool)u293;
  } else {
    _Bool c294 = 0;
    ternary285 = (_Bool)c294;
  }
  __retval279 = ternary285;
  _Bool t295 = __retval279;
  return t295;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v296, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v297) {
bb298: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os299;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str300;
  struct std__basic_ostream_char__std__char_traits_char__* __retval301;
  __os299 = v296;
  __str300 = v297;
  struct std__basic_ostream_char__std__char_traits_char__* t302 = __os299;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t303 = __str300;
  char* r304 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t303);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t305 = __str300;
  unsigned long r306 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t305);
  long cast307 = (long)r306;
  struct std__basic_ostream_char__std__char_traits_char__* r308 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t302, r304, cast307);
  __retval301 = r308;
  struct std__basic_ostream_char__std__char_traits_char__* t309 = __retval301;
  return t309;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v310, void* v311) {
bb312: ;
  struct std__basic_ostream_char__std__char_traits_char__* this313;
  void* __pf314;
  struct std__basic_ostream_char__std__char_traits_char__* __retval315;
  this313 = v310;
  __pf314 = v311;
  struct std__basic_ostream_char__std__char_traits_char__* t316 = this313;
  void* t317 = __pf314;
  struct std__basic_ostream_char__std__char_traits_char__* r318 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t317)(t316);
  __retval315 = r318;
  struct std__basic_ostream_char__std__char_traits_char__* t319 = __retval315;
  return t319;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v320) {
bb321: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os322;
  struct std__basic_ostream_char__std__char_traits_char__* __retval323;
  __os322 = v320;
  struct std__basic_ostream_char__std__char_traits_char__* t324 = __os322;
  struct std__basic_ostream_char__std__char_traits_char__* r325 = std__ostream__flush(t324);
  __retval323 = r325;
  struct std__basic_ostream_char__std__char_traits_char__* t326 = __retval323;
  return t326;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v327) {
bb328: ;
  struct std__ctype_char_* __f329;
  struct std__ctype_char_* __retval330;
  __f329 = v327;
    struct std__ctype_char_* t331 = __f329;
    _Bool cast332 = (_Bool)t331;
    _Bool u333 = !cast332;
    if (u333) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t334 = __f329;
  __retval330 = t334;
  struct std__ctype_char_* t335 = __retval330;
  return t335;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v336, char v337) {
bb338: ;
  struct std__ctype_char_* this339;
  char __c340;
  char __retval341;
  this339 = v336;
  __c340 = v337;
  struct std__ctype_char_* t342 = this339;
    char t343 = t342->_M_widen_ok;
    _Bool cast344 = (_Bool)t343;
    if (cast344) {
      char t345 = __c340;
      unsigned char cast346 = (unsigned char)t345;
      unsigned long cast347 = (unsigned long)cast346;
      char t348 = t342->_M_widen[cast347];
      __retval341 = t348;
      char t349 = __retval341;
      return t349;
    }
  std__ctype_char____M_widen_init___const(t342);
  char t350 = __c340;
  void** v351 = (void**)t342;
  void* v352 = *((void**)v351);
  char vcall355 = (char)__VERIFIER_virtual_call_char_char(t342, 6, t350);
  __retval341 = vcall355;
  char t356 = __retval341;
  return t356;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v357, char v358) {
bb359: ;
  struct std__basic_ios_char__std__char_traits_char__* this360;
  char __c361;
  char __retval362;
  this360 = v357;
  __c361 = v358;
  struct std__basic_ios_char__std__char_traits_char__* t363 = this360;
  struct std__ctype_char_* t364 = t363->_M_ctype;
  struct std__ctype_char_* r365 = std__ctype_char__const__std____check_facet_std__ctype_char___(t364);
  char t366 = __c361;
  char r367 = std__ctype_char___widen_char__const(r365, t366);
  __retval362 = r367;
  char t368 = __retval362;
  return t368;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v369) {
bb370: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os371;
  struct std__basic_ostream_char__std__char_traits_char__* __retval372;
  __os371 = v369;
  struct std__basic_ostream_char__std__char_traits_char__* t373 = __os371;
  struct std__basic_ostream_char__std__char_traits_char__* t374 = __os371;
  void** v375 = (void**)t374;
  void* v376 = *((void**)v375);
  unsigned char* cast377 = (unsigned char*)v376;
  long c378 = -24;
  unsigned char* ptr379 = &(cast377)[c378];
  long* cast380 = (long*)ptr379;
  long t381 = *cast380;
  unsigned char* cast382 = (unsigned char*)t374;
  unsigned char* ptr383 = &(cast382)[t381];
  struct std__basic_ostream_char__std__char_traits_char__* cast384 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr383;
  struct std__basic_ios_char__std__char_traits_char__* cast385 = (struct std__basic_ios_char__std__char_traits_char__*)cast384;
  char c386 = 10;
  char r387 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast385, c386);
  struct std__basic_ostream_char__std__char_traits_char__* r388 = std__ostream__put(t373, r387);
  struct std__basic_ostream_char__std__char_traits_char__* r389 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r388);
  __retval372 = r389;
  struct std__basic_ostream_char__std__char_traits_char__* t390 = __retval372;
  return t390;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v391) {
bb392: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this393;
  this393 = v391;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t394 = this393;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t394);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t394->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb395: ;
  int __retval396;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str397;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2398;
  struct std__allocator_char_ ref_tmp0399;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3400;
  struct std__allocator_char_ ref_tmp1401;
  int c402 = 0;
  __retval396 = c402;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str397);
    char* cast403 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp0399);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str2398, cast403, &ref_tmp0399);
    {
      std__allocator_char____allocator(&ref_tmp0399);
    }
      char* cast404 = (char*)&(_str_1);
      std__allocator_char___allocator_2(&ref_tmp1401);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str3400, cast404, &ref_tmp1401);
      {
        std__allocator_char____allocator(&ref_tmp1401);
      }
        char* cast405 = (char*)&(_str_2);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r406 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(&str397, cast405);
        char* cast407 = (char*)&(_str_2);
        _Bool r408 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str397, cast407);
        _Bool u409 = !r408;
        if (u409) {
        } else {
          char* cast410 = (char*)&(_str_3);
          char* c411 = (char*)_str_4;
          unsigned int c412 = 23;
          char* cast413 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast410, c411, c412, cast413);
        }
        struct std__basic_ostream_char__std__char_traits_char__* r414 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str397);
        struct std__basic_ostream_char__std__char_traits_char__* r415 = std__ostream__operator___std__ostream_____(r414, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int c416 = 0;
        __retval396 = c416;
        int t417 = __retval396;
        int ret_val418 = t417;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str3400);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2398);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str397);
        }
        return ret_val418;
  int t419 = __retval396;
  return t419;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v420) {
bb421: ;
  char* __r422;
  char* __retval423;
  __r422 = v420;
  char* t424 = __r422;
  __retval423 = t424;
  char* t425 = __retval423;
  return t425;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v426) {
bb427: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this428;
  char* __retval429;
  this428 = v426;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t430 = this428;
  char* cast431 = (char*)&(t430->field2._M_local_buf);
  char* r432 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast431);
  __retval429 = r432;
  char* t433 = __retval429;
  return t433;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v434, char* v435, struct std__allocator_char_* v436) {
bb437: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this438;
  char* __dat439;
  struct std__allocator_char_* __a440;
  this438 = v434;
  __dat439 = v435;
  __a440 = v436;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t441 = this438;
  struct std__allocator_char_* base442 = (struct std__allocator_char_*)((char *)t441 + 0);
  struct std__allocator_char_* t443 = __a440;
  std__allocator_char___allocator(base442, t443);
    char* t444 = __dat439;
    t441->_M_p = t444;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb445: ;
  _Bool __retval446;
    _Bool c447 = 0;
    __retval446 = c447;
    _Bool t448 = __retval446;
    return t448;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v449) {
bb450: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this451;
  this451 = v449;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t452 = this451;
    _Bool r453 = std__is_constant_evaluated();
    if (r453) {
        unsigned long __i454;
        unsigned long c455 = 0;
        __i454 = c455;
        while (1) {
          unsigned long t457 = __i454;
          unsigned long c458 = 15;
          _Bool c459 = ((t457 <= c458)) ? 1 : 0;
          if (!c459) break;
          char c460 = 0;
          unsigned long t461 = __i454;
          t452->field2._M_local_buf[t461] = c460;
        for_step456: ;
          unsigned long t462 = __i454;
          unsigned long u463 = t462 + 1;
          __i454 = u463;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v464, unsigned long v465) {
bb466: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this467;
  unsigned long __length468;
  this467 = v464;
  __length468 = v465;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t469 = this467;
  unsigned long t470 = __length468;
  t469->_M_string_length = t470;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb471: ;
  _Bool __retval472;
    _Bool c473 = 0;
    __retval472 = c473;
    _Bool t474 = __retval472;
    return t474;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v475, char* v476) {
bb477: ;
  char* __location478;
  char* __args479;
  char* __retval480;
  void* __loc481;
  __location478 = v475;
  __args479 = v476;
  char* t482 = __location478;
  void* cast483 = (void*)t482;
  __loc481 = cast483;
    void* t484 = __loc481;
    char* cast485 = (char*)t484;
    char* t486 = __args479;
    char t487 = *t486;
    *cast485 = t487;
    __retval480 = cast485;
    char* t488 = __retval480;
    return t488;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v489, char* v490) {
bb491: ;
  char* __c1492;
  char* __c2493;
  __c1492 = v489;
  __c2493 = v490;
    _Bool r494 = std____is_constant_evaluated();
    if (r494) {
      char* t495 = __c1492;
      char* t496 = __c2493;
      char* r497 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t495, t496);
    } else {
      char* t498 = __c2493;
      char t499 = *t498;
      char* t500 = __c1492;
      *t500 = t499;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v501) {
bb502: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this503;
  char* __retval504;
  this503 = v501;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t505 = this503;
  char* t506 = t505->_M_dataplus._M_p;
  __retval504 = t506;
  char* t507 = __retval504;
  return t507;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v508, unsigned long v509) {
bb510: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this511;
  unsigned long __n512;
  char ref_tmp0513;
  this511 = v508;
  __n512 = v509;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t514 = this511;
  unsigned long t515 = __n512;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t514, t515);
  unsigned long t516 = __n512;
  char* r517 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t514);
  char* ptr518 = &(r517)[t516];
  char c519 = 0;
  ref_tmp0513 = c519;
  std__char_traits_char___assign(ptr518, &ref_tmp0513);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v520) {
bb521: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this522;
  this522 = v520;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t523 = this522;
  {
    struct std__allocator_char_* base524 = (struct std__allocator_char_*)((char *)t523 + 0);
    std__allocator_char____allocator(base524);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v525, struct std____new_allocator_char_* v526) {
bb527: ;
  struct std____new_allocator_char_* this528;
  struct std____new_allocator_char_* unnamed529;
  this528 = v525;
  unnamed529 = v526;
  struct std____new_allocator_char_* t530 = this528;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v531, struct std__allocator_char_* v532) {
bb533: ;
  struct std__allocator_char_* this534;
  struct std__allocator_char_* __a535;
  this534 = v531;
  __a535 = v532;
  struct std__allocator_char_* t536 = this534;
  struct std____new_allocator_char_* base537 = (struct std____new_allocator_char_*)((char *)t536 + 0);
  struct std__allocator_char_* t538 = __a535;
  struct std____new_allocator_char_* base539 = (struct std____new_allocator_char_*)((char *)t538 + 0);
  std____new_allocator_char_____new_allocator(base537, base539);
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v540) {
bb541: ;
  struct std____new_allocator_char_* this542;
  this542 = v540;
  struct std____new_allocator_char_* t543 = this542;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v544, char* v545, struct std__allocator_char_* v546) {
bb547: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this548;
  char* __dat549;
  struct std__allocator_char_* __a550;
  this548 = v544;
  __dat549 = v545;
  __a550 = v546;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t551 = this548;
  struct std__allocator_char_* base552 = (struct std__allocator_char_*)((char *)t551 + 0);
  struct std__allocator_char_* t553 = __a550;
  std__allocator_char___allocator(base552, t553);
    char* t554 = __dat549;
    t551->_M_p = t554;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v555, char* v556) {
bb557: ;
  char* __c1558;
  char* __c2559;
  _Bool __retval560;
  __c1558 = v555;
  __c2559 = v556;
  char* t561 = __c1558;
  char t562 = *t561;
  int cast563 = (int)t562;
  char* t564 = __c2559;
  char t565 = *t564;
  int cast566 = (int)t565;
  _Bool c567 = ((cast563 == cast566)) ? 1 : 0;
  __retval560 = c567;
  _Bool t568 = __retval560;
  return t568;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v569) {
bb570: ;
  char* __p571;
  unsigned long __retval572;
  unsigned long __i573;
  __p571 = v569;
  unsigned long c574 = 0;
  __i573 = c574;
    char ref_tmp0575;
    while (1) {
      unsigned long t576 = __i573;
      char* t577 = __p571;
      char* ptr578 = &(t577)[t576];
      char c579 = 0;
      ref_tmp0575 = c579;
      _Bool r580 = __gnu_cxx__char_traits_char___eq(ptr578, &ref_tmp0575);
      _Bool u581 = !r580;
      if (!u581) break;
      unsigned long t582 = __i573;
      unsigned long u583 = t582 + 1;
      __i573 = u583;
    }
  unsigned long t584 = __i573;
  __retval572 = t584;
  unsigned long t585 = __retval572;
  return t585;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v586) {
bb587: ;
  char* __s588;
  unsigned long __retval589;
  __s588 = v586;
    _Bool r590 = std____is_constant_evaluated();
    if (r590) {
      char* t591 = __s588;
      unsigned long r592 = __gnu_cxx__char_traits_char___length(t591);
      __retval589 = r592;
      unsigned long t593 = __retval589;
      return t593;
    }
  char* t594 = __s588;
  unsigned long r595 = strlen(t594);
  __retval589 = r595;
  unsigned long t596 = __retval589;
  return t596;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v597, char* v598, struct std__random_access_iterator_tag v599) {
bb600: ;
  char* __first601;
  char* __last602;
  struct std__random_access_iterator_tag unnamed603;
  long __retval604;
  __first601 = v597;
  __last602 = v598;
  unnamed603 = v599;
  char* t605 = __last602;
  char* t606 = __first601;
  long diff607 = t605 - t606;
  __retval604 = diff607;
  long t608 = __retval604;
  return t608;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v609) {
bb610: ;
  char** unnamed611;
  struct std__random_access_iterator_tag __retval612;
  unnamed611 = v609;
  struct std__random_access_iterator_tag t613 = __retval612;
  return t613;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v614, char* v615) {
bb616: ;
  char* __first617;
  char* __last618;
  long __retval619;
  struct std__random_access_iterator_tag agg_tmp0620;
  __first617 = v614;
  __last618 = v615;
  char* t621 = __first617;
  char* t622 = __last618;
  struct std__random_access_iterator_tag r623 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first617);
  agg_tmp0620 = r623;
  struct std__random_access_iterator_tag t624 = agg_tmp0620;
  long r625 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t621, t622, t624);
  __retval619 = r625;
  long t626 = __retval619;
  return t626;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v627, char* v628) {
bb629: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this630;
  char* __p631;
  this630 = v627;
  __p631 = v628;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t632 = this630;
  char* t633 = __p631;
  t632->_M_dataplus._M_p = t633;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v634) {
bb635: ;
  struct std__allocator_char_* __a636;
  unsigned long __retval637;
  __a636 = v634;
  unsigned long c638 = -1;
  unsigned long c639 = 1;
  unsigned long b640 = c638 / c639;
  __retval637 = b640;
  unsigned long t641 = __retval637;
  return t641;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v642) {
bb643: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this644;
  struct std__allocator_char_* __retval645;
  this644 = v642;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t646 = this644;
  struct std__allocator_char_* base647 = (struct std__allocator_char_*)((char *)&(t646->_M_dataplus) + 0);
  __retval645 = base647;
  struct std__allocator_char_* t648 = __retval645;
  return t648;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v649, unsigned long* v650) {
bb651: ;
  unsigned long* __a652;
  unsigned long* __b653;
  unsigned long* __retval654;
  __a652 = v649;
  __b653 = v650;
    unsigned long* t655 = __b653;
    unsigned long t656 = *t655;
    unsigned long* t657 = __a652;
    unsigned long t658 = *t657;
    _Bool c659 = ((t656 < t658)) ? 1 : 0;
    if (c659) {
      unsigned long* t660 = __b653;
      __retval654 = t660;
      unsigned long* t661 = __retval654;
      return t661;
    }
  unsigned long* t662 = __a652;
  __retval654 = t662;
  unsigned long* t663 = __retval654;
  return t663;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v664) {
bb665: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this666;
  unsigned long __retval667;
  unsigned long __diffmax668;
  unsigned long __allocmax669;
  this666 = v664;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t670 = this666;
  unsigned long c671 = 9223372036854775807;
  __diffmax668 = c671;
  struct std__allocator_char_* r672 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t670);
  unsigned long r673 = std__allocator_traits_std__allocator_char_____max_size(r672);
  __allocmax669 = r673;
  unsigned long* r674 = unsigned_long_const__std__min_unsigned_long_(&__diffmax668, &__allocmax669);
  unsigned long t675 = *r674;
  unsigned long c676 = 1;
  unsigned long b677 = t675 - c676;
  __retval667 = b677;
  unsigned long t678 = __retval667;
  return t678;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v679) {
bb680: ;
  struct std____new_allocator_char_* this681;
  unsigned long __retval682;
  this681 = v679;
  struct std____new_allocator_char_* t683 = this681;
  unsigned long c684 = 9223372036854775807;
  unsigned long c685 = 1;
  unsigned long b686 = c684 / c685;
  __retval682 = b686;
  unsigned long t687 = __retval682;
  return t687;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v688, unsigned long v689, void* v690) {
bb691: ;
  struct std____new_allocator_char_* this692;
  unsigned long __n693;
  void* unnamed694;
  char* __retval695;
  this692 = v688;
  __n693 = v689;
  unnamed694 = v690;
  struct std____new_allocator_char_* t696 = this692;
    unsigned long t697 = __n693;
    unsigned long r698 = std____new_allocator_char____M_max_size___const(t696);
    _Bool c699 = ((t697 > r698)) ? 1 : 0;
    if (c699) {
        unsigned long t700 = __n693;
        unsigned long c701 = -1;
        unsigned long c702 = 1;
        unsigned long b703 = c701 / c702;
        _Bool c704 = ((t700 > b703)) ? 1 : 0;
        if (c704) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c705 = 1;
    unsigned long c706 = 16;
    _Bool c707 = ((c705 > c706)) ? 1 : 0;
    if (c707) {
      unsigned long __al708;
      unsigned long c709 = 1;
      __al708 = c709;
      unsigned long t710 = __n693;
      unsigned long c711 = 1;
      unsigned long b712 = t710 * c711;
      unsigned long t713 = __al708;
      void* r714 = operator_new_2(b712, t713);
      char* cast715 = (char*)r714;
      __retval695 = cast715;
      char* t716 = __retval695;
      return t716;
    }
  unsigned long t717 = __n693;
  unsigned long c718 = 1;
  unsigned long b719 = t717 * c718;
  void* r720 = operator_new(b719);
  char* cast721 = (char*)r720;
  __retval695 = cast721;
  char* t722 = __retval695;
  return t722;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v723, unsigned long v724) {
bb725: ;
  struct std__allocator_char_* this726;
  unsigned long __n727;
  char* __retval728;
  this726 = v723;
  __n727 = v724;
  struct std__allocator_char_* t729 = this726;
    _Bool r730 = std____is_constant_evaluated();
    if (r730) {
        unsigned long t731 = __n727;
        unsigned long c732 = 1;
        unsigned long ovr733;
        _Bool ovf734 = __builtin_mul_overflow(t731, c732, &ovr733);
        __n727 = ovr733;
        if (ovf734) {
          std____throw_bad_array_new_length();
        }
      unsigned long t735 = __n727;
      void* r736 = operator_new(t735);
      char* cast737 = (char*)r736;
      __retval728 = cast737;
      char* t738 = __retval728;
      return t738;
    }
  struct std____new_allocator_char_* base739 = (struct std____new_allocator_char_*)((char *)t729 + 0);
  unsigned long t740 = __n727;
  void* c741 = ((void*)0);
  char* r742 = std____new_allocator_char___allocate(base739, t740, c741);
  __retval728 = r742;
  char* t743 = __retval728;
  return t743;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v744, unsigned long v745) {
bb746: ;
  struct std__allocator_char_* __a747;
  unsigned long __n748;
  char* __retval749;
  __a747 = v744;
  __n748 = v745;
  struct std__allocator_char_* t750 = __a747;
  unsigned long t751 = __n748;
  char* r752 = std__allocator_char___allocate(t750, t751);
  __retval749 = r752;
  char* t753 = __retval749;
  return t753;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v754, unsigned long v755) {
bb756: ;
  struct std__allocator_char_* __a757;
  unsigned long __n758;
  char* __retval759;
  char* __p760;
  __a757 = v754;
  __n758 = v755;
  struct std__allocator_char_* t761 = __a757;
  unsigned long t762 = __n758;
  char* r763 = std__allocator_traits_std__allocator_char_____allocate(t761, t762);
  __p760 = r763;
  char* t764 = __p760;
  __retval759 = t764;
  char* t765 = __retval759;
  return t765;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v766) {
bb767: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this768;
  struct std__allocator_char_* __retval769;
  this768 = v766;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t770 = this768;
  struct std__allocator_char_* base771 = (struct std__allocator_char_*)((char *)&(t770->_M_dataplus) + 0);
  __retval769 = base771;
  struct std__allocator_char_* t772 = __retval769;
  return t772;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v773, unsigned long* v774, unsigned long v775) {
bb776: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this777;
  unsigned long* __capacity778;
  unsigned long __old_capacity779;
  char* __retval780;
  this777 = v773;
  __capacity778 = v774;
  __old_capacity779 = v775;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t781 = this777;
    unsigned long* t782 = __capacity778;
    unsigned long t783 = *t782;
    unsigned long r784 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t781);
    _Bool c785 = ((t783 > r784)) ? 1 : 0;
    if (c785) {
      char* cast786 = (char*)&(_str_6);
      std____throw_length_error(cast786);
    }
    unsigned long* t787 = __capacity778;
    unsigned long t788 = *t787;
    unsigned long t789 = __old_capacity779;
    _Bool c790 = ((t788 > t789)) ? 1 : 0;
    _Bool ternary791;
    if (c790) {
      unsigned long* t792 = __capacity778;
      unsigned long t793 = *t792;
      unsigned long c794 = 2;
      unsigned long t795 = __old_capacity779;
      unsigned long b796 = c794 * t795;
      _Bool c797 = ((t793 < b796)) ? 1 : 0;
      ternary791 = (_Bool)c797;
    } else {
      _Bool c798 = 0;
      ternary791 = (_Bool)c798;
    }
    if (ternary791) {
      unsigned long c799 = 2;
      unsigned long t800 = __old_capacity779;
      unsigned long b801 = c799 * t800;
      unsigned long* t802 = __capacity778;
      *t802 = b801;
        unsigned long* t803 = __capacity778;
        unsigned long t804 = *t803;
        unsigned long r805 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t781);
        _Bool c806 = ((t804 > r805)) ? 1 : 0;
        if (c806) {
          unsigned long r807 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t781);
          unsigned long* t808 = __capacity778;
          *t808 = r807;
        }
    }
  struct std__allocator_char_* r809 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t781);
  unsigned long* t810 = __capacity778;
  unsigned long t811 = *t810;
  unsigned long c812 = 1;
  unsigned long b813 = t811 + c812;
  char* r814 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r809, b813);
  __retval780 = r814;
  char* t815 = __retval780;
  return t815;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v816, unsigned long v817) {
bb818: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this819;
  unsigned long __capacity820;
  this819 = v816;
  __capacity820 = v817;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t821 = this819;
  unsigned long t822 = __capacity820;
  t821->field2._M_allocated_capacity = t822;
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v823, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v824) {
bb825: ;
  struct _Guard* this826;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s827;
  this826 = v823;
  __s827 = v824;
  struct _Guard* t828 = this826;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t829 = __s827;
  t828->_M_guarded = t829;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v830, char* v831, unsigned long v832) {
bb833: ;
  char* __s1834;
  char* __s2835;
  unsigned long __n836;
  char* __retval837;
  __s1834 = v830;
  __s2835 = v831;
  __n836 = v832;
    unsigned long t838 = __n836;
    unsigned long c839 = 0;
    _Bool c840 = ((t838 == c839)) ? 1 : 0;
    if (c840) {
      char* t841 = __s1834;
      __retval837 = t841;
      char* t842 = __retval837;
      return t842;
    }
    _Bool r843 = std____is_constant_evaluated();
    if (r843) {
        unsigned long __i844;
        unsigned long c845 = 0;
        __i844 = c845;
        while (1) {
          unsigned long t847 = __i844;
          unsigned long t848 = __n836;
          _Bool c849 = ((t847 < t848)) ? 1 : 0;
          if (!c849) break;
          char* t850 = __s1834;
          unsigned long t851 = __i844;
          char* ptr852 = &(t850)[t851];
          unsigned long t853 = __i844;
          char* t854 = __s2835;
          char* ptr855 = &(t854)[t853];
          char* r856 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr852, ptr855);
        for_step846: ;
          unsigned long t857 = __i844;
          unsigned long u858 = t857 + 1;
          __i844 = u858;
        }
      char* t859 = __s1834;
      __retval837 = t859;
      char* t860 = __retval837;
      return t860;
    }
  char* t861 = __s1834;
  void* cast862 = (void*)t861;
  char* t863 = __s2835;
  void* cast864 = (void*)t863;
  unsigned long t865 = __n836;
  unsigned long c866 = 1;
  unsigned long b867 = t865 * c866;
  void* r868 = memcpy(cast862, cast864, b867);
  char* t869 = __s1834;
  __retval837 = t869;
  char* t870 = __retval837;
  return t870;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v871, char* v872, unsigned long v873) {
bb874: ;
  char* __s1875;
  char* __s2876;
  unsigned long __n877;
  char* __retval878;
  __s1875 = v871;
  __s2876 = v872;
  __n877 = v873;
    unsigned long t879 = __n877;
    unsigned long c880 = 0;
    _Bool c881 = ((t879 == c880)) ? 1 : 0;
    if (c881) {
      char* t882 = __s1875;
      __retval878 = t882;
      char* t883 = __retval878;
      return t883;
    }
    _Bool r884 = std____is_constant_evaluated();
    if (r884) {
      char* t885 = __s1875;
      char* t886 = __s2876;
      unsigned long t887 = __n877;
      char* r888 = __gnu_cxx__char_traits_char___copy(t885, t886, t887);
      __retval878 = r888;
      char* t889 = __retval878;
      return t889;
    }
  char* t890 = __s1875;
  void* cast891 = (void*)t890;
  char* t892 = __s2876;
  void* cast893 = (void*)t892;
  unsigned long t894 = __n877;
  void* r895 = memcpy(cast891, cast893, t894);
  char* cast896 = (char*)r895;
  __retval878 = cast896;
  char* t897 = __retval878;
  return t897;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v898, char* v899, unsigned long v900) {
bb901: ;
  char* __d902;
  char* __s903;
  unsigned long __n904;
  __d902 = v898;
  __s903 = v899;
  __n904 = v900;
    unsigned long t905 = __n904;
    unsigned long c906 = 1;
    _Bool c907 = ((t905 == c906)) ? 1 : 0;
    if (c907) {
      char* t908 = __d902;
      char* t909 = __s903;
      std__char_traits_char___assign(t908, t909);
    } else {
      char* t910 = __d902;
      char* t911 = __s903;
      unsigned long t912 = __n904;
      char* r913 = std__char_traits_char___copy(t910, t911, t912);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v914) {
bb915: ;
  char* __it916;
  char* __retval917;
  __it916 = v914;
  char* t918 = __it916;
  __retval917 = t918;
  char* t919 = __retval917;
  return t919;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v920, char* v921, char* v922) {
bb923: ;
  char* __p924;
  char* __k1925;
  char* __k2926;
  __p924 = v920;
  __k1925 = v921;
  __k2926 = v922;
    char* t927 = __p924;
    char* t928 = __k1925;
    char* r929 = char_const__std____niter_base_char_const__(t928);
    char* t930 = __k2926;
    char* t931 = __k1925;
    long diff932 = t930 - t931;
    unsigned long cast933 = (unsigned long)diff932;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t927, r929, cast933);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v934) {
bb935: ;
  struct _Guard* this936;
  this936 = v934;
  struct _Guard* t937 = this936;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t938 = t937->_M_guarded;
    _Bool cast939 = (_Bool)t938;
    if (cast939) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t940 = t937->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t940);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v941, char* v942, char* v943, struct std__forward_iterator_tag v944) {
bb945: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this946;
  char* __beg947;
  char* __end948;
  struct std__forward_iterator_tag unnamed949;
  unsigned long __dnew950;
  struct _Guard __guard951;
  this946 = v941;
  __beg947 = v942;
  __end948 = v943;
  unnamed949 = v944;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t952 = this946;
  char* t953 = __beg947;
  char* t954 = __end948;
  long r955 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t953, t954);
  unsigned long cast956 = (unsigned long)r955;
  __dnew950 = cast956;
    unsigned long t957 = __dnew950;
    unsigned long c958 = 15;
    _Bool c959 = ((t957 > c958)) ? 1 : 0;
    if (c959) {
      unsigned long c960 = 0;
      char* r961 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t952, &__dnew950, c960);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t952, r961);
      unsigned long t962 = __dnew950;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t952, t962);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t952);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard951, t952);
    char* r963 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t952);
    char* t964 = __beg947;
    char* t965 = __end948;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r963, t964, t965);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c966 = ((void*)0);
    __guard951._M_guarded = c966;
    unsigned long t967 = __dnew950;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t952, t967);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard951);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v968) {
bb969: ;
  char* __r970;
  char* __retval971;
  __r970 = v968;
  char* t972 = __r970;
  __retval971 = t972;
  char* t973 = __retval971;
  return t973;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v974) {
bb975: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this976;
  char* __retval977;
  this976 = v974;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t978 = this976;
  char* cast979 = (char*)&(t978->field2._M_local_buf);
  char* r980 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast979);
  __retval977 = r980;
  char* t981 = __retval977;
  return t981;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v982) {
bb983: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this984;
  _Bool __retval985;
  this984 = v982;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t986 = this984;
    char* r987 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t986);
    char* r988 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t986);
    _Bool c989 = ((r987 == r988)) ? 1 : 0;
    if (c989) {
        unsigned long t990 = t986->_M_string_length;
        unsigned long c991 = 15;
        _Bool c992 = ((t990 > c991)) ? 1 : 0;
        if (c992) {
          __builtin_unreachable();
        }
      _Bool c993 = 1;
      __retval985 = c993;
      _Bool t994 = __retval985;
      return t994;
    }
  _Bool c995 = 0;
  __retval985 = c995;
  _Bool t996 = __retval985;
  return t996;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v997, char* v998, unsigned long v999) {
bb1000: ;
  struct std____new_allocator_char_* this1001;
  char* __p1002;
  unsigned long __n1003;
  this1001 = v997;
  __p1002 = v998;
  __n1003 = v999;
  struct std____new_allocator_char_* t1004 = this1001;
    unsigned long c1005 = 1;
    unsigned long c1006 = 16;
    _Bool c1007 = ((c1005 > c1006)) ? 1 : 0;
    if (c1007) {
      char* t1008 = __p1002;
      void* cast1009 = (void*)t1008;
      unsigned long t1010 = __n1003;
      unsigned long c1011 = 1;
      unsigned long b1012 = t1010 * c1011;
      unsigned long c1013 = 1;
      operator_delete_3(cast1009, b1012, c1013);
      return;
    }
  char* t1014 = __p1002;
  void* cast1015 = (void*)t1014;
  unsigned long t1016 = __n1003;
  unsigned long c1017 = 1;
  unsigned long b1018 = t1016 * c1017;
  operator_delete_2(cast1015, b1018);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1019, char* v1020, unsigned long v1021) {
bb1022: ;
  struct std__allocator_char_* this1023;
  char* __p1024;
  unsigned long __n1025;
  this1023 = v1019;
  __p1024 = v1020;
  __n1025 = v1021;
  struct std__allocator_char_* t1026 = this1023;
    _Bool r1027 = std____is_constant_evaluated();
    if (r1027) {
      char* t1028 = __p1024;
      void* cast1029 = (void*)t1028;
      operator_delete(cast1029);
      return;
    }
  struct std____new_allocator_char_* base1030 = (struct std____new_allocator_char_*)((char *)t1026 + 0);
  char* t1031 = __p1024;
  unsigned long t1032 = __n1025;
  std____new_allocator_char___deallocate(base1030, t1031, t1032);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1033, char* v1034, unsigned long v1035) {
bb1036: ;
  struct std__allocator_char_* __a1037;
  char* __p1038;
  unsigned long __n1039;
  __a1037 = v1033;
  __p1038 = v1034;
  __n1039 = v1035;
  struct std__allocator_char_* t1040 = __a1037;
  char* t1041 = __p1038;
  unsigned long t1042 = __n1039;
  std__allocator_char___deallocate(t1040, t1041, t1042);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1043, unsigned long v1044) {
bb1045: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1046;
  unsigned long __size1047;
  this1046 = v1043;
  __size1047 = v1044;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1048 = this1046;
  struct std__allocator_char_* r1049 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1048);
  char* r1050 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1048);
  unsigned long t1051 = __size1047;
  unsigned long c1052 = 1;
  unsigned long b1053 = t1051 + c1052;
  std__allocator_traits_std__allocator_char_____deallocate(r1049, r1050, b1053);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1054) {
bb1055: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1056;
  this1056 = v1054;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1057 = this1056;
    _Bool r1058 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1057);
    _Bool u1059 = !r1058;
    if (u1059) {
      unsigned long t1060 = t1057->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1057, t1060);
    }
  return;
}

