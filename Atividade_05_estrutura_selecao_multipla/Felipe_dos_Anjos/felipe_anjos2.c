#include <stdio.h>

int main() {
    char *estado1 = "1. Acre - Região Norte";
    char *estado2 = "2. Alagoas - Região Nordeste";
    char *estado3 = "3. Amapá - Região Norte";
    char *estado4 = "4. Amazonas - Região Norte";
    char *estado5 = "5. Bahia - Região Nordeste";
    char *estado6 = "6. Ceará - Região Nordeste";
    char *estado7 = "7. Espírito Santo - Região Sudeste";
    char *estado8 = "8. Goiás - Região Centro-Oeste";
    char *estado9 = "9. Maranhão - Região Nordeste";
    char *estado10 = "10. Mato Grosso - Região Centro-Oeste";
    char *estado11 = "11. Mato Grosso do Sul - Região Centro-Oeste";
    char *estado12 = "12. Minas Gerais - Região Sudeste";
    char *estado13 = "13. Pará - Região Norte";
    char *estado14 = "14. Paraíba - Região Nordeste";
    char *estado15 = "15. Paraná - Região Sul";
    char *estado16 = "16. Pernambuco - Região Nordeste";
    char *estado17 = "17. Piauí - Região Nordeste";
    char *estado18 = "18. Rio de Janeiro - Região Sudeste";
    char *estado19 = "19. Rio Grande do Norte - Região Nordeste";
    char *estado20 = "20. Rio Grande do Sul - Região Sul";
    char *estado21 = "21. Rondônia - Região Norte";
    char *estado22 = "22. Roraima - Região Norte";
    char *estado23 = "23. Santa Catarina - Região Sul";
    char *estado24 = "24. São Paulo - Região Sudeste";
    char *estado25 = "25. Sergipe - Região Nordeste";
    char *estado26 = "26. Tocantins - Região Norte";

    char *estados[] = {
        estado1, estado2, estado3, estado4, estado5, estado6, estado7, estado8,
        estado9, estado10, estado11, estado12, estado13, estado14, estado15,
        estado16, estado17, estado18, estado19, estado20, estado21, estado22,
        estado23, estado24, estado25, estado26
    };

    int total = 26, escolha;

    printf(" Lista de Estados Brasileiros \n\n");

    for (int i = 0; i < total; i++) {
        printf("%s\n", estados[i]);
    }

    printf("\nDigite o número correspondente ao estado desejado: ");
    scanf("%d", &escolha);

    if (escolha >= 1 && escolha <= total) {
        printf("\nSelecionou: %s\n", estados[escolha - 1]);
    } else {
        printf("\nNúmero inválido. Tente novamente.\n");
    }

    return 0;
}
