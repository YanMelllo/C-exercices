#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int somaColuna(int num[][6], int linha, int coluna, int N);

int main(){
    int num[7][6], linha, coluna, resultado, N;
    linha = sizeof(num)/sizeof(num[0]);
    coluna = sizeof(num[0])/sizeof(num[0][0]);

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &num[i][j]);
        }
    }
    printf("Digite uma coluna N: ");
    scanf("%d", &N);
    
    resultado = somaColuna(num, linha, coluna, N);
    printf("A soma dos valores na coluna N e: %d", resultado);
    
    printf("\n");
    return 0;
}

int somaColuna(int num[][6], int linha, int coluna, int N){
    int soma = 0; 
    for(int i = N; i == N; i++){
        for(int j = 0; j < linha; j++){
            soma += num[j][N];
        }
    }
    return soma;
}

