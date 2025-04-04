#include <stdio.h>
/*
Fa¸ca um programa que solicite ao usu´ario o c´odigo de um produto e informe sua
descri¸c˜ao e valor, de acordo com a tabela a seguir:
C´odigo Descri¸c˜ao e Valor
1254 Sandu´ıche de presunto - R$8,00
5698 Churros - R$3,50
7114 Suco de laranja que parece de lim˜ao mas tem
gosto de tamarindo - R$5,00

*/
int main() {
    int codigo;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    switch (codigo){
        case 1254:
            printf("Sanduiche de presunto - R$8,00");
            break;
        case 5698:
            printf("Churros - R$3,50");
            break;
        case 7114:
            printf("Suco de laranja que parece de limao mas tem gosto de tamarindo - R$5,00");
            break;
        default:
            printf("Codigo invalido");
            break;
    }
        
   
    return 0; 
}
