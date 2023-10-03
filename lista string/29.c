#include <stdio.h>
#include <string.h>

int main(){
    char str[30], str2[30];
    int x;
    printf("Digite uma string: ");
    fgets(str, 30, stdin);
    printf("Digite outra string: ");
    fgets(str2, 30, stdin);
    printf("Digite um valor positivo inteiro: ");
    scanf("%d", &x);
    for(int i = 0; i <= x; i++){
        if(i == x){
            str[i] = '\0';
        }
        else{
            str[i] = str2[i];
        }
    }
    printf("%s\n%s", str, str2);
    printf("\n");
    return 0;
}

