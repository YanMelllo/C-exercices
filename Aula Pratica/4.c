#include <stdio.h>

void triangulo(int x, int y, int z);

int main(){
    int n, x, y, z;

    printf("Digite o numero de triangulos que deseja verificar: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Digite os 3 lados do triangulo: ");
        scanf("%d %d %d", &x, &y, &z);
        triangulo(x, y, z);
    }
    return 0;
}

void triangulo(int x, int y, int z){
    if(x < y+z && y < x+z && z < x+y){
        if(x == y && x == z && y == z){
            printf("Este triangulo e Esquilatero\n");
        }
        else if(x == y || x == z || y == z){
            printf("Este triangulo e Isosceles\n");
        }
        else if(x != y && x != z && y != z){
            printf("Este triangulo e Escaleno\n");
        }
    }
    else{
        printf("Os lados digitados nao configuram um triangulo\n");
    }
}