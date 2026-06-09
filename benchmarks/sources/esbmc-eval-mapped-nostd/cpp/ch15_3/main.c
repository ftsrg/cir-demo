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

char _str[29] = "The airplane landed on time.";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[50] = "basic_string: construction from null is not valid";
char _str_2[24] = "basic_string::_M_create";
char _str_3[21] = "basic_string::substr";
char _str_4[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_5[27] = "basic_string::basic_string";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, unsigned long p2, unsigned long p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
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
        char* cast20 = (char*)&(_str_1);
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v53) {
bb54:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this55;
  unsigned long __retval56;
  unsigned long __sz57;
  this55 = v53;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t58 = this55;
  unsigned long t59 = t58->_M_string_length;
  __sz57 = t59;
    unsigned long t60 = __sz57;
    unsigned long r61 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t58);
    _Bool c62 = ((t60 > r61)) ? 1 : 0;
    if (c62) {
      __builtin_unreachable();
    }
  unsigned long t63 = __sz57;
  __retval56 = t63;
  unsigned long t64 = __retval56;
  return t64;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v65, unsigned long v66, char* v67) {
bb68:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this69;
  unsigned long __pos70;
  char* __s71;
  unsigned long __retval72;
  this69 = v65;
  __pos70 = v66;
  __s71 = v67;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t73 = this69;
    unsigned long t74 = __pos70;
    unsigned long r75 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t73);
    _Bool c76 = ((t74 > r75)) ? 1 : 0;
    if (c76) {
      char* cast77 = (char*)&(_str_4);
      char* t78 = __s71;
      unsigned long t79 = __pos70;
      unsigned long r80 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t73);
      std____throw_out_of_range_fmt(cast77, t78, t79, r80);
    }
  unsigned long t81 = __pos70;
  __retval72 = t81;
  unsigned long t82 = __retval72;
  return t82;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_mm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v83, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v84, unsigned long v85, unsigned long v86) {
bb87:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this88;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str89;
  unsigned long __pos90;
  unsigned long __n91;
  struct std__allocator_char_ ref_tmp092;
  char* __start93;
  struct std__forward_iterator_tag agg_tmp094;
  this88 = v83;
  __str89 = v84;
  __pos90 = v85;
  __n91 = v86;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t95 = this88;
  char* r96 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t95);
  std__allocator_char___allocator_2(&ref_tmp092);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t95->_M_dataplus, r96, &ref_tmp092);
  {
    std__allocator_char____allocator(&ref_tmp092);
  }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t97 = __str89;
    char* r98 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t97);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t99 = __str89;
    unsigned long t100 = __pos90;
    char* cast101 = (char*)&(_str_5);
    unsigned long r102 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t99, t100, cast101);
    char* ptr103 = &(r98)[r102];
    __start93 = ptr103;
    char* t104 = __start93;
    char* t105 = __start93;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t106 = __str89;
    unsigned long t107 = __pos90;
    unsigned long t108 = __n91;
    unsigned long r109 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t106, t107, t108);
    char* ptr110 = &(t105)[r109];
    struct std__forward_iterator_tag t111 = agg_tmp094;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t95, t104, ptr110, t111);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6substrEmm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v112, unsigned long v113, unsigned long v114) {
bb115:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this116;
  unsigned long __pos117;
  unsigned long __n118;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval119;
  this116 = v112;
  __pos117 = v113;
  __n118 = v114;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t120 = this116;
  unsigned long t121 = __pos117;
  char* cast122 = (char*)&(_str_3);
  unsigned long r123 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t120, t121, cast122);
  unsigned long t124 = __n118;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval119, t120, r123, t124);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t125 = __retval119;
  return t125;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v126, void* v127) {
bb128:
  struct std__basic_ostream_char__std__char_traits_char__* this129;
  void* __pf130;
  struct std__basic_ostream_char__std__char_traits_char__* __retval131;
  this129 = v126;
  __pf130 = v127;
  struct std__basic_ostream_char__std__char_traits_char__* t132 = this129;
  void* t133 = __pf130;
  struct std__basic_ostream_char__std__char_traits_char__* r134 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t133)(t132);
  __retval131 = r134;
  struct std__basic_ostream_char__std__char_traits_char__* t135 = __retval131;
  return t135;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v136) {
bb137:
  struct std__basic_ostream_char__std__char_traits_char__* __os138;
  struct std__basic_ostream_char__std__char_traits_char__* __retval139;
  __os138 = v136;
  struct std__basic_ostream_char__std__char_traits_char__* t140 = __os138;
  struct std__basic_ostream_char__std__char_traits_char__* r141 = std__ostream__flush(t140);
  __retval139 = r141;
  struct std__basic_ostream_char__std__char_traits_char__* t142 = __retval139;
  return t142;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v143) {
bb144:
  struct std__ctype_char_* __f145;
  struct std__ctype_char_* __retval146;
  __f145 = v143;
    struct std__ctype_char_* t147 = __f145;
    _Bool cast148 = (_Bool)t147;
    _Bool u149 = !cast148;
    if (u149) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t150 = __f145;
  __retval146 = t150;
  struct std__ctype_char_* t151 = __retval146;
  return t151;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v152, char v153) {
bb154:
  struct std__ctype_char_* this155;
  char __c156;
  char __retval157;
  this155 = v152;
  __c156 = v153;
  struct std__ctype_char_* t158 = this155;
    char t159 = t158->_M_widen_ok;
    _Bool cast160 = (_Bool)t159;
    if (cast160) {
      char t161 = __c156;
      unsigned char cast162 = (unsigned char)t161;
      unsigned long cast163 = (unsigned long)cast162;
      char t164 = t158->_M_widen[cast163];
      __retval157 = t164;
      char t165 = __retval157;
      return t165;
    }
  std__ctype_char____M_widen_init___const(t158);
  char t166 = __c156;
  void** v167 = (void**)t158;
  void* v168 = *((void**)v167);
  char vcall171 = (char)__VERIFIER_virtual_call_char_char(t158, 6, t166);
  __retval157 = vcall171;
  char t172 = __retval157;
  return t172;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v173, char v174) {
bb175:
  struct std__basic_ios_char__std__char_traits_char__* this176;
  char __c177;
  char __retval178;
  this176 = v173;
  __c177 = v174;
  struct std__basic_ios_char__std__char_traits_char__* t179 = this176;
  struct std__ctype_char_* t180 = t179->_M_ctype;
  struct std__ctype_char_* r181 = std__ctype_char__const__std____check_facet_std__ctype_char___(t180);
  char t182 = __c177;
  char r183 = std__ctype_char___widen_char__const(r181, t182);
  __retval178 = r183;
  char t184 = __retval178;
  return t184;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v185) {
bb186:
  struct std__basic_ostream_char__std__char_traits_char__* __os187;
  struct std__basic_ostream_char__std__char_traits_char__* __retval188;
  __os187 = v185;
  struct std__basic_ostream_char__std__char_traits_char__* t189 = __os187;
  struct std__basic_ostream_char__std__char_traits_char__* t190 = __os187;
  void** v191 = (void**)t190;
  void* v192 = *((void**)v191);
  unsigned char* cast193 = (unsigned char*)v192;
  long c194 = -24;
  unsigned char* ptr195 = &(cast193)[c194];
  long* cast196 = (long*)ptr195;
  long t197 = *cast196;
  unsigned char* cast198 = (unsigned char*)t190;
  unsigned char* ptr199 = &(cast198)[t197];
  struct std__basic_ostream_char__std__char_traits_char__* cast200 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr199;
  struct std__basic_ios_char__std__char_traits_char__* cast201 = (struct std__basic_ios_char__std__char_traits_char__*)cast200;
  char c202 = 10;
  char r203 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast201, c202);
  struct std__basic_ostream_char__std__char_traits_char__* r204 = std__ostream__put(t189, r203);
  struct std__basic_ostream_char__std__char_traits_char__* r205 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r204);
  __retval188 = r205;
  struct std__basic_ostream_char__std__char_traits_char__* t206 = __retval188;
  return t206;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v207) {
bb208:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this209;
  this209 = v207;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t210 = this209;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t210);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t210->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb211:
  int __retval212;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string1213;
  struct std__allocator_char_ ref_tmp0214;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp1215;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup216;
  int c217 = 0;
  __retval212 = c217;
  char* cast218 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0214);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&string1213, cast218, &ref_tmp0214);
  {
    std__allocator_char____allocator(&ref_tmp0214);
  }
    unsigned long c219 = 7;
    unsigned long c220 = 5;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r221 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&string1213, c219, c220);
    ref_tmp1215 = r221;
      struct std__basic_ostream_char__std__char_traits_char__* r222 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &ref_tmp1215);
      struct std__basic_ostream_char__std__char_traits_char__* r223 = std__ostream__operator___std__ostream_____(r222, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      tmp_exprcleanup216 = r223;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1215);
    }
    struct std__basic_ostream_char__std__char_traits_char__* t224 = tmp_exprcleanup216;
    int c225 = 0;
    __retval212 = c225;
    int t226 = __retval212;
    int ret_val227 = t226;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string1213);
    }
    return ret_val227;
  int t228 = __retval212;
  return t228;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v229) {
bb230:
  struct std____new_allocator_char_* this231;
  this231 = v229;
  struct std____new_allocator_char_* t232 = this231;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v233) {
bb234:
  char* __r235;
  char* __retval236;
  __r235 = v233;
  char* t237 = __r235;
  __retval236 = t237;
  char* t238 = __retval236;
  return t238;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v239) {
bb240:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this241;
  char* __retval242;
  this241 = v239;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t243 = this241;
  char* cast244 = (char*)&(t243->field2._M_local_buf);
  char* r245 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast244);
  __retval242 = r245;
  char* t246 = __retval242;
  return t246;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v247, char* v248, struct std__allocator_char_* v249) {
bb250:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this251;
  char* __dat252;
  struct std__allocator_char_* __a253;
  this251 = v247;
  __dat252 = v248;
  __a253 = v249;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t254 = this251;
  struct std__allocator_char_* base255 = (struct std__allocator_char_*)((char *)t254 + 0);
  struct std__allocator_char_* t256 = __a253;
  std__allocator_char___allocator(base255, t256);
    char* t257 = __dat252;
    t254->_M_p = t257;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb258:
  _Bool __retval259;
    _Bool c260 = 0;
    __retval259 = c260;
    _Bool t261 = __retval259;
    return t261;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v262, char* v263) {
bb264:
  char* __c1265;
  char* __c2266;
  _Bool __retval267;
  __c1265 = v262;
  __c2266 = v263;
  char* t268 = __c1265;
  char t269 = *t268;
  int cast270 = (int)t269;
  char* t271 = __c2266;
  char t272 = *t271;
  int cast273 = (int)t272;
  _Bool c274 = ((cast270 == cast273)) ? 1 : 0;
  __retval267 = c274;
  _Bool t275 = __retval267;
  return t275;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v276) {
bb277:
  char* __p278;
  unsigned long __retval279;
  unsigned long __i280;
  __p278 = v276;
  unsigned long c281 = 0;
  __i280 = c281;
    char ref_tmp0282;
    while (1) {
      unsigned long t283 = __i280;
      char* t284 = __p278;
      char* ptr285 = &(t284)[t283];
      char c286 = 0;
      ref_tmp0282 = c286;
      _Bool r287 = __gnu_cxx__char_traits_char___eq(ptr285, &ref_tmp0282);
      _Bool u288 = !r287;
      if (!u288) break;
      unsigned long t289 = __i280;
      unsigned long u290 = t289 + 1;
      __i280 = u290;
    }
  unsigned long t291 = __i280;
  __retval279 = t291;
  unsigned long t292 = __retval279;
  return t292;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v293) {
bb294:
  char* __s295;
  unsigned long __retval296;
  __s295 = v293;
    _Bool r297 = std____is_constant_evaluated();
    if (r297) {
      char* t298 = __s295;
      unsigned long r299 = __gnu_cxx__char_traits_char___length(t298);
      __retval296 = r299;
      unsigned long t300 = __retval296;
      return t300;
    }
  char* t301 = __s295;
  unsigned long r302 = strlen(t301);
  __retval296 = r302;
  unsigned long t303 = __retval296;
  return t303;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v304, char* v305, struct std__random_access_iterator_tag v306) {
bb307:
  char* __first308;
  char* __last309;
  struct std__random_access_iterator_tag unnamed310;
  long __retval311;
  __first308 = v304;
  __last309 = v305;
  unnamed310 = v306;
  char* t312 = __last309;
  char* t313 = __first308;
  long diff314 = t312 - t313;
  __retval311 = diff314;
  long t315 = __retval311;
  return t315;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v316) {
bb317:
  char** unnamed318;
  struct std__random_access_iterator_tag __retval319;
  unnamed318 = v316;
  struct std__random_access_iterator_tag t320 = __retval319;
  return t320;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v321, char* v322) {
bb323:
  char* __first324;
  char* __last325;
  long __retval326;
  struct std__random_access_iterator_tag agg_tmp0327;
  __first324 = v321;
  __last325 = v322;
  char* t328 = __first324;
  char* t329 = __last325;
  struct std__random_access_iterator_tag r330 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first324);
  agg_tmp0327 = r330;
  struct std__random_access_iterator_tag t331 = agg_tmp0327;
  long r332 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t328, t329, t331);
  __retval326 = r332;
  long t333 = __retval326;
  return t333;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v334, char* v335) {
bb336:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this337;
  char* __p338;
  this337 = v334;
  __p338 = v335;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t339 = this337;
  char* t340 = __p338;
  t339->_M_dataplus._M_p = t340;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v341) {
bb342:
  struct std__allocator_char_* __a343;
  unsigned long __retval344;
  __a343 = v341;
  unsigned long c345 = -1;
  unsigned long c346 = 1;
  unsigned long b347 = c345 / c346;
  __retval344 = b347;
  unsigned long t348 = __retval344;
  return t348;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v349) {
bb350:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this351;
  struct std__allocator_char_* __retval352;
  this351 = v349;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t353 = this351;
  struct std__allocator_char_* base354 = (struct std__allocator_char_*)((char *)&(t353->_M_dataplus) + 0);
  __retval352 = base354;
  struct std__allocator_char_* t355 = __retval352;
  return t355;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v356, unsigned long* v357) {
bb358:
  unsigned long* __a359;
  unsigned long* __b360;
  unsigned long* __retval361;
  __a359 = v356;
  __b360 = v357;
    unsigned long* t362 = __b360;
    unsigned long t363 = *t362;
    unsigned long* t364 = __a359;
    unsigned long t365 = *t364;
    _Bool c366 = ((t363 < t365)) ? 1 : 0;
    if (c366) {
      unsigned long* t367 = __b360;
      __retval361 = t367;
      unsigned long* t368 = __retval361;
      return t368;
    }
  unsigned long* t369 = __a359;
  __retval361 = t369;
  unsigned long* t370 = __retval361;
  return t370;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v371) {
bb372:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this373;
  unsigned long __retval374;
  unsigned long __diffmax375;
  unsigned long __allocmax376;
  this373 = v371;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t377 = this373;
  unsigned long c378 = 9223372036854775807;
  __diffmax375 = c378;
  struct std__allocator_char_* r379 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t377);
  unsigned long r380 = std__allocator_traits_std__allocator_char_____max_size(r379);
  __allocmax376 = r380;
  unsigned long* r381 = unsigned_long_const__std__min_unsigned_long_(&__diffmax375, &__allocmax376);
  unsigned long t382 = *r381;
  unsigned long c383 = 1;
  unsigned long b384 = t382 - c383;
  __retval374 = b384;
  unsigned long t385 = __retval374;
  return t385;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v386) {
bb387:
  struct std____new_allocator_char_* this388;
  unsigned long __retval389;
  this388 = v386;
  struct std____new_allocator_char_* t390 = this388;
  unsigned long c391 = 9223372036854775807;
  unsigned long c392 = 1;
  unsigned long b393 = c391 / c392;
  __retval389 = b393;
  unsigned long t394 = __retval389;
  return t394;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v395, unsigned long v396, void* v397) {
bb398:
  struct std____new_allocator_char_* this399;
  unsigned long __n400;
  void* unnamed401;
  char* __retval402;
  this399 = v395;
  __n400 = v396;
  unnamed401 = v397;
  struct std____new_allocator_char_* t403 = this399;
    unsigned long t404 = __n400;
    unsigned long r405 = std____new_allocator_char____M_max_size___const(t403);
    _Bool c406 = ((t404 > r405)) ? 1 : 0;
    if (c406) {
        unsigned long t407 = __n400;
        unsigned long c408 = -1;
        unsigned long c409 = 1;
        unsigned long b410 = c408 / c409;
        _Bool c411 = ((t407 > b410)) ? 1 : 0;
        if (c411) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c412 = 1;
    unsigned long c413 = 16;
    _Bool c414 = ((c412 > c413)) ? 1 : 0;
    if (c414) {
      unsigned long __al415;
      unsigned long c416 = 1;
      __al415 = c416;
      unsigned long t417 = __n400;
      unsigned long c418 = 1;
      unsigned long b419 = t417 * c418;
      unsigned long t420 = __al415;
      void* r421 = operator_new_2(b419, t420);
      char* cast422 = (char*)r421;
      __retval402 = cast422;
      char* t423 = __retval402;
      return t423;
    }
  unsigned long t424 = __n400;
  unsigned long c425 = 1;
  unsigned long b426 = t424 * c425;
  void* r427 = operator_new(b426);
  char* cast428 = (char*)r427;
  __retval402 = cast428;
  char* t429 = __retval402;
  return t429;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v430, unsigned long v431) {
bb432:
  struct std__allocator_char_* this433;
  unsigned long __n434;
  char* __retval435;
  this433 = v430;
  __n434 = v431;
  struct std__allocator_char_* t436 = this433;
    _Bool r437 = std____is_constant_evaluated();
    if (r437) {
        unsigned long t438 = __n434;
        unsigned long c439 = 1;
        unsigned long ovr440;
        _Bool ovf441 = __builtin_mul_overflow(t438, c439, &ovr440);
        __n434 = ovr440;
        if (ovf441) {
          std____throw_bad_array_new_length();
        }
      unsigned long t442 = __n434;
      void* r443 = operator_new(t442);
      char* cast444 = (char*)r443;
      __retval435 = cast444;
      char* t445 = __retval435;
      return t445;
    }
  struct std____new_allocator_char_* base446 = (struct std____new_allocator_char_*)((char *)t436 + 0);
  unsigned long t447 = __n434;
  void* c448 = ((void*)0);
  char* r449 = std____new_allocator_char___allocate(base446, t447, c448);
  __retval435 = r449;
  char* t450 = __retval435;
  return t450;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v451, unsigned long v452) {
bb453:
  struct std__allocator_char_* __a454;
  unsigned long __n455;
  char* __retval456;
  __a454 = v451;
  __n455 = v452;
  struct std__allocator_char_* t457 = __a454;
  unsigned long t458 = __n455;
  char* r459 = std__allocator_char___allocate(t457, t458);
  __retval456 = r459;
  char* t460 = __retval456;
  return t460;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v461, unsigned long v462) {
bb463:
  struct std__allocator_char_* __a464;
  unsigned long __n465;
  char* __retval466;
  char* __p467;
  __a464 = v461;
  __n465 = v462;
  struct std__allocator_char_* t468 = __a464;
  unsigned long t469 = __n465;
  char* r470 = std__allocator_traits_std__allocator_char_____allocate(t468, t469);
  __p467 = r470;
  char* t471 = __p467;
  __retval466 = t471;
  char* t472 = __retval466;
  return t472;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v473) {
bb474:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this475;
  struct std__allocator_char_* __retval476;
  this475 = v473;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t477 = this475;
  struct std__allocator_char_* base478 = (struct std__allocator_char_*)((char *)&(t477->_M_dataplus) + 0);
  __retval476 = base478;
  struct std__allocator_char_* t479 = __retval476;
  return t479;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v480, unsigned long* v481, unsigned long v482) {
bb483:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this484;
  unsigned long* __capacity485;
  unsigned long __old_capacity486;
  char* __retval487;
  this484 = v480;
  __capacity485 = v481;
  __old_capacity486 = v482;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t488 = this484;
    unsigned long* t489 = __capacity485;
    unsigned long t490 = *t489;
    unsigned long r491 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t488);
    _Bool c492 = ((t490 > r491)) ? 1 : 0;
    if (c492) {
      char* cast493 = (char*)&(_str_2);
      std____throw_length_error(cast493);
    }
    unsigned long* t494 = __capacity485;
    unsigned long t495 = *t494;
    unsigned long t496 = __old_capacity486;
    _Bool c497 = ((t495 > t496)) ? 1 : 0;
    _Bool ternary498;
    if (c497) {
      unsigned long* t499 = __capacity485;
      unsigned long t500 = *t499;
      unsigned long c501 = 2;
      unsigned long t502 = __old_capacity486;
      unsigned long b503 = c501 * t502;
      _Bool c504 = ((t500 < b503)) ? 1 : 0;
      ternary498 = (_Bool)c504;
    } else {
      _Bool c505 = 0;
      ternary498 = (_Bool)c505;
    }
    if (ternary498) {
      unsigned long c506 = 2;
      unsigned long t507 = __old_capacity486;
      unsigned long b508 = c506 * t507;
      unsigned long* t509 = __capacity485;
      *t509 = b508;
        unsigned long* t510 = __capacity485;
        unsigned long t511 = *t510;
        unsigned long r512 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t488);
        _Bool c513 = ((t511 > r512)) ? 1 : 0;
        if (c513) {
          unsigned long r514 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t488);
          unsigned long* t515 = __capacity485;
          *t515 = r514;
        }
    }
  struct std__allocator_char_* r516 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t488);
  unsigned long* t517 = __capacity485;
  unsigned long t518 = *t517;
  unsigned long c519 = 1;
  unsigned long b520 = t518 + c519;
  char* r521 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r516, b520);
  __retval487 = r521;
  char* t522 = __retval487;
  return t522;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v523, unsigned long v524) {
bb525:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this526;
  unsigned long __capacity527;
  this526 = v523;
  __capacity527 = v524;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t528 = this526;
  unsigned long t529 = __capacity527;
  t528->field2._M_allocated_capacity = t529;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb530:
  _Bool __retval531;
    _Bool c532 = 0;
    __retval531 = c532;
    _Bool t533 = __retval531;
    return t533;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v534) {
bb535:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this536;
  this536 = v534;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t537 = this536;
    _Bool r538 = std__is_constant_evaluated();
    if (r538) {
        unsigned long __i539;
        unsigned long c540 = 0;
        __i539 = c540;
        while (1) {
          unsigned long t542 = __i539;
          unsigned long c543 = 15;
          _Bool c544 = ((t542 <= c543)) ? 1 : 0;
          if (!c544) break;
          char c545 = 0;
          unsigned long t546 = __i539;
          t537->field2._M_local_buf[t546] = c545;
        for_step541: ;
          unsigned long t547 = __i539;
          unsigned long u548 = t547 + 1;
          __i539 = u548;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v549, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v550) {
bb551:
  struct _Guard* this552;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s553;
  this552 = v549;
  __s553 = v550;
  struct _Guard* t554 = this552;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t555 = __s553;
  t554->_M_guarded = t555;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v556, char* v557) {
bb558:
  char* __location559;
  char* __args560;
  char* __retval561;
  void* __loc562;
  __location559 = v556;
  __args560 = v557;
  char* t563 = __location559;
  void* cast564 = (void*)t563;
  __loc562 = cast564;
    void* t565 = __loc562;
    char* cast566 = (char*)t565;
    char* t567 = __args560;
    char t568 = *t567;
    *cast566 = t568;
    __retval561 = cast566;
    char* t569 = __retval561;
    return t569;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v570, char* v571) {
bb572:
  char* __c1573;
  char* __c2574;
  __c1573 = v570;
  __c2574 = v571;
    _Bool r575 = std____is_constant_evaluated();
    if (r575) {
      char* t576 = __c1573;
      char* t577 = __c2574;
      char* r578 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t576, t577);
    } else {
      char* t579 = __c2574;
      char t580 = *t579;
      char* t581 = __c1573;
      *t581 = t580;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v582, char* v583, unsigned long v584) {
bb585:
  char* __s1586;
  char* __s2587;
  unsigned long __n588;
  char* __retval589;
  __s1586 = v582;
  __s2587 = v583;
  __n588 = v584;
    unsigned long t590 = __n588;
    unsigned long c591 = 0;
    _Bool c592 = ((t590 == c591)) ? 1 : 0;
    if (c592) {
      char* t593 = __s1586;
      __retval589 = t593;
      char* t594 = __retval589;
      return t594;
    }
    _Bool r595 = std____is_constant_evaluated();
    if (r595) {
        unsigned long __i596;
        unsigned long c597 = 0;
        __i596 = c597;
        while (1) {
          unsigned long t599 = __i596;
          unsigned long t600 = __n588;
          _Bool c601 = ((t599 < t600)) ? 1 : 0;
          if (!c601) break;
          char* t602 = __s1586;
          unsigned long t603 = __i596;
          char* ptr604 = &(t602)[t603];
          unsigned long t605 = __i596;
          char* t606 = __s2587;
          char* ptr607 = &(t606)[t605];
          char* r608 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr604, ptr607);
        for_step598: ;
          unsigned long t609 = __i596;
          unsigned long u610 = t609 + 1;
          __i596 = u610;
        }
      char* t611 = __s1586;
      __retval589 = t611;
      char* t612 = __retval589;
      return t612;
    }
  char* t613 = __s1586;
  void* cast614 = (void*)t613;
  char* t615 = __s2587;
  void* cast616 = (void*)t615;
  unsigned long t617 = __n588;
  unsigned long c618 = 1;
  unsigned long b619 = t617 * c618;
  void* r620 = memcpy(cast614, cast616, b619);
  char* t621 = __s1586;
  __retval589 = t621;
  char* t622 = __retval589;
  return t622;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v623, char* v624, unsigned long v625) {
bb626:
  char* __s1627;
  char* __s2628;
  unsigned long __n629;
  char* __retval630;
  __s1627 = v623;
  __s2628 = v624;
  __n629 = v625;
    unsigned long t631 = __n629;
    unsigned long c632 = 0;
    _Bool c633 = ((t631 == c632)) ? 1 : 0;
    if (c633) {
      char* t634 = __s1627;
      __retval630 = t634;
      char* t635 = __retval630;
      return t635;
    }
    _Bool r636 = std____is_constant_evaluated();
    if (r636) {
      char* t637 = __s1627;
      char* t638 = __s2628;
      unsigned long t639 = __n629;
      char* r640 = __gnu_cxx__char_traits_char___copy(t637, t638, t639);
      __retval630 = r640;
      char* t641 = __retval630;
      return t641;
    }
  char* t642 = __s1627;
  void* cast643 = (void*)t642;
  char* t644 = __s2628;
  void* cast645 = (void*)t644;
  unsigned long t646 = __n629;
  void* r647 = memcpy(cast643, cast645, t646);
  char* cast648 = (char*)r647;
  __retval630 = cast648;
  char* t649 = __retval630;
  return t649;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v650, char* v651, unsigned long v652) {
bb653:
  char* __d654;
  char* __s655;
  unsigned long __n656;
  __d654 = v650;
  __s655 = v651;
  __n656 = v652;
    unsigned long t657 = __n656;
    unsigned long c658 = 1;
    _Bool c659 = ((t657 == c658)) ? 1 : 0;
    if (c659) {
      char* t660 = __d654;
      char* t661 = __s655;
      std__char_traits_char___assign(t660, t661);
    } else {
      char* t662 = __d654;
      char* t663 = __s655;
      unsigned long t664 = __n656;
      char* r665 = std__char_traits_char___copy(t662, t663, t664);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v666) {
bb667:
  char* __it668;
  char* __retval669;
  __it668 = v666;
  char* t670 = __it668;
  __retval669 = t670;
  char* t671 = __retval669;
  return t671;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v672, char* v673, char* v674) {
bb675:
  char* __p676;
  char* __k1677;
  char* __k2678;
  __p676 = v672;
  __k1677 = v673;
  __k2678 = v674;
    char* t679 = __p676;
    char* t680 = __k1677;
    char* r681 = char_const__std____niter_base_char_const__(t680);
    char* t682 = __k2678;
    char* t683 = __k1677;
    long diff684 = t682 - t683;
    unsigned long cast685 = (unsigned long)diff684;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t679, r681, cast685);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v686) {
bb687:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this688;
  char* __retval689;
  this688 = v686;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t690 = this688;
  char* t691 = t690->_M_dataplus._M_p;
  __retval689 = t691;
  char* t692 = __retval689;
  return t692;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v693, unsigned long v694) {
bb695:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this696;
  unsigned long __length697;
  this696 = v693;
  __length697 = v694;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t698 = this696;
  unsigned long t699 = __length697;
  t698->_M_string_length = t699;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v700, unsigned long v701) {
bb702:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this703;
  unsigned long __n704;
  char ref_tmp0705;
  this703 = v700;
  __n704 = v701;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t706 = this703;
  unsigned long t707 = __n704;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t706, t707);
  unsigned long t708 = __n704;
  char* r709 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t706);
  char* ptr710 = &(r709)[t708];
  char c711 = 0;
  ref_tmp0705 = c711;
  std__char_traits_char___assign(ptr710, &ref_tmp0705);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v712) {
bb713:
  struct _Guard* this714;
  this714 = v712;
  struct _Guard* t715 = this714;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t716 = t715->_M_guarded;
    _Bool cast717 = (_Bool)t716;
    if (cast717) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t718 = t715->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t718);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v719, char* v720, char* v721, struct std__forward_iterator_tag v722) {
bb723:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this724;
  char* __beg725;
  char* __end726;
  struct std__forward_iterator_tag unnamed727;
  unsigned long __dnew728;
  struct _Guard __guard729;
  this724 = v719;
  __beg725 = v720;
  __end726 = v721;
  unnamed727 = v722;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t730 = this724;
  char* t731 = __beg725;
  char* t732 = __end726;
  long r733 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t731, t732);
  unsigned long cast734 = (unsigned long)r733;
  __dnew728 = cast734;
    unsigned long t735 = __dnew728;
    unsigned long c736 = 15;
    _Bool c737 = ((t735 > c736)) ? 1 : 0;
    if (c737) {
      unsigned long c738 = 0;
      char* r739 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t730, &__dnew728, c738);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t730, r739);
      unsigned long t740 = __dnew728;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t730, t740);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t730);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard729, t730);
    char* r741 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t730);
    char* t742 = __beg725;
    char* t743 = __end726;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r741, t742, t743);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c744 = ((void*)0);
    __guard729._M_guarded = c744;
    unsigned long t745 = __dnew728;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t730, t745);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard729);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v746) {
bb747:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this748;
  this748 = v746;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t749 = this748;
  {
    struct std__allocator_char_* base750 = (struct std__allocator_char_*)((char *)t749 + 0);
    std__allocator_char____allocator(base750);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v751, struct std____new_allocator_char_* v752) {
bb753:
  struct std____new_allocator_char_* this754;
  struct std____new_allocator_char_* unnamed755;
  this754 = v751;
  unnamed755 = v752;
  struct std____new_allocator_char_* t756 = this754;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v757, struct std__allocator_char_* v758) {
bb759:
  struct std__allocator_char_* this760;
  struct std__allocator_char_* __a761;
  this760 = v757;
  __a761 = v758;
  struct std__allocator_char_* t762 = this760;
  struct std____new_allocator_char_* base763 = (struct std____new_allocator_char_*)((char *)t762 + 0);
  struct std__allocator_char_* t764 = __a761;
  struct std____new_allocator_char_* base765 = (struct std____new_allocator_char_*)((char *)t764 + 0);
  std____new_allocator_char_____new_allocator(base763, base765);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v766) {
bb767:
  char* __r768;
  char* __retval769;
  __r768 = v766;
  char* t770 = __r768;
  __retval769 = t770;
  char* t771 = __retval769;
  return t771;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v772) {
bb773:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this774;
  char* __retval775;
  this774 = v772;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t776 = this774;
  char* cast777 = (char*)&(t776->field2._M_local_buf);
  char* r778 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast777);
  __retval775 = r778;
  char* t779 = __retval775;
  return t779;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v780) {
bb781:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this782;
  _Bool __retval783;
  this782 = v780;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t784 = this782;
    char* r785 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t784);
    char* r786 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t784);
    _Bool c787 = ((r785 == r786)) ? 1 : 0;
    if (c787) {
        unsigned long t788 = t784->_M_string_length;
        unsigned long c789 = 15;
        _Bool c790 = ((t788 > c789)) ? 1 : 0;
        if (c790) {
          __builtin_unreachable();
        }
      _Bool c791 = 1;
      __retval783 = c791;
      _Bool t792 = __retval783;
      return t792;
    }
  _Bool c793 = 0;
  __retval783 = c793;
  _Bool t794 = __retval783;
  return t794;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v795, char* v796, unsigned long v797) {
bb798:
  struct std____new_allocator_char_* this799;
  char* __p800;
  unsigned long __n801;
  this799 = v795;
  __p800 = v796;
  __n801 = v797;
  struct std____new_allocator_char_* t802 = this799;
    unsigned long c803 = 1;
    unsigned long c804 = 16;
    _Bool c805 = ((c803 > c804)) ? 1 : 0;
    if (c805) {
      char* t806 = __p800;
      void* cast807 = (void*)t806;
      unsigned long t808 = __n801;
      unsigned long c809 = 1;
      unsigned long b810 = t808 * c809;
      unsigned long c811 = 1;
      operator_delete_3(cast807, b810, c811);
      return;
    }
  char* t812 = __p800;
  void* cast813 = (void*)t812;
  unsigned long t814 = __n801;
  unsigned long c815 = 1;
  unsigned long b816 = t814 * c815;
  operator_delete_2(cast813, b816);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v817, char* v818, unsigned long v819) {
bb820:
  struct std__allocator_char_* this821;
  char* __p822;
  unsigned long __n823;
  this821 = v817;
  __p822 = v818;
  __n823 = v819;
  struct std__allocator_char_* t824 = this821;
    _Bool r825 = std____is_constant_evaluated();
    if (r825) {
      char* t826 = __p822;
      void* cast827 = (void*)t826;
      operator_delete(cast827);
      return;
    }
  struct std____new_allocator_char_* base828 = (struct std____new_allocator_char_*)((char *)t824 + 0);
  char* t829 = __p822;
  unsigned long t830 = __n823;
  std____new_allocator_char___deallocate(base828, t829, t830);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v831, char* v832, unsigned long v833) {
bb834:
  struct std__allocator_char_* __a835;
  char* __p836;
  unsigned long __n837;
  __a835 = v831;
  __p836 = v832;
  __n837 = v833;
  struct std__allocator_char_* t838 = __a835;
  char* t839 = __p836;
  unsigned long t840 = __n837;
  std__allocator_char___deallocate(t838, t839, t840);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v841, unsigned long v842) {
bb843:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this844;
  unsigned long __size845;
  this844 = v841;
  __size845 = v842;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t846 = this844;
  struct std__allocator_char_* r847 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t846);
  char* r848 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t846);
  unsigned long t849 = __size845;
  unsigned long c850 = 1;
  unsigned long b851 = t849 + c850;
  std__allocator_traits_std__allocator_char_____deallocate(r847, r848, b851);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v852) {
bb853:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this854;
  this854 = v852;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t855 = this854;
    _Bool r856 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t855);
    _Bool u857 = !r856;
    if (u857) {
      unsigned long t858 = t855->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t855, t858);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v859, char* v860, struct std__allocator_char_* v861) {
bb862:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this863;
  char* __dat864;
  struct std__allocator_char_* __a865;
  this863 = v859;
  __dat864 = v860;
  __a865 = v861;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t866 = this863;
  struct std__allocator_char_* base867 = (struct std__allocator_char_*)((char *)t866 + 0);
  struct std__allocator_char_* t868 = __a865;
  std__allocator_char___allocator(base867, t868);
    char* t869 = __dat864;
    t866->_M_p = t869;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v870, unsigned long v871, unsigned long v872) {
bb873:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this874;
  unsigned long __pos875;
  unsigned long __off876;
  unsigned long __retval877;
  _Bool __testoff878;
  this874 = v870;
  __pos875 = v871;
  __off876 = v872;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t879 = this874;
  unsigned long t880 = __off876;
  unsigned long r881 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t879);
  unsigned long t882 = __pos875;
  unsigned long b883 = r881 - t882;
  _Bool c884 = ((t880 < b883)) ? 1 : 0;
  __testoff878 = c884;
  _Bool t885 = __testoff878;
  unsigned long ternary886;
  if (t885) {
    unsigned long t887 = __off876;
    ternary886 = (unsigned long)t887;
  } else {
    unsigned long r888 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t879);
    unsigned long t889 = __pos875;
    unsigned long b890 = r888 - t889;
    ternary886 = (unsigned long)b890;
  }
  __retval877 = ternary886;
  unsigned long t891 = __retval877;
  return t891;
}

