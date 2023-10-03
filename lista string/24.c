#include <stdio.h>
#include <string.h>

int main(){
    char str[30], c;
    int p, index;
    printf("Digite uma string: ");
    fgets(str, 30, stdin);
    printf("Digite um caractere: ");
    scanf("%c", &c);
    printf("Digite uma posicao: ");
    scanf("%d", &p);
    for(int i = p; i < 30; i++){
        if(str[i] == c){
            index = i;
            break;
        }
    }
    printf("A posicao do caractere digitado e: %d", index); 
    printf("\n");
    return 0;
}

