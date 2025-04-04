#include <stdio.h>

int main() {
    int estado;

    printf("Escolha um estado brasileiro pelo número:\n");
    printf("1 - Acre\n2 - Alagoas\n3 - Amapá\n4 - Amazonas\n5 - Bahia\n6 - Ceará\n");
    printf("7 - Distrito Federal\n8 - Espírito Santo\n9 - Goiás\n10 - Maranhão\n");
    printf("11 - Mato Grosso\n12 - Mato Grosso do Sul\n13 - Minas Gerais\n14 - Pará\n");
    printf("15 - Paraíba\n16 - Paraná\n17 - Pernambuco\n18 - Piauí\n19 - Rio de Janeiro\n");
    printf("20 - Rio Grande do Norte\n21 - Rio Grande do Sul\n22 - Rondônia\n23 - Roraima\n");
    printf("24 - Santa Catarina\n25 - São Paulo\n26 - Sergipe\n27 - Tocantins\n");

    printf("\nDigite o número do estado: ");
    scanf("%d", &estado);

    switch (estado) {
        case 1: case 3: case 4: case 14: case 22: case 23: case 27:
            printf("Região: Norte\n");
            break;
        case 2: case 5: case 6: case 10: case 15: case 17: case 18: case 20: case 26:
            printf("Região: Nordeste\n");
            break;
        case 7: case 9: case 11: case 12:
            printf("Região: Centro-Oeste\n");
            break;
        case 8: case 13: case 19: case 25:
            printf("Região: Sudeste\n");
            break;
        case 16: case 21: case 24:
            printf("Região: Sul\n");
            break;
        default:
            printf("Estado inválido\n");
    }

    return 0;