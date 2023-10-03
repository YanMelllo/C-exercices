#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sinal(int num);

int main(){
    int num, s;

    printf("Digite um numero: ");
    scanf("%d", &num);

    s = sinal(num);
    if(num > 0){
        printf("Numero positivo");
    }
    else if(num < 0){
        printf("Numero negativo");
    }
    else{
        printf("Numero = 0");
    }

    printf("\n");
    return 0;
}

int sinal(int num){
    if(num > 0){
        return 1;
    }
    else if(num < 0){
        return -1;
    }
    else{
        return 0;
    }
}

