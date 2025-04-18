#include <stdio.h>

int main() {
int num;
    
  printf("Estes são os quadrados de todos os números inteiros de 15 a 200:\n");
    
    for(num = 15; num <= 200; num++) {
  printf("%d² = %d\n", num, num * num);
    }
    
return 0;
}