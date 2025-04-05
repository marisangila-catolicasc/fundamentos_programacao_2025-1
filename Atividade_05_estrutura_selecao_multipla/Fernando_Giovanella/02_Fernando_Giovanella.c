#include <stdio.h>

int main(){

  int estados_br;

  printf("Informe um codigo para descobrir em qual regiao o estado esta localizado! \n");
  printf("[1] - Rio Grande do Sul \n");
  printf("[2] - Santa Catarina \n");
  printf("[3] - Paraná \n");
  printf("[4] - São Paulo \n");
  printf("[5] - Rio de Janeiro \n");
  printf("[6] - Espirito Santo \n");
  printf("[7] - Minas Gerais \n");
  printf("[8] - Bahia \n");
  printf("[9] - Sergipe \n");
  printf("[10] - Alagoas \n");
  printf("[11] - Pernambuco \n");
  printf("[12] - Paraiba \n");
  printf("[13] - Rio Grande do Norte \n");
  printf("[14] - Ceara \n");
  printf("[15] - Piaui \n");
  printf("[16] - Maranhao \n");
  printf("[17] - Tocantins \n");
  printf("[18] - Amapa \n");
  printf("[19] - Para \n");
  printf("[20] - Roraima \n");
  printf("[21] - Amazonas \n");
  printf("[22] - Acre \n");
  printf("[23] - Rondonia \n");
  printf("[24] - Mato Grosso \n");
  printf("[25] - Goias \n");
  printf("[26] - Mato Grosso do Sul \n");
  printf("[27] - Distrito Federal \n");
  scanf("%d", &estados_br);

  switch (estados_br){
    case 1:
    case 2:
    case 3:
      printf("Esse estado esta localizado na regiao SUL!");
    break;

    case 4:
    case 5:
    case 6:
    case 7:
      printf("Esse estado esta localizado na regiao SUDESTE!");
    break;

    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
      printf("Esse estado esta localizado na regiao NORDESTE!");
    break;

    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
      printf("Esse estado esta localizado na regiao NORTE!");
    break;

    case 24:
    case 25:
    case 26:
    case 27:
      printf("Esse estado esta localizado na regiao CENTRO-OESTE!");
    break;

    default:
      printf("Numero inexistente na lista, informe um numero valido.");
    }
  
  return 0;
}