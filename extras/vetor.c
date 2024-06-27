/* Escreva um programa que receba um numero inteiro 
e imprima se oé primo ou não*/
#include <stdio.h>
#include <stdio.h>
int main (){
    int num, i, cont=0;
    num=0;
    printf("Digite um Numero Inteiro: ");
    scanf("%d", &num);
    while (num>0) {
        for(i = 1; i<=num; i++){
            if ((num % i) == 0){
            cont++;
            }
    }
        if (cont ==2){
            printf("primo");
        }else{
            printf("Nao primo");
        }
        printf(", digite proximo numero inteiro:");
        scanf("%d", &num);
        }
    }