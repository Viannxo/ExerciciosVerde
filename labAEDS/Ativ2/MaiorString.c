/* Escreva um programa em C que leia um número NNN de strings,
conforme determinado pelo usuário. O programa deve então imprimir
a maior string em termos de comprimento (tamanho) e a maior string 
em termos lexicográficos (ordem alfabética).

Entrada:
A primeira linha contém um número inteiro N, representando a quantidade de strings a serem lidas.
As N linhas seguintes contêm uma string em cada uma.

Saída: :
A primeira linha deve conter a maior string em termos de comprimento.
A segunda linha deve conter a maior string em termos lexicográficos.

Ex-> Entrada: 3
banana
maçã
uva

Saida:
banana
uva
*/

#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    char stg[n][100];
    for(int i = 0; i < n; i++){
        scanf("%s", &stg[i]);
    }
    int maior = strlen(stg[0]);
    int posicao = 0;
    for(int i = 1; i < n; i++){
        if(strlen(stg[i]) > maior){
            maior = strlen(stg[i]);
            posicao = i;
        }
    }
    printf("%s\n", stg[posicao]);
    return 0;
}