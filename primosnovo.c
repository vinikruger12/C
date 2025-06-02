#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int a){
    bool sera = true;   
    for(int i = (a-1);i >= 2;i--){
        if(a % i == 0){
            sera = false;
        }
    }

    return sera;
}


int main(){
    int n1, n2;
    scanf("%i %i", &n1, &n2);

    for(int i = n1; i <= n2;i++){
       if(ehPrimo(i)){
        printf("%i ", i);
       }
    }
    printf("\n");
    return 0;
}