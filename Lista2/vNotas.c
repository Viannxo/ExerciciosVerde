#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    float notas[n];

    float maior_nota, menor_nota, media;
    maior_nota = menor_nota = media = 0;

    for (int i = 0; i < n; i++) {
        scanf("%f", &notas[i]);
        if (i == 0 || notas[i] > maior_nota) {
            maior_nota = notas[i];
        }
        if (i == 0 || notas[i] < menor_nota) {
            menor_nota = notas[i];
        }
        media += notas[i];
    }
    media= media/n;

    printf("%.1f %.1f %.1f", maior_nota, menor_nota, media); 

    return 0;
}
