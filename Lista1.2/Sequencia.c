/* Leia um par de valores M e N e mostre a sequ�ncia
do menor at� o maior e a soma dos inteiros consecutivos
entre eles (incluindo o N e M).

Entrada
O arquivo de entrada cont�m um par de valores M e N.

Sa�da
Para a dupla de valores, imprima a sequ�ncia do menor at�
o maior e a soma deles, conforme exemplo abaixo. */

#include <stdio.h>

int main() {
    int M, N, menor, maior, soma=0;
    scanf("%d %d", &M, &N);
    if(M<N){
        menor=M;
        maior=N;
    }else if(M>N){
        menor=N;
        maior=M;
    }
    for (int i = menor; i <= maior; i++) {
        printf("%d ", i);
        soma += i;
    }
    printf("Soma = %d\n", soma);
    return 0;
}

