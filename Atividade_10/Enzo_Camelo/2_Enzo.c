#include <stdio.h>

int meu_strcat(char *str1, char *str2){
    int i = 0;
    while (str1[i] != '\0'){
        i++;
    }

    str1[i] = ' ';
    i++;
    
    int j = 0;
    while (str2[j] != '\0'){
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

int main(){
    char str1[20], str2[20];

    printf("Digite uma string:\n");
    scanf("%s", str1);

    printf("Digite outra string:\n");
    scanf("%s", str2);

    meu_strcat(str1, str2);
    printf("Strings juntas: %s\n", str1);
    return 0;
}