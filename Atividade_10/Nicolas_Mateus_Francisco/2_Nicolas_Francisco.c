#include <stdio.h>

void meu_strcat(char *str, char *str2) {
    
    int i = 0;
    int j = 0;
    
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
    
    str[i] = ' ';
    i++;

    
    while (str2[j] != '\0') {
        
        if (str2[j] == '\n') {
            j++;
            break;
        }
        str[i] = str2[j];
        j++;
        i++;
    }

    str[i] = '\0';
    
}

int main() {
    
    char frase1[250];
    char frase2[100];
    printf("Digite a primeira frase: ");
    fgets(frase1, sizeof(frase1), stdin);
    
    printf("Digite a segunda frase: ");
    fgets(frase2, sizeof(frase2), stdin);
    
    meu_strcat(frase1, frase2);

    printf("O resultado das string concatenadas eh: %s\n", frase1);

    return 0;
}
