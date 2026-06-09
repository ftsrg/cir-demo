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

char _str[20] = "I like to code in C";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[14] = "int(sz) == 19";
char _str_2[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_resize_2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[19] = "str.length() == 21";
char _str_4[50] = "basic_string: construction from null is not valid";
char _str_5[24] = "basic_string::_M_create";
char _str_6[29] = "basic_string::_M_replace_aux";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void __gnu_cxx__char_traits_char___assign_2(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___assign(char* p0, unsigned long p1, char p2);
extern void* memset(void* p0, int p1, unsigned long p2);
char* std__char_traits_char___assign(char* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* p0, unsigned long p1, char p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, unsigned long p3, char p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____resize(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
void std__char_traits_char___assign_2(char* p0, char* p1);
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
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
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
        char* cast20 = (char*)&(_str_4);
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v32) {
bb33:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this34;
  char* __retval35;
  this34 = v32;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t36 = this34;
  char* r37 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t36);
  __retval35 = r37;
  char* t38 = __retval35;
  return t38;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v39, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v40) {
bb41:
  struct std__basic_ostream_char__std__char_traits_char__* __os42;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str43;
  struct std__basic_ostream_char__std__char_traits_char__* __retval44;
  __os42 = v39;
  __str43 = v40;
  struct std__basic_ostream_char__std__char_traits_char__* t45 = __os42;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t46 = __str43;
  char* r47 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t46);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t48 = __str43;
  unsigned long r49 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t48);
  long cast50 = (long)r49;
  struct std__basic_ostream_char__std__char_traits_char__* r51 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t45, r47, cast50);
  __retval44 = r51;
  struct std__basic_ostream_char__std__char_traits_char__* t52 = __retval44;
  return t52;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v53, void* v54) {
bb55:
  struct std__basic_ostream_char__std__char_traits_char__* this56;
  void* __pf57;
  struct std__basic_ostream_char__std__char_traits_char__* __retval58;
  this56 = v53;
  __pf57 = v54;
  struct std__basic_ostream_char__std__char_traits_char__* t59 = this56;
  void* t60 = __pf57;
  struct std__basic_ostream_char__std__char_traits_char__* r61 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t60)(t59);
  __retval58 = r61;
  struct std__basic_ostream_char__std__char_traits_char__* t62 = __retval58;
  return t62;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v63) {
bb64:
  struct std__basic_ostream_char__std__char_traits_char__* __os65;
  struct std__basic_ostream_char__std__char_traits_char__* __retval66;
  __os65 = v63;
  struct std__basic_ostream_char__std__char_traits_char__* t67 = __os65;
  struct std__basic_ostream_char__std__char_traits_char__* r68 = std__ostream__flush(t67);
  __retval66 = r68;
  struct std__basic_ostream_char__std__char_traits_char__* t69 = __retval66;
  return t69;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v70) {
bb71:
  struct std__ctype_char_* __f72;
  struct std__ctype_char_* __retval73;
  __f72 = v70;
    struct std__ctype_char_* t74 = __f72;
    _Bool cast75 = (_Bool)t74;
    _Bool u76 = !cast75;
    if (u76) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t77 = __f72;
  __retval73 = t77;
  struct std__ctype_char_* t78 = __retval73;
  return t78;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v79, char v80) {
bb81:
  struct std__ctype_char_* this82;
  char __c83;
  char __retval84;
  this82 = v79;
  __c83 = v80;
  struct std__ctype_char_* t85 = this82;
    char t86 = t85->_M_widen_ok;
    _Bool cast87 = (_Bool)t86;
    if (cast87) {
      char t88 = __c83;
      unsigned char cast89 = (unsigned char)t88;
      unsigned long cast90 = (unsigned long)cast89;
      char t91 = t85->_M_widen[cast90];
      __retval84 = t91;
      char t92 = __retval84;
      return t92;
    }
  std__ctype_char____M_widen_init___const(t85);
  char t93 = __c83;
  void** v94 = (void**)t85;
  void* v95 = *((void**)v94);
  char vcall98 = (char)__VERIFIER_virtual_call_char_char(t85, 6, t93);
  __retval84 = vcall98;
  char t99 = __retval84;
  return t99;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v100, char v101) {
bb102:
  struct std__basic_ios_char__std__char_traits_char__* this103;
  char __c104;
  char __retval105;
  this103 = v100;
  __c104 = v101;
  struct std__basic_ios_char__std__char_traits_char__* t106 = this103;
  struct std__ctype_char_* t107 = t106->_M_ctype;
  struct std__ctype_char_* r108 = std__ctype_char__const__std____check_facet_std__ctype_char___(t107);
  char t109 = __c104;
  char r110 = std__ctype_char___widen_char__const(r108, t109);
  __retval105 = r110;
  char t111 = __retval105;
  return t111;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v112) {
bb113:
  struct std__basic_ostream_char__std__char_traits_char__* __os114;
  struct std__basic_ostream_char__std__char_traits_char__* __retval115;
  __os114 = v112;
  struct std__basic_ostream_char__std__char_traits_char__* t116 = __os114;
  struct std__basic_ostream_char__std__char_traits_char__* t117 = __os114;
  void** v118 = (void**)t117;
  void* v119 = *((void**)v118);
  unsigned char* cast120 = (unsigned char*)v119;
  long c121 = -24;
  unsigned char* ptr122 = &(cast120)[c121];
  long* cast123 = (long*)ptr122;
  long t124 = *cast123;
  unsigned char* cast125 = (unsigned char*)t117;
  unsigned char* ptr126 = &(cast125)[t124];
  struct std__basic_ostream_char__std__char_traits_char__* cast127 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr126;
  struct std__basic_ios_char__std__char_traits_char__* cast128 = (struct std__basic_ios_char__std__char_traits_char__*)cast127;
  char c129 = 10;
  char r130 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast128, c129);
  struct std__basic_ostream_char__std__char_traits_char__* r131 = std__ostream__put(t116, r130);
  struct std__basic_ostream_char__std__char_traits_char__* r132 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r131);
  __retval115 = r132;
  struct std__basic_ostream_char__std__char_traits_char__* t133 = __retval115;
  return t133;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v134) {
bb135:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this136;
  unsigned long __retval137;
  unsigned long __sz138;
  this136 = v134;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t139 = this136;
  unsigned long t140 = t139->_M_string_length;
  __sz138 = t140;
    unsigned long t141 = __sz138;
    unsigned long r142 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t139);
    _Bool c143 = ((t141 > r142)) ? 1 : 0;
    if (c143) {
      __builtin_unreachable();
    }
  unsigned long t144 = __sz138;
  __retval137 = t144;
  unsigned long t145 = __retval137;
  return t145;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v146, unsigned long v147, unsigned long v148, char* v149) {
bb150:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this151;
  unsigned long __n1152;
  unsigned long __n2153;
  char* __s154;
  this151 = v146;
  __n1152 = v147;
  __n2153 = v148;
  __s154 = v149;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t155 = this151;
    unsigned long r156 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t155);
    unsigned long r157 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t155);
    unsigned long t158 = __n1152;
    unsigned long b159 = r157 - t158;
    unsigned long b160 = r156 - b159;
    unsigned long t161 = __n2153;
    _Bool c162 = ((b160 < t161)) ? 1 : 0;
    if (c162) {
      char* t163 = __s154;
      std____throw_length_error(t163);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v164) {
bb165:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this166;
  unsigned long __retval167;
  unsigned long __sz168;
  this166 = v164;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t169 = this166;
  _Bool r170 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t169);
  unsigned long ternary171;
  if (r170) {
    unsigned long c172 = 15;
    ternary171 = (unsigned long)c172;
  } else {
    unsigned long t173 = t169->field2._M_allocated_capacity;
    ternary171 = (unsigned long)t173;
  }
  __sz168 = ternary171;
    unsigned long t174 = __sz168;
    unsigned long c175 = 15;
    _Bool c176 = ((t174 < c175)) ? 1 : 0;
    _Bool ternary177;
    if (c176) {
      _Bool c178 = 1;
      ternary177 = (_Bool)c178;
    } else {
      unsigned long t179 = __sz168;
      unsigned long r180 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t169);
      _Bool c181 = ((t179 > r180)) ? 1 : 0;
      ternary177 = (_Bool)c181;
    }
    if (ternary177) {
      __builtin_unreachable();
    }
  unsigned long t182 = __sz168;
  __retval167 = t182;
  unsigned long t183 = __retval167;
  return t183;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign_2(char* v184, char* v185) {
bb186:
  char* __c1187;
  char* __c2188;
  __c1187 = v184;
  __c2188 = v185;
    _Bool r189 = std____is_constant_evaluated();
    if (r189) {
      char* t190 = __c1187;
      char* t191 = __c2188;
      char* r192 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t190, t191);
    } else {
      char* t193 = __c2188;
      char t194 = *t193;
      char* t195 = __c1187;
      *t195 = t194;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v196, char* v197, unsigned long v198) {
bb199:
  char* __s1200;
  char* __s2201;
  unsigned long __n202;
  char* __retval203;
  __s1200 = v196;
  __s2201 = v197;
  __n202 = v198;
    unsigned long t204 = __n202;
    unsigned long c205 = 0;
    _Bool c206 = ((t204 == c205)) ? 1 : 0;
    if (c206) {
      char* t207 = __s1200;
      __retval203 = t207;
      char* t208 = __retval203;
      return t208;
    }
    _Bool r209 = std____is_constant_evaluated();
    if (r209) {
        char* t210 = __s2201;
        char* t211 = __s1200;
        _Bool c212 = ((t210 < t211)) ? 1 : 0;
        _Bool isconst213 = 0;
        _Bool ternary214;
        if (isconst213) {
          char* t215 = __s1200;
          char* t216 = __s2201;
          _Bool c217 = ((t215 > t216)) ? 1 : 0;
          ternary214 = (_Bool)c217;
        } else {
          _Bool c218 = 0;
          ternary214 = (_Bool)c218;
        }
        _Bool ternary219;
        if (ternary214) {
          char* t220 = __s1200;
          char* t221 = __s2201;
          unsigned long t222 = __n202;
          char* ptr223 = &(t221)[t222];
          _Bool c224 = ((t220 < ptr223)) ? 1 : 0;
          ternary219 = (_Bool)c224;
        } else {
          _Bool c225 = 0;
          ternary219 = (_Bool)c225;
        }
        if (ternary219) {
            do {
                unsigned long t226 = __n202;
                unsigned long u227 = t226 - 1;
                __n202 = u227;
                unsigned long t228 = __n202;
                char* t229 = __s1200;
                char* ptr230 = &(t229)[t228];
                unsigned long t231 = __n202;
                char* t232 = __s2201;
                char* ptr233 = &(t232)[t231];
                __gnu_cxx__char_traits_char___assign_2(ptr230, ptr233);
              unsigned long t234 = __n202;
              unsigned long c235 = 0;
              _Bool c236 = ((t234 > c235)) ? 1 : 0;
              if (!c236) break;
            } while (1);
        } else {
          char* t237 = __s1200;
          char* t238 = __s2201;
          unsigned long t239 = __n202;
          char* r240 = __gnu_cxx__char_traits_char___copy(t237, t238, t239);
        }
      char* t241 = __s1200;
      __retval203 = t241;
      char* t242 = __retval203;
      return t242;
    }
  char* t243 = __s1200;
  void* cast244 = (void*)t243;
  char* t245 = __s2201;
  void* cast246 = (void*)t245;
  unsigned long t247 = __n202;
  unsigned long c248 = 1;
  unsigned long b249 = t247 * c248;
  void* r250 = memmove(cast244, cast246, b249);
  char* t251 = __s1200;
  __retval203 = t251;
  char* t252 = __retval203;
  return t252;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v253, char* v254, unsigned long v255) {
bb256:
  char* __s1257;
  char* __s2258;
  unsigned long __n259;
  char* __retval260;
  __s1257 = v253;
  __s2258 = v254;
  __n259 = v255;
    unsigned long t261 = __n259;
    unsigned long c262 = 0;
    _Bool c263 = ((t261 == c262)) ? 1 : 0;
    if (c263) {
      char* t264 = __s1257;
      __retval260 = t264;
      char* t265 = __retval260;
      return t265;
    }
    _Bool r266 = std____is_constant_evaluated();
    if (r266) {
      char* t267 = __s1257;
      char* t268 = __s2258;
      unsigned long t269 = __n259;
      char* r270 = __gnu_cxx__char_traits_char___move(t267, t268, t269);
      __retval260 = r270;
      char* t271 = __retval260;
      return t271;
    }
  char* t272 = __s1257;
  void* cast273 = (void*)t272;
  char* t274 = __s2258;
  void* cast275 = (void*)t274;
  unsigned long t276 = __n259;
  void* r277 = memmove(cast273, cast275, t276);
  char* cast278 = (char*)r277;
  __retval260 = cast278;
  char* t279 = __retval260;
  return t279;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v280, char* v281, unsigned long v282) {
bb283:
  char* __d284;
  char* __s285;
  unsigned long __n286;
  __d284 = v280;
  __s285 = v281;
  __n286 = v282;
    unsigned long t287 = __n286;
    unsigned long c288 = 1;
    _Bool c289 = ((t287 == c288)) ? 1 : 0;
    if (c289) {
      char* t290 = __d284;
      char* t291 = __s285;
      std__char_traits_char___assign_2(t290, t291);
    } else {
      char* t292 = __d284;
      char* t293 = __s285;
      unsigned long t294 = __n286;
      char* r295 = std__char_traits_char___move(t292, t293, t294);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v296, unsigned long v297, unsigned long v298, char* v299, unsigned long v300) {
bb301:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this302;
  unsigned long __pos303;
  unsigned long __len1304;
  char* __s305;
  unsigned long __len2306;
  unsigned long __how_much307;
  unsigned long __new_capacity308;
  char* __r309;
  this302 = v296;
  __pos303 = v297;
  __len1304 = v298;
  __s305 = v299;
  __len2306 = v300;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t310 = this302;
  unsigned long r311 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t310);
  unsigned long t312 = __pos303;
  unsigned long b313 = r311 - t312;
  unsigned long t314 = __len1304;
  unsigned long b315 = b313 - t314;
  __how_much307 = b315;
  unsigned long r316 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t310);
  unsigned long t317 = __len2306;
  unsigned long b318 = r316 + t317;
  unsigned long t319 = __len1304;
  unsigned long b320 = b318 - t319;
  __new_capacity308 = b320;
  unsigned long r321 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t310);
  char* r322 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t310, &__new_capacity308, r321);
  __r309 = r322;
    unsigned long t323 = __pos303;
    _Bool cast324 = (_Bool)t323;
    if (cast324) {
      char* t325 = __r309;
      char* r326 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t310);
      unsigned long t327 = __pos303;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t325, r326, t327);
    }
    char* t328 = __s305;
    _Bool cast329 = (_Bool)t328;
    _Bool ternary330;
    if (cast329) {
      unsigned long t331 = __len2306;
      _Bool cast332 = (_Bool)t331;
      ternary330 = (_Bool)cast332;
    } else {
      _Bool c333 = 0;
      ternary330 = (_Bool)c333;
    }
    if (ternary330) {
      char* t334 = __r309;
      unsigned long t335 = __pos303;
      char* ptr336 = &(t334)[t335];
      char* t337 = __s305;
      unsigned long t338 = __len2306;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr336, t337, t338);
    }
    unsigned long t339 = __how_much307;
    _Bool cast340 = (_Bool)t339;
    if (cast340) {
      char* t341 = __r309;
      unsigned long t342 = __pos303;
      char* ptr343 = &(t341)[t342];
      unsigned long t344 = __len2306;
      char* ptr345 = &(ptr343)[t344];
      char* r346 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t310);
      unsigned long t347 = __pos303;
      char* ptr348 = &(r346)[t347];
      unsigned long t349 = __len1304;
      char* ptr350 = &(ptr348)[t349];
      unsigned long t351 = __how_much307;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr345, ptr350, t351);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t310);
  char* t352 = __r309;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t310, t352);
  unsigned long t353 = __new_capacity308;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t310, t353);
  return;
}

// function: _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* v354, char* v355) {
bb356:
  char* __location357;
  char* __args358;
  char* __retval359;
  void* __loc360;
  __location357 = v354;
  __args358 = v355;
  char* t361 = __location357;
  void* cast362 = (void*)t361;
  __loc360 = cast362;
    void* t363 = __loc360;
    char* cast364 = (char*)t363;
    char* t365 = __args358;
    char t366 = *t365;
    *cast364 = t366;
    __retval359 = cast364;
    char* t367 = __retval359;
    return t367;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignEPcmc
char* __gnu_cxx__char_traits_char___assign(char* v368, unsigned long v369, char v370) {
bb371:
  char* __s372;
  unsigned long __n373;
  char __a374;
  char* __retval375;
  __s372 = v368;
  __n373 = v369;
  __a374 = v370;
    _Bool r376 = std____is_constant_evaluated();
    if (r376) {
        unsigned long __i377;
        unsigned long c378 = 0;
        __i377 = c378;
        while (1) {
          unsigned long t380 = __i377;
          unsigned long t381 = __n373;
          _Bool c382 = ((t380 < t381)) ? 1 : 0;
          if (!c382) break;
          char* t383 = __s372;
          unsigned long t384 = __i377;
          char* ptr385 = &(t383)[t384];
          char* r386 = _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(ptr385, &__a374);
        for_step379: ;
          unsigned long t387 = __i377;
          unsigned long u388 = t387 + 1;
          __i377 = u388;
        }
      char* t389 = __s372;
      __retval375 = t389;
      char* t390 = __retval375;
      return t390;
    }
      unsigned long t391 = __n373;
      _Bool cast392 = (_Bool)t391;
      if (cast392) {
        unsigned char __c393;
        void* cast394 = (void*)&(__c393);
        void* cast395 = (void*)&(__a374);
        unsigned long c396 = 1;
        void* r397 = memcpy(cast394, cast395, c396);
        char* t398 = __s372;
        void* cast399 = (void*)t398;
        unsigned char t400 = __c393;
        int cast401 = (int)t400;
        unsigned long t402 = __n373;
        void* r403 = memset(cast399, cast401, t402);
      }
  char* t404 = __s372;
  __retval375 = t404;
  char* t405 = __retval375;
  return t405;
}

// function: _ZNSt11char_traitsIcE6assignEPcmc
char* std__char_traits_char___assign(char* v406, unsigned long v407, char v408) {
bb409:
  char* __s410;
  unsigned long __n411;
  char __a412;
  char* __retval413;
  __s410 = v406;
  __n411 = v407;
  __a412 = v408;
    unsigned long t414 = __n411;
    unsigned long c415 = 0;
    _Bool c416 = ((t414 == c415)) ? 1 : 0;
    if (c416) {
      char* t417 = __s410;
      __retval413 = t417;
      char* t418 = __retval413;
      return t418;
    }
    _Bool r419 = std____is_constant_evaluated();
    if (r419) {
      char* t420 = __s410;
      unsigned long t421 = __n411;
      char t422 = __a412;
      char* r423 = __gnu_cxx__char_traits_char___assign(t420, t421, t422);
      __retval413 = r423;
      char* t424 = __retval413;
      return t424;
    }
  char* t425 = __s410;
  void* cast426 = (void*)t425;
  char t427 = __a412;
  int cast428 = (int)t427;
  unsigned long t429 = __n411;
  void* r430 = memset(cast426, cast428, t429);
  char* cast431 = (char*)r430;
  __retval413 = cast431;
  char* t432 = __retval413;
  return t432;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_S_assignEPcmc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* v433, unsigned long v434, char v435) {
bb436:
  char* __d437;
  unsigned long __n438;
  char __c439;
  __d437 = v433;
  __n438 = v434;
  __c439 = v435;
    unsigned long t440 = __n438;
    unsigned long c441 = 1;
    _Bool c442 = ((t440 == c441)) ? 1 : 0;
    if (c442) {
      char* t443 = __d437;
      std__char_traits_char___assign_2(t443, &__c439);
    } else {
      char* t444 = __d437;
      unsigned long t445 = __n438;
      char t446 = __c439;
      char* r447 = std__char_traits_char___assign(t444, t445, t446);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE14_M_replace_auxEmmmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v448, unsigned long v449, unsigned long v450, unsigned long v451, char v452) {
bb453:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this454;
  unsigned long __pos1455;
  unsigned long __n1456;
  unsigned long __n2457;
  char __c458;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval459;
  unsigned long __old_size460;
  unsigned long __new_size461;
  this454 = v448;
  __pos1455 = v449;
  __n1456 = v450;
  __n2457 = v451;
  __c458 = v452;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t462 = this454;
  unsigned long t463 = __n1456;
  unsigned long t464 = __n2457;
  char* cast465 = (char*)&(_str_6);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t462, t463, t464, cast465);
  unsigned long r466 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t462);
  __old_size460 = r466;
  unsigned long t467 = __old_size460;
  unsigned long t468 = __n2457;
  unsigned long b469 = t467 + t468;
  unsigned long t470 = __n1456;
  unsigned long b471 = b469 - t470;
  __new_size461 = b471;
    unsigned long t472 = __new_size461;
    unsigned long r473 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t462);
    _Bool c474 = ((t472 <= r473)) ? 1 : 0;
    if (c474) {
      char* __p475;
      unsigned long __how_much476;
      char* r477 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t462);
      unsigned long t478 = __pos1455;
      char* ptr479 = &(r477)[t478];
      __p475 = ptr479;
      unsigned long t480 = __old_size460;
      unsigned long t481 = __pos1455;
      unsigned long b482 = t480 - t481;
      unsigned long t483 = __n1456;
      unsigned long b484 = b482 - t483;
      __how_much476 = b484;
        unsigned long t485 = __how_much476;
        _Bool cast486 = (_Bool)t485;
        _Bool ternary487;
        if (cast486) {
          unsigned long t488 = __n1456;
          unsigned long t489 = __n2457;
          _Bool c490 = ((t488 != t489)) ? 1 : 0;
          ternary487 = (_Bool)c490;
        } else {
          _Bool c491 = 0;
          ternary487 = (_Bool)c491;
        }
        if (ternary487) {
          char* t492 = __p475;
          unsigned long t493 = __n2457;
          char* ptr494 = &(t492)[t493];
          char* t495 = __p475;
          unsigned long t496 = __n1456;
          char* ptr497 = &(t495)[t496];
          unsigned long t498 = __how_much476;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr494, ptr497, t498);
        }
    } else {
      unsigned long t499 = __pos1455;
      unsigned long t500 = __n1456;
      char* c501 = ((void*)0);
      unsigned long t502 = __n2457;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t462, t499, t500, c501, t502);
    }
    unsigned long t503 = __n2457;
    _Bool cast504 = (_Bool)t503;
    if (cast504) {
      char* r505 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t462);
      unsigned long t506 = __pos1455;
      char* ptr507 = &(r505)[t506];
      unsigned long t508 = __n2457;
      char t509 = __c458;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(ptr507, t508, t509);
    }
  unsigned long t510 = __new_size461;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t462, t510);
  __retval459 = t462;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t511 = __retval459;
  return t511;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v512, unsigned long v513, char v514) {
bb515:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this516;
  unsigned long __n517;
  char __c518;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval519;
  this516 = v512;
  __n517 = v513;
  __c518 = v514;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t520 = this516;
  unsigned long r521 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t520);
  unsigned long c522 = 0;
  unsigned long t523 = __n517;
  char t524 = __c518;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r525 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(t520, r521, c522, t523, t524);
  __retval519 = r525;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t526 = __retval519;
  return t526;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6resizeEmc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____resize(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v527, unsigned long v528, char v529) {
bb530:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this531;
  unsigned long __n532;
  char __c533;
  unsigned long __size534;
  this531 = v527;
  __n532 = v528;
  __c533 = v529;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t535 = this531;
  unsigned long r536 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t535);
  __size534 = r536;
    unsigned long t537 = __size534;
    unsigned long t538 = __n532;
    _Bool c539 = ((t537 < t538)) ? 1 : 0;
    if (c539) {
      unsigned long t540 = __n532;
      unsigned long t541 = __size534;
      unsigned long b542 = t540 - t541;
      char t543 = __c533;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r544 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(t535, b542, t543);
    } else {
        unsigned long t545 = __n532;
        unsigned long t546 = __size534;
        _Bool c547 = ((t545 < t546)) ? 1 : 0;
        if (c547) {
          unsigned long t548 = __n532;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t535, t548);
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v549) {
bb550:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this551;
  unsigned long __retval552;
  this551 = v549;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t553 = this551;
  unsigned long r554 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t553);
  __retval552 = r554;
  unsigned long t555 = __retval552;
  return t555;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v556) {
bb557:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this558;
  this558 = v556;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t559 = this558;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t559);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t559->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb560:
  int __retval561;
  unsigned long sz562;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str563;
  struct std__allocator_char_ ref_tmp0564;
  int c565 = 0;
  __retval561 = c565;
  char* cast566 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0564);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str563, cast566, &ref_tmp0564);
  {
    std__allocator_char____allocator(&ref_tmp0564);
  }
    struct std__basic_ostream_char__std__char_traits_char__* r567 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str563);
    struct std__basic_ostream_char__std__char_traits_char__* r568 = std__ostream__operator___std__ostream_____(r567, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    unsigned long r569 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(&str563);
    sz562 = r569;
    unsigned long t570 = sz562;
    int cast571 = (int)t570;
    int c572 = 19;
    _Bool c573 = ((cast571 == c572)) ? 1 : 0;
    if (c573) {
    } else {
      char* cast574 = (char*)&(_str_1);
      char* c575 = _str_2;
      unsigned int c576 = 21;
      char* cast577 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast574, c575, c576, cast577);
    }
    unsigned long t578 = sz562;
    unsigned long c579 = 2;
    unsigned long b580 = t578 + c579;
    char c581 = 43;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____resize(&str563, b580, c581);
    unsigned long r582 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(&str563);
    unsigned long c583 = 21;
    _Bool c584 = ((r582 == c583)) ? 1 : 0;
    if (c584) {
    } else {
      char* cast585 = (char*)&(_str_3);
      char* c586 = _str_2;
      unsigned int c587 = 24;
      char* cast588 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast585, c586, c587, cast588);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r589 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str563);
    struct std__basic_ostream_char__std__char_traits_char__* r590 = std__ostream__operator___std__ostream_____(r589, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c591 = 0;
    __retval561 = c591;
    int t592 = __retval561;
    int ret_val593 = t592;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str563);
    }
    return ret_val593;
  int t594 = __retval561;
  return t594;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v595) {
bb596:
  struct std____new_allocator_char_* this597;
  this597 = v595;
  struct std____new_allocator_char_* t598 = this597;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v599) {
bb600:
  char* __r601;
  char* __retval602;
  __r601 = v599;
  char* t603 = __r601;
  __retval602 = t603;
  char* t604 = __retval602;
  return t604;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v605) {
bb606:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this607;
  char* __retval608;
  this607 = v605;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t609 = this607;
  char* cast610 = (char*)&(t609->field2._M_local_buf);
  char* r611 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast610);
  __retval608 = r611;
  char* t612 = __retval608;
  return t612;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v613, char* v614, struct std__allocator_char_* v615) {
bb616:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this617;
  char* __dat618;
  struct std__allocator_char_* __a619;
  this617 = v613;
  __dat618 = v614;
  __a619 = v615;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t620 = this617;
  struct std__allocator_char_* base621 = (struct std__allocator_char_*)((char *)t620 + 0);
  struct std__allocator_char_* t622 = __a619;
  std__allocator_char___allocator(base621, t622);
    char* t623 = __dat618;
    t620->_M_p = t623;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb624:
  _Bool __retval625;
    _Bool c626 = 0;
    __retval625 = c626;
    _Bool t627 = __retval625;
    return t627;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v628, char* v629) {
bb630:
  char* __c1631;
  char* __c2632;
  _Bool __retval633;
  __c1631 = v628;
  __c2632 = v629;
  char* t634 = __c1631;
  char t635 = *t634;
  int cast636 = (int)t635;
  char* t637 = __c2632;
  char t638 = *t637;
  int cast639 = (int)t638;
  _Bool c640 = ((cast636 == cast639)) ? 1 : 0;
  __retval633 = c640;
  _Bool t641 = __retval633;
  return t641;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v642) {
bb643:
  char* __p644;
  unsigned long __retval645;
  unsigned long __i646;
  __p644 = v642;
  unsigned long c647 = 0;
  __i646 = c647;
    char ref_tmp0648;
    while (1) {
      unsigned long t649 = __i646;
      char* t650 = __p644;
      char* ptr651 = &(t650)[t649];
      char c652 = 0;
      ref_tmp0648 = c652;
      _Bool r653 = __gnu_cxx__char_traits_char___eq(ptr651, &ref_tmp0648);
      _Bool u654 = !r653;
      if (!u654) break;
      unsigned long t655 = __i646;
      unsigned long u656 = t655 + 1;
      __i646 = u656;
    }
  unsigned long t657 = __i646;
  __retval645 = t657;
  unsigned long t658 = __retval645;
  return t658;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v659) {
bb660:
  char* __s661;
  unsigned long __retval662;
  __s661 = v659;
    _Bool r663 = std____is_constant_evaluated();
    if (r663) {
      char* t664 = __s661;
      unsigned long r665 = __gnu_cxx__char_traits_char___length(t664);
      __retval662 = r665;
      unsigned long t666 = __retval662;
      return t666;
    }
  char* t667 = __s661;
  unsigned long r668 = strlen(t667);
  __retval662 = r668;
  unsigned long t669 = __retval662;
  return t669;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v670, char* v671, struct std__random_access_iterator_tag v672) {
bb673:
  char* __first674;
  char* __last675;
  struct std__random_access_iterator_tag unnamed676;
  long __retval677;
  __first674 = v670;
  __last675 = v671;
  unnamed676 = v672;
  char* t678 = __last675;
  char* t679 = __first674;
  long diff680 = t678 - t679;
  __retval677 = diff680;
  long t681 = __retval677;
  return t681;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v682) {
bb683:
  char** unnamed684;
  struct std__random_access_iterator_tag __retval685;
  unnamed684 = v682;
  struct std__random_access_iterator_tag t686 = __retval685;
  return t686;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v687, char* v688) {
bb689:
  char* __first690;
  char* __last691;
  long __retval692;
  struct std__random_access_iterator_tag agg_tmp0693;
  __first690 = v687;
  __last691 = v688;
  char* t694 = __first690;
  char* t695 = __last691;
  struct std__random_access_iterator_tag r696 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first690);
  agg_tmp0693 = r696;
  struct std__random_access_iterator_tag t697 = agg_tmp0693;
  long r698 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t694, t695, t697);
  __retval692 = r698;
  long t699 = __retval692;
  return t699;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v700, char* v701) {
bb702:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this703;
  char* __p704;
  this703 = v700;
  __p704 = v701;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t705 = this703;
  char* t706 = __p704;
  t705->_M_dataplus._M_p = t706;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v707) {
bb708:
  struct std__allocator_char_* __a709;
  unsigned long __retval710;
  __a709 = v707;
  unsigned long c711 = -1;
  unsigned long c712 = 1;
  unsigned long b713 = c711 / c712;
  __retval710 = b713;
  unsigned long t714 = __retval710;
  return t714;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v715) {
bb716:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this717;
  struct std__allocator_char_* __retval718;
  this717 = v715;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t719 = this717;
  struct std__allocator_char_* base720 = (struct std__allocator_char_*)((char *)&(t719->_M_dataplus) + 0);
  __retval718 = base720;
  struct std__allocator_char_* t721 = __retval718;
  return t721;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v722, unsigned long* v723) {
bb724:
  unsigned long* __a725;
  unsigned long* __b726;
  unsigned long* __retval727;
  __a725 = v722;
  __b726 = v723;
    unsigned long* t728 = __b726;
    unsigned long t729 = *t728;
    unsigned long* t730 = __a725;
    unsigned long t731 = *t730;
    _Bool c732 = ((t729 < t731)) ? 1 : 0;
    if (c732) {
      unsigned long* t733 = __b726;
      __retval727 = t733;
      unsigned long* t734 = __retval727;
      return t734;
    }
  unsigned long* t735 = __a725;
  __retval727 = t735;
  unsigned long* t736 = __retval727;
  return t736;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v737) {
bb738:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this739;
  unsigned long __retval740;
  unsigned long __diffmax741;
  unsigned long __allocmax742;
  this739 = v737;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t743 = this739;
  unsigned long c744 = 9223372036854775807;
  __diffmax741 = c744;
  struct std__allocator_char_* r745 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t743);
  unsigned long r746 = std__allocator_traits_std__allocator_char_____max_size(r745);
  __allocmax742 = r746;
  unsigned long* r747 = unsigned_long_const__std__min_unsigned_long_(&__diffmax741, &__allocmax742);
  unsigned long t748 = *r747;
  unsigned long c749 = 1;
  unsigned long b750 = t748 - c749;
  __retval740 = b750;
  unsigned long t751 = __retval740;
  return t751;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v752) {
bb753:
  struct std____new_allocator_char_* this754;
  unsigned long __retval755;
  this754 = v752;
  struct std____new_allocator_char_* t756 = this754;
  unsigned long c757 = 9223372036854775807;
  unsigned long c758 = 1;
  unsigned long b759 = c757 / c758;
  __retval755 = b759;
  unsigned long t760 = __retval755;
  return t760;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v761, unsigned long v762, void* v763) {
bb764:
  struct std____new_allocator_char_* this765;
  unsigned long __n766;
  void* unnamed767;
  char* __retval768;
  this765 = v761;
  __n766 = v762;
  unnamed767 = v763;
  struct std____new_allocator_char_* t769 = this765;
    unsigned long t770 = __n766;
    unsigned long r771 = std____new_allocator_char____M_max_size___const(t769);
    _Bool c772 = ((t770 > r771)) ? 1 : 0;
    if (c772) {
        unsigned long t773 = __n766;
        unsigned long c774 = -1;
        unsigned long c775 = 1;
        unsigned long b776 = c774 / c775;
        _Bool c777 = ((t773 > b776)) ? 1 : 0;
        if (c777) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c778 = 1;
    unsigned long c779 = 16;
    _Bool c780 = ((c778 > c779)) ? 1 : 0;
    if (c780) {
      unsigned long __al781;
      unsigned long c782 = 1;
      __al781 = c782;
      unsigned long t783 = __n766;
      unsigned long c784 = 1;
      unsigned long b785 = t783 * c784;
      unsigned long t786 = __al781;
      void* r787 = operator_new_2(b785, t786);
      char* cast788 = (char*)r787;
      __retval768 = cast788;
      char* t789 = __retval768;
      return t789;
    }
  unsigned long t790 = __n766;
  unsigned long c791 = 1;
  unsigned long b792 = t790 * c791;
  void* r793 = operator_new(b792);
  char* cast794 = (char*)r793;
  __retval768 = cast794;
  char* t795 = __retval768;
  return t795;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v796, unsigned long v797) {
bb798:
  struct std__allocator_char_* this799;
  unsigned long __n800;
  char* __retval801;
  this799 = v796;
  __n800 = v797;
  struct std__allocator_char_* t802 = this799;
    _Bool r803 = std____is_constant_evaluated();
    if (r803) {
        unsigned long t804 = __n800;
        unsigned long c805 = 1;
        unsigned long ovr806;
        _Bool ovf807 = __builtin_mul_overflow(t804, c805, &ovr806);
        __n800 = ovr806;
        if (ovf807) {
          std____throw_bad_array_new_length();
        }
      unsigned long t808 = __n800;
      void* r809 = operator_new(t808);
      char* cast810 = (char*)r809;
      __retval801 = cast810;
      char* t811 = __retval801;
      return t811;
    }
  struct std____new_allocator_char_* base812 = (struct std____new_allocator_char_*)((char *)t802 + 0);
  unsigned long t813 = __n800;
  void* c814 = ((void*)0);
  char* r815 = std____new_allocator_char___allocate(base812, t813, c814);
  __retval801 = r815;
  char* t816 = __retval801;
  return t816;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v817, unsigned long v818) {
bb819:
  struct std__allocator_char_* __a820;
  unsigned long __n821;
  char* __retval822;
  __a820 = v817;
  __n821 = v818;
  struct std__allocator_char_* t823 = __a820;
  unsigned long t824 = __n821;
  char* r825 = std__allocator_char___allocate(t823, t824);
  __retval822 = r825;
  char* t826 = __retval822;
  return t826;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v827, unsigned long v828) {
bb829:
  struct std__allocator_char_* __a830;
  unsigned long __n831;
  char* __retval832;
  char* __p833;
  __a830 = v827;
  __n831 = v828;
  struct std__allocator_char_* t834 = __a830;
  unsigned long t835 = __n831;
  char* r836 = std__allocator_traits_std__allocator_char_____allocate(t834, t835);
  __p833 = r836;
  char* t837 = __p833;
  __retval832 = t837;
  char* t838 = __retval832;
  return t838;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v839) {
bb840:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this841;
  struct std__allocator_char_* __retval842;
  this841 = v839;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t843 = this841;
  struct std__allocator_char_* base844 = (struct std__allocator_char_*)((char *)&(t843->_M_dataplus) + 0);
  __retval842 = base844;
  struct std__allocator_char_* t845 = __retval842;
  return t845;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v846, unsigned long* v847, unsigned long v848) {
bb849:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this850;
  unsigned long* __capacity851;
  unsigned long __old_capacity852;
  char* __retval853;
  this850 = v846;
  __capacity851 = v847;
  __old_capacity852 = v848;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t854 = this850;
    unsigned long* t855 = __capacity851;
    unsigned long t856 = *t855;
    unsigned long r857 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t854);
    _Bool c858 = ((t856 > r857)) ? 1 : 0;
    if (c858) {
      char* cast859 = (char*)&(_str_5);
      std____throw_length_error(cast859);
    }
    unsigned long* t860 = __capacity851;
    unsigned long t861 = *t860;
    unsigned long t862 = __old_capacity852;
    _Bool c863 = ((t861 > t862)) ? 1 : 0;
    _Bool ternary864;
    if (c863) {
      unsigned long* t865 = __capacity851;
      unsigned long t866 = *t865;
      unsigned long c867 = 2;
      unsigned long t868 = __old_capacity852;
      unsigned long b869 = c867 * t868;
      _Bool c870 = ((t866 < b869)) ? 1 : 0;
      ternary864 = (_Bool)c870;
    } else {
      _Bool c871 = 0;
      ternary864 = (_Bool)c871;
    }
    if (ternary864) {
      unsigned long c872 = 2;
      unsigned long t873 = __old_capacity852;
      unsigned long b874 = c872 * t873;
      unsigned long* t875 = __capacity851;
      *t875 = b874;
        unsigned long* t876 = __capacity851;
        unsigned long t877 = *t876;
        unsigned long r878 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t854);
        _Bool c879 = ((t877 > r878)) ? 1 : 0;
        if (c879) {
          unsigned long r880 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t854);
          unsigned long* t881 = __capacity851;
          *t881 = r880;
        }
    }
  struct std__allocator_char_* r882 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t854);
  unsigned long* t883 = __capacity851;
  unsigned long t884 = *t883;
  unsigned long c885 = 1;
  unsigned long b886 = t884 + c885;
  char* r887 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r882, b886);
  __retval853 = r887;
  char* t888 = __retval853;
  return t888;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v889, unsigned long v890) {
bb891:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this892;
  unsigned long __capacity893;
  this892 = v889;
  __capacity893 = v890;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t894 = this892;
  unsigned long t895 = __capacity893;
  t894->field2._M_allocated_capacity = t895;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb896:
  _Bool __retval897;
    _Bool c898 = 0;
    __retval897 = c898;
    _Bool t899 = __retval897;
    return t899;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v900) {
bb901:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this902;
  this902 = v900;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t903 = this902;
    _Bool r904 = std__is_constant_evaluated();
    if (r904) {
        unsigned long __i905;
        unsigned long c906 = 0;
        __i905 = c906;
        while (1) {
          unsigned long t908 = __i905;
          unsigned long c909 = 15;
          _Bool c910 = ((t908 <= c909)) ? 1 : 0;
          if (!c910) break;
          char c911 = 0;
          unsigned long t912 = __i905;
          t903->field2._M_local_buf[t912] = c911;
        for_step907: ;
          unsigned long t913 = __i905;
          unsigned long u914 = t913 + 1;
          __i905 = u914;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v915, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v916) {
bb917:
  struct _Guard* this918;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s919;
  this918 = v915;
  __s919 = v916;
  struct _Guard* t920 = this918;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t921 = __s919;
  t920->_M_guarded = t921;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v922, char* v923) {
bb924:
  char* __location925;
  char* __args926;
  char* __retval927;
  void* __loc928;
  __location925 = v922;
  __args926 = v923;
  char* t929 = __location925;
  void* cast930 = (void*)t929;
  __loc928 = cast930;
    void* t931 = __loc928;
    char* cast932 = (char*)t931;
    char* t933 = __args926;
    char t934 = *t933;
    *cast932 = t934;
    __retval927 = cast932;
    char* t935 = __retval927;
    return t935;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign_2(char* v936, char* v937) {
bb938:
  char* __c1939;
  char* __c2940;
  __c1939 = v936;
  __c2940 = v937;
    _Bool r941 = std____is_constant_evaluated();
    if (r941) {
      char* t942 = __c1939;
      char* t943 = __c2940;
      char* r944 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t942, t943);
    } else {
      char* t945 = __c2940;
      char t946 = *t945;
      char* t947 = __c1939;
      *t947 = t946;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v948, char* v949, unsigned long v950) {
bb951:
  char* __s1952;
  char* __s2953;
  unsigned long __n954;
  char* __retval955;
  __s1952 = v948;
  __s2953 = v949;
  __n954 = v950;
    unsigned long t956 = __n954;
    unsigned long c957 = 0;
    _Bool c958 = ((t956 == c957)) ? 1 : 0;
    if (c958) {
      char* t959 = __s1952;
      __retval955 = t959;
      char* t960 = __retval955;
      return t960;
    }
    _Bool r961 = std____is_constant_evaluated();
    if (r961) {
        unsigned long __i962;
        unsigned long c963 = 0;
        __i962 = c963;
        while (1) {
          unsigned long t965 = __i962;
          unsigned long t966 = __n954;
          _Bool c967 = ((t965 < t966)) ? 1 : 0;
          if (!c967) break;
          char* t968 = __s1952;
          unsigned long t969 = __i962;
          char* ptr970 = &(t968)[t969];
          unsigned long t971 = __i962;
          char* t972 = __s2953;
          char* ptr973 = &(t972)[t971];
          char* r974 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr970, ptr973);
        for_step964: ;
          unsigned long t975 = __i962;
          unsigned long u976 = t975 + 1;
          __i962 = u976;
        }
      char* t977 = __s1952;
      __retval955 = t977;
      char* t978 = __retval955;
      return t978;
    }
  char* t979 = __s1952;
  void* cast980 = (void*)t979;
  char* t981 = __s2953;
  void* cast982 = (void*)t981;
  unsigned long t983 = __n954;
  unsigned long c984 = 1;
  unsigned long b985 = t983 * c984;
  void* r986 = memcpy(cast980, cast982, b985);
  char* t987 = __s1952;
  __retval955 = t987;
  char* t988 = __retval955;
  return t988;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v989, char* v990, unsigned long v991) {
bb992:
  char* __s1993;
  char* __s2994;
  unsigned long __n995;
  char* __retval996;
  __s1993 = v989;
  __s2994 = v990;
  __n995 = v991;
    unsigned long t997 = __n995;
    unsigned long c998 = 0;
    _Bool c999 = ((t997 == c998)) ? 1 : 0;
    if (c999) {
      char* t1000 = __s1993;
      __retval996 = t1000;
      char* t1001 = __retval996;
      return t1001;
    }
    _Bool r1002 = std____is_constant_evaluated();
    if (r1002) {
      char* t1003 = __s1993;
      char* t1004 = __s2994;
      unsigned long t1005 = __n995;
      char* r1006 = __gnu_cxx__char_traits_char___copy(t1003, t1004, t1005);
      __retval996 = r1006;
      char* t1007 = __retval996;
      return t1007;
    }
  char* t1008 = __s1993;
  void* cast1009 = (void*)t1008;
  char* t1010 = __s2994;
  void* cast1011 = (void*)t1010;
  unsigned long t1012 = __n995;
  void* r1013 = memcpy(cast1009, cast1011, t1012);
  char* cast1014 = (char*)r1013;
  __retval996 = cast1014;
  char* t1015 = __retval996;
  return t1015;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1016, char* v1017, unsigned long v1018) {
bb1019:
  char* __d1020;
  char* __s1021;
  unsigned long __n1022;
  __d1020 = v1016;
  __s1021 = v1017;
  __n1022 = v1018;
    unsigned long t1023 = __n1022;
    unsigned long c1024 = 1;
    _Bool c1025 = ((t1023 == c1024)) ? 1 : 0;
    if (c1025) {
      char* t1026 = __d1020;
      char* t1027 = __s1021;
      std__char_traits_char___assign_2(t1026, t1027);
    } else {
      char* t1028 = __d1020;
      char* t1029 = __s1021;
      unsigned long t1030 = __n1022;
      char* r1031 = std__char_traits_char___copy(t1028, t1029, t1030);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1032) {
bb1033:
  char* __it1034;
  char* __retval1035;
  __it1034 = v1032;
  char* t1036 = __it1034;
  __retval1035 = t1036;
  char* t1037 = __retval1035;
  return t1037;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1038, char* v1039, char* v1040) {
bb1041:
  char* __p1042;
  char* __k11043;
  char* __k21044;
  __p1042 = v1038;
  __k11043 = v1039;
  __k21044 = v1040;
    char* t1045 = __p1042;
    char* t1046 = __k11043;
    char* r1047 = char_const__std____niter_base_char_const__(t1046);
    char* t1048 = __k21044;
    char* t1049 = __k11043;
    long diff1050 = t1048 - t1049;
    unsigned long cast1051 = (unsigned long)diff1050;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1045, r1047, cast1051);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1052) {
bb1053:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1054;
  char* __retval1055;
  this1054 = v1052;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1056 = this1054;
  char* t1057 = t1056->_M_dataplus._M_p;
  __retval1055 = t1057;
  char* t1058 = __retval1055;
  return t1058;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1059, unsigned long v1060) {
bb1061:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1062;
  unsigned long __length1063;
  this1062 = v1059;
  __length1063 = v1060;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1064 = this1062;
  unsigned long t1065 = __length1063;
  t1064->_M_string_length = t1065;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1066, unsigned long v1067) {
bb1068:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1069;
  unsigned long __n1070;
  char ref_tmp01071;
  this1069 = v1066;
  __n1070 = v1067;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1072 = this1069;
  unsigned long t1073 = __n1070;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1072, t1073);
  unsigned long t1074 = __n1070;
  char* r1075 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1072);
  char* ptr1076 = &(r1075)[t1074];
  char c1077 = 0;
  ref_tmp01071 = c1077;
  std__char_traits_char___assign_2(ptr1076, &ref_tmp01071);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1078) {
bb1079:
  struct _Guard* this1080;
  this1080 = v1078;
  struct _Guard* t1081 = this1080;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1082 = t1081->_M_guarded;
    _Bool cast1083 = (_Bool)t1082;
    if (cast1083) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1084 = t1081->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1084);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1085, char* v1086, char* v1087, struct std__forward_iterator_tag v1088) {
bb1089:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1090;
  char* __beg1091;
  char* __end1092;
  struct std__forward_iterator_tag unnamed1093;
  unsigned long __dnew1094;
  struct _Guard __guard1095;
  this1090 = v1085;
  __beg1091 = v1086;
  __end1092 = v1087;
  unnamed1093 = v1088;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1096 = this1090;
  char* t1097 = __beg1091;
  char* t1098 = __end1092;
  long r1099 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1097, t1098);
  unsigned long cast1100 = (unsigned long)r1099;
  __dnew1094 = cast1100;
    unsigned long t1101 = __dnew1094;
    unsigned long c1102 = 15;
    _Bool c1103 = ((t1101 > c1102)) ? 1 : 0;
    if (c1103) {
      unsigned long c1104 = 0;
      char* r1105 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1096, &__dnew1094, c1104);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1096, r1105);
      unsigned long t1106 = __dnew1094;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1096, t1106);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1096);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1095, t1096);
    char* r1107 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1096);
    char* t1108 = __beg1091;
    char* t1109 = __end1092;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1107, t1108, t1109);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1110 = ((void*)0);
    __guard1095._M_guarded = c1110;
    unsigned long t1111 = __dnew1094;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1096, t1111);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1095);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1112) {
bb1113:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1114;
  this1114 = v1112;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1115 = this1114;
  {
    struct std__allocator_char_* base1116 = (struct std__allocator_char_*)((char *)t1115 + 0);
    std__allocator_char____allocator(base1116);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1117, struct std____new_allocator_char_* v1118) {
bb1119:
  struct std____new_allocator_char_* this1120;
  struct std____new_allocator_char_* unnamed1121;
  this1120 = v1117;
  unnamed1121 = v1118;
  struct std____new_allocator_char_* t1122 = this1120;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1123, struct std__allocator_char_* v1124) {
bb1125:
  struct std__allocator_char_* this1126;
  struct std__allocator_char_* __a1127;
  this1126 = v1123;
  __a1127 = v1124;
  struct std__allocator_char_* t1128 = this1126;
  struct std____new_allocator_char_* base1129 = (struct std____new_allocator_char_*)((char *)t1128 + 0);
  struct std__allocator_char_* t1130 = __a1127;
  struct std____new_allocator_char_* base1131 = (struct std____new_allocator_char_*)((char *)t1130 + 0);
  std____new_allocator_char_____new_allocator(base1129, base1131);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1132) {
bb1133:
  char* __r1134;
  char* __retval1135;
  __r1134 = v1132;
  char* t1136 = __r1134;
  __retval1135 = t1136;
  char* t1137 = __retval1135;
  return t1137;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1138) {
bb1139:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1140;
  char* __retval1141;
  this1140 = v1138;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1142 = this1140;
  char* cast1143 = (char*)&(t1142->field2._M_local_buf);
  char* r1144 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1143);
  __retval1141 = r1144;
  char* t1145 = __retval1141;
  return t1145;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1146) {
bb1147:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1148;
  _Bool __retval1149;
  this1148 = v1146;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1150 = this1148;
    char* r1151 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1150);
    char* r1152 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1150);
    _Bool c1153 = ((r1151 == r1152)) ? 1 : 0;
    if (c1153) {
        unsigned long t1154 = t1150->_M_string_length;
        unsigned long c1155 = 15;
        _Bool c1156 = ((t1154 > c1155)) ? 1 : 0;
        if (c1156) {
          __builtin_unreachable();
        }
      _Bool c1157 = 1;
      __retval1149 = c1157;
      _Bool t1158 = __retval1149;
      return t1158;
    }
  _Bool c1159 = 0;
  __retval1149 = c1159;
  _Bool t1160 = __retval1149;
  return t1160;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1161, char* v1162, unsigned long v1163) {
bb1164:
  struct std____new_allocator_char_* this1165;
  char* __p1166;
  unsigned long __n1167;
  this1165 = v1161;
  __p1166 = v1162;
  __n1167 = v1163;
  struct std____new_allocator_char_* t1168 = this1165;
    unsigned long c1169 = 1;
    unsigned long c1170 = 16;
    _Bool c1171 = ((c1169 > c1170)) ? 1 : 0;
    if (c1171) {
      char* t1172 = __p1166;
      void* cast1173 = (void*)t1172;
      unsigned long t1174 = __n1167;
      unsigned long c1175 = 1;
      unsigned long b1176 = t1174 * c1175;
      unsigned long c1177 = 1;
      operator_delete_3(cast1173, b1176, c1177);
      return;
    }
  char* t1178 = __p1166;
  void* cast1179 = (void*)t1178;
  unsigned long t1180 = __n1167;
  unsigned long c1181 = 1;
  unsigned long b1182 = t1180 * c1181;
  operator_delete_2(cast1179, b1182);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1183, char* v1184, unsigned long v1185) {
bb1186:
  struct std__allocator_char_* this1187;
  char* __p1188;
  unsigned long __n1189;
  this1187 = v1183;
  __p1188 = v1184;
  __n1189 = v1185;
  struct std__allocator_char_* t1190 = this1187;
    _Bool r1191 = std____is_constant_evaluated();
    if (r1191) {
      char* t1192 = __p1188;
      void* cast1193 = (void*)t1192;
      operator_delete(cast1193);
      return;
    }
  struct std____new_allocator_char_* base1194 = (struct std____new_allocator_char_*)((char *)t1190 + 0);
  char* t1195 = __p1188;
  unsigned long t1196 = __n1189;
  std____new_allocator_char___deallocate(base1194, t1195, t1196);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1197, char* v1198, unsigned long v1199) {
bb1200:
  struct std__allocator_char_* __a1201;
  char* __p1202;
  unsigned long __n1203;
  __a1201 = v1197;
  __p1202 = v1198;
  __n1203 = v1199;
  struct std__allocator_char_* t1204 = __a1201;
  char* t1205 = __p1202;
  unsigned long t1206 = __n1203;
  std__allocator_char___deallocate(t1204, t1205, t1206);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1207, unsigned long v1208) {
bb1209:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1210;
  unsigned long __size1211;
  this1210 = v1207;
  __size1211 = v1208;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1212 = this1210;
  struct std__allocator_char_* r1213 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1212);
  char* r1214 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1212);
  unsigned long t1215 = __size1211;
  unsigned long c1216 = 1;
  unsigned long b1217 = t1215 + c1216;
  std__allocator_traits_std__allocator_char_____deallocate(r1213, r1214, b1217);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1218) {
bb1219:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1220;
  this1220 = v1218;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1221 = this1220;
    _Bool r1222 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1221);
    _Bool u1223 = !r1222;
    if (u1223) {
      unsigned long t1224 = t1221->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1221, t1224);
    }
  return;
}

