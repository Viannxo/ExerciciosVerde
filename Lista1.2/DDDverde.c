/* Leia um n�mero inteiro que representa um c�digo de DDD para discagem interurbana.
Em seguida, informe � qual cidade o DDD pertence, considerando a tabela abaixo:

11 - Brasilia
21 - Rio de Janeiro
31 - Belo Horizonte
27 - Vitoria
35 - Lavras
71 - Salvador
19 - Campinas
Se a entrada for qualquer outro DDD que n�o esteja presente na tabela acima, o programa dever� informar: DDD nao cadastrado
Entrada
A entrada consiste de um �nico valor inteiro.
Sa�da
Imprima o nome da cidade correspondente ao DDD existente na entrada.
Imprima DDD nao cadastrado caso n�o existir DDD correspondente ao n�mero digitado. */

#include <stdio.h>

#include <stdio.h>

int main() {
    int numDDD;
    scanf("%d", &numDDD);

    switch (numDDD) {
        case 11:
            printf("Brasilia\n");
            break;
        case 21:
            printf("Rio de Janeiro\n");
            break;
        case 31:
            printf("Belo Horizonte\n");
            break;
        case 27:
            printf("Vitoria\n");
            break;
        case 35:
            printf("Lavras\n");
            break;
        case 71:
            printf("Salvador\n");
            break;
        case 19:
            printf("Campinas\n");
            break;
        default:
            printf("DDD nao cadastrado\n");
            break;
    }
    return 0;
}

