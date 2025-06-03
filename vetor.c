#include <stdio.h>

int mini(int a, int b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}

int maxi(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

int main(){  
    int v[10];
    int menor;

    for(int i = 0; i < 10;i++){
        scanf("%i", &v[i]);
    }

    menor = v[0];
    for(int i = 0; i < 10;i++){
        menor = mini(v[i], menor);   
    }




    printf("\n");

    printf("O menor número é o %i \n", menor);


     for(int i = 0; i < 10; i++){

        for(int j = i + 1; j < 10; j++){
            int menor_entre = mini(v[i], v[j]);
            if(menor_entre != v[i]){
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }

    }

    for(int i = 0;i < 10;i++){
        printf("%i ", v[i]);
    }
    printf("\n");
    return 0;
}