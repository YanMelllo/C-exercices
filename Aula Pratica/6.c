#include <stdio.h>

void E(int n, double *resultado);

int main(){
    int n;
    double resultado=1.0;

    printf("Digite um valor n para o calculo de E: ");
    scanf("%d", &n);

    E(n, &resultado);

    printf("E = %lf", resultado);
    
    printf("\n");
    return 0;
}

void E(int n, double *resultado){
    double fat=1.0;

    for(int i = 1; i <= n; i++){
        fat = fat * i;
        *resultado = *resultado + (1.0/fat);
    }
}