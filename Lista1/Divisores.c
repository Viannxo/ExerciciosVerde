#include <stdio.h>

int main()
{
    int n, cont = 0, expo = 0, resultado = 1;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        cont = 0;
        for(int j = 1; j <= i; j++) {
            if(i % j == 0) {
                cont++;
            }
        }
        if(cont == 2) {
            if(n % i == 0) {
                expo = 0;
                while(n % i == 0) {
                    expo++;
                    n = n / i;
                }
                resultado = resultado * (expo + 1);
            }
        }
    }
    printf("%d", resultado);
}