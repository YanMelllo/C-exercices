#include <stdio.h>

void triangulo(int x, int y, int z);
int verficar(int x, int y, int z);

int main(){
    int  x, y, z, cond;

    printf("Digite os 3 lados do triangulo(valores maiores que 0): ");
    scanf("%d %d %d", &x, &y, &z);
    cond = verficar(x, y, z);
    if(cond == 1){
        triangulo(x, y, z);
    }
    else{
        printf("Os lados digitados nao configuram um triangulo\n");
    }

    return 0;
}

int verficar(int x, int y, int z){
    if(x < y+z && y < x+z && z < x+y){
        return 1;
    }
    else{
        return 0;
    }
}

void triangulo(int x, int y, int z){

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
