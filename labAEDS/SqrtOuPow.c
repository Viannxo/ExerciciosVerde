#include <stdio.h>
#include <math.h>

int main (){
    double num, result;
    printf("digite um numero: \n");
    scanf("%lf", &num);
    if (num<0){
        result=pow(num,2);
        printf("%.lf", result);
    }else if(num>0){
        result=sqrt(num);
        printf("%.lf", result);
    }
}
