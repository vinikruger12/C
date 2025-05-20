#include <stdio.h>
#include <stdbool.h>

bool primo(int a){
    bool primas = true;
    for(int i = (a-1);i >= 2;i--){
        if(a % i == 0){
            primas = false;
        }
    }

    return primas;
}

void divs(int a){
      int i;  
    for(i = a;i > 0;i--){
        if(a % i == 0){
           printf("%i ", i);
        }
        
    }

}

int main(){
    int a;
    scanf("%i", &a);
            printf("%i ", a);
            divs(a);

    if(primo(a)){
        printf("Esse número é primo \n");
    }else{
        printf("Esse número não é primo \n");
    }

    printf("\n");
    return 0;
}