#include <stdio.h>
int main(){
int N1, N2, N3;

printf("Informe o primeiro numero:");
scanf("%d", &N1);
  
printf("Informe o segundo numero:");
scanf("%d", &N2);
  
printf("Informe o terceiro numero:");
scanf("%d", &N3);
  
if(N1 > N2 && N1 > N3){
printf("O maior numero eh: %d", N1);
}else if(N2 > N1 && N2 > N3){
printf("O maior numero eh: %d", N2);
}else if(N3 > N1 && N3 > N2){
printf("O maior numero eh: %d", N3);
}
return 0;
}
