#include <stdio.h>
#include <string.h>

void array(int *a, int *min, int *max);

int main(){
    int a[10];
    int min, max; 

    for(int i = 0; i < 10; i++)
    {
        printf("Digite o %d valor do primeiro array: ", i+1);
        scanf("%d", &a[i]);
    }
    

    array(a, &min, &max);
    printf("Max: %d\nMin: %d", max, min);

    printf("\n");
    return 0;
}

void array(int *a, int *min, int *max){
    int tam = sizeof(a);
    for(int i = 0; i < tam; i++)
    {
        if(i == 0)
        {
            *min = a[i];
            *max = a[i];
        }
        else if(a[i] > *max)
        {
            *max = a[i];
        }
        else if(a[i] < *min)
        {
            *min = a[i];
        }
    }

}