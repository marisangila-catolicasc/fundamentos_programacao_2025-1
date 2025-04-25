#include <stdio.h>


int main(int argc, char const * argv[]){
    int i = 0;
    int result = 0;
    for(i;i<100;i++){
        result = result+i;
    }
    printf("%d",result);
}