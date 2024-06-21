
#include <stdio.h>
int main() {
    int voto = 1, a1 = 0, a2 = 0, a3 = 0, a4 = 0, vn = 0;
    float divisao, cont = 0, vb = 0;
    while (voto > 0) {
        scanf("%d", &voto);
        switch (voto){
            case 1:
                a1++;
                cont++;
                break;
            case 2:
                a2++;
                cont++;
                break;
            case 3:
                a3++;
                cont++;
                break;
            case 4:
                a4++;
                cont++;
                break;
            case 5: 
                vn++;
                cont++;
                break;
            case 6:
                vb++;
                cont++;
                break;
        }
    }
    divisao = (100 / cont) * vb;
        printf("%d %d %d %d\n%d\n%.2f", a1, a2 ,a3 , a4, vn, divisao);
    
}