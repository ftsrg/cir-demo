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
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[15] = "Test string...";
char _str_1[7] = "string";
char _str_2[16] = "aux == \"string\"";
char _str_3[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_copy_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[18] = "buffer contains: ";
char _str_5[2] = "\n";
char _str_6[50] = "basic_string: construction from null is not valid";
char _str_7[24] = "basic_string::_M_create";
char _str_8[19] = "basic_string::copy";
char _str_9[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____copy_char___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
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
        char* cast20 = (char*)&(_str_6);
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v32) {
bb33:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this34;
  unsigned long __retval35;
  unsigned long __sz36;
  this34 = v32;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t37 = this34;
  unsigned long t38 = t37->_M_string_length;
  __sz36 = t38;
    unsigned long t39 = __sz36;
    unsigned long r40 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t37);
    _Bool c41 = ((t39 > r40)) ? 1 : 0;
    if (c41) {
      __builtin_unreachable();
    }
  unsigned long t42 = __sz36;
  __retval35 = t42;
  unsigned long t43 = __retval35;
  return t43;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v44, unsigned long v45, char* v46) {
bb47:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this48;
  unsigned long __pos49;
  char* __s50;
  unsigned long __retval51;
  this48 = v44;
  __pos49 = v45;
  __s50 = v46;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t52 = this48;
    unsigned long t53 = __pos49;
    unsigned long r54 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t52);
    _Bool c55 = ((t53 > r54)) ? 1 : 0;
    if (c55) {
      char* cast56 = (char*)&(_str_9);
      char* t57 = __s50;
      unsigned long t58 = __pos49;
      unsigned long r59 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t52);
      std____throw_out_of_range_fmt(cast56, t57, t58, r59);
    }
  unsigned long t60 = __pos49;
  __retval51 = t60;
  unsigned long t61 = __retval51;
  return t61;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v62, unsigned long v63, unsigned long v64) {
bb65:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this66;
  unsigned long __pos67;
  unsigned long __off68;
  unsigned long __retval69;
  _Bool __testoff70;
  this66 = v62;
  __pos67 = v63;
  __off68 = v64;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t71 = this66;
  unsigned long t72 = __off68;
  unsigned long r73 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t71);
  unsigned long t74 = __pos67;
  unsigned long b75 = r73 - t74;
  _Bool c76 = ((t72 < b75)) ? 1 : 0;
  __testoff70 = c76;
  _Bool t77 = __testoff70;
  unsigned long ternary78;
  if (t77) {
    unsigned long t79 = __off68;
    ternary78 = (unsigned long)t79;
  } else {
    unsigned long r80 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t71);
    unsigned long t81 = __pos67;
    unsigned long b82 = r80 - t81;
    ternary78 = (unsigned long)b82;
  }
  __retval69 = ternary78;
  unsigned long t83 = __retval69;
  return t83;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4copyEPcmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____copy_char___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v84, char* v85, unsigned long v86, unsigned long v87) {
bb88:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this89;
  char* __s90;
  unsigned long __n91;
  unsigned long __pos92;
  unsigned long __retval93;
  this89 = v84;
  __s90 = v85;
  __n91 = v86;
  __pos92 = v87;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t94 = this89;
  unsigned long t95 = __pos92;
  char* cast96 = (char*)&(_str_8);
  unsigned long r97 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t94, t95, cast96);
  unsigned long t98 = __pos92;
  unsigned long t99 = __n91;
  unsigned long r100 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t94, t98, t99);
  __n91 = r100;
    unsigned long t101 = __n91;
    _Bool cast102 = (_Bool)t101;
    if (cast102) {
      char* t103 = __s90;
      char* r104 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t94);
      unsigned long t105 = __pos92;
      char* ptr106 = &(r104)[t105];
      unsigned long t107 = __n91;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t103, ptr106, t107);
    }
  unsigned long t108 = __n91;
  __retval93 = t108;
  unsigned long t109 = __retval93;
  return t109;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v110) {
bb111:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this112;
  struct std__allocator_char_ ref_tmp0113;
  this112 = v110;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t114 = this112;
  char* r115 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t114);
  std__allocator_char___allocator_2(&ref_tmp0113);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t114->_M_dataplus, r115, &ref_tmp0113);
  {
    std__allocator_char____allocator(&ref_tmp0113);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t114);
    unsigned long c116 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t114, c116);
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb117:
  _Bool __retval118;
  _Bool t119 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval118 = t119;
  _Bool t120 = __retval118;
  return t120;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v121, struct std____new_allocator_char_* v122) {
bb123:
  struct std____new_allocator_char_* this124;
  struct std____new_allocator_char_* unnamed125;
  struct std____new_allocator_char_* __retval126;
  this124 = v121;
  unnamed125 = v122;
  struct std____new_allocator_char_* t127 = this124;
  __retval126 = t127;
  struct std____new_allocator_char_* t128 = __retval126;
  return t128;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v129, struct std__allocator_char_* v130) {
bb131:
  struct std__allocator_char_* this132;
  struct std__allocator_char_* unnamed133;
  struct std__allocator_char_* __retval134;
  this132 = v129;
  unnamed133 = v130;
  struct std__allocator_char_* t135 = this132;
  struct std____new_allocator_char_* base136 = (struct std____new_allocator_char_*)((char *)t135 + 0);
  struct std__allocator_char_* t137 = unnamed133;
  struct std____new_allocator_char_* base138 = (struct std____new_allocator_char_*)((char *)t137 + 0);
  struct std____new_allocator_char_* r139 = std____new_allocator_char___operator_(base136, base138);
  __retval134 = t135;
  struct std__allocator_char_* t140 = __retval134;
  return t140;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v141, struct std__allocator_char_* v142) {
bb143:
  struct std__allocator_char_* __one144;
  struct std__allocator_char_* __two145;
  __one144 = v141;
  __two145 = v142;
    struct std__allocator_char_* t146 = __two145;
    struct std__allocator_char_* t147 = __one144;
    struct std__allocator_char_* r148 = std__allocator_char___operator_(t147, t146);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v149) {
bb150:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this151;
  unsigned long __retval152;
  this151 = v149;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t153 = this151;
  unsigned long r154 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t153);
  __retval152 = r154;
  unsigned long t155 = __retval152;
  return t155;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v156) {
bb157:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this158;
  char* __retval159;
  this158 = v156;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t160 = this158;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t160);
  char* r161 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t160);
  __retval159 = r161;
  char* t162 = __retval159;
  return t162;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v163) {
bb164:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this165;
  unsigned long __retval166;
  unsigned long __sz167;
  this165 = v163;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t168 = this165;
  _Bool r169 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t168);
  unsigned long ternary170;
  if (r169) {
    unsigned long c171 = 15;
    ternary170 = (unsigned long)c171;
  } else {
    unsigned long t172 = t168->field2._M_allocated_capacity;
    ternary170 = (unsigned long)t172;
  }
  __sz167 = ternary170;
    unsigned long t173 = __sz167;
    unsigned long c174 = 15;
    _Bool c175 = ((t173 < c174)) ? 1 : 0;
    _Bool ternary176;
    if (c175) {
      _Bool c177 = 1;
      ternary176 = (_Bool)c177;
    } else {
      unsigned long t178 = __sz167;
      unsigned long r179 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t168);
      _Bool c180 = ((t178 > r179)) ? 1 : 0;
      ternary176 = (_Bool)c180;
    }
    if (ternary176) {
      __builtin_unreachable();
    }
  unsigned long t181 = __sz167;
  __retval166 = t181;
  unsigned long t182 = __retval166;
  return t182;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v183, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v184) {
bb185:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this186;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str187;
  this186 = v183;
  __str187 = v184;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t188 = this186;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t189 = __str187;
    _Bool c190 = ((t188 != t189)) ? 1 : 0;
    if (c190) {
      unsigned long __rsize191;
      unsigned long __capacity192;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t193 = __str187;
      unsigned long r194 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t193);
      __rsize191 = r194;
      unsigned long r195 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t188);
      __capacity192 = r195;
        unsigned long t196 = __rsize191;
        unsigned long t197 = __capacity192;
        _Bool c198 = ((t196 > t197)) ? 1 : 0;
        if (c198) {
          unsigned long __new_capacity199;
          char* __tmp200;
          unsigned long t201 = __rsize191;
          __new_capacity199 = t201;
          unsigned long t202 = __capacity192;
          char* r203 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t188, &__new_capacity199, t202);
          __tmp200 = r203;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t188);
          char* t204 = __tmp200;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t188, t204);
          unsigned long t205 = __new_capacity199;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t188, t205);
        }
        unsigned long t206 = __rsize191;
        _Bool cast207 = (_Bool)t206;
        if (cast207) {
          char* r208 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t188);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t209 = __str187;
          char* r210 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t209);
          unsigned long t211 = __rsize191;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r208, r210, t211);
        }
      unsigned long t212 = __rsize191;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t188, t212);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v213) {
bb214:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this215;
  this215 = v213;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t216 = this215;
  unsigned long c217 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t216, c217);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v218, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v219) {
bb220:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this221;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str222;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval223;
  _Bool __equal_allocs224;
  this221 = v218;
  __str222 = v219;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t225 = this221;
  _Bool c226 = 1;
  __equal_allocs224 = c226;
    _Bool r227 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t225);
    _Bool u228 = !r227;
    _Bool ternary229;
    if (u228) {
      _Bool r230 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      ternary229 = (_Bool)r230;
    } else {
      _Bool c231 = 0;
      ternary229 = (_Bool)c231;
    }
    _Bool ternary232;
    if (ternary229) {
      _Bool t233 = __equal_allocs224;
      _Bool u234 = !t233;
      ternary232 = (_Bool)u234;
    } else {
      _Bool c235 = 0;
      ternary232 = (_Bool)c235;
    }
    if (ternary232) {
      unsigned long t236 = t225->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t225, t236);
      char* r237 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t225);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t225, r237);
      unsigned long c238 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t225, c238);
    }
  struct std__allocator_char_* r239 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t225);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t240 = __str222;
  struct std__allocator_char_* r241 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t240);
  void_std____alloc_on_move_std__allocator_char___(r239, r241);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t242 = __str222;
    _Bool r243 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t242);
    if (r243) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t244 = __str222;
        _Bool c245 = ((t244 != t225)) ? 1 : 0;
        if (c245) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t246 = __str222;
            unsigned long r247 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t246);
            _Bool cast248 = (_Bool)r247;
            if (cast248) {
              char* r249 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t225);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t250 = __str222;
              char* r251 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t250);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t252 = __str222;
              unsigned long r253 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t252);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r249, r251, r253);
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t254 = __str222;
          unsigned long r255 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t254);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t225, r255);
        }
    } else {
        _Bool r256 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        _Bool ternary257;
        if (r256) {
          _Bool c258 = 1;
          ternary257 = (_Bool)c258;
        } else {
          _Bool t259 = __equal_allocs224;
          ternary257 = (_Bool)t259;
        }
        if (ternary257) {
          char* __data260;
          unsigned long __capacity261;
          char* c262 = ((void*)0);
          __data260 = c262;
            _Bool r263 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t225);
            _Bool u264 = !r263;
            if (u264) {
                _Bool t265 = __equal_allocs224;
                if (t265) {
                  char* r266 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t225);
                  __data260 = r266;
                  unsigned long t267 = t225->field2._M_allocated_capacity;
                  __capacity261 = t267;
                } else {
                  unsigned long t268 = t225->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t225, t268);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t269 = __str222;
          char* r270 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t269);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t225, r270);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t271 = __str222;
          unsigned long r272 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t271);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t225, r272);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t273 = __str222;
          unsigned long t274 = t273->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t225, t274);
            char* t275 = __data260;
            _Bool cast276 = (_Bool)t275;
            if (cast276) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t277 = __str222;
              char* t278 = __data260;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t277, t278);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t279 = __str222;
              unsigned long t280 = __capacity261;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t279, t280);
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t281 = __str222;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t282 = __str222;
              char* r283 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t282);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t281, r283);
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t284 = __str222;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t225, t284);
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t285 = __str222;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t285);
  __retval223 = t225;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t286 = __retval223;
  return t286;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v287) {
bb288:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this289;
  this289 = v287;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t290 = this289;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t290);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t290->_M_dataplus);
  }
  return;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v291, char* v292) {
bb293:
  char* __c1294;
  char* __c2295;
  _Bool __retval296;
  __c1294 = v291;
  __c2295 = v292;
  char* t297 = __c1294;
  char t298 = *t297;
  unsigned char cast299 = (unsigned char)t298;
  int cast300 = (int)cast299;
  char* t301 = __c2295;
  char t302 = *t301;
  unsigned char cast303 = (unsigned char)t302;
  int cast304 = (int)cast303;
  _Bool c305 = ((cast300 < cast304)) ? 1 : 0;
  __retval296 = c305;
  _Bool t306 = __retval296;
  return t306;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v307, char* v308, unsigned long v309) {
bb310:
  char* __s1311;
  char* __s2312;
  unsigned long __n313;
  int __retval314;
  __s1311 = v307;
  __s2312 = v308;
  __n313 = v309;
    unsigned long t315 = __n313;
    unsigned long c316 = 0;
    _Bool c317 = ((t315 == c316)) ? 1 : 0;
    if (c317) {
      int c318 = 0;
      __retval314 = c318;
      int t319 = __retval314;
      return t319;
    }
    _Bool r320 = std____is_constant_evaluated();
    if (r320) {
        unsigned long __i321;
        unsigned long c322 = 0;
        __i321 = c322;
        while (1) {
          unsigned long t324 = __i321;
          unsigned long t325 = __n313;
          _Bool c326 = ((t324 < t325)) ? 1 : 0;
          if (!c326) break;
            unsigned long t327 = __i321;
            char* t328 = __s1311;
            char* ptr329 = &(t328)[t327];
            unsigned long t330 = __i321;
            char* t331 = __s2312;
            char* ptr332 = &(t331)[t330];
            _Bool r333 = std__char_traits_char___lt(ptr329, ptr332);
            if (r333) {
              int c334 = -1;
              __retval314 = c334;
              int t335 = __retval314;
              int ret_val336 = t335;
              return ret_val336;
            } else {
                unsigned long t337 = __i321;
                char* t338 = __s2312;
                char* ptr339 = &(t338)[t337];
                unsigned long t340 = __i321;
                char* t341 = __s1311;
                char* ptr342 = &(t341)[t340];
                _Bool r343 = std__char_traits_char___lt(ptr339, ptr342);
                if (r343) {
                  int c344 = 1;
                  __retval314 = c344;
                  int t345 = __retval314;
                  int ret_val346 = t345;
                  return ret_val346;
                }
            }
        for_step323: ;
          unsigned long t347 = __i321;
          unsigned long u348 = t347 + 1;
          __i321 = u348;
        }
      int c349 = 0;
      __retval314 = c349;
      int t350 = __retval314;
      return t350;
    }
  char* t351 = __s1311;
  void* cast352 = (void*)t351;
  char* t353 = __s2312;
  void* cast354 = (void*)t353;
  unsigned long t355 = __n313;
  int r356 = memcmp(cast352, cast354, t355);
  __retval314 = r356;
  int t357 = __retval314;
  return t357;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v358) {
bb359:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this360;
  char* __retval361;
  this360 = v358;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t362 = this360;
  char* r363 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t362);
  __retval361 = r363;
  char* t364 = __retval361;
  return t364;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v365, char* v366) {
bb367:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs368;
  char* __rhs369;
  _Bool __retval370;
  __lhs368 = v365;
  __rhs369 = v366;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t371 = __lhs368;
  unsigned long r372 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t371);
  char* t373 = __rhs369;
  unsigned long r374 = std__char_traits_char___length(t373);
  _Bool c375 = ((r372 == r374)) ? 1 : 0;
  _Bool ternary376;
  if (c375) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t377 = __lhs368;
    char* r378 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t377);
    char* t379 = __rhs369;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t380 = __lhs368;
    unsigned long r381 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t380);
    int r382 = std__char_traits_char___compare(r378, t379, r381);
    _Bool cast383 = (_Bool)r382;
    _Bool u384 = !cast383;
    ternary376 = (_Bool)u384;
  } else {
    _Bool c385 = 0;
    ternary376 = (_Bool)c385;
  }
  __retval370 = ternary376;
  _Bool t386 = __retval370;
  return t386;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v387, int v388) {
bb389:
  int __a390;
  int __b391;
  int __retval392;
  __a390 = v387;
  __b391 = v388;
  int t393 = __a390;
  int t394 = __b391;
  int b395 = t393 | t394;
  __retval392 = b395;
  int t396 = __retval392;
  return t396;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v397) {
bb398:
  struct std__basic_ios_char__std__char_traits_char__* this399;
  int __retval400;
  this399 = v397;
  struct std__basic_ios_char__std__char_traits_char__* t401 = this399;
  struct std__ios_base* base402 = (struct std__ios_base*)((char *)t401 + 0);
  int t403 = base402->_M_streambuf_state;
  __retval400 = t403;
  int t404 = __retval400;
  return t404;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v405, int v406) {
bb407:
  struct std__basic_ios_char__std__char_traits_char__* this408;
  int __state409;
  this408 = v405;
  __state409 = v406;
  struct std__basic_ios_char__std__char_traits_char__* t410 = this408;
  int r411 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t410);
  int t412 = __state409;
  int r413 = std__operator_(r411, t412);
  std__basic_ios_char__std__char_traits_char_____clear(t410, r413);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v414, char* v415) {
bb416:
  struct std__basic_ostream_char__std__char_traits_char__* __out417;
  char* __s418;
  struct std__basic_ostream_char__std__char_traits_char__* __retval419;
  __out417 = v414;
  __s418 = v415;
    char* t420 = __s418;
    _Bool cast421 = (_Bool)t420;
    _Bool u422 = !cast421;
    if (u422) {
      struct std__basic_ostream_char__std__char_traits_char__* t423 = __out417;
      void** v424 = (void**)t423;
      void* v425 = *((void**)v424);
      unsigned char* cast426 = (unsigned char*)v425;
      long c427 = -24;
      unsigned char* ptr428 = &(cast426)[c427];
      long* cast429 = (long*)ptr428;
      long t430 = *cast429;
      unsigned char* cast431 = (unsigned char*)t423;
      unsigned char* ptr432 = &(cast431)[t430];
      struct std__basic_ostream_char__std__char_traits_char__* cast433 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr432;
      struct std__basic_ios_char__std__char_traits_char__* cast434 = (struct std__basic_ios_char__std__char_traits_char__*)cast433;
      int t435 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast434, t435);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t436 = __out417;
      char* t437 = __s418;
      char* t438 = __s418;
      unsigned long r439 = std__char_traits_char___length(t438);
      long cast440 = (long)r439;
      struct std__basic_ostream_char__std__char_traits_char__* r441 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t436, t437, cast440);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t442 = __out417;
  __retval419 = t442;
  struct std__basic_ostream_char__std__char_traits_char__* t443 = __retval419;
  return t443;
}

// function: main
int main() {
bb444:
  int __retval445;
  unsigned long length446;
  char buffer447[20];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str448;
  struct std__allocator_char_ ref_tmp0449;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ aux450;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp1451;
  struct std__allocator_char_ ref_tmp2452;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup453;
  int c454 = 0;
  __retval445 = c454;
  char* cast455 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0449);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str448, cast455, &ref_tmp0449);
  {
    std__allocator_char____allocator(&ref_tmp0449);
  }
    char* cast456 = (char*)&(buffer447);
    unsigned long c457 = 6;
    unsigned long c458 = 5;
    unsigned long r459 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____copy_char___unsigned_long__unsigned_long__const(&str448, cast456, c457, c458);
    length446 = r459;
    char c460 = 0;
    unsigned long t461 = length446;
    buffer447[t461] = c460;
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&aux450);
      char* cast462 = (char*)&(buffer447);
      std__allocator_char___allocator_2(&ref_tmp2452);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp1451, cast462, &ref_tmp2452);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r463 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&aux450, &ref_tmp1451);
          tmp_exprcleanup453 = r463;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1451);
        }
      {
        std__allocator_char____allocator(&ref_tmp2452);
      }
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t464 = tmp_exprcleanup453;
      char* cast465 = (char*)&(_str_1);
      _Bool r466 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&aux450, cast465);
      if (r466) {
      } else {
        char* cast467 = (char*)&(_str_2);
        char* c468 = _str_3;
        unsigned int c469 = 24;
        char* cast470 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast467, c468, c469, cast470);
      }
      char* cast471 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* r472 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast471);
      char* cast473 = (char*)&(buffer447);
      struct std__basic_ostream_char__std__char_traits_char__* r474 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r472, cast473);
      char* cast475 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* r476 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r474, cast475);
      int c477 = 0;
      __retval445 = c477;
      int t478 = __retval445;
      int ret_val479 = t478;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&aux450);
      }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str448);
      }
      return ret_val479;
  int t480 = __retval445;
  return t480;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v481) {
bb482:
  struct std____new_allocator_char_* this483;
  this483 = v481;
  struct std____new_allocator_char_* t484 = this483;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v485) {
bb486:
  char* __r487;
  char* __retval488;
  __r487 = v485;
  char* t489 = __r487;
  __retval488 = t489;
  char* t490 = __retval488;
  return t490;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v491) {
bb492:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this493;
  char* __retval494;
  this493 = v491;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t495 = this493;
  char* cast496 = (char*)&(t495->field2._M_local_buf);
  char* r497 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast496);
  __retval494 = r497;
  char* t498 = __retval494;
  return t498;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v499, char* v500, struct std__allocator_char_* v501) {
bb502:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this503;
  char* __dat504;
  struct std__allocator_char_* __a505;
  this503 = v499;
  __dat504 = v500;
  __a505 = v501;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t506 = this503;
  struct std__allocator_char_* base507 = (struct std__allocator_char_*)((char *)t506 + 0);
  struct std__allocator_char_* t508 = __a505;
  std__allocator_char___allocator(base507, t508);
    char* t509 = __dat504;
    t506->_M_p = t509;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb510:
  _Bool __retval511;
    _Bool c512 = 0;
    __retval511 = c512;
    _Bool t513 = __retval511;
    return t513;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v514, char* v515) {
bb516:
  char* __c1517;
  char* __c2518;
  _Bool __retval519;
  __c1517 = v514;
  __c2518 = v515;
  char* t520 = __c1517;
  char t521 = *t520;
  int cast522 = (int)t521;
  char* t523 = __c2518;
  char t524 = *t523;
  int cast525 = (int)t524;
  _Bool c526 = ((cast522 == cast525)) ? 1 : 0;
  __retval519 = c526;
  _Bool t527 = __retval519;
  return t527;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v528) {
bb529:
  char* __p530;
  unsigned long __retval531;
  unsigned long __i532;
  __p530 = v528;
  unsigned long c533 = 0;
  __i532 = c533;
    char ref_tmp0534;
    while (1) {
      unsigned long t535 = __i532;
      char* t536 = __p530;
      char* ptr537 = &(t536)[t535];
      char c538 = 0;
      ref_tmp0534 = c538;
      _Bool r539 = __gnu_cxx__char_traits_char___eq(ptr537, &ref_tmp0534);
      _Bool u540 = !r539;
      if (!u540) break;
      unsigned long t541 = __i532;
      unsigned long u542 = t541 + 1;
      __i532 = u542;
    }
  unsigned long t543 = __i532;
  __retval531 = t543;
  unsigned long t544 = __retval531;
  return t544;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v545) {
bb546:
  char* __s547;
  unsigned long __retval548;
  __s547 = v545;
    _Bool r549 = std____is_constant_evaluated();
    if (r549) {
      char* t550 = __s547;
      unsigned long r551 = __gnu_cxx__char_traits_char___length(t550);
      __retval548 = r551;
      unsigned long t552 = __retval548;
      return t552;
    }
  char* t553 = __s547;
  unsigned long r554 = strlen(t553);
  __retval548 = r554;
  unsigned long t555 = __retval548;
  return t555;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v556, char* v557, struct std__random_access_iterator_tag v558) {
bb559:
  char* __first560;
  char* __last561;
  struct std__random_access_iterator_tag unnamed562;
  long __retval563;
  __first560 = v556;
  __last561 = v557;
  unnamed562 = v558;
  char* t564 = __last561;
  char* t565 = __first560;
  long diff566 = t564 - t565;
  __retval563 = diff566;
  long t567 = __retval563;
  return t567;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v568) {
bb569:
  char** unnamed570;
  struct std__random_access_iterator_tag __retval571;
  unnamed570 = v568;
  struct std__random_access_iterator_tag t572 = __retval571;
  return t572;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v573, char* v574) {
bb575:
  char* __first576;
  char* __last577;
  long __retval578;
  struct std__random_access_iterator_tag agg_tmp0579;
  __first576 = v573;
  __last577 = v574;
  char* t580 = __first576;
  char* t581 = __last577;
  struct std__random_access_iterator_tag r582 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first576);
  agg_tmp0579 = r582;
  struct std__random_access_iterator_tag t583 = agg_tmp0579;
  long r584 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t580, t581, t583);
  __retval578 = r584;
  long t585 = __retval578;
  return t585;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v586, char* v587) {
bb588:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this589;
  char* __p590;
  this589 = v586;
  __p590 = v587;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t591 = this589;
  char* t592 = __p590;
  t591->_M_dataplus._M_p = t592;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v593) {
bb594:
  struct std__allocator_char_* __a595;
  unsigned long __retval596;
  __a595 = v593;
  unsigned long c597 = -1;
  unsigned long c598 = 1;
  unsigned long b599 = c597 / c598;
  __retval596 = b599;
  unsigned long t600 = __retval596;
  return t600;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v601) {
bb602:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this603;
  struct std__allocator_char_* __retval604;
  this603 = v601;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t605 = this603;
  struct std__allocator_char_* base606 = (struct std__allocator_char_*)((char *)&(t605->_M_dataplus) + 0);
  __retval604 = base606;
  struct std__allocator_char_* t607 = __retval604;
  return t607;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v608, unsigned long* v609) {
bb610:
  unsigned long* __a611;
  unsigned long* __b612;
  unsigned long* __retval613;
  __a611 = v608;
  __b612 = v609;
    unsigned long* t614 = __b612;
    unsigned long t615 = *t614;
    unsigned long* t616 = __a611;
    unsigned long t617 = *t616;
    _Bool c618 = ((t615 < t617)) ? 1 : 0;
    if (c618) {
      unsigned long* t619 = __b612;
      __retval613 = t619;
      unsigned long* t620 = __retval613;
      return t620;
    }
  unsigned long* t621 = __a611;
  __retval613 = t621;
  unsigned long* t622 = __retval613;
  return t622;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v623) {
bb624:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this625;
  unsigned long __retval626;
  unsigned long __diffmax627;
  unsigned long __allocmax628;
  this625 = v623;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t629 = this625;
  unsigned long c630 = 9223372036854775807;
  __diffmax627 = c630;
  struct std__allocator_char_* r631 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t629);
  unsigned long r632 = std__allocator_traits_std__allocator_char_____max_size(r631);
  __allocmax628 = r632;
  unsigned long* r633 = unsigned_long_const__std__min_unsigned_long_(&__diffmax627, &__allocmax628);
  unsigned long t634 = *r633;
  unsigned long c635 = 1;
  unsigned long b636 = t634 - c635;
  __retval626 = b636;
  unsigned long t637 = __retval626;
  return t637;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v638) {
bb639:
  struct std____new_allocator_char_* this640;
  unsigned long __retval641;
  this640 = v638;
  struct std____new_allocator_char_* t642 = this640;
  unsigned long c643 = 9223372036854775807;
  unsigned long c644 = 1;
  unsigned long b645 = c643 / c644;
  __retval641 = b645;
  unsigned long t646 = __retval641;
  return t646;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v647, unsigned long v648, void* v649) {
bb650:
  struct std____new_allocator_char_* this651;
  unsigned long __n652;
  void* unnamed653;
  char* __retval654;
  this651 = v647;
  __n652 = v648;
  unnamed653 = v649;
  struct std____new_allocator_char_* t655 = this651;
    unsigned long t656 = __n652;
    unsigned long r657 = std____new_allocator_char____M_max_size___const(t655);
    _Bool c658 = ((t656 > r657)) ? 1 : 0;
    if (c658) {
        unsigned long t659 = __n652;
        unsigned long c660 = -1;
        unsigned long c661 = 1;
        unsigned long b662 = c660 / c661;
        _Bool c663 = ((t659 > b662)) ? 1 : 0;
        if (c663) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c664 = 1;
    unsigned long c665 = 16;
    _Bool c666 = ((c664 > c665)) ? 1 : 0;
    if (c666) {
      unsigned long __al667;
      unsigned long c668 = 1;
      __al667 = c668;
      unsigned long t669 = __n652;
      unsigned long c670 = 1;
      unsigned long b671 = t669 * c670;
      unsigned long t672 = __al667;
      void* r673 = operator_new_2(b671, t672);
      char* cast674 = (char*)r673;
      __retval654 = cast674;
      char* t675 = __retval654;
      return t675;
    }
  unsigned long t676 = __n652;
  unsigned long c677 = 1;
  unsigned long b678 = t676 * c677;
  void* r679 = operator_new(b678);
  char* cast680 = (char*)r679;
  __retval654 = cast680;
  char* t681 = __retval654;
  return t681;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v682, unsigned long v683) {
bb684:
  struct std__allocator_char_* this685;
  unsigned long __n686;
  char* __retval687;
  this685 = v682;
  __n686 = v683;
  struct std__allocator_char_* t688 = this685;
    _Bool r689 = std____is_constant_evaluated();
    if (r689) {
        unsigned long t690 = __n686;
        unsigned long c691 = 1;
        unsigned long ovr692;
        _Bool ovf693 = __builtin_mul_overflow(t690, c691, &ovr692);
        __n686 = ovr692;
        if (ovf693) {
          std____throw_bad_array_new_length();
        }
      unsigned long t694 = __n686;
      void* r695 = operator_new(t694);
      char* cast696 = (char*)r695;
      __retval687 = cast696;
      char* t697 = __retval687;
      return t697;
    }
  struct std____new_allocator_char_* base698 = (struct std____new_allocator_char_*)((char *)t688 + 0);
  unsigned long t699 = __n686;
  void* c700 = ((void*)0);
  char* r701 = std____new_allocator_char___allocate(base698, t699, c700);
  __retval687 = r701;
  char* t702 = __retval687;
  return t702;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v703, unsigned long v704) {
bb705:
  struct std__allocator_char_* __a706;
  unsigned long __n707;
  char* __retval708;
  __a706 = v703;
  __n707 = v704;
  struct std__allocator_char_* t709 = __a706;
  unsigned long t710 = __n707;
  char* r711 = std__allocator_char___allocate(t709, t710);
  __retval708 = r711;
  char* t712 = __retval708;
  return t712;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v713, unsigned long v714) {
bb715:
  struct std__allocator_char_* __a716;
  unsigned long __n717;
  char* __retval718;
  char* __p719;
  __a716 = v713;
  __n717 = v714;
  struct std__allocator_char_* t720 = __a716;
  unsigned long t721 = __n717;
  char* r722 = std__allocator_traits_std__allocator_char_____allocate(t720, t721);
  __p719 = r722;
  char* t723 = __p719;
  __retval718 = t723;
  char* t724 = __retval718;
  return t724;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v725) {
bb726:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this727;
  struct std__allocator_char_* __retval728;
  this727 = v725;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t729 = this727;
  struct std__allocator_char_* base730 = (struct std__allocator_char_*)((char *)&(t729->_M_dataplus) + 0);
  __retval728 = base730;
  struct std__allocator_char_* t731 = __retval728;
  return t731;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v732, unsigned long* v733, unsigned long v734) {
bb735:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this736;
  unsigned long* __capacity737;
  unsigned long __old_capacity738;
  char* __retval739;
  this736 = v732;
  __capacity737 = v733;
  __old_capacity738 = v734;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t740 = this736;
    unsigned long* t741 = __capacity737;
    unsigned long t742 = *t741;
    unsigned long r743 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t740);
    _Bool c744 = ((t742 > r743)) ? 1 : 0;
    if (c744) {
      char* cast745 = (char*)&(_str_7);
      std____throw_length_error(cast745);
    }
    unsigned long* t746 = __capacity737;
    unsigned long t747 = *t746;
    unsigned long t748 = __old_capacity738;
    _Bool c749 = ((t747 > t748)) ? 1 : 0;
    _Bool ternary750;
    if (c749) {
      unsigned long* t751 = __capacity737;
      unsigned long t752 = *t751;
      unsigned long c753 = 2;
      unsigned long t754 = __old_capacity738;
      unsigned long b755 = c753 * t754;
      _Bool c756 = ((t752 < b755)) ? 1 : 0;
      ternary750 = (_Bool)c756;
    } else {
      _Bool c757 = 0;
      ternary750 = (_Bool)c757;
    }
    if (ternary750) {
      unsigned long c758 = 2;
      unsigned long t759 = __old_capacity738;
      unsigned long b760 = c758 * t759;
      unsigned long* t761 = __capacity737;
      *t761 = b760;
        unsigned long* t762 = __capacity737;
        unsigned long t763 = *t762;
        unsigned long r764 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t740);
        _Bool c765 = ((t763 > r764)) ? 1 : 0;
        if (c765) {
          unsigned long r766 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t740);
          unsigned long* t767 = __capacity737;
          *t767 = r766;
        }
    }
  struct std__allocator_char_* r768 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t740);
  unsigned long* t769 = __capacity737;
  unsigned long t770 = *t769;
  unsigned long c771 = 1;
  unsigned long b772 = t770 + c771;
  char* r773 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r768, b772);
  __retval739 = r773;
  char* t774 = __retval739;
  return t774;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v775, unsigned long v776) {
bb777:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this778;
  unsigned long __capacity779;
  this778 = v775;
  __capacity779 = v776;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t780 = this778;
  unsigned long t781 = __capacity779;
  t780->field2._M_allocated_capacity = t781;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb782:
  _Bool __retval783;
    _Bool c784 = 0;
    __retval783 = c784;
    _Bool t785 = __retval783;
    return t785;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v786) {
bb787:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this788;
  this788 = v786;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t789 = this788;
    _Bool r790 = std__is_constant_evaluated();
    if (r790) {
        unsigned long __i791;
        unsigned long c792 = 0;
        __i791 = c792;
        while (1) {
          unsigned long t794 = __i791;
          unsigned long c795 = 15;
          _Bool c796 = ((t794 <= c795)) ? 1 : 0;
          if (!c796) break;
          char c797 = 0;
          unsigned long t798 = __i791;
          t789->field2._M_local_buf[t798] = c797;
        for_step793: ;
          unsigned long t799 = __i791;
          unsigned long u800 = t799 + 1;
          __i791 = u800;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v801, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v802) {
bb803:
  struct _Guard* this804;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s805;
  this804 = v801;
  __s805 = v802;
  struct _Guard* t806 = this804;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t807 = __s805;
  t806->_M_guarded = t807;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v808, char* v809) {
bb810:
  char* __location811;
  char* __args812;
  char* __retval813;
  void* __loc814;
  __location811 = v808;
  __args812 = v809;
  char* t815 = __location811;
  void* cast816 = (void*)t815;
  __loc814 = cast816;
    void* t817 = __loc814;
    char* cast818 = (char*)t817;
    char* t819 = __args812;
    char t820 = *t819;
    *cast818 = t820;
    __retval813 = cast818;
    char* t821 = __retval813;
    return t821;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v822, char* v823) {
bb824:
  char* __c1825;
  char* __c2826;
  __c1825 = v822;
  __c2826 = v823;
    _Bool r827 = std____is_constant_evaluated();
    if (r827) {
      char* t828 = __c1825;
      char* t829 = __c2826;
      char* r830 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t828, t829);
    } else {
      char* t831 = __c2826;
      char t832 = *t831;
      char* t833 = __c1825;
      *t833 = t832;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v834, char* v835, unsigned long v836) {
bb837:
  char* __s1838;
  char* __s2839;
  unsigned long __n840;
  char* __retval841;
  __s1838 = v834;
  __s2839 = v835;
  __n840 = v836;
    unsigned long t842 = __n840;
    unsigned long c843 = 0;
    _Bool c844 = ((t842 == c843)) ? 1 : 0;
    if (c844) {
      char* t845 = __s1838;
      __retval841 = t845;
      char* t846 = __retval841;
      return t846;
    }
    _Bool r847 = std____is_constant_evaluated();
    if (r847) {
        unsigned long __i848;
        unsigned long c849 = 0;
        __i848 = c849;
        while (1) {
          unsigned long t851 = __i848;
          unsigned long t852 = __n840;
          _Bool c853 = ((t851 < t852)) ? 1 : 0;
          if (!c853) break;
          char* t854 = __s1838;
          unsigned long t855 = __i848;
          char* ptr856 = &(t854)[t855];
          unsigned long t857 = __i848;
          char* t858 = __s2839;
          char* ptr859 = &(t858)[t857];
          char* r860 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr856, ptr859);
        for_step850: ;
          unsigned long t861 = __i848;
          unsigned long u862 = t861 + 1;
          __i848 = u862;
        }
      char* t863 = __s1838;
      __retval841 = t863;
      char* t864 = __retval841;
      return t864;
    }
  char* t865 = __s1838;
  void* cast866 = (void*)t865;
  char* t867 = __s2839;
  void* cast868 = (void*)t867;
  unsigned long t869 = __n840;
  unsigned long c870 = 1;
  unsigned long b871 = t869 * c870;
  void* r872 = memcpy(cast866, cast868, b871);
  char* t873 = __s1838;
  __retval841 = t873;
  char* t874 = __retval841;
  return t874;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v875, char* v876, unsigned long v877) {
bb878:
  char* __s1879;
  char* __s2880;
  unsigned long __n881;
  char* __retval882;
  __s1879 = v875;
  __s2880 = v876;
  __n881 = v877;
    unsigned long t883 = __n881;
    unsigned long c884 = 0;
    _Bool c885 = ((t883 == c884)) ? 1 : 0;
    if (c885) {
      char* t886 = __s1879;
      __retval882 = t886;
      char* t887 = __retval882;
      return t887;
    }
    _Bool r888 = std____is_constant_evaluated();
    if (r888) {
      char* t889 = __s1879;
      char* t890 = __s2880;
      unsigned long t891 = __n881;
      char* r892 = __gnu_cxx__char_traits_char___copy(t889, t890, t891);
      __retval882 = r892;
      char* t893 = __retval882;
      return t893;
    }
  char* t894 = __s1879;
  void* cast895 = (void*)t894;
  char* t896 = __s2880;
  void* cast897 = (void*)t896;
  unsigned long t898 = __n881;
  void* r899 = memcpy(cast895, cast897, t898);
  char* cast900 = (char*)r899;
  __retval882 = cast900;
  char* t901 = __retval882;
  return t901;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v902, char* v903, unsigned long v904) {
bb905:
  char* __d906;
  char* __s907;
  unsigned long __n908;
  __d906 = v902;
  __s907 = v903;
  __n908 = v904;
    unsigned long t909 = __n908;
    unsigned long c910 = 1;
    _Bool c911 = ((t909 == c910)) ? 1 : 0;
    if (c911) {
      char* t912 = __d906;
      char* t913 = __s907;
      std__char_traits_char___assign(t912, t913);
    } else {
      char* t914 = __d906;
      char* t915 = __s907;
      unsigned long t916 = __n908;
      char* r917 = std__char_traits_char___copy(t914, t915, t916);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v918) {
bb919:
  char* __it920;
  char* __retval921;
  __it920 = v918;
  char* t922 = __it920;
  __retval921 = t922;
  char* t923 = __retval921;
  return t923;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v924, char* v925, char* v926) {
bb927:
  char* __p928;
  char* __k1929;
  char* __k2930;
  __p928 = v924;
  __k1929 = v925;
  __k2930 = v926;
    char* t931 = __p928;
    char* t932 = __k1929;
    char* r933 = char_const__std____niter_base_char_const__(t932);
    char* t934 = __k2930;
    char* t935 = __k1929;
    long diff936 = t934 - t935;
    unsigned long cast937 = (unsigned long)diff936;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t931, r933, cast937);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v938) {
bb939:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this940;
  char* __retval941;
  this940 = v938;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t942 = this940;
  char* t943 = t942->_M_dataplus._M_p;
  __retval941 = t943;
  char* t944 = __retval941;
  return t944;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v945, unsigned long v946) {
bb947:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this948;
  unsigned long __length949;
  this948 = v945;
  __length949 = v946;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t950 = this948;
  unsigned long t951 = __length949;
  t950->_M_string_length = t951;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v952, unsigned long v953) {
bb954:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this955;
  unsigned long __n956;
  char ref_tmp0957;
  this955 = v952;
  __n956 = v953;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t958 = this955;
  unsigned long t959 = __n956;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t958, t959);
  unsigned long t960 = __n956;
  char* r961 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t958);
  char* ptr962 = &(r961)[t960];
  char c963 = 0;
  ref_tmp0957 = c963;
  std__char_traits_char___assign(ptr962, &ref_tmp0957);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v964) {
bb965:
  struct _Guard* this966;
  this966 = v964;
  struct _Guard* t967 = this966;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t968 = t967->_M_guarded;
    _Bool cast969 = (_Bool)t968;
    if (cast969) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t970 = t967->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t970);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v971, char* v972, char* v973, struct std__forward_iterator_tag v974) {
bb975:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this976;
  char* __beg977;
  char* __end978;
  struct std__forward_iterator_tag unnamed979;
  unsigned long __dnew980;
  struct _Guard __guard981;
  this976 = v971;
  __beg977 = v972;
  __end978 = v973;
  unnamed979 = v974;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t982 = this976;
  char* t983 = __beg977;
  char* t984 = __end978;
  long r985 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t983, t984);
  unsigned long cast986 = (unsigned long)r985;
  __dnew980 = cast986;
    unsigned long t987 = __dnew980;
    unsigned long c988 = 15;
    _Bool c989 = ((t987 > c988)) ? 1 : 0;
    if (c989) {
      unsigned long c990 = 0;
      char* r991 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t982, &__dnew980, c990);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t982, r991);
      unsigned long t992 = __dnew980;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t982, t992);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t982);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard981, t982);
    char* r993 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t982);
    char* t994 = __beg977;
    char* t995 = __end978;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r993, t994, t995);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c996 = ((void*)0);
    __guard981._M_guarded = c996;
    unsigned long t997 = __dnew980;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t982, t997);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard981);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v998) {
bb999:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1000;
  this1000 = v998;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1001 = this1000;
  {
    struct std__allocator_char_* base1002 = (struct std__allocator_char_*)((char *)t1001 + 0);
    std__allocator_char____allocator(base1002);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1003, struct std____new_allocator_char_* v1004) {
bb1005:
  struct std____new_allocator_char_* this1006;
  struct std____new_allocator_char_* unnamed1007;
  this1006 = v1003;
  unnamed1007 = v1004;
  struct std____new_allocator_char_* t1008 = this1006;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1009, struct std__allocator_char_* v1010) {
bb1011:
  struct std__allocator_char_* this1012;
  struct std__allocator_char_* __a1013;
  this1012 = v1009;
  __a1013 = v1010;
  struct std__allocator_char_* t1014 = this1012;
  struct std____new_allocator_char_* base1015 = (struct std____new_allocator_char_*)((char *)t1014 + 0);
  struct std__allocator_char_* t1016 = __a1013;
  struct std____new_allocator_char_* base1017 = (struct std____new_allocator_char_*)((char *)t1016 + 0);
  std____new_allocator_char_____new_allocator(base1015, base1017);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1018) {
bb1019:
  char* __r1020;
  char* __retval1021;
  __r1020 = v1018;
  char* t1022 = __r1020;
  __retval1021 = t1022;
  char* t1023 = __retval1021;
  return t1023;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1024) {
bb1025:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1026;
  char* __retval1027;
  this1026 = v1024;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1028 = this1026;
  char* cast1029 = (char*)&(t1028->field2._M_local_buf);
  char* r1030 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1029);
  __retval1027 = r1030;
  char* t1031 = __retval1027;
  return t1031;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1032) {
bb1033:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1034;
  _Bool __retval1035;
  this1034 = v1032;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1036 = this1034;
    char* r1037 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1036);
    char* r1038 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1036);
    _Bool c1039 = ((r1037 == r1038)) ? 1 : 0;
    if (c1039) {
        unsigned long t1040 = t1036->_M_string_length;
        unsigned long c1041 = 15;
        _Bool c1042 = ((t1040 > c1041)) ? 1 : 0;
        if (c1042) {
          __builtin_unreachable();
        }
      _Bool c1043 = 1;
      __retval1035 = c1043;
      _Bool t1044 = __retval1035;
      return t1044;
    }
  _Bool c1045 = 0;
  __retval1035 = c1045;
  _Bool t1046 = __retval1035;
  return t1046;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1047, char* v1048, unsigned long v1049) {
bb1050:
  struct std____new_allocator_char_* this1051;
  char* __p1052;
  unsigned long __n1053;
  this1051 = v1047;
  __p1052 = v1048;
  __n1053 = v1049;
  struct std____new_allocator_char_* t1054 = this1051;
    unsigned long c1055 = 1;
    unsigned long c1056 = 16;
    _Bool c1057 = ((c1055 > c1056)) ? 1 : 0;
    if (c1057) {
      char* t1058 = __p1052;
      void* cast1059 = (void*)t1058;
      unsigned long t1060 = __n1053;
      unsigned long c1061 = 1;
      unsigned long b1062 = t1060 * c1061;
      unsigned long c1063 = 1;
      operator_delete_3(cast1059, b1062, c1063);
      return;
    }
  char* t1064 = __p1052;
  void* cast1065 = (void*)t1064;
  unsigned long t1066 = __n1053;
  unsigned long c1067 = 1;
  unsigned long b1068 = t1066 * c1067;
  operator_delete_2(cast1065, b1068);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1069, char* v1070, unsigned long v1071) {
bb1072:
  struct std__allocator_char_* this1073;
  char* __p1074;
  unsigned long __n1075;
  this1073 = v1069;
  __p1074 = v1070;
  __n1075 = v1071;
  struct std__allocator_char_* t1076 = this1073;
    _Bool r1077 = std____is_constant_evaluated();
    if (r1077) {
      char* t1078 = __p1074;
      void* cast1079 = (void*)t1078;
      operator_delete(cast1079);
      return;
    }
  struct std____new_allocator_char_* base1080 = (struct std____new_allocator_char_*)((char *)t1076 + 0);
  char* t1081 = __p1074;
  unsigned long t1082 = __n1075;
  std____new_allocator_char___deallocate(base1080, t1081, t1082);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1083, char* v1084, unsigned long v1085) {
bb1086:
  struct std__allocator_char_* __a1087;
  char* __p1088;
  unsigned long __n1089;
  __a1087 = v1083;
  __p1088 = v1084;
  __n1089 = v1085;
  struct std__allocator_char_* t1090 = __a1087;
  char* t1091 = __p1088;
  unsigned long t1092 = __n1089;
  std__allocator_char___deallocate(t1090, t1091, t1092);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1093, unsigned long v1094) {
bb1095:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1096;
  unsigned long __size1097;
  this1096 = v1093;
  __size1097 = v1094;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1098 = this1096;
  struct std__allocator_char_* r1099 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1098);
  char* r1100 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1098);
  unsigned long t1101 = __size1097;
  unsigned long c1102 = 1;
  unsigned long b1103 = t1101 + c1102;
  std__allocator_traits_std__allocator_char_____deallocate(r1099, r1100, b1103);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1104) {
bb1105:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1106;
  this1106 = v1104;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1107 = this1106;
    _Bool r1108 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1107);
    _Bool u1109 = !r1108;
    if (u1109) {
      unsigned long t1110 = t1107->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1107, t1110);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1111, char* v1112, struct std__allocator_char_* v1113) {
bb1114:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1115;
  char* __dat1116;
  struct std__allocator_char_* __a1117;
  this1115 = v1111;
  __dat1116 = v1112;
  __a1117 = v1113;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1118 = this1115;
  struct std__allocator_char_* base1119 = (struct std__allocator_char_*)((char *)t1118 + 0);
  struct std__allocator_char_* t1120 = __a1117;
  std__allocator_char___allocator(base1119, t1120);
    char* t1121 = __dat1116;
    t1118->_M_p = t1121;
  return;
}

