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
  char linha[255];
  fscanf(f, "%[^\n]s", linha); // responsavel por ler o arquivo até encontrar uma quebra de linha
  printf("Linha: %s \n", linha);
  int i;
  fscanf(f, "i = %d\n", &i);
  printf("i = %d \n", i);
  fclose(f);
}

int main() {
   char nome[] = "arq.txt";
  escreveArq(nome);
  lerArq(nome);
}