#include <stdio.h>

int main() {
    char *estados[] = {
        "1. Acre - Norte", "2. Alagoas - Nordeste", "3. Amapá - Norte", 
        "4. Amazonas - Norte", "5. Bahia - Nordeste", "6. Ceará - Nordeste", 
        "7. Espírito Santo - Sudeste", "8. Goiás - Centro-Oeste", 
        "9. Maranhão - Nordeste", "10. Mato Grosso - Centro-Oeste", 
        "11. Mato Grosso do Sul - Centro-Oeste", "12. Minas Gerais - Sudeste", 
        "13. Pará - Norte", "14. Paraíba - Nordeste", "15. Paraná - Sul", 
        "16. Pernambuco - Nordeste", "17. Piauí - Nordeste", 
        "18. Rio de Janeiro - Sudeste", "19. Rio Grande do Norte - Nordeste", 
        "20. Rio Grande do Sul - Sul", "21. Rondônia - Norte", 
        "22. Roraima - Norte", "23. Santa Catarina - Sul", 
        "24. São Paulo - Sudeste", "25. Sergipe - Nordeste", 
        "26. Tocantins - Norte"
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