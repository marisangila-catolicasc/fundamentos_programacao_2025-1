#include <stdio.h>

void meu_strcpy(char *st1, char *st2);

int main(void){
    char pala1[100];

    printf("Sua string: ");
    scanf("%s", pala1);

    char pala2[100];

    meu_strcpy(pala1, pala2);
}

void meu_strcpy(char *st1, char *st2){
    int i = 0, j = 0;

    while(st1[j] != '\0'){
        st2[i] = st1[j];
        i++;
        j++;
    }

    st2[i] = '\0';

    printf("String antiga: %s\n", st1);
    printf("String nova: %s", st2);
}