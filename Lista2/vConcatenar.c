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
