#include <stdio.h>
/*calcule a soma de todos os elemntos da matriz*/
int main()
{
    int soma, x, y, i, j, d1, d2, ti, somal, somac;
    do
    {
        printf("digite o valor de linhas e colunas de uma matriz quadrada: \n");
        scanf("%d %d", &x, &y);
    } while (x != y);

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
        somal = 0;
        for (int j = 0; j < y; j++)
        {
            somal = somal + matriz[i][j];
            soma = soma + matriz[i][j];
            if (i == j)
            {
                d1 += matriz[i][j];
            }
            if (i + j == x - 1)
            {
                d2 += matriz[i][j];
            }
            if (i > j)
            {
                ti += matriz[i][j];
            }
        }
    }
}
