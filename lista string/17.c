#include <stdio.h>
#include <string.h>

int main(){
    char str1[25], str2[25];
    int cont=0;
    
    printf("Digite a string: ");
    fgets(str1, 25, stdin);
    
    for(int i = 0; i < 25; i++){
        if(str1[i] == '\n'){
            break;
        }
        if(str1[i] != ' '){
            str2[cont] = str1[i];
            cont++;
        }
    }
    
    printf("%s", str2);
    
    printf("\n");
    return 0;
}

