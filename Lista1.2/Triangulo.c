#include <stdio.h>
void trian(int);

int main(){
    int n;
    scanf("%d", &n);
    trian(n);

}

void trian (int n){
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

}
