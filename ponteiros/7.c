#include <stdio.h>
#include <string.h>

int main(){
    int v[5];
    int *p;

    printf("Preencha o array\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d termo: ", i+1);
        scanf("%d", &v[i]);
    }
    p = v;
    printf("Endereco de numeros pares\n");
    for(int i = 0; i < 5; i++)
    {
        if(p[i] % 2 == 0)
        {
            printf("%d ", p[i]);
        }
    }

    printf("\n");
    return 0;
}

