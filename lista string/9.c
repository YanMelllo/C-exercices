#include <stdio.h>
#include <string.h>

int main(){
    char str[25];
    

    printf("Digite a string: ");
    fgets(str, 25, stdin);
    
    for(int i = 0; i < 25; i++){
        if(str[i] == '\n'){
            break;
        }
        if(str[i] == '0'){
            str[i] = '1';
        }
    }
    printf("%s", str);
    
    printf("\n");
    return 0;
}

