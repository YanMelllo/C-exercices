#include <stdio.h>
#include <string.h>

int checa_string(char *s1, char *s2);

int main(){
    char str1[30], str2[15];
    int r;

    printf("Digite 1 string: ");
    setbuf(stdin, NULL);
    fgets(str1, 30, stdin);
    printf("Digite a 2 string: ");
    setbuf(stdin, NULL);
    fgets(str2, 15, stdin);

    

    r = checa_string(str1, str2);
    if(r == 1)
    {
        printf("A string 2 esta inclusa na primeira.");
    }
    else
    {
        printf("A string 2 nao esta inclusa.");
    }

    printf("\n");
    return 0;
}

int checa_string(char *s1, char *s2){
    int cont=0;
    for(int i = 0; i < strlen(s1); i++){
        if(s2[0] == s1[i])
        {
            for(int j = 0; j < strlen(s2); j++)
            {
                if(s1[i] == s2[j])
                {
                    cont++;
                    i++;
                }
            }
        }
        if(cont == strlen(s2)){
            break;
        }
    }
    if(cont == strlen(s2))
    {
        return 1;
    }
    else
    {
        return 0; 
    }
}