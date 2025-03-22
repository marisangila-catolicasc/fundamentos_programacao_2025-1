#include <stdio.h>

int main(void) {
    int idadePet;
    int pesoPet;
    char tipoPet;
    
    printf("Digite a idade do seu pet: ");
    scanf("%d", &idadePet);
    printf("Agora, informe o peso do seu pet (em kg): ");
    scanf("%d", &pesoPet);
    printf("Qual é o tipo do seu pet? (C para cachorro, G para gato)\n");
    scanf(" %c", &tipoPet);     
    printf("Informações do seu pet:\nIdade: %d anos\nPeso: %d kg\nTipo: %c\n", idadePet, pesoPet, tipoPet);
    
    return 0;
}