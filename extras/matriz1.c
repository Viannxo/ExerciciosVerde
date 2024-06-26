#include <stdio.h>
/*calcule a soma de todos os elemntos da matriz*/
int main()
{
    int soma, x, y, i, j, maior, cm, lm;
    printf("digite o valor o numero de linhas da matriz: \n");
    scanf("%d", &x);
    printf("digite o valor o numero de colunas da matriz: \n");
    scanf("%d", &y);
    int matriz[x][y];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("digite o conteudo da linha %d e coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            soma = soma + matriz[i][j];
        }
    }
    printf("a soma de todos os elementos da matriz é: %d\n", soma);

    maior = matriz[0][0];
    cm = 0;
    lm = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            soma = soma + matriz[i][j];
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                cm = j;
                lm = i;
            }
        }
    }
    printf("o maior elemento da matriz é: %d\n", maior);
}