#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void converteTemp(float tempe);

int main(){
    float tempe;

    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &tempe);
    converteTemp(tempe);
    
    printf("\n");
    return 0;
}

void converteTemp(float tempe){
    float F;
    F = (tempe * 9.0/5.0) + 32.0;
    printf("A temperatura em Fahrenheit e: %.2f", F);
}

