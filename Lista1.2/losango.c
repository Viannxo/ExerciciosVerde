/*
Escrever um programa que recebe um inteiro positivo não nulo imprime um
triângulo losango formado apenas por símbolos de asterisco (“*”) e de espaço
(“ ”) como no exemplo a seguir (para i = 5):

Entrada: Um numéro inteiro.

Saída: N linhas formando um losango
*/

#include <stdio.h>
void losango(int);

int main(){
    int n;
    scanf("%d", &n);
    losango(n);

}

void losango(int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = n - 2; i >= 0; i--) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}
