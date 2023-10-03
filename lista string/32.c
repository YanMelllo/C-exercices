#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[11], strd[2], strm[2], stra[4];
    int dia, mes, ano, aux=0, cont=0;

    printf("Digite uma data no formato DD/MM/AAAA: ");
    fgets(str, 11, stdin);
    if(str[2] == '/' && str[5] == '/'){
        for(int i = 0; i < 10; i++){
            if(str[2] || str[5]){
                continue;
            }
            if(str[i] > 57 ){
                aux++;
            }
        }
        if(aux == 0){
            for(int i = 0; i < 2; i++){
                strd[i] = str[i];
                cont++;
            }
            cont=0;
            for(int i = 3; i < 5; i++){
                strm[cont] = str[i];
                cont++;
            }
            cont=0;
            for(int i = 6; i < 11; i++){
                stra[cont] = str[i];
                cont++;
            }
            dia = atoi(strd);
            mes = atoi(strm);
            ano = atoi(stra);

            printf("Dia: %d\nMes: %d\nAno: %d", dia, mes, ano);
            printf("\n%s", str);
        }
        else{
            printf("Formato incorreto");
        }
    }
    else{
        printf("Formato incorreto");
    }
    
    printf("\n");

    return 0;
}



