/* Um robô deve soldar N pontos (de 1 a N) de uma placa eletrônica. Para isso, ele percorre um
 ciclo soldando 2N pontos. Por exemplo, para N=3, um ciclo de solda possível (sempre com tamanho 2n)
  poderia ser {2, 1, 2, 3, 1, 2}. Note que nesse exemplo a quarta solda já cobre os três pontos de
  solda {2, 1, 2, 3}, sendo que alguns pontos de solda foram repetidos pelo robô.

Os programadores do robô sabem estipular qual será o ciclo de solda que o robô vai seguir, mas querem
 sua ajuda para responder se o referido ciclo atinge ou não todos os N pontos de solda e, se atinge,
 qual é o número de soldas necessários no ciclo para atingir todos os n pontos de solda.

Entrada: A entrada é composta de duas linhas. A primeira representa o valor de N. A segunda linha contém
 2N inteiros que representam os pontos de solta atingidos pelo robô.

Saída: Uma linha contendo o ponto de solda que o robô cobriu todos os pontos da placa. Caso o robô não
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
