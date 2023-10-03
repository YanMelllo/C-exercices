#include <stdio.h>
#include <string.h>

int duplica(int *a, int *b);

int main(){
    int A, B, r;
    printf("Digite dois valores: ");
    scanf("%d %d", &A, &B);

    r = duplica(&A, &B);

    printf("A soma do dobro dos valores e: %d", r);
    printf("\nNovos valores A: %d e B: %d", A, B);

    printf("\n");
    return 0;
}

int duplica(int *a, int *b){
    *a = (*a) * 2;
    *b = (*b) * 2;
    int soma = (*a) + (*b);
    return soma;
}