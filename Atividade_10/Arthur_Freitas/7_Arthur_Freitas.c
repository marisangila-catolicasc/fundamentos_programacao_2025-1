#include <stdio.h>

int verifica_primo(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) return 0;
    }
    
    return 1;

}
int main() {
    printf("%d\n", verifica_primo(7));
    
    return 0;
}