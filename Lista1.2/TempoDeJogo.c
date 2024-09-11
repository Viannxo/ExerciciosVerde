/*
Leia a hora inicial e a hora final de um jogo. A seguir calcule a dura��o do jogo,
sabendo que o mesmo pode come�ar em um dia e terminar em outro, tendo uma dura��o m�nima
de 1 hora e m�xima de 24 horas.

Entrada
A entrada cont�m dois valores inteiros representando a hora de in�cio e a hora de fim do jogo.

Sa�da
Apresente a dura��o do jogo conforme exemplo abaixo.
*/

#include <stdio.h>
int main (){
    int tInicio, tFinal, tempoJogo;
    //printf("digite a hora de inicio do jogo");
    scanf("%d", &tInicio);
    //printf("digite a final de inicio do jogo");
    scanf("%d", &tFinal);
    if (tInicio>tFinal){
        tempoJogo=(24-tInicio)+tFinal;
        printf("O JOGO DUROU %d HORA(S)", tempoJogo);
    } else if(tInicio<tFinal){
        tempoJogo=tFinal-tInicio;
        printf("O JOGO DUROU %d HORA(S)", tempoJogo);
    }else if(tInicio==tFinal){
        printf("O JOGO DUROU 24 HORA(S)");
    }

}
