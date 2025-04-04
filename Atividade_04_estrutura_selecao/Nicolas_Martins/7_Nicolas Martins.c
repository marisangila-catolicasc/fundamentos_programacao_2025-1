#include <stdio.h>

int main() {
    int X, Y, Z;

printf("Digite o valor do primeiro lado: ");
scanf("%d", &X);

printf("Digite o valor do segundo lado: ");
scanf("%d", &Y);

printf("Digite o valor do terceiro lado: ");
scanf("%d", &Z);

    
if (X + Y > Z && X + Z > Y && Y + Z > X) {    
if (X == Y && Y == Z) 
    
{ printf("O triangulo é equilatero.");
 } else if (X == Y || X == Z || Y == Z) {  
    
printf("O triangulo é isosceles.");

    
} else {
printf("O triangulo é escaleno.");
}
        
} else {       
printf("Nao há um triangulo.");
}

   
    
    return 0;
}
