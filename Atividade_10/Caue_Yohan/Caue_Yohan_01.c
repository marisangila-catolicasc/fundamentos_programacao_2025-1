#include <stdio.h>

int meu_strlen(char *str);
    int i = 0;
    
int main(void){
    char texto[100];
    printf("Digite uma palavra: ");
    scanf("%s", texto);

    int comprimento = meu_strlen(texto);
    printf("O comprimento da palavra é: %d\n", comprimento);
}

  int meu_strlen(char *str){
     int i = 0, letra = 0;
     
     while(str[i] != '\0'){
        letra++;
        i++;
    }
return letra;
}
