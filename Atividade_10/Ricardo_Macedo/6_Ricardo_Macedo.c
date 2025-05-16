#include <stdio.h>

int verifica_par_impar(int numero) {
    if (numero % 2 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int numero1 = 8;
    int numero2 = 7;

    printf("%d é par? %s\n", numero1, verifica_par_impar(numero1) ? "Sim" : "Não");
    printf("%d é par? %s\n", numero2, verifica_par_impar(numero2) ? "Sim" : "Não");

    return 0;
}
