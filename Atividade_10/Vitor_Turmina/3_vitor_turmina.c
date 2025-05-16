#include <stdio.h>

void meu_strcpy(char dest[], const char orig[]){
    int i = 0;

    while (orig[i] != '\0'){
        dest[i] = orig[i];
        i++;
    }

    dest[i] = '\0';
}

int main(){

    char str1[50], str2[50];

    printf("digite uma frase: \n");
    scanf("%50[^\n]", str2);

    meu_strcpy(str1, str2);

    printf("Copy: %s", str1);

return 0;
}
