int main() {
    float a, b, resultado;
    char operacao;
    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);
    printf("Digite a operacao desejada (+, -, /, *): ");
    scanf(" %c", &operacao);

    switch (operacao){
        case '+':
            resultado = a + b;
            printf("%.2f + %.2f = %.2f", a, b, resultado);
            break;
        case '-':
            resultado = a - b;
            printf("%.2f - %.2f = %.2f", a, b, resultado);
            break;
        case '*':
            resultado = a * b;
            printf("%.2f * %.2f = %.2f", a, b, resultado);
            break;
        case '/':
            if (b != 0 && b > 0){
                resultado = a / b;
                printf("%.2f / %.2f = %.2f", a, b, resultado);
            }
            else{
                printf("Nao é possivel dividir por zero.");
            }
            break;    
        default:
            printf("Operacao inválida");
            break;
    }
    return 0; 
}