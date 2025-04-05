#include "stdio.h"
int main()
{
char x;

  printf("[A] - AC\n");  
  printf("[B] - AL\n");
  printf("[C] - AP\n");
  printf("[D] - AM\n");
  printf("[E] - BA\n");  
  printf("[F] - CE\n");
  printf("[G] - ES\n");
  printf("[H] - GO\n");
  printf("[I] - MA\n");  
  printf("[J] - MT\n");
  printf("[K] - MS\n");
  printf("[L] - MG\n");
  printf("[M] - PA\n");  
  printf("[N] - PB\n");
  printf("[O] - PR\n");
  printf("[P] - PE\n");
  printf("[Q] - PI\n");  
  printf("[R] - RJ\n");
  printf("[S] - RN\n");
  printf("[T] - RS\n");
  printf("[U] - RO\n");  
  printf("[V] - RR\n");
  printf("[W] - SC\n");
  printf("[X] - SP\n");
  printf("[Y] - TE\n");
  printf("[Z] - TE\n"); 
  printf("Qual é o seu estado?\n");
  scanf(" %c", &x);  
  switch (x)
  {
      case 'A':
      printf("É da região Norte!\n");
      break;
    
      case 'B':
      printf("É da região Nordeste!\n");
      break;
    
      case 'C':
      printf("É da região Norte!\n");    
      break;

      case 'D':
      printf("É da região Norte!\n");
      break;

      case 'E':
      printf("É da região Nordeste!\n");
      break;

      case 'F':
      printf("É da região Nordeste!\n");    
      break;
      
      case 'G':
      printf("É da região Sudeste!\n");
      break;

      case 'H':
      printf("É da região Centro-Oeste!\n");
      break;

      case 'I':
      printf("É da região Nordeste!\n");    
      break;

      case 'J':
      printf("É da região Centro-Oeste!\n");
      break;

      case 'K':
      printf("É da região Centro-Oeste!\n");
      break;

      case 'L':
      printf("É da região Norte!\n");    
      break;
      
      case 'M':
      printf("É da região Norte!\n");
        break;

      case 'N':
      printf("É da região Nordeste!\n");
      break;

      case 'O':
      printf("É da região Sule!\n");    
      break;

      case 'P':
      printf("É da região Nordeste!\n");
      break;

      case 'Q':
      printf("É da região Nordeste!\n");
      break;

      case 'R':
      printf("É da região Sudeste!\n");    
      break;

      case 'S':
      printf("É da região Nordeste!\n");
      break;

     case 'T':
     printf("É da região Sul!\n");
     break;

     case 'U':
     printf("É da região Norte!\n");    
     break;

     case 'V':
     printf("É da região Norte!\n");
     break;

     case 'W':
     printf("É da região Sul!\n");
     break;

     case 'X':
     printf("É da região Sudeste!\n");    
     break;
      
     case 'Y':
     printf("É da região Nordeste!\n");    
     break;

     case 'Z':
     printf("É da região Norte!\n");    
     break;
      
     default:
     printf("Opção inválida, tente novamente!\n");
  }

  return 0;
}