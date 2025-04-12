int main() {
    int numero;


    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

   
    for (int i = 0; i <= numero; i += 5) {
        printf("%d", i);
        
      
        if (i + 5 <= numero) {
            printf(",");
        }
    }

    printf("\n"); 

    return 0;
}