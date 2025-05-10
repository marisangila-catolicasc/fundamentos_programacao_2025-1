#include <stdio.h>

/*
Verificar se o n´umero ´e primo:
• Crie uma fun¸c˜ao chamada verifica primo que recebe um n´umero inteiro e
verifica se ele ´e um n´umero primo.
• A fun¸c˜ao deve retornar 1 se o n´umero for primo e 0 se n˜ao for
*/

int verifica_primo(int num){
    if(num <= 1){
        return 0;
    }
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(verifica_primo(num)){
        printf("O numero %d e primo\n", num);
    }else{
        printf("O numero %d nao e primo\n", num);
    }
    
    return 0; 
}

