#include <stdio.h>

void escreveArq(char nome[]) {
  FILE *f = fopen(nome, "w");
  fprintf(f, "hello World\n");
  int i = 12345;
  fprintf(f, "i = %d\n", i);

  fclose(f);
}

void lerArq(char nome[]) {
  FILE *f = fopen(nome, "r");
  if(f == NULL)
    printf("Erro abertura do arquivo\n");  

  
  char linha[255];
  fgets(linha, 255, f);
  printf("%s", linha);
  fgets(linha, 255, f);
  printf("%s", linha);
}

int main() {
   char nome[] = "arq.txt";
  escreveArq(nome);
  lerArq(nome);
}

