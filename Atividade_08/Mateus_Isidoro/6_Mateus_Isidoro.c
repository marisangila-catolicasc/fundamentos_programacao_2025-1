int main() {
  int vetor[20] = {5,10,6,9,11,15,18,20,22,25,28,30,33,35,38,40,42,45,48,50};
  int par = 0;
  for (int i = 0; i < 20; i++) {
   if(0 == vetor[i]%2){
      par++;
      printf("par: %d\n", vetor[i]);
   }
  }
   printf("Quantidade de pares: %d\n", par);
  return 0;
}