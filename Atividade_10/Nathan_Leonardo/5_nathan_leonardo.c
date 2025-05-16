#include <stdio.h>

int verifica_palindromo(const char *str) {
    int inicio = 0;
    int fim = 0;

    while (str[fim] != '\0') {
        fim++;
    }
    fim--; 

    while (inicio < fim) {
        if (str[inicio] != str[fim]) {
            return 0; 
        }
        inicio++;
        fim--;
    }

    return 1; 
}

int main() {
    const char *s1 = "arara";
    if(verifica_palindromo(s1)){

        printf("%s é palíndromo %d\n", s1, verifica_palindromo(s1)); 
    } else {

        printf("%s não é um palíndromo.\n", s1);
    }

    return 0;
}
