include <stdio.h>

int main() {
    float valor_investido, juros = 0.05, montante;
    int tempo;

    printf("Digite o valor investido:\n");
    scanf("%f", &valor_investido);

    printf("Digite a quantidade de anos do investimento:\n");
    scanf("%d", &tempo);

    montante = valor_investido * (1 + juros * tempo);

    printf("Após %d anos, o valor investido será R$ %.2f\n", tempo, montante);

    return 0;
}