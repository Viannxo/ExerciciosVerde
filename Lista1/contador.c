#include <stdio.h>
int main(){
    int n, cont1 = 0, cont2 = 0;
    while (n >= 0) {
        scanf("%d", &n);
        if(n == 5){
            cont2++;
        }else if(n < 0){
            break;
        }
        cont1++;
    }
printf("%d %d", cont1, cont2);
}