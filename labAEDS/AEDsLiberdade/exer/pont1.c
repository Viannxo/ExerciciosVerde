#include <stdio.h>
#include <stdlib.h>

int main (){
char *p;
int n;
printf("digite o tamanho da sua string: \n");
scanf("%d", &n);
printf("\n");
p=malloc(n*sizeof(char));
scanf(" %[^\n]",p);
printf("%s", p);

free(p);
return 0;
}