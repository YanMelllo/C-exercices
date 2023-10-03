#include <stdio.h>
#include <string.h>

void duplica(int *a, int b);

int main(){
    int A, B;
    printf("Digite dois valores: ");
    scanf("%d %d", &A, &B);

    duplica(&A, B);

    printf("Valores A: %d e B: %d", A, B);

    printf("\n");
    return 0;
}

void duplica(int *a, int b){
    *a = (*a) + b;
}