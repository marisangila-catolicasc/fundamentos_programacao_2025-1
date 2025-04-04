#include <stdio.h>
int main() {
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("Você não pode ser eleitor!\n");
    } else {
        if (idade <= 65) {
            printf("Você é um eleitor obrigatério!\n");
        } else {
            printf("Você é um eleitor facultativo!\n");
        }
    }

    return 0;
}