/*
Escrever um programa que recebe um inteiro positivo n�o nulo imprime um tri�ngulo ret�ngulo formado apenas por s�mbolos de asterisco (�*�) e de espa�o (� �) como no exemplo a seguir (para i = 5):


*
**
***
****
*****


Entrada: Um n�mero inteiro N

Sa�da: N linhas, sendo que em cada linha � adicionado um *.
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


