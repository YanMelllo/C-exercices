#include <stdio.h>
#include <string.h>

void imprime(int *a, int tam);

int main(){
    int a[5] = {1,2,3,4,5}, n;
    int tam = sizeof(a)/sizeof(a[0]);


    imprime(a, tam);
 
    printf("\n");
    return 0;
}

void imprime(int *a, int tam){
    for(int i = 0; i < tam; i++)
    {
        printf("%d ", *(a + i));
    }
}