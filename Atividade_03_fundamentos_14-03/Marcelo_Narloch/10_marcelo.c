#include <stdio.h>
int main(void) {
 float valor,mais;
printf("informe um valor para investir:");
scanf("%f",&valor);
     
mais= valor * 0.05;
valor=valor+(mais *3);
printf("o valor final apos 3 anos e deh:%f.2\n" , valor);

return 0;