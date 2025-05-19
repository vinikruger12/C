#include <stdio.h>
#include <math.h>

int main(){
    float soma = 0;
    float j = 1;
    for(float i = 1;i <= 99;i = i+2){
         soma += i / j;
        j++;
    }

    printf("%f \n", soma);

}