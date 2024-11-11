/*Escreva uma função qu receba duas matrizes e retorne uma terceira matriz 
que é o resultado da multiplicação das duas matrizes*/

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
int *multiMat(int x, int y, int A[x][y], int a, int b, int B[a][b]){
    int *c=(*int)malloc(x*b*sizeof(int));
    for (int i=0; i<x; i++){
        for (int j=0; j<b; j++){
            c[i*b+j] = 0;
            for(int k=0; k<y; k++){
                c[i*b+j] += A[i][k]*B[k][j];
            }
        }
    }
}

int main(){
    int x, y, a, b;
    int *C;
    scanf("%d %d", &x, &y);
    scanf("%d %d", &a, &b);
    int A[x][y], B[a][b];
    preencherMatriz(x, y, A);
    preencherMatriz(a, b, B);
    *C = multiMat(x, y, A, a, b, B);
    free(c);
    return 0;
}