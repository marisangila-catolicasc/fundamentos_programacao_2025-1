#include <stdio.h>

int meu_strcmp(char str1[], char str2[]){
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0'){
        if(str1[i] != str2[i]){
            return 0;
        }else{
            return 1;
        }
    i++;
    }
}

int main(){

    char str1[50], str2[50] = "senha";

    printf("Escreva a senha:\n");
    scanf("%49[^\n]", str1);

    if(meu_strcmp(str1, str2)){
        printf("iguais");
    }else{
        printf("Diferente");
    }
   

return 0;
}