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
char _str_2[4] = "10 ";
char _str_3[13] = "str != \"10 \"";
char _str_4[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_append_9_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[50] = "basic_string: construction from null is not valid";
char _str_6[24] = "basic_string::_M_create";
char _str_7[21] = "basic_string::append";
char _str_8[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, unsigned long p2, unsigned long p3);
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v39) {
bb40:
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
bb55:
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
bb70:
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
bb90:
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
bb101:
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
bb157:
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

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v183, char* v184, unsigned long v185) {
bb186:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this187;
  char* __s188;
  unsigned long __n189;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval190;
  this187 = v183;
  __s188 = v184;
  __n189 = v185;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t191 = this187;
  unsigned long c192 = 0;
  unsigned long t193 = __n189;
  char* cast194 = (char*)&(_str_7);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t191, c192, t193, cast194);
  char* t195 = __s188;
  unsigned long t196 = __n189;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r197 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t191, t195, t196);
  __retval190 = r197;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t198 = __retval190;
  return t198;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v199, unsigned long v200, char* v201) {
bb202:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this203;
  unsigned long __pos204;
  char* __s205;
  unsigned long __retval206;
  this203 = v199;
  __pos204 = v200;
  __s205 = v201;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t207 = this203;
    unsigned long t208 = __pos204;
    unsigned long r209 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t207);
    _Bool c210 = ((t208 > r209)) ? 1 : 0;
    if (c210) {
      char* cast211 = (char*)&(_str_8);
      char* t212 = __s205;
      unsigned long t213 = __pos204;
      unsigned long r214 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t207);
      std____throw_out_of_range_fmt(cast211, t212, t213, r214);
    }
  unsigned long t215 = __pos204;
  __retval206 = t215;
  unsigned long t216 = __retval206;
  return t216;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v217, unsigned long v218, unsigned long v219) {
bb220:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this221;
  unsigned long __pos222;
  unsigned long __off223;
  unsigned long __retval224;
  _Bool __testoff225;
  this221 = v217;
  __pos222 = v218;
  __off223 = v219;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t226 = this221;
  unsigned long t227 = __off223;
  unsigned long r228 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t226);
  unsigned long t229 = __pos222;
  unsigned long b230 = r228 - t229;
  _Bool c231 = ((t227 < b230)) ? 1 : 0;
  __testoff225 = c231;
  _Bool t232 = __testoff225;
  unsigned long ternary233;
  if (t232) {
    unsigned long t234 = __off223;
    ternary233 = (unsigned long)t234;
  } else {
    unsigned long r235 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t226);
    unsigned long t236 = __pos222;
    unsigned long b237 = r235 - t236;
    ternary233 = (unsigned long)b237;
  }
  __retval224 = ternary233;
  unsigned long t238 = __retval224;
  return t238;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendERKS4_mm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v239, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v240, unsigned long v241, unsigned long v242) {
bb243:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this244;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str245;
  unsigned long __pos246;
  unsigned long __n247;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval248;
  this244 = v239;
  __str245 = v240;
  __pos246 = v241;
  __n247 = v242;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t249 = this244;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t250 = __str245;
  char* r251 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t250);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t252 = __str245;
  unsigned long t253 = __pos246;
  char* cast254 = (char*)&(_str_7);
  unsigned long r255 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t252, t253, cast254);
  char* ptr256 = &(r251)[r255];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t257 = __str245;
  unsigned long t258 = __pos246;
  unsigned long t259 = __n247;
  unsigned long r260 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t257, t258, t259);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r261 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(t249, ptr256, r260);
  __retval248 = r261;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t262 = __retval248;
  return t262;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v263, char* v264) {
bb265:
  char* __c1266;
  char* __c2267;
  _Bool __retval268;
  __c1266 = v263;
  __c2267 = v264;
  char* t269 = __c1266;
  char t270 = *t269;
  unsigned char cast271 = (unsigned char)t270;
  int cast272 = (int)cast271;
  char* t273 = __c2267;
  char t274 = *t273;
  unsigned char cast275 = (unsigned char)t274;
  int cast276 = (int)cast275;
  _Bool c277 = ((cast272 < cast276)) ? 1 : 0;
  __retval268 = c277;
  _Bool t278 = __retval268;
  return t278;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v279, char* v280, unsigned long v281) {
bb282:
  char* __s1283;
  char* __s2284;
  unsigned long __n285;
  int __retval286;
  __s1283 = v279;
  __s2284 = v280;
  __n285 = v281;
    unsigned long t287 = __n285;
    unsigned long c288 = 0;
    _Bool c289 = ((t287 == c288)) ? 1 : 0;
    if (c289) {
      int c290 = 0;
      __retval286 = c290;
      int t291 = __retval286;
      return t291;
    }
    _Bool r292 = std____is_constant_evaluated();
    if (r292) {
        unsigned long __i293;
        unsigned long c294 = 0;
        __i293 = c294;
        while (1) {
          unsigned long t296 = __i293;
          unsigned long t297 = __n285;
          _Bool c298 = ((t296 < t297)) ? 1 : 0;
          if (!c298) break;
            unsigned long t299 = __i293;
            char* t300 = __s1283;
            char* ptr301 = &(t300)[t299];
            unsigned long t302 = __i293;
            char* t303 = __s2284;
            char* ptr304 = &(t303)[t302];
            _Bool r305 = std__char_traits_char___lt(ptr301, ptr304);
            if (r305) {
              int c306 = -1;
              __retval286 = c306;
              int t307 = __retval286;
              int ret_val308 = t307;
              return ret_val308;
            } else {
                unsigned long t309 = __i293;
                char* t310 = __s2284;
                char* ptr311 = &(t310)[t309];
                unsigned long t312 = __i293;
                char* t313 = __s1283;
                char* ptr314 = &(t313)[t312];
                _Bool r315 = std__char_traits_char___lt(ptr311, ptr314);
                if (r315) {
                  int c316 = 1;
                  __retval286 = c316;
                  int t317 = __retval286;
                  int ret_val318 = t317;
                  return ret_val318;
                }
            }
        for_step295: ;
          unsigned long t319 = __i293;
          unsigned long u320 = t319 + 1;
          __i293 = u320;
        }
      int c321 = 0;
      __retval286 = c321;
      int t322 = __retval286;
      return t322;
    }
  char* t323 = __s1283;
  void* cast324 = (void*)t323;
  char* t325 = __s2284;
  void* cast326 = (void*)t325;
  unsigned long t327 = __n285;
  int r328 = memcmp(cast324, cast326, t327);
  __retval286 = r328;
  int t329 = __retval286;
  return t329;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v330) {
bb331:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this332;
  char* __retval333;
  this332 = v330;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t334 = this332;
  char* r335 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t334);
  __retval333 = r335;
  char* t336 = __retval333;
  return t336;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v337, char* v338) {
bb339:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs340;
  char* __rhs341;
  _Bool __retval342;
  __lhs340 = v337;
  __rhs341 = v338;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t343 = __lhs340;
  unsigned long r344 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t343);
  char* t345 = __rhs341;
  unsigned long r346 = std__char_traits_char___length(t345);
  _Bool c347 = ((r344 == r346)) ? 1 : 0;
  _Bool ternary348;
  if (c347) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t349 = __lhs340;
    char* r350 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t349);
    char* t351 = __rhs341;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t352 = __lhs340;
    unsigned long r353 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t352);
    int r354 = std__char_traits_char___compare(r350, t351, r353);
    _Bool cast355 = (_Bool)r354;
    _Bool u356 = !cast355;
    ternary348 = (_Bool)u356;
  } else {
    _Bool c357 = 0;
    ternary348 = (_Bool)c357;
  }
  __retval342 = ternary348;
  _Bool t358 = __retval342;
  return t358;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v359, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v360) {
bb361:
  struct std__basic_ostream_char__std__char_traits_char__* __os362;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str363;
  struct std__basic_ostream_char__std__char_traits_char__* __retval364;
  __os362 = v359;
  __str363 = v360;
  struct std__basic_ostream_char__std__char_traits_char__* t365 = __os362;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t366 = __str363;
  char* r367 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t366);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t368 = __str363;
  unsigned long r369 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t368);
  long cast370 = (long)r369;
  struct std__basic_ostream_char__std__char_traits_char__* r371 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t365, r367, cast370);
  __retval364 = r371;
  struct std__basic_ostream_char__std__char_traits_char__* t372 = __retval364;
  return t372;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v373, void* v374) {
bb375:
  struct std__basic_ostream_char__std__char_traits_char__* this376;
  void* __pf377;
  struct std__basic_ostream_char__std__char_traits_char__* __retval378;
  this376 = v373;
  __pf377 = v374;
  struct std__basic_ostream_char__std__char_traits_char__* t379 = this376;
  void* t380 = __pf377;
  struct std__basic_ostream_char__std__char_traits_char__* r381 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t380)(t379);
  __retval378 = r381;
  struct std__basic_ostream_char__std__char_traits_char__* t382 = __retval378;
  return t382;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v383) {
bb384:
  struct std__basic_ostream_char__std__char_traits_char__* __os385;
  struct std__basic_ostream_char__std__char_traits_char__* __retval386;
  __os385 = v383;
  struct std__basic_ostream_char__std__char_traits_char__* t387 = __os385;
  struct std__basic_ostream_char__std__char_traits_char__* r388 = std__ostream__flush(t387);
  __retval386 = r388;
  struct std__basic_ostream_char__std__char_traits_char__* t389 = __retval386;
  return t389;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v390) {
bb391:
  struct std__ctype_char_* __f392;
  struct std__ctype_char_* __retval393;
  __f392 = v390;
    struct std__ctype_char_* t394 = __f392;
    _Bool cast395 = (_Bool)t394;
    _Bool u396 = !cast395;
    if (u396) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t397 = __f392;
  __retval393 = t397;
  struct std__ctype_char_* t398 = __retval393;
  return t398;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v399, char v400) {
bb401:
  struct std__ctype_char_* this402;
  char __c403;
  char __retval404;
  this402 = v399;
  __c403 = v400;
  struct std__ctype_char_* t405 = this402;
    char t406 = t405->_M_widen_ok;
    _Bool cast407 = (_Bool)t406;
    if (cast407) {
      char t408 = __c403;
      unsigned char cast409 = (unsigned char)t408;
      unsigned long cast410 = (unsigned long)cast409;
      char t411 = t405->_M_widen[cast410];
      __retval404 = t411;
      char t412 = __retval404;
      return t412;
    }
  std__ctype_char____M_widen_init___const(t405);
  char t413 = __c403;
  void** v414 = (void**)t405;
  void* v415 = *((void**)v414);
  char vcall418 = (char)__VERIFIER_virtual_call_char_char(t405, 6, t413);
  __retval404 = vcall418;
  char t419 = __retval404;
  return t419;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v420, char v421) {
bb422:
  struct std__basic_ios_char__std__char_traits_char__* this423;
  char __c424;
  char __retval425;
  this423 = v420;
  __c424 = v421;
  struct std__basic_ios_char__std__char_traits_char__* t426 = this423;
  struct std__ctype_char_* t427 = t426->_M_ctype;
  struct std__ctype_char_* r428 = std__ctype_char__const__std____check_facet_std__ctype_char___(t427);
  char t429 = __c424;
  char r430 = std__ctype_char___widen_char__const(r428, t429);
  __retval425 = r430;
  char t431 = __retval425;
  return t431;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v432) {
bb433:
  struct std__basic_ostream_char__std__char_traits_char__* __os434;
  struct std__basic_ostream_char__std__char_traits_char__* __retval435;
  __os434 = v432;
  struct std__basic_ostream_char__std__char_traits_char__* t436 = __os434;
  struct std__basic_ostream_char__std__char_traits_char__* t437 = __os434;
  void** v438 = (void**)t437;
  void* v439 = *((void**)v438);
  unsigned char* cast440 = (unsigned char*)v439;
  long c441 = -24;
  unsigned char* ptr442 = &(cast440)[c441];
  long* cast443 = (long*)ptr442;
  long t444 = *cast443;
  unsigned char* cast445 = (unsigned char*)t437;
  unsigned char* ptr446 = &(cast445)[t444];
  struct std__basic_ostream_char__std__char_traits_char__* cast447 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr446;
  struct std__basic_ios_char__std__char_traits_char__* cast448 = (struct std__basic_ios_char__std__char_traits_char__*)cast447;
  char c449 = 10;
  char r450 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast448, c449);
  struct std__basic_ostream_char__std__char_traits_char__* r451 = std__ostream__put(t436, r450);
  struct std__basic_ostream_char__std__char_traits_char__* r452 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r451);
  __retval435 = r452;
  struct std__basic_ostream_char__std__char_traits_char__* t453 = __retval435;
  return t453;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v454) {
bb455:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this456;
  this456 = v454;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t457 = this456;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t457);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t457->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb458:
  int __retval459;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str460;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2461;
  struct std__allocator_char_ ref_tmp0462;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3463;
  struct std__allocator_char_ ref_tmp1464;
  int c465 = 0;
  __retval459 = c465;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str460);
    char* cast466 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp0462);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str2461, cast466, &ref_tmp0462);
    {
      std__allocator_char____allocator(&ref_tmp0462);
    }
      char* cast467 = (char*)&(_str_1);
      std__allocator_char___allocator_2(&ref_tmp1464);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str3463, cast467, &ref_tmp1464);
      {
        std__allocator_char____allocator(&ref_tmp1464);
      }
        unsigned long c468 = 6;
        unsigned long c469 = 3;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r470 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(&str460, &str3463, c468, c469);
        char* cast471 = (char*)&(_str_2);
        _Bool r472 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str460, cast471);
        _Bool u473 = !r472;
        if (u473) {
        } else {
          char* cast474 = (char*)&(_str_3);
          char* c475 = _str_4;
          unsigned int c476 = 25;
          char* cast477 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast474, c475, c476, cast477);
        }
        struct std__basic_ostream_char__std__char_traits_char__* r478 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str460);
        struct std__basic_ostream_char__std__char_traits_char__* r479 = std__ostream__operator___std__ostream_____(r478, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int c480 = 0;
        __retval459 = c480;
        int t481 = __retval459;
        int ret_val482 = t481;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str3463);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2461);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str460);
        }
        return ret_val482;
  int t483 = __retval459;
  return t483;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v484) {
bb485:
  char* __r486;
  char* __retval487;
  __r486 = v484;
  char* t488 = __r486;
  __retval487 = t488;
  char* t489 = __retval487;
  return t489;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v490) {
bb491:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this492;
  char* __retval493;
  this492 = v490;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t494 = this492;
  char* cast495 = (char*)&(t494->field2._M_local_buf);
  char* r496 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast495);
  __retval493 = r496;
  char* t497 = __retval493;
  return t497;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v498, char* v499, struct std__allocator_char_* v500) {
bb501:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this502;
  char* __dat503;
  struct std__allocator_char_* __a504;
  this502 = v498;
  __dat503 = v499;
  __a504 = v500;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t505 = this502;
  struct std__allocator_char_* base506 = (struct std__allocator_char_*)((char *)t505 + 0);
  struct std__allocator_char_* t507 = __a504;
  std__allocator_char___allocator(base506, t507);
    char* t508 = __dat503;
    t505->_M_p = t508;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb509:
  _Bool __retval510;
    _Bool c511 = 0;
    __retval510 = c511;
    _Bool t512 = __retval510;
    return t512;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v513) {
bb514:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this515;
  this515 = v513;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t516 = this515;
    _Bool r517 = std__is_constant_evaluated();
    if (r517) {
        unsigned long __i518;
        unsigned long c519 = 0;
        __i518 = c519;
        while (1) {
          unsigned long t521 = __i518;
          unsigned long c522 = 15;
          _Bool c523 = ((t521 <= c522)) ? 1 : 0;
          if (!c523) break;
          char c524 = 0;
          unsigned long t525 = __i518;
          t516->field2._M_local_buf[t525] = c524;
        for_step520: ;
          unsigned long t526 = __i518;
          unsigned long u527 = t526 + 1;
          __i518 = u527;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v528, unsigned long v529) {
bb530:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this531;
  unsigned long __length532;
  this531 = v528;
  __length532 = v529;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t533 = this531;
  unsigned long t534 = __length532;
  t533->_M_string_length = t534;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb535:
  _Bool __retval536;
    _Bool c537 = 0;
    __retval536 = c537;
    _Bool t538 = __retval536;
    return t538;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v539, char* v540) {
bb541:
  char* __location542;
  char* __args543;
  char* __retval544;
  void* __loc545;
  __location542 = v539;
  __args543 = v540;
  char* t546 = __location542;
  void* cast547 = (void*)t546;
  __loc545 = cast547;
    void* t548 = __loc545;
    char* cast549 = (char*)t548;
    char* t550 = __args543;
    char t551 = *t550;
    *cast549 = t551;
    __retval544 = cast549;
    char* t552 = __retval544;
    return t552;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v553, char* v554) {
bb555:
  char* __c1556;
  char* __c2557;
  __c1556 = v553;
  __c2557 = v554;
    _Bool r558 = std____is_constant_evaluated();
    if (r558) {
      char* t559 = __c1556;
      char* t560 = __c2557;
      char* r561 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t559, t560);
    } else {
      char* t562 = __c2557;
      char t563 = *t562;
      char* t564 = __c1556;
      *t564 = t563;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v565) {
bb566:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this567;
  char* __retval568;
  this567 = v565;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t569 = this567;
  char* t570 = t569->_M_dataplus._M_p;
  __retval568 = t570;
  char* t571 = __retval568;
  return t571;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v572, unsigned long v573) {
bb574:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this575;
  unsigned long __n576;
  char ref_tmp0577;
  this575 = v572;
  __n576 = v573;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t578 = this575;
  unsigned long t579 = __n576;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t578, t579);
  unsigned long t580 = __n576;
  char* r581 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t578);
  char* ptr582 = &(r581)[t580];
  char c583 = 0;
  ref_tmp0577 = c583;
  std__char_traits_char___assign(ptr582, &ref_tmp0577);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v584) {
bb585:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this586;
  this586 = v584;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t587 = this586;
  {
    struct std__allocator_char_* base588 = (struct std__allocator_char_*)((char *)t587 + 0);
    std__allocator_char____allocator(base588);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v589, struct std____new_allocator_char_* v590) {
bb591:
  struct std____new_allocator_char_* this592;
  struct std____new_allocator_char_* unnamed593;
  this592 = v589;
  unnamed593 = v590;
  struct std____new_allocator_char_* t594 = this592;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v595, struct std__allocator_char_* v596) {
bb597:
  struct std__allocator_char_* this598;
  struct std__allocator_char_* __a599;
  this598 = v595;
  __a599 = v596;
  struct std__allocator_char_* t600 = this598;
  struct std____new_allocator_char_* base601 = (struct std____new_allocator_char_*)((char *)t600 + 0);
  struct std__allocator_char_* t602 = __a599;
  struct std____new_allocator_char_* base603 = (struct std____new_allocator_char_*)((char *)t602 + 0);
  std____new_allocator_char_____new_allocator(base601, base603);
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v604) {
bb605:
  struct std____new_allocator_char_* this606;
  this606 = v604;
  struct std____new_allocator_char_* t607 = this606;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v608, char* v609, struct std__allocator_char_* v610) {
bb611:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this612;
  char* __dat613;
  struct std__allocator_char_* __a614;
  this612 = v608;
  __dat613 = v609;
  __a614 = v610;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t615 = this612;
  struct std__allocator_char_* base616 = (struct std__allocator_char_*)((char *)t615 + 0);
  struct std__allocator_char_* t617 = __a614;
  std__allocator_char___allocator(base616, t617);
    char* t618 = __dat613;
    t615->_M_p = t618;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v619, char* v620) {
bb621:
  char* __c1622;
  char* __c2623;
  _Bool __retval624;
  __c1622 = v619;
  __c2623 = v620;
  char* t625 = __c1622;
  char t626 = *t625;
  int cast627 = (int)t626;
  char* t628 = __c2623;
  char t629 = *t628;
  int cast630 = (int)t629;
  _Bool c631 = ((cast627 == cast630)) ? 1 : 0;
  __retval624 = c631;
  _Bool t632 = __retval624;
  return t632;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v633) {
bb634:
  char* __p635;
  unsigned long __retval636;
  unsigned long __i637;
  __p635 = v633;
  unsigned long c638 = 0;
  __i637 = c638;
    char ref_tmp0639;
    while (1) {
      unsigned long t640 = __i637;
      char* t641 = __p635;
      char* ptr642 = &(t641)[t640];
      char c643 = 0;
      ref_tmp0639 = c643;
      _Bool r644 = __gnu_cxx__char_traits_char___eq(ptr642, &ref_tmp0639);
      _Bool u645 = !r644;
      if (!u645) break;
      unsigned long t646 = __i637;
      unsigned long u647 = t646 + 1;
      __i637 = u647;
    }
  unsigned long t648 = __i637;
  __retval636 = t648;
  unsigned long t649 = __retval636;
  return t649;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v650) {
bb651:
  char* __s652;
  unsigned long __retval653;
  __s652 = v650;
    _Bool r654 = std____is_constant_evaluated();
    if (r654) {
      char* t655 = __s652;
      unsigned long r656 = __gnu_cxx__char_traits_char___length(t655);
      __retval653 = r656;
      unsigned long t657 = __retval653;
      return t657;
    }
  char* t658 = __s652;
  unsigned long r659 = strlen(t658);
  __retval653 = r659;
  unsigned long t660 = __retval653;
  return t660;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v661, char* v662, struct std__random_access_iterator_tag v663) {
bb664:
  char* __first665;
  char* __last666;
  struct std__random_access_iterator_tag unnamed667;
  long __retval668;
  __first665 = v661;
  __last666 = v662;
  unnamed667 = v663;
  char* t669 = __last666;
  char* t670 = __first665;
  long diff671 = t669 - t670;
  __retval668 = diff671;
  long t672 = __retval668;
  return t672;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v673) {
bb674:
  char** unnamed675;
  struct std__random_access_iterator_tag __retval676;
  unnamed675 = v673;
  struct std__random_access_iterator_tag t677 = __retval676;
  return t677;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v678, char* v679) {
bb680:
  char* __first681;
  char* __last682;
  long __retval683;
  struct std__random_access_iterator_tag agg_tmp0684;
  __first681 = v678;
  __last682 = v679;
  char* t685 = __first681;
  char* t686 = __last682;
  struct std__random_access_iterator_tag r687 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first681);
  agg_tmp0684 = r687;
  struct std__random_access_iterator_tag t688 = agg_tmp0684;
  long r689 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t685, t686, t688);
  __retval683 = r689;
  long t690 = __retval683;
  return t690;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v691, char* v692) {
bb693:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this694;
  char* __p695;
  this694 = v691;
  __p695 = v692;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t696 = this694;
  char* t697 = __p695;
  t696->_M_dataplus._M_p = t697;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v698) {
bb699:
  struct std__allocator_char_* __a700;
  unsigned long __retval701;
  __a700 = v698;
  unsigned long c702 = -1;
  unsigned long c703 = 1;
  unsigned long b704 = c702 / c703;
  __retval701 = b704;
  unsigned long t705 = __retval701;
  return t705;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v706) {
bb707:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this708;
  struct std__allocator_char_* __retval709;
  this708 = v706;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t710 = this708;
  struct std__allocator_char_* base711 = (struct std__allocator_char_*)((char *)&(t710->_M_dataplus) + 0);
  __retval709 = base711;
  struct std__allocator_char_* t712 = __retval709;
  return t712;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v713, unsigned long* v714) {
bb715:
  unsigned long* __a716;
  unsigned long* __b717;
  unsigned long* __retval718;
  __a716 = v713;
  __b717 = v714;
    unsigned long* t719 = __b717;
    unsigned long t720 = *t719;
    unsigned long* t721 = __a716;
    unsigned long t722 = *t721;
    _Bool c723 = ((t720 < t722)) ? 1 : 0;
    if (c723) {
      unsigned long* t724 = __b717;
      __retval718 = t724;
      unsigned long* t725 = __retval718;
      return t725;
    }
  unsigned long* t726 = __a716;
  __retval718 = t726;
  unsigned long* t727 = __retval718;
  return t727;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v728) {
bb729:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this730;
  unsigned long __retval731;
  unsigned long __diffmax732;
  unsigned long __allocmax733;
  this730 = v728;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t734 = this730;
  unsigned long c735 = 9223372036854775807;
  __diffmax732 = c735;
  struct std__allocator_char_* r736 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t734);
  unsigned long r737 = std__allocator_traits_std__allocator_char_____max_size(r736);
  __allocmax733 = r737;
  unsigned long* r738 = unsigned_long_const__std__min_unsigned_long_(&__diffmax732, &__allocmax733);
  unsigned long t739 = *r738;
  unsigned long c740 = 1;
  unsigned long b741 = t739 - c740;
  __retval731 = b741;
  unsigned long t742 = __retval731;
  return t742;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v743) {
bb744:
  struct std____new_allocator_char_* this745;
  unsigned long __retval746;
  this745 = v743;
  struct std____new_allocator_char_* t747 = this745;
  unsigned long c748 = 9223372036854775807;
  unsigned long c749 = 1;
  unsigned long b750 = c748 / c749;
  __retval746 = b750;
  unsigned long t751 = __retval746;
  return t751;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v752, unsigned long v753, void* v754) {
bb755:
  struct std____new_allocator_char_* this756;
  unsigned long __n757;
  void* unnamed758;
  char* __retval759;
  this756 = v752;
  __n757 = v753;
  unnamed758 = v754;
  struct std____new_allocator_char_* t760 = this756;
    unsigned long t761 = __n757;
    unsigned long r762 = std____new_allocator_char____M_max_size___const(t760);
    _Bool c763 = ((t761 > r762)) ? 1 : 0;
    if (c763) {
        unsigned long t764 = __n757;
        unsigned long c765 = -1;
        unsigned long c766 = 1;
        unsigned long b767 = c765 / c766;
        _Bool c768 = ((t764 > b767)) ? 1 : 0;
        if (c768) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c769 = 1;
    unsigned long c770 = 16;
    _Bool c771 = ((c769 > c770)) ? 1 : 0;
    if (c771) {
      unsigned long __al772;
      unsigned long c773 = 1;
      __al772 = c773;
      unsigned long t774 = __n757;
      unsigned long c775 = 1;
      unsigned long b776 = t774 * c775;
      unsigned long t777 = __al772;
      void* r778 = operator_new_2(b776, t777);
      char* cast779 = (char*)r778;
      __retval759 = cast779;
      char* t780 = __retval759;
      return t780;
    }
  unsigned long t781 = __n757;
  unsigned long c782 = 1;
  unsigned long b783 = t781 * c782;
  void* r784 = operator_new(b783);
  char* cast785 = (char*)r784;
  __retval759 = cast785;
  char* t786 = __retval759;
  return t786;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v787, unsigned long v788) {
bb789:
  struct std__allocator_char_* this790;
  unsigned long __n791;
  char* __retval792;
  this790 = v787;
  __n791 = v788;
  struct std__allocator_char_* t793 = this790;
    _Bool r794 = std____is_constant_evaluated();
    if (r794) {
        unsigned long t795 = __n791;
        unsigned long c796 = 1;
        unsigned long ovr797;
        _Bool ovf798 = __builtin_mul_overflow(t795, c796, &ovr797);
        __n791 = ovr797;
        if (ovf798) {
          std____throw_bad_array_new_length();
        }
      unsigned long t799 = __n791;
      void* r800 = operator_new(t799);
      char* cast801 = (char*)r800;
      __retval792 = cast801;
      char* t802 = __retval792;
      return t802;
    }
  struct std____new_allocator_char_* base803 = (struct std____new_allocator_char_*)((char *)t793 + 0);
  unsigned long t804 = __n791;
  void* c805 = ((void*)0);
  char* r806 = std____new_allocator_char___allocate(base803, t804, c805);
  __retval792 = r806;
  char* t807 = __retval792;
  return t807;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v808, unsigned long v809) {
bb810:
  struct std__allocator_char_* __a811;
  unsigned long __n812;
  char* __retval813;
  __a811 = v808;
  __n812 = v809;
  struct std__allocator_char_* t814 = __a811;
  unsigned long t815 = __n812;
  char* r816 = std__allocator_char___allocate(t814, t815);
  __retval813 = r816;
  char* t817 = __retval813;
  return t817;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v818, unsigned long v819) {
bb820:
  struct std__allocator_char_* __a821;
  unsigned long __n822;
  char* __retval823;
  char* __p824;
  __a821 = v818;
  __n822 = v819;
  struct std__allocator_char_* t825 = __a821;
  unsigned long t826 = __n822;
  char* r827 = std__allocator_traits_std__allocator_char_____allocate(t825, t826);
  __p824 = r827;
  char* t828 = __p824;
  __retval823 = t828;
  char* t829 = __retval823;
  return t829;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v830) {
bb831:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this832;
  struct std__allocator_char_* __retval833;
  this832 = v830;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t834 = this832;
  struct std__allocator_char_* base835 = (struct std__allocator_char_*)((char *)&(t834->_M_dataplus) + 0);
  __retval833 = base835;
  struct std__allocator_char_* t836 = __retval833;
  return t836;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v837, unsigned long* v838, unsigned long v839) {
bb840:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this841;
  unsigned long* __capacity842;
  unsigned long __old_capacity843;
  char* __retval844;
  this841 = v837;
  __capacity842 = v838;
  __old_capacity843 = v839;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t845 = this841;
    unsigned long* t846 = __capacity842;
    unsigned long t847 = *t846;
    unsigned long r848 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t845);
    _Bool c849 = ((t847 > r848)) ? 1 : 0;
    if (c849) {
      char* cast850 = (char*)&(_str_6);
      std____throw_length_error(cast850);
    }
    unsigned long* t851 = __capacity842;
    unsigned long t852 = *t851;
    unsigned long t853 = __old_capacity843;
    _Bool c854 = ((t852 > t853)) ? 1 : 0;
    _Bool ternary855;
    if (c854) {
      unsigned long* t856 = __capacity842;
      unsigned long t857 = *t856;
      unsigned long c858 = 2;
      unsigned long t859 = __old_capacity843;
      unsigned long b860 = c858 * t859;
      _Bool c861 = ((t857 < b860)) ? 1 : 0;
      ternary855 = (_Bool)c861;
    } else {
      _Bool c862 = 0;
      ternary855 = (_Bool)c862;
    }
    if (ternary855) {
      unsigned long c863 = 2;
      unsigned long t864 = __old_capacity843;
      unsigned long b865 = c863 * t864;
      unsigned long* t866 = __capacity842;
      *t866 = b865;
        unsigned long* t867 = __capacity842;
        unsigned long t868 = *t867;
        unsigned long r869 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t845);
        _Bool c870 = ((t868 > r869)) ? 1 : 0;
        if (c870) {
          unsigned long r871 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t845);
          unsigned long* t872 = __capacity842;
          *t872 = r871;
        }
    }
  struct std__allocator_char_* r873 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t845);
  unsigned long* t874 = __capacity842;
  unsigned long t875 = *t874;
  unsigned long c876 = 1;
  unsigned long b877 = t875 + c876;
  char* r878 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r873, b877);
  __retval844 = r878;
  char* t879 = __retval844;
  return t879;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v880, unsigned long v881) {
bb882:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this883;
  unsigned long __capacity884;
  this883 = v880;
  __capacity884 = v881;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t885 = this883;
  unsigned long t886 = __capacity884;
  t885->field2._M_allocated_capacity = t886;
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v887, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v888) {
bb889:
  struct _Guard* this890;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s891;
  this890 = v887;
  __s891 = v888;
  struct _Guard* t892 = this890;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t893 = __s891;
  t892->_M_guarded = t893;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v894, char* v895, unsigned long v896) {
bb897:
  char* __s1898;
  char* __s2899;
  unsigned long __n900;
  char* __retval901;
  __s1898 = v894;
  __s2899 = v895;
  __n900 = v896;
    unsigned long t902 = __n900;
    unsigned long c903 = 0;
    _Bool c904 = ((t902 == c903)) ? 1 : 0;
    if (c904) {
      char* t905 = __s1898;
      __retval901 = t905;
      char* t906 = __retval901;
      return t906;
    }
    _Bool r907 = std____is_constant_evaluated();
    if (r907) {
        unsigned long __i908;
        unsigned long c909 = 0;
        __i908 = c909;
        while (1) {
          unsigned long t911 = __i908;
          unsigned long t912 = __n900;
          _Bool c913 = ((t911 < t912)) ? 1 : 0;
          if (!c913) break;
          char* t914 = __s1898;
          unsigned long t915 = __i908;
          char* ptr916 = &(t914)[t915];
          unsigned long t917 = __i908;
          char* t918 = __s2899;
          char* ptr919 = &(t918)[t917];
          char* r920 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr916, ptr919);
        for_step910: ;
          unsigned long t921 = __i908;
          unsigned long u922 = t921 + 1;
          __i908 = u922;
        }
      char* t923 = __s1898;
      __retval901 = t923;
      char* t924 = __retval901;
      return t924;
    }
  char* t925 = __s1898;
  void* cast926 = (void*)t925;
  char* t927 = __s2899;
  void* cast928 = (void*)t927;
  unsigned long t929 = __n900;
  unsigned long c930 = 1;
  unsigned long b931 = t929 * c930;
  void* r932 = memcpy(cast926, cast928, b931);
  char* t933 = __s1898;
  __retval901 = t933;
  char* t934 = __retval901;
  return t934;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v935, char* v936, unsigned long v937) {
bb938:
  char* __s1939;
  char* __s2940;
  unsigned long __n941;
  char* __retval942;
  __s1939 = v935;
  __s2940 = v936;
  __n941 = v937;
    unsigned long t943 = __n941;
    unsigned long c944 = 0;
    _Bool c945 = ((t943 == c944)) ? 1 : 0;
    if (c945) {
      char* t946 = __s1939;
      __retval942 = t946;
      char* t947 = __retval942;
      return t947;
    }
    _Bool r948 = std____is_constant_evaluated();
    if (r948) {
      char* t949 = __s1939;
      char* t950 = __s2940;
      unsigned long t951 = __n941;
      char* r952 = __gnu_cxx__char_traits_char___copy(t949, t950, t951);
      __retval942 = r952;
      char* t953 = __retval942;
      return t953;
    }
  char* t954 = __s1939;
  void* cast955 = (void*)t954;
  char* t956 = __s2940;
  void* cast957 = (void*)t956;
  unsigned long t958 = __n941;
  void* r959 = memcpy(cast955, cast957, t958);
  char* cast960 = (char*)r959;
  __retval942 = cast960;
  char* t961 = __retval942;
  return t961;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v962, char* v963, unsigned long v964) {
bb965:
  char* __d966;
  char* __s967;
  unsigned long __n968;
  __d966 = v962;
  __s967 = v963;
  __n968 = v964;
    unsigned long t969 = __n968;
    unsigned long c970 = 1;
    _Bool c971 = ((t969 == c970)) ? 1 : 0;
    if (c971) {
      char* t972 = __d966;
      char* t973 = __s967;
      std__char_traits_char___assign(t972, t973);
    } else {
      char* t974 = __d966;
      char* t975 = __s967;
      unsigned long t976 = __n968;
      char* r977 = std__char_traits_char___copy(t974, t975, t976);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v978) {
bb979:
  char* __it980;
  char* __retval981;
  __it980 = v978;
  char* t982 = __it980;
  __retval981 = t982;
  char* t983 = __retval981;
  return t983;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v984, char* v985, char* v986) {
bb987:
  char* __p988;
  char* __k1989;
  char* __k2990;
  __p988 = v984;
  __k1989 = v985;
  __k2990 = v986;
    char* t991 = __p988;
    char* t992 = __k1989;
    char* r993 = char_const__std____niter_base_char_const__(t992);
    char* t994 = __k2990;
    char* t995 = __k1989;
    long diff996 = t994 - t995;
    unsigned long cast997 = (unsigned long)diff996;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t991, r993, cast997);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v998) {
bb999:
  struct _Guard* this1000;
  this1000 = v998;
  struct _Guard* t1001 = this1000;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1002 = t1001->_M_guarded;
    _Bool cast1003 = (_Bool)t1002;
    if (cast1003) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1004 = t1001->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1004);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1005, char* v1006, char* v1007, struct std__forward_iterator_tag v1008) {
bb1009:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1010;
  char* __beg1011;
  char* __end1012;
  struct std__forward_iterator_tag unnamed1013;
  unsigned long __dnew1014;
  struct _Guard __guard1015;
  this1010 = v1005;
  __beg1011 = v1006;
  __end1012 = v1007;
  unnamed1013 = v1008;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1016 = this1010;
  char* t1017 = __beg1011;
  char* t1018 = __end1012;
  long r1019 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1017, t1018);
  unsigned long cast1020 = (unsigned long)r1019;
  __dnew1014 = cast1020;
    unsigned long t1021 = __dnew1014;
    unsigned long c1022 = 15;
    _Bool c1023 = ((t1021 > c1022)) ? 1 : 0;
    if (c1023) {
      unsigned long c1024 = 0;
      char* r1025 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1016, &__dnew1014, c1024);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1016, r1025);
      unsigned long t1026 = __dnew1014;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1016, t1026);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1016);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1015, t1016);
    char* r1027 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1016);
    char* t1028 = __beg1011;
    char* t1029 = __end1012;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1027, t1028, t1029);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1030 = ((void*)0);
    __guard1015._M_guarded = c1030;
    unsigned long t1031 = __dnew1014;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1016, t1031);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1015);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1032) {
bb1033:
  char* __r1034;
  char* __retval1035;
  __r1034 = v1032;
  char* t1036 = __r1034;
  __retval1035 = t1036;
  char* t1037 = __retval1035;
  return t1037;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1038) {
bb1039:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1040;
  char* __retval1041;
  this1040 = v1038;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1042 = this1040;
  char* cast1043 = (char*)&(t1042->field2._M_local_buf);
  char* r1044 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1043);
  __retval1041 = r1044;
  char* t1045 = __retval1041;
  return t1045;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1046) {
bb1047:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1048;
  _Bool __retval1049;
  this1048 = v1046;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1050 = this1048;
    char* r1051 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1050);
    char* r1052 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1050);
    _Bool c1053 = ((r1051 == r1052)) ? 1 : 0;
    if (c1053) {
        unsigned long t1054 = t1050->_M_string_length;
        unsigned long c1055 = 15;
        _Bool c1056 = ((t1054 > c1055)) ? 1 : 0;
        if (c1056) {
          __builtin_unreachable();
        }
      _Bool c1057 = 1;
      __retval1049 = c1057;
      _Bool t1058 = __retval1049;
      return t1058;
    }
  _Bool c1059 = 0;
  __retval1049 = c1059;
  _Bool t1060 = __retval1049;
  return t1060;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1061, char* v1062, unsigned long v1063) {
bb1064:
  struct std____new_allocator_char_* this1065;
  char* __p1066;
  unsigned long __n1067;
  this1065 = v1061;
  __p1066 = v1062;
  __n1067 = v1063;
  struct std____new_allocator_char_* t1068 = this1065;
    unsigned long c1069 = 1;
    unsigned long c1070 = 16;
    _Bool c1071 = ((c1069 > c1070)) ? 1 : 0;
    if (c1071) {
      char* t1072 = __p1066;
      void* cast1073 = (void*)t1072;
      unsigned long t1074 = __n1067;
      unsigned long c1075 = 1;
      unsigned long b1076 = t1074 * c1075;
      unsigned long c1077 = 1;
      operator_delete_3(cast1073, b1076, c1077);
      return;
    }
  char* t1078 = __p1066;
  void* cast1079 = (void*)t1078;
  unsigned long t1080 = __n1067;
  unsigned long c1081 = 1;
  unsigned long b1082 = t1080 * c1081;
  operator_delete_2(cast1079, b1082);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1083, char* v1084, unsigned long v1085) {
bb1086:
  struct std__allocator_char_* this1087;
  char* __p1088;
  unsigned long __n1089;
  this1087 = v1083;
  __p1088 = v1084;
  __n1089 = v1085;
  struct std__allocator_char_* t1090 = this1087;
    _Bool r1091 = std____is_constant_evaluated();
    if (r1091) {
      char* t1092 = __p1088;
      void* cast1093 = (void*)t1092;
      operator_delete(cast1093);
      return;
    }
  struct std____new_allocator_char_* base1094 = (struct std____new_allocator_char_*)((char *)t1090 + 0);
  char* t1095 = __p1088;
  unsigned long t1096 = __n1089;
  std____new_allocator_char___deallocate(base1094, t1095, t1096);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1097, char* v1098, unsigned long v1099) {
bb1100:
  struct std__allocator_char_* __a1101;
  char* __p1102;
  unsigned long __n1103;
  __a1101 = v1097;
  __p1102 = v1098;
  __n1103 = v1099;
  struct std__allocator_char_* t1104 = __a1101;
  char* t1105 = __p1102;
  unsigned long t1106 = __n1103;
  std__allocator_char___deallocate(t1104, t1105, t1106);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1107, unsigned long v1108) {
bb1109:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1110;
  unsigned long __size1111;
  this1110 = v1107;
  __size1111 = v1108;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1112 = this1110;
  struct std__allocator_char_* r1113 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1112);
  char* r1114 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1112);
  unsigned long t1115 = __size1111;
  unsigned long c1116 = 1;
  unsigned long b1117 = t1115 + c1116;
  std__allocator_traits_std__allocator_char_____deallocate(r1113, r1114, b1117);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1118) {
bb1119:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1120;
  this1120 = v1118;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1121 = this1120;
    _Bool r1122 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1121);
    _Bool u1123 = !r1122;
    if (u1123) {
      unsigned long t1124 = t1121->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1121, t1124);
    }
  return;
}

