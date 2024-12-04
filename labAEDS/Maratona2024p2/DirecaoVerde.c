#include <stdio.h>
#include <string.h>

int main() {
    char A[10];
    char B[10];
    int dir;

    fgets(A, 10, stdin);
    fgets(B, 10, stdin);

    A[strcspn(A, "\n")] = '\0';
    B[strcspn(B, "\n")] = '\0';

    if (strcmp(A, "leste") == 0 && (strcmp(B, "leste") == 0)){
        dir = 0;
    } else if (strcmp(A, "norte") == 0 && strcmp(B, "norte") == 0) {
        dir = 90;
    } else if (strcmp(A, "sul") == 0 && strcmp(B, "sul") == 0) {
        dir = 270;
    } else if (strcmp(A, "oeste") == 0 && strcmp(B, "oeste") == 0) {
        dir = 180;
    } else if (strcmp(A, "leste") == 0 && strcmp(B, "oeste") == 0) {
        dir = 180;
    } else if (strcmp(A, "leste") == 0 && strcmp(B, "norte") == 0) {
        dir = 90;
    } else if (strcmp(A, "leste") == 0 && strcmp(B, "sul") == 0) {
        dir = 270;
    } else if (strcmp(A, "norte") == 0 && strcmp(B, "sul") == 0) {
        dir = 270;
    } else if (strcmp(A, "norte") == 0 && strcmp(B, "oeste") == 0) {
        dir = 180;
    } else if (strcmp(A, "norte") == 0 && strcmp(B, "leste") == 0) {
        dir = 0;
    } else if (strcmp(A, "oeste") == 0 && strcmp(B, "sul") == 0) {
        dir = 270;
    } else if (strcmp(A, "oeste") == 0 && strcmp(B, "norte") == 0) {
        dir = 90;
    } else if (strcmp(A, "oeste") == 0 && strcmp(B, "leste") == 0) {
        dir = 0;
    } else if (strcmp(A, "sul") == 0 && strcmp(B, "norte") == 0) {
        dir = 90;
    } else if (strcmp(A, "sul") == 0 && strcmp(B, "oeste") == 0) {
        dir = 180;
    } else if (strcmp(A, "sul") == 0 && strcmp(B, "leste") == 0) {
        dir = 0;
    }

    printf("%d\n", dir);
    return 0;
}
