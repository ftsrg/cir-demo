// Struct definitions (auto-parsed)
struct Tree<double> { struct TreeNode<double>* rootPtr; };
struct Tree<int> { struct TreeNode<int>* rootPtr; };
struct TreeNode<double> { struct TreeNode<double>* leftPtr; double data; struct TreeNode<double>* rightPtr; };
struct TreeNode<int> { struct TreeNode<int>* leftPtr; int data; struct TreeNode<int>* rightPtr; };
struct std::_Setprecision { int _M_n; };
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[26];
struct std::basic_istream<char> _ZSt3cin;
char _str_5[5] = " dup";
char _str_1[21] = "\\0APreorder traversal\\0A";
char _str_2[20] = "\\0AInorder traversal\\0A";
char _str_3[22] = "\\0APostorder traversal\\0A";
char _str_4[28];
// function: _ZN4TreeIiEC2Ev
void Tree_int___Tree(struct Tree<int>* v0) {
bb1:
  struct Tree<int>* this2;
  this2 = v0;
  struct Tree<int>* t3 = this2;
  struct TreeNode<int>* c4 = NULL;
  *t3->rootPtr = c4;
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERi
struct std::basic_istream<char>* _ZNSirsERi(struct std::basic_istream<char>*, int*);

// function: _Znwm
void* operator_new(unsigned long long);

// function: _ZN8TreeNodeIiEC2ERKi
void TreeNode_int___TreeNode(struct TreeNode<int>* v5, int* v6) {
bb7:
  struct TreeNode<int>* this8;
  int* d9;
  this8 = v5;
  d9 = v6;
  struct TreeNode<int>* t10 = this8;
  struct TreeNode<int>* c11 = NULL;
  *t10->leftPtr = c11;
  int* t12 = d9;
  int t13 = *t12;
  *t10->data = t13;
  struct TreeNode<int>* c14 = NULL;
  *t10->rightPtr = c14;
  return;
}

// function: _ZdlPvm
void operator_delete(void*, unsigned long long);

// function: _ZNSolsEi
struct std::basic_ostream<char>* _ZNSolsEi(struct std::basic_ostream<char>*, int);

// function: _ZN4TreeIiE16insertNodeHelperEPP8TreeNodeIiERKi
void Tree_int___insertNodeHelper(struct Tree<int>* v15, struct TreeNode<int>** v16, int* v17) {
  void* v18;
  unsigned int v19;
bb20:
  struct Tree<int>* this41;
  struct TreeNode<int>** ptr42;
  int* value43;
  this41 = v15;
  ptr42 = v16;
  value43 = v17;
  struct Tree<int>* t44 = this41;
  goto bb21;
bb21:
  struct TreeNode<int>** t45 = ptr42;
  struct TreeNode<int>* t46 = *t45;
  struct TreeNode<int>* c47 = NULL;
  _Bool c48 = (t46 == c47) ? 1 : 0;
  if (c48) goto bb22; else goto bb28;
bb22:
  unsigned long long c49 = 24;
  void* r50 = operator_new(c49);
  struct TreeNode<int>* cast51 = (struct TreeNode<int>*)r50;
  int* t52 = value43;
  goto bb23;
bb23:
