#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    
    int main() {
        
      int numero, sorteado;
        
    printf("Digite um numero de 0 a 100: "); // Aqui basicamente o usuario digita um numero de 0 a 100, no caso o         número que o programa vai tentar acertar.
    scanf("%d", &numero);
    
    srand(time(NULL));
    
    do {
    sorteado = rand() % 101;
    printf("Numero sorteado: %d\n", sorteado); // Aqui o programa vai tentar acertar o número que o usuario digitou,      e vai imprimir o número sorteado até acertar.
    } while (sorteado != numero);
    
    printf("Acertou! O numero era %d\n", numero);
    
      return 0;
    }
    
    