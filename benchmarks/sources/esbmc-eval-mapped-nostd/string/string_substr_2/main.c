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
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

char _str[50] = "We think in generalities, but we live in details.";
char _str_1[5] = "live";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[50] = "basic_string: construction from null is not valid";
char _str_3[24] = "basic_string::_M_create";
char _str_4[21] = "basic_string::substr";
char _str_5[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_6[27] = "basic_string::basic_string";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, unsigned long p2, unsigned long p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* __gnu_cxx__char_traits_char___find(char* p0, unsigned long p1, char* p2);
char* std__char_traits_char___find(char* p0, unsigned long p1, char* p2);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);

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
        char* cast20 = (char*)&(_str_2);
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

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v32) {
bb33:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this34;
  struct std__allocator_char_ ref_tmp035;
  this34 = v32;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t36 = this34;
  char* r37 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t36);
  std__allocator_char___allocator_2(&ref_tmp035);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t36->_M_dataplus, r37, &ref_tmp035);
  {
    std__allocator_char____allocator(&ref_tmp035);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t36);
    unsigned long c38 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t36, c38);
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v51, unsigned long v52, char* v53) {
bb54:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this55;
  unsigned long __pos56;
  char* __s57;
  unsigned long __retval58;
  this55 = v51;
  __pos56 = v52;
  __s57 = v53;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t59 = this55;
    unsigned long t60 = __pos56;
    unsigned long r61 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t59);
    _Bool c62 = ((t60 > r61)) ? 1 : 0;
    if (c62) {
      char* cast63 = (char*)&(_str_5);
      char* t64 = __s57;
      unsigned long t65 = __pos56;
      unsigned long r66 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t59);
      std____throw_out_of_range_fmt(cast63, t64, t65, r66);
    }
  unsigned long t67 = __pos56;
  __retval58 = t67;
  unsigned long t68 = __retval58;
  return t68;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_mm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v69, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v70, unsigned long v71, unsigned long v72) {
bb73:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this74;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str75;
  unsigned long __pos76;
  unsigned long __n77;
  struct std__allocator_char_ ref_tmp078;
  char* __start79;
  struct std__forward_iterator_tag agg_tmp080;
  this74 = v69;
  __str75 = v70;
  __pos76 = v71;
  __n77 = v72;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t81 = this74;
  char* r82 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t81);
  std__allocator_char___allocator_2(&ref_tmp078);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t81->_M_dataplus, r82, &ref_tmp078);
  {
    std__allocator_char____allocator(&ref_tmp078);
  }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t83 = __str75;
    char* r84 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t83);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t85 = __str75;
    unsigned long t86 = __pos76;
    char* cast87 = (char*)&(_str_6);
    unsigned long r88 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t85, t86, cast87);
    char* ptr89 = &(r84)[r88];
    __start79 = ptr89;
    char* t90 = __start79;
    char* t91 = __start79;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t92 = __str75;
    unsigned long t93 = __pos76;
    unsigned long t94 = __n77;
    unsigned long r95 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t92, t93, t94);
    char* ptr96 = &(t91)[r95];
    struct std__forward_iterator_tag t97 = agg_tmp080;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t81, t90, ptr96, t97);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6substrEmm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v98, unsigned long v99, unsigned long v100) {
bb101:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this102;
  unsigned long __pos103;
  unsigned long __n104;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval105;
  this102 = v98;
  __pos103 = v99;
  __n104 = v100;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t106 = this102;
  unsigned long t107 = __pos103;
  char* cast108 = (char*)&(_str_4);
  unsigned long r109 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t106, t107, cast108);
  unsigned long t110 = __n104;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval105, t106, r109, t110);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t111 = __retval105;
  return t111;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb112:
  _Bool __retval113;
  _Bool t114 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval113 = t114;
  _Bool t115 = __retval113;
  return t115;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v116, struct std____new_allocator_char_* v117) {
bb118:
  struct std____new_allocator_char_* this119;
  struct std____new_allocator_char_* unnamed120;
  struct std____new_allocator_char_* __retval121;
  this119 = v116;
  unnamed120 = v117;
  struct std____new_allocator_char_* t122 = this119;
  __retval121 = t122;
  struct std____new_allocator_char_* t123 = __retval121;
  return t123;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v124, struct std__allocator_char_* v125) {
bb126:
  struct std__allocator_char_* this127;
  struct std__allocator_char_* unnamed128;
  struct std__allocator_char_* __retval129;
  this127 = v124;
  unnamed128 = v125;
  struct std__allocator_char_* t130 = this127;
  struct std____new_allocator_char_* base131 = (struct std____new_allocator_char_*)((char *)t130 + 0);
  struct std__allocator_char_* t132 = unnamed128;
  struct std____new_allocator_char_* base133 = (struct std____new_allocator_char_*)((char *)t132 + 0);
  struct std____new_allocator_char_* r134 = std____new_allocator_char___operator_(base131, base133);
  __retval129 = t130;
  struct std__allocator_char_* t135 = __retval129;
  return t135;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v136, struct std__allocator_char_* v137) {
bb138:
  struct std__allocator_char_* __one139;
  struct std__allocator_char_* __two140;
  __one139 = v136;
  __two140 = v137;
    struct std__allocator_char_* t141 = __two140;
    struct std__allocator_char_* t142 = __one139;
    struct std__allocator_char_* r143 = std__allocator_char___operator_(t142, t141);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v144) {
bb145:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this146;
  unsigned long __retval147;
  this146 = v144;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t148 = this146;
  unsigned long r149 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t148);
  __retval147 = r149;
  unsigned long t150 = __retval147;
  return t150;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v151) {
bb152:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this153;
  char* __retval154;
  this153 = v151;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t155 = this153;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t155);
  char* r156 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t155);
  __retval154 = r156;
  char* t157 = __retval154;
  return t157;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v158) {
bb159:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this160;
  unsigned long __retval161;
  unsigned long __sz162;
  this160 = v158;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t163 = this160;
  _Bool r164 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t163);
  unsigned long ternary165;
  if (r164) {
    unsigned long c166 = 15;
    ternary165 = (unsigned long)c166;
  } else {
    unsigned long t167 = t163->field2._M_allocated_capacity;
    ternary165 = (unsigned long)t167;
  }
  __sz162 = ternary165;
    unsigned long t168 = __sz162;
    unsigned long c169 = 15;
    _Bool c170 = ((t168 < c169)) ? 1 : 0;
    _Bool ternary171;
    if (c170) {
      _Bool c172 = 1;
      ternary171 = (_Bool)c172;
    } else {
      unsigned long t173 = __sz162;
      unsigned long r174 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t163);
      _Bool c175 = ((t173 > r174)) ? 1 : 0;
      ternary171 = (_Bool)c175;
    }
    if (ternary171) {
      __builtin_unreachable();
    }
  unsigned long t176 = __sz162;
  __retval161 = t176;
  unsigned long t177 = __retval161;
  return t177;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v178, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v179) {
bb180:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this181;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str182;
  this181 = v178;
  __str182 = v179;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t183 = this181;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t184 = __str182;
    _Bool c185 = ((t183 != t184)) ? 1 : 0;
    if (c185) {
      unsigned long __rsize186;
      unsigned long __capacity187;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t188 = __str182;
      unsigned long r189 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t188);
      __rsize186 = r189;
      unsigned long r190 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t183);
      __capacity187 = r190;
        unsigned long t191 = __rsize186;
        unsigned long t192 = __capacity187;
        _Bool c193 = ((t191 > t192)) ? 1 : 0;
        if (c193) {
          unsigned long __new_capacity194;
          char* __tmp195;
          unsigned long t196 = __rsize186;
          __new_capacity194 = t196;
          unsigned long t197 = __capacity187;
          char* r198 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t183, &__new_capacity194, t197);
          __tmp195 = r198;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t183);
          char* t199 = __tmp195;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t183, t199);
          unsigned long t200 = __new_capacity194;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t183, t200);
        }
        unsigned long t201 = __rsize186;
        _Bool cast202 = (_Bool)t201;
        if (cast202) {
          char* r203 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t183);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t204 = __str182;
          char* r205 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t204);
          unsigned long t206 = __rsize186;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r203, r205, t206);
        }
      unsigned long t207 = __rsize186;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t183, t207);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v208) {
bb209:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this210;
  this210 = v208;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t211 = this210;
  unsigned long c212 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t211, c212);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v213, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v214) {
bb215:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this216;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str217;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval218;
  _Bool __equal_allocs219;
  this216 = v213;
  __str217 = v214;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t220 = this216;
  _Bool c221 = 1;
  __equal_allocs219 = c221;
    _Bool r222 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t220);
    _Bool u223 = !r222;
    _Bool ternary224;
    if (u223) {
      _Bool r225 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      ternary224 = (_Bool)r225;
    } else {
      _Bool c226 = 0;
      ternary224 = (_Bool)c226;
    }
    _Bool ternary227;
    if (ternary224) {
      _Bool t228 = __equal_allocs219;
      _Bool u229 = !t228;
      ternary227 = (_Bool)u229;
    } else {
      _Bool c230 = 0;
      ternary227 = (_Bool)c230;
    }
    if (ternary227) {
      unsigned long t231 = t220->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t220, t231);
      char* r232 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t220);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t220, r232);
      unsigned long c233 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t220, c233);
    }
  struct std__allocator_char_* r234 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t220);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t235 = __str217;
  struct std__allocator_char_* r236 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t235);
  void_std____alloc_on_move_std__allocator_char___(r234, r236);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t237 = __str217;
    _Bool r238 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t237);
    if (r238) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t239 = __str217;
        _Bool c240 = ((t239 != t220)) ? 1 : 0;
        if (c240) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t241 = __str217;
            unsigned long r242 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t241);
            _Bool cast243 = (_Bool)r242;
            if (cast243) {
              char* r244 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t220);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t245 = __str217;
              char* r246 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t245);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t247 = __str217;
              unsigned long r248 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t247);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r244, r246, r248);
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t249 = __str217;
          unsigned long r250 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t249);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t220, r250);
        }
    } else {
        _Bool r251 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        _Bool ternary252;
        if (r251) {
          _Bool c253 = 1;
          ternary252 = (_Bool)c253;
        } else {
          _Bool t254 = __equal_allocs219;
          ternary252 = (_Bool)t254;
        }
        if (ternary252) {
          char* __data255;
          unsigned long __capacity256;
          char* c257 = ((void*)0);
          __data255 = c257;
            _Bool r258 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t220);
            _Bool u259 = !r258;
            if (u259) {
                _Bool t260 = __equal_allocs219;
                if (t260) {
                  char* r261 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t220);
                  __data255 = r261;
                  unsigned long t262 = t220->field2._M_allocated_capacity;
                  __capacity256 = t262;
                } else {
                  unsigned long t263 = t220->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t220, t263);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t264 = __str217;
          char* r265 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t264);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t220, r265);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t266 = __str217;
          unsigned long r267 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t266);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t220, r267);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t268 = __str217;
          unsigned long t269 = t268->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t220, t269);
            char* t270 = __data255;
            _Bool cast271 = (_Bool)t270;
            if (cast271) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t272 = __str217;
              char* t273 = __data255;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t272, t273);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t274 = __str217;
              unsigned long t275 = __capacity256;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t274, t275);
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t276 = __str217;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t277 = __str217;
              char* r278 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t277);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t276, r278);
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t279 = __str217;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t220, t279);
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t280 = __str217;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t280);
  __retval218 = t220;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t281 = __retval218;
  return t281;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v282) {
bb283:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this284;
  this284 = v282;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t285 = this284;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t285);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t285->_M_dataplus);
  }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v286) {
bb287:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this288;
  char* __retval289;
  this288 = v286;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t290 = this288;
  char* r291 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t290);
  __retval289 = r291;
  char* t292 = __retval289;
  return t292;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4findEPKcmRS2_
char* __gnu_cxx__char_traits_char___find(char* v293, unsigned long v294, char* v295) {
bb296:
  char* __s297;
  unsigned long __n298;
  char* __a299;
  char* __retval300;
  __s297 = v293;
  __n298 = v294;
  __a299 = v295;
    unsigned long __i301;
    unsigned long c302 = 0;
    __i301 = c302;
    while (1) {
      unsigned long t304 = __i301;
      unsigned long t305 = __n298;
      _Bool c306 = ((t304 < t305)) ? 1 : 0;
      if (!c306) break;
        unsigned long t307 = __i301;
        char* t308 = __s297;
        char* ptr309 = &(t308)[t307];
        char* t310 = __a299;
        _Bool r311 = __gnu_cxx__char_traits_char___eq(ptr309, t310);
        if (r311) {
          char* t312 = __s297;
          unsigned long t313 = __i301;
          char* ptr314 = &(t312)[t313];
          __retval300 = ptr314;
          char* t315 = __retval300;
          char* ret_val316 = t315;
          return ret_val316;
        }
    for_step303: ;
      unsigned long t317 = __i301;
      unsigned long u318 = t317 + 1;
      __i301 = u318;
    }
  char* c319 = ((void*)0);
  __retval300 = c319;
  char* t320 = __retval300;
  return t320;
}

// function: _ZNSt11char_traitsIcE4findEPKcmRS1_
char* std__char_traits_char___find(char* v321, unsigned long v322, char* v323) {
bb324:
  char* __s325;
  unsigned long __n326;
  char* __a327;
  char* __retval328;
  __s325 = v321;
  __n326 = v322;
  __a327 = v323;
    unsigned long t329 = __n326;
    unsigned long c330 = 0;
    _Bool c331 = ((t329 == c330)) ? 1 : 0;
    if (c331) {
      char* c332 = ((void*)0);
      __retval328 = c332;
      char* t333 = __retval328;
      return t333;
    }
    _Bool r334 = std____is_constant_evaluated();
    if (r334) {
      char* t335 = __s325;
      unsigned long t336 = __n326;
      char* t337 = __a327;
      char* r338 = __gnu_cxx__char_traits_char___find(t335, t336, t337);
      __retval328 = r338;
      char* t339 = __retval328;
      return t339;
    }
  char* t340 = __s325;
  void* cast341 = (void*)t340;
  char* t342 = __a327;
  char t343 = *t342;
  int cast344 = (int)t343;
  unsigned long t345 = __n326;
  void* memchr346 = (void*)__builtin_memchr(cast341, cast344, t345);
  char* cast347 = (char*)memchr346;
  __retval328 = cast347;
  char* t348 = __retval328;
  return t348;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v349, char* v350) {
bb351:
  char* __c1352;
  char* __c2353;
  _Bool __retval354;
  __c1352 = v349;
  __c2353 = v350;
  char* t355 = __c1352;
  char t356 = *t355;
  unsigned char cast357 = (unsigned char)t356;
  int cast358 = (int)cast357;
  char* t359 = __c2353;
  char t360 = *t359;
  unsigned char cast361 = (unsigned char)t360;
  int cast362 = (int)cast361;
  _Bool c363 = ((cast358 < cast362)) ? 1 : 0;
  __retval354 = c363;
  _Bool t364 = __retval354;
  return t364;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v365, char* v366, unsigned long v367) {
bb368:
  char* __s1369;
  char* __s2370;
  unsigned long __n371;
  int __retval372;
  __s1369 = v365;
  __s2370 = v366;
  __n371 = v367;
    unsigned long t373 = __n371;
    unsigned long c374 = 0;
    _Bool c375 = ((t373 == c374)) ? 1 : 0;
    if (c375) {
      int c376 = 0;
      __retval372 = c376;
      int t377 = __retval372;
      return t377;
    }
    _Bool r378 = std____is_constant_evaluated();
    if (r378) {
        unsigned long __i379;
        unsigned long c380 = 0;
        __i379 = c380;
        while (1) {
          unsigned long t382 = __i379;
          unsigned long t383 = __n371;
          _Bool c384 = ((t382 < t383)) ? 1 : 0;
          if (!c384) break;
            unsigned long t385 = __i379;
            char* t386 = __s1369;
            char* ptr387 = &(t386)[t385];
            unsigned long t388 = __i379;
            char* t389 = __s2370;
            char* ptr390 = &(t389)[t388];
            _Bool r391 = std__char_traits_char___lt(ptr387, ptr390);
            if (r391) {
              int c392 = -1;
              __retval372 = c392;
              int t393 = __retval372;
              int ret_val394 = t393;
              return ret_val394;
            } else {
                unsigned long t395 = __i379;
                char* t396 = __s2370;
                char* ptr397 = &(t396)[t395];
                unsigned long t398 = __i379;
                char* t399 = __s1369;
                char* ptr400 = &(t399)[t398];
                _Bool r401 = std__char_traits_char___lt(ptr397, ptr400);
                if (r401) {
                  int c402 = 1;
                  __retval372 = c402;
                  int t403 = __retval372;
                  int ret_val404 = t403;
                  return ret_val404;
                }
            }
        for_step381: ;
          unsigned long t405 = __i379;
          unsigned long u406 = t405 + 1;
          __i379 = u406;
        }
      int c407 = 0;
      __retval372 = c407;
      int t408 = __retval372;
      return t408;
    }
  char* t409 = __s1369;
  void* cast410 = (void*)t409;
  char* t411 = __s2370;
  void* cast412 = (void*)t411;
  unsigned long t413 = __n371;
  int r414 = memcmp(cast410, cast412, t413);
  __retval372 = r414;
  int t415 = __retval372;
  return t415;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEPKcmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v416, char* v417, unsigned long v418, unsigned long v419) {
bb420:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this421;
  char* __s422;
  unsigned long __pos423;
  unsigned long __n424;
  unsigned long __retval425;
  unsigned long __size426;
  char __elem0427;
  char* __data428;
  char* __first429;
  char* __last430;
  unsigned long __len431;
  this421 = v416;
  __s422 = v417;
  __pos423 = v418;
  __n424 = v419;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t432 = this421;
  unsigned long r433 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t432);
  __size426 = r433;
    unsigned long t434 = __n424;
    unsigned long c435 = 0;
    _Bool c436 = ((t434 == c435)) ? 1 : 0;
    if (c436) {
      unsigned long t437 = __pos423;
      unsigned long t438 = __size426;
      _Bool c439 = ((t437 <= t438)) ? 1 : 0;
      unsigned long ternary440;
      if (c439) {
        unsigned long t441 = __pos423;
        ternary440 = (unsigned long)t441;
      } else {
        unsigned long t442 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        ternary440 = (unsigned long)t442;
      }
      __retval425 = ternary440;
      unsigned long t443 = __retval425;
      return t443;
    }
    unsigned long t444 = __pos423;
    unsigned long t445 = __size426;
    _Bool c446 = ((t444 >= t445)) ? 1 : 0;
    if (c446) {
      unsigned long t447 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      __retval425 = t447;
      unsigned long t448 = __retval425;
      return t448;
    }
  long c449 = 0;
  char* t450 = __s422;
  char* ptr451 = &(t450)[c449];
  char t452 = *ptr451;
  __elem0427 = t452;
  char* r453 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t432);
  __data428 = r453;
  char* t454 = __data428;
  unsigned long t455 = __pos423;
  char* ptr456 = &(t454)[t455];
  __first429 = ptr456;
  char* t457 = __data428;
  unsigned long t458 = __size426;
  char* ptr459 = &(t457)[t458];
  __last430 = ptr459;
  unsigned long t460 = __size426;
  unsigned long t461 = __pos423;
  unsigned long b462 = t460 - t461;
  __len431 = b462;
    while (1) {
      unsigned long t463 = __len431;
      unsigned long t464 = __n424;
      _Bool c465 = ((t463 >= t464)) ? 1 : 0;
      if (!c465) break;
        char* t466 = __first429;
        unsigned long t467 = __len431;
        unsigned long t468 = __n424;
        unsigned long b469 = t467 - t468;
        unsigned long c470 = 1;
        unsigned long b471 = b469 + c470;
        char* r472 = std__char_traits_char___find(t466, b471, &__elem0427);
        __first429 = r472;
          char* t473 = __first429;
          _Bool cast474 = (_Bool)t473;
          _Bool u475 = !cast474;
          if (u475) {
            unsigned long t476 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
            __retval425 = t476;
            unsigned long t477 = __retval425;
            unsigned long ret_val478 = t477;
            return ret_val478;
          }
          char* t479 = __first429;
          char* t480 = __s422;
          unsigned long t481 = __n424;
          int r482 = std__char_traits_char___compare(t479, t480, t481);
          int c483 = 0;
          _Bool c484 = ((r482 == c483)) ? 1 : 0;
          if (c484) {
            char* t485 = __first429;
            char* t486 = __data428;
            long diff487 = t485 - t486;
            unsigned long cast488 = (unsigned long)diff487;
            __retval425 = cast488;
            unsigned long t489 = __retval425;
            unsigned long ret_val490 = t489;
            return ret_val490;
          }
        char* t491 = __last430;
        char* t492 = __first429;
        int c493 = 1;
        char* ptr494 = &(t492)[c493];
        __first429 = ptr494;
        long diff495 = t491 - ptr494;
        unsigned long cast496 = (unsigned long)diff495;
        __len431 = cast496;
    }
  unsigned long t497 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
  __retval425 = t497;
  unsigned long t498 = __retval425;
  return t498;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEPKcm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v499, char* v500, unsigned long v501) {
bb502:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this503;
  char* __s504;
  unsigned long __pos505;
  unsigned long __retval506;
  this503 = v499;
  __s504 = v500;
  __pos505 = v501;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t507 = this503;
  char* t508 = __s504;
  unsigned long t509 = __pos505;
  char* t510 = __s504;
  unsigned long r511 = std__char_traits_char___length(t510);
  unsigned long r512 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(t507, t508, t509, r511);
  __retval506 = r512;
  unsigned long t513 = __retval506;
  return t513;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v514, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v515) {
bb516:
  struct std__basic_ostream_char__std__char_traits_char__* __os517;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str518;
  struct std__basic_ostream_char__std__char_traits_char__* __retval519;
  __os517 = v514;
  __str518 = v515;
  struct std__basic_ostream_char__std__char_traits_char__* t520 = __os517;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t521 = __str518;
  char* r522 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t521);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t523 = __str518;
  unsigned long r524 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t523);
  long cast525 = (long)r524;
  struct std__basic_ostream_char__std__char_traits_char__* r526 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t520, r522, cast525);
  __retval519 = r526;
  struct std__basic_ostream_char__std__char_traits_char__* t527 = __retval519;
  return t527;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v528) {
bb529:
  struct std__ios_base* this530;
  long __retval531;
  this530 = v528;
  struct std__ios_base* t532 = this530;
  long t533 = t532->_M_width;
  __retval531 = t533;
  long t534 = __retval531;
  return t534;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v535, char v536) {
bb537:
  struct std__basic_ostream_char__std__char_traits_char__* __out538;
  char __c539;
  struct std__basic_ostream_char__std__char_traits_char__* __retval540;
  __out538 = v535;
  __c539 = v536;
    struct std__basic_ostream_char__std__char_traits_char__* t541 = __out538;
    void** v542 = (void**)t541;
    void* v543 = *((void**)v542);
    unsigned char* cast544 = (unsigned char*)v543;
    long c545 = -24;
    unsigned char* ptr546 = &(cast544)[c545];
    long* cast547 = (long*)ptr546;
    long t548 = *cast547;
    unsigned char* cast549 = (unsigned char*)t541;
    unsigned char* ptr550 = &(cast549)[t548];
    struct std__basic_ostream_char__std__char_traits_char__* cast551 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr550;
    struct std__ios_base* cast552 = (struct std__ios_base*)cast551;
    long r553 = std__ios_base__width___const(cast552);
    long c554 = 0;
    _Bool c555 = ((r553 != c554)) ? 1 : 0;
    if (c555) {
      struct std__basic_ostream_char__std__char_traits_char__* t556 = __out538;
      long c557 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r558 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t556, &__c539, c557);
      __retval540 = r558;
      struct std__basic_ostream_char__std__char_traits_char__* t559 = __retval540;
      return t559;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t560 = __out538;
  char t561 = __c539;
  struct std__basic_ostream_char__std__char_traits_char__* r562 = std__ostream__put(t560, t561);
  struct std__basic_ostream_char__std__char_traits_char__* t563 = __out538;
  __retval540 = t563;
  struct std__basic_ostream_char__std__char_traits_char__* t564 = __retval540;
  return t564;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v565, void* v566) {
bb567:
  struct std__basic_ostream_char__std__char_traits_char__* this568;
  void* __pf569;
  struct std__basic_ostream_char__std__char_traits_char__* __retval570;
  this568 = v565;
  __pf569 = v566;
  struct std__basic_ostream_char__std__char_traits_char__* t571 = this568;
  void* t572 = __pf569;
  struct std__basic_ostream_char__std__char_traits_char__* r573 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t572)(t571);
  __retval570 = r573;
  struct std__basic_ostream_char__std__char_traits_char__* t574 = __retval570;
  return t574;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v575) {
bb576:
  struct std__basic_ostream_char__std__char_traits_char__* __os577;
  struct std__basic_ostream_char__std__char_traits_char__* __retval578;
  __os577 = v575;
  struct std__basic_ostream_char__std__char_traits_char__* t579 = __os577;
  struct std__basic_ostream_char__std__char_traits_char__* r580 = std__ostream__flush(t579);
  __retval578 = r580;
  struct std__basic_ostream_char__std__char_traits_char__* t581 = __retval578;
  return t581;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v582) {
bb583:
  struct std__ctype_char_* __f584;
  struct std__ctype_char_* __retval585;
  __f584 = v582;
    struct std__ctype_char_* t586 = __f584;
    _Bool cast587 = (_Bool)t586;
    _Bool u588 = !cast587;
    if (u588) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t589 = __f584;
  __retval585 = t589;
  struct std__ctype_char_* t590 = __retval585;
  return t590;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v591, char v592) {
bb593:
  struct std__ctype_char_* this594;
  char __c595;
  char __retval596;
  this594 = v591;
  __c595 = v592;
  struct std__ctype_char_* t597 = this594;
    char t598 = t597->_M_widen_ok;
    _Bool cast599 = (_Bool)t598;
    if (cast599) {
      char t600 = __c595;
      unsigned char cast601 = (unsigned char)t600;
      unsigned long cast602 = (unsigned long)cast601;
      char t603 = t597->_M_widen[cast602];
      __retval596 = t603;
      char t604 = __retval596;
      return t604;
    }
  std__ctype_char____M_widen_init___const(t597);
  char t605 = __c595;
  void** v606 = (void**)t597;
  void* v607 = *((void**)v606);
  char vcall610 = (char)__VERIFIER_virtual_call_char_char(t597, 6, t605);
  __retval596 = vcall610;
  char t611 = __retval596;
  return t611;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v612, char v613) {
bb614:
  struct std__basic_ios_char__std__char_traits_char__* this615;
  char __c616;
  char __retval617;
  this615 = v612;
  __c616 = v613;
  struct std__basic_ios_char__std__char_traits_char__* t618 = this615;
  struct std__ctype_char_* t619 = t618->_M_ctype;
  struct std__ctype_char_* r620 = std__ctype_char__const__std____check_facet_std__ctype_char___(t619);
  char t621 = __c616;
  char r622 = std__ctype_char___widen_char__const(r620, t621);
  __retval617 = r622;
  char t623 = __retval617;
  return t623;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v624) {
bb625:
  struct std__basic_ostream_char__std__char_traits_char__* __os626;
  struct std__basic_ostream_char__std__char_traits_char__* __retval627;
  __os626 = v624;
  struct std__basic_ostream_char__std__char_traits_char__* t628 = __os626;
  struct std__basic_ostream_char__std__char_traits_char__* t629 = __os626;
  void** v630 = (void**)t629;
  void* v631 = *((void**)v630);
  unsigned char* cast632 = (unsigned char*)v631;
  long c633 = -24;
  unsigned char* ptr634 = &(cast632)[c633];
  long* cast635 = (long*)ptr634;
  long t636 = *cast635;
  unsigned char* cast637 = (unsigned char*)t629;
  unsigned char* ptr638 = &(cast637)[t636];
  struct std__basic_ostream_char__std__char_traits_char__* cast639 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr638;
  struct std__basic_ios_char__std__char_traits_char__* cast640 = (struct std__basic_ios_char__std__char_traits_char__*)cast639;
  char c641 = 10;
  char r642 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast640, c641);
  struct std__basic_ostream_char__std__char_traits_char__* r643 = std__ostream__put(t628, r642);
  struct std__basic_ostream_char__std__char_traits_char__* r644 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r643);
  __retval627 = r644;
  struct std__basic_ostream_char__std__char_traits_char__* t645 = __retval627;
  return t645;
}

// function: main
int main() {
bb646:
  int __retval647;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str648;
  struct std__allocator_char_ ref_tmp0649;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2650;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3651;
  unsigned long pos652;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp1653;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup654;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp2655;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup656;
  int c657 = 0;
  __retval647 = c657;
  char* cast658 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0649);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str648, cast658, &ref_tmp0649);
  {
    std__allocator_char____allocator(&ref_tmp0649);
  }
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str2650);
      _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str3651);
        unsigned long c659 = 12;
        unsigned long c660 = 12;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r661 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&str648, c659, c660);
        ref_tmp1653 = r661;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r662 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str2650, &ref_tmp1653);
          tmp_exprcleanup654 = r662;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1653);
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t663 = tmp_exprcleanup654;
        char* cast664 = (char*)&(_str_1);
        unsigned long c665 = 0;
        unsigned long r666 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&str648, cast664, c665);
        pos652 = r666;
        unsigned long t667 = pos652;
        unsigned long t668 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r669 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&str648, t667, t668);
        ref_tmp2655 = r669;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r670 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str3651, &ref_tmp2655);
          tmp_exprcleanup656 = r670;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp2655);
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t671 = tmp_exprcleanup656;
        struct std__basic_ostream_char__std__char_traits_char__* r672 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str2650);
        char c673 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* r674 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r672, c673);
        struct std__basic_ostream_char__std__char_traits_char__* r675 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r674, &str3651);
        struct std__basic_ostream_char__std__char_traits_char__* r676 = std__ostream__operator___std__ostream_____(r675, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int c677 = 0;
        __retval647 = c677;
        int t678 = __retval647;
        int ret_val679 = t678;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str3651);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2650);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str648);
        }
        return ret_val679;
  int t680 = __retval647;
  return t680;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v681) {
bb682:
  struct std____new_allocator_char_* this683;
  this683 = v681;
  struct std____new_allocator_char_* t684 = this683;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v685) {
bb686:
  char* __r687;
  char* __retval688;
  __r687 = v685;
  char* t689 = __r687;
  __retval688 = t689;
  char* t690 = __retval688;
  return t690;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v691) {
bb692:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this693;
  char* __retval694;
  this693 = v691;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t695 = this693;
  char* cast696 = (char*)&(t695->field2._M_local_buf);
  char* r697 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast696);
  __retval694 = r697;
  char* t698 = __retval694;
  return t698;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v699, char* v700, struct std__allocator_char_* v701) {
bb702:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this703;
  char* __dat704;
  struct std__allocator_char_* __a705;
  this703 = v699;
  __dat704 = v700;
  __a705 = v701;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t706 = this703;
  struct std__allocator_char_* base707 = (struct std__allocator_char_*)((char *)t706 + 0);
  struct std__allocator_char_* t708 = __a705;
  std__allocator_char___allocator(base707, t708);
    char* t709 = __dat704;
    t706->_M_p = t709;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb710:
  _Bool __retval711;
    _Bool c712 = 0;
    __retval711 = c712;
    _Bool t713 = __retval711;
    return t713;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v714, char* v715) {
bb716:
  char* __c1717;
  char* __c2718;
  _Bool __retval719;
  __c1717 = v714;
  __c2718 = v715;
  char* t720 = __c1717;
  char t721 = *t720;
  int cast722 = (int)t721;
  char* t723 = __c2718;
  char t724 = *t723;
  int cast725 = (int)t724;
  _Bool c726 = ((cast722 == cast725)) ? 1 : 0;
  __retval719 = c726;
  _Bool t727 = __retval719;
  return t727;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v728) {
bb729:
  char* __p730;
  unsigned long __retval731;
  unsigned long __i732;
  __p730 = v728;
  unsigned long c733 = 0;
  __i732 = c733;
    char ref_tmp0734;
    while (1) {
      unsigned long t735 = __i732;
      char* t736 = __p730;
      char* ptr737 = &(t736)[t735];
      char c738 = 0;
      ref_tmp0734 = c738;
      _Bool r739 = __gnu_cxx__char_traits_char___eq(ptr737, &ref_tmp0734);
      _Bool u740 = !r739;
      if (!u740) break;
      unsigned long t741 = __i732;
      unsigned long u742 = t741 + 1;
      __i732 = u742;
    }
  unsigned long t743 = __i732;
  __retval731 = t743;
  unsigned long t744 = __retval731;
  return t744;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v745) {
bb746:
  char* __s747;
  unsigned long __retval748;
  __s747 = v745;
    _Bool r749 = std____is_constant_evaluated();
    if (r749) {
      char* t750 = __s747;
      unsigned long r751 = __gnu_cxx__char_traits_char___length(t750);
      __retval748 = r751;
      unsigned long t752 = __retval748;
      return t752;
    }
  char* t753 = __s747;
  unsigned long r754 = strlen(t753);
  __retval748 = r754;
  unsigned long t755 = __retval748;
  return t755;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v756, char* v757, struct std__random_access_iterator_tag v758) {
bb759:
  char* __first760;
  char* __last761;
  struct std__random_access_iterator_tag unnamed762;
  long __retval763;
  __first760 = v756;
  __last761 = v757;
  unnamed762 = v758;
  char* t764 = __last761;
  char* t765 = __first760;
  long diff766 = t764 - t765;
  __retval763 = diff766;
  long t767 = __retval763;
  return t767;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v768) {
bb769:
  char** unnamed770;
  struct std__random_access_iterator_tag __retval771;
  unnamed770 = v768;
  struct std__random_access_iterator_tag t772 = __retval771;
  return t772;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v773, char* v774) {
bb775:
  char* __first776;
  char* __last777;
  long __retval778;
  struct std__random_access_iterator_tag agg_tmp0779;
  __first776 = v773;
  __last777 = v774;
  char* t780 = __first776;
  char* t781 = __last777;
  struct std__random_access_iterator_tag r782 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first776);
  agg_tmp0779 = r782;
  struct std__random_access_iterator_tag t783 = agg_tmp0779;
  long r784 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t780, t781, t783);
  __retval778 = r784;
  long t785 = __retval778;
  return t785;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v786, char* v787) {
bb788:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this789;
  char* __p790;
  this789 = v786;
  __p790 = v787;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t791 = this789;
  char* t792 = __p790;
  t791->_M_dataplus._M_p = t792;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v793) {
bb794:
  struct std__allocator_char_* __a795;
  unsigned long __retval796;
  __a795 = v793;
  unsigned long c797 = -1;
  unsigned long c798 = 1;
  unsigned long b799 = c797 / c798;
  __retval796 = b799;
  unsigned long t800 = __retval796;
  return t800;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v801) {
bb802:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this803;
  struct std__allocator_char_* __retval804;
  this803 = v801;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t805 = this803;
  struct std__allocator_char_* base806 = (struct std__allocator_char_*)((char *)&(t805->_M_dataplus) + 0);
  __retval804 = base806;
  struct std__allocator_char_* t807 = __retval804;
  return t807;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v808, unsigned long* v809) {
bb810:
  unsigned long* __a811;
  unsigned long* __b812;
  unsigned long* __retval813;
  __a811 = v808;
  __b812 = v809;
    unsigned long* t814 = __b812;
    unsigned long t815 = *t814;
    unsigned long* t816 = __a811;
    unsigned long t817 = *t816;
    _Bool c818 = ((t815 < t817)) ? 1 : 0;
    if (c818) {
      unsigned long* t819 = __b812;
      __retval813 = t819;
      unsigned long* t820 = __retval813;
      return t820;
    }
  unsigned long* t821 = __a811;
  __retval813 = t821;
  unsigned long* t822 = __retval813;
  return t822;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v823) {
bb824:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this825;
  unsigned long __retval826;
  unsigned long __diffmax827;
  unsigned long __allocmax828;
  this825 = v823;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t829 = this825;
  unsigned long c830 = 9223372036854775807;
  __diffmax827 = c830;
  struct std__allocator_char_* r831 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t829);
  unsigned long r832 = std__allocator_traits_std__allocator_char_____max_size(r831);
  __allocmax828 = r832;
  unsigned long* r833 = unsigned_long_const__std__min_unsigned_long_(&__diffmax827, &__allocmax828);
  unsigned long t834 = *r833;
  unsigned long c835 = 1;
  unsigned long b836 = t834 - c835;
  __retval826 = b836;
  unsigned long t837 = __retval826;
  return t837;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v838) {
bb839:
  struct std____new_allocator_char_* this840;
  unsigned long __retval841;
  this840 = v838;
  struct std____new_allocator_char_* t842 = this840;
  unsigned long c843 = 9223372036854775807;
  unsigned long c844 = 1;
  unsigned long b845 = c843 / c844;
  __retval841 = b845;
  unsigned long t846 = __retval841;
  return t846;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v847, unsigned long v848, void* v849) {
bb850:
  struct std____new_allocator_char_* this851;
  unsigned long __n852;
  void* unnamed853;
  char* __retval854;
  this851 = v847;
  __n852 = v848;
  unnamed853 = v849;
  struct std____new_allocator_char_* t855 = this851;
    unsigned long t856 = __n852;
    unsigned long r857 = std____new_allocator_char____M_max_size___const(t855);
    _Bool c858 = ((t856 > r857)) ? 1 : 0;
    if (c858) {
        unsigned long t859 = __n852;
        unsigned long c860 = -1;
        unsigned long c861 = 1;
        unsigned long b862 = c860 / c861;
        _Bool c863 = ((t859 > b862)) ? 1 : 0;
        if (c863) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c864 = 1;
    unsigned long c865 = 16;
    _Bool c866 = ((c864 > c865)) ? 1 : 0;
    if (c866) {
      unsigned long __al867;
      unsigned long c868 = 1;
      __al867 = c868;
      unsigned long t869 = __n852;
      unsigned long c870 = 1;
      unsigned long b871 = t869 * c870;
      unsigned long t872 = __al867;
      void* r873 = operator_new_2(b871, t872);
      char* cast874 = (char*)r873;
      __retval854 = cast874;
      char* t875 = __retval854;
      return t875;
    }
  unsigned long t876 = __n852;
  unsigned long c877 = 1;
  unsigned long b878 = t876 * c877;
  void* r879 = operator_new(b878);
  char* cast880 = (char*)r879;
  __retval854 = cast880;
  char* t881 = __retval854;
  return t881;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v882, unsigned long v883) {
bb884:
  struct std__allocator_char_* this885;
  unsigned long __n886;
  char* __retval887;
  this885 = v882;
  __n886 = v883;
  struct std__allocator_char_* t888 = this885;
    _Bool r889 = std____is_constant_evaluated();
    if (r889) {
        unsigned long t890 = __n886;
        unsigned long c891 = 1;
        unsigned long ovr892;
        _Bool ovf893 = __builtin_mul_overflow(t890, c891, &ovr892);
        __n886 = ovr892;
        if (ovf893) {
          std____throw_bad_array_new_length();
        }
      unsigned long t894 = __n886;
      void* r895 = operator_new(t894);
      char* cast896 = (char*)r895;
      __retval887 = cast896;
      char* t897 = __retval887;
      return t897;
    }
  struct std____new_allocator_char_* base898 = (struct std____new_allocator_char_*)((char *)t888 + 0);
  unsigned long t899 = __n886;
  void* c900 = ((void*)0);
  char* r901 = std____new_allocator_char___allocate(base898, t899, c900);
  __retval887 = r901;
  char* t902 = __retval887;
  return t902;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v903, unsigned long v904) {
bb905:
  struct std__allocator_char_* __a906;
  unsigned long __n907;
  char* __retval908;
  __a906 = v903;
  __n907 = v904;
  struct std__allocator_char_* t909 = __a906;
  unsigned long t910 = __n907;
  char* r911 = std__allocator_char___allocate(t909, t910);
  __retval908 = r911;
  char* t912 = __retval908;
  return t912;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v913, unsigned long v914) {
bb915:
  struct std__allocator_char_* __a916;
  unsigned long __n917;
  char* __retval918;
  char* __p919;
  __a916 = v913;
  __n917 = v914;
  struct std__allocator_char_* t920 = __a916;
  unsigned long t921 = __n917;
  char* r922 = std__allocator_traits_std__allocator_char_____allocate(t920, t921);
  __p919 = r922;
  char* t923 = __p919;
  __retval918 = t923;
  char* t924 = __retval918;
  return t924;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v925) {
bb926:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this927;
  struct std__allocator_char_* __retval928;
  this927 = v925;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t929 = this927;
  struct std__allocator_char_* base930 = (struct std__allocator_char_*)((char *)&(t929->_M_dataplus) + 0);
  __retval928 = base930;
  struct std__allocator_char_* t931 = __retval928;
  return t931;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v932, unsigned long* v933, unsigned long v934) {
bb935:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this936;
  unsigned long* __capacity937;
  unsigned long __old_capacity938;
  char* __retval939;
  this936 = v932;
  __capacity937 = v933;
  __old_capacity938 = v934;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t940 = this936;
    unsigned long* t941 = __capacity937;
    unsigned long t942 = *t941;
    unsigned long r943 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t940);
    _Bool c944 = ((t942 > r943)) ? 1 : 0;
    if (c944) {
      char* cast945 = (char*)&(_str_3);
      std____throw_length_error(cast945);
    }
    unsigned long* t946 = __capacity937;
    unsigned long t947 = *t946;
    unsigned long t948 = __old_capacity938;
    _Bool c949 = ((t947 > t948)) ? 1 : 0;
    _Bool ternary950;
    if (c949) {
      unsigned long* t951 = __capacity937;
      unsigned long t952 = *t951;
      unsigned long c953 = 2;
      unsigned long t954 = __old_capacity938;
      unsigned long b955 = c953 * t954;
      _Bool c956 = ((t952 < b955)) ? 1 : 0;
      ternary950 = (_Bool)c956;
    } else {
      _Bool c957 = 0;
      ternary950 = (_Bool)c957;
    }
    if (ternary950) {
      unsigned long c958 = 2;
      unsigned long t959 = __old_capacity938;
      unsigned long b960 = c958 * t959;
      unsigned long* t961 = __capacity937;
      *t961 = b960;
        unsigned long* t962 = __capacity937;
        unsigned long t963 = *t962;
        unsigned long r964 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t940);
        _Bool c965 = ((t963 > r964)) ? 1 : 0;
        if (c965) {
          unsigned long r966 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t940);
          unsigned long* t967 = __capacity937;
          *t967 = r966;
        }
    }
  struct std__allocator_char_* r968 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t940);
  unsigned long* t969 = __capacity937;
  unsigned long t970 = *t969;
  unsigned long c971 = 1;
  unsigned long b972 = t970 + c971;
  char* r973 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r968, b972);
  __retval939 = r973;
  char* t974 = __retval939;
  return t974;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v975, unsigned long v976) {
bb977:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this978;
  unsigned long __capacity979;
  this978 = v975;
  __capacity979 = v976;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t980 = this978;
  unsigned long t981 = __capacity979;
  t980->field2._M_allocated_capacity = t981;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb982:
  _Bool __retval983;
    _Bool c984 = 0;
    __retval983 = c984;
    _Bool t985 = __retval983;
    return t985;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v986) {
bb987:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this988;
  this988 = v986;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t989 = this988;
    _Bool r990 = std__is_constant_evaluated();
    if (r990) {
        unsigned long __i991;
        unsigned long c992 = 0;
        __i991 = c992;
        while (1) {
          unsigned long t994 = __i991;
          unsigned long c995 = 15;
          _Bool c996 = ((t994 <= c995)) ? 1 : 0;
          if (!c996) break;
          char c997 = 0;
          unsigned long t998 = __i991;
          t989->field2._M_local_buf[t998] = c997;
        for_step993: ;
          unsigned long t999 = __i991;
          unsigned long u1000 = t999 + 1;
          __i991 = u1000;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1001, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1002) {
bb1003:
  struct _Guard* this1004;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1005;
  this1004 = v1001;
  __s1005 = v1002;
  struct _Guard* t1006 = this1004;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1007 = __s1005;
  t1006->_M_guarded = t1007;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1008, char* v1009) {
bb1010:
  char* __location1011;
  char* __args1012;
  char* __retval1013;
  void* __loc1014;
  __location1011 = v1008;
  __args1012 = v1009;
  char* t1015 = __location1011;
  void* cast1016 = (void*)t1015;
  __loc1014 = cast1016;
    void* t1017 = __loc1014;
    char* cast1018 = (char*)t1017;
    char* t1019 = __args1012;
    char t1020 = *t1019;
    *cast1018 = t1020;
    __retval1013 = cast1018;
    char* t1021 = __retval1013;
    return t1021;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1022, char* v1023) {
bb1024:
  char* __c11025;
  char* __c21026;
  __c11025 = v1022;
  __c21026 = v1023;
    _Bool r1027 = std____is_constant_evaluated();
    if (r1027) {
      char* t1028 = __c11025;
      char* t1029 = __c21026;
      char* r1030 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1028, t1029);
    } else {
      char* t1031 = __c21026;
      char t1032 = *t1031;
      char* t1033 = __c11025;
      *t1033 = t1032;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1034, char* v1035, unsigned long v1036) {
bb1037:
  char* __s11038;
  char* __s21039;
  unsigned long __n1040;
  char* __retval1041;
  __s11038 = v1034;
  __s21039 = v1035;
  __n1040 = v1036;
    unsigned long t1042 = __n1040;
    unsigned long c1043 = 0;
    _Bool c1044 = ((t1042 == c1043)) ? 1 : 0;
    if (c1044) {
      char* t1045 = __s11038;
      __retval1041 = t1045;
      char* t1046 = __retval1041;
      return t1046;
    }
    _Bool r1047 = std____is_constant_evaluated();
    if (r1047) {
        unsigned long __i1048;
        unsigned long c1049 = 0;
        __i1048 = c1049;
        while (1) {
          unsigned long t1051 = __i1048;
          unsigned long t1052 = __n1040;
          _Bool c1053 = ((t1051 < t1052)) ? 1 : 0;
          if (!c1053) break;
          char* t1054 = __s11038;
          unsigned long t1055 = __i1048;
          char* ptr1056 = &(t1054)[t1055];
          unsigned long t1057 = __i1048;
          char* t1058 = __s21039;
          char* ptr1059 = &(t1058)[t1057];
          char* r1060 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1056, ptr1059);
        for_step1050: ;
          unsigned long t1061 = __i1048;
          unsigned long u1062 = t1061 + 1;
          __i1048 = u1062;
        }
      char* t1063 = __s11038;
      __retval1041 = t1063;
      char* t1064 = __retval1041;
      return t1064;
    }
  char* t1065 = __s11038;
  void* cast1066 = (void*)t1065;
  char* t1067 = __s21039;
  void* cast1068 = (void*)t1067;
  unsigned long t1069 = __n1040;
  unsigned long c1070 = 1;
  unsigned long b1071 = t1069 * c1070;
  void* r1072 = memcpy(cast1066, cast1068, b1071);
  char* t1073 = __s11038;
  __retval1041 = t1073;
  char* t1074 = __retval1041;
  return t1074;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1075, char* v1076, unsigned long v1077) {
bb1078:
  char* __s11079;
  char* __s21080;
  unsigned long __n1081;
  char* __retval1082;
  __s11079 = v1075;
  __s21080 = v1076;
  __n1081 = v1077;
    unsigned long t1083 = __n1081;
    unsigned long c1084 = 0;
    _Bool c1085 = ((t1083 == c1084)) ? 1 : 0;
    if (c1085) {
      char* t1086 = __s11079;
      __retval1082 = t1086;
      char* t1087 = __retval1082;
      return t1087;
    }
    _Bool r1088 = std____is_constant_evaluated();
    if (r1088) {
      char* t1089 = __s11079;
      char* t1090 = __s21080;
      unsigned long t1091 = __n1081;
      char* r1092 = __gnu_cxx__char_traits_char___copy(t1089, t1090, t1091);
      __retval1082 = r1092;
      char* t1093 = __retval1082;
      return t1093;
    }
  char* t1094 = __s11079;
  void* cast1095 = (void*)t1094;
  char* t1096 = __s21080;
  void* cast1097 = (void*)t1096;
  unsigned long t1098 = __n1081;
  void* r1099 = memcpy(cast1095, cast1097, t1098);
  char* cast1100 = (char*)r1099;
  __retval1082 = cast1100;
  char* t1101 = __retval1082;
  return t1101;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1102, char* v1103, unsigned long v1104) {
bb1105:
  char* __d1106;
  char* __s1107;
  unsigned long __n1108;
  __d1106 = v1102;
  __s1107 = v1103;
  __n1108 = v1104;
    unsigned long t1109 = __n1108;
    unsigned long c1110 = 1;
    _Bool c1111 = ((t1109 == c1110)) ? 1 : 0;
    if (c1111) {
      char* t1112 = __d1106;
      char* t1113 = __s1107;
      std__char_traits_char___assign(t1112, t1113);
    } else {
      char* t1114 = __d1106;
      char* t1115 = __s1107;
      unsigned long t1116 = __n1108;
      char* r1117 = std__char_traits_char___copy(t1114, t1115, t1116);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1118) {
bb1119:
  char* __it1120;
  char* __retval1121;
  __it1120 = v1118;
  char* t1122 = __it1120;
  __retval1121 = t1122;
  char* t1123 = __retval1121;
  return t1123;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1124, char* v1125, char* v1126) {
bb1127:
  char* __p1128;
  char* __k11129;
  char* __k21130;
  __p1128 = v1124;
  __k11129 = v1125;
  __k21130 = v1126;
    char* t1131 = __p1128;
    char* t1132 = __k11129;
    char* r1133 = char_const__std____niter_base_char_const__(t1132);
    char* t1134 = __k21130;
    char* t1135 = __k11129;
    long diff1136 = t1134 - t1135;
    unsigned long cast1137 = (unsigned long)diff1136;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1131, r1133, cast1137);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1138) {
bb1139:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1140;
  char* __retval1141;
  this1140 = v1138;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1142 = this1140;
  char* t1143 = t1142->_M_dataplus._M_p;
  __retval1141 = t1143;
  char* t1144 = __retval1141;
  return t1144;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1145, unsigned long v1146) {
bb1147:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1148;
  unsigned long __length1149;
  this1148 = v1145;
  __length1149 = v1146;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1150 = this1148;
  unsigned long t1151 = __length1149;
  t1150->_M_string_length = t1151;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1152, unsigned long v1153) {
bb1154:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1155;
  unsigned long __n1156;
  char ref_tmp01157;
  this1155 = v1152;
  __n1156 = v1153;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1158 = this1155;
  unsigned long t1159 = __n1156;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1158, t1159);
  unsigned long t1160 = __n1156;
  char* r1161 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1158);
  char* ptr1162 = &(r1161)[t1160];
  char c1163 = 0;
  ref_tmp01157 = c1163;
  std__char_traits_char___assign(ptr1162, &ref_tmp01157);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1164) {
bb1165:
  struct _Guard* this1166;
  this1166 = v1164;
  struct _Guard* t1167 = this1166;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1168 = t1167->_M_guarded;
    _Bool cast1169 = (_Bool)t1168;
    if (cast1169) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1170 = t1167->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1170);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1171, char* v1172, char* v1173, struct std__forward_iterator_tag v1174) {
bb1175:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1176;
  char* __beg1177;
  char* __end1178;
  struct std__forward_iterator_tag unnamed1179;
  unsigned long __dnew1180;
  struct _Guard __guard1181;
  this1176 = v1171;
  __beg1177 = v1172;
  __end1178 = v1173;
  unnamed1179 = v1174;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1182 = this1176;
  char* t1183 = __beg1177;
  char* t1184 = __end1178;
  long r1185 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1183, t1184);
  unsigned long cast1186 = (unsigned long)r1185;
  __dnew1180 = cast1186;
    unsigned long t1187 = __dnew1180;
    unsigned long c1188 = 15;
    _Bool c1189 = ((t1187 > c1188)) ? 1 : 0;
    if (c1189) {
      unsigned long c1190 = 0;
      char* r1191 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1182, &__dnew1180, c1190);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1182, r1191);
      unsigned long t1192 = __dnew1180;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1182, t1192);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1182);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1181, t1182);
    char* r1193 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1182);
    char* t1194 = __beg1177;
    char* t1195 = __end1178;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1193, t1194, t1195);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1196 = ((void*)0);
    __guard1181._M_guarded = c1196;
    unsigned long t1197 = __dnew1180;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1182, t1197);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1181);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1198) {
bb1199:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1200;
  this1200 = v1198;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1201 = this1200;
  {
    struct std__allocator_char_* base1202 = (struct std__allocator_char_*)((char *)t1201 + 0);
    std__allocator_char____allocator(base1202);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1203, struct std____new_allocator_char_* v1204) {
bb1205:
  struct std____new_allocator_char_* this1206;
  struct std____new_allocator_char_* unnamed1207;
  this1206 = v1203;
  unnamed1207 = v1204;
  struct std____new_allocator_char_* t1208 = this1206;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1209, struct std__allocator_char_* v1210) {
bb1211:
  struct std__allocator_char_* this1212;
  struct std__allocator_char_* __a1213;
  this1212 = v1209;
  __a1213 = v1210;
  struct std__allocator_char_* t1214 = this1212;
  struct std____new_allocator_char_* base1215 = (struct std____new_allocator_char_*)((char *)t1214 + 0);
  struct std__allocator_char_* t1216 = __a1213;
  struct std____new_allocator_char_* base1217 = (struct std____new_allocator_char_*)((char *)t1216 + 0);
  std____new_allocator_char_____new_allocator(base1215, base1217);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1218) {
bb1219:
  char* __r1220;
  char* __retval1221;
  __r1220 = v1218;
  char* t1222 = __r1220;
  __retval1221 = t1222;
  char* t1223 = __retval1221;
  return t1223;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1224) {
bb1225:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1226;
  char* __retval1227;
  this1226 = v1224;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1228 = this1226;
  char* cast1229 = (char*)&(t1228->field2._M_local_buf);
  char* r1230 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1229);
  __retval1227 = r1230;
  char* t1231 = __retval1227;
  return t1231;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1232) {
bb1233:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1234;
  _Bool __retval1235;
  this1234 = v1232;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1236 = this1234;
    char* r1237 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1236);
    char* r1238 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1236);
    _Bool c1239 = ((r1237 == r1238)) ? 1 : 0;
    if (c1239) {
        unsigned long t1240 = t1236->_M_string_length;
        unsigned long c1241 = 15;
        _Bool c1242 = ((t1240 > c1241)) ? 1 : 0;
        if (c1242) {
          __builtin_unreachable();
        }
      _Bool c1243 = 1;
      __retval1235 = c1243;
      _Bool t1244 = __retval1235;
      return t1244;
    }
  _Bool c1245 = 0;
  __retval1235 = c1245;
  _Bool t1246 = __retval1235;
  return t1246;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1247, char* v1248, unsigned long v1249) {
bb1250:
  struct std____new_allocator_char_* this1251;
  char* __p1252;
  unsigned long __n1253;
  this1251 = v1247;
  __p1252 = v1248;
  __n1253 = v1249;
  struct std____new_allocator_char_* t1254 = this1251;
    unsigned long c1255 = 1;
    unsigned long c1256 = 16;
    _Bool c1257 = ((c1255 > c1256)) ? 1 : 0;
    if (c1257) {
      char* t1258 = __p1252;
      void* cast1259 = (void*)t1258;
      unsigned long t1260 = __n1253;
      unsigned long c1261 = 1;
      unsigned long b1262 = t1260 * c1261;
      unsigned long c1263 = 1;
      operator_delete_3(cast1259, b1262, c1263);
      return;
    }
  char* t1264 = __p1252;
  void* cast1265 = (void*)t1264;
  unsigned long t1266 = __n1253;
  unsigned long c1267 = 1;
  unsigned long b1268 = t1266 * c1267;
  operator_delete_2(cast1265, b1268);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1269, char* v1270, unsigned long v1271) {
bb1272:
  struct std__allocator_char_* this1273;
  char* __p1274;
  unsigned long __n1275;
  this1273 = v1269;
  __p1274 = v1270;
  __n1275 = v1271;
  struct std__allocator_char_* t1276 = this1273;
    _Bool r1277 = std____is_constant_evaluated();
    if (r1277) {
      char* t1278 = __p1274;
      void* cast1279 = (void*)t1278;
      operator_delete(cast1279);
      return;
    }
  struct std____new_allocator_char_* base1280 = (struct std____new_allocator_char_*)((char *)t1276 + 0);
  char* t1281 = __p1274;
  unsigned long t1282 = __n1275;
  std____new_allocator_char___deallocate(base1280, t1281, t1282);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1283, char* v1284, unsigned long v1285) {
bb1286:
  struct std__allocator_char_* __a1287;
  char* __p1288;
  unsigned long __n1289;
  __a1287 = v1283;
  __p1288 = v1284;
  __n1289 = v1285;
  struct std__allocator_char_* t1290 = __a1287;
  char* t1291 = __p1288;
  unsigned long t1292 = __n1289;
  std__allocator_char___deallocate(t1290, t1291, t1292);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1293, unsigned long v1294) {
bb1295:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1296;
  unsigned long __size1297;
  this1296 = v1293;
  __size1297 = v1294;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1298 = this1296;
  struct std__allocator_char_* r1299 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1298);
  char* r1300 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1298);
  unsigned long t1301 = __size1297;
  unsigned long c1302 = 1;
  unsigned long b1303 = t1301 + c1302;
  std__allocator_traits_std__allocator_char_____deallocate(r1299, r1300, b1303);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1304) {
bb1305:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1306;
  this1306 = v1304;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1307 = this1306;
    _Bool r1308 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1307);
    _Bool u1309 = !r1308;
    if (u1309) {
      unsigned long t1310 = t1307->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1307, t1310);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1311, char* v1312, struct std__allocator_char_* v1313) {
bb1314:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1315;
  char* __dat1316;
  struct std__allocator_char_* __a1317;
  this1315 = v1311;
  __dat1316 = v1312;
  __a1317 = v1313;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1318 = this1315;
  struct std__allocator_char_* base1319 = (struct std__allocator_char_*)((char *)t1318 + 0);
  struct std__allocator_char_* t1320 = __a1317;
  std__allocator_char___allocator(base1319, t1320);
    char* t1321 = __dat1316;
    t1318->_M_p = t1321;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1322, unsigned long v1323, unsigned long v1324) {
bb1325:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1326;
  unsigned long __pos1327;
  unsigned long __off1328;
  unsigned long __retval1329;
  _Bool __testoff1330;
  this1326 = v1322;
  __pos1327 = v1323;
  __off1328 = v1324;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1331 = this1326;
  unsigned long t1332 = __off1328;
  unsigned long r1333 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1331);
  unsigned long t1334 = __pos1327;
  unsigned long b1335 = r1333 - t1334;
  _Bool c1336 = ((t1332 < b1335)) ? 1 : 0;
  __testoff1330 = c1336;
  _Bool t1337 = __testoff1330;
  unsigned long ternary1338;
  if (t1337) {
    unsigned long t1339 = __off1328;
    ternary1338 = (unsigned long)t1339;
  } else {
    unsigned long r1340 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1331);
    unsigned long t1341 = __pos1327;
    unsigned long b1342 = r1340 - t1341;
    ternary1338 = (unsigned long)b1342;
  }
  __retval1329 = ternary1338;
  unsigned long t1343 = __retval1329;
  return t1343;
}

