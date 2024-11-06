#include <stdio.h>
#include <math.h>
int main(){
  double a, b, c, x, x1, x2, delta;
  printf("digite o valor de a da equação \n");
  scanf("%lf", &a);
  if(a==0){
    printf("erro");
    return 0;
    }else{
      printf("digite o valor de b da equação \n");
      scanf("%lf", &b);
      printf("digite o valor de c da equação \n");
      scanf("%lf", &c);
      delta= pow(b,2)-4*a*c;
      if (delta<0){
        printf("erro");
        }else if(delta=0){
        printf("-(%lf +/-raiz(delta))/2*%lf", b,a);
        x=((b*(-1))/2*a);
        printf("x e igual a %lf", x);
    }else if(delta >0){
      printf("-(%lf +/-raiz(delta))/2*%lf", b,a);
      x1=(-(b*(-1))+sqrt(delta))/2*a;
      x2=(-(b*(-1))-sqrt(delta))/2*a;
      printf("os valores de x1 e x2 sao respectivamente %lf e %lf", x1, x2);
    }
  }
  return 0;
}
