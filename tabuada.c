#include <stdio.h>

int main(){
    int a = 10;
    for(int i = 1; i <=10;i++){
        printf("%i x %i : ",a, i);
        printf("%i \n", a*i);
    }
    printf("\n");
}