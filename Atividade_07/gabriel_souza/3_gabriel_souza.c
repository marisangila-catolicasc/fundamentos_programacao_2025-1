#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Fa¸ca um programa que pe¸ca para o usu´ario digitar um n´umero. Em seguida, o
computador deve gerar um n´umero randˆomico at´e que o n´umero randˆomico gerado
seja igual n´umero informado pelo usu´ario. Use os seguinte comandos:
• srand(time(NULL)) e rand()
• N˜ao esque¸ca incluir as bibliotecas: #include <stdlib.h> e #include <time.h>
• Para esta quest˜ao vocˆe precisar´a de um pouco de pesquisa para saber como
utilizar o rand().
*/
int main() {
    int num, random;

    printf("Digite um numero: ");
    scanf("%d", &num);
    srand(time(NULL));
    do{
        random = rand() % (num > 100 ? num+1 : 100);
        printf("Numero gerado: %d\n", random);
        if(random == num){
            printf("Numero encontrado!\n");
        }
    }while(random != num);
    printf("Fim do programa!\n");
    printf("Numero gerado: %d\n", random);
    printf("Numero digitado: %d\n", num);
   
    return 0; 
}

