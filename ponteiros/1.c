#include <stdio.h>
#include <string.h>

void troca(int *x, int *y);

int main(){
    int x, y;
    printf("Digite dois valores: ");
    scanf("%d %d", &x, &y);

    troca(&x, &y);

    printf("O menor valor e %d e o maior e %d", x, y);

    printf("\n");
    return 0;
}

void troca(int *x, int *y){
    int temp;
    if(*x > *y){
        temp = *x;
        *x = *y;
        *y = temp;
    }
}