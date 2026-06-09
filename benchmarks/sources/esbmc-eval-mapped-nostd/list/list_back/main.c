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

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[21] = "mylist.back() == n--";
char _str_1[102] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_back/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[17] = "mylist contains:";
char _str_3[2] = " ";
char _str_4[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[15] = "!this->empty()";
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
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* p0);
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* p0);
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* p0);
_Bool std__operator__(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
struct std___List_iterator_int_* std___List_iterator_int___operator___2(struct std___List_iterator_int_* p0);
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
bb1:
  struct std____cxx11__list_int__std__allocator_int__* this2;
  this2 = v0;
  struct std____cxx11__list_int__std__allocator_int__* t3 = this2;
  struct std____cxx11___List_base_int__std__allocator_int__* base4 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t3 + 0);
  std____cxx11___List_base_int__std__allocator_int______List_base(base4);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* v5) {
bb6:
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
bb13:
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
bb24:
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
bb58:
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
bb79:
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
bb90:
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
bb98:
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
bb108:
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
bb117:
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
bb127:
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
bb136:
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
bb151:
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
bb159:
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
bb168:
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
bb181:
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
bb190:
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
bb200:
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
bb221:
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
bb232:
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

// function: _ZNSt7__cxx114listIiSaIiEE9push_backEOi
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* v245, int* v246) {
bb247:
  struct std____cxx11__list_int__std__allocator_int__* this248;
  int* __x249;
  struct std___List_iterator_int_ agg_tmp0250;
  this248 = v245;
  __x249 = v246;
  struct std____cxx11__list_int__std__allocator_int__* t251 = this248;
  struct std___List_iterator_int_ r252 = std____cxx11__list_int__std__allocator_int_____end(t251);
  agg_tmp0250 = r252;
  int* t253 = __x249;
  struct std___List_iterator_int_ t254 = agg_tmp0250;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_(t251, t254, t253);
  return;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v255) {
bb256:
  struct std____detail___List_node_base* this257;
  struct std____detail___List_node_base* __retval258;
  this257 = v255;
  struct std____detail___List_node_base* t259 = this257;
  __retval258 = t259;
  struct std____detail___List_node_base* t260 = __retval258;
  return t260;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5emptyEv
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* v261) {
bb262:
  struct std____cxx11__list_int__std__allocator_int__* this263;
  _Bool __retval264;
  this263 = v261;
  struct std____cxx11__list_int__std__allocator_int__* t265 = this263;
  struct std____cxx11___List_base_int__std__allocator_int__* base266 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t265 + 0);
  struct std____detail___List_node_base* base267 = (struct std____detail___List_node_base*)((char *)&(base266->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t268 = base267->_M_next;
  struct std____cxx11___List_base_int__std__allocator_int__* base269 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t265 + 0);
  struct std____detail___List_node_base* base270 = (struct std____detail___List_node_base*)((char *)&(base269->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r271 = std____detail___List_node_base___M_base___const(base270);
  _Bool c272 = ((t268 == r271)) ? 1 : 0;
  __retval264 = c272;
  _Bool t273 = __retval264;
  return t273;
}

// function: _ZNSt14_List_iteratorIiEmmEv
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* v274) {
bb275:
  struct std___List_iterator_int_* this276;
  struct std___List_iterator_int_* __retval277;
  this276 = v274;
  struct std___List_iterator_int_* t278 = this276;
  struct std____detail___List_node_base* t279 = t278->_M_node;
  struct std____detail___List_node_base* t280 = t279->_M_prev;
  t278->_M_node = t280;
  __retval277 = t278;
  struct std___List_iterator_int_* t281 = __retval277;
  return t281;
}

// function: _ZNSt7__cxx114listIiSaIiEE4backEv
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* v282) {
bb283:
  struct std____cxx11__list_int__std__allocator_int__* this284;
  int* __retval285;
  struct std___List_iterator_int_ __tmp286;
  this284 = v282;
  struct std____cxx11__list_int__std__allocator_int__* t287 = this284;
    do {
          _Bool r288 = std____cxx11__list_int__std__allocator_int_____empty___const(t287);
          if (r288) {
            char* cast289 = (char*)&(_str_4);
            int c290 = 1674;
            char* cast291 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv);
            char* cast292 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast289, c290, cast291, cast292);
          }
      _Bool c293 = 0;
      if (!c293) break;
    } while (1);
  struct std___List_iterator_int_ r294 = std____cxx11__list_int__std__allocator_int_____end(t287);
  __tmp286 = r294;
  struct std___List_iterator_int_* r295 = std___List_iterator_int___operator__(&__tmp286);
  int* r296 = std___List_iterator_int___operator____const(&__tmp286);
  __retval285 = r296;
  int* t297 = __retval285;
  return t297;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v298, int v299) {
bb300:
  int __a301;
  int __b302;
  int __retval303;
  __a301 = v298;
  __b302 = v299;
  int t304 = __a301;
  int t305 = __b302;
  int b306 = t304 | t305;
  __retval303 = b306;
  int t307 = __retval303;
  return t307;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v308) {
bb309:
  struct std__basic_ios_char__std__char_traits_char__* this310;
  int __retval311;
  this310 = v308;
  struct std__basic_ios_char__std__char_traits_char__* t312 = this310;
  struct std__ios_base* base313 = (struct std__ios_base*)((char *)t312 + 0);
  int t314 = base313->_M_streambuf_state;
  __retval311 = t314;
  int t315 = __retval311;
  return t315;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v316, int v317) {
bb318:
  struct std__basic_ios_char__std__char_traits_char__* this319;
  int __state320;
  this319 = v316;
  __state320 = v317;
  struct std__basic_ios_char__std__char_traits_char__* t321 = this319;
  int r322 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t321);
  int t323 = __state320;
  int r324 = std__operator_(r322, t323);
  std__basic_ios_char__std__char_traits_char_____clear(t321, r324);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v325, char* v326) {
bb327:
  char* __c1328;
  char* __c2329;
  _Bool __retval330;
  __c1328 = v325;
  __c2329 = v326;
  char* t331 = __c1328;
  char t332 = *t331;
  int cast333 = (int)t332;
  char* t334 = __c2329;
  char t335 = *t334;
  int cast336 = (int)t335;
  _Bool c337 = ((cast333 == cast336)) ? 1 : 0;
  __retval330 = c337;
  _Bool t338 = __retval330;
  return t338;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v339) {
bb340:
  char* __p341;
  unsigned long __retval342;
  unsigned long __i343;
  __p341 = v339;
  unsigned long c344 = 0;
  __i343 = c344;
    char ref_tmp0345;
    while (1) {
      unsigned long t346 = __i343;
      char* t347 = __p341;
      char* ptr348 = &(t347)[t346];
      char c349 = 0;
      ref_tmp0345 = c349;
      _Bool r350 = __gnu_cxx__char_traits_char___eq(ptr348, &ref_tmp0345);
      _Bool u351 = !r350;
      if (!u351) break;
      unsigned long t352 = __i343;
      unsigned long u353 = t352 + 1;
      __i343 = u353;
    }
  unsigned long t354 = __i343;
  __retval342 = t354;
  unsigned long t355 = __retval342;
  return t355;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v356) {
bb357:
  char* __s358;
  unsigned long __retval359;
  __s358 = v356;
    _Bool r360 = std____is_constant_evaluated();
    if (r360) {
      char* t361 = __s358;
      unsigned long r362 = __gnu_cxx__char_traits_char___length(t361);
      __retval359 = r362;
      unsigned long t363 = __retval359;
      return t363;
    }
  char* t364 = __s358;
  unsigned long r365 = strlen(t364);
  __retval359 = r365;
  unsigned long t366 = __retval359;
  return t366;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v367, char* v368) {
bb369:
  struct std__basic_ostream_char__std__char_traits_char__* __out370;
  char* __s371;
  struct std__basic_ostream_char__std__char_traits_char__* __retval372;
  __out370 = v367;
  __s371 = v368;
    char* t373 = __s371;
    _Bool cast374 = (_Bool)t373;
    _Bool u375 = !cast374;
    if (u375) {
      struct std__basic_ostream_char__std__char_traits_char__* t376 = __out370;
      void** v377 = (void**)t376;
      void* v378 = *((void**)v377);
      unsigned char* cast379 = (unsigned char*)v378;
      long c380 = -24;
      unsigned char* ptr381 = &(cast379)[c380];
      long* cast382 = (long*)ptr381;
      long t383 = *cast382;
      unsigned char* cast384 = (unsigned char*)t376;
      unsigned char* ptr385 = &(cast384)[t383];
      struct std__basic_ostream_char__std__char_traits_char__* cast386 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr385;
      struct std__basic_ios_char__std__char_traits_char__* cast387 = (struct std__basic_ios_char__std__char_traits_char__*)cast386;
      int t388 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast387, t388);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t389 = __out370;
      char* t390 = __s371;
      char* t391 = __s371;
      unsigned long r392 = std__char_traits_char___length(t391);
      long cast393 = (long)r392;
      struct std__basic_ostream_char__std__char_traits_char__* r394 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t389, t390, cast393);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t395 = __out370;
  __retval372 = t395;
  struct std__basic_ostream_char__std__char_traits_char__* t396 = __retval372;
  return t396;
}

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v397, struct std____detail___List_node_base* v398) {
bb399:
  struct std___List_iterator_int_* this400;
  struct std____detail___List_node_base* __x401;
  this400 = v397;
  __x401 = v398;
  struct std___List_iterator_int_* t402 = this400;
  struct std____detail___List_node_base* t403 = __x401;
  t402->_M_node = t403;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE5beginEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* v404) {
bb405:
  struct std____cxx11__list_int__std__allocator_int__* this406;
  struct std___List_iterator_int_ __retval407;
  this406 = v404;
  struct std____cxx11__list_int__std__allocator_int__* t408 = this406;
  struct std____cxx11___List_base_int__std__allocator_int__* base409 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t408 + 0);
  struct std____detail___List_node_base* base410 = (struct std____detail___List_node_base*)((char *)&(base409->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t411 = base410->_M_next;
  std___List_iterator_int____List_iterator(&__retval407, t411);
  struct std___List_iterator_int_ t412 = __retval407;
  return t412;
}

// function: _ZSteqRKSt14_List_iteratorIiES2_
_Bool std__operator__(struct std___List_iterator_int_* v413, struct std___List_iterator_int_* v414) {
bb415:
  struct std___List_iterator_int_* __x416;
  struct std___List_iterator_int_* __y417;
  _Bool __retval418;
  __x416 = v413;
  __y417 = v414;
  struct std___List_iterator_int_* t419 = __x416;
  struct std____detail___List_node_base* t420 = t419->_M_node;
  struct std___List_iterator_int_* t421 = __y417;
  struct std____detail___List_node_base* t422 = t421->_M_node;
  _Bool c423 = ((t420 == t422)) ? 1 : 0;
  __retval418 = c423;
  _Bool t424 = __retval418;
  return t424;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v425) {
bb426:
  struct std____cxx11__list_int__std__allocator_int__* this427;
  struct std___List_iterator_int_ __retval428;
  this427 = v425;
  struct std____cxx11__list_int__std__allocator_int__* t429 = this427;
  struct std____cxx11___List_base_int__std__allocator_int__* base430 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t429 + 0);
  struct std____detail___List_node_base* r431 = std____detail___List_node_header___M_base(&base430->_M_impl._M_node);
  std___List_iterator_int____List_iterator(&__retval428, r431);
  struct std___List_iterator_int_ t432 = __retval428;
  return t432;
}

// function: _ZNKSt14_List_iteratorIiEdeEv
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* v433) {
bb434:
  struct std___List_iterator_int_* this435;
  int* __retval436;
  this435 = v433;
  struct std___List_iterator_int_* t437 = this435;
  struct std____detail___List_node_base* t438 = t437->_M_node;
  struct std___List_node_int_* derived439 = ((t438) ? (struct std___List_node_int_*)((char *)t438 - 0) : (struct std___List_node_int_*)0);
  int* r440 = std___List_node_int____M_valptr(derived439);
  __retval436 = r440;
  int* t441 = __retval436;
  return t441;
}

// function: _ZNSt14_List_iteratorIiEppEv
struct std___List_iterator_int_* std___List_iterator_int___operator___2(struct std___List_iterator_int_* v442) {
bb443:
  struct std___List_iterator_int_* this444;
  struct std___List_iterator_int_* __retval445;
  this444 = v442;
  struct std___List_iterator_int_* t446 = this444;
  struct std____detail___List_node_base* t447 = t446->_M_node;
  struct std____detail___List_node_base* t448 = t447->_M_next;
  t446->_M_node = t448;
  __retval445 = t446;
  struct std___List_iterator_int_* t449 = __retval445;
  return t449;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v450, void* v451) {
bb452:
  struct std__basic_ostream_char__std__char_traits_char__* this453;
  void* __pf454;
  struct std__basic_ostream_char__std__char_traits_char__* __retval455;
  this453 = v450;
  __pf454 = v451;
  struct std__basic_ostream_char__std__char_traits_char__* t456 = this453;
  void* t457 = __pf454;
  struct std__basic_ostream_char__std__char_traits_char__* r458 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t457)(t456);
  __retval455 = r458;
  struct std__basic_ostream_char__std__char_traits_char__* t459 = __retval455;
  return t459;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v460) {
bb461:
  struct std__basic_ostream_char__std__char_traits_char__* __os462;
  struct std__basic_ostream_char__std__char_traits_char__* __retval463;
  __os462 = v460;
  struct std__basic_ostream_char__std__char_traits_char__* t464 = __os462;
  struct std__basic_ostream_char__std__char_traits_char__* r465 = std__ostream__flush(t464);
  __retval463 = r465;
  struct std__basic_ostream_char__std__char_traits_char__* t466 = __retval463;
  return t466;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v467) {
bb468:
  struct std__ctype_char_* __f469;
  struct std__ctype_char_* __retval470;
  __f469 = v467;
    struct std__ctype_char_* t471 = __f469;
    _Bool cast472 = (_Bool)t471;
    _Bool u473 = !cast472;
    if (u473) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t474 = __f469;
  __retval470 = t474;
  struct std__ctype_char_* t475 = __retval470;
  return t475;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v476, char v477) {
bb478:
  struct std__ctype_char_* this479;
  char __c480;
  char __retval481;
  this479 = v476;
  __c480 = v477;
  struct std__ctype_char_* t482 = this479;
    char t483 = t482->_M_widen_ok;
    _Bool cast484 = (_Bool)t483;
    if (cast484) {
      char t485 = __c480;
      unsigned char cast486 = (unsigned char)t485;
      unsigned long cast487 = (unsigned long)cast486;
      char t488 = t482->_M_widen[cast487];
      __retval481 = t488;
      char t489 = __retval481;
      return t489;
    }
  std__ctype_char____M_widen_init___const(t482);
  char t490 = __c480;
  void** v491 = (void**)t482;
  void* v492 = *((void**)v491);
  char vcall495 = (char)__VERIFIER_virtual_call_char_char(t482, 6, t490);
  __retval481 = vcall495;
  char t496 = __retval481;
  return t496;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v497, char v498) {
bb499:
  struct std__basic_ios_char__std__char_traits_char__* this500;
  char __c501;
  char __retval502;
  this500 = v497;
  __c501 = v498;
  struct std__basic_ios_char__std__char_traits_char__* t503 = this500;
  struct std__ctype_char_* t504 = t503->_M_ctype;
  struct std__ctype_char_* r505 = std__ctype_char__const__std____check_facet_std__ctype_char___(t504);
  char t506 = __c501;
  char r507 = std__ctype_char___widen_char__const(r505, t506);
  __retval502 = r507;
  char t508 = __retval502;
  return t508;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v509) {
bb510:
  struct std__basic_ostream_char__std__char_traits_char__* __os511;
  struct std__basic_ostream_char__std__char_traits_char__* __retval512;
  __os511 = v509;
  struct std__basic_ostream_char__std__char_traits_char__* t513 = __os511;
  struct std__basic_ostream_char__std__char_traits_char__* t514 = __os511;
  void** v515 = (void**)t514;
  void* v516 = *((void**)v515);
  unsigned char* cast517 = (unsigned char*)v516;
  long c518 = -24;
  unsigned char* ptr519 = &(cast517)[c518];
  long* cast520 = (long*)ptr519;
  long t521 = *cast520;
  unsigned char* cast522 = (unsigned char*)t514;
  unsigned char* ptr523 = &(cast522)[t521];
  struct std__basic_ostream_char__std__char_traits_char__* cast524 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr523;
  struct std__basic_ios_char__std__char_traits_char__* cast525 = (struct std__basic_ios_char__std__char_traits_char__*)cast524;
  char c526 = 10;
  char r527 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast525, c526);
  struct std__basic_ostream_char__std__char_traits_char__* r528 = std__ostream__put(t513, r527);
  struct std__basic_ostream_char__std__char_traits_char__* r529 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r528);
  __retval512 = r529;
  struct std__basic_ostream_char__std__char_traits_char__* t530 = __retval512;
  return t530;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v531) {
bb532:
  struct std____cxx11__list_int__std__allocator_int__* this533;
  this533 = v531;
  struct std____cxx11__list_int__std__allocator_int__* t534 = this533;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base535 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t534 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base535);
  }
  return;
}

// function: main
int main() {
bb536:
  int __retval537;
  struct std____cxx11__list_int__std__allocator_int__ mylist538;
  int ref_tmp0539;
  int n540;
  int c541 = 0;
  __retval537 = c541;
  std____cxx11__list_int__std__allocator_int_____list(&mylist538);
    int c542 = 10;
    ref_tmp0539 = c542;
    std____cxx11__list_int__std__allocator_int_____push_back(&mylist538, &ref_tmp0539);
    int c543 = 10;
    n540 = c543;
      while (1) {
        int* r544 = std____cxx11__list_int__std__allocator_int_____back(&mylist538);
        int t545 = *r544;
        int c546 = 0;
        _Bool c547 = ((t545 != c546)) ? 1 : 0;
        if (!c547) break;
          int ref_tmp1548;
          int* r549 = std____cxx11__list_int__std__allocator_int_____back(&mylist538);
          int t550 = *r549;
          int t551 = n540;
          int u552 = t551 - 1;
          n540 = u552;
          _Bool c553 = ((t550 == t551)) ? 1 : 0;
          if (c553) {
          } else {
            char* cast554 = (char*)&(_str);
            char* c555 = _str_1;
            unsigned int c556 = 22;
            char* cast557 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast554, c555, c556, cast557);
          }
          int* r558 = std____cxx11__list_int__std__allocator_int_____back(&mylist538);
          int t559 = *r558;
          int c560 = 1;
          int b561 = t559 - c560;
          ref_tmp1548 = b561;
          std____cxx11__list_int__std__allocator_int_____push_back(&mylist538, &ref_tmp1548);
      }
    char* cast562 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r563 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast562);
      struct std___List_iterator_int_ it564;
      struct std___List_iterator_int_ ref_tmp2565;
      struct std___List_iterator_int_ r566 = std____cxx11__list_int__std__allocator_int_____begin(&mylist538);
      it564 = r566;
      while (1) {
        struct std___List_iterator_int_ r568 = std____cxx11__list_int__std__allocator_int_____end(&mylist538);
        ref_tmp2565 = r568;
        _Bool r569 = std__operator__(&it564, &ref_tmp2565);
        _Bool u570 = !r569;
        if (!u570) break;
        char* cast571 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r572 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast571);
        int* r573 = std___List_iterator_int___operator____const(&it564);
        int t574 = *r573;
        struct std__basic_ostream_char__std__char_traits_char__* r575 = std__ostream__operator__(r572, t574);
      for_step567: ;
        struct std___List_iterator_int_* r576 = std___List_iterator_int___operator___2(&it564);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r577 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c578 = 0;
    __retval537 = c578;
    int t579 = __retval537;
    int ret_val580 = t579;
    {
      std____cxx11__list_int__std__allocator_int______list(&mylist538);
    }
    return ret_val580;
  int t581 = __retval537;
  return t581;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v582) {
bb583:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this584;
  this584 = v582;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t585 = this584;
  struct std__allocator_std___List_node_int__* base586 = (struct std__allocator_std___List_node_int__*)((char *)t585 + 0);
  std__allocator_std___List_node_int_____allocator(base586);
    std____detail___List_node_header___List_node_header(&t585->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v587) {
bb588:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this589;
  this589 = v587;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t590 = this589;
  {
    struct std__allocator_std___List_node_int__* base591 = (struct std__allocator_std___List_node_int__*)((char *)t590 + 0);
    std__allocator_std___List_node_int______allocator(base591);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v592) {
bb593:
  struct std____cxx11___List_base_int__std__allocator_int__* this594;
  this594 = v592;
  struct std____cxx11___List_base_int__std__allocator_int__* t595 = this594;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t595->_M_impl);
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v596) {
bb597:
  struct std____detail___List_node_header* this598;
  struct std____detail___List_node_base* __retval599;
  this598 = v596;
  struct std____detail___List_node_header* t600 = this598;
  struct std____detail___List_node_base* base601 = (struct std____detail___List_node_base*)((char *)t600 + 0);
  __retval599 = base601;
  struct std____detail___List_node_base* t602 = __retval599;
  return t602;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v603) {
bb604:
  int* __location605;
  __location605 = v603;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v606, int* v607) {
bb608:
  struct std__allocator_std___List_node_int__* __a609;
  int* __p610;
  __a609 = v606;
  __p610 = v607;
  int* t611 = __p610;
  void_std__destroy_at_int_(t611);
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v612) {
bb613:
  struct __gnu_cxx____aligned_membuf_int_* this614;
  void* __retval615;
  this614 = v612;
  struct __gnu_cxx____aligned_membuf_int_* t616 = this614;
  void* cast617 = (void*)&(t616->_M_storage);
  __retval615 = cast617;
  void* t618 = __retval615;
  return t618;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v619) {
bb620:
  struct __gnu_cxx____aligned_membuf_int_* this621;
  int* __retval622;
  this621 = v619;
  struct __gnu_cxx____aligned_membuf_int_* t623 = this621;
  void* r624 = __gnu_cxx____aligned_membuf_int____M_addr(t623);
  int* cast625 = (int*)r624;
  __retval622 = cast625;
  int* t626 = __retval622;
  return t626;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v627) {
bb628:
  struct std___List_node_int_* this629;
  int* __retval630;
  this629 = v627;
  struct std___List_node_int_* t631 = this629;
  int* r632 = __gnu_cxx____aligned_membuf_int____M_ptr(&t631->_M_storage);
  __retval630 = r632;
  int* t633 = __retval630;
  return t633;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb634:
  _Bool __retval635;
    _Bool c636 = 0;
    __retval635 = c636;
    _Bool t637 = __retval635;
    return t637;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v638, struct std___List_node_int_* v639, unsigned long v640) {
bb641:
  struct std____new_allocator_std___List_node_int__* this642;
  struct std___List_node_int_* __p643;
  unsigned long __n644;
  this642 = v638;
  __p643 = v639;
  __n644 = v640;
  struct std____new_allocator_std___List_node_int__* t645 = this642;
    unsigned long c646 = 8;
    unsigned long c647 = 16;
    _Bool c648 = ((c646 > c647)) ? 1 : 0;
    if (c648) {
      struct std___List_node_int_* t649 = __p643;
      void* cast650 = (void*)t649;
      unsigned long t651 = __n644;
      unsigned long c652 = 24;
      unsigned long b653 = t651 * c652;
      unsigned long c654 = 8;
      operator_delete_3(cast650, b653, c654);
      return;
    }
  struct std___List_node_int_* t655 = __p643;
  void* cast656 = (void*)t655;
  unsigned long t657 = __n644;
  unsigned long c658 = 24;
  unsigned long b659 = t657 * c658;
  operator_delete_2(cast656, b659);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v660, struct std___List_node_int_* v661, unsigned long v662) {
bb663:
  struct std__allocator_std___List_node_int__* this664;
  struct std___List_node_int_* __p665;
  unsigned long __n666;
  this664 = v660;
  __p665 = v661;
  __n666 = v662;
  struct std__allocator_std___List_node_int__* t667 = this664;
    _Bool r668 = std____is_constant_evaluated();
    if (r668) {
      struct std___List_node_int_* t669 = __p665;
      void* cast670 = (void*)t669;
      operator_delete(cast670);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base671 = (struct std____new_allocator_std___List_node_int__*)((char *)t667 + 0);
  struct std___List_node_int_* t672 = __p665;
  unsigned long t673 = __n666;
  std____new_allocator_std___List_node_int_____deallocate(base671, t672, t673);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v674, struct std___List_node_int_* v675, unsigned long v676) {
bb677:
  struct std__allocator_std___List_node_int__* __a678;
  struct std___List_node_int_* __p679;
  unsigned long __n680;
  __a678 = v674;
  __p679 = v675;
  __n680 = v676;
  struct std__allocator_std___List_node_int__* t681 = __a678;
  struct std___List_node_int_* t682 = __p679;
  unsigned long t683 = __n680;
  std__allocator_std___List_node_int_____deallocate(t681, t682, t683);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v684, struct std___List_node_int_* v685) {
bb686:
  struct std____cxx11___List_base_int__std__allocator_int__* this687;
  struct std___List_node_int_* __p688;
  this687 = v684;
  __p688 = v685;
  struct std____cxx11___List_base_int__std__allocator_int__* t689 = this687;
  struct std__allocator_std___List_node_int__* base690 = (struct std__allocator_std___List_node_int__*)((char *)&(t689->_M_impl) + 0);
  struct std___List_node_int_* t691 = __p688;
  unsigned long c692 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base690, t691, c692);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v693, struct std___List_node_int_* v694) {
bb695:
  struct std____cxx11___List_base_int__std__allocator_int__* this696;
  struct std___List_node_int_* __p697;
  this696 = v693;
  __p697 = v694;
  struct std____cxx11___List_base_int__std__allocator_int__* t698 = this696;
  struct std__allocator_std___List_node_int__* base699 = (struct std__allocator_std___List_node_int__*)((char *)&(t698->_M_impl) + 0);
  struct std___List_node_int_* t700 = __p697;
  int* r701 = std___List_node_int____M_valptr(t700);
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base699, r701);
  struct std___List_node_int_* t702 = __p697;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t698, t702);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v703) {
bb704:
  struct std___List_node_int_* this705;
  struct std___List_node_int_* __retval706;
  this705 = v703;
  struct std___List_node_int_* t707 = this705;
  __retval706 = t707;
  struct std___List_node_int_* t708 = __retval706;
  return t708;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v709) {
bb710:
  struct std____cxx11___List_base_int__std__allocator_int__* this711;
  struct std____detail___List_node_base* __cur712;
  this711 = v709;
  struct std____cxx11___List_base_int__std__allocator_int__* t713 = this711;
  struct std____detail___List_node_base* base714 = (struct std____detail___List_node_base*)((char *)&(t713->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t715 = base714->_M_next;
  __cur712 = t715;
    while (1) {
      struct std____detail___List_node_base* t716 = __cur712;
      struct std____detail___List_node_base* r717 = std____detail___List_node_header___M_base(&t713->_M_impl._M_node);
      _Bool c718 = ((t716 != r717)) ? 1 : 0;
      if (!c718) break;
        struct std___List_node_int_* __tmp719;
        struct std____detail___List_node_base* t720 = __cur712;
        struct std___List_node_int_* derived721 = (struct std___List_node_int_*)((char *)t720 - 0);
        __tmp719 = derived721;
        struct std___List_node_int_* t722 = __tmp719;
        struct std____detail___List_node_base* base723 = (struct std____detail___List_node_base*)((char *)t722 + 0);
        struct std____detail___List_node_base* t724 = base723->_M_next;
        __cur712 = t724;
        struct std___List_node_int_* t725 = __tmp719;
        struct std___List_node_int_* r726 = std___List_node_int____M_node_ptr(t725);
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t713, r726);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v727) {
bb728:
  struct std____cxx11___List_base_int__std__allocator_int__* this729;
  this729 = v727;
  struct std____cxx11___List_base_int__std__allocator_int__* t730 = this729;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t730);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t730->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v731) {
bb732:
  struct std____new_allocator_std___List_node_int__* this733;
  this733 = v731;
  struct std____new_allocator_std___List_node_int__* t734 = this733;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2Ev
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v735) {
bb736:
  struct std__allocator_std___List_node_int__* this737;
  this737 = v735;
  struct std__allocator_std___List_node_int__* t738 = this737;
  struct std____new_allocator_std___List_node_int__* base739 = (struct std____new_allocator_std___List_node_int__*)((char *)t738 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base739);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v740) {
bb741:
  struct std____detail___List_node_header* this742;
  this742 = v740;
  struct std____detail___List_node_header* t743 = this742;
  struct std____detail___List_node_base* base744 = (struct std____detail___List_node_base*)((char *)t743 + 0);
  struct std____detail___List_size* base745 = (struct std____detail___List_size*)((char *)t743 + 16);
  std____detail___List_node_header___M_init(t743);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v746) {
bb747:
  struct std__allocator_std___List_node_int__* this748;
  this748 = v746;
  struct std__allocator_std___List_node_int__* t749 = this748;
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v750, struct std____detail___List_size* v751) {
bb752:
  struct std____detail___List_size* this753;
  struct std____detail___List_size* unnamed754;
  struct std____detail___List_size* __retval755;
  this753 = v750;
  unnamed754 = v751;
  struct std____detail___List_size* t756 = this753;
  struct std____detail___List_size* t757 = unnamed754;
  unsigned long t758 = t757->_M_size;
  t756->_M_size = t758;
  __retval755 = t756;
  struct std____detail___List_size* t759 = __retval755;
  return t759;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v760) {
bb761:
  struct std____detail___List_node_header* this762;
  struct std____detail___List_size ref_tmp0763;
  this762 = v760;
  struct std____detail___List_node_header* t764 = this762;
  struct std____detail___List_node_base* base765 = (struct std____detail___List_node_base*)((char *)t764 + 0);
  struct std____detail___List_node_base* base766 = (struct std____detail___List_node_base*)((char *)t764 + 0);
  base766->_M_prev = base765;
  struct std____detail___List_node_base* base767 = (struct std____detail___List_node_base*)((char *)t764 + 0);
  base767->_M_next = base765;
  struct std____detail___List_size* base768 = (struct std____detail___List_size*)((char *)t764 + 16);
  ref_tmp0763 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r769 = std____detail___List_size__operator_(base768, &ref_tmp0763);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v770, struct std____allocated_ptr_std__allocator_std___List_node_int___* v771) {
bb772:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this773;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd774;
  this773 = v770;
  __gd774 = v771;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t775 = this773;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t776 = __gd774;
  struct std__allocator_std___List_node_int__* t777 = t776->_M_alloc;
  t775->_M_alloc = t777;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t778 = __gd774;
  struct std___List_node_int_* t779 = t778->_M_ptr;
  t775->_M_ptr = t779;
  struct std___List_node_int_* c780 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t781 = __gd774;
  t781->_M_ptr = c780;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v782) {
bb783:
  struct std___List_node_int_* __ptr784;
  struct std___List_node_int_* __retval785;
  __ptr784 = v782;
  struct std___List_node_int_* t786 = __ptr784;
  __retval785 = t786;
  struct std___List_node_int_* t787 = __retval785;
  return t787;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v788) {
bb789:
  struct std___List_node_int_** __ptr790;
  struct std___List_node_int_* __retval791;
  __ptr790 = v788;
  struct std___List_node_int_** t792 = __ptr790;
  struct std___List_node_int_* t793 = *t792;
  struct std___List_node_int_* r794 = std___List_node_int___std__to_address_std___List_node_int___(t793);
  __retval791 = r794;
  struct std___List_node_int_* t795 = __retval791;
  return t795;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v796) {
bb797:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this798;
  struct std___List_node_int_* __retval799;
  this798 = v796;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t800 = this798;
  struct std___List_node_int_* r801 = auto_std____to_address_std___List_node_int___(&t800->_M_ptr);
  __retval799 = r801;
  struct std___List_node_int_* t802 = __retval799;
  return t802;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v803) {
bb804:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this805;
  _Bool __retval806;
  this805 = v803;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t807 = this805;
  struct std___List_node_int_* t808 = t807->_M_ptr;
  _Bool cast809 = (_Bool)t808;
  __retval806 = cast809;
  _Bool t810 = __retval806;
  return t810;
}

