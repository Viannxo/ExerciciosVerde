int main() {
    int M, A, B, C;
    scanf("%d", &M);
    scanf("%d", &A);
    scanf("%d", &B);
    C = M - (A + B);
    if(C > A && C > B){
        printf("%d", C);
    } else if (A > C && A > B){
        printf("%d", A);
    } else if (B > A && B > C){
        printf("%d", B);
    }

}