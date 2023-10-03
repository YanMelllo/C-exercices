#include <stdio.h>

void crescente(int v1, int v2, int v3);

int main(){
    int n, v1, v2, v3;

    printf("Digite quantos conjuntos de 3 numeros deseja ler: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Digite 3 numeros inteiros: ");
        scanf("%d %d %d", &v1, &v2, &v3);
        crescente(v1, v2, v3);
    }
    
    return 0;
}

void crescente(int v1, int v2, int v3){
    if(v1 > v2 && v2 > v3){
        printf("%d %d %d\n", v1, v2, v3);
    }
    else if(v2 > v1 && v1 > v3){
        printf("%d %d %d\n", v2, v1, v3);
    }
    else if(v1 > v3 && v3 > v2){
        printf("%d %d %d\n", v1, v3, v2);
    }
    else if(v2 > v3 && v3 > v1){
        printf("%d %d %d\n", v2, v3, v1);
    }
    else if(v3 > v1 && v1 > v2){
        printf("%d %d %d\n", v3, v1, v2);
    }
    else if(v3 > v2 && v2 > v1){
        printf("%d %d %d\n", v3, v2, v1);
    }
}