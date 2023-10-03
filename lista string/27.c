#include <stdio.h>
#include <string.h>

int main(){
    char str[30], str2[30];
    int x=0, cond=0, t;
    printf("Digite uma string: ");
    fgets(str, 30, stdin);
    t = strlen(str) - 2;
    for(int i = t; i >= 0; i--){
        str2[x] = str[i];
        x++;
    }
    for(int i = 0; i < t; i++){
        if(str[i] != str2[i]){
            cond++;
        }
    }
    if(cond == 0){
        printf("E um palindromo");
    }
    else{
        printf("Nao e um palindromo");
    }
    printf("\n");
    return 0;
}

