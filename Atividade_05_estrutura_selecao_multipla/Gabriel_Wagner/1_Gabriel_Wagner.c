#include <stdio.h>
int main() {
    int cod;
    printf ("qual o produto que vc quer \n");
    printf ("cod:1254    sanduiche  = R$ 8,00\n ");
    printf ("cod:5698    churros  = R$ 3,50 \n");
    printf ("cod:7114    suco de laranja  = R$ 3,50 \n");
    scanf ("%d", &cod);
    switch (cod)
    {
    case 1254:
        printf ("sanduiche");
        break;
    
    case 5698: 
    printf ("churros");
        break;

    case 7114:
    printf ("suco de laranja");
        break;

        default: 
        printf("coloque um cod valido");
    }
    

}
