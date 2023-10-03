#include <stdio.h>
#include <string.h>

int main(){
    float m[3][3] = {1,2,3,4,5,6,7,8,9};
    float *p = &m[0][0];

    printf("Enderecos de memoria\n");
    for(int i = 0; i < 9; i++){
        
        printf("%p ", p[i]);
        
    }

    printf("\n");
    return 0;
}

