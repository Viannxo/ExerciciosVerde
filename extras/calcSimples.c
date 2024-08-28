#include <stdio.h>
int main(){
    int n1, n2, result;
    char ops;
    printf("escolha a opcao: \n * Multiplicacao \n + Adicao \n - Subtracao \n / Divisao \n");
    scanf(" %c",&ops);
    printf("digite o n1 \n");
    scanf("%d", &n1);
    printf("digite o n2 \n");
    scanf("%d", &n2);

    switch (ops){
    case '+': result= n1+n2;
        break;
    case '/': if((n1==0) || (n2==0)){
                printf("erro com divisao com zero");
        }else{
        result= n1/n2;
        }
        break;
    case '*':result=n1/n2;
        break;

    case '-': result= n1-n2;
        break;

    }
    printf("o resultado e: %d \n", result);
    return 0;
}