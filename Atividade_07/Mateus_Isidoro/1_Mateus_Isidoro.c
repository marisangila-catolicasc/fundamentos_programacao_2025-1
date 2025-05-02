#include <stdio.h>
 int main()
 {
   int N1, N2;
   printf("Digite um numero: ");
   scanf("%d", &N1);
   printf("Digite outro numero: ");
   scanf("%d", &N2);
   while (N1 < N2)
   {
    printf("Somando... %d\n", N1);
    N1++;
   }
   while (N2 < N1)
      {
       printf("Subtraindo... %d\n", N2);
       N2++;
      }
   if (N1 == N2){
      printf("Os numeros sao iguais, N1 = %d e N2 = %d\n", N1, N2);
   }
   return 0;
 }
