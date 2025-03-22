#include <stdio.h>

int main() {
    
    printf("Qual idade do seu pet?\n");
    int idade;
    scanf("%d", &idade);
    
    printf("Qual o peso do seu pet?\n");
    float peso;
    scanf("%f", &peso);
    
    printf("Qual o tipo do seu pet? c para cachorro e g para gato\n");
    char tipo;
    scanf(" %c", &tipo);
    
    printf("meu pet tem %d anos, pesa %f kg e é um %c", idade, peso, tipo);
    
    return 0;
}
