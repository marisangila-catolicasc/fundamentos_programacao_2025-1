#include <stdio.h>

int main() {
    int escolha;

    printf("1 - Acre\n");
    printf("2 - Alagoas\n");
    printf("3 - Amazonas\n");
    printf("4 - Amapá\n");
    printf("5 - Bahia\n");
    printf("6 - Ceará\n");
    printf("7 - Espírito Santo\n");
    printf("8 - Goiás\n");
    printf("9 - Maranhão\n");
    printf("10 - Mato Grosso\n");
    printf("11 - Mato Grosso do Sul\n");
    printf("12 - Minas Gerais\n");
    printf("13 - Pará\n");
    printf("14 - Paraíba\n");
    printf("15 - Paraná\n");
    printf("16 - Pernambuco\n");
    printf("17 - Piauí\n");
    printf("18 - Rio de Janeiro\n");
    printf("19 - Rio Grande do Norte\n");
    printf("20 - Rio Grande do Sul\n");
    printf("21 - Rondônia\n");
    printf("22 - Roraima\n");
    printf("23 - Santa Catarina\n");
    printf("24 - São Paulo\n");
    printf("25 - Sergipe\n");
    printf("26 - Tocantins\n");

    printf("Digite o numero do estado desejado: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Acre está na regiao norte do Brasil.\n");
            break;
        case 2:
            printf("Alagoas está na regiao nordeste do Brasil.\n");
            break;
        case 3:
            printf("Amazonas está na regiao norte do Brasil.\n");
            break;
        case 4:
            printf("Amapá está na regiao norte do Brasil.\n");
            break;
        case 5:
            printf("Bahia está na regiao nordeste do Brasil.\n");
            break;
        case 6:
            printf("Ceará está na regiao nordeste do Brasil.\n");
            break;
        case 7:
            printf("Espírito Santo está na regiao sudeste do Brasil.\n");
            break;
        case 8:
            printf("Goiás está na regiao centro-oeste do Brasil.\n");
            break;
        case 9:
            printf("Maranhão está na regiao nordeste do Brasil.\n");
            break;
        case 10:
            printf("Mato Grosso está na regiao centro-oeste do Brasil.\n");
            break;
        case 11:
            printf("Mato Grosso do Sul está na regiao centro-oeste do Brasil.\n");
            break;
        case 12:
            printf("Minas Gerais está na regiao sudeste do Brasil.\n");
            break;
        case 13:
            printf("Pará está na regiao norte do Brasil.\n");
            break;
        case 14:
            printf("Paraíba está na regiao nordeste do Brasil.\n");
            break;
        case 15:
            printf("Paraná está na regiao sul do Brasil.\n");
            break;
        case 16:
            printf("Pernambuco está na regiao nordeste do Brasil.\n");
            break;
        case 17:
            printf("Piauí está na regiao nordeste do Brasil.\n");
            break;
        case 18:
            printf("Rio de Janeiro está na regiao sudeste do Brasil.\n");
            break;
        case 19:
            printf("Rio Grande do Norte está na regiao nordeste do Brasil.\n");
            break;
        case 20:
            printf("Rio Grande do Sul está na regiao sul do Brasil.\n");
            break;
        case 21:
            printf("Rondônia está na regiao norte do Brasil.\n");
            break;
        case 22:
            printf("Roraima está na regiao norte do Brasil.\n");
            break;
        case 23:
            printf("Santa Catarina está na regiao sul do Brasil.\n");
            break;
        case 24:
            printf("São Paulo está na regiao sudeste do Brasil.\n");
            break;
        case 25:
            printf("Sergipe está na regiao nordeste do Brasil.\n");
            break;
        case 26:
            printf("Tocantins está na regiao norte do Brasil.\n");
            break;
        default:
            printf("Valor inválido! Existem 26 estados.\n");
            break;
    }

    return 0;
}
