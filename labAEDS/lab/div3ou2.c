#include <stdio.h>
#include <math.h>

int main (){
    int num;
    printf("digite um numero: \n");
    scanf("%d", num);
    if ((num%3==0)||(num%5==0)){
        printf("o numero pode ser divisivel por 3 e 5");
    }else if((num%3==0)||(num%5!=0)){
        printf("numero e divisivel apenas por 3");
    }else if((num%3!=0)||(num%5==0)){
        printf("numero e divisivel apenas por 5");
    }
    return 0;
}
