#include <stdio.h>

int main() {
    int numero;


    printf("[1] - Acre (AC)\n");
    printf("[2] - Alagoas (AL)\n");
    printf("[3] - Amapá (AP)\n");
    printf("[4] - Amazonas (AM)\n");
    printf("[5] - Bahia (BA)\n");
    printf("[6] - Ceará (CE)\n");
    printf("[7] - Distrito Federal (DF)\n");
    printf("[8] - Espírito Santo (ES)\n");
    printf("[9] - Goiás (GO)\n");
    printf("[10] - Maranhão (MA)\n");
    printf("[11] - Mato Grosso (MT)\n");
    printf("[12] - Mato Grosso do Sul (MS)\n");
    printf("[13] - Minas Gerais (MG)\n");
    printf("[14] - Pará (PA)\n");
    printf("[15] - Paraíba (PB)\n");
    printf("[16] - Paraná (PR)\n");
    printf("[17] - Pernambuco (PE)\n");
    printf("[18] - Piauí (PI)\n");
    printf("[19] - Rio de Janeiro (RJ)\n");
    printf("[20] - Rio Grande do Norte (RN)\n");
    printf("[21] - Rio Grande do Sul (RS)\n");
    printf("[22] - Rondônia (RO)\n");
    printf("[23] - Roraima (RR)\n");
    printf("[24] - Santa Catarina (SC)\n");
    printf("[25] - São Paulo (SP)\n");
    printf("[26] - Sergipe (SE)\n");
    printf("[27] - Tocantins (TO)\n");


    printf("Digite o numero de um estado para localizar a região solicitada:\n");
    scanf("%d", &numero);
    switch (numero) 
    {
        case 16:
        case 21:
        case 24:
        printf("Está localizado na região Sul!\n");
        break;

        case 25:
        case 19:
        case 13:
        case 8:
        printf("Está localizado na região região Sudeste!\n");
        break;

        case 7:
        case 9:
        case 11:
        case 12:
        printf("Está localizado na região região Centro-Oeste!\n");
        break;

        case 2:
        case 5:
        case 6:
        case 10:
        case 15:
        case 17:
        case 18:
        case 20:
        case 26:
        printf("Está localizado na região região Nordeste!\n");
        break;

        case 1:
        case 3:
        case 4:
        case 14:
        case 22:
        case 23:
        case 27:
        printf("Está localizado na região região Norte!\n");
        break;
    }
}