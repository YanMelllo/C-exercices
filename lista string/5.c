#include <stdio.h>
#include <string.h>

int main(){
    char str[30];
    int cont=0; 
    printf("Digite um nome: ");
    fgets(str, 30, stdin);
    for(int i = 0; i < sizeof(str)/sizeof(str[0]); i++){
        if(str[i] == '\n'){
            break;
        }
        if(str[i] == ' '){
            continue;
        }
        else{
            cont++;
        }
    }
    printf("Seu nome tem %d letras", cont);
    printf("\n");
    return 0;
}

