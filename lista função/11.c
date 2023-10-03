#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int superFatorial(int num);

int main(){
    int num, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    resultado = superFatorial(num);

    printf("O superfatorial de %d e: %d", num, resultado);
    
    printf("\n");
    return 0;
}

int superFatorial(int num){
    int r = 1;
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            r *= j;
        }
    }
    return r;
}

