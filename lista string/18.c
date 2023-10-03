#include <stdio.h>
#include <string.h>

int main(){
    char str1[25], L1, L2;
    
    printf("Digite a primeira string: ");
    fgets(str1, 25, stdin);
    printf("Digite duas letras: ");
    scanf("%c %c", &L1, &L2);

    for(int i = 0; i < 25; i++){
        if(str1[i] == '\n'){
            break;
        }
        if(str1[i] == L1){
            str1[i] = L2;
        }
    }
    
    printf("%s", str1);
    
    printf("\n");
    return 0;
}

