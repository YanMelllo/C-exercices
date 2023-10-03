#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void normal(int num[], int t);
void inversa(int num[], int t);
void maiormenor(int num[], int t);

int main(){
    int num[5], t;
    t = sizeof(num)/sizeof(num[0]);

    for(int i = 0; i < t; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &num[i]);
    }
    
    normal(num, t);
    inversa(num, t);
    maiormenor(num, t);
    
    printf("\n");
    return 0;
}

void normal(int num[], int t){
    printf("O vetor digitado foi: ");
    for(int i = 0; i < t; i++){
        printf("%d ", num[i]);
    }
    printf("\n");
}
void inversa(int num[], int t){
    printf("O vetor digitado inverso e: ");
    for(int i = t-1; i >= 0; i--){
        printf("%d ", num[i]);
    }
    printf("\n");
}
void maiormenor(int num[], int t){
    int maior, menor;
    for(int i = 0; i < t; i++){
        if(i == 0){
            maior = num[i];
            menor = num[i];
        }
        else if(num[i] > maior){
            maior = num[i];
        }
        else if(num[i]< menor){
            menor = num[i];
        }
    }
    printf("Maior numero digitado: %d\n", maior);
    printf("Menor numero digitado: %d", menor);
    printf("\n");
}
