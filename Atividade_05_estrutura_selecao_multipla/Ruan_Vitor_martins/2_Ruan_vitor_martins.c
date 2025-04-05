#include <stdio.h>
#include <stdlib.h>

int main() {
  int c;
  float d;

  printf("1 - Mato Grosso \n");
  printf("2 - São Paulo \n");
  printf("3 - Rio de Janeiro \n");
  printf("4 - Minas Gerais \n");
  printf("5 - Espírito Santo \n");
  printf("6 - Rio Grande do Sul \n");
  printf("7 - Santa Catarina \n");
  printf("8 - Paraná \n");
  printf("9 - Rio Grande do Norte \n");
  printf("10 - Ceará \n");
  printf("11 - Piauí \n");
  printf("12 - Maranhão \n");
  printf("13 - Paraíba \n");
  printf("14 - Pernambuco \n");
  printf("15 - Alagoas \n");
  printf("16 - Sergipe \n");
  printf("17 - Bahia \n");
  printf("18 - Goiás \n");
  printf("19 - Tocantins \n");
  printf("20 - Pará \n");
  printf("21 - Amazonas \n");
  printf("22 - Acre \n");
  printf("23 - Rondônia \n");
  printf("24 - Roraima \n");
  printf("25 - Mato Grosso do Sul \n");
  printf("26 - Distrito Federal \n");
  printf("27 - Amapá \n");
  printf("selecione um estado: ");
  scanf("%d", &c);

  switch (c) {

  case 6:
  case 7:
  case 8:
    printf("Região sul!!!");
    break;

  case 2:
  case 3:
  case 4:
  case 5:
    printf("Região sudeste!!!");
    break;

  case 1:
  case 18:
  case 25:
  case 26:
    printf("Região centro-oeste!!!");
    break;

  case 19:
  case 20:
  case 21:
  case 22:
  case 23:
  case 24:
  case 27:
    printf("Região norte!!!");
    break;

  case 9:
  case 10:
  case 11:
  case 12:
  case 13:
  case 14:
  case 15:
  case 16:
  case 17:
    printf("Região Nordeste!!!");
    break;

  default:
    printf("Opção inválida!\n");
    break;

    return 0;
  }
}
