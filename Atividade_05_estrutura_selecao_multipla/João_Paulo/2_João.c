#include <stdio.h>

int main() {
  int estado;

  printf("[1] - Acre\n");
  printf("[2] - Amapá\n");
  printf("[3] - Amazonas\n");
  printf("[4] - Pará\n");
  printf("[5] - Rondônia\n");
  printf("[6] - Roraima\n");
  printf("[7] - Tocantins\n");
  printf("[8] - Paraná\n");
  printf("[9] - Rio Grande do Sul\n");
  printf("[10] - Santa Catarina\n");
  printf("[11] - Alagoas\n");
  printf("[12] - Bahia\n");
  printf("[13] - Ceará\n");
  printf("[14] - Maranhão\n");
  printf("[15] - Paraíba\n");
  printf("[16] - Pernambuco\n");
  printf("[17] - Piauí\n");
  printf("[18] - Rio Grande do Norte\n");
  printf("[19] - Sergipe\n");
  printf("[20] - Distrito Federal\n");
  printf("[21] - Goiás\n");
  printf("[22] - Mato Grosso\n");
  printf("[23] - Mato Grosso do Sul\n");
  printf("[24] - Espírito Santo\n");
  printf("[25] - Minas Gerais\n");
  printf("[26] - Rio de Janeiro\n");
  printf("[27] - São Paulo\n");

  printf("Digite o estado desejado: ");
  scanf("%d", &estado);

  switch (estado) {
  case 1: case 2: case 3:
  case 4: case 5: case 6: case 7:
    printf(" Norte\n");
    break;
  case 8: case 9: case 10:
    printf(" Sul\n");
    break;
  case 11: case 12: case 13: case 14:
  case 15: case 16: case 17: case 18: case 19:
    printf(" Nordeste\n");
    break;
  case 20: case 21: case 22: case 23:
    printf(" Centro-Oeste\n");
    break;
  case 24:  case 25: case 26: case 27:
    printf(" Sudeste\n");
    break;
  }
  return 0;
}
