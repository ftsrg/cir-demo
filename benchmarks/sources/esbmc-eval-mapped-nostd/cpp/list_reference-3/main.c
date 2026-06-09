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
char _str[9] = "*it != 4";
char _str_1[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/list_reference-3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[6] = "*it: ";
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* p0);
void std___List_iterator_int____List_iterator_2(struct std___List_iterator_int_* p0);
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
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(struct std__allocator_std___List_node_int__* p0, int* p1, int* p2);
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** p0, void** p1);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
extern void std____detail___List_node_base___M_hook(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1);
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, int* p2);
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
extern void std____detail___List_node_base___M_reverse(struct std____detail___List_node_base* p0);
void std____cxx11__list_int__std__allocator_int_____reverse(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std___List_iterator_int_* std___List_iterator_int___operator_(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
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
bb1:
  struct std____cxx11__list_int__std__allocator_int__* this2;
  this2 = v0;
  struct std____cxx11__list_int__std__allocator_int__* t3 = this2;
  struct std____cxx11___List_base_int__std__allocator_int__* base4 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t3 + 0);
  std____cxx11___List_base_int__std__allocator_int______List_base(base4);
  return;
}

// function: _ZNSt14_List_iteratorIiEC2Ev
void std___List_iterator_int____List_iterator_2(struct std___List_iterator_int_* v5) {
bb6:
  struct std___List_iterator_int_* this7;
  this7 = v5;
  struct std___List_iterator_int_* t8 = this7;
  struct std____detail___List_node_base* c9 = ((void*)0);
  t8->_M_node = c9;
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* v10) {
bb11:
  struct std____cxx11___List_base_int__std__allocator_int__* this12;
  struct std__allocator_std___List_node_int__* __retval13;
  this12 = v10;
  struct std____cxx11___List_base_int__std__allocator_int__* t14 = this12;
  struct std__allocator_std___List_node_int__* base15 = (struct std__allocator_std___List_node_int__*)((char *)&(t14->_M_impl) + 0);
  __retval13 = base15;
  struct std__allocator_std___List_node_int__* t16 = __retval13;
  return t16;
}

// function: _ZNKSt15__new_allocatorISt10_List_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* v17) {
bb18:
  struct std____new_allocator_std___List_node_int__* this19;
  unsigned long __retval20;
  this19 = v17;
  struct std____new_allocator_std___List_node_int__* t21 = this19;
  unsigned long c22 = 9223372036854775807;
  unsigned long c23 = 24;
  unsigned long b24 = c22 / c23;
  __retval20 = b24;
  unsigned long t25 = __retval20;
  return t25;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* v26, unsigned long v27, void* v28) {
bb29:
  struct std____new_allocator_std___List_node_int__* this30;
  unsigned long __n31;
  void* unnamed32;
  struct std___List_node_int_* __retval33;
  this30 = v26;
  __n31 = v27;
  unnamed32 = v28;
  struct std____new_allocator_std___List_node_int__* t34 = this30;
    unsigned long t35 = __n31;
    unsigned long r36 = std____new_allocator_std___List_node_int______M_max_size___const(t34);
    _Bool c37 = ((t35 > r36)) ? 1 : 0;
    if (c37) {
        unsigned long t38 = __n31;
        unsigned long c39 = -1;
        unsigned long c40 = 24;
        unsigned long b41 = c39 / c40;
        _Bool c42 = ((t38 > b41)) ? 1 : 0;
        if (c42) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c43 = 8;
    unsigned long c44 = 16;
    _Bool c45 = ((c43 > c44)) ? 1 : 0;
    if (c45) {
      unsigned long __al46;
      unsigned long c47 = 8;
      __al46 = c47;
      unsigned long t48 = __n31;
      unsigned long c49 = 24;
      unsigned long b50 = t48 * c49;
      unsigned long t51 = __al46;
      void* r52 = operator_new_2(b50, t51);
      struct std___List_node_int_* cast53 = (struct std___List_node_int_*)r52;
      __retval33 = cast53;
      struct std___List_node_int_* t54 = __retval33;
      return t54;
    }
  unsigned long t55 = __n31;
  unsigned long c56 = 24;
  unsigned long b57 = t55 * c56;
  void* r58 = operator_new(b57);
  struct std___List_node_int_* cast59 = (struct std___List_node_int_*)r58;
  __retval33 = cast59;
  struct std___List_node_int_* t60 = __retval33;
  return t60;
}

// function: _ZNSaISt10_List_nodeIiEE8allocateEm
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* v61, unsigned long v62) {
bb63:
  struct std__allocator_std___List_node_int__* this64;
  unsigned long __n65;
  struct std___List_node_int_* __retval66;
  this64 = v61;
  __n65 = v62;
  struct std__allocator_std___List_node_int__* t67 = this64;
    _Bool r68 = std____is_constant_evaluated();
    if (r68) {
        unsigned long t69 = __n65;
        unsigned long c70 = 24;
        unsigned long ovr71;
        _Bool ovf72 = __builtin_mul_overflow(t69, c70, &ovr71);
        __n65 = ovr71;
        if (ovf72) {
          std____throw_bad_array_new_length();
        }
      unsigned long t73 = __n65;
      void* r74 = operator_new(t73);
      struct std___List_node_int_* cast75 = (struct std___List_node_int_*)r74;
      __retval66 = cast75;
      struct std___List_node_int_* t76 = __retval66;
      return t76;
    }
  struct std____new_allocator_std___List_node_int__* base77 = (struct std____new_allocator_std___List_node_int__*)((char *)t67 + 0);
  unsigned long t78 = __n65;
  void* c79 = ((void*)0);
  struct std___List_node_int_* r80 = std____new_allocator_std___List_node_int_____allocate(base77, t78, c79);
  __retval66 = r80;
  struct std___List_node_int_* t81 = __retval66;
  return t81;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE8allocateERS2_m
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* v82, unsigned long v83) {
bb84:
  struct std__allocator_std___List_node_int__* __a85;
  unsigned long __n86;
  struct std___List_node_int_* __retval87;
  __a85 = v82;
  __n86 = v83;
  struct std__allocator_std___List_node_int__* t88 = __a85;
  unsigned long t89 = __n86;
  struct std___List_node_int_* r90 = std__allocator_std___List_node_int_____allocate(t88, t89);
  __retval87 = r90;
  struct std___List_node_int_* t91 = __retval87;
  return t91;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* v92, struct std__allocator_std___List_node_int__* v93, struct std___List_node_int_* v94) {
bb95:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this96;
  struct std__allocator_std___List_node_int__* __a97;
  struct std___List_node_int_* __ptr98;
  this96 = v92;
  __a97 = v93;
  __ptr98 = v94;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t99 = this96;
  struct std__allocator_std___List_node_int__* t100 = __a97;
  t99->_M_alloc = t100;
  struct std___List_node_int_* t101 = __ptr98;
  t99->_M_ptr = t101;
  return;
}

// function: _ZSt18__allocate_guardedISaISt10_List_nodeIiEEESt15__allocated_ptrIT_ERS4_
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v102) {
bb103:
  struct std__allocator_std___List_node_int__* __a104;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ __retval105;
  __a104 = v102;
  struct std__allocator_std___List_node_int__* t106 = __a104;
  struct std__allocator_std___List_node_int__* t107 = __a104;
  unsigned long c108 = 1;
  struct std___List_node_int_* r109 = std__allocator_traits_std__allocator_std___List_node_int_______allocate(t107, c108);
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(&__retval105, t106, r109);
  struct std____allocated_ptr_std__allocator_std___List_node_int___ t110 = __retval105;
  return t110;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEEC2EOSt15__allocated_ptrIS2_E
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v111, struct std____allocated_ptr_std__allocator_std___List_node_int___* v112) {
bb113:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this114;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __ptr115;
  this114 = v111;
  __ptr115 = v112;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t116 = this114;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base117 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t116 + 0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t118 = __ptr115;
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(base117, t118);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base119 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t116 + 0);
    struct std___List_node_int_* r120 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base119);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v121) {
bb122:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this123;
  this123 = v121;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t124 = this123;
    struct std___List_node_int_* t125 = t124->_M_ptr;
    struct std___List_node_int_* c126 = ((void*)0);
    _Bool c127 = ((t125 != c126)) ? 1 : 0;
    if (c127) {
      struct std__allocator_std___List_node_int__* t128 = t124->_M_alloc;
      struct std___List_node_int_* t129 = t124->_M_ptr;
      unsigned long c130 = 1;
      std__allocator_traits_std__allocator_std___List_node_int_______deallocate(t128, t129, c130);
    }
  return;
}

// function: _ZSt22__allocate_guarded_objISaISt10_List_nodeIiEEESt15__allocated_objIT_ERS4_
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v131) {
bb132:
  struct std__allocator_std___List_node_int__* __a133;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __retval134;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ ref_tmp0135;
  __a133 = v131;
  struct std__allocator_std___List_node_int__* t136 = __a133;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ r137 = std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(t136);
  ref_tmp0135 = r137;
    std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(&__retval134, &ref_tmp0135);
  {
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp0135);
  }
  struct std____allocated_obj_std__allocator_std___List_node_int___ t138 = __retval134;
  return t138;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v139, int* v140) {
bb141:
  int* __location142;
  int* __args143;
  int* __retval144;
  void* __loc145;
  __location142 = v139;
  __args143 = v140;
  int* t146 = __location142;
  void* cast147 = (void*)t146;
  __loc145 = cast147;
    void* t148 = __loc145;
    int* cast149 = (int*)t148;
    int* t150 = __args143;
    int t151 = *t150;
    *cast149 = t151;
    __retval144 = cast149;
    int* t152 = __retval144;
    return t152;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJRKiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(struct std__allocator_std___List_node_int__* v153, int* v154, int* v155) {
bb156:
  struct std__allocator_std___List_node_int__* __a157;
  int* __p158;
  int* __args159;
  __a157 = v153;
  __p158 = v154;
  __args159 = v155;
  int* t160 = __p158;
  int* t161 = __args159;
  int* r162 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t160, t161);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIiEEEptEv
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* v163) {
bb164:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this165;
  struct std___List_node_int_* __retval166;
  this165 = v163;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t167 = this165;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base168 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t167 + 0);
  struct std___List_node_int_* r169 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base168);
  __retval166 = r169;
  struct std___List_node_int_* t170 = __retval166;
  return t170;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIiEDnET_RS3_OT0_
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** v171, void** v172) {
bb173:
  struct std___List_node_int_** __obj174;
  void** __new_val175;
  struct std___List_node_int_* __retval176;
  struct std___List_node_int_* __old_val177;
  __obj174 = v171;
  __new_val175 = v172;
  struct std___List_node_int_** t178 = __obj174;
  struct std___List_node_int_* t179 = *t178;
  __old_val177 = t179;
  void** t180 = __new_val175;
  struct std___List_node_int_* c181 = ((void*)0);
  struct std___List_node_int_** t182 = __obj174;
  *t182 = c181;
  struct std___List_node_int_* t183 = __old_val177;
  __retval176 = t183;
  struct std___List_node_int_* t184 = __retval176;
  return t184;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEE7releaseEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* v185) {
bb186:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this187;
  struct std___List_node_int_* __retval188;
  void* ref_tmp0189;
  this187 = v185;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t190 = this187;
  void* c191 = ((void*)0);
  ref_tmp0189 = c191;
  struct std___List_node_int_* r192 = std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(&t190->_M_ptr, &ref_tmp0189);
  __retval188 = r192;
  struct std___List_node_int_* t193 = __retval188;
  return t193;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v194) {
bb195:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this196;
  this196 = v194;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t197 = this196;
      struct std____allocated_ptr_std__allocator_std___List_node_int___* base198 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t197 + 0);
      _Bool r199 = std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(base198);
      if (r199) {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base200 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t197 + 0);
        struct std___List_node_int_* r201 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base200);
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base202 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t197 + 0);
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base202);
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRKiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(struct std____cxx11__list_int__std__allocator_int__* v203, int* v204) {
bb205:
  struct std____cxx11__list_int__std__allocator_int__* this206;
  int* __args207;
  struct std___List_node_int_* __retval208;
  struct std__allocator_std___List_node_int__* __alloc209;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard210;
  this206 = v203;
  __args207 = v204;
  struct std____cxx11__list_int__std__allocator_int__* t211 = this206;
  struct std____cxx11___List_base_int__std__allocator_int__* base212 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t211 + 0);
  struct std__allocator_std___List_node_int__* r213 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base212);
  __alloc209 = r213;
  struct std__allocator_std___List_node_int__* t214 = __alloc209;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r215 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t214);
  __guard210 = r215;
    struct std__allocator_std___List_node_int__* t216 = __alloc209;
    struct std___List_node_int_* r217 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard210);
    int* r218 = std___List_node_int____M_valptr(r217);
    int* t219 = __args207;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(t216, r218, t219);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base220 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard210) + 0);
    struct std___List_node_int_* r221 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base220);
    __retval208 = r221;
    struct std___List_node_int_* t222 = __retval208;
    struct std___List_node_int_* ret_val223 = t222;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard210);
    }
    return ret_val223;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* v224, unsigned long v225) {
bb226:
  struct std____cxx11___List_base_int__std__allocator_int__* this227;
  unsigned long __n228;
  this227 = v224;
  __n228 = v225;
  struct std____cxx11___List_base_int__std__allocator_int__* t229 = this227;
  unsigned long t230 = __n228;
  struct std____detail___List_size* base231 = (struct std____detail___List_size*)((char *)&(t229->_M_impl._M_node) + 16);
  unsigned long t232 = base231->_M_size;
  unsigned long b233 = t232 + t230;
  base231->_M_size = b233;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJRKiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(struct std____cxx11__list_int__std__allocator_int__* v234, struct std___List_iterator_int_ v235, int* v236) {
bb237:
  struct std____cxx11__list_int__std__allocator_int__* this238;
  struct std___List_iterator_int_ __position239;
  int* __args240;
  struct std___List_node_int_* __tmp241;
  this238 = v234;
  __position239 = v235;
  __args240 = v236;
  struct std____cxx11__list_int__std__allocator_int__* t242 = this238;
  int* t243 = __args240;
  struct std___List_node_int_* r244 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(t242, t243);
  __tmp241 = r244;
  struct std___List_node_int_* t245 = __tmp241;
  struct std____detail___List_node_base* base246 = (struct std____detail___List_node_base*)((char *)t245 + 0);
  struct std____detail___List_node_base* t247 = __position239._M_node;
  std____detail___List_node_base___M_hook(base246, t247);
  struct std____cxx11___List_base_int__std__allocator_int__* base248 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t242 + 0);
  unsigned long c249 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base248, c249);
  return;
}

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v250, struct std____detail___List_node_base* v251) {
bb252:
  struct std___List_iterator_int_* this253;
  struct std____detail___List_node_base* __x254;
  this253 = v250;
  __x254 = v251;
  struct std___List_iterator_int_* t255 = this253;
  struct std____detail___List_node_base* t256 = __x254;
  t255->_M_node = t256;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v257) {
bb258:
  struct std____cxx11__list_int__std__allocator_int__* this259;
  struct std___List_iterator_int_ __retval260;
  this259 = v257;
  struct std____cxx11__list_int__std__allocator_int__* t261 = this259;
  struct std____cxx11___List_base_int__std__allocator_int__* base262 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t261 + 0);
  struct std____detail___List_node_base* r263 = std____detail___List_node_header___M_base(&base262->_M_impl._M_node);
  std___List_iterator_int____List_iterator(&__retval260, r263);
  struct std___List_iterator_int_ t264 = __retval260;
  return t264;
}

// function: _ZNSt7__cxx114listIiSaIiEE9push_backERKi
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* v265, int* v266) {
bb267:
  struct std____cxx11__list_int__std__allocator_int__* this268;
  int* __x269;
  struct std___List_iterator_int_ agg_tmp0270;
  this268 = v265;
  __x269 = v266;
  struct std____cxx11__list_int__std__allocator_int__* t271 = this268;
  struct std___List_iterator_int_ r272 = std____cxx11__list_int__std__allocator_int_____end(t271);
  agg_tmp0270 = r272;
  int* t273 = __x269;
  struct std___List_iterator_int_ t274 = agg_tmp0270;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(t271, t274, t273);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE7reverseEv
void std____cxx11__list_int__std__allocator_int_____reverse(struct std____cxx11__list_int__std__allocator_int__* v275) {
bb276:
  struct std____cxx11__list_int__std__allocator_int__* this277;
  this277 = v275;
  struct std____cxx11__list_int__std__allocator_int__* t278 = this277;
  struct std____cxx11___List_base_int__std__allocator_int__* base279 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t278 + 0);
  struct std____detail___List_node_base* base280 = (struct std____detail___List_node_base*)((char *)&(base279->_M_impl._M_node) + 0);
  std____detail___List_node_base___M_reverse(base280);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE5beginEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* v281) {
bb282:
  struct std____cxx11__list_int__std__allocator_int__* this283;
  struct std___List_iterator_int_ __retval284;
  this283 = v281;
  struct std____cxx11__list_int__std__allocator_int__* t285 = this283;
  struct std____cxx11___List_base_int__std__allocator_int__* base286 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t285 + 0);
  struct std____detail___List_node_base* base287 = (struct std____detail___List_node_base*)((char *)&(base286->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t288 = base287->_M_next;
  std___List_iterator_int____List_iterator(&__retval284, t288);
  struct std___List_iterator_int_ t289 = __retval284;
  return t289;
}

// function: _ZNSt14_List_iteratorIiEaSEOS0_
struct std___List_iterator_int_* std___List_iterator_int___operator_(struct std___List_iterator_int_* v290, struct std___List_iterator_int_* v291) {
bb292:
  struct std___List_iterator_int_* this293;
  struct std___List_iterator_int_* unnamed294;
  struct std___List_iterator_int_* __retval295;
  this293 = v290;
  unnamed294 = v291;
  struct std___List_iterator_int_* t296 = this293;
  struct std___List_iterator_int_* t297 = unnamed294;
  struct std____detail___List_node_base* t298 = t297->_M_node;
  t296->_M_node = t298;
  __retval295 = t296;
  struct std___List_iterator_int_* t299 = __retval295;
  return t299;
}

// function: _ZNKSt14_List_iteratorIiEdeEv
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* v300) {
bb301:
  struct std___List_iterator_int_* this302;
  int* __retval303;
  this302 = v300;
  struct std___List_iterator_int_* t304 = this302;
  struct std____detail___List_node_base* t305 = t304->_M_node;
  struct std___List_node_int_* derived306 = ((t305) ? (struct std___List_node_int_*)((char *)t305 - 0) : (struct std___List_node_int_*)0);
  int* r307 = std___List_node_int____M_valptr(derived306);
  __retval303 = r307;
  int* t308 = __retval303;
  return t308;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v309, int v310) {
bb311:
  int __a312;
  int __b313;
  int __retval314;
  __a312 = v309;
  __b313 = v310;
  int t315 = __a312;
  int t316 = __b313;
  int b317 = t315 | t316;
  __retval314 = b317;
  int t318 = __retval314;
  return t318;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v319) {
bb320:
  struct std__basic_ios_char__std__char_traits_char__* this321;
  int __retval322;
  this321 = v319;
  struct std__basic_ios_char__std__char_traits_char__* t323 = this321;
  struct std__ios_base* base324 = (struct std__ios_base*)((char *)t323 + 0);
  int t325 = base324->_M_streambuf_state;
  __retval322 = t325;
  int t326 = __retval322;
  return t326;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v327, int v328) {
bb329:
  struct std__basic_ios_char__std__char_traits_char__* this330;
  int __state331;
  this330 = v327;
  __state331 = v328;
  struct std__basic_ios_char__std__char_traits_char__* t332 = this330;
  int r333 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t332);
  int t334 = __state331;
  int r335 = std__operator_(r333, t334);
  std__basic_ios_char__std__char_traits_char_____clear(t332, r335);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v336, char* v337) {
bb338:
  char* __c1339;
  char* __c2340;
  _Bool __retval341;
  __c1339 = v336;
  __c2340 = v337;
  char* t342 = __c1339;
  char t343 = *t342;
  int cast344 = (int)t343;
  char* t345 = __c2340;
  char t346 = *t345;
  int cast347 = (int)t346;
  _Bool c348 = ((cast344 == cast347)) ? 1 : 0;
  __retval341 = c348;
  _Bool t349 = __retval341;
  return t349;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v350) {
bb351:
  char* __p352;
  unsigned long __retval353;
  unsigned long __i354;
  __p352 = v350;
  unsigned long c355 = 0;
  __i354 = c355;
    char ref_tmp0356;
    while (1) {
      unsigned long t357 = __i354;
      char* t358 = __p352;
      char* ptr359 = &(t358)[t357];
      char c360 = 0;
      ref_tmp0356 = c360;
      _Bool r361 = __gnu_cxx__char_traits_char___eq(ptr359, &ref_tmp0356);
      _Bool u362 = !r361;
      if (!u362) break;
      unsigned long t363 = __i354;
      unsigned long u364 = t363 + 1;
      __i354 = u364;
    }
  unsigned long t365 = __i354;
  __retval353 = t365;
  unsigned long t366 = __retval353;
  return t366;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v367) {
bb368:
  char* __s369;
  unsigned long __retval370;
  __s369 = v367;
    _Bool r371 = std____is_constant_evaluated();
    if (r371) {
      char* t372 = __s369;
      unsigned long r373 = __gnu_cxx__char_traits_char___length(t372);
      __retval370 = r373;
      unsigned long t374 = __retval370;
      return t374;
    }
  char* t375 = __s369;
  unsigned long r376 = strlen(t375);
  __retval370 = r376;
  unsigned long t377 = __retval370;
  return t377;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v378, char* v379) {
bb380:
  struct std__basic_ostream_char__std__char_traits_char__* __out381;
  char* __s382;
  struct std__basic_ostream_char__std__char_traits_char__* __retval383;
  __out381 = v378;
  __s382 = v379;
    char* t384 = __s382;
    _Bool cast385 = (_Bool)t384;
    _Bool u386 = !cast385;
    if (u386) {
      struct std__basic_ostream_char__std__char_traits_char__* t387 = __out381;
      void** v388 = (void**)t387;
      void* v389 = *((void**)v388);
      unsigned char* cast390 = (unsigned char*)v389;
      long c391 = -24;
      unsigned char* ptr392 = &(cast390)[c391];
      long* cast393 = (long*)ptr392;
      long t394 = *cast393;
      unsigned char* cast395 = (unsigned char*)t387;
      unsigned char* ptr396 = &(cast395)[t394];
      struct std__basic_ostream_char__std__char_traits_char__* cast397 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr396;
      struct std__basic_ios_char__std__char_traits_char__* cast398 = (struct std__basic_ios_char__std__char_traits_char__*)cast397;
      int t399 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast398, t399);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t400 = __out381;
      char* t401 = __s382;
      char* t402 = __s382;
      unsigned long r403 = std__char_traits_char___length(t402);
      long cast404 = (long)r403;
      struct std__basic_ostream_char__std__char_traits_char__* r405 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t400, t401, cast404);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t406 = __out381;
  __retval383 = t406;
  struct std__basic_ostream_char__std__char_traits_char__* t407 = __retval383;
  return t407;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v408, void* v409) {
bb410:
  struct std__basic_ostream_char__std__char_traits_char__* this411;
  void* __pf412;
  struct std__basic_ostream_char__std__char_traits_char__* __retval413;
  this411 = v408;
  __pf412 = v409;
  struct std__basic_ostream_char__std__char_traits_char__* t414 = this411;
  void* t415 = __pf412;
  struct std__basic_ostream_char__std__char_traits_char__* r416 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t415)(t414);
  __retval413 = r416;
  struct std__basic_ostream_char__std__char_traits_char__* t417 = __retval413;
  return t417;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v418) {
bb419:
  struct std__basic_ostream_char__std__char_traits_char__* __os420;
  struct std__basic_ostream_char__std__char_traits_char__* __retval421;
  __os420 = v418;
  struct std__basic_ostream_char__std__char_traits_char__* t422 = __os420;
  struct std__basic_ostream_char__std__char_traits_char__* r423 = std__ostream__flush(t422);
  __retval421 = r423;
  struct std__basic_ostream_char__std__char_traits_char__* t424 = __retval421;
  return t424;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v425) {
bb426:
  struct std__ctype_char_* __f427;
  struct std__ctype_char_* __retval428;
  __f427 = v425;
    struct std__ctype_char_* t429 = __f427;
    _Bool cast430 = (_Bool)t429;
    _Bool u431 = !cast430;
    if (u431) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t432 = __f427;
  __retval428 = t432;
  struct std__ctype_char_* t433 = __retval428;
  return t433;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v434, char v435) {
bb436:
  struct std__ctype_char_* this437;
  char __c438;
  char __retval439;
  this437 = v434;
  __c438 = v435;
  struct std__ctype_char_* t440 = this437;
    char t441 = t440->_M_widen_ok;
    _Bool cast442 = (_Bool)t441;
    if (cast442) {
      char t443 = __c438;
      unsigned char cast444 = (unsigned char)t443;
      unsigned long cast445 = (unsigned long)cast444;
      char t446 = t440->_M_widen[cast445];
      __retval439 = t446;
      char t447 = __retval439;
      return t447;
    }
  std__ctype_char____M_widen_init___const(t440);
  char t448 = __c438;
  void** v449 = (void**)t440;
  void* v450 = *((void**)v449);
  char vcall453 = (char)__VERIFIER_virtual_call_char_char(t440, 6, t448);
  __retval439 = vcall453;
  char t454 = __retval439;
  return t454;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v455, char v456) {
bb457:
  struct std__basic_ios_char__std__char_traits_char__* this458;
  char __c459;
  char __retval460;
  this458 = v455;
  __c459 = v456;
  struct std__basic_ios_char__std__char_traits_char__* t461 = this458;
  struct std__ctype_char_* t462 = t461->_M_ctype;
  struct std__ctype_char_* r463 = std__ctype_char__const__std____check_facet_std__ctype_char___(t462);
  char t464 = __c459;
  char r465 = std__ctype_char___widen_char__const(r463, t464);
  __retval460 = r465;
  char t466 = __retval460;
  return t466;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v467) {
bb468:
  struct std__basic_ostream_char__std__char_traits_char__* __os469;
  struct std__basic_ostream_char__std__char_traits_char__* __retval470;
  __os469 = v467;
  struct std__basic_ostream_char__std__char_traits_char__* t471 = __os469;
  struct std__basic_ostream_char__std__char_traits_char__* t472 = __os469;
  void** v473 = (void**)t472;
  void* v474 = *((void**)v473);
  unsigned char* cast475 = (unsigned char*)v474;
  long c476 = -24;
  unsigned char* ptr477 = &(cast475)[c476];
  long* cast478 = (long*)ptr477;
  long t479 = *cast478;
  unsigned char* cast480 = (unsigned char*)t472;
  unsigned char* ptr481 = &(cast480)[t479];
  struct std__basic_ostream_char__std__char_traits_char__* cast482 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr481;
  struct std__basic_ios_char__std__char_traits_char__* cast483 = (struct std__basic_ios_char__std__char_traits_char__*)cast482;
  char c484 = 10;
  char r485 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast483, c484);
  struct std__basic_ostream_char__std__char_traits_char__* r486 = std__ostream__put(t471, r485);
  struct std__basic_ostream_char__std__char_traits_char__* r487 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r486);
  __retval470 = r487;
  struct std__basic_ostream_char__std__char_traits_char__* t488 = __retval470;
  return t488;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v489) {
bb490:
  struct std____cxx11__list_int__std__allocator_int__* this491;
  this491 = v489;
  struct std____cxx11__list_int__std__allocator_int__* t492 = this491;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base493 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t492 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base493);
  }
  return;
}

// function: main
int main() {
bb494:
  int __retval495;
  struct std____cxx11__list_int__std__allocator_int__ mylist496;
  struct std___List_iterator_int_ it497;
  struct std___List_iterator_int_ ref_tmp0498;
  int c499 = 0;
  __retval495 = c499;
  std____cxx11__list_int__std__allocator_int_____list(&mylist496);
    std___List_iterator_int____List_iterator_2(&it497);
      int i500;
      int c501 = 1;
      i500 = c501;
      while (1) {
        int t503 = i500;
        int c504 = 5;
        _Bool c505 = ((t503 < c504)) ? 1 : 0;
        if (!c505) break;
        std____cxx11__list_int__std__allocator_int_____push_back(&mylist496, &i500);
      for_step502: ;
        int t506 = i500;
        int u507 = t506 + 1;
        i500 = u507;
      }
    std____cxx11__list_int__std__allocator_int_____reverse(&mylist496);
    struct std___List_iterator_int_ r508 = std____cxx11__list_int__std__allocator_int_____begin(&mylist496);
    ref_tmp0498 = r508;
    struct std___List_iterator_int_* r509 = std___List_iterator_int___operator_(&it497, &ref_tmp0498);
    int* r510 = std___List_iterator_int___operator____const(&it497);
    int t511 = *r510;
    int c512 = 4;
    _Bool c513 = ((t511 != c512)) ? 1 : 0;
    if (c513) {
    } else {
      char* cast514 = (char*)&(_str);
      char* c515 = _str_1;
      unsigned int c516 = 24;
      char* cast517 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast514, c515, c516, cast517);
    }
    char* cast518 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r519 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast518);
    int* r520 = std___List_iterator_int___operator____const(&it497);
    int t521 = *r520;
    struct std__basic_ostream_char__std__char_traits_char__* r522 = std__ostream__operator__(r519, t521);
    struct std__basic_ostream_char__std__char_traits_char__* r523 = std__ostream__operator___std__ostream_____(r522, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c524 = 0;
    __retval495 = c524;
    int t525 = __retval495;
    int ret_val526 = t525;
    {
      std____cxx11__list_int__std__allocator_int______list(&mylist496);
    }
    return ret_val526;
  int t527 = __retval495;
  return t527;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v528) {
bb529:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this530;
  this530 = v528;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t531 = this530;
  struct std__allocator_std___List_node_int__* base532 = (struct std__allocator_std___List_node_int__*)((char *)t531 + 0);
  std__allocator_std___List_node_int_____allocator(base532);
    std____detail___List_node_header___List_node_header(&t531->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v533) {
bb534:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this535;
  this535 = v533;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t536 = this535;
  {
    struct std__allocator_std___List_node_int__* base537 = (struct std__allocator_std___List_node_int__*)((char *)t536 + 0);
    std__allocator_std___List_node_int______allocator(base537);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v538) {
bb539:
  struct std____cxx11___List_base_int__std__allocator_int__* this540;
  this540 = v538;
  struct std____cxx11___List_base_int__std__allocator_int__* t541 = this540;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t541->_M_impl);
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v542) {
bb543:
  struct std____detail___List_node_header* this544;
  struct std____detail___List_node_base* __retval545;
  this544 = v542;
  struct std____detail___List_node_header* t546 = this544;
  struct std____detail___List_node_base* base547 = (struct std____detail___List_node_base*)((char *)t546 + 0);
  __retval545 = base547;
  struct std____detail___List_node_base* t548 = __retval545;
  return t548;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v549) {
bb550:
  int* __location551;
  __location551 = v549;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v552, int* v553) {
bb554:
  struct std__allocator_std___List_node_int__* __a555;
  int* __p556;
  __a555 = v552;
  __p556 = v553;
  int* t557 = __p556;
  void_std__destroy_at_int_(t557);
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v558) {
bb559:
  struct __gnu_cxx____aligned_membuf_int_* this560;
  void* __retval561;
  this560 = v558;
  struct __gnu_cxx____aligned_membuf_int_* t562 = this560;
  void* cast563 = (void*)&(t562->_M_storage);
  __retval561 = cast563;
  void* t564 = __retval561;
  return t564;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v565) {
bb566:
  struct __gnu_cxx____aligned_membuf_int_* this567;
  int* __retval568;
  this567 = v565;
  struct __gnu_cxx____aligned_membuf_int_* t569 = this567;
  void* r570 = __gnu_cxx____aligned_membuf_int____M_addr(t569);
  int* cast571 = (int*)r570;
  __retval568 = cast571;
  int* t572 = __retval568;
  return t572;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v573) {
bb574:
  struct std___List_node_int_* this575;
  int* __retval576;
  this575 = v573;
  struct std___List_node_int_* t577 = this575;
  int* r578 = __gnu_cxx____aligned_membuf_int____M_ptr(&t577->_M_storage);
  __retval576 = r578;
  int* t579 = __retval576;
  return t579;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb580:
  _Bool __retval581;
    _Bool c582 = 0;
    __retval581 = c582;
    _Bool t583 = __retval581;
    return t583;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v584, struct std___List_node_int_* v585, unsigned long v586) {
bb587:
  struct std____new_allocator_std___List_node_int__* this588;
  struct std___List_node_int_* __p589;
  unsigned long __n590;
  this588 = v584;
  __p589 = v585;
  __n590 = v586;
  struct std____new_allocator_std___List_node_int__* t591 = this588;
    unsigned long c592 = 8;
    unsigned long c593 = 16;
    _Bool c594 = ((c592 > c593)) ? 1 : 0;
    if (c594) {
      struct std___List_node_int_* t595 = __p589;
      void* cast596 = (void*)t595;
      unsigned long t597 = __n590;
      unsigned long c598 = 24;
      unsigned long b599 = t597 * c598;
      unsigned long c600 = 8;
      operator_delete_3(cast596, b599, c600);
      return;
    }
  struct std___List_node_int_* t601 = __p589;
  void* cast602 = (void*)t601;
  unsigned long t603 = __n590;
  unsigned long c604 = 24;
  unsigned long b605 = t603 * c604;
  operator_delete_2(cast602, b605);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v606, struct std___List_node_int_* v607, unsigned long v608) {
bb609:
  struct std__allocator_std___List_node_int__* this610;
  struct std___List_node_int_* __p611;
  unsigned long __n612;
  this610 = v606;
  __p611 = v607;
  __n612 = v608;
  struct std__allocator_std___List_node_int__* t613 = this610;
    _Bool r614 = std____is_constant_evaluated();
    if (r614) {
      struct std___List_node_int_* t615 = __p611;
      void* cast616 = (void*)t615;
      operator_delete(cast616);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base617 = (struct std____new_allocator_std___List_node_int__*)((char *)t613 + 0);
  struct std___List_node_int_* t618 = __p611;
  unsigned long t619 = __n612;
  std____new_allocator_std___List_node_int_____deallocate(base617, t618, t619);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v620, struct std___List_node_int_* v621, unsigned long v622) {
bb623:
  struct std__allocator_std___List_node_int__* __a624;
  struct std___List_node_int_* __p625;
  unsigned long __n626;
  __a624 = v620;
  __p625 = v621;
  __n626 = v622;
  struct std__allocator_std___List_node_int__* t627 = __a624;
  struct std___List_node_int_* t628 = __p625;
  unsigned long t629 = __n626;
  std__allocator_std___List_node_int_____deallocate(t627, t628, t629);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v630, struct std___List_node_int_* v631) {
bb632:
  struct std____cxx11___List_base_int__std__allocator_int__* this633;
  struct std___List_node_int_* __p634;
  this633 = v630;
  __p634 = v631;
  struct std____cxx11___List_base_int__std__allocator_int__* t635 = this633;
  struct std__allocator_std___List_node_int__* base636 = (struct std__allocator_std___List_node_int__*)((char *)&(t635->_M_impl) + 0);
  struct std___List_node_int_* t637 = __p634;
  unsigned long c638 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base636, t637, c638);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v639, struct std___List_node_int_* v640) {
bb641:
  struct std____cxx11___List_base_int__std__allocator_int__* this642;
  struct std___List_node_int_* __p643;
  this642 = v639;
  __p643 = v640;
  struct std____cxx11___List_base_int__std__allocator_int__* t644 = this642;
  struct std__allocator_std___List_node_int__* base645 = (struct std__allocator_std___List_node_int__*)((char *)&(t644->_M_impl) + 0);
  struct std___List_node_int_* t646 = __p643;
  int* r647 = std___List_node_int____M_valptr(t646);
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base645, r647);
  struct std___List_node_int_* t648 = __p643;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t644, t648);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v649) {
bb650:
  struct std___List_node_int_* this651;
  struct std___List_node_int_* __retval652;
  this651 = v649;
  struct std___List_node_int_* t653 = this651;
  __retval652 = t653;
  struct std___List_node_int_* t654 = __retval652;
  return t654;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v655) {
bb656:
  struct std____cxx11___List_base_int__std__allocator_int__* this657;
  struct std____detail___List_node_base* __cur658;
  this657 = v655;
  struct std____cxx11___List_base_int__std__allocator_int__* t659 = this657;
  struct std____detail___List_node_base* base660 = (struct std____detail___List_node_base*)((char *)&(t659->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t661 = base660->_M_next;
  __cur658 = t661;
    while (1) {
      struct std____detail___List_node_base* t662 = __cur658;
      struct std____detail___List_node_base* r663 = std____detail___List_node_header___M_base(&t659->_M_impl._M_node);
      _Bool c664 = ((t662 != r663)) ? 1 : 0;
      if (!c664) break;
        struct std___List_node_int_* __tmp665;
        struct std____detail___List_node_base* t666 = __cur658;
        struct std___List_node_int_* derived667 = (struct std___List_node_int_*)((char *)t666 - 0);
        __tmp665 = derived667;
        struct std___List_node_int_* t668 = __tmp665;
        struct std____detail___List_node_base* base669 = (struct std____detail___List_node_base*)((char *)t668 + 0);
        struct std____detail___List_node_base* t670 = base669->_M_next;
        __cur658 = t670;
        struct std___List_node_int_* t671 = __tmp665;
        struct std___List_node_int_* r672 = std___List_node_int____M_node_ptr(t671);
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t659, r672);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v673) {
bb674:
  struct std____cxx11___List_base_int__std__allocator_int__* this675;
  this675 = v673;
  struct std____cxx11___List_base_int__std__allocator_int__* t676 = this675;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t676);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t676->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v677) {
bb678:
  struct std____new_allocator_std___List_node_int__* this679;
  this679 = v677;
  struct std____new_allocator_std___List_node_int__* t680 = this679;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2Ev
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v681) {
bb682:
  struct std__allocator_std___List_node_int__* this683;
  this683 = v681;
  struct std__allocator_std___List_node_int__* t684 = this683;
  struct std____new_allocator_std___List_node_int__* base685 = (struct std____new_allocator_std___List_node_int__*)((char *)t684 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base685);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v686) {
bb687:
  struct std____detail___List_node_header* this688;
  this688 = v686;
  struct std____detail___List_node_header* t689 = this688;
  struct std____detail___List_node_base* base690 = (struct std____detail___List_node_base*)((char *)t689 + 0);
  struct std____detail___List_size* base691 = (struct std____detail___List_size*)((char *)t689 + 16);
  std____detail___List_node_header___M_init(t689);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v692) {
bb693:
  struct std__allocator_std___List_node_int__* this694;
  this694 = v692;
  struct std__allocator_std___List_node_int__* t695 = this694;
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v696, struct std____detail___List_size* v697) {
bb698:
  struct std____detail___List_size* this699;
  struct std____detail___List_size* unnamed700;
  struct std____detail___List_size* __retval701;
  this699 = v696;
  unnamed700 = v697;
  struct std____detail___List_size* t702 = this699;
  struct std____detail___List_size* t703 = unnamed700;
  unsigned long t704 = t703->_M_size;
  t702->_M_size = t704;
  __retval701 = t702;
  struct std____detail___List_size* t705 = __retval701;
  return t705;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v706) {
bb707:
  struct std____detail___List_node_header* this708;
  struct std____detail___List_size ref_tmp0709;
  this708 = v706;
  struct std____detail___List_node_header* t710 = this708;
  struct std____detail___List_node_base* base711 = (struct std____detail___List_node_base*)((char *)t710 + 0);
  struct std____detail___List_node_base* base712 = (struct std____detail___List_node_base*)((char *)t710 + 0);
  base712->_M_prev = base711;
  struct std____detail___List_node_base* base713 = (struct std____detail___List_node_base*)((char *)t710 + 0);
  base713->_M_next = base711;
  struct std____detail___List_size* base714 = (struct std____detail___List_size*)((char *)t710 + 16);
  ref_tmp0709 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r715 = std____detail___List_size__operator_(base714, &ref_tmp0709);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v716, struct std____allocated_ptr_std__allocator_std___List_node_int___* v717) {
bb718:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this719;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd720;
  this719 = v716;
  __gd720 = v717;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t721 = this719;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t722 = __gd720;
  struct std__allocator_std___List_node_int__* t723 = t722->_M_alloc;
  t721->_M_alloc = t723;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t724 = __gd720;
  struct std___List_node_int_* t725 = t724->_M_ptr;
  t721->_M_ptr = t725;
  struct std___List_node_int_* c726 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t727 = __gd720;
  t727->_M_ptr = c726;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v728) {
bb729:
  struct std___List_node_int_* __ptr730;
  struct std___List_node_int_* __retval731;
  __ptr730 = v728;
  struct std___List_node_int_* t732 = __ptr730;
  __retval731 = t732;
  struct std___List_node_int_* t733 = __retval731;
  return t733;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v734) {
bb735:
  struct std___List_node_int_** __ptr736;
  struct std___List_node_int_* __retval737;
  __ptr736 = v734;
  struct std___List_node_int_** t738 = __ptr736;
  struct std___List_node_int_* t739 = *t738;
  struct std___List_node_int_* r740 = std___List_node_int___std__to_address_std___List_node_int___(t739);
  __retval737 = r740;
  struct std___List_node_int_* t741 = __retval737;
  return t741;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v742) {
bb743:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this744;
  struct std___List_node_int_* __retval745;
  this744 = v742;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t746 = this744;
  struct std___List_node_int_* r747 = auto_std____to_address_std___List_node_int___(&t746->_M_ptr);
  __retval745 = r747;
  struct std___List_node_int_* t748 = __retval745;
  return t748;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v749) {
bb750:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this751;
  _Bool __retval752;
  this751 = v749;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t753 = this751;
  struct std___List_node_int_* t754 = t753->_M_ptr;
  _Bool cast755 = (_Bool)t754;
  __retval752 = cast755;
  _Bool t756 = __retval752;
  return t756;
}

