#include <stdio.h>
#include <string.h>

int main(){
    char nome[25], velha[25], nova[25];
    int idade, maior, menor;

    for(int i = 0; i < 10; i++){
        setbuf(stdin, NULL);
        printf("Digite um nome: ");
        fgets(nome, 25, stdin);
        printf("Digite a idade: ");
        scanf("%d", &idade);
        if(idade < 0){
            break;
        }
        if(i == 0){
            maior = idade;
            menor = idade;
            strcpy(velha, nome);
            strcpy(nova, nome);
        }
        else if(idade > maior){
            maior = idade;
            strcpy(velha, nome);
        }
        else if(idade < menor){
            menor = idade;
            strcpy(nova, nome);
        }
    }
    
    printf("Pessoa mais velha: %s\nIdade: %d\n", velha, maior);
    printf("Pessoa mais nova: %s\nIdade: %d", nova, menor);
    
    printf("\n");
    return 0;
}

