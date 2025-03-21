#include <stdio.h>
int main() {
    
      int a, b, temp;
    




    
    printf ("Digite duas váriaveis (a) e (b): ") ;
    scanf ("%d %d", &a, &b);
    

    temp = a;
    
    a = b;
    
    b = temp;

    
    printf ("Agora (a) será %d e (b) é %d", a, b) ;

    return 0;
}