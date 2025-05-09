#include <stdio.h>

int main() {
    int m[2][3];
    int soma = 0;

    for (int linha = 0; linha < 2; linha++) {
    for (int coluna = 0; coluna < 3; coluna++) {
        
        
        
    printf("Digite o valor na posição [%d][%d]: ", linha, coluna);
    scanf("%d", &m[linha][coluna]);
            
    
        soma += m[linha][coluna];
        }
    }

    printf("A soma dos elementos é: %d\n", soma);
    return 0;
}
