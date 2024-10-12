/* Faça um algoritmo que leia um vetor de N posições de números inteiros e imprima o maior
elemento do vetor e sua posição no vetor. Caso exista mais de um elemento cujo valor seja
o maior dentre todos, imprima a posição do último elemento encontrado. N é lido pelo algoritmo.
Entrada: A entrada é composta por duas linhas. A primeira linha contém um inteiro que representa
o tamanho do vetor (N). A segunda linha contém N inteiros que representa o conteúdo do array.
Saída: Um única linha contendo o maior elemento e sua respectiva posição.
*/

#include <stdio.h>

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vet[n];
    int maior = -1;
    int posicao = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < n; i++) {
        if (vet[i] >= maior) {
            maior = vet[i];
            posicao = i;
        }
    }

    printf("%d %d", maior, posicao);

    return 0;
}
