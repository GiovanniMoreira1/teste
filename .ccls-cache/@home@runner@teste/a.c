#include <stdio.h>

void inc(int* i){
  printf("dentro da funcao: i=%d\n", *i);
  (*i)++;
  printf("dentro da funcao: i=%d\n", *i);
}

void incArray(int a[]){
  printf("dentro da funcao: a[0]=%d\n", a[0]);
  (a[0])++;
  printf("dentro da funcao: a[0]=%d\n", a[0]);
}

 int main() {
  int i = 1;
   printf("fora da funcao i = %d\n", i);
   inc (&i);
   printf("fora da funcao i= %d\n", i);
   
   /*int a[2] = {0, 1000};
  printf("fora da funcao: i=%d\n", a[0]);
  incArray(a);
  printf("fora da funcao: i=%d\n", a[0]); 
*/
}