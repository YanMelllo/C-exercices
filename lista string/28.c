#include <stdio.h>
#include <string.h>

int main(){
    char str[30], str2[30];
    int x;
    printf("Digite uma string: ");
    fgets(str, 30, stdin);
    printf("Digite outra string: ");
    fgets(str2, 30, stdin);
    x = strcmp(str, str2);
    if(x == 0){
        printf("Sao iguais");
    }
    else{
        printf("Sao diferentes");
    }
    
    printf("\n");
    return 0;
}

