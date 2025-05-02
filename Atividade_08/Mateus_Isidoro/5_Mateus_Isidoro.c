int main() {
  int vetorA[5] = {5,10,6,9,11};
  int vetorB[5] = {13,8,9,6,23};
  int vetorC[5];
  for (int i = 0; i < 5; i++) {
   vetorC[i] = vetorA[i] + vetorB[i];
   printf("%d + %d = %d\n", vetorA[i], vetorB[i], vetorC[i]);
  }
  return 0;
}