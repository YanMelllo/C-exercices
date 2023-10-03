#include <stdio.h>
#include <string.h>

int main(){
    float v[10] = {1,2,3,4,5,6,7,8,9,10};
    float *p = v;

    printf("Enderecos de memoria\n");
    for(int i = 0; i < 10; i++){
        printf("%p\n", p[i]);
    }

    printf("\n");
    return 0;
}

