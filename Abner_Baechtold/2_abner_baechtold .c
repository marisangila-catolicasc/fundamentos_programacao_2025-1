#include <stdio.h>

int main() {
    int opcao;
    printf("1 - Acre\n");
    printf("2 - Alagoas\n");
    printf("3 - Amapá\n");
    printf("4 - Amazonas\n");
    printf("5 - Bahia\n");
    printf("6 - Ceará\n");
    printf("7 - Distrito Federal\n");
    printf("8 - Espírito Santo\n");
    printf("9 - Goiás\n");
    printf("10 - Maranhão\n");
    printf("11 - Mato Grosso\n");
    printf("12 - Mato Grosso do Sul\n");
    printf("13 - Minas Gerais\n");
    printf("14 - Pará\n");
    printf("15 - Paraíba\n");
    printf("16 - Paraná\n");
    printf("17 - Pernambuco\n");
    printf("18 - Piauí\n");
    printf("19 - Rio de Janeiro\n");
    printf("20 - Rio Grande do Norte\n");
    printf("21 - Rio Grande do Sul\n");
    printf("22 - Rondônia\n");
    printf("23 - Roraima\n");
    printf("24 - Santa Catarina\n");
    printf("25 - São Paulo\n");
    printf("26 - Sergipe\n");
    printf("27 - Tocantins\n");
    printf("Digite o número do estado: ");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            printf("Acre pertence à região Norte.\n");
            break;
        case 2:
            printf("Alagoas pertence à região Nordeste.\n");
            break;
        case 3:
            printf("Amapá pertence à região Norte.\n");
            break;
        case 4:
            printf("Amazonas pertence à região Norte.\n");
            break;
        case 5:
            printf("Bahia pertence à região Nordeste.\n");
            break;
        case 6:
            printf("Ceará pertence à região Nordeste.\n");
            break;
        case 7:
            printf("Distrito Federal pertence à região Centro-Oeste.\n");
            break;
        case 8:
            printf("Espírito Santo pertence à região Sudeste.\n");
            break;
        case 9:
            printf("Goiás pertence à região Centro-Oeste.\n");
            break;
        case 10:
            printf("Maranhão pertence à região Nordeste.\n");
            break;
        case 11:
            printf("Mato Grosso pertence à região Centro-Oeste.\n");
            break;
        case 12:
            printf("Mato Grosso do Sul pertence à região Centro-Oeste.\n");
            break;
        case 13:
            printf("Minas Gerais pertence à região Sudeste.\n");
            break;
        case 14:
            printf("Pará pertence à região Norte.\n");
            break;
        case 15:
            printf("Paraíba pertence à região Nordeste.\n");
            break;
        case 16:
            printf("Paraná pertence à região Sul.\n");
            break;
        case 17:
            printf("Pernambuco pertence à região Nordeste.\n");
            break;
        case 18:
            printf("Piauí pertence à região Nordeste.\n");
            break;
        case 19:
            printf("Rio de Janeiro pertence à região Sudeste.\n");
            break;
        case 20:
            printf("Rio Grande do Norte pertence à região Nordeste.\n");
            break;
        case 21:
            printf("Rio Grande do Sul pertence à região Sul.\n");
            break;
        case 22:
            printf("Rondônia pertence à região Norte.\n");
            break;
        case 23:
            printf("Roraima pertence à região Norte.\n");
            break;
        case 24:
            printf("Santa Catarina pertence à região Sul.\n");
            break;
        case 25:
            printf("São Paulo pertence à região Sudeste.\n");
            break;
        case 26:
            printf("Sergipe pertence à região Nordeste.\n");
            break;
        case 27:
            printf("Tocantins pertence à região Norte.\n");
            break;
        default:
            printf("Número inválida!\n");
    }

    return 0;
}