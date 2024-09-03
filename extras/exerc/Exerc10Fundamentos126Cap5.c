#include <stdio.h>

int main(){
    int countTime, contJog;
    int idade, peso, altura, qtd , tot80;
    int mediaAltu, mediaId, porcP;

    qtd =0;
    tot80 =0;
    for(int i=0; i<5; i++){
        countTime++;
        mediaId=0;
        for(int i=0;i<11;i++){
            printf("digite sua idade, peso e altura: \n");
            scanf("%d %d %d", &idade, &peso, &altura);
                if (idade<18){
                    qtd++;
                    mediaId=mediaId+idade;
                    mediaAltu=mediaAltu+altura;
                    if (peso>80){
                        tot80++;
                    }
            }
        }
    }
    mediaId=mediaId/11;
    mediaAltu=mediaAltu/55;
    porcP= tot80 *100/55;
    printf("a porcentagem de jogadores acima de 80kg e %d", porcP);

    return 0;
}
