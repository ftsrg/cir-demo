// Struct definitions (auto-parsed)
struct Card { char* face; char* suit; };
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };

char* __const_main_suit[4];
char* __const_main_face[13];
char _str[4] = "Ace";
char _str_1[6] = "Deuce";
char _str_2[6] = "Three";
char _str_3[5] = "Four";
char _str_4[5] = "Five";
char _str_5[4] = "Six";
char _str_6[6] = "Seven";
char _str_7[6] = "Eight";
char _str_8[5] = "Nine";
char _str_9[4] = "Ten";
char _str_10[5] = "Jack";
char _str_11[6] = "Queen";
char _str_12[5] = "King";
char _str_13[7] = "Hearts";
char _str_14[9] = "Diamonds";
char _str_15[6] = "Clubs";
char _str_16[7] = "Spades";
struct std::basic_ostream<char> _ZSt4cout;
char _str_17[5] = " of ";
// function: srand
void srand(unsigned int);

// function: time
long long time(long long*);

// function: _Z8fillDeckP4CardPPcS2_
void fillDeck(struct Card* v0, char** v1, char** v2) {
bb3:
  int i12;
  struct Card* wDeck13;
  char** wFace14;
  char** wSuit15;
  wDeck13 = v0;
  wFace14 = v1;
  wSuit15 = v2;
  goto bb4;
bb4:
  int c16 = 0;
  i12 = c16;
  goto bb5;
bb5:
  int t17 = i12;
  int c18 = 52;
  _Bool c19 = (t17 < c18) ? 1 : 0;
  if (c19) goto bb6; else goto bb10;
bb6:
  goto bb7;
bb7:
  char** t20 = wFace14;
  int t21 = i12;
  int c22 = 13;
  int b23 = t21 % c22;
  char** ptr24 = t20 + b23;
  char* t25 = *ptr24;
  struct Card* t26 = wDeck13;
  int t27 = i12;
  struct Card* ptr28 = t26 + t27;
  *ptr28->face = t25;
  char** t29 = wSuit15;
  int t30 = i12;
  int c31 = 13;
  int b32 = t30 / c31;
  char** ptr33 = t29 + b32;
  char* t34 = *ptr33;
  struct Card* t35 = wDeck13;
  int t36 = i12;
  struct Card* ptr37 = t35 + t36;
  *ptr37->suit = t34;
  goto bb8;
bb8:
  goto bb9;
bb9:
  int t38 = i12;
  int u39 = ++t38;
  i12 = u39;
  goto bb5;
bb10:
  goto bb11;
bb11:
  return;
}

// function: rand
int rand();

// function: _ZN4CardC2ERKS_
void Card__Card(struct Card* v40, struct Card* v41) {
bb42:
  struct Card* this43;
