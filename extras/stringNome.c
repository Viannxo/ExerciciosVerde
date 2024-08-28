#include <stdio.h>
#include <stdlib.h>
int main (){
  char nome[50];
  printf("digite seu nome completo: \n");
  scanf("%[^\n]", nome);
  // gets (nome);
  printf("seu nome e:  %s", nome); 
  //puts (nome);
}