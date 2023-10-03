#include <stdio.h>
#include <string.h>

int main(){
    char str[30];
    int x, t;
    printf("Digite uma string: ");
    fgets(str, 30, stdin);
    t = strlen(str);
    for(int i = 0; i <= t; i++){
        x = str[i];
        str[i] = x + 3;
    }
    printf("%s", str);
    printf("\n");
    return 0;
}

