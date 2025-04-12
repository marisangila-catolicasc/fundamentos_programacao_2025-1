#include <stdio.h>

int main() {
  int quad;
  for(int i = 15; i <=200; i++) {
    quad = i * i;
    printf("%d\n", quad);
  }
  return 0;
}