/* Escreva um programa que carregue um vetor com N n�meros reais, calcule e mostre
na tela a quantidade de n�meros negativos e a soma dos n�meros positivos desse vetor.

Entrada: Composta por duas linhas. A primeira linha cont�m um valor inteiro (N) e a
segunda linha cont�m os n�meros reais.

Sa�da: �nica linha contendo a quantidade de negativos e a soma dos positivos, sendo a
soma com 1 casa decimal.
*/

#include <stdio.h>

int main() {
    int N, count_neg = 0;
    float sum_pos = 0.0;

    scanf("%d", &N);
    float numbers[N];

    for (int i = 0; i < N; i++) {
        scanf("%f", &numbers[i]);

        if (numbers[i] < 0) {
            count_neg++;
        } else {
            sum_pos += numbers[i];
        }
    }

    printf("%d %d\n", count_neg, (int)(sum_pos + 0.5)); // Arredonda a soma dos positivos para o inteiro mais pr�ximo

    return 0;
}

