#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatorialDuplo(int num);

int main(){
    int num, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    resultado = fatorialDuplo(num);

    printf("O fatorial duplo de %d e: %d", num, resultado);
    
    printf("\n");
    return 0;
}

int fatorialDuplo(int num){
    int r = 1;
    for(int i = 1; i <= num; i++){
        if(i % 2 != 0){
            r *= i;
        }
    }
    return r;
}

