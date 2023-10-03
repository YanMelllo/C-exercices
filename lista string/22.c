#include <stdio.h>
#include <string.h>

int main(){
    char nome[25];
    int valor, desconto, vista;
    printf("Digite o nome da mercadoria: ");
    fgets(nome, 25, stdin);
    printf("Digite o valor total da mercadoria: ");
    scanf("%d", &valor);
    desconto = valor * 10/100;
    vista = valor - desconto; 
    nome[strlen(nome) - 1] = '\0';
    printf("A mercadoria %s tem valor total %d, o valor de desconto e %d e o valor a vista e %d", nome, valor, desconto, vista); 
    printf("\n");
    return 0;
}

