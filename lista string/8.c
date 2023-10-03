#include <stdio.h>
#include <string.h>

int main(){
    char str[25];
    int cont1=0;

    printf("Digite a string: ");
    fgets(str, 25, stdin);
    
    for(int i = 0; i < 25; i++){
        if(str[i] == '\n'){
            break;
        }
        if(str[i] == '1'){
            cont1++;
        }
    }
    printf("O numero 1 aparece %d vezes", cont1);
    
    printf("\n");
    return 0;
}

