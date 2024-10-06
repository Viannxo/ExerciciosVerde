/* Implemente um fun��o que receba um inteiro N e retorne o resultado da seguinte express�o:

S = 1+1/1!+1/2!+1/3!+...+1/N!


Entrada: uma linha contendo o valor de N

Sa�da: Um linha com o resultado da soma com 2 casas decimais. */

#include <stdio.h>
float Sum(int);
int Fat(int);

int main(){
    int n;
    scanf("%d", &n);
    float result=Sum(n);
    printf ("%.2f", result);
}

float Sum(int n) {
    float total = 0.0;
    for (int i = 0; i <= n; i++) {
        total += 1.0 / Fat(i);
    }
    return total;
}

int Fat(int n){
    if(n==0|| n==1){
        return 1;
    }else
        return n* Fat(n-1);
}
