/*Escreva um programa em C para gerenciar dados sobre carros. O programa deve 
permitir ao usuário cadastrar informações de n carros e, posteriormente, filtrar
e exibir os dados dos carros cujo preço seja inferior a um valor máximo especificado.

Entrada

Número de Carros (n): Um número inteiro positivo que indica quantos carros serão cadastrados.
Dados dos Carros: Para cada carro, o usuário deve informar:
o Marca: Uma string representando a marca do carro.
o Ano: Um número inteiro representando o ano de fabricação do carro.
o Preço: Um número real representando o preço do carro.
Preço Máximo: Um número real fornecido pelo usuário que representa o limite máximo de preço para a filtragem dos carros.

Saídas

O programa deve exibir as informações de todos os carros com preço inferior ao valor 
do preço máximo fornecido pelo usuário. Para cada carro filtrado, exiba:
• Marca Ano Preço

Exemplo:

3
Toyota
2020
25000
Ford
2018
32000
Honda
2021
28000
30000

Carros com preço menor que 30000.00:
Marca: Toyota, Ano: 2020, Preço: 25000.00
Marca: Honda, Ano: 2021, Preço: 28000.00
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct carro {
    char marca[20];
    int ano;
    float preco;
} Carro;

void CadastroCarros(int n, Carro car[]) {
    for (int i = 0; i < n; i++) {
        printf("Digite a marca do carro:\n");
        scanf("%s", car[i].marca);
        printf("Digite o ano do carro:\n");
        scanf("%d", &car[i].ano);
        printf("Digite o preco do carro:\n");
        scanf("%f", &car[i].preco);
    }
}

int main() {
    int n;
    printf("Digite o numero de carros:\n");
    scanf("%d", &n);
    Carro carros[n];
    
    CadastroCarros(n, carros);

    float precoMax;
    printf("Digite o preco maximo:\n");
    scanf("%f", &precoMax);

    printf("Carros com preco menor que %.2f:\n", precoMax);
    for (int i = 0; i < n; i++) {
        if (carros[i].preco < precoMax) {
            printf("Marca: %s, Ano: %d, Preco: %.2f\n", carros[i].marca, carros[i].ano, carros[i].preco);
        }
    }

    return 0;
}
