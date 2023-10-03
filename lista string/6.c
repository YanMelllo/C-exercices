#include <stdio.h>
#include <string.h>

int main(){
    char nome[30], sexo[15];
    int idade;

    printf("Digite seu nome: ");
    fgets(nome, 30, stdin);
    printf("Digite seu sexo: ");
    fgets(sexo, 15, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    nome[strlen(nome) - 1] = '\0';
    if(idade < 25 && sexo[0] == 'f'){
        printf("%s, ACEITA", nome);
    }
    else{
        printf("NAO ACEITA");
    }
    printf("\n");
    return 0;
}

