/*
Escrever um programa que recebe um inteiro positivo não nulo imprime um triângulo retângulo formado apenas por símbolos de asterisco (“*”) e de espaço (“ ”) como no exemplo a seguir (para i = 5):


*
**
***
****
*****


Entrada: Um número inteiro N

Saída: N linhas, sendo que em cada linha é adicionado um *.
*/

#include <stdio.h>
#include <stdio.h>
void trian(int);

int main(){
    int n;
    scanf("%d", &n);
    trian(n);

}

void trian (int n){
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

}


