#include <stdio.h>

int verifica_primo(int n){
    int i = 2;
    while (i < 10000 && i < n){
        if (n % i == 0){
            return 0;
        }
        i++;
    }
    return 1;
}

int main(){
    int n, eh_primo;

    printf("Digite um numero:\n");
    scanf("%d", &n);

    eh_primo = verifica_primo(n);

    if (eh_primo == 1){
        printf("\nEh primo!\n");
    } else {
        printf("\nNão eh primo.\n");
    }
    
    return 0;
}