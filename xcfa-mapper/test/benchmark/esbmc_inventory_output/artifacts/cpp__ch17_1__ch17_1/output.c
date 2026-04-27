// Struct definitions (auto-parsed)
struct List<double> { struct ListNode<double>* firstPtr; struct ListNode<double>* lastPtr; };
struct List<int> { struct ListNode<int>* firstPtr; struct ListNode<int>* lastPtr; };
struct ListNode<double> { double data; struct ListNode<double>* nextPtr; };
struct ListNode<int> { int data; struct ListNode<int>* nextPtr; };
struct _Guard { struct std::__cxx11::basic_string<char>* _M_guarded; };
union anon_0 { char _M_local_buf[16]; unsigned long long _M_allocated_capacity; };
struct std::__cxx11::basic_string<char>::_Alloc_hider { char* _M_p; };
struct std::__new_allocator<char> { unsigned char __placeholder; };
struct std::allocator<char> { unsigned char __placeholder; };
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::forward_iterator_tag { unsigned char __placeholder; };
struct std::random_access_iterator_tag { unsigned char __placeholder; };
struct std::__cxx11::basic_string<char> { struct std::__cxx11::basic_string<char>::_Alloc_hider _M_dataplus; union anon_0 field1; unsigned long long _M_string_length; union anon_0 field3; union anon_0 field4; union anon_0 field5; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[29];
char _str_1[36] = "  1 to insert at beginning of list\\0A";
char _str_2[30] = "  2 to insert at end of list\\0A";
char _str_3[38] = "  3 to delete from beginning of list\\0A";
char _str_4[32] = "  4 to delete from end of list\\0A";
char _str_5[28] = "  5 to end list processing\\0A";
char _str_10[19] = "Testing a List of ";
char _str_11[9] = " values\\0A";
char _str_12[3] = "? ";
struct std::basic_istream<char> _ZSt3cin;
char _str_13[7] = "Enter ";
char _str_14[3];
char _str_17[20] = "The list is empty\\0A\\0A";
char _str_18[14];
char _str_19[3] = "\\0A\\0A";
char _str_15[20] = " removed from list\\0A";
char _str_16[16] = "End list test\\0A\\0A";
char _str_6[8] = "integer";
char _str_7[7] = "double";
char _str_8[22] = "Destroying nodes ...\\0A";
char _str_9[22] = "All nodes destroyed\\0A\\0A";
char _str_20[50];
char _str_21[24];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _Z12instructionsv
void instructions() {
bb0:
  struct std::basic_ostream<char>* g1 = &_ZSt4cout;
  char* cast2 = (char*)_str;
  struct std::basic_ostream<char>* r3 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g1, cast2);
  char* cast4 = (char*)_str_1;
  struct std::basic_ostream<char>* r5 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r3, cast4);
  char* cast6 = (char*)_str_2;
  struct std::basic_ostream<char>* r7 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r5, cast6);
  char* cast8 = (char*)_str_3;
  struct std::basic_ostream<char>* r9 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r7, cast8);
  char* cast10 = (char*)_str_4;
  struct std::basic_ostream<char>* r11 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r9, cast10);
  char* cast12 = (char*)_str_5;
  struct std::basic_ostream<char>* r13 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r11, cast12);
  return;
}

// function: _ZN4ListIiEC2Ev
void List_int___List(struct List<int>* v14) {
bb15:
  struct List<int>* this16;
  this16 = v14;
  struct List<int>* t17 = this16;
  struct ListNode<int>* c18 = NULL;
  *t17->firstPtr = c18;
  struct ListNode<int>* c19 = NULL;
  *t17->lastPtr = c19;
  return;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std::basic_ostream<char>*, struct std::__cxx11::basic_string<char>*);

// function: _ZNSirsERi
struct std::basic_istream<char>* _ZNSirsERi(struct std::basic_istream<char>*, int*);

// function: _Znwm
void* _Znwm(unsigned long long);

// function: _ZN8ListNodeIiEC2ERKi
void ListNode_int___ListNode(struct ListNode<int>* v20, int* v21) {
bb22:
  struct ListNode<int>* this23;
  int* info24;
  this23 = v20;
  info24 = v21;
  struct ListNode<int>* t25 = this23;
  int* t26 = info24;
  int t27 = *t26;
  *t25->data = t27;
  struct ListNode<int>* c28 = NULL;
  *t25->nextPtr = c28;
  return;
}

// function: _ZN4ListIiE10getNewNodeERKi
struct ListNode<int>* List_int___getNewNode(struct List<int>* v29, int* v30) {
  void* v31;
  unsigned int v32;
bb33:
  struct List<int>* this39;
  int* value40;
  struct ListNode<int>* __retval41;
  this39 = v29;
  value40 = v30;
  struct List<int>* t42 = this39;
  unsigned long long c43 = 16;
  void* r44 = _Znwm(c43);
  struct ListNode<int>* cast45 = (struct ListNode<int>*)r44;
  int* t46 = value40;
  goto bb34;
bb34:
