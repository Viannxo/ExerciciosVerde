/*Escreva um programa para representar um carro com as seguintes informacoes: Marca, modelo, cor e ano. Faca um programa que cadastra dois carros. Apos o cadastro, impeima as informacoes de cada carro*/
#include <stdio.h>

typedef struct Carro{
  char Marca [20];
  char Modelo [40];
  char cor [10];
  int ano;
} Carro;
Carro cadastroCarro();
void impcarro(Carro);
Carro cadastroCarro(){
  Carro c;
  printf("Digite o ano do carro:\n");
  scanf("%d",&c.ano);
  getchar();
  printf("Digite o Marca do carro:\n");
  fgets(c.Marca,40,stdin);
  printf("Digite a Modelo do carro :\n");
  gets(c.Modelo);
  printf("Digite a cor do carro :\n");
  scanf("%s[^\n]", c.cor);
  return c;
}
void impcarro(Carro c){
  printf("Marca do carro : %s\n", c.Marca);
  printf("Modelo do carro : %s\n", c.Modelo);
  printf("Cor do carro : %s\n", c.cor);
  printf("Ano do carro : %d\n", c.ano);
}



int main(void) {
  Carro c[n];
  for(int i=0;i<n;i++){
    c[i]=cadastroCarro();
  }
  for(int i=0;i<n;i++){
    impcarro(c[i]);
  }
  return 0;
}