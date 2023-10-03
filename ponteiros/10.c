#include <stdio.h>
#include <string.h>

void substitui(int *a, int n, int tam);

int main(){
    int a[5] = {1,2,3,4,5}, n;
    int tam = sizeof(a)/sizeof(a[0]);

    printf("Digite um numero n: ");
    scanf("%d", &n);

    substitui(a, n, tam);

    for(int i = 0; i < tam; i++)
    {
        printf("%d ", a[i]);
    }
 
    printf("\n");
    return 0;
}

void substitui(int *a, int n, int tam){
    for(int i = 0; i < tam; i++)
    {
        *(a + i) = n;
    }
}