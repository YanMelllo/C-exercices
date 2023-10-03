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
    printf("O dobro de cada termo\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i) * 2);
    }

    printf("\n");
    return 0;
}

