#include <stdio.h>

int main() {
int idade;
    

    printf("Digite sua idade\n");
scanf("%d", &idade);
    

    if (idade < 18) {
    printf("Classe Eleitoral: Não Eleitor.\n");
    }
    else if (idade <= 65) {
    printf("Classe Eleitoral: Eleitor Obrigatório.\n");
    }
    else {
    printf("Classe Eleitoral: Eleitor Facultativo.\n");
    }
    
    return 0;
}
// Compilador: gcc 5_BrunoSartortt.c -o 5_BrunoSartortt.exe
// Executador: .\5_BrunoSartortt.exe