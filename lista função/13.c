#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int media(int num[], int t);

int main(){
    int num[5], resultado, t;
    t = sizeof(num)/sizeof(num[0]);

    for(int i = 0; i < t; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &num[i]);
    }
    
    resultado = media(num, t);

    printf("A media dos numeros no vetor e: %d", resultado);
    
    printf("\n");
    return 0;
}

int media(int num[], int t){
    int r = 0, cont=0;
    for(int i = 0; i < t; i++){
        r += num[i];
        cont++;
    }
    r = r/cont; 
    return r;
}

