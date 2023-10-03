#include <stdio.h>
#include <stdbool.h>

bool sinal(int num);

int main(){
    int n, num;
    bool resultado;

    printf("Digite quantos numeros deseja ler: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%d", &num);
        resultado = sinal(num);
        if(resultado == true){
            printf("O valor digitado e positivo\n");
        }
        else{
            printf("O valor digitado e negativo\n");
        }
    }
    
    printf("\n");
    return 0;
}

bool sinal(int num){
    bool r = true;
    if(num < 0){
        r = false;
    }
    return r;
}