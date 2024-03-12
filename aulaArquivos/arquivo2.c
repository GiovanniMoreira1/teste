#include <stdio.h>
#include <string.h>

typedef struct Pessoa {
  char nome[100];
  long cpf;
} Pessoa;

void printPessoa(Pessoa ps[], int t) {
  for(int i = 0; i < t; i++)
    printf("Nome: %s\t CPF: %ld\n", ps[i].nome, ps[i].cpf);
}

int main() {
  int t = 2;
  Pessoa ps[t];

  ps[0].cpf = 1234567890;
  strcpy(ps[0].nome, "Nome 0");
  
  ps[1].cpf = 9876543210;
  strcpy(ps[1].nome, "Nome 1");

  printPessoa(ps, t);

  FILE *f = fopen("pessoas", "wb");
  fwrite(ps, t, sizeof(Pessoa), f);
  fclose(f);

  Pessoa p[t];
  f = fopen("pessoas", "rb");
  fread(p, t, sizeof(Pessoa), f);
  fclose(f);

  printPessoa(p, t);
}