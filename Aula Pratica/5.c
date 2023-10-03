#include <stdio.h>

void conceito(double media);

int main(){
    int n; 
    double media; 
    printf("Digite quantas medias deseja ler: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Digite a media: ");
        scanf("%lf", &media);
        conceito(media);
    }
    printf("\n");
    return 0;
}

void conceito(double media){
    if(media <= 39){
        printf("Conceito: F\n");
    }
    else if(media > 39 && media <= 59){
        printf("Conceito: E\n");
    }
    else if(media > 59 && media <= 69){
        printf("Conceito: D\n");
    }
    else if(media > 69 && media <= 79){
        printf("Conceito: C\n");
    }
    else if(media > 79 && media <= 89){
        printf("Conceito: B\n");
    }
    else if(media > 89){
        printf("Conceito: A\n");
    }
}