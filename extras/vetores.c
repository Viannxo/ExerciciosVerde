int main (){
    int n, soma=0;
    printf("digite o tamanho do seu vetor:");
    scanf("%d", &n);
    int vet[n];
    for(int i = 0; i < n; i++){
        printf("digite o conteudo da posição %d", i);
        scanf("%d", &vet[i]);
    for(int i=0;i<n;i++){
        printf("\n conteudo da posição %d e %d ", i, vet[i]);
        }
    }
    for(int i=0;i<n;i++){
        soma=soma+vet[i];
        printf ("a soma dos valores do vetor é %d", soma);
    }
}