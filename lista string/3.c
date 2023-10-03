#include <stdio.h>
#include <string.h>

int main(){
    char str[30];
    printf("Digite um nome: ");
    fgets(str, 30, stdin);
    if(str[0] == 'a'){
        printf("%s", str);
    }
    
    printf("\n");
    return 0;
}

