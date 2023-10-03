#include <stdio.h>
#include <string.h>

int main(){
    char str[30];
    int x, y;
    printf("Digite uma string: ");
    fgets(str, 30, stdin);
    printf("Digite dois valores inteiros positivos: ");
    scanf("%d %d", &x, &y);
    if(x > y){
        for(int i = y; i <= x; i++){
            printf("%c", str[i]);
        }
    }
    else if(y > x){
        for(int i = x; i <= y; i++){
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}

