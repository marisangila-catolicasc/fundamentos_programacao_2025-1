#include <stdio.h>

int meu_strcmp(char *str1, char *str2) {
    int i = 0;
    
    while (1) {
        if (str1[i] != str2[i]) {
            return 0;
        }
        
        if (str1[i] == '\0') {
            return 1;
        }
        
        i++;
    }
}

int main() {
    char str1[100], str2[100];
    
    printf("Digite a primeira string: ");
    scanf("%99[^\n]", str1);
    getchar();
    
    printf("Digite a segunda string: ");
    scanf("%99[^\n]", str2);
    
    if (meu_strcmp(str1, str2)) {
        printf("As strings são iguais\n");
    } else {
        printf("As strings não são iguais\n");
    }
    
    return 0;
}