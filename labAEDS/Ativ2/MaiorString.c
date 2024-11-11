#include <stdio.h>

int strTamanho(char str[]) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int strLexi(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] > str2[i]) return 1;
        else if (str1[i] < str2[i]) return -1;
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') return 0;
    else if (str1[i] == '\0') return -1;
    else return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    char strMaiorTam[100] = "";
    char strMaiorLexi[100] = "";
    int tam = 0;

    for (int i = 0; i < n; i++) {
        char str[100];
        scanf("%s", str);

        if (strTamanho(str) > tam) {
            tam = strTamanho(str);
            for (int k = 0; k < 100; k++) {
                strMaiorTam[k] = str[k];
            }
        }

        if (strLexi(str, strMaiorLexi) > 0) {
            for (int j = 0; j < 100; j++) {
                strMaiorLexi[j] = str[j];
            }
        }
    }

    printf("%s\n", strMaiorTam);
    printf("%s\n", strMaiorLexi);
    return 0;
}
