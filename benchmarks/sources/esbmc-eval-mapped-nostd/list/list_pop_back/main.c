extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___List_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_int___ { struct std__allocator_std___List_node_int__* _M_alloc; struct std___List_node_int_* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____new_allocator_std___List_node_int__ { unsigned char __field0; };
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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[21] = "mylist.back() == 300";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_pop_back/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[23] = "mylist.back() == n*100";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[31] = "The elements of mylist summed ";
char _str_4[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE8pop_backEv[74] = "void std::list<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* p0);
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
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
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_(struct std__allocator_std___List_node_int__* p0, int* p1, int* p2);
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** p0, void** p1);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
extern void std____detail___List_node_base___M_hook(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1);
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, int* p2);
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* p0);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* p0);
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11___List_base_int__std__allocator_int______M_dec_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
extern void std____detail___List_node_base___M_unhook(struct std____detail___List_node_base* p0);
void std____cxx11__list_int__std__allocator_int______M_erase(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1);
void std____cxx11__list_int__std__allocator_int_____pop_back(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
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
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* p0);
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* p0);
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* p0);
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* p0);
void void_std__destroy_at_int_(int* p0);
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* p0, int* p1);
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___List_node_int____M_valptr(struct std___List_node_int_* p0);
_Bool std____is_constant_evaluated();
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
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* p0);
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* p0);
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* p0);
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* p0);
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* p0, struct std____detail___List_size* p1);
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* p0);
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0, struct std____allocated_ptr_std__allocator_std___List_node_int___* p1);
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* p0);
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** p0);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);

// function: _ZNSt7__cxx114listIiSaIiEEC2Ev
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* v0) {
bb1: ;
  struct std____cxx11__list_int__std__allocator_int__* this2;
  this2 = v0;
  struct std____cxx11__list_int__std__allocator_int__* t3 = this2;
  struct std____cxx11___List_base_int__std__allocator_int__* base4 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t3 + 0);
  std____cxx11___List_base_int__std__allocator_int______List_base(base4);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* v5) {
bb6: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this7;
  struct std__allocator_std___List_node_int__* __retval8;
  this7 = v5;
  struct std____cxx11___List_base_int__std__allocator_int__* t9 = this7;
  struct std__allocator_std___List_node_int__* base10 = (struct std__allocator_std___List_node_int__*)((char *)&(t9->_M_impl) + 0);
  __retval8 = base10;
  struct std__allocator_std___List_node_int__* t11 = __retval8;
  return t11;
}

// function: _ZNKSt15__new_allocatorISt10_List_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* v12) {
bb13: ;
  struct std____new_allocator_std___List_node_int__* this14;
  unsigned long __retval15;
  this14 = v12;
  struct std____new_allocator_std___List_node_int__* t16 = this14;
  unsigned long c17 = 9223372036854775807;
  unsigned long c18 = 24;
  unsigned long b19 = c17 / c18;
  __retval15 = b19;
  unsigned long t20 = __retval15;
  return t20;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* v21, unsigned long v22, void* v23) {
bb24: ;
  struct std____new_allocator_std___List_node_int__* this25;
  unsigned long __n26;
  void* unnamed27;
  struct std___List_node_int_* __retval28;
  this25 = v21;
  __n26 = v22;
  unnamed27 = v23;
  struct std____new_allocator_std___List_node_int__* t29 = this25;
    unsigned long t30 = __n26;
    unsigned long r31 = std____new_allocator_std___List_node_int______M_max_size___const(t29);
    _Bool c32 = ((t30 > r31)) ? 1 : 0;
    if (c32) {
        unsigned long t33 = __n26;
        unsigned long c34 = -1;
        unsigned long c35 = 24;
        unsigned long b36 = c34 / c35;
        _Bool c37 = ((t33 > b36)) ? 1 : 0;
        if (c37) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c38 = 8;
    unsigned long c39 = 16;
    _Bool c40 = ((c38 > c39)) ? 1 : 0;
    if (c40) {
      unsigned long __al41;
      unsigned long c42 = 8;
      __al41 = c42;
      unsigned long t43 = __n26;
      unsigned long c44 = 24;
      unsigned long b45 = t43 * c44;
      unsigned long t46 = __al41;
      void* r47 = operator_new_2(b45, t46);
      struct std___List_node_int_* cast48 = (struct std___List_node_int_*)r47;
      __retval28 = cast48;
      struct std___List_node_int_* t49 = __retval28;
      return t49;
    }
  unsigned long t50 = __n26;
  unsigned long c51 = 24;
  unsigned long b52 = t50 * c51;
  void* r53 = operator_new(b52);
  struct std___List_node_int_* cast54 = (struct std___List_node_int_*)r53;
  __retval28 = cast54;
  struct std___List_node_int_* t55 = __retval28;
  return t55;
}

// function: _ZNSaISt10_List_nodeIiEE8allocateEm
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* v56, unsigned long v57) {
bb58: ;
  struct std__allocator_std___List_node_int__* this59;
  unsigned long __n60;
  struct std___List_node_int_* __retval61;
  this59 = v56;
  __n60 = v57;
  struct std__allocator_std___List_node_int__* t62 = this59;
    _Bool r63 = std____is_constant_evaluated();
    if (r63) {
        unsigned long t64 = __n60;
        unsigned long c65 = 24;
        unsigned long ovr66;
        _Bool ovf67 = __builtin_mul_overflow(t64, c65, &ovr66);
        __n60 = ovr66;
        if (ovf67) {
          std____throw_bad_array_new_length();
        }
      unsigned long t68 = __n60;
      void* r69 = operator_new(t68);
      struct std___List_node_int_* cast70 = (struct std___List_node_int_*)r69;
      __retval61 = cast70;
      struct std___List_node_int_* t71 = __retval61;
      return t71;
    }
  struct std____new_allocator_std___List_node_int__* base72 = (struct std____new_allocator_std___List_node_int__*)((char *)t62 + 0);
  unsigned long t73 = __n60;
  void* c74 = ((void*)0);
  struct std___List_node_int_* r75 = std____new_allocator_std___List_node_int_____allocate(base72, t73, c74);
  __retval61 = r75;
  struct std___List_node_int_* t76 = __retval61;
  return t76;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE8allocateERS2_m
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* v77, unsigned long v78) {
bb79: ;
  struct std__allocator_std___List_node_int__* __a80;
  unsigned long __n81;
  struct std___List_node_int_* __retval82;
  __a80 = v77;
  __n81 = v78;
  struct std__allocator_std___List_node_int__* t83 = __a80;
  unsigned long t84 = __n81;
  struct std___List_node_int_* r85 = std__allocator_std___List_node_int_____allocate(t83, t84);
  __retval82 = r85;
  struct std___List_node_int_* t86 = __retval82;
  return t86;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* v87, struct std__allocator_std___List_node_int__* v88, struct std___List_node_int_* v89) {
bb90: ;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this91;
  struct std__allocator_std___List_node_int__* __a92;
  struct std___List_node_int_* __ptr93;
  this91 = v87;
  __a92 = v88;
  __ptr93 = v89;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t94 = this91;
  struct std__allocator_std___List_node_int__* t95 = __a92;
  t94->_M_alloc = t95;
  struct std___List_node_int_* t96 = __ptr93;
  t94->_M_ptr = t96;
  return;
}

// function: _ZSt18__allocate_guardedISaISt10_List_nodeIiEEESt15__allocated_ptrIT_ERS4_
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v97) {
bb98: ;
  struct std__allocator_std___List_node_int__* __a99;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ __retval100;
  __a99 = v97;
  struct std__allocator_std___List_node_int__* t101 = __a99;
  struct std__allocator_std___List_node_int__* t102 = __a99;
  unsigned long c103 = 1;
  struct std___List_node_int_* r104 = std__allocator_traits_std__allocator_std___List_node_int_______allocate(t102, c103);
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(&__retval100, t101, r104);
  struct std____allocated_ptr_std__allocator_std___List_node_int___ t105 = __retval100;
  return t105;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEEC2EOSt15__allocated_ptrIS2_E
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v106, struct std____allocated_ptr_std__allocator_std___List_node_int___* v107) {
bb108: ;
  struct std____allocated_obj_std__allocator_std___List_node_int___* this109;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __ptr110;
  this109 = v106;
  __ptr110 = v107;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t111 = this109;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base112 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t111 + 0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t113 = __ptr110;
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(base112, t113);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base114 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t111 + 0);
    struct std___List_node_int_* r115 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base114);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v116) {
bb117: ;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this118;
  this118 = v116;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t119 = this118;
    struct std___List_node_int_* t120 = t119->_M_ptr;
    struct std___List_node_int_* c121 = ((void*)0);
    _Bool c122 = ((t120 != c121)) ? 1 : 0;
    if (c122) {
      struct std__allocator_std___List_node_int__* t123 = t119->_M_alloc;
      struct std___List_node_int_* t124 = t119->_M_ptr;
      unsigned long c125 = 1;
      std__allocator_traits_std__allocator_std___List_node_int_______deallocate(t123, t124, c125);
    }
  return;
}

// function: _ZSt22__allocate_guarded_objISaISt10_List_nodeIiEEESt15__allocated_objIT_ERS4_
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v126) {
bb127: ;
  struct std__allocator_std___List_node_int__* __a128;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __retval129;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ ref_tmp0130;
  __a128 = v126;
  struct std__allocator_std___List_node_int__* t131 = __a128;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ r132 = std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(t131);
  ref_tmp0130 = r132;
    std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(&__retval129, &ref_tmp0130);
  {
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp0130);
  }
  struct std____allocated_obj_std__allocator_std___List_node_int___ t133 = __retval129;
  return t133;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v134, int* v135) {
bb136: ;
  int* __location137;
  int* __args138;
  int* __retval139;
  void* __loc140;
  __location137 = v134;
  __args138 = v135;
  int* t141 = __location137;
  void* cast142 = (void*)t141;
  __loc140 = cast142;
    void* t143 = __loc140;
    int* cast144 = (int*)t143;
    int* t145 = __args138;
    int t146 = *t145;
    *cast144 = t146;
    __retval139 = cast144;
    int* t147 = __retval139;
    return t147;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_(struct std__allocator_std___List_node_int__* v148, int* v149, int* v150) {
bb151: ;
  struct std__allocator_std___List_node_int__* __a152;
  int* __p153;
  int* __args154;
  __a152 = v148;
  __p153 = v149;
  __args154 = v150;
  int* t155 = __p153;
  int* t156 = __args154;
  int* r157 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t155, t156);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIiEEEptEv
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* v158) {
bb159: ;
  struct std____allocated_obj_std__allocator_std___List_node_int___* this160;
  struct std___List_node_int_* __retval161;
  this160 = v158;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t162 = this160;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base163 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t162 + 0);
  struct std___List_node_int_* r164 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base163);
  __retval161 = r164;
  struct std___List_node_int_* t165 = __retval161;
  return t165;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIiEDnET_RS3_OT0_
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** v166, void** v167) {
bb168: ;
  struct std___List_node_int_** __obj169;
  void** __new_val170;
  struct std___List_node_int_* __retval171;
  struct std___List_node_int_* __old_val172;
  __obj169 = v166;
  __new_val170 = v167;
  struct std___List_node_int_** t173 = __obj169;
  struct std___List_node_int_* t174 = *t173;
  __old_val172 = t174;
  void** t175 = __new_val170;
  struct std___List_node_int_* c176 = ((void*)0);
  struct std___List_node_int_** t177 = __obj169;
  *t177 = c176;
  struct std___List_node_int_* t178 = __old_val172;
  __retval171 = t178;
  struct std___List_node_int_* t179 = __retval171;
  return t179;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEE7releaseEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* v180) {
bb181: ;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this182;
  struct std___List_node_int_* __retval183;
  void* ref_tmp0184;
  this182 = v180;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t185 = this182;
  void* c186 = ((void*)0);
  ref_tmp0184 = c186;
  struct std___List_node_int_* r187 = std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(&t185->_M_ptr, &ref_tmp0184);
  __retval183 = r187;
  struct std___List_node_int_* t188 = __retval183;
  return t188;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v189) {
bb190: ;
  struct std____allocated_obj_std__allocator_std___List_node_int___* this191;
  this191 = v189;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t192 = this191;
      struct std____allocated_ptr_std__allocator_std___List_node_int___* base193 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t192 + 0);
      _Bool r194 = std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(base193);
      if (r194) {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base195 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t192 + 0);
        struct std___List_node_int_* r196 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base195);
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base197 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t192 + 0);
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base197);
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_(struct std____cxx11__list_int__std__allocator_int__* v198, int* v199) {
bb200: ;
  struct std____cxx11__list_int__std__allocator_int__* this201;
  int* __args202;
  struct std___List_node_int_* __retval203;
  struct std__allocator_std___List_node_int__* __alloc204;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard205;
  this201 = v198;
  __args202 = v199;
  struct std____cxx11__list_int__std__allocator_int__* t206 = this201;
  struct std____cxx11___List_base_int__std__allocator_int__* base207 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t206 + 0);
  struct std__allocator_std___List_node_int__* r208 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base207);
  __alloc204 = r208;
  struct std__allocator_std___List_node_int__* t209 = __alloc204;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r210 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t209);
  __guard205 = r210;
    struct std__allocator_std___List_node_int__* t211 = __alloc204;
    struct std___List_node_int_* r212 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard205);
    int* r213 = std___List_node_int____M_valptr(r212);
    int* t214 = __args202;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_(t211, r213, t214);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base215 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard205) + 0);
    struct std___List_node_int_* r216 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base215);
    __retval203 = r216;
    struct std___List_node_int_* t217 = __retval203;
    struct std___List_node_int_* ret_val218 = t217;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard205);
    }
    return ret_val218;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* v219, unsigned long v220) {
bb221: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this222;
  unsigned long __n223;
  this222 = v219;
  __n223 = v220;
  struct std____cxx11___List_base_int__std__allocator_int__* t224 = this222;
  unsigned long t225 = __n223;
  struct std____detail___List_size* base226 = (struct std____detail___List_size*)((char *)&(t224->_M_impl._M_node) + 16);
  unsigned long t227 = base226->_M_size;
  unsigned long b228 = t227 + t225;
  base226->_M_size = b228;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_(struct std____cxx11__list_int__std__allocator_int__* v229, struct std___List_iterator_int_ v230, int* v231) {
bb232: ;
  struct std____cxx11__list_int__std__allocator_int__* this233;
  struct std___List_iterator_int_ __position234;
  int* __args235;
  struct std___List_node_int_* __tmp236;
  this233 = v229;
  __position234 = v230;
  __args235 = v231;
  struct std____cxx11__list_int__std__allocator_int__* t237 = this233;
  int* t238 = __args235;
  struct std___List_node_int_* r239 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_(t237, t238);
  __tmp236 = r239;
  struct std___List_node_int_* t240 = __tmp236;
  struct std____detail___List_node_base* base241 = (struct std____detail___List_node_base*)((char *)t240 + 0);
  struct std____detail___List_node_base* t242 = __position234._M_node;
  std____detail___List_node_base___M_hook(base241, t242);
  struct std____cxx11___List_base_int__std__allocator_int__* base243 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t237 + 0);
  unsigned long c244 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base243, c244);
  return;
}

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v245, struct std____detail___List_node_base* v246) {
bb247: ;
  struct std___List_iterator_int_* this248;
  struct std____detail___List_node_base* __x249;
  this248 = v245;
  __x249 = v246;
  struct std___List_iterator_int_* t250 = this248;
  struct std____detail___List_node_base* t251 = __x249;
  t250->_M_node = t251;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v252) {
bb253: ;
  struct std____cxx11__list_int__std__allocator_int__* this254;
  struct std___List_iterator_int_ __retval255;
  this254 = v252;
  struct std____cxx11__list_int__std__allocator_int__* t256 = this254;
  struct std____cxx11___List_base_int__std__allocator_int__* base257 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t256 + 0);
  struct std____detail___List_node_base* r258 = std____detail___List_node_header___M_base(&base257->_M_impl._M_node);
  std___List_iterator_int____List_iterator(&__retval255, r258);
  struct std___List_iterator_int_ t259 = __retval255;
  return t259;
}

// function: _ZNSt7__cxx114listIiSaIiEE9push_backEOi
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* v260, int* v261) {
bb262: ;
  struct std____cxx11__list_int__std__allocator_int__* this263;
  int* __x264;
  struct std___List_iterator_int_ agg_tmp0265;
  this263 = v260;
  __x264 = v261;
  struct std____cxx11__list_int__std__allocator_int__* t266 = this263;
  struct std___List_iterator_int_ r267 = std____cxx11__list_int__std__allocator_int_____end(t266);
  agg_tmp0265 = r267;
  int* t268 = __x264;
  struct std___List_iterator_int_ t269 = agg_tmp0265;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_(t266, t269, t268);
  return;
}

// function: _ZNSt14_List_iteratorIiEmmEv
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* v270) {
bb271: ;
  struct std___List_iterator_int_* this272;
  struct std___List_iterator_int_* __retval273;
  this272 = v270;
  struct std___List_iterator_int_* t274 = this272;
  struct std____detail___List_node_base* t275 = t274->_M_node;
  struct std____detail___List_node_base* t276 = t275->_M_prev;
  t274->_M_node = t276;
  __retval273 = t274;
  struct std___List_iterator_int_* t277 = __retval273;
  return t277;
}

// function: _ZNKSt14_List_iteratorIiEdeEv
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* v278) {
bb279: ;
  struct std___List_iterator_int_* this280;
  int* __retval281;
  this280 = v278;
  struct std___List_iterator_int_* t282 = this280;
  struct std____detail___List_node_base* t283 = t282->_M_node;
  struct std___List_node_int_* derived284 = ((t283) ? (struct std___List_node_int_*)((char *)t283 - 0) : (struct std___List_node_int_*)0);
  int* r285 = std___List_node_int____M_valptr(derived284);
  __retval281 = r285;
  int* t286 = __retval281;
  return t286;
}

// function: _ZNSt7__cxx114listIiSaIiEE4backEv
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* v287) {
bb288: ;
  struct std____cxx11__list_int__std__allocator_int__* this289;
  int* __retval290;
  struct std___List_iterator_int_ __tmp291;
  this289 = v287;
  struct std____cxx11__list_int__std__allocator_int__* t292 = this289;
    do {
          _Bool r293 = std____cxx11__list_int__std__allocator_int_____empty___const(t292);
          if (r293) {
            char* cast294 = (char*)&(_str_4);
            int c295 = 1674;
            char* cast296 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv);
            char* cast297 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast294, c295, cast296, cast297);
          }
      _Bool c298 = 0;
      if (!c298) break;
    } while (1);
  struct std___List_iterator_int_ r299 = std____cxx11__list_int__std__allocator_int_____end(t292);
  __tmp291 = r299;
  struct std___List_iterator_int_* r300 = std___List_iterator_int___operator__(&__tmp291);
  int* r301 = std___List_iterator_int___operator____const(&__tmp291);
  __retval290 = r301;
  int* t302 = __retval290;
  return t302;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v303) {
bb304: ;
  struct std____detail___List_node_base* this305;
  struct std____detail___List_node_base* __retval306;
  this305 = v303;
  struct std____detail___List_node_base* t307 = this305;
  __retval306 = t307;
  struct std____detail___List_node_base* t308 = __retval306;
  return t308;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5emptyEv
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* v309) {
bb310: ;
  struct std____cxx11__list_int__std__allocator_int__* this311;
  _Bool __retval312;
  this311 = v309;
  struct std____cxx11__list_int__std__allocator_int__* t313 = this311;
  struct std____cxx11___List_base_int__std__allocator_int__* base314 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t313 + 0);
  struct std____detail___List_node_base* base315 = (struct std____detail___List_node_base*)((char *)&(base314->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t316 = base315->_M_next;
  struct std____cxx11___List_base_int__std__allocator_int__* base317 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t313 + 0);
  struct std____detail___List_node_base* base318 = (struct std____detail___List_node_base*)((char *)&(base317->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r319 = std____detail___List_node_base___M_base___const(base318);
  _Bool c320 = ((t316 == r319)) ? 1 : 0;
  __retval312 = c320;
  _Bool t321 = __retval312;
  return t321;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_dec_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_dec_size(struct std____cxx11___List_base_int__std__allocator_int__* v322, unsigned long v323) {
bb324: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this325;
  unsigned long __n326;
  this325 = v322;
  __n326 = v323;
  struct std____cxx11___List_base_int__std__allocator_int__* t327 = this325;
  unsigned long t328 = __n326;
  struct std____detail___List_size* base329 = (struct std____detail___List_size*)((char *)&(t327->_M_impl._M_node) + 16);
  unsigned long t330 = base329->_M_size;
  unsigned long b331 = t330 - t328;
  base329->_M_size = b331;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE8_M_eraseESt14_List_iteratorIiE
void std____cxx11__list_int__std__allocator_int______M_erase(struct std____cxx11__list_int__std__allocator_int__* v332, struct std___List_iterator_int_ v333) {
bb334: ;
  struct std____cxx11__list_int__std__allocator_int__* this335;
  struct std___List_iterator_int_ __position336;
  struct std___List_node_int_* __n337;
  this335 = v332;
  __position336 = v333;
  struct std____cxx11__list_int__std__allocator_int__* t338 = this335;
  struct std____cxx11___List_base_int__std__allocator_int__* base339 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t338 + 0);
  unsigned long c340 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_dec_size(base339, c340);
  struct std____detail___List_node_base* t341 = __position336._M_node;
  std____detail___List_node_base___M_unhook(t341);
  struct std____detail___List_node_base* t342 = __position336._M_node;
  struct std___List_node_int_* derived343 = (struct std___List_node_int_*)((char *)t342 - 0);
  __n337 = derived343;
  struct std____cxx11___List_base_int__std__allocator_int__* base344 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t338 + 0);
  struct std___List_node_int_* t345 = __n337;
  struct std___List_node_int_* r346 = std___List_node_int____M_node_ptr(t345);
  std____cxx11___List_base_int__std__allocator_int______M_destroy_node(base344, r346);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE8pop_backEv
void std____cxx11__list_int__std__allocator_int_____pop_back(struct std____cxx11__list_int__std__allocator_int__* v347) {
bb348: ;
  struct std____cxx11__list_int__std__allocator_int__* this349;
  struct std___List_iterator_int_ agg_tmp0350;
  this349 = v347;
  struct std____cxx11__list_int__std__allocator_int__* t351 = this349;
    do {
          _Bool r352 = std____cxx11__list_int__std__allocator_int_____empty___const(t351);
          if (r352) {
            char* cast353 = (char*)&(_str_4);
            int c354 = 1840;
            char* cast355 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE8pop_backEv);
            char* cast356 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast353, c354, cast355, cast356);
          }
      _Bool c357 = 0;
      if (!c357) break;
    } while (1);
  struct std____cxx11___List_base_int__std__allocator_int__* base358 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t351 + 0);
  struct std____detail___List_node_base* base359 = (struct std____detail___List_node_base*)((char *)&(base358->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t360 = base359->_M_prev;
  std___List_iterator_int____List_iterator(&agg_tmp0350, t360);
  struct std___List_iterator_int_ t361 = agg_tmp0350;
  std____cxx11__list_int__std__allocator_int______M_erase(t351, t361);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v362, int v363) {
bb364: ;
  int __a365;
  int __b366;
  int __retval367;
  __a365 = v362;
  __b366 = v363;
  int t368 = __a365;
  int t369 = __b366;
  int b370 = t368 | t369;
  __retval367 = b370;
  int t371 = __retval367;
  return t371;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v372) {
bb373: ;
  struct std__basic_ios_char__std__char_traits_char__* this374;
  int __retval375;
  this374 = v372;
  struct std__basic_ios_char__std__char_traits_char__* t376 = this374;
  struct std__ios_base* base377 = (struct std__ios_base*)((char *)t376 + 0);
  int t378 = base377->_M_streambuf_state;
  __retval375 = t378;
  int t379 = __retval375;
  return t379;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v380, int v381) {
bb382: ;
  struct std__basic_ios_char__std__char_traits_char__* this383;
  int __state384;
  this383 = v380;
  __state384 = v381;
  struct std__basic_ios_char__std__char_traits_char__* t385 = this383;
  int r386 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t385);
  int t387 = __state384;
  int r388 = std__operator_(r386, t387);
  std__basic_ios_char__std__char_traits_char_____clear(t385, r388);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v389, char* v390) {
bb391: ;
  char* __c1392;
  char* __c2393;
  _Bool __retval394;
  __c1392 = v389;
  __c2393 = v390;
  char* t395 = __c1392;
  char t396 = *t395;
  int cast397 = (int)t396;
  char* t398 = __c2393;
  char t399 = *t398;
  int cast400 = (int)t399;
  _Bool c401 = ((cast397 == cast400)) ? 1 : 0;
  __retval394 = c401;
  _Bool t402 = __retval394;
  return t402;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v403) {
bb404: ;
  char* __p405;
  unsigned long __retval406;
  unsigned long __i407;
  __p405 = v403;
  unsigned long c408 = 0;
  __i407 = c408;
    char ref_tmp0409;
    while (1) {
      unsigned long t410 = __i407;
      char* t411 = __p405;
      char* ptr412 = &(t411)[t410];
      char c413 = 0;
      ref_tmp0409 = c413;
      _Bool r414 = __gnu_cxx__char_traits_char___eq(ptr412, &ref_tmp0409);
      _Bool u415 = !r414;
      if (!u415) break;
      unsigned long t416 = __i407;
      unsigned long u417 = t416 + 1;
      __i407 = u417;
    }
  unsigned long t418 = __i407;
  __retval406 = t418;
  unsigned long t419 = __retval406;
  return t419;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v420) {
bb421: ;
  char* __s422;
  unsigned long __retval423;
  __s422 = v420;
    _Bool r424 = std____is_constant_evaluated();
    if (r424) {
      char* t425 = __s422;
      unsigned long r426 = __gnu_cxx__char_traits_char___length(t425);
      __retval423 = r426;
      unsigned long t427 = __retval423;
      return t427;
    }
  char* t428 = __s422;
  unsigned long r429 = strlen(t428);
  __retval423 = r429;
  unsigned long t430 = __retval423;
  return t430;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v431, char* v432) {
bb433: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out434;
  char* __s435;
  struct std__basic_ostream_char__std__char_traits_char__* __retval436;
  __out434 = v431;
  __s435 = v432;
    char* t437 = __s435;
    _Bool cast438 = (_Bool)t437;
    _Bool u439 = !cast438;
    if (u439) {
      struct std__basic_ostream_char__std__char_traits_char__* t440 = __out434;
      void** v441 = (void**)t440;
      void* v442 = *((void**)v441);
      unsigned char* cast443 = (unsigned char*)v442;
      long c444 = -24;
      unsigned char* ptr445 = &(cast443)[c444];
      long* cast446 = (long*)ptr445;
      long t447 = *cast446;
      unsigned char* cast448 = (unsigned char*)t440;
      unsigned char* ptr449 = &(cast448)[t447];
      struct std__basic_ostream_char__std__char_traits_char__* cast450 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr449;
      struct std__basic_ios_char__std__char_traits_char__* cast451 = (struct std__basic_ios_char__std__char_traits_char__*)cast450;
      int t452 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast451, t452);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t453 = __out434;
      char* t454 = __s435;
      char* t455 = __s435;
      unsigned long r456 = std__char_traits_char___length(t455);
      long cast457 = (long)r456;
      struct std__basic_ostream_char__std__char_traits_char__* r458 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t453, t454, cast457);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t459 = __out434;
  __retval436 = t459;
  struct std__basic_ostream_char__std__char_traits_char__* t460 = __retval436;
  return t460;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v461, void* v462) {
bb463: ;
  struct std__basic_ostream_char__std__char_traits_char__* this464;
  void* __pf465;
  struct std__basic_ostream_char__std__char_traits_char__* __retval466;
  this464 = v461;
  __pf465 = v462;
  struct std__basic_ostream_char__std__char_traits_char__* t467 = this464;
  void* t468 = __pf465;
  struct std__basic_ostream_char__std__char_traits_char__* r469 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t468)(t467);
  __retval466 = r469;
  struct std__basic_ostream_char__std__char_traits_char__* t470 = __retval466;
  return t470;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v471) {
bb472: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os473;
  struct std__basic_ostream_char__std__char_traits_char__* __retval474;
  __os473 = v471;
  struct std__basic_ostream_char__std__char_traits_char__* t475 = __os473;
  struct std__basic_ostream_char__std__char_traits_char__* r476 = std__ostream__flush(t475);
  __retval474 = r476;
  struct std__basic_ostream_char__std__char_traits_char__* t477 = __retval474;
  return t477;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v478) {
bb479: ;
  struct std__ctype_char_* __f480;
  struct std__ctype_char_* __retval481;
  __f480 = v478;
    struct std__ctype_char_* t482 = __f480;
    _Bool cast483 = (_Bool)t482;
    _Bool u484 = !cast483;
    if (u484) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t485 = __f480;
  __retval481 = t485;
  struct std__ctype_char_* t486 = __retval481;
  return t486;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v487, char v488) {
bb489: ;
  struct std__ctype_char_* this490;
  char __c491;
  char __retval492;
  this490 = v487;
  __c491 = v488;
  struct std__ctype_char_* t493 = this490;
    char t494 = t493->_M_widen_ok;
    _Bool cast495 = (_Bool)t494;
    if (cast495) {
      char t496 = __c491;
      unsigned char cast497 = (unsigned char)t496;
      unsigned long cast498 = (unsigned long)cast497;
      char t499 = t493->_M_widen[cast498];
      __retval492 = t499;
      char t500 = __retval492;
      return t500;
    }
  std__ctype_char____M_widen_init___const(t493);
  char t501 = __c491;
  void** v502 = (void**)t493;
  void* v503 = *((void**)v502);
  char vcall506 = (char)__VERIFIER_virtual_call_char_char(t493, 6, t501);
  __retval492 = vcall506;
  char t507 = __retval492;
  return t507;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v508, char v509) {
bb510: ;
  struct std__basic_ios_char__std__char_traits_char__* this511;
  char __c512;
  char __retval513;
  this511 = v508;
  __c512 = v509;
  struct std__basic_ios_char__std__char_traits_char__* t514 = this511;
  struct std__ctype_char_* t515 = t514->_M_ctype;
  struct std__ctype_char_* r516 = std__ctype_char__const__std____check_facet_std__ctype_char___(t515);
  char t517 = __c512;
  char r518 = std__ctype_char___widen_char__const(r516, t517);
  __retval513 = r518;
  char t519 = __retval513;
  return t519;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v520) {
bb521: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os522;
  struct std__basic_ostream_char__std__char_traits_char__* __retval523;
  __os522 = v520;
  struct std__basic_ostream_char__std__char_traits_char__* t524 = __os522;
  struct std__basic_ostream_char__std__char_traits_char__* t525 = __os522;
  void** v526 = (void**)t525;
  void* v527 = *((void**)v526);
  unsigned char* cast528 = (unsigned char*)v527;
  long c529 = -24;
  unsigned char* ptr530 = &(cast528)[c529];
  long* cast531 = (long*)ptr530;
  long t532 = *cast531;
  unsigned char* cast533 = (unsigned char*)t525;
  unsigned char* ptr534 = &(cast533)[t532];
  struct std__basic_ostream_char__std__char_traits_char__* cast535 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr534;
  struct std__basic_ios_char__std__char_traits_char__* cast536 = (struct std__basic_ios_char__std__char_traits_char__*)cast535;
  char c537 = 10;
  char r538 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast536, c537);
  struct std__basic_ostream_char__std__char_traits_char__* r539 = std__ostream__put(t524, r538);
  struct std__basic_ostream_char__std__char_traits_char__* r540 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r539);
  __retval523 = r540;
  struct std__basic_ostream_char__std__char_traits_char__* t541 = __retval523;
  return t541;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v542) {
bb543: ;
  struct std____cxx11__list_int__std__allocator_int__* this544;
  this544 = v542;
  struct std____cxx11__list_int__std__allocator_int__* t545 = this544;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base546 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t545 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base546);
  }
  return;
}

// function: main
int main() {
bb547: ;
  int __retval548;
  struct std____cxx11__list_int__std__allocator_int__ mylist549;
  int sum550;
  int ref_tmp0551;
  int ref_tmp1552;
  int ref_tmp2553;
  int n554;
  int c555 = 0;
  __retval548 = c555;
  std____cxx11__list_int__std__allocator_int_____list(&mylist549);
    int c556 = 0;
    sum550 = c556;
    int c557 = 100;
    ref_tmp0551 = c557;
    std____cxx11__list_int__std__allocator_int_____push_back(&mylist549, &ref_tmp0551);
    int c558 = 200;
    ref_tmp1552 = c558;
    std____cxx11__list_int__std__allocator_int_____push_back(&mylist549, &ref_tmp1552);
    int c559 = 300;
    ref_tmp2553 = c559;
    std____cxx11__list_int__std__allocator_int_____push_back(&mylist549, &ref_tmp2553);
    int* r560 = std____cxx11__list_int__std__allocator_int_____back(&mylist549);
    int t561 = *r560;
    int c562 = 300;
    _Bool c563 = ((t561 == c562)) ? 1 : 0;
    if (c563) {
    } else {
      char* cast564 = (char*)&(_str);
      char* c565 = (char*)_str_1;
      unsigned int c566 = 21;
      char* cast567 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast564, c565, c566, cast567);
    }
    int c568 = 3;
    n554 = c568;
      while (1) {
        _Bool r569 = std____cxx11__list_int__std__allocator_int_____empty___const(&mylist549);
        _Bool u570 = !r569;
        if (!u570) break;
          int* r571 = std____cxx11__list_int__std__allocator_int_____back(&mylist549);
          int t572 = *r571;
          int t573 = n554;
          int c574 = 100;
          int b575 = t573 * c574;
          _Bool c576 = ((t572 == b575)) ? 1 : 0;
          if (c576) {
          } else {
            char* cast577 = (char*)&(_str_2);
            char* c578 = (char*)_str_1;
            unsigned int c579 = 25;
            char* cast580 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast577, c578, c579, cast580);
          }
          int* r581 = std____cxx11__list_int__std__allocator_int_____back(&mylist549);
          int t582 = *r581;
          int t583 = sum550;
          int b584 = t583 + t582;
          sum550 = b584;
          std____cxx11__list_int__std__allocator_int_____pop_back(&mylist549);
          int t585 = n554;
          int u586 = t585 - 1;
          n554 = u586;
      }
    char* cast587 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r588 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast587);
    int t589 = sum550;
    struct std__basic_ostream_char__std__char_traits_char__* r590 = std__ostream__operator__(r588, t589);
    struct std__basic_ostream_char__std__char_traits_char__* r591 = std__ostream__operator___std__ostream_____(r590, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c592 = 0;
    __retval548 = c592;
    int t593 = __retval548;
    int ret_val594 = t593;
    {
      std____cxx11__list_int__std__allocator_int______list(&mylist549);
    }
    return ret_val594;
  int t595 = __retval548;
  return t595;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v596) {
bb597: ;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this598;
  this598 = v596;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t599 = this598;
  struct std__allocator_std___List_node_int__* base600 = (struct std__allocator_std___List_node_int__*)((char *)t599 + 0);
  std__allocator_std___List_node_int_____allocator(base600);
    std____detail___List_node_header___List_node_header(&t599->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v601) {
bb602: ;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this603;
  this603 = v601;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t604 = this603;
  {
    struct std__allocator_std___List_node_int__* base605 = (struct std__allocator_std___List_node_int__*)((char *)t604 + 0);
    std__allocator_std___List_node_int______allocator(base605);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v606) {
bb607: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this608;
  this608 = v606;
  struct std____cxx11___List_base_int__std__allocator_int__* t609 = this608;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t609->_M_impl);
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v610) {
bb611: ;
  struct std____detail___List_node_header* this612;
  struct std____detail___List_node_base* __retval613;
  this612 = v610;
  struct std____detail___List_node_header* t614 = this612;
  struct std____detail___List_node_base* base615 = (struct std____detail___List_node_base*)((char *)t614 + 0);
  __retval613 = base615;
  struct std____detail___List_node_base* t616 = __retval613;
  return t616;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v617) {
bb618: ;
  int* __location619;
  __location619 = v617;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v620, int* v621) {
bb622: ;
  struct std__allocator_std___List_node_int__* __a623;
  int* __p624;
  __a623 = v620;
  __p624 = v621;
  int* t625 = __p624;
  void_std__destroy_at_int_(t625);
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v626) {
bb627: ;
  struct __gnu_cxx____aligned_membuf_int_* this628;
  void* __retval629;
  this628 = v626;
  struct __gnu_cxx____aligned_membuf_int_* t630 = this628;
  void* cast631 = (void*)&(t630->_M_storage);
  __retval629 = cast631;
  void* t632 = __retval629;
  return t632;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v633) {
bb634: ;
  struct __gnu_cxx____aligned_membuf_int_* this635;
  int* __retval636;
  this635 = v633;
  struct __gnu_cxx____aligned_membuf_int_* t637 = this635;
  void* r638 = __gnu_cxx____aligned_membuf_int____M_addr(t637);
  int* cast639 = (int*)r638;
  __retval636 = cast639;
  int* t640 = __retval636;
  return t640;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v641) {
bb642: ;
  struct std___List_node_int_* this643;
  int* __retval644;
  this643 = v641;
  struct std___List_node_int_* t645 = this643;
  int* r646 = __gnu_cxx____aligned_membuf_int____M_ptr(&t645->_M_storage);
  __retval644 = r646;
  int* t647 = __retval644;
  return t647;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb648: ;
  _Bool __retval649;
    _Bool c650 = 0;
    __retval649 = c650;
    _Bool t651 = __retval649;
    return t651;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v652, struct std___List_node_int_* v653, unsigned long v654) {
bb655: ;
  struct std____new_allocator_std___List_node_int__* this656;
  struct std___List_node_int_* __p657;
  unsigned long __n658;
  this656 = v652;
  __p657 = v653;
  __n658 = v654;
  struct std____new_allocator_std___List_node_int__* t659 = this656;
    unsigned long c660 = 8;
    unsigned long c661 = 16;
    _Bool c662 = ((c660 > c661)) ? 1 : 0;
    if (c662) {
      struct std___List_node_int_* t663 = __p657;
      void* cast664 = (void*)t663;
      unsigned long t665 = __n658;
      unsigned long c666 = 24;
      unsigned long b667 = t665 * c666;
      unsigned long c668 = 8;
      operator_delete_3(cast664, b667, c668);
      return;
    }
  struct std___List_node_int_* t669 = __p657;
  void* cast670 = (void*)t669;
  unsigned long t671 = __n658;
  unsigned long c672 = 24;
  unsigned long b673 = t671 * c672;
  operator_delete_2(cast670, b673);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v674, struct std___List_node_int_* v675, unsigned long v676) {
bb677: ;
  struct std__allocator_std___List_node_int__* this678;
  struct std___List_node_int_* __p679;
  unsigned long __n680;
  this678 = v674;
  __p679 = v675;
  __n680 = v676;
  struct std__allocator_std___List_node_int__* t681 = this678;
    _Bool r682 = std____is_constant_evaluated();
    if (r682) {
      struct std___List_node_int_* t683 = __p679;
      void* cast684 = (void*)t683;
      operator_delete(cast684);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base685 = (struct std____new_allocator_std___List_node_int__*)((char *)t681 + 0);
  struct std___List_node_int_* t686 = __p679;
  unsigned long t687 = __n680;
  std____new_allocator_std___List_node_int_____deallocate(base685, t686, t687);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v688, struct std___List_node_int_* v689, unsigned long v690) {
bb691: ;
  struct std__allocator_std___List_node_int__* __a692;
  struct std___List_node_int_* __p693;
  unsigned long __n694;
  __a692 = v688;
  __p693 = v689;
  __n694 = v690;
  struct std__allocator_std___List_node_int__* t695 = __a692;
  struct std___List_node_int_* t696 = __p693;
  unsigned long t697 = __n694;
  std__allocator_std___List_node_int_____deallocate(t695, t696, t697);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v698, struct std___List_node_int_* v699) {
bb700: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this701;
  struct std___List_node_int_* __p702;
  this701 = v698;
  __p702 = v699;
  struct std____cxx11___List_base_int__std__allocator_int__* t703 = this701;
  struct std__allocator_std___List_node_int__* base704 = (struct std__allocator_std___List_node_int__*)((char *)&(t703->_M_impl) + 0);
  struct std___List_node_int_* t705 = __p702;
  unsigned long c706 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base704, t705, c706);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v707, struct std___List_node_int_* v708) {
bb709: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this710;
  struct std___List_node_int_* __p711;
  this710 = v707;
  __p711 = v708;
  struct std____cxx11___List_base_int__std__allocator_int__* t712 = this710;
  struct std__allocator_std___List_node_int__* base713 = (struct std__allocator_std___List_node_int__*)((char *)&(t712->_M_impl) + 0);
  struct std___List_node_int_* t714 = __p711;
  int* r715 = std___List_node_int____M_valptr(t714);
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base713, r715);
  struct std___List_node_int_* t716 = __p711;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t712, t716);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v717) {
bb718: ;
  struct std___List_node_int_* this719;
  struct std___List_node_int_* __retval720;
  this719 = v717;
  struct std___List_node_int_* t721 = this719;
  __retval720 = t721;
  struct std___List_node_int_* t722 = __retval720;
  return t722;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v723) {
bb724: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this725;
  struct std____detail___List_node_base* __cur726;
  this725 = v723;
  struct std____cxx11___List_base_int__std__allocator_int__* t727 = this725;
  struct std____detail___List_node_base* base728 = (struct std____detail___List_node_base*)((char *)&(t727->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t729 = base728->_M_next;
  __cur726 = t729;
    while (1) {
      struct std____detail___List_node_base* t730 = __cur726;
      struct std____detail___List_node_base* r731 = std____detail___List_node_header___M_base(&t727->_M_impl._M_node);
      _Bool c732 = ((t730 != r731)) ? 1 : 0;
      if (!c732) break;
        struct std___List_node_int_* __tmp733;
        struct std____detail___List_node_base* t734 = __cur726;
        struct std___List_node_int_* derived735 = (struct std___List_node_int_*)((char *)t734 - 0);
        __tmp733 = derived735;
        struct std___List_node_int_* t736 = __tmp733;
        struct std____detail___List_node_base* base737 = (struct std____detail___List_node_base*)((char *)t736 + 0);
        struct std____detail___List_node_base* t738 = base737->_M_next;
        __cur726 = t738;
        struct std___List_node_int_* t739 = __tmp733;
        struct std___List_node_int_* r740 = std___List_node_int____M_node_ptr(t739);
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t727, r740);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v741) {
bb742: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this743;
  this743 = v741;
  struct std____cxx11___List_base_int__std__allocator_int__* t744 = this743;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t744);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t744->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v745) {
bb746: ;
  struct std____new_allocator_std___List_node_int__* this747;
  this747 = v745;
  struct std____new_allocator_std___List_node_int__* t748 = this747;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2Ev
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v749) {
bb750: ;
  struct std__allocator_std___List_node_int__* this751;
  this751 = v749;
  struct std__allocator_std___List_node_int__* t752 = this751;
  struct std____new_allocator_std___List_node_int__* base753 = (struct std____new_allocator_std___List_node_int__*)((char *)t752 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base753);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v754) {
bb755: ;
  struct std____detail___List_node_header* this756;
  this756 = v754;
  struct std____detail___List_node_header* t757 = this756;
  struct std____detail___List_node_base* base758 = (struct std____detail___List_node_base*)((char *)t757 + 0);
  struct std____detail___List_size* base759 = (struct std____detail___List_size*)((char *)t757 + 16);
  std____detail___List_node_header___M_init(t757);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v760) {
bb761: ;
  struct std__allocator_std___List_node_int__* this762;
  this762 = v760;
  struct std__allocator_std___List_node_int__* t763 = this762;
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v764, struct std____detail___List_size* v765) {
bb766: ;
  struct std____detail___List_size* this767;
  struct std____detail___List_size* unnamed768;
  struct std____detail___List_size* __retval769;
  this767 = v764;
  unnamed768 = v765;
  struct std____detail___List_size* t770 = this767;
  struct std____detail___List_size* t771 = unnamed768;
  unsigned long t772 = t771->_M_size;
  t770->_M_size = t772;
  __retval769 = t770;
  struct std____detail___List_size* t773 = __retval769;
  return t773;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v774) {
bb775: ;
  struct std____detail___List_node_header* this776;
  struct std____detail___List_size ref_tmp0777;
  this776 = v774;
  struct std____detail___List_node_header* t778 = this776;
  struct std____detail___List_node_base* base779 = (struct std____detail___List_node_base*)((char *)t778 + 0);
  struct std____detail___List_node_base* base780 = (struct std____detail___List_node_base*)((char *)t778 + 0);
  base780->_M_prev = base779;
  struct std____detail___List_node_base* base781 = (struct std____detail___List_node_base*)((char *)t778 + 0);
  base781->_M_next = base779;
  struct std____detail___List_size* base782 = (struct std____detail___List_size*)((char *)t778 + 16);
  ref_tmp0777 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r783 = std____detail___List_size__operator_(base782, &ref_tmp0777);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v784, struct std____allocated_ptr_std__allocator_std___List_node_int___* v785) {
bb786: ;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this787;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd788;
  this787 = v784;
  __gd788 = v785;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t789 = this787;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t790 = __gd788;
  struct std__allocator_std___List_node_int__* t791 = t790->_M_alloc;
  t789->_M_alloc = t791;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t792 = __gd788;
  struct std___List_node_int_* t793 = t792->_M_ptr;
  t789->_M_ptr = t793;
  struct std___List_node_int_* c794 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t795 = __gd788;
  t795->_M_ptr = c794;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v796) {
bb797: ;
  struct std___List_node_int_* __ptr798;
  struct std___List_node_int_* __retval799;
  __ptr798 = v796;
  struct std___List_node_int_* t800 = __ptr798;
  __retval799 = t800;
  struct std___List_node_int_* t801 = __retval799;
  return t801;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v802) {
bb803: ;
  struct std___List_node_int_** __ptr804;
  struct std___List_node_int_* __retval805;
  __ptr804 = v802;
  struct std___List_node_int_** t806 = __ptr804;
  struct std___List_node_int_* t807 = *t806;
  struct std___List_node_int_* r808 = std___List_node_int___std__to_address_std___List_node_int___(t807);
  __retval805 = r808;
  struct std___List_node_int_* t809 = __retval805;
  return t809;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v810) {
bb811: ;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this812;
  struct std___List_node_int_* __retval813;
  this812 = v810;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t814 = this812;
  struct std___List_node_int_* r815 = auto_std____to_address_std___List_node_int___(&t814->_M_ptr);
  __retval813 = r815;
  struct std___List_node_int_* t816 = __retval813;
  return t816;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v817) {
bb818: ;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this819;
  _Bool __retval820;
  this819 = v817;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t821 = this819;
  struct std___List_node_int_* t822 = t821->_M_ptr;
  _Bool cast823 = (_Bool)t822;
  __retval820 = cast823;
  _Bool t824 = __retval820;
  return t824;
}

