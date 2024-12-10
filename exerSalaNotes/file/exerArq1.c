/*

Exercício: Cadastro de Nomes
Escreva um programa em C que realiza o seguinte:

Cria um arquivo chamado nomes.txt.
Permite que o usuário insira até 5 nomes.
Escreve esses nomes no arquivo (um por linha).
Lê os nomes do arquivo e exibe-os no console.

Entrada:
Digite até 5 nomes (um por vez):
Nome 1: João
Nome 2: Maria
Nome 3: Ana
Nome 4: Lucas
Nome 5: Helena

Saida: 
Os nomes armazenados no arquivo são:
João
Maria
Ana
Lucas
Helena

Total de nomes: 5

*/


#include <stdio.h>
#include <string.h>


typedef struct Pessoa{
  char Nome[80];
}Pessoa;

void cadastrarNome(Pessoa *p, int n){
  printf("Digite até 5 nomes (um por vez):\n ");
  for(int i=0; i<n;i++){
    fgets(p->Nome,80,stdin);
    *p++;
  }
}
void printfNomes(int *p, int n, FILE *a){
  for(int i=0;i<n;i++){
    fprintf(a,"%s", p);
    *p++;
  }
}




int main(){
  int n = 0;
  printf("digite valor de n: \n");
  scanf(" %d", &n);
  Pessoa *p= malloc(n*sizeof(Pessoa));
  cadastrarNome(p,n);
  FILE *arquivoNomes= fopen("arqNomes.txt","w");
  printNomes(p, n, arquivoNomes);
  fclose(arquivoNomes);
}