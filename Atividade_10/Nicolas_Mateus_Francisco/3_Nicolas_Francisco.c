#include <stdio.h>

void meu_strcpy(char *str, char *str_copy) {
    
    int i = 0;
    int j = 0;
    
    while (str[i] != '\0') {
        str_copy[i] = str[i]; 
        if (str[i] == '\n') {
            str_copy[i] = '\0';
            break;
        }
        i++;
    }

}

int main() {
    
    char frase[100];
    char frase_copy[100];
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    
    meu_strcat(frase, frase_copy);

    printf("A frase copiada eh: %s\n", frase_copy);

    return 0;
}
