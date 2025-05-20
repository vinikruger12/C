#include <stdio.h>
#include <stdbool.h>

int main(){
    int a, b, c = 0;
    scanf("%i%i", &a, &b);

    bool ver = true;

    for(int i = a;i < b;i++){
        for(int j = i;j >=2;j--){
            if(i % j == 0){
                ver = false;
                break;
            }
        }
    if(ver){
        c++;
    }
    }

      printf("%i\n", c);
    return 0;
}