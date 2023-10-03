#include <stdio.h>
#include <string.h>

int main(){
    char str[25];
    

    printf("Digite a string: ");
    fgets(str, 25, stdin);
    
    printf("%s", str);
    for(int i = 0; i < 25; i++){
        if(str[i] == '\n'){
            break;
        }
        if(str[i] == 'a' || str[i] == 'i' || str[i] == 'u' || str[i] == 'e' || str[i] == 'o'){
            str[i] = ' ';
        }
    }
    
    printf("%s", str);
    
    printf("\n");
    return 0;
}

