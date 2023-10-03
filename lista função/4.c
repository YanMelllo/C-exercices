#include <stdio.h>

double media(int n1, int n2, int n3, char l);

int main(){
    int n;
    double nota1, nota2, nota3, resultado;
    char letra;

    printf("Digite o numero de alunos que deseja ler as notas: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("\nDigite as 3 notas: ");
        scanf("%lf %lf %lf", &nota1, &nota2, &nota3);
        setbuf(stdin, NULL);
        printf("\nDigite A para media aritmetica ou P para ponderada: ");
        scanf("%c", &letra);
        resultado = media(nota1, nota2, nota3, letra);
        printf("\nA media do %d aluno e %.2lf", i+1, resultado);
    }
    
    return 0;
}

double media(int n1, int n2, int n3, char l){
    if(l == 'A'){
        return (n1 + n2 + n3) / 3;
    }
    else if(l == 'P'){
        return (n1*5 + n2*3 + n3*2) / 10;
    }
}