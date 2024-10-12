/* Leia um valor e fa�a um programa que coloque o valor lido na primeira
posi��o de um vetor N[10]. Em cada posi��o subsequente, coloque o dobro
do valor da posi��o anterior. Por exemplo, se o valor lido for 1, os valores
 do vetor devem ser 1,2,4,8 e assim sucessivamente. Mostre o vetor em seguida.

Entrada

A entrada cont�m um valor inteiro (V<=50).

Sa�da

Para cada posi��o do vetor, escreva "N[i] = X", onde i � a posi��o do vetor e
X � o valor armazenado na posi��o i. O primeiro n�mero do vetor N (N[0]) ir� receber
o valor de V*/

#include <stdio.h>

int main() {
    int vet[10];
    int n;

    do {
        scanf("%d", &n);
    } while (n <= 0 || n > 50);

    vet[0] = n;

    for (int i = 1; i < 10; i++) {
        vet[i] = vet[i - 1] * 2;
    }

    for (int i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, vet[i]);
    }

    return 0;
}
