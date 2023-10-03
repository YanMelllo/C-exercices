#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void simplifica(int num, int den);

int main(){
    int num, den;

    printf("Digite o numerador e o denominador: ");
    scanf("%d %d", &num, &den);
    simplifica(num, den);
    
    printf("\n");
    return 0;
}

void simplifica(int num, int den){
    int menor, div=0;
    if(num < den){
        menor = num;
    }
    else{
        menor = den;
    }
    for(int i = 1; i <= menor; i++){
        if(num % i == 0 && den % i == 0){
            div = i;
        }
    }
    num = num / div;
    den = den / div;
    printf("A fracao simplificada e: %d/%d", num, den);
}

