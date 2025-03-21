#include <stdio.h>

int main(void) {
    int idade;
    float peso;
    char tipo;

    printf("Digite a idade do seu pet: \n");
    scanf("%d",&idade);

    printf("Digite o peso do seu pet: \n");
    scanf("%f",&peso);

    printf("Digite o tipo do seu pet (c para cachorro, g para gato): \n");
    scanf(" %c",&tipo);

    if (tipo == 'C', tipo == 'c') {

        printf("Voce tem um cachorro com %d ano(s) e %.2f kg(s)\n", idade, peso);

    }

    else if (tipo == 'G' , tipo == 'g'){

        printf("Voce tem um gato com %d ano(s) e %.2f kg(s)\n", idade, peso);
    }

    else {
        printf("Tipo de pet não existe");
    }

    return 0;
}