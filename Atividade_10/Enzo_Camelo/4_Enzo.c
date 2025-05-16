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
    char str1[20], str2[20];
    int eh_igual;

    printf("Digite uma string:\n");
    scanf("%s", str1);

    printf("Digite outra string:\n");
    scanf("%s", str2);

    eh_igual = meu_strcmp(str1, str2);

    if (eh_igual == 1){
        printf("\nAs strings são iguais\n");
    } else {
        printf("\nAs strings não são iguais\n");
    }

    return 0;
}