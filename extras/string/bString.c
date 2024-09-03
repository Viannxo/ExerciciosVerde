#include <stdio.h>

#define TAMANHO_MAX_STRING 1000
#define MAX_STRINGS 100

typedef struct {
    char conteudo[TAMANHO_MAX_STRING];
} String;

void pMinus(char *str) {
    for(int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 'a' - 'A';
        }
    }
}

int comprimentoString(char *str) {
    int comprimento = 0;
    while (str[comprimento] != '\0') {
        comprimento++;
    }
    return comprimento;
}

int comparaStrings(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;
        }
        i++;
    }
    return str1[i] == str2[i];
}

int contaOcorrencias(char *string, char *palavra) {
    int count = 0;
    int i = 0, j, k;
    int comprimento_string = comprimentoString(string);
    int comprimento_palavra = comprimentoString(palavra);

    while (i <= comprimento_string - comprimento_palavra) {
        if ((i == 0 || (string[i - 1] < 'A' || (string[i - 1] > 'Z' && string[i - 1] < 'a') || string[i - 1] > 'z')) &&
            (string[i + comprimento_palavra] < 'A' || (string[i + comprimento_palavra] > 'Z' && string[i + comprimento_palavra] < 'a') || string[i + comprimento_palavra] > 'z')) {
            k = i;
            for (j = 0; j < comprimento_palavra; j++) {
                if (string[k] >= 'A' && string[k] <= 'Z') {
                    if (string[k] + 'a' - 'A' != palavra[j]) {
                        break;
                    }
                } else if (string[k] >= 'a' && string[k] <= 'z') {
                    if (string[k] != palavra[j]) {
                        break;
                    }
                } else {
                    break;
                }
                k++;
            }
            if (j == comprimento_palavra) {
                count++;
            }
        }
        i++;
    }

    return contagem;
}

int main() {
    int N;
    String strings[MAX_STRINGS];
    String alvo;


    scanf("%d", &N);
    getchar(); 

    fgets(alvo.conteudo, TAMANHO_MAX_STRING, stdin);
    for (int i = 0; alvo.conteudo[i] != '\0'; i++) {
        if (alvo.conteudo[i] == '\n') {
            alvo.conteudo[i] = '\0';
            break;
        }
    }
    pMinus(alvo.conteudo);

    int contagem_total = 0;

    for (int i = 0; i < N; i++) {
        fgets(strings[i].conteudo, TAMANHO_MAX_STRING, stdin);
        for (int j = 0; strings[i].conteudo[j] != '\0'; j++) {
            if (strings[i].conteudo[j] == '\n') {
                strings[i].conteudo[j] = '\0';
                break;
            }
        }
        pMinus(strings[i].conteudo);

        contagem_total += contaOcorrencias(strings[i].conteudo, alvo.conteudo);
    }

    printf("%d\n", contagem_total);

    return 0;
}
