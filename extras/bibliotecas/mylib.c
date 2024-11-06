#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"
#include <math.h>

void preencherVetor (int *x, int y){
    srand(time(NULL));
    for( int i=0; i< y; i++){
        x[i]= rand()%100;
    }
}

void impVetor (int *x, int y){
    for (int i =0; i< y; i++){
        printf ("%d\t",x[i] );
    }
}


int somaElementosVetor (int *x, int y){
    int soma=0;
    for(int i=0; i<y;i++){
        soma=soma + x[i];
    }
    return soma;
}


int maiorElemento( int *x, int y){
    int maior=-1000;
    for (int i=0; i< y; i++){
        if (x[i]>maior){
            maior= x[i];
        }

    }
    return maior;
}

void preencherMatriz (int **x,int z, int y){
    srand(time(NULL));
    for( int i=0; i< y; i++){
        for( int j=0; j<z;j++){
            x[i][j]= rand()%100;
            }
    }
}


void impMatriz (int **x,int z, int y){
    for (int i =0; i< y; i++){
        for (int j=0; j<z; j++){
            printf ("%d\t",x[i][j]);
        }
    }

}

int soma (int x , int y){
    return x+y;
}

int sub(int x, int y){
  return x/y;
}
int mult(int x , int y){

}
int div(int x, int y){
  return x/y;
}

int fib(int a , int b , int c){
  //a=0
  //b=1
  int n;
  printf("\n qual casa de fibonacci voce deseja: \n");
  scanf("%d", &n);
  for(int i=0; i<n;i++){
    c=a+b;
    a=b;
    b=c;
  }

}