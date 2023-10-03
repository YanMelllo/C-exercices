#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    int x;
    
    printf("Digite a string: ");
    fgets(str, 50, stdin);
    
    for(int i = 0; i < 50; i++){
        if(str[i] == '\n'){
            break;
        }
        x = str[i];
        str[i] = x + 1;
    }
    
    printf("%s", str);
    
    printf("\n");
    return 0;
}

