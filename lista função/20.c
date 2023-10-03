#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void tamanho(char *str[], int *strsize);

int main(){
    char str[15]; 
    int resultado, strsize;
    setbuf(stdin, NULL);
    printf("Digite uma string: ");
    fgets(str, 15, stdin);
    setbuf(stdin, NULL);
    str[strlen(str) - 1] = '\0';
    strsize = strlen(str);
    tamanho(&str, &strsize);

    printf("\n");
    return 0;
}

void tamanho(char *str[], int *strsize){
    printf("O tamanho da string %s e: %d", str, *strsize); 
}

