#include <stdio.h>
#include <string.h>

int main(){
    char str[30];
    printf("Digite um nome: ");
    fgets(str, 30, stdin);
    for(int i = 0; i < 4; i++){
        printf("%c", str[i]);
    }
    
    printf("\n");
    return 0;
}

