int main() {
    int numero, maior;

    printf("Digite o 1º número: ");
    scanf("%d", &numero);
    maior = numero; 
    
    for (int i = 2; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }
    }

    printf("O maior número informado é: %d\n", maior);

    return 0; 
}