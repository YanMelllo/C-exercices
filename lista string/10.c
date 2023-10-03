#include <stdio.h>
#include <string.h>

int main(){
    char str[25];
    int tamanho;
    

    printf("Digite a string: ");
    fgets(str, 25, stdin);
    tamanho = strlen(str);
    
    for(int i = tamanho; i >=0; i--){
        printf("%c", str[i]);
    }
    
    printf("\n");
    return 0;
}

