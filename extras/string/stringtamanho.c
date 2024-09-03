#include <stdio.h>
#include <stdlib.h>

int tamanho(char *);
int tamanhov2 (char *);
int compraStr(char *, char*);

int main (){
  char nome[50]= {'E', 'D', 'U', 'A','R', 'D', 'O'};
  printf("o tamanho da string e: %d", tamanhov2 (nome));
}

int tamanhov2(char str[]){
  for (int i=0; i <sizeof(str); i++){
    if (str[i] == '\0')
      return i;
  }
}

int tamanho(char str[]){
  int i=0;
  while (str[i] != '\0'){
    i++;
  }
  return i;
}