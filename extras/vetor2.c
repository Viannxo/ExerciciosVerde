#include <stdio.h>
#include <math.h>
int main (){
    int n, soma=0, cubo=0, media, i;
    printf("digite o tamanho do seu vetor:");
    scanf("%d", &n);
    int vet[n];
    for(int i = 0; i < n; i++){
        cubo=i*i*i;
        vet[i]=cubo;
        printf("\n conteudo do vetor %d", cubo);
        soma=soma+vet[i];
    }
    printf("\n soma é %d", soma);
    media=soma/n;
    printf("\n a media do vetor é %d", media);
    return 0;
}