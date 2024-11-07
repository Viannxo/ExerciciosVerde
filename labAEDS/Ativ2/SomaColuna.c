/*
Implemente uma função que preencha uma matriz com N X M, sendo N e M lidos pelo
usuário. A seguir implemente outra função que receba essa matriz e retorne um
vetor de tamanho M contendo a soma dos elementos de cada coluna. Por fim, imprima
o vetor resultante.
Entrada: Primeira linha contem dois N e M inteiros representando, respectivamente,
o número de linhas e colunas da Matriz.
N linhas contendo M inteiros, correspondendo aos elementos da matriz.
Saída: M números inteiros, representando a soma dos elementos de cada coluna.
*/

#include <stdio.h>
#include <time.h>
int n, m;
void lerMatriz(int n, int m, int mat[n][m]){
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++)
    {
      scanf("%d", &mat[i][j]);
    }
  }
}

void SumCol(int n, int m, int Mat[n][m], int Vet[m]){
  int soma = 0;
  for (int j = 0; j < m; j++){
    for (int i = 0; i < n; i++){
      soma += Mat[i][j];
    }
    Vet[j] = soma;
    soma = 0;
  }
}
  int main(){
    scanf("%d %d", &n, &m);
    int Mat[n][m];
    lerMatriz(n, m, Mat);
    int Vet[m];
    SumCol(n, m, Mat, Vet);
    for (int i = 0; i < m; i++){
      printf("%d \t", Vet[i]);
    }
    return 0;
  }
