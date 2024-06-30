#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("\nDigite o tamanho do seu vetor: ");
    scanf("%d", &n);

    int vet1[n];
    printf("\nDigite os elementos do vetor 1:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &vet1[i]);
    }

    int vet2[n];
    printf("\nDigite os elementos do vetor 2:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &vet2[i]);
    }

  int vet3[2 * n];
    int j = 0;
    for (int i = 0; i < n; i++) {
        vet3[j++] = vet1[i];
        vet3[j++] = vet2[i];
    }

    printf("\nVetor 3:\n");
  for (int i = 0; i < 2 * n; i++) {
    printf("%d ", vet3[i]);
    }

    return 0;
}
