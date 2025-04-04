#include <stdio.h>

int main ()
{ 
    int estado;

    printf("informe seu estado: \n");
    printf("[1] = RS \n");
    printf("[2] = SC \n");
    printf("[3] = PR \n");
    printf("[4] = SP \n");
    printf("[5] = RJ \n");
    printf("[6] = ES \n");
    printf("[7] = MG \n");
    printf("[8] = MS \n");
    printf("[9] = GO \n");
    printf("[10] = MT \n");
    printf("[11] = RO \n");
    printf("[12] = AC \n");
    printf("[13] = AM \n");
    printf("[14] = RR \n");
    printf("[15] = PA \n");
    printf("[16] = AP \n");
    printf("[17] = TO \n");
    printf("[18] = MA \n");
    printf("[19] = PI \n");
    printf("[20] = CE \n");
    printf("[21] = AL \n");
    printf("[22] = BA \n");
    printf("[23] = RN \n");
    printf("[24] = PB \n");
    printf("[25] = PE \n");
    printf("[26] = SE \n");
    printf("[27] = DF \n");
    scanf("%d", &estado);

    switch (estado)
    {  case 1:
       case 2:
       case 3:
       printf("voce esta no sul do brasil: \n");
        break;

         case 4:
         case 5:
         case 6:
         case 7:
         printf("voce esta no sudeste do brasil: \n");
         break;

         case 8:
         case 9:
         case 10:
         case 27:
         printf("voce esta no centro-oeste do brasil: \n");
         break;

         case 11:
         case 12:
         case 13:
         case 14: 
         case 15:
         case 16:
         case 17:
         printf("voce esta no norte do brasil: \n");
         break;

         case 18:
         case 19:
         case 20:
         case 21:
         case 22:
         case 23:
         case 24:
         case 25:
         case 26:
         printf("voce esta no nordeste do brasil: \n");
         break;

         default:
         printf("digite um estado valido: \n");
         


        



         



    }

     






    return 0;
}