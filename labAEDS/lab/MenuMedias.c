#include <stdio.h>
#include <math.h>
float mediaH(int n);
float mediaAri(int, int, int);
float mediaGeo (int, int, int);
float mediaPon(int);
float SomaPon(int);

void menu(){
    printf ("Programa para calcular media: \n");
    printf ("A) media aritmetica \n");
    printf ("B) media geometrica \n");
    printf ("C) media harmonica \n");
    printf ("D) media ponderada \n");
    printf ("S) sair \n");
}

int main () {
    char letra;
    int n1, n2, n3;
    int n;
    float result;
    do {
        menu();
        scanf(" %c", &letra);
    switch(letra){
        case'A':
        case'a':
            printf("voce escolheu media aritmetica \n");
            printf("\ndigite o primeiro numero:");
            scanf(" %d", &n1);
            printf("\ndigite o segundo numero:");
            scanf(" %d", &n2);
            printf("\ndigite o terceiro numero:");
            scanf(" %d", &n3);
            result=mediaAri(n1,n2,n3);
            printf("\n a media aritmetica dos 3 numeros digitados é %.2f ", result);
            break;
        case'B':
        case'b':
            printf("voce escolheu media geometrica");
            printf("\ndigite o primeiro numero:");
            scanf(" %d", &n1);
            printf("\ndigite o segundo numero:");
            scanf(" %d", &n2);
            printf("\ndigite o terceiro numero:");
            scanf(" %d", &n3);
            result = mediaGeo(n1, n2, n3);
            printf("\n A media e: %.2f \n", result);
            break;
        case'C':
        case'c':
            printf("voce escolheu media harmonica \n");
            printf("\n digite o valor de n:");
            scanf(" %d", &n);
            result=mediaH(n);
            printf("resultado da media e igual %.3f", result);
            break;
        case'D':
        case'd':
            printf("voce escolheu media ponderada \n");
            printf ("digite valor de n:\n");
            scanf("%d", &n);
            float result = mediaPon(n);
            printf("Média Ponderada: %f\n", result);

            break;
        case'S':
        case's':
            printf("tchau! \n");
            break;
        default:
            printf("escolha invalida \n");
            break;
    }
            system("pause");
        system("cls");
    }while (letra != 'S' && letra != 's');
}


float mediaAri(int n1, int n2, int n3){
    int media;
    media = (n1 + n2 + n3) / 3.0;
    printf("\nA média aritmética é: %.2f\n", media);
}


float mediaH(int n){
    float somaDiv=0.0;
    int num=1;
    for (int i=1; i<=n;i++){
        somaDiv=somaDiv+(1.0/num);
        num++;
    }
    float mediaHarm = n/somaDiv;
    return mediaHarm;
}

float mediaGeo(int n1, int n2, int n3){
    float soma;
    float media;
    soma = n1*n2*n3;
    media = cbrt(soma);
    return media;
}

float mediaPon(int n) {
    float somaPesos = 0;
    float sum = SomaPon(n);

    for(int i = 1; i <= n; i++){
        somaPesos= somaPesos + i;
    }
    float mediaPon=(sum/somaPesos);
    return mediaPon;
}

float SomaPon(int n) {
    float soma = 0;
    for(int i = 1; i <= n; i++) {
        soma += i * (n - i + 1);
    }
    return soma;
}
