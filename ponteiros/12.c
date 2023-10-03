#include <stdio.h>
#include <string.h>

void calcula(int A);

int main(){
    int A;

    printf("Digite um valor para A: ");
    scanf("%d", &A);

    calcula(A);
 
    printf("\n");
    return 0;
}

void calcula(int A){
    int *B, **C, ***D;
    B = &A;
    C = &B;
    D = &C;

    printf("A: %d\n", A);
    printf("B: %d\n", *B * 2);
    printf("C: %d\n", **C * 3);
    printf("D: %d\n", ***D * 4);
}