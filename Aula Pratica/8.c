#include <stdio.h>
#include <math.h>

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
    double quad;
    for(double i = 1; i <= n; i++){
        quad = pow(i, 2);
        *resultado += ((quad + 1)/(i + 3));
    }
}