#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maior10(int num[][3], int linha, int coluna);

int main(){
    int num[3][3], linha, coluna, resultado;
    linha = sizeof(num)/sizeof(num[0]);
    coluna = sizeof(num[0])/sizeof(num[0][0]);

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &num[i][j]);
        }
    }
    
    resultado = maior10(num, linha, coluna);
    printf("A soma dos valores abaixo da diagonal principal e: %d", resultado);
    
    printf("\n");
    return 0;
}

int maior10(int num[][3], int linha, int coluna){
    int soma=0;
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            if(j < i){
                soma += num[i][j];
            }
        }
    }
    return soma; 
}

