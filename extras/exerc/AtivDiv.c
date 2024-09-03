#include <stdio.h>
int main() {
    int nDiv(int n);
    int n;
    int N;
    int div=1;
    int cont=0;
    while(n % 2 == 0){
        cont++;
        n /= 2;
    }
    div*= (cont + 1);
    
    for(int i = 3; i * i <= n; i += 2){
        cont = 0;
        while (n % i == 0) {
            cont++;
            n /= i;
        }
        div *= (cont + 1);
    }
    if(n>2){
        div*= 2;
    }
    return div;
    scanf ("%d", &N);
    printf ("%d\n", nDiv(N));
    return 0;
}
