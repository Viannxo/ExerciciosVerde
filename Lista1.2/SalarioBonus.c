/* Escreva um programa em C que leia o nome de um vendedor,
o seu sal�rio fixo e o total de vendas efetuadas por ele no
m�s (em dinheiro). Sabendo que este vendedor ganha 15% de
comiss�o sobre suas vendas realizadas, informar o total a
receber no final do m�s, com duas casas decimais.

Entrada
O arquivo de entrada cont�m um texto (primeiro nome do vendedor) e
2 valores de dupla precis�o (double) com duas casas decimais, representando
 o sal�rio fixo do vendedor e montante total das vendas efetuadas por este
 vendedor, respectivamente.
Sa�da
Imprima o total que o funcion�rio dever� receber, conforme exemplo fornecido. */

#include <stdio.h>

int main() {
    char nome[50];
    double salario_fixo, total_vendas, total_receber;

    //printf("Digite o nome do vendedor: ");
    scanf("%s", nome);
    //printf("Digite o sal�rio fixo: ");
    scanf("%lf", &salario_fixo);
    //printf("Digite o total de vendas: ");
    scanf("%lf", &total_vendas);
    total_receber = salario_fixo + (total_vendas * 0.15);
    printf("TOTAL = R$ %.2lf\n", total_receber);
}

