#include <stdio.h>
#include <math.h>

int main(){
    for(int i = 50;i <= 150;i++){
        printf("%i graus Celsius são %.1f\n", i, (i * 1.8 + 32));
    }
}