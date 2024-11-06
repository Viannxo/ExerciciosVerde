#include <stdio.h>

void Ordena(int a, int b, int c) {
    int menor, meio, maior;

    if (a < b && a < c) {
        menor = a;
    } 
    if ((a < b && a > c) || (a > b && a < c)) {
        meio = a;
    } 
    if (a > b && a > c) {
        maior = a;
    }
    
    if (b < a && b < c) {
        menor = b;
    } 
    if ((b < a && b > c) || (b > a && b < c)) {
        meio = b;
    } 
    if (b > a && b > c) {
        maior = b;
    }
    
    if (c < a && c < b) {
        menor = c;
    } 
    if ((c < a && c > b) || (c > a && c < b)) {
        meio = c;
    } 
    if (c > a && c > b) {
        maior = c;
    }

    printf("\nMenor: %d\nMedio: %d\nMaior: %d\n", menor, meio, maior);
}

int main() {
  int n1, n2, n3;
  printf("Informe os 3 numeros do conjunto:\n");
  scanf("%d %d %d", &n1, &n2, &n3);
  Ordena(n1, n2, n3);
  return 0;
}
