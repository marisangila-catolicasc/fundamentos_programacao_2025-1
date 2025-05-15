#include <stdio.h>

int meu_strcmp(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) return 0;
        str1++;
        str2++;
    }
    return *str1 == *str2;
}

int main() {
    printf("%d\n", meu_strcmp("quero cafe", "quero cafe")); 
    printf("%d\n", meu_strcmp("dorivaldo", "carlos"));    
    return 0;
}
