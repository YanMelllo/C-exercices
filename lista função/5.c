#include <stdio.h>

double calcular(double x, double y, char simb);

int main(){
    double x, y, r;
    char simb;

    printf("Digite dois valores numericos: ");
    scanf("%lf %lf", &x, &y);
    setbuf(stdin, NULL);
    printf("Digite um simbolo + - / * para a operacao: ");
    scanf("%c", &simb);
    r = calcular(x, y, simb);
    printf("Resultado: %.2lf", r);
    printf("\n");
    return 0;
}

double calcular(double x, double y, char simb){
    if(simb == '+'){
        return x + y;
    }
    else if(simb == '-'){
        return x - y;
    }
    else if(simb == '/'){
        return x / y;
    }
    else if(simb == '*'){
        return x * y;
    }
}
