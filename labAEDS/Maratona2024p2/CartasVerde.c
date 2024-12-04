/*Cartas
Beatriz gosta muito de jogar cartas com as amigas. Para treinar mem�ria e racioc�nio
l�gico, ela inventou um pequeno passatempo com cartas. Ela retira as cinco primeiras
cartas do topo de um baralho bem embaralhado, e as coloca em sequ�ncia, da esquerda
para a direita, na mesa, com as faces voltadas para baixo.
Ent�o ela olha, por um breve instante, cada uma das cartas da sequ�ncia (e logo as
recoloca na mesa, com a face para baixo). Usando apenas a sua mem�ria, Beatriz deve
agora dizer se a sequ�ncia de cartas est� ordenada crescentemente, decrescentemente,
ou n�o est� ordenada.

De tanto jogar, ela est� ficando cansada, e n�o confia em seu pr�prio julgamento para
saber se acertou ou errou. Por isso, ela pediu para voc� fazer um programa que, dada
uma sequ�ncia de cinco cartas, determine se a sequ�ncia dada est� ordenada crescentemente,
decrescentemente, ou n�o est� ordenada.

Entrada

A entrada consiste de uma �nica linha que cont�m as cinco cartas da sequ�ncia. Os valores
das cartas s�o representados por inteiros entre 1 e 13. As cinco cartas t�m valores distintos.

Sa�da

Seu programa deve produzir uma �nica linha, contendo um �nico caractere mai�sculo: "C"
caso a sequ�ncia dada esteja ordenada crescentemente, "D" se estiver ordenada decrescentemente,
ou "N" caso contr�rio.

Restri��es

O valor de cada carta � um inteiro entre 1 e 13.
*/


#include <stdio.h>



int main() {
    int cartas[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &cartas[i]);
    }
    if (cartas[0] < cartas[1] && cartas[1] < cartas[2] && cartas[2] < cartas[3] && cartas[3] < cartas[4]) {
        printf("C\n");
    } else if (cartas[0] > cartas[1] && cartas[1] > cartas[2] && cartas[2] > cartas[3] && cartas[3] > cartas[4]) {
        printf("D\n");
    } else {
        printf("N\n");
    }

    return 0;
}
