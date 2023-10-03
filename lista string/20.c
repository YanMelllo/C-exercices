#include <stdio.h>
#include <string.h>

int main(){
    char carros[5][25], economico[25];
    int consumo[5], menor=0; 
    double litrosMil;

    for(int i = 0; i < 5; i++){
        printf("Digite um modelo de carro: ");
        setbuf(stdin, NULL);
        fgets(carros[i], 25, stdin);
        printf("Digite a quilometragem com 1 litro: ");
        scanf("%d", &consumo[i]);
        if(i == 0){
            menor = consumo[i];
            strcpy(economico, carros[i]);
        }
        else if(consumo[i] < menor){
            menor = consumo[i];
            strcpy(economico, carros[i]);
        }
    }
    for(int i = 0; i < 5; i++){
        litrosMil = 1000/consumo[i];
        printf("O consumo do modelo %s %.2lf\n", carros[i], litrosMil);
    }


    printf("O modelo mais economico e: %s", economico);
    printf("\n");
    return 0;
}

