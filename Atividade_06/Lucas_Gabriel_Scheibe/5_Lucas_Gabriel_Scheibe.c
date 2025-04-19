#include <stdio.h>

int num = 0;

int main(int argc, char const *argv[]) {

    for (int i = 0; i <= 100; i++){
        num = num + i;
    }

    printf("O total da soma é: %d\n", num);

    return 0;
}