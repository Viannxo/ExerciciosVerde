/* Fa�a um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o �ltimo,
o segundo elemento com o pen�ltimo, etc., at� trocar o 10� com o 11�. Mostre o vetor modificado.
Entrada
A entrada cont�m 20 valores inteiros, positivos ou negativos.
Sa�da
Para cada posi��o do vetor N, escreva "N[i] = Y", onde i � a posi��o do vetor e Y � o valor
armazenado naquela posi��o.*/

#include <stdio.h>
int main(){
    int vet[20];
    int vet2[20];
    for(int i=0; i<20;i++){
        scanf("%d", &vet[i]);
    }
    for(int i = 0; i < 20; i++) {
        vet2[i] = vet[19 - i];
    }
    for(int i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, vet2[i]);
    }
    return 0;
}
