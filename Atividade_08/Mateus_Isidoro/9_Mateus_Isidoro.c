int main() {
  int vetorA[5] = {5,10,6,9,11};
  int vetorB[5] = {13,8,9,6,23};
  int vetorC[10];
  for (int i = 0; i < 11; i+=2) {
   if (i % 2){
      vetorC[i] = vetorA[i];
   }else{
      vetorC[i+1] = vetorB[i];
  }
   printf("%d ", vetorC[i]);
  }
  // for (int i = 0; i < 10; i++) {
  //  printf("%d ", vetorC[i]);
  // }
  return 0;
}