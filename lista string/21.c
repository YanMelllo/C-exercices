#include <stdio.h>
#include <string.h>

int main(){
    char f1[30], f2[30], x = '*';
    int cont1=0, cont2=0;
    printf("Digite uma frase: ");
    fgets(f1, 30, stdin);
    printf("Digite outra frase: ");
    fgets(f2, 30, stdin);

    for(int i = 0; i < 30; i++){
        if(f1[i] == 'a' || f2[i] == 'a'){
            f1[i] = x;
            f2[i] = x;
        }
    }
    cont1 = strlen(f1);
    cont2 = strlen(f2);
    for(int i = cont1; i >= 0; i--){
        printf("%c", f1[i]);
    }
    printf("\n");
    for(int i = cont2; i >= 0; i--){
        printf("%c", f2[i]);
    }
    printf("\n");
    return 0;
}

