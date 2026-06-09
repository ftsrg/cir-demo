extern void abort(void);
// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct anon_struct_0 { unsigned char* __field0[5]; unsigned char* __field1[5]; unsigned char* __field2[5]; };
struct anon_struct_1 { unsigned char* __field0[4]; };
struct anon_struct_2 { unsigned char* __field0[16]; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* _M_in_beg; char* _M_in_cur; char* _M_in_end; char* _M_out_beg; char* _M_out_cur; char* _M_out_end; struct std__locale _M_buf_locale; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; int _M_mode; struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ _M_string; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_iostream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_ostream_char__std__char_traits_char__ __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__ { struct std__basic_iostream_char__std__char_traits_char__ __field0; struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__ _M_stringbuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
extern void *_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
extern void std__ios_base__ios_base(struct std__ios_base* p0);
void std__ios_base___ios_base(struct std__ios_base* p0) {}
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
void std__basic_iostream_char__std__char_traits_char_____basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* p0, void** p1);
int std__operator_(int p0, int p1);
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* p0, int p1);
extern void std__basic_ios_char__std__char_traits_char_____init(struct std__basic_ios_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* p0);
void std__basic_iostream_char__std__char_traits_char______basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_void_const__(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* p0, void** p1);
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* p0);
int main();
extern void std__locale__locale(struct std__locale* p0);
void std__locale___locale(struct std__locale* p0) {}
void std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std____is_constant_evaluated();
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign(char* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);

extern unsigned char* _ZTTNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[10] __attribute__((aligned(8)));

// function: _ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* v0) {
bb1:
  struct std__basic_ios_char__std__char_traits_char__* this2;
  this2 = v0;
  struct std__basic_ios_char__std__char_traits_char__* t3 = this2;
  struct std__ios_base* base4 = (struct std__ios_base*)((char *)t3 + 0);
  std__ios_base__ios_base(base4);
    void* v5 = (void*)&_ZTVSt9basic_iosIcSt11char_traitsIcEE[2];
    void** v6 = (void**)t3;
    *(void**)(v6) = (void*)v5;
    struct std__basic_ostream_char__std__char_traits_char__* c7 = ((void*)0);
    t3->_M_tie = c7;
    char c8 = 0;
    t3->_M_fill = c8;
    _Bool c9 = 0;
    t3->_M_fill_init = c9;
    struct std__basic_streambuf_char__std__char_traits_char__* c10 = ((void*)0);
    t3->_M_streambuf = c10;
    struct std__ctype_char_* c11 = ((void*)0);
    t3->_M_ctype = c11;
    struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* c12 = ((void*)0);
    t3->_M_num_put = c12;
    struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* c13 = ((void*)0);
    t3->_M_num_get = c13;
  return;
}

// function: _ZNSiC2Ev
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* v14, void** v15) {
bb16:
  struct std__basic_istream_char__std__char_traits_char__* this17;
  void** vtt18;
  this17 = v14;
  vtt18 = v15;
  struct std__basic_istream_char__std__char_traits_char__* t19 = this17;
  void** t20 = vtt18;
  static void *vtt_slot21 = 0;
  void** vtt22 = (void**)&vtt_slot21;
  void** cast23 = (void**)vtt22;
  void* t24 = *cast23;
  void** v25 = (void**)t19;
  *(void**)(v25) = (void*)t24;
  static void *vtt_slot26 = 0;
  void** vtt27 = (void**)&vtt_slot26;
  void** cast28 = (void**)vtt27;
  void* t29 = *cast28;
  void** v30 = (void**)t19;
  void* v31 = *((void**)v30);
  unsigned char* cast32 = (unsigned char*)v31;
  long c33 = -24;
  unsigned char* ptr34 = &(cast32)[c33];
  long* cast35 = (long*)ptr34;
  long t36 = *cast35;
  unsigned char* cast37 = (unsigned char*)t19;
  unsigned char* ptr38 = &(cast37)[t36];
  struct std__basic_istream_char__std__char_traits_char__* cast39 = (struct std__basic_istream_char__std__char_traits_char__*)ptr38;
  void** v40 = (void**)cast39;
  *(void**)(v40) = (void*)t29;
  long c41 = 0;
  t19->_M_gcount = c41;
  void** v42 = (void**)t19;
  void* v43 = *((void**)v42);
  unsigned char* cast44 = (unsigned char*)v43;
  long c45 = -24;
  unsigned char* ptr46 = &(cast44)[c45];
  long* cast47 = (long*)ptr46;
  long t48 = *cast47;
  unsigned char* cast49 = (unsigned char*)t19;
  unsigned char* ptr50 = &(cast49)[t48];
  struct std__basic_istream_char__std__char_traits_char__* cast51 = (struct std__basic_istream_char__std__char_traits_char__*)ptr50;
  struct std__basic_ios_char__std__char_traits_char__* cast52 = (struct std__basic_ios_char__std__char_traits_char__*)cast51;
  struct std__basic_streambuf_char__std__char_traits_char__* c53 = ((void*)0);
  std__basic_ios_char__std__char_traits_char_____init(cast52, c53);
  return;
}

// function: _ZNSoC2Ev
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v54, void** v55) {
bb56:
  struct std__basic_ostream_char__std__char_traits_char__* this57;
  void** vtt58;
  this57 = v54;
  vtt58 = v55;
  struct std__basic_ostream_char__std__char_traits_char__* t59 = this57;
  void** t60 = vtt58;
  static void *vtt_slot61 = 0;
  void** vtt62 = (void**)&vtt_slot61;
  void** cast63 = (void**)vtt62;
  void* t64 = *cast63;
  void** v65 = (void**)t59;
  *(void**)(v65) = (void*)t64;
  static void *vtt_slot66 = 0;
  void** vtt67 = (void**)&vtt_slot66;
  void** cast68 = (void**)vtt67;
  void* t69 = *cast68;
  void** v70 = (void**)t59;
  void* v71 = *((void**)v70);
  unsigned char* cast72 = (unsigned char*)v71;
  long c73 = -24;
  unsigned char* ptr74 = &(cast72)[c73];
  long* cast75 = (long*)ptr74;
  long t76 = *cast75;
  unsigned char* cast77 = (unsigned char*)t59;
  unsigned char* ptr78 = &(cast77)[t76];
  struct std__basic_ostream_char__std__char_traits_char__* cast79 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr78;
  void** v80 = (void**)cast79;
  *(void**)(v80) = (void*)t69;
  void** v81 = (void**)t59;
  void* v82 = *((void**)v81);
  unsigned char* cast83 = (unsigned char*)v82;
  long c84 = -24;
  unsigned char* ptr85 = &(cast83)[c84];
  long* cast86 = (long*)ptr85;
  long t87 = *cast86;
  unsigned char* cast88 = (unsigned char*)t59;
  unsigned char* ptr89 = &(cast88)[t87];
  struct std__basic_ostream_char__std__char_traits_char__* cast90 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr89;
  struct std__basic_ios_char__std__char_traits_char__* cast91 = (struct std__basic_ios_char__std__char_traits_char__*)cast90;
  struct std__basic_streambuf_char__std__char_traits_char__* c92 = ((void*)0);
  std__basic_ios_char__std__char_traits_char_____init(cast91, c92);
  return;
}

// function: _ZNSoD2Ev
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v93, void** v94) {
bb95:
  struct std__basic_ostream_char__std__char_traits_char__* this96;
  void** vtt97;
  this96 = v93;
  vtt97 = v94;
  struct std__basic_ostream_char__std__char_traits_char__* t98 = this96;
  void** t99 = vtt97;
  return;
}

// function: _ZNSiD2Ev
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* v100, void** v101) {
bb102:
  struct std__basic_istream_char__std__char_traits_char__* this103;
  void** vtt104;
  this103 = v100;
  vtt104 = v101;
  struct std__basic_istream_char__std__char_traits_char__* t105 = this103;
  void** t106 = vtt104;
  long c107 = 0;
  t105->_M_gcount = c107;
  return;
}

// function: _ZNSdC2Ev
void std__basic_iostream_char__std__char_traits_char_____basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* v108, void** v109) {
bb110:
  struct std__basic_iostream_char__std__char_traits_char__* this111;
  void** vtt112;
  this111 = v108;
  vtt112 = v109;
  struct std__basic_iostream_char__std__char_traits_char__* t113 = this111;
  void** t114 = vtt112;
  struct std__basic_istream_char__std__char_traits_char__* base115 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t113 + 0);
  static void *vtt_slot116 = 0;
  void** vtt117 = (void**)&vtt_slot116;
  std__basic_istream_char__std__char_traits_char_____basic_istream(base115, vtt117);
    struct std__basic_ostream_char__std__char_traits_char__* base118 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t113 + 16);
    static void *vtt_slot119 = 0;
    void** vtt120 = (void**)&vtt_slot119;
    std__basic_ostream_char__std__char_traits_char_____basic_ostream(base118, vtt120);
      static void *vtt_slot121 = 0;
      void** vtt122 = (void**)&vtt_slot121;
      void** cast123 = (void**)vtt122;
      void* t124 = *cast123;
      void** v125 = (void**)t113;
      *(void**)(v125) = (void*)t124;
      static void *vtt_slot126 = 0;
      void** vtt127 = (void**)&vtt_slot126;
      void** cast128 = (void**)vtt127;
      void* t129 = *cast128;
      void** v130 = (void**)t113;
      void* v131 = *((void**)v130);
      unsigned char* cast132 = (unsigned char*)v131;
      long c133 = -24;
      unsigned char* ptr134 = &(cast132)[c133];
      long* cast135 = (long*)ptr134;
      long t136 = *cast135;
      unsigned char* cast137 = (unsigned char*)t113;
      unsigned char* ptr138 = &(cast137)[t136];
      struct std__basic_iostream_char__std__char_traits_char__* cast139 = (struct std__basic_iostream_char__std__char_traits_char__*)ptr138;
      void** v140 = (void**)cast139;
      *(void**)(v140) = (void*)t129;
      static void *vtt_slot141 = 0;
      void** vtt142 = (void**)&vtt_slot141;
      void** cast143 = (void**)vtt142;
      void* t144 = *cast143;
      struct std__basic_ostream_char__std__char_traits_char__* base145 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t113 + 16);
      void** v146 = (void**)base145;
      *(void**)(v146) = (void*)t144;
  return;
}

// function: _ZStorSt13_Ios_OpenmodeS_
int std__operator_(int v147, int v148) {
bb149:
  int __a150;
  int __b151;
  int __retval152;
  __a150 = v147;
  __b151 = v148;
  int t153 = __a150;
  int t154 = __b151;
  int b155 = t153 | t154;
  __retval152 = b155;
  int t156 = __retval152;
  return t156;
}

// function: _ZNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEC2ESt13_Ios_Openmode
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v157, int v158) {
bb159:
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this160;
  int __mode161;
  this160 = v157;
  __mode161 = v158;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t162 = this160;
  struct std__basic_streambuf_char__std__char_traits_char__* base163 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t162 + 0);
  std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(base163);
    void* v164 = (void*)&_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[2];
    void** v165 = (void**)t162;
    *(void**)(v165) = (void*)v164;
    int t166 = __mode161;
    t162->_M_mode = t166;
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&t162->_M_string);
  return;
}

// function: _ZNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v167) {
bb168:
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this169;
  this169 = v167;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t170 = this169;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&t170->_M_string);
    }
  {
    struct std__basic_streambuf_char__std__char_traits_char__* base171 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t170 + 0);
    std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base171);
  }
  return;
}

// function: _ZNSdD2Ev
void std__basic_iostream_char__std__char_traits_char______basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* v172, void** v173) {
bb174:
  struct std__basic_iostream_char__std__char_traits_char__* this175;
  void** vtt176;
  this175 = v172;
  vtt176 = v173;
  struct std__basic_iostream_char__std__char_traits_char__* t177 = this175;
  void** t178 = vtt176;
    {
      struct std__basic_ostream_char__std__char_traits_char__* base179 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t177 + 16);
      static void *vtt_slot180 = 0;
      void** vtt181 = (void**)&vtt_slot180;
      std__basic_ostream_char__std__char_traits_char______basic_ostream(base179, vtt181);
    }
  {
    struct std__basic_istream_char__std__char_traits_char__* base182 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t177 + 0);
    static void *vtt_slot183 = 0;
    void** vtt184 = (void**)&vtt_slot183;
    std__basic_istream_char__std__char_traits_char______basic_istream(base182, vtt184);
  }
  return;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* v185) {
bb186:
  struct std__basic_ios_char__std__char_traits_char__* this187;
  this187 = v185;
  struct std__basic_ios_char__std__char_traits_char__* t188 = this187;
  {
    struct std__ios_base* base189 = (struct std__ios_base*)((char *)t188 + 0);
    std__ios_base___ios_base(base189);
  }
  return;
}

// function: _ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEC1Ev
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v190) {
bb191:
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this192;
  this192 = v190;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t193 = this192;
  struct std__basic_ios_char__std__char_traits_char__* base194 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t193 + 128);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base194);
    struct std__basic_iostream_char__std__char_traits_char__* base195 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t193 + 0);
    static void *vtt_slot196 = 0;
    void** vtt197 = (void**)&vtt_slot196;
    std__basic_iostream_char__std__char_traits_char_____basic_iostream(base195, vtt197);
      void* v198 = (void*)&_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[3];
      void** v199 = (void**)t193;
      *(void**)(v199) = (void*)v198;
      void* v200 = (void*)&_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base201 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t193 + 128);
      void** v202 = (void**)base201;
      *(void**)(v202) = (void*)v200;
      void* v203 = (void*)&_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[3];
      struct std__basic_ostream_char__std__char_traits_char__* base204 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t193 + 16);
      void** v205 = (void**)base204;
      *(void**)(v205) = (void*)v203;
      int t206 = _ZNSt8ios_base3outE_const;
      int t207 = _ZNSt8ios_base2inE_const;
      int r208 = std__operator_(t206, t207);
      std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____basic_stringbuf(&t193->_M_stringbuf, r208);
        void** v209 = (void**)t193;
        void* v210 = *((void**)v209);
        unsigned char* cast211 = (unsigned char*)v210;
        long c212 = -24;
        unsigned char* ptr213 = &(cast211)[c212];
        long* cast214 = (long*)ptr213;
        long t215 = *cast214;
        unsigned char* cast216 = (unsigned char*)t193;
        unsigned char* ptr217 = &(cast216)[t215];
        struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* cast218 = (struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__*)ptr217;
        struct std__basic_ios_char__std__char_traits_char__* cast219 = (struct std__basic_ios_char__std__char_traits_char__*)cast218;
        struct std__basic_streambuf_char__std__char_traits_char__* base220 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t193->_M_stringbuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast219, base220);
  return;
}

// function: _ZNSolsEPKv
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v221, void* v222) {
bb223:
  struct std__basic_ostream_char__std__char_traits_char__* this224;
  void* __p225;
  struct std__basic_ostream_char__std__char_traits_char__* __retval226;
  this224 = v221;
  __p225 = v222;
  struct std__basic_ostream_char__std__char_traits_char__* t227 = this224;
  void* t228 = __p225;
  struct std__basic_ostream_char__std__char_traits_char__* r229 = std__ostream__std__ostream___M_insert_void_const__(t227, t228);
  __retval226 = r229;
  struct std__basic_ostream_char__std__char_traits_char__* t230 = __retval226;
  return t230;
}

// function: _ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v231, void** v232) {
bb233:
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this234;
  void** vtt235;
  this234 = v231;
  vtt235 = v232;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t236 = this234;
  void** t237 = vtt235;
    {
      std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(&t236->_M_stringbuf);
    }
  {
    struct std__basic_iostream_char__std__char_traits_char__* base238 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t236 + 0);
    static void *vtt_slot239 = 0;
    void** vtt240 = (void**)&vtt_slot239;
    std__basic_iostream_char__std__char_traits_char______basic_iostream(base238, vtt240);
  }
  return;
}

// function: _ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEED1Ev
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v241) {
bb242:
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this243;
  this243 = v241;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t244 = this243;
    static void *vtt_slot245 = 0;
    void** vtt246 = (void**)&vtt_slot245;
    std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(t244, vtt246);
  {
    struct std__basic_ios_char__std__char_traits_char__* base247 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t244 + 128);
    std__basic_ios_char__std__char_traits_char______basic_ios(base247);
  }
  return;
}

// function: main
int main() {
bb248:
  int __retval249;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__ oss250;
  void* val251;
  int c252 = 0;
  __retval249 = c252;
  std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____basic_stringstream(&oss250);
    struct std__basic_ostream_char__std__char_traits_char__* base253 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(oss250) + 16);
    void* t254 = val251;
    struct std__basic_ostream_char__std__char_traits_char__* r255 = std__ostream__operator__(base253, t254);
    int c256 = 0;
    __retval249 = c256;
    int t257 = __retval249;
    int ret_val258 = t257;
    {
      std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(&oss250);
    }
    return ret_val258;
  int t259 = __retval249;
  return t259;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEEC2Ev
void std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v260) {
bb261:
  struct std__basic_streambuf_char__std__char_traits_char__* this262;
  this262 = v260;
  struct std__basic_streambuf_char__std__char_traits_char__* t263 = this262;
  void* v264 = (void*)&_ZTVSt15basic_streambufIcSt11char_traitsIcEE[2];
  void** v265 = (void**)t263;
  *(void**)(v265) = (void*)v264;
  char* c266 = ((void*)0);
  t263->_M_in_beg = c266;
  char* c267 = ((void*)0);
  t263->_M_in_cur = c267;
  char* c268 = ((void*)0);
  t263->_M_in_end = c268;
  char* c269 = ((void*)0);
  t263->_M_out_beg = c269;
  char* c270 = ((void*)0);
  t263->_M_out_cur = c270;
  char* c271 = ((void*)0);
  t263->_M_out_end = c271;
  std__locale__locale(&t263->_M_buf_locale);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v272) {
bb273:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this274;
  struct std__allocator_char_ ref_tmp0275;
  this274 = v272;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t276 = this274;
  char* r277 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t276);
  std__allocator_char___allocator_2(&ref_tmp0275);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t276->_M_dataplus, r277, &ref_tmp0275);
  {
    std__allocator_char____allocator(&ref_tmp0275);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t276);
    unsigned long c278 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t276, c278);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v279) {
bb280:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this281;
  this281 = v279;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t282 = this281;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t282);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t282->_M_dataplus);
  }
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v283) {
bb284:
  struct std__basic_streambuf_char__std__char_traits_char__* this285;
  this285 = v283;
  struct std__basic_streambuf_char__std__char_traits_char__* t286 = this285;
  {
    std__locale___locale(&t286->_M_buf_locale);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v287) {
bb288:
  char* __r289;
  char* __retval290;
  __r289 = v287;
  char* t291 = __r289;
  __retval290 = t291;
  char* t292 = __retval290;
  return t292;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v293) {
bb294:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this295;
  char* __retval296;
  this295 = v293;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t297 = this295;
  char* cast298 = (char*)&(t297->field2._M_local_buf);
  char* r299 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast298);
  __retval296 = r299;
  char* t300 = __retval296;
  return t300;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v301) {
bb302:
  struct std__allocator_char_* this303;
  this303 = v301;
  struct std__allocator_char_* t304 = this303;
  struct std____new_allocator_char_* base305 = (struct std____new_allocator_char_*)((char *)t304 + 0);
  std____new_allocator_char_____new_allocator_2(base305);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v306, char* v307, struct std__allocator_char_* v308) {
bb309:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this310;
  char* __dat311;
  struct std__allocator_char_* __a312;
  this310 = v306;
  __dat311 = v307;
  __a312 = v308;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t313 = this310;
  struct std__allocator_char_* base314 = (struct std__allocator_char_*)((char *)t313 + 0);
  struct std__allocator_char_* t315 = __a312;
  std__allocator_char___allocator(base314, t315);
    char* t316 = __dat311;
    t313->_M_p = t316;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v317) {
bb318:
  struct std__allocator_char_* this319;
  this319 = v317;
  struct std__allocator_char_* t320 = this319;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb321:
  _Bool __retval322;
    _Bool c323 = 0;
    __retval322 = c323;
    _Bool t324 = __retval322;
    return t324;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v325) {
bb326:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this327;
  this327 = v325;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t328 = this327;
    _Bool r329 = std__is_constant_evaluated();
    if (r329) {
        unsigned long __i330;
        unsigned long c331 = 0;
        __i330 = c331;
        while (1) {
          unsigned long t333 = __i330;
          unsigned long c334 = 15;
          _Bool c335 = ((t333 <= c334)) ? 1 : 0;
          if (!c335) break;
          char c336 = 0;
          unsigned long t337 = __i330;
          t328->field2._M_local_buf[t337] = c336;
        for_step332: ;
          unsigned long t338 = __i330;
          unsigned long u339 = t338 + 1;
          __i330 = u339;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v340, unsigned long v341) {
bb342:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this343;
  unsigned long __length344;
  this343 = v340;
  __length344 = v341;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t345 = this343;
  unsigned long t346 = __length344;
  t345->_M_string_length = t346;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb347:
  _Bool __retval348;
    _Bool c349 = 0;
    __retval348 = c349;
    _Bool t350 = __retval348;
    return t350;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v351, char* v352) {
bb353:
  char* __location354;
  char* __args355;
  char* __retval356;
  void* __loc357;
  __location354 = v351;
  __args355 = v352;
  char* t358 = __location354;
  void* cast359 = (void*)t358;
  __loc357 = cast359;
    void* t360 = __loc357;
    char* cast361 = (char*)t360;
    char* t362 = __args355;
    char t363 = *t362;
    *cast361 = t363;
    __retval356 = cast361;
    char* t364 = __retval356;
    return t364;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v365, char* v366) {
bb367:
  char* __c1368;
  char* __c2369;
  __c1368 = v365;
  __c2369 = v366;
    _Bool r370 = std____is_constant_evaluated();
    if (r370) {
      char* t371 = __c1368;
      char* t372 = __c2369;
      char* r373 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t371, t372);
    } else {
      char* t374 = __c2369;
      char t375 = *t374;
      char* t376 = __c1368;
      *t376 = t375;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v377) {
bb378:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this379;
  char* __retval380;
  this379 = v377;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t381 = this379;
  char* t382 = t381->_M_dataplus._M_p;
  __retval380 = t382;
  char* t383 = __retval380;
  return t383;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v384, unsigned long v385) {
bb386:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this387;
  unsigned long __n388;
  char ref_tmp0389;
  this387 = v384;
  __n388 = v385;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t390 = this387;
  unsigned long t391 = __n388;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t390, t391);
  unsigned long t392 = __n388;
  char* r393 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t390);
  char* ptr394 = &(r393)[t392];
  char c395 = 0;
  ref_tmp0389 = c395;
  std__char_traits_char___assign(ptr394, &ref_tmp0389);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v396) {
bb397:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this398;
  this398 = v396;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t399 = this398;
  {
    struct std__allocator_char_* base400 = (struct std__allocator_char_*)((char *)t399 + 0);
    std__allocator_char____allocator(base400);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v401) {
bb402:
  struct std____new_allocator_char_* this403;
  this403 = v401;
  struct std____new_allocator_char_* t404 = this403;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v405, struct std____new_allocator_char_* v406) {
bb407:
  struct std____new_allocator_char_* this408;
  struct std____new_allocator_char_* unnamed409;
  this408 = v405;
  unnamed409 = v406;
  struct std____new_allocator_char_* t410 = this408;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v411, struct std__allocator_char_* v412) {
bb413:
  struct std__allocator_char_* this414;
  struct std__allocator_char_* __a415;
  this414 = v411;
  __a415 = v412;
  struct std__allocator_char_* t416 = this414;
  struct std____new_allocator_char_* base417 = (struct std____new_allocator_char_*)((char *)t416 + 0);
  struct std__allocator_char_* t418 = __a415;
  struct std____new_allocator_char_* base419 = (struct std____new_allocator_char_*)((char *)t418 + 0);
  std____new_allocator_char_____new_allocator(base417, base419);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v420) {
bb421:
  char* __r422;
  char* __retval423;
  __r422 = v420;
  char* t424 = __r422;
  __retval423 = t424;
  char* t425 = __retval423;
  return t425;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v426) {
bb427:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this428;
  char* __retval429;
  this428 = v426;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t430 = this428;
  char* cast431 = (char*)&(t430->field2._M_local_buf);
  char* r432 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast431);
  __retval429 = r432;
  char* t433 = __retval429;
  return t433;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v434) {
bb435:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this436;
  _Bool __retval437;
  this436 = v434;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t438 = this436;
    char* r439 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t438);
    char* r440 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t438);
    _Bool c441 = ((r439 == r440)) ? 1 : 0;
    if (c441) {
        unsigned long t442 = t438->_M_string_length;
        unsigned long c443 = 15;
        _Bool c444 = ((t442 > c443)) ? 1 : 0;
        if (c444) {
          __builtin_unreachable();
        }
      _Bool c445 = 1;
      __retval437 = c445;
      _Bool t446 = __retval437;
      return t446;
    }
  _Bool c447 = 0;
  __retval437 = c447;
  _Bool t448 = __retval437;
  return t448;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v449, char* v450, unsigned long v451) {
bb452:
  struct std____new_allocator_char_* this453;
  char* __p454;
  unsigned long __n455;
  this453 = v449;
  __p454 = v450;
  __n455 = v451;
  struct std____new_allocator_char_* t456 = this453;
    unsigned long c457 = 1;
    unsigned long c458 = 16;
    _Bool c459 = ((c457 > c458)) ? 1 : 0;
    if (c459) {
      char* t460 = __p454;
      void* cast461 = (void*)t460;
      unsigned long t462 = __n455;
      unsigned long c463 = 1;
      unsigned long b464 = t462 * c463;
      unsigned long c465 = 1;
      operator_delete_3(cast461, b464, c465);
      return;
    }
  char* t466 = __p454;
  void* cast467 = (void*)t466;
  unsigned long t468 = __n455;
  unsigned long c469 = 1;
  unsigned long b470 = t468 * c469;
  operator_delete_2(cast467, b470);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v471, char* v472, unsigned long v473) {
bb474:
  struct std__allocator_char_* this475;
  char* __p476;
  unsigned long __n477;
  this475 = v471;
  __p476 = v472;
  __n477 = v473;
  struct std__allocator_char_* t478 = this475;
    _Bool r479 = std____is_constant_evaluated();
    if (r479) {
      char* t480 = __p476;
      void* cast481 = (void*)t480;
      operator_delete(cast481);
      return;
    }
  struct std____new_allocator_char_* base482 = (struct std____new_allocator_char_*)((char *)t478 + 0);
  char* t483 = __p476;
  unsigned long t484 = __n477;
  std____new_allocator_char___deallocate(base482, t483, t484);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v485, char* v486, unsigned long v487) {
bb488:
  struct std__allocator_char_* __a489;
  char* __p490;
  unsigned long __n491;
  __a489 = v485;
  __p490 = v486;
  __n491 = v487;
  struct std__allocator_char_* t492 = __a489;
  char* t493 = __p490;
  unsigned long t494 = __n491;
  std__allocator_char___deallocate(t492, t493, t494);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v495) {
bb496:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this497;
  struct std__allocator_char_* __retval498;
  this497 = v495;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t499 = this497;
  struct std__allocator_char_* base500 = (struct std__allocator_char_*)((char *)&(t499->_M_dataplus) + 0);
  __retval498 = base500;
  struct std__allocator_char_* t501 = __retval498;
  return t501;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v502, unsigned long v503) {
bb504:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this505;
  unsigned long __size506;
  this505 = v502;
  __size506 = v503;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t507 = this505;
  struct std__allocator_char_* r508 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t507);
  char* r509 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t507);
  unsigned long t510 = __size506;
  unsigned long c511 = 1;
  unsigned long b512 = t510 + c511;
  std__allocator_traits_std__allocator_char_____deallocate(r508, r509, b512);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v513) {
bb514:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this515;
  this515 = v513;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t516 = this515;
    _Bool r517 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t516);
    _Bool u518 = !r517;
    if (u518) {
      unsigned long t519 = t516->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t516, t519);
    }
  return;
}

