#include <stdio.h>
int main() {
    int g, i, vitorias = 0;
    char jogo[6];

    for(int i=0; i<6; i++){
        scanf(" %c ", &jogo[i]);
        if(jogo[i] == 'V'){
            vitorias++;
        }
    }
    if(vitorias >= 5){
        g = 1;
    }else if(vitorias >= 3 ){
        g = 2;
    }else if(vitorias >= 1 ){
        g = 3;
    }else{
        g = -1;
    }
    printf("%d", g);
}