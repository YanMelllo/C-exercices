#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char alunos[5][20], nome[20];
    int cont=0, id, aux=0;
    for(int i = 0; i < 5; i++){
        printf("Digite o nome do %d aluno: ", i+1);
        fgets(alunos[i], 20, stdin);
    }
    setbuf(stdin, NULL);
    printf("Digite um nome para procurar na lista: ");
    fgets(nome, 20, stdin);
    for(int i = 0; i < 5; i++){
        cont=0;
        for(int j = 0; j < 20; j++){
            if(alunos[i][j] == nome[j]){
                cont++;
            }
        }
        if(cont >= 5){
            id = i;
            break;
        }
        else{
            aux++;
        }
    }
    if(aux != 5){
        printf("O nome buscado esta na posicao %d\nNome: %s", id, alunos[id]);
    }
    else{
        printf("Nome não encontrado");
    }
    printf("\n");
    return 0;
}



