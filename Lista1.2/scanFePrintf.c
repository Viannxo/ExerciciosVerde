/* Escreva um programa em C que solicite ao usuário a entrada de um número inteiro e um número em ponto flutuante (float).

Após a leitura seu programa deve imprimir para o número inteiro:
o número em formato decimal, utilizando 5 dígitos, preenchendo com zeros à esquerda se necessário.
Imprima o número em formato hexadecimal.
Imprima o número em formato octal.
Imprima o caractere correspondente ao valor inteiro.

Para o número float:
Imprima o número com 6 casas decimais.
Imprima o número com 2 casas decimais.
Imprima o número em notação científica com a letra "e" em minúscula.
Imprima o número em notação científica com a letra "E" em maiúscula.
Entrada: dois valores, um inteiro e um float.

Saída: 8 linhas, uma para conversão solicitada. */

#include <stdio.h>

int main() {
    int num;
    float num2;

    //printf("Digite um numero inteiro: ");
    scanf("%d", &num);
   // printf("Digite um numero float: ");
    scanf("%f", &num2);
    printf("Decimal: %05d\n", num);
    printf("Hexadecimal: %x\n", num);
    printf("Octal: %o\n", num);
    printf("Char: %c\n", num);
    printf("Com 6 casas decimais: %.6f\n", num2);
    printf("Com 2 casas decimais: %.2f\n", num2);
    printf("Notacao cientifica (lower): %.6e\n", num2);
    printf("Notacao cientifica (upper): %.6E\n", num2);

}
