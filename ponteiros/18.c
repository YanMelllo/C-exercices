#include <stdio.h>
#include <string.h>

int array(int *a, int *b, int *c, int tamC);

int main(){
    int a[6], b[6], c[6];
    int r, tam=sizeof(a)/sizeof(a[0]), tamC = sizeof(c);

    for(int i = 0; i < 6; i++)
    {
        printf("Digite o %d valor do primeiro array: ", i+1);
        scanf("%d", &a[i]);
        printf("Digite o %d valor do segundo array: ", i+1);
        scanf("%d", &b[i]);
    }

    r = array(a, b, c, tamC);
    if(r == 1)
    {
        for(int j = 0; j < tam; j++)
        {
            printf("%d ", c[j]);
        }
    }
    else
    {
        printf("Arrays de tamanhos diferentes.");
    }
    
    printf("\n");
    return 0;
}

int array(int *a, int *b, int *c, int tamC){
    int tamA, tamB; 
    tamA = sizeof(a)/sizeof(a[0]);
    tamB = sizeof(b)/sizeof(b[0]);
    if(tamA == tamB)
    {
        for(int i = 0; i < tamC; i++)
        {
            *(c+i) = a[i] + b[i];
        }
        return 1;
    }
    else
    {
        return 0; 
    }

}