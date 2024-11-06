#include <stdio.h>

void lerMatriz(int n, int m, int mat[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", mat[i][j]);
        }
    }
}

int SumBordExt(int n, int m, int mat[n][m]) {
    int soma = 0;

    for (int j = 0; j < m; j++) {
        soma += mat[0][j];       
        soma += mat[n-1][j];     
    }
    for (int i = 1; i < n-1; i++) {  
        soma += mat[i][0];        
        soma += mat[i][m-1];      
    }

    return soma;
}

int main() {
    int n, m, sumBord;
    printf("Digite o numero de linhas e colunas: ");
    scanf("%d %d", &n, &m);
    int Mat[n][m];  
    lerMatriz(n, m, Mat);
    sumBord = SumBordExt(n, m, Mat);
    printf("Soma das bordas: %d\n", sumBord);
    return 0;
}
