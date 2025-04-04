#include <stdio.h>

int main() {
    int estado;
    printf("Escolha um estado brasileiro pelo numero:\n");
    printf("1 - Acre\n2 - Alagoas\n3 - Amapa\n4 - Amazonas\n5 - Bahia\n6 - Ceara\n7 - Distrito Federal\n");
    printf("8 - Espirito Santo\n9 - Goias\n10 - Maranhao\n11 - Mato Grosso\n12 - Mato Grosso do Sul\n13 - Minas Gerais\n");
    printf("14 - Para\n15 - Paraiba\n16 - Parana\n17 - Pernambuco\n18 - Piaui\n19 - Rio de Janeiro\n");
    printf("20 - Rio Grande do Norte\n21 - Rio Grande do Sul\n22 - Rondonia\n23 - Roraima\n24 - Santa Catarina\n");
    printf("25 - Sao Paulo\n26 - Sergipe\n27 - Tocantins\n");

    scanf("%d", &estado);

    switch (estado) {
        case 1: case 3: case 4: case 14: case 22: case 23: case 27:
            printf("Regiao: Norte\n");
            break;
        case 2: case 5: case 6: case 10: case 15: case 17: case 18: case 26:
            printf("Regiao: Nordeste\n");
            break;
        case 9: case 11: case 12:
            printf("Regiao: Centro-Oeste\n");
            break;
        case 8: case 13: case 19: case 25:
            printf("Regiao: Sudeste\n");
            break;
        case 16: case 20: case 21: case 24:
            printf("Regiao: Sul\n");
            break;
        default:
            printf("Estado invalido!\n");
    }

    return 0;
}