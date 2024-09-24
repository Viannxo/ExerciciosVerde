#include <stdio.h>
void impriBin(int);

int main(){
    int n;
    int result;
    printf("digite valor de n que ira se converter para binario: \n");
    scanf("%d", &n);
    impriBin(n);
    result=impriBin;
}


void impriBin(int n){
    if (n> 1){
        impriBin(n/2);
    }
    printf("%d",n%2);
}
