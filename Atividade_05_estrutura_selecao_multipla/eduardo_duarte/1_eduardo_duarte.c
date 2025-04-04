#include <stdio.h>

int main()
{ 
    int codigo;

    printf("informe o codigo da mercadoria: \n [1254] = sanduiche de presunto");
    printf("informe o codigo da mercadoria: \n [6698] = churros");
    printf("informe o codigo da mercadoria: \n [7114] = suco de laranja que parece de limao que tem gosto de tamarindo\n");
    scanf("%d", &codigo);
    switch (codigo)
    {
        case 1254:
        printf ("sanduiche de presunto: r$8.0 \n");
        break;
        case 6688:
        printf ("churros: r$3.0 \n");
        break;
        case 7114:
        printf("suco de laranja que parece de limao que tem gosto de tamarindo: r$5.0 \n");
        break;

    }
        return 0;
}