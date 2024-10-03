/*
Uma empresa deseja avaliar a opini�o dos seus clientes sobre um determinado produto. Para tanto ela ir� realizar uma entrevista com os seus clientes. Durante a entrevista os clientes responder�o sua idade, g�nero e se gostaram ou n�o do produto.

Escreva um programa que registre as respostas dos clientes, sendo que para encerrar a digita��o o usu�rio dever� digitar uma idade negativa. Al�m de registrar os dados dos clientes, seu programa dever�:

a) Imprimir o total de pessoas que gostaram do produto separados por g�nero. Ou seja, quantas pessoas do g�nero feminino e quantas do g�nero masculino gostaram do produto.
b) A pessoa mais velha do g�nero masculino que gostou do produto. .
c) A pessoa mais nova do g�nero feminino que n�o gostou do produto. .
d) O percentual de pessoas que n�o gostaram do produto. .
.
.
Entrada: N linhas contendo tr�s informa��es cada linha. A idade da pessoa, o g�nero (M ou F) e se gostou ou n�o do produto (0 ou 1)

S�ida: 5 linhas distribu�das da seguinte forma:
A primeira linha exibe o total de pessoas do g�nero masculino que gostaram do produto.
A segunda linha o total de pessoas g�nero feminino que gostaram do produto.
A terceira linha contem a idade da pessoa mais velha do g�nero masculino que gostou do produto.
Quarta linha a pessoa mais nova do g�nero feminino que n�o gostou do produto.
A quinta linha o percentual de pessoas que n�o gostaram do produto com 2 casas decimais.
*/

#include <stdio.h>

int main() {
    int idade;
    char genero;
    int gostou;

    int totalMasculino = 0, totalFeminino = 0;
    int idadeMaisVelhoMasculino = -1; // -1 indica que ainda n�o foi encontrado
    int idadeMaisNovoFeminino = 101;  // 101 para considerar a idade m�xima
    int totalClientes = 0;
    int totalNaoGostaram = 0;

    while (1) {
        // L� a idade
        scanf("%d", &idade);
        if (idade < 0) {
            break; // Encerra se a idade for negativa
        }

        // L� o g�nero
        scanf(" %c", &genero);

        // L� se gostou ou n�o
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
            totalNaoGostaram++; // Contagem de pessoas que n�o gostaram
        }
    }

    // C�lculo do percentual de pessoas que n�o gostaram
    float percentualNaoGostaram = (totalClientes > 0) ? ((float)totalNaoGostaram / totalClientes) * 100 : 0;

    // Sa�das
    printf("Masculino: %d\n", totalMasculino);
    printf("Feminino: %d\n", totalFeminino);
    printf("%d anos\n", idadeMaisVelhoMasculino == -1 ? 0 : idadeMaisVelhoMasculino);
    printf("%d anos \n", idadeMaisNovoFeminino == 101 ? 0 : idadeMaisNovoFeminino);
    printf("%.2f%%\n", percentualNaoGostaram);

    return 0;
}
