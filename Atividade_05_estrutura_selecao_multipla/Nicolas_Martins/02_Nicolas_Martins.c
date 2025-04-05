#include <stdio.h>

int main() {
    int Estados;
    printf("[1] - SP\n");
    printf("[2] - RJ\n");
    printf("[3] - MG\n");
    printf("[4] - ES\n");
    printf("[5] - SC\n");
    printf("[6] - RS\n");
    printf("[7] - PR\n");
    printf("[8] - MS\n");
    printf("[9] - GO\n");
    printf("[10] - MT\n");
    printf("[11] - TO\n");
    printf("[12] - PA\n");
    printf("[13] - RO\n");
    printf("[14] - AC\n");
    printf("[15] - AM\n");
    printf("[16] - RR\n");
    printf("[17] - AP\n");
    printf("[18] - MA\n");
    printf("[19] - PI\n");
    printf("[20] - CE\n");
    printf("[21] - RN\n");
    printf("[22] - PB\n");
    printf("[23] - PE\n");
    printf("[24] - AL\n");
    printf("[25] - SE\n");
    printf("[26] - BA\n");
    printf("[27] - DF\n");

    printf("Digite o numero do seu estado: ");
    scanf("%d", &Estados);

    switch (Estados) {
        case 1:
        case 2:
        case 3:
        case 4:
            printf("Sua região é Sudeste\n");
            break;
        case 5:
        case 6:
        case 7:
            printf("Sua região é Sul\n");
            break;
        case 8:
        case 9:
        case 10:
        case 27:
            printf("Sua região é Centro-Oeste\n");
            break;
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
            printf("Sua região é Norte\n");
            break;
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
            printf("Sua região é Nordeste\n");
            break;
        default:
            printf("Estado inválido.\n");
    }

    return 0;
}
