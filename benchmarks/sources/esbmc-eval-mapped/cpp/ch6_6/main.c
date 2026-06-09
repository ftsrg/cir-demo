// Struct definitions (auto-parsed)
struct SalesPerson { double __field0[12]; };

extern void SalesPerson__SalesPerson(struct SalesPerson* p0);
extern void SalesPerson__getSalesFromUser(struct SalesPerson* p0);
extern void SalesPerson__printAnnualSales(struct SalesPerson* p0);
int main();

// function: main
int main() {
bb0:
  int __retval1;
  struct SalesPerson s2;
  int c3 = 0;
  __retval1 = c3;
  SalesPerson__SalesPerson(&s2);
  SalesPerson__getSalesFromUser(&s2);
  SalesPerson__printAnnualSales(&s2);
  int c4 = 0;
  __retval1 = c4;
  int t5 = __retval1;
  return t5;
}

