#include <stdio.h>

int stgTamanhoString (char *);
int main (){
    char stg[50];
    printf("digite seu nome: \n");
    fgets(stg, 50, stdin);
    int Tamanho=stgTamanhoString(stg);
    printf("%d", Tamanho);
    return 0;
}

int TamanhoString (char *stg[]){
    int count=0;
    while (*str!= '\0'){
        count++;
        str++;
    }
    return count;
}