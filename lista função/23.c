#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct racional{
    int p, q;
};

float reduz(int a, int b);
float neg(float x);
float soma(float x, float y);
float mult(float x, float y);
float divi(float x, float y);

int main(){
    struct racional n;
    
    float x, xn, s, produto, quociente;

    printf("Digite a e b: ");
    scanf("%d %d", &n.p, &n.q);

    x = reduz(n.p, n.q);
    printf("a = %f\n", x);
    xn = neg(x);
    printf("b = %f\n", xn);
    s = soma(x, xn);
    printf("c = %f\n", s);
    produto = mult(x, xn);
    printf("d = %f\n", produto);
    quociente = divi(x, xn);
    printf("e = %f", quociente);
    printf("\n");
    return 0;
}

float reduz(int a, int b){
    float p = a, q = b;
    float x = p/q;
    return x; 
}

float neg(float x){
    float xn = -x;
    return xn; 
}

float soma(float x, float y){
    float s = x + y;
    return s;
}

float mult(float x, float y){
    float produto = x * y;
    return produto; 
}

float divi(float x, float y){
    float quociente = x/y;
    return quociente;
}