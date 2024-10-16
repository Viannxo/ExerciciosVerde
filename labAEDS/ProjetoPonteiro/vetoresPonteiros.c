#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//-------------------------------------------
void lerVet1(int vet[], int tam1){//classica
    srand(time(NULL));
    for( int i=0; i< tam1; i++){
        vet[i]= rand()%100;

    }

}
void impriVet1(int *vet, int tam1){//classica
    for (int i =0; i< tam1; i++){
    printf ("%d\t",vet[i] );
    }
}
//-------------------------------------------------
void lerVet2(int vet2[], int tam2){//versão 2
     srand(time(NULL));
    for(int i=0; i<tam2; i++){
        *(vet2 +i)=rand()%100; // soma do vetor para caminhar dentro do vetor
    }
}
void impriVet2(int *vet2, int tam2){//versão 2
     for(int i=0; i<tam2; i++){
        printf ("%d\t",*(vet2 +i));
     }
}
//---------------------------------------------
void lerVet3(int vet3[], int tam3){//versão 3
    srand(time(NULL));
    int *aux =vet3;
    for(int i=0; i<tam3;i++){
        vet3[i]= rand()%100;
        aux++;
    }
}
void impriVet3(int *vet3, int tam3){// versão 3
    int *aux=vet3;
    for(int i=0; i<tam3; i++){
        printf ("%d\t",*(aux++));
    }
}

//-------------------------------------------------
int *Intercalado(int vet[], int vet2[],int tam1,int tam2){
    int i;
    int vetInter;
    int tamanho= tam1>tam2 ? tam1: tam2;
    int j=0, vetMaior;
    int *vetIntercalado=malloc((tam1+tam2)*sizeof(int));


    for( i=0; i <tamanho; i++){
        vetIntercalado[j]= vet[i];
        j++;
        vetIntercalado[j]=vet2[i];
        j++;
    }

    int a= tam1, b = tam2, InMenor;

    while(j<tamanho){
        if(a<b){
            vetMaior= vet2[tam2];
        }else if(b<a){
            vetMaior= vet[tam1];
        }else if(a=b){
            vetMaior= vet[tam1];
        }
        vetIntercalado[j]= vetMaior;
        i++;
        j++;
    }

    return vetInter;
}

int main(){
    int tam1, tam2, tam3;
    printf ("digite tamanho do vetor1:\n");
    scanf("%d", &tam1);
    printf ("digite tamanho do vetor2:\n");
    scanf("%d", &tam2);
    printf ("digite tamanho do vetor3:\n");
    scanf("%d", &tam3);

    int vet[tam1];
    int vet2[tam2];
    int vet3[tam3];

    lerVet1(vet, tam1);
    printf("Vetor 1: \n");
    impriVet1(vet, tam1);

    printf("\n");

    lerVet2(vet, tam2);
    printf("Vetor 2: \n");
    impriVet2(vet, tam2);

    printf("\n");

    lerVet1(vet3, tam3);
    printf("Vetor 3: \n");
    impriVet3(vet, tam3);

    printf("\n");

    int *Interc=Intercalado(vet,vet2,tam1,tam2);
    printf("%d", Interc);

    return 0;
}
