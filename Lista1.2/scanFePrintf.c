/* Escreva um programa em C que solicite ao usu�rio a entrada de um n�mero inteiro e um n�mero em ponto flutuante (float).

Ap�s a leitura seu programa deve imprimir para o n�mero inteiro:
o n�mero em formato decimal, utilizando 5 d�gitos, preenchendo com zeros � esquerda se necess�rio.
Imprima o n�mero em formato hexadecimal.
Imprima o n�mero em formato octal.
Imprima o caractere correspondente ao valor inteiro.

Para o n�mero float:
Imprima o n�mero com 6 casas decimais.
Imprima o n�mero com 2 casas decimais.
Imprima o n�mero em nota��o cient�fica com a letra "e" em min�scula.
Imprima o n�mero em nota��o cient�fica com a letra "E" em mai�scula.
Entrada: dois valores, um inteiro e um float.

Sa�da: 8 linhas, uma para convers�o solicitada. */

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
