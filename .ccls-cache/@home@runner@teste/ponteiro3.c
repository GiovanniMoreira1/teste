#include <stdio.h>

int main() {
  int a[5];
  printf("endereco 0: %p\n", &a[0]);
  printf("endereco array: %p\n", &a+1);
}