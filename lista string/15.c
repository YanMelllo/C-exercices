#include <stdio.h>
#include <string.h>

int main(){
    char str[25];
    int x;
    
    printf("Digite a string: ");
    fgets(str, 25, stdin);
    
    for(int i = 0; i < 25; i++){
        if(str[i] == '\n'){
            break;
        }
        x = str[i];
        if(x >= 65 && x <= 90){
            str[i] = x + 32;
        }
    }
    
    printf("%s", str);
    
    printf("\n");
    return 0;
}

