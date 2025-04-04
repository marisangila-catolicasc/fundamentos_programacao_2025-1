#include <stdio.h>

int main(){
    
   int numero;
   printf("Digite o numero equivalente ao seu estado\n");
   printf("[1]Acre AC\n [2]Alagoas AL\n [3]Amapá AP\n [4]Amazonas AM\n [5]Bahia BA\n [6]Ceará CE\n [7]Espírito Santo ES\n [8]Goiás GO\n [9]Maranhão MA\n [10]Mato Grosso MT\n [11]Mato Grosso do Sul MS\n [12]Minas Gerais MG\n [13]Pará PA\n [14]Paraíba PB\n [15]Paraná PR\n [16]Pernambuco PE\n [17]Piauí PI\n [18]Rio de Janeiro RJ\n [19]Rio Grande do Norte RN\n [20]Rio Grande do Sul RS\n [21]Rondônia RO\n [22]Roraima RR\n [23]Santa Catarina SC\n [24]São Paulo SP\n [25]Sergipe SE\n [26]Tocantins TO\n");
   scanf("%d", &numero);
   switch(numero){
       case 23:
       case 15:
       case 20:
       printf("\nEh um estado da regiao sul");
       break;
       case 24:
       case 18:
       case 7:
       case 12:
       printf("\nEh um estado da regiao sudeste");
       break;
       case 8:
       case 10:
       case 11:
       printf("\nEh da regiao centro oeste");
       break;
       case 9:
       case 17:
       case 5:
       case 6:
       case 19:
       case 14:
       case 16:
       case 2:
       case 25:
       printf("\nEh um estado da regiao nordeste");
       break;
       case 26:
       case 13:
       case 3:
       case 22:
       case 4:
       case 21:
       case 1:
       printf("\nEh um estado da regiao norte");
       break;
       default: 
       printf("Numero nao reconhecido");
       break;
       
       
   }
    return 0;
}