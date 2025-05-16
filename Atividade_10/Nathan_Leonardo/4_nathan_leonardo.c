#include <stdio.h>

int meu_strcmp(const char *str1, const char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; 
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    const char *a = "teste";
    const char *b = "teste";
   
    if (meu_strcmp(a, b)) {
        printf("Iguais.\n");
    } else {
        printf("Diferentes.\n");
    }
    return 0;
}
