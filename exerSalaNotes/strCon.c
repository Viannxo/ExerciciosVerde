#include <stdio.h>
#include <stdlib.h>

int strTamanho(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

char *Concatenar(char *str1, char *str2) {
    int tam1 = strTamanho(str1);
    int tam2 = strTamanho(str2);
    int tam3 = tam1 + tam2 + 1; 
    char *str3 = (char *)malloc((tam3 + 1) * sizeof(char));
    if (str3 == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    for (int i = 0; i < tam1; i++) {
        str3[i] = str1[i];
    }
    str3[tam1] = ' ';
    for (int i = 0; i < tam2; i++) {
        str3[tam1 + 1 + i] = str2[i];
    }
    str3[tam3] = '\0';
    return str3;
}

int main() {
    char str1[100], str2[100];
    printf("Digite a primeira string: \n");
    fgets(str1, 100, stdin);
    printf("Digite a segunda string: \n");
    fgets(str2, 100, stdin);
    str1[strTamanho(str1) - 1] = '\0';
    str2[strTamanho(str2) - 1] = '\0';
    char *str3 = Concatenar(str1, str2);
    printf("String concatenada: %s\n", str3);
    free(str3);
    return 0;
}
