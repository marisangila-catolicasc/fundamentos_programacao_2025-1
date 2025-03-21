#include <stdio.h>
int main() {
   
  int a, b, temp;
    printf("Me de duas váriaveis(A e B): ");
    scanf("%d %d", &a, &b);
    
    temp = a;
    a = b;
    b = temp;
    printf("Agora A é %d e B é %d", a, b);
 
    return 0;
}
