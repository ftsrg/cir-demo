extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___List_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_int___ { struct std__allocator_std___List_node_int__* _M_alloc; struct std___List_node_int_* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____false_type { unsigned char __field0; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____new_allocator_std___List_node_int__ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_std___List_node_int__ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std___List_node_int_ { struct std____detail___List_node_base __field0; struct __gnu_cxx____aligned_membuf_int_ _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std____allocated_obj_std__allocator_std___List_node_int___ { struct std____allocated_ptr_std__allocator_std___List_node_int___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
int __const_main_myints[5] = {75, 23, 65, 42, 13};
char _str[10] = "*it != 13";
char _str_1[105] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_end_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_3[15] = "!this->empty()";
void std__allocator_int___allocator(struct std__allocator_int_* p0);
void std____cxx11__list_int__std__allocator_int_____list_int___void_(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std___List_iterator_int____List_iterator_2(struct std___List_iterator_int_* p0);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std___List_iterator_int_* std___List_iterator_int___operator_(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
struct std___List_iterator_int_ std___List_iterator_int___operator__(struct std___List_iterator_int_* p0, int p1);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* p0);
int main();
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0);
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* p0);
void void_std__destroy_at_int_(int* p0);
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* p0, int* p1);
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___List_node_int____M_valptr(struct std___List_node_int_* p0);
_Bool std____is_constant_evaluated();
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* p0, struct std___List_node_int_* p1, unsigned long p2);
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* p0, struct std___List_node_int_* p1, unsigned long p2);
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* p0, struct std___List_node_int_* p1, unsigned long p2);
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* p0, struct std___List_node_int_* p1);
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* p0, struct std___List_node_int_* p1);
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* p0);
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* p0);
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std__allocator_std___List_node_int_____allocator_int_(struct std__allocator_std___List_node_int__* p0, struct std__allocator_int_* p1);
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* p0, struct std__allocator_std___List_node_int__* p1);
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* p0, struct std__allocator_std___List_node_int__* p1);
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* p0);
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* p0);
extern void std____throw_bad_array_new_length();
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* p0, unsigned long p1, void* p2);
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* p0, unsigned long p1);
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* p0, unsigned long p1);
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0, struct std__allocator_std___List_node_int__* p1, struct std___List_node_int_* p2);
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* p0);
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* p0, struct std____allocated_ptr_std__allocator_std___List_node_int___* p1);
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* p0);
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int__(struct std__allocator_std___List_node_int__* p0, int* p1, int* p2);
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** p0, void** p1);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
extern void std____detail___List_node_base___M_hook(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1);
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
void void_std____cxx11__list_int__std__allocator_int______M_insert_int__(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, int* p2);
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* p0);
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___List_iterator_int_* std___List_iterator_int___operator___2(struct std___List_iterator_int_* p0);
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* p0);
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
_Bool std__operator__(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* p0);
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_int__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1, int* p2, struct std____false_type p3);
void std____new_allocator_std___List_node_int_______new_allocator_2(struct std____new_allocator_std___List_node_int__* p0);
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* p0, struct std____new_allocator_std___List_node_int__* p1);
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* p0);
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* p0, struct std____detail___List_size* p1);
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* p0);
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0, struct std____allocated_ptr_std__allocator_std___List_node_int___* p1);
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* p0);
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** p0);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v0) {
bb1:
  struct std__allocator_int_* this2;
  this2 = v0;
  struct std__allocator_int_* t3 = this2;
  struct std____new_allocator_int_* base4 = (struct std____new_allocator_int_*)((char *)t3 + 0);
  std____new_allocator_int_____new_allocator(base4);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2IPivEET_S5_RKS1_
void std____cxx11__list_int__std__allocator_int_____list_int___void_(struct std____cxx11__list_int__std__allocator_int__* v5, int* v6, int* v7, struct std__allocator_int_* v8) {
bb9:
  struct std____cxx11__list_int__std__allocator_int__* this10;
  int* __first11;
  int* __last12;
  struct std__allocator_int_* __a13;
  struct std__allocator_std___List_node_int__ ref_tmp014;
  struct std____false_type agg_tmp015;
  this10 = v5;
  __first11 = v6;
  __last12 = v7;
  __a13 = v8;
  struct std____cxx11__list_int__std__allocator_int__* t16 = this10;
  struct std____cxx11___List_base_int__std__allocator_int__* base17 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t16 + 0);
  struct std__allocator_int_* t18 = __a13;
  std__allocator_std___List_node_int_____allocator_int_(&ref_tmp014, t18);
    std____cxx11___List_base_int__std__allocator_int______List_base(base17, &ref_tmp014);
  {
    std__allocator_std___List_node_int______allocator(&ref_tmp014);
  }
    int* t19 = __first11;
    int* t20 = __last12;
    struct std____false_type t21 = agg_tmp015;
    void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_int__(t16, t19, t20, t21);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v22) {
bb23:
  struct std__allocator_int_* this24;
  this24 = v22;
  struct std__allocator_int_* t25 = this24;
  return;
}

// function: _ZNSt14_List_iteratorIiEC2Ev
void std___List_iterator_int____List_iterator_2(struct std___List_iterator_int_* v26) {
bb27:
  struct std___List_iterator_int_* this28;
  this28 = v26;
  struct std___List_iterator_int_* t29 = this28;
  struct std____detail___List_node_base* c30 = ((void*)0);
  t29->_M_node = c30;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v31) {
bb32:
  struct std____cxx11__list_int__std__allocator_int__* this33;
  struct std___List_iterator_int_ __retval34;
  this33 = v31;
  struct std____cxx11__list_int__std__allocator_int__* t35 = this33;
  struct std____cxx11___List_base_int__std__allocator_int__* base36 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t35 + 0);
  struct std____detail___List_node_base* r37 = std____detail___List_node_header___M_base(&base36->_M_impl._M_node);
  std___List_iterator_int____List_iterator(&__retval34, r37);
  struct std___List_iterator_int_ t38 = __retval34;
  return t38;
}

// function: _ZNSt14_List_iteratorIiEaSEOS0_
struct std___List_iterator_int_* std___List_iterator_int___operator_(struct std___List_iterator_int_* v39, struct std___List_iterator_int_* v40) {
bb41:
  struct std___List_iterator_int_* this42;
  struct std___List_iterator_int_* unnamed43;
  struct std___List_iterator_int_* __retval44;
  this42 = v39;
  unnamed43 = v40;
  struct std___List_iterator_int_* t45 = this42;
  struct std___List_iterator_int_* t46 = unnamed43;
  struct std____detail___List_node_base* t47 = t46->_M_node;
  t45->_M_node = t47;
  __retval44 = t45;
  struct std___List_iterator_int_* t48 = __retval44;
  return t48;
}

// function: _ZNSt14_List_iteratorIiEmmEi
struct std___List_iterator_int_ std___List_iterator_int___operator__(struct std___List_iterator_int_* v49, int v50) {
bb51:
  struct std___List_iterator_int_* this52;
  int unnamed53;
  struct std___List_iterator_int_ __retval54;
  this52 = v49;
  unnamed53 = v50;
  struct std___List_iterator_int_* t55 = this52;
  __retval54 = *t55; // copy
  struct std____detail___List_node_base* t56 = t55->_M_node;
  struct std____detail___List_node_base* t57 = t56->_M_prev;
  t55->_M_node = t57;
  struct std___List_iterator_int_ t58 = __retval54;
  return t58;
}

// function: _ZNKSt14_List_iteratorIiEdeEv
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* v59) {
bb60:
  struct std___List_iterator_int_* this61;
  int* __retval62;
  this61 = v59;
  struct std___List_iterator_int_* t63 = this61;
  struct std____detail___List_node_base* t64 = t63->_M_node;
  struct std___List_node_int_* derived65 = ((t64) ? (struct std___List_node_int_*)((char *)t64 - 0) : (struct std___List_node_int_*)0);
  int* r66 = std___List_node_int____M_valptr(derived65);
  __retval62 = r66;
  int* t67 = __retval62;
  return t67;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v68, void* v69) {
bb70:
  struct std__basic_ostream_char__std__char_traits_char__* this71;
  void* __pf72;
  struct std__basic_ostream_char__std__char_traits_char__* __retval73;
  this71 = v68;
  __pf72 = v69;
  struct std__basic_ostream_char__std__char_traits_char__* t74 = this71;
  void* t75 = __pf72;
  struct std__basic_ostream_char__std__char_traits_char__* r76 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t75)(t74);
  __retval73 = r76;
  struct std__basic_ostream_char__std__char_traits_char__* t77 = __retval73;
  return t77;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v78) {
bb79:
  struct std__basic_ostream_char__std__char_traits_char__* __os80;
  struct std__basic_ostream_char__std__char_traits_char__* __retval81;
  __os80 = v78;
  struct std__basic_ostream_char__std__char_traits_char__* t82 = __os80;
  struct std__basic_ostream_char__std__char_traits_char__* r83 = std__ostream__flush(t82);
  __retval81 = r83;
  struct std__basic_ostream_char__std__char_traits_char__* t84 = __retval81;
  return t84;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v85) {
bb86:
  struct std__ctype_char_* __f87;
  struct std__ctype_char_* __retval88;
  __f87 = v85;
    struct std__ctype_char_* t89 = __f87;
    _Bool cast90 = (_Bool)t89;
    _Bool u91 = !cast90;
    if (u91) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t92 = __f87;
  __retval88 = t92;
  struct std__ctype_char_* t93 = __retval88;
  return t93;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v94, char v95) {
bb96:
  struct std__ctype_char_* this97;
  char __c98;
  char __retval99;
  this97 = v94;
  __c98 = v95;
  struct std__ctype_char_* t100 = this97;
    char t101 = t100->_M_widen_ok;
    _Bool cast102 = (_Bool)t101;
    if (cast102) {
      char t103 = __c98;
      unsigned char cast104 = (unsigned char)t103;
      unsigned long cast105 = (unsigned long)cast104;
      char t106 = t100->_M_widen[cast105];
      __retval99 = t106;
      char t107 = __retval99;
      return t107;
    }
  std__ctype_char____M_widen_init___const(t100);
  char t108 = __c98;
  void** v109 = (void**)t100;
  void* v110 = *((void**)v109);
  char vcall113 = (char)__VERIFIER_virtual_call_char_char(t100, 6, t108);
  __retval99 = vcall113;
  char t114 = __retval99;
  return t114;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v115, char v116) {
bb117:
  struct std__basic_ios_char__std__char_traits_char__* this118;
  char __c119;
  char __retval120;
  this118 = v115;
  __c119 = v116;
  struct std__basic_ios_char__std__char_traits_char__* t121 = this118;
  struct std__ctype_char_* t122 = t121->_M_ctype;
  struct std__ctype_char_* r123 = std__ctype_char__const__std____check_facet_std__ctype_char___(t122);
  char t124 = __c119;
  char r125 = std__ctype_char___widen_char__const(r123, t124);
  __retval120 = r125;
  char t126 = __retval120;
  return t126;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v127) {
bb128:
  struct std__basic_ostream_char__std__char_traits_char__* __os129;
  struct std__basic_ostream_char__std__char_traits_char__* __retval130;
  __os129 = v127;
  struct std__basic_ostream_char__std__char_traits_char__* t131 = __os129;
  struct std__basic_ostream_char__std__char_traits_char__* t132 = __os129;
  void** v133 = (void**)t132;
  void* v134 = *((void**)v133);
  unsigned char* cast135 = (unsigned char*)v134;
  long c136 = -24;
  unsigned char* ptr137 = &(cast135)[c136];
  long* cast138 = (long*)ptr137;
  long t139 = *cast138;
  unsigned char* cast140 = (unsigned char*)t132;
  unsigned char* ptr141 = &(cast140)[t139];
  struct std__basic_ostream_char__std__char_traits_char__* cast142 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr141;
  struct std__basic_ios_char__std__char_traits_char__* cast143 = (struct std__basic_ios_char__std__char_traits_char__*)cast142;
  char c144 = 10;
  char r145 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast143, c144);
  struct std__basic_ostream_char__std__char_traits_char__* r146 = std__ostream__put(t131, r145);
  struct std__basic_ostream_char__std__char_traits_char__* r147 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r146);
  __retval130 = r147;
  struct std__basic_ostream_char__std__char_traits_char__* t148 = __retval130;
  return t148;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v149) {
bb150:
  struct std____cxx11__list_int__std__allocator_int__* this151;
  this151 = v149;
  struct std____cxx11__list_int__std__allocator_int__* t152 = this151;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base153 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t152 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base153);
  }
  return;
}

// function: main
int main() {
bb154:
  int __retval155;
  int myints156[5];
  struct std____cxx11__list_int__std__allocator_int__ mylist157;
  struct std__allocator_int_ ref_tmp0158;
  struct std___List_iterator_int_ it159;
  struct std___List_iterator_int_ ref_tmp1160;
  struct std___List_iterator_int_ agg_tmp0161;
  int c162 = 0;
  __retval155 = c162;
  // array copy
  __builtin_memcpy(myints156, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast163 = (int*)&(myints156);
  int* cast164 = (int*)&(myints156);
  int c165 = 5;
  int* ptr166 = &(cast164)[c165];
  std__allocator_int___allocator(&ref_tmp0158);
    std____cxx11__list_int__std__allocator_int_____list_int___void_(&mylist157, cast163, ptr166, &ref_tmp0158);
  {
    std__allocator_int____allocator(&ref_tmp0158);
  }
    std___List_iterator_int____List_iterator_2(&it159);
    struct std___List_iterator_int_ r167 = std____cxx11__list_int__std__allocator_int_____end(&mylist157);
    ref_tmp1160 = r167;
    struct std___List_iterator_int_* r168 = std___List_iterator_int___operator_(&it159, &ref_tmp1160);
    int c169 = 0;
    struct std___List_iterator_int_ r170 = std___List_iterator_int___operator__(&it159, c169);
    agg_tmp0161 = r170;
    int* r171 = std___List_iterator_int___operator____const(&it159);
    int t172 = *r171;
    int c173 = 13;
    _Bool c174 = ((t172 != c173)) ? 1 : 0;
    if (c174) {
    } else {
      char* cast175 = (char*)&(_str);
      char* c176 = _str_1;
      unsigned int c177 = 22;
      char* cast178 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast175, c176, c177, cast178);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r179 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c180 = 0;
    __retval155 = c180;
    int t181 = __retval155;
    int ret_val182 = t181;
    {
      std____cxx11__list_int__std__allocator_int______list(&mylist157);
    }
    return ret_val182;
  int t183 = __retval155;
  return t183;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v184) {
bb185:
  struct std____new_allocator_int_* this186;
  this186 = v184;
  struct std____new_allocator_int_* t187 = this186;
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v188) {
bb189:
  struct std____detail___List_node_header* this190;
  struct std____detail___List_node_base* __retval191;
  this190 = v188;
  struct std____detail___List_node_header* t192 = this190;
  struct std____detail___List_node_base* base193 = (struct std____detail___List_node_base*)((char *)t192 + 0);
  __retval191 = base193;
  struct std____detail___List_node_base* t194 = __retval191;
  return t194;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v195) {
bb196:
  int* __location197;
  __location197 = v195;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v198, int* v199) {
bb200:
  struct std__allocator_std___List_node_int__* __a201;
  int* __p202;
  __a201 = v198;
  __p202 = v199;
  int* t203 = __p202;
  void_std__destroy_at_int_(t203);
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v204) {
bb205:
  struct __gnu_cxx____aligned_membuf_int_* this206;
  void* __retval207;
  this206 = v204;
  struct __gnu_cxx____aligned_membuf_int_* t208 = this206;
  void* cast209 = (void*)&(t208->_M_storage);
  __retval207 = cast209;
  void* t210 = __retval207;
  return t210;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v211) {
bb212:
  struct __gnu_cxx____aligned_membuf_int_* this213;
  int* __retval214;
  this213 = v211;
  struct __gnu_cxx____aligned_membuf_int_* t215 = this213;
  void* r216 = __gnu_cxx____aligned_membuf_int____M_addr(t215);
  int* cast217 = (int*)r216;
  __retval214 = cast217;
  int* t218 = __retval214;
  return t218;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v219) {
bb220:
  struct std___List_node_int_* this221;
  int* __retval222;
  this221 = v219;
  struct std___List_node_int_* t223 = this221;
  int* r224 = __gnu_cxx____aligned_membuf_int____M_ptr(&t223->_M_storage);
  __retval222 = r224;
  int* t225 = __retval222;
  return t225;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb226:
  _Bool __retval227;
    _Bool c228 = 0;
    __retval227 = c228;
    _Bool t229 = __retval227;
    return t229;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v230, struct std___List_node_int_* v231, unsigned long v232) {
bb233:
  struct std____new_allocator_std___List_node_int__* this234;
  struct std___List_node_int_* __p235;
  unsigned long __n236;
  this234 = v230;
  __p235 = v231;
  __n236 = v232;
  struct std____new_allocator_std___List_node_int__* t237 = this234;
    unsigned long c238 = 8;
    unsigned long c239 = 16;
    _Bool c240 = ((c238 > c239)) ? 1 : 0;
    if (c240) {
      struct std___List_node_int_* t241 = __p235;
      void* cast242 = (void*)t241;
      unsigned long t243 = __n236;
      unsigned long c244 = 24;
      unsigned long b245 = t243 * c244;
      unsigned long c246 = 8;
      operator_delete_3(cast242, b245, c246);
      return;
    }
  struct std___List_node_int_* t247 = __p235;
  void* cast248 = (void*)t247;
  unsigned long t249 = __n236;
  unsigned long c250 = 24;
  unsigned long b251 = t249 * c250;
  operator_delete_2(cast248, b251);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v252, struct std___List_node_int_* v253, unsigned long v254) {
bb255:
  struct std__allocator_std___List_node_int__* this256;
  struct std___List_node_int_* __p257;
  unsigned long __n258;
  this256 = v252;
  __p257 = v253;
  __n258 = v254;
  struct std__allocator_std___List_node_int__* t259 = this256;
    _Bool r260 = std____is_constant_evaluated();
    if (r260) {
      struct std___List_node_int_* t261 = __p257;
      void* cast262 = (void*)t261;
      operator_delete(cast262);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base263 = (struct std____new_allocator_std___List_node_int__*)((char *)t259 + 0);
  struct std___List_node_int_* t264 = __p257;
  unsigned long t265 = __n258;
  std____new_allocator_std___List_node_int_____deallocate(base263, t264, t265);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v266, struct std___List_node_int_* v267, unsigned long v268) {
bb269:
  struct std__allocator_std___List_node_int__* __a270;
  struct std___List_node_int_* __p271;
  unsigned long __n272;
  __a270 = v266;
  __p271 = v267;
  __n272 = v268;
  struct std__allocator_std___List_node_int__* t273 = __a270;
  struct std___List_node_int_* t274 = __p271;
  unsigned long t275 = __n272;
  std__allocator_std___List_node_int_____deallocate(t273, t274, t275);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v276, struct std___List_node_int_* v277) {
bb278:
  struct std____cxx11___List_base_int__std__allocator_int__* this279;
  struct std___List_node_int_* __p280;
  this279 = v276;
  __p280 = v277;
  struct std____cxx11___List_base_int__std__allocator_int__* t281 = this279;
  struct std__allocator_std___List_node_int__* base282 = (struct std__allocator_std___List_node_int__*)((char *)&(t281->_M_impl) + 0);
  struct std___List_node_int_* t283 = __p280;
  unsigned long c284 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base282, t283, c284);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v285, struct std___List_node_int_* v286) {
bb287:
  struct std____cxx11___List_base_int__std__allocator_int__* this288;
  struct std___List_node_int_* __p289;
  this288 = v285;
  __p289 = v286;
  struct std____cxx11___List_base_int__std__allocator_int__* t290 = this288;
  struct std__allocator_std___List_node_int__* base291 = (struct std__allocator_std___List_node_int__*)((char *)&(t290->_M_impl) + 0);
  struct std___List_node_int_* t292 = __p289;
  int* r293 = std___List_node_int____M_valptr(t292);
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base291, r293);
  struct std___List_node_int_* t294 = __p289;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t290, t294);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v295) {
bb296:
  struct std___List_node_int_* this297;
  struct std___List_node_int_* __retval298;
  this297 = v295;
  struct std___List_node_int_* t299 = this297;
  __retval298 = t299;
  struct std___List_node_int_* t300 = __retval298;
  return t300;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v301) {
bb302:
  struct std____cxx11___List_base_int__std__allocator_int__* this303;
  struct std____detail___List_node_base* __cur304;
  this303 = v301;
  struct std____cxx11___List_base_int__std__allocator_int__* t305 = this303;
  struct std____detail___List_node_base* base306 = (struct std____detail___List_node_base*)((char *)&(t305->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t307 = base306->_M_next;
  __cur304 = t307;
    while (1) {
      struct std____detail___List_node_base* t308 = __cur304;
      struct std____detail___List_node_base* r309 = std____detail___List_node_header___M_base(&t305->_M_impl._M_node);
      _Bool c310 = ((t308 != r309)) ? 1 : 0;
      if (!c310) break;
        struct std___List_node_int_* __tmp311;
        struct std____detail___List_node_base* t312 = __cur304;
        struct std___List_node_int_* derived313 = (struct std___List_node_int_*)((char *)t312 - 0);
        __tmp311 = derived313;
        struct std___List_node_int_* t314 = __tmp311;
        struct std____detail___List_node_base* base315 = (struct std____detail___List_node_base*)((char *)t314 + 0);
        struct std____detail___List_node_base* t316 = base315->_M_next;
        __cur304 = t316;
        struct std___List_node_int_* t317 = __tmp311;
        struct std___List_node_int_* r318 = std___List_node_int____M_node_ptr(t317);
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t305, r318);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v319) {
bb320:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this321;
  this321 = v319;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t322 = this321;
  {
    struct std__allocator_std___List_node_int__* base323 = (struct std__allocator_std___List_node_int__*)((char *)t322 + 0);
    std__allocator_std___List_node_int______allocator(base323);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v324) {
bb325:
  struct std____cxx11___List_base_int__std__allocator_int__* this326;
  this326 = v324;
  struct std____cxx11___List_base_int__std__allocator_int__* t327 = this326;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t327);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t327->_M_impl);
  }
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2IiEERKSaIT_E
void std__allocator_std___List_node_int_____allocator_int_(struct std__allocator_std___List_node_int__* v328, struct std__allocator_int_* v329) {
bb330:
  struct std__allocator_std___List_node_int__* this331;
  struct std__allocator_int_* unnamed332;
  this331 = v328;
  unnamed332 = v329;
  struct std__allocator_std___List_node_int__* t333 = this331;
  struct std____new_allocator_std___List_node_int__* base334 = (struct std____new_allocator_std___List_node_int__*)((char *)t333 + 0);
  std____new_allocator_std___List_node_int_______new_allocator_2(base334);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v335, struct std__allocator_std___List_node_int__* v336) {
bb337:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this338;
  struct std__allocator_std___List_node_int__* __a339;
  this338 = v335;
  __a339 = v336;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t340 = this338;
  struct std__allocator_std___List_node_int__* base341 = (struct std__allocator_std___List_node_int__*)((char *)t340 + 0);
  struct std__allocator_std___List_node_int__* t342 = __a339;
  std__allocator_std___List_node_int_____allocator(base341, t342);
    std____detail___List_node_header___List_node_header(&t340->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v343, struct std__allocator_std___List_node_int__* v344) {
bb345:
  struct std____cxx11___List_base_int__std__allocator_int__* this346;
  struct std__allocator_std___List_node_int__* __a347;
  this346 = v343;
  __a347 = v344;
  struct std____cxx11___List_base_int__std__allocator_int__* t348 = this346;
  struct std__allocator_std___List_node_int__* t349 = __a347;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t348->_M_impl, t349);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v350) {
bb351:
  struct std__allocator_std___List_node_int__* this352;
  this352 = v350;
  struct std__allocator_std___List_node_int__* t353 = this352;
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* v354) {
bb355:
  struct std____cxx11___List_base_int__std__allocator_int__* this356;
  struct std__allocator_std___List_node_int__* __retval357;
  this356 = v354;
  struct std____cxx11___List_base_int__std__allocator_int__* t358 = this356;
  struct std__allocator_std___List_node_int__* base359 = (struct std__allocator_std___List_node_int__*)((char *)&(t358->_M_impl) + 0);
  __retval357 = base359;
  struct std__allocator_std___List_node_int__* t360 = __retval357;
  return t360;
}

// function: _ZNKSt15__new_allocatorISt10_List_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* v361) {
bb362:
  struct std____new_allocator_std___List_node_int__* this363;
  unsigned long __retval364;
  this363 = v361;
  struct std____new_allocator_std___List_node_int__* t365 = this363;
  unsigned long c366 = 9223372036854775807;
  unsigned long c367 = 24;
  unsigned long b368 = c366 / c367;
  __retval364 = b368;
  unsigned long t369 = __retval364;
  return t369;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* v370, unsigned long v371, void* v372) {
bb373:
  struct std____new_allocator_std___List_node_int__* this374;
  unsigned long __n375;
  void* unnamed376;
  struct std___List_node_int_* __retval377;
  this374 = v370;
  __n375 = v371;
  unnamed376 = v372;
  struct std____new_allocator_std___List_node_int__* t378 = this374;
    unsigned long t379 = __n375;
    unsigned long r380 = std____new_allocator_std___List_node_int______M_max_size___const(t378);
    _Bool c381 = ((t379 > r380)) ? 1 : 0;
    if (c381) {
        unsigned long t382 = __n375;
        unsigned long c383 = -1;
        unsigned long c384 = 24;
        unsigned long b385 = c383 / c384;
        _Bool c386 = ((t382 > b385)) ? 1 : 0;
        if (c386) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c387 = 8;
    unsigned long c388 = 16;
    _Bool c389 = ((c387 > c388)) ? 1 : 0;
    if (c389) {
      unsigned long __al390;
      unsigned long c391 = 8;
      __al390 = c391;
      unsigned long t392 = __n375;
      unsigned long c393 = 24;
      unsigned long b394 = t392 * c393;
      unsigned long t395 = __al390;
      void* r396 = operator_new_2(b394, t395);
      struct std___List_node_int_* cast397 = (struct std___List_node_int_*)r396;
      __retval377 = cast397;
      struct std___List_node_int_* t398 = __retval377;
      return t398;
    }
  unsigned long t399 = __n375;
  unsigned long c400 = 24;
  unsigned long b401 = t399 * c400;
  void* r402 = operator_new(b401);
  struct std___List_node_int_* cast403 = (struct std___List_node_int_*)r402;
  __retval377 = cast403;
  struct std___List_node_int_* t404 = __retval377;
  return t404;
}

// function: _ZNSaISt10_List_nodeIiEE8allocateEm
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* v405, unsigned long v406) {
bb407:
  struct std__allocator_std___List_node_int__* this408;
  unsigned long __n409;
  struct std___List_node_int_* __retval410;
  this408 = v405;
  __n409 = v406;
  struct std__allocator_std___List_node_int__* t411 = this408;
    _Bool r412 = std____is_constant_evaluated();
    if (r412) {
        unsigned long t413 = __n409;
        unsigned long c414 = 24;
        unsigned long ovr415;
        _Bool ovf416 = __builtin_mul_overflow(t413, c414, &ovr415);
        __n409 = ovr415;
        if (ovf416) {
          std____throw_bad_array_new_length();
        }
      unsigned long t417 = __n409;
      void* r418 = operator_new(t417);
      struct std___List_node_int_* cast419 = (struct std___List_node_int_*)r418;
      __retval410 = cast419;
      struct std___List_node_int_* t420 = __retval410;
      return t420;
    }
  struct std____new_allocator_std___List_node_int__* base421 = (struct std____new_allocator_std___List_node_int__*)((char *)t411 + 0);
  unsigned long t422 = __n409;
  void* c423 = ((void*)0);
  struct std___List_node_int_* r424 = std____new_allocator_std___List_node_int_____allocate(base421, t422, c423);
  __retval410 = r424;
  struct std___List_node_int_* t425 = __retval410;
  return t425;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE8allocateERS2_m
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* v426, unsigned long v427) {
bb428:
  struct std__allocator_std___List_node_int__* __a429;
  unsigned long __n430;
  struct std___List_node_int_* __retval431;
  __a429 = v426;
  __n430 = v427;
  struct std__allocator_std___List_node_int__* t432 = __a429;
  unsigned long t433 = __n430;
  struct std___List_node_int_* r434 = std__allocator_std___List_node_int_____allocate(t432, t433);
  __retval431 = r434;
  struct std___List_node_int_* t435 = __retval431;
  return t435;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* v436, struct std__allocator_std___List_node_int__* v437, struct std___List_node_int_* v438) {
bb439:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this440;
  struct std__allocator_std___List_node_int__* __a441;
  struct std___List_node_int_* __ptr442;
  this440 = v436;
  __a441 = v437;
  __ptr442 = v438;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t443 = this440;
  struct std__allocator_std___List_node_int__* t444 = __a441;
  t443->_M_alloc = t444;
  struct std___List_node_int_* t445 = __ptr442;
  t443->_M_ptr = t445;
  return;
}

// function: _ZSt18__allocate_guardedISaISt10_List_nodeIiEEESt15__allocated_ptrIT_ERS4_
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v446) {
bb447:
  struct std__allocator_std___List_node_int__* __a448;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ __retval449;
  __a448 = v446;
  struct std__allocator_std___List_node_int__* t450 = __a448;
  struct std__allocator_std___List_node_int__* t451 = __a448;
  unsigned long c452 = 1;
  struct std___List_node_int_* r453 = std__allocator_traits_std__allocator_std___List_node_int_______allocate(t451, c452);
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(&__retval449, t450, r453);
  struct std____allocated_ptr_std__allocator_std___List_node_int___ t454 = __retval449;
  return t454;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEEC2EOSt15__allocated_ptrIS2_E
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v455, struct std____allocated_ptr_std__allocator_std___List_node_int___* v456) {
bb457:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this458;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __ptr459;
  this458 = v455;
  __ptr459 = v456;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t460 = this458;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base461 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t460 + 0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t462 = __ptr459;
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(base461, t462);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base463 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t460 + 0);
    struct std___List_node_int_* r464 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base463);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v465) {
bb466:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this467;
  this467 = v465;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t468 = this467;
    struct std___List_node_int_* t469 = t468->_M_ptr;
    struct std___List_node_int_* c470 = ((void*)0);
    _Bool c471 = ((t469 != c470)) ? 1 : 0;
    if (c471) {
      struct std__allocator_std___List_node_int__* t472 = t468->_M_alloc;
      struct std___List_node_int_* t473 = t468->_M_ptr;
      unsigned long c474 = 1;
      std__allocator_traits_std__allocator_std___List_node_int_______deallocate(t472, t473, c474);
    }
  return;
}

// function: _ZSt22__allocate_guarded_objISaISt10_List_nodeIiEEESt15__allocated_objIT_ERS4_
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v475) {
bb476:
  struct std__allocator_std___List_node_int__* __a477;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __retval478;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ ref_tmp0479;
  __a477 = v475;
  struct std__allocator_std___List_node_int__* t480 = __a477;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ r481 = std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(t480);
  ref_tmp0479 = r481;
    std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(&__retval478, &ref_tmp0479);
  {
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp0479);
  }
  struct std____allocated_obj_std__allocator_std___List_node_int___ t482 = __retval478;
  return t482;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v483, int* v484) {
bb485:
  int* __location486;
  int* __args487;
  int* __retval488;
  void* __loc489;
  __location486 = v483;
  __args487 = v484;
  int* t490 = __location486;
  void* cast491 = (void*)t490;
  __loc489 = cast491;
    void* t492 = __loc489;
    int* cast493 = (int*)t492;
    int* t494 = __args487;
    int t495 = *t494;
    *cast493 = t495;
    __retval488 = cast493;
    int* t496 = __retval488;
    return t496;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int__(struct std__allocator_std___List_node_int__* v497, int* v498, int* v499) {
bb500:
  struct std__allocator_std___List_node_int__* __a501;
  int* __p502;
  int* __args503;
  __a501 = v497;
  __p502 = v498;
  __args503 = v499;
  int* t504 = __p502;
  int* t505 = __args503;
  int* r506 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t504, t505);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIiEEEptEv
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* v507) {
bb508:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this509;
  struct std___List_node_int_* __retval510;
  this509 = v507;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t511 = this509;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base512 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t511 + 0);
  struct std___List_node_int_* r513 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base512);
  __retval510 = r513;
  struct std___List_node_int_* t514 = __retval510;
  return t514;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIiEDnET_RS3_OT0_
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** v515, void** v516) {
bb517:
  struct std___List_node_int_** __obj518;
  void** __new_val519;
  struct std___List_node_int_* __retval520;
  struct std___List_node_int_* __old_val521;
  __obj518 = v515;
  __new_val519 = v516;
  struct std___List_node_int_** t522 = __obj518;
  struct std___List_node_int_* t523 = *t522;
  __old_val521 = t523;
  void** t524 = __new_val519;
  struct std___List_node_int_* c525 = ((void*)0);
  struct std___List_node_int_** t526 = __obj518;
  *t526 = c525;
  struct std___List_node_int_* t527 = __old_val521;
  __retval520 = t527;
  struct std___List_node_int_* t528 = __retval520;
  return t528;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEE7releaseEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* v529) {
bb530:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this531;
  struct std___List_node_int_* __retval532;
  void* ref_tmp0533;
  this531 = v529;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t534 = this531;
  void* c535 = ((void*)0);
  ref_tmp0533 = c535;
  struct std___List_node_int_* r536 = std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(&t534->_M_ptr, &ref_tmp0533);
  __retval532 = r536;
  struct std___List_node_int_* t537 = __retval532;
  return t537;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v538) {
bb539:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this540;
  this540 = v538;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t541 = this540;
      struct std____allocated_ptr_std__allocator_std___List_node_int___* base542 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t541 + 0);
      _Bool r543 = std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(base542);
      if (r543) {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base544 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t541 + 0);
        struct std___List_node_int_* r545 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base544);
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base546 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t541 + 0);
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base546);
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int__(struct std____cxx11__list_int__std__allocator_int__* v547, int* v548) {
bb549:
  struct std____cxx11__list_int__std__allocator_int__* this550;
  int* __args551;
  struct std___List_node_int_* __retval552;
  struct std__allocator_std___List_node_int__* __alloc553;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard554;
  this550 = v547;
  __args551 = v548;
  struct std____cxx11__list_int__std__allocator_int__* t555 = this550;
  struct std____cxx11___List_base_int__std__allocator_int__* base556 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t555 + 0);
  struct std__allocator_std___List_node_int__* r557 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base556);
  __alloc553 = r557;
  struct std__allocator_std___List_node_int__* t558 = __alloc553;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r559 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t558);
  __guard554 = r559;
    struct std__allocator_std___List_node_int__* t560 = __alloc553;
    struct std___List_node_int_* r561 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard554);
    int* r562 = std___List_node_int____M_valptr(r561);
    int* t563 = __args551;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int__(t560, r562, t563);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base564 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard554) + 0);
    struct std___List_node_int_* r565 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base564);
    __retval552 = r565;
    struct std___List_node_int_* t566 = __retval552;
    struct std___List_node_int_* ret_val567 = t566;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard554);
    }
    return ret_val567;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* v568, unsigned long v569) {
bb570:
  struct std____cxx11___List_base_int__std__allocator_int__* this571;
  unsigned long __n572;
  this571 = v568;
  __n572 = v569;
  struct std____cxx11___List_base_int__std__allocator_int__* t573 = this571;
  unsigned long t574 = __n572;
  struct std____detail___List_size* base575 = (struct std____detail___List_size*)((char *)&(t573->_M_impl._M_node) + 16);
  unsigned long t576 = base575->_M_size;
  unsigned long b577 = t576 + t574;
  base575->_M_size = b577;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJRiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int__(struct std____cxx11__list_int__std__allocator_int__* v578, struct std___List_iterator_int_ v579, int* v580) {
bb581:
  struct std____cxx11__list_int__std__allocator_int__* this582;
  struct std___List_iterator_int_ __position583;
  int* __args584;
  struct std___List_node_int_* __tmp585;
  this582 = v578;
  __position583 = v579;
  __args584 = v580;
  struct std____cxx11__list_int__std__allocator_int__* t586 = this582;
  int* t587 = __args584;
  struct std___List_node_int_* r588 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int__(t586, t587);
  __tmp585 = r588;
  struct std___List_node_int_* t589 = __tmp585;
  struct std____detail___List_node_base* base590 = (struct std____detail___List_node_base*)((char *)t589 + 0);
  struct std____detail___List_node_base* t591 = __position583._M_node;
  std____detail___List_node_base___M_hook(base590, t591);
  struct std____cxx11___List_base_int__std__allocator_int__* base592 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t586 + 0);
  unsigned long c593 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base592, c593);
  return;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v594) {
bb595:
  struct std____detail___List_node_base* this596;
  struct std____detail___List_node_base* __retval597;
  this596 = v594;
  struct std____detail___List_node_base* t598 = this596;
  __retval597 = t598;
  struct std____detail___List_node_base* t599 = __retval597;
  return t599;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5emptyEv
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* v600) {
bb601:
  struct std____cxx11__list_int__std__allocator_int__* this602;
  _Bool __retval603;
  this602 = v600;
  struct std____cxx11__list_int__std__allocator_int__* t604 = this602;
  struct std____cxx11___List_base_int__std__allocator_int__* base605 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t604 + 0);
  struct std____detail___List_node_base* base606 = (struct std____detail___List_node_base*)((char *)&(base605->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t607 = base606->_M_next;
  struct std____cxx11___List_base_int__std__allocator_int__* base608 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t604 + 0);
  struct std____detail___List_node_base* base609 = (struct std____detail___List_node_base*)((char *)&(base608->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r610 = std____detail___List_node_base___M_base___const(base609);
  _Bool c611 = ((t607 == r610)) ? 1 : 0;
  __retval603 = c611;
  _Bool t612 = __retval603;
  return t612;
}

// function: _ZNSt14_List_iteratorIiEmmEv
struct std___List_iterator_int_* std___List_iterator_int___operator___2(struct std___List_iterator_int_* v613) {
bb614:
  struct std___List_iterator_int_* this615;
  struct std___List_iterator_int_* __retval616;
  this615 = v613;
  struct std___List_iterator_int_* t617 = this615;
  struct std____detail___List_node_base* t618 = t617->_M_node;
  struct std____detail___List_node_base* t619 = t618->_M_prev;
  t617->_M_node = t619;
  __retval616 = t617;
  struct std___List_iterator_int_* t620 = __retval616;
  return t620;
}

// function: _ZNSt7__cxx114listIiSaIiEE4backEv
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* v621) {
bb622:
  struct std____cxx11__list_int__std__allocator_int__* this623;
  int* __retval624;
  struct std___List_iterator_int_ __tmp625;
  this623 = v621;
  struct std____cxx11__list_int__std__allocator_int__* t626 = this623;
    do {
          _Bool r627 = std____cxx11__list_int__std__allocator_int_____empty___const(t626);
          if (r627) {
            char* cast628 = (char*)&(_str_2);
            int c629 = 1674;
            char* cast630 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv);
            char* cast631 = (char*)&(_str_3);
            std____glibcxx_assert_fail(cast628, c629, cast630, cast631);
          }
      _Bool c632 = 0;
      if (!c632) break;
    } while (1);
  struct std___List_iterator_int_ r633 = std____cxx11__list_int__std__allocator_int_____end(t626);
  __tmp625 = r633;
  struct std___List_iterator_int_* r634 = std___List_iterator_int___operator___2(&__tmp625);
  int* r635 = std___List_iterator_int___operator____const(&__tmp625);
  __retval624 = r635;
  int* t636 = __retval624;
  return t636;
}

// function: _ZNSt7__cxx114listIiSaIiEE12emplace_backIJRiEEES4_DpOT_
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(struct std____cxx11__list_int__std__allocator_int__* v637, int* v638) {
bb639:
  struct std____cxx11__list_int__std__allocator_int__* this640;
  int* __args641;
  int* __retval642;
  struct std___List_iterator_int_ agg_tmp0643;
  this640 = v637;
  __args641 = v638;
  struct std____cxx11__list_int__std__allocator_int__* t644 = this640;
  struct std___List_iterator_int_ r645 = std____cxx11__list_int__std__allocator_int_____end(t644);
  agg_tmp0643 = r645;
  int* t646 = __args641;
  struct std___List_iterator_int_ t647 = agg_tmp0643;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int__(t644, t647, t646);
  int* r648 = std____cxx11__list_int__std__allocator_int_____back(t644);
  __retval642 = r648;
  int* t649 = __retval642;
  return t649;
}

// function: _ZSteqRKSt14_List_iteratorIiES2_
_Bool std__operator__(struct std___List_iterator_int_* v650, struct std___List_iterator_int_* v651) {
bb652:
  struct std___List_iterator_int_* __x653;
  struct std___List_iterator_int_* __y654;
  _Bool __retval655;
  __x653 = v650;
  __y654 = v651;
  struct std___List_iterator_int_* t656 = __x653;
  struct std____detail___List_node_base* t657 = t656->_M_node;
  struct std___List_iterator_int_* t658 = __y654;
  struct std____detail___List_node_base* t659 = t658->_M_node;
  _Bool c660 = ((t657 == t659)) ? 1 : 0;
  __retval655 = c660;
  _Bool t661 = __retval655;
  return t661;
}

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v662, struct std____detail___List_node_base* v663) {
bb664:
  struct std___List_iterator_int_* this665;
  struct std____detail___List_node_base* __x666;
  this665 = v662;
  __x666 = v663;
  struct std___List_iterator_int_* t667 = this665;
  struct std____detail___List_node_base* t668 = __x666;
  t667->_M_node = t668;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE5beginEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* v669) {
bb670:
  struct std____cxx11__list_int__std__allocator_int__* this671;
  struct std___List_iterator_int_ __retval672;
  this671 = v669;
  struct std____cxx11__list_int__std__allocator_int__* t673 = this671;
  struct std____cxx11___List_base_int__std__allocator_int__* base674 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t673 + 0);
  struct std____detail___List_node_base* base675 = (struct std____detail___List_node_base*)((char *)&(base674->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t676 = base675->_M_next;
  std___List_iterator_int____List_iterator(&__retval672, t676);
  struct std___List_iterator_int_ t677 = __retval672;
  return t677;
}

// function: _ZNSt7__cxx114listIiSaIiEE22_M_initialize_dispatchIPiEEvT_S5_St12__false_type
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_int__(struct std____cxx11__list_int__std__allocator_int__* v678, int* v679, int* v680, struct std____false_type v681) {
bb682:
  struct std____cxx11__list_int__std__allocator_int__* this683;
  int* __first684;
  int* __last685;
  struct std____false_type unnamed686;
  _Bool __notempty687;
  this683 = v678;
  __first684 = v679;
  __last685 = v680;
  unnamed686 = v681;
  struct std____cxx11__list_int__std__allocator_int__* t688 = this683;
  int* t689 = __first684;
  int* t690 = __last685;
  _Bool c691 = ((t689 != t690)) ? 1 : 0;
  __notempty687 = c691;
    while (1) {
      int* t693 = __first684;
      int* t694 = __last685;
      _Bool c695 = ((t693 != t694)) ? 1 : 0;
      if (!c695) break;
      int* t696 = __first684;
      int* r697 = int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(t688, t696);
    for_step692: ;
      int* t698 = __first684;
      int c699 = 1;
      int* ptr700 = &(t698)[c699];
      __first684 = ptr700;
    }
    _Bool t701 = __notempty687;
    if (t701) {
        struct std___List_iterator_int_ ref_tmp0702;
        struct std___List_iterator_int_ ref_tmp1703;
        struct std___List_iterator_int_ r704 = std____cxx11__list_int__std__allocator_int_____begin(t688);
        ref_tmp0702 = r704;
        struct std___List_iterator_int_ r705 = std____cxx11__list_int__std__allocator_int_____end(t688);
        ref_tmp1703 = r705;
        _Bool r706 = std__operator__(&ref_tmp0702, &ref_tmp1703);
        if (r706) {
          __builtin_unreachable();
        }
    }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator_2(struct std____new_allocator_std___List_node_int__* v707) {
bb708:
  struct std____new_allocator_std___List_node_int__* this709;
  this709 = v707;
  struct std____new_allocator_std___List_node_int__* t710 = this709;
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2ERKS2_
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v711, struct std____new_allocator_std___List_node_int__* v712) {
bb713:
  struct std____new_allocator_std___List_node_int__* this714;
  struct std____new_allocator_std___List_node_int__* unnamed715;
  this714 = v711;
  unnamed715 = v712;
  struct std____new_allocator_std___List_node_int__* t716 = this714;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2ERKS1_
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v717, struct std__allocator_std___List_node_int__* v718) {
bb719:
  struct std__allocator_std___List_node_int__* this720;
  struct std__allocator_std___List_node_int__* __a721;
  this720 = v717;
  __a721 = v718;
  struct std__allocator_std___List_node_int__* t722 = this720;
  struct std____new_allocator_std___List_node_int__* base723 = (struct std____new_allocator_std___List_node_int__*)((char *)t722 + 0);
  struct std__allocator_std___List_node_int__* t724 = __a721;
  struct std____new_allocator_std___List_node_int__* base725 = (struct std____new_allocator_std___List_node_int__*)((char *)t724 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base723, base725);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v726) {
bb727:
  struct std____detail___List_node_header* this728;
  this728 = v726;
  struct std____detail___List_node_header* t729 = this728;
  struct std____detail___List_node_base* base730 = (struct std____detail___List_node_base*)((char *)t729 + 0);
  struct std____detail___List_size* base731 = (struct std____detail___List_size*)((char *)t729 + 16);
  std____detail___List_node_header___M_init(t729);
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v732, struct std____detail___List_size* v733) {
bb734:
  struct std____detail___List_size* this735;
  struct std____detail___List_size* unnamed736;
  struct std____detail___List_size* __retval737;
  this735 = v732;
  unnamed736 = v733;
  struct std____detail___List_size* t738 = this735;
  struct std____detail___List_size* t739 = unnamed736;
  unsigned long t740 = t739->_M_size;
  t738->_M_size = t740;
  __retval737 = t738;
  struct std____detail___List_size* t741 = __retval737;
  return t741;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v742) {
bb743:
  struct std____detail___List_node_header* this744;
  struct std____detail___List_size ref_tmp0745;
  this744 = v742;
  struct std____detail___List_node_header* t746 = this744;
  struct std____detail___List_node_base* base747 = (struct std____detail___List_node_base*)((char *)t746 + 0);
  struct std____detail___List_node_base* base748 = (struct std____detail___List_node_base*)((char *)t746 + 0);
  base748->_M_prev = base747;
  struct std____detail___List_node_base* base749 = (struct std____detail___List_node_base*)((char *)t746 + 0);
  base749->_M_next = base747;
  struct std____detail___List_size* base750 = (struct std____detail___List_size*)((char *)t746 + 16);
  ref_tmp0745 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r751 = std____detail___List_size__operator_(base750, &ref_tmp0745);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v752, struct std____allocated_ptr_std__allocator_std___List_node_int___* v753) {
bb754:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this755;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd756;
  this755 = v752;
  __gd756 = v753;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t757 = this755;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t758 = __gd756;
  struct std__allocator_std___List_node_int__* t759 = t758->_M_alloc;
  t757->_M_alloc = t759;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t760 = __gd756;
  struct std___List_node_int_* t761 = t760->_M_ptr;
  t757->_M_ptr = t761;
  struct std___List_node_int_* c762 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t763 = __gd756;
  t763->_M_ptr = c762;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v764) {
bb765:
  struct std___List_node_int_* __ptr766;
  struct std___List_node_int_* __retval767;
  __ptr766 = v764;
  struct std___List_node_int_* t768 = __ptr766;
  __retval767 = t768;
  struct std___List_node_int_* t769 = __retval767;
  return t769;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v770) {
bb771:
  struct std___List_node_int_** __ptr772;
  struct std___List_node_int_* __retval773;
  __ptr772 = v770;
  struct std___List_node_int_** t774 = __ptr772;
  struct std___List_node_int_* t775 = *t774;
  struct std___List_node_int_* r776 = std___List_node_int___std__to_address_std___List_node_int___(t775);
  __retval773 = r776;
  struct std___List_node_int_* t777 = __retval773;
  return t777;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v778) {
bb779:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this780;
  struct std___List_node_int_* __retval781;
  this780 = v778;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t782 = this780;
  struct std___List_node_int_* r783 = auto_std____to_address_std___List_node_int___(&t782->_M_ptr);
  __retval781 = r783;
  struct std___List_node_int_* t784 = __retval781;
  return t784;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v785) {
bb786:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this787;
  _Bool __retval788;
  this787 = v785;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t789 = this787;
  struct std___List_node_int_* t790 = t789->_M_ptr;
  _Bool cast791 = (_Bool)t790;
  __retval788 = cast791;
  _Bool t792 = __retval788;
  return t792;
}

