#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *arq=fopen("arquivo.txt", "w");
  int num=0;
  for(int i=0;i<10;i++){
    printf("digite 10 numeros diferentes, um de cada vez: \n");
    scanf("%d", &num);
    fprintf(arq,"%d", num);
  }
  arq=fopen ("arquivo.txt", "r");
  int soma=0;
  int num2;
  for(int i=0;i<10;i++){
    fscanf(arq, "%d", num2);
    soma+=num2;
  }
     printf("resultado da soma do arquivo e: %d", num2);
  fclose(arq);
}