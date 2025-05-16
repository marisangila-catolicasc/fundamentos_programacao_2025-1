#include <stdio.h>

int meu_strlen(char *str){
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}

int main(){
    char str[20];

    printf("Digite uma string: ");
    scanf("%s", str);

    printf("\nQuantidade de caracteres: %d\n", meu_strlen(str));
    
    return 0;
}