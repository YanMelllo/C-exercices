#include <stdio.h>
#include <string.h>

int main(){
    char op, str1[20], str2[20], c, c2, *aux;
    int tamanho, cont=0, p1;

    printf("a) Ler uma string 1\nb) Imprimir o tamanho da string\nc) Comparar a s1 com uma s2\nd) Concatenar s1 com uma s2");
    printf("\ne) Imprimir s1 de forma inversa\nf) Contar quantas vezes um caractere ocorre na s1\ng) Subistutir um caractere C1 na s1 por um C2");
    printf("\nh) Verificar se uma s2 e substring de s1\ni) Retornar uma substring de s1\n\nOpcao: ");
    scanf("%c", &op);

    if(op == 'a'){
        setbuf(stdin, NULL);
        printf("Digite uma string: ");
        fgets(str1, 20, stdin);
        printf("A string digitada e: %s", str1);
    }
    else if(op == 'b'){
        setbuf(stdin, NULL);
        printf("Digite uma string: ");
        fgets(str1, 20, stdin);
        tamanho = strlen(str1) - 1;
        printf("O tamanho da string e: %d", tamanho);
    }
    else if(op == 'c'){
        setbuf(stdin, NULL);
        printf("Digite uma string: ");
        fgets(str1, 20, stdin);
        printf("Digite outra string: ");
        fgets(str2, 20, stdin);
        if(strcmp(str1, str2) == 0){
            printf("As strings sao iguais.");
        }
        else{
            printf("As strings sao diferentes");
        }
    }
    else if(op == 'd'){
        setbuf(stdin, NULL);
        printf("Digite uma string: ");
        fgets(str1, 20, stdin);
        printf("Digite outra string: ");
        fgets(str2, 20, stdin);
        str2[strlen(str2) - 1] = '\0';
        strcat(str2, str1);
        printf("str2 concatenada: %s", str2);
    }
    else if(op == 'e'){
        setbuf(stdin, NULL);
        printf("Digite uma string: ");
        fgets(str1, 20, stdin);
        for(int i = strlen(str1); i >= 0; i--){
            printf("%c", str1[i]);
        }
    }
    else if(op == 'f'){
        setbuf(stdin, NULL);
        printf("Digite uma string: ");
        fgets(str1, 20, stdin);
        printf("Digite um caractere: ");
        scanf("%c", &c);
        for(int i = 0; i < strlen(str1); i++){
            if(str1[i] == c){
                cont++;
            }
        }
        printf("O caractere aparece %d vezes", cont);
    }
    else if(op == 'g'){
        setbuf(stdin, NULL);
        printf("Digite uma string: ");
        fgets(str1, 20, stdin);
        printf("Digite um caractere: ");
        scanf("%c", &c);
        setbuf(stdin, NULL);
        printf("Digite outro caractere: ");
        scanf("%c", &c2);
        for(int i = 0; i < strlen(str1); i++){
            if(str1[i] == c){
                str1[i] = c2;
            }
        }
        printf("Nova string: %s", str1);
    }
    else if(op == 'h'){
        setbuf(stdin, NULL);
        printf("Digite uma string: ");
        fgets(str1, 20, stdin);
        printf("Digite outra string: ");
        fgets(str2, 20, stdin);
        aux = strstr(str1, str2);
        if(aux){
            printf("A string 2 e substring da 1");
        }
        else{
            printf("S2 nao e substring de S1");
        }
    }
    else if(op == 'i'){
        setbuf(stdin, NULL);
        printf("Digite uma string: ");
        fgets(str1, 20, stdin);
        printf("Digite a posicao de inicio: ");
        scanf("%d", &p1);
        printf("Digite o tamanho da substring: ");
        scanf("%d", &tamanho);
        for(int i = p1; i <= tamanho; i++){
            printf("%c", str1[i]);
        }
    }
    printf("\n");
    return 0;
}

