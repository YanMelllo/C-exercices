#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calculaS(float n);

int main(){
    float n;

    printf("Digite um valor n: ");
    scanf("%f", &n);
    calculaS(n);
    
    printf("\n");
    return 0;
}

void calculaS(float n){
    float s = 0.0;
    for(int i = 1; i <= n; i++){
        s += (i*i + 1.0)/(i + 3.0);
    }
    printf("S = %.2f", s);
}

