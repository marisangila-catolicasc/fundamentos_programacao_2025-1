#include <stdio.h>

int main() {
  int estado;
  
  printf(" [1] Acre\n [2] Alagoas \n [3] Amazonas \n [4] Bahia \n [5] Ceará \n [6] Espírito Santo \n [7] Goiás \n [8] Maranhão \n [9] Mato Grosso \n [10] Mato Grosso do Sul \n [11] Minas Gerais \n [12] Pará \n [13] Paraíba \n [14] Paraná \n [15] Pernambuco \n [16] Piauí \n [17] Rio de Janeiro \n [18] Rio Grande do Norte \n [19] Rio Grande do Sul \n [20] Rondônia \n [21] Roraima \n [22] Santa Catarina \n [23] São Paulo \n [24] Sergipe \n [25] Tocantins \n [26] Distrito Federal \n [27] Amapá \n Digite o código de um estado:");
  scanf("%d", &estado);
  
  switch (estado)
  {
    case 1:
    case 3:
    case 27:
    case 20:
    case 21:
    case 25:
    case 12:
    printf("Esse estado é da região Norte");
    break;
    
    case 22:
    case 19:
    case 14:
    printf("Esse estado é da região Sul");
    break;
    
    case 17:
    case 11:
    case 6:
    case 23:
    printf("Esse estado é da região Sudeste");
    break;
    
    case 8:
    case 16:
    case 5:
    case 18:
    case 13:
    case 15:
    case 2:
    case 24:
    case 4:
    printf("Esse estado é da região Nordeste");
    break;
    
    case 10:
    case 9:
    case 7:
    case 26:
    printf("Esse estado é da região Centro-Oeste");
    break;

  }
}