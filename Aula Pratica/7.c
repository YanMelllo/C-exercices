#include <stdio.h>

void S(int n, double *resultado);

int main(){
    int n;
    double resultado=0.0;

    printf("Digite um valor n para o calculo de S: ");
    scanf("%d", &n);

    S(n, &resultado);

    printf("S = %lf", resultado);
    
    printf("\n");
    return 0;
}

void S(int n, double *resultado){
    for(int i = 1; i <= n; i++){
        *resultado = *resultado + (1.0/i);
    }
}