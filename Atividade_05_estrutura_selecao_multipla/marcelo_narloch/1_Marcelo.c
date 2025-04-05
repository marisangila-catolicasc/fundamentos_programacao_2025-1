#include <stdio.h>
int main()
{
    int codigo;


    printf("Digite o codigo de um produto:");
    scanf("%d",&codigo);

    switch(codigo)
    {
    case 1254:
        printf("sanduiche de presunto- R$8,00");
        break;

    case 5698:
        printf("Churros R$3,50");
        break;
        
    case 7114:
        printf("suco de laranja que parece de limão mas tem gosto de tamarindo -R$5,00");
        break;

    default:
        printf("opcao invalida,digite outra opcao");
        break;
    }
    
return 0;
}
