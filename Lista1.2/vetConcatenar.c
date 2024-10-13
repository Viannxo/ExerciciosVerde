/* Faça um algoritmo que leia dois vetores A e B de elementos inteiros, sendo que A
 tem tamanho N e B tem tamanho M. O algoritmo deve concatenar A e B em um terceiro
 vetor resultante C. Imprima os vetores A, B e C. N e M devem ser digitados pelo usuário.

Entrada: A entrada é composta por 3 linhas. A primeira linha contém os valores de M e N
respectivamente. A segunda linha contém os números do primeiro vetor A e terceira linha
contém os números do segundo vetor B.

Saída: Também composta de 3 linhas. A primeira linha contém os elementos do vetor A, a
segunda linha contém os elementos do vetor B, e terceira linha os elementos do vetor resultante C.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;

    scanf("%d %d", &N, &M);

    int A[N], B[M], C[N + M];

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < M; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < N; i++) {
        C[i] = A[i];
    }
    for (int i = 0; i < M; i++) {
        C[N + i] = B[i];
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    for (int i = 0; i < M; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    for (int i = 0; i < N + M; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
