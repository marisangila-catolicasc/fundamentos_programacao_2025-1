#include <stdio.h>
#define EQUILATERO x == y && x == z
#define ESCALENO x != y && x != z  
#define ISOCELES x == y || x == z || y == z
int main()
{
    int x, y, z;   
    printf("Digite um valor inteiro de x:\n");
    scanf("%d", &x);
    printf("Digite um valor inteiro de y:\n");
    scanf("%d", &y);
    printf("Digite um valor inteiro de z:\n");
    scanf("%d", &z);
    if(EQUILATERO){
        printf("Eh um triangulo equilatero");
    }else if(ESCALENO){
        printf("Eh um triangulo escaleno");
    }else if(ISOCELES){
        printf("Eh um triangulo isoceles");
    }
    return 0;
}
