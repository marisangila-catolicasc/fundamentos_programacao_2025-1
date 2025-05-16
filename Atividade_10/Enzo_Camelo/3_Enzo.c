#include <stdio.h>

int meu_strcpy(char *str_og, char *str_copia){
    int i = 0;
    while (str_og[i] != '\0'){
        str_copia[i] = str_og[i];
        i++;
    }
    
    str_copia[i] = '\0';
}

int main(){
    char str_og[20], str_copia[20];

    printf("Digite uma string:\n");
    scanf("%s", str_og);

    meu_strcpy(str_og, str_copia);

    printf("String original: %s\n", str_og);
    printf("String copiada: %s\n", str_copia);
    return 0;
}