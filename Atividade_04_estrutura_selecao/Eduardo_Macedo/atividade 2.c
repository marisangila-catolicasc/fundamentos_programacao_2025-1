    #include <stdio.h>

int main() {
    int numero;
    
    printf("Insira um número: ");
    scanf("%d", &numero);
    
    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }
    return 0;
}
    
