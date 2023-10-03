#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int anagrama(char str1[], char str2[]);

int main(){
    char str1[10], str2[10]; 
    int resultado;
    
    printf("Digite uma string: ");
    fgets(str1, 10, stdin);
    setbuf(stdin, NULL);
    printf("Digite outra string: ");
    fgets(str2, 10, stdin);
    setbuf(stdin, NULL);
    
    resultado = anagrama(str1, str2);
    if(resultado == 1){
        printf("Anagrama.");
    }
    else{
        printf("Nao anagrama.");
    }
    
    printf("\n");
    return 0;
}

int anagrama(char str1[], char str2[]){
    int x = 0, y = 0; 
    if(strlen(str1) == strlen(str2)){
        for(int i = 0; i < strlen(str1); i++){
            for(int j = 0; j < strlen(str2); j++){
                if(str1[i] == str2[j]){
                    x++;
                    str2[j] = 0;
                    break;
                }
            }
        }
        if(x == strlen(str1) - 1){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        return 0;
    }
}

