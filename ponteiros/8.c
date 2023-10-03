#include <stdio.h>
#include <string.h>

int ordena(int *v, int tam);

int main(){
    int v[3], r;
    int tam = sizeof(v)/sizeof(v[0]);

    printf("Preencha o vetor\n");
    for(int i = 0; i < tam; i++)
    {
        printf("%d termo: ", i+1);
        scanf("%d", &v[i]);
    }

    r = ordena(v, tam);
    if(r == 1)
    {
        printf("Valores iguais.\n");
    }
    else
    {
        printf("Valores diferentes.\n");
        printf("Valores ordenados\n");
        for(int i = 0; i < tam; i++)
        {
            printf("%d ", v[i]);
        }
    }

    printf("\n");
    return 0;
}

int ordena(int *v, int tam){
    int x=0;
    for(int i = 0; i < tam; i++)
    {
        if(v[i] == v[i+1])
        {
            x++;
        }
    }
    if(x == 2){
        x = 1;
    }
    else{
        x = 0;
    }
    //ordenar
    for(int i = 0; i < tam; i++)
    {
        for(int j = 0; j < tam-1; j++)
        {
            if(v[j] > v[j+1])
            {
                int aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
    return x;
}