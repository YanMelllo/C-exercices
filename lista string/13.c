#include <stdio.h>
#include <string.h>

int main(){
    char str[25];
    int conte=0;
    
    printf("Digite a string: ");
    fgets(str, 25, stdin);
    
    for(int i = 0; i < 25; i++){
        if(str[i] == '\n'){
            break;
        }
        if(str[i] == ' '){
            conte++;
        }
    }
    
    printf("Espacos vazios: %d", conte);
    
    printf("\n");
    return 0;
}

