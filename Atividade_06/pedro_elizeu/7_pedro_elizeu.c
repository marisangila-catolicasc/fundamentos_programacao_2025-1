    #include <stdio.h>

    int main() {
        int i;
        float numero, soma = 0, media;

        for(i = 0; i < 8; i++) {
            printf("Digite o %dº número: ", i + 1);
            scanf("%f", &numero);
            soma += numero;
        }

        media = soma / 8;
        printf("Media dos números resultou em: %.2f\n", media);

        return 0;
    }
