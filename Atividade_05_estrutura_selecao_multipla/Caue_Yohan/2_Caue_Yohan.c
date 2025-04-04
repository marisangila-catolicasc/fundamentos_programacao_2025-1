#include <stdio.h>

int main(void) {
  int codigo;
  printf("|1| Acre\n");
  printf("|2| Alagoas\n");
  printf("|3| Amapá\n");
  printf("|4| Amazonas\n");
  printf("|5| Bahia\n");
  printf("|6| Ceará\n");
  printf("|7| Distrito Federal\n");
  printf("|8| Espírito Santo\n");
  printf("|9| Goiás\n");
  printf("|10| Maranhão\n");
  printf("|11| Mato Grosso\n");
  printf("|12| Mato Grosso do Sul\n");
  printf("|13| Minas Gerais\n");
  printf("|14| Pará\n");
  printf("|15| Paraíba\n");
  printf("|16| Paraná\n");
  printf("|17| Pernambuco\n");
  printf("|18| Piauí\n");
  printf("|19| Rio de Janeiro\n");
  printf("|20| Rio Grande do Norte\n");
  printf("|21| Rio Grande do Sul\n");
  printf("|22| Rondônia\n");
  printf("|23| Roraima\n");
  printf("|24| Santa Catarina\n");
  printf("|25| São Paulo\n");
  printf("|26| Sergipe\n");
  printf("|27| Tocantins\n");
  
  printf("Digite um do códigos dos estados do Brasil a cima: ");
  scanf("%d", &codigo);
    switch(codigo){
  case 1:
      printf("O estado do Acre fica na região Norte\n");
      break;
  case 2:
      printf("O estado do Alagoas fica na região Nordeste\n");
      break;
  case 3:
      printf("O estado do Amapá fica na região Norte\n");
      break;
  case 4:
      printf("O estado do Amazonas fica na região Norte\n");
      break;
  case 5:
      printf("O estado do Bahia fica na região Nordeste\n");
      break;
  case 6:
      printf("O estado do Ceará fica na região Nordeste\n");
      break;
  case 7:
      printf("O estado do Distrito Federal fica na região Centro-Oeste\n");
      break;
  case 8:
      printf("O estado do Espírito Santo fica na região Sudeste\n");
      break;
  case 9:
      printf("O estado do Goiás fica na região Centro-Oeste\n");
      break;
  case 10:
      printf("O estado do Maranhão fica na região Nordeste\n");
      break;
  case 11:
      printf("O estado do Mato Grosso fica na região Centro-Oeste\n");
      break;
  case 12:
      printf("O estado do Mato Grosso do Sul fica na região Centro-Oeste\n");
      break;
  case 13:
      printf("O estado do Minas Gerais fica na região Sudeste\n");
      break;
  case 14:
      printf("O estado do Pará fica na região Norte\n");
      break;
  case 15:
      printf("O estado do Paraíba fica na região Nordeste\n");
      break;
  case 16:
      printf("O estado do Paraná fica na região Sul\n");
      break;
  case 17:
      printf("O estado do Pernambuco fica na região Nordeste\n");
      break;
  case 18:
      printf("O estado do Piauí fica na região Nordeste\n");
      break;
  case 19:
      printf("O estado do Rio de Janeiro fica na região Sudeste\n");
      break;
  case 20:
      printf("O estado do Rio Grande do Norte fica na região Nordeste\n");
      break;
  case 21:
      printf("O estado do Rio Grande do Sul fica na região Sul\n");
      break;
  case 22:
      printf("O estado do Rondônia fica na região Norte\n");
      break;
  case 23:
      printf("O estado do Roraima fica na região Norte\n");
      break;
  case 24:
      printf("O estado do Santa Catarina fica na região Sul\n");
      break;
  case 25:
      printf("O estado do São Paulo fica na região Sudeste\n");
      break;
  case 26:
      printf("O estado do Sergipe fica na região Nordeste\n");
      break;
  case 27:
      printf("O estado do Tocantins fica na região Norte\n");
      break;
      default:
        printf("Código inválido\n");
   
  return 0;
}
}