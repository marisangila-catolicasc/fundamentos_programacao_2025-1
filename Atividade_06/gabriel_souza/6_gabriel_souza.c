#include <stdio.h>

/*
Fa ̧ca um programa que pe ̧ca ao usu ́ario um n ́umero inteiro e um incremento inteiro.
Ap ́os, mostre na tela do 0 at ́e este n ́umero, respeitando o incremento informado.
•Ex.: N ́umero = 20
•Incremento = 5
•Sa ́ıda do programa = 0, 5 ,10, 15 ,20.
*/
int main()
{

    int num, incremento;

    printf("de um numero alvo: ");
    scanf("%d", &num);
    printf("de um de incremento: ");
    scanf("%d", &incremento);

    for(int i = 0; i <= num; i += incremento)
    {
        printf("%d\n", i);
    }

    return 0;
}
