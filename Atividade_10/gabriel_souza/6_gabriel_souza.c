#include <stdio.h>

/*
Verificar se o n´umero ´e par ou ´ımpar:
• Crie uma fun¸c˜ao chamada verifica par impar que recebe um n´umero inteiro
e verifica se ele ´e par ou ´ımpar.
• A fun¸c˜ao deve retornar 1 se o n´umero for par e 0 se for ´ımpar
*/

int verifica_par_impar(int num){
    if (num % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}


int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (verifica_par_impar(num) == 1){
        printf("O numero %d e par.\n", num);
    }else{
        printf("O numero %d e impar.\n", num);
    }
    
    return 0; 
}

