/* Faça um programa que leia as notas de N alunos e armazene-as em um vetor.

A partir do vetor, calcule e imprima a maior nota, a menor nota e a nota média dos alunos.

Separe o programa em duas fases:

preenchimento do vetor;
processamento do vetor.

Entrada: A entrada é composta por duas linhas. A primeira linha contém N, segunda linha contém as N notas do tipo real.

Saída: única linha contendo a maior nota, menor nota e a nota média. Todas com 1 casa decimal.*/

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    float notas[n];

    float maior_nota, menor_nota, media;
    maior_nota = menor_nota = media = 0;

    for (int i = 0; i < n; i++) {
        scanf("%f", &notas[i]);
        if (i == 0 || notas[i] > maior_nota) {
            maior_nota = notas[i];
        }
        if (i == 0 || notas[i] < menor_nota) {
            menor_nota = notas[i];
        }
        media += notas[i];
    }
    media= media/n;

    printf("%.1f %.1f %.1f", maior_nota, menor_nota, media);

    return 0;
}
