#include <stdio.h>
int main(){
  int s=0, m=0, h;
  printf("digite valor em segundos:\n");
  scanf("%d", &s);
  h=s/60/60;
  m=(s/60)-(h*60);
  s=s-(h*60*60)-(m*60);
  printf("horas: %d\n", h);
  printf("min: %d\n", m);
  printf("segs: %d\n", s);
  return 0;
}