#include <stdio.h>
#include <string.h>

int main(){
    char str1[25], str2[25];
    int comp=0;

    printf("Digite a primeira string: ");
    fgets(str1, 25, stdin);
    printf("Digite a segunda string: ");
    fgets(str2, 25, stdin);

    for(int i = 0; i < 25; i++){
        if(str1[i] == '\n' || str2[i] == '\n'){
            break;
        }
        if(str1[i] != str2[i]){
            comp++;
        }
    }
    if(comp > 0){
        printf("As strings sao diferentes");
    }
    else{
        printf("As strings sao iguais");
    }
    printf("\n");
    return 0;
}

