
#include <stdio.h>

int meu_strlen(char *str) {
    int tamanho = 0;
    while (str[tamanho] != '\0') {
        tamanho++;
    }
    return tamanho;
}

int verifica_palindromo(char *str) {
    int inicio = 0;
    int fim = meu_strlen(str) - 1;

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
    char texto1[] = "radar";
    char texto2[] = "teste";

    printf("'%s' é palíndromo? %s\n", texto1, verifica_palindromo(texto1) ? "Sim" : "Não");
    printf("'%s' é palíndromo? %s\n", texto2, verifica_palindromo(texto2) ? "Sim" : "Não");

    return 0;
}
