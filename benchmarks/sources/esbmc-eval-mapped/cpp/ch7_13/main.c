extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct Clock { int __field0; };
struct Door { _Bool __field0; };
struct ElevatorButton { _Bool __field0; struct Elevator* __field1; };
struct FloorButton { int __field0; _Bool __field1; struct Elevator* __field2; };
struct Light { _Bool __field0; int __field1; };
struct Person { unsigned char __placeholder; };
struct Scheduler { int __field0; struct Floor* __field1; struct Floor* __field2; int __field3; int __field4; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct Elevator { struct ElevatorButton __field0; int __field1; _Bool __field2; unsigned char __field3[3]; int __field4; int __field5; int __field6; _Bool __field7; _Bool __field8; unsigned char __field9[2]; struct Floor* __field10; struct Floor* __field11; struct Person* __field12; struct Door __field13; unsigned char __field14[7]; } __attribute__((packed));
struct Floor { struct FloorButton __field0; int __field1; struct Elevator* __field2; struct Person* __field3; struct Light __field4; };
struct std__ctype_char_;
struct std__ios_base;
struct Building { struct Floor __field0; struct Floor __field1; struct Elevator __field2; struct Clock __field3; struct Scheduler __field4; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[17] = "Enter run time: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[35] = "*** ELEVATOR SIMULATION BEGINS ***";
char _str_2[33] = "*** ELEVATOR SIMULATION ENDS ***";
extern void Building__Building(struct Building* p0);
extern void Building__runSimulation(struct Building* p0, int p1);
void Building___Building(struct Building* p0) {}
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int duration2;
  struct Building building3;
  int c4 = 0;
  __retval1 = c4;
  char* cast5 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std6;
  __VERIFIER_nondet_memory(&std6, sizeof(std6));
  struct std__basic_istream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  struct std__basic_istream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  Building__Building(&building3);
    struct std__basic_ostream_char__std__char_traits_char__* std9;
    __VERIFIER_nondet_memory(&std9, sizeof(std9));
    char* cast10 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std11;
    __VERIFIER_nondet_memory(&std11, sizeof(std11));
    struct std__basic_ostream_char__std__char_traits_char__* std12;
    __VERIFIER_nondet_memory(&std12, sizeof(std12));
    struct std__basic_ostream_char__std__char_traits_char__* std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    int t14 = duration2;
    Building__runSimulation(&building3, t14);
    char* cast15 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    struct std__basic_ostream_char__std__char_traits_char__* std17;
    __VERIFIER_nondet_memory(&std17, sizeof(std17));
    int c18 = 0;
    __retval1 = c18;
    int t19 = __retval1;
    int ret_val20 = t19;
    {
      Building___Building(&building3);
    }
    return ret_val20;
  int t21 = __retval1;
  return t21;
}

