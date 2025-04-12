int main() {
    int numero;
    int soma = 0;
    float media;

   
    for (int i = 1; i <= 8; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);
        soma += numero; 

    media = (float)soma / 8;

    printf("A média dos números informados é: %.2f\n", media);

    return 0;
}