#include <stdio.h>

char meu_strcpy(char *strOriginal, char *strCopia){
    int i = 0;
      while (strCopia[i] != '\0') {
        strOriginal[i] = strCopia[i];
        i++;
    }
    strOriginal[i] = '\0';

 
    return *strOriginal;
}
int main(){
    char strOriginal[100];
    char strCopia[100];
    printf("Digite uma palavra: %s\n", strOriginal);
    scanf("%s", strCopia);

    meu_strcpy(strOriginal, strCopia);

    printf("A palavra copiada é: %s\n", strCopia);

    return 0;
}