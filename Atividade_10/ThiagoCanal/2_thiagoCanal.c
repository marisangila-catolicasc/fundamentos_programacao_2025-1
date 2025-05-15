#include <stdio.h>

void meu_strcat(char *st1, char *st2);

int main(void){
    char pala1[100];

    printf("Sua string: ");
    scanf("%s", pala1);

    char pala2[100];

    printf("Sua string: ");
    scanf("%s", pala2);

    meu_strcat(pala1, pala2);
}

void meu_strcat(char *st1, char *st2){
    int i = 0, j = 0;
    while(st1[i] != '\0'){
        i++;
    }

    while(st2[j] != '\0'){
        st1[i] = st2[j];
        i++;
        j++;
    }

    st1[i] = '\0';

    printf("String nova: %s", st1);
}