#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int v_impar_par(int num){
    int verificador = 0;
    if(num%2 == 0){
        verificador = 1;
    }else{
        verificador = 0;
    }
    return verificador;
};

int main(void) {
  int num;
  printf("Digite um numero: ");
  scanf("%d", &num);
  if(v_impar_par(num) == 1){     
      printf("\n1 | O numero eh par");
  }else{ 
      printf("\n0 |O numero eh impar");
  }
return 0;
}