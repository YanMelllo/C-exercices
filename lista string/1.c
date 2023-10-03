#include <stdio.h>
#include <string.h>

int main(){
    char str[30];
    printf("Digite um texto: ");
    fgets(str, 30, stdin);
    printf("O texto digitado foi:\n");
    printf("%s", str);
    return 0;
}

