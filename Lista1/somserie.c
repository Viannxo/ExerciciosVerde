#include <stdio.h>
int main() {
    float termos, aux = 1;
    float resultado = 0, soma;
    scanf("%f", &termos);
    for(float i = 1; i <= termos; i++) {
        soma = aux / i;
        aux = aux + 2;
        resultado = resultado + soma;
    }
    printf("%.2f", resultado);
}