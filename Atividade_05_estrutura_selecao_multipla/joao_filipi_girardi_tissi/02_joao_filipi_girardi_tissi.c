#include <stdio.h>

int main() {
  int estado;

  printf("O Brasil possui 26 estados e o Distrito Federal, sendo eles, em ordem alfabética: \n 1 - Acre (AC) \n 2 - Alagoas (AL) \n 3 - Amapá (AP) \n 4 - Amazonas (AM) \n 5 - Bahia (BA) \n 6 - Ceará (CE) \n 7 - Espírito Santo (ES) \n 8 - Goiás (GO) \n 9 - Maranhão (MA) \n 10 - Mato Grosso (MT) \n 11 - Mato Grosso do Sul (MS) \n 12 - Minas Gerais (MG) \n 13 - Pará (PA) \n 14 - Paraíba (PB) \n 15 - Paraná (PR) \n 16 - Pernambuco (PE) \n 17 - Piauí (PI) \n 18 - Rio de Janeiro (RJ) \n 19 - Rio Grande do Norte (RN) \n 20 - Rio Grande do Sul (RS) \n 21 - Rondônia (RO) \n 22 - Roraima (RR) \n 23 - Santa Catarina (SC) \n 24 - São Paulo (SP) \n 25 - Sergipe (SE) \n 26 - Tocantins (TO) \n 27 - Distrito Federal (DF) \n\n Digite o número do estado que você deseja saber a região: \n");
  scanf("%d", &estado);
  switch (estado)
    {
      case 15:
      case 20:
      case 23:
        {
          printf("O estado escolhido pertence a região Sul. \n");
        }
        break;

      case 7:
      case 12:
      case 18:
      case 24:
        {
          printf("O estado escolhido pertence a região Sudeste. \n");
        }
        break;

      case 8:
      case 10:
      case 11:
      case 27:
        {
          printf("O estado escolhido pertence a região Centro-Oeste. \n");
        }
        break;

      case 1:
      case 3:
      case 4:
      case 13:
      case 21:
      case 22:
      case 26:
        {
          printf("O estado escolhido pertence a região Norte. \n");
        }
        break;
      
      case 2:
      case 5:
      case 6:
      case 9:
      case 14:
      case 16:
      case 17:
      case 19:
      case 25:
        {
          printf("O estado escolhido pertence a região Nordeste. \n");
        }
        break;
      default:
        {
          printf("O número escolhido não corresponde a nenhum estado. \n");
        }
    }
  return 0;
}