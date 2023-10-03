#include <stdio.h>

int media();

int main(){
    int resultado, salario;
    resultado = media();
    printf("A media do salario da populacao e %d", resultado);
    printf("\n");
    return 0;
}

int media(){
    int salario, media=0, cont=0; 
    while(1){
        printf("\nDigite seu salario: ");
        scanf("%d", &salario);
        if(salario < 0){
            break;
        }
        cont++;
        media += salario;
    }
    media = media / cont;
    return media;
}