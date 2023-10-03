#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pares(int num[], int t);

int main(){
    int num[5], resultado, t;
    t = sizeof(num)/sizeof(num[0]);

    for(int i = 0; i < t; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &num[i]);
    }
    
    resultado = pares(num, t);

    printf("O numero de pares e: %d", resultado);
    
    printf("\n");
    return 0;
}

int pares(int num[], int t){
    int r = 0;
    for(int i = 0; i < t; i++){
        if(num[i] % 2 == 0){
            r++;
        }
    }
    return r;
}

