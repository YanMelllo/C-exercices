#include <stdio.h>
#include <string.h>

int negativos(float *v, int N);

int main(){
    float v[10] = {5.0, -2.0, 15.0, 3.0, -7.0, -15.0, 8.0, -6.0, 15.0, 9.0};
    int quant, tam = sizeof(v)/sizeof(v[0]); 
    

    quant = negativos(v, tam);
    printf("\n%d numeros negativos.\n", quant);
 
    printf("\n");
    return 0;
}

int negativos(float *v, int N){
    int quant=0;
    for(int i = 0; i < N; i++)
    {
        if(v[i] < 0)
        {
            quant++;
        }
    }
    return quant;
}