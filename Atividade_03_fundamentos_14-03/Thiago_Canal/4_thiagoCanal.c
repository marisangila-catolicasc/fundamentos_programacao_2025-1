#include <stdio.h>
#include <string.h>

int main(void){
    int idade;
    float peso;
    char tipo[10];

    printf("Quantos kgs tem seu pet? ");
    scanf("%f", &peso);
    printf("Quantos anos o seu pet tem? ");
    scanf("%d", &idade);
    printf("Seu pet e um gato(g) ou um cachorro(c)? ");
    scanf("%s", tipo);

    printf("Seu pet tem %.2f kgs\n", peso);
    printf("Seu pet tem %d anos\n", idade);
    if(strcmp(tipo, "c") == 0){
        printf("Seu pet e um cachorro.");
    }else if (strcmp(tipo, "g") == 0){
        printf("Seu pet e um gato.");
    }else{
        printf("Valor invalido.");
    }
    return 0;
}