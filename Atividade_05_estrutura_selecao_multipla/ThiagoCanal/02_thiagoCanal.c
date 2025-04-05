#include <stdio.h>

int main(void){
  int n;
    printf("1 - RS\n");
    printf("2 - SC\n");
    printf("3 - PR\n");
    printf("4 - SP\n");
    printf("5 - RJ\n");
    printf("6 - ES\n");
    printf("7 - MG\n");
    printf("8 - MS\n");
    printf("9 - GO\n");
    printf("10 - DF\n");
    printf("11 - MT\n");
    printf("12 - BA\n");
    printf("13 - SE\n");
    printf("14 - AL\n");
    printf("15 - PE\n");
    printf("16 - PB\n");
    printf("17 - RN\n");
    printf("18 - CE\n");
    printf("19 - PI\n");
    printf("20 - MA\n");
    printf("21 - TO\n");
    printf("22 - PA\n");
    printf("23 - AP\n");
    printf("24 - AM\n");
    printf("25 - RR\n");
    printf("26 - RO\n");
    printf("27 - AC\n");

  printf("Digite um número: ");
  scanf("%d", &n);
   
    switch(n){
      case 1:
      case 2:
      case 3:
        printf("Regiao Sul");
        break;
      case 4:
      case 5:
      case 6:
      case 7:
        printf("Regiao Sudeste");
        break;
      case 8:
      case 9:
      case 10:
      case 11:
        printf("Regiao Centro-Oeste");
        break;
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
        printf("Regiao Nordeste");
        break;
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
      case 27:
        printf("Regiao Norte");
    }
  return 0;
}