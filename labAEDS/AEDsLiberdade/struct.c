#include <stdio.h>
#include <stdlib.h>
typedef struct Pessoa{
  char Nome[100];
  int Idade;
  float Peso;
  char Profissao[100];
}Pessoa;


int main(){
  Pessoa Estudante;
  printf("Digite o nome da pessoa: \n");
  scanf(" %[^\n]", Estudante.Nome);
  printf("Digite sua idade: \n");
  scanf("%d", &Estudante.Idade);
  printf("Digite o peso da pessoa: \n");
  scanf("%f", &Estudante.Peso);
  printf("Digite a profissao da pessoa: \n");
  scanf(" %[^\n]", Estudante.Profissao);

  printf("\n");

  printf("%s \n %d \n %.2f \n %s",Estudante.Nome, Estudante.Idade, Estudante.Peso, Estudante.Profissao);
}