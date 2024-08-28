#include <stdio.h>
#include <math.h>

int main(){
    float n1, n2, n3, media;
    char ops;
    printf("digite 3 numeros inteiros: \n");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("escolha entre \n a= Media Aritmetica \n g=Media Geometrica\n h=Media Harmonica \n p=Media Podenderada \n ");
    scanf(" %c",&ops);
    if((ops=='a')||(ops=='A')){
        media= (n1+n2+n3)/3.0;
        printf("%f", media);
    }
    if((ops=='g')||(ops=='G')){
        media= sqrt(n1=n2=n3);
        printf("%f", media);
    }
    if((ops=='h')||(ops=='H')){
        media= 3/(pow(n1,-1)+pow(n2,-1)+pow(n3,-1));
        printf("%f", media);
    }
    if((ops=='p')||(ops=='P')){
        media= (n1*2*n2+3*n3)/2;
        printf("%f", media);
    }
}
