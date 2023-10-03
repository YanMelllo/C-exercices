#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct dados{
    char sexo;
    char olhos;
    char cabelo; 
    int idade; 
};

float media(struct dados habitantes[]);
int maiorIdade(struct dados habitantes[]);
int quantidade(struct dados habitantes[]);

int main(){
    struct dados habitantes[5];
    float m;
    int maior, quant;

    for(int i = 0; i < 5; i++){
        setbuf(stdin, NULL);
        printf("Digite seu sexo(m ou f): ");
        scanf("%c", &habitantes[i].sexo);
        setbuf(stdin, NULL);
        printf("Cor dos olhos(A-Azuis ou C-Castanho): ");
        scanf("%c", &habitantes[i].olhos);
        setbuf(stdin, NULL);
        printf("Cord do cabelo((L - Louros, P - Pretos ou C - Castanhos): ");
        scanf("%c", &habitantes[i].cabelo); 
        setbuf(stdin, NULL);
        printf("Digite sua idade: ");
        scanf("%d", &habitantes[i].idade);
    }
    m = media(habitantes);
    maior = maiorIdade(habitantes);
    quant = quantidade(habitantes);
    printf("A media de idade dos habitantes com cabelos pretos e olhos castanhos: %.2f\n", m);
    printf("A maior idade e: %d\n", maior);
    printf("Habitante do sexo feminino, entre 18 e 35, com cabelos louros e olhos azuis: %d", quant);

    printf("\n");
    return 0;
}

float media(struct dados habitantes[]){
    int soma=0, aux=0;
    for(int i = 0; i < 5; i++){
        if(habitantes[i].cabelo == 'p' && habitantes[i].olhos == 'c'){
            soma += habitantes[i].idade;
            aux++;
        }
    }
    soma /= aux;
    return soma; 
}

int maiorIdade(struct dados habitantes[]){
    int maior;
    for(int i = 0; i < 5; i++){
        if(i == 0){
            maior = habitantes[i].idade;
        }
        else if(habitantes[i].idade > maior){
            maior = habitantes[i].idade;
        }
    }
    return maior; 
}

int quantidade(struct dados habitantes[]){
    int x=0; 
    for(int i = 0; i < 5; i++){
        if(habitantes[i].sexo == 'f'){
            if(habitantes[i].idade > 18 && habitantes[i].idade <= 35){
                if(habitantes[i].cabelo == 'l' && habitantes[i].olhos == 'a'){
                    x++;
                }
                else{
                    continue;
                }
            }
            else{
                continue;
            }
        }
        else{
            continue;
        }
    }
    return x;
}