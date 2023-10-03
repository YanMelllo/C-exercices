#include <stdio.h>
#include <string.h>

int main(){
    int a[5] = {1,2,3,4,5}, tam;
    int *pA;
    pA = a;  
    tam = sizeof(a)/sizeof(a[0]); 
    for(int i = 0; i < tam; i++)
    {
        pA[i]++;
    }
    for(int j = 0; j < tam; j++)
    {
        printf("%d ", a[j]);
    }
    printf("\n");
    return 0;
}

