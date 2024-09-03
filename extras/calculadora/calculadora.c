
#include <stdio.h>
#include <stdlib.h>
int Menu();
double soma(double,double);
double sub(double,double);
double multi(double,double);
double divi(double,double);

int main(){
    double num1=6, num2=3, result;
    int opcao;
    do{
        opcao = Menu();
        if(opcao >0 && opcao<5){
            printf("digite o numero 1:\n ");
            scanf("%'lf", &num1);
            printf("Digite o numero 2:\n");
            scanf("%lf", &num2);
            switch (opcao){
                case 1:
                    result=soma(num1, num2);
                    break;
        
                case 2:
                    result=sub(num1, num2);
                    break;
            
                case 3:
                    result=multi(num1,num2);
                    break;
            
                 case 4:
                    result=divi(num1, num2);
                    break;
            }
        printf("o resultado da operacao e: %lf \n", result);
        system("pause");
    }
    if (opcao < 1 || opcao >5){
        printf("opcao invalida!");
    }
    }while (opcao !=5);  

}
double soma(double x ,double y){
    return x+y;
}

double sub(double x, double y){
    return x-y;
}

double multi(double x, double y){
    return x*y;
}
double divi(double x, double y){
    return x/y;
}


int Menu(){
    int opcao;
    system("clear");
    printf("opcoes: 1- Soma, 2-Sub, 3-Multi, 4-Divi, 5-End\n");
    printf("digite opcao desejada:\n");
    scanf("%d", &opcao);
    return opcao;
    }
/*Escreva um programa em C que exiba a seguinte tela:
1)soma/ 2)subtração/ 3)Multiplicacao/ 4)Divisao/ 5) Encerrar
Digite opcao desejada*/









   