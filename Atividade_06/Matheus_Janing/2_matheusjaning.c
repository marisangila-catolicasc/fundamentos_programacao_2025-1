#include <stdio.h>
int main(void){
    
    for(int i = 15; i < 200; i++){
        int square;
        square = i * i;    
        printf("%d X %d = %d\n", i, i, square);
    }
}

