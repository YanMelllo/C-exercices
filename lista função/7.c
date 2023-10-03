#include <stdio.h>

void triangulo(int n);

int main(){
    int  n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    triangulo(n);

    return 0;
}

void triangulo(int n){
    int k;
    for(int i = 1; i <= n; i++){
        k = 2*i - 1;
        for(int j = 1; j <= k; j++){
            printf("*");
        }
        printf("\n");
    }
}

