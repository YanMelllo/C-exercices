#include <stdio.h>
#include <string.h>

void confere_maior(int v[], int *maior, int *quant, int tam);

int main(){
    int v[10] = {5, 2, 15, 3, 7, 15, 8, 6, 15, 9};
    int maior, quant = 0, tam = sizeof(v)/sizeof(v[0]); 
    

    confere_maior(v, &maior, &quant, tam);
    printf("Maior: %d\n", maior);
    printf("Quantidade: %d", quant);
 
    printf("\n");
    return 0;
}

void confere_maior(int v[], int *maior, int *quant, int tam){
    for(int i = 0; i < tam; i++)
    {
        if(i == 0)
        {
            *maior = v[i];
        }
        else if(v[i] > *maior)
        {
            *maior = v[i];
        }
    }
    for(int j = 0; j < tam; j++)
    {
        if(v[j] == *maior)
        {
            (*quant)++;
        }
    }

}