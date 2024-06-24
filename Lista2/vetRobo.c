#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int ciclo[2 * N];
    for (int i = 0; i < 2 * N; i++) {
        scanf("%d", &ciclo[i]);
    }

    int pontos[N + 1];
    for (int i = 0; i <= N; i++) {
        pontos[i] = 0;
    }

    int ponts_convertidos = 0;
    for (int i = 0; i < 2 * N; i++) {
        if (pontos[ciclo[i]] == 0) {
            pontos[ciclo[i]] = 1;
            ponts_convertidos++;
        }
        if (ponts_convertidos == N) {
            printf("%d\n", i + 1);
            return 0;
        }
    }

    printf("0\n");
    return 0;
}