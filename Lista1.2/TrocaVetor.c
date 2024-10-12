/* Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o último,
o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º. Mostre o vetor modificado.
Entrada
A entrada contém 20 valores inteiros, positivos ou negativos.
Saída
Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor
armazenado naquela posição.*/

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
