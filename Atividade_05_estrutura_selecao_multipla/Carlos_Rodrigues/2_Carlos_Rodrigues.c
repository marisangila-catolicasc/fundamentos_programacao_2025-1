#include <stdio.h>
int main() {

int opcao;

    printf("Confira este menu com a lista de todos os estados brasileiros.\n");
    printf("1 - Acre\n2 - Alagoas\n3 - Amapá\n4 - Amazonas\n5 - Bahia\n6 - Ceará\n");
    printf("7 - Espírito Santo\n8 - Goiás\n9 - Maranhão\n10 - Mato Grosso\n");
    printf("11 - Mato Grosso do Sul\n12 - Minas Gerais\n13 - Pará\n14 - Paraíba\n");
    printf("15 - Paraná\n16 - Pernambuco\n17 - Piauí\n18 - Rio de Janeiro\n");
    printf("19 - Rio Grande do Norte\n20 - Rio Grande do Sul\n21 - Rondônia\n");
    printf("22 - Roraima\n23 - Santa Catarina\n24 - São Paulo\n25 - Sergipe\n26 - Tocantins\n");

    printf("Escolha um estado e digite o numero do dele: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: case 3: case 4: case 13: case 21: case 22: case 26:
            printf("Regiao: Norte\n");
            break;

        case 2: case 5: case 6: case 9: case 14: case 16: case 17: case 19: case 25:
            printf("Regiao: Nordeste\n");
            break;

        case 8: case 10: case 11:
            printf("Regiao: Centro-Oeste\n");
            break;

        case 7: case 12: case 18: case 24:
            printf("Regiao: Sudeste\n");
            break;

        case 15: case 20: case 23:
            printf("Regiao: Sul\n");
            break;

      default:
            printf("Opcao invalida\n");
            break;
    }
    return 0; 
}
