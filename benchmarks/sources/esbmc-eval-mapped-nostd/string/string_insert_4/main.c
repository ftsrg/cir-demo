extern void abort(void);
// Struct definitions (auto-parsed)
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ { char* _M_current; };
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

char _str[15] = "to be question";
char _str_1[5] = "the ";
char _str_2[13] = "or not to be";
char _str_3[19] = "to be the question";
char _str_4[28] = "str == \"to be the question\"";
char _str_5[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_insert_4/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_6[23] = "to be not the question";
char _str_7[32] = "str == \"to be not the question\"";
char _str_8[13] = "that is cool";
char _str_9[31] = "to be not that is the question";
char _str_10[40] = "str == \"to be not that is the question\"";
char _str_11[7] = "to be ";
char _str_12[37] = "to be not to be that is the question";
char _str_13[46] = "str == \"to be not to be that is the question\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_14[50] = "basic_string: construction from null is not valid";
char _str_15[24] = "basic_string::_M_create";
char _str_16[22] = "basic_string::replace";
char _str_17[25] = "basic_string::_M_replace";
char _str_18[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_19[21] = "basic_string::insert";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
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
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p2);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p2, unsigned long p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2, unsigned long p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
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
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t14->_M_dataplus, r15, t16);
      char* t17 = __s10;
      char* c18 = ((void*)0);
      _Bool c19 = ((t17 == c18)) ? 1 : 0;
      if (c19) {
        char* cast20 = (char*)&(_str_14);
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

// function: _ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2Ev
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v32) {
bb33: ;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this34;
  this34 = v32;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t35 = this34;
  char* c36 = ((void*)0);
  t35->_M_current = c36;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v37, unsigned long v38, unsigned long v39, char* v40) {
bb41: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this42;
  unsigned long __n143;
  unsigned long __n244;
  char* __s45;
  this42 = v37;
  __n143 = v38;
  __n244 = v39;
  __s45 = v40;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t46 = this42;
    unsigned long r47 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t46);
    unsigned long r48 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t46);
    unsigned long t49 = __n143;
    unsigned long b50 = r48 - t49;
    unsigned long b51 = r47 - b50;
    unsigned long t52 = __n244;
    _Bool c53 = ((b51 < t52)) ? 1 : 0;
    if (c53) {
      char* t54 = __s45;
      std____throw_length_error(t54);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v55) {
bb56: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this57;
  unsigned long __retval58;
  unsigned long __sz59;
  this57 = v55;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t60 = this57;
  _Bool r61 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t60);
  unsigned long ternary62;
  if (r61) {
    unsigned long c63 = 15;
    ternary62 = (unsigned long)c63;
  } else {
    unsigned long t64 = t60->field2._M_allocated_capacity;
    ternary62 = (unsigned long)t64;
  }
  __sz59 = ternary62;
    unsigned long t65 = __sz59;
    unsigned long c66 = 15;
    _Bool c67 = ((t65 < c66)) ? 1 : 0;
    _Bool ternary68;
    if (c67) {
      _Bool c69 = 1;
      ternary68 = (_Bool)c69;
    } else {
      unsigned long t70 = __sz59;
      unsigned long r71 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t60);
      _Bool c72 = ((t70 > r71)) ? 1 : 0;
      ternary68 = (_Bool)c72;
    }
    if (ternary68) {
      __builtin_unreachable();
    }
  unsigned long t73 = __sz59;
  __retval58 = t73;
  unsigned long t74 = __retval58;
  return t74;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v75, char* v76, char* v77) {
bb78: ;
  struct std__less_const_char___* this79;
  char* __x80;
  char* __y81;
  _Bool __retval82;
  this79 = v75;
  __x80 = v76;
  __y81 = v77;
  struct std__less_const_char___* t83 = this79;
    _Bool r84 = std____is_constant_evaluated();
    if (r84) {
      char* t85 = __x80;
      char* t86 = __y81;
      _Bool c87 = ((t85 < t86)) ? 1 : 0;
      __retval82 = c87;
      _Bool t88 = __retval82;
      return t88;
    }
  char* t89 = __x80;
  unsigned long cast90 = (unsigned long)t89;
  char* t91 = __y81;
  unsigned long cast92 = (unsigned long)t91;
  _Bool c93 = ((cast90 < cast92)) ? 1 : 0;
  __retval82 = c93;
  _Bool t94 = __retval82;
  return t94;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v95, char* v96) {
bb97: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this98;
  char* __s99;
  _Bool __retval100;
  struct std__less_const_char___ ref_tmp0101;
  this98 = v95;
  __s99 = v96;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t102 = this98;
  char* t103 = __s99;
  char* r104 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t102);
  _Bool r105 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0101, t103, r104);
  _Bool ternary106;
  if (r105) {
    _Bool c107 = 1;
    ternary106 = (_Bool)c107;
  } else {
    struct std__less_const_char___ ref_tmp1108;
    char* r109 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t102);
    unsigned long r110 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t102);
    char* ptr111 = &(r109)[r110];
    char* t112 = __s99;
    _Bool r113 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1108, ptr111, t112);
    ternary106 = (_Bool)r113;
  }
  __retval100 = ternary106;
  _Bool t114 = __retval100;
  return t114;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v115, char* v116) {
bb117: ;
  char* __c1118;
  char* __c2119;
  __c1118 = v115;
  __c2119 = v116;
    _Bool r120 = std____is_constant_evaluated();
    if (r120) {
      char* t121 = __c1118;
      char* t122 = __c2119;
      char* r123 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t121, t122);
    } else {
      char* t124 = __c2119;
      char t125 = *t124;
      char* t126 = __c1118;
      *t126 = t125;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v127, char* v128, unsigned long v129) {
bb130: ;
  char* __s1131;
  char* __s2132;
  unsigned long __n133;
  char* __retval134;
  __s1131 = v127;
  __s2132 = v128;
  __n133 = v129;
    unsigned long t135 = __n133;
    unsigned long c136 = 0;
    _Bool c137 = ((t135 == c136)) ? 1 : 0;
    if (c137) {
      char* t138 = __s1131;
      __retval134 = t138;
      char* t139 = __retval134;
      return t139;
    }
    _Bool r140 = std____is_constant_evaluated();
    if (r140) {
        char* t141 = __s2132;
        char* t142 = __s1131;
        _Bool c143 = ((t141 < t142)) ? 1 : 0;
        _Bool isconst144 = 0;
        _Bool ternary145;
        if (isconst144) {
          char* t146 = __s1131;
          char* t147 = __s2132;
          _Bool c148 = ((t146 > t147)) ? 1 : 0;
          ternary145 = (_Bool)c148;
        } else {
          _Bool c149 = 0;
          ternary145 = (_Bool)c149;
        }
        _Bool ternary150;
        if (ternary145) {
          char* t151 = __s1131;
          char* t152 = __s2132;
          unsigned long t153 = __n133;
          char* ptr154 = &(t152)[t153];
          _Bool c155 = ((t151 < ptr154)) ? 1 : 0;
          ternary150 = (_Bool)c155;
        } else {
          _Bool c156 = 0;
          ternary150 = (_Bool)c156;
        }
        if (ternary150) {
            do {
                unsigned long t157 = __n133;
                unsigned long u158 = t157 - 1;
                __n133 = u158;
                unsigned long t159 = __n133;
                char* t160 = __s1131;
                char* ptr161 = &(t160)[t159];
                unsigned long t162 = __n133;
                char* t163 = __s2132;
                char* ptr164 = &(t163)[t162];
                __gnu_cxx__char_traits_char___assign(ptr161, ptr164);
              unsigned long t165 = __n133;
              unsigned long c166 = 0;
              _Bool c167 = ((t165 > c166)) ? 1 : 0;
              if (!c167) break;
            } while (1);
        } else {
          char* t168 = __s1131;
          char* t169 = __s2132;
          unsigned long t170 = __n133;
          char* r171 = __gnu_cxx__char_traits_char___copy(t168, t169, t170);
        }
      char* t172 = __s1131;
      __retval134 = t172;
      char* t173 = __retval134;
      return t173;
    }
  char* t174 = __s1131;
  void* cast175 = (void*)t174;
  char* t176 = __s2132;
  void* cast177 = (void*)t176;
  unsigned long t178 = __n133;
  unsigned long c179 = 1;
  unsigned long b180 = t178 * c179;
  void* r181 = memmove(cast175, cast177, b180);
  char* t182 = __s1131;
  __retval134 = t182;
  char* t183 = __retval134;
  return t183;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v184, char* v185, unsigned long v186) {
bb187: ;
  char* __s1188;
  char* __s2189;
  unsigned long __n190;
  char* __retval191;
  __s1188 = v184;
  __s2189 = v185;
  __n190 = v186;
    unsigned long t192 = __n190;
    unsigned long c193 = 0;
    _Bool c194 = ((t192 == c193)) ? 1 : 0;
    if (c194) {
      char* t195 = __s1188;
      __retval191 = t195;
      char* t196 = __retval191;
      return t196;
    }
    _Bool r197 = std____is_constant_evaluated();
    if (r197) {
      char* t198 = __s1188;
      char* t199 = __s2189;
      unsigned long t200 = __n190;
      char* r201 = __gnu_cxx__char_traits_char___move(t198, t199, t200);
      __retval191 = r201;
      char* t202 = __retval191;
      return t202;
    }
  char* t203 = __s1188;
  void* cast204 = (void*)t203;
  char* t205 = __s2189;
  void* cast206 = (void*)t205;
  unsigned long t207 = __n190;
  void* r208 = memmove(cast204, cast206, t207);
  char* cast209 = (char*)r208;
  __retval191 = cast209;
  char* t210 = __retval191;
  return t210;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v211, char* v212, unsigned long v213) {
bb214: ;
  char* __d215;
  char* __s216;
  unsigned long __n217;
  __d215 = v211;
  __s216 = v212;
  __n217 = v213;
    unsigned long t218 = __n217;
    unsigned long c219 = 1;
    _Bool c220 = ((t218 == c219)) ? 1 : 0;
    if (c220) {
      char* t221 = __d215;
      char* t222 = __s216;
      std__char_traits_char___assign(t221, t222);
    } else {
      char* t223 = __d215;
      char* t224 = __s216;
      unsigned long t225 = __n217;
      char* r226 = std__char_traits_char___move(t223, t224, t225);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v227, char* v228, unsigned long v229, char* v230, unsigned long v231, unsigned long v232) {
bb233: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this234;
  char* __p235;
  unsigned long __len1236;
  char* __s237;
  unsigned long __len2238;
  unsigned long __how_much239;
  this234 = v227;
  __p235 = v228;
  __len1236 = v229;
  __s237 = v230;
  __len2238 = v231;
  __how_much239 = v232;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t240 = this234;
    unsigned long t241 = __len2238;
    _Bool cast242 = (_Bool)t241;
    _Bool ternary243;
    if (cast242) {
      unsigned long t244 = __len2238;
      unsigned long t245 = __len1236;
      _Bool c246 = ((t244 <= t245)) ? 1 : 0;
      ternary243 = (_Bool)c246;
    } else {
      _Bool c247 = 0;
      ternary243 = (_Bool)c247;
    }
    if (ternary243) {
      char* t248 = __p235;
      char* t249 = __s237;
      unsigned long t250 = __len2238;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t248, t249, t250);
    }
    unsigned long t251 = __how_much239;
    _Bool cast252 = (_Bool)t251;
    _Bool ternary253;
    if (cast252) {
      unsigned long t254 = __len1236;
      unsigned long t255 = __len2238;
      _Bool c256 = ((t254 != t255)) ? 1 : 0;
      ternary253 = (_Bool)c256;
    } else {
      _Bool c257 = 0;
      ternary253 = (_Bool)c257;
    }
    if (ternary253) {
      char* t258 = __p235;
      unsigned long t259 = __len2238;
      char* ptr260 = &(t258)[t259];
      char* t261 = __p235;
      unsigned long t262 = __len1236;
      char* ptr263 = &(t261)[t262];
      unsigned long t264 = __how_much239;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr260, ptr263, t264);
    }
    unsigned long t265 = __len2238;
    unsigned long t266 = __len1236;
    _Bool c267 = ((t265 > t266)) ? 1 : 0;
    if (c267) {
        char* t268 = __s237;
        unsigned long t269 = __len2238;
        char* ptr270 = &(t268)[t269];
        char* t271 = __p235;
        unsigned long t272 = __len1236;
        char* ptr273 = &(t271)[t272];
        _Bool c274 = ((ptr270 <= ptr273)) ? 1 : 0;
        if (c274) {
          char* t275 = __p235;
          char* t276 = __s237;
          unsigned long t277 = __len2238;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t275, t276, t277);
        } else {
            char* t278 = __s237;
            char* t279 = __p235;
            unsigned long t280 = __len1236;
            char* ptr281 = &(t279)[t280];
            _Bool c282 = ((t278 >= ptr281)) ? 1 : 0;
            if (c282) {
              unsigned long __poff283;
              char* t284 = __s237;
              char* t285 = __p235;
              long diff286 = t284 - t285;
              unsigned long cast287 = (unsigned long)diff286;
              unsigned long t288 = __len2238;
              unsigned long t289 = __len1236;
              unsigned long b290 = t288 - t289;
              unsigned long b291 = cast287 + b290;
              __poff283 = b291;
              char* t292 = __p235;
              char* t293 = __p235;
              unsigned long t294 = __poff283;
              char* ptr295 = &(t293)[t294];
              unsigned long t296 = __len2238;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t292, ptr295, t296);
            } else {
              unsigned long __nleft297;
              char* t298 = __p235;
              unsigned long t299 = __len1236;
              char* ptr300 = &(t298)[t299];
              char* t301 = __s237;
              long diff302 = ptr300 - t301;
              unsigned long cast303 = (unsigned long)diff302;
              __nleft297 = cast303;
              char* t304 = __p235;
              char* t305 = __s237;
              unsigned long t306 = __nleft297;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t304, t305, t306);
              char* t307 = __p235;
              unsigned long t308 = __nleft297;
              char* ptr309 = &(t307)[t308];
              char* t310 = __p235;
              unsigned long t311 = __len2238;
              char* ptr312 = &(t310)[t311];
              unsigned long t313 = __len2238;
              unsigned long t314 = __nleft297;
              unsigned long b315 = t313 - t314;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr309, ptr312, b315);
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v316) {
bb317: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this318;
  unsigned long __retval319;
  this318 = v316;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t320 = this318;
  unsigned long r321 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t320);
  __retval319 = r321;
  unsigned long t322 = __retval319;
  return t322;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v323, unsigned long v324, unsigned long v325, char* v326, unsigned long v327) {
bb328: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this329;
  unsigned long __pos330;
  unsigned long __len1331;
  char* __s332;
  unsigned long __len2333;
  unsigned long __how_much334;
  unsigned long __new_capacity335;
  char* __r336;
  this329 = v323;
  __pos330 = v324;
  __len1331 = v325;
  __s332 = v326;
  __len2333 = v327;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t337 = this329;
  unsigned long r338 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t337);
  unsigned long t339 = __pos330;
  unsigned long b340 = r338 - t339;
  unsigned long t341 = __len1331;
  unsigned long b342 = b340 - t341;
  __how_much334 = b342;
  unsigned long r343 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t337);
  unsigned long t344 = __len2333;
  unsigned long b345 = r343 + t344;
  unsigned long t346 = __len1331;
  unsigned long b347 = b345 - t346;
  __new_capacity335 = b347;
  unsigned long r348 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t337);
  char* r349 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t337, &__new_capacity335, r348);
  __r336 = r349;
    unsigned long t350 = __pos330;
    _Bool cast351 = (_Bool)t350;
    if (cast351) {
      char* t352 = __r336;
      char* r353 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t337);
      unsigned long t354 = __pos330;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t352, r353, t354);
    }
    char* t355 = __s332;
    _Bool cast356 = (_Bool)t355;
    _Bool ternary357;
    if (cast356) {
      unsigned long t358 = __len2333;
      _Bool cast359 = (_Bool)t358;
      ternary357 = (_Bool)cast359;
    } else {
      _Bool c360 = 0;
      ternary357 = (_Bool)c360;
    }
    if (ternary357) {
      char* t361 = __r336;
      unsigned long t362 = __pos330;
      char* ptr363 = &(t361)[t362];
      char* t364 = __s332;
      unsigned long t365 = __len2333;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr363, t364, t365);
    }
    unsigned long t366 = __how_much334;
    _Bool cast367 = (_Bool)t366;
    if (cast367) {
      char* t368 = __r336;
      unsigned long t369 = __pos330;
      char* ptr370 = &(t368)[t369];
      unsigned long t371 = __len2333;
      char* ptr372 = &(ptr370)[t371];
      char* r373 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t337);
      unsigned long t374 = __pos330;
      char* ptr375 = &(r373)[t374];
      unsigned long t376 = __len1331;
      char* ptr377 = &(ptr375)[t376];
      unsigned long t378 = __how_much334;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr372, ptr377, t378);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t337);
  char* t379 = __r336;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t337, t379);
  unsigned long t380 = __new_capacity335;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t337, t380);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v381, unsigned long v382, unsigned long v383, char* v384, unsigned long v385) {
bb386: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this387;
  unsigned long __pos388;
  unsigned long __len1389;
  char* __s390;
  unsigned long __len2391;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval392;
  unsigned long __old_size393;
  unsigned long __new_size394;
  this387 = v381;
  __pos388 = v382;
  __len1389 = v383;
  __s390 = v384;
  __len2391 = v385;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t395 = this387;
  unsigned long t396 = __len1389;
  unsigned long t397 = __len2391;
  char* cast398 = (char*)&(_str_17);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t395, t396, t397, cast398);
  unsigned long r399 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t395);
  __old_size393 = r399;
  unsigned long t400 = __old_size393;
  unsigned long t401 = __len2391;
  unsigned long b402 = t400 + t401;
  unsigned long t403 = __len1389;
  unsigned long b404 = b402 - t403;
  __new_size394 = b404;
    unsigned long t405 = __new_size394;
    unsigned long r406 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t395);
    _Bool c407 = ((t405 <= r406)) ? 1 : 0;
    if (c407) {
      char* __p408;
      unsigned long __how_much409;
      char* r410 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t395);
      unsigned long t411 = __pos388;
      char* ptr412 = &(r410)[t411];
      __p408 = ptr412;
      unsigned long t413 = __old_size393;
      unsigned long t414 = __pos388;
      unsigned long b415 = t413 - t414;
      unsigned long t416 = __len1389;
      unsigned long b417 = b415 - t416;
      __how_much409 = b417;
        _Bool r418 = std__is_constant_evaluated();
        if (r418) {
          char* __newp419;
          struct std__allocator_char_* r420 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t395);
          unsigned long t421 = __new_size394;
          char* r422 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r420, t421);
          __newp419 = r422;
          char* t423 = __newp419;
          char* r424 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t395);
          unsigned long t425 = __pos388;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t423, r424, t425);
          char* t426 = __newp419;
          unsigned long t427 = __pos388;
          char* ptr428 = &(t426)[t427];
          char* t429 = __s390;
          unsigned long t430 = __len2391;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr428, t429, t430);
          char* t431 = __newp419;
          unsigned long t432 = __pos388;
          char* ptr433 = &(t431)[t432];
          unsigned long t434 = __len2391;
          char* ptr435 = &(ptr433)[t434];
          char* t436 = __p408;
          unsigned long t437 = __len1389;
          char* ptr438 = &(t436)[t437];
          unsigned long t439 = __how_much409;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr435, ptr438, t439);
          char* r440 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t395);
          char* t441 = __newp419;
          unsigned long t442 = __new_size394;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r440, t441, t442);
          struct std__allocator_char_* r443 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t395);
          char* t444 = __newp419;
          unsigned long t445 = __new_size394;
          std__allocator_char___deallocate(r443, t444, t445);
        } else {
            char* t446 = __s390;
            _Bool r447 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t395, t446);
            if (r447) {
                unsigned long t448 = __how_much409;
                _Bool cast449 = (_Bool)t448;
                _Bool ternary450;
                if (cast449) {
                  unsigned long t451 = __len1389;
                  unsigned long t452 = __len2391;
                  _Bool c453 = ((t451 != t452)) ? 1 : 0;
                  ternary450 = (_Bool)c453;
                } else {
                  _Bool c454 = 0;
                  ternary450 = (_Bool)c454;
                }
                if (ternary450) {
                  char* t455 = __p408;
                  unsigned long t456 = __len2391;
                  char* ptr457 = &(t455)[t456];
                  char* t458 = __p408;
                  unsigned long t459 = __len1389;
                  char* ptr460 = &(t458)[t459];
                  unsigned long t461 = __how_much409;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr457, ptr460, t461);
                }
                unsigned long t462 = __len2391;
                _Bool cast463 = (_Bool)t462;
                if (cast463) {
                  char* t464 = __p408;
                  char* t465 = __s390;
                  unsigned long t466 = __len2391;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t464, t465, t466);
                }
            } else {
              char* t467 = __p408;
              unsigned long t468 = __len1389;
              char* t469 = __s390;
              unsigned long t470 = __len2391;
              unsigned long t471 = __how_much409;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t395, t467, t468, t469, t470, t471);
            }
        }
    } else {
      unsigned long t472 = __pos388;
      unsigned long t473 = __len1389;
      char* t474 = __s390;
      unsigned long t475 = __len2391;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t395, t472, t473, t474, t475);
    }
  unsigned long t476 = __new_size394;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t395, t476);
  __retval392 = t395;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t477 = __retval392;
  return t477;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v478, unsigned long v479, char* v480) {
bb481: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this482;
  unsigned long __pos483;
  char* __s484;
  unsigned long __retval485;
  this482 = v478;
  __pos483 = v479;
  __s484 = v480;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t486 = this482;
    unsigned long t487 = __pos483;
    unsigned long r488 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t486);
    _Bool c489 = ((t487 > r488)) ? 1 : 0;
    if (c489) {
      char* cast490 = (char*)&(_str_18);
      char* t491 = __s484;
      unsigned long t492 = __pos483;
      unsigned long r493 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t486);
      std____throw_out_of_range_fmt(cast490, t491, t492, r493);
    }
  unsigned long t494 = __pos483;
  __retval485 = t494;
  unsigned long t495 = __retval485;
  return t495;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v496, unsigned long v497, unsigned long v498) {
bb499: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this500;
  unsigned long __pos501;
  unsigned long __off502;
  unsigned long __retval503;
  _Bool __testoff504;
  this500 = v496;
  __pos501 = v497;
  __off502 = v498;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t505 = this500;
  unsigned long t506 = __off502;
  unsigned long r507 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t505);
  unsigned long t508 = __pos501;
  unsigned long b509 = r507 - t508;
  _Bool c510 = ((t506 < b509)) ? 1 : 0;
  __testoff504 = c510;
  _Bool t511 = __testoff504;
  unsigned long ternary512;
  if (t511) {
    unsigned long t513 = __off502;
    ternary512 = (unsigned long)t513;
  } else {
    unsigned long r514 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t505);
    unsigned long t515 = __pos501;
    unsigned long b516 = r514 - t515;
    ternary512 = (unsigned long)b516;
  }
  __retval503 = ternary512;
  unsigned long t517 = __retval503;
  return t517;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v518, unsigned long v519, unsigned long v520, char* v521, unsigned long v522) {
bb523: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this524;
  unsigned long __pos525;
  unsigned long __n1526;
  char* __s527;
  unsigned long __n2528;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval529;
  this524 = v518;
  __pos525 = v519;
  __n1526 = v520;
  __s527 = v521;
  __n2528 = v522;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t530 = this524;
  unsigned long t531 = __pos525;
  char* cast532 = (char*)&(_str_16);
  unsigned long r533 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t530, t531, cast532);
  unsigned long t534 = __pos525;
  unsigned long t535 = __n1526;
  unsigned long r536 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t530, t534, t535);
  char* t537 = __s527;
  unsigned long t538 = __n2528;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r539 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t530, r533, r536, t537, t538);
  __retval529 = r539;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t540 = __retval529;
  return t540;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v541) {
bb542: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this543;
  unsigned long __retval544;
  unsigned long __sz545;
  this543 = v541;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t546 = this543;
  unsigned long t547 = t546->_M_string_length;
  __sz545 = t547;
    unsigned long t548 = __sz545;
    unsigned long r549 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t546);
    _Bool c550 = ((t548 > r549)) ? 1 : 0;
    if (c550) {
      __builtin_unreachable();
    }
  unsigned long t551 = __sz545;
  __retval544 = t551;
  unsigned long t552 = __retval544;
  return t552;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEmRKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v553, unsigned long v554, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v555) {
bb556: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this557;
  unsigned long __pos1558;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str559;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval560;
  this557 = v553;
  __pos1558 = v554;
  __str559 = v555;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t561 = this557;
  unsigned long t562 = __pos1558;
  unsigned long c563 = 0;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t564 = __str559;
  char* r565 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t564);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t566 = __str559;
  unsigned long r567 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t566);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r568 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(t561, t562, c563, r565, r567);
  __retval560 = r568;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t569 = __retval560;
  return t569;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v570, char* v571) {
bb572: ;
  char* __c1573;
  char* __c2574;
  _Bool __retval575;
  __c1573 = v570;
  __c2574 = v571;
  char* t576 = __c1573;
  char t577 = *t576;
  unsigned char cast578 = (unsigned char)t577;
  int cast579 = (int)cast578;
  char* t580 = __c2574;
  char t581 = *t580;
  unsigned char cast582 = (unsigned char)t581;
  int cast583 = (int)cast582;
  _Bool c584 = ((cast579 < cast583)) ? 1 : 0;
  __retval575 = c584;
  _Bool t585 = __retval575;
  return t585;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v586, char* v587, unsigned long v588) {
bb589: ;
  char* __s1590;
  char* __s2591;
  unsigned long __n592;
  int __retval593;
  __s1590 = v586;
  __s2591 = v587;
  __n592 = v588;
    unsigned long t594 = __n592;
    unsigned long c595 = 0;
    _Bool c596 = ((t594 == c595)) ? 1 : 0;
    if (c596) {
      int c597 = 0;
      __retval593 = c597;
      int t598 = __retval593;
      return t598;
    }
    _Bool r599 = std____is_constant_evaluated();
    if (r599) {
        unsigned long __i600;
        unsigned long c601 = 0;
        __i600 = c601;
        while (1) {
          unsigned long t603 = __i600;
          unsigned long t604 = __n592;
          _Bool c605 = ((t603 < t604)) ? 1 : 0;
          if (!c605) break;
            unsigned long t606 = __i600;
            char* t607 = __s1590;
            char* ptr608 = &(t607)[t606];
            unsigned long t609 = __i600;
            char* t610 = __s2591;
            char* ptr611 = &(t610)[t609];
            _Bool r612 = std__char_traits_char___lt(ptr608, ptr611);
            if (r612) {
              int c613 = -1;
              __retval593 = c613;
              int t614 = __retval593;
              int ret_val615 = t614;
              return ret_val615;
            } else {
                unsigned long t616 = __i600;
                char* t617 = __s2591;
                char* ptr618 = &(t617)[t616];
                unsigned long t619 = __i600;
                char* t620 = __s1590;
                char* ptr621 = &(t620)[t619];
                _Bool r622 = std__char_traits_char___lt(ptr618, ptr621);
                if (r622) {
                  int c623 = 1;
                  __retval593 = c623;
                  int t624 = __retval593;
                  int ret_val625 = t624;
                  return ret_val625;
                }
            }
        for_step602: ;
          unsigned long t626 = __i600;
          unsigned long u627 = t626 + 1;
          __i600 = u627;
        }
      int c628 = 0;
      __retval593 = c628;
      int t629 = __retval593;
      return t629;
    }
  char* t630 = __s1590;
  void* cast631 = (void*)t630;
  char* t632 = __s2591;
  void* cast633 = (void*)t632;
  unsigned long t634 = __n592;
  int r635 = memcmp(cast631, cast633, t634);
  __retval593 = r635;
  int t636 = __retval593;
  return t636;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v637) {
bb638: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this639;
  char* __retval640;
  this639 = v637;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t641 = this639;
  char* r642 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t641);
  __retval640 = r642;
  char* t643 = __retval640;
  return t643;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v644, char* v645) {
bb646: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs647;
  char* __rhs648;
  _Bool __retval649;
  __lhs647 = v644;
  __rhs648 = v645;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t650 = __lhs647;
  unsigned long r651 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t650);
  char* t652 = __rhs648;
  unsigned long r653 = std__char_traits_char___length(t652);
  _Bool c654 = ((r651 == r653)) ? 1 : 0;
  _Bool ternary655;
  if (c654) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t656 = __lhs647;
    char* r657 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t656);
    char* t658 = __rhs648;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t659 = __lhs647;
    unsigned long r660 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t659);
    int r661 = std__char_traits_char___compare(r657, t658, r660);
    _Bool cast662 = (_Bool)r661;
    _Bool u663 = !cast662;
    ternary655 = (_Bool)u663;
  } else {
    _Bool c664 = 0;
    ternary655 = (_Bool)c664;
  }
  __retval649 = ternary655;
  _Bool t665 = __retval649;
  return t665;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEmRKS4_mm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v666, unsigned long v667, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v668, unsigned long v669, unsigned long v670) {
bb671: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this672;
  unsigned long __pos1673;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str674;
  unsigned long __pos2675;
  unsigned long __n676;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval677;
  this672 = v666;
  __pos1673 = v667;
  __str674 = v668;
  __pos2675 = v669;
  __n676 = v670;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t678 = this672;
  unsigned long t679 = __pos1673;
  unsigned long c680 = 0;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t681 = __str674;
  char* r682 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t681);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t683 = __str674;
  unsigned long t684 = __pos2675;
  char* cast685 = (char*)&(_str_19);
  unsigned long r686 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t683, t684, cast685);
  char* ptr687 = &(r682)[r686];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t688 = __str674;
  unsigned long t689 = __pos2675;
  unsigned long t690 = __n676;
  unsigned long r691 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t688, t689, t690);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r692 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(t678, t679, c680, ptr687, r691);
  __retval677 = r692;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t693 = __retval677;
  return t693;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v694, unsigned long v695, char* v696, unsigned long v697) {
bb698: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this699;
  unsigned long __pos700;
  char* __s701;
  unsigned long __n702;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval703;
  this699 = v694;
  __pos700 = v695;
  __s701 = v696;
  __n702 = v697;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t704 = this699;
  unsigned long t705 = __pos700;
  unsigned long c706 = 0;
  char* t707 = __s701;
  unsigned long t708 = __n702;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r709 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(t704, t705, c706, t707, t708);
  __retval703 = r709;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t710 = __retval703;
  return t710;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEmPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v711, unsigned long v712, char* v713) {
bb714: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this715;
  unsigned long __pos716;
  char* __s717;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval718;
  this715 = v711;
  __pos716 = v712;
  __s717 = v713;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t719 = this715;
  unsigned long t720 = __pos716;
  unsigned long c721 = 0;
  char* t722 = __s717;
  char* t723 = __s717;
  unsigned long r724 = std__char_traits_char___length(t723);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r725 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(t719, t720, c721, t722, r724);
  __retval718 = r725;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t726 = __retval718;
  return t726;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v727, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v728) {
bb729: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os730;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str731;
  struct std__basic_ostream_char__std__char_traits_char__* __retval732;
  __os730 = v727;
  __str731 = v728;
  struct std__basic_ostream_char__std__char_traits_char__* t733 = __os730;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t734 = __str731;
  char* r735 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t734);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t736 = __str731;
  unsigned long r737 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t736);
  long cast738 = (long)r737;
  struct std__basic_ostream_char__std__char_traits_char__* r739 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t733, r735, cast738);
  __retval732 = r739;
  struct std__basic_ostream_char__std__char_traits_char__* t740 = __retval732;
  return t740;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v741, void* v742) {
bb743: ;
  struct std__basic_ostream_char__std__char_traits_char__* this744;
  void* __pf745;
  struct std__basic_ostream_char__std__char_traits_char__* __retval746;
  this744 = v741;
  __pf745 = v742;
  struct std__basic_ostream_char__std__char_traits_char__* t747 = this744;
  void* t748 = __pf745;
  struct std__basic_ostream_char__std__char_traits_char__* r749 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t748)(t747);
  __retval746 = r749;
  struct std__basic_ostream_char__std__char_traits_char__* t750 = __retval746;
  return t750;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v751) {
bb752: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os753;
  struct std__basic_ostream_char__std__char_traits_char__* __retval754;
  __os753 = v751;
  struct std__basic_ostream_char__std__char_traits_char__* t755 = __os753;
  struct std__basic_ostream_char__std__char_traits_char__* r756 = std__ostream__flush(t755);
  __retval754 = r756;
  struct std__basic_ostream_char__std__char_traits_char__* t757 = __retval754;
  return t757;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v758) {
bb759: ;
  struct std__ctype_char_* __f760;
  struct std__ctype_char_* __retval761;
  __f760 = v758;
    struct std__ctype_char_* t762 = __f760;
    _Bool cast763 = (_Bool)t762;
    _Bool u764 = !cast763;
    if (u764) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t765 = __f760;
  __retval761 = t765;
  struct std__ctype_char_* t766 = __retval761;
  return t766;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v767, char v768) {
bb769: ;
  struct std__ctype_char_* this770;
  char __c771;
  char __retval772;
  this770 = v767;
  __c771 = v768;
  struct std__ctype_char_* t773 = this770;
    char t774 = t773->_M_widen_ok;
    _Bool cast775 = (_Bool)t774;
    if (cast775) {
      char t776 = __c771;
      unsigned char cast777 = (unsigned char)t776;
      unsigned long cast778 = (unsigned long)cast777;
      char t779 = t773->_M_widen[cast778];
      __retval772 = t779;
      char t780 = __retval772;
      return t780;
    }
  std__ctype_char____M_widen_init___const(t773);
  char t781 = __c771;
  void** v782 = (void**)t773;
  void* v783 = *((void**)v782);
  char vcall786 = (char)__VERIFIER_virtual_call_char_char(t773, 6, t781);
  __retval772 = vcall786;
  char t787 = __retval772;
  return t787;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v788, char v789) {
bb790: ;
  struct std__basic_ios_char__std__char_traits_char__* this791;
  char __c792;
  char __retval793;
  this791 = v788;
  __c792 = v789;
  struct std__basic_ios_char__std__char_traits_char__* t794 = this791;
  struct std__ctype_char_* t795 = t794->_M_ctype;
  struct std__ctype_char_* r796 = std__ctype_char__const__std____check_facet_std__ctype_char___(t795);
  char t797 = __c792;
  char r798 = std__ctype_char___widen_char__const(r796, t797);
  __retval793 = r798;
  char t799 = __retval793;
  return t799;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v800) {
bb801: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os802;
  struct std__basic_ostream_char__std__char_traits_char__* __retval803;
  __os802 = v800;
  struct std__basic_ostream_char__std__char_traits_char__* t804 = __os802;
  struct std__basic_ostream_char__std__char_traits_char__* t805 = __os802;
  void** v806 = (void**)t805;
  void* v807 = *((void**)v806);
  unsigned char* cast808 = (unsigned char*)v807;
  long c809 = -24;
  unsigned char* ptr810 = &(cast808)[c809];
  long* cast811 = (long*)ptr810;
  long t812 = *cast811;
  unsigned char* cast813 = (unsigned char*)t805;
  unsigned char* ptr814 = &(cast813)[t812];
  struct std__basic_ostream_char__std__char_traits_char__* cast815 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr814;
  struct std__basic_ios_char__std__char_traits_char__* cast816 = (struct std__basic_ios_char__std__char_traits_char__*)cast815;
  char c817 = 10;
  char r818 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast816, c817);
  struct std__basic_ostream_char__std__char_traits_char__* r819 = std__ostream__put(t804, r818);
  struct std__basic_ostream_char__std__char_traits_char__* r820 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r819);
  __retval803 = r820;
  struct std__basic_ostream_char__std__char_traits_char__* t821 = __retval803;
  return t821;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v822) {
bb823: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this824;
  this824 = v822;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t825 = this824;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t825);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t825->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb826: ;
  int __retval827;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str828;
  struct std__allocator_char_ ref_tmp0829;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2830;
  struct std__allocator_char_ ref_tmp1831;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3832;
  struct std__allocator_char_ ref_tmp2833;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ it834;
  int c835 = 0;
  __retval827 = c835;
  char* cast836 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0829);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str828, cast836, &ref_tmp0829);
  {
    std__allocator_char____allocator(&ref_tmp0829);
  }
    char* cast837 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp1831);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str2830, cast837, &ref_tmp1831);
    {
      std__allocator_char____allocator(&ref_tmp1831);
    }
      char* cast838 = (char*)&(_str_2);
      std__allocator_char___allocator_2(&ref_tmp2833);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str3832, cast838, &ref_tmp2833);
      {
        std__allocator_char____allocator(&ref_tmp2833);
      }
        __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&it834);
        unsigned long c839 = 6;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r840 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_3(&str828, c839, &str2830);
        char* cast841 = (char*)&(_str_3);
        _Bool r842 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str828, cast841);
        if (r842) {
        } else {
          char* cast843 = (char*)&(_str_4);
          char* c844 = (char*)_str_5;
          unsigned int c845 = 23;
          char* cast846 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast843, c844, c845, cast846);
        }
        unsigned long c847 = 6;
        unsigned long c848 = 3;
        unsigned long c849 = 4;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r850 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_4(&str828, c847, &str3832, c848, c849);
        char* cast851 = (char*)&(_str_6);
        _Bool r852 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str828, cast851);
        if (r852) {
        } else {
          char* cast853 = (char*)&(_str_7);
          char* c854 = (char*)_str_5;
          unsigned int c855 = 26;
          char* cast856 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast853, c854, c855, cast856);
        }
        unsigned long c857 = 10;
        char* cast858 = (char*)&(_str_8);
        unsigned long c859 = 8;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r860 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_2(&str828, c857, cast858, c859);
        char* cast861 = (char*)&(_str_9);
        _Bool r862 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str828, cast861);
        if (r862) {
        } else {
          char* cast863 = (char*)&(_str_10);
          char* c864 = (char*)_str_5;
          unsigned int c865 = 29;
          char* cast866 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast863, c864, c865, cast866);
        }
        unsigned long c867 = 10;
        char* cast868 = (char*)&(_str_11);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r869 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert(&str828, c867, cast868);
        char* cast870 = (char*)&(_str_12);
        _Bool r871 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str828, cast870);
        if (r871) {
        } else {
          char* cast872 = (char*)&(_str_13);
          char* c873 = (char*)_str_5;
          unsigned int c874 = 32;
          char* cast875 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast872, c873, c874, cast875);
        }
        struct std__basic_ostream_char__std__char_traits_char__* r876 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str828);
        struct std__basic_ostream_char__std__char_traits_char__* r877 = std__ostream__operator___std__ostream_____(r876, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int c878 = 0;
        __retval827 = c878;
        int t879 = __retval827;
        int ret_val880 = t879;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str3832);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2830);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str828);
        }
        return ret_val880;
  int t881 = __retval827;
  return t881;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v882) {
bb883: ;
  struct std____new_allocator_char_* this884;
  this884 = v882;
  struct std____new_allocator_char_* t885 = this884;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v886) {
bb887: ;
  char* __r888;
  char* __retval889;
  __r888 = v886;
  char* t890 = __r888;
  __retval889 = t890;
  char* t891 = __retval889;
  return t891;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v892) {
bb893: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this894;
  char* __retval895;
  this894 = v892;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t896 = this894;
  char* cast897 = (char*)&(t896->field2._M_local_buf);
  char* r898 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast897);
  __retval895 = r898;
  char* t899 = __retval895;
  return t899;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v900, char* v901, struct std__allocator_char_* v902) {
bb903: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this904;
  char* __dat905;
  struct std__allocator_char_* __a906;
  this904 = v900;
  __dat905 = v901;
  __a906 = v902;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t907 = this904;
  struct std__allocator_char_* base908 = (struct std__allocator_char_*)((char *)t907 + 0);
  struct std__allocator_char_* t909 = __a906;
  std__allocator_char___allocator(base908, t909);
    char* t910 = __dat905;
    t907->_M_p = t910;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb911: ;
  _Bool __retval912;
    _Bool c913 = 0;
    __retval912 = c913;
    _Bool t914 = __retval912;
    return t914;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v915, char* v916) {
bb917: ;
  char* __c1918;
  char* __c2919;
  _Bool __retval920;
  __c1918 = v915;
  __c2919 = v916;
  char* t921 = __c1918;
  char t922 = *t921;
  int cast923 = (int)t922;
  char* t924 = __c2919;
  char t925 = *t924;
  int cast926 = (int)t925;
  _Bool c927 = ((cast923 == cast926)) ? 1 : 0;
  __retval920 = c927;
  _Bool t928 = __retval920;
  return t928;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v929) {
bb930: ;
  char* __p931;
  unsigned long __retval932;
  unsigned long __i933;
  __p931 = v929;
  unsigned long c934 = 0;
  __i933 = c934;
    char ref_tmp0935;
    while (1) {
      unsigned long t936 = __i933;
      char* t937 = __p931;
      char* ptr938 = &(t937)[t936];
      char c939 = 0;
      ref_tmp0935 = c939;
      _Bool r940 = __gnu_cxx__char_traits_char___eq(ptr938, &ref_tmp0935);
      _Bool u941 = !r940;
      if (!u941) break;
      unsigned long t942 = __i933;
      unsigned long u943 = t942 + 1;
      __i933 = u943;
    }
  unsigned long t944 = __i933;
  __retval932 = t944;
  unsigned long t945 = __retval932;
  return t945;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v946) {
bb947: ;
  char* __s948;
  unsigned long __retval949;
  __s948 = v946;
    _Bool r950 = std____is_constant_evaluated();
    if (r950) {
      char* t951 = __s948;
      unsigned long r952 = __gnu_cxx__char_traits_char___length(t951);
      __retval949 = r952;
      unsigned long t953 = __retval949;
      return t953;
    }
  char* t954 = __s948;
  unsigned long r955 = strlen(t954);
  __retval949 = r955;
  unsigned long t956 = __retval949;
  return t956;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v957, char* v958, struct std__random_access_iterator_tag v959) {
bb960: ;
  char* __first961;
  char* __last962;
  struct std__random_access_iterator_tag unnamed963;
  long __retval964;
  __first961 = v957;
  __last962 = v958;
  unnamed963 = v959;
  char* t965 = __last962;
  char* t966 = __first961;
  long diff967 = t965 - t966;
  __retval964 = diff967;
  long t968 = __retval964;
  return t968;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v969) {
bb970: ;
  char** unnamed971;
  struct std__random_access_iterator_tag __retval972;
  unnamed971 = v969;
  struct std__random_access_iterator_tag t973 = __retval972;
  return t973;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v974, char* v975) {
bb976: ;
  char* __first977;
  char* __last978;
  long __retval979;
  struct std__random_access_iterator_tag agg_tmp0980;
  __first977 = v974;
  __last978 = v975;
  char* t981 = __first977;
  char* t982 = __last978;
  struct std__random_access_iterator_tag r983 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first977);
  agg_tmp0980 = r983;
  struct std__random_access_iterator_tag t984 = agg_tmp0980;
  long r985 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t981, t982, t984);
  __retval979 = r985;
  long t986 = __retval979;
  return t986;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v987, char* v988) {
bb989: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this990;
  char* __p991;
  this990 = v987;
  __p991 = v988;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t992 = this990;
  char* t993 = __p991;
  t992->_M_dataplus._M_p = t993;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v994) {
bb995: ;
  struct std__allocator_char_* __a996;
  unsigned long __retval997;
  __a996 = v994;
  unsigned long c998 = -1;
  unsigned long c999 = 1;
  unsigned long b1000 = c998 / c999;
  __retval997 = b1000;
  unsigned long t1001 = __retval997;
  return t1001;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1002) {
bb1003: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1004;
  struct std__allocator_char_* __retval1005;
  this1004 = v1002;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1006 = this1004;
  struct std__allocator_char_* base1007 = (struct std__allocator_char_*)((char *)&(t1006->_M_dataplus) + 0);
  __retval1005 = base1007;
  struct std__allocator_char_* t1008 = __retval1005;
  return t1008;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1009, unsigned long* v1010) {
bb1011: ;
  unsigned long* __a1012;
  unsigned long* __b1013;
  unsigned long* __retval1014;
  __a1012 = v1009;
  __b1013 = v1010;
    unsigned long* t1015 = __b1013;
    unsigned long t1016 = *t1015;
    unsigned long* t1017 = __a1012;
    unsigned long t1018 = *t1017;
    _Bool c1019 = ((t1016 < t1018)) ? 1 : 0;
    if (c1019) {
      unsigned long* t1020 = __b1013;
      __retval1014 = t1020;
      unsigned long* t1021 = __retval1014;
      return t1021;
    }
  unsigned long* t1022 = __a1012;
  __retval1014 = t1022;
  unsigned long* t1023 = __retval1014;
  return t1023;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1024) {
bb1025: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1026;
  unsigned long __retval1027;
  unsigned long __diffmax1028;
  unsigned long __allocmax1029;
  this1026 = v1024;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1030 = this1026;
  unsigned long c1031 = 9223372036854775807;
  __diffmax1028 = c1031;
  struct std__allocator_char_* r1032 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1030);
  unsigned long r1033 = std__allocator_traits_std__allocator_char_____max_size(r1032);
  __allocmax1029 = r1033;
  unsigned long* r1034 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1028, &__allocmax1029);
  unsigned long t1035 = *r1034;
  unsigned long c1036 = 1;
  unsigned long b1037 = t1035 - c1036;
  __retval1027 = b1037;
  unsigned long t1038 = __retval1027;
  return t1038;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1039) {
bb1040: ;
  struct std____new_allocator_char_* this1041;
  unsigned long __retval1042;
  this1041 = v1039;
  struct std____new_allocator_char_* t1043 = this1041;
  unsigned long c1044 = 9223372036854775807;
  unsigned long c1045 = 1;
  unsigned long b1046 = c1044 / c1045;
  __retval1042 = b1046;
  unsigned long t1047 = __retval1042;
  return t1047;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1048, unsigned long v1049, void* v1050) {
bb1051: ;
  struct std____new_allocator_char_* this1052;
  unsigned long __n1053;
  void* unnamed1054;
  char* __retval1055;
  this1052 = v1048;
  __n1053 = v1049;
  unnamed1054 = v1050;
  struct std____new_allocator_char_* t1056 = this1052;
    unsigned long t1057 = __n1053;
    unsigned long r1058 = std____new_allocator_char____M_max_size___const(t1056);
    _Bool c1059 = ((t1057 > r1058)) ? 1 : 0;
    if (c1059) {
        unsigned long t1060 = __n1053;
        unsigned long c1061 = -1;
        unsigned long c1062 = 1;
        unsigned long b1063 = c1061 / c1062;
        _Bool c1064 = ((t1060 > b1063)) ? 1 : 0;
        if (c1064) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1065 = 1;
    unsigned long c1066 = 16;
    _Bool c1067 = ((c1065 > c1066)) ? 1 : 0;
    if (c1067) {
      unsigned long __al1068;
      unsigned long c1069 = 1;
      __al1068 = c1069;
      unsigned long t1070 = __n1053;
      unsigned long c1071 = 1;
      unsigned long b1072 = t1070 * c1071;
      unsigned long t1073 = __al1068;
      void* r1074 = operator_new_2(b1072, t1073);
      char* cast1075 = (char*)r1074;
      __retval1055 = cast1075;
      char* t1076 = __retval1055;
      return t1076;
    }
  unsigned long t1077 = __n1053;
  unsigned long c1078 = 1;
  unsigned long b1079 = t1077 * c1078;
  void* r1080 = operator_new(b1079);
  char* cast1081 = (char*)r1080;
  __retval1055 = cast1081;
  char* t1082 = __retval1055;
  return t1082;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1083, unsigned long v1084) {
bb1085: ;
  struct std__allocator_char_* this1086;
  unsigned long __n1087;
  char* __retval1088;
  this1086 = v1083;
  __n1087 = v1084;
  struct std__allocator_char_* t1089 = this1086;
    _Bool r1090 = std____is_constant_evaluated();
    if (r1090) {
        unsigned long t1091 = __n1087;
        unsigned long c1092 = 1;
        unsigned long ovr1093;
        _Bool ovf1094 = __builtin_mul_overflow(t1091, c1092, &ovr1093);
        __n1087 = ovr1093;
        if (ovf1094) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1095 = __n1087;
      void* r1096 = operator_new(t1095);
      char* cast1097 = (char*)r1096;
      __retval1088 = cast1097;
      char* t1098 = __retval1088;
      return t1098;
    }
  struct std____new_allocator_char_* base1099 = (struct std____new_allocator_char_*)((char *)t1089 + 0);
  unsigned long t1100 = __n1087;
  void* c1101 = ((void*)0);
  char* r1102 = std____new_allocator_char___allocate(base1099, t1100, c1101);
  __retval1088 = r1102;
  char* t1103 = __retval1088;
  return t1103;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1104, unsigned long v1105) {
bb1106: ;
  struct std__allocator_char_* __a1107;
  unsigned long __n1108;
  char* __retval1109;
  __a1107 = v1104;
  __n1108 = v1105;
  struct std__allocator_char_* t1110 = __a1107;
  unsigned long t1111 = __n1108;
  char* r1112 = std__allocator_char___allocate(t1110, t1111);
  __retval1109 = r1112;
  char* t1113 = __retval1109;
  return t1113;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1114, unsigned long v1115) {
bb1116: ;
  struct std__allocator_char_* __a1117;
  unsigned long __n1118;
  char* __retval1119;
  char* __p1120;
  __a1117 = v1114;
  __n1118 = v1115;
  struct std__allocator_char_* t1121 = __a1117;
  unsigned long t1122 = __n1118;
  char* r1123 = std__allocator_traits_std__allocator_char_____allocate(t1121, t1122);
  __p1120 = r1123;
  char* t1124 = __p1120;
  __retval1119 = t1124;
  char* t1125 = __retval1119;
  return t1125;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1126) {
bb1127: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1128;
  struct std__allocator_char_* __retval1129;
  this1128 = v1126;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1130 = this1128;
  struct std__allocator_char_* base1131 = (struct std__allocator_char_*)((char *)&(t1130->_M_dataplus) + 0);
  __retval1129 = base1131;
  struct std__allocator_char_* t1132 = __retval1129;
  return t1132;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1133, unsigned long* v1134, unsigned long v1135) {
bb1136: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1137;
  unsigned long* __capacity1138;
  unsigned long __old_capacity1139;
  char* __retval1140;
  this1137 = v1133;
  __capacity1138 = v1134;
  __old_capacity1139 = v1135;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1141 = this1137;
    unsigned long* t1142 = __capacity1138;
    unsigned long t1143 = *t1142;
    unsigned long r1144 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1141);
    _Bool c1145 = ((t1143 > r1144)) ? 1 : 0;
    if (c1145) {
      char* cast1146 = (char*)&(_str_15);
      std____throw_length_error(cast1146);
    }
    unsigned long* t1147 = __capacity1138;
    unsigned long t1148 = *t1147;
    unsigned long t1149 = __old_capacity1139;
    _Bool c1150 = ((t1148 > t1149)) ? 1 : 0;
    _Bool ternary1151;
    if (c1150) {
      unsigned long* t1152 = __capacity1138;
      unsigned long t1153 = *t1152;
      unsigned long c1154 = 2;
      unsigned long t1155 = __old_capacity1139;
      unsigned long b1156 = c1154 * t1155;
      _Bool c1157 = ((t1153 < b1156)) ? 1 : 0;
      ternary1151 = (_Bool)c1157;
    } else {
      _Bool c1158 = 0;
      ternary1151 = (_Bool)c1158;
    }
    if (ternary1151) {
      unsigned long c1159 = 2;
      unsigned long t1160 = __old_capacity1139;
      unsigned long b1161 = c1159 * t1160;
      unsigned long* t1162 = __capacity1138;
      *t1162 = b1161;
        unsigned long* t1163 = __capacity1138;
        unsigned long t1164 = *t1163;
        unsigned long r1165 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1141);
        _Bool c1166 = ((t1164 > r1165)) ? 1 : 0;
        if (c1166) {
          unsigned long r1167 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1141);
          unsigned long* t1168 = __capacity1138;
          *t1168 = r1167;
        }
    }
  struct std__allocator_char_* r1169 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1141);
  unsigned long* t1170 = __capacity1138;
  unsigned long t1171 = *t1170;
  unsigned long c1172 = 1;
  unsigned long b1173 = t1171 + c1172;
  char* r1174 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1169, b1173);
  __retval1140 = r1174;
  char* t1175 = __retval1140;
  return t1175;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1176, unsigned long v1177) {
bb1178: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1179;
  unsigned long __capacity1180;
  this1179 = v1176;
  __capacity1180 = v1177;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1181 = this1179;
  unsigned long t1182 = __capacity1180;
  t1181->field2._M_allocated_capacity = t1182;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1183: ;
  _Bool __retval1184;
    _Bool c1185 = 0;
    __retval1184 = c1185;
    _Bool t1186 = __retval1184;
    return t1186;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1187) {
bb1188: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1189;
  this1189 = v1187;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1190 = this1189;
    _Bool r1191 = std__is_constant_evaluated();
    if (r1191) {
        unsigned long __i1192;
        unsigned long c1193 = 0;
        __i1192 = c1193;
        while (1) {
          unsigned long t1195 = __i1192;
          unsigned long c1196 = 15;
          _Bool c1197 = ((t1195 <= c1196)) ? 1 : 0;
          if (!c1197) break;
          char c1198 = 0;
          unsigned long t1199 = __i1192;
          t1190->field2._M_local_buf[t1199] = c1198;
        for_step1194: ;
          unsigned long t1200 = __i1192;
          unsigned long u1201 = t1200 + 1;
          __i1192 = u1201;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1202, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1203) {
bb1204: ;
  struct _Guard* this1205;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1206;
  this1205 = v1202;
  __s1206 = v1203;
  struct _Guard* t1207 = this1205;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1208 = __s1206;
  t1207->_M_guarded = t1208;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1209, char* v1210) {
bb1211: ;
  char* __location1212;
  char* __args1213;
  char* __retval1214;
  void* __loc1215;
  __location1212 = v1209;
  __args1213 = v1210;
  char* t1216 = __location1212;
  void* cast1217 = (void*)t1216;
  __loc1215 = cast1217;
    void* t1218 = __loc1215;
    char* cast1219 = (char*)t1218;
    char* t1220 = __args1213;
    char t1221 = *t1220;
    *cast1219 = t1221;
    __retval1214 = cast1219;
    char* t1222 = __retval1214;
    return t1222;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1223, char* v1224) {
bb1225: ;
  char* __c11226;
  char* __c21227;
  __c11226 = v1223;
  __c21227 = v1224;
    _Bool r1228 = std____is_constant_evaluated();
    if (r1228) {
      char* t1229 = __c11226;
      char* t1230 = __c21227;
      char* r1231 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1229, t1230);
    } else {
      char* t1232 = __c21227;
      char t1233 = *t1232;
      char* t1234 = __c11226;
      *t1234 = t1233;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1235, char* v1236, unsigned long v1237) {
bb1238: ;
  char* __s11239;
  char* __s21240;
  unsigned long __n1241;
  char* __retval1242;
  __s11239 = v1235;
  __s21240 = v1236;
  __n1241 = v1237;
    unsigned long t1243 = __n1241;
    unsigned long c1244 = 0;
    _Bool c1245 = ((t1243 == c1244)) ? 1 : 0;
    if (c1245) {
      char* t1246 = __s11239;
      __retval1242 = t1246;
      char* t1247 = __retval1242;
      return t1247;
    }
    _Bool r1248 = std____is_constant_evaluated();
    if (r1248) {
        unsigned long __i1249;
        unsigned long c1250 = 0;
        __i1249 = c1250;
        while (1) {
          unsigned long t1252 = __i1249;
          unsigned long t1253 = __n1241;
          _Bool c1254 = ((t1252 < t1253)) ? 1 : 0;
          if (!c1254) break;
          char* t1255 = __s11239;
          unsigned long t1256 = __i1249;
          char* ptr1257 = &(t1255)[t1256];
          unsigned long t1258 = __i1249;
          char* t1259 = __s21240;
          char* ptr1260 = &(t1259)[t1258];
          char* r1261 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1257, ptr1260);
        for_step1251: ;
          unsigned long t1262 = __i1249;
          unsigned long u1263 = t1262 + 1;
          __i1249 = u1263;
        }
      char* t1264 = __s11239;
      __retval1242 = t1264;
      char* t1265 = __retval1242;
      return t1265;
    }
  char* t1266 = __s11239;
  void* cast1267 = (void*)t1266;
  char* t1268 = __s21240;
  void* cast1269 = (void*)t1268;
  unsigned long t1270 = __n1241;
  unsigned long c1271 = 1;
  unsigned long b1272 = t1270 * c1271;
  void* r1273 = memcpy(cast1267, cast1269, b1272);
  char* t1274 = __s11239;
  __retval1242 = t1274;
  char* t1275 = __retval1242;
  return t1275;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1276, char* v1277, unsigned long v1278) {
bb1279: ;
  char* __s11280;
  char* __s21281;
  unsigned long __n1282;
  char* __retval1283;
  __s11280 = v1276;
  __s21281 = v1277;
  __n1282 = v1278;
    unsigned long t1284 = __n1282;
    unsigned long c1285 = 0;
    _Bool c1286 = ((t1284 == c1285)) ? 1 : 0;
    if (c1286) {
      char* t1287 = __s11280;
      __retval1283 = t1287;
      char* t1288 = __retval1283;
      return t1288;
    }
    _Bool r1289 = std____is_constant_evaluated();
    if (r1289) {
      char* t1290 = __s11280;
      char* t1291 = __s21281;
      unsigned long t1292 = __n1282;
      char* r1293 = __gnu_cxx__char_traits_char___copy(t1290, t1291, t1292);
      __retval1283 = r1293;
      char* t1294 = __retval1283;
      return t1294;
    }
  char* t1295 = __s11280;
  void* cast1296 = (void*)t1295;
  char* t1297 = __s21281;
  void* cast1298 = (void*)t1297;
  unsigned long t1299 = __n1282;
  void* r1300 = memcpy(cast1296, cast1298, t1299);
  char* cast1301 = (char*)r1300;
  __retval1283 = cast1301;
  char* t1302 = __retval1283;
  return t1302;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1303, char* v1304, unsigned long v1305) {
bb1306: ;
  char* __d1307;
  char* __s1308;
  unsigned long __n1309;
  __d1307 = v1303;
  __s1308 = v1304;
  __n1309 = v1305;
    unsigned long t1310 = __n1309;
    unsigned long c1311 = 1;
    _Bool c1312 = ((t1310 == c1311)) ? 1 : 0;
    if (c1312) {
      char* t1313 = __d1307;
      char* t1314 = __s1308;
      std__char_traits_char___assign(t1313, t1314);
    } else {
      char* t1315 = __d1307;
      char* t1316 = __s1308;
      unsigned long t1317 = __n1309;
      char* r1318 = std__char_traits_char___copy(t1315, t1316, t1317);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1319) {
bb1320: ;
  char* __it1321;
  char* __retval1322;
  __it1321 = v1319;
  char* t1323 = __it1321;
  __retval1322 = t1323;
  char* t1324 = __retval1322;
  return t1324;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1325, char* v1326, char* v1327) {
bb1328: ;
  char* __p1329;
  char* __k11330;
  char* __k21331;
  __p1329 = v1325;
  __k11330 = v1326;
  __k21331 = v1327;
    char* t1332 = __p1329;
    char* t1333 = __k11330;
    char* r1334 = char_const__std____niter_base_char_const__(t1333);
    char* t1335 = __k21331;
    char* t1336 = __k11330;
    long diff1337 = t1335 - t1336;
    unsigned long cast1338 = (unsigned long)diff1337;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1332, r1334, cast1338);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1339) {
bb1340: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1341;
  char* __retval1342;
  this1341 = v1339;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1343 = this1341;
  char* t1344 = t1343->_M_dataplus._M_p;
  __retval1342 = t1344;
  char* t1345 = __retval1342;
  return t1345;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1346, unsigned long v1347) {
bb1348: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1349;
  unsigned long __length1350;
  this1349 = v1346;
  __length1350 = v1347;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1351 = this1349;
  unsigned long t1352 = __length1350;
  t1351->_M_string_length = t1352;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1353, unsigned long v1354) {
bb1355: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1356;
  unsigned long __n1357;
  char ref_tmp01358;
  this1356 = v1353;
  __n1357 = v1354;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1359 = this1356;
  unsigned long t1360 = __n1357;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1359, t1360);
  unsigned long t1361 = __n1357;
  char* r1362 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1359);
  char* ptr1363 = &(r1362)[t1361];
  char c1364 = 0;
  ref_tmp01358 = c1364;
  std__char_traits_char___assign(ptr1363, &ref_tmp01358);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1365) {
bb1366: ;
  struct _Guard* this1367;
  this1367 = v1365;
  struct _Guard* t1368 = this1367;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1369 = t1368->_M_guarded;
    _Bool cast1370 = (_Bool)t1369;
    if (cast1370) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1371 = t1368->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1371);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1372, char* v1373, char* v1374, struct std__forward_iterator_tag v1375) {
bb1376: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1377;
  char* __beg1378;
  char* __end1379;
  struct std__forward_iterator_tag unnamed1380;
  unsigned long __dnew1381;
  struct _Guard __guard1382;
  this1377 = v1372;
  __beg1378 = v1373;
  __end1379 = v1374;
  unnamed1380 = v1375;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1383 = this1377;
  char* t1384 = __beg1378;
  char* t1385 = __end1379;
  long r1386 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1384, t1385);
  unsigned long cast1387 = (unsigned long)r1386;
  __dnew1381 = cast1387;
    unsigned long t1388 = __dnew1381;
    unsigned long c1389 = 15;
    _Bool c1390 = ((t1388 > c1389)) ? 1 : 0;
    if (c1390) {
      unsigned long c1391 = 0;
      char* r1392 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1383, &__dnew1381, c1391);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1383, r1392);
      unsigned long t1393 = __dnew1381;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1383, t1393);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1383);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1382, t1383);
    char* r1394 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1383);
    char* t1395 = __beg1378;
    char* t1396 = __end1379;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1394, t1395, t1396);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1397 = ((void*)0);
    __guard1382._M_guarded = c1397;
    unsigned long t1398 = __dnew1381;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1383, t1398);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1382);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1399) {
bb1400: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1401;
  this1401 = v1399;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1402 = this1401;
  {
    struct std__allocator_char_* base1403 = (struct std__allocator_char_*)((char *)t1402 + 0);
    std__allocator_char____allocator(base1403);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1404, struct std____new_allocator_char_* v1405) {
bb1406: ;
  struct std____new_allocator_char_* this1407;
  struct std____new_allocator_char_* unnamed1408;
  this1407 = v1404;
  unnamed1408 = v1405;
  struct std____new_allocator_char_* t1409 = this1407;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1410, struct std__allocator_char_* v1411) {
bb1412: ;
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

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1419) {
bb1420: ;
  char* __r1421;
  char* __retval1422;
  __r1421 = v1419;
  char* t1423 = __r1421;
  __retval1422 = t1423;
  char* t1424 = __retval1422;
  return t1424;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1425) {
bb1426: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1427;
  char* __retval1428;
  this1427 = v1425;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1429 = this1427;
  char* cast1430 = (char*)&(t1429->field2._M_local_buf);
  char* r1431 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1430);
  __retval1428 = r1431;
  char* t1432 = __retval1428;
  return t1432;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1433) {
bb1434: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1435;
  _Bool __retval1436;
  this1435 = v1433;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1437 = this1435;
    char* r1438 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1437);
    char* r1439 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1437);
    _Bool c1440 = ((r1438 == r1439)) ? 1 : 0;
    if (c1440) {
        unsigned long t1441 = t1437->_M_string_length;
        unsigned long c1442 = 15;
        _Bool c1443 = ((t1441 > c1442)) ? 1 : 0;
        if (c1443) {
          __builtin_unreachable();
        }
      _Bool c1444 = 1;
      __retval1436 = c1444;
      _Bool t1445 = __retval1436;
      return t1445;
    }
  _Bool c1446 = 0;
  __retval1436 = c1446;
  _Bool t1447 = __retval1436;
  return t1447;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1448, char* v1449, unsigned long v1450) {
bb1451: ;
  struct std____new_allocator_char_* this1452;
  char* __p1453;
  unsigned long __n1454;
  this1452 = v1448;
  __p1453 = v1449;
  __n1454 = v1450;
  struct std____new_allocator_char_* t1455 = this1452;
    unsigned long c1456 = 1;
    unsigned long c1457 = 16;
    _Bool c1458 = ((c1456 > c1457)) ? 1 : 0;
    if (c1458) {
      char* t1459 = __p1453;
      void* cast1460 = (void*)t1459;
      unsigned long t1461 = __n1454;
      unsigned long c1462 = 1;
      unsigned long b1463 = t1461 * c1462;
      unsigned long c1464 = 1;
      operator_delete_3(cast1460, b1463, c1464);
      return;
    }
  char* t1465 = __p1453;
  void* cast1466 = (void*)t1465;
  unsigned long t1467 = __n1454;
  unsigned long c1468 = 1;
  unsigned long b1469 = t1467 * c1468;
  operator_delete_2(cast1466, b1469);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1470, char* v1471, unsigned long v1472) {
bb1473: ;
  struct std__allocator_char_* this1474;
  char* __p1475;
  unsigned long __n1476;
  this1474 = v1470;
  __p1475 = v1471;
  __n1476 = v1472;
  struct std__allocator_char_* t1477 = this1474;
    _Bool r1478 = std____is_constant_evaluated();
    if (r1478) {
      char* t1479 = __p1475;
      void* cast1480 = (void*)t1479;
      operator_delete(cast1480);
      return;
    }
  struct std____new_allocator_char_* base1481 = (struct std____new_allocator_char_*)((char *)t1477 + 0);
  char* t1482 = __p1475;
  unsigned long t1483 = __n1476;
  std____new_allocator_char___deallocate(base1481, t1482, t1483);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1484, char* v1485, unsigned long v1486) {
bb1487: ;
  struct std__allocator_char_* __a1488;
  char* __p1489;
  unsigned long __n1490;
  __a1488 = v1484;
  __p1489 = v1485;
  __n1490 = v1486;
  struct std__allocator_char_* t1491 = __a1488;
  char* t1492 = __p1489;
  unsigned long t1493 = __n1490;
  std__allocator_char___deallocate(t1491, t1492, t1493);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1494, unsigned long v1495) {
bb1496: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1497;
  unsigned long __size1498;
  this1497 = v1494;
  __size1498 = v1495;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1499 = this1497;
  struct std__allocator_char_* r1500 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1499);
  char* r1501 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1499);
  unsigned long t1502 = __size1498;
  unsigned long c1503 = 1;
  unsigned long b1504 = t1502 + c1503;
  std__allocator_traits_std__allocator_char_____deallocate(r1500, r1501, b1504);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1505) {
bb1506: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1507;
  this1507 = v1505;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1508 = this1507;
    _Bool r1509 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1508);
    _Bool u1510 = !r1509;
    if (u1510) {
      unsigned long t1511 = t1508->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1508, t1511);
    }
  return;
}

