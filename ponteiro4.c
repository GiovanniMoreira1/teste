#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p = malloc(5 * sizeof(int));
  *(p+0) = 1;  // ou usar p[0]
  *(p+1) = 2;
  printf("p + 0 = %d\n", *(p+0));
  printf("p + 1 = %d\n", *(p+1));
  free(p); // desaloca o espaço na memoria
}