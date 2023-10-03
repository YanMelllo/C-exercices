#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int comparaString(char str1[], char str2[], int tamanho);

int main(){
    char str1[15], str2[15];
    int resultado, tamanho; 

    printf("Digite uma string: ");
    fgets(str1, 15, stdin);
    setbuf(stdin, NULL);
    printf("Digite outra string: ");
    fgets(str2, 15, stdin);
    setbuf(stdin, NULL);
    if(strlen(str1) > strlen(str2)){
        tamanho = strlen(str1);
    }
    else if(strlen(str1) < strlen(str2)){
        tamanho = strlen(str2);
    }

    resultado = comparaString(str1, str2, tamanho);
    if(resultado == 0){
        printf("Strings iguais.");
    }
    else{
        printf("Strings diferentes.");
    }

    printf("\n");
    return 0;
}


int comparaString(char str1[], char str2[], int tamanho){
    int x = 0;
    for(int i = 0; i < tamanho; i++){
        if(str1[i] == '\n' || str2[i] == '\n'){
            x++;
            break;
        }
        if(str1[i] == str2[i]){
            continue;
        }
        else{
            x++;
            break;
        }
    }
    return x;
}
