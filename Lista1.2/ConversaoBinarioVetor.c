/* Faça um algoritmo que leia uma sequência de N bits e armazene essa
sequência em vetor de tamanho N. Após armazenar a sequência de bits em
um vetor, converta essa sequência de números binários em um número na base
decimal.

Para converter um número deve-se multiplicar cada dígito binário por 2 elevado
 à posição (da direita para a esquerda) do digito. Por exemplo, o número 1100
 em binário é igual a 12 na base da decimal, pois 12^3 + 12^2 + 02^1+02^0 = 12.

Entrada: A entrada é composta por 2 linhas. A primeira linha o valor de N que
representa a quantidade de dígitos do número binário. A segunda linha é composta
por N dígitos binários.

Saída: A saída possui apenas um linha que é o numero decimal equivalente. */

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int vet[n];
    for (int i = 0; i < n; i++) {
        scanf("%1d", &vet[i]);
    }
    int decimal = 0;
    for (int i = 0; i < n; i++) {
        decimal += (vet[i] * pow(2, n - 1 - i));
    }
    printf("%d\n", decimal);

    return 0;
}
