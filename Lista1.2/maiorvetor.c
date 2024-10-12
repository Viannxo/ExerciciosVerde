/* Fa�a um algoritmo que leia um vetor de N posi��es de n�meros inteiros e imprima o maior
elemento do vetor e sua posi��o no vetor. Caso exista mais de um elemento cujo valor seja
o maior dentre todos, imprima a posi��o do �ltimo elemento encontrado. N � lido pelo algoritmo.
Entrada: A entrada � composta por duas linhas. A primeira linha cont�m um inteiro que representa
o tamanho do vetor (N). A segunda linha cont�m N inteiros que representa o conte�do do array.
Sa�da: Um �nica linha contendo o maior elemento e sua respectiva posi��o.
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
