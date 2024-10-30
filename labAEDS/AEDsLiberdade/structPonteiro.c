#include <stdio.h>
#include <stdlib.h>
typedef struct Pessoa{
  char Nome[100];
  int Idade;
  float Peso;
  char Profissao[100];
}Pessoa;


int main(){
   Pessoa *estu = (Pessoa *)malloc(sizeof(Pessoa));
  printf("Digite o nome da pessoa: \n");
  scanf(" %[^\n]",estu->Nome);
  printf("Digite sua idade: \n");
  scanf("%d", &estu->Idade);
  printf("Digite o peso da pessoa: \n");
  scanf("%f", &estu->Peso);
  printf("Digite a profissao da pessoa: \n");
  scanf(" %[^\n]", estu->Profissao);

  printf("\n");

  printf("Nome: %s\nIdade: %d\nPeso: %.2f\nProfissão: %s\n", estu->Nome, estu->Idade, estu->Peso, estu->Profissao);

free (estu);
return 0;
}