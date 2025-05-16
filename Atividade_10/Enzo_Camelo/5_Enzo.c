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
    char str[20];
    int eh_palindromo;

    printf("Digite uma palavra:\n");
    scanf("%s", str);

    eh_palindromo = verifica_palindromo(str);

    if (eh_palindromo == 1){
        printf("\nEh palindromo\n");
    } else{
        printf("\nNão eh palindromo\n");
    }
    return 0;
}