/*Escreva um função recursiva que receba um número inteiro e imprima esse número invertido.

Exemplo: ao receber 123 a função deve imprimir 321

Entrada: Uma linha contendo um número inteiro.

Saída:Uma linha contendo o número invertido.
*/

#include <stdio.h>

void inversor(int n);

int main() {
    int n;
    scanf("%d", &n);
    inversor(n);
    return 0;
}

void inversor(int n) {
    if (n == 0) {
        return;
    }
    printf("%d", n % 10);  // Imprime o último dígito
    inversor(n / 10);      // Chama recursivamente com o número sem o último dígito
}

