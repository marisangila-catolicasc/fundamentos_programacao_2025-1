#include "stdio.h"
int main(void) {

  int estado;

  printf("1 - Acre\n2 - Amapá\n3 - Amazonas\n4 - Pará\n5 - Rondônia\n6 "
         "-Roraima\n7 - Tocantins\n 8 - Alagoas\n9 - Bahia\n10 - Ceará\n11 - "
         "Maranhão\n12 - Paraíba\n13 - Pernambuco\n14 - Piauí\n 15 - Rio "
         "Grande do Norte\n16 - Sergipe\n17 - Distrito Federal\n18 - Goiás\n19 "
         "- Mato Grosso\n 20 - Mato Grosso do Sul\n21 - Espírito Santo\n22 - "
         "Minas Gerais\n23 - Rio de Janeiro\n 24 - São Paulo\n25 - Paraná\n26 "
         "- Rio Grande do Sul\n27 - Santa Catarina\n");

  printf("Digite o código do estado: ");
  scanf("%d", &estado);

  switch (estado) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    printf("Região Norte\n");
    printf("Acre\n");
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
    printf("Região Nordeste\n");
    break;
  case 17:
  case 18:
  case 19:
  case 20:

    printf("Região Centro-Oeste\n");

    break;
  case 21:
  case 22:
  case 23:
  case 24:
    printf("Região Sudeste\n");
    break;
  case 25:
  case 26:
  case 27:
    printf("Região Sul\n");
    break;

    return 0;
  }
}
