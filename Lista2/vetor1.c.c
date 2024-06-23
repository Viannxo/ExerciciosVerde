/*Faça um algoritmo que leia um vetor de N posições de números inteiros e imprima o maior elemento do vetor e sua posição no vetor. Caso exista mais de um elemento cujo valor seja o maior dentre todos, imprima a posição do último elemento encontrado. N é lido pelo algoritmo.
Entrada:A entrada é composta por duas linhas. A primeira linha contém um inteiro que representa o tamanho do vetor (N). A segunda linha contém N inteiros que representa o conteúdo do array.
Saída: Um única linha contendo o maior elemento e sua respectiva posição.*/

#include <stdio.h>

#include <stdio.h>

int main() {
    int n, maior = 0, posicao = 0;
    // printf("Digite o valor de n:\n");
    scanf("%d", &n);
    int vet[n];
    // printf("Digite os valores do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
        if (vet[i] >= maior) {
            maior = vet[i];
            posicao = i;
        }
    }

    printf("%d %d\n", maior, posicao);
    return 0;
}
