#include <stdio.h>

int main() {
    char* estados[] = {
        "Acre",
        "Alagoas",
        "Amapá",
        "Amazonas",
        "Bahia",
        "Ceará",
        "Distrito Federal",
        "Espírito Santo",
        "Goiás",
        "Maranhão",
        "Mato Grosso",
        "Mato Grosso do Sul",
        "Minas Gerais",
        "Pará",
        "Paraíba",
        "Paraná",
        "Pernambuco",
        "Piauí",
        "Rio de Janeiro",
        "Rio Grande do Norte",
        "Rio Grande do Sul",
        "Rondônia",
        "Roraima",
        "Santa Catarina",
        "São Paulo",
        "Sergipe",
        "Tocantins"
    };

    int opcao;

    printf("Escolha um estado pelo número:\n");
    for (int i = 0; i < 27; i++) {
        printf("%d. %s\n", i + 1, estados[i]);
    }

    printf("\nDigite o número do estado: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: case 3: case 4: case 14: case 22: case 23: case 27:
            printf("\nEstado: %s\nRegião: Norte\n", estados[opcao - 1]);
            break;
        case 2: case 5: case 6: case 10: case 15: case 17: case 18: case 20: case 26:
            printf("\nEstado: %s\nRegião: Nordeste\n", estados[opcao - 1]);
            break;
        case 7: case 9: case 11: case 12:
            printf("\nEstado: %s\nRegião: Centro-Oeste\n", estados[opcao - 1]);
            break;
        case 8: case 13: case 19: case 25:
            printf("\nEstado: %s\nRegião: Sudeste\n", estados[opcao - 1]);
            break;
        case 16: case 21: case 24:
            printf("\nEstado: %s\nRegião: Sul\n", estados[opcao - 1]);
            break;
        default:
            printf("\nOpção inválida.\n");
    }

    return 0;
}

