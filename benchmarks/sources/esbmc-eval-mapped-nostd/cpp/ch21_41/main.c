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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[23] = "mylist.front() is now ";
char _str_1[22] = "mylist.back() is now ";
char _str_2[19] = "mylist.front()==77";
char _str_3[99] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch21_41/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[18] = "mylist.back()==22";
char _str_5[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE5frontEv[76] = "reference std::list<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
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
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* p0);
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* p0);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
int* std____cxx11__list_int__std__allocator_int_____front(struct std____cxx11__list_int__std__allocator_int__* p0);
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
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* p0);
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v245, struct std____detail___List_node_base* v246) {
bb247:
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
bb253:
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
bb262:
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

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v270, int v271) {
bb272:
  int __a273;
  int __b274;
  int __retval275;
  __a273 = v270;
  __b274 = v271;
  int t276 = __a273;
  int t277 = __b274;
  int b278 = t276 | t277;
  __retval275 = b278;
  int t279 = __retval275;
  return t279;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v280) {
bb281:
  struct std__basic_ios_char__std__char_traits_char__* this282;
  int __retval283;
  this282 = v280;
  struct std__basic_ios_char__std__char_traits_char__* t284 = this282;
  struct std__ios_base* base285 = (struct std__ios_base*)((char *)t284 + 0);
  int t286 = base285->_M_streambuf_state;
  __retval283 = t286;
  int t287 = __retval283;
  return t287;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v288, int v289) {
bb290:
  struct std__basic_ios_char__std__char_traits_char__* this291;
  int __state292;
  this291 = v288;
  __state292 = v289;
  struct std__basic_ios_char__std__char_traits_char__* t293 = this291;
  int r294 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t293);
  int t295 = __state292;
  int r296 = std__operator_(r294, t295);
  std__basic_ios_char__std__char_traits_char_____clear(t293, r296);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v297, char* v298) {
bb299:
  char* __c1300;
  char* __c2301;
  _Bool __retval302;
  __c1300 = v297;
  __c2301 = v298;
  char* t303 = __c1300;
  char t304 = *t303;
  int cast305 = (int)t304;
  char* t306 = __c2301;
  char t307 = *t306;
  int cast308 = (int)t307;
  _Bool c309 = ((cast305 == cast308)) ? 1 : 0;
  __retval302 = c309;
  _Bool t310 = __retval302;
  return t310;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v311) {
bb312:
  char* __p313;
  unsigned long __retval314;
  unsigned long __i315;
  __p313 = v311;
  unsigned long c316 = 0;
  __i315 = c316;
    char ref_tmp0317;
    while (1) {
      unsigned long t318 = __i315;
      char* t319 = __p313;
      char* ptr320 = &(t319)[t318];
      char c321 = 0;
      ref_tmp0317 = c321;
      _Bool r322 = __gnu_cxx__char_traits_char___eq(ptr320, &ref_tmp0317);
      _Bool u323 = !r322;
      if (!u323) break;
      unsigned long t324 = __i315;
      unsigned long u325 = t324 + 1;
      __i315 = u325;
    }
  unsigned long t326 = __i315;
  __retval314 = t326;
  unsigned long t327 = __retval314;
  return t327;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v328) {
bb329:
  char* __s330;
  unsigned long __retval331;
  __s330 = v328;
    _Bool r332 = std____is_constant_evaluated();
    if (r332) {
      char* t333 = __s330;
      unsigned long r334 = __gnu_cxx__char_traits_char___length(t333);
      __retval331 = r334;
      unsigned long t335 = __retval331;
      return t335;
    }
  char* t336 = __s330;
  unsigned long r337 = strlen(t336);
  __retval331 = r337;
  unsigned long t338 = __retval331;
  return t338;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v339, char* v340) {
bb341:
  struct std__basic_ostream_char__std__char_traits_char__* __out342;
  char* __s343;
  struct std__basic_ostream_char__std__char_traits_char__* __retval344;
  __out342 = v339;
  __s343 = v340;
    char* t345 = __s343;
    _Bool cast346 = (_Bool)t345;
    _Bool u347 = !cast346;
    if (u347) {
      struct std__basic_ostream_char__std__char_traits_char__* t348 = __out342;
      void** v349 = (void**)t348;
      void* v350 = *((void**)v349);
      unsigned char* cast351 = (unsigned char*)v350;
      long c352 = -24;
      unsigned char* ptr353 = &(cast351)[c352];
      long* cast354 = (long*)ptr353;
      long t355 = *cast354;
      unsigned char* cast356 = (unsigned char*)t348;
      unsigned char* ptr357 = &(cast356)[t355];
      struct std__basic_ostream_char__std__char_traits_char__* cast358 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr357;
      struct std__basic_ios_char__std__char_traits_char__* cast359 = (struct std__basic_ios_char__std__char_traits_char__*)cast358;
      int t360 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast359, t360);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t361 = __out342;
      char* t362 = __s343;
      char* t363 = __s343;
      unsigned long r364 = std__char_traits_char___length(t363);
      long cast365 = (long)r364;
      struct std__basic_ostream_char__std__char_traits_char__* r366 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t361, t362, cast365);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t367 = __out342;
  __retval344 = t367;
  struct std__basic_ostream_char__std__char_traits_char__* t368 = __retval344;
  return t368;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v369) {
bb370:
  struct std____detail___List_node_base* this371;
  struct std____detail___List_node_base* __retval372;
  this371 = v369;
  struct std____detail___List_node_base* t373 = this371;
  __retval372 = t373;
  struct std____detail___List_node_base* t374 = __retval372;
  return t374;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5emptyEv
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* v375) {
bb376:
  struct std____cxx11__list_int__std__allocator_int__* this377;
  _Bool __retval378;
  this377 = v375;
  struct std____cxx11__list_int__std__allocator_int__* t379 = this377;
  struct std____cxx11___List_base_int__std__allocator_int__* base380 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t379 + 0);
  struct std____detail___List_node_base* base381 = (struct std____detail___List_node_base*)((char *)&(base380->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t382 = base381->_M_next;
  struct std____cxx11___List_base_int__std__allocator_int__* base383 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t379 + 0);
  struct std____detail___List_node_base* base384 = (struct std____detail___List_node_base*)((char *)&(base383->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r385 = std____detail___List_node_base___M_base___const(base384);
  _Bool c386 = ((t382 == r385)) ? 1 : 0;
  __retval378 = c386;
  _Bool t387 = __retval378;
  return t387;
}

// function: _ZNSt7__cxx114listIiSaIiEE5beginEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* v388) {
bb389:
  struct std____cxx11__list_int__std__allocator_int__* this390;
  struct std___List_iterator_int_ __retval391;
  this390 = v388;
  struct std____cxx11__list_int__std__allocator_int__* t392 = this390;
  struct std____cxx11___List_base_int__std__allocator_int__* base393 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t392 + 0);
  struct std____detail___List_node_base* base394 = (struct std____detail___List_node_base*)((char *)&(base393->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t395 = base394->_M_next;
  std___List_iterator_int____List_iterator(&__retval391, t395);
  struct std___List_iterator_int_ t396 = __retval391;
  return t396;
}

// function: _ZNKSt14_List_iteratorIiEdeEv
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* v397) {
bb398:
  struct std___List_iterator_int_* this399;
  int* __retval400;
  this399 = v397;
  struct std___List_iterator_int_* t401 = this399;
  struct std____detail___List_node_base* t402 = t401->_M_node;
  struct std___List_node_int_* derived403 = ((t402) ? (struct std___List_node_int_*)((char *)t402 - 0) : (struct std___List_node_int_*)0);
  int* r404 = std___List_node_int____M_valptr(derived403);
  __retval400 = r404;
  int* t405 = __retval400;
  return t405;
}

// function: _ZNSt7__cxx114listIiSaIiEE5frontEv
int* std____cxx11__list_int__std__allocator_int_____front(struct std____cxx11__list_int__std__allocator_int__* v406) {
bb407:
  struct std____cxx11__list_int__std__allocator_int__* this408;
  int* __retval409;
  struct std___List_iterator_int_ ref_tmp0410;
  this408 = v406;
  struct std____cxx11__list_int__std__allocator_int__* t411 = this408;
    do {
          _Bool r412 = std____cxx11__list_int__std__allocator_int_____empty___const(t411);
          if (r412) {
            char* cast413 = (char*)&(_str_5);
            int c414 = 1650;
            char* cast415 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE5frontEv);
            char* cast416 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast413, c414, cast415, cast416);
          }
      _Bool c417 = 0;
      if (!c417) break;
    } while (1);
  struct std___List_iterator_int_ r418 = std____cxx11__list_int__std__allocator_int_____begin(t411);
  ref_tmp0410 = r418;
  int* r419 = std___List_iterator_int___operator____const(&ref_tmp0410);
  __retval409 = r419;
  int* t420 = __retval409;
  return t420;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v421, void* v422) {
bb423:
  struct std__basic_ostream_char__std__char_traits_char__* this424;
  void* __pf425;
  struct std__basic_ostream_char__std__char_traits_char__* __retval426;
  this424 = v421;
  __pf425 = v422;
  struct std__basic_ostream_char__std__char_traits_char__* t427 = this424;
  void* t428 = __pf425;
  struct std__basic_ostream_char__std__char_traits_char__* r429 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t428)(t427);
  __retval426 = r429;
  struct std__basic_ostream_char__std__char_traits_char__* t430 = __retval426;
  return t430;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v431) {
bb432:
  struct std__basic_ostream_char__std__char_traits_char__* __os433;
  struct std__basic_ostream_char__std__char_traits_char__* __retval434;
  __os433 = v431;
  struct std__basic_ostream_char__std__char_traits_char__* t435 = __os433;
  struct std__basic_ostream_char__std__char_traits_char__* r436 = std__ostream__flush(t435);
  __retval434 = r436;
  struct std__basic_ostream_char__std__char_traits_char__* t437 = __retval434;
  return t437;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v438) {
bb439:
  struct std__ctype_char_* __f440;
  struct std__ctype_char_* __retval441;
  __f440 = v438;
    struct std__ctype_char_* t442 = __f440;
    _Bool cast443 = (_Bool)t442;
    _Bool u444 = !cast443;
    if (u444) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t445 = __f440;
  __retval441 = t445;
  struct std__ctype_char_* t446 = __retval441;
  return t446;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v447, char v448) {
bb449:
  struct std__ctype_char_* this450;
  char __c451;
  char __retval452;
  this450 = v447;
  __c451 = v448;
  struct std__ctype_char_* t453 = this450;
    char t454 = t453->_M_widen_ok;
    _Bool cast455 = (_Bool)t454;
    if (cast455) {
      char t456 = __c451;
      unsigned char cast457 = (unsigned char)t456;
      unsigned long cast458 = (unsigned long)cast457;
      char t459 = t453->_M_widen[cast458];
      __retval452 = t459;
      char t460 = __retval452;
      return t460;
    }
  std__ctype_char____M_widen_init___const(t453);
  char t461 = __c451;
  void** v462 = (void**)t453;
  void* v463 = *((void**)v462);
  char vcall466 = (char)__VERIFIER_virtual_call_char_char(t453, 6, t461);
  __retval452 = vcall466;
  char t467 = __retval452;
  return t467;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v468, char v469) {
bb470:
  struct std__basic_ios_char__std__char_traits_char__* this471;
  char __c472;
  char __retval473;
  this471 = v468;
  __c472 = v469;
  struct std__basic_ios_char__std__char_traits_char__* t474 = this471;
  struct std__ctype_char_* t475 = t474->_M_ctype;
  struct std__ctype_char_* r476 = std__ctype_char__const__std____check_facet_std__ctype_char___(t475);
  char t477 = __c472;
  char r478 = std__ctype_char___widen_char__const(r476, t477);
  __retval473 = r478;
  char t479 = __retval473;
  return t479;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v480) {
bb481:
  struct std__basic_ostream_char__std__char_traits_char__* __os482;
  struct std__basic_ostream_char__std__char_traits_char__* __retval483;
  __os482 = v480;
  struct std__basic_ostream_char__std__char_traits_char__* t484 = __os482;
  struct std__basic_ostream_char__std__char_traits_char__* t485 = __os482;
  void** v486 = (void**)t485;
  void* v487 = *((void**)v486);
  unsigned char* cast488 = (unsigned char*)v487;
  long c489 = -24;
  unsigned char* ptr490 = &(cast488)[c489];
  long* cast491 = (long*)ptr490;
  long t492 = *cast491;
  unsigned char* cast493 = (unsigned char*)t485;
  unsigned char* ptr494 = &(cast493)[t492];
  struct std__basic_ostream_char__std__char_traits_char__* cast495 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr494;
  struct std__basic_ios_char__std__char_traits_char__* cast496 = (struct std__basic_ios_char__std__char_traits_char__*)cast495;
  char c497 = 10;
  char r498 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast496, c497);
  struct std__basic_ostream_char__std__char_traits_char__* r499 = std__ostream__put(t484, r498);
  struct std__basic_ostream_char__std__char_traits_char__* r500 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r499);
  __retval483 = r500;
  struct std__basic_ostream_char__std__char_traits_char__* t501 = __retval483;
  return t501;
}

// function: _ZNSt14_List_iteratorIiEmmEv
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* v502) {
bb503:
  struct std___List_iterator_int_* this504;
  struct std___List_iterator_int_* __retval505;
  this504 = v502;
  struct std___List_iterator_int_* t506 = this504;
  struct std____detail___List_node_base* t507 = t506->_M_node;
  struct std____detail___List_node_base* t508 = t507->_M_prev;
  t506->_M_node = t508;
  __retval505 = t506;
  struct std___List_iterator_int_* t509 = __retval505;
  return t509;
}

// function: _ZNSt7__cxx114listIiSaIiEE4backEv
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* v510) {
bb511:
  struct std____cxx11__list_int__std__allocator_int__* this512;
  int* __retval513;
  struct std___List_iterator_int_ __tmp514;
  this512 = v510;
  struct std____cxx11__list_int__std__allocator_int__* t515 = this512;
    do {
          _Bool r516 = std____cxx11__list_int__std__allocator_int_____empty___const(t515);
          if (r516) {
            char* cast517 = (char*)&(_str_5);
            int c518 = 1674;
            char* cast519 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv);
            char* cast520 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast517, c518, cast519, cast520);
          }
      _Bool c521 = 0;
      if (!c521) break;
    } while (1);
  struct std___List_iterator_int_ r522 = std____cxx11__list_int__std__allocator_int_____end(t515);
  __tmp514 = r522;
  struct std___List_iterator_int_* r523 = std___List_iterator_int___operator__(&__tmp514);
  int* r524 = std___List_iterator_int___operator____const(&__tmp514);
  __retval513 = r524;
  int* t525 = __retval513;
  return t525;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v526) {
bb527:
  struct std____cxx11__list_int__std__allocator_int__* this528;
  this528 = v526;
  struct std____cxx11__list_int__std__allocator_int__* t529 = this528;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base530 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t529 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base530);
  }
  return;
}

// function: main
int main() {
bb531:
  int __retval532;
  struct std____cxx11__list_int__std__allocator_int__ mylist533;
  int ref_tmp0534;
  int ref_tmp1535;
  int c536 = 0;
  __retval532 = c536;
  std____cxx11__list_int__std__allocator_int_____list(&mylist533);
    int c537 = 77;
    ref_tmp0534 = c537;
    std____cxx11__list_int__std__allocator_int_____push_back(&mylist533, &ref_tmp0534);
    int c538 = 22;
    ref_tmp1535 = c538;
    std____cxx11__list_int__std__allocator_int_____push_back(&mylist533, &ref_tmp1535);
    char* cast539 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r540 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast539);
    int* r541 = std____cxx11__list_int__std__allocator_int_____front(&mylist533);
    int t542 = *r541;
    struct std__basic_ostream_char__std__char_traits_char__* r543 = std__ostream__operator__(r540, t542);
    struct std__basic_ostream_char__std__char_traits_char__* r544 = std__ostream__operator___std__ostream_____(r543, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    char* cast545 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r546 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast545);
    int* r547 = std____cxx11__list_int__std__allocator_int_____back(&mylist533);
    int t548 = *r547;
    struct std__basic_ostream_char__std__char_traits_char__* r549 = std__ostream__operator__(r546, t548);
    struct std__basic_ostream_char__std__char_traits_char__* r550 = std__ostream__operator___std__ostream_____(r549, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int* r551 = std____cxx11__list_int__std__allocator_int_____front(&mylist533);
    int t552 = *r551;
    int c553 = 77;
    _Bool c554 = ((t552 == c553)) ? 1 : 0;
    if (c554) {
    } else {
      char* cast555 = (char*)&(_str_2);
      char* c556 = _str_3;
      unsigned int c557 = 28;
      char* cast558 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast555, c556, c557, cast558);
    }
    int* r559 = std____cxx11__list_int__std__allocator_int_____back(&mylist533);
    int t560 = *r559;
    int c561 = 22;
    _Bool c562 = ((t560 == c561)) ? 1 : 0;
    if (c562) {
    } else {
      char* cast563 = (char*)&(_str_4);
      char* c564 = _str_3;
      unsigned int c565 = 29;
      char* cast566 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast563, c564, c565, cast566);
    }
    int c567 = 0;
    __retval532 = c567;
    int t568 = __retval532;
    int ret_val569 = t568;
    {
      std____cxx11__list_int__std__allocator_int______list(&mylist533);
    }
    return ret_val569;
  int t570 = __retval532;
  return t570;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v571) {
bb572:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this573;
  this573 = v571;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t574 = this573;
  struct std__allocator_std___List_node_int__* base575 = (struct std__allocator_std___List_node_int__*)((char *)t574 + 0);
  std__allocator_std___List_node_int_____allocator(base575);
    std____detail___List_node_header___List_node_header(&t574->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v576) {
bb577:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this578;
  this578 = v576;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t579 = this578;
  {
    struct std__allocator_std___List_node_int__* base580 = (struct std__allocator_std___List_node_int__*)((char *)t579 + 0);
    std__allocator_std___List_node_int______allocator(base580);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v581) {
bb582:
  struct std____cxx11___List_base_int__std__allocator_int__* this583;
  this583 = v581;
  struct std____cxx11___List_base_int__std__allocator_int__* t584 = this583;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t584->_M_impl);
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v585) {
bb586:
  struct std____detail___List_node_header* this587;
  struct std____detail___List_node_base* __retval588;
  this587 = v585;
  struct std____detail___List_node_header* t589 = this587;
  struct std____detail___List_node_base* base590 = (struct std____detail___List_node_base*)((char *)t589 + 0);
  __retval588 = base590;
  struct std____detail___List_node_base* t591 = __retval588;
  return t591;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v592) {
bb593:
  int* __location594;
  __location594 = v592;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v595, int* v596) {
bb597:
  struct std__allocator_std___List_node_int__* __a598;
  int* __p599;
  __a598 = v595;
  __p599 = v596;
  int* t600 = __p599;
  void_std__destroy_at_int_(t600);
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v601) {
bb602:
  struct __gnu_cxx____aligned_membuf_int_* this603;
  void* __retval604;
  this603 = v601;
  struct __gnu_cxx____aligned_membuf_int_* t605 = this603;
  void* cast606 = (void*)&(t605->_M_storage);
  __retval604 = cast606;
  void* t607 = __retval604;
  return t607;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v608) {
bb609:
  struct __gnu_cxx____aligned_membuf_int_* this610;
  int* __retval611;
  this610 = v608;
  struct __gnu_cxx____aligned_membuf_int_* t612 = this610;
  void* r613 = __gnu_cxx____aligned_membuf_int____M_addr(t612);
  int* cast614 = (int*)r613;
  __retval611 = cast614;
  int* t615 = __retval611;
  return t615;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v616) {
bb617:
  struct std___List_node_int_* this618;
  int* __retval619;
  this618 = v616;
  struct std___List_node_int_* t620 = this618;
  int* r621 = __gnu_cxx____aligned_membuf_int____M_ptr(&t620->_M_storage);
  __retval619 = r621;
  int* t622 = __retval619;
  return t622;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb623:
  _Bool __retval624;
    _Bool c625 = 0;
    __retval624 = c625;
    _Bool t626 = __retval624;
    return t626;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v627, struct std___List_node_int_* v628, unsigned long v629) {
bb630:
  struct std____new_allocator_std___List_node_int__* this631;
  struct std___List_node_int_* __p632;
  unsigned long __n633;
  this631 = v627;
  __p632 = v628;
  __n633 = v629;
  struct std____new_allocator_std___List_node_int__* t634 = this631;
    unsigned long c635 = 8;
    unsigned long c636 = 16;
    _Bool c637 = ((c635 > c636)) ? 1 : 0;
    if (c637) {
      struct std___List_node_int_* t638 = __p632;
      void* cast639 = (void*)t638;
      unsigned long t640 = __n633;
      unsigned long c641 = 24;
      unsigned long b642 = t640 * c641;
      unsigned long c643 = 8;
      operator_delete_3(cast639, b642, c643);
      return;
    }
  struct std___List_node_int_* t644 = __p632;
  void* cast645 = (void*)t644;
  unsigned long t646 = __n633;
  unsigned long c647 = 24;
  unsigned long b648 = t646 * c647;
  operator_delete_2(cast645, b648);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v649, struct std___List_node_int_* v650, unsigned long v651) {
bb652:
  struct std__allocator_std___List_node_int__* this653;
  struct std___List_node_int_* __p654;
  unsigned long __n655;
  this653 = v649;
  __p654 = v650;
  __n655 = v651;
  struct std__allocator_std___List_node_int__* t656 = this653;
    _Bool r657 = std____is_constant_evaluated();
    if (r657) {
      struct std___List_node_int_* t658 = __p654;
      void* cast659 = (void*)t658;
      operator_delete(cast659);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base660 = (struct std____new_allocator_std___List_node_int__*)((char *)t656 + 0);
  struct std___List_node_int_* t661 = __p654;
  unsigned long t662 = __n655;
  std____new_allocator_std___List_node_int_____deallocate(base660, t661, t662);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v663, struct std___List_node_int_* v664, unsigned long v665) {
bb666:
  struct std__allocator_std___List_node_int__* __a667;
  struct std___List_node_int_* __p668;
  unsigned long __n669;
  __a667 = v663;
  __p668 = v664;
  __n669 = v665;
  struct std__allocator_std___List_node_int__* t670 = __a667;
  struct std___List_node_int_* t671 = __p668;
  unsigned long t672 = __n669;
  std__allocator_std___List_node_int_____deallocate(t670, t671, t672);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v673, struct std___List_node_int_* v674) {
bb675:
  struct std____cxx11___List_base_int__std__allocator_int__* this676;
  struct std___List_node_int_* __p677;
  this676 = v673;
  __p677 = v674;
  struct std____cxx11___List_base_int__std__allocator_int__* t678 = this676;
  struct std__allocator_std___List_node_int__* base679 = (struct std__allocator_std___List_node_int__*)((char *)&(t678->_M_impl) + 0);
  struct std___List_node_int_* t680 = __p677;
  unsigned long c681 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base679, t680, c681);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v682, struct std___List_node_int_* v683) {
bb684:
  struct std____cxx11___List_base_int__std__allocator_int__* this685;
  struct std___List_node_int_* __p686;
  this685 = v682;
  __p686 = v683;
  struct std____cxx11___List_base_int__std__allocator_int__* t687 = this685;
  struct std__allocator_std___List_node_int__* base688 = (struct std__allocator_std___List_node_int__*)((char *)&(t687->_M_impl) + 0);
  struct std___List_node_int_* t689 = __p686;
  int* r690 = std___List_node_int____M_valptr(t689);
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base688, r690);
  struct std___List_node_int_* t691 = __p686;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t687, t691);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v692) {
bb693:
  struct std___List_node_int_* this694;
  struct std___List_node_int_* __retval695;
  this694 = v692;
  struct std___List_node_int_* t696 = this694;
  __retval695 = t696;
  struct std___List_node_int_* t697 = __retval695;
  return t697;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v698) {
bb699:
  struct std____cxx11___List_base_int__std__allocator_int__* this700;
  struct std____detail___List_node_base* __cur701;
  this700 = v698;
  struct std____cxx11___List_base_int__std__allocator_int__* t702 = this700;
  struct std____detail___List_node_base* base703 = (struct std____detail___List_node_base*)((char *)&(t702->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t704 = base703->_M_next;
  __cur701 = t704;
    while (1) {
      struct std____detail___List_node_base* t705 = __cur701;
      struct std____detail___List_node_base* r706 = std____detail___List_node_header___M_base(&t702->_M_impl._M_node);
      _Bool c707 = ((t705 != r706)) ? 1 : 0;
      if (!c707) break;
        struct std___List_node_int_* __tmp708;
        struct std____detail___List_node_base* t709 = __cur701;
        struct std___List_node_int_* derived710 = (struct std___List_node_int_*)((char *)t709 - 0);
        __tmp708 = derived710;
        struct std___List_node_int_* t711 = __tmp708;
        struct std____detail___List_node_base* base712 = (struct std____detail___List_node_base*)((char *)t711 + 0);
        struct std____detail___List_node_base* t713 = base712->_M_next;
        __cur701 = t713;
        struct std___List_node_int_* t714 = __tmp708;
        struct std___List_node_int_* r715 = std___List_node_int____M_node_ptr(t714);
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t702, r715);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v716) {
bb717:
  struct std____cxx11___List_base_int__std__allocator_int__* this718;
  this718 = v716;
  struct std____cxx11___List_base_int__std__allocator_int__* t719 = this718;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t719);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t719->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v720) {
bb721:
  struct std____new_allocator_std___List_node_int__* this722;
  this722 = v720;
  struct std____new_allocator_std___List_node_int__* t723 = this722;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2Ev
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v724) {
bb725:
  struct std__allocator_std___List_node_int__* this726;
  this726 = v724;
  struct std__allocator_std___List_node_int__* t727 = this726;
  struct std____new_allocator_std___List_node_int__* base728 = (struct std____new_allocator_std___List_node_int__*)((char *)t727 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base728);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v729) {
bb730:
  struct std____detail___List_node_header* this731;
  this731 = v729;
  struct std____detail___List_node_header* t732 = this731;
  struct std____detail___List_node_base* base733 = (struct std____detail___List_node_base*)((char *)t732 + 0);
  struct std____detail___List_size* base734 = (struct std____detail___List_size*)((char *)t732 + 16);
  std____detail___List_node_header___M_init(t732);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v735) {
bb736:
  struct std__allocator_std___List_node_int__* this737;
  this737 = v735;
  struct std__allocator_std___List_node_int__* t738 = this737;
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v739, struct std____detail___List_size* v740) {
bb741:
  struct std____detail___List_size* this742;
  struct std____detail___List_size* unnamed743;
  struct std____detail___List_size* __retval744;
  this742 = v739;
  unnamed743 = v740;
  struct std____detail___List_size* t745 = this742;
  struct std____detail___List_size* t746 = unnamed743;
  unsigned long t747 = t746->_M_size;
  t745->_M_size = t747;
  __retval744 = t745;
  struct std____detail___List_size* t748 = __retval744;
  return t748;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v749) {
bb750:
  struct std____detail___List_node_header* this751;
  struct std____detail___List_size ref_tmp0752;
  this751 = v749;
  struct std____detail___List_node_header* t753 = this751;
  struct std____detail___List_node_base* base754 = (struct std____detail___List_node_base*)((char *)t753 + 0);
  struct std____detail___List_node_base* base755 = (struct std____detail___List_node_base*)((char *)t753 + 0);
  base755->_M_prev = base754;
  struct std____detail___List_node_base* base756 = (struct std____detail___List_node_base*)((char *)t753 + 0);
  base756->_M_next = base754;
  struct std____detail___List_size* base757 = (struct std____detail___List_size*)((char *)t753 + 16);
  ref_tmp0752 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r758 = std____detail___List_size__operator_(base757, &ref_tmp0752);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v759, struct std____allocated_ptr_std__allocator_std___List_node_int___* v760) {
bb761:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this762;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd763;
  this762 = v759;
  __gd763 = v760;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t764 = this762;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t765 = __gd763;
  struct std__allocator_std___List_node_int__* t766 = t765->_M_alloc;
  t764->_M_alloc = t766;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t767 = __gd763;
  struct std___List_node_int_* t768 = t767->_M_ptr;
  t764->_M_ptr = t768;
  struct std___List_node_int_* c769 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t770 = __gd763;
  t770->_M_ptr = c769;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v771) {
bb772:
  struct std___List_node_int_* __ptr773;
  struct std___List_node_int_* __retval774;
  __ptr773 = v771;
  struct std___List_node_int_* t775 = __ptr773;
  __retval774 = t775;
  struct std___List_node_int_* t776 = __retval774;
  return t776;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v777) {
bb778:
  struct std___List_node_int_** __ptr779;
  struct std___List_node_int_* __retval780;
  __ptr779 = v777;
  struct std___List_node_int_** t781 = __ptr779;
  struct std___List_node_int_* t782 = *t781;
  struct std___List_node_int_* r783 = std___List_node_int___std__to_address_std___List_node_int___(t782);
  __retval780 = r783;
  struct std___List_node_int_* t784 = __retval780;
  return t784;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v785) {
bb786:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this787;
  struct std___List_node_int_* __retval788;
  this787 = v785;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t789 = this787;
  struct std___List_node_int_* r790 = auto_std____to_address_std___List_node_int___(&t789->_M_ptr);
  __retval788 = r790;
  struct std___List_node_int_* t791 = __retval788;
  return t791;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v792) {
bb793:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this794;
  _Bool __retval795;
  this794 = v792;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t796 = this794;
  struct std___List_node_int_* t797 = t796->_M_ptr;
  _Bool cast798 = (_Bool)t797;
  __retval795 = cast798;
  _Bool t799 = __retval795;
  return t799;
}

