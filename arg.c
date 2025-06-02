#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    int a, b , soma = 0;

    printf("%s", argv[0]);
    printf("%s", argv[1]);
    printf("%s", argv[2]);

    a = atoi(argv[1]);
    b = atoi(argv[2]);
    soma = a + b;

    printf("Soma : %i ", soma);
    printf("\n");

}