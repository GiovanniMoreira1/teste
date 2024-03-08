#include <stdio.h>

int main() {
  long i = 1;
  long *p = &i;
  printf("&i = %p\n", p);
  printf("&i + 1 = %p\n", p + 1);
  printf("&i + 2 = %p\n", p + 2);
  printf("&i + 3 = %p\n", p + 3);
  printf("&i + 4 = %p\n", p + 4);
  printf("&i + 5 = %p\n", p + 5);
}