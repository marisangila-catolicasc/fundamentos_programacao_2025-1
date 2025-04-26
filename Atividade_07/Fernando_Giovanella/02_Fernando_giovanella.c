#include <stdio.h>

int main() {
    int op;
    float n1, n2;

    do {
        printf("\n1-Somar\n2-Subtrair\n3-Multiplicar\n4-Dividir\n5-Sair: ");
        scanf("%d", &op);

        if (op == 5)
            break;

        if (op >= 1 && op <= 4) {
            printf("Digite dois numeros: ");
            scanf("%f", &n1);
            scanf("%f", &n2);
        }

        switch (op) {
            case 1: printf("Resultado: %.2f\n", n1 + n2);
                break;
            
            case 2: printf("Resultado: %.2f\n", n1 - n2);
                break;
            
            case 3: printf("Resultado: %.2f\n", n1 * n2);
                break;
            
            case 4: if (n2 != 0) printf("Resultado: %.2f\n", n1 / n2);
                    else printf("Erro: divisao por zero.\n");
                break;
            
            default: printf("Opcao invalida.\n");
        }
    }
        while (1);

    return 0;
}