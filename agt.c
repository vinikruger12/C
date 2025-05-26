#include <stdio.h>
#include "agt.h"

int fatorial(int fat){
    int i = (fat - 1);
    for(i;i >= 1;i--){
        fat *= i;
    }

    return fat;

}