#include <stdio.h>

int verifica_palindromo(char *str){
    int tamanho = 0;
    while (str[tamanho] != '\0'){
        tamanho++;
    }

    int i = 0;
    int j = tamanho - 1;

    while (i < j){
        if (str[i] != str[j]){
            return 0;
        }
        i++;
        j--;
    }

    return 1;
}

int main(){
    char string[20];
    int palindromo;

    printf("Digite uma palavra:\n");
    scanf("%s", string);

    palindromo = verifica_palindromo(string);

    if (palindromo == 1){
        printf("\nÉ palindromo\n");
    } else{
        printf("\nNão é palindromo\n");
    }
    return 0;
}