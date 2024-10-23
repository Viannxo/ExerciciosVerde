#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherMatriz(int nLinha, int nCol, int mat[nLinha][nCol]) {
    srand(time(NULL));
    for (int i = 0; i < nLinha; i++) {
        for (int j = 0; j < nCol; j++) {
            mat[i][j] = rand() % 100 + 1;
        }
    }
}

void impMatriz(int nLinha, int nCol, int mat[nLinha][nCol]) {
    for (int i = 0; i < nLinha; i++) {
        for (int j = 0; j < nCol; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int SomaDiag(int nLinha, int nCol, int mat[nLinha][nCol]) {
    int soma = 0;
    for (int i = 0; i < nLinha && i < nCol; i++) {
        soma += mat[i][i];
    }
    return soma;
}

int* somaMatriz(int nLinha, int nCol, int mat1[nLinha][nCol], int mat2[nLinha][nCol]) {
    int *mat3 = malloc(nLinha * nCol * sizeof(int));
    for (int i = 0; i < nLinha; i++) {
        for (int j = 0; j < nCol; j++) {
            mat3[i * nCol + j] = mat1[i][j] + mat2[i][j];
        }
    }
    return mat3;
}

void transposta(int nLinha, int nCol, int matT[nCol][nLinha], int mat[nLinha][nCol]) {
    for (int i = 0; i < nLinha; i++) {
        for (int j = 0; j < nCol; j++) {
            matT[j][i] = mat[i][j];
        }
    }
}

int main() {
    int nLinha, nCol;

    printf("Digite o numero de linhas para a matriz: \n");
    scanf("%d", &nLinha);
    printf("Digite o numero de colunas para a matriz: \n");
    scanf("%d", &nCol);

    int mat[nLinha][nCol];
    int mat2[nLinha][nCol];
    int matT[nCol][nLinha];

    preencherMatriz(nLinha, nCol, mat);
    printf("\nMatriz 1:\n");
    impMatriz(nLinha, nCol, mat);
    printf("\n");

    preencherMatriz(nLinha, nCol, mat2);
    printf("Matriz 2:\n");
    impMatriz(nLinha, nCol, mat2);
    printf("\n");

    int somaDiagonal = SomaDiag(nLinha, nCol, mat);
    printf("Soma da Diagonal Principal: %d\n\n", somaDiagonal);

    int *mat3 = somaMatriz(nLinha, nCol, mat, mat2);
    printf("Matriz 3 (Soma das duas matrizes):\n");
    impMatriz(nLinha, nCol, (int(*)[nCol])mat3);
    printf("\n");

    printf("Matriz Transposta:\n");
    transposta(nLinha, nCol, matT, mat);
    impMatriz(nCol, nLinha, matT);

    free(mat3);
    return 0;
}
