#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void maior10(int num[][10], int linha, int coluna);

int main(){
    int num[10][10], transposta[10][10], linha, coluna, resultado;
    linha = sizeof(num)/sizeof(num[0]);
    coluna = sizeof(num[0])/sizeof(num[0][0]);

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &num[i][j]);
        }
    }
    
    maior10(num, linha, coluna);
    printf("A soma dos valores abaixo da diagonal principal e: %d", resultado);
    
    printf("\n");
    return 0;
}

void maior10(int num[][10], int linha, int coluna){
    int transposta[10][10]; 
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            transposta[j][i] = num[i][j];
        }
    }
    printf("Matriz 1: \n");
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matriz transposta: \n");
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }
}

