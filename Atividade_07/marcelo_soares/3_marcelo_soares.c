#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    
    /*
3. Faca um programa que peca para o usuario digitar um numero. Em seguida, o
computador deve gerar um numero randomico ate que o numero randomico gerado
seja igual numero informado pelo usuario. Use os seguinte comandos:

• srand(time(NULL)) e rand()
• Nao esqueca incluir as bibliotecas: #include <stdlib.h> e #include <time.h>
• Para esta questao voce precisara de um pouco de pesquisa para saber como
utilizar o rand().
    */    

    int num, num2;
    printf("Digite um numero: ");
    scanf("%d", &num);
    srand(time(NULL));
    num2 = rand() % 100;
    while(num != num2){
        num2 = rand() % 100 +1;
        printf("Tentativa: %d\n", num2);
    }
    printf("Numero gerado: %d\n", num2);
    printf("Numero digitado: %d\n", num);
    printf("Numero gerado igual ao numero digitado\n");
    

   
    return 0;
}
