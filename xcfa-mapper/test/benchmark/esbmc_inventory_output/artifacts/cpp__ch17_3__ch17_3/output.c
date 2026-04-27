// Struct definitions (auto-parsed)
struct List<double> { struct ListNode<double>* lastPtr; struct ListNode<double>* firstPtr; };
struct List<int> { struct ListNode<int>* lastPtr; struct ListNode<int>* firstPtr; };
struct ListNode<double> { double data; struct ListNode<double>* nextPtr; };
struct ListNode<int> { int data; struct ListNode<int>* nextPtr; };
struct Stack<double> { struct List<double> stackList; };
struct Stack<int> { struct List<int> stackList; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[28] = "processing an integer Stack";
char _str_5[20] = "The list is empty\\0A\\0A";
char _str_6[14];
char _str_7[3] = "\\0A\\0A";
char _str_1[19] = " popped from stack";
char _str_2[26] = "processing a double Stack";
char _str_3[22] = "Destroying nodes ...\\0A";
char _str_4[22] = "All nodes destroyed\\0A\\0A";
// function: _ZN5StackIiEC2Ev
void Stack_int___Stack(struct Stack<int>* v0) {
bb1:
  struct Stack<int>* this2;
  this2 = v0;
  struct Stack<int>* t3 = this2;
  List_int___List(t3->stackList);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _Znwm
void* operator_new(unsigned long long);

// function: _ZN8ListNodeIiEC2ERKi
void ListNode_int___ListNode(struct ListNode<int>* v4, int* v5) {
bb6:
  struct ListNode<int>* this7;
  int* info8;
  this7 = v4;
  info8 = v5;
  struct ListNode<int>* t9 = this7;
  int* t10 = info8;
  int t11 = *t10;
  *t9->data = t11;
  struct ListNode<int>* c12 = NULL;
  *t9->nextPtr = c12;
  return;
}

// function: _ZN4ListIiE10getNewNodeERKi
struct ListNode<int>* List_int___getNewNode(struct List<int>* v13, int* v14) {
  void* v15;
  unsigned int v16;
bb17:
  struct List<int>* this23;
  int* value24;
  struct ListNode<int>* __retval25;
  this23 = v13;
  value24 = v14;
  struct List<int>* t26 = this23;
  unsigned long long c27 = 16;
  void* r28 = operator_new(c27);
  struct ListNode<int>* cast29 = (struct ListNode<int>*)r28;
  int* t30 = value24;
  goto bb18;
bb18:
