/*Implemente uma função recursiva imprimeBinario(int n) que receba um número inteiro positivo n e imprima sua representação binária.

Entrada: 1 linha contendo um inteiro na representação decimal.

Saída: 1 linha exibindo o correspondente em binário


Exemplo: Entrada 5 implica em saída 101.*/

#include <stdio.h>
void imprimeBinario(int n);
int main() {
    int n;
    scanf("%d", &n);
    imprimeBinario(n);
    return 0;
}

void imprimeBinario (int n){
    if(n>0){
        imprimeBinario(n/2);
        printf("%d", n%2);
    }else{
        printf("0");
    }
}