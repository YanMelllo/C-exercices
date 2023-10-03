#include <stdio.h>
#include <string.h>

int main(){
    char str[30], str2[30];
    int cont=0, x=0, r=0;
    printf("Digite uma string: ");
    fgets(str, 30, stdin);
    printf("Digite outra string: ");
    fgets(str2, 30, stdin);
    for(int i = x; i < strlen(str2); i++){
        if(str[cont] == str2[i]){
            cont++;
        }
        else{
            cont=0;
        }
        if(cont == strlen(str)-1){
            r++;
            cont=0;
        }
    }
    printf("A primeira string aparece %d vezes na segunda string", r);
    printf("\n");
    return 0;
}

