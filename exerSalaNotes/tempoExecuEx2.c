#include <stdio.h>
int main(){
  int entrada, s=0, m=0, h;
  printf("digite valor em segundos:\n");
  scanf("%d", &entrada);
  h=entrada/(60*60);
  m=(entrada%(60*60)/60);
  s=(entrada%(60*60)%60);
  printf("horas: %d\n", h);
  printf("min: %d\n", m);
  printf("segs: %d\n", s);
  return 0;
}