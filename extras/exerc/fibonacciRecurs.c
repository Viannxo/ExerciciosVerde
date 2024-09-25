#include <stdio.h>

void fibonacci(int a, int b, int count) {
    if (count == 0) return;
    printf(" %d ", a);
    fibonacci(b, a + b, count - 1);
}

int main() {
    int n;
    printf("Digite quantas casas da sequência de Fibonacci você deseja: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Por favor, insira um número positivo.\n");
    } else {
        printf("Sequência de Fibonacci:\n");
        fibonacci(0, 1, n);
    }
    
    return 0;
}
