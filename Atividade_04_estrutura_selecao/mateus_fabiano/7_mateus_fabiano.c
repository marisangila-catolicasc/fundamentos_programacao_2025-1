#include <stdio.h>
int main(){

    int X, Y, Z;

    printf("Digite o valor de X\n");
    scanf("%d", &X);

    printf("Digite o valor de Y\n");
    scanf("%d", &Y);

    printf("Digite o valor de Z\n");
    scanf("%d", &Z);

    if(X==Y && X==Z && Y==Z){
        printf("Equilatero");
    } else if( X==Y || X==Z || Y==Z){
        printf("Isosceles");
    } else{
        printf("Escaleno");
    }

    return 0;

}