#include <stdio.h>
#include <string.h>

int main(){
    char str[25], c;
    int contv=0;
    
    printf("Digite a string: ");
    fgets(str, 25, stdin);
    printf("Digite um caractere: ");
    scanf("%c", &c);
    
    for(int i = 0; i < 25; i++){
        if(str[i] == '\n'){
            break;
        }
        if(str[i] == 'a' || str[i] == 'i' || str[i] == 'u' || str[i] == 'e' || str[i] == 'o'){
            contv++;
            str[i] = c;
        }
    }
    
    printf("%s", str);
    
    printf("\n");
    return 0;
}

