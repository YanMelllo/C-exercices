#include <stdio.h>
#include <string.h>

int main(){
    char str1[30], str2[30];
    printf("Digite uma string: ");
    fgets(str1, 30, stdin);
    printf("Digite outra string: ");
    fgets(str2, 30, stdin);
    if(str1[0] < str2[0]){
        printf("A primeira string vem primeiro");
    }
    else{
        printf("A segunda string vem primeiro");
    }    

    printf("\n");
    return 0;
}

