/* Leia um valor inteiro, que é o tempo de duração em segundos
de um determinado evento em uma fábrica, e informe-o expresso no
formato horas:minutos:segundos.
Entrada
O arquivo de entrada contém um valor inteiro N.
Saída
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

