#include <stdio.h>

int meu_strcmp(char *t1, char *t2);

int main(void){
    char comp[100], pmoc[100];

    printf("String1: ");
    scanf("%s", comp);

    printf("String2: ");
    scanf("%s", pmoc);

    int iguais = meu_strcmp(comp, pmoc);

    if(iguais == 0){
        printf("Sao deferentes :<\n");
    }else{
        printf("Sao iguais");
    }
}

int meu_strcmp(char *t1, char *t2){
    int i = 0, t1_len = 0, t2_len = 0, j = 0;

    while(t1[i] != '\0'){
        t1_len++;
        i++;
    }
    while(t2[j] != '\0'){
        t2_len++;
        j++;
    }

    int letras_iguais = 0, t = 0;

    if(t1_len != t2_len){
        return 0;
    }else{
        while(t1[t] != '\0'){
            if(t1[t] == t2[t]){
                letras_iguais++;
            }
            t++;
        }
        if(t1_len == letras_iguais){
            return 1;
        }else if(t1_len != letras_iguais){
            return 0;
        }
    }
}