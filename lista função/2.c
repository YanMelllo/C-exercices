#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void verficaNum(int num);

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    verficaNum(num);
    
    printf("\n");
    return 0;
}

void verficaNum(int num){
    int x; 
    x = sqrt(num);
    if(x * x == num){
        printf("Quadrado perfeito");
    }
    else{
        printf("Nao e quadrado perfeito");
    }
}

