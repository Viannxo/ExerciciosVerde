/*Escreva um fun��o recursiva que receba um n�mero inteiro e imprima esse n�mero invertido.

Exemplo: ao receber 123 a fun��o deve imprimir 321

Entrada: Uma linha contendo um n�mero inteiro.

Sa�da:Uma linha contendo o n�mero invertido.
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
    printf("%d", n % 10);  // Imprime o �ltimo d�gito
    inversor(n / 10);      // Chama recursivamente com o n�mero sem o �ltimo d�gito
}

