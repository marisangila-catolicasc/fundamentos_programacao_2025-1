#include <stdio.h>

int main() {
    float cambio, dolares, reais;
    
    printf("Qual é o cambio de hj?\n");
    scanf("%f", &cambio);
    
    printf("Quer quantos dolares?\n");
    scanf("%f", &dolares);
    
    reais = dolares * cambio;
    
    printf("Tu precisa de ");
    printf("%.2f", reais);
    printf(" reais.\n");

    return 0;
}
