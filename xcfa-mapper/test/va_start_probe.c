#include <stdarg.h>
int sum(int count, ...) {
  va_list ap;
  va_start(ap, count);
  int x = va_arg(ap, int);
  va_end(ap);
  return x;
}
