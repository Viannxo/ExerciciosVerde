/*
a. Codifique uma estrutura (struct) para representar o paciente.
b. Crie uma função para cadastrar o paciente com o protótipo a seguir.
    o paciente é criado sem doenças.
    Paciente cadastrar(char nome[], int codigo, char genero);
c. Crie uma função que receba um paciente e o codigo de uma doença. 
    A função deve ser capaz de registrar a doença para o paciente.
d.Crie uma função que receba um conjunto de pacientes representados 
    por um arranjo , o total de pacientes de paciente e codigo de uma doença. 
    A função deve retornar a quantidade de pacientes que ja tiveram a doença informada.
e. Crie um programa para testar suas funções. Para isso, cadastre dois pacientes , vinculando
    2 doenças ao primeiro e 5 doenças ao segundo. Imprima a quantidade de pacientes
    que ja tiveram covid.

*/

#include <stdio.h>
#include <string.h>

typedef struct Paciente{
  int codigo;
  char nome[50];
  char genero;
  int doencas[100];
  int totalDoencas;
}Paciente;

Paciente cadastroPaciente(char *nome, int codigo, char genero){
  Paciente p;
  p.codigo=codigo;
  strcpy(p.nome, "Vianna");
  p.genero= genero;
  p.totalDoencas = 0;
  return p;
}

void registrarDoencas(Paciente *p, int codDoencas){
  p ->doencas[p->totalDoencas]= codDoencas;
  p ->totalDoencas++;
}

int totalDoencas(Paciente p[], int n, int codDoenca){
  int totalDoencas = 0;
  for(int i=0; i<n;i++){
    for(int j=0;j<p[i].totalDoencas;j++){
      if(p[i].doencas[j]==codDoenca){
        totalDoencas++;
      }
    }
  }
  return totalDoencas;
}

int main(){
  Paciente p[5];
  
  p[0] = cadastroPaciente("Vianna", 1, 'M');
  registrarDoencas(&p[0], 101);  // Exemplo de código de doença
  registrarDoencas(&p[0], 102);  // Exemplo de código de doença
  
  // Cadastrando o segundo paciente e registrando 5 doenças
  p[1] = cadastroPaciente("João", 2, 'M');
  registrarDoencas(&p[1], 101);  // Exemplo de código de doença
  registrarDoencas(&p[1], 103);  // Exemplo de código de doença
  registrarDoencas(&p[1], 104);  // Exemplo de código de doença
  registrarDoencas(&p[1], 105);  // Exemplo de código de doença
  registrarDoencas(&p[1], 106);  // Exemplo de código de doença
  
  // Supondo que 101 é o código para COVID
  int pacientesComCovid = totalDoencas(p, 2, 101);  // Passando 2 pois temos 2 pacientes registrados
  
  printf("Quantidade de pacientes que já tiveram COVID: %d\n", pacientesComCovid);
  
  return 0;
}