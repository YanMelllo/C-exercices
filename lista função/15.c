#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maior10(int num[][4], int linha, int coluna);

int main(){
    int num[4][4], linha, coluna, resultado;
    linha = sizeof(num)/sizeof(num[0]);
    coluna = sizeof(num[0])/sizeof(num[0][0]);

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &num[i][j]);
        }
    }
    
    resultado = maior10(num, linha, coluna);
    printf("Ha %d numeros maiores que 10 na matriz", resultado);
    
    printf("\n");
    return 0;
}

int maior10(int num[][4], int linha, int coluna){
    int maior=0;
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            if(num[i][j] > 10){
                maior++;
            }
        }
    }
    return maior; 
}

