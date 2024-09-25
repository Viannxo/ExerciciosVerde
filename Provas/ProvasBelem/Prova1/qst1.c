// Analise o código abaixo e explique o seu funcionamento indicando, de maneira
// objetiva, qual o cômputo realizado. Justifique sua resposta através das
// linhas de código apresentadas.

#include <stdio.h>
int main() {
  int x, y, z, ty, tz, cy, cz;
  scanf("%d%*c", &x);
  y = 5;
  ty = x;
  cy = 0; 
  z = 7;
  cz = 0; 
  while (ty - y >= 0) {
    cy++;
    ty -= y;
  }

  for (tz = x; tz > 0; tz -= z) {
    cz++;
  }

  if (ty == tz && ty * ty == 0) {
    printf("Y:%d\tZ:%d\n", cy, cz); 
  }else if (ty * ty == 0) {
    printf("Y:%d\n", cy); 
  }
  
  else {
    printf("Z:%d\n", cz);
  }
  return 0;
}

/*
Minha Resposta: o codigo basicamente recebe numeros pelo usuario, apos as verificações
o programa analisa se tais numeros são divisiveis por 5 ou 7, após isso verifica quantas vezes 
eles podem ser divisiveis.
*/