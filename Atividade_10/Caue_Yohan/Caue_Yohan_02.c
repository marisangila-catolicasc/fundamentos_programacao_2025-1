#include <stdio.h>

int meu_strcat(char *strA, char *strB); 
    int main(void){
        char strA[100];
        printf("Digite a primeira palavra: ");
        scanf("%s", strA);
        char strB[100];
        printf("Digite a segunda palavra: ");
        scanf("%s", strB);
        meu_strcat(strA, strB);
    }

   int meu_strcat(char *strA, char *strB){
    int i = 0, j = 0;
    while(strA[i] != '\0'){
        i++;
    }
    while (strB[j] != '\0'){
        strA[i] = strB[j];
        i++;
        j++;
    }
    strA[i] = '\0';    
    printf("A junção das palavras é: %s\n", strA);
}