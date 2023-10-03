#include <stdio.h>
#include <string.h>

void frac(float num, int *inteiro, float *fracionado);

int main(){
    float num, fracionado;
    int inteiro;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    frac(num, &inteiro, &fracionado);
    printf("Inteiro: %d", inteiro);
    printf("\nFracionado: %f", fracionado);
 
    printf("\n");
    return 0;
}

void frac(float num, int *inteiro, float *fracionado){
    *inteiro = (int)num;
    *fracionado = num - *inteiro;
    
}