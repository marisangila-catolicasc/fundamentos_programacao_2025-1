#include <stdio.h>

int main(void) {
  int N1, N2, escolha=0;
   while (escolha != '5'){
    printf("Digite o primeiro número:\n");
    scanf("%d", &N1);
    printf("Digite o segundo número:\n");
    scanf("%d", &N2);
    printf("Escolha uma das opções abaixo:  \n |1 - Somar|\n |2 - Subtrair|\n |3 - Multiplicar|\n |4 - Dividir|\n |5 - Sair|\n");
    scanf("%d", &escolha);
    switch (escolha){
      case 1:
        printf("A soma dos números é: %d\n", N1 + N2);
        break;
      case 2:
        printf("A subtração dos números é: %d\n", N1 - N2);
        break;
      case 3:
        printf("A multiplicação dos números é: %d\n", N1 * N2);
        break;
      case 4:
        printf("A divisão dos números é: %d\n", N1 / N2);
        break; 
      case 5:
        printf("Saindo...\n");
    }
    }
      return 0;

}