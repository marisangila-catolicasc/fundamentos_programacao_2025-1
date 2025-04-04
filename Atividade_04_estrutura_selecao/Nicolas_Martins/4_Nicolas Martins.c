

int main(void) {
    int num1, num2; 

  printf("Digite um numero: ");
  scanf("%d", &num1);

  printf("Digite outro numero: ");
  scanf("%d", &num2);

  if(num1 > num2) {
    printf( " O maior numero eh: %d", num1);

  } else if(num2 > num1)  
    printf( " O maior numero eh: %d", num2);
   else 
    printf("Os números possuem mesmo valor");


   return 0;
  }