/*
Escreva um programa em linguagem C que solicite ao usuário o valor do raio de um círculo. O programa deve calcular e exibir a área e o perímetro do círculo, apresentando os resultados com duas casas decimais.

Requisitos:
O programa deve usar a constante PI com o valor 3.14159.
O cálculo da área deve ser feito usando a fórmula: Area = 𝜋 × raio^2
O cálculo do perímetro deve ser feito usando a fórmula: Perimetro=2×𝜋×raio
Os resultados devem ser exibidos com duas casas decimais.

Entrada: raio do circulo

Saída: Uma linha com área e perímetro com duas casas decimais.

*/

#include <stdio.h>
int main (){
    float raio, area, perimetro, pi=3.14159;
    //printf("digite o raio do circulo:");
    scanf("%f", &raio);
    area= (raio * raio) * pi;
    perimetro= 2*pi *raio;
    printf (" %.2f %.2f", area, perimetro);

}
