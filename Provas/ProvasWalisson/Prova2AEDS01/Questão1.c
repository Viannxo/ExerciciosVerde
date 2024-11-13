//troque o conteudo da string pelas 5 primeiras letras do seu nome

#include <stdio.h>
#include <string.h>

void strFunc2(char A[], int n){
    char t;
    if (n<=1){
        return;
    }
    t=A[0];
    printf("t=A[0] = %s \n", A[0]);
    A[0] = A[n-1];
    printf("A[n-1] = %s \n", A[n-1]);
    A[n-1]=t;
    printf("Novo valor de A[n-1]=t = %s", A[n-1]);
    strFunc2(&A[1], n-2);
    
}

int main(){
    char A[5]= {'E','D','U','A','R'};
    strFunc2(A, 5);
    printf("%s", A);
}