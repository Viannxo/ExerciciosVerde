#include <stdio.h>

int expo(int, int);

int main() {
    int result;
    int base, expoente;

    printf("Digite o valor da base:\n");
    scanf("%d", &base);
    printf("Digite o valor do expoente:\n");
    scanf("%d", &expoente);
    result = expo(base, expoente);
    printf("O resultado de %d elevado a %d e: %d\n", base, expoente, result);

    return 0;
}

int expo(int a, int b) {
    int nFinal = 1;

    if (b == 0) {
        return 1;
    }

    for (int i = 0; i < b; i++) {
        nFinal *= a;
    }

    return nFinal;
}

