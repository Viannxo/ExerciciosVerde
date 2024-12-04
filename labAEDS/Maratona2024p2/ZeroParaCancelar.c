/*  para cancelar

Seu chefe está ao telefone, nervoso. Ele quer que você compute a soma de
uma sequência de números que ele vai falar para você ao telefone, para
saber o total das vendas em sua mais recente viagem de negócios.

Infelizmente, de vez em quando seu chefe fala números errados para você ao telefone.

Felizmente, seu chefe rapidamente percebe que falou um número errado e diz
"zero", que como combinado previamente quer dizer gnore o último número corrente.

Infelizmente, seu chefe pode cometer erros repetidos, e diz "zero" para cada erro.

Por exemplo, seu chefe pode falar ao telefone "Um, três, cinco, quatro, zero,
zero, sete, zero, zero, seis", o que significa uma soma total igual a 7,conforme
explicado na tabela abaixo:


Fala do chefe	Números correntes (após fala)	Explicação
"um, três, cinco, quatro"	1,3,5,4	registre os quatro números
"zero, zero"	1, 3	ignore os dois últimos números
"sete"	1, 3, 7	registre o sete ao final da lista
"zero, zero"	1	ignore os dois últimos números
"seis"	1, 6	registre o seis ao final da lista
Para não deixar seu chefe ainda mais nervoso, escreva um programa que determine
a soma total dos números falados por seu chefe ao telefone. A soma será da lista
final dos números corrigidos.

Entrada

A primeira linha da entrada contém um inteiro N, a quantidade de números inteiros
(incluindo os "zeros") que o seu chefe falou ao telefone. Cada uma das N linhas seguintes
contém um número inteiro Xi.

Saída

Seu programa deve produzir uma única linha na saída, contendo um único inteiro, a
soma correta dos números, levando em conta que o valor 0 significa erro, conforme descrito.

Restrições

1 ≤ N ≤ 100 000
0 ≤ Xi ≤ 100, para (1 ≤ i ≤ N)
*/



#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int Nums[n];
    int topo = 0;

    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        if (a == 0) {
            if (topo > 0) {
                topo--;
            }
        } else {
            Nums[topo++] = a;
        }
    }
    int sum = 0;
    for (int i = 0; i < topo; i++) {
        sum += Nums[i];
    }

    printf("%d\n", sum);

    return 0;
}







