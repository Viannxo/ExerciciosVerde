#include <stdio.h>

void fibonacci(int a, int b, int c){
        a, b, c;
        printf (" %d ", a);
        printf (" %d ", b);
        for (int i=0;i<10;i++){
            c=a+b;
            a=b;
            b=c;
            printf(" %d ", c);
        }
}
int main (){
    int a=0, b=1, c;
    fibonacci(a, b,c);
    return 0;
}
