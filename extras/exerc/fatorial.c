#include <stdio.h>

int fatorial(int);

int main() {
    int result;
    int n;

    printf("Digite o valor de n: \n");
    scanf("%d", &n);

    result = fatorial(n);

    printf("O fatorial de %d e %d\n", n, result);

    return 0;
}

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}


// equacao-- fn(n){ 1 =0 n<= 0;
                //{ f(n)= n * f(n-1); n > 0

