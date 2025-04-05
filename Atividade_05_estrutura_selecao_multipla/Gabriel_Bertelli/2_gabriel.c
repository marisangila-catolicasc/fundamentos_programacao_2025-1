#include <stdio.h>

int main(int argc, char const *argv[])  {
    
    int opcao;

    printf("Digite uma opção: \n");
    printf("[1] - Acre\n");
    printf("[2] - Alagoas\n");
    printf("[3] - Amapá\n");
    printf("[4] - Amazonas\n");
    printf("[5] - Bahia\n");
    printf("[6] - Ceará\n");
    printf("[7] - Espírito Santo\n");
    printf("[8] - Goiás\n");
    printf("[9] - Maranhão\n");
    printf("[10] - Mato Grosso\n");
    printf("[11] - Mato Grosso do Sul\n");
    printf("[12] - Minas Gerais\n");
    printf("[13] - Pará\n");
    printf("[14] - Paraíba\n");
    printf("[15] - Paraná\n");
    printf("[16] - Pernambuco\n");
    printf("[17] - Piauí\n");
    printf("[18] - Rio de Janeiro\n");
    printf("[19] - Rio Grande do Norte\n");
    printf("[20] - Rio Grande do Sul\n");
    printf("[21] - Rondônia\n");
    printf("[22] - Roraima\n");
    printf("[23] - Santa Catarina\n");
    printf("[24] - São Paulo\n");
    printf("[25] - Sergipe\n");
    printf("[26] - Tocantins\n");
    printf("[27] - Distrito Federal\n");

    scanf("%d", &opcao);    

    switch (opcao) {
        case 1: case 3: case 4: case 13: case 21: case 22: case 26:
            printf("Região Norte\n");
            break;

        case 2: case 5: case 6: case 9: case 14: case 16: case 17: case 19: case 25:
            printf("Região Nordeste\n");
            break;

        case 8: case 10: case 11: case 27:
            printf("Região Centro-Oeste\n");
            break;

        case 7: case 12: case 18: case 24:
            printf("Região Sudeste\n");
            break;

        case 15: case 20: case 23:
            printf("Região Sul\n");
            break;

        default:
            printf("A opção digitada é inválida\n");
            break;
    }

    return 0;
}
