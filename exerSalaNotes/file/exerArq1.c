#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa {
    char Nome[80];
} Pessoa;

void cadastrarNomes(Pessoa *p, int n) {
    printf("Digite até %d nomes (um por vez):\n", n);
    getchar();
    for (int i = 0; i < n; i++) {
        printf("Nome %d: ", i + 1);
        fgets(p[i].Nome, 80, stdin);
        size_t len = strlen(p[i].Nome);
        if (p[i].Nome[len - 1] == '\n') {
            p[i].Nome[len - 1] = '\0';
        }
    }
}

void printNomes(Pessoa *p, int n, FILE *a) {
    for (int i = 0; i < n; i++) {
        fprintf(a, "%s\n", p[i].Nome);
    }
}

int main() {
    int n = 0;
    printf("Digite o número de nomes (até 5): ");
    scanf("%d", &n);

    if (n < 1 || n > 5) {
        printf("Número inválido. Deve estar entre 1 e 5.\n");
        return 1;
    }

    Pessoa *p = malloc(n * sizeof(Pessoa));
    if (p == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    cadastrarNomes(p, n);

    FILE *arquivoNomes = fopen("nomes.txt", "w");
    if (arquivoNomes == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        free(p);
        return 1;
    }

    printNomes(p, n, arquivoNomes);
    fclose(arquivoNomes);

    printf("\nOs nomes armazenados no arquivo são:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", p[i].Nome);
    }

    printf("\nTotal de nomes: %d\n", n);

    free(p);
    return 0;
}
