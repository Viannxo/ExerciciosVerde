/* Fa�a um algoritmo que leia uma sequ�ncia de N bits e armazene essa
sequ�ncia em vetor de tamanho N. Ap�s armazenar a sequ�ncia de bits em
um vetor, converta essa sequ�ncia de n�meros bin�rios em um n�mero na base
decimal.

Para converter um n�mero deve-se multiplicar cada d�gito bin�rio por 2 elevado
 � posi��o (da direita para a esquerda) do digito. Por exemplo, o n�mero 1100
 em bin�rio � igual a 12 na base da decimal, pois 12^3 + 12^2 + 02^1+02^0 = 12.

Entrada: A entrada � composta por 2 linhas. A primeira linha o valor de N que
representa a quantidade de d�gitos do n�mero bin�rio. A segunda linha � composta
por N d�gitos bin�rios.

Sa�da: A sa�da possui apenas um linha que � o numero decimal equivalente. */

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
