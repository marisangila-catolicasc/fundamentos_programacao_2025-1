#include <stdio.h>

int main() {
    char *estado1 = "1. Acre - Norte";
    char *estado2 = "2. Alagoas - Nordeste";
    char *estado3 = "3. Amapá - Norte";
    char *estado4 = "4. Amazonas - Norte";
    char *estado5 = "5. Bahia - Nordeste";
    char *estado6 = "6. Ceará - Nordeste";
    char *estado7 = "7. Espírito Santo - Sudeste";
    char *estado8 = "8. Goiás - Centro-Oeste";
    char *estado9 = "9. Maranhão - Nordeste";
    char *estado10 = "10. Mato Grosso - Centro-Oeste";
    char *estado11 = "11. Mato Grosso do Sul - Centro-Oeste";
    char *estado12 = "12. Minas Gerais - Sudeste";
    char *estado13 = "13. Pará - Norte";
    char *estado14 = "14. Paraíba - Nordeste";
    char *estado15 = "15. Paraná - Sul";
    char *estado16 = "16. Pernambuco - Nordeste";
    char *estado17 = "17. Piauí - Nordeste";
    char *estado18 = "18. Rio de Janeiro - Sudeste";
    char *estado19 = "19. Rio Grande do Norte - Nordeste";
    char *estado20 = "20. Rio Grande do Sul - Sul";
    char *estado21 = "21. Rondônia - Norte";
    char *estado22 = "22. Roraima - Norte";
    char *estado23 = "23. Santa Catarina - Sul";
    char *estado24 = "24. São Paulo - Sudeste";
    char *estado25 = "25. Sergipe - Nordeste";
    char *estado26 = "26. Tocantins - Norte";

    char *estados[] = {
        estado1, estado2, estado3, estado4, estado5, estado6, estado7, estado8,
        estado9, estado10, estado11, estado12, estado13, estado14, estado15,
        estado16, estado17, estado18, estado19, estado20, estado21, estado22,
        estado23, estado24, estado25, estado26
    };

    int total = 26, escolha;

    for (int i = 0; i < total; i++) {
        printf("%s\n", estados[i]);
    }

    printf("\nDigite o número do estado: ");
    scanf("%d", &escolha);

    printf(escolha >= 1 && escolha <= total ? "\n%s\n" : "\nNúmero inválido.\n", estados[escolha - 1]);

    return 0;
}