/* Leia um valor inteiro, que � o tempo de dura��o em segundos
de um determinado evento em uma f�brica, e informe-o expresso no
formato horas:minutos:segundos.
Entrada
O arquivo de entrada cont�m um valor inteiro N.
Sa�da
Imprima o tempo lido no arquivo de entrada (segundos),
convertido para horas:minutos:segundos, conforme exemplo fornecido. */

#include <stdio.h>

int main() {
    int entrada, horas, min, seg;
    //printf("digite valor em segundos:");
    scanf("%d", &entrada);
    horas = entrada / 3600;
    min = (entrada % 3600) / 60;
    seg = entrada % 60;
    printf("%02d:%02d:%02d\n", horas, min, seg);
    return 0;
}

