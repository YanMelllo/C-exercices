#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void intercala(char str1[], char str2[], int tamanho);

int main(){
    char str1[15], str2[15], str3[30];
    int tamanho; 

    printf("Digite uma string: ");
    fgets(str1, 15, stdin);
    setbuf(stdin, NULL);
    printf("Digite outra string: ");
    fgets(str2, 15, stdin);
    setbuf(stdin, NULL);
    
    tamanho = strlen(str1) + strlen(str2);
    intercala(str1, str2, tamanho);
    

    printf("\n");
    return 0;
}


void intercala(char str1[], char str2[], int tamanho){
    char str3[30], j=0, k=0;
    for(int i = 0; i < tamanho; i++){
        if(i % 2 == 0){
            str3[i] = str1[j];
            j++;
        }
        else{
            str3[i] = str2[k];
            k++;
        }
    }
    printf("Intercalada: %s", str3);
}
