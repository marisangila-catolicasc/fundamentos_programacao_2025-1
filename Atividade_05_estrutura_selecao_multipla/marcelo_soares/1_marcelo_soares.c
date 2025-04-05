#include <stdio.h>
int main() {
    int codigo;
    
    printf("digite o código do produto: ");    
    scanf("%d", &codigo);
    
    printf("o produto escolhido foi: ");
    
    switch (codigo) {   
        case 1254:
            printf("sanduiche de presunto R$ 8,00\n");
        break;
        case 5698:
            printf("churros R$ 5,00\n");
        break;
        case 7114:
            printf("suco R$ 5,00\n");
        break; 
    }

    return 0;
}