#include <stdio.h>

int main() {
    int ops;
    int cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0, VtNull = 0, vtBranco = 0, vtTotal = 0;

    while (1) {
        scanf("%d", &ops);
        if (ops == 0) {
            break;
        }

        switch (ops) {
            case 1:
                cand1++;
                vtTotal++;
                break;
            case 2:
                cand2++;
                vtTotal++;
                break;
            case 3:
                cand3++;
                vtTotal++;
                break;
            case 4:
                cand4++;
                vtTotal++;
                break;
            case 5:
                VtNull++;
                vtTotal++;
                break;
            case 6:
                vtBranco++;
                vtTotal++;
                break;
            default:
                printf("Código inválido. Tente novamente.\n");
        }
    }

    float pcntB = (vtTotal > 0) ? ((float)vtBranco / vtTotal) * 100 : 0;

    printf("Candidato 1: %d voto(s)\n", cand1);
    printf("Candidato 2: %d voto(s)\n", cand2);
    printf("Candidato 3: %d voto(s)\n", cand3);
    printf("Candidato 4: %d voto(s)\n", cand4);
    printf("Votos nulos: %d\n", VtNull);
    printf("Porcentagem de votos em branco: %.2f%%\n", pcntB);

    return 0;
}
