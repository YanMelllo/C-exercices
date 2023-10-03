#include <stdio.h>
#include <stdbool.h>

double mediaFinal(int n);

int main(){
    int n;
    double resultado;

    printf("Quantas medias deseja ler: ");
    scanf("%d", &n);
    resultado = mediaFinal(n);
    printf("A media dos alunos aprovados e: %.2lf", resultado);
    printf("\n");
    return 0;
}

double mediaFinal(int n){
    double r = 0.0, media;
    for(int i = 0; i < n; i++){
        printf("Digite a media: ");
        scanf("%lf", &media);
        if(media >= 6){
            r += media;
        }
    }
    r = r/n;
    return r;
}