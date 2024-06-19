#include <stdio.h>
int main(){
    int n, aux;
    scanf("%d", &n);
    while(n % 10 > 0){
        aux = n % 10;
        n = n / 10;
        printf("%d", aux);
    }
}
