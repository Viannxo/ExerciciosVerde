#include <stdio.h>
#include <stdlib.h>

// Variáveis globais para os limites
int MAX_CARTELAS = 100; // máximo de cartelas que podem ser processadas
int MAX_NUMEROS_CARTELA = 25; // máximo de números em cada cartela
int MAX_NUMEROS_SORTEADOS = 100; // máximo de números sorteados

// Procedimento para cadastrar as cartelas dos participantes
void cadastrarCartelas(int cartelas[][25], int N, int M) {
    for (int i = 0; i < N; i++) {
        printf("Cartela do participante %d:\n", i + 1);
        for (int j = 0; j < M; j++) {
            printf("Digite o numero %d: ", j + 1);
            scanf("%d", &cartelas[i][j]);
        }
    }
}

// Procedimento para cadastrar os números sorteados
void cadastrarNumerosSorteados(int numerosSorteados[], int U) {
    printf("Numeros sorteados:\n");
    for (int i = 0; i < U; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numerosSorteados[i]);
    }
}

// Função para calcular os pontos de uma cartela
int calcularPontosCartela(int cartela[], int numerosSorteados[], int M, int U) {
    int pontos = 0;
    for (int i = 0; i < U; i++) {
        for (int j = 0; j < M; j++) {
            if (cartela[j] == numerosSorteados[i]) {
                pontos++;
                break; // só conta um ponto por número na cartela
            }
        }
    }
    return pontos;
}

// Procedimento para imprimir o total de pontos de cada cartela
void imprimirPontosCartelas(int pontos[], int N) {
    printf("\nPontos de cada cartela:\n");
    for (int i = 0; i < N; i++) {
        printf("Cartela do participante %d: %d pontos\n", i + 1, pontos[i]);
    }
}

int main() {
    int N, M, U;

    // Lendo a quantidade de participantes (cartelas) e números por cartela
    printf("Digite o numero de participantes (cartelas): ");
    scanf("%d", &N);
    printf("Digite o numero de numeros por cartela: ");
    scanf("%d", &M);

    // Lendo o numero de numeros sorteados
    printf("Digite o numero de numeros sorteados: ");
    scanf("%d", &U);

    // Validando os limites
    if (N < 1 || N > MAX_CARTELAS) {
        printf("Quantidade de participantes fora do limite.\n");
        return 1;
    }
    if (M < 1 || M > MAX_NUMEROS_CARTELA) {
        printf("Quantidade de numeros por cartela fora do limite.\n");
        return 1;
    }
    if (U < 1 || U > MAX_NUMEROS_SORTEADOS) {
        printf("Quantidade de numeros sorteados fora do limite.\n");
        return 1;
    }

    // Declaração dos arrays para cartelas e números sorteados
    int cartelas[MAX_CARTELAS][MAX_NUMEROS_CARTELA];
    int numerosSorteados[MAX_NUMEROS_SORTEADOS];

    // Cadastrando as cartelas dos participantes
    cadastrarCartelas(cartelas, N, M);

    // Cadastrando os numeros sorteados
    cadastrarNumerosSorteados(numerosSorteados, U);

    // Calculando os pontos de cada cartela
    int pontos[MAX_CARTELAS];
    for (int i = 0; i < N; i++) {
        pontos[i] = calcularPontosCartela(cartelas[i], numerosSorteados, M, U);
    }

    // Imprimindo o total de pontos de cada cartela
    imprimirPontosCartelas(pontos, N);

    return 0;
}