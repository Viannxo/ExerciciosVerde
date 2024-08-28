/* Neste problema, deve-se ler o c�digo de uma pe�a 1, o n�mero de pe�as 1,
o valor unit�rio de cada pe�a 1, o c�digo de uma pe�a 2, o n�mero de pe�as
 2 e o valor unit�rio de cada pe�a 2. Ap�s, calcule e mostre o valor a ser
 pago. Entrada:O arquivo de entrada cont�m duas linhas de dados. Em cada
 linha haver� 3 valores, respectivamente dois inteiros e um valor com 2 casas
  decimais.Sa�da:A sa�da dever� ser uma mensagem conforme o exemplo fornecido
  abaixo, lembrando de deixar um espa�o ap�s os dois pontos e um espa�o ap�s o
  "R$". O valor dever� ser apresentado com 2 casas ap�s o ponto.*/


#include <stdio.h>

int main() {
    int codPe�a1, codPe�a2, qtd1, qtd2;
    float valor1, valor2, total;

    // Leitura dos dados da pe�a 1
    scanf("%d %d %f", &codPe�a1, &qtd1, &valor1);

    // Leitura dos dados da pe�a 2
    scanf("%d %d %f", &codPe�a2, &qtd2, &valor2);

    // Calcula o valor total a pagar
    total = (qtd1 * valor1) + (qtd2 * valor2);

    // Exibe o resultado formatado
    printf("VALOR A PAGAR: R$ %.2f\n", total);
}
