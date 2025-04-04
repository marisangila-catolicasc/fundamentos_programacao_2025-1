#include <stdio.h>

int main() {
    int X, Y, Z;

printf("Digite o primeiro lado: ");
scanf("%d", &X);

printf("Digite o segundo lado: ");
scanf("%d", &Y);

printf("Digite o terceiro lado: ");
scanf("%d", &Z);

    
if (X + Y > Z && X + Z > Y && Y + Z > X) {    
if (X == Y && Y == Z) 
    
{ printf("Triangulo equilatero.");
 } else if (X == Y || X == Z || Y == Z) {  
    
printf("Triangulo isosceles.");

    
} else {
printf("Triangulo escaleno.");
}
        
} else {       
printf("Nao forma um triangulo.");
}

   
    
    return 0;
}
