#include <stdio.h>
int main()

{
    int estado;
    
printf("digite qual seu estado\n ");

printf("1 Acre\n 2 Alagoas\n 3 Amapa\n 4 Amazonas \n 5 Bahia\n 6 Ceara\n 7 Distrito Federal\n 8 Espírito Santo\n 9 Goias\n 10 Maranhão\n 11 Mato Grosso\n 12 Mato Grosso do Sul\n 13 Minas Gerais 14 Para 15 Paraiba\n 16 Parana\n 17 Pernambuco\n 18 Piaui\n 19 Rio de Janeiro\n 20 Rio Grande do Norte\n 21 Rio Grande do Sul\n 22 Rondonia\n 23 Roraima\n 24 Santa Catarina\n 25 São Paulo\n 26 Sergipe\n 27 Tocantins\n");
scanf("%d",&estado);

    switch(estado)
    {
        case 1:
        case 3:
        case 14:
        case 22:
        case 23:
        case 27:
        case 4:
        
        printf("o estado se localiza no norte");
         break;
         
          case 2:
          case 5:
          case 6:
          case 10:
          case 15:
          case 17:
          case 18:
          case 20:
          case 26:
         
           
           printf("o estado se localiza no nordeste");
           break;
           
           case 16:
           case 21:
           case 24:
          
           
           printf("o estado se localiza no sul");
           break;
           
           case 7:
           case 9:
           case 11:
           case 12:
           printf("o estado se localiza no centro oeste");
           break;
           
           case 8:
           case 13:
           case 25:
           case 19:
           printf("estado se localiza no sudeste");
          
        
         default:
         printf("opcao invalida,digite novamente");
         break;
    }
   return 0;
}

