#include <stdio.h>
#include <stdlib.h>
int main(){
  char *p;
  p=malloc(3*255*sizeof(char));
  printf ("\n");
  for(int i=0;i<3;i++){
    printf("\n");
    scanf("%s", p+(i * 255));
  }
  for(int i=0;i<3;i++){
    printf("%s ", p+(i*255));
  }
}