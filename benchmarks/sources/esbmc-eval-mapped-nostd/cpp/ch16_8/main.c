extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct _IO_FILE { int __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; char* __field7; char* __field8; char* __field9; char* __field10; char* __field11; struct _IO_marker* __field12; struct _IO_FILE* __field13; int __field14; unsigned char __field15[3]; char __field16[1]; long __field17; unsigned short __field18; char __field19; char __field20[1]; void* __field21; long __field22; struct _IO_codecvt* __field23; struct _IO_wide_data* __field24; struct _IO_FILE* __field25; void* __field26; struct _IO_FILE** __field27; int __field28; int __field29; unsigned long __field30; char __field31[8]; };
struct _IO_codecvt { unsigned char __placeholder; };
struct _IO_marker { unsigned char __placeholder; };
struct _IO_wide_data { unsigned char __placeholder; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct __pthread_internal_list { struct __pthread_internal_list* __field0; struct __pthread_internal_list* __field1; };
struct __pthread_mutex_s { int __field0; unsigned int __field1; int __field2; unsigned int __field3; int __field4; short __field5; short __field6; struct __pthread_internal_list __field7; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
union anon_1 { unsigned int __field0; char __field1[4]; };
struct anon_struct_0 { unsigned char* __field0[5]; unsigned char* __field1[5]; };
struct anon_struct_1 { unsigned char* __field0[4]; };
union pthread_mutex_t { struct __pthread_mutex_s __field0; char __field1[40]; long __field2; };
struct std____basic_file_char_ { struct _IO_FILE* __field0; _Bool __field1; unsigned char __field2[7]; } __attribute__((packed));
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
struct __mbstate_t { int __field0; union anon_1 __field1; };
struct std____codecvt_abstract_base_char__char____mbstate_t_ { struct std__locale__facet __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale _M_buf_locale; };
struct std__codecvt_char__char____mbstate_t_ { struct std____codecvt_abstract_base_char__char____mbstate_t_ __field0; struct __locale_struct* __field1; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_ofstream_char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
char __const_main_postString[1024];
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base3appE_const __attribute__((aligned(4))) = 1;
char _str[1];
char _str_1[15] = "CONTENT_LENGTH";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_2[2] = "+";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_3[2] = " ";
char _str_4[11] = "firstname=";
char _str_5[10] = "&lastname";
char _str_6[10] = "lastname=";
char _str_7[9] = "&address";
char _str_8[9] = "address=";
char _str_9[6] = "&town";
char _str_10[6] = "town=";
char _str_11[7] = "&state";
char _str_12[7] = "state=";
char _str_13[9] = "&zipcode";
char _str_14[9] = "zipcode=";
char _str_15[9] = "&country";
char _str_16[9] = "country=";
char _str_17[7] = "&email";
char _str_18[7] = "email=";
char _str_19[8] = "&submit";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_20[26] = "Content-type: text/html\n\n";
char _str_21[24] = "<?xml version = \"1.0\"?>";
char _str_22[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_23[47] = "Transitional//EN\" \"http://www.w3.org/TR/xhtml1";
char _str_24[31] = "/DTD/xhtml1-transitional.dtd\">";
char _str_25[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_26[41] = "<head><title>Contact Information entered";
char _str_27[22] = "</title></head><body>";
char _str_28[12] = "clients.txt";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str_29[36] = "Error: could not open contact file.";
char _str_30[2] = "\n";
char _str_31[3] = "\n\n";
char _str_32[15] = "<table><tbody>";
char _str_33[29] = "<tr><td>First Name:</td><td>";
char _str_34[11] = "</td></tr>";
char _str_35[28] = "<tr><td>Last Name:</td><td>";
char _str_36[26] = "<tr><td>Address:</td><td>";
char _str_37[23] = "<tr><td>Town:</td><td>";
char _str_38[24] = "<tr><td>State:</td><td>";
char _str_39[27] = "<tr><td>Zip Code:</td><td>";
char _str_40[26] = "<tr><td>Country:</td><td>";
char _str_41[24] = "<tr><td>Email:</td><td>";
char _str_42[17] = "</tbody></table>";
char _str_43[17] = "</body>\n</html>\n";
char _str_44[50] = "basic_string: construction from null is not valid";
char _str_45[24] = "basic_string::_M_create";
char _str_46[25] = "basic_string::_M_replace";
char _str_47[22] = "basic_string::replace";
char _str_48[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_49[21] = "basic_string::substr";
char _str_50[27] = "basic_string::basic_string";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
extern char* getenv(char* p0);
extern int atoi(char* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__read(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
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
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* __gnu_cxx__char_traits_char___find(char* p0, unsigned long p1, char* p2);
char* std__char_traits_char___find(char* p0, unsigned long p1, char* p2);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, unsigned long p2, unsigned long p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__2(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern void std__ios_base__ios_base(struct std__ios_base* p0);
void std__ios_base___ios_base(struct std__ios_base* p0) {}
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
extern void std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____init(struct std__basic_ios_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____open(struct std__basic_filebuf_char__std__char_traits_char__* p0, char* p1, int p2);
int std__operator__3(int p0, int p1);
void std__basic_ofstream_char__std__char_traits_char_____open(struct std__basic_ofstream_char__std__char_traits_char__* p0, char* p1, int p2);
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* p0, char* p1, int p2);
int std__operator_(int p0, int p1);
_Bool std__basic_ios_char__std__char_traits_char_____fail___const(struct std__basic_ios_char__std__char_traits_char__* p0);
_Bool std__basic_ios_char__std__char_traits_char_____operator____const(struct std__basic_ios_char__std__char_traits_char__* p0);
extern void exit(int p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(struct std__basic_ofstream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* p0);
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
extern int __gxx_personality_v0();
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____close(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std____basic_file_char______basic_file(struct std____basic_file_char_* p0) {}
void std__locale___locale(struct std__locale* p0) {}
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);

extern unsigned char* _ZTTSt14basic_ofstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

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
  if (__cir_exc_active) {
    return;
  }
  struct std__allocator_char_* t16 = __a11;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t14->_M_dataplus, r15, t16);
  if (__cir_exc_active) {
    return;
  }
      char* t17 = __s10;
      char* c18 = ((void*)0);
      _Bool c19 = ((t17 == c18)) ? 1 : 0;
      if (c19) {
        char* cast20 = (char*)&(_str_44);
        std____throw_logic_error(cast20);
        if (__cir_exc_active) {
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t14->_M_dataplus);
          }
          return;
        }
      }
    char* t21 = __s10;
    char* t22 = __s10;
    unsigned long r23 = std__char_traits_char___length(t22);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t14->_M_dataplus);
      }
      return;
    }
    char* ptr24 = &(t21)[r23];
    __end12 = ptr24;
    char* t25 = __s10;
    char* t26 = __end12;
    struct std__forward_iterator_tag t27 = agg_tmp013;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t14, t25, t26, t27);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t14->_M_dataplus);
      }
      return;
    }
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v32, unsigned long v33, unsigned long v34, char* v35) {
bb36:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this37;
  unsigned long __n138;
  unsigned long __n239;
  char* __s40;
  this37 = v32;
  __n138 = v33;
  __n239 = v34;
  __s40 = v35;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t41 = this37;
    unsigned long r42 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t41);
    unsigned long r43 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t41);
    unsigned long t44 = __n138;
    unsigned long b45 = r43 - t44;
    unsigned long b46 = r42 - b45;
    unsigned long t47 = __n239;
    _Bool c48 = ((b46 < t47)) ? 1 : 0;
    if (c48) {
      char* t49 = __s40;
      std____throw_length_error(t49);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v50) {
bb51:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this52;
  unsigned long __retval53;
  unsigned long __sz54;
  this52 = v50;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t55 = this52;
  _Bool r56 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t55);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long ternary57;
  if (r56) {
    unsigned long c58 = 15;
    ternary57 = (unsigned long)c58;
  } else {
    unsigned long t59 = t55->field2._M_allocated_capacity;
    ternary57 = (unsigned long)t59;
  }
  __sz54 = ternary57;
    unsigned long t60 = __sz54;
    unsigned long c61 = 15;
    _Bool c62 = ((t60 < c61)) ? 1 : 0;
    _Bool ternary63;
    if (c62) {
      _Bool c64 = 1;
      ternary63 = (_Bool)c64;
    } else {
      unsigned long t65 = __sz54;
      unsigned long r66 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t55);
      _Bool c67 = ((t65 > r66)) ? 1 : 0;
      ternary63 = (_Bool)c67;
    }
    if (ternary63) {
      __builtin_unreachable();
    }
  unsigned long t68 = __sz54;
  __retval53 = t68;
  unsigned long t69 = __retval53;
  return t69;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v70, char* v71, char* v72) {
bb73:
  struct std__less_const_char___* this74;
  char* __x75;
  char* __y76;
  _Bool __retval77;
  this74 = v70;
  __x75 = v71;
  __y76 = v72;
  struct std__less_const_char___* t78 = this74;
    _Bool r79 = std____is_constant_evaluated();
    if (r79) {
      char* t80 = __x75;
      char* t81 = __y76;
      _Bool c82 = ((t80 < t81)) ? 1 : 0;
      __retval77 = c82;
      _Bool t83 = __retval77;
      return t83;
    }
  char* t84 = __x75;
  unsigned long cast85 = (unsigned long)t84;
  char* t86 = __y76;
  unsigned long cast87 = (unsigned long)t86;
  _Bool c88 = ((cast85 < cast87)) ? 1 : 0;
  __retval77 = c88;
  _Bool t89 = __retval77;
  return t89;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v90, char* v91) {
bb92:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this93;
  char* __s94;
  _Bool __retval95;
  struct std__less_const_char___ ref_tmp096;
  this93 = v90;
  __s94 = v91;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t97 = this93;
  char* t98 = __s94;
  char* r99 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t97);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool r100 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp096, t98, r99);
  _Bool ternary101;
  if (r100) {
    _Bool c102 = 1;
    ternary101 = (_Bool)c102;
  } else {
    struct std__less_const_char___ ref_tmp1103;
    char* r104 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t97);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    unsigned long r105 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t97);
    char* ptr106 = &(r104)[r105];
    char* t107 = __s94;
    _Bool r108 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1103, ptr106, t107);
    ternary101 = (_Bool)r108;
  }
  __retval95 = ternary101;
  _Bool t109 = __retval95;
  return t109;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v110, char* v111) {
bb112:
  char* __c1113;
  char* __c2114;
  __c1113 = v110;
  __c2114 = v111;
    _Bool r115 = std____is_constant_evaluated();
    if (r115) {
      char* t116 = __c1113;
      char* t117 = __c2114;
      char* r118 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t116, t117);
    } else {
      char* t119 = __c2114;
      char t120 = *t119;
      char* t121 = __c1113;
      *t121 = t120;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v122, char* v123, unsigned long v124) {
bb125:
  char* __s1126;
  char* __s2127;
  unsigned long __n128;
  char* __retval129;
  __s1126 = v122;
  __s2127 = v123;
  __n128 = v124;
    unsigned long t130 = __n128;
    unsigned long c131 = 0;
    _Bool c132 = ((t130 == c131)) ? 1 : 0;
    if (c132) {
      char* t133 = __s1126;
      __retval129 = t133;
      char* t134 = __retval129;
      return t134;
    }
    _Bool r135 = std____is_constant_evaluated();
    if (r135) {
        char* t136 = __s2127;
        char* t137 = __s1126;
        _Bool c138 = ((t136 < t137)) ? 1 : 0;
        _Bool isconst139 = 0;
        _Bool ternary140;
        if (isconst139) {
          char* t141 = __s1126;
          char* t142 = __s2127;
          _Bool c143 = ((t141 > t142)) ? 1 : 0;
          ternary140 = (_Bool)c143;
        } else {
          _Bool c144 = 0;
          ternary140 = (_Bool)c144;
        }
        _Bool ternary145;
        if (ternary140) {
          char* t146 = __s1126;
          char* t147 = __s2127;
          unsigned long t148 = __n128;
          char* ptr149 = &(t147)[t148];
          _Bool c150 = ((t146 < ptr149)) ? 1 : 0;
          ternary145 = (_Bool)c150;
        } else {
          _Bool c151 = 0;
          ternary145 = (_Bool)c151;
        }
        if (ternary145) {
            do {
                unsigned long t152 = __n128;
                unsigned long u153 = t152 - 1;
                __n128 = u153;
                unsigned long t154 = __n128;
                char* t155 = __s1126;
                char* ptr156 = &(t155)[t154];
                unsigned long t157 = __n128;
                char* t158 = __s2127;
                char* ptr159 = &(t158)[t157];
                __gnu_cxx__char_traits_char___assign(ptr156, ptr159);
                if (__cir_exc_active) {
                  char* __cir_eh_ret = (char*)0;
                  return __cir_eh_ret;
                }
              unsigned long t160 = __n128;
              unsigned long c161 = 0;
              _Bool c162 = ((t160 > c161)) ? 1 : 0;
              if (!c162) break;
            } while (1);
        } else {
          char* t163 = __s1126;
          char* t164 = __s2127;
          unsigned long t165 = __n128;
          char* r166 = __gnu_cxx__char_traits_char___copy(t163, t164, t165);
          if (__cir_exc_active) {
            char* __cir_eh_ret = (char*)0;
            return __cir_eh_ret;
          }
        }
      char* t167 = __s1126;
      __retval129 = t167;
      char* t168 = __retval129;
      return t168;
    }
  char* t169 = __s1126;
  void* cast170 = (void*)t169;
  char* t171 = __s2127;
  void* cast172 = (void*)t171;
  unsigned long t173 = __n128;
  unsigned long c174 = 1;
  unsigned long b175 = t173 * c174;
  void* r176 = memmove(cast170, cast172, b175);
  char* t177 = __s1126;
  __retval129 = t177;
  char* t178 = __retval129;
  return t178;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v179, char* v180, unsigned long v181) {
bb182:
  char* __s1183;
  char* __s2184;
  unsigned long __n185;
  char* __retval186;
  __s1183 = v179;
  __s2184 = v180;
  __n185 = v181;
    unsigned long t187 = __n185;
    unsigned long c188 = 0;
    _Bool c189 = ((t187 == c188)) ? 1 : 0;
    if (c189) {
      char* t190 = __s1183;
      __retval186 = t190;
      char* t191 = __retval186;
      return t191;
    }
    _Bool r192 = std____is_constant_evaluated();
    if (r192) {
      char* t193 = __s1183;
      char* t194 = __s2184;
      unsigned long t195 = __n185;
      char* r196 = __gnu_cxx__char_traits_char___move(t193, t194, t195);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      __retval186 = r196;
      char* t197 = __retval186;
      return t197;
    }
  char* t198 = __s1183;
  void* cast199 = (void*)t198;
  char* t200 = __s2184;
  void* cast201 = (void*)t200;
  unsigned long t202 = __n185;
  void* r203 = memmove(cast199, cast201, t202);
  char* cast204 = (char*)r203;
  __retval186 = cast204;
  char* t205 = __retval186;
  return t205;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v206, char* v207, unsigned long v208) {
bb209:
  char* __d210;
  char* __s211;
  unsigned long __n212;
  __d210 = v206;
  __s211 = v207;
  __n212 = v208;
    unsigned long t213 = __n212;
    unsigned long c214 = 1;
    _Bool c215 = ((t213 == c214)) ? 1 : 0;
    if (c215) {
      char* t216 = __d210;
      char* t217 = __s211;
      std__char_traits_char___assign(t216, t217);
    } else {
      char* t218 = __d210;
      char* t219 = __s211;
      unsigned long t220 = __n212;
      char* r221 = std__char_traits_char___move(t218, t219, t220);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v222, char* v223, unsigned long v224, char* v225, unsigned long v226, unsigned long v227) {
bb228:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this229;
  char* __p230;
  unsigned long __len1231;
  char* __s232;
  unsigned long __len2233;
  unsigned long __how_much234;
  this229 = v222;
  __p230 = v223;
  __len1231 = v224;
  __s232 = v225;
  __len2233 = v226;
  __how_much234 = v227;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t235 = this229;
    unsigned long t236 = __len2233;
    _Bool cast237 = (_Bool)t236;
    _Bool ternary238;
    if (cast237) {
      unsigned long t239 = __len2233;
      unsigned long t240 = __len1231;
      _Bool c241 = ((t239 <= t240)) ? 1 : 0;
      ternary238 = (_Bool)c241;
    } else {
      _Bool c242 = 0;
      ternary238 = (_Bool)c242;
    }
    if (ternary238) {
      char* t243 = __p230;
      char* t244 = __s232;
      unsigned long t245 = __len2233;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t243, t244, t245);
      if (__cir_exc_active) {
        return;
      }
    }
    unsigned long t246 = __how_much234;
    _Bool cast247 = (_Bool)t246;
    _Bool ternary248;
    if (cast247) {
      unsigned long t249 = __len1231;
      unsigned long t250 = __len2233;
      _Bool c251 = ((t249 != t250)) ? 1 : 0;
      ternary248 = (_Bool)c251;
    } else {
      _Bool c252 = 0;
      ternary248 = (_Bool)c252;
    }
    if (ternary248) {
      char* t253 = __p230;
      unsigned long t254 = __len2233;
      char* ptr255 = &(t253)[t254];
      char* t256 = __p230;
      unsigned long t257 = __len1231;
      char* ptr258 = &(t256)[t257];
      unsigned long t259 = __how_much234;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr255, ptr258, t259);
      if (__cir_exc_active) {
        return;
      }
    }
    unsigned long t260 = __len2233;
    unsigned long t261 = __len1231;
    _Bool c262 = ((t260 > t261)) ? 1 : 0;
    if (c262) {
        char* t263 = __s232;
        unsigned long t264 = __len2233;
        char* ptr265 = &(t263)[t264];
        char* t266 = __p230;
        unsigned long t267 = __len1231;
        char* ptr268 = &(t266)[t267];
        _Bool c269 = ((ptr265 <= ptr268)) ? 1 : 0;
        if (c269) {
          char* t270 = __p230;
          char* t271 = __s232;
          unsigned long t272 = __len2233;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t270, t271, t272);
          if (__cir_exc_active) {
            return;
          }
        } else {
            char* t273 = __s232;
            char* t274 = __p230;
            unsigned long t275 = __len1231;
            char* ptr276 = &(t274)[t275];
            _Bool c277 = ((t273 >= ptr276)) ? 1 : 0;
            if (c277) {
              unsigned long __poff278;
              char* t279 = __s232;
              char* t280 = __p230;
              long diff281 = t279 - t280;
              unsigned long cast282 = (unsigned long)diff281;
              unsigned long t283 = __len2233;
              unsigned long t284 = __len1231;
              unsigned long b285 = t283 - t284;
              unsigned long b286 = cast282 + b285;
              __poff278 = b286;
              char* t287 = __p230;
              char* t288 = __p230;
              unsigned long t289 = __poff278;
              char* ptr290 = &(t288)[t289];
              unsigned long t291 = __len2233;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t287, ptr290, t291);
              if (__cir_exc_active) {
                return;
              }
            } else {
              unsigned long __nleft292;
              char* t293 = __p230;
              unsigned long t294 = __len1231;
              char* ptr295 = &(t293)[t294];
              char* t296 = __s232;
              long diff297 = ptr295 - t296;
              unsigned long cast298 = (unsigned long)diff297;
              __nleft292 = cast298;
              char* t299 = __p230;
              char* t300 = __s232;
              unsigned long t301 = __nleft292;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t299, t300, t301);
              if (__cir_exc_active) {
                return;
              }
              char* t302 = __p230;
              unsigned long t303 = __nleft292;
              char* ptr304 = &(t302)[t303];
              char* t305 = __p230;
              unsigned long t306 = __len2233;
              char* ptr307 = &(t305)[t306];
              unsigned long t308 = __len2233;
              unsigned long t309 = __nleft292;
              unsigned long b310 = t308 - t309;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr304, ptr307, b310);
              if (__cir_exc_active) {
                return;
              }
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v311) {
bb312:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this313;
  unsigned long __retval314;
  this313 = v311;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t315 = this313;
  unsigned long r316 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t315);
  __retval314 = r316;
  unsigned long t317 = __retval314;
  return t317;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v318, unsigned long v319, unsigned long v320, char* v321, unsigned long v322) {
bb323:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this324;
  unsigned long __pos325;
  unsigned long __len1326;
  char* __s327;
  unsigned long __len2328;
  unsigned long __how_much329;
  unsigned long __new_capacity330;
  char* __r331;
  this324 = v318;
  __pos325 = v319;
  __len1326 = v320;
  __s327 = v321;
  __len2328 = v322;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t332 = this324;
  unsigned long r333 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t332);
  unsigned long t334 = __pos325;
  unsigned long b335 = r333 - t334;
  unsigned long t336 = __len1326;
  unsigned long b337 = b335 - t336;
  __how_much329 = b337;
  unsigned long r338 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t332);
  unsigned long t339 = __len2328;
  unsigned long b340 = r338 + t339;
  unsigned long t341 = __len1326;
  unsigned long b342 = b340 - t341;
  __new_capacity330 = b342;
  unsigned long r343 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t332);
  char* r344 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t332, &__new_capacity330, r343);
  if (__cir_exc_active) {
    return;
  }
  __r331 = r344;
    unsigned long t345 = __pos325;
    _Bool cast346 = (_Bool)t345;
    if (cast346) {
      char* t347 = __r331;
      char* r348 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t332);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t349 = __pos325;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t347, r348, t349);
      if (__cir_exc_active) {
        return;
      }
    }
    char* t350 = __s327;
    _Bool cast351 = (_Bool)t350;
    _Bool ternary352;
    if (cast351) {
      unsigned long t353 = __len2328;
      _Bool cast354 = (_Bool)t353;
      ternary352 = (_Bool)cast354;
    } else {
      _Bool c355 = 0;
      ternary352 = (_Bool)c355;
    }
    if (ternary352) {
      char* t356 = __r331;
      unsigned long t357 = __pos325;
      char* ptr358 = &(t356)[t357];
      char* t359 = __s327;
      unsigned long t360 = __len2328;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr358, t359, t360);
      if (__cir_exc_active) {
        return;
      }
    }
    unsigned long t361 = __how_much329;
    _Bool cast362 = (_Bool)t361;
    if (cast362) {
      char* t363 = __r331;
      unsigned long t364 = __pos325;
      char* ptr365 = &(t363)[t364];
      unsigned long t366 = __len2328;
      char* ptr367 = &(ptr365)[t366];
      char* r368 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t332);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t369 = __pos325;
      char* ptr370 = &(r368)[t369];
      unsigned long t371 = __len1326;
      char* ptr372 = &(ptr370)[t371];
      unsigned long t373 = __how_much329;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr367, ptr372, t373);
      if (__cir_exc_active) {
        return;
      }
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t332);
  if (__cir_exc_active) {
    return;
  }
  char* t374 = __r331;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t332, t374);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t375 = __new_capacity330;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t332, t375);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v376, unsigned long v377, unsigned long v378, char* v379, unsigned long v380) {
bb381:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this382;
  unsigned long __pos383;
  unsigned long __len1384;
  char* __s385;
  unsigned long __len2386;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval387;
  unsigned long __old_size388;
  unsigned long __new_size389;
  this382 = v376;
  __pos383 = v377;
  __len1384 = v378;
  __s385 = v379;
  __len2386 = v380;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t390 = this382;
  unsigned long t391 = __len1384;
  unsigned long t392 = __len2386;
  char* cast393 = (char*)&(_str_46);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t390, t391, t392, cast393);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  unsigned long r394 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t390);
  __old_size388 = r394;
  unsigned long t395 = __old_size388;
  unsigned long t396 = __len2386;
  unsigned long b397 = t395 + t396;
  unsigned long t398 = __len1384;
  unsigned long b399 = b397 - t398;
  __new_size389 = b399;
    unsigned long t400 = __new_size389;
    unsigned long r401 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t390);
    _Bool c402 = ((t400 <= r401)) ? 1 : 0;
    if (c402) {
      char* __p403;
      unsigned long __how_much404;
      char* r405 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t390);
      if (__cir_exc_active) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
        return __cir_eh_ret;
      }
      unsigned long t406 = __pos383;
      char* ptr407 = &(r405)[t406];
      __p403 = ptr407;
      unsigned long t408 = __old_size388;
      unsigned long t409 = __pos383;
      unsigned long b410 = t408 - t409;
      unsigned long t411 = __len1384;
      unsigned long b412 = b410 - t411;
      __how_much404 = b412;
        _Bool r413 = std__is_constant_evaluated();
        if (r413) {
          char* __newp414;
          struct std__allocator_char_* r415 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t390);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          unsigned long t416 = __new_size389;
          char* r417 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r415, t416);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          __newp414 = r417;
          char* t418 = __newp414;
          char* r419 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t390);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          unsigned long t420 = __pos383;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t418, r419, t420);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          char* t421 = __newp414;
          unsigned long t422 = __pos383;
          char* ptr423 = &(t421)[t422];
          char* t424 = __s385;
          unsigned long t425 = __len2386;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr423, t424, t425);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          char* t426 = __newp414;
          unsigned long t427 = __pos383;
          char* ptr428 = &(t426)[t427];
          unsigned long t429 = __len2386;
          char* ptr430 = &(ptr428)[t429];
          char* t431 = __p403;
          unsigned long t432 = __len1384;
          char* ptr433 = &(t431)[t432];
          unsigned long t434 = __how_much404;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr430, ptr433, t434);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          char* r435 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t390);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          char* t436 = __newp414;
          unsigned long t437 = __new_size389;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r435, t436, t437);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          struct std__allocator_char_* r438 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t390);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          char* t439 = __newp414;
          unsigned long t440 = __new_size389;
          std__allocator_char___deallocate(r438, t439, t440);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
        } else {
            char* t441 = __s385;
            _Bool r442 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t390, t441);
            if (r442) {
                unsigned long t443 = __how_much404;
                _Bool cast444 = (_Bool)t443;
                _Bool ternary445;
                if (cast444) {
                  unsigned long t446 = __len1384;
                  unsigned long t447 = __len2386;
                  _Bool c448 = ((t446 != t447)) ? 1 : 0;
                  ternary445 = (_Bool)c448;
                } else {
                  _Bool c449 = 0;
                  ternary445 = (_Bool)c449;
                }
                if (ternary445) {
                  char* t450 = __p403;
                  unsigned long t451 = __len2386;
                  char* ptr452 = &(t450)[t451];
                  char* t453 = __p403;
                  unsigned long t454 = __len1384;
                  char* ptr455 = &(t453)[t454];
                  unsigned long t456 = __how_much404;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr452, ptr455, t456);
                  if (__cir_exc_active) {
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                    return __cir_eh_ret;
                  }
                }
                unsigned long t457 = __len2386;
                _Bool cast458 = (_Bool)t457;
                if (cast458) {
                  char* t459 = __p403;
                  char* t460 = __s385;
                  unsigned long t461 = __len2386;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t459, t460, t461);
                  if (__cir_exc_active) {
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                    return __cir_eh_ret;
                  }
                }
            } else {
              char* t462 = __p403;
              unsigned long t463 = __len1384;
              char* t464 = __s385;
              unsigned long t465 = __len2386;
              unsigned long t466 = __how_much404;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t390, t462, t463, t464, t465, t466);
              if (__cir_exc_active) {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                return __cir_eh_ret;
              }
            }
        }
    } else {
      unsigned long t467 = __pos383;
      unsigned long t468 = __len1384;
      char* t469 = __s385;
      unsigned long t470 = __len2386;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t390, t467, t468, t469, t470);
      if (__cir_exc_active) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
        return __cir_eh_ret;
      }
    }
  unsigned long t471 = __new_size389;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t390, t471);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  __retval387 = t390;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t472 = __retval387;
  return t472;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v473) {
bb474:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this475;
  unsigned long __retval476;
  unsigned long __sz477;
  this475 = v473;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t478 = this475;
  unsigned long t479 = t478->_M_string_length;
  __sz477 = t479;
    unsigned long t480 = __sz477;
    unsigned long r481 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t478);
    _Bool c482 = ((t480 > r481)) ? 1 : 0;
    if (c482) {
      __builtin_unreachable();
    }
  unsigned long t483 = __sz477;
  __retval476 = t483;
  unsigned long t484 = __retval476;
  return t484;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v485, char* v486) {
bb487:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this488;
  char* __s489;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval490;
  this488 = v485;
  __s489 = v486;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t491 = this488;
  unsigned long c492 = 0;
  unsigned long r493 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t491);
  char* t494 = __s489;
  char* t495 = __s489;
  unsigned long r496 = std__char_traits_char___length(t495);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r497 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t491, c492, r493, t494, r496);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  __retval490 = r497;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t498 = __retval490;
  return t498;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v499, char* v500) {
bb501:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this502;
  char* __s503;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval504;
  this502 = v499;
  __s503 = v500;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t505 = this502;
  char* t506 = __s503;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r507 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(t505, t506);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  __retval504 = r507;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t508 = __retval504;
  return t508;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v509) {
bb510:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this511;
  char* __retval512;
  this511 = v509;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t513 = this511;
  char* r514 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t513);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval512 = r514;
  char* t515 = __retval512;
  return t515;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4findEPKcmRS2_
char* __gnu_cxx__char_traits_char___find(char* v516, unsigned long v517, char* v518) {
bb519:
  char* __s520;
  unsigned long __n521;
  char* __a522;
  char* __retval523;
  __s520 = v516;
  __n521 = v517;
  __a522 = v518;
    unsigned long __i524;
    unsigned long c525 = 0;
    __i524 = c525;
    while (1) {
      unsigned long t527 = __i524;
      unsigned long t528 = __n521;
      _Bool c529 = ((t527 < t528)) ? 1 : 0;
      if (!c529) break;
        unsigned long t530 = __i524;
        char* t531 = __s520;
        char* ptr532 = &(t531)[t530];
        char* t533 = __a522;
        _Bool r534 = __gnu_cxx__char_traits_char___eq(ptr532, t533);
        if (__cir_exc_active) {
          char* __cir_eh_ret = (char*)0;
          return __cir_eh_ret;
        }
        if (r534) {
          char* t535 = __s520;
          unsigned long t536 = __i524;
          char* ptr537 = &(t535)[t536];
          __retval523 = ptr537;
          char* t538 = __retval523;
          char* ret_val539 = t538;
          return ret_val539;
        }
    for_step526: ;
      unsigned long t540 = __i524;
      unsigned long u541 = t540 + 1;
      __i524 = u541;
    }
  char* c542 = ((void*)0);
  __retval523 = c542;
  char* t543 = __retval523;
  return t543;
}

// function: _ZNSt11char_traitsIcE4findEPKcmRS1_
char* std__char_traits_char___find(char* v544, unsigned long v545, char* v546) {
bb547:
  char* __s548;
  unsigned long __n549;
  char* __a550;
  char* __retval551;
  __s548 = v544;
  __n549 = v545;
  __a550 = v546;
    unsigned long t552 = __n549;
    unsigned long c553 = 0;
    _Bool c554 = ((t552 == c553)) ? 1 : 0;
    if (c554) {
      char* c555 = ((void*)0);
      __retval551 = c555;
      char* t556 = __retval551;
      return t556;
    }
    _Bool r557 = std____is_constant_evaluated();
    if (r557) {
      char* t558 = __s548;
      unsigned long t559 = __n549;
      char* t560 = __a550;
      char* r561 = __gnu_cxx__char_traits_char___find(t558, t559, t560);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      __retval551 = r561;
      char* t562 = __retval551;
      return t562;
    }
  char* t563 = __s548;
  void* cast564 = (void*)t563;
  char* t565 = __a550;
  char t566 = *t565;
  int cast567 = (int)t566;
  unsigned long t568 = __n549;
  void* memchr569 = (void*)__builtin_memchr(cast564, cast567, t568);
  char* cast570 = (char*)memchr569;
  __retval551 = cast570;
  char* t571 = __retval551;
  return t571;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v572, char* v573) {
bb574:
  char* __c1575;
  char* __c2576;
  _Bool __retval577;
  __c1575 = v572;
  __c2576 = v573;
  char* t578 = __c1575;
  char t579 = *t578;
  unsigned char cast580 = (unsigned char)t579;
  int cast581 = (int)cast580;
  char* t582 = __c2576;
  char t583 = *t582;
  unsigned char cast584 = (unsigned char)t583;
  int cast585 = (int)cast584;
  _Bool c586 = ((cast581 < cast585)) ? 1 : 0;
  __retval577 = c586;
  _Bool t587 = __retval577;
  return t587;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v588, char* v589, unsigned long v590) {
bb591:
  char* __s1592;
  char* __s2593;
  unsigned long __n594;
  int __retval595;
  __s1592 = v588;
  __s2593 = v589;
  __n594 = v590;
    unsigned long t596 = __n594;
    unsigned long c597 = 0;
    _Bool c598 = ((t596 == c597)) ? 1 : 0;
    if (c598) {
      int c599 = 0;
      __retval595 = c599;
      int t600 = __retval595;
      return t600;
    }
    _Bool r601 = std____is_constant_evaluated();
    if (r601) {
        unsigned long __i602;
        unsigned long c603 = 0;
        __i602 = c603;
        while (1) {
          unsigned long t605 = __i602;
          unsigned long t606 = __n594;
          _Bool c607 = ((t605 < t606)) ? 1 : 0;
          if (!c607) break;
            unsigned long t608 = __i602;
            char* t609 = __s1592;
            char* ptr610 = &(t609)[t608];
            unsigned long t611 = __i602;
            char* t612 = __s2593;
            char* ptr613 = &(t612)[t611];
            _Bool r614 = std__char_traits_char___lt(ptr610, ptr613);
            if (r614) {
              int c615 = -1;
              __retval595 = c615;
              int t616 = __retval595;
              int ret_val617 = t616;
              return ret_val617;
            } else {
                unsigned long t618 = __i602;
                char* t619 = __s2593;
                char* ptr620 = &(t619)[t618];
                unsigned long t621 = __i602;
                char* t622 = __s1592;
                char* ptr623 = &(t622)[t621];
                _Bool r624 = std__char_traits_char___lt(ptr620, ptr623);
                if (r624) {
                  int c625 = 1;
                  __retval595 = c625;
                  int t626 = __retval595;
                  int ret_val627 = t626;
                  return ret_val627;
                }
            }
        for_step604: ;
          unsigned long t628 = __i602;
          unsigned long u629 = t628 + 1;
          __i602 = u629;
        }
      int c630 = 0;
      __retval595 = c630;
      int t631 = __retval595;
      return t631;
    }
  char* t632 = __s1592;
  void* cast633 = (void*)t632;
  char* t634 = __s2593;
  void* cast635 = (void*)t634;
  unsigned long t636 = __n594;
  int r637 = memcmp(cast633, cast635, t636);
  __retval595 = r637;
  int t638 = __retval595;
  return t638;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEPKcmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v639, char* v640, unsigned long v641, unsigned long v642) {
bb643:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this644;
  char* __s645;
  unsigned long __pos646;
  unsigned long __n647;
  unsigned long __retval648;
  unsigned long __size649;
  char __elem0650;
  char* __data651;
  char* __first652;
  char* __last653;
  unsigned long __len654;
  this644 = v639;
  __s645 = v640;
  __pos646 = v641;
  __n647 = v642;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t655 = this644;
  unsigned long r656 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t655);
  __size649 = r656;
    unsigned long t657 = __n647;
    unsigned long c658 = 0;
    _Bool c659 = ((t657 == c658)) ? 1 : 0;
    if (c659) {
      unsigned long t660 = __pos646;
      unsigned long t661 = __size649;
      _Bool c662 = ((t660 <= t661)) ? 1 : 0;
      unsigned long ternary663;
      if (c662) {
        unsigned long t664 = __pos646;
        ternary663 = (unsigned long)t664;
      } else {
        unsigned long t665 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        ternary663 = (unsigned long)t665;
      }
      __retval648 = ternary663;
      unsigned long t666 = __retval648;
      return t666;
    }
    unsigned long t667 = __pos646;
    unsigned long t668 = __size649;
    _Bool c669 = ((t667 >= t668)) ? 1 : 0;
    if (c669) {
      unsigned long t670 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      __retval648 = t670;
      unsigned long t671 = __retval648;
      return t671;
    }
  long c672 = 0;
  char* t673 = __s645;
  char* ptr674 = &(t673)[c672];
  char t675 = *ptr674;
  __elem0650 = t675;
  char* r676 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t655);
  __data651 = r676;
  char* t677 = __data651;
  unsigned long t678 = __pos646;
  char* ptr679 = &(t677)[t678];
  __first652 = ptr679;
  char* t680 = __data651;
  unsigned long t681 = __size649;
  char* ptr682 = &(t680)[t681];
  __last653 = ptr682;
  unsigned long t683 = __size649;
  unsigned long t684 = __pos646;
  unsigned long b685 = t683 - t684;
  __len654 = b685;
    while (1) {
      unsigned long t686 = __len654;
      unsigned long t687 = __n647;
      _Bool c688 = ((t686 >= t687)) ? 1 : 0;
      if (!c688) break;
        char* t689 = __first652;
        unsigned long t690 = __len654;
        unsigned long t691 = __n647;
        unsigned long b692 = t690 - t691;
        unsigned long c693 = 1;
        unsigned long b694 = b692 + c693;
        char* r695 = std__char_traits_char___find(t689, b694, &__elem0650);
        if (__cir_exc_active) {
          unsigned long __cir_eh_ret = (unsigned long)0;
          return __cir_eh_ret;
        }
        __first652 = r695;
          char* t696 = __first652;
          _Bool cast697 = (_Bool)t696;
          _Bool u698 = !cast697;
          if (u698) {
            unsigned long t699 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
            __retval648 = t699;
            unsigned long t700 = __retval648;
            unsigned long ret_val701 = t700;
            return ret_val701;
          }
          char* t702 = __first652;
          char* t703 = __s645;
          unsigned long t704 = __n647;
          int r705 = std__char_traits_char___compare(t702, t703, t704);
          if (__cir_exc_active) {
            unsigned long __cir_eh_ret = (unsigned long)0;
            return __cir_eh_ret;
          }
          int c706 = 0;
          _Bool c707 = ((r705 == c706)) ? 1 : 0;
          if (c707) {
            char* t708 = __first652;
            char* t709 = __data651;
            long diff710 = t708 - t709;
            unsigned long cast711 = (unsigned long)diff710;
            __retval648 = cast711;
            unsigned long t712 = __retval648;
            unsigned long ret_val713 = t712;
            return ret_val713;
          }
        char* t714 = __last653;
        char* t715 = __first652;
        int c716 = 1;
        char* ptr717 = &(t715)[c716];
        __first652 = ptr717;
        long diff718 = t714 - ptr717;
        unsigned long cast719 = (unsigned long)diff718;
        __len654 = cast719;
    }
  unsigned long t720 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
  __retval648 = t720;
  unsigned long t721 = __retval648;
  return t721;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEPKcm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v722, char* v723, unsigned long v724) {
bb725:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this726;
  char* __s727;
  unsigned long __pos728;
  unsigned long __retval729;
  this726 = v722;
  __s727 = v723;
  __pos728 = v724;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t730 = this726;
  char* t731 = __s727;
  unsigned long t732 = __pos728;
  char* t733 = __s727;
  unsigned long r734 = std__char_traits_char___length(t733);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long r735 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(t730, t731, t732, r734);
  __retval729 = r735;
  unsigned long t736 = __retval729;
  return t736;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v737, unsigned long v738, char* v739) {
bb740:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this741;
  unsigned long __pos742;
  char* __s743;
  unsigned long __retval744;
  this741 = v737;
  __pos742 = v738;
  __s743 = v739;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t745 = this741;
    unsigned long t746 = __pos742;
    unsigned long r747 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t745);
    _Bool c748 = ((t746 > r747)) ? 1 : 0;
    if (c748) {
      char* cast749 = (char*)&(_str_48);
      char* t750 = __s743;
      unsigned long t751 = __pos742;
      unsigned long r752 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t745);
      std____throw_out_of_range_fmt(cast749, t750, t751, r752);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long t753 = __pos742;
  __retval744 = t753;
  unsigned long t754 = __retval744;
  return t754;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v755, unsigned long v756, unsigned long v757) {
bb758:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this759;
  unsigned long __pos760;
  unsigned long __off761;
  unsigned long __retval762;
  _Bool __testoff763;
  this759 = v755;
  __pos760 = v756;
  __off761 = v757;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t764 = this759;
  unsigned long t765 = __off761;
  unsigned long r766 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t764);
  unsigned long t767 = __pos760;
  unsigned long b768 = r766 - t767;
  _Bool c769 = ((t765 < b768)) ? 1 : 0;
  __testoff763 = c769;
  _Bool t770 = __testoff763;
  unsigned long ternary771;
  if (t770) {
    unsigned long t772 = __off761;
    ternary771 = (unsigned long)t772;
  } else {
    unsigned long r773 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t764);
    unsigned long t774 = __pos760;
    unsigned long b775 = r773 - t774;
    ternary771 = (unsigned long)b775;
  }
  __retval762 = ternary771;
  unsigned long t776 = __retval762;
  return t776;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v777, unsigned long v778, unsigned long v779, char* v780, unsigned long v781) {
bb782:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this783;
  unsigned long __pos784;
  unsigned long __n1785;
  char* __s786;
  unsigned long __n2787;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval788;
  this783 = v777;
  __pos784 = v778;
  __n1785 = v779;
  __s786 = v780;
  __n2787 = v781;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t789 = this783;
  unsigned long t790 = __pos784;
  char* cast791 = (char*)&(_str_47);
  unsigned long r792 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t789, t790, cast791);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  unsigned long t793 = __pos784;
  unsigned long t794 = __n1785;
  unsigned long r795 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t789, t793, t794);
  char* t796 = __s786;
  unsigned long t797 = __n2787;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r798 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t789, r792, r795, t796, t797);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  __retval788 = r798;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t799 = __retval788;
  return t799;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v800, unsigned long v801, unsigned long v802, char* v803) {
bb804:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this805;
  unsigned long __pos806;
  unsigned long __n1807;
  char* __s808;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval809;
  this805 = v800;
  __pos806 = v801;
  __n1807 = v802;
  __s808 = v803;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t810 = this805;
  unsigned long t811 = __pos806;
  unsigned long t812 = __n1807;
  char* t813 = __s808;
  char* t814 = __s808;
  unsigned long r815 = std__char_traits_char___length(t814);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r816 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(t810, t811, t812, t813, r815);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  __retval809 = r816;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t817 = __retval809;
  return t817;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_mm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v818, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v819, unsigned long v820, unsigned long v821) {
bb822:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this823;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str824;
  unsigned long __pos825;
  unsigned long __n826;
  struct std__allocator_char_ ref_tmp0827;
  char* __start828;
  struct std__forward_iterator_tag agg_tmp0829;
  this823 = v818;
  __str824 = v819;
  __pos825 = v820;
  __n826 = v821;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t830 = this823;
  char* r831 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t830);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_char___allocator_2(&ref_tmp0827);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t830->_M_dataplus, r831, &ref_tmp0827);
    if (__cir_exc_active) {
      {
        std__allocator_char____allocator(&ref_tmp0827);
      }
      return;
    }
  {
    std__allocator_char____allocator(&ref_tmp0827);
  }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t832 = __str824;
    char* r833 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t832);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t830->_M_dataplus);
      }
      return;
    }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t834 = __str824;
    unsigned long t835 = __pos825;
    char* cast836 = (char*)&(_str_50);
    unsigned long r837 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t834, t835, cast836);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t830->_M_dataplus);
      }
      return;
    }
    char* ptr838 = &(r833)[r837];
    __start828 = ptr838;
    char* t839 = __start828;
    char* t840 = __start828;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t841 = __str824;
    unsigned long t842 = __pos825;
    unsigned long t843 = __n826;
    unsigned long r844 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t841, t842, t843);
    char* ptr845 = &(t840)[r844];
    struct std__forward_iterator_tag t846 = agg_tmp0829;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t830, t839, ptr845, t846);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t830->_M_dataplus);
      }
      return;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6substrEmm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v847, unsigned long v848, unsigned long v849) {
bb850:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this851;
  unsigned long __pos852;
  unsigned long __n853;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval854;
  this851 = v847;
  __pos852 = v848;
  __n853 = v849;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t855 = this851;
  unsigned long t856 = __pos852;
  char* cast857 = (char*)&(_str_49);
  unsigned long r858 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t855, t856, cast857);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  unsigned long t859 = __n853;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval854, t855, r858, t859);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t860 = __retval854;
  return t860;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb861:
  _Bool __retval862;
  _Bool t863 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval862 = t863;
  _Bool t864 = __retval862;
  return t864;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v865, struct std____new_allocator_char_* v866) {
bb867:
  struct std____new_allocator_char_* this868;
  struct std____new_allocator_char_* unnamed869;
  struct std____new_allocator_char_* __retval870;
  this868 = v865;
  unnamed869 = v866;
  struct std____new_allocator_char_* t871 = this868;
  __retval870 = t871;
  struct std____new_allocator_char_* t872 = __retval870;
  return t872;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v873, struct std__allocator_char_* v874) {
bb875:
  struct std__allocator_char_* this876;
  struct std__allocator_char_* unnamed877;
  struct std__allocator_char_* __retval878;
  this876 = v873;
  unnamed877 = v874;
  struct std__allocator_char_* t879 = this876;
  struct std____new_allocator_char_* base880 = (struct std____new_allocator_char_*)((char *)t879 + 0);
  struct std__allocator_char_* t881 = unnamed877;
  struct std____new_allocator_char_* base882 = (struct std____new_allocator_char_*)((char *)t881 + 0);
  struct std____new_allocator_char_* r883 = std____new_allocator_char___operator_(base880, base882);
  __retval878 = t879;
  struct std__allocator_char_* t884 = __retval878;
  return t884;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v885, struct std__allocator_char_* v886) {
bb887:
  struct std__allocator_char_* __one888;
  struct std__allocator_char_* __two889;
  __one888 = v885;
  __two889 = v886;
    struct std__allocator_char_* t890 = __two889;
    struct std__allocator_char_* t891 = __one888;
    struct std__allocator_char_* r892 = std__allocator_char___operator_(t891, t890);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v893) {
bb894:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this895;
  char* __retval896;
  this895 = v893;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t897 = this895;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t897);
  char* r898 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t897);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval896 = r898;
  char* t899 = __retval896;
  return t899;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v900, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v901) {
bb902:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this903;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str904;
  this903 = v900;
  __str904 = v901;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t905 = this903;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t906 = __str904;
    _Bool c907 = ((t905 != t906)) ? 1 : 0;
    if (c907) {
      unsigned long __rsize908;
      unsigned long __capacity909;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t910 = __str904;
      unsigned long r911 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t910);
      __rsize908 = r911;
      unsigned long r912 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t905);
      __capacity909 = r912;
        unsigned long t913 = __rsize908;
        unsigned long t914 = __capacity909;
        _Bool c915 = ((t913 > t914)) ? 1 : 0;
        if (c915) {
          unsigned long __new_capacity916;
          char* __tmp917;
          unsigned long t918 = __rsize908;
          __new_capacity916 = t918;
          unsigned long t919 = __capacity909;
          char* r920 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t905, &__new_capacity916, t919);
          if (__cir_exc_active) {
            return;
          }
          __tmp917 = r920;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t905);
          if (__cir_exc_active) {
            return;
          }
          char* t921 = __tmp917;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t905, t921);
          if (__cir_exc_active) {
            return;
          }
          unsigned long t922 = __new_capacity916;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t905, t922);
          if (__cir_exc_active) {
            return;
          }
        }
        unsigned long t923 = __rsize908;
        _Bool cast924 = (_Bool)t923;
        if (cast924) {
          char* r925 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t905);
          if (__cir_exc_active) {
            return;
          }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t926 = __str904;
          char* r927 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t926);
          if (__cir_exc_active) {
            return;
          }
          unsigned long t928 = __rsize908;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r925, r927, t928);
          if (__cir_exc_active) {
            return;
          }
        }
      unsigned long t929 = __rsize908;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t905, t929);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v930) {
bb931:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this932;
  this932 = v930;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t933 = this932;
  unsigned long c934 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t933, c934);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v935, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v936) {
bb937:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this938;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str939;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval940;
  _Bool __equal_allocs941;
  this938 = v935;
  __str939 = v936;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t942 = this938;
  _Bool c943 = 1;
  __equal_allocs941 = c943;
    _Bool r944 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t942);
    if (__cir_exc_active) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
      return __cir_eh_ret;
    }
    _Bool u945 = !r944;
    _Bool ternary946;
    if (u945) {
      _Bool r947 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      if (__cir_exc_active) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
        return __cir_eh_ret;
      }
      ternary946 = (_Bool)r947;
    } else {
      _Bool c948 = 0;
      ternary946 = (_Bool)c948;
    }
    _Bool ternary949;
    if (ternary946) {
      _Bool t950 = __equal_allocs941;
      _Bool u951 = !t950;
      ternary949 = (_Bool)u951;
    } else {
      _Bool c952 = 0;
      ternary949 = (_Bool)c952;
    }
    if (ternary949) {
      unsigned long t953 = t942->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t942, t953);
      char* r954 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t942);
      if (__cir_exc_active) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
        return __cir_eh_ret;
      }
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t942, r954);
      if (__cir_exc_active) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
        return __cir_eh_ret;
      }
      unsigned long c955 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t942, c955);
      if (__cir_exc_active) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__allocator_char_* r956 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t942);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t957 = __str939;
  struct std__allocator_char_* r958 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t957);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  void_std____alloc_on_move_std__allocator_char___(r956, r958);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t959 = __str939;
    _Bool r960 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t959);
    if (__cir_exc_active) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
      return __cir_eh_ret;
    }
    if (r960) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t961 = __str939;
        _Bool c962 = ((t961 != t942)) ? 1 : 0;
        if (c962) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t963 = __str939;
            unsigned long r964 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t963);
            _Bool cast965 = (_Bool)r964;
            if (cast965) {
              char* r966 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t942);
              if (__cir_exc_active) {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                return __cir_eh_ret;
              }
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t967 = __str939;
              char* r968 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t967);
              if (__cir_exc_active) {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                return __cir_eh_ret;
              }
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t969 = __str939;
              unsigned long r970 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t969);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r966, r968, r970);
              if (__cir_exc_active) {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                return __cir_eh_ret;
              }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t971 = __str939;
          unsigned long r972 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t971);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t942, r972);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
        }
    } else {
        _Bool r973 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        if (__cir_exc_active) {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
          return __cir_eh_ret;
        }
        _Bool ternary974;
        if (r973) {
          _Bool c975 = 1;
          ternary974 = (_Bool)c975;
        } else {
          _Bool t976 = __equal_allocs941;
          ternary974 = (_Bool)t976;
        }
        if (ternary974) {
          char* __data977;
          unsigned long __capacity978;
          char* c979 = ((void*)0);
          __data977 = c979;
            _Bool r980 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t942);
            if (__cir_exc_active) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
              return __cir_eh_ret;
            }
            _Bool u981 = !r980;
            if (u981) {
                _Bool t982 = __equal_allocs941;
                if (t982) {
                  char* r983 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t942);
                  if (__cir_exc_active) {
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                    return __cir_eh_ret;
                  }
                  __data977 = r983;
                  unsigned long t984 = t942->field2._M_allocated_capacity;
                  __capacity978 = t984;
                } else {
                  unsigned long t985 = t942->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t942, t985);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t986 = __str939;
          char* r987 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t986);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t942, r987);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t988 = __str939;
          unsigned long r989 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t988);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t942, r989);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t990 = __str939;
          unsigned long t991 = t990->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t942, t991);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
            char* t992 = __data977;
            _Bool cast993 = (_Bool)t992;
            if (cast993) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t994 = __str939;
              char* t995 = __data977;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t994, t995);
              if (__cir_exc_active) {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                return __cir_eh_ret;
              }
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t996 = __str939;
              unsigned long t997 = __capacity978;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t996, t997);
              if (__cir_exc_active) {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                return __cir_eh_ret;
              }
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t998 = __str939;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t999 = __str939;
              char* r1000 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t999);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t998, r1000);
              if (__cir_exc_active) {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                return __cir_eh_ret;
              }
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1001 = __str939;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t942, t1001);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1002 = __str939;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t1002);
  __retval940 = t942;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1003 = __retval940;
  return t1003;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1004) {
bb1005:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1006;
  this1006 = v1004;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1007 = this1006;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1007);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1007->_M_dataplus);
      }
      return;
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1007->_M_dataplus);
  }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v1008, int v1009) {
bb1010:
  int __a1011;
  int __b1012;
  int __retval1013;
  __a1011 = v1008;
  __b1012 = v1009;
  int t1014 = __a1011;
  int t1015 = __b1012;
  int b1016 = t1014 | t1015;
  __retval1013 = b1016;
  int t1017 = __retval1013;
  return t1017;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v1018) {
bb1019:
  struct std__basic_ios_char__std__char_traits_char__* this1020;
  int __retval1021;
  this1020 = v1018;
  struct std__basic_ios_char__std__char_traits_char__* t1022 = this1020;
  struct std__ios_base* base1023 = (struct std__ios_base*)((char *)t1022 + 0);
  int t1024 = base1023->_M_streambuf_state;
  __retval1021 = t1024;
  int t1025 = __retval1021;
  return t1025;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v1026, int v1027) {
bb1028:
  struct std__basic_ios_char__std__char_traits_char__* this1029;
  int __state1030;
  this1029 = v1026;
  __state1030 = v1027;
  struct std__basic_ios_char__std__char_traits_char__* t1031 = this1029;
  int r1032 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t1031);
  if (__cir_exc_active) {
    return;
  }
  int t1033 = __state1030;
  int r1034 = std__operator__2(r1032, t1033);
  std__basic_ios_char__std__char_traits_char_____clear(t1031, r1034);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1035, char* v1036) {
bb1037:
  struct std__basic_ostream_char__std__char_traits_char__* __out1038;
  char* __s1039;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1040;
  __out1038 = v1035;
  __s1039 = v1036;
    char* t1041 = __s1039;
    _Bool cast1042 = (_Bool)t1041;
    _Bool u1043 = !cast1042;
    if (u1043) {
      struct std__basic_ostream_char__std__char_traits_char__* t1044 = __out1038;
      void** v1045 = (void**)t1044;
      void* v1046 = *((void**)v1045);
      unsigned char* cast1047 = (unsigned char*)v1046;
      long c1048 = -24;
      unsigned char* ptr1049 = &(cast1047)[c1048];
      long* cast1050 = (long*)ptr1049;
      long t1051 = *cast1050;
      unsigned char* cast1052 = (unsigned char*)t1044;
      unsigned char* ptr1053 = &(cast1052)[t1051];
      struct std__basic_ostream_char__std__char_traits_char__* cast1054 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1053;
      struct std__basic_ios_char__std__char_traits_char__* cast1055 = (struct std__basic_ios_char__std__char_traits_char__*)cast1054;
      int t1056 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast1055, t1056);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t1057 = __out1038;
      char* t1058 = __s1039;
      char* t1059 = __s1039;
      unsigned long r1060 = std__char_traits_char___length(t1059);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast1061 = (long)r1060;
      struct std__basic_ostream_char__std__char_traits_char__* r1062 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1057, t1058, cast1061);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t1063 = __out1038;
  __retval1040 = t1063;
  struct std__basic_ostream_char__std__char_traits_char__* t1064 = __retval1040;
  return t1064;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* v1065) {
bb1066:
  struct std__basic_ios_char__std__char_traits_char__* this1067;
  this1067 = v1065;
  struct std__basic_ios_char__std__char_traits_char__* t1068 = this1067;
  struct std__ios_base* base1069 = (struct std__ios_base*)((char *)t1068 + 0);
  std__ios_base__ios_base(base1069);
    void* v1070 = (void*)&_ZTVSt9basic_iosIcSt11char_traitsIcEE[2];
    void** v1071 = (void**)t1068;
    *(void**)(v1071) = (void*)v1070;
    struct std__basic_ostream_char__std__char_traits_char__* c1072 = ((void*)0);
    t1068->_M_tie = c1072;
    char c1073 = 0;
    t1068->_M_fill = c1073;
    _Bool c1074 = 0;
    t1068->_M_fill_init = c1074;
    struct std__basic_streambuf_char__std__char_traits_char__* c1075 = ((void*)0);
    t1068->_M_streambuf = c1075;
    struct std__ctype_char_* c1076 = ((void*)0);
    t1068->_M_ctype = c1076;
    struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* c1077 = ((void*)0);
    t1068->_M_num_put = c1077;
    struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* c1078 = ((void*)0);
    t1068->_M_num_get = c1078;
  return;
}

// function: _ZNSoC2Ev
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v1079, void** v1080) {
bb1081:
  struct std__basic_ostream_char__std__char_traits_char__* this1082;
  void** vtt1083;
  this1082 = v1079;
  vtt1083 = v1080;
  struct std__basic_ostream_char__std__char_traits_char__* t1084 = this1082;
  void** t1085 = vtt1083;
  static void *vtt_slot1086 = 0;
  void** vtt1087 = (void**)&vtt_slot1086;
  void** cast1088 = (void**)vtt1087;
  void* t1089 = *cast1088;
  void** v1090 = (void**)t1084;
  *(void**)(v1090) = (void*)t1089;
  static void *vtt_slot1091 = 0;
  void** vtt1092 = (void**)&vtt_slot1091;
  void** cast1093 = (void**)vtt1092;
  void* t1094 = *cast1093;
  void** v1095 = (void**)t1084;
  void* v1096 = *((void**)v1095);
  unsigned char* cast1097 = (unsigned char*)v1096;
  long c1098 = -24;
  unsigned char* ptr1099 = &(cast1097)[c1098];
  long* cast1100 = (long*)ptr1099;
  long t1101 = *cast1100;
  unsigned char* cast1102 = (unsigned char*)t1084;
  unsigned char* ptr1103 = &(cast1102)[t1101];
  struct std__basic_ostream_char__std__char_traits_char__* cast1104 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1103;
  void** v1105 = (void**)cast1104;
  *(void**)(v1105) = (void*)t1094;
  void** v1106 = (void**)t1084;
  void* v1107 = *((void**)v1106);
  unsigned char* cast1108 = (unsigned char*)v1107;
  long c1109 = -24;
  unsigned char* ptr1110 = &(cast1108)[c1109];
  long* cast1111 = (long*)ptr1110;
  long t1112 = *cast1111;
  unsigned char* cast1113 = (unsigned char*)t1084;
  unsigned char* ptr1114 = &(cast1113)[t1112];
  struct std__basic_ostream_char__std__char_traits_char__* cast1115 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1114;
  struct std__basic_ios_char__std__char_traits_char__* cast1116 = (struct std__basic_ios_char__std__char_traits_char__*)cast1115;
  struct std__basic_streambuf_char__std__char_traits_char__* c1117 = ((void*)0);
  std__basic_ios_char__std__char_traits_char_____init(cast1116, c1117);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt13_Ios_OpenmodeS_
int std__operator__3(int v1118, int v1119) {
bb1120:
  int __a1121;
  int __b1122;
  int __retval1123;
  __a1121 = v1118;
  __b1122 = v1119;
  int t1124 = __a1121;
  int t1125 = __b1122;
  int b1126 = t1124 | t1125;
  __retval1123 = b1126;
  int t1127 = __retval1123;
  return t1127;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode
void std__basic_ofstream_char__std__char_traits_char_____open(struct std__basic_ofstream_char__std__char_traits_char__* v1128, char* v1129, int v1130) {
bb1131:
  struct std__basic_ofstream_char__std__char_traits_char__* this1132;
  char* __s1133;
  int __mode1134;
  this1132 = v1128;
  __s1133 = v1129;
  __mode1134 = v1130;
  struct std__basic_ofstream_char__std__char_traits_char__* t1135 = this1132;
    char* t1136 = __s1133;
    int t1137 = __mode1134;
    int t1138 = _ZNSt8ios_base3outE_const;
    int r1139 = std__operator__3(t1137, t1138);
    struct std__basic_filebuf_char__std__char_traits_char__* r1140 = std__basic_filebuf_char__std__char_traits_char_____open(&t1135->_M_filebuf, t1136, r1139);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast1141 = (_Bool)r1140;
    _Bool u1142 = !cast1141;
    if (u1142) {
      void** v1143 = (void**)t1135;
      void* v1144 = *((void**)v1143);
      unsigned char* cast1145 = (unsigned char*)v1144;
      long c1146 = -24;
      unsigned char* ptr1147 = &(cast1145)[c1146];
      long* cast1148 = (long*)ptr1147;
      long t1149 = *cast1148;
      unsigned char* cast1150 = (unsigned char*)t1135;
      unsigned char* ptr1151 = &(cast1150)[t1149];
      struct std__basic_ofstream_char__std__char_traits_char__* cast1152 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr1151;
      struct std__basic_ios_char__std__char_traits_char__* cast1153 = (struct std__basic_ios_char__std__char_traits_char__*)cast1152;
      int t1154 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast1153, t1154);
      if (__cir_exc_active) {
        return;
      }
    } else {
      void** v1155 = (void**)t1135;
      void* v1156 = *((void**)v1155);
      unsigned char* cast1157 = (unsigned char*)v1156;
      long c1158 = -24;
      unsigned char* ptr1159 = &(cast1157)[c1158];
      long* cast1160 = (long*)ptr1159;
      long t1161 = *cast1160;
      unsigned char* cast1162 = (unsigned char*)t1135;
      unsigned char* ptr1163 = &(cast1162)[t1161];
      struct std__basic_ofstream_char__std__char_traits_char__* cast1164 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr1163;
      struct std__basic_ios_char__std__char_traits_char__* cast1165 = (struct std__basic_ios_char__std__char_traits_char__*)cast1164;
      int t1166 = _ZNSt8ios_base7goodbitE_const;
      std__basic_ios_char__std__char_traits_char_____clear(cast1165, t1166);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt13basic_filebufIcSt11char_traitsIcEED2Ev
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* v1167) {
bb1168:
  struct std__basic_filebuf_char__std__char_traits_char__* this1169;
  this1169 = v1167;
  struct std__basic_filebuf_char__std__char_traits_char__* t1170 = this1169;
          struct std__basic_filebuf_char__std__char_traits_char__* r1172 = std__basic_filebuf_char__std__char_traits_char_____close(t1170);
          if (__cir_exc_active) {
            {
              std____basic_file_char______basic_file(&t1170->_M_file);
            }
            {
              struct std__basic_streambuf_char__std__char_traits_char__* base1173 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t1170 + 0);
              std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base1173);
            }
            goto cir_try_dispatch1171;
          }
        cir_try_dispatch1171: ;
        if (__cir_exc_active) {
        {
          int ca_tok1174 = 0;
          void* ca_exn1175 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
        }
        }
    {
      std____basic_file_char______basic_file(&t1170->_M_file);
    }
  {
    struct std__basic_streambuf_char__std__char_traits_char__* base1176 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t1170 + 0);
    std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base1176);
  }
  return;
}

// function: _ZNSoD2Ev
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v1177, void** v1178) {
bb1179:
  struct std__basic_ostream_char__std__char_traits_char__* this1180;
  void** vtt1181;
  this1180 = v1177;
  vtt1181 = v1178;
  struct std__basic_ostream_char__std__char_traits_char__* t1182 = this1180;
  void** t1183 = vtt1181;
  return;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* v1184) {
bb1185:
  struct std__basic_ios_char__std__char_traits_char__* this1186;
  this1186 = v1184;
  struct std__basic_ios_char__std__char_traits_char__* t1187 = this1186;
  {
    struct std__ios_base* base1188 = (struct std__ios_base*)((char *)t1187 + 0);
    std__ios_base___ios_base(base1188);
  }
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
void std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* v1189, char* v1190, int v1191) {
bb1192:
  struct std__basic_ofstream_char__std__char_traits_char__* this1193;
  char* __s1194;
  int __mode1195;
  this1193 = v1189;
  __s1194 = v1190;
  __mode1195 = v1191;
  struct std__basic_ofstream_char__std__char_traits_char__* t1196 = this1193;
  struct std__basic_ios_char__std__char_traits_char__* base1197 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1196 + 248);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base1197);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_ostream_char__std__char_traits_char__* base1198 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t1196 + 0);
    static void *vtt_slot1199 = 0;
    void** vtt1200 = (void**)&vtt_slot1199;
    std__basic_ostream_char__std__char_traits_char_____basic_ostream(base1198, vtt1200);
    if (__cir_exc_active) {
      {
        struct std__basic_ios_char__std__char_traits_char__* base1201 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1196 + 248);
        std__basic_ios_char__std__char_traits_char______basic_ios(base1201);
      }
      return;
    }
      void* v1202 = (void*)&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[3];
      void** v1203 = (void**)t1196;
      *(void**)(v1203) = (void*)v1202;
      void* v1204 = (void*)&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base1205 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1196 + 248);
      void** v1206 = (void**)base1205;
      *(void**)(v1206) = (void*)v1204;
      std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(&t1196->_M_filebuf);
      if (__cir_exc_active) {
        {
          struct std__basic_ostream_char__std__char_traits_char__* base1207 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t1196 + 0);
          static void *vtt_slot1208 = 0;
          void** vtt1209 = (void**)&vtt_slot1208;
          std__basic_ostream_char__std__char_traits_char______basic_ostream(base1207, vtt1209);
        }
        {
          struct std__basic_ios_char__std__char_traits_char__* base1210 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1196 + 248);
          std__basic_ios_char__std__char_traits_char______basic_ios(base1210);
        }
        return;
      }
        void** v1211 = (void**)t1196;
        void* v1212 = *((void**)v1211);
        unsigned char* cast1213 = (unsigned char*)v1212;
        long c1214 = -24;
        unsigned char* ptr1215 = &(cast1213)[c1214];
        long* cast1216 = (long*)ptr1215;
        long t1217 = *cast1216;
        unsigned char* cast1218 = (unsigned char*)t1196;
        unsigned char* ptr1219 = &(cast1218)[t1217];
        struct std__basic_ofstream_char__std__char_traits_char__* cast1220 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr1219;
        struct std__basic_ios_char__std__char_traits_char__* cast1221 = (struct std__basic_ios_char__std__char_traits_char__*)cast1220;
        struct std__basic_streambuf_char__std__char_traits_char__* base1222 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t1196->_M_filebuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast1221, base1222);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t1196->_M_filebuf);
          }
          {
            struct std__basic_ostream_char__std__char_traits_char__* base1223 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t1196 + 0);
            static void *vtt_slot1224 = 0;
            void** vtt1225 = (void**)&vtt_slot1224;
            std__basic_ostream_char__std__char_traits_char______basic_ostream(base1223, vtt1225);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base1226 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1196 + 248);
            std__basic_ios_char__std__char_traits_char______basic_ios(base1226);
          }
          return;
        }
        char* t1227 = __s1194;
        int t1228 = __mode1195;
        std__basic_ofstream_char__std__char_traits_char_____open(t1196, t1227, t1228);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t1196->_M_filebuf);
          }
          {
            struct std__basic_ostream_char__std__char_traits_char__* base1229 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t1196 + 0);
            static void *vtt_slot1230 = 0;
            void** vtt1231 = (void**)&vtt_slot1230;
            std__basic_ostream_char__std__char_traits_char______basic_ostream(base1229, vtt1231);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base1232 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1196 + 248);
            std__basic_ios_char__std__char_traits_char______basic_ios(base1232);
          }
          return;
        }
  return;
}

// function: _ZStanSt12_Ios_IostateS_
int std__operator_(int v1233, int v1234) {
bb1235:
  int __a1236;
  int __b1237;
  int __retval1238;
  __a1236 = v1233;
  __b1237 = v1234;
  int t1239 = __a1236;
  int t1240 = __b1237;
  int b1241 = t1239 & t1240;
  __retval1238 = b1241;
  int t1242 = __retval1238;
  return t1242;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE4failEv
_Bool std__basic_ios_char__std__char_traits_char_____fail___const(struct std__basic_ios_char__std__char_traits_char__* v1243) {
bb1244:
  struct std__basic_ios_char__std__char_traits_char__* this1245;
  _Bool __retval1246;
  this1245 = v1243;
  struct std__basic_ios_char__std__char_traits_char__* t1247 = this1245;
  int r1248 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t1247);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int t1249 = _ZNSt8ios_base6badbitE_const;
  int t1250 = _ZNSt8ios_base7failbitE_const;
  int r1251 = std__operator__2(t1249, t1250);
  int r1252 = std__operator_(r1248, r1251);
  int c1253 = 0;
  _Bool c1254 = ((r1252 != c1253)) ? 1 : 0;
  __retval1246 = c1254;
  _Bool t1255 = __retval1246;
  return t1255;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEntEv
_Bool std__basic_ios_char__std__char_traits_char_____operator____const(struct std__basic_ios_char__std__char_traits_char__* v1256) {
bb1257:
  struct std__basic_ios_char__std__char_traits_char__* this1258;
  _Bool __retval1259;
  this1258 = v1256;
  struct std__basic_ios_char__std__char_traits_char__* t1260 = this1258;
  _Bool r1261 = std__basic_ios_char__std__char_traits_char_____fail___const(t1260);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval1259 = r1261;
  _Bool t1262 = __retval1259;
  return t1262;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v1263, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1264) {
bb1265:
  struct std__basic_ostream_char__std__char_traits_char__* __os1266;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1267;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1268;
  __os1266 = v1263;
  __str1267 = v1264;
  struct std__basic_ostream_char__std__char_traits_char__* t1269 = __os1266;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1270 = __str1267;
  char* r1271 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1270);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1272 = __str1267;
  unsigned long r1273 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1272);
  long cast1274 = (long)r1273;
  struct std__basic_ostream_char__std__char_traits_char__* r1275 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1269, r1271, cast1274);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1268 = r1275;
  struct std__basic_ostream_char__std__char_traits_char__* t1276 = __retval1268;
  return t1276;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEED2Ev
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(struct std__basic_ofstream_char__std__char_traits_char__* v1277, void** v1278) {
bb1279:
  struct std__basic_ofstream_char__std__char_traits_char__* this1280;
  void** vtt1281;
  this1280 = v1277;
  vtt1281 = v1278;
  struct std__basic_ofstream_char__std__char_traits_char__* t1282 = this1280;
  void** t1283 = vtt1281;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t1282->_M_filebuf);
    }
  {
    struct std__basic_ostream_char__std__char_traits_char__* base1284 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t1282 + 0);
    static void *vtt_slot1285 = 0;
    void** vtt1286 = (void**)&vtt_slot1285;
    std__basic_ostream_char__std__char_traits_char______basic_ostream(base1284, vtt1286);
  }
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* v1287) {
bb1288:
  struct std__basic_ofstream_char__std__char_traits_char__* this1289;
  this1289 = v1287;
  struct std__basic_ofstream_char__std__char_traits_char__* t1290 = this1289;
    static void *vtt_slot1291 = 0;
    void** vtt1292 = (void**)&vtt_slot1291;
    std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(t1290, vtt1292);
  {
    struct std__basic_ios_char__std__char_traits_char__* base1293 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1290 + 248);
    std__basic_ios_char__std__char_traits_char______basic_ios(base1293);
  }
  return;
}

// function: main
int main() {
bb1294:
  int __retval1295;
  char postString1296[1024];
  int contentLength1297;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ dataString1298;
  struct std__allocator_char_ ref_tmp01299;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ firstname1300;
  struct std__allocator_char_ ref_tmp11301;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ lastname1302;
  struct std__allocator_char_ ref_tmp21303;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ address1304;
  struct std__allocator_char_ ref_tmp31305;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ town1306;
  struct std__allocator_char_ ref_tmp41307;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ state1308;
  struct std__allocator_char_ ref_tmp51309;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ zipcode1310;
  struct std__allocator_char_ ref_tmp61311;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ country1312;
  struct std__allocator_char_ ref_tmp71313;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ email1314;
  struct std__allocator_char_ ref_tmp81315;
  int charLocation1316;
  int firstStart1317;
  int endFirst1318;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp91319;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1320;
  int lastStart1321;
  int endLast1322;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp101323;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1324;
  int addressStart1325;
  int endAddress1326;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp111327;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1328;
  int townStart1329;
  int endTown1330;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp121331;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1332;
  int stateStart1333;
  int endState1334;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp131335;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1336;
  int zipStart1337;
  int endZip1338;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp141339;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1340;
  int countryStart1341;
  int endCountry1342;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp151343;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1344;
  int emailStart1345;
  int endEmail1346;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp161347;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1348;
  struct std__basic_ofstream_char__std__char_traits_char__ outFile1349;
  int c1350 = 0;
  __retval1295 = c1350;
  // array copy
  __builtin_memcpy(postString1296, __const_main_postString, (unsigned long)1024 * sizeof(__const_main_postString[0]));
  int c1351 = 0;
  contentLength1297 = c1351;
  char* cast1352 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp01299);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&dataString1298, cast1352, &ref_tmp01299);
    if (__cir_exc_active) {
      {
        std__allocator_char____allocator(&ref_tmp01299);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  {
    std__allocator_char____allocator(&ref_tmp01299);
  }
    char* cast1353 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp11301);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&firstname1300, cast1353, &ref_tmp11301);
      if (__cir_exc_active) {
        {
          std__allocator_char____allocator(&ref_tmp11301);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
    {
      std__allocator_char____allocator(&ref_tmp11301);
    }
      char* cast1354 = (char*)&(_str);
      std__allocator_char___allocator_2(&ref_tmp21303);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&lastname1302, cast1354, &ref_tmp21303);
        if (__cir_exc_active) {
          {
            std__allocator_char____allocator(&ref_tmp21303);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      {
        std__allocator_char____allocator(&ref_tmp21303);
      }
        char* cast1355 = (char*)&(_str);
        std__allocator_char___allocator_2(&ref_tmp31305);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&address1304, cast1355, &ref_tmp31305);
          if (__cir_exc_active) {
            {
              std__allocator_char____allocator(&ref_tmp31305);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
        {
          std__allocator_char____allocator(&ref_tmp31305);
        }
          char* cast1356 = (char*)&(_str);
          std__allocator_char___allocator_2(&ref_tmp41307);
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&town1306, cast1356, &ref_tmp41307);
            if (__cir_exc_active) {
              {
                std__allocator_char____allocator(&ref_tmp41307);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
          {
            std__allocator_char____allocator(&ref_tmp41307);
          }
            char* cast1357 = (char*)&(_str);
            std__allocator_char___allocator_2(&ref_tmp51309);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&state1308, cast1357, &ref_tmp51309);
              if (__cir_exc_active) {
                {
                  std__allocator_char____allocator(&ref_tmp51309);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
            {
              std__allocator_char____allocator(&ref_tmp51309);
            }
              char* cast1358 = (char*)&(_str);
              std__allocator_char___allocator_2(&ref_tmp61311);
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&zipcode1310, cast1358, &ref_tmp61311);
                if (__cir_exc_active) {
                  {
                    std__allocator_char____allocator(&ref_tmp61311);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                  }
                  int __cir_eh_ret = (int)0;
                  return __cir_eh_ret;
                }
              {
                std__allocator_char____allocator(&ref_tmp61311);
              }
                char* cast1359 = (char*)&(_str);
                std__allocator_char___allocator_2(&ref_tmp71313);
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&country1312, cast1359, &ref_tmp71313);
                  if (__cir_exc_active) {
                    {
                      std__allocator_char____allocator(&ref_tmp71313);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                {
                  std__allocator_char____allocator(&ref_tmp71313);
                }
                  char* cast1360 = (char*)&(_str);
                  std__allocator_char___allocator_2(&ref_tmp81315);
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&email1314, cast1360, &ref_tmp81315);
                    if (__cir_exc_active) {
                      {
                        std__allocator_char____allocator(&ref_tmp81315);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                  {
                    std__allocator_char____allocator(&ref_tmp81315);
                  }
                      char* cast1361 = (char*)&(_str_1);
                      char* r1362 = getenv(cast1361);
                      _Bool cast1363 = (_Bool)r1362;
                      if (cast1363) {
                        char* cast1364 = (char*)&(_str_1);
                        char* r1365 = getenv(cast1364);
                        int r1366 = atoi(r1365);
                        contentLength1297 = r1366;
                      }
                    char* cast1367 = (char*)&(postString1296);
                    int t1368 = contentLength1297;
                    long cast1369 = (long)t1368;
                    struct std__basic_istream_char__std__char_traits_char__* r1370 = std__istream__read(&_ZSt3cin, cast1367, cast1369);
                    if (__cir_exc_active) {
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                    char* cast1371 = (char*)&(postString1296);
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1372 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(&dataString1298, cast1371);
                    if (__cir_exc_active) {
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                    char* cast1373 = (char*)&(_str_2);
                    unsigned long c1374 = 0;
                    unsigned long r1375 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1298, cast1373, c1374);
                    int cast1376 = (int)r1375;
                    charLocation1316 = cast1376;
                      while (1) {
                        int t1377 = charLocation1316;
                        unsigned long cast1378 = (unsigned long)t1377;
                        unsigned long t1379 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
                        _Bool c1380 = ((cast1378 < t1379)) ? 1 : 0;
                        if (!c1380) break;
                          int t1381 = charLocation1316;
                          unsigned long cast1382 = (unsigned long)t1381;
                          unsigned long c1383 = 1;
                          char* cast1384 = (char*)&(_str_3);
                          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1385 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(&dataString1298, cast1382, c1383, cast1384);
                          if (__cir_exc_active) {
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                            }
                            int __cir_eh_ret = (int)0;
                            return __cir_eh_ret;
                          }
                          char* cast1386 = (char*)&(_str_2);
                          int t1387 = charLocation1316;
                          int c1388 = 1;
                          int b1389 = t1387 + c1388;
                          unsigned long cast1390 = (unsigned long)b1389;
                          unsigned long r1391 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1298, cast1386, cast1390);
                          int cast1392 = (int)r1391;
                          charLocation1316 = cast1392;
                      }
                    char* cast1393 = (char*)&(_str_4);
                    unsigned long c1394 = 0;
                    unsigned long r1395 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1298, cast1393, c1394);
                    unsigned long c1396 = 10;
                    unsigned long b1397 = r1395 + c1396;
                    int cast1398 = (int)b1397;
                    firstStart1317 = cast1398;
                    char* cast1399 = (char*)&(_str_5);
                    unsigned long c1400 = 0;
                    unsigned long r1401 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1298, cast1399, c1400);
                    int cast1402 = (int)r1401;
                    endFirst1318 = cast1402;
                    int t1403 = firstStart1317;
                    unsigned long cast1404 = (unsigned long)t1403;
                    int t1405 = endFirst1318;
                    int t1406 = firstStart1317;
                    int b1407 = t1405 - t1406;
                    unsigned long cast1408 = (unsigned long)b1407;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1409 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&dataString1298, cast1404, cast1408);
                    if (__cir_exc_active) {
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                    ref_tmp91319 = r1409;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1410 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&firstname1300, &ref_tmp91319);
                      tmp_exprcleanup1320 = r1410;
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp91319);
                    }
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1411 = tmp_exprcleanup1320;
                    char* cast1412 = (char*)&(_str_6);
                    unsigned long c1413 = 0;
                    unsigned long r1414 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1298, cast1412, c1413);
                    unsigned long c1415 = 9;
                    unsigned long b1416 = r1414 + c1415;
                    int cast1417 = (int)b1416;
                    lastStart1321 = cast1417;
                    char* cast1418 = (char*)&(_str_7);
                    unsigned long c1419 = 0;
                    unsigned long r1420 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1298, cast1418, c1419);
                    int cast1421 = (int)r1420;
                    endLast1322 = cast1421;
                    int t1422 = lastStart1321;
                    unsigned long cast1423 = (unsigned long)t1422;
                    int t1424 = endLast1322;
                    int t1425 = lastStart1321;
                    int b1426 = t1424 - t1425;
                    unsigned long cast1427 = (unsigned long)b1426;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1428 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&dataString1298, cast1423, cast1427);
                    if (__cir_exc_active) {
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                    ref_tmp101323 = r1428;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1429 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&lastname1302, &ref_tmp101323);
                      tmp_exprcleanup1324 = r1429;
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp101323);
                    }
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1430 = tmp_exprcleanup1324;
                    char* cast1431 = (char*)&(_str_8);
                    unsigned long c1432 = 0;
                    unsigned long r1433 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1298, cast1431, c1432);
                    unsigned long c1434 = 8;
                    unsigned long b1435 = r1433 + c1434;
                    int cast1436 = (int)b1435;
                    addressStart1325 = cast1436;
                    char* cast1437 = (char*)&(_str_9);
                    unsigned long c1438 = 0;
                    unsigned long r1439 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1298, cast1437, c1438);
                    int cast1440 = (int)r1439;
                    endAddress1326 = cast1440;
                    int t1441 = addressStart1325;
                    unsigned long cast1442 = (unsigned long)t1441;
                    int t1443 = endAddress1326;
                    int t1444 = addressStart1325;
                    int b1445 = t1443 - t1444;
                    unsigned long cast1446 = (unsigned long)b1445;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1447 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&dataString1298, cast1442, cast1446);
                    if (__cir_exc_active) {
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                    ref_tmp111327 = r1447;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1448 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&address1304, &ref_tmp111327);
                      tmp_exprcleanup1328 = r1448;
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp111327);
                    }
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1449 = tmp_exprcleanup1328;
                    char* cast1450 = (char*)&(_str_10);
                    unsigned long c1451 = 0;
                    unsigned long r1452 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1298, cast1450, c1451);
                    unsigned long c1453 = 5;
                    unsigned long b1454 = r1452 + c1453;
                    int cast1455 = (int)b1454;
                    townStart1329 = cast1455;
                    char* cast1456 = (char*)&(_str_11);
                    unsigned long c1457 = 0;
                    unsigned long r1458 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1298, cast1456, c1457);
                    int cast1459 = (int)r1458;
                    endTown1330 = cast1459;
                    int t1460 = townStart1329;
                    unsigned long cast1461 = (unsigned long)t1460;
                    int t1462 = endTown1330;
                    int t1463 = townStart1329;
                    int b1464 = t1462 - t1463;
                    unsigned long cast1465 = (unsigned long)b1464;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1466 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&dataString1298, cast1461, cast1465);
                    if (__cir_exc_active) {
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                    ref_tmp121331 = r1466;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1467 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&town1306, &ref_tmp121331);
                      tmp_exprcleanup1332 = r1467;
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp121331);
                    }
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1468 = tmp_exprcleanup1332;
                    char* cast1469 = (char*)&(_str_12);
                    unsigned long c1470 = 0;
                    unsigned long r1471 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1298, cast1469, c1470);
                    unsigned long c1472 = 6;
                    unsigned long b1473 = r1471 + c1472;
                    int cast1474 = (int)b1473;
                    stateStart1333 = cast1474;
                    char* cast1475 = (char*)&(_str_13);
                    unsigned long c1476 = 0;
                    unsigned long r1477 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1298, cast1475, c1476);
                    int cast1478 = (int)r1477;
                    endState1334 = cast1478;
                    int t1479 = stateStart1333;
                    unsigned long cast1480 = (unsigned long)t1479;
                    int t1481 = endState1334;
                    int t1482 = stateStart1333;
                    int b1483 = t1481 - t1482;
                    unsigned long cast1484 = (unsigned long)b1483;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1485 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&dataString1298, cast1480, cast1484);
                    if (__cir_exc_active) {
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                    ref_tmp131335 = r1485;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1486 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&state1308, &ref_tmp131335);
                      tmp_exprcleanup1336 = r1486;
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp131335);
                    }
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1487 = tmp_exprcleanup1336;
                    char* cast1488 = (char*)&(_str_14);
                    unsigned long c1489 = 0;
                    unsigned long r1490 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1298, cast1488, c1489);
                    unsigned long c1491 = 8;
                    unsigned long b1492 = r1490 + c1491;
                    int cast1493 = (int)b1492;
                    zipStart1337 = cast1493;
                    char* cast1494 = (char*)&(_str_15);
                    unsigned long c1495 = 0;
                    unsigned long r1496 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1298, cast1494, c1495);
                    int cast1497 = (int)r1496;
                    endZip1338 = cast1497;
                    int t1498 = zipStart1337;
                    unsigned long cast1499 = (unsigned long)t1498;
                    int t1500 = endZip1338;
                    int t1501 = zipStart1337;
                    int b1502 = t1500 - t1501;
                    unsigned long cast1503 = (unsigned long)b1502;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1504 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&dataString1298, cast1499, cast1503);
                    if (__cir_exc_active) {
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                    ref_tmp141339 = r1504;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1505 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&zipcode1310, &ref_tmp141339);
                      tmp_exprcleanup1340 = r1505;
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp141339);
                    }
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1506 = tmp_exprcleanup1340;
                    char* cast1507 = (char*)&(_str_16);
                    unsigned long c1508 = 0;
                    unsigned long r1509 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1298, cast1507, c1508);
                    unsigned long c1510 = 8;
                    unsigned long b1511 = r1509 + c1510;
                    int cast1512 = (int)b1511;
                    countryStart1341 = cast1512;
                    char* cast1513 = (char*)&(_str_17);
                    unsigned long c1514 = 0;
                    unsigned long r1515 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1298, cast1513, c1514);
                    int cast1516 = (int)r1515;
                    endCountry1342 = cast1516;
                    int t1517 = countryStart1341;
                    unsigned long cast1518 = (unsigned long)t1517;
                    int t1519 = endCountry1342;
                    int t1520 = countryStart1341;
                    int b1521 = t1519 - t1520;
                    unsigned long cast1522 = (unsigned long)b1521;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1523 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&dataString1298, cast1518, cast1522);
                    if (__cir_exc_active) {
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                    ref_tmp151343 = r1523;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1524 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&country1312, &ref_tmp151343);
                      tmp_exprcleanup1344 = r1524;
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp151343);
                    }
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1525 = tmp_exprcleanup1344;
                    char* cast1526 = (char*)&(_str_18);
                    unsigned long c1527 = 0;
                    unsigned long r1528 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1298, cast1526, c1527);
                    unsigned long c1529 = 6;
                    unsigned long b1530 = r1528 + c1529;
                    int cast1531 = (int)b1530;
                    emailStart1345 = cast1531;
                    char* cast1532 = (char*)&(_str_19);
                    unsigned long c1533 = 0;
                    unsigned long r1534 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1298, cast1532, c1533);
                    int cast1535 = (int)r1534;
                    endEmail1346 = cast1535;
                    int t1536 = emailStart1345;
                    unsigned long cast1537 = (unsigned long)t1536;
                    int t1538 = endEmail1346;
                    int t1539 = emailStart1345;
                    int b1540 = t1538 - t1539;
                    unsigned long cast1541 = (unsigned long)b1540;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1542 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&dataString1298, cast1537, cast1541);
                    if (__cir_exc_active) {
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                    ref_tmp161347 = r1542;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1543 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&email1314, &ref_tmp161347);
                      tmp_exprcleanup1348 = r1543;
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp161347);
                    }
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1544 = tmp_exprcleanup1348;
                    char* cast1545 = (char*)&(_str_20);
                    struct std__basic_ostream_char__std__char_traits_char__* r1546 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1545);
                    if (__cir_exc_active) {
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                    char* cast1547 = (char*)&(_str_21);
                    struct std__basic_ostream_char__std__char_traits_char__* r1548 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1547);
                    if (__cir_exc_active) {
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                    char* cast1549 = (char*)&(_str_22);
                    struct std__basic_ostream_char__std__char_traits_char__* r1550 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1548, cast1549);
                    if (__cir_exc_active) {
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                    char* cast1551 = (char*)&(_str_23);
                    struct std__basic_ostream_char__std__char_traits_char__* r1552 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1550, cast1551);
                    if (__cir_exc_active) {
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                    char* cast1553 = (char*)&(_str_24);
                    struct std__basic_ostream_char__std__char_traits_char__* r1554 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1552, cast1553);
                    if (__cir_exc_active) {
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                    char* cast1555 = (char*)&(_str_25);
                    struct std__basic_ostream_char__std__char_traits_char__* r1556 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1555);
                    if (__cir_exc_active) {
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                    char* cast1557 = (char*)&(_str_26);
                    struct std__basic_ostream_char__std__char_traits_char__* r1558 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1556, cast1557);
                    if (__cir_exc_active) {
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                    char* cast1559 = (char*)&(_str_27);
                    struct std__basic_ostream_char__std__char_traits_char__* r1560 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1558, cast1559);
                    if (__cir_exc_active) {
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                    char* cast1561 = (char*)&(_str_28);
                    int t1562 = _ZNSt8ios_base3appE_const;
                    std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(&outFile1349, cast1561, t1562);
                    if (__cir_exc_active) {
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                        void** v1563 = (void**)&(outFile1349);
                        void* v1564 = *((void**)v1563);
                        unsigned char* cast1565 = (unsigned char*)v1564;
                        long c1566 = -24;
                        unsigned char* ptr1567 = &(cast1565)[c1566];
                        long* cast1568 = (long*)ptr1567;
                        long t1569 = *cast1568;
                        unsigned char* cast1570 = (unsigned char*)&(outFile1349);
                        unsigned char* ptr1571 = &(cast1570)[t1569];
                        struct std__basic_ofstream_char__std__char_traits_char__* cast1572 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr1571;
                        struct std__basic_ios_char__std__char_traits_char__* cast1573 = (struct std__basic_ios_char__std__char_traits_char__*)cast1572;
                        _Bool r1574 = std__basic_ios_char__std__char_traits_char_____operator____const(cast1573);
                        if (__cir_exc_active) {
                          {
                            std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                          }
                          {
                            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                          }
                          {
                            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                          }
                          {
                            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                          }
                          {
                            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                          }
                          {
                            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                          }
                          {
                            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                          }
                          {
                            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                          }
                          {
                            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                          }
                          {
                            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                          }
                          int __cir_eh_ret = (int)0;
                          return __cir_eh_ret;
                        }
                        if (r1574) {
                          char* cast1575 = (char*)&(_str_29);
                          struct std__basic_ostream_char__std__char_traits_char__* r1576 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cerr, cast1575);
                          if (__cir_exc_active) {
                            {
                              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                            }
                            int __cir_eh_ret = (int)0;
                            return __cir_eh_ret;
                          }
                          int c1577 = 1;
                          exit(c1577);
                        }
                      struct std__basic_ostream_char__std__char_traits_char__* base1578 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outFile1349) + 0);
                      struct std__basic_ostream_char__std__char_traits_char__* r1579 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(base1578, &firstname1300);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1580 = (char*)&(_str_3);
                      struct std__basic_ostream_char__std__char_traits_char__* r1581 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1579, cast1580);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      struct std__basic_ostream_char__std__char_traits_char__* r1582 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1581, &lastname1302);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1583 = (char*)&(_str_30);
                      struct std__basic_ostream_char__std__char_traits_char__* r1584 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1582, cast1583);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      struct std__basic_ostream_char__std__char_traits_char__* r1585 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1584, &address1304);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1586 = (char*)&(_str_30);
                      struct std__basic_ostream_char__std__char_traits_char__* r1587 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1585, cast1586);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      struct std__basic_ostream_char__std__char_traits_char__* r1588 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1587, &town1306);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1589 = (char*)&(_str_3);
                      struct std__basic_ostream_char__std__char_traits_char__* r1590 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1588, cast1589);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      struct std__basic_ostream_char__std__char_traits_char__* r1591 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1590, &state1308);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1592 = (char*)&(_str_3);
                      struct std__basic_ostream_char__std__char_traits_char__* r1593 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1591, cast1592);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      struct std__basic_ostream_char__std__char_traits_char__* r1594 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1593, &country1312);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1595 = (char*)&(_str_3);
                      struct std__basic_ostream_char__std__char_traits_char__* r1596 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1594, cast1595);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      struct std__basic_ostream_char__std__char_traits_char__* r1597 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1596, &zipcode1310);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1598 = (char*)&(_str_30);
                      struct std__basic_ostream_char__std__char_traits_char__* r1599 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1597, cast1598);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      struct std__basic_ostream_char__std__char_traits_char__* r1600 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1599, &email1314);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1601 = (char*)&(_str_31);
                      struct std__basic_ostream_char__std__char_traits_char__* r1602 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1600, cast1601);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1603 = (char*)&(_str_32);
                      struct std__basic_ostream_char__std__char_traits_char__* r1604 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1603);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1605 = (char*)&(_str_33);
                      struct std__basic_ostream_char__std__char_traits_char__* r1606 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1604, cast1605);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      struct std__basic_ostream_char__std__char_traits_char__* r1607 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1606, &firstname1300);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1608 = (char*)&(_str_34);
                      struct std__basic_ostream_char__std__char_traits_char__* r1609 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1607, cast1608);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1610 = (char*)&(_str_35);
                      struct std__basic_ostream_char__std__char_traits_char__* r1611 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1609, cast1610);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      struct std__basic_ostream_char__std__char_traits_char__* r1612 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1611, &lastname1302);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1613 = (char*)&(_str_34);
                      struct std__basic_ostream_char__std__char_traits_char__* r1614 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1612, cast1613);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1615 = (char*)&(_str_36);
                      struct std__basic_ostream_char__std__char_traits_char__* r1616 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1614, cast1615);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      struct std__basic_ostream_char__std__char_traits_char__* r1617 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1616, &address1304);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1618 = (char*)&(_str_34);
                      struct std__basic_ostream_char__std__char_traits_char__* r1619 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1617, cast1618);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1620 = (char*)&(_str_37);
                      struct std__basic_ostream_char__std__char_traits_char__* r1621 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1619, cast1620);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      struct std__basic_ostream_char__std__char_traits_char__* r1622 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1621, &town1306);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1623 = (char*)&(_str_34);
                      struct std__basic_ostream_char__std__char_traits_char__* r1624 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1622, cast1623);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1625 = (char*)&(_str_38);
                      struct std__basic_ostream_char__std__char_traits_char__* r1626 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1624, cast1625);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      struct std__basic_ostream_char__std__char_traits_char__* r1627 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1626, &state1308);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1628 = (char*)&(_str_34);
                      struct std__basic_ostream_char__std__char_traits_char__* r1629 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1627, cast1628);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1630 = (char*)&(_str_39);
                      struct std__basic_ostream_char__std__char_traits_char__* r1631 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1629, cast1630);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      struct std__basic_ostream_char__std__char_traits_char__* r1632 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1631, &zipcode1310);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1633 = (char*)&(_str_34);
                      struct std__basic_ostream_char__std__char_traits_char__* r1634 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1632, cast1633);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1635 = (char*)&(_str_40);
                      struct std__basic_ostream_char__std__char_traits_char__* r1636 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1634, cast1635);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      struct std__basic_ostream_char__std__char_traits_char__* r1637 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1636, &country1312);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1638 = (char*)&(_str_34);
                      struct std__basic_ostream_char__std__char_traits_char__* r1639 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1637, cast1638);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1640 = (char*)&(_str_41);
                      struct std__basic_ostream_char__std__char_traits_char__* r1641 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1639, cast1640);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      struct std__basic_ostream_char__std__char_traits_char__* r1642 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1641, &email1314);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1643 = (char*)&(_str_34);
                      struct std__basic_ostream_char__std__char_traits_char__* r1644 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1642, cast1643);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1645 = (char*)&(_str_42);
                      struct std__basic_ostream_char__std__char_traits_char__* r1646 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1644, cast1645);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1647 = (char*)&(_str_43);
                      struct std__basic_ostream_char__std__char_traits_char__* r1648 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1646, cast1647);
                      if (__cir_exc_active) {
                        {
                          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      int c1649 = 0;
                      __retval1295 = c1649;
                      int t1650 = __retval1295;
                      int ret_val1651 = t1650;
                      {
                        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile1349);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&email1314);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&country1312);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&zipcode1310);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&state1308);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&town1306);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&address1304);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&lastname1302);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&firstname1300);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1298);
                      }
                      return ret_val1651;
  int t1652 = __retval1295;
  return t1652;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1653) {
bb1654:
  struct std____new_allocator_char_* this1655;
  this1655 = v1653;
  struct std____new_allocator_char_* t1656 = this1655;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1657) {
bb1658:
  char* __r1659;
  char* __retval1660;
  __r1659 = v1657;
  char* t1661 = __r1659;
  __retval1660 = t1661;
  char* t1662 = __retval1660;
  return t1662;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1663) {
bb1664:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1665;
  char* __retval1666;
  this1665 = v1663;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1667 = this1665;
  char* cast1668 = (char*)&(t1667->field2._M_local_buf);
  char* r1669 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1668);
  __retval1666 = r1669;
  char* t1670 = __retval1666;
  return t1670;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1671, char* v1672, struct std__allocator_char_* v1673) {
bb1674:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1675;
  char* __dat1676;
  struct std__allocator_char_* __a1677;
  this1675 = v1671;
  __dat1676 = v1672;
  __a1677 = v1673;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1678 = this1675;
  struct std__allocator_char_* base1679 = (struct std__allocator_char_*)((char *)t1678 + 0);
  struct std__allocator_char_* t1680 = __a1677;
  std__allocator_char___allocator(base1679, t1680);
    char* t1681 = __dat1676;
    t1678->_M_p = t1681;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1682:
  _Bool __retval1683;
    _Bool c1684 = 0;
    __retval1683 = c1684;
    _Bool t1685 = __retval1683;
    return t1685;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1686, char* v1687) {
bb1688:
  char* __c11689;
  char* __c21690;
  _Bool __retval1691;
  __c11689 = v1686;
  __c21690 = v1687;
  char* t1692 = __c11689;
  char t1693 = *t1692;
  int cast1694 = (int)t1693;
  char* t1695 = __c21690;
  char t1696 = *t1695;
  int cast1697 = (int)t1696;
  _Bool c1698 = ((cast1694 == cast1697)) ? 1 : 0;
  __retval1691 = c1698;
  _Bool t1699 = __retval1691;
  return t1699;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1700) {
bb1701:
  char* __p1702;
  unsigned long __retval1703;
  unsigned long __i1704;
  __p1702 = v1700;
  unsigned long c1705 = 0;
  __i1704 = c1705;
    char ref_tmp01706;
    while (1) {
      unsigned long t1707 = __i1704;
      char* t1708 = __p1702;
      char* ptr1709 = &(t1708)[t1707];
      char c1710 = 0;
      ref_tmp01706 = c1710;
      _Bool r1711 = __gnu_cxx__char_traits_char___eq(ptr1709, &ref_tmp01706);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u1712 = !r1711;
      if (!u1712) break;
      unsigned long t1713 = __i1704;
      unsigned long u1714 = t1713 + 1;
      __i1704 = u1714;
    }
  unsigned long t1715 = __i1704;
  __retval1703 = t1715;
  unsigned long t1716 = __retval1703;
  return t1716;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1717) {
bb1718:
  char* __s1719;
  unsigned long __retval1720;
  __s1719 = v1717;
    _Bool r1721 = std____is_constant_evaluated();
    if (r1721) {
      char* t1722 = __s1719;
      unsigned long r1723 = __gnu_cxx__char_traits_char___length(t1722);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval1720 = r1723;
      unsigned long t1724 = __retval1720;
      return t1724;
    }
  char* t1725 = __s1719;
  unsigned long r1726 = strlen(t1725);
  __retval1720 = r1726;
  unsigned long t1727 = __retval1720;
  return t1727;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1728, char* v1729, struct std__random_access_iterator_tag v1730) {
bb1731:
  char* __first1732;
  char* __last1733;
  struct std__random_access_iterator_tag unnamed1734;
  long __retval1735;
  __first1732 = v1728;
  __last1733 = v1729;
  unnamed1734 = v1730;
  char* t1736 = __last1733;
  char* t1737 = __first1732;
  long diff1738 = t1736 - t1737;
  __retval1735 = diff1738;
  long t1739 = __retval1735;
  return t1739;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1740) {
bb1741:
  char** unnamed1742;
  struct std__random_access_iterator_tag __retval1743;
  unnamed1742 = v1740;
  struct std__random_access_iterator_tag t1744 = __retval1743;
  return t1744;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1745, char* v1746) {
bb1747:
  char* __first1748;
  char* __last1749;
  long __retval1750;
  struct std__random_access_iterator_tag agg_tmp01751;
  __first1748 = v1745;
  __last1749 = v1746;
  char* t1752 = __first1748;
  char* t1753 = __last1749;
  struct std__random_access_iterator_tag r1754 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1748);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp01751 = r1754;
  struct std__random_access_iterator_tag t1755 = agg_tmp01751;
  long r1756 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1752, t1753, t1755);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval1750 = r1756;
  long t1757 = __retval1750;
  return t1757;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1758, char* v1759) {
bb1760:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1761;
  char* __p1762;
  this1761 = v1758;
  __p1762 = v1759;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1763 = this1761;
  char* t1764 = __p1762;
  t1763->_M_dataplus._M_p = t1764;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1765) {
bb1766:
  struct std__allocator_char_* __a1767;
  unsigned long __retval1768;
  __a1767 = v1765;
  unsigned long c1769 = -1;
  unsigned long c1770 = 1;
  unsigned long b1771 = c1769 / c1770;
  __retval1768 = b1771;
  unsigned long t1772 = __retval1768;
  return t1772;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1773) {
bb1774:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1775;
  struct std__allocator_char_* __retval1776;
  this1775 = v1773;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1777 = this1775;
  struct std__allocator_char_* base1778 = (struct std__allocator_char_*)((char *)&(t1777->_M_dataplus) + 0);
  __retval1776 = base1778;
  struct std__allocator_char_* t1779 = __retval1776;
  return t1779;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1780, unsigned long* v1781) {
bb1782:
  unsigned long* __a1783;
  unsigned long* __b1784;
  unsigned long* __retval1785;
  __a1783 = v1780;
  __b1784 = v1781;
    unsigned long* t1786 = __b1784;
    unsigned long t1787 = *t1786;
    unsigned long* t1788 = __a1783;
    unsigned long t1789 = *t1788;
    _Bool c1790 = ((t1787 < t1789)) ? 1 : 0;
    if (c1790) {
      unsigned long* t1791 = __b1784;
      __retval1785 = t1791;
      unsigned long* t1792 = __retval1785;
      return t1792;
    }
  unsigned long* t1793 = __a1783;
  __retval1785 = t1793;
  unsigned long* t1794 = __retval1785;
  return t1794;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1795) {
bb1796:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1797;
  unsigned long __retval1798;
  unsigned long __diffmax1799;
  unsigned long __allocmax1800;
  this1797 = v1795;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1801 = this1797;
  unsigned long c1802 = 9223372036854775807;
  __diffmax1799 = c1802;
  struct std__allocator_char_* r1803 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1801);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long r1804 = std__allocator_traits_std__allocator_char_____max_size(r1803);
  __allocmax1800 = r1804;
  unsigned long* r1805 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1799, &__allocmax1800);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t1806 = *r1805;
  unsigned long c1807 = 1;
  unsigned long b1808 = t1806 - c1807;
  __retval1798 = b1808;
  unsigned long t1809 = __retval1798;
  return t1809;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1810) {
bb1811:
  struct std____new_allocator_char_* this1812;
  unsigned long __retval1813;
  this1812 = v1810;
  struct std____new_allocator_char_* t1814 = this1812;
  unsigned long c1815 = 9223372036854775807;
  unsigned long c1816 = 1;
  unsigned long b1817 = c1815 / c1816;
  __retval1813 = b1817;
  unsigned long t1818 = __retval1813;
  return t1818;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1819, unsigned long v1820, void* v1821) {
bb1822:
  struct std____new_allocator_char_* this1823;
  unsigned long __n1824;
  void* unnamed1825;
  char* __retval1826;
  this1823 = v1819;
  __n1824 = v1820;
  unnamed1825 = v1821;
  struct std____new_allocator_char_* t1827 = this1823;
    unsigned long t1828 = __n1824;
    unsigned long r1829 = std____new_allocator_char____M_max_size___const(t1827);
    _Bool c1830 = ((t1828 > r1829)) ? 1 : 0;
    if (c1830) {
        unsigned long t1831 = __n1824;
        unsigned long c1832 = -1;
        unsigned long c1833 = 1;
        unsigned long b1834 = c1832 / c1833;
        _Bool c1835 = ((t1831 > b1834)) ? 1 : 0;
        if (c1835) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            char* __cir_eh_ret = (char*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c1836 = 1;
    unsigned long c1837 = 16;
    _Bool c1838 = ((c1836 > c1837)) ? 1 : 0;
    if (c1838) {
      unsigned long __al1839;
      unsigned long c1840 = 1;
      __al1839 = c1840;
      unsigned long t1841 = __n1824;
      unsigned long c1842 = 1;
      unsigned long b1843 = t1841 * c1842;
      unsigned long t1844 = __al1839;
      void* r1845 = operator_new_2(b1843, t1844);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      char* cast1846 = (char*)r1845;
      __retval1826 = cast1846;
      char* t1847 = __retval1826;
      return t1847;
    }
  unsigned long t1848 = __n1824;
  unsigned long c1849 = 1;
  unsigned long b1850 = t1848 * c1849;
  void* r1851 = operator_new(b1850);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  char* cast1852 = (char*)r1851;
  __retval1826 = cast1852;
  char* t1853 = __retval1826;
  return t1853;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1854, unsigned long v1855) {
bb1856:
  struct std__allocator_char_* this1857;
  unsigned long __n1858;
  char* __retval1859;
  this1857 = v1854;
  __n1858 = v1855;
  struct std__allocator_char_* t1860 = this1857;
    _Bool r1861 = std____is_constant_evaluated();
    if (r1861) {
        unsigned long t1862 = __n1858;
        unsigned long c1863 = 1;
        unsigned long ovr1864;
        _Bool ovf1865 = __builtin_mul_overflow(t1862, c1863, &ovr1864);
        __n1858 = ovr1864;
        if (ovf1865) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            char* __cir_eh_ret = (char*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1866 = __n1858;
      void* r1867 = operator_new(t1866);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      char* cast1868 = (char*)r1867;
      __retval1859 = cast1868;
      char* t1869 = __retval1859;
      return t1869;
    }
  struct std____new_allocator_char_* base1870 = (struct std____new_allocator_char_*)((char *)t1860 + 0);
  unsigned long t1871 = __n1858;
  void* c1872 = ((void*)0);
  char* r1873 = std____new_allocator_char___allocate(base1870, t1871, c1872);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval1859 = r1873;
  char* t1874 = __retval1859;
  return t1874;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1875, unsigned long v1876) {
bb1877:
  struct std__allocator_char_* __a1878;
  unsigned long __n1879;
  char* __retval1880;
  __a1878 = v1875;
  __n1879 = v1876;
  struct std__allocator_char_* t1881 = __a1878;
  unsigned long t1882 = __n1879;
  char* r1883 = std__allocator_char___allocate(t1881, t1882);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval1880 = r1883;
  char* t1884 = __retval1880;
  return t1884;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1885, unsigned long v1886) {
bb1887:
  struct std__allocator_char_* __a1888;
  unsigned long __n1889;
  char* __retval1890;
  char* __p1891;
  __a1888 = v1885;
  __n1889 = v1886;
  struct std__allocator_char_* t1892 = __a1888;
  unsigned long t1893 = __n1889;
  char* r1894 = std__allocator_traits_std__allocator_char_____allocate(t1892, t1893);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __p1891 = r1894;
  char* t1895 = __p1891;
  __retval1890 = t1895;
  char* t1896 = __retval1890;
  return t1896;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1897) {
bb1898:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1899;
  struct std__allocator_char_* __retval1900;
  this1899 = v1897;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1901 = this1899;
  struct std__allocator_char_* base1902 = (struct std__allocator_char_*)((char *)&(t1901->_M_dataplus) + 0);
  __retval1900 = base1902;
  struct std__allocator_char_* t1903 = __retval1900;
  return t1903;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1904, unsigned long* v1905, unsigned long v1906) {
bb1907:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1908;
  unsigned long* __capacity1909;
  unsigned long __old_capacity1910;
  char* __retval1911;
  this1908 = v1904;
  __capacity1909 = v1905;
  __old_capacity1910 = v1906;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1912 = this1908;
    unsigned long* t1913 = __capacity1909;
    unsigned long t1914 = *t1913;
    unsigned long r1915 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1912);
    _Bool c1916 = ((t1914 > r1915)) ? 1 : 0;
    if (c1916) {
      char* cast1917 = (char*)&(_str_45);
      std____throw_length_error(cast1917);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long* t1918 = __capacity1909;
    unsigned long t1919 = *t1918;
    unsigned long t1920 = __old_capacity1910;
    _Bool c1921 = ((t1919 > t1920)) ? 1 : 0;
    _Bool ternary1922;
    if (c1921) {
      unsigned long* t1923 = __capacity1909;
      unsigned long t1924 = *t1923;
      unsigned long c1925 = 2;
      unsigned long t1926 = __old_capacity1910;
      unsigned long b1927 = c1925 * t1926;
      _Bool c1928 = ((t1924 < b1927)) ? 1 : 0;
      ternary1922 = (_Bool)c1928;
    } else {
      _Bool c1929 = 0;
      ternary1922 = (_Bool)c1929;
    }
    if (ternary1922) {
      unsigned long c1930 = 2;
      unsigned long t1931 = __old_capacity1910;
      unsigned long b1932 = c1930 * t1931;
      unsigned long* t1933 = __capacity1909;
      *t1933 = b1932;
        unsigned long* t1934 = __capacity1909;
        unsigned long t1935 = *t1934;
        unsigned long r1936 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1912);
        _Bool c1937 = ((t1935 > r1936)) ? 1 : 0;
        if (c1937) {
          unsigned long r1938 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1912);
          unsigned long* t1939 = __capacity1909;
          *t1939 = r1938;
        }
    }
  struct std__allocator_char_* r1940 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1912);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  unsigned long* t1941 = __capacity1909;
  unsigned long t1942 = *t1941;
  unsigned long c1943 = 1;
  unsigned long b1944 = t1942 + c1943;
  char* r1945 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1940, b1944);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval1911 = r1945;
  char* t1946 = __retval1911;
  return t1946;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1947, unsigned long v1948) {
bb1949:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1950;
  unsigned long __capacity1951;
  this1950 = v1947;
  __capacity1951 = v1948;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1952 = this1950;
  unsigned long t1953 = __capacity1951;
  t1952->field2._M_allocated_capacity = t1953;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1954:
  _Bool __retval1955;
    _Bool c1956 = 0;
    __retval1955 = c1956;
    _Bool t1957 = __retval1955;
    return t1957;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1958) {
bb1959:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1960;
  this1960 = v1958;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1961 = this1960;
    _Bool r1962 = std__is_constant_evaluated();
    if (r1962) {
        unsigned long __i1963;
        unsigned long c1964 = 0;
        __i1963 = c1964;
        while (1) {
          unsigned long t1966 = __i1963;
          unsigned long c1967 = 15;
          _Bool c1968 = ((t1966 <= c1967)) ? 1 : 0;
          if (!c1968) break;
          char c1969 = 0;
          unsigned long t1970 = __i1963;
          t1961->field2._M_local_buf[t1970] = c1969;
        for_step1965: ;
          unsigned long t1971 = __i1963;
          unsigned long u1972 = t1971 + 1;
          __i1963 = u1972;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1973, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1974) {
bb1975:
  struct _Guard* this1976;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1977;
  this1976 = v1973;
  __s1977 = v1974;
  struct _Guard* t1978 = this1976;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1979 = __s1977;
  t1978->_M_guarded = t1979;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1980, char* v1981) {
bb1982:
  char* __location1983;
  char* __args1984;
  char* __retval1985;
  void* __loc1986;
  __location1983 = v1980;
  __args1984 = v1981;
  char* t1987 = __location1983;
  void* cast1988 = (void*)t1987;
  __loc1986 = cast1988;
    void* t1989 = __loc1986;
    char* cast1990 = (char*)t1989;
    char* t1991 = __args1984;
    char t1992 = *t1991;
    *cast1990 = t1992;
    __retval1985 = cast1990;
    char* t1993 = __retval1985;
    return t1993;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1994, char* v1995) {
bb1996:
  char* __c11997;
  char* __c21998;
  __c11997 = v1994;
  __c21998 = v1995;
    _Bool r1999 = std____is_constant_evaluated();
    if (r1999) {
      char* t2000 = __c11997;
      char* t2001 = __c21998;
      char* r2002 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t2000, t2001);
    } else {
      char* t2003 = __c21998;
      char t2004 = *t2003;
      char* t2005 = __c11997;
      *t2005 = t2004;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v2006, char* v2007, unsigned long v2008) {
bb2009:
  char* __s12010;
  char* __s22011;
  unsigned long __n2012;
  char* __retval2013;
  __s12010 = v2006;
  __s22011 = v2007;
  __n2012 = v2008;
    unsigned long t2014 = __n2012;
    unsigned long c2015 = 0;
    _Bool c2016 = ((t2014 == c2015)) ? 1 : 0;
    if (c2016) {
      char* t2017 = __s12010;
      __retval2013 = t2017;
      char* t2018 = __retval2013;
      return t2018;
    }
    _Bool r2019 = std____is_constant_evaluated();
    if (r2019) {
        unsigned long __i2020;
        unsigned long c2021 = 0;
        __i2020 = c2021;
        while (1) {
          unsigned long t2023 = __i2020;
          unsigned long t2024 = __n2012;
          _Bool c2025 = ((t2023 < t2024)) ? 1 : 0;
          if (!c2025) break;
          char* t2026 = __s12010;
          unsigned long t2027 = __i2020;
          char* ptr2028 = &(t2026)[t2027];
          unsigned long t2029 = __i2020;
          char* t2030 = __s22011;
          char* ptr2031 = &(t2030)[t2029];
          char* r2032 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr2028, ptr2031);
        for_step2022: ;
          unsigned long t2033 = __i2020;
          unsigned long u2034 = t2033 + 1;
          __i2020 = u2034;
        }
      char* t2035 = __s12010;
      __retval2013 = t2035;
      char* t2036 = __retval2013;
      return t2036;
    }
  char* t2037 = __s12010;
  void* cast2038 = (void*)t2037;
  char* t2039 = __s22011;
  void* cast2040 = (void*)t2039;
  unsigned long t2041 = __n2012;
  unsigned long c2042 = 1;
  unsigned long b2043 = t2041 * c2042;
  void* r2044 = memcpy(cast2038, cast2040, b2043);
  char* t2045 = __s12010;
  __retval2013 = t2045;
  char* t2046 = __retval2013;
  return t2046;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v2047, char* v2048, unsigned long v2049) {
bb2050:
  char* __s12051;
  char* __s22052;
  unsigned long __n2053;
  char* __retval2054;
  __s12051 = v2047;
  __s22052 = v2048;
  __n2053 = v2049;
    unsigned long t2055 = __n2053;
    unsigned long c2056 = 0;
    _Bool c2057 = ((t2055 == c2056)) ? 1 : 0;
    if (c2057) {
      char* t2058 = __s12051;
      __retval2054 = t2058;
      char* t2059 = __retval2054;
      return t2059;
    }
    _Bool r2060 = std____is_constant_evaluated();
    if (r2060) {
      char* t2061 = __s12051;
      char* t2062 = __s22052;
      unsigned long t2063 = __n2053;
      char* r2064 = __gnu_cxx__char_traits_char___copy(t2061, t2062, t2063);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      __retval2054 = r2064;
      char* t2065 = __retval2054;
      return t2065;
    }
  char* t2066 = __s12051;
  void* cast2067 = (void*)t2066;
  char* t2068 = __s22052;
  void* cast2069 = (void*)t2068;
  unsigned long t2070 = __n2053;
  void* r2071 = memcpy(cast2067, cast2069, t2070);
  char* cast2072 = (char*)r2071;
  __retval2054 = cast2072;
  char* t2073 = __retval2054;
  return t2073;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v2074, char* v2075, unsigned long v2076) {
bb2077:
  char* __d2078;
  char* __s2079;
  unsigned long __n2080;
  __d2078 = v2074;
  __s2079 = v2075;
  __n2080 = v2076;
    unsigned long t2081 = __n2080;
    unsigned long c2082 = 1;
    _Bool c2083 = ((t2081 == c2082)) ? 1 : 0;
    if (c2083) {
      char* t2084 = __d2078;
      char* t2085 = __s2079;
      std__char_traits_char___assign(t2084, t2085);
    } else {
      char* t2086 = __d2078;
      char* t2087 = __s2079;
      unsigned long t2088 = __n2080;
      char* r2089 = std__char_traits_char___copy(t2086, t2087, t2088);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v2090) {
bb2091:
  char* __it2092;
  char* __retval2093;
  __it2092 = v2090;
  char* t2094 = __it2092;
  __retval2093 = t2094;
  char* t2095 = __retval2093;
  return t2095;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v2096, char* v2097, char* v2098) {
bb2099:
  char* __p2100;
  char* __k12101;
  char* __k22102;
  __p2100 = v2096;
  __k12101 = v2097;
  __k22102 = v2098;
    char* t2103 = __p2100;
    char* t2104 = __k12101;
    char* r2105 = char_const__std____niter_base_char_const__(t2104);
    char* t2106 = __k22102;
    char* t2107 = __k12101;
    long diff2108 = t2106 - t2107;
    unsigned long cast2109 = (unsigned long)diff2108;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t2103, r2105, cast2109);
    if (__cir_exc_active) {
      return;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2110) {
bb2111:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2112;
  char* __retval2113;
  this2112 = v2110;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2114 = this2112;
  char* t2115 = t2114->_M_dataplus._M_p;
  __retval2113 = t2115;
  char* t2116 = __retval2113;
  return t2116;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2117, unsigned long v2118) {
bb2119:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2120;
  unsigned long __length2121;
  this2120 = v2117;
  __length2121 = v2118;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2122 = this2120;
  unsigned long t2123 = __length2121;
  t2122->_M_string_length = t2123;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2124, unsigned long v2125) {
bb2126:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2127;
  unsigned long __n2128;
  char ref_tmp02129;
  this2127 = v2124;
  __n2128 = v2125;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2130 = this2127;
  unsigned long t2131 = __n2128;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t2130, t2131);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t2132 = __n2128;
  char* r2133 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t2130);
  if (__cir_exc_active) {
    return;
  }
  char* ptr2134 = &(r2133)[t2132];
  char c2135 = 0;
  ref_tmp02129 = c2135;
  std__char_traits_char___assign(ptr2134, &ref_tmp02129);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v2136) {
bb2137:
  struct _Guard* this2138;
  this2138 = v2136;
  struct _Guard* t2139 = this2138;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2140 = t2139->_M_guarded;
    _Bool cast2141 = (_Bool)t2140;
    if (cast2141) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2142 = t2139->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t2142);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2143, char* v2144, char* v2145, struct std__forward_iterator_tag v2146) {
bb2147:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2148;
  char* __beg2149;
  char* __end2150;
  struct std__forward_iterator_tag unnamed2151;
  unsigned long __dnew2152;
  struct _Guard __guard2153;
  this2148 = v2143;
  __beg2149 = v2144;
  __end2150 = v2145;
  unnamed2151 = v2146;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2154 = this2148;
  char* t2155 = __beg2149;
  char* t2156 = __end2150;
  long r2157 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t2155, t2156);
  if (__cir_exc_active) {
    return;
  }
  unsigned long cast2158 = (unsigned long)r2157;
  __dnew2152 = cast2158;
    unsigned long t2159 = __dnew2152;
    unsigned long c2160 = 15;
    _Bool c2161 = ((t2159 > c2160)) ? 1 : 0;
    if (c2161) {
      unsigned long c2162 = 0;
      char* r2163 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t2154, &__dnew2152, c2162);
      if (__cir_exc_active) {
        return;
      }
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t2154, r2163);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t2164 = __dnew2152;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t2154, t2164);
      if (__cir_exc_active) {
        return;
      }
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t2154);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard2153, t2154);
  if (__cir_exc_active) {
    return;
  }
    char* r2165 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t2154);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard2153);
      }
      return;
    }
    char* t2166 = __beg2149;
    char* t2167 = __end2150;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r2165, t2166, t2167);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard2153);
      }
      return;
    }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c2168 = ((void*)0);
    __guard2153._M_guarded = c2168;
    unsigned long t2169 = __dnew2152;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t2154, t2169);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard2153);
      }
      return;
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard2153);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v2170) {
bb2171:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this2172;
  this2172 = v2170;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t2173 = this2172;
  {
    struct std__allocator_char_* base2174 = (struct std__allocator_char_*)((char *)t2173 + 0);
    std__allocator_char____allocator(base2174);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v2175, struct std____new_allocator_char_* v2176) {
bb2177:
  struct std____new_allocator_char_* this2178;
  struct std____new_allocator_char_* unnamed2179;
  this2178 = v2175;
  unnamed2179 = v2176;
  struct std____new_allocator_char_* t2180 = this2178;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v2181, struct std__allocator_char_* v2182) {
bb2183:
  struct std__allocator_char_* this2184;
  struct std__allocator_char_* __a2185;
  this2184 = v2181;
  __a2185 = v2182;
  struct std__allocator_char_* t2186 = this2184;
  struct std____new_allocator_char_* base2187 = (struct std____new_allocator_char_*)((char *)t2186 + 0);
  struct std__allocator_char_* t2188 = __a2185;
  struct std____new_allocator_char_* base2189 = (struct std____new_allocator_char_*)((char *)t2188 + 0);
  std____new_allocator_char_____new_allocator(base2187, base2189);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v2190) {
bb2191:
  char* __r2192;
  char* __retval2193;
  __r2192 = v2190;
  char* t2194 = __r2192;
  __retval2193 = t2194;
  char* t2195 = __retval2193;
  return t2195;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2196) {
bb2197:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2198;
  char* __retval2199;
  this2198 = v2196;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2200 = this2198;
  char* cast2201 = (char*)&(t2200->field2._M_local_buf);
  char* r2202 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast2201);
  __retval2199 = r2202;
  char* t2203 = __retval2199;
  return t2203;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2204) {
bb2205:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2206;
  _Bool __retval2207;
  this2206 = v2204;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2208 = this2206;
    char* r2209 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t2208);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    char* r2210 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t2208);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    _Bool c2211 = ((r2209 == r2210)) ? 1 : 0;
    if (c2211) {
        unsigned long t2212 = t2208->_M_string_length;
        unsigned long c2213 = 15;
        _Bool c2214 = ((t2212 > c2213)) ? 1 : 0;
        if (c2214) {
          __builtin_unreachable();
        }
      _Bool c2215 = 1;
      __retval2207 = c2215;
      _Bool t2216 = __retval2207;
      return t2216;
    }
  _Bool c2217 = 0;
  __retval2207 = c2217;
  _Bool t2218 = __retval2207;
  return t2218;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v2219, char* v2220, unsigned long v2221) {
bb2222:
  struct std____new_allocator_char_* this2223;
  char* __p2224;
  unsigned long __n2225;
  this2223 = v2219;
  __p2224 = v2220;
  __n2225 = v2221;
  struct std____new_allocator_char_* t2226 = this2223;
    unsigned long c2227 = 1;
    unsigned long c2228 = 16;
    _Bool c2229 = ((c2227 > c2228)) ? 1 : 0;
    if (c2229) {
      char* t2230 = __p2224;
      void* cast2231 = (void*)t2230;
      unsigned long t2232 = __n2225;
      unsigned long c2233 = 1;
      unsigned long b2234 = t2232 * c2233;
      unsigned long c2235 = 1;
      operator_delete_3(cast2231, b2234, c2235);
      return;
    }
  char* t2236 = __p2224;
  void* cast2237 = (void*)t2236;
  unsigned long t2238 = __n2225;
  unsigned long c2239 = 1;
  unsigned long b2240 = t2238 * c2239;
  operator_delete_2(cast2237, b2240);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v2241, char* v2242, unsigned long v2243) {
bb2244:
  struct std__allocator_char_* this2245;
  char* __p2246;
  unsigned long __n2247;
  this2245 = v2241;
  __p2246 = v2242;
  __n2247 = v2243;
  struct std__allocator_char_* t2248 = this2245;
    _Bool r2249 = std____is_constant_evaluated();
    if (r2249) {
      char* t2250 = __p2246;
      void* cast2251 = (void*)t2250;
      operator_delete(cast2251);
      return;
    }
  struct std____new_allocator_char_* base2252 = (struct std____new_allocator_char_*)((char *)t2248 + 0);
  char* t2253 = __p2246;
  unsigned long t2254 = __n2247;
  std____new_allocator_char___deallocate(base2252, t2253, t2254);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v2255, char* v2256, unsigned long v2257) {
bb2258:
  struct std__allocator_char_* __a2259;
  char* __p2260;
  unsigned long __n2261;
  __a2259 = v2255;
  __p2260 = v2256;
  __n2261 = v2257;
  struct std__allocator_char_* t2262 = __a2259;
  char* t2263 = __p2260;
  unsigned long t2264 = __n2261;
  std__allocator_char___deallocate(t2262, t2263, t2264);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2265, unsigned long v2266) {
bb2267:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2268;
  unsigned long __size2269;
  this2268 = v2265;
  __size2269 = v2266;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2270 = this2268;
  struct std__allocator_char_* r2271 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t2270);
  if (__cir_exc_active) {
    return;
  }
  char* r2272 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t2270);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t2273 = __size2269;
  unsigned long c2274 = 1;
  unsigned long b2275 = t2273 + c2274;
  std__allocator_traits_std__allocator_char_____deallocate(r2271, r2272, b2275);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2276) {
bb2277:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2278;
  this2278 = v2276;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2279 = this2278;
    _Bool r2280 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t2279);
    if (__cir_exc_active) {
      return;
    }
    _Bool u2281 = !r2280;
    if (u2281) {
      unsigned long t2282 = t2279->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t2279, t2282);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v2283, char* v2284, struct std__allocator_char_* v2285) {
bb2286:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this2287;
  char* __dat2288;
  struct std__allocator_char_* __a2289;
  this2287 = v2283;
  __dat2288 = v2284;
  __a2289 = v2285;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t2290 = this2287;
  struct std__allocator_char_* base2291 = (struct std__allocator_char_*)((char *)t2290 + 0);
  struct std__allocator_char_* t2292 = __a2289;
  std__allocator_char___allocator(base2291, t2292);
    char* t2293 = __dat2288;
    t2290->_M_p = t2293;
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v2294) {
bb2295:
  struct std__basic_streambuf_char__std__char_traits_char__* this2296;
  this2296 = v2294;
  struct std__basic_streambuf_char__std__char_traits_char__* t2297 = this2296;
  {
    std__locale___locale(&t2297->_M_buf_locale);
  }
  return;
}

