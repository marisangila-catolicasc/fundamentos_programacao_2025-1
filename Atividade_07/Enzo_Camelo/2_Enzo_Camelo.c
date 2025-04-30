
#include <stdio.h>

int main() {
    int opcao, n1, n2;
    
    while (1) {
        printf("Escolha uma opção\n");
        printf("-----------------\n");
        printf("[1] Soma\n");
        printf("[2] Subtração\n");
        printf("[3] Multiplicação\n");
        printf("[4] Divisão\n");
        printf("[5] Sair\n");
        printf("-----------------\n");
        
        scanf("%d", &opcao);
        
        if (opcao == 5) {
            printf("Finalizando o programa...\n");
            break;  
        }
        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: \n");
            scanf("%d", &n1);
            
            printf("Digite o segundo numero: \n");
            scanf("%d", &n2);
            
            switch (opcao) {
                case 1:
                    printf("A soma é: %d\n", n1 + n2);
                    break;
                
                case 2:
                    printf("A subtração é: %d\n", n1 - n2);
                    break;
                
                case 3:
                    printf("A multiplicação é: %d\n", n1 * n2);
                    break;
                
                case 4:

                    if (n2 != 0) {
                        printf("A divisão é: %d\n", n1 / n2);
                    } else {
                        printf("Não é possível dividir por 0!\n");
                    }
                    break;
            }
        } else {
            printf("Opção inválida! Tente novamente.\n");
        }
    }

    return 0; 
}
