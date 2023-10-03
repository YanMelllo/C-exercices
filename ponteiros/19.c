#include <stdio.h>
#include <string.h>

void array(int *a, int N, int k);

int main(){
    int a[10];
    int N, k;

    for(int i = 0; i < 10; i++)
    {
        printf("Digite o %d valor do primeiro array: ", i+1);
        scanf("%d", &a[i]);
    }
    N = sizeof(a)/sizeof(a[0]); 
    printf("Digite quantos numeros deseja por linha: ");
    scanf("%d", &k);

    array(a, N, k);

    printf("\n");
    return 0;
}

void array(int *a, int N, int k){
    int maior, cont=0;
    for(int i = 0; i < N; i++)
    {
        if(i == 0)
        {
            maior = a[i];
        }
        else if(a[i] > maior)
        {
            maior = a[i];
        }
    }
    printf("O maior elemento e: %d\n", maior);

    for(int j = 0; j < N; j++)
    {
        printf("%d ", a[j]);
        cont++;
        if(k == cont)
        {
            printf("\n");
            cont = 0;
        }
    }

}