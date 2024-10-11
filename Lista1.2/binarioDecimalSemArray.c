/* Implemente uma função recursiva binarioParaDecimal(int binario) que receba um número binário como entrada e retorne o valor decimal correspondente. A função deve realizar a conversão utilizando operações matemáticas simples

Sem o uso de arrays ou qualquer tipo de estrutura de dados complexa.

Entrada: uma linha composta por 0 ou 1.

Saída: decimal equivalente */


#include <stdio.h>

int Conversor(int binario);

int main() {
    int binario;
    scanf("%d", &binario);
    int decimal = Conversor(binario);
    printf("%d\n", decimal);
    return 0;
}

int Conversor(int binario) {
    if (binario == 0) {
        return 0;
    } else {
        return (binario % 10) + 2 * Conversor(binario / 10);
    }
}

