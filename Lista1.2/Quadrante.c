/* Escreva um programa para ler as coordenadas (X,Y)
 de pontos no sistema cartesiano e escrever o quadrante
  a que ele pertence.

Entrada
A entrada um caso de teste com 2 valores inteiros.

Saída
Mostre em qual quadrante do sistema cartesiano se encontra
 a coordenada lida, conforme o exemplo. */


#include <stdio.h>
int main (){
    int cordX, cordY;
    scanf ("%d %d", &cordX, &cordY);
    if (cordX > 0 && cordY > 0) {
        printf("primeiro\n");
    } else if (cordX < 0 && cordY > 0) {
        printf("segundo\n");
    } else if (cordX < 0 && cordY < 0) {
        printf("terceiro\n");
    } else if (cordX > 0 && cordY < 0) {
        printf("quarto\n");
    }


}
