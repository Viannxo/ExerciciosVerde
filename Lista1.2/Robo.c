/* Um rob� deve soldar N pontos (de 1 a N) de uma placa eletr�nica. Para isso, ele percorre um
 ciclo soldando 2N pontos. Por exemplo, para N=3, um ciclo de solda poss�vel (sempre com tamanho 2n)
  poderia ser {2, 1, 2, 3, 1, 2}. Note que nesse exemplo a quarta solda j� cobre os tr�s pontos de
  solda {2, 1, 2, 3}, sendo que alguns pontos de solda foram repetidos pelo rob�.

Os programadores do rob� sabem estipular qual ser� o ciclo de solda que o rob� vai seguir, mas querem
 sua ajuda para responder se o referido ciclo atinge ou n�o todos os N pontos de solda e, se atinge,
 qual � o n�mero de soldas necess�rios no ciclo para atingir todos os n pontos de solda.

Entrada: A entrada � composta de duas linhas. A primeira representa o valor de N. A segunda linha cont�m
 2N inteiros que representam os pontos de solta atingidos pelo rob�.

Sa�da: Uma linha contendo o ponto de solda que o rob� cobriu todos os pontos da placa. Caso o rob� n�o
cubra todos os pontos deve ser impresso 0 (zero). */


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
