#include <stdio.h>
#include <string.h>

void esfera(float num, float *area, float *vol);

int main(){
    float R, area, vol;

    printf("Digite o raio da esfera: ");
    scanf("%f", &R);

    esfera(R, &area, &vol);
    printf("Area: %.3f\n", area);
    printf("Volume: %.3f", vol);
 
    printf("\n");
    return 0;
}

void esfera(float R, float *area, float *vol){
    float p = 3.14;
    *area = 4 * p * (R*R);
    *vol = (4/3) * p * (R*R*R);
}