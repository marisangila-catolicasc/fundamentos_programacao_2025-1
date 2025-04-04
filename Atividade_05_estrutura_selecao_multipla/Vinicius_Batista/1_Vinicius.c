#include <stdio.h>

int main(){
    
    int codigo;
    printf("Digite o codigo do item\n");
    scanf("%d", &codigo);
    switch (codigo){
        case 1254:
        printf("Sanduiche de presunto - RS8.00");
        break;
        case 5698:
        printf("Churros - RS3.50");
        break;
        case 7114:
        printf("Suco de laranja que parece de limao mas tem gosto de tamarindo - RS5.00");
        break;
        default:
        printf("Codigo nao encontrado.");
        break;
        
    }
    
    
    return 0;
}