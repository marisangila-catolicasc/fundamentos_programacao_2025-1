#include <stdio.h>

int meu_strcmp(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;
        }
        i++;
    }
    return 1;
}

int main(){
    char string1[20], string2[20];
    int igual;

    printf("Digite uma string:\n");
    scanf("%s", string1);

    printf("Digite outra string:\n");
    scanf("%s", string2);

    igual = meu_strcmp(string1, string2);

    if (igual == 1){
        printf("\nAs strings são iguais!\n");
    } else {
        printf("\nAs strings não são iguais!\n");
    }

    return 0;
}