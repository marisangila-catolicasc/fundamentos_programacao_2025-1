#include <stdio.h>

int meu_strcmp(char *str, char *str2) {
    
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] != str2[i]) {
            return 0;
        }
        
        i++;
    }

    return 1;
}

int main() {
    
    char frase1[100];
    char frase2[100];
    printf("Digite a primeira frase: ");
    fgets(frase1, sizeof(frase1), stdin);
    
    printf("Digite a segunda frase: ");
    fgets(frase2, sizeof(frase2), stdin);
    
    int result = meu_strcmp(frase1, frase2);

    if (result == 1) {
        printf("As strings são iguais!");
    } else {
        printf("As string não são iguais!");
    }

    return 0;
}
