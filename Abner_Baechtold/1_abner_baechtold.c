#include<stdio.h>
int main(){
    int codigo;
    printf("Código descriçao e valor\n");
    printf(" 1254  Sanduíche de presunto - R$8,00\n");
    printf(" 5698  Churros - R$3,50\n");
    printf(" 7114  Suco de laranja que parece de limão mas tem gosto de tamarindo - R$5,00\n");
    printf("Digite o código do produto: ");
    scanf("%d", &codigo);
    switch (codigo)
    {
        case 1254: 
            printf("Sanduíche de presunto - R$8,00");
            break;
        case 5698: 
            printf("Churros - R$3,50");
            break;
        case 7114: 
            printf("Suco de laranja que parece de limão mas tem gosto de tamarindo - R$5,00");
            break;
        default:
            printf("Código invalido!");
            break;
        }  

    return 0;
}