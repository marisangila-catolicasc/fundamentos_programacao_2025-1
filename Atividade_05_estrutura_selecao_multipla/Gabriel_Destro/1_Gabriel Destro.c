#include <stdio.h>
int main(){
 
int codigo;
 
printf ("\n escolha um item pelo código do próprio:");
 
scanf ("%i" , &codigo);
 
    printf(" 1254 \n");
    printf(" 5698 \n");
    printf(" 7114 \n");
 
switch (codigo)
{
    case 1254:
        printf ("sanduíche de presunto - R$8.00");
 break;
    case 5698:
        printf ("churros - R$3.50");
 break;
    case 7114:
        printf ("suco de laranja - R$5.00");
break;
    default:
        printf ("opção invalida.");
break;    
}  
    return 0;
}