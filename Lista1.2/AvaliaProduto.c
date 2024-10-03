/*
Uma empresa deseja avaliar a opinião dos seus clientes sobre um determinado produto. Para tanto ela irá realizar uma entrevista com os seus clientes. Durante a entrevista os clientes responderão sua idade, gênero e se gostaram ou não do produto.

Escreva um programa que registre as respostas dos clientes, sendo que para encerrar a digitação o usuário deverá digitar uma idade negativa. Além de registrar os dados dos clientes, seu programa deverá:

a) Imprimir o total de pessoas que gostaram do produto separados por gênero. Ou seja, quantas pessoas do gênero feminino e quantas do gênero masculino gostaram do produto.
b) A pessoa mais velha do gênero masculino que gostou do produto. .
c) A pessoa mais nova do gênero feminino que não gostou do produto. .
d) O percentual de pessoas que não gostaram do produto. .
.
.
Entrada: N linhas contendo três informações cada linha. A idade da pessoa, o gênero (M ou F) e se gostou ou não do produto (0 ou 1)

Sáida: 5 linhas distribuídas da seguinte forma:
A primeira linha exibe o total de pessoas do gênero masculino que gostaram do produto.
A segunda linha o total de pessoas gênero feminino que gostaram do produto.
A terceira linha contem a idade da pessoa mais velha do gênero masculino que gostou do produto.
Quarta linha a pessoa mais nova do gênero feminino que não gostou do produto.
A quinta linha o percentual de pessoas que não gostaram do produto com 2 casas decimais.
*/

#include <stdio.h>

int main() {
    int idade;
    char genero;
    int gostou;

    int totalMasculino = 0, totalFeminino = 0;
    int idadeMaisVelhoMasculino = -1; // -1 indica que ainda não foi encontrado
    int idadeMaisNovoFeminino = 101;  // 101 para considerar a idade máxima
    int totalClientes = 0;
    int totalNaoGostaram = 0;

    while (1) {
        // Lê a idade
        scanf("%d", &idade);
        if (idade < 0) {
            break; // Encerra se a idade for negativa
        }

        // Lê o gênero
        scanf(" %c", &genero);

        // Lê se gostou ou não
        scanf("%d", &gostou);

        totalClientes++; // Contagem total de clientes

        // Verifica se gostou
        if (gostou == 1) {
            if (genero == 'M') {
                totalMasculino++;
                if (idadeMaisVelhoMasculino == -1 || idade > idadeMaisVelhoMasculino) {
                    idadeMaisVelhoMasculino = idade; // Atualiza a idade mais velha masculina
                }
            } else if (genero == 'F') {
                totalFeminino++;
            }
        } else {
            if (genero == 'F') {
                if (idade < idadeMaisNovoFeminino) {
                    idadeMaisNovoFeminino = idade; // Atualiza a idade mais nova feminina
                }
            }
            totalNaoGostaram++; // Contagem de pessoas que não gostaram
        }
    }

    // Cálculo do percentual de pessoas que não gostaram
    float percentualNaoGostaram = (totalClientes > 0) ? ((float)totalNaoGostaram / totalClientes) * 100 : 0;

    // Saídas
    printf("Masculino: %d\n", totalMasculino);
    printf("Feminino: %d\n", totalFeminino);
    printf("%d anos\n", idadeMaisVelhoMasculino == -1 ? 0 : idadeMaisVelhoMasculino);
    printf("%d anos \n", idadeMaisNovoFeminino == 101 ? 0 : idadeMaisNovoFeminino);
    printf("%.2f%%\n", percentualNaoGostaram);

    return 0;
}
