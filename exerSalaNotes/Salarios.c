/* Escreva um programa em "c" que leia um salario e calcule o valor a
ser pago.
faixas de IR(Imposto de Renda):
1-até 2259,20= isento.
2-2259,21 a 2826,65= 7,5%
3-2826,66 a 3751,05 = 15%
4-3751,06 a 4664,68 = 22,5%
5-maior que 4664,68 =27,5%
 */ 
#include <stdio.h>

int main() {
    float salario;
    printf("Digite seu salario: \n");
    scanf("%f", &salario);

    if (salario <= 2259.20) {
        printf("Isento de IR\n");
    } else if (salario > 2259.20 && salario <= 2826.65) {
        salario = salario * 0.075;
        printf("7.5%% de IR, novo salario = %.2f\n", salario);
    } else if (salario > 2826.65 && salario <= 3751.05) {
        salario = salario * 0.15;
        printf("15%% de IR, novo salario = %.2f\n", salario);
    } else if (salario > 3751.05 && salario <= 4664.68) {
        salario = salario * 0.225;
        printf("22.5%% de IR, novo salario = %.2f\n", salario);
    } else if (salario > 4664.68) {
        salario = salario * 0.275;
        printf("27.5%% de IR, novo salario = %.2f\n", salario);
    }

    return 0;
}
